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
	bool bLocal_28 = false;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = false;
	struct<4> Local_38[10];
	bool bLocal_79 = false;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = false;
	int iLocal_83[3] = { 0, 0, 0 };
	int iLocal_87[3] = { 0, 0, 0 };
	bool bLocal_91 = false;
	var uLocal_92 = 15;
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
	var uLocal_144 = 15;
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
	var uLocal_196 = 15;
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
	var uLocal_248 = 15;
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
	struct<4> Local_300[2];
	struct<7> Local_309[6];
	int iLocal_352 = 0;
	bool bLocal_353 = false;
	bool bLocal_354 = false;
	int iLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	bool bLocal_358 = false;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	vector3 vLocal_361 = { 0f, 0f, 0f };
	vector3 vLocal_364 = { 0f, 0f, 0f };
	int iLocal_367 = 0;
	bool bLocal_368 = false;
	int iLocal_369 = 0;
	float fLocal_370 = 0f;
	int iLocal_371 = 0;
	bool bLocal_372 = false;
	bool bLocal_373 = false;
	bool bLocal_374 = false;
	bool bLocal_375 = false;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	bool bLocal_382 = false;
	bool bLocal_383 = false;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	bool bLocal_386 = false;
	bool bLocal_387 = false;
	bool bLocal_388 = false;
	struct<22> Local_389[3];
	struct<6> Local_456 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_462[3];
	bool bLocal_481 = false;
	bool bLocal_482 = false;
	var uLocal_483 = 16;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	int iLocal_648[3] = { 0, 0, 0 };
	char* sLocal_652[3] = { NULL, NULL, NULL };
	bool bLocal_656 = false;
	int iLocal_657 = 0;
	bool bLocal_658 = false;
	bool bLocal_659 = false;
	int iLocal_660 = 0;
	bool bLocal_661 = false;
	bool bLocal_662 = false;
	int iLocal_663 = 0;
	bool bLocal_664 = false;
	int iLocal_665 = 0;
	char cLocal_666[48] = "";
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	char cLocal_672[48] = "";
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	int iLocal_678 = 0;
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	bLocal_354 = "FINPRA";
	vLocal_361 = { 0f, 0f, 0f };
	vLocal_364 = { 134.6909f, -1255.378f, 28.4875f };
	fLocal_370 = 0f;
	bLocal_373 = true;
	bLocal_482 = "BSPRAAU";
	iLocal_660 = -1;
	bLocal_662 = true;
	iLocal_665 = -1;
	StringCopy(&cLocal_666, "NONE", 24);
	StringCopy(&cLocal_672, "NONE", 24);
	UNK_0x7798376279BB5369(1);
	if (UNK_0x2EBF608FFE6CA406(19))
	{
		func_410();
		bLocal_353 = false;
		UNK_0xC92DB9682A650680("FHPRA_FAIL");
		func_408();
		func_396();
	}
	func_395();
	func_381();
	iLocal_360 = UNK_0x7D6CA5F52B3748BF(402.9022f, -1633.604f, 25.0472f, 315.6288f, -1558.814f, 38.7931f, 0, 1, 1, 1);
	func_380(27, 0);
	if (func_379())
	{
		func_378(409.6954f, -1567.046f, 28.2916f, 138.7093f, 1, 0);
	}
	UNK_0x9CBC55A05A07FC47(0);
	while (true)
	{
		UNK_0x1A6DFFFEEC27BF4F("M_STS", 0);
		if (func_377(UNK_0x16F2683693E537C9()))
		{
			func_370();
			func_367();
			func_362();
			UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
			switch (iLocal_80)
			{
				case 0:
					func_210();
					break;
				case 1:
					func_209();
					break;
				case 2:
					func_98();
					break;
				case 3:
					func_35();
					break;
				case 4:
					func_1();
					break;
			}
			if (iLocal_80 != 4)
			{
				if (iLocal_80 >= 0 && !bLocal_28)
				{
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	switch (iLocal_81)
	{
		case 0:
			UNK_0x790015DC92C918E2();
			UNK_0xA37A90C62806D848(1);
			func_33();
			if (!UNK_0xEA6BC48857E0AC4C(bLocal_353))
			{
				func_31(bLocal_353);
			}
			else
			{
				func_15(0);
			}
			iLocal_81 = 1;
			break;
		case 1:
			if (func_14())
			{
				if (func_13())
				{
					func_410();
				}
				else if (func_12(&uLocal_196, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)))
				{
					func_10(408.3364f, -1567.429f, 28.2723f, 128.2512f);
					func_8(471.5946f, -1412.737f, 28.1562f, 68.5531f);
				}
				UNK_0x536F1BE96C726C4B(372.9868f, -1623.531f, 28.2928f, 100f, 1, 0, 0, false);
				func_2();
				func_396();
			}
			break;
	}
}

void func_2()
{
	int iVar0;

	UNK_0x7AA3AFA47C4179D1(Local_456);
	func_5(&Local_456);
	func_4(&bLocal_358);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_3(&(Local_389[iVar0 /*22*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_5(&(Local_462[iVar0 /*6*/]));
		iVar0++;
	}
}

void func_3(bool bParam0)
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

void func_4(bool bParam0)
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

void func_5(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		if (func_7(*bParam0))
		{
			if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
			{
				if (func_6(UNK_0x16F2683693E537C9()))
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
			if (func_6(UNK_0x16F2683693E537C9()))
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

bool func_6(bool bParam0)
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

bool func_7(bool bParam0)
{
	if (func_6(bParam0))
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

void func_8(vector3 vParam0, float fParam3)
{
	func_9(&(Global_105187.f_2890), vParam0, fParam3);
}

void func_9(var uParam0, vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = fParam4;
}

void func_10(vector3 vParam0, float fParam3)
{
	if (func_11(Global_76862, 0f, 0f, 0f, 0))
	{
		Global_76862 = { vParam0 };
		Global_76865 = fParam3;
	}
}

bool func_11(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_12(var uParam0, struct<2> Param1, Vector3 vParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

bool func_13()
{
	if (Global_98744 == 7)
	{
		return true;
	}
	return false;
}

bool func_14()
{
	if (Global_3)
	{
		return true;
	}
	if (Global_98744 == 7 || Global_98744 == 8)
	{
		return true;
	}
	return false;
}

void func_15(int iParam0)
{
	int iVar0;

	if (Global_111638.f_9080 || func_30(0))
	{
		iVar0 = func_29();
		if (!func_16(iVar0))
		{
			return;
		}
		UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
		Global_98780 = iParam0;
	}
}

bool func_16(int iParam0)
{
	int iVar0;
	int iVar1;

	func_21();
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0 /*5*/];
	iVar1 = Global_76891.f_109[iVar0 /*4*/];
	func_20(iVar1, 1);
	UNK_0xAE08886CF478C471(UNK_0xD803B885F5E47A62(), 0);
	UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
	func_17(&(Global_111638.f_2358.f_539), iVar1);
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

void func_17(var uParam0, int iParam1)
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
			if (!func_19(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_18(&(uParam0->f_2296[iVar0]));
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

void func_18(var uParam0)
{
	*uParam0 = -15;
}

bool func_19(int iParam0, var uParam1, float fParam2)
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
			return func_19(8, uParam1, fParam2);
		case 10:
			return func_19(8, uParam1, fParam2);
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

void func_20(int iParam0, bool bParam1)
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

void func_21()
{
	Global_98779 = 1;
	if (UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_22())
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
			switch (func_22())
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
		if (func_27(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_26(UNK_0x16F2683693E537C9());
			if (func_25(iVar0) && (!func_24(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_25(Global_111638.f_2358.f_539.f_4321))
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
	return Global_41431 == iParam0;
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
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

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_28(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_29()
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

bool func_30(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_31(bool bParam0)
{
	func_32(bParam0);
	func_15(0);
}

void func_32(char* sParam0)
{
	if (!UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		if (UNK_0x4880526EC51D1C27(sParam0) <= 16)
		{
			StringCopy(&Global_76854, sParam0, 16);
			StringCopy(&Global_76858, "", 16);
			if (UNK_0x192DA571D9133D23())
			{
				UNK_0x32BB9995E509E19B();
			}
		}
	}
}

void func_33()
{
	func_34(&uLocal_356);
	func_34(&uLocal_357);
}

void func_34(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x661342B9651D16E2(*bParam0, false);
		UNK_0x142CC44DB769B57E(bParam0);
	}
}

void func_35()
{
	var uVar0;

	func_91(&Local_456, &uVar0, &bLocal_82, &uLocal_357, &uLocal_356, vLocal_364, 0, 0, 1090519040 /* Float: 8f */);
	switch (iLocal_81)
	{
		case 0:
			if (func_71(iLocal_80, bLocal_28))
			{
				if (UNK_0x13896FDECC859926("FHPRA_STOP"))
				{
					iLocal_385 = 0;
					iLocal_663 = 0;
					iLocal_81 = 1;
					UNK_0xC92DB9682A650680("FHPRA_STOP");
				}
			}
			break;
		case 1:
			func_70(&uLocal_356, vLocal_364, &bLocal_91, bLocal_82, &iLocal_355, &iLocal_384);
			if (bLocal_91 == 2)
			{
				if (func_12(&uLocal_196, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)))
				{
					UNK_0x1E69CBC4A01168BD(UNK_0xD803B885F5E47A62());
				}
			}
			if (func_58(Local_456, vLocal_364, &uLocal_356, bLocal_82, bLocal_91, &iLocal_663, &iLocal_385, &iLocal_379, &iLocal_380, &iLocal_355, 1090519040 /* Float: 8f */))
			{
				UNK_0x8B4C4CA774181102(5f, 6f, 4);
				func_55();
				func_50();
			}
			break;
		case 3:
			if (func_7(Local_456))
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_456, 0))
				{
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_456, -1);
				}
				else
				{
					func_49(Local_456, vLocal_364, 126.0705f, 0, 1);
					func_36(1, 1, 1);
					iLocal_81 = 1;
				}
			}
			break;
	}
}

void func_36(int iParam0, int iParam1, int iParam2)
{
	func_38(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
		UNK_0x2FB9A57162E54BAB(0f);
	}
	if (iParam1 == 1)
	{
		func_37(500, 0);
	}
}

void func_37(int iParam0, bool bParam1)
{
	if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
	{
		if (!UNK_0x7BCE0E6DD4A1F749())
		{
			UNK_0x82E51BCA72537B6C(iParam0);
		}
	}
	if (bParam1)
	{
		while (!UNK_0x0F1CCD77290EE12F())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_38(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;

	bVar0 = UNK_0xA30EC016B12C03E4();
	UNK_0xBC03DF6093E8E71F(bVar0, 0);
	UNK_0x98E4DC66A651C9FA(bVar0, bParam3, false);
	func_39(0, 1, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		UNK_0xBFE31971E49FA500(1);
		UNK_0x8BCB70EB440DED83(1);
	}
	UNK_0xA37A90C62806D848(1);
	if (iParam0 == 1)
	{
		UNK_0x5413873D3F67BF93(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((bLocal_37 != 0 && bLocal_37 != joaat("OBJECT")) && bLocal_37 != joaat("GADGET_PARACHUTE"))
		{
			if (func_6(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), bLocal_37, 0))
				{
					UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), bLocal_37, false);
				}
			}
		}
	}
	if (func_377(UNK_0x16F2683693E537C9()))
	{
		UNK_0x6E8BDA9057564534(UNK_0x16F2683693E537C9(), 0, 0);
	}
}

void func_39(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_48(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_47())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_46(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_48(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_46(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_44(UNK_0xD803B885F5E47A62())) && !func_41(UNK_0xD803B885F5E47A62(), 0)) && !func_40()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_44(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_40()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_41(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_42(-1, 0) == 8;
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

int func_42(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_43();
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

int func_43()
{
	return Global_1312745;
}

bool func_44(bool bParam0)
{
	if (func_41(bParam0, 0))
	{
		return true;
	}
	if (func_45())
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

bool func_45()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_46(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_47()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_48(int iParam0)
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

bool func_49(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (func_6(bParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = UNK_0xE82754C349C7B581(vParam1, &fVar1, 0, 0);
			if (bVar0)
			{
				vParam1.f_2 = fVar1;
			}
		}
		UNK_0xA47B46945FF6DE74(bParam0, vParam1, 1, 0, 0, iParam6);
		UNK_0xD8F6A53F4799FAFE(bParam0, bParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return true;
	}
	return false;
}

void func_50()
{
	UNK_0x790015DC92C918E2();
	func_53();
	func_51(0, 0);
	func_396();
}

void func_51(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_30(0) && Global_76868.f_1 == 1) && func_52(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_30(0))
	{
		iVar0 = func_29();
		iVar1 = Global_89496[iVar0 /*5*/];
		uVar2 = Global_76891.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_111638.f_9080)
			{
			}
			return;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 4);
		UNK_0x5D96D8530B3D0904(&Global_76870, true);
		Global_76886 = uVar2;
		Global_76887 = UNK_0x1C0640BA9A7327B3();
	}
}

bool func_52(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return true;
		case 86:
			return true;
		case 91:
			return true;
		default:
			return false;
	}
	return false;
}

void func_53()
{
	Global_19671 = 0;
	func_54();
}

void func_54()
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

void func_55()
{
	func_57(1, 649);
	func_56(0, -1);
}

void func_56(bool bParam0, int iParam1)
{
	int iVar0;

	Global_61525 = bParam0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (iParam1 == -1 || Global_73608[iVar0 /*9*/] == iParam1)
		{
			if (Global_73608[iVar0 /*9*/].f_6 != bParam0)
			{
				Global_73608[iVar0 /*9*/].f_6 = bParam0;
				Global_73608[iVar0 /*9*/].f_7 = 1;
				Global_73608[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_57(bool bParam0, int iParam1)
{
	int iVar0;

	if (Global_61520)
	{
	}
	Global_61520 = 0;
	if (bParam0)
	{
		Global_61521 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_61737[Global_73608[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_73608[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0 /*9*/] > 0)
			{
				if (Global_73608[iVar0 /*9*/] == iParam1)
				{
					Global_73608[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

bool func_58(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	float fVar0;

	if ((bParam5 == 1 || bParam5 == 2) || bParam5 == 3)
	{
		if (iParam6 == 0)
		{
			if (func_7(bParam0))
			{
				if (!UNK_0x377BE9A1BF38C7CE(bParam0))
				{
					func_67(func_68(func_69()), iParam11);
				}
			}
			if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, bParam12, bParam12, 2f, false, true, 2))
			{
				UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, bParam12, bParam12, 2f, true, true, 2);
				if (func_66(func_68(func_69()), 0, 0))
				{
					UNK_0x2F23E8033F1ADDD9(func_68(func_69()));
				}
				*iParam7 = 1;
				func_64(bParam4, vParam1, 1);
			}
			else
			{
				if (*iParam7)
				{
					fVar0 = (bParam12 / 2f);
					if (func_63(UNK_0x16F2683693E537C9(), vParam1, fVar0))
					{
						*iParam7 = 0;
						func_62(1077936128 /* Float: 3f */, 1);
					}
				}
				func_34(bParam4);
			}
		}
	}
	else if (UNK_0x5A91F08DF773C39D(bParam0, vParam1, bParam12, bParam12, 2f, false, true, 2))
	{
		if (*iParam9 == -1)
		{
			UNK_0x71EDC33E5A423750(bParam0, 2);
			return true;
		}
		if (!*iParam10)
		{
			if (func_66(func_68(func_69()), 0, 0))
			{
				UNK_0x790015DC92C918E2();
			}
			*iParam9 = UNK_0x1C0640BA9A7327B3();
			*iParam10 = 1;
			UNK_0x71EDC33E5A423750(bParam0, 2);
		}
		else if ((UNK_0x1C0640BA9A7327B3() - *iParam9) > 3000)
		{
			return true;
		}
	}
	else
	{
		if (UNK_0x9C7B8DC16535B879(bParam0) == 2)
		{
			UNK_0x71EDC33E5A423750(bParam0, 1);
		}
		if (!*iParam8)
		{
			if (func_66(func_61(func_69(), 0), 0, 0))
			{
				UNK_0x2F23E8033F1ADDD9(func_61(func_69(), 0));
			}
			if (!func_66(func_60(func_69()), 0, 0))
			{
				func_59(func_60(func_69()), 7500, 0);
				*iParam8 = 1;
			}
		}
		*iParam7 = 1;
	}
	return false;
}

void func_59(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

bool func_60(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

bool func_61(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		case 78:
			sVar0 = "PR_TAKBACK";
			break;
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

int func_62(float fParam0, int iParam1)
{
	bool bVar0;

	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		return 1;
	}
	bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		if (UNK_0xA30B8362589C124A(bVar0, -1, 0) == UNK_0x16F2683693E537C9())
		{
			if (!UNK_0x8B38C0DAEEDB5F9C(bVar0))
			{
				UNK_0xE0C0351D5B931E37(bVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (UNK_0x4024663A44BC1535(UNK_0x16F2683693E537C9()))
	{
		return 1;
	}
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		if (UNK_0x8B38C0DAEEDB5F9C(bVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_63(bool bParam0, vector3 vParam1, float fParam4)
{
	return SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1) <= (fParam4 * fParam4);
}

void func_64(bool bParam0, vector3 vParam1, int iParam4)
{
	if (!UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		*bParam0 = func_65(vParam1, 5, iParam4);
	}
}

int func_65(vector3 vParam0, int iParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x2A065371C9D96655(iVar0, iParam3);
	UNK_0x516E63E474722206(iVar0, 1f);
	UNK_0x661342B9651D16E2(iVar0, bParam4);
	return iVar0;
}

bool func_66(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x18B60B994182620C(bParam0);
	if (iParam1 == 1)
	{
		UNK_0x6B012227B3921E18(bParam2);
	}
	return UNK_0xB165082A56EE6E7F();
}

void func_67(bool bParam0, int iParam1)
{
	if (!*iParam1)
	{
		func_59(bParam0, 7500, 0);
		*iParam1 = 1;
	}
}

bool func_68(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

int func_69()
{
	return Global_76884;
}

void func_70(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*bParam4)
	{
		case 0:
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
			{
				*bParam4 = 1;
			}
			break;
		case 1:
			func_34(bParam0);
			if ((bParam5 == 1 || bParam5 == 2) || bParam5 == 3)
			{
				UNK_0x790015DC92C918E2();
				func_59("LOSE_WANTED", 7500, 0);
				*bParam4 = 2;
			}
			break;
		case 2:
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
			{
				UNK_0x790015DC92C918E2();
				if ((bParam5 == 1 || bParam5 == 2) || bParam5 == 3)
				{
					func_67(func_61(func_69(), 0), iParam6);
					func_64(bParam0, vParam1, 1);
				}
				else if (bParam5 == 0 && !*iParam7)
				{
					func_59(func_60(func_69()), 7500, 0);
					*iParam7 = 1;
				}
				*bParam4 = 0;
			}
			break;
	}
}

bool func_71(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_28 = false;
				func_36(1, 1, 1);
			}
			else if (func_82(1, vLocal_361, 0))
			{
				if (((func_82(2, Local_456.f_1, Local_456.f_4) && func_82(4, vLocal_361, 0)) && func_82(3, vLocal_361, 0)) && func_82(5, vLocal_361, 0))
				{
					iLocal_371 = UNK_0x544B74C043CE9948(400.8628f, -1609.739f, 28.29278f, 7.5f, 2f, 9.5f, func_81(229.3746f), 0, 7);
					if (UNK_0xC0E5DA578D275A41(Local_456) != 0)
					{
						iVar0 = UNK_0xC0E5DA578D275A41(Local_456);
						UNK_0xCD816869CA451988(1);
						func_34(&iVar0);
						UNK_0xCD816869CA451988(0);
					}
					func_79(&uLocal_356, Local_456, 1);
					func_77();
					func_75();
					return true;
				}
			}
			break;
		case 1:
			if (bParam1)
			{
				if (((func_82(2, Local_456.f_1, Local_456.f_4) && func_82(4, vLocal_361, 0)) && func_82(3, vLocal_361, 0)) && func_82(5, vLocal_361, 0))
				{
					func_74(UNK_0x16F2683693E537C9(), 408.3364f, -1567.429f, 28.2723f, 128.2512f);
					func_72();
					UNK_0x745CE398A4B0A3C6(369.0115f, -1609.116f, 28.2928f, 5f, 0);
					UNK_0x745CE398A4B0A3C6(Local_389[0 /*22*/].f_1, 5f, 0);
					func_77();
					func_75();
					bLocal_28 = false;
					func_36(1, 1, 1);
				}
			}
			else
			{
				return true;
			}
			break;
		case 2:
			if (bParam1)
			{
				if ((func_82(2, Local_456.f_1, Local_456.f_4) && func_82(4, vLocal_361, 0)) && func_82(3, vLocal_361, 0))
				{
					func_72();
					UNK_0x745CE398A4B0A3C6(369.0115f, -1609.116f, 28.2928f, 5f, 0);
					UNK_0x745CE398A4B0A3C6(Local_389[0 /*22*/].f_1, 5f, 0);
					func_77();
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_456, -1);
					func_75();
					bLocal_28 = false;
					func_36(1, 1, 1);
				}
			}
			else
			{
				return true;
			}
			break;
		case 3:
			if (bParam1)
			{
				if (func_82(2, vLocal_364, Local_456.f_4))
				{
					func_72();
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_456, -1);
					func_75();
					bLocal_28 = false;
					func_36(1, 1, 1);
				}
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_72()
{
	int iVar0;

	StringCopy(&cLocal_666, "NONE", 24);
	StringCopy(&cLocal_672, "NONE", 24);
	iLocal_384 = 0;
	bLocal_658 = false;
	iLocal_385 = 0;
	bLocal_659 = false;
	iLocal_379 = 0;
	iLocal_380 = 0;
	bLocal_91 = false;
	func_73();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_389[iVar0 /*22*/].f_18 = 0;
		Local_389[iVar0 /*22*/].f_19 = 0;
		Local_389[iVar0 /*22*/].f_20 = 0;
		iLocal_648[iVar0] = 0;
		iVar0++;
	}
	bLocal_656 = false;
	iLocal_657 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_83[iVar0] = 0;
		iLocal_87[iVar0] = 0;
		iVar0++;
	}
	bLocal_662 = true;
	func_380(27, 0);
	UNK_0x1BA7FCEAFCE8D46E(Global_40554[13 /*31*/], 4, true, false);
	iLocal_663 = 0;
}

void func_73()
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 2)
	{
		bVar0 = false;
		while (bVar0 <= (15 - 1))
		{
			UNK_0x0674E58A79778E99(&(Local_389[iVar1 /*22*/].f_15), bVar0);
			bVar0++;
		}
		Local_389[iVar1 /*22*/].f_17 = 0;
		Local_389[iVar1 /*22*/].f_16 = 0;
		iVar1++;
	}
	iLocal_377 = 0;
	iLocal_378 = 0;
	bLocal_375 = false;
	iLocal_660 = -1;
	bLocal_658 = false;
	bLocal_374 = false;
	bLocal_661 = false;
}

void func_74(bool bParam0, vector3 vParam1, float fParam4)
{
	if (func_377(bParam0))
	{
		UNK_0xA3BF0AA5A2608191(bParam0);
	}
	func_49(bParam0, vParam1, fParam4, 0, 1);
}

void func_75()
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar2 = func_22();
	if (iVar2 == 0)
	{
		iVar0 = 0;
		sVar1 = "MICHAEL";
	}
	else if (iVar2 == 1)
	{
		iVar0 = 1;
		sVar1 = "FRANKLIN";
	}
	else if (iVar2 == 2)
	{
		iVar0 = 2;
		sVar1 = "TREVOR";
	}
	func_76(&uLocal_483, iVar0, UNK_0x16F2683693E537C9(), sVar1, 0, 1);
	func_76(&uLocal_483, 6, Local_389[0 /*22*/], "BSPRACopBreak1", 0, 1);
	func_76(&uLocal_483, 7, Local_389[1 /*22*/], "BSPRACopBreak2", 0, 1);
	func_76(&uLocal_483, 5, Local_389[2 /*22*/], "BSPRACopBreak3", 0, 1);
}

void func_76(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_77()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		UNK_0x11AD11297DC58CC7(Local_389[iVar0 /*22*/], false);
		if (!func_78(Local_389[iVar0 /*22*/], -1098463898))
		{
			switch (iVar0)
			{
				case 0:
				case 1:
					UNK_0x0B7C52F2BC1DC8EB(Local_389[iVar0 /*22*/], "WORLD_HUMAN_HANG_OUT_STREET", Local_389[iVar0 /*22*/].f_1, Local_389[iVar0 /*22*/].f_4, 0, 0, 1);
					break;
				case 2:
					UNK_0x8D4C354BB8991817(Local_389[iVar0 /*22*/], 1, 1);
					break;
			}
		}
		UNK_0x262EF6C6306BEA6C(Local_389[iVar0 /*22*/], joaat("WEAPON_PISTOL"), -1, false, false);
		UNK_0x6DF7BF67E86AAE86(Local_389[iVar0 /*22*/], bLocal_481);
		Local_389[iVar0 /*22*/].f_18 = 1;
		Local_389[iVar0 /*22*/].f_21 = 0;
		iVar0++;
	}
}

bool func_78(bool bParam0, int iParam1)
{
	if (func_377(bParam0))
	{
		if (UNK_0xD1960163A3042274(bParam0, iParam1) == 1 || UNK_0xD1960163A3042274(bParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_79(bool bParam0, bool bParam1, bool bParam2)
{
	if (!UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		*bParam0 = func_80(bParam1, bParam2, 5);
	}
}

int func_80(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_6(bParam0))
	{
		iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
		UNK_0x321E019A46034F39(iVar0, bParam1);
		UNK_0x2A065371C9D96655(iVar0, iParam2);
		UNK_0x516E63E474722206(iVar0, 1f);
	}
	return iVar0;
}

float func_81(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

bool func_82(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;

	switch (iParam0)
	{
		case 0:
			if (func_90(vParam1, vLocal_361, 1056964608 /* Float: 0.5f */, 0) && fParam4 == 0f)
			{
				return true;
			}
			break;
		case 1:
			UNK_0xD7992BEF7A9D109E(bLocal_354, false);
			UNK_0xD7992BEF7A9D109E(bLocal_482, 6);
			if (UNK_0x67C1D9E5B91B2E37(false) && UNK_0x67C1D9E5B91B2E37(6))
			{
				return true;
			}
			break;
		case 2:
			if (func_7(Global_95241[0]))
			{
				UNK_0x73270B3C9CC833FD(Global_95241[0], true, 1);
				Local_456 = Global_95241[0];
				if (func_7(Local_456))
				{
					if (!UNK_0x4DA54CAC0D81A673(Local_456))
					{
						UNK_0x2F625BED8BF7F26A(Local_456);
					}
					UNK_0x2E81FA494A883541(Local_456, 2, 0);
					UNK_0x2E81FA494A883541(Local_456, 3, 0);
					func_89(Local_456, 0);
					UNK_0x44A200C9B6E1CEA6(Local_456, true);
					UNK_0x71EDC33E5A423750(Local_456, 1);
					return true;
				}
			}
			else if (func_88(&Local_456, Local_456.f_5, Local_456.f_1, Local_456.f_4, 1))
			{
				if (!UNK_0x4DA54CAC0D81A673(Local_456))
				{
					UNK_0x2F625BED8BF7F26A(Local_456);
				}
				func_89(Local_456, 0);
				UNK_0x44A200C9B6E1CEA6(Local_456, true);
				UNK_0x2E81FA494A883541(Local_456, 2, 0);
				UNK_0x2E81FA494A883541(Local_456, 3, 0);
				UNK_0x71EDC33E5A423750(Local_456, 1);
				return true;
			}
			break;
		case 3:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (UNK_0xC844350D5D58C99A(Global_95241.f_9[iVar0]))
				{
					if (!UNK_0x28072FDD60CE3A6E(Global_95241.f_9[iVar0], 1))
					{
						UNK_0x73270B3C9CC833FD(Global_95241.f_9[iVar0], true, 1);
						Local_389[iVar0 /*22*/] = Global_95241.f_9[iVar0];
						if (func_377(Local_389[iVar0 /*22*/]))
						{
							UNK_0x26A6B1686E33113F(Local_389[iVar0 /*22*/], 2);
							UNK_0x33CE5A9E32EA10B2(Local_389[iVar0 /*22*/], 1);
							func_87(iVar0);
							iVar1++;
						}
					}
					else
					{
						iVar1++;
					}
				}
				else if (func_86(&(Local_389[iVar0 /*22*/]), Local_389[iVar0 /*22*/].f_5, Local_389[iVar0 /*22*/].f_1, Local_389[iVar0 /*22*/].f_4, 0, 0, 0, 1))
				{
					func_87(iVar0);
					UNK_0x33CE5A9E32EA10B2(Local_389[iVar0 /*22*/], 1);
					UNK_0x26A6B1686E33113F(Local_389[iVar0 /*22*/], 2);
					StringCopy(&cVar2, "COP ", 16);
					StringIntConCat(&cVar2, iVar0, 16);
					UNK_0x5F2AA9E2843E9403(Local_389[iVar0 /*22*/], &cVar2);
					iVar1++;
				}
				iVar0++;
			}
			if (iVar1 == 3)
			{
				return true;
			}
			break;
		case 4:
			iVar7 = 0;
			iVar8 = 0;
			iVar6 = 1;
			while (iVar6 <= 3)
			{
				if (func_7(Global_95241[iVar6]))
				{
					UNK_0x73270B3C9CC833FD(Global_95241[iVar6], true, 1);
					Local_462[iVar7 /*6*/] = Global_95241[iVar6];
					if (func_7(Local_462[iVar7 /*6*/]))
					{
						iVar8++;
					}
				}
				else if (func_88(&(Local_462[iVar7 /*6*/]), Local_462[iVar7 /*6*/].f_5, Local_462[iVar7 /*6*/].f_1, Local_462[iVar7 /*6*/].f_4, 1))
				{
					iVar8++;
				}
				iVar7++;
				iVar6++;
			}
			if (iVar8 == 3)
			{
				return true;
			}
			break;
		case 5:
			if (func_83(&bLocal_358, joaat("PROP_BOX_GUNCASE_03A"), 354.6938f, -1634.783f, 22.7849f, 299.1508f, 1))
			{
				if (func_7(Local_456))
				{
					UNK_0x9F528B1B53FBC5D9(bLocal_358, Local_456, false, 0f, -1.85f, 0.05f, UNK_0x835730A2D89F6093(Local_456, 2), 0, 0, 0, 0, 2, 1);
					if (UNK_0x50B5F6F3C29E9380(Local_456, bLocal_358))
					{
						return true;
					}
				}
			}
			break;
	}
	return false;
}

bool func_83(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	if (!UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (func_85(bParam1, "Loading", 0))
		{
			*bParam0 = UNK_0x7707E48765093646(bParam1, vParam2, true, true, false);
			if (UNK_0xC844350D5D58C99A(*bParam0))
			{
				UNK_0xD8F6A53F4799FAFE(*bParam0, bParam5);
				UNK_0xAC0C6241732E36F6(*bParam0);
				if (bParam6)
				{
					func_84(bParam1, 1);
				}
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

void func_84(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (UNK_0xB87F6CF6E5628C67(bParam0))
		{
			UNK_0x71199B01895C6202(bParam0);
		}
	}
	else
	{
		UNK_0x71199B01895C6202(bParam0);
	}
}

bool func_85(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0x523BCC9DC80CD82F(bParam0);
	if (!UNK_0xEA6BC48857E0AC4C(bParam1) && iParam2 != -1)
	{
	}
	if (UNK_0xB87F6CF6E5628C67(bParam0))
	{
		return true;
	}
	return false;
}

bool func_86(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!UNK_0xC844350D5D58C99A(*uParam0))
	{
		if (func_85(bParam1, "Loading", 0))
		{
			*uParam0 = UNK_0x36F2404464202779(26, bParam1, vParam2, bParam5, 1, true);
			if (func_377(*uParam0))
			{
				if (bParam7)
				{
					UNK_0x1E9649458B15960F(*uParam0, true);
				}
				if (bParam8)
				{
					UNK_0x11AD11297DC58CC7(*uParam0, bParam8);
				}
				if (!bParam9)
				{
					UNK_0x25C5402CC10F76CD(*uParam0, bParam9);
				}
				if (bParam6)
				{
					func_84(bParam1, 1);
				}
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

void func_87(int iParam0)
{
	if (func_377(Local_389[iParam0 /*22*/]))
	{
		if (iParam0 == 0)
		{
			UNK_0x64F9F278AB9DCA2C(Local_389[iParam0 /*22*/], false, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(Local_389[iParam0 /*22*/], 3, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_389[iParam0 /*22*/], 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_389[iParam0 /*22*/], 8, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_389[iParam0 /*22*/], 9, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_389[iParam0 /*22*/], 10, false, false, 0);
		}
		else
		{
			UNK_0x64F9F278AB9DCA2C(Local_389[iParam0 /*22*/], false, true, true, 0);
			UNK_0x64F9F278AB9DCA2C(Local_389[iParam0 /*22*/], 3, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(Local_389[iParam0 /*22*/], 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_389[iParam0 /*22*/], 8, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_389[iParam0 /*22*/], 9, 2, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_389[iParam0 /*22*/], 10, false, true, 0);
		}
	}
}

bool func_88(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	if (!UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (func_85(bParam1, "Loading", 0))
		{
			*bParam0 = UNK_0x122AAB0B1D6F55AD(bParam1, vParam2, bParam5, true, true, false);
			if (UNK_0xC844350D5D58C99A(*bParam0))
			{
				if (!UNK_0xAF6690C489CC6203(*bParam0))
				{
					UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
				}
				UNK_0xB9FD7450C0DAB575(*bParam0, 1084227584 /* Float: 5f */);
				if (bParam6)
				{
					func_84(bParam1, 1);
				}
				return true;
			}
		}
	}
	else
	{
		if (func_7(*bParam0))
		{
			UNK_0xA47B46945FF6DE74(*bParam0, vParam2, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(*bParam0, bParam5);
		}
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_89(bool bParam0, int iParam1)
{
	Global_98744.f_22[iParam1] = bParam0;
}

bool func_90(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_91(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, int iParam8, bool bParam9, bool bParam10)
{
	if (func_7(*bParam0))
	{
		switch (*bParam2)
		{
			case 0:
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
				{
					func_34(bParam3);
					if (func_66(func_60(func_69()), 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9(func_60(func_69()));
					}
					if (*bParam0 == iParam8)
					{
						*bParam2 = 1;
					}
					else
					{
						*bParam2 = 2;
					}
				}
				else if (func_97(*bParam0) || func_96(*bParam0))
				{
					func_34(bParam3);
					if (func_66(func_60(func_69()), 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9(func_60(func_69()));
					}
					*bParam2 = 3;
				}
				else
				{
					if (func_66(func_61(func_69(), bParam9), 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9(func_61(func_69(), bParam9));
					}
					if (func_69() != 33)
					{
						func_94(bParam0);
					}
					else
					{
						func_92(bParam0, uParam1);
					}
				}
				break;
			case 2:
			case 1:
				if ((!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0) && !func_97(*bParam0)) && !func_96(*bParam0))
				{
					func_34(bParam4);
					if (!UNK_0x5A91F08DF773C39D(*bParam0, vParam5, bParam10, bParam10, 2f, false, true, 2))
					{
						func_79(bParam3, *bParam0, 1);
					}
					*bParam2 = 0;
				}
				break;
			case 3:
				if (!func_97(*bParam0) && !func_96(*bParam0))
				{
					func_34(bParam4);
					if (!UNK_0x5A91F08DF773C39D(*bParam0, vParam5, bParam10, bParam10, 2f, false, true, 2))
					{
						func_79(bParam3, *bParam0, 1);
					}
					*bParam2 = 0;
				}
				break;
		}
	}
	else if (func_69() != 33)
	{
		func_94(bParam0);
	}
	else
	{
		func_92(bParam0, uParam1);
	}
}

void func_92(bool bParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!bLocal_28)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (bVar0 != *bParam0)
			{
				if (func_7(bVar0))
				{
					iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
					if (iVar1 == joaat("TRASH"))
					{
						*uParam1 = *bParam0;
						func_93(bParam0);
						*bParam0 = bVar0;
						func_89(*bParam0, 1);
						func_89(*uParam1, 3);
						if (!UNK_0xAF6690C489CC6203(*bParam0))
						{
							UNK_0x73270B3C9CC833FD(*bParam0, true, 1);
						}
					}
					else if (iVar1 == joaat("TOWTRUCK"))
					{
						bVar2 = UNK_0xC102CE429C03E382(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0));
						if (func_6(bVar2))
						{
							bVar0 = UNK_0x96A5FE5834B81CE7(bVar2);
							if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("TRASH"))
							{
								*uParam1 = *bParam0;
								func_93(bParam0);
								*bParam0 = bVar0;
								func_89(*bParam0, 1);
								func_89(*uParam1, 3);
								if (!UNK_0xAF6690C489CC6203(*bParam0))
								{
									UNK_0x73270B3C9CC833FD(*bParam0, true, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_93(bool bParam0)
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

void func_94(bool bParam0)
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (bVar0 != *bParam0)
		{
			if (func_7(bVar0))
			{
				if (UNK_0x134B62B726CEC8E6(bVar0) == func_95(func_69()))
				{
					func_93(bParam0);
					*bParam0 = bVar0;
					func_89(*bParam0, 1);
					UNK_0x73270B3C9CC833FD(*bParam0, true, 1);
				}
			}
		}
	}
}

int func_95(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("TRASH");
			break;
		case 34:
			iVar0 = joaat("TOWTRUCK");
			break;
		case 78:
			iVar0 = 0;
			break;
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("GAUNTLET");
			break;
	}
	return iVar0;
}

bool func_96(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if ((func_377(UNK_0x16F2683693E537C9()) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)) && func_7(bParam0))
	{
		bVar0 = UNK_0x728870EB733D12A1();
		if (func_7(bVar0))
		{
			iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
			if ((iVar1 == joaat("CARGOBOB") || iVar1 == joaat("CARGOBOB2")) || iVar1 == joaat("CARGOBOB3"))
			{
				if (UNK_0x2709213DA9C091FF(bVar0))
				{
					if (UNK_0xED55EA714F84A53E(bVar0, bParam0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_97(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if ((func_377(UNK_0x16F2683693E537C9()) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)) && func_7(bParam0))
	{
		bVar0 = UNK_0x728870EB733D12A1();
		if (func_7(bVar0))
		{
			iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
			if (iVar1 == joaat("TOWTRUCK") || iVar1 == joaat("TOWTRUCK2"))
			{
				if (UNK_0x6D18156F72BE0773(bVar0, bParam0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_98()
{
	var uVar0;

	func_91(&Local_456, &uVar0, &bLocal_82, &uLocal_357, &uLocal_356, vLocal_364, 0, 0, 1090519040 /* Float: 8f */);
	func_118();
	func_106();
	switch (iLocal_81)
	{
		case 0:
			if (func_71(iLocal_80, bLocal_28))
			{
				if (UNK_0x13896FDECC859926("FHPRA_VAN"))
				{
					if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
					{
						if (bLocal_82 == 1 || bLocal_82 == 2)
						{
							func_104();
							if (!func_103())
							{
								func_67("PR_TAKBACK", &iLocal_355);
							}
							UNK_0x8B4C4CA774181102(5f, 6f, 4);
							UNK_0xC92DB9682A650680("FHPRA_VAN");
							func_64(&uLocal_356, vLocal_364, 1);
						}
					}
					bLocal_664 = false;
					iLocal_81 = 1;
				}
			}
			break;
		case 1:
			func_70(&uLocal_356, vLocal_364, &bLocal_91, bLocal_82, &iLocal_355, &iLocal_384);
			if (bLocal_91 == 2)
			{
				if (func_12(&uLocal_196, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)))
				{
					UNK_0x1E69CBC4A01168BD(UNK_0xD803B885F5E47A62());
				}
				if (!bLocal_664)
				{
					UNK_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_BS_PREP_A_01", 0f);
					bLocal_664 = true;
				}
			}
			if (func_101(Local_456, vLocal_364, &uLocal_356, bLocal_91, bLocal_82, &iLocal_355, &iLocal_385, 0, 0, 1086324736 /* Float: 6f */))
			{
				UNK_0x8B4C4CA774181102(5f, 6f, 4);
				iLocal_81 = 2;
			}
			break;
		case 2:
			func_34(&uLocal_356);
			func_62(1077936128 /* Float: 3f */, 1);
			func_99(0);
			break;
		case 3:
			if (func_7(Local_456))
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_456, 0))
				{
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_456, -1);
				}
				else
				{
					func_49(Local_456, vLocal_364, 126.0705f, 0, 1);
					func_36(1, 1, 1);
					iLocal_81 = 1;
				}
			}
			break;
	}
}

void func_99(bool bParam0)
{
	func_100(iLocal_80);
	iLocal_352 = iLocal_80;
	if (!bParam0)
	{
		iLocal_80 = iLocal_352 + 1;
	}
	else if (iLocal_352 > 0)
	{
		iLocal_80 = (iLocal_352 - 1);
	}
	iLocal_355 = 0;
	iLocal_81 = 0;
}

void func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

bool func_101(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if ((bParam6 == 1 || bParam6 == 2) || bParam6 == 3)
	{
		if (bParam5 == 0)
		{
			func_64(bParam4, vParam1, 1);
			if (!bParam10)
			{
				if (func_7(bParam0))
				{
					if (UNK_0x5A91F08DF773C39D(bParam0, vParam1, bParam11, bParam11, 2f, true, true, 0))
					{
						return true;
					}
				}
			}
			else if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, bParam11, bParam11, 2f, true, true, 2))
			{
				return true;
			}
			if (func_66(func_60(func_69()), 0, 0))
			{
				UNK_0x2F23E8033F1ADDD9(func_60(func_69()));
			}
			if (!func_102())
			{
				func_67(func_61(func_69(), bParam9), iParam7);
			}
		}
	}
	else if (bParam5 == 0)
	{
		if (!*iParam8)
		{
			if (func_66(func_61(func_69(), 0), 0, 0))
			{
				UNK_0x2F23E8033F1ADDD9(func_61(func_69(), 0));
			}
			func_59(func_60(func_69()), 7500, 0);
			*iParam8 = 1;
		}
	}
	return false;
}

bool func_102()
{
	return Global_98796.f_345 > 0;
}

bool func_103()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_104()
{
	Global_19671 = 0;
	func_105();
}

void func_105()
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

void func_106()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar1 = func_116(iVar0);
		if (!UNK_0xEB6A8945D1AC98A1(bVar1))
		{
			switch (iLocal_87[iVar0])
			{
				case 0:
					if (!func_115(bVar1))
					{
						if (func_114(bVar1, 0))
						{
							if (func_113(iVar0, bVar1) || func_111(iVar0, bVar1))
							{
								if (func_110(bVar1, 0))
								{
									UNK_0x73270B3C9CC833FD(bVar1, true, 1);
									UNK_0x11AD11297DC58CC7(bVar1, true);
									UNK_0xA3BF0AA5A2608191(bVar1);
								}
							}
						}
					}
					break;
				case 1:
					if (func_109(iVar0, bVar1) && UNK_0x9C77D2D0559097F0(bVar1, 1))
					{
						iLocal_87[iVar0] = 0;
						func_108(bVar1);
					}
					break;
				case 2:
					if (func_107(iVar0, bVar1) && UNK_0x9C77D2D0559097F0(bVar1, 1))
					{
						iLocal_87[iVar0] = 0;
						func_108(bVar1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_107(int iParam0, bool bParam1)
{
	switch (iLocal_83[iParam0])
	{
		case 0:
			UNK_0x132B85BCE016BCA0(bParam1, UNK_0x6937EA2286828455(bParam1, 0), vLocal_364, 4, 20f, 786469, 3.5f, 5f, 1);
			iLocal_83[iParam0] = 3;
			break;
		case 3:
			if (!func_111(iParam0, bParam1) || func_63(UNK_0x16F2683693E537C9(), vLocal_364, 2f))
			{
				iLocal_83[iParam0] = 4;
			}
			break;
		case 4:
			iLocal_83[iParam0] = 0;
			return true;
	}
	return false;
}

int func_108(bool bParam0)
{
	bool bVar0;

	return 0;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_26(bParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_116(bVar0) != bParam0)
		{
			return 0;
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Global_94598, bVar0))
		{
			return 0;
		}
		UNK_0x0674E58A79778E99(&Global_94598, bVar0);
		return 1;
	}
	return 0;
}

bool func_109(int iParam0, bool bParam1)
{
	bool bVar0;

	switch (iLocal_83[iParam0])
	{
		case 0:
			if (!UNK_0xF65264B66E133BD8(Local_300[iLocal_665 /*4*/], 1.5f, 0, 0, 1, 0, 0, bParam1, 0))
			{
				if (func_63(bParam1, Local_300[iLocal_665 /*4*/], 5f))
				{
					bVar0 = 1f;
				}
				else
				{
					bVar0 = 2f;
				}
				UNK_0x96167B03C5A77156(bParam1, Local_300[iLocal_665 /*4*/], bVar0, 20000, 0.25f, 0, Local_300[iLocal_665 /*4*/].f_3);
				iLocal_83[iParam0] = 1;
			}
			break;
		case 1:
			if (!func_78(bParam1, 713668775))
			{
				UNK_0x6EDD55375054780D(bParam1, 0);
				iLocal_83[iParam0] = 2;
			}
			break;
		case 2:
			if (!func_78(bParam1, -1207763510))
			{
				iLocal_83[iParam0] = 4;
			}
			break;
		case 4:
			iLocal_83[iParam0] = 0;
			return true;
	}
	return false;
}

bool func_110(bool bParam0, int iParam1)
{
	bool bVar0;

	return false;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_26(bParam0);
		if (bVar0 > 3)
		{
			return false;
		}
		if (func_116(bVar0) != bParam0)
		{
			return false;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94598, bVar0))
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				return false;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94597, bVar0))
		{
			UNK_0xDAB3108F02A4255A(bParam0, 0, false);
			UNK_0xE8832A9E16A57A1F(bParam0, false, 1);
			UNK_0x5D96D8530B3D0904(&Global_94598, bVar0);
			return true;
		}
	}
	return false;
}

bool func_111(int iParam0, bool bParam1)
{
	if (!func_112())
	{
		if ((UNK_0xC844350D5D58C99A(Local_456) && UNK_0xDF1306B443CD3D15(Local_456, 0)) && !UNK_0x5A91F08DF773C39D(Local_456, vLocal_364, 2f, 2f, 2f, false, true, 0))
		{
			if ((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_456, 0)) && UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
			{
				if (UNK_0xC42A92762C58E1B9(bParam1, Local_456, 0) && UNK_0xA30B8362589C124A(Local_456, -1, 0) == bParam1)
				{
					iLocal_87[iParam0] = 2;
					return true;
				}
			}
		}
	}
	return false;
}

bool func_112()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_113(int iParam0, bool bParam1)
{
	if (!func_112())
	{
		if (UNK_0x3D1053F9EB43B7AD(bParam1, 344.9844f, -1604.011f, 28.29278f, 339.7212f, -1599.484f, 31.29056f, 3.63f, 0, true, 0) && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 345.1542f, -1604.173f, 28.29278f, 360.8858f, -1617.23f, 31.29278f, 3.38f, 0, true, 0))
		{
			iLocal_665 = 0;
			iLocal_87[iParam0] = 1;
			return true;
		}
		else if (UNK_0x3D1053F9EB43B7AD(bParam1, 345.1542f, -1604.173f, 28.29278f, 360.8858f, -1617.23f, 31.29278f, 3.63f, 0, true, 0) && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 344.9844f, -1604.011f, 28.29278f, 339.7212f, -1599.484f, 31.29056f, 3.38f, 0, true, 0))
		{
			iLocal_665 = 1;
			iLocal_87[iParam0] = 1;
			return true;
		}
	}
	return false;
}

bool func_114(bool bParam0, int iParam1)
{
	bool bVar0;

	return false;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_26(bParam0);
		if (bVar0 > 3)
		{
			return false;
		}
		if (func_116(bVar0) != bParam0)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				return false;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94597, bVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_115(bool bParam0)
{
	bool bVar0;

	return false;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_26(bParam0);
		if (bVar0 > 3)
		{
			return false;
		}
		if (func_116(bVar0) != bParam0)
		{
			return false;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94598, bVar0))
		{
			return true;
		}
	}
	return false;
}

int func_116(bool bParam0)
{
	if (bParam0 > 3)
	{
		return 0;
	}
	if (bParam0 == func_22())
	{
		return UNK_0x16F2683693E537C9();
	}
	return Global_96222[func_117(bParam0)];
}

int func_117(bool bParam0)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	else if (bParam0 == 2)
	{
		return 2;
	}
	else if (bParam0 == 1)
	{
		return 1;
	}
	else if (bParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_118()
{
	int iVar0;

	if (!bLocal_28)
	{
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) >= 1)
		{
			bLocal_374 = true;
		}
		else
		{
			UNK_0x0B54B0F65E7FEED7(UNK_0xD803B885F5E47A62(), 38);
			UNK_0x0B54B0F65E7FEED7(UNK_0xD803B885F5E47A62(), 30);
			bLocal_374 = false;
		}
		if (iLocal_80 == 2)
		{
			if (!bLocal_386)
			{
				if (!func_63(UNK_0x16F2683693E537C9(), Local_456.f_1, 180f))
				{
					iVar0 = 0;
					while (iVar0 <= 2)
					{
						func_208(&(Local_389[iVar0 /*22*/]), 1, 0, 1);
						iVar0++;
					}
					bLocal_386 = true;
				}
			}
		}
		func_197();
		func_119();
	}
}

void func_119()
{
	int iVar0;

	iVar0 = 2;
	if (Local_389[iVar0 /*22*/].f_18 != 3 && Local_389[iVar0 /*22*/].f_20 != 7)
	{
		func_196(Local_389[iVar0 /*22*/], &(Local_389[iVar0 /*22*/].f_6), -1, 0, 0, 0, -1082130432 /* Float: -1f */, 0, -1, -1, 1);
	}
	else
	{
		func_195(&(Local_389[iVar0 /*22*/].f_6));
	}
	if (func_377(Local_389[iVar0 /*22*/]))
	{
		func_152(iVar0);
		switch (Local_389[iVar0 /*22*/].f_18)
		{
			case 0:
				break;
			case 1:
				func_151(iVar0);
				break;
			case 3:
				func_120(iVar0);
				break;
		}
	}
	else
	{
		if (UNK_0xC844350D5D58C99A(Local_389[iVar0 /*22*/]) && !UNK_0xEB6A8945D1AC98A1(Local_389[iVar0 /*22*/]))
		{
			if (UNK_0xB87D13D0C064E9D1(Local_389[iVar0 /*22*/], UNK_0x16F2683693E537C9(), 1))
			{
				UNK_0xE910A68AA670B4AA(Local_389[iVar0 /*22*/]);
				if (((UNK_0x52AE17073D025311(UNK_0x16F2683693E537C9()) || UNK_0x9E834FAC6CCB49FB(Local_389[iVar0 /*22*/])) || UNK_0xC021B60D52071374(Local_389[iVar0 /*22*/])) || UNK_0xFEAA79CCC9861C2B(Local_389[iVar0 /*22*/]))
				{
					if (!bLocal_374)
					{
						UNK_0x0B54B0F65E7FEED7(UNK_0xD803B885F5E47A62(), 41);
						UNK_0x0B54B0F65E7FEED7(UNK_0xD803B885F5E47A62(), 33);
						UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
						UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
					}
				}
			}
			Local_389[iVar0 /*22*/].f_18 = 1;
			Local_389[iVar0 /*22*/].f_21 = 0;
		}
		func_34(&(Local_389[iVar0 /*22*/].f_6));
		func_208(&(Local_389[iVar0 /*22*/]), 1, 0, 1);
	}
}

void func_120(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	switch (Local_389[iParam0 /*22*/].f_20)
	{
		case 1:
			if (func_149(iParam0) && func_63(Local_389[iParam0 /*22*/], Local_389[iParam0 /*22*/].f_1, 3f))
			{
				if (UNK_0x1C0640BA9A7327B3() - Local_389[iParam0 /*22*/].f_14) > UNK_0x09AC81E49EA267F7(1000, 1500)
				{
					if (!func_78(Local_389[iParam0 /*22*/], -875674219))
					{
						UNK_0x2ECF845953E95D1B(Local_389[iParam0 /*22*/]);
						UNK_0xF96A174EE26D7588(Local_389[iParam0 /*22*/], UNK_0x16F2683693E537C9(), 0);
					}
					Local_389[iParam0 /*22*/].f_14 = UNK_0x1C0640BA9A7327B3();
				}
			}
			else
			{
				func_134(iParam0);
			}
			break;
		case 2:
			if (UNK_0x1C0640BA9A7327B3() - Local_389[iParam0 /*22*/].f_14) > UNK_0x09AC81E49EA267F7(5000, 6000)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 2))
				{
					func_127(iParam0);
					func_125();
					return;
				}
				else if (func_124(iParam0, 15))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_389[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		case 3:
			if (UNK_0x1C0640BA9A7327B3() - Local_389[iParam0 /*22*/].f_14) > UNK_0x09AC81E49EA267F7(2500, 3000)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 8))
				{
					Local_389[iParam0 /*22*/].f_17 = 1;
				}
				else
				{
					iLocal_378 = 0;
					func_134(iParam0);
				}
			}
			break;
		case 4:
			if (UNK_0x1C0640BA9A7327B3() - Local_389[iParam0 /*22*/].f_14) > UNK_0x09AC81E49EA267F7(2500, 3000)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 8))
				{
					if (iLocal_378 >= 3)
					{
						func_127(iParam0);
						func_125();
						return;
					}
					else if (UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 9) && !bLocal_372)
					{
						func_127(iParam0);
						func_125();
						return;
					}
					else
					{
						Local_389[iParam0 /*22*/].f_17 = 1;
					}
				}
				else
				{
					iLocal_378 = 0;
					func_134(iParam0);
				}
			}
			break;
		case 6:
			if (iParam0 == 0)
			{
				iVar0 = 350;
			}
			else
			{
				iVar0 = 750;
			}
			if ((UNK_0x1C0640BA9A7327B3() - Local_389[iParam0 /*22*/].f_14) > iVar0)
			{
				if (!UNK_0x15D0A3E61766C539(Local_389[iParam0 /*22*/], 0) && !UNK_0x46BC6F5F089F3AFF(Local_389[iParam0 /*22*/]))
				{
					Local_389[iParam0 /*22*/].f_14 = UNK_0x1C0640BA9A7327B3();
					func_127(iParam0);
				}
			}
			break;
		case 5:
			if (UNK_0x1C0640BA9A7327B3() - Local_389[iParam0 /*22*/].f_14) > UNK_0x09AC81E49EA267F7(1000, 3000)
			{
				func_125();
				return;
			}
			break;
		case 7:
			if ((UNK_0x1C0640BA9A7327B3() - Local_389[iParam0 /*22*/].f_14) > 350)
			{
				if (!bLocal_374 && func_124(iParam0, 15))
				{
					func_73();
					func_134(iParam0);
					UNK_0xFDCA9E507F779D9A(Local_389[iParam0 /*22*/]);
					return;
				}
				else
				{
					if (iLocal_660 != -1)
					{
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_660) > 12000)
						{
							func_123(-1);
						}
						else if ((UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()) || UNK_0x39E5E51C6E21A69B(UNK_0x16F2683693E537C9())) || UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
						{
							func_123(2);
						}
						else if (UNK_0x38AF5DD0BDDE9545(UNK_0xD803B885F5E47A62(), &bVar1))
						{
							if (UNK_0xEC560E589DF8370E(bVar1))
							{
								iVar2 = UNK_0x940C1429253D3B1B(bVar1);
								if ((iVar2 == Local_389[0 /*22*/] || iVar2 == Local_389[1 /*22*/]) || iVar2 == Local_389[2 /*22*/])
								{
									func_123(2);
								}
							}
						}
					}
					if (Local_389[iParam0 /*22*/].f_16)
					{
						UNK_0xB61FC7262CB2E7A1(UNK_0xD803B885F5E47A62());
					}
					if ((func_78(Local_389[iParam0 /*22*/], -2128726980) || func_78(Local_389[iParam0 /*22*/], -982327190)) && UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) < 2)
					{
						if (!func_78(Local_389[iParam0 /*22*/], 1392476864))
						{
							UNK_0xF27A0DCBF07DE99D(Local_389[iParam0 /*22*/], UNK_0x16F2683693E537C9());
						}
					}
				}
			}
			if (!bLocal_658)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, true) && UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 14))
				{
					if (iParam0 == 0)
					{
						bVar3 = "PRA_COPSHT1";
					}
					else
					{
						bVar3 = "PRA_COPSHT2";
					}
					func_53();
					func_121(&uLocal_483, bLocal_482, bVar3, 7, 0, 0);
					bLocal_658 = true;
				}
			}
			break;
	}
}

void func_121(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_122(uParam0, 145, bParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	UNK_0x5D96D8530B3D0904(&Global_19671, false);
	Global_20808 = iParam3;
	StringCopy(&Global_20795, sParam2, 24);
}

void func_122(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_123(int iParam0)
{
	UNK_0x34D79252800B23FF(5);
	UNK_0x51B096AAC60548C1(1f);
	iLocal_660 = -1;
	if (func_377(Local_389[0 /*22*/]))
	{
		UNK_0x11AD11297DC58CC7(Local_389[0 /*22*/], false);
	}
	if (func_377(Local_389[1 /*22*/]))
	{
		UNK_0x11AD11297DC58CC7(Local_389[1 /*22*/], false);
	}
	if (func_377(Local_389[2 /*22*/]))
	{
		UNK_0x11AD11297DC58CC7(Local_389[2 /*22*/], false);
	}
	if (iParam0 != -1)
	{
		UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), iParam0, 0);
		UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
	}
}

bool func_124(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 <= 14)
	{
		if (bVar0 != iParam1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, bVar0))
			{
				return false;
			}
		}
		bVar0++;
	}
	if (bLocal_374)
	{
		return false;
	}
	return true;
}

void func_125()
{
	int iVar0;

	func_126();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_389[iVar0 /*22*/].f_20 != 6 && Local_389[iVar0 /*22*/].f_20 != 7)
		{
			func_195(&(Local_389[iVar0 /*22*/].f_6));
			Local_389[iVar0 /*22*/].f_14 = UNK_0x1C0640BA9A7327B3();
			Local_389[iVar0 /*22*/].f_18 = 3;
			Local_389[iVar0 /*22*/].f_20 = 6;
		}
		iVar0++;
	}
}

void func_126()
{
	if (!bLocal_375)
	{
		iLocal_660 = UNK_0x1C0640BA9A7327B3();
		if (!bLocal_659)
		{
			func_104();
		}
		UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 1, 0);
		UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
		bLocal_375 = true;
	}
}

void func_127(int iParam0)
{
	if (Local_389[iParam0 /*22*/].f_20 != 7)
	{
		if (func_377(Local_389[iParam0 /*22*/]))
		{
			if (func_78(Local_389[iParam0 /*22*/], 242628503) || UNK_0xFBF1556B75C783FC(Local_389[iParam0 /*22*/]))
			{
				UNK_0xA3BF0AA5A2608191(Local_389[iParam0 /*22*/]);
			}
			else if (func_78(Local_389[iParam0 /*22*/], -1098463898) || func_78(Local_389[iParam0 /*22*/], 993674639))
			{
				UNK_0x2ECF845953E95D1B(Local_389[iParam0 /*22*/]);
			}
			UNK_0xE733200EEF894A35(Local_389[iParam0 /*22*/], 1);
			UNK_0xF27A0DCBF07DE99D(Local_389[iParam0 /*22*/], UNK_0x16F2683693E537C9());
			UNK_0x262EF6C6306BEA6C(Local_389[iParam0 /*22*/], joaat("WEAPON_PISTOL"), -1, false, true);
			UNK_0xE910A68AA670B4AA(Local_389[iParam0 /*22*/]);
			UNK_0xB61FC7262CB2E7A1(UNK_0xD803B885F5E47A62());
			func_128(iParam0);
			Local_389[iParam0 /*22*/].f_18 = 3;
			Local_389[iParam0 /*22*/].f_20 = 7;
		}
	}
}

void func_128(int iParam0)
{
	bool bVar0;

	if ((iLocal_80 != 2 && !bLocal_659) && !UNK_0x437347B10A200C4B(Local_389[iParam0 /*22*/], 0))
	{
		if (func_133(iParam0) && func_131(Local_389[iParam0 /*22*/], 30f))
		{
			if (iParam0 == 0)
			{
				bVar0 = "S_M_Y_COP_01_WHITE_MINI_03";
			}
			else if (iParam0 == 1)
			{
				bVar0 = "S_M_Y_COP_01_BLACK_MINI_04";
			}
			else if (iParam0 == 2)
			{
				bVar0 = "PRA_COPSARR3";
			}
			if (UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 3))
			{
				bLocal_659 = true;
			}
			else if (!func_124(iParam0, 15) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 362.6359f, -1581.256f, 31.54774f, 358.1074f, -1586.615f, 34.29774f, 2f, 0, true, 0))
			{
				func_129();
				bLocal_656 = false;
				if (iParam0 == 2)
				{
					func_121(&uLocal_483, bLocal_482, bVar0, 7, 0, 0);
				}
				else
				{
					UNK_0xEB0A515D699A7E90(Local_389[iParam0 /*22*/], "ARREST_PLAYER", bVar0, "SPEECH_PARAMS_FORCE", 0);
				}
				bLocal_659 = true;
			}
		}
	}
}

void func_129()
{
	Global_19671 = 0;
	func_130();
}

void func_130()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

bool func_131(bool bParam0, float fParam1)
{
	if (bParam0 == 0)
	{
		return true;
	}
	if (func_377(UNK_0x16F2683693E537C9()) && func_377(bParam0))
	{
		if (func_132(UNK_0x16F2683693E537C9(), bParam0, 0) <= fParam1)
		{
			return true;
		}
	}
	return false;
}

float func_132(bool bParam0, bool bParam1, int iParam2)
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

bool func_133(int iParam0)
{
	return Local_389[iParam0 /*22*/].f_18 > 1;
}

void func_134(int iParam0)
{
	int iVar0;

	if (Local_389[iParam0 /*22*/].f_18 != 1 && !func_78(Local_389[iParam0 /*22*/], 242628503))
	{
		UNK_0xA3BF0AA5A2608191(Local_389[iParam0 /*22*/]);
		UNK_0x6DF7BF67E86AAE86(Local_389[iParam0 /*22*/], bLocal_481);
		if (iParam0 == 2)
		{
			UNK_0xDD353D0E9C789D0E(&iVar0);
			if (!func_63(Local_389[iParam0 /*22*/], Local_389[iParam0 /*22*/].f_1, 3f))
			{
				UNK_0x96167B03C5A77156(false, Local_389[iParam0 /*22*/].f_1, 1f, 120000, 0.25f, 0, Local_389[iParam0 /*22*/].f_4);
			}
			else
			{
				UNK_0xE655C47E46F9A7E4(false, Local_389[iParam0 /*22*/].f_4, 0);
			}
			if (iLocal_648[2] && UNK_0xEA6BC48857E0AC4C("sResumeRoot"))
			{
				UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
			}
			else
			{
				UNK_0x8D4C354BB8991817(false, 1, 1);
			}
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(Local_389[iParam0 /*22*/], iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
		else
		{
			switch (UNK_0x09AC81E49EA267F7(false, 2))
			{
				case 0:
					UNK_0xDD353D0E9C789D0E(&iVar0);
					if (!func_63(Local_389[iParam0 /*22*/], Local_389[iParam0 /*22*/].f_1, 3f))
					{
						UNK_0x96167B03C5A77156(false, Local_389[iParam0 /*22*/].f_1, 1f, 120000, 0.25f, 0, Local_389[iParam0 /*22*/].f_4);
					}
					else
					{
						UNK_0xE655C47E46F9A7E4(false, Local_389[iParam0 /*22*/].f_4, 0);
					}
					UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
					UNK_0x75ABDC5F81978924(iVar0);
					UNK_0x78ADC381772E3D54(Local_389[iParam0 /*22*/], iVar0);
					UNK_0xF82EA857DA10E0CD(&iVar0);
					break;
				case 1:
					UNK_0xDD353D0E9C789D0E(&iVar0);
					if (!func_63(Local_389[iParam0 /*22*/], Local_389[iParam0 /*22*/].f_1, 3f))
					{
						UNK_0x96167B03C5A77156(false, Local_389[iParam0 /*22*/].f_1, 1f, 120000, 0.25f, 0, Local_389[iParam0 /*22*/].f_4);
					}
					else
					{
						UNK_0xE655C47E46F9A7E4(false, Local_389[iParam0 /*22*/].f_4, 0);
					}
					UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
					UNK_0x75ABDC5F81978924(iVar0);
					UNK_0x78ADC381772E3D54(Local_389[iParam0 /*22*/], iVar0);
					UNK_0xF82EA857DA10E0CD(&iVar0);
					break;
			}
		}
		func_135();
		UNK_0x11AD11297DC58CC7(Local_389[iParam0 /*22*/], false);
		Local_389[iParam0 /*22*/].f_18 = 1;
		Local_389[iParam0 /*22*/].f_21 = 0;
		Local_389[iParam0 /*22*/].f_19 = 0;
		Local_389[iParam0 /*22*/].f_20 = 0;
	}
}

void func_135()
{
	if (func_12(&uLocal_92, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)))
	{
		if (!func_103())
		{
			if ((!UNK_0x7F8A39872A07D2CE(&cLocal_666, "NONE") && !UNK_0x7F8A39872A07D2CE(&cLocal_672, "NONE")) && !func_66("PR_TAKBACK", 0, 0))
			{
				if (func_136(&uLocal_483, bLocal_482, &cLocal_666, &cLocal_672, 7, 0, 0))
				{
					StringCopy(&cLocal_666, "NONE", 24);
					StringCopy(&cLocal_672, "NONE", 24);
					bLocal_656 = true;
				}
			}
		}
	}
}

int func_136(var uParam0, bool bParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_122(uParam0, 145, bParam1, iParam5, iParam6, 0);
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
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_137(sParam2, iParam4, 0);
}

int func_137(char* sParam0, int iParam1, bool bParam2)
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
					func_54();
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
		if (func_148(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_147();
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
				func_146();
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
				if (func_145())
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
			if (func_47())
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
			func_144();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_143();
		func_138();
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
		func_54();
	}
	return 0;
}

void func_138()
{
	if (!func_139())
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

bool func_139()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_142())
	{
		return false;
	}
	if (func_140(UNK_0xD803B885F5E47A62()))
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

bool func_140(int iParam0)
{
	return func_141(iParam0, 20);
}

bool func_141(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_142()
{
	return -1;
}

void func_143()
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

void func_144()
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

bool func_145()
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

void func_146()
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

void func_147()
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

bool func_148(bool bParam0, int iParam1)
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

bool func_149(int iParam0)
{
	if (Local_389[func_150(iParam0) /*22*/].f_18 > 1 && Local_389[func_150(iParam0) /*22*/].f_20 != 1)
	{
		return true;
	}
	return false;
}

int func_150(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 0)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_151(int iParam0)
{
	switch (Local_389[iParam0 /*22*/].f_21)
	{
		case 0:
			if (func_103())
			{
				if (UNK_0x9E834FAC6CCB49FB(Local_389[iParam0 /*22*/]))
				{
					func_129();
				}
			}
			else if (iParam0 == 2)
			{
				if (iLocal_648[2] && !UNK_0x82FE7F11C00330B0(Local_389[iParam0 /*22*/]))
				{
					UNK_0xA3BF0AA5A2608191(Local_389[iParam0 /*22*/]);
					UNK_0x509B8296EBA9B408(Local_389[iParam0 /*22*/], "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
			}
			break;
		case 1:
			break;
	}
}

void func_152(int iParam0)
{
	func_174(iParam0);
	if (!func_173(iParam0))
	{
		if (func_154(Local_389[iParam0 /*22*/], 1, 50f, 140f, 0, 1, 1, 1) || UNK_0x681F21BF9F7B449B(-1, UNK_0x68F4C0EC296D3901(Local_389[iParam0 /*22*/], true), 100f))
		{
			if ((!UNK_0x9E834FAC6CCB49FB(Local_389[iParam0 /*22*/]) && !UNK_0xC021B60D52071374(Local_389[iParam0 /*22*/])) && !UNK_0xFEAA79CCC9861C2B(Local_389[iParam0 /*22*/]))
			{
				func_125();
			}
			else if (!bLocal_374)
			{
				UNK_0x0B54B0F65E7FEED7(UNK_0xD803B885F5E47A62(), 41);
				UNK_0x0B54B0F65E7FEED7(UNK_0xD803B885F5E47A62(), 33);
				UNK_0x0B54B0F65E7FEED7(UNK_0xD803B885F5E47A62(), 12);
				UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
				UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
			}
		}
	}
	else if (func_153(Local_389[iParam0 /*22*/], UNK_0x16F2683693E537C9(), 5f, 1))
	{
		if (!bLocal_374)
		{
			UNK_0x0B54B0F65E7FEED7(UNK_0xD803B885F5E47A62(), 41);
			UNK_0x0B54B0F65E7FEED7(UNK_0xD803B885F5E47A62(), 33);
		}
	}
}

bool func_153(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, bParam3), UNK_0x68F4C0EC296D3901(bParam1, bParam3)) <= (fParam2 * fParam2);
}

bool func_154(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;

	if (func_6(UNK_0x16F2683693E537C9()) && func_6(bParam0))
	{
		if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
		if (func_168(bParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return true;
		}
		if (!UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
		{
			if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) - UNK_0x68F4C0EC296D3901(bParam0, true) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_167(UNK_0x16F2683693E537C9(), bParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return false;
		}
		else if (func_155(bParam0, fParam3))
		{
			return true;
		}
	}
	return false;
}

bool func_155(bool bParam0, float fParam1)
{
	bool bVar0;

	if (func_6(UNK_0x16F2683693E537C9()) && func_6(bParam0))
	{
		if (func_166(bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
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
				if (func_156(bParam0, fParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_156(bool bParam0, float fParam1)
{
	return func_157(bParam0, UNK_0x16F2683693E537C9(), fParam1, 1, 250, 7);
}

bool func_157(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_165(bParam0, bParam1);
	if (!func_6(bParam0) || !func_6(bParam1))
	{
		if (iVar4 != -1)
		{
			func_164(&(Local_38[iVar4 /*4*/]));
		}
		return false;
	}
	if (!func_161(bParam0, bParam1, fParam2, iParam3))
	{
		return false;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_160();
		if (iVar4 == -1)
		{
			return false;
		}
		Local_38[iVar4 /*4*/].f_1 = bParam0;
		Local_38[iVar4 /*4*/].f_2 = bParam1;
	}
	vVar1 = { UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f) };
	bVar0 = func_158(&(Local_38[iVar4 /*4*/]), vVar1, bParam1, &(Local_38[iVar4 /*4*/].f_3), bParam0, iParam5);
	return (bVar0 || (UNK_0x1C0640BA9A7327B3() - Local_38[iVar4 /*4*/].f_3) < iParam4);
}

int func_158(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar7;
	int iVar8;

	bVar7 = false;
	if (!func_6(bParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_159(bParam4, iParam7) };
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
		func_6(bVar7);
		if (UNK_0x940C1429253D3B1B(bVar7) == bParam4)
		{
			if (bLocal_79)
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
		func_6(bVar7);
		if (UNK_0x405E212DDE472467(bParam4, 0))
		{
			if (UNK_0x96A5FE5834B81CE7(bVar7) == UNK_0x6937EA2286828455(bParam4, 0))
			{
				if (bLocal_79)
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

Vector3 func_159(bool bParam0, int iParam1)
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

int func_160()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if ((Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0) && Local_38[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_161(bool bParam0, bool bParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_163(UNK_0x68F4C0EC296D3901(bParam1, true) - UNK_0x68F4C0EC296D3901(bParam0, true)) };
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
		vVar3 = { func_163(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_162(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return false;
	}
	return true;
}

float func_162(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_163(vector3 vParam0)
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

void func_164(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_165(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if (Local_38[iVar0 /*4*/].f_1 == bParam0 && Local_38[iVar0 /*4*/].f_2 == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_166(bool bParam0)
{
	if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
	{
		return true;
	}
	return false;
}

bool func_167(bool bParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { UNK_0x08D89CE2E20AE305(bParam0) };
	vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) - UNK_0x68F4C0EC296D3901(bParam0, true) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / SYSTEM::VDIST(vVar3, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

bool func_168(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_6(UNK_0x16F2683693E537C9()) && func_6(bParam0))
	{
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar2, 1);
		if (iVar2 == joaat("WEAPON_PETROLCAN"))
		{
			fVar0 = 3f;
			bVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_172(bParam0, bParam1, fVar0, bVar1))
			{
				return true;
			}
			if (func_169(bParam0, bVar1, bParam3, bParam4))
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
				if (func_172(bParam0, bParam1, fVar0, bVar1))
				{
					return true;
				}
			}
			if (func_169(bParam0, bVar1, bParam3, bParam4))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_169(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
				if (func_170(bParam0, bParam1))
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
			if (func_170(bParam0, bParam1))
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

bool func_170(bool bParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;

	if ((((UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_GRENADE"), bParam1, &vVar1, &uVar0, 0) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_SMOKEGRENADE"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_BZGAS"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_STICKYBOMB"), bParam1, &vVar1, &uVar0, 0)) || UNK_0x68E45B0EC23881A7(bParam0, joaat("WEAPON_MOLOTOV"), bParam1, &vVar1, &uVar0, 0))
	{
		if (func_171(bParam0, vVar1, 90f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_171(bool bParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = { func_163(vParam1 - UNK_0x68F4C0EC296D3901(bParam0, true)) };
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
		vVar3 = { func_163(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 5f, 0f) - UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_162(vVar3, vVar0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return false;
	}
	return true;
}

bool func_172(bool bParam0, bool bParam1, float fParam2, bool bParam3)
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

bool func_173(int iParam0)
{
	if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), UNK_0x68E4ADDDDCD7BDDE(Local_389[iParam0 /*22*/], 0f, -2f, 0f), 2f, 3f, 2f, false, true, 0) && !UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
	{
		return true;
	}
	return false;
}

void func_174(int iParam0)
{
	func_194(iParam0);
	func_190(iParam0);
	func_187(iParam0);
	func_184(iParam0);
	if (Local_389[iParam0 /*22*/].f_20 != 7 || Local_389[iParam0 /*22*/].f_20 != 6)
	{
		if (((!bLocal_372 && !UNK_0x9E834FAC6CCB49FB(Local_389[iParam0 /*22*/])) && !UNK_0xC021B60D52071374(Local_389[iParam0 /*22*/])) && !UNK_0xFEAA79CCC9861C2B(Local_389[iParam0 /*22*/]))
		{
			func_175(iParam0);
		}
	}
}

void func_175(int iParam0)
{
	bool bVar0;

	if ((((!func_149(iParam0) && Local_389[iParam0 /*22*/].f_20 != 7) && Local_389[iParam0 /*22*/].f_20 != 6) && !bLocal_374) && Local_389[iParam0 /*22*/].f_17)
	{
		bVar0 = false;
		while (bVar0 <= 11)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, bVar0))
			{
				func_176(iParam0, bVar0);
				Local_389[iParam0 /*22*/].f_17 = 0;
				return;
			}
			bVar0++;
		}
	}
}

void func_176(int iParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 0:
			func_127(iParam0);
			func_125();
			break;
		case 2:
			func_182(iParam0, 6, 0);
			break;
		case 3:
			func_127(iParam0);
			func_125();
			break;
		case 4:
			func_127(iParam0);
			func_125();
			break;
		case 1:
			func_127(iParam0);
			func_125();
			break;
		case 6:
			func_182(iParam0, 2, 0);
			break;
		case 5:
			func_182(iParam0, 5, 0);
			break;
		case 8:
			if (iLocal_378 < 2)
			{
				func_177(iParam0, 3, 0);
			}
			else
			{
				func_127(iParam0);
				func_125();
			}
			break;
		case 7:
			func_177(iParam0, 4, 0);
			break;
		case 10:
			func_182(iParam0, 1, 0);
			break;
		case 13:
			func_182(iParam0, 4, 0);
			break;
		case 11:
			func_182(iParam0, 7, 0);
			break;
	}
}

void func_177(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	if (!func_149(iParam0) || bParam2)
	{
		if (iParam1 == 2)
		{
			if (Local_389[func_150(iParam0) /*22*/].f_20 != 2)
			{
				if (iParam0 == 0)
				{
					bVar0 = "PRA_COPGUNW1";
				}
				else if (iParam0 == 1)
				{
					bVar0 = "PRA_COPGUNW2";
				}
				func_178(iParam0, bVar0, 0, 0);
				iLocal_377++;
			}
		}
		else if (iParam1 == 3)
		{
			if (Local_389[func_150(iParam0) /*22*/].f_20 != 3 || (UNK_0x1C0640BA9A7327B3() - iLocal_376) > 7500)
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 9))
				{
					if (iParam0 == 0)
					{
						bVar0 = "PRA_CWCAR1";
					}
					else if (iParam0 == 1)
					{
						bVar0 = "PRA_CWCAR2";
					}
				}
				else if (iParam0 == 0)
				{
					bVar0 = "PRA_CCWCAR1";
				}
				else if (iParam0 == 1)
				{
					bVar0 = "PRA_CCWCAR2";
				}
				if (iLocal_378 < 2)
				{
					func_178(iParam0, bVar0, 1, 0);
				}
				iLocal_378++;
			}
		}
		else if (iParam1 == 4)
		{
			if (Local_389[func_150(iParam0) /*22*/].f_20 != 4 || (UNK_0x1C0640BA9A7327B3() - iLocal_376) > 7500)
			{
				if (!bLocal_373)
				{
					if (iParam0 == 0)
					{
						bVar0 = "PRA_CWCARNP1";
					}
					else if (iParam0 == 1)
					{
						bVar0 = "PRA_CWCARNP2";
					}
				}
				else if (!bLocal_372)
				{
					if (iParam0 == 0)
					{
						bVar0 = "PRA_CCWCNP1";
					}
					else if (iParam0 == 1)
					{
						bVar0 = "PRA_CCWCNP2";
					}
				}
				else if (iParam0 == 0)
				{
					bVar0 = "PRA_CWCARNP1";
				}
				else if (iParam0 == 1)
				{
					bVar0 = "PRA_CWCARNP2";
				}
				if (iLocal_378 < 2)
				{
					func_178(iParam0, bVar0, 1, 0);
				}
				iLocal_378++;
			}
		}
		else if (iParam1 == 5)
		{
			if (Local_389[func_150(iParam0) /*22*/].f_20 != 5)
			{
				if (iParam0 == 0)
				{
					bVar1 = "S_M_Y_COP_01_WHITE_MINI_03";
					UNK_0xEB0A515D699A7E90(Local_389[iParam0 /*22*/], "CHALLENGE_THREATEN", bVar1, "SPEECH_PARAMS_FORCE", 0);
				}
				else if (iParam0 == 1)
				{
					bVar1 = "S_M_Y_COP_01_BLACK_MINI_04";
					UNK_0xEB0A515D699A7E90(Local_389[iParam0 /*22*/], "CHALLENGE_THREATEN", bVar1, "SPEECH_PARAMS_FORCE", 0);
				}
				else if (iParam0 == 2)
				{
					bVar0 = "PRA_COPSARR3";
					func_178(iParam0, bVar0, 0, 0);
				}
			}
		}
		if (!func_78(Local_389[iParam0 /*22*/], -875674219))
		{
			UNK_0x2ECF845953E95D1B(Local_389[iParam0 /*22*/]);
			UNK_0xF96A174EE26D7588(Local_389[iParam0 /*22*/], UNK_0x16F2683693E537C9(), 0);
		}
		Local_389[iParam0 /*22*/].f_14 = UNK_0x1C0640BA9A7327B3();
		Local_389[func_150(iParam0) /*22*/].f_14 = UNK_0x1C0640BA9A7327B3();
		Local_389[func_150(iParam0) /*22*/].f_18 = 3;
		Local_389[func_150(iParam0) /*22*/].f_20 = 1;
		Local_389[iParam0 /*22*/].f_18 = 3;
		Local_389[iParam0 /*22*/].f_20 = iParam1;
	}
}

void func_178(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;

	if (bParam3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 12))
		{
			return;
		}
	}
	Var0 = { func_181() };
	if (UNK_0xEA6BC48857E0AC4C(bParam1) || UNK_0xEA6BC48857E0AC4C(&Var0))
	{
		func_121(&uLocal_483, bLocal_482, bParam1, 7, 0, 0);
		if (bParam2)
		{
			iLocal_376 = UNK_0x1C0640BA9A7327B3();
		}
		return;
	}
	if ((!UNK_0x7F8A39872A07D2CE(&Var0, bParam1) && !func_66("PR_TAKBACK", 0, 0)) && !func_66("PR_GOVEH", 0, 0))
	{
		func_179();
		func_121(&uLocal_483, bLocal_482, bParam1, 7, 0, 0);
		if (bParam2)
		{
			iLocal_376 = UNK_0x1C0640BA9A7327B3();
		}
	}
}

void func_179()
{
	struct<6> Var0;

	if (func_103())
	{
		Var0 = { func_181() };
		if (UNK_0x7F8A39872A07D2CE(&Var0, "PRA_COPTLK1") || UNK_0x7F8A39872A07D2CE(&Var0, "PRA_COPTLK2"))
		{
			cLocal_666 = { func_181() };
			cLocal_672 = { func_180() };
		}
		if (bLocal_656)
		{
			func_129();
			bLocal_656 = false;
		}
		else
		{
			func_104();
		}
	}
}

struct<6> func_180()
{
	struct<6> Var0;
	int iVar6;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = UNK_0x40EFDB96B3112BA7();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_181()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

void func_182(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	if (!func_149(iParam0) || bParam2)
	{
		if (iParam1 == 1)
		{
			if (Local_389[iParam0 /*22*/].f_19 != 1 || (UNK_0x1C0640BA9A7327B3() - iLocal_376) > 7500)
			{
				if (!bLocal_372)
				{
					if (iParam0 == 0)
					{
						bVar0 = "PRA_COPPRT1";
					}
					else if (iParam0 == 1)
					{
						bVar0 = "PRA_COPPRT2";
					}
				}
				else if (iParam0 == 0)
				{
					bVar0 = "PRA_CPLYCOP1";
				}
				else if (iParam0 == 1)
				{
					bVar0 = "PRA_CPLYCOP2";
				}
				else if (iParam0 == 2)
				{
					bVar0 = "PRA_CPLYCOP3";
				}
				func_178(iParam0, bVar0, 1, 1);
				func_183(iParam0, iParam1, 1);
			}
		}
		else if (iParam1 == 2)
		{
			if (Local_389[iParam0 /*22*/].f_19 != 2 || (UNK_0x1C0640BA9A7327B3() - iLocal_376) > 7500)
			{
				if (iParam0 == 0)
				{
					bVar0 = "PRA_COPPLY1";
				}
				else if (iParam0 == 1)
				{
					bVar0 = "PRA_COPPLY2";
				}
				func_178(iParam0, bVar0, 1, 1);
				func_183(iParam0, iParam1, 1);
			}
		}
		else if (iParam1 == 4)
		{
			if (Local_389[iParam0 /*22*/].f_19 != 4 || (UNK_0x1C0640BA9A7327B3() - iLocal_376) > 7500)
			{
				if (iParam0 == 0)
				{
					bVar0 = "PRA_COPST1";
				}
				else if (iParam0 == 1)
				{
					bVar0 = "PRA_COPST2";
				}
				func_178(iParam0, bVar0, 1, 0);
				func_183(iParam0, iParam1, 0);
			}
		}
		else if (iParam1 == 6)
		{
			if (Local_389[iParam0 /*22*/].f_19 != 6)
			{
				if (iParam0 == 0)
				{
					bVar0 = "PRA_COPGUNR1";
				}
				else if (iParam0 == 1)
				{
					bVar0 = "PRA_COPGUNR2";
				}
				func_178(iParam0, bVar0, 0, 1);
				func_183(iParam0, iParam1, 1);
			}
		}
		else if (iParam1 == 5)
		{
			if (Local_389[iParam0 /*22*/].f_19 != 5)
			{
				if (iParam0 == 0)
				{
					bVar1 = "S_M_Y_COP_01_WHITE_MINI_03";
				}
				else if (iParam0 == 1)
				{
					bVar1 = "S_M_Y_COP_01_BLACK_MINI_04";
				}
				UNK_0xEB0A515D699A7E90(Local_389[iParam0 /*22*/], "BUMP", bVar1, "SPEECH_PARAMS_FORCE", 0);
				func_183(iParam0, iParam1, 0);
			}
		}
		else if (iParam1 == 7)
		{
			if (Local_389[iParam0 /*22*/].f_19 != 7)
			{
				if (iParam0 == 0)
				{
					bVar0 = "PRA_CHP1";
				}
				else if (iParam0 == 1)
				{
					bVar0 = "PRA_CHP2";
				}
				else if (iParam0 == 2)
				{
					bVar0 = "PRA_CHP3";
				}
				func_178(iParam0, bVar0, 1, 0);
				func_183(iParam0, iParam1, 0);
			}
		}
		if (bLocal_372)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 12))
			{
				UNK_0x5D96D8530B3D0904(&(Local_389[iParam0 /*22*/].f_15), 12);
			}
		}
	}
}

void func_183(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 12))
		{
			return;
		}
	}
	if (!func_78(Local_389[iParam0 /*22*/], -875674219))
	{
		UNK_0x2ECF845953E95D1B(Local_389[iParam0 /*22*/]);
		UNK_0xF96A174EE26D7588(Local_389[iParam0 /*22*/], UNK_0x16F2683693E537C9(), 0);
	}
	Local_389[iParam0 /*22*/].f_14 = UNK_0x1C0640BA9A7327B3();
	Local_389[func_150(iParam0) /*22*/].f_14 = UNK_0x1C0640BA9A7327B3();
	Local_389[func_150(iParam0) /*22*/].f_18 = 3;
	Local_389[func_150(iParam0) /*22*/].f_20 = 1;
	Local_389[iParam0 /*22*/].f_19 = iParam1;
	Local_389[iParam0 /*22*/].f_18 = 2;
}

void func_184(int iParam0)
{
	float fVar0;

	if ((!func_149(iParam0) && Local_389[iParam0 /*22*/].f_20 != 6) && Local_389[iParam0 /*22*/].f_20 != 7)
	{
		fVar0 = UNK_0x2877A0CC456B25B0(UNK_0xD803B885F5E47A62());
		if (iParam0 == 0 || iParam0 == 1)
		{
			if (!bLocal_382)
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 340.0758f, -1598.255f, 28.29322f, 346.4939f, -1603.684f, 38.29278f, 6.22f, 0, true, 0))
				{
					if (UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9()) || UNK_0x39E5E51C6E21A69B(UNK_0x16F2683693E537C9()))
					{
						bLocal_382 = true;
						iLocal_381 = UNK_0x1C0640BA9A7327B3();
						return;
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 11))
					{
						if ((((fVar0 > 16f && !Local_389[iParam0 /*22*/].f_16) && !UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 10)) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 344.4482f, -1603.473f, 28.29278f, 345.6222f, -1604.478f, 32.29278f, 3.46f, 0, true, 0)) && UNK_0x3D1053F9EB43B7AD(Local_389[iParam0 /*22*/], Local_309[1 /*7*/], Local_309[1 /*7*/].f_3, Local_309[1 /*7*/].f_6, 0, true, 0))
						{
							func_186(iParam0, 11);
							return;
						}
					}
				}
				if (((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_309[1 /*7*/], Local_309[1 /*7*/].f_3, Local_309[1 /*7*/].f_6, 0, true, 0) && UNK_0x3D1053F9EB43B7AD(Local_389[iParam0 /*22*/], Local_309[1 /*7*/], Local_309[1 /*7*/].f_3, Local_309[1 /*7*/].f_6, 0, true, 0)) && !UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 10)) && !UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 11))
				{
					if ((fVar0 > 12f && !Local_389[iParam0 /*22*/].f_16) && !UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 344.4482f, -1603.473f, 28.29278f, 345.6222f, -1604.478f, 32.29278f, 3.46f, 0, true, 0))
					{
						func_186(iParam0, 11);
					}
				}
			}
			else if ((UNK_0x1C0640BA9A7327B3() - iLocal_381) > 4000)
			{
				bLocal_382 = false;
			}
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_309[5 /*7*/], Local_309[5 /*7*/].f_3, Local_309[5 /*7*/].f_6, 0, true, 0) && UNK_0x3D1053F9EB43B7AD(Local_389[iParam0 /*22*/], Local_309[5 /*7*/], Local_309[5 /*7*/].f_3, Local_309[5 /*7*/].f_6, 0, true, 0))
		{
			if (fVar0 > 10f && !Local_389[iParam0 /*22*/].f_16)
			{
				func_186(iParam0, 11);
			}
			else
			{
				func_185(iParam0, 11);
			}
		}
	}
}

void func_185(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, bParam1))
	{
		UNK_0x0674E58A79778E99(&(Local_389[iParam0 /*22*/].f_15), bParam1);
		Local_389[iParam0 /*22*/].f_17 = 1;
	}
}

void func_186(int iParam0, bool bParam1)
{
	if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, bParam1))
	{
		UNK_0x5D96D8530B3D0904(&(Local_389[iParam0 /*22*/].f_15), bParam1);
		Local_389[iParam0 /*22*/].f_17 = 1;
	}
}

void func_187(int iParam0)
{
	bool bVar0;

	if ((Local_389[iParam0 /*22*/].f_19 != 5 && Local_389[iParam0 /*22*/].f_20 != 6) && Local_389[iParam0 /*22*/].f_20 != 7)
	{
		bVar0 = false;
		if (((func_153(Local_389[iParam0 /*22*/], UNK_0x16F2683693E537C9(), 5f, 1) && !UNK_0x9E834FAC6CCB49FB(Local_389[iParam0 /*22*/])) && !UNK_0xC021B60D52071374(Local_389[iParam0 /*22*/])) && !UNK_0xFEAA79CCC9861C2B(Local_389[iParam0 /*22*/]))
		{
			if (func_189(iParam0, &bVar0) || func_188(iParam0))
			{
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (bVar0)
					{
						func_186(iParam0, 3);
					}
					else if (iParam0 == 2)
					{
						func_186(iParam0, 3);
					}
					else
					{
						func_186(iParam0, 5);
					}
				}
				else
				{
					func_186(iParam0, 3);
				}
			}
		}
	}
	else if (!func_153(Local_389[iParam0 /*22*/], UNK_0x16F2683693E537C9(), 5.5f, 1))
	{
		func_185(iParam0, 5);
		func_185(iParam0, 3);
	}
}

int func_188(int iParam0)
{
	if (iParam0 == 2)
	{
		return 0;
	}
	if (Local_389[iParam0 /*22*/].f_20 != 7)
	{
		if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), UNK_0x68E4ADDDDCD7BDDE(Local_389[iParam0 /*22*/], 1f, -1f, 0f), 1f, 1f, 2f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_189(int iParam0, bool bParam1)
{
	if (UNK_0x1B3D109B39CC2C89(Local_389[iParam0 /*22*/], UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x869EFD0BC0868856(Local_389[iParam0 /*22*/]))
		{
			*bParam1 = 1;
		}
		else
		{
			*bParam1 = 0;
		}
		return 1;
	}
	return 0;
}

void func_190(int iParam0)
{
	int iVar0;

	if (Local_389[iParam0 /*22*/].f_20 != 6 && Local_389[iParam0 /*22*/].f_20 != 7)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Local_389[iParam0 /*22*/].f_16)
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 12))
				{
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_309[iVar0 /*7*/], Local_309[iVar0 /*7*/].f_3, Local_309[iVar0 /*7*/].f_6, 0, true, 0))
					{
						bLocal_382 = true;
						iLocal_381 = UNK_0x1C0640BA9A7327B3();
						if (iVar0 == 4)
						{
							if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								func_193(iParam0, 4);
							}
							else
							{
								func_191(iParam0, 4);
							}
						}
						else
						{
							func_193(iParam0, iVar0);
						}
					}
					else
					{
						func_191(iParam0, iVar0);
					}
				}
			}
			else if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_309[iVar0 /*7*/], Local_309[iVar0 /*7*/].f_3, Local_309[iVar0 /*7*/].f_6, 0, true, 0) || UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 12))
			{
				func_191(iParam0, iVar0);
			}
			iVar0++;
		}
	}
	else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), Local_309[3 /*7*/], Local_309[3 /*7*/].f_3, Local_309[3 /*7*/].f_6, 0, true, 0))
	{
		func_193(iParam0, 3);
	}
	else
	{
		func_191(iParam0, 3);
	}
}

void func_191(int iParam0, int iParam1)
{
	bool bVar0;

	switch (iParam1)
	{
		case 1:
			func_185(iParam0, 10);
			break;
		case 2:
			func_185(iParam0, 6);
			break;
		case 0:
			if (!bLocal_374)
			{
				func_185(iParam0, 1);
			}
			break;
		case 3:
			func_185(iParam0, 14);
			break;
		case 4:
			if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bVar0 = UNK_0x728870EB733D12A1();
				if (func_7(bVar0))
				{
					if (func_192(UNK_0x134B62B726CEC8E6(bVar0)))
					{
						bLocal_373 = true;
					}
					else
					{
						bLocal_373 = false;
					}
					if (!UNK_0x3D1053F9EB43B7AD(bVar0, Local_309[4 /*7*/], Local_309[4 /*7*/].f_3, Local_309[4 /*7*/].f_6, 0, true, 0))
					{
						func_185(iParam0, 8);
						func_185(iParam0, 7);
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 7))
					{
						func_186(iParam0, 7);
					}
				}
				else
				{
					func_185(iParam0, 8);
					func_185(iParam0, 7);
				}
			}
			break;
		case 5:
			func_185(iParam0, 4);
			break;
	}
}

bool func_192(int iParam0)
{
	switch (iParam0)
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

void func_193(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			if ((!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 6) && !UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, true)) && !UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 9))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 10))
				{
					func_186(iParam0, 10);
				}
			}
			break;
		case 2:
			if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, true))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 6))
				{
					func_186(iParam0, 6);
				}
			}
			break;
		case 0:
			if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, true))
			{
				func_186(iParam0, 1);
			}
			break;
		case 3:
			if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 14))
			{
				func_186(iParam0, 14);
			}
			break;
		case 4:
			if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 8))
			{
				if (UNK_0x838876B8BA050A8A(UNK_0x16F2683693E537C9()))
				{
					UNK_0x5D96D8530B3D0904(&(Local_389[iParam0 /*22*/].f_15), 9);
					func_186(iParam0, 8);
				}
				else
				{
					UNK_0x0674E58A79778E99(&(Local_389[iParam0 /*22*/].f_15), 9);
					func_186(iParam0, 8);
				}
			}
			break;
		case 5:
			if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 4))
			{
				if ((!UNK_0x9E834FAC6CCB49FB(Local_389[iParam0 /*22*/]) && !UNK_0xC021B60D52071374(Local_389[iParam0 /*22*/])) && !UNK_0xFEAA79CCC9861C2B(Local_389[iParam0 /*22*/]))
				{
					func_186(iParam0, 4);
				}
			}
			break;
	}
}

void func_194(int iParam0)
{
	if (func_153(UNK_0x16F2683693E537C9(), Local_389[iParam0 /*22*/], 30f, 1))
	{
		if (func_157(Local_389[iParam0 /*22*/], UNK_0x16F2683693E537C9(), 140f, 1, 250, 7))
		{
			Local_389[iParam0 /*22*/].f_16 = 1;
		}
		else
		{
			Local_389[iParam0 /*22*/].f_16 = 0;
		}
	}
}

void func_195(bool bParam0)
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

int func_196(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
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

void func_197()
{
	int iVar0;

	func_205();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Local_389[iVar0 /*22*/].f_18 != 3 && Local_389[iVar0 /*22*/].f_20 != 7)
		{
			func_196(Local_389[iVar0 /*22*/], &(Local_389[iVar0 /*22*/].f_6), -1, 0, 0, 0, -1082130432 /* Float: -1f */, 0, -1, -1, 1);
		}
		else
		{
			func_195(&(Local_389[iVar0 /*22*/].f_6));
		}
		if (func_377(Local_389[iVar0 /*22*/]))
		{
			func_199(iVar0);
			switch (Local_389[iVar0 /*22*/].f_18)
			{
				case 0:
					break;
				case 1:
					func_151(iVar0);
					break;
				case 2:
					func_198(iVar0);
					break;
				case 3:
					func_120(iVar0);
					break;
			}
		}
		else
		{
			if (UNK_0xC844350D5D58C99A(Local_389[iVar0 /*22*/]))
			{
				if (func_7(UNK_0x728870EB733D12A1()))
				{
					if (UNK_0xB87D13D0C064E9D1(Local_389[iVar0 /*22*/], UNK_0x728870EB733D12A1(), 1))
					{
						UNK_0xE910A68AA670B4AA(Local_389[iVar0 /*22*/]);
						func_125();
					}
				}
				if (UNK_0xB87D13D0C064E9D1(Local_389[iVar0 /*22*/], UNK_0x16F2683693E537C9(), 1))
				{
					UNK_0xE910A68AA670B4AA(Local_389[iVar0 /*22*/]);
					func_125();
				}
				Local_389[iVar0 /*22*/].f_18 = 1;
				Local_389[iVar0 /*22*/].f_21 = 0;
			}
			func_34(&(Local_389[iVar0 /*22*/].f_6));
			func_208(&(Local_389[iVar0 /*22*/]), 1, 0, 1);
		}
		iVar0++;
	}
}

void func_198(int iParam0)
{
	bool bVar0;
	float fVar1;

	switch (Local_389[iParam0 /*22*/].f_19)
	{
		case 1:
			if (UNK_0x1C0640BA9A7327B3() - Local_389[iParam0 /*22*/].f_14) > UNK_0x09AC81E49EA267F7(2500, 3000)
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 362.6359f, -1581.256f, 31.54774f, 358.1074f, -1586.615f, 34.29774f, 2f, 0, true, 0))
				{
					func_127(iParam0);
					func_125();
					return;
				}
				if (func_124(iParam0, 12))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					if ((UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 13) && (UNK_0x1C0640BA9A7327B3() - iLocal_376) > 2500) && !bLocal_661)
					{
						if (iParam0 == 0)
						{
							bVar0 = "PRA_COPST1";
						}
						else if (iParam0 == 1)
						{
							bVar0 = "PRA_COPST2";
						}
						func_121(&uLocal_483, bLocal_482, bVar0, 7, 0, 0);
						UNK_0x0674E58A79778E99(&(Local_389[iParam0 /*22*/].f_15), 13);
						UNK_0x0674E58A79778E99(&(Local_389[func_150(iParam0) /*22*/].f_15), 13);
						bLocal_661 = true;
					}
					Local_389[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		case 2:
			if (UNK_0x1C0640BA9A7327B3() - Local_389[iParam0 /*22*/].f_14) > UNK_0x09AC81E49EA267F7(1500, 2000)
			{
				if (func_124(iParam0, 12))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_389[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		case 4:
			if (UNK_0x1C0640BA9A7327B3() - Local_389[iParam0 /*22*/].f_14) > UNK_0x09AC81E49EA267F7(2500, 3000)
			{
				if (func_124(iParam0, 12))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_389[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		case 5:
			if (UNK_0x1C0640BA9A7327B3() - Local_389[iParam0 /*22*/].f_14) > UNK_0x09AC81E49EA267F7(2500, 3000)
			{
				if (!func_153(Local_389[iParam0 /*22*/], UNK_0x16F2683693E537C9(), 1.5f, 1))
				{
					UNK_0x0674E58A79778E99(&(Local_389[iParam0 /*22*/].f_15), 5);
				}
				if (func_124(iParam0, 12))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_389[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
		case 6:
			if (UNK_0x1C0640BA9A7327B3() - Local_389[iParam0 /*22*/].f_14) > UNK_0x09AC81E49EA267F7(5000, 6000)
			{
				if (func_124(iParam0, 12))
				{
					func_134(iParam0);
					return;
				}
				else if (iLocal_377 > 0)
				{
					func_127(iParam0);
					func_125();
				}
			}
			break;
		case 7:
			if (UNK_0x1C0640BA9A7327B3() - Local_389[iParam0 /*22*/].f_14) > UNK_0x09AC81E49EA267F7(2500, 3000)
			{
				fVar1 = UNK_0x2877A0CC456B25B0(UNK_0xD803B885F5E47A62());
				if (((fVar1 < 12f && !Local_389[iParam0 /*22*/].f_16) && !UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 10)) && !func_78(Local_389[iParam0 /*22*/], -875674219))
				{
					UNK_0x0674E58A79778E99(&(Local_389[iParam0 /*22*/].f_15), 11);
				}
				if (func_124(iParam0, 12))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_389[iParam0 /*22*/].f_17 = 1;
				}
			}
			break;
	}
}

void func_199(int iParam0)
{
	func_200(iParam0);
	func_184(iParam0);
	func_175(iParam0);
}

void func_200(int iParam0)
{
	func_194(iParam0);
	func_203(iParam0);
	func_190(iParam0);
	if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, true))
	{
		if ((Local_389[iParam0 /*22*/].f_20 != 6 && Local_389[iParam0 /*22*/].f_20 != 7) && !bLocal_374)
		{
			if (!bLocal_372 && func_63(Local_389[iParam0 /*22*/], Local_389[iParam0 /*22*/].f_1, 6f))
			{
				func_202(iParam0);
			}
			func_187(iParam0);
			func_201(iParam0);
		}
	}
}

void func_201(int iParam0)
{
	bool bVar0;

	if (!bLocal_661)
	{
		bVar0 = UNK_0x5F596B0E13677FE9(UNK_0x16F2683693E537C9());
		if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 13))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 10))
			{
				if (Local_389[iParam0 /*22*/].f_16)
				{
					if (bVar0)
					{
						func_186(iParam0, 13);
					}
					else
					{
						func_185(iParam0, 13);
					}
				}
			}
		}
		else if (func_133(iParam0))
		{
			if (bVar0)
			{
				if (!func_153(UNK_0x16F2683693E537C9(), Local_389[iParam0 /*22*/], 10f, 1))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 10) && !UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 6))
					{
						UNK_0x0674E58A79778E99(&(Local_389[iParam0 /*22*/].f_15), 13);
					}
				}
			}
			else
			{
				func_185(iParam0, 13);
			}
		}
	}
}

void func_202(int iParam0)
{
	bool bVar0;

	bVar0 = UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 4);
	if (Local_389[iParam0 /*22*/].f_20 != 6 && Local_389[iParam0 /*22*/].f_20 != 7)
	{
		if (func_153(UNK_0x16F2683693E537C9(), Local_389[iParam0 /*22*/], 12f, 1))
		{
			if (bVar0)
			{
				if (Local_389[iParam0 /*22*/].f_16)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 2))
					{
						func_186(iParam0, 2);
					}
				}
			}
			else
			{
				func_185(iParam0, 2);
			}
		}
		else if (bVar0)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 10))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Local_389[iParam0 /*22*/].f_15, 2))
				{
					func_186(iParam0, 2);
				}
			}
			else
			{
				func_185(iParam0, 2);
			}
		}
		else
		{
			func_185(iParam0, 2);
		}
	}
}

void func_203(int iParam0)
{
	if (!func_173(iParam0))
	{
		if (bLocal_374)
		{
			func_125();
		}
		else if (func_154(Local_389[iParam0 /*22*/], 1, 70f, 150f, 0, 1, 0, 1) || UNK_0x681F21BF9F7B449B(-1, UNK_0x68F4C0EC296D3901(Local_389[iParam0 /*22*/], true), 100f))
		{
			func_125();
		}
		else if (func_204(func_150(iParam0)))
		{
			func_125();
		}
	}
}

bool func_204(int iParam0)
{
	bool bVar0;

	if (func_377(Local_389[iParam0 /*22*/]))
	{
		if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
		{
			bVar0 = 20f;
		}
		else
		{
			bVar0 = 3f;
		}
		if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), Local_389[iParam0 /*22*/], bVar0, bVar0, bVar0, 0, 1, 0))
		{
			if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), Local_389[iParam0 /*22*/]) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), Local_389[iParam0 /*22*/]))
			{
				if (Local_389[iParam0 /*22*/].f_16)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_205()
{
	if ((Local_389[0 /*22*/].f_18 == 1 && Local_389[1 /*22*/].f_18 == 1) && Local_389[2 /*22*/].f_18 == 1)
	{
		if ((((func_377(Local_389[0 /*22*/]) && func_377(Local_389[1 /*22*/])) && func_12(&uLocal_92, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true))) && func_63(Local_389[0 /*22*/], Local_389[0 /*22*/].f_1, 3f)) && func_63(Local_389[1 /*22*/], Local_389[1 /*22*/].f_1, 3f))
		{
			if ((func_124(0, 15) && func_124(1, 15)) && !iLocal_648[iLocal_657])
			{
				if (func_206(0, &(iLocal_648[iLocal_657]), sLocal_652[iLocal_657], 10f, 4))
				{
					iLocal_657++;
					if (iLocal_657 == 2)
					{
						iLocal_657 = 0;
					}
					bLocal_656 = true;
				}
			}
		}
		else if ((func_377(Local_389[2 /*22*/]) && func_12(&uLocal_144, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true))) && func_63(Local_389[2 /*22*/], Local_389[2 /*22*/].f_1, 3f))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_389[2 /*22*/].f_15, 2) && !UNK_0xEAE0D21A50E6C7F4(Local_389[2 /*22*/].f_15, 4))
			{
				if (func_206(0, &(iLocal_648[2]), "PRA_COPTLK3", 10f, 4))
				{
					bLocal_656 = true;
				}
			}
		}
		else if (bLocal_656 && func_103())
		{
			func_53();
			bLocal_656 = false;
		}
	}
}

bool func_206(bool bParam0, var uParam1, char* sParam2, float fParam3, int iParam4)
{
	if (!*uParam1)
	{
		if (!func_103() && UNK_0x0F1CCD77290EE12F())
		{
			if (func_131(bParam0, fParam3) && !func_66("PR_TAKBACK", 0, 0))
			{
				*uParam1 = func_207(&uLocal_483, bLocal_482, sParam2, iParam4, 0, 0, 0);
			}
		}
	}
	else if (!func_131(bParam0, fParam3))
	{
		func_104();
	}
	return *uParam1;
}

int func_207(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_122(uParam0, 145, bParam1, iParam4, iParam5, iParam6);
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
	return func_137(sParam2, iParam3, 0);
}

void func_208(bool bParam0, bool bParam1, int iParam2, int iParam3)
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

void func_209()
{
	var uVar0;

	func_91(&Local_456, &uVar0, &bLocal_82, &uLocal_357, &uLocal_356, vLocal_364, 0, 0, 1090519040 /* Float: 8f */);
	func_118();
	func_106();
	switch (iLocal_81)
	{
		case 0:
			if (func_71(iLocal_80, bLocal_28))
			{
				func_79(&uLocal_356, Local_456, 1);
				func_67("PR_GOVEH", &iLocal_355);
				UNK_0xC92DB9682A650680("FHPRA_START");
				if (UNK_0x76395FF5E8D5E643(Global_40554[13 /*31*/]))
				{
					UNK_0xC9F68C22171478B8(Global_40554[13 /*31*/], 1);
				}
				iLocal_678 = 0;
				UNK_0x8B4C4CA774181102(2f, 10f, 4);
				iLocal_81 = 1;
			}
			break;
		case 1:
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) < 3)
			{
				if (func_377(Local_389[2 /*22*/]))
				{
					if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
					{
						if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 371.9393f, -1604.252f, 45.603f, 399.8371f, -1627.065f, 31.75287f, 32.73f, 0, true, 2) || UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
						{
							UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 3, 0);
							UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
						}
					}
				}
			}
			if ((UNK_0x39E5E51C6E21A69B(UNK_0x16F2683693E537C9()) && iLocal_678 == 0) && func_132(Local_456, UNK_0x16F2683693E537C9(), 1) < 100f)
			{
				UNK_0x8B4C4CA774181102(7f, 7f, 4);
				iLocal_678 = 1;
			}
			if (func_7(Local_456))
			{
				if ((bLocal_82 == 1 || bLocal_82 == 2) || bLocal_82 == 3)
				{
					UNK_0x8B4C4CA774181102(10f, 6f, 4);
					iLocal_81 = 2;
				}
				if (bLocal_374)
				{
					if (func_12(&uLocal_196, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)))
					{
						UNK_0x1E69CBC4A01168BD(UNK_0xD803B885F5E47A62());
					}
				}
			}
			break;
		case 2:
			func_34(&uLocal_356);
			func_99(0);
			break;
		case 3:
			if (func_7(Local_456))
			{
				UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_456, -1);
			}
			func_36(1, 1, 1);
			iLocal_81 = 1;
			break;
	}
}

void func_210()
{
	switch (iLocal_81)
	{
		case 0:
			if (func_71(iLocal_80, 0))
			{
				func_361(78);
				UNK_0x34D79252800B23FF(1);
				UNK_0x51B096AAC60548C1(0.5f);
				UNK_0x745CE398A4B0A3C6(369.0115f, -1609.116f, 28.2928f, 5f, 0);
				UNK_0x745CE398A4B0A3C6(Local_389[0 /*22*/].f_1, 5f, 0);
				if (func_273(UNK_0x16F2683693E537C9(), 12, 4) || func_273(UNK_0x16F2683693E537C9(), 12, 3))
				{
					bLocal_372 = true;
				}
				func_224();
				func_222(78);
				if (func_379())
				{
					func_219(0, -1, 1);
					func_37(500, 1);
					iLocal_81 = 2;
				}
				else
				{
					if (func_30(0))
					{
						func_74(UNK_0x16F2683693E537C9(), 408.3364f, -1567.429f, 28.2723f, 128.2512f);
						func_211(408.3364f, -1567.429f, 28.2723f, 50f, 12, 5000, 0, 0);
						func_37(500, 1);
					}
					iLocal_81 = 2;
				}
			}
			break;
		case 2:
			func_99(0);
			break;
	}
}

void func_211(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0xF0681B7E63456337(vParam0, iParam3, iParam4, 127);
	if (UNK_0xBD054C76E6F4158B(iVar0))
	{
		iVar1 = (UNK_0x1C0640BA9A7327B3() + iParam5);
		while (!UNK_0x07441E56330B63E3(iVar0) && UNK_0x1C0640BA9A7327B3() < iVar1)
		{
			if (bParam7)
			{
				func_213(0);
			}
			if (bParam6)
			{
				func_212();
			}
			SYSTEM::WAIT(0);
		}
		if (UNK_0x1C0640BA9A7327B3() < iVar1)
		{
		}
		UNK_0x51F8DBE54C75AE47(iVar0);
	}
}

void func_212()
{
	Global_22211.f_6 = 1;
}

void func_213(int iParam0)
{
	if (func_218())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_217(0))
		{
			func_214(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_214(int iParam0)
{
	if (func_218())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_216())
		{
			func_215(1, 1);
		}
		else
		{
			func_215(0, 0);
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
	if (!func_47())
	{
		Global_19486.f_1 = 3;
	}
}

void func_215(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_217(0))
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

bool func_216()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_217(int iParam0)
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

bool func_218()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_219(bool bParam0, bool bParam1, int iParam2)
{
	if (func_379() && func_221())
	{
		while (Global_98739 != 6)
		{
			SYSTEM::WAIT(0);
		}
		UNK_0x21387C9EECC2B220(false);
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0xFE76348A7A0CEF66(UNK_0x16F2683693E537C9());
			}
		}
		if (bParam0 != 0)
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xC844350D5D58C99A(bParam0))
				{
					if (UNK_0xDF1306B443CD3D15(bParam0, 0))
					{
						if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam0, 0))
						{
							UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), bParam0, bParam1);
							UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
							UNK_0x2FB9A57162E54BAB(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			}
		}
		UNK_0x17EFA7496495F972();
		func_220(0);
	}
}

void func_220(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 13);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_98744.f_20), 13);
	}
}

bool func_221()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

void func_222(int iParam0)
{
	Global_94599 = 0;
	switch (iParam0)
	{
		case 72:
			func_223(2);
			func_223(4);
			break;
		case 73:
			func_223(0);
			func_223(1);
			func_223(7);
			break;
		case 92:
			func_223(10);
			func_223(9);
			func_223(13);
			func_223(6);
			break;
		case 68:
			func_223(11);
			break;
		case 78:
			func_223(14);
			break;
		case 79:
			func_223(3);
			break;
		default:
			break;
	}
}

void func_223(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&Global_94599, bParam0);
}

void func_224()
{
	bool bVar0;

	bVar0 = UNK_0x728870EB733D12A1();
	if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			func_225(bVar0, UNK_0x68F4C0EC296D3901(bVar0, true), UNK_0xD9522BA9E27E1349(bVar0), 24, 0);
		}
	}
}

void func_225(bool bParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (UNK_0xC844350D5D58C99A(Global_75441.f_484[25]) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[25], 0))
			{
				if (Global_75441.f_484[25] == bParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((UNK_0x56E1CD81AE700E98(bParam0) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("BUS")) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("TOURBUS"))
			{
				return;
			}
		}
		func_272(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_267(bParam0, &Var0);
		if (func_11(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
			iParam4 = UNK_0xD9522BA9E27E1349(bParam0);
		}
		if (iParam5 == 24)
		{
			if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) != joaat("VEHICLE_GEN_CONTROLLER"))
			{
				Global_76429 = UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C());
			}
		}
		func_260(iParam5, &Var0, vParam1, iParam4, func_266(bParam0));
		func_226(iParam5, bParam0, 0);
	}
}

void func_226(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_257(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 12) && !UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_75441.f_555[0 /*21*/].f_4 != UNK_0x134B62B726CEC8E6(bParam1))
		{
			return;
		}
	}
	if (Global_76348 != -1 && Global_76348 != iParam0)
	{
		return;
	}
	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		if (UNK_0xDF1306B443CD3D15(bParam1, 0))
		{
			if (!UNK_0xAF6690C489CC6203(bParam1))
			{
				UNK_0x73270B3C9CC833FD(bParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_111638.f_32744.f_4801 = func_246();
			}
			if (bParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_245(iParam0);
					if ((UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0)) && bParam1 != bVar0)
					{
						func_227(bVar0, 145);
					}
				}
				Global_76347 = bParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_227(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_228(bParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		bVar0 = UNK_0xA30B8362589C124A(bParam0, -1, 0);
		if (!UNK_0xC844350D5D58C99A(bVar0))
		{
			bVar0 = UNK_0xB0326EA5AFB4EFA7(bParam0, -1);
		}
		if (UNK_0xC844350D5D58C99A(bVar0) && !UNK_0xEB6A8945D1AC98A1(bVar0))
		{
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_ZERO"))
			{
				iParam1 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_ONE"))
			{
				iParam1 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_TWO"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111638.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (UNK_0x134B62B726CEC8E6(bParam0) == Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!UNK_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (UNK_0x7F8A39872A07D2CE(UNK_0x7888A5D2621AAF2D(bParam0), &(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111638.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (UNK_0x134B62B726CEC8E6(bParam0) == Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!UNK_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (UNK_0x7F8A39872A07D2CE(UNK_0x7888A5D2621AAF2D(bParam0), &(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = bParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_267(bParam0, &(Global_111638.f_32744.f_5510));
}

bool func_228(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_243(bParam0, 0, 0)) || func_243(bParam0, 1, 0)) || func_243(bParam0, 2, 0)) || func_266(bParam0) != 145) || func_242(bParam0)) || func_241(bParam0)) || func_240(bParam0)) || func_239(bParam0)) || !func_229(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_241(bParam0))
		{
		}
		if (func_241(bParam0))
		{
		}
		if (func_243(bParam0, 0, 0))
		{
		}
		if (func_243(bParam0, 1, 0))
		{
		}
		if (func_243(bParam0, 2, 0))
		{
		}
		if (func_266(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_229(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_230(bParam0, 0))
	{
		return false;
	}
	if (((UNK_0xA7082C42B8809BF2(bParam0) || UNK_0xC41A9202669A24C4(bParam0)) || UNK_0xAFB8495D36825275(bParam0)) || UNK_0xA7D7011F9888A365(bParam0))
	{
		return false;
	}
	switch (bParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("RENTALBUS"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("DOCKTRAILER"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("BULLDOZER"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("MONSTER"):
			return false;
	}
	return true;
}

bool func_230(bool bParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (bParam0 == 0)
	{
		return false;
	}
	if (!UNK_0x4DAC2AD66FE0E696(bParam0))
	{
		return false;
	}
	if (((((bParam0 == joaat("DOMINATOR2") && !UNK_0x8CD06866876216F2()) || (bParam0 == joaat("BUFFALO3") && !UNK_0x8CD06866876216F2())) || (bParam0 == joaat("GAUNTLET2") && !UNK_0x8CD06866876216F2())) || bParam0 == joaat("BLIMP2")) || (bParam0 == joaat("STALION2") && !UNK_0x8CD06866876216F2()))
	{
		if (!func_238())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < UNK_0x6C7B93D0F54679BE())
		{
			if (UNK_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (bParam0 == Var1.f_1)
				{
					if (UNK_0x232048AB4B0E0259(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam0 == joaat("BLIMP"))
	{
		if ((((!func_237() && !func_236()) && !func_235()) && !func_234()) && !func_238())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_235())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_233(bParam0))
		{
			return false;
		}
	}
	if (!func_231(bParam0))
	{
		return false;
	}
	return true;
}

bool func_231(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_232())
	{
		return true;
	}
	UNK_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return true;
	}
	switch (bParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		case joaat("WASTELANDER"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		default:
			return true;
	}
	if (!UNK_0x437ABF4F514F6471(&cVar2))
	{
		return false;
	}
	return true;
}

bool func_232()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_233(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2513258)
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = UNK_0xDD0E7998AE8AD485();
	if (bParam0 == joaat("BTYPE3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("FACTION3"))
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIRGO3") || bParam0 == joaat("VIRGO2"))
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SABREGT2"))
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO5"))
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MINIVAN2"))
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEVEN70"))
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PFISTER811"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("BF400"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BRIOSO"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CONTENDER"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LE7B"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OMNIS"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPOS"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GARGOYLE"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAMPA2"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRUS"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHEAVA"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LYNX"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STALION2"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BUFFALO3"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DEFILER"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ESSKEY"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AVARUS"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VORTEX"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHOTARO"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHIMERA"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPTOR"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DAEMON2"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER4"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO6"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOUGA2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO3"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BAGGER"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SANCTUS"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MANCHEZ"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RATBIKE"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("VOLTIC2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUINER2"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE4"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE5"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PHANTOM2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WASTELANDER"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER5"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET3"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY2"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR2"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PENETRATOR"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER2"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEMPESTA"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GP1"))
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("INFERNUS2"))
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUSTON"))
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TURISMO2"))
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("XA21"))
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEETAH2"))
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORERO"))
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAGNER"))
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ARDENT"))
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOGUL"))
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ROGUE"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STARLING"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEABREEZE"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULA"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PYRO"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOLOTOK"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NOKOTA"))
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUNTER"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAVOK"))
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOWARD"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CYCLONE"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISIONE"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIGILANTE"))
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RETINUE"))
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DELUXO"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STROMBERG"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIOT2"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KHANJALI"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AKULA"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("THRUSTER"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BARRAGE"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VOLATOL"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET4"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NEON"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STREITER"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SENTINEL3"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOSEMITE"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SC1"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AUTARCH"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GT500"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUSTLER"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("REVOLTER"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PARIAH"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAIDEN"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SAVESTRA"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIATA"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HERMES"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET5"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("Z190"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISERIS"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KAMACHO"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GB200"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGALOA"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELLIE"))
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ISSI3"))
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MICHELLI"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FLASHGT"))
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOTRING"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEZERACT"))
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRANT"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAIPAN"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ENTITY2"))
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("JESTER3"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEBUREK"))
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CARACARA"))
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEASPARROW"))
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("TERBYTE"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PBUS2"))
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MULE4"))
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("POUNDER2"))
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SWINGER"))
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MENACER"))
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCRAMJET"))
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PATRIOT2"))
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STAFFORD"))
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLIMP3"))
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MONSTER3"))
	{
	}
	else if (bParam0 == joaat("CERBERUS"))
	{
	}
	else if (bParam0 == joaat("CERBERUS2"))
	{
	}
	else if (bParam0 == joaat("CERBERUS3"))
	{
	}
	else if (bParam0 == joaat("BRUTUS"))
	{
	}
	else if (bParam0 == joaat("BRUTUS2"))
	{
	}
	else if (bParam0 == joaat("BRUTUS3"))
	{
	}
	else if (bParam0 == joaat("SCARAB"))
	{
	}
	else if (bParam0 == joaat("SCARAB2"))
	{
	}
	else if (bParam0 == joaat("SCARAB3"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (bParam0 == joaat("ZR380"))
	{
	}
	else if (bParam0 == joaat("ZR3802"))
	{
	}
	else if (bParam0 == joaat("ZR3803"))
	{
	}
	else if (bParam0 == joaat("IMPALER"))
	{
	}
	else if (bParam0 == joaat("DEVESTE"))
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TOROS"))
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIQUE"))
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTO"))
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DEVIANT"))
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAMOS"))
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULIP"))
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RCBANDITO"))
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LOCUST"))
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OUTLAW"))
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FIRETRUK"))
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BURRITO2"))
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE"))
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STOCKADE"))
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LGUARD"))
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER2"))
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLUB"))
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_234()
{
	return false;
}

bool func_235()
{
	return true;
}

bool func_236()
{
	return true;
}

bool func_237()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_238()
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

bool func_239(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_230(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_240(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == bParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_241(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]) && UNK_0xDF1306B443CD3D15(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == bParam0 && UNK_0x134B62B726CEC8E6(Global_96075[iVar0]) == UNK_0x134B62B726CEC8E6(bParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_242(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(Global_75441.f_484[24]))
	{
		if (bParam0 == Global_75441.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (bParam0 == Global_75441.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_243(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_244(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_244(int iParam0, int iParam1, char* sParam2, int iParam3)
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

int func_245(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

var func_246()
{
	var uVar0;

	func_256(&uVar0, UNK_0x4460E481B9E33ADA());
	func_255(&uVar0, UNK_0x8D199E381D262EEF());
	func_254(&uVar0, UNK_0xD8A54335F18763BA());
	func_249(&uVar0, UNK_0x972A296334C9D57B());
	func_248(&uVar0, UNK_0x118229AD063C3C1D());
	func_247(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_247(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_248(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_249(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_253(*uParam0);
	iVar1 = func_251(*uParam0);
	if (iParam1 < 1 || iParam1 > func_250(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_250(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
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

int func_251(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_252(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_252(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_253(int iParam0)
{
	return iParam0 & 15;
}

void func_254(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_257(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_258(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_258(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_258(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_258(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_258(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_258(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_258(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_258(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_258(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			break;
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			break;
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			break;
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			break;
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_13 = 404;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			iVar0 = 1;
			break;
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_238())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_238())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA")) || uParam0->f_4 == joaat("LUXOR")) || uParam0->f_4 == joaat("SHAMAL")) || uParam0->f_4 == joaat("TITAN")) || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_11(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
	{
		if (!func_11(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_11(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_258(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_25(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_259(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_259(int iParam0, var uParam1, int iParam2)
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

void func_260(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_257(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
		{
			func_265(iParam0);
			func_264(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]));
			if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 11))
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0 /*21*/].f_14] = iParam5;
			}
			else
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_261(iParam0, 1);
		}
	}
}

void func_261(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_263(iParam0, 0))
		{
			func_262(iParam0, 1, 0);
			func_262(iParam0, 2, 0);
			func_262(iParam0, 3, 0);
			func_262(iParam0, 4, 0);
			func_262(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_262(iParam0, 0, 0);
	}
}

void func_262(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), bParam1);
	}
}

bool func_263(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_264(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_265(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_257(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			func_261(iParam0, 0);
		}
	}
}

int func_266(bool bParam0)
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

void func_267(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_271(uParam1);
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
		if (uParam1->f_65 == -1 && !func_270(uParam1->f_66))
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
		func_269(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_268(iVar0 + 1));
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

int func_268(int iParam0)
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

int func_269(bool bParam0, var uParam1, var uParam2)
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

bool func_270(int iParam0)
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

void func_271(var uParam0)
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

void func_272(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_265(iParam0);
	func_261(iParam0, 0);
}

bool func_273(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;

	if (UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		return false;
	}
	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	Global_76434[1 /*14*/] = { func_293(iVar0, iParam1, bParam2, -1) };
	if (!UNK_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_289(iVar0, bParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_273(bParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_285(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_273(bParam0, 14, uVar22[iVar3]))
							{
								bVar4 = false;
								while (bVar4 <= 19)
								{
									Global_76434[2 /*14*/] = { func_293(iVar0, 14, bVar4, -1) };
									if (Global_76434[2 /*14*/].f_12 == iVar3)
									{
										if (func_273(bParam0, 14, bVar4))
										{
											if (!func_277(iVar0, bParam2, 14, bVar4, &uVar5, &(Global_76434[2 /*14*/])))
											{
												return false;
											}
										}
									}
									bVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						bVar1 = func_275(bParam0, iVar2);
						Global_76434[2 /*14*/] = { func_293(iVar0, iVar2, bVar1, -1) };
						if (!func_277(iVar0, bParam2, iVar2, bVar1, &uVar5, &(Global_76434[2 /*14*/])))
						{
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13)
	{
		uVar33 = { func_285(iVar0, bParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_273(bParam0, 14, uVar33[iVar32]))
			{
				return false;
			}
			iVar32++;
		}
		return true;
	}
	else if (iParam1 == 14)
	{
		if (UNK_0x98F1B512A2CC07C5(bParam0, Global_76434[1 /*14*/].f_12) == Global_76434[1 /*14*/].f_3 && (UNK_0x22286A85EDEAEC56(bParam0, Global_76434[1 /*14*/].f_12) == Global_76434[1 /*14*/].f_4 || Global_76434[1 /*14*/].f_3 == -1))
		{
			return true;
		}
	}
	else if (Global_76434[1 /*14*/].f_3 == UNK_0x36C584991B4C183F(bParam0, func_274(iParam1)) && Global_76434[1 /*14*/].f_4 == UNK_0xDADA8E1DD0D0D9D9(bParam0, func_274(iParam1)))
	{
		return true;
	}
	return false;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 6:
			return 6;
		case 5:
			return 5;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 1:
			return 1;
		case 7:
			return 7;
		case 11:
			return 11;
	}
	return 0;
}

int func_275(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		return -99;
	}
	bVar0 = func_274(iParam1);
	iVar1 = UNK_0x36C584991B4C183F(bParam0, bVar0);
	iVar2 = UNK_0xDADA8E1DD0D0D9D9(bParam0, bVar0);
	return func_276(bParam0, iVar1, iVar2, iParam1);
}

int func_276(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	bVar0 = func_274(iParam3);
	iVar1 = UNK_0xD2C792E5A65B6BF1(bParam0, bVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = UNK_0x0F84621831DD8D8A(bParam0, bVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

bool func_277(int iParam0, bool bParam1, int iParam2, bool bParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;

	if ((*uParam4)[iParam2] == bParam3)
	{
		return true;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return true;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((bParam3 == 0 || bParam3 == 1) || bParam3 == 2) || bParam3 == 3) || bParam3 == 4) || bParam3 == 5) || bParam3 == 6) || bParam3 == 7) || bParam3 == 8)
		{
			return true;
		}
	}
	if (bParam3 == -99 || uParam5->f_1 == -1)
	{
		return true;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_285(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == bParam3)
			{
				return true;
			}
			iVar10++;
		}
	}
	if (func_284(iParam0, iParam2, bParam3))
	{
		return true;
	}
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		if (func_283(iParam0, iParam2, bParam3, -1))
		{
			if ((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 10) || bParam1 == 11) || bParam1 == 12) || bParam1 == 18) || bParam1 == 50)
			{
				return false;
			}
			return true;
		}
		else if (func_282(iParam0, iParam2, bParam3, -1))
		{
			if (((((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 4) || bParam1 == 5) || bParam1 == 10) || bParam1 == 11) || bParam1 == 12) || bParam1 == 14) || bParam1 == 18) || bParam1 == 50)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_278(iParam0, iParam2, bParam3, -1))
		{
			if (((((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 4) || bParam1 == 5) || bParam1 == 10) || bParam1 == 11) || bParam1 == 12) || bParam1 == 14) || bParam1 == 18) || bParam1 == 50)
			{
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		if (func_283(iParam0, iParam2, bParam3, -1))
		{
			if ((bParam1 == 3 || bParam1 == 5) || bParam1 == 7)
			{
				return false;
			}
			return true;
		}
		else if (func_282(iParam0, iParam2, bParam3, -1))
		{
			if ((((bParam1 == 3 || bParam1 == 5) || bParam1 == 7) || bParam1 == 8) || bParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (bParam3 == 9)
					{
						if (bParam1 == 8 || bParam1 == 21)
						{
							return true;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return false;
				}
				if (((bParam1 == 43 || bParam1 == 44) || bParam1 == 45) || bParam1 == 46)
				{
					if (bParam3 >= 5 && bParam3 <= 10)
					{
						return false;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((bParam1 == 43 || bParam1 == 44) || bParam1 == 45) || bParam1 == 46)
				{
					if (bParam3 >= 26 && bParam3 <= 39)
					{
						return false;
					}
				}
			}
			return true;
		}
		else if (func_278(iParam0, iParam2, bParam3, -1))
		{
			if (((((bParam1 == 3 || bParam1 == 3) || bParam1 == 5) || bParam1 == 7) || bParam1 == 8) || bParam1 == 21)
			{
				return false;
			}
			return true;
		}
		else if (iParam2 == 14)
		{
			if (bParam3 >= 159 && bParam3 <= 174)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		if (bParam1 == 2)
		{
			if (iParam2 == 14 && bParam3 == 0)
			{
				return true;
			}
		}
		if (func_283(iParam0, iParam2, bParam3, -1))
		{
			if (((((bParam1 == 1 || bParam1 == 2) || bParam1 == 6) || bParam1 == 8) || bParam1 == 45) || bParam1 == 12)
			{
				return false;
			}
			return true;
		}
		else if (func_282(iParam0, iParam2, bParam3, -1))
		{
			if (((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 3) || bParam1 == 6) || bParam1 == 8) || bParam1 == 11) || bParam1 == 45) || bParam1 == 12)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_278(iParam0, iParam2, bParam3, -1))
		{
			if ((((((bParam1 == 1 || bParam1 == 2) || bParam1 == 3) || bParam1 == 6) || bParam1 == 8) || bParam1 == 11) || bParam1 == 12)
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

bool func_278(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 == 16)
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 14:
					if ((bParam2 == 40 || (bParam2 >= 41 && bParam2 <= 56)) || (bParam2 >= 64 && bParam2 <= 79))
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 14:
					if ((bParam2 >= 17 && bParam2 <= 18) || (bParam2 >= 71 && bParam2 <= 86))
					{
						return true;
					}
					break;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 >= 18 && bParam2 <= 130)
					{
						return true;
					}
					else if (bParam2 >= 10 && bParam2 <= 17)
					{
						return true;
					}
					else if (bParam2 >= 327)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_279(iParam0, bParam2, 14, 3);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), true) || UNK_0x1A5A491D253EA7BA(func_279(iParam0, bParam2, 14, 3), -1842686353, true));
					}
					break;
				case 1:
					if (bParam2 >= 26)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_279(iParam0, bParam2, 1, 3);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(func_279(iParam0, bParam2, 1, 3), -1842686353, false));
					}
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 14:
					if (bParam2 >= 18 && bParam2 <= 130)
					{
						return true;
					}
					else if (bParam2 >= 10 && bParam2 <= 17)
					{
						return true;
					}
					else if (bParam2 >= 327)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_279(iParam0, bParam2, 14, 4);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), true) || UNK_0x1A5A491D253EA7BA(func_279(iParam0, bParam2, 14, 4), -1842686353, true));
					}
					break;
				case 1:
					if (bParam2 >= 26)
					{
						if (bParam3 == -1)
						{
							bParam3 = func_279(iParam0, bParam2, 1, 4);
						}
						return (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(func_279(iParam0, bParam2, 1, 4), -1842686353, false));
					}
					break;
			}
			break;
	}
	return false;
}

int func_279(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		UNK_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = (bParam1 - func_281(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			UNK_0x4F79808059300187(iVar17, &Var0);
			if (!UNK_0x232048AB4B0E0259(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		UNK_0x65C0659496B1CC14(&Var21);
		iVar39 = 0;
		iVar40 = (bParam1 - func_280(iParam0, func_274(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && bParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar41 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 0, -1, func_274(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			UNK_0xC578687D5A643830(iVar38, &Var21);
			if (!UNK_0x232048AB4B0E0259(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_76556.f_13[iParam2] = Var21.f_1;
					Global_76556[iParam2] = bParam1;
					Global_76556.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_280(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 0:
					return 7;
				case 1:
					return 5;
				case 2:
					return 6;
				case 3:
					return 181;
				case 4:
					return 113;
				case 5:
					return 14;
				case 6:
					return 99;
				case 7:
					return 1;
				case 8:
					return 24;
				case 9:
					return 20;
				case 10:
					return 48;
				case 11:
					return 45;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 0:
					return 10;
				case 1:
					return 5;
				case 2:
					return 21;
				case 3:
					return 318;
				case 4:
					return 117;
				case 5:
					return 7;
				case 6:
					return 134;
				case 7:
					return 1;
				case 8:
					return 77;
				case 9:
					return 12;
				case 10:
					return 53;
				case 11:
					return 63;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 0:
					return 7;
				case 1:
					return 6;
				case 2:
					return 9;
				case 3:
					return 242;
				case 4:
					return 104;
				case 5:
					return 7;
				case 6:
					return 84;
				case 7:
					return 1;
				case 8:
					return 18;
				case 9:
					return 17;
				case 10:
					return 33;
				case 11:
					return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 26;
				case 2:
					return 91;
				case 3:
					return 16;
				case 4:
					return 256;
				case 5:
					return 9;
				case 6:
					return 256;
				case 7:
					return 92;
				case 8:
					return 241;
				case 9:
					return 46;
				case 10:
					return 7;
				case 11:
					return 237;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 26;
				case 2:
					return 92;
				case 3:
					return 16;
				case 4:
					return 256;
				case 5:
					return 9;
				case 6:
					return 256;
				case 7:
					return 55;
				case 8:
					return 136;
				case 9:
					return 36;
				case 10:
					return 6;
				case 11:
					return 256;
			}
			break;
	}
	return -99;
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return 113;
		case joaat("PLAYER_ONE"):
			return 175;
		case joaat("PLAYER_TWO"):
			return 155;
	}
	switch (iParam0)
	{
		case joaat("MP_M_FREEMODE_01"):
			return 327;
		case joaat("MP_F_FREEMODE_01"):
			return 327;
	}
	return -99;
}

bool func_282(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		if (iParam1 == 6)
		{
			if (bParam2 == 10)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((bParam2 == 9 || bParam2 == 7) || bParam2 == 23)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (bParam2 >= 9 && bParam2 <= 14)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((bParam2 == 12 || bParam2 == 59) || bParam2 == 60) || bParam2 == 31) || bParam2 == 32) || bParam2 == 33) || bParam2 == 34) || bParam2 == 35) || bParam2 == 36) || bParam2 == 37) || bParam2 == 38) || bParam2 == 39) || bParam2 == 40) || bParam2 == 41) || (bParam2 >= 42 && bParam2 <= 44)) || bParam2 == 54) || bParam2 == 55)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		if (iParam1 == 2)
		{
			if (bParam2 == 20)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((bParam2 == 3 || bParam2 == 5) || bParam2 == 9)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (bParam2 >= 5 && bParam2 <= 10)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((bParam2 == 82 || bParam2 == 10) || bParam2 == 26) || bParam2 == 27) || bParam2 == 28) || bParam2 == 29) || bParam2 == 30) || bParam2 == 31) || bParam2 == 32) || bParam2 == 33) || bParam2 == 34) || bParam2 == 35) || bParam2 == 36) || (bParam2 >= 37 && bParam2 <= 39))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		if (iParam1 == 8)
		{
			if (bParam2 == 14 || bParam2 == 7)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (((bParam2 == 8 || (bParam2 >= 9 && bParam2 <= 14)) || bParam2 == 15) || bParam2 == 16)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((bParam2 == 88 || bParam2 == 12) || bParam2 == 47) || bParam2 == 48) || bParam2 == 49) || bParam2 == 50) || bParam2 == 51) || bParam2 == 52) || bParam2 == 53) || bParam2 == 54) || bParam2 == 55) || bParam2 == 56) || bParam2 == 57) || (bParam2 >= 58 && bParam2 <= 60))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("MP_M_FREEMODE_01"))
	{
		if (iParam1 == 1)
		{
			if (bParam2 > 0)
			{
				if (bParam2 >= 26)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_279(iParam0, bParam2, 1, 3);
					}
					if (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAIR_SHRINK"), false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("MP_F_FREEMODE_01"))
	{
		if (iParam1 == 1)
		{
			if (bParam2 > 0)
			{
				if (bParam2 >= 26)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_279(iParam0, bParam2, 1, 4);
					}
					if (UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAT"), false) || UNK_0x1A5A491D253EA7BA(bParam3, joaat("HAIR_SHRINK"), false))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

bool func_283(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			if (iParam1 == 14)
			{
				if ((((((((bParam2 == 58 || bParam2 == 61) || (bParam2 >= 62 && bParam2 <= 69)) || (bParam2 >= 70 && bParam2 <= 79)) || (bParam2 >= 80 && bParam2 <= 89)) || bParam2 == 90) || (bParam2 >= 91 && bParam2 <= 102)) || (bParam2 >= 103 && bParam2 <= 110)) || bParam2 == 111)
				{
					return true;
				}
			}
			break;
		case joaat("PLAYER_ONE"):
			if (iParam1 == 14)
			{
				if (((((((((((bParam2 >= 83 && bParam2 <= 92) || bParam2 == 93) || bParam2 == 94) || (bParam2 >= 95 && bParam2 <= 101)) || (bParam2 >= 102 && bParam2 <= 111)) || (bParam2 >= 112 && bParam2 <= 121)) || (bParam2 >= 122 && bParam2 <= 131)) || (bParam2 >= 132 && bParam2 <= 139)) || (bParam2 >= 140 && bParam2 <= 149)) || (bParam2 >= 150 && bParam2 <= 156)) || bParam2 == 157)
				{
					return true;
				}
			}
			break;
		case joaat("PLAYER_TWO"):
			if (iParam1 == 14)
			{
				if (((((((((bParam2 == 89 || (bParam2 >= 90 && bParam2 <= 99)) || (bParam2 >= 100 && bParam2 <= 109)) || bParam2 == 111) || bParam2 == 112) || (bParam2 >= 113 && bParam2 <= 122)) || (bParam2 >= 123 && bParam2 <= 132)) || (bParam2 >= 133 && bParam2 <= 142)) || (bParam2 >= 143 && bParam2 <= 152)) || bParam2 == 153)
				{
					return true;
				}
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			if (iParam1 == 14)
			{
				if (bParam2 >= 155 && bParam2 <= 318)
				{
					return true;
				}
				else if (bParam2 >= 327)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_279(iParam0, bParam2, 14, 3);
					}
					return UNK_0x1A5A491D253EA7BA(bParam3, joaat("GLASSES"), true);
				}
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			if (iParam1 == 14)
			{
				if (bParam2 >= 155 && bParam2 <= 318)
				{
					return true;
				}
				else if (bParam2 >= 327)
				{
					if (bParam3 == -1)
					{
						bParam3 = func_279(iParam0, bParam2, 14, 4);
					}
					return UNK_0x1A5A491D253EA7BA(bParam3, joaat("GLASSES"), true);
				}
			}
			break;
	}
	return false;
}

bool func_284(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 15)
					{
						return true;
					}
					break;
				case 9:
					if (bParam2 == 6)
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 1 || bParam2 == 10)
					{
						return true;
					}
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (iParam1)
			{
				case 8:
					if (bParam2 == 4)
					{
						return true;
					}
					break;
			}
			break;
	}
	return false;
}

struct<10> func_285(int iParam0, bool bParam1)
{
	int iVar0;
	struct<10> Var1;

	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (bParam1)
			{
				case 31:
					func_288(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_288(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_288(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_288(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_288(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_288(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_288(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_288(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_288(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_288(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					func_288(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_286(&Var1, iParam0, bParam1, 10);
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (bParam1)
			{
				case 31:
					func_288(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_288(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_288(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_288(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_288(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_288(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_288(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_288(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_288(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_288(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_286(&Var1, iParam0, bParam1, 9);
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (bParam1)
			{
				case 31:
					func_288(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_288(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_288(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_288(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_288(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_288(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_288(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_288(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_288(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_288(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_286(&Var1, iParam0, bParam1, 9);
					break;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (bParam1)
			{
				case 31:
					func_288(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_288(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_288(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_288(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_288(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_288(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_288(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_288(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_288(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_288(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					func_288(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 10:
					func_288(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 11:
					func_288(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 12:
					func_288(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 13:
					func_288(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 14:
					func_288(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 15:
					func_288(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 16:
					func_288(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 17:
					func_288(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 18:
					func_288(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 19:
					func_288(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 20:
					func_288(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 21:
					func_288(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 22:
					func_288(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 23:
					func_288(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 24:
					func_288(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_286(&Var1, iParam0, bParam1, 25);
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (bParam1)
			{
				case 31:
					func_288(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 0:
					func_288(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 1:
					func_288(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 2:
					func_288(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 3:
					func_288(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 4:
					func_288(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 5:
					func_288(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 6:
					func_288(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 7:
					func_288(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 8:
					func_288(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 9:
					func_288(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 10:
					func_288(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 11:
					func_288(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 12:
					func_288(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 13:
					func_288(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				case 14:
					func_288(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 15:
					func_288(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 16:
					func_288(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 17:
					func_288(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 18:
					func_288(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 19:
					func_288(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 20:
					func_288(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 21:
					func_288(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 22:
					func_288(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				case 23:
					func_288(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				default:
					func_286(&Var1, iParam0, bParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_286(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;

	if (bParam2 != 0 && bParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		bVar0 = false;
		if (iParam1 == joaat("PLAYER_ZERO"))
		{
			bVar0 = false;
		}
		else if (iParam1 == joaat("PLAYER_ONE"))
		{
			bVar0 = true;
		}
		else if (iParam1 == joaat("PLAYER_TWO"))
		{
			bVar0 = 2;
		}
		else if (iParam1 == joaat("MP_M_FREEMODE_01"))
		{
			bVar0 = 3;
		}
		else if (iParam1 == joaat("MP_F_FREEMODE_01"))
		{
			bVar0 = 4;
		}
		UNK_0xEF5FB5FCF95E0C4D(bParam2, &Var1);
		if (!UNK_0x232048AB4B0E0259(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (UNK_0x5D149814CB08088A(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1)
				{
					if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
					{
						(*iParam0)[vVar16.z] = func_287(iParam1, vVar16.x, 14, bVar0);
					}
					else if (vVar16.y != -1)
					{
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

int func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		UNK_0x30BBA34DD235D7FE(&Var0);
		iVar18 = 0;
		iVar19 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			UNK_0x4F79808059300187(iVar17, &Var0);
			if (!UNK_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_281(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		UNK_0x65C0659496B1CC14(&Var20);
		iVar38 = 0;
		iVar39 = UNK_0xF6900DA2D9CD7BC5(bParam3, 7, -1, 0, -1, func_274(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			UNK_0xC578687D5A643830(iVar37, &Var20);
			if (!UNK_0x232048AB4B0E0259(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_280(iParam0, func_274(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

void func_288(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_289(int iParam0, bool bParam1)
{
	int iVar0;
	struct<17> Var1;

	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			switch (bParam1)
			{
				case 0:
					if (Global_111638.f_9080.f_99.f_58[120])
					{
						func_292(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_292(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				case 1:
					func_292(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				case 2:
					func_292(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				case 3:
					func_292(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				case 4:
					func_292(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				case 5:
					func_292(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[0], Global_111638.f_2358.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				case 6:
					func_292(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 7:
					func_292(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 8:
					func_292(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 9:
					func_292(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					func_292(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				case 11:
					func_292(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				case 12:
					func_292(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					func_292(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					func_292(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				case 15:
					func_292(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				case 16:
					func_292(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					func_292(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					func_292(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				case 19:
					func_292(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					func_292(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					func_292(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 22:
					func_292(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 23:
					func_292(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 24:
					func_292(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				case 25:
					func_292(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 26:
					func_292(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 27:
					func_292(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 28:
					func_292(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				case 29:
					func_292(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 30:
					func_292(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 31:
					func_292(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				case 32:
					func_292(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 33:
					func_292(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 34:
					func_292(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				case 35:
					func_292(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 36:
					func_292(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 37:
					func_292(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 38:
					func_292(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					func_292(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					func_292(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					func_292(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					func_292(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					func_292(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 44:
					func_292(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 45:
					func_292(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 46:
					func_292(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 47:
					func_292(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 48:
					func_292(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 49:
					func_292(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 50:
					func_292(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				case 51:
					func_292(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 52:
					func_292(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				default:
					func_290(&Var1, iParam0, bParam1, 53);
					break;
			}
			break;
		case joaat("PLAYER_ONE"):
			switch (bParam1)
			{
				case 0:
					func_292(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 1:
					func_292(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				case 2:
					func_292(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[1], Global_111638.f_2358.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				case 3:
					func_292(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				case 4:
					func_292(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				case 5:
					func_292(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 6:
					func_292(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 7:
					func_292(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				case 8:
					func_292(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				case 9:
					func_292(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					func_292(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 11:
					func_292(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				case 12:
					func_292(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					func_292(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					func_292(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 15:
					func_292(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 16:
					func_292(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					func_292(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					func_292(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				case 19:
					func_292(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					func_292(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					func_292(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				case 22:
					func_292(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				case 23:
					func_292(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				case 24:
					func_292(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				case 25:
					func_292(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				case 26:
					func_292(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				case 27:
					func_292(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				case 28:
					func_292(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				case 29:
					func_292(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				case 30:
					func_292(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				case 31:
					func_292(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				case 32:
					func_292(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				case 33:
					func_292(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				case 34:
					func_292(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				case 35:
					func_292(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				case 36:
					func_292(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				case 37:
					func_292(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				case 38:
					func_292(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					func_292(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					func_292(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					func_292(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					func_292(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					func_292(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				case 44:
					func_292(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				case 45:
					func_292(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				case 46:
					func_292(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				default:
					func_290(&Var1, iParam0, bParam1, 47);
					break;
			}
			break;
		case joaat("PLAYER_TWO"):
			switch (bParam1)
			{
				case 0:
					func_292(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 1:
					func_292(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				case 2:
					func_292(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				case 3:
					func_292(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				case 4:
					func_292(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[2], Global_111638.f_2358.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 5:
					func_292(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				case 6:
					func_292(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				case 7:
					func_292(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				case 8:
					func_292(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				case 9:
					func_292(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					func_292(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 11:
					func_292(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				case 12:
					func_292(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					func_292(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					func_292(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				case 15:
					func_292(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 16:
					func_292(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					func_292(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					func_292(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 19:
					func_292(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					func_292(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					func_292(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 22:
					func_292(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 23:
					func_292(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 24:
					func_292(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 25:
					func_292(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 26:
					func_292(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 27:
					func_292(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 28:
					func_292(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 29:
					func_292(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 30:
					func_292(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 31:
					func_292(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 32:
					func_292(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 33:
					func_292(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 34:
					func_292(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 35:
					func_292(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 36:
					func_292(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 37:
					func_292(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 38:
					func_292(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					func_292(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					func_292(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					func_292(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					func_292(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					func_292(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 44:
					func_292(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 45:
					func_292(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				case 46:
					func_292(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 47:
					func_292(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				default:
					func_290(&Var1, iParam0, bParam1, 48);
					break;
			}
			break;
		case joaat("MP_M_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					func_292(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				case 1:
					func_292(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				case 2:
					func_292(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				case 3:
					func_292(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				case 4:
					func_292(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				case 5:
					func_292(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				case 6:
					func_292(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				case 7:
					func_292(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				case 8:
					func_292(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				case 9:
					func_292(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				case 10:
					func_292(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				case 11:
					func_292(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				case 12:
					func_292(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				case 13:
					func_292(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				case 14:
					func_292(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				case 15:
					func_292(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				case 16:
					func_292(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				case 17:
					func_292(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				case 18:
					func_292(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				case 19:
					func_292(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				case 20:
					func_292(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				case 21:
					func_292(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				case 22:
					func_292(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				case 23:
					func_292(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				case 24:
					func_292(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				case 25:
					func_292(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				default:
					func_290(&Var1, iParam0, bParam1, 26);
					break;
			}
			break;
		case joaat("MP_F_FREEMODE_01"):
			switch (bParam1)
			{
				case 0:
					func_292(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				case 1:
					func_292(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				case 2:
					func_292(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				case 3:
					func_292(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				case 4:
					func_292(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				case 5:
					func_292(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				case 6:
					func_292(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				case 7:
					func_292(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				case 8:
					func_292(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				case 9:
					func_292(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				case 10:
					func_292(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				case 11:
					func_292(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				case 12:
					func_292(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				case 13:
					func_292(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				case 14:
					func_292(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				case 15:
					func_292(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				case 16:
					func_292(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				case 17:
					func_292(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				case 18:
					func_292(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				case 19:
					func_292(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				case 20:
					func_292(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				case 21:
					func_292(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				case 22:
					func_292(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				case 23:
					func_292(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				case 24:
					func_292(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				case 25:
					func_292(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				case 26:
					func_292(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				case 27:
					func_292(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				default:
					func_290(&Var1, iParam0, bParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_290(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	struct<5> Var1;
	vector3 vVar16;
	struct<2> Var19;
	int iVar36;

	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	bVar0 = false;
	if (iParam1 == joaat("PLAYER_ZERO"))
	{
		bVar0 = false;
		(*uParam0)[13] = (10 + (bParam2 - iParam3));
	}
	else if (iParam1 == joaat("PLAYER_ONE"))
	{
		bVar0 = true;
		(*uParam0)[13] = (9 + (bParam2 - iParam3));
	}
	else if (iParam1 == joaat("PLAYER_TWO"))
	{
		bVar0 = 2;
		(*uParam0)[13] = (9 + (bParam2 - iParam3));
	}
	else if (iParam1 == joaat("MP_M_FREEMODE_01"))
	{
		bVar0 = 3;
	}
	else if (iParam1 == joaat("MP_F_FREEMODE_01"))
	{
		bVar0 = 4;
	}
	UNK_0x84997C8C8A5848DD(bVar0, 0);
	UNK_0xA69F810DF7EA02E6((bParam2 - iParam3), &Var1);
	if (!UNK_0x232048AB4B0E0259(Var1))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (UNK_0xD00B813D5424DD2E(Var1.f_1, iVar36, &vVar16))
			{
				if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
				{
					if (vVar16.z == 10)
					{
						UNK_0x65C0659496B1CC14(&Var19);
						UNK_0xFDEBA3FD0BF0D4AC(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_291(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_291(vVar16.z)] = func_287(iParam1, vVar16.x, func_291(vVar16.z), bVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					(*uParam0)[func_291(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 6:
			return 6;
		case 5:
			return 5;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 1:
			return 1;
		case 7:
			return 7;
		case 11:
			return 11;
	}
	return 0;
}

void func_292(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

struct<14> func_293(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	func_360();
	if (iParam0 == joaat("PLAYER_ZERO"))
	{
		func_342(iParam1, bParam2);
	}
	else if (iParam0 == joaat("PLAYER_ONE"))
	{
		func_323(iParam1, bParam2);
	}
	else if (iParam0 == joaat("PLAYER_TWO"))
	{
		func_294(iParam1, bParam2);
	}
	return Global_76434[0 /*14*/];
}

void func_294(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_322(bParam1);
			break;
		case 2:
			func_321(bParam1);
			break;
		case 3:
			func_318(bParam1);
			break;
		case 4:
			func_317(bParam1);
			break;
		case 6:
			func_316(bParam1);
			break;
		case 5:
			func_315(bParam1);
			break;
		case 8:
			func_314(bParam1);
			break;
		case 9:
			func_313(bParam1);
			break;
		case 10:
			func_312(bParam1);
			break;
		case 1:
			func_311(bParam1);
			break;
		case 7:
			func_310(bParam1);
			break;
		case 11:
			func_309(bParam1);
			break;
		case 12:
			func_308(bParam1);
			break;
		case 13:
			func_307(bParam1);
			break;
		case 14:
			func_295(bParam1);
			break;
	}
}

void func_295(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		case 154:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		case 88:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 89:
			StringCopy(&cVar2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		case 90:
			StringCopy(&cVar2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 91:
			StringCopy(&cVar2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 92:
			StringCopy(&cVar2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 93:
			StringCopy(&cVar2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		case 94:
			StringCopy(&cVar2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		case 95:
			StringCopy(&cVar2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		case 96:
			StringCopy(&cVar2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 97:
			StringCopy(&cVar2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 98:
			StringCopy(&cVar2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 99:
			StringCopy(&cVar2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 100:
			StringCopy(&cVar2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 101:
			StringCopy(&cVar2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 102:
			StringCopy(&cVar2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 103:
			StringCopy(&cVar2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 104:
			StringCopy(&cVar2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 105:
			StringCopy(&cVar2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 106:
			StringCopy(&cVar2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 107:
			StringCopy(&cVar2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 108:
			StringCopy(&cVar2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 109:
			StringCopy(&cVar2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 110:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 111:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 112:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 113:
			StringCopy(&cVar2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 114:
			StringCopy(&cVar2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 115:
			StringCopy(&cVar2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 116:
			StringCopy(&cVar2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		case 117:
			StringCopy(&cVar2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 118:
			StringCopy(&cVar2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 119:
			StringCopy(&cVar2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 120:
			StringCopy(&cVar2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		case 121:
			StringCopy(&cVar2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		case 122:
			StringCopy(&cVar2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		case 123:
			StringCopy(&cVar2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		case 124:
			StringCopy(&cVar2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		case 125:
			StringCopy(&cVar2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 126:
			StringCopy(&cVar2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 127:
			StringCopy(&cVar2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		case 128:
			StringCopy(&cVar2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 129:
			StringCopy(&cVar2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 130:
			StringCopy(&cVar2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 131:
			StringCopy(&cVar2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		case 132:
			StringCopy(&cVar2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		case 133:
			StringCopy(&cVar2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 134:
			StringCopy(&cVar2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 135:
			StringCopy(&cVar2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		case 136:
			StringCopy(&cVar2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		case 137:
			StringCopy(&cVar2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 138:
			StringCopy(&cVar2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 139:
			StringCopy(&cVar2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 140:
			StringCopy(&cVar2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 141:
			StringCopy(&cVar2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 142:
			StringCopy(&cVar2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 143:
			StringCopy(&cVar2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		case 144:
			StringCopy(&cVar2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		case 145:
			StringCopy(&cVar2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		case 146:
			StringCopy(&cVar2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 147:
			StringCopy(&cVar2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 148:
			StringCopy(&cVar2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 149:
			StringCopy(&cVar2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 150:
			StringCopy(&cVar2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		case 151:
			StringCopy(&cVar2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 152:
			StringCopy(&cVar2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 153:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 57:
			StringCopy(&cVar2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 58:
			StringCopy(&cVar2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 59:
			StringCopy(&cVar2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 60:
			StringCopy(&cVar2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 61:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 62:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 63:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 64:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 65:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 66:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 67:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 68:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 69:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 70:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 71:
			StringCopy(&cVar2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		case 72:
			StringCopy(&cVar2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		case 75:
			StringCopy(&cVar2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		case 76:
			StringCopy(&cVar2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 77:
			StringCopy(&cVar2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		case 78:
			StringCopy(&cVar2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		case 79:
			StringCopy(&cVar2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 80:
			StringCopy(&cVar2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		case 81:
			StringCopy(&cVar2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		case 82:
			StringCopy(&cVar2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		case 83:
			StringCopy(&cVar2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		case 84:
			StringCopy(&cVar2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		case 85:
			StringCopy(&cVar2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 86:
			StringCopy(&cVar2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 87:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 155, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_296(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;

	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (bParam2 % 32);
	uParam0->f_2 = (bParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), bParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_305(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (UNK_0x12AB0310C2281427(bParam3) != UNK_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), false);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		}
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 6);
		if (func_24(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (UNK_0x1A5A491D253EA7BA(Global_2621444, joaat("REBREATHER"), false))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_303(Global_2621444, 1, 1, 1, -1))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_303(Global_2621444, 2, 1, 1, -1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_303(Global_2621444, 1, 1, 1, -1))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_303(Global_2621444, 2, 1, 1, -1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_303(Global_2621444, 1, 1, 1, -1))
			{
				UNK_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_303(Global_2621444, 2, 1, 1, -1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), false);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		if (func_302(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
		}
		if (func_302(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
		if (!func_302(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_6), false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_24(14))
			{
				return;
			}
			bVar0 = func_299(func_301(iParam1, uParam0->f_2), Global_76431, 0);
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, uParam0->f_1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
			}
			bVar0 = func_299(func_298(iParam1, uParam0->f_2), Global_76431, 0);
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, uParam0->f_1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
			}
			if (func_297(iParam1, uParam0->f_2, &iVar1))
			{
				bVar0 = func_299(iVar1, Global_76431, 0);
				if (!UNK_0xEAE0D21A50E6C7F4(bVar0, uParam0->f_1))
				{
					UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
}

bool func_297(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 979;
					break;
				case 3:
					*iParam2 = 1429;
					break;
				case 4:
					*iParam2 = 995;
					break;
				case 6:
					*iParam2 = 1003;
					break;
				case 8:
					*iParam2 = 1430;
					break;
				case 9:
					*iParam2 = 1438;
					break;
				case 10:
					*iParam2 = 1440;
					break;
				case 1:
					*iParam2 = 1011;
					break;
				case 7:
					*iParam2 = 1441;
					break;
				case 11:
					*iParam2 = 987;
					break;
				case 14:
					*iParam2 = 1019;
					break;
				case 12:
					*iParam2 = 1030;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 980;
					break;
				case 4:
					*iParam2 = 996;
					break;
				case 6:
					*iParam2 = 1004;
					break;
				case 8:
					*iParam2 = 1431;
					break;
				case 9:
					*iParam2 = 1439;
					break;
				case 7:
					*iParam2 = 1442;
					break;
				case 11:
					*iParam2 = 988;
					break;
				case 14:
					*iParam2 = 1020;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					*iParam2 = 981;
					break;
				case 4:
					*iParam2 = 997;
					break;
				case 6:
					*iParam2 = 1005;
					break;
				case 8:
					*iParam2 = 1432;
					break;
				case 7:
					*iParam2 = 1443;
					break;
				case 11:
					*iParam2 = 989;
					break;
				case 14:
					*iParam2 = 1021;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 998;
					break;
				case 6:
					*iParam2 = 1006;
					break;
				case 8:
					*iParam2 = 1433;
					break;
				case 11:
					*iParam2 = 990;
					break;
				case 14:
					*iParam2 = 1022;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 999;
					break;
				case 6:
					*iParam2 = 1007;
					break;
				case 8:
					*iParam2 = 1434;
					break;
				case 11:
					*iParam2 = 991;
					break;
				case 14:
					*iParam2 = 1023;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 1000;
					break;
				case 6:
					*iParam2 = 1008;
					break;
				case 8:
					*iParam2 = 1435;
					break;
				case 11:
					*iParam2 = 992;
					break;
				case 14:
					*iParam2 = 1024;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 1001;
					break;
				case 6:
					*iParam2 = 1009;
					break;
				case 8:
					*iParam2 = 1436;
					break;
				case 11:
					*iParam2 = 993;
					break;
				case 14:
					*iParam2 = 1025;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					*iParam2 = 1002;
					break;
				case 6:
					*iParam2 = 1010;
					break;
				case 8:
					*iParam2 = 1437;
					break;
				case 11:
					*iParam2 = 994;
					break;
				case 14:
					*iParam2 = 1026;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					*iParam2 = 1027;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					*iParam2 = 1028;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					*iParam2 = 1029;
					break;
			}
			break;
	}
	return *iParam2 != 978;
}

int func_298(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
				case 3:
					return 1414;
				case 4:
					return 943;
				case 6:
					return 951;
				case 8:
					return 1415;
				case 9:
					return 1423;
				case 10:
					return 1425;
				case 1:
					return 959;
				case 7:
					return 1426;
				case 11:
					return 935;
				case 14:
					return 967;
				case 12:
					return 978;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
				case 4:
					return 944;
				case 6:
					return 952;
				case 8:
					return 1416;
				case 9:
					return 1424;
				case 7:
					return 1427;
				case 11:
					return 936;
				case 14:
					return 968;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
				case 4:
					return 945;
				case 6:
					return 953;
				case 8:
					return 1417;
				case 7:
					return 1428;
				case 11:
					return 937;
				case 14:
					return 969;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
				case 6:
					return 954;
				case 8:
					return 1418;
				case 11:
					return 938;
				case 14:
					return 970;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
				case 6:
					return 955;
				case 8:
					return 1419;
				case 11:
					return 939;
				case 14:
					return 971;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
				case 6:
					return 956;
				case 8:
					return 1420;
				case 11:
					return 940;
				case 14:
					return 972;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
				case 6:
					return 957;
				case 8:
					return 1421;
				case 11:
					return 941;
				case 14:
					return 973;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
				case 6:
					return 958;
				case 8:
					return 1422;
				case 11:
					return 942;
				case 14:
					return 974;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
			}
			break;
	}
	return 935;
}

int func_299(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_300(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_300(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_43();
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

int func_301(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
				case 3:
					return 1399;
				case 4:
					return 891;
				case 6:
					return 899;
				case 8:
					return 1400;
				case 9:
					return 1408;
				case 10:
					return 1410;
				case 1:
					return 907;
				case 7:
					return 1411;
				case 11:
					return 883;
				case 14:
					return 915;
				case 12:
					return 926;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
				case 4:
					return 892;
				case 6:
					return 900;
				case 8:
					return 1401;
				case 9:
					return 1409;
				case 7:
					return 1412;
				case 11:
					return 884;
				case 14:
					return 916;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
				case 4:
					return 893;
				case 6:
					return 901;
				case 8:
					return 1402;
				case 7:
					return 1413;
				case 11:
					return 885;
				case 14:
					return 917;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
				case 6:
					return 902;
				case 8:
					return 1403;
				case 11:
					return 886;
				case 14:
					return 918;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
				case 6:
					return 903;
				case 8:
					return 1404;
				case 11:
					return 887;
				case 14:
					return 919;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
				case 6:
					return 904;
				case 8:
					return 1405;
				case 11:
					return 888;
				case 14:
					return 920;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
				case 6:
					return 905;
				case 8:
					return 1406;
				case 11:
					return 889;
				case 14:
					return 921;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
				case 6:
					return 906;
				case 8:
					return 1407;
				case 11:
					return 890;
				case 14:
					return 922;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
			}
			break;
	}
	return 883;
}

bool func_302(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/][iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/][iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/][iParam3], bParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3], bParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3], bParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3], bParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3], bParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3], bParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3], bParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3], bParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3], bParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3], bParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3], bParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3], bParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3], bParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3], bParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3], bParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3], bParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3], bParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3], bParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				UNK_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				UNK_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3], bParam4);
		}
	}
	return false;
}

bool func_303(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_304(bParam0, iParam1, &iVar2, &bVar1, bParam2, bParam3))
	{
		bVar3 = func_299(iVar2, iVar0, 0);
		return UNK_0xEAE0D21A50E6C7F4(bVar3, bVar1);
	}
	return false;
}

bool func_304(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam2 = 11511;
	if ((bParam4 && Global_4267094) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*iParam2 = 971;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*iParam2 = 971;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*iParam2 = 971;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*iParam2 = 971;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*iParam2 = 971;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*iParam2 = 971;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*iParam2 = 971;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*iParam2 = 971;
						*bParam3 = 26;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*iParam2 = 935;
						*bParam3 = 0;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*iParam2 = 935;
						*bParam3 = 1;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*iParam2 = 935;
						*bParam3 = 2;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*iParam2 = 935;
						*bParam3 = 3;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*iParam2 = 935;
						*bParam3 = 4;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*iParam2 = 935;
						*bParam3 = 5;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*iParam2 = 935;
						*bParam3 = 7;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*iParam2 = 935;
						*bParam3 = 8;
						return true;
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*iParam2 = 935;
						*bParam3 = 11;
						return true;
				}
				break;
			case 2:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*iParam2 = 1023;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*iParam2 = 1023;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*iParam2 = 1023;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*iParam2 = 1023;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*iParam2 = 1023;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*iParam2 = 1023;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*iParam2 = 1023;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*iParam2 = 1023;
						*bParam3 = 26;
						return true;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*iParam2 = 971;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*iParam2 = 971;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*iParam2 = 971;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*iParam2 = 971;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*iParam2 = 971;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*iParam2 = 971;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*iParam2 = 971;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*iParam2 = 971;
						*bParam3 = 26;
						return true;
				}
				break;
			case 2:
				switch (bParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*iParam2 = 1023;
						*bParam3 = 19;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*iParam2 = 1023;
						*bParam3 = 20;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*iParam2 = 1023;
						*bParam3 = 21;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*iParam2 = 1023;
						*bParam3 = 22;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*iParam2 = 1023;
						*bParam3 = 23;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*iParam2 = 1023;
						*bParam3 = 24;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*iParam2 = 1023;
						*bParam3 = 25;
						return true;
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*iParam2 = 1023;
						*bParam3 = 26;
						return true;
				}
				break;
		}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4267094)
		{
			iVar0 = UNK_0xFAB100617491B764(bParam0);
		}
		else
		{
			iVar0 = UNK_0xCE50BA51F0598785(bParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = UNK_0xFAB100617491B764(bParam0);
	}
	else
	{
		iVar0 = UNK_0xCE50BA51F0598785(bParam0);
	}
	if (iVar0 == -1)
	{
		return false;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*iParam2 = 1759;
					break;
				case 1:
					*iParam2 = 1760;
					break;
				case 2:
					*iParam2 = 1761;
					break;
				case 3:
					*iParam2 = 1762;
					break;
				case 4:
					*iParam2 = 1763;
					break;
				case 5:
					*iParam2 = 1764;
					break;
				case 6:
					*iParam2 = 1771;
					break;
				case 7:
					*iParam2 = 1772;
					break;
				case 8:
					*iParam2 = 1773;
					break;
				case 9:
					*iParam2 = 1774;
					break;
				case 10:
					*iParam2 = 1775;
					break;
				case 11:
					*iParam2 = 1776;
					break;
				case 12:
					*iParam2 = 1777;
					break;
				case 13:
					*iParam2 = 1785;
					break;
				case 14:
					*iParam2 = 1786;
					break;
				case 15:
					*iParam2 = 1887;
					break;
				case 16:
					*iParam2 = 1888;
					break;
				case 17:
					*iParam2 = 1919;
					break;
				case 18:
					*iParam2 = 1933;
					break;
				case 19:
					*iParam2 = 1934;
					break;
				case 20:
					*iParam2 = 1935;
					break;
				case 21:
					*iParam2 = 1936;
					break;
				case 22:
					*iParam2 = 1937;
					break;
				case 23:
					*iParam2 = 2041;
					break;
				case 24:
					*iParam2 = 2042;
					break;
				case 25:
					*iParam2 = 2068;
					break;
				case 26:
					*iParam2 = 2069;
					break;
				case 27:
					*iParam2 = 2070;
					break;
				case 28:
					*iParam2 = 2071;
					break;
				case 29:
					*iParam2 = 2072;
					break;
				case 30:
					*iParam2 = 2073;
					break;
				case 31:
					*iParam2 = 2074;
					break;
				case 32:
					*iParam2 = 2075;
					break;
				case 33:
					*iParam2 = 2076;
					break;
				case 34:
					*iParam2 = 2077;
					break;
				case 35:
					*iParam2 = 2324;
					break;
				case 36:
					*iParam2 = 2325;
					break;
				case 37:
					*iParam2 = 2389;
					break;
				case 38:
					*iParam2 = 2390;
					break;
				case 39:
					*iParam2 = 2391;
					break;
				case 40:
					*iParam2 = 2392;
					break;
				case 41:
					*iParam2 = 2451;
					break;
				case 42:
					*iParam2 = 2452;
					break;
				case 43:
					*iParam2 = 2453;
					break;
				case 44:
					*iParam2 = 2454;
					break;
				case 45:
					*iParam2 = 2455;
					break;
				case 46:
					*iParam2 = 2456;
					break;
				case 47:
					*iParam2 = 2457;
					break;
				case 48:
					*iParam2 = 2458;
					break;
				case 49:
					*iParam2 = 2459;
					break;
				case 50:
					*iParam2 = 2460;
					break;
				case 51:
					*iParam2 = 2589;
					break;
				case 52:
					*iParam2 = 2590;
					break;
				case 53:
					*iParam2 = 2591;
					break;
				case 54:
					*iParam2 = 2592;
					break;
				case 55:
					*iParam2 = 2593;
					break;
				case 56:
					*iParam2 = 2594;
					break;
				case 57:
					*iParam2 = 2595;
					break;
				case 58:
					*iParam2 = 2596;
					break;
				case 59:
					*iParam2 = 2597;
					break;
				case 60:
					*iParam2 = 2598;
					break;
				case 61:
					*iParam2 = 2599;
					break;
				case 62:
					*iParam2 = 3196;
					break;
				case 63:
					*iParam2 = 3197;
					break;
				case 64:
					*iParam2 = 3198;
					break;
				case 65:
					*iParam2 = 3199;
					break;
				case 66:
					*iParam2 = 3200;
					break;
				case 67:
					*iParam2 = 3201;
					break;
				case 68:
					*iParam2 = 3669;
					break;
				case 69:
					*iParam2 = 3670;
					break;
				case 70:
					*iParam2 = 3671;
					break;
				case 71:
					*iParam2 = 3672;
					break;
				case 72:
					*iParam2 = 3673;
					break;
				case 73:
					*iParam2 = 3674;
					break;
				case 74:
					*iParam2 = 3675;
					break;
				case 75:
					*iParam2 = 3676;
					break;
				case 76:
					*iParam2 = 3677;
					break;
				case 77:
					*iParam2 = 3678;
					break;
				case 78:
					*iParam2 = 3792;
					break;
				case 79:
					*iParam2 = 3793;
					break;
				case 80:
					*iParam2 = 3794;
					break;
				case 81:
					*iParam2 = 3795;
					break;
				case 82:
					*iParam2 = 3796;
					break;
				case 83:
					*iParam2 = 3797;
					break;
				case 84:
					*iParam2 = 3798;
					break;
				case 85:
					*iParam2 = 3799;
					break;
				case 86:
					*iParam2 = 3902;
					break;
				case 87:
					*iParam2 = 3903;
					break;
				case 88:
					*iParam2 = 3904;
					break;
				case 89:
					*iParam2 = 5337;
					break;
				case 90:
					*iParam2 = 5338;
					break;
				case 91:
					*iParam2 = 5339;
					break;
				case 92:
					*iParam2 = 5340;
					break;
				case 93:
					*iParam2 = 5341;
					break;
				case 94:
					*iParam2 = 5342;
					break;
				case 95:
					*iParam2 = 5343;
					break;
				case 96:
					*iParam2 = 5344;
					break;
				case 97:
					*iParam2 = 5345;
					break;
				case 98:
					*iParam2 = 5346;
					break;
				case 99:
					*iParam2 = 5347;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*iParam2 = 5348;
					break;
				case 101:
					*iParam2 = 5394;
					break;
				case 102:
					*iParam2 = 5395;
					break;
				case 103:
					*iParam2 = 5396;
					break;
				case 104:
					*iParam2 = 5397;
					break;
				case 105:
					*iParam2 = 5398;
					break;
				case 106:
					*iParam2 = 5399;
					break;
				case 107:
					*iParam2 = 5400;
					break;
				case 108:
					*iParam2 = 5401;
					break;
				case 109:
					*iParam2 = 5402;
					break;
				case 110:
					*iParam2 = 5403;
					break;
				case 111:
					*iParam2 = 5404;
					break;
				case 112:
					*iParam2 = 5405;
					break;
				case 113:
					*iParam2 = 5406;
					break;
				case 114:
					*iParam2 = 5407;
					break;
				case 115:
					*iParam2 = 5408;
					break;
				case 116:
					*iParam2 = 5409;
					break;
				case 117:
					*iParam2 = 5410;
					break;
				case 118:
					*iParam2 = 5411;
					break;
				case 119:
					*iParam2 = 5412;
					break;
				case 120:
					*iParam2 = 5413;
					break;
				case 121:
					*iParam2 = 5414;
					break;
				case 122:
					*iParam2 = 5415;
					break;
				case 123:
					*iParam2 = 5416;
					break;
				case 124:
					*iParam2 = 6122;
					break;
				case 125:
					*iParam2 = 6123;
					break;
				case 126:
					*iParam2 = 6124;
					break;
				case 127:
					*iParam2 = 6125;
					break;
				case 128:
					*iParam2 = 6126;
					break;
				case 129:
					*iParam2 = 6127;
					break;
				case 130:
					*iParam2 = 6128;
					break;
				case 131:
					*iParam2 = 6129;
					break;
				case 132:
					*iParam2 = 6130;
					break;
				case 133:
					*iParam2 = 6131;
					break;
				case 134:
					*iParam2 = 6132;
					break;
				case 135:
					*iParam2 = 6133;
					break;
				case 136:
					*iParam2 = 6134;
					break;
				case 137:
					*iParam2 = 6135;
					break;
				case 138:
					*iParam2 = 6136;
					break;
				case 139:
					*iParam2 = 6435;
					break;
				case 140:
					*iParam2 = 6436;
					break;
				case 141:
					*iParam2 = 6437;
					break;
				case 142:
					*iParam2 = 6438;
					break;
				case 143:
					*iParam2 = 6439;
					break;
				case 144:
					*iParam2 = 6440;
					break;
				case 145:
					*iParam2 = 6441;
					break;
				case 146:
					*iParam2 = 6442;
					break;
				case 147:
					*iParam2 = 6443;
					break;
				case 148:
					*iParam2 = 6444;
					break;
				case 149:
					*iParam2 = 6445;
					break;
				case 150:
					*iParam2 = 6446;
					break;
				case 151:
					*iParam2 = 6447;
					break;
				case 152:
					*iParam2 = 6448;
					break;
				case 153:
					*iParam2 = 6449;
					break;
				case 154:
					*iParam2 = 7266;
					break;
				case 155:
					*iParam2 = 7267;
					break;
				case 156:
					*iParam2 = 7268;
					break;
				case 157:
					*iParam2 = 7269;
					break;
				case 158:
					*iParam2 = 7270;
					break;
				case 159:
					*iParam2 = 7271;
					break;
				case 160:
					*iParam2 = 7272;
					break;
				case 161:
					*iParam2 = 7879;
					break;
				case 162:
					*iParam2 = 7880;
					break;
				case 163:
					*iParam2 = 7881;
					break;
				case 164:
					*iParam2 = 7882;
					break;
				case 165:
					*iParam2 = 7883;
					break;
				case 166:
					*iParam2 = 7884;
					break;
				case 167:
					*iParam2 = 7885;
					break;
				case 168:
					*iParam2 = 7886;
					break;
				case 169:
					*iParam2 = 7887;
					break;
				case 170:
					*iParam2 = 7888;
					break;
				case 171:
					*iParam2 = 7889;
					break;
				case 172:
					*iParam2 = 7890;
					break;
				case 173:
					*iParam2 = 7891;
					break;
				case 174:
					*iParam2 = 7892;
					break;
				case 175:
					*iParam2 = 7893;
					break;
				case 176:
					*iParam2 = 8299;
					break;
				case 177:
					*iParam2 = 8300;
					break;
				case 178:
					*iParam2 = 8301;
					break;
				case 179:
					*iParam2 = 8302;
					break;
				case 180:
					*iParam2 = 8303;
					break;
				case 181:
					*iParam2 = 8304;
					break;
				case 182:
					*iParam2 = 8305;
					break;
				case 183:
					*iParam2 = 8306;
					break;
				case 184:
					*iParam2 = 8307;
					break;
				case 185:
					*iParam2 = 8308;
					break;
				case 186:
					*iParam2 = 8309;
					break;
				case 187:
					*iParam2 = 8310;
					break;
				case 188:
					*iParam2 = 8311;
					break;
				case 189:
					*iParam2 = 8312;
					break;
				case 190:
					*iParam2 = 8313;
					break;
				case 191:
					*iParam2 = 8314;
					break;
				case 192:
					*iParam2 = 8315;
					break;
				case 193:
					*iParam2 = 8316;
					break;
				case 194:
					*iParam2 = 8317;
					break;
				case 195:
					*iParam2 = 8318;
					break;
				case 196:
					*iParam2 = 8319;
					break;
				case 197:
					*iParam2 = 8320;
					break;
				case 198:
					*iParam2 = 8321;
					break;
				case 199:
					*iParam2 = 8322;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*iParam2 = 8323;
					break;
				case 201:
					*iParam2 = 8936;
					break;
				case 202:
					*iParam2 = 8937;
					break;
				case 203:
					*iParam2 = 8938;
					break;
				case 204:
					*iParam2 = 8939;
					break;
				case 205:
					*iParam2 = 8940;
					break;
				case 206:
					*iParam2 = 9419;
					break;
				case 207:
					*iParam2 = 9420;
					break;
				case 208:
					*iParam2 = 9421;
					break;
				case 209:
					*iParam2 = 9422;
					break;
				case 210:
					*iParam2 = 9423;
					break;
				case 211:
					*iParam2 = 9424;
					break;
				case 212:
					*iParam2 = 9425;
					break;
				case 213:
					*iParam2 = 9426;
					break;
				case 214:
					*iParam2 = 9427;
					break;
				case 215:
					*iParam2 = 9428;
					break;
				case 216:
					*iParam2 = 9429;
					break;
				case 217:
					*iParam2 = 9430;
					break;
				case 218:
					*iParam2 = 9431;
					break;
				case 219:
					*iParam2 = 9432;
					break;
				case 220:
					*iParam2 = 9433;
					break;
				case 221:
					*iParam2 = 9434;
					break;
				case 222:
					*iParam2 = 9435;
					break;
				case 223:
					*iParam2 = 9436;
					break;
				case 224:
					*iParam2 = 9437;
					break;
				case 225:
					*iParam2 = 9438;
					break;
				case 226:
					*iParam2 = 9439;
					break;
				case 227:
					*iParam2 = 9440;
					break;
				case 228:
					*iParam2 = 9441;
					break;
				case 229:
					*iParam2 = 9442;
					break;
				case 230:
					*iParam2 = 9443;
					break;
				default:
					break;
			}
			break;
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*iParam2 = 1765;
					break;
				case 1:
					*iParam2 = 1766;
					break;
				case 2:
					*iParam2 = 1767;
					break;
				case 3:
					*iParam2 = 1768;
					break;
				case 4:
					*iParam2 = 1769;
					break;
				case 5:
					*iParam2 = 1770;
					break;
				case 6:
					*iParam2 = 1778;
					break;
				case 7:
					*iParam2 = 1779;
					break;
				case 8:
					*iParam2 = 1780;
					break;
				case 9:
					*iParam2 = 1781;
					break;
				case 10:
					*iParam2 = 1782;
					break;
				case 11:
					*iParam2 = 1783;
					break;
				case 12:
					*iParam2 = 1784;
					break;
				case 13:
					*iParam2 = 1787;
					break;
				case 14:
					*iParam2 = 1788;
					break;
				case 15:
					*iParam2 = 1889;
					break;
				case 16:
					*iParam2 = 1890;
					break;
				case 17:
					*iParam2 = 1920;
					break;
				case 18:
					*iParam2 = 1938;
					break;
				case 19:
					*iParam2 = 1939;
					break;
				case 20:
					*iParam2 = 1940;
					break;
				case 21:
					*iParam2 = 1941;
					break;
				case 22:
					*iParam2 = 1942;
					break;
				case 23:
					*iParam2 = 2043;
					break;
				case 24:
					*iParam2 = 2044;
					break;
				case 25:
					*iParam2 = 2078;
					break;
				case 26:
					*iParam2 = 2079;
					break;
				case 27:
					*iParam2 = 2080;
					break;
				case 28:
					*iParam2 = 2081;
					break;
				case 29:
					*iParam2 = 2082;
					break;
				case 30:
					*iParam2 = 2083;
					break;
				case 31:
					*iParam2 = 2084;
					break;
				case 32:
					*iParam2 = 2085;
					break;
				case 33:
					*iParam2 = 2086;
					break;
				case 34:
					*iParam2 = 2087;
					break;
				case 35:
					*iParam2 = 2326;
					break;
				case 36:
					*iParam2 = 2327;
					break;
				case 37:
					*iParam2 = 2393;
					break;
				case 38:
					*iParam2 = 2394;
					break;
				case 39:
					*iParam2 = 2395;
					break;
				case 40:
					*iParam2 = 2396;
					break;
				case 41:
					*iParam2 = 2461;
					break;
				case 42:
					*iParam2 = 2462;
					break;
				case 43:
					*iParam2 = 2463;
					break;
				case 44:
					*iParam2 = 2464;
					break;
				case 45:
					*iParam2 = 2465;
					break;
				case 46:
					*iParam2 = 2466;
					break;
				case 47:
					*iParam2 = 2467;
					break;
				case 48:
					*iParam2 = 2468;
					break;
				case 49:
					*iParam2 = 2469;
					break;
				case 50:
					*iParam2 = 2470;
					break;
				case 51:
					*iParam2 = 2600;
					break;
				case 52:
					*iParam2 = 2601;
					break;
				case 53:
					*iParam2 = 2602;
					break;
				case 54:
					*iParam2 = 2603;
					break;
				case 55:
					*iParam2 = 2604;
					break;
				case 56:
					*iParam2 = 2605;
					break;
				case 57:
					*iParam2 = 2606;
					break;
				case 58:
					*iParam2 = 2607;
					break;
				case 59:
					*iParam2 = 2608;
					break;
				case 60:
					*iParam2 = 2609;
					break;
				case 61:
					*iParam2 = 2610;
					break;
				case 62:
					*iParam2 = 3202;
					break;
				case 63:
					*iParam2 = 3203;
					break;
				case 64:
					*iParam2 = 3204;
					break;
				case 65:
					*iParam2 = 3205;
					break;
				case 66:
					*iParam2 = 3206;
					break;
				case 67:
					*iParam2 = 3207;
					break;
				case 68:
					*iParam2 = 3679;
					break;
				case 69:
					*iParam2 = 3680;
					break;
				case 70:
					*iParam2 = 3681;
					break;
				case 71:
					*iParam2 = 3682;
					break;
				case 72:
					*iParam2 = 3683;
					break;
				case 73:
					*iParam2 = 3684;
					break;
				case 74:
					*iParam2 = 3685;
					break;
				case 75:
					*iParam2 = 3686;
					break;
				case 76:
					*iParam2 = 3687;
					break;
				case 77:
					*iParam2 = 3688;
					break;
				case 78:
					*iParam2 = 3800;
					break;
				case 79:
					*iParam2 = 3801;
					break;
				case 80:
					*iParam2 = 3802;
					break;
				case 81:
					*iParam2 = 3803;
					break;
				case 82:
					*iParam2 = 3804;
					break;
				case 83:
					*iParam2 = 3805;
					break;
				case 84:
					*iParam2 = 3806;
					break;
				case 85:
					*iParam2 = 3807;
					break;
				case 86:
					*iParam2 = 3905;
					break;
				case 87:
					*iParam2 = 3906;
					break;
				case 88:
					*iParam2 = 3907;
					break;
				case 89:
					*iParam2 = 5349;
					break;
				case 90:
					*iParam2 = 5350;
					break;
				case 91:
					*iParam2 = 5351;
					break;
				case 92:
					*iParam2 = 5352;
					break;
				case 93:
					*iParam2 = 5353;
					break;
				case 94:
					*iParam2 = 5354;
					break;
				case 95:
					*iParam2 = 5355;
					break;
				case 96:
					*iParam2 = 5356;
					break;
				case 97:
					*iParam2 = 5357;
					break;
				case 98:
					*iParam2 = 5358;
					break;
				case 99:
					*iParam2 = 5359;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*iParam2 = 5360;
					break;
				case 101:
					*iParam2 = 5417;
					break;
				case 102:
					*iParam2 = 5418;
					break;
				case 103:
					*iParam2 = 5419;
					break;
				case 104:
					*iParam2 = 5420;
					break;
				case 105:
					*iParam2 = 5421;
					break;
				case 106:
					*iParam2 = 5422;
					break;
				case 107:
					*iParam2 = 5423;
					break;
				case 108:
					*iParam2 = 5424;
					break;
				case 109:
					*iParam2 = 5425;
					break;
				case 110:
					*iParam2 = 5426;
					break;
				case 111:
					*iParam2 = 5427;
					break;
				case 112:
					*iParam2 = 5428;
					break;
				case 113:
					*iParam2 = 5429;
					break;
				case 114:
					*iParam2 = 5430;
					break;
				case 115:
					*iParam2 = 5431;
					break;
				case 116:
					*iParam2 = 5432;
					break;
				case 117:
					*iParam2 = 5433;
					break;
				case 118:
					*iParam2 = 5434;
					break;
				case 119:
					*iParam2 = 5435;
					break;
				case 120:
					*iParam2 = 5436;
					break;
				case 121:
					*iParam2 = 5437;
					break;
				case 122:
					*iParam2 = 5438;
					break;
				case 123:
					*iParam2 = 5439;
					break;
				case 124:
					*iParam2 = 6137;
					break;
				case 125:
					*iParam2 = 6138;
					break;
				case 126:
					*iParam2 = 6139;
					break;
				case 127:
					*iParam2 = 6140;
					break;
				case 128:
					*iParam2 = 6141;
					break;
				case 129:
					*iParam2 = 6142;
					break;
				case 130:
					*iParam2 = 6143;
					break;
				case 131:
					*iParam2 = 6144;
					break;
				case 132:
					*iParam2 = 6145;
					break;
				case 133:
					*iParam2 = 6146;
					break;
				case 134:
					*iParam2 = 6147;
					break;
				case 135:
					*iParam2 = 6148;
					break;
				case 136:
					*iParam2 = 6149;
					break;
				case 137:
					*iParam2 = 6150;
					break;
				case 138:
					*iParam2 = 6151;
					break;
				case 139:
					*iParam2 = 6450;
					break;
				case 140:
					*iParam2 = 6451;
					break;
				case 141:
					*iParam2 = 6452;
					break;
				case 142:
					*iParam2 = 6453;
					break;
				case 143:
					*iParam2 = 6454;
					break;
				case 144:
					*iParam2 = 6455;
					break;
				case 145:
					*iParam2 = 6456;
					break;
				case 146:
					*iParam2 = 6457;
					break;
				case 147:
					*iParam2 = 6458;
					break;
				case 148:
					*iParam2 = 6459;
					break;
				case 149:
					*iParam2 = 6460;
					break;
				case 150:
					*iParam2 = 6461;
					break;
				case 151:
					*iParam2 = 6462;
					break;
				case 152:
					*iParam2 = 6463;
					break;
				case 153:
					*iParam2 = 6464;
					break;
				case 154:
					*iParam2 = 7273;
					break;
				case 155:
					*iParam2 = 7274;
					break;
				case 156:
					*iParam2 = 7275;
					break;
				case 157:
					*iParam2 = 7276;
					break;
				case 158:
					*iParam2 = 7277;
					break;
				case 159:
					*iParam2 = 7278;
					break;
				case 160:
					*iParam2 = 7279;
					break;
				case 161:
					*iParam2 = 7894;
					break;
				case 162:
					*iParam2 = 7895;
					break;
				case 163:
					*iParam2 = 7896;
					break;
				case 164:
					*iParam2 = 7897;
					break;
				case 165:
					*iParam2 = 7898;
					break;
				case 166:
					*iParam2 = 7899;
					break;
				case 167:
					*iParam2 = 7900;
					break;
				case 168:
					*iParam2 = 7901;
					break;
				case 169:
					*iParam2 = 7902;
					break;
				case 170:
					*iParam2 = 7903;
					break;
				case 171:
					*iParam2 = 7904;
					break;
				case 172:
					*iParam2 = 7905;
					break;
				case 173:
					*iParam2 = 7906;
					break;
				case 174:
					*iParam2 = 7907;
					break;
				case 175:
					*iParam2 = 7908;
					break;
				case 176:
					*iParam2 = 8324;
					break;
				case 177:
					*iParam2 = 8325;
					break;
				case 178:
					*iParam2 = 8326;
					break;
				case 179:
					*iParam2 = 8327;
					break;
				case 180:
					*iParam2 = 8328;
					break;
				case 181:
					*iParam2 = 8329;
					break;
				case 182:
					*iParam2 = 8330;
					break;
				case 183:
					*iParam2 = 8331;
					break;
				case 184:
					*iParam2 = 8332;
					break;
				case 185:
					*iParam2 = 8333;
					break;
				case 186:
					*iParam2 = 8334;
					break;
				case 187:
					*iParam2 = 8335;
					break;
				case 188:
					*iParam2 = 8336;
					break;
				case 189:
					*iParam2 = 8337;
					break;
				case 190:
					*iParam2 = 8338;
					break;
				case 191:
					*iParam2 = 8339;
					break;
				case 192:
					*iParam2 = 8340;
					break;
				case 193:
					*iParam2 = 8341;
					break;
				case 194:
					*iParam2 = 8342;
					break;
				case 195:
					*iParam2 = 8343;
					break;
				case 196:
					*iParam2 = 8344;
					break;
				case 197:
					*iParam2 = 8345;
					break;
				case 198:
					*iParam2 = 8346;
					break;
				case 199:
					*iParam2 = 8347;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*iParam2 = 8348;
					break;
				case 201:
					*iParam2 = 8941;
					break;
				case 202:
					*iParam2 = 8942;
					break;
				case 203:
					*iParam2 = 8943;
					break;
				case 204:
					*iParam2 = 8944;
					break;
				case 205:
					*iParam2 = 8945;
					break;
				case 206:
					*iParam2 = 9444;
					break;
				case 207:
					*iParam2 = 9445;
					break;
				case 208:
					*iParam2 = 9446;
					break;
				case 209:
					*iParam2 = 9447;
					break;
				case 210:
					*iParam2 = 9448;
					break;
				case 211:
					*iParam2 = 9449;
					break;
				case 212:
					*iParam2 = 9450;
					break;
				case 213:
					*iParam2 = 9451;
					break;
				case 214:
					*iParam2 = 9452;
					break;
				case 215:
					*iParam2 = 9453;
					break;
				case 216:
					*iParam2 = 9454;
					break;
				case 217:
					*iParam2 = 9455;
					break;
				case 218:
					*iParam2 = 9456;
					break;
				case 219:
					*iParam2 = 9457;
					break;
				case 220:
					*iParam2 = 9458;
					break;
				case 221:
					*iParam2 = 9459;
					break;
				case 222:
					*iParam2 = 9460;
					break;
				case 223:
					*iParam2 = 9461;
					break;
				case 224:
					*iParam2 = 9462;
					break;
				case 225:
					*iParam2 = 9463;
					break;
				case 226:
					*iParam2 = 9464;
					break;
				case 227:
					*iParam2 = 9465;
					break;
				case 228:
					*iParam2 = 9466;
					break;
				case 229:
					*iParam2 = 9467;
					break;
				case 230:
					*iParam2 = 9468;
					break;
				default:
					break;
			}
			break;
	}
	*bParam3 = (iVar0 % 32);
	return *iParam2 != 11511;
}

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
	}
	return 0;
}

void func_306(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;

	iVar0 = (bParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	bVar1 = Global_76434[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = UNK_0x84997C8C8A5848DD(bVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			UNK_0xA69F810DF7EA02E6(iVar17, &Var2);
			if (!UNK_0x232048AB4B0E0259(Var2))
			{
				if (iVar18 == (bParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_296(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_296(&(Global_76434[0 /*14*/]), iParam0, bParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		UNK_0x30BBA34DD235D7FE(&Var20);
		iVar39 = 0;
		iVar40 = UNK_0xF6900DA2D9CD7BC5(bVar1, 7, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			UNK_0x4F79808059300187(iVar38, &Var20);
			if (!UNK_0x232048AB4B0E0259(Var20))
			{
				if (iVar39 == (bParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_296(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, UNK_0x1A5A491D253EA7BA(Var20.f_1, joaat("OUTFIT_ONLY"), false), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		UNK_0x65C0659496B1CC14(&Var41);
		if (bParam3 != -1 && Global_76603)
		{
			UNK_0xFDEBA3FD0BF0D4AC(bParam3, &Var41);
			Global_2621444 = Var41.f_1;
			Global_2621445 = Var41;
			func_296(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, UNK_0x1A5A491D253EA7BA(Var41.f_1, joaat("OUTFIT_ONLY"), false), -1, 2, Var41.f_1 != 0);
			return;
		}
		iVar59 = 0;
		iVar60 = UNK_0xF6900DA2D9CD7BC5(bVar1, 7, -1, 0, -1, func_274(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			UNK_0xC578687D5A643830(iVar58, &Var41);
			if (!UNK_0x232048AB4B0E0259(Var41))
			{
				if (iVar59 == (bParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_296(&(Global_76434[0 /*14*/]), iParam0, bParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, UNK_0x1A5A491D253EA7BA(Var41.f_1, joaat("OUTFIT_ONLY"), false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_307(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_306(iVar10, bParam0, 9, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_308(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		case 15:
			StringCopy(&cVar2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 18:
			StringCopy(&cVar2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 19:
			StringCopy(&cVar2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 20:
			StringCopy(&cVar2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		case 25:
			StringCopy(&cVar2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		case 26:
			StringCopy(&cVar2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		case 27:
			StringCopy(&cVar2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 28:
			StringCopy(&cVar2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		case 29:
			StringCopy(&cVar2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		case 30:
			StringCopy(&cVar2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		case 31:
			StringCopy(&cVar2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		case 32:
			StringCopy(&cVar2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		case 33:
			StringCopy(&cVar2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		case 34:
			StringCopy(&cVar2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 35:
			StringCopy(&cVar2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 36:
			StringCopy(&cVar2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 37:
			StringCopy(&cVar2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 38:
			StringCopy(&cVar2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 39:
			StringCopy(&cVar2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 40:
			StringCopy(&cVar2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 41:
			StringCopy(&cVar2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 48, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_309(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 1, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_310(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 1, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_311(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 6, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_312(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		default:
			func_306(iVar10, bParam0, 33, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_313(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 11:
			StringCopy(&cVar2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		case 12:
			StringCopy(&cVar2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		case 13:
			StringCopy(&cVar2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 14:
			StringCopy(&cVar2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		case 15:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		case 16:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		default:
			func_306(iVar10, bParam0, 17, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_314(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_306(iVar10, bParam0, 18, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_315(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_306(iVar10, bParam0, 7, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_316(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		case 2:
			StringCopy(&cVar2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		case 3:
			StringCopy(&cVar2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		case 4:
			StringCopy(&cVar2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		case 5:
			StringCopy(&cVar2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		case 6:
			StringCopy(&cVar2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		case 7:
			StringCopy(&cVar2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		case 18:
			StringCopy(&cVar2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 19:
			StringCopy(&cVar2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		case 20:
			StringCopy(&cVar2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		case 21:
			StringCopy(&cVar2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		case 22:
			StringCopy(&cVar2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		case 23:
			StringCopy(&cVar2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		case 24:
			StringCopy(&cVar2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		case 25:
			StringCopy(&cVar2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		case 26:
			StringCopy(&cVar2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		case 27:
			StringCopy(&cVar2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		case 28:
			StringCopy(&cVar2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		case 37:
			StringCopy(&cVar2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 38:
			StringCopy(&cVar2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		case 39:
			StringCopy(&cVar2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		case 40:
			StringCopy(&cVar2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		case 41:
			StringCopy(&cVar2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 42:
			StringCopy(&cVar2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		case 43:
			StringCopy(&cVar2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		case 44:
			StringCopy(&cVar2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		case 45:
			StringCopy(&cVar2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		case 46:
			StringCopy(&cVar2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		case 47:
			StringCopy(&cVar2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		case 48:
			StringCopy(&cVar2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		case 49:
			StringCopy(&cVar2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		case 50:
			StringCopy(&cVar2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		case 51:
			StringCopy(&cVar2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		case 52:
			StringCopy(&cVar2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 53:
			StringCopy(&cVar2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		case 54:
			StringCopy(&cVar2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		case 55:
			StringCopy(&cVar2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 56:
			StringCopy(&cVar2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 57:
			StringCopy(&cVar2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 58:
			StringCopy(&cVar2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		case 59:
			StringCopy(&cVar2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		case 60:
			StringCopy(&cVar2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		case 61:
			StringCopy(&cVar2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		case 62:
			StringCopy(&cVar2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		case 63:
			StringCopy(&cVar2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		case 64:
			StringCopy(&cVar2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		case 65:
			StringCopy(&cVar2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		case 66:
			StringCopy(&cVar2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		case 67:
			StringCopy(&cVar2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		case 68:
			StringCopy(&cVar2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		case 69:
			StringCopy(&cVar2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 70:
			StringCopy(&cVar2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 71:
			StringCopy(&cVar2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 72:
			StringCopy(&cVar2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 73:
			StringCopy(&cVar2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 74:
			StringCopy(&cVar2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		case 75:
			StringCopy(&cVar2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		case 76:
			StringCopy(&cVar2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		case 77:
			StringCopy(&cVar2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		case 78:
			StringCopy(&cVar2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		case 79:
			StringCopy(&cVar2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		case 80:
			StringCopy(&cVar2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		case 81:
			StringCopy(&cVar2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		case 82:
			StringCopy(&cVar2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		case 83:
			StringCopy(&cVar2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		default:
			func_306(iVar10, bParam0, 84, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_317(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		case 2:
			StringCopy(&cVar2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		case 3:
			StringCopy(&cVar2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 20:
			StringCopy(&cVar2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 21:
			StringCopy(&cVar2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		case 22:
			StringCopy(&cVar2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		case 23:
			StringCopy(&cVar2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		case 24:
			StringCopy(&cVar2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		case 25:
			StringCopy(&cVar2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		case 26:
			StringCopy(&cVar2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		case 27:
			StringCopy(&cVar2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		case 28:
			StringCopy(&cVar2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		case 29:
			StringCopy(&cVar2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		case 36:
			StringCopy(&cVar2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		case 37:
			StringCopy(&cVar2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		case 38:
			StringCopy(&cVar2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		case 39:
			StringCopy(&cVar2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		case 40:
			StringCopy(&cVar2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		case 41:
			StringCopy(&cVar2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		case 42:
			StringCopy(&cVar2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		case 43:
			StringCopy(&cVar2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		case 45:
			StringCopy(&cVar2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		case 46:
			StringCopy(&cVar2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		case 47:
			StringCopy(&cVar2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		case 48:
			StringCopy(&cVar2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		case 49:
			StringCopy(&cVar2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		case 50:
			StringCopy(&cVar2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		case 51:
			StringCopy(&cVar2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		case 52:
			StringCopy(&cVar2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		case 53:
			StringCopy(&cVar2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		case 54:
			StringCopy(&cVar2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		case 55:
			StringCopy(&cVar2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		case 56:
			StringCopy(&cVar2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		case 57:
			StringCopy(&cVar2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		case 58:
			StringCopy(&cVar2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		case 59:
			StringCopy(&cVar2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		case 60:
			StringCopy(&cVar2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		case 61:
			StringCopy(&cVar2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		case 62:
			StringCopy(&cVar2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		case 63:
			StringCopy(&cVar2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		case 64:
			StringCopy(&cVar2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		case 65:
			StringCopy(&cVar2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		case 66:
			StringCopy(&cVar2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		case 67:
			StringCopy(&cVar2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		case 68:
			StringCopy(&cVar2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		case 69:
			StringCopy(&cVar2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		case 70:
			StringCopy(&cVar2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		case 71:
			StringCopy(&cVar2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		case 72:
			StringCopy(&cVar2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		case 73:
			StringCopy(&cVar2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		case 74:
			StringCopy(&cVar2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 75:
			StringCopy(&cVar2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		case 76:
			StringCopy(&cVar2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 77:
			StringCopy(&cVar2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		case 78:
			StringCopy(&cVar2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		case 79:
			StringCopy(&cVar2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		case 80:
			StringCopy(&cVar2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		case 81:
			StringCopy(&cVar2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		case 82:
			StringCopy(&cVar2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		case 83:
			StringCopy(&cVar2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		case 84:
			StringCopy(&cVar2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 85:
			StringCopy(&cVar2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		case 86:
			StringCopy(&cVar2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		case 87:
			StringCopy(&cVar2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		case 88:
			StringCopy(&cVar2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		case 89:
			StringCopy(&cVar2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		case 90:
			StringCopy(&cVar2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		case 91:
			StringCopy(&cVar2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		case 92:
			StringCopy(&cVar2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		case 93:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		case 95:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		case 96:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		case 97:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		case 98:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		case 99:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		case 100:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		case 101:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		case 102:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		case 103:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		default:
			func_306(iVar10, bParam0, 104, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_318(bool bParam0)
{
	if (bParam0 < 136)
	{
		func_320(bParam0);
	}
	else
	{
		func_319(bParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_306(3, bParam0, 242, -1);
	}
}

void func_319(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 136:
			StringCopy(&cVar2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		case 137:
			StringCopy(&cVar2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		case 138:
			StringCopy(&cVar2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		case 139:
			StringCopy(&cVar2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		case 140:
			StringCopy(&cVar2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		case 141:
			StringCopy(&cVar2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		case 142:
			StringCopy(&cVar2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		case 143:
			StringCopy(&cVar2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		case 144:
			StringCopy(&cVar2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		case 145:
			StringCopy(&cVar2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		case 146:
			StringCopy(&cVar2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		case 147:
			StringCopy(&cVar2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		case 148:
			StringCopy(&cVar2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		case 149:
			StringCopy(&cVar2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		case 150:
			StringCopy(&cVar2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		case 151:
			StringCopy(&cVar2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		case 152:
			StringCopy(&cVar2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		case 153:
			StringCopy(&cVar2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		case 154:
			StringCopy(&cVar2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		case 155:
			StringCopy(&cVar2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		case 156:
			StringCopy(&cVar2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		case 157:
			StringCopy(&cVar2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		case 158:
			StringCopy(&cVar2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		case 159:
			StringCopy(&cVar2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		case 160:
			StringCopy(&cVar2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 161:
			StringCopy(&cVar2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		case 162:
			StringCopy(&cVar2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		case 163:
			StringCopy(&cVar2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		case 164:
			StringCopy(&cVar2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		case 165:
			StringCopy(&cVar2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 166:
			StringCopy(&cVar2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		case 167:
			StringCopy(&cVar2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		case 168:
			StringCopy(&cVar2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		case 169:
			StringCopy(&cVar2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		case 170:
			StringCopy(&cVar2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		case 171:
			StringCopy(&cVar2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		case 172:
			StringCopy(&cVar2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		case 173:
			StringCopy(&cVar2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		case 174:
			StringCopy(&cVar2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		case 175:
			StringCopy(&cVar2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		case 176:
			StringCopy(&cVar2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		case 177:
			StringCopy(&cVar2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		case 178:
			StringCopy(&cVar2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		case 179:
			StringCopy(&cVar2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		case 180:
			StringCopy(&cVar2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		case 181:
			StringCopy(&cVar2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		case 182:
			StringCopy(&cVar2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		case 183:
			StringCopy(&cVar2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		case 184:
			StringCopy(&cVar2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		case 185:
			StringCopy(&cVar2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		case 186:
			StringCopy(&cVar2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		case 187:
			StringCopy(&cVar2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		case 188:
			StringCopy(&cVar2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		case 189:
			StringCopy(&cVar2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		case 190:
			StringCopy(&cVar2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		case 191:
			StringCopy(&cVar2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		case 192:
			StringCopy(&cVar2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		case 193:
			StringCopy(&cVar2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		case 194:
			StringCopy(&cVar2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		case 195:
			StringCopy(&cVar2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		case 196:
			StringCopy(&cVar2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		case 197:
			StringCopy(&cVar2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		case 198:
			StringCopy(&cVar2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		case 199:
			StringCopy(&cVar2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		case 200:
			StringCopy(&cVar2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		case 201:
			StringCopy(&cVar2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		case 202:
			StringCopy(&cVar2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		case 203:
			StringCopy(&cVar2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		case 204:
			StringCopy(&cVar2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		case 205:
			StringCopy(&cVar2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		case 206:
			StringCopy(&cVar2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		case 207:
			StringCopy(&cVar2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		case 208:
			StringCopy(&cVar2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		case 209:
			StringCopy(&cVar2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		case 210:
			StringCopy(&cVar2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		case 211:
			StringCopy(&cVar2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		case 212:
			StringCopy(&cVar2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		case 213:
			StringCopy(&cVar2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		case 214:
			StringCopy(&cVar2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		case 215:
			StringCopy(&cVar2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		case 216:
			StringCopy(&cVar2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		case 217:
			StringCopy(&cVar2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		case 218:
			StringCopy(&cVar2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		case 219:
			StringCopy(&cVar2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		case 220:
			StringCopy(&cVar2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		case 221:
			StringCopy(&cVar2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		case 222:
			StringCopy(&cVar2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		case 223:
			StringCopy(&cVar2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		case 224:
			StringCopy(&cVar2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		case 225:
			StringCopy(&cVar2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		case 226:
			StringCopy(&cVar2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		case 227:
			StringCopy(&cVar2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		case 228:
			StringCopy(&cVar2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		case 229:
			StringCopy(&cVar2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		case 230:
			StringCopy(&cVar2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		case 231:
			StringCopy(&cVar2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		case 232:
			StringCopy(&cVar2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		case 233:
			StringCopy(&cVar2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		case 234:
			StringCopy(&cVar2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		case 235:
			StringCopy(&cVar2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		case 236:
			StringCopy(&cVar2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		case 237:
			StringCopy(&cVar2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		case 238:
			StringCopy(&cVar2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		case 239:
			StringCopy(&cVar2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		case 240:
			StringCopy(&cVar2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		case 241:
			StringCopy(&cVar2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		default:
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_320(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		case 2:
			StringCopy(&cVar2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		case 4:
			StringCopy(&cVar2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		case 5:
			StringCopy(&cVar2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		case 6:
			StringCopy(&cVar2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		case 7:
			StringCopy(&cVar2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		case 8:
			StringCopy(&cVar2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		case 9:
			StringCopy(&cVar2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		case 10:
			StringCopy(&cVar2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		case 11:
			StringCopy(&cVar2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		case 12:
			StringCopy(&cVar2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		case 13:
			StringCopy(&cVar2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		case 14:
			StringCopy(&cVar2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		case 15:
			StringCopy(&cVar2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		case 19:
			StringCopy(&cVar2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		case 20:
			StringCopy(&cVar2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		case 21:
			StringCopy(&cVar2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		case 22:
			StringCopy(&cVar2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		case 23:
			StringCopy(&cVar2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		case 24:
			StringCopy(&cVar2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		case 25:
			StringCopy(&cVar2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		case 26:
			StringCopy(&cVar2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		case 27:
			StringCopy(&cVar2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		case 29:
			StringCopy(&cVar2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		case 30:
			StringCopy(&cVar2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		case 31:
			StringCopy(&cVar2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		case 32:
			StringCopy(&cVar2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		case 33:
			StringCopy(&cVar2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		case 34:
			StringCopy(&cVar2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		case 35:
			StringCopy(&cVar2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		case 36:
			StringCopy(&cVar2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		case 37:
			StringCopy(&cVar2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		case 38:
			StringCopy(&cVar2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		case 39:
			StringCopy(&cVar2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		case 40:
			StringCopy(&cVar2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		case 41:
			StringCopy(&cVar2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		case 42:
			StringCopy(&cVar2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		case 43:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 48:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 49:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 53:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 54:
			StringCopy(&cVar2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		case 56:
			StringCopy(&cVar2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		case 57:
			StringCopy(&cVar2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		case 58:
			StringCopy(&cVar2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		case 59:
			StringCopy(&cVar2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		case 60:
			StringCopy(&cVar2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		case 61:
			StringCopy(&cVar2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		case 62:
			StringCopy(&cVar2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		case 63:
			StringCopy(&cVar2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		case 64:
			StringCopy(&cVar2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		case 65:
			StringCopy(&cVar2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		case 66:
			StringCopy(&cVar2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		case 67:
			StringCopy(&cVar2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		case 68:
			StringCopy(&cVar2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		case 69:
			StringCopy(&cVar2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		case 70:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		case 71:
			StringCopy(&cVar2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 72:
			StringCopy(&cVar2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		case 73:
			StringCopy(&cVar2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		case 74:
			StringCopy(&cVar2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		case 75:
			StringCopy(&cVar2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		case 76:
			StringCopy(&cVar2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		case 77:
			StringCopy(&cVar2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		case 78:
			StringCopy(&cVar2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		case 79:
			StringCopy(&cVar2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 80:
			StringCopy(&cVar2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		case 81:
			StringCopy(&cVar2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		case 82:
			StringCopy(&cVar2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 83:
			StringCopy(&cVar2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		case 84:
			StringCopy(&cVar2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 85:
			StringCopy(&cVar2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		case 86:
			StringCopy(&cVar2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		case 87:
			StringCopy(&cVar2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		case 88:
			StringCopy(&cVar2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		case 89:
			StringCopy(&cVar2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		case 90:
			StringCopy(&cVar2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		case 91:
			StringCopy(&cVar2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		case 92:
			StringCopy(&cVar2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		case 93:
			StringCopy(&cVar2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		case 94:
			StringCopy(&cVar2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		case 95:
			StringCopy(&cVar2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 96:
			StringCopy(&cVar2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 97:
			StringCopy(&cVar2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 98:
			StringCopy(&cVar2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 99:
			StringCopy(&cVar2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		case 100:
			StringCopy(&cVar2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		case 101:
			StringCopy(&cVar2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		case 102:
			StringCopy(&cVar2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		case 103:
			StringCopy(&cVar2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		case 104:
			StringCopy(&cVar2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		case 105:
			StringCopy(&cVar2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		case 106:
			StringCopy(&cVar2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		case 107:
			StringCopy(&cVar2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		case 108:
			StringCopy(&cVar2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		case 109:
			StringCopy(&cVar2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		case 110:
			StringCopy(&cVar2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		case 111:
			StringCopy(&cVar2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		case 112:
			StringCopy(&cVar2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		case 113:
			StringCopy(&cVar2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		case 114:
			StringCopy(&cVar2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		case 115:
			StringCopy(&cVar2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		case 116:
			StringCopy(&cVar2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		case 117:
			StringCopy(&cVar2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		case 118:
			StringCopy(&cVar2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		case 119:
			StringCopy(&cVar2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		case 120:
			StringCopy(&cVar2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		case 121:
			StringCopy(&cVar2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		case 122:
			StringCopy(&cVar2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		case 123:
			StringCopy(&cVar2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		case 124:
			StringCopy(&cVar2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		case 125:
			StringCopy(&cVar2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		case 126:
			StringCopy(&cVar2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		case 127:
			StringCopy(&cVar2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		case 128:
			StringCopy(&cVar2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		case 129:
			StringCopy(&cVar2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		case 130:
			StringCopy(&cVar2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		case 131:
			StringCopy(&cVar2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		case 132:
			StringCopy(&cVar2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		case 133:
			StringCopy(&cVar2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		case 134:
			StringCopy(&cVar2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		case 135:
			StringCopy(&cVar2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		default:
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_321(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 9, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_322(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		default:
			func_306(iVar10, bParam0, 7, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_323(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_341(bParam1);
			break;
		case 2:
			func_340(bParam1);
			break;
		case 3:
			func_336(bParam1);
			break;
		case 4:
			func_335(bParam1);
			break;
		case 6:
			func_334(bParam1);
			break;
		case 5:
			func_333(bParam1);
			break;
		case 8:
			func_332(bParam1);
			break;
		case 9:
			func_331(bParam1);
			break;
		case 10:
			func_330(bParam1);
			break;
		case 1:
			func_329(bParam1);
			break;
		case 7:
			func_328(bParam1);
			break;
		case 11:
			func_327(bParam1);
			break;
		case 12:
			func_326(bParam1);
			break;
		case 13:
			func_325(bParam1);
			break;
		case 14:
			func_324(bParam1);
			break;
	}
}

void func_324(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		case 158:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		case 159:
			StringCopy(&cVar2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		case 160:
			StringCopy(&cVar2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		case 161:
			StringCopy(&cVar2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		case 162:
			StringCopy(&cVar2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		case 163:
			StringCopy(&cVar2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		case 164:
			StringCopy(&cVar2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		case 165:
			StringCopy(&cVar2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		case 166:
			StringCopy(&cVar2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		case 167:
			StringCopy(&cVar2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		case 168:
			StringCopy(&cVar2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		case 169:
			StringCopy(&cVar2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		case 170:
			StringCopy(&cVar2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		case 171:
			StringCopy(&cVar2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		case 172:
			StringCopy(&cVar2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		case 173:
			StringCopy(&cVar2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		case 174:
			StringCopy(&cVar2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		case 82:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 83:
			StringCopy(&cVar2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 84:
			StringCopy(&cVar2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 85:
			StringCopy(&cVar2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 86:
			StringCopy(&cVar2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 87:
			StringCopy(&cVar2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 88:
			StringCopy(&cVar2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 89:
			StringCopy(&cVar2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 90:
			StringCopy(&cVar2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 91:
			StringCopy(&cVar2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 92:
			StringCopy(&cVar2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		case 93:
			StringCopy(&cVar2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 94:
			StringCopy(&cVar2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		case 95:
			StringCopy(&cVar2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		case 96:
			StringCopy(&cVar2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		case 97:
			StringCopy(&cVar2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		case 98:
			StringCopy(&cVar2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 99:
			StringCopy(&cVar2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 100:
			StringCopy(&cVar2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		case 101:
			StringCopy(&cVar2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		case 102:
			StringCopy(&cVar2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		case 103:
			StringCopy(&cVar2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		case 104:
			StringCopy(&cVar2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		case 105:
			StringCopy(&cVar2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		case 106:
			StringCopy(&cVar2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		case 107:
			StringCopy(&cVar2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		case 108:
			StringCopy(&cVar2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		case 109:
			StringCopy(&cVar2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		case 110:
			StringCopy(&cVar2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 111:
			StringCopy(&cVar2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		case 112:
			StringCopy(&cVar2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 113:
			StringCopy(&cVar2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 114:
			StringCopy(&cVar2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 115:
			StringCopy(&cVar2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 116:
			StringCopy(&cVar2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 117:
			StringCopy(&cVar2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		case 118:
			StringCopy(&cVar2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 119:
			StringCopy(&cVar2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 120:
			StringCopy(&cVar2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 121:
			StringCopy(&cVar2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		case 122:
			StringCopy(&cVar2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 123:
			StringCopy(&cVar2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		case 124:
			StringCopy(&cVar2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		case 125:
			StringCopy(&cVar2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		case 126:
			StringCopy(&cVar2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		case 127:
			StringCopy(&cVar2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		case 128:
			StringCopy(&cVar2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 129:
			StringCopy(&cVar2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 130:
			StringCopy(&cVar2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		case 131:
			StringCopy(&cVar2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		case 132:
			StringCopy(&cVar2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		case 133:
			StringCopy(&cVar2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		case 134:
			StringCopy(&cVar2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 135:
			StringCopy(&cVar2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		case 136:
			StringCopy(&cVar2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		case 137:
			StringCopy(&cVar2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		case 138:
			StringCopy(&cVar2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		case 139:
			StringCopy(&cVar2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		case 140:
			StringCopy(&cVar2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 141:
			StringCopy(&cVar2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 142:
			StringCopy(&cVar2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		case 143:
			StringCopy(&cVar2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		case 144:
			StringCopy(&cVar2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		case 145:
			StringCopy(&cVar2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		case 146:
			StringCopy(&cVar2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 147:
			StringCopy(&cVar2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 148:
			StringCopy(&cVar2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 149:
			StringCopy(&cVar2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		case 150:
			StringCopy(&cVar2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		case 151:
			StringCopy(&cVar2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		case 152:
			StringCopy(&cVar2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		case 153:
			StringCopy(&cVar2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 154:
			StringCopy(&cVar2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		case 155:
			StringCopy(&cVar2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		case 156:
			StringCopy(&cVar2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		case 157:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		case 10:
			StringCopy(&cVar2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 31:
			StringCopy(&cVar2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 38:
			StringCopy(&cVar2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 39:
			StringCopy(&cVar2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		case 57:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 58:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 59:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 60:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 61:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 62:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 63:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 64:
			StringCopy(&cVar2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		case 65:
			StringCopy(&cVar2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		case 66:
			StringCopy(&cVar2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		case 67:
			StringCopy(&cVar2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		case 68:
			StringCopy(&cVar2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		case 69:
			StringCopy(&cVar2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		case 70:
			StringCopy(&cVar2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		case 71:
			StringCopy(&cVar2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		case 72:
			StringCopy(&cVar2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 75:
			StringCopy(&cVar2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		case 76:
			StringCopy(&cVar2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		case 77:
			StringCopy(&cVar2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		case 78:
			StringCopy(&cVar2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		case 79:
			StringCopy(&cVar2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		case 80:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 81:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 175, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_325(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 9, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_326(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		case 12:
			StringCopy(&cVar2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 14:
			StringCopy(&cVar2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 15:
			StringCopy(&cVar2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 16:
			StringCopy(&cVar2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		case 23:
			StringCopy(&cVar2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 24:
			StringCopy(&cVar2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 25:
			StringCopy(&cVar2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		case 26:
			StringCopy(&cVar2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 27:
			StringCopy(&cVar2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		case 28:
			StringCopy(&cVar2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		case 29:
			StringCopy(&cVar2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		case 30:
			StringCopy(&cVar2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		case 31:
			StringCopy(&cVar2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		case 32:
			StringCopy(&cVar2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 33:
			StringCopy(&cVar2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 34:
			StringCopy(&cVar2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 35:
			StringCopy(&cVar2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 36:
			StringCopy(&cVar2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 37:
			StringCopy(&cVar2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 38:
			StringCopy(&cVar2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		case 39:
			StringCopy(&cVar2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		case 40:
			StringCopy(&cVar2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		case 41:
			StringCopy(&cVar2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 47, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_327(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		case 5:
			StringCopy(&cVar2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		case 7:
			StringCopy(&cVar2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		case 8:
			StringCopy(&cVar2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		case 9:
			StringCopy(&cVar2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		case 11:
			StringCopy(&cVar2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		case 12:
			StringCopy(&cVar2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		case 13:
			StringCopy(&cVar2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		case 14:
			StringCopy(&cVar2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		case 15:
			StringCopy(&cVar2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		case 16:
			StringCopy(&cVar2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		case 17:
			StringCopy(&cVar2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		case 18:
			StringCopy(&cVar2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		case 19:
			StringCopy(&cVar2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		case 20:
			StringCopy(&cVar2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		case 21:
			StringCopy(&cVar2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		case 22:
			StringCopy(&cVar2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		case 23:
			StringCopy(&cVar2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		case 24:
			StringCopy(&cVar2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		case 25:
			StringCopy(&cVar2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		case 27:
			StringCopy(&cVar2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		case 28:
			StringCopy(&cVar2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		case 29:
			StringCopy(&cVar2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		case 30:
			StringCopy(&cVar2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		case 31:
			StringCopy(&cVar2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		case 32:
			StringCopy(&cVar2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		case 33:
			StringCopy(&cVar2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		case 34:
			StringCopy(&cVar2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		case 35:
			StringCopy(&cVar2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		case 36:
			StringCopy(&cVar2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		case 37:
			StringCopy(&cVar2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		case 38:
			StringCopy(&cVar2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		case 39:
			StringCopy(&cVar2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		case 40:
			StringCopy(&cVar2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		case 41:
			StringCopy(&cVar2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		case 44:
			StringCopy(&cVar2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 49:
			StringCopy(&cVar2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		case 50:
			StringCopy(&cVar2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		case 51:
			StringCopy(&cVar2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		case 52:
			StringCopy(&cVar2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		case 53:
			StringCopy(&cVar2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		case 54:
			StringCopy(&cVar2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		case 55:
			StringCopy(&cVar2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		case 56:
			StringCopy(&cVar2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		case 57:
			StringCopy(&cVar2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 58:
			StringCopy(&cVar2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		case 59:
			StringCopy(&cVar2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		case 60:
			StringCopy(&cVar2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		case 61:
			StringCopy(&cVar2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		case 62:
			StringCopy(&cVar2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		default:
			func_306(iVar10, bParam0, 63, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_328(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 1, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_329(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 5, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_330(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		case 41:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		case 42:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		case 43:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 49:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 53, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_331(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 6:
			StringCopy(&cVar2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 7:
			StringCopy(&cVar2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		case 8:
			StringCopy(&cVar2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 12, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_332(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		case 12:
			StringCopy(&cVar2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		case 13:
			StringCopy(&cVar2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		case 14:
			StringCopy(&cVar2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		case 15:
			StringCopy(&cVar2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		case 16:
			StringCopy(&cVar2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		case 17:
			StringCopy(&cVar2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		case 18:
			StringCopy(&cVar2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		case 19:
			StringCopy(&cVar2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		case 20:
			StringCopy(&cVar2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		case 21:
			StringCopy(&cVar2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		case 22:
			StringCopy(&cVar2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		case 23:
			StringCopy(&cVar2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		case 29:
			StringCopy(&cVar2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		case 30:
			StringCopy(&cVar2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		case 31:
			StringCopy(&cVar2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		case 32:
			StringCopy(&cVar2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		case 33:
			StringCopy(&cVar2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		case 34:
			StringCopy(&cVar2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		case 35:
			StringCopy(&cVar2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		case 36:
			StringCopy(&cVar2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		case 37:
			StringCopy(&cVar2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		case 38:
			StringCopy(&cVar2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		case 39:
			StringCopy(&cVar2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		case 40:
			StringCopy(&cVar2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		case 41:
			StringCopy(&cVar2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		case 42:
			StringCopy(&cVar2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		case 43:
			StringCopy(&cVar2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		case 45:
			StringCopy(&cVar2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		case 46:
			StringCopy(&cVar2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		case 47:
			StringCopy(&cVar2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		case 48:
			StringCopy(&cVar2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		case 49:
			StringCopy(&cVar2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		case 50:
			StringCopy(&cVar2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		case 51:
			StringCopy(&cVar2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		case 52:
			StringCopy(&cVar2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		case 53:
			StringCopy(&cVar2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		case 54:
			StringCopy(&cVar2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		case 55:
			StringCopy(&cVar2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		case 56:
			StringCopy(&cVar2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		case 57:
			StringCopy(&cVar2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		case 58:
			StringCopy(&cVar2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		case 59:
			StringCopy(&cVar2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		case 60:
			StringCopy(&cVar2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		case 61:
			StringCopy(&cVar2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		case 62:
			StringCopy(&cVar2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		case 63:
			StringCopy(&cVar2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		case 64:
			StringCopy(&cVar2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		case 65:
			StringCopy(&cVar2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		case 66:
			StringCopy(&cVar2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		case 67:
			StringCopy(&cVar2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		case 68:
			StringCopy(&cVar2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		case 69:
			StringCopy(&cVar2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		case 70:
			StringCopy(&cVar2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		case 71:
			StringCopy(&cVar2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		case 72:
			StringCopy(&cVar2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		case 73:
			StringCopy(&cVar2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		case 74:
			StringCopy(&cVar2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		case 75:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 76:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 77, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_333(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_306(iVar10, bParam0, 7, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_334(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		case 2:
			StringCopy(&cVar2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		case 3:
			StringCopy(&cVar2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		case 4:
			StringCopy(&cVar2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		case 5:
			StringCopy(&cVar2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		case 6:
			StringCopy(&cVar2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		case 7:
			StringCopy(&cVar2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		case 8:
			StringCopy(&cVar2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		case 9:
			StringCopy(&cVar2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		case 10:
			StringCopy(&cVar2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		case 11:
			StringCopy(&cVar2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		case 12:
			StringCopy(&cVar2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		case 20:
			StringCopy(&cVar2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		case 21:
			StringCopy(&cVar2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		case 22:
			StringCopy(&cVar2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		case 23:
			StringCopy(&cVar2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 25:
			StringCopy(&cVar2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		case 26:
			StringCopy(&cVar2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		case 27:
			StringCopy(&cVar2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		case 28:
			StringCopy(&cVar2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		case 29:
			StringCopy(&cVar2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		case 30:
			StringCopy(&cVar2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		case 31:
			StringCopy(&cVar2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		case 32:
			StringCopy(&cVar2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		case 33:
			StringCopy(&cVar2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&cVar2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		case 38:
			StringCopy(&cVar2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		case 39:
			StringCopy(&cVar2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		case 40:
			StringCopy(&cVar2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		case 41:
			StringCopy(&cVar2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		case 42:
			StringCopy(&cVar2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		case 43:
			StringCopy(&cVar2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		case 44:
			StringCopy(&cVar2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		case 45:
			StringCopy(&cVar2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		case 46:
			StringCopy(&cVar2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		case 47:
			StringCopy(&cVar2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		case 48:
			StringCopy(&cVar2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		case 49:
			StringCopy(&cVar2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		case 50:
			StringCopy(&cVar2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		case 51:
			StringCopy(&cVar2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		case 52:
			StringCopy(&cVar2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		case 54:
			StringCopy(&cVar2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		case 55:
			StringCopy(&cVar2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		case 56:
			StringCopy(&cVar2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		case 57:
			StringCopy(&cVar2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		case 58:
			StringCopy(&cVar2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		case 59:
			StringCopy(&cVar2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		case 60:
			StringCopy(&cVar2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		case 61:
			StringCopy(&cVar2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		case 62:
			StringCopy(&cVar2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		case 63:
			StringCopy(&cVar2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		case 64:
			StringCopy(&cVar2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&cVar2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		case 66:
			StringCopy(&cVar2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		case 67:
			StringCopy(&cVar2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		case 68:
			StringCopy(&cVar2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		case 69:
			StringCopy(&cVar2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 70:
			StringCopy(&cVar2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		case 71:
			StringCopy(&cVar2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		case 72:
			StringCopy(&cVar2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		case 73:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		case 75:
			StringCopy(&cVar2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		case 76:
			StringCopy(&cVar2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 77:
			StringCopy(&cVar2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		case 78:
			StringCopy(&cVar2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		case 79:
			StringCopy(&cVar2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		case 80:
			StringCopy(&cVar2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		case 81:
			StringCopy(&cVar2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		case 82:
			StringCopy(&cVar2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		case 83:
			StringCopy(&cVar2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		case 84:
			StringCopy(&cVar2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		case 85:
			StringCopy(&cVar2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		case 86:
			StringCopy(&cVar2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		case 87:
			StringCopy(&cVar2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 88:
			StringCopy(&cVar2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		case 89:
			StringCopy(&cVar2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		case 90:
			StringCopy(&cVar2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		case 91:
			StringCopy(&cVar2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 92:
			StringCopy(&cVar2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		case 93:
			StringCopy(&cVar2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		case 94:
			StringCopy(&cVar2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		case 95:
			StringCopy(&cVar2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		case 96:
			StringCopy(&cVar2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		case 97:
			StringCopy(&cVar2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		case 98:
			StringCopy(&cVar2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		case 99:
			StringCopy(&cVar2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		case 100:
			StringCopy(&cVar2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		case 101:
			StringCopy(&cVar2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		case 102:
			StringCopy(&cVar2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 103:
			StringCopy(&cVar2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		case 104:
			StringCopy(&cVar2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		case 105:
			StringCopy(&cVar2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 106:
			StringCopy(&cVar2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 107:
			StringCopy(&cVar2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 108:
			StringCopy(&cVar2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		case 109:
			StringCopy(&cVar2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		case 110:
			StringCopy(&cVar2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		case 111:
			StringCopy(&cVar2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		case 112:
			StringCopy(&cVar2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		case 113:
			StringCopy(&cVar2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		case 114:
			StringCopy(&cVar2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		case 115:
			StringCopy(&cVar2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		case 116:
			StringCopy(&cVar2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		case 117:
			StringCopy(&cVar2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		case 118:
			StringCopy(&cVar2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		case 119:
			StringCopy(&cVar2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 120:
			StringCopy(&cVar2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 121:
			StringCopy(&cVar2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 122:
			StringCopy(&cVar2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 123:
			StringCopy(&cVar2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 124:
			StringCopy(&cVar2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		case 125:
			StringCopy(&cVar2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		case 126:
			StringCopy(&cVar2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		case 127:
			StringCopy(&cVar2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		case 128:
			StringCopy(&cVar2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		case 129:
			StringCopy(&cVar2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		case 130:
			StringCopy(&cVar2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		case 131:
			StringCopy(&cVar2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		case 132:
			StringCopy(&cVar2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		case 133:
			StringCopy(&cVar2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		default:
			func_306(iVar10, bParam0, 134, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_335(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		case 2:
			StringCopy(&cVar2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		case 3:
			StringCopy(&cVar2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		case 16:
			StringCopy(&cVar2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		case 17:
			StringCopy(&cVar2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		case 18:
			StringCopy(&cVar2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		case 19:
			StringCopy(&cVar2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		case 20:
			StringCopy(&cVar2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		case 21:
			StringCopy(&cVar2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 24:
			StringCopy(&cVar2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		case 26:
			StringCopy(&cVar2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		case 27:
			StringCopy(&cVar2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		case 28:
			StringCopy(&cVar2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 29:
			StringCopy(&cVar2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		case 30:
			StringCopy(&cVar2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&cVar2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		case 34:
			StringCopy(&cVar2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		case 35:
			StringCopy(&cVar2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		case 36:
			StringCopy(&cVar2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		case 37:
			StringCopy(&cVar2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		case 38:
			StringCopy(&cVar2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		case 42:
			StringCopy(&cVar2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		case 43:
			StringCopy(&cVar2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		case 44:
			StringCopy(&cVar2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		case 45:
			StringCopy(&cVar2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		case 46:
			StringCopy(&cVar2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		case 47:
			StringCopy(&cVar2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		case 48:
			StringCopy(&cVar2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		case 49:
			StringCopy(&cVar2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		case 50:
			StringCopy(&cVar2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		case 51:
			StringCopy(&cVar2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		case 52:
			StringCopy(&cVar2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		case 55:
			StringCopy(&cVar2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		case 56:
			StringCopy(&cVar2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		case 57:
			StringCopy(&cVar2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		case 58:
			StringCopy(&cVar2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		case 59:
			StringCopy(&cVar2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		case 60:
			StringCopy(&cVar2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		case 61:
			StringCopy(&cVar2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		case 62:
			StringCopy(&cVar2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		case 63:
			StringCopy(&cVar2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		case 64:
			StringCopy(&cVar2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		case 65:
			StringCopy(&cVar2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		case 66:
			StringCopy(&cVar2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		case 67:
			StringCopy(&cVar2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		case 68:
			StringCopy(&cVar2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		case 69:
			StringCopy(&cVar2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 70:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 71:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 72:
			StringCopy(&cVar2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		case 74:
			StringCopy(&cVar2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		case 75:
			StringCopy(&cVar2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		case 76:
			StringCopy(&cVar2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		case 77:
			StringCopy(&cVar2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		case 78:
			StringCopy(&cVar2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 79:
			StringCopy(&cVar2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		case 80:
			StringCopy(&cVar2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		case 81:
			StringCopy(&cVar2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		case 82:
			StringCopy(&cVar2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		case 83:
			StringCopy(&cVar2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		case 84:
			StringCopy(&cVar2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		case 85:
			StringCopy(&cVar2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		case 86:
			StringCopy(&cVar2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		case 87:
			StringCopy(&cVar2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		case 88:
			StringCopy(&cVar2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		case 89:
			StringCopy(&cVar2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		case 90:
			StringCopy(&cVar2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		case 91:
			StringCopy(&cVar2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		case 92:
			StringCopy(&cVar2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		case 93:
			StringCopy(&cVar2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		case 94:
			StringCopy(&cVar2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		case 95:
			StringCopy(&cVar2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		case 96:
			StringCopy(&cVar2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		case 97:
			StringCopy(&cVar2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		case 98:
			StringCopy(&cVar2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		case 99:
			StringCopy(&cVar2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		case 100:
			StringCopy(&cVar2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		case 101:
			StringCopy(&cVar2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		case 102:
			StringCopy(&cVar2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		case 103:
			StringCopy(&cVar2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		case 104:
			StringCopy(&cVar2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		case 105:
			StringCopy(&cVar2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		case 106:
			StringCopy(&cVar2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		case 107:
			StringCopy(&cVar2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		case 108:
			StringCopy(&cVar2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		case 109:
			StringCopy(&cVar2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		case 110:
			StringCopy(&cVar2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		case 111:
			StringCopy(&cVar2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		case 112:
			StringCopy(&cVar2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		case 113:
			StringCopy(&cVar2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		case 114:
			StringCopy(&cVar2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		case 115:
			StringCopy(&cVar2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		case 116:
			StringCopy(&cVar2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		default:
			func_306(iVar10, bParam0, 117, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_336(bool bParam0)
{
	if (bParam0 < 107)
	{
		func_339(bParam0);
	}
	else if (bParam0 < 227)
	{
		func_338(bParam0);
	}
	else
	{
		func_337(bParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_306(3, bParam0, 318, -1);
	}
}

void func_337(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 227:
			StringCopy(&cVar2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 228:
			StringCopy(&cVar2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		case 229:
			StringCopy(&cVar2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		case 230:
			StringCopy(&cVar2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		case 231:
			StringCopy(&cVar2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		case 232:
			StringCopy(&cVar2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		case 233:
			StringCopy(&cVar2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		case 234:
			StringCopy(&cVar2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		case 235:
			StringCopy(&cVar2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		case 236:
			StringCopy(&cVar2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		case 237:
			StringCopy(&cVar2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		case 238:
			StringCopy(&cVar2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		case 239:
			StringCopy(&cVar2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		case 240:
			StringCopy(&cVar2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		case 241:
			StringCopy(&cVar2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		case 242:
			StringCopy(&cVar2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		case 243:
			StringCopy(&cVar2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 244:
			StringCopy(&cVar2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 245:
			StringCopy(&cVar2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 246:
			StringCopy(&cVar2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 247:
			StringCopy(&cVar2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 248:
			StringCopy(&cVar2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 249:
			StringCopy(&cVar2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 250:
			StringCopy(&cVar2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 251:
			StringCopy(&cVar2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 252:
			StringCopy(&cVar2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 253:
			StringCopy(&cVar2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 254:
			StringCopy(&cVar2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 255:
			StringCopy(&cVar2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 256:
			StringCopy(&cVar2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 257:
			StringCopy(&cVar2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 258:
			StringCopy(&cVar2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		case 259:
			StringCopy(&cVar2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		case 260:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		case 261:
			StringCopy(&cVar2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		case 262:
			StringCopy(&cVar2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		case 263:
			StringCopy(&cVar2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		case 264:
			StringCopy(&cVar2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		case 265:
			StringCopy(&cVar2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 266:
			StringCopy(&cVar2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		case 267:
			StringCopy(&cVar2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		case 268:
			StringCopy(&cVar2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		case 269:
			StringCopy(&cVar2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		case 270:
			StringCopy(&cVar2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 271:
			StringCopy(&cVar2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		case 272:
			StringCopy(&cVar2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 273:
			StringCopy(&cVar2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		case 274:
			StringCopy(&cVar2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		case 275:
			StringCopy(&cVar2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		case 276:
			StringCopy(&cVar2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		case 277:
			StringCopy(&cVar2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		case 278:
			StringCopy(&cVar2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		case 279:
			StringCopy(&cVar2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		case 280:
			StringCopy(&cVar2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		case 281:
			StringCopy(&cVar2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		case 282:
			StringCopy(&cVar2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		case 283:
			StringCopy(&cVar2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		case 284:
			StringCopy(&cVar2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		case 285:
			StringCopy(&cVar2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		case 286:
			StringCopy(&cVar2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		case 287:
			StringCopy(&cVar2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		case 288:
			StringCopy(&cVar2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		case 289:
			StringCopy(&cVar2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		case 290:
			StringCopy(&cVar2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		case 291:
			StringCopy(&cVar2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		case 292:
			StringCopy(&cVar2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		case 293:
			StringCopy(&cVar2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 294:
			StringCopy(&cVar2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		case 295:
			StringCopy(&cVar2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		case 296:
			StringCopy(&cVar2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		case 297:
			StringCopy(&cVar2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		case 298:
			StringCopy(&cVar2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		case 299:
			StringCopy(&cVar2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		case 300:
			StringCopy(&cVar2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		case 301:
			StringCopy(&cVar2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		case 302:
			StringCopy(&cVar2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		case 303:
			StringCopy(&cVar2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		case 304:
			StringCopy(&cVar2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		case 305:
			StringCopy(&cVar2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		case 306:
			StringCopy(&cVar2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		case 307:
			StringCopy(&cVar2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		case 308:
			StringCopy(&cVar2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		case 309:
			StringCopy(&cVar2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		case 310:
			StringCopy(&cVar2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		case 311:
			StringCopy(&cVar2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		case 312:
			StringCopy(&cVar2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		case 313:
			StringCopy(&cVar2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		case 314:
			StringCopy(&cVar2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		case 315:
			StringCopy(&cVar2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		case 316:
			StringCopy(&cVar2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		case 317:
			StringCopy(&cVar2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		default:
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_338(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 107:
			StringCopy(&cVar2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		case 108:
			StringCopy(&cVar2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		case 109:
			StringCopy(&cVar2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		case 110:
			StringCopy(&cVar2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		case 111:
			StringCopy(&cVar2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		case 112:
			StringCopy(&cVar2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		case 113:
			StringCopy(&cVar2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		case 114:
			StringCopy(&cVar2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		case 115:
			StringCopy(&cVar2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		case 116:
			StringCopy(&cVar2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		case 117:
			StringCopy(&cVar2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		case 118:
			StringCopy(&cVar2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		case 119:
			StringCopy(&cVar2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		case 120:
			StringCopy(&cVar2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		case 121:
			StringCopy(&cVar2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		case 122:
			StringCopy(&cVar2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		case 123:
			StringCopy(&cVar2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 124:
			StringCopy(&cVar2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		case 125:
			StringCopy(&cVar2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		case 126:
			StringCopy(&cVar2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		case 127:
			StringCopy(&cVar2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		case 128:
			StringCopy(&cVar2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		case 129:
			StringCopy(&cVar2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		case 130:
			StringCopy(&cVar2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		case 131:
			StringCopy(&cVar2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		case 132:
			StringCopy(&cVar2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		case 133:
			StringCopy(&cVar2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		case 134:
			StringCopy(&cVar2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		case 135:
			StringCopy(&cVar2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		case 136:
			StringCopy(&cVar2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		case 137:
			StringCopy(&cVar2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		case 138:
			StringCopy(&cVar2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		case 139:
			StringCopy(&cVar2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		case 140:
			StringCopy(&cVar2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		case 141:
			StringCopy(&cVar2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		case 142:
			StringCopy(&cVar2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		case 143:
			StringCopy(&cVar2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		case 144:
			StringCopy(&cVar2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		case 145:
			StringCopy(&cVar2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		case 146:
			StringCopy(&cVar2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		case 147:
			StringCopy(&cVar2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		case 148:
			StringCopy(&cVar2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		case 149:
			StringCopy(&cVar2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		case 150:
			StringCopy(&cVar2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		case 151:
			StringCopy(&cVar2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		case 152:
			StringCopy(&cVar2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		case 153:
			StringCopy(&cVar2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		case 154:
			StringCopy(&cVar2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		case 155:
			StringCopy(&cVar2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		case 156:
			StringCopy(&cVar2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		case 157:
			StringCopy(&cVar2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		case 158:
			StringCopy(&cVar2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		case 159:
			StringCopy(&cVar2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 160:
			StringCopy(&cVar2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		case 161:
			StringCopy(&cVar2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		case 162:
			StringCopy(&cVar2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		case 163:
			StringCopy(&cVar2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		case 164:
			StringCopy(&cVar2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		case 165:
			StringCopy(&cVar2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		case 166:
			StringCopy(&cVar2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		case 167:
			StringCopy(&cVar2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		case 168:
			StringCopy(&cVar2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		case 169:
			StringCopy(&cVar2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		case 170:
			StringCopy(&cVar2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		case 171:
			StringCopy(&cVar2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		case 172:
			StringCopy(&cVar2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		case 173:
			StringCopy(&cVar2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		case 174:
			StringCopy(&cVar2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		case 175:
			StringCopy(&cVar2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		case 176:
			StringCopy(&cVar2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 177:
			StringCopy(&cVar2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		case 178:
			StringCopy(&cVar2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		case 179:
			StringCopy(&cVar2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		case 180:
			StringCopy(&cVar2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		case 181:
			StringCopy(&cVar2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		case 182:
			StringCopy(&cVar2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		case 183:
			StringCopy(&cVar2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		case 184:
			StringCopy(&cVar2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		case 185:
			StringCopy(&cVar2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		case 186:
			StringCopy(&cVar2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		case 187:
			StringCopy(&cVar2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		case 188:
			StringCopy(&cVar2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		case 189:
			StringCopy(&cVar2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		case 190:
			StringCopy(&cVar2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		case 191:
			StringCopy(&cVar2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		case 192:
			StringCopy(&cVar2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 193:
			StringCopy(&cVar2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 194:
			StringCopy(&cVar2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 195:
			StringCopy(&cVar2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 196:
			StringCopy(&cVar2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 197:
			StringCopy(&cVar2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 198:
			StringCopy(&cVar2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 199:
			StringCopy(&cVar2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 200:
			StringCopy(&cVar2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 201:
			StringCopy(&cVar2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 202:
			StringCopy(&cVar2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 203:
			StringCopy(&cVar2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		case 204:
			StringCopy(&cVar2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 205:
			StringCopy(&cVar2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 206:
			StringCopy(&cVar2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		case 207:
			StringCopy(&cVar2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		case 208:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 209:
			StringCopy(&cVar2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		case 210:
			StringCopy(&cVar2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		case 211:
			StringCopy(&cVar2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		case 212:
			StringCopy(&cVar2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		case 213:
			StringCopy(&cVar2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		case 214:
			StringCopy(&cVar2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		case 215:
			StringCopy(&cVar2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		case 216:
			StringCopy(&cVar2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		case 217:
			StringCopy(&cVar2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		case 218:
			StringCopy(&cVar2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		case 219:
			StringCopy(&cVar2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		case 220:
			StringCopy(&cVar2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		case 221:
			StringCopy(&cVar2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		case 222:
			StringCopy(&cVar2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		case 223:
			StringCopy(&cVar2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		case 224:
			StringCopy(&cVar2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		case 225:
			StringCopy(&cVar2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		case 226:
			StringCopy(&cVar2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		default:
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_339(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		case 3:
			StringCopy(&cVar2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 4:
			StringCopy(&cVar2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		case 5:
			StringCopy(&cVar2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		case 6:
			StringCopy(&cVar2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		case 7:
			StringCopy(&cVar2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		case 8:
			StringCopy(&cVar2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		case 9:
			StringCopy(&cVar2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		case 10:
			StringCopy(&cVar2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		case 11:
			StringCopy(&cVar2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		case 12:
			StringCopy(&cVar2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		case 13:
			StringCopy(&cVar2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		case 14:
			StringCopy(&cVar2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		case 15:
			StringCopy(&cVar2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 22:
			StringCopy(&cVar2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		case 24:
			StringCopy(&cVar2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		case 25:
			StringCopy(&cVar2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		case 26:
			StringCopy(&cVar2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		case 27:
			StringCopy(&cVar2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		case 28:
			StringCopy(&cVar2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		case 29:
			StringCopy(&cVar2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		case 30:
			StringCopy(&cVar2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		case 31:
			StringCopy(&cVar2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		case 32:
			StringCopy(&cVar2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		case 33:
			StringCopy(&cVar2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		case 34:
			StringCopy(&cVar2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		case 35:
			StringCopy(&cVar2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		case 36:
			StringCopy(&cVar2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		case 37:
			StringCopy(&cVar2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		case 38:
			StringCopy(&cVar2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		case 39:
			StringCopy(&cVar2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		case 41:
			StringCopy(&cVar2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 42:
			StringCopy(&cVar2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		case 43:
			StringCopy(&cVar2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		case 44:
			StringCopy(&cVar2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		case 45:
			StringCopy(&cVar2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		case 46:
			StringCopy(&cVar2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		case 47:
			StringCopy(&cVar2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		case 48:
			StringCopy(&cVar2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		case 49:
			StringCopy(&cVar2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		case 50:
			StringCopy(&cVar2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		case 51:
			StringCopy(&cVar2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		case 52:
			StringCopy(&cVar2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		case 53:
			StringCopy(&cVar2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		case 54:
			StringCopy(&cVar2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		case 55:
			StringCopy(&cVar2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		case 56:
			StringCopy(&cVar2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		case 57:
			StringCopy(&cVar2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		case 58:
			StringCopy(&cVar2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		case 59:
			StringCopy(&cVar2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		case 60:
			StringCopy(&cVar2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 61:
			StringCopy(&cVar2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		case 62:
			StringCopy(&cVar2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		case 63:
			StringCopy(&cVar2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		case 64:
			StringCopy(&cVar2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		case 65:
			StringCopy(&cVar2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		case 66:
			StringCopy(&cVar2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		case 67:
			StringCopy(&cVar2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		case 68:
			StringCopy(&cVar2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		case 69:
			StringCopy(&cVar2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		case 70:
			StringCopy(&cVar2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		case 71:
			StringCopy(&cVar2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		case 72:
			StringCopy(&cVar2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		case 73:
			StringCopy(&cVar2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 74:
			StringCopy(&cVar2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 75:
			StringCopy(&cVar2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 76:
			StringCopy(&cVar2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 77:
			StringCopy(&cVar2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		case 78:
			StringCopy(&cVar2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		case 79:
			StringCopy(&cVar2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		case 80:
			StringCopy(&cVar2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		case 81:
			StringCopy(&cVar2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		case 82:
			StringCopy(&cVar2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		case 83:
			StringCopy(&cVar2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 84:
			StringCopy(&cVar2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		case 85:
			StringCopy(&cVar2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		case 86:
			StringCopy(&cVar2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		case 87:
			StringCopy(&cVar2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		case 88:
			StringCopy(&cVar2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		case 89:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 90:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 91:
			StringCopy(&cVar2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 92:
			StringCopy(&cVar2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		case 93:
			StringCopy(&cVar2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		case 94:
			StringCopy(&cVar2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		case 95:
			StringCopy(&cVar2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		case 96:
			StringCopy(&cVar2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		case 97:
			StringCopy(&cVar2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		case 98:
			StringCopy(&cVar2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		case 99:
			StringCopy(&cVar2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		case 100:
			StringCopy(&cVar2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		case 101:
			StringCopy(&cVar2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		case 102:
			StringCopy(&cVar2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		case 103:
			StringCopy(&cVar2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		case 104:
			StringCopy(&cVar2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		case 105:
			StringCopy(&cVar2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		case 106:
			StringCopy(&cVar2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		default:
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_340(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		case 5:
			StringCopy(&cVar2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		case 6:
			StringCopy(&cVar2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		case 7:
			StringCopy(&cVar2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		case 8:
			StringCopy(&cVar2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		case 9:
			StringCopy(&cVar2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		case 10:
			StringCopy(&cVar2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		case 11:
			StringCopy(&cVar2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		case 12:
			StringCopy(&cVar2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		case 13:
			StringCopy(&cVar2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		case 14:
			StringCopy(&cVar2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		case 15:
			StringCopy(&cVar2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		case 16:
			StringCopy(&cVar2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 17:
			StringCopy(&cVar2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 18:
			StringCopy(&cVar2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		case 19:
			StringCopy(&cVar2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_306(iVar10, bParam0, 21, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_341(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		default:
			func_306(iVar10, bParam0, 10, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_342(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_359(bParam1);
			break;
		case 2:
			func_358(bParam1);
			break;
		case 3:
			func_355(bParam1);
			break;
		case 4:
			func_354(bParam1);
			break;
		case 6:
			func_353(bParam1);
			break;
		case 5:
			func_352(bParam1);
			break;
		case 8:
			func_351(bParam1);
			break;
		case 9:
			func_350(bParam1);
			break;
		case 10:
			func_349(bParam1);
			break;
		case 1:
			func_348(bParam1);
			break;
		case 7:
			func_347(bParam1);
			break;
		case 11:
			func_346(bParam1);
			break;
		case 12:
			func_345(bParam1);
			break;
		case 13:
			func_344(bParam1);
			break;
		case 14:
			func_343(bParam1);
			break;
	}
}

void func_343(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 31:
			StringCopy(&cVar2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		case 38:
			StringCopy(&cVar2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 39:
			StringCopy(&cVar2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		case 40:
			StringCopy(&cVar2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 41:
			StringCopy(&cVar2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		case 42:
			StringCopy(&cVar2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 43:
			StringCopy(&cVar2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 44:
			StringCopy(&cVar2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		case 53:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 54:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 55:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 57:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		case 58:
			StringCopy(&cVar2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		case 59:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 60:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		case 61:
			StringCopy(&cVar2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		case 62:
			StringCopy(&cVar2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		case 63:
			StringCopy(&cVar2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		case 64:
			StringCopy(&cVar2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		case 65:
			StringCopy(&cVar2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 66:
			StringCopy(&cVar2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		case 67:
			StringCopy(&cVar2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 68:
			StringCopy(&cVar2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 69:
			StringCopy(&cVar2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		case 70:
			StringCopy(&cVar2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		case 71:
			StringCopy(&cVar2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 72:
			StringCopy(&cVar2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		case 73:
			StringCopy(&cVar2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		case 74:
			StringCopy(&cVar2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		case 75:
			StringCopy(&cVar2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		case 76:
			StringCopy(&cVar2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		case 77:
			StringCopy(&cVar2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		case 78:
			StringCopy(&cVar2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		case 79:
			StringCopy(&cVar2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		case 80:
			StringCopy(&cVar2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 81:
			StringCopy(&cVar2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 82:
			StringCopy(&cVar2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 83:
			StringCopy(&cVar2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 84:
			StringCopy(&cVar2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 85:
			StringCopy(&cVar2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 86:
			StringCopy(&cVar2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 87:
			StringCopy(&cVar2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 88:
			StringCopy(&cVar2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 89:
			StringCopy(&cVar2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		case 90:
			StringCopy(&cVar2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		case 91:
			StringCopy(&cVar2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		case 92:
			StringCopy(&cVar2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 93:
			StringCopy(&cVar2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		case 94:
			StringCopy(&cVar2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 95:
			StringCopy(&cVar2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 96:
			StringCopy(&cVar2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		case 97:
			StringCopy(&cVar2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		case 98:
			StringCopy(&cVar2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		case 99:
			StringCopy(&cVar2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		case 100:
			StringCopy(&cVar2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		case 101:
			StringCopy(&cVar2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		case 102:
			StringCopy(&cVar2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		case 103:
			StringCopy(&cVar2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		case 104:
			StringCopy(&cVar2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		case 105:
			StringCopy(&cVar2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		case 106:
			StringCopy(&cVar2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		case 107:
			StringCopy(&cVar2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		case 108:
			StringCopy(&cVar2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		case 109:
			StringCopy(&cVar2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		case 110:
			StringCopy(&cVar2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		case 111:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		case 112:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		default:
			func_306(iVar10, bParam0, 113, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_344(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_306(iVar10, bParam0, 10, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_345(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 1:
			StringCopy(&cVar2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 9:
			StringCopy(&cVar2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 12:
			StringCopy(&cVar2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 13:
			StringCopy(&cVar2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 14:
			StringCopy(&cVar2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 15:
			StringCopy(&cVar2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		case 17:
			StringCopy(&cVar2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 18:
			StringCopy(&cVar2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 20:
			StringCopy(&cVar2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 21:
			StringCopy(&cVar2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 22:
			StringCopy(&cVar2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		case 23:
			StringCopy(&cVar2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 24:
			StringCopy(&cVar2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 25:
			StringCopy(&cVar2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 26:
			StringCopy(&cVar2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 27:
			StringCopy(&cVar2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 28:
			StringCopy(&cVar2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 30:
			StringCopy(&cVar2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		case 31:
			StringCopy(&cVar2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 32:
			StringCopy(&cVar2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 33:
			StringCopy(&cVar2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 34:
			StringCopy(&cVar2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 35:
			StringCopy(&cVar2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 36:
			StringCopy(&cVar2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 37:
			StringCopy(&cVar2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		case 38:
			StringCopy(&cVar2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		case 39:
			StringCopy(&cVar2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 40:
			StringCopy(&cVar2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		case 41:
			StringCopy(&cVar2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 42:
			StringCopy(&cVar2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		case 43:
			StringCopy(&cVar2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		case 44:
			StringCopy(&cVar2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		case 45:
			StringCopy(&cVar2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		case 46:
			StringCopy(&cVar2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		case 47:
			StringCopy(&cVar2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		case 48:
			StringCopy(&cVar2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 49:
			StringCopy(&cVar2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 50:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 51:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 52:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 53, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_346(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		case 4:
			StringCopy(&cVar2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		case 5:
			StringCopy(&cVar2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		case 6:
			StringCopy(&cVar2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		case 7:
			StringCopy(&cVar2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		case 8:
			StringCopy(&cVar2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		case 9:
			StringCopy(&cVar2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		case 10:
			StringCopy(&cVar2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		case 11:
			StringCopy(&cVar2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		case 12:
			StringCopy(&cVar2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		case 13:
			StringCopy(&cVar2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		case 14:
			StringCopy(&cVar2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		case 15:
			StringCopy(&cVar2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		case 16:
			StringCopy(&cVar2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		case 17:
			StringCopy(&cVar2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		case 18:
			StringCopy(&cVar2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 19:
			StringCopy(&cVar2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		case 20:
			StringCopy(&cVar2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		case 21:
			StringCopy(&cVar2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 22:
			StringCopy(&cVar2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		case 23:
			StringCopy(&cVar2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		case 24:
			StringCopy(&cVar2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		case 25:
			StringCopy(&cVar2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		case 26:
			StringCopy(&cVar2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		case 27:
			StringCopy(&cVar2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		case 28:
			StringCopy(&cVar2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		case 29:
			StringCopy(&cVar2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		case 30:
			StringCopy(&cVar2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		case 31:
			StringCopy(&cVar2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		case 32:
			StringCopy(&cVar2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		case 33:
			StringCopy(&cVar2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		case 34:
			StringCopy(&cVar2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		case 35:
			StringCopy(&cVar2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		case 36:
			StringCopy(&cVar2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		case 37:
			StringCopy(&cVar2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		case 38:
			StringCopy(&cVar2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		case 39:
			StringCopy(&cVar2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		case 40:
			StringCopy(&cVar2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		case 41:
			StringCopy(&cVar2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		case 42:
			StringCopy(&cVar2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		case 43:
			StringCopy(&cVar2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		case 44:
			StringCopy(&cVar2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 45, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_347(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 1, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_348(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 5, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_349(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		case 24:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		case 25:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		case 26:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		case 27:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		case 28:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 29:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		case 30:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		case 36:
			StringCopy(&cVar2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		case 37:
			StringCopy(&cVar2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		case 38:
			StringCopy(&cVar2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		case 39:
			StringCopy(&cVar2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		case 40:
			StringCopy(&cVar2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		case 41:
			StringCopy(&cVar2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		case 42:
			StringCopy(&cVar2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		case 43:
			StringCopy(&cVar2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		case 44:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		case 47:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		default:
			func_306(iVar10, bParam0, 48, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_350(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 11:
			StringCopy(&cVar2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		case 12:
			StringCopy(&cVar2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		case 13:
			StringCopy(&cVar2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		case 14:
			StringCopy(&cVar2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_306(iVar10, bParam0, 20, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_351(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_306(iVar10, bParam0, 24, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_352(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		default:
			func_306(iVar10, bParam0, 14, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_353(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		case 2:
			StringCopy(&cVar2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		case 3:
			StringCopy(&cVar2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		case 4:
			StringCopy(&cVar2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		case 5:
			StringCopy(&cVar2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 7:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 8:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 9:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 10:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 11:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 12:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 13:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 14:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 15:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&cVar2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 21:
			StringCopy(&cVar2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		case 22:
			StringCopy(&cVar2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		case 23:
			StringCopy(&cVar2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		case 24:
			StringCopy(&cVar2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		case 25:
			StringCopy(&cVar2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		case 26:
			StringCopy(&cVar2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		case 27:
			StringCopy(&cVar2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		case 28:
			StringCopy(&cVar2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		case 29:
			StringCopy(&cVar2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		case 30:
			StringCopy(&cVar2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		case 31:
			StringCopy(&cVar2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 32:
			StringCopy(&cVar2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		case 33:
			StringCopy(&cVar2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		case 34:
			StringCopy(&cVar2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		case 35:
			StringCopy(&cVar2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		case 36:
			StringCopy(&cVar2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		case 37:
			StringCopy(&cVar2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&cVar2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		case 40:
			StringCopy(&cVar2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		case 41:
			StringCopy(&cVar2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		case 42:
			StringCopy(&cVar2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		case 43:
			StringCopy(&cVar2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		case 44:
			StringCopy(&cVar2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 45:
			StringCopy(&cVar2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		case 46:
			StringCopy(&cVar2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		case 47:
			StringCopy(&cVar2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		case 48:
			StringCopy(&cVar2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		case 49:
			StringCopy(&cVar2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		case 50:
			StringCopy(&cVar2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		case 51:
			StringCopy(&cVar2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		case 52:
			StringCopy(&cVar2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		case 53:
			StringCopy(&cVar2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		case 54:
			StringCopy(&cVar2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		case 55:
			StringCopy(&cVar2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		case 56:
			StringCopy(&cVar2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		case 57:
			StringCopy(&cVar2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		case 58:
			StringCopy(&cVar2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		case 59:
			StringCopy(&cVar2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 60:
			StringCopy(&cVar2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 61:
			StringCopy(&cVar2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		case 62:
			StringCopy(&cVar2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		case 63:
			StringCopy(&cVar2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		case 64:
			StringCopy(&cVar2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		case 65:
			StringCopy(&cVar2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		case 66:
			StringCopy(&cVar2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		case 67:
			StringCopy(&cVar2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		case 68:
			StringCopy(&cVar2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		case 69:
			StringCopy(&cVar2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		case 70:
			StringCopy(&cVar2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		case 71:
			StringCopy(&cVar2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		case 72:
			StringCopy(&cVar2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 73:
			StringCopy(&cVar2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 74:
			StringCopy(&cVar2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 75:
			StringCopy(&cVar2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 76:
			StringCopy(&cVar2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 77:
			StringCopy(&cVar2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		case 78:
			StringCopy(&cVar2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		case 79:
			StringCopy(&cVar2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		case 80:
			StringCopy(&cVar2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		case 81:
			StringCopy(&cVar2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		case 82:
			StringCopy(&cVar2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		case 83:
			StringCopy(&cVar2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		case 84:
			StringCopy(&cVar2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		case 85:
			StringCopy(&cVar2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		case 86:
			StringCopy(&cVar2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		case 87:
			StringCopy(&cVar2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		case 88:
			StringCopy(&cVar2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		case 89:
			StringCopy(&cVar2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 90:
			StringCopy(&cVar2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		case 91:
			StringCopy(&cVar2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		case 92:
			StringCopy(&cVar2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		case 93:
			StringCopy(&cVar2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		case 94:
			StringCopy(&cVar2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		case 95:
			StringCopy(&cVar2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		case 96:
			StringCopy(&cVar2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		case 97:
			StringCopy(&cVar2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		case 98:
			StringCopy(&cVar2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		default:
			func_306(iVar10, bParam0, 99, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_354(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		case 9:
			StringCopy(&cVar2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		case 10:
			StringCopy(&cVar2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		case 11:
			StringCopy(&cVar2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		case 12:
			StringCopy(&cVar2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		case 13:
			StringCopy(&cVar2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		case 14:
			StringCopy(&cVar2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		case 15:
			StringCopy(&cVar2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 21:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 22:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 23:
			StringCopy(&cVar2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		case 24:
			StringCopy(&cVar2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 25:
			StringCopy(&cVar2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		case 26:
			StringCopy(&cVar2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		case 27:
			StringCopy(&cVar2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		case 28:
			StringCopy(&cVar2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		case 29:
			StringCopy(&cVar2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		case 30:
			StringCopy(&cVar2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		case 31:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 32:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 39:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 40:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 41:
			StringCopy(&cVar2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		case 42:
			StringCopy(&cVar2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		case 43:
			StringCopy(&cVar2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		case 44:
			StringCopy(&cVar2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		case 45:
			StringCopy(&cVar2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		case 46:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 47:
			StringCopy(&cVar2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		case 48:
			StringCopy(&cVar2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		case 49:
			StringCopy(&cVar2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		case 50:
			StringCopy(&cVar2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		case 51:
			StringCopy(&cVar2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		case 52:
			StringCopy(&cVar2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		case 53:
			StringCopy(&cVar2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		case 54:
			StringCopy(&cVar2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		case 55:
			StringCopy(&cVar2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 56:
			StringCopy(&cVar2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 57:
			StringCopy(&cVar2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		case 58:
			StringCopy(&cVar2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		case 59:
			StringCopy(&cVar2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		case 60:
			StringCopy(&cVar2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		case 61:
			StringCopy(&cVar2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		case 62:
			StringCopy(&cVar2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		case 63:
			StringCopy(&cVar2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		case 64:
			StringCopy(&cVar2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		case 65:
			StringCopy(&cVar2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		case 66:
			StringCopy(&cVar2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		case 67:
			StringCopy(&cVar2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		case 68:
			StringCopy(&cVar2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		case 69:
			StringCopy(&cVar2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		case 70:
			StringCopy(&cVar2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		case 71:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 72:
			StringCopy(&cVar2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		case 73:
			StringCopy(&cVar2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		case 74:
			StringCopy(&cVar2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		case 75:
			StringCopy(&cVar2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		case 76:
			StringCopy(&cVar2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		case 77:
			StringCopy(&cVar2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		case 78:
			StringCopy(&cVar2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		case 79:
			StringCopy(&cVar2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		case 80:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 81:
			StringCopy(&cVar2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		case 82:
			StringCopy(&cVar2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		case 83:
			StringCopy(&cVar2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		case 84:
			StringCopy(&cVar2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		case 85:
			StringCopy(&cVar2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		case 86:
			StringCopy(&cVar2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		case 87:
			StringCopy(&cVar2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		case 88:
			StringCopy(&cVar2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		case 89:
			StringCopy(&cVar2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		case 90:
			StringCopy(&cVar2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		case 91:
			StringCopy(&cVar2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		case 92:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 93:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 94:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 95:
			StringCopy(&cVar2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		case 96:
			StringCopy(&cVar2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		case 97:
			StringCopy(&cVar2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		case 98:
			StringCopy(&cVar2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		case 99:
			StringCopy(&cVar2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		case 100:
			StringCopy(&cVar2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		case 101:
			StringCopy(&cVar2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		case 102:
			StringCopy(&cVar2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		case 103:
			StringCopy(&cVar2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		case 104:
			StringCopy(&cVar2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		case 105:
			StringCopy(&cVar2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		case 106:
			StringCopy(&cVar2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		case 107:
			StringCopy(&cVar2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		case 108:
			StringCopy(&cVar2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		case 109:
			StringCopy(&cVar2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		case 110:
			StringCopy(&cVar2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		case 111:
			StringCopy(&cVar2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		case 112:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 113, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_355(bool bParam0)
{
	if (bParam0 < 60)
	{
		func_357(bParam0);
	}
	else
	{
		func_356(bParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_306(3, bParam0, 181, -1);
	}
}

void func_356(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 60:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 61:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 62:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 63:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 64:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 65:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		case 66:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		case 67:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		case 68:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		case 69:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 70:
			StringCopy(&cVar2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		case 71:
			StringCopy(&cVar2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		case 72:
			StringCopy(&cVar2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		case 73:
			StringCopy(&cVar2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		case 74:
			StringCopy(&cVar2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		case 75:
			StringCopy(&cVar2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		case 76:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 77:
			StringCopy(&cVar2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		case 78:
			StringCopy(&cVar2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		case 79:
			StringCopy(&cVar2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		case 80:
			StringCopy(&cVar2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		case 81:
			StringCopy(&cVar2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		case 82:
			StringCopy(&cVar2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		case 83:
			StringCopy(&cVar2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		case 84:
			StringCopy(&cVar2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		case 85:
			StringCopy(&cVar2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		case 86:
			StringCopy(&cVar2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		case 87:
			StringCopy(&cVar2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		case 88:
			StringCopy(&cVar2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		case 89:
			StringCopy(&cVar2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		case 90:
			StringCopy(&cVar2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		case 91:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 92:
			StringCopy(&cVar2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		case 93:
			StringCopy(&cVar2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		case 94:
			StringCopy(&cVar2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		case 95:
			StringCopy(&cVar2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		case 96:
			StringCopy(&cVar2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		case 97:
			StringCopy(&cVar2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		case 98:
			StringCopy(&cVar2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		case 99:
			StringCopy(&cVar2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		case 100:
			StringCopy(&cVar2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		case 101:
			StringCopy(&cVar2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		case 102:
			StringCopy(&cVar2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		case 103:
			StringCopy(&cVar2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		case 104:
			StringCopy(&cVar2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		case 105:
			StringCopy(&cVar2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		case 106:
			StringCopy(&cVar2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		case 107:
			StringCopy(&cVar2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		case 108:
			StringCopy(&cVar2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		case 109:
			StringCopy(&cVar2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		case 110:
			StringCopy(&cVar2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		case 111:
			StringCopy(&cVar2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		case 112:
			StringCopy(&cVar2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		case 113:
			StringCopy(&cVar2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		case 114:
			StringCopy(&cVar2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		case 115:
			StringCopy(&cVar2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		case 116:
			StringCopy(&cVar2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		case 117:
			StringCopy(&cVar2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		case 118:
			StringCopy(&cVar2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		case 119:
			StringCopy(&cVar2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		case 120:
			StringCopy(&cVar2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		case 121:
			StringCopy(&cVar2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		case 122:
			StringCopy(&cVar2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		case 123:
			StringCopy(&cVar2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		case 124:
			StringCopy(&cVar2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		case 125:
			StringCopy(&cVar2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		case 126:
			StringCopy(&cVar2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		case 127:
			StringCopy(&cVar2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		case 128:
			StringCopy(&cVar2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		case 129:
			StringCopy(&cVar2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		case 130:
			StringCopy(&cVar2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		case 131:
			StringCopy(&cVar2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		case 132:
			StringCopy(&cVar2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		case 133:
			StringCopy(&cVar2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		case 134:
			StringCopy(&cVar2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		case 135:
			StringCopy(&cVar2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		case 136:
			StringCopy(&cVar2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		case 137:
			StringCopy(&cVar2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		case 138:
			StringCopy(&cVar2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		case 139:
			StringCopy(&cVar2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		case 140:
			StringCopy(&cVar2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		case 141:
			StringCopy(&cVar2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		case 142:
			StringCopy(&cVar2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		case 143:
			StringCopy(&cVar2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		case 144:
			StringCopy(&cVar2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		case 145:
			StringCopy(&cVar2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		case 146:
			StringCopy(&cVar2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		case 147:
			StringCopy(&cVar2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		case 148:
			StringCopy(&cVar2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		case 149:
			StringCopy(&cVar2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		case 150:
			StringCopy(&cVar2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		case 151:
			StringCopy(&cVar2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		case 152:
			StringCopy(&cVar2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		case 153:
			StringCopy(&cVar2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		case 154:
			StringCopy(&cVar2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		case 155:
			StringCopy(&cVar2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		case 156:
			StringCopy(&cVar2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		case 157:
			StringCopy(&cVar2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		case 158:
			StringCopy(&cVar2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		case 159:
			StringCopy(&cVar2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		case 160:
			StringCopy(&cVar2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		case 161:
			StringCopy(&cVar2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		case 162:
			StringCopy(&cVar2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		case 163:
			StringCopy(&cVar2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		case 164:
			StringCopy(&cVar2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		case 165:
			StringCopy(&cVar2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		case 166:
			StringCopy(&cVar2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		case 167:
			StringCopy(&cVar2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		case 168:
			StringCopy(&cVar2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		case 169:
			StringCopy(&cVar2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		case 170:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 171:
			StringCopy(&cVar2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		case 172:
			StringCopy(&cVar2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		case 173:
			StringCopy(&cVar2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		case 174:
			StringCopy(&cVar2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 175:
			StringCopy(&cVar2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		case 176:
			StringCopy(&cVar2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		case 177:
			StringCopy(&cVar2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		case 178:
			StringCopy(&cVar2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		case 179:
			StringCopy(&cVar2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		case 180:
			StringCopy(&cVar2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		default:
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_357(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		case 3:
			StringCopy(&cVar2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		case 7:
			StringCopy(&cVar2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		case 8:
			StringCopy(&cVar2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		case 9:
			StringCopy(&cVar2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		case 10:
			StringCopy(&cVar2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		case 11:
			StringCopy(&cVar2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		case 12:
			StringCopy(&cVar2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		case 13:
			StringCopy(&cVar2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		case 14:
			StringCopy(&cVar2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		case 15:
			StringCopy(&cVar2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		case 16:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 17:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		case 18:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		case 19:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		case 20:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		case 21:
			StringCopy(&cVar2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		case 22:
			StringCopy(&cVar2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		case 23:
			StringCopy(&cVar2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		case 24:
			StringCopy(&cVar2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		case 25:
			StringCopy(&cVar2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		case 26:
			StringCopy(&cVar2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		case 27:
			StringCopy(&cVar2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		case 28:
			StringCopy(&cVar2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		case 29:
			StringCopy(&cVar2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		case 30:
			StringCopy(&cVar2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		case 31:
			StringCopy(&cVar2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		case 32:
			StringCopy(&cVar2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		case 33:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 34:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		case 35:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 36:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 37:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		case 38:
			StringCopy(&cVar2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		case 39:
			StringCopy(&cVar2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		case 40:
			StringCopy(&cVar2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		case 41:
			StringCopy(&cVar2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		case 42:
			StringCopy(&cVar2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		case 43:
			StringCopy(&cVar2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		case 44:
			StringCopy(&cVar2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		case 45:
			StringCopy(&cVar2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		case 46:
			StringCopy(&cVar2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		case 47:
			StringCopy(&cVar2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		case 48:
			StringCopy(&cVar2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		case 49:
			StringCopy(&cVar2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		case 50:
			StringCopy(&cVar2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		case 51:
			StringCopy(&cVar2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		case 52:
			StringCopy(&cVar2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		case 53:
			StringCopy(&cVar2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		case 54:
			StringCopy(&cVar2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		case 55:
			StringCopy(&cVar2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		case 56:
			StringCopy(&cVar2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		case 57:
			StringCopy(&cVar2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		case 58:
			StringCopy(&cVar2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		case 59:
			StringCopy(&cVar2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		default:
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_358(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		case 2:
			StringCopy(&cVar2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		case 3:
			StringCopy(&cVar2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		case 4:
			StringCopy(&cVar2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		default:
			func_306(iVar10, bParam0, 6, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_359(bool bParam0)
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (bParam0)
	{
		case 0:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		case 1:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		case 2:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		case 3:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		case 4:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		case 5:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		case 6:
			StringCopy(&cVar2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		default:
			func_306(iVar10, bParam0, 7, -1);
			return;
	}
	func_296(&(Global_76434[0 /*14*/]), iVar10, bParam0, &cVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_360()
{
	Global_76434[0 /*14*/].f_1 = -1;
	Global_76434[0 /*14*/].f_2 = -1;
	Global_76434[0 /*14*/].f_5 = -1;
	Global_76434[0 /*14*/].f_3 = -1;
	Global_76434[0 /*14*/].f_4 = -1;
	Global_76434[0 /*14*/].f_7 = 0;
	Global_76434[0 /*14*/].f_6 = 0;
	Global_76434[0 /*14*/].f_13 = -1;
	Global_76434[0 /*14*/].f_12 = 0;
	Global_76434[0 /*14*/] = 0;
	StringCopy(&(Global_76434[0 /*14*/].f_8), "NO_LABEL", 16);
}

void func_361(int iParam0)
{
	if (Global_95666 != -1)
	{
		if (iParam0 == Global_95666)
		{
			Global_95670 = 1;
			return;
		}
	}
}

void func_362()
{
	func_364();
	func_363();
}

void func_363()
{
	if (UNK_0x029064EA9141FCC2(385.8528f, -1629.945f, 35.29278f, 398.8063f, -1640.865f, 28f))
	{
		UNK_0x1BA7FCEAFCE8D46E(iLocal_369, 0, true, true);
	}
	else
	{
		UNK_0x1BA7FCEAFCE8D46E(iLocal_369, 1, true, true);
	}
}

void func_364()
{
	if (bLocal_374)
	{
		if (UNK_0x029064EA9141FCC2(387.0058f, -1641.537f, 20.4895f, 404.1412f, -1580.302f, 40.34303f) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 390.4927f, -1621.07f, 28.29278f, 406.0266f, -1604.358f, 35.2086f, 15f, 0, true, 0))
		{
			if (func_12(&uLocal_196, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)))
			{
				func_366(Global_40554[13 /*31*/], &fLocal_370);
				return;
			}
		}
		else
		{
			func_365(Global_40554[13 /*31*/], &fLocal_370);
		}
	}
	else if (UNK_0x838876B8BA050A8A(UNK_0x16F2683693E537C9()) || bLocal_82 == 1)
	{
		if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 390.4927f, -1621.07f, 28.29278f, 406.0266f, -1604.358f, 35.2086f, 15f, 0, true, 0) || UNK_0x029064EA9141FCC2(387.0058f, -1641.537f, 20.4895f, 404.1412f, -1580.302f, 40.34303f))
		{
			func_366(Global_40554[13 /*31*/], &fLocal_370);
		}
		else
		{
			func_365(Global_40554[13 /*31*/], &fLocal_370);
		}
	}
	else if (!UNK_0x029064EA9141FCC2(387.0058f, -1641.537f, 20.4895f, 404.1412f, -1580.302f, 40.34303f))
	{
		func_365(Global_40554[13 /*31*/], &fLocal_370);
	}
	else
	{
		func_366(Global_40554[13 /*31*/], &fLocal_370);
	}
}

void func_365(int iParam0, float fParam1)
{
	if (UNK_0x76395FF5E8D5E643(iParam0))
	{
		if (*fParam1 != 0f)
		{
			if (!UNK_0x49083FDB78AC0509(iLocal_371))
			{
				iLocal_371 = UNK_0x544B74C043CE9948(400.8628f, -1609.739f, 28.29278f, 7.5f, 2f, 9.5f, func_81(229.3746f), 0, 7);
			}
			UNK_0x838CC054A9235BEC(iParam0, *fParam1, true, true);
			*fParam1 = (*fParam1 - (0.2f * SYSTEM::TIMESTEP()));
			if (*fParam1 <= 0f)
			{
				UNK_0x1BA7FCEAFCE8D46E(iParam0, 1, true, false);
				UNK_0xDDABC98CFF1A4C60(iLocal_371);
				*fParam1 = 0f;
			}
		}
	}
}

void func_366(int iParam0, float fParam1)
{
	if (*fParam1 != 1f)
	{
		UNK_0x838CC054A9235BEC(iParam0, *fParam1, true, true);
		*fParam1 = (*fParam1 + (0.2f * SYSTEM::TIMESTEP()));
		if (UNK_0x49083FDB78AC0509(iLocal_371))
		{
			UNK_0xDDABC98CFF1A4C60(iLocal_371);
		}
		if (*fParam1 >= 1f)
		{
			*fParam1 = 1f;
		}
	}
}

void func_367()
{
	func_368();
	if (bLocal_662)
	{
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
		{
			func_380(27, 1);
			bLocal_662 = false;
		}
	}
}

void func_368()
{
	if (!bLocal_383)
	{
		if (bLocal_82 == 1 || bLocal_82 == 2)
		{
			func_56(Local_456, 650);
			func_369(649, 0);
			bLocal_383 = true;
		}
	}
}

void func_369(int iParam0, bool bParam1)
{
	int iVar0;

	Global_61522 = iParam0;
	if (!Global_61520)
	{
		Global_61520 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0 /*9*/] == iParam0)
			{
				Global_73608[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_370()
{
	if (!bLocal_28 && iLocal_80 != 4)
	{
		if (iLocal_80 > 0)
		{
			func_374();
			func_371();
		}
	}
}

void func_371()
{
	if (iLocal_80 != 2 && iLocal_80 != 3)
	{
		if (!func_63(UNK_0x16F2683693E537C9(), 372.0053f, -1604.076f, 36.7536f, 100f) && !bLocal_387)
		{
			func_373("PR_AREAWARN", &bLocal_387);
		}
		else if (!func_63(UNK_0x16F2683693E537C9(), 372.0053f, -1604.076f, 36.7536f, 170f) && bLocal_387)
		{
			func_372(3);
		}
	}
}

void func_372(int iParam0)
{
	UNK_0x790015DC92C918E2();
	func_53();
	UNK_0xC92DB9682A650680("FHPRA_FAIL");
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			bLocal_353 = "PR_FWRECK";
			break;
		case 2:
			bLocal_353 = "PR_FSTUCK";
			break;
		case 3:
			bLocal_353 = "PR_FLEFT";
			break;
		case 4:
			bLocal_353 = "PR_FLEFTV";
			break;
	}
	iLocal_80 = 4;
	iLocal_81 = 0;
}

void func_373(bool bParam0, bool bParam1)
{
	if (!*bParam1)
	{
		func_59(bParam0, 7500, 0);
		*bParam1 = 1;
	}
}

void func_374()
{
	if (!func_7(Local_456))
	{
		func_372(1);
	}
	else
	{
		func_375();
		if (iLocal_80 == 2 || iLocal_80 == 3)
		{
			if (!func_153(UNK_0x16F2683693E537C9(), Local_456, 50f, 1) && !bLocal_388)
			{
				func_373("PR_VANWARN", &bLocal_388);
			}
			else if (!func_153(UNK_0x16F2683693E537C9(), Local_456, 100f, 1) && bLocal_388)
			{
				func_372(4);
			}
		}
	}
}

void func_375()
{
	if (UNK_0x5B17F10380E80E5B(Local_456))
	{
		if (bLocal_368)
		{
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_367) > 5000)
			{
				func_372(2);
				return;
			}
		}
		else
		{
			iLocal_367 = UNK_0x1C0640BA9A7327B3();
			bLocal_368 = true;
		}
	}
	else
	{
		bLocal_368 = false;
	}
	if (func_376(Local_456))
	{
		func_372(2);
	}
}

bool func_376(bool bParam0)
{
	if (func_7(bParam0))
	{
		if (((UNK_0x7B5606C651AB51B5(bParam0, 0, 7000) || UNK_0x7B5606C651AB51B5(bParam0, 3, 30000)) || UNK_0x7B5606C651AB51B5(bParam0, 2, 30000)) || UNK_0x7B5606C651AB51B5(bParam0, 1, 40000))
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

bool func_377(bool bParam0)
{
	if (func_6(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			return true;
		}
	}
	return false;
}

void func_378(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_379())
	{
		UNK_0x256D93AFAE851A7A(0);
		UNK_0x0674E58A79778E99(&(Global_98744.f_20), 2);
		UNK_0x21387C9EECC2B220(true);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
		}
		Global_98740 = { vParam0 };
		Global_98743 = fParam3;
		Global_98739 = 1;
		if (iParam4 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 14);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_98744.f_20), 14);
		}
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 24);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_98744.f_20), 24);
		}
		func_220(1);
	}
}

bool func_379()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return true;
	}
	return false;
}

void func_380(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_58[iParam0] = iParam1;
}

void func_381()
{
	func_393();
	func_391();
	func_386();
	func_385();
	func_384();
	func_382();
}

void func_382()
{
	Local_309[1 /*7*/] = { func_383(359.5238f, -1581.445f, 28.29278f, 341.1343f, -1603.052f, 40.37049f, 7.3f) };
	Local_309[2 /*7*/] = { func_383(352.2312f, -1590.471f, 28.29277f, 341.1343f, -1603.052f, 40.37049f, 6.78f) };
	Local_309[0 /*7*/] = { func_383(344.5851f, -1601.562f, 28.29278f, 342.4275f, -1604.071f, 40.29278f, 3.79f) };
	Local_309[3 /*7*/] = { func_383(345.0102f, -1604.096f, 40.6735f, 361.0914f, -1617.46f, 28.29278f, 3.33f) };
	Local_309[4 /*7*/] = { func_383(362.7986f, -1577.081f, 28.29278f, 341.1343f, -1603.052f, 40.37049f, 6.78f) };
	Local_309[5 /*7*/] = { func_383(365.9773f, -1611.556f, 28.29277f, 373.1279f, -1617.806f, 40.37049f, 19.19f) };
}

struct<7> func_383(vector3 vParam0, vector3 vParam3, float fParam6)
{
	struct<7> Var0;

	Var0 = { vParam0 };
	Var0.f_3 = { vParam3 };
	Var0.f_6 = fParam6;
	return Var0;
}

void func_384()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_83[iVar0] = 0;
		iLocal_87[iVar0] = 0;
		iVar0++;
	}
	Local_300[0 /*4*/] = { 344.4447f, -1603.428f, 28.2928f };
	Local_300[0 /*4*/].f_3 = 228.9052f;
	Local_300[1 /*4*/] = { 345.9821f, -1604.801f, 28.2928f };
	Local_300[1 /*4*/].f_3 = 40.2137f;
}

void func_385()
{
	iLocal_369 = -1469527606;
	if (!UNK_0x76395FF5E8D5E643(iLocal_369))
	{
		UNK_0x8010B3127F058F0F(iLocal_369, joaat("PROP_FNCLINK_03GATE5"), 391.8602f, -1636.07f, 29.9744f, 1, true, 0);
	}
	UNK_0x1BA7FCEAFCE8D46E(Global_40554[13 /*31*/], 1, true, false);
	UNK_0x1BA7FCEAFCE8D46E(iLocal_369, 1, true, false);
}

void func_386()
{
	vector3 vVar0[8];

	vVar0[0 /*3*/] = { 331.7678f, -1596.396f, 31.53864f };
	vVar0[1 /*3*/] = { 348.4934f, -1576.657f, 31.83304f };
	vVar0[2 /*3*/] = { 356.2655f, -1567.396f, 28.29265f };
	vVar0[3 /*3*/] = { 368.4805f, -1576.274f, 28.26307f };
	vVar0[4 /*3*/] = { 364.8242f, -1580.737f, 28.29278f };
	vVar0[5 /*3*/] = { 350.2896f, -1606.614f, 28.29278f };
	vVar0[6 /*3*/] = { 346.1393f, -1608.523f, 31.53354f };
	func_390(&uLocal_92, &vVar0, 7);
	vVar0[0 /*3*/] = { 353.657f, -1613.421f, 28.29278f };
	vVar0[1 /*3*/] = { 391.3156f, -1601.633f, 28.29278f };
	vVar0[2 /*3*/] = { 397.667f, -1607.168f, 28.29278f };
	vVar0[3 /*3*/] = { 376.649f, -1633.096f, 26.96452f };
	func_390(&uLocal_144, &vVar0, 4);
	vVar0[0 /*3*/] = { 344.0985f, -1605.154f, 28.2928f };
	vVar0[1 /*3*/] = { 365.6985f, -1580.435f, 28.2928f };
	vVar0[2 /*3*/] = { 407.9943f, -1616.259f, 28.2928f };
	vVar0[3 /*3*/] = { 387.3322f, -1641.258f, 29.0912f };
	func_390(&uLocal_196, &vVar0, 4);
	func_389(&uLocal_248);
	func_388(&uLocal_248, 408.8245f, -1616.011f, 31.7537f);
	func_388(&uLocal_248, 376.3118f, -1588.036f, 36.7534f);
	func_388(&uLocal_248, 354.1272f, -1614.819f, 31.5335f);
	func_388(&uLocal_248, 387.2971f, -1641.943f, 31.833f);
	func_387(&uLocal_248);
}

void func_387(var uParam0)
{
	int iVar0;
	float fVar1;

	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = SYSTEM::SQRT(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_388(var uParam0, vector3 vParam1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { vParam1 };
	uParam0->f_46++;
}

void func_389(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_390(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	func_389(uParam0);
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		func_388(uParam0, *(uParam1[iVar0 /*3*/]));
		iVar0++;
	}
	func_387(uParam0);
}

void func_391()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = joaat("S_M_Y_COP_01");
	Local_389[0 /*22*/] = { func_392(353.1191f, -1589.606f, 28.2928f, 270.0968f, iVar0) };
	Local_389[1 /*22*/] = { func_392(354.557f, -1590.549f, 28.2928f, 16.3702f, iVar0) };
	Local_389[2 /*22*/] = { func_392(369.8186f, -1611.029f, 28.3928f, 9.0837f, iVar0) };
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		Local_389[iVar1 /*22*/].f_18 = 0;
		Local_389[iVar1 /*22*/].f_19 = 0;
		Local_389[iVar1 /*22*/].f_20 = 0;
		Local_389[iVar1 /*22*/].f_17 = 0;
		Local_389[iVar1 /*22*/].f_16 = 0;
		bVar2 = false;
		while (bVar2 <= (15 - 1))
		{
			UNK_0x0674E58A79778E99(&(Local_389[iVar1 /*22*/].f_15), bVar2);
			bVar2++;
		}
		iVar1++;
	}
	bLocal_656 = false;
	iLocal_657 = 0;
	sLocal_652[0] = "PRA_COPTLK1";
	sLocal_652[1] = "PRA_COPTLK2";
}

struct<22> func_392(vector3 vParam0, float fParam3, int iParam4)
{
	struct<22> Var0;

	Var0.f_14 = -1;
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_393()
{
	Local_456 = { func_394(372.9868f, -1623.531f, 28.2928f, 321.7075f, joaat("POLICET")) };
	Local_462[0 /*6*/] = { func_394(400.5771f, -1618.927f, 28.2928f, 48.8115f, joaat("POLICE3")) };
	Local_462[1 /*6*/] = { func_394(396.6843f, -1623.222f, 28.2928f, 231.3392f, joaat("POLICE3")) };
	Local_462[2 /*6*/] = { func_394(394.3527f, -1625.337f, 28.2928f, 49.3732f, joaat("POLICE3")) };
}

struct<6> func_394(vector3 vParam0, float fParam3, int iParam4)
{
	struct<6> Var0;

	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_395()
{
	UNK_0xF63400DBE3303D26("COPS", &bLocal_481);
}

void func_396()
{
	UNK_0x51732B934211201A(bLocal_481);
	func_407(1);
	if (UNK_0x76395FF5E8D5E643(Global_40554[13 /*31*/]))
	{
		UNK_0xC9F68C22171478B8(Global_40554[13 /*31*/], 0);
	}
	UNK_0x838CC054A9235BEC(Global_40554[13 /*31*/], 0f, true, true);
	UNK_0x1BA7FCEAFCE8D46E(Global_40554[13 /*31*/], 4, true, true);
	UNK_0x1BA7FCEAFCE8D46E(iLocal_369, 0, true, false);
	UNK_0xA4A8625CC710BC1F(iLocal_369);
	UNK_0x2952D66A502EA873(iLocal_360, 0);
	func_55();
	UNK_0x34D79252800B23FF(5);
	UNK_0x51B096AAC60548C1(1f);
	func_406();
	UNK_0x5372553242EA2414();
	func_397(0);
	UNK_0x10FAF14A60A0DBE1();
}

void func_397(bool bParam0)
{
	vector3 vVar0;

	if (bParam0)
	{
		UNK_0x536F1BE96C726C4B(372.9868f, -1623.531f, 28.2928f, 100f, 1, 0, 0, false);
	}
	func_104();
	UNK_0x790015DC92C918E2();
	func_405(1, 1, 1);
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	func_404();
	func_33();
	func_403();
	func_402();
	func_401();
	func_400();
	if (bParam0)
	{
		if (UNK_0xC844350D5D58C99A(Local_456))
		{
			if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_456, 0))
					{
						vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
						UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar0, 1, 0, 0, 1);
					}
				}
			}
		}
		func_2();
	}
	else
	{
		func_398();
	}
	UNK_0xB8C3D2D6C4AAEF18(0);
	if (UNK_0x9F4FE516EAACCFC5(iLocal_359))
	{
		UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		UNK_0x9A8DDC7C522F5BF5(iLocal_359, 0);
	}
}

void func_398()
{
	int iVar0;

	UNK_0x7AA3AFA47C4179D1(Local_456);
	func_93(&Local_456);
	func_399(&bLocal_358, 0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_208(&(Local_389[iVar0 /*22*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_93(&(Local_462[iVar0 /*6*/]));
		iVar0++;
	}
}

void func_399(bool bParam0, bool bParam1)
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

void func_400()
{
}

void func_401()
{
}

void func_402()
{
}

void func_403()
{
	int iVar0;

	UNK_0x71199B01895C6202(Local_456.f_5);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		UNK_0x71199B01895C6202(Local_462[iVar0 /*6*/].f_5);
		iVar0++;
	}
}

void func_404()
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	while (bVar0 < 3)
	{
		bVar1 = func_116(bVar0);
		if (!UNK_0xEB6A8945D1AC98A1(bVar1))
		{
			if (func_115(bVar1))
			{
				func_108(bVar1);
			}
		}
		bVar0++;
	}
}

void func_405(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bVar0 = true;
	if (UNK_0x39B7A3CCD2467CAB())
	{
		while (bVar0)
		{
			bVar0 = UNK_0x39B7A3CCD2467CAB();
			if (UNK_0x22A8E52414415B76())
			{
				UNK_0x55BE34EDDEA0AC9E(0);
			}
			if (UNK_0x62A1F4500E8F07E0())
			{
				UNK_0x5C8D148FC238F38A();
			}
			if (UNK_0x39B7A3CCD2467CAB() && !UNK_0x22A8E52414415B76())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_38(iParam1, iParam2, 1, 1);
		}
	}
}

void func_406()
{
	Global_94599 = 0;
}

void func_407(int iParam0)
{
	Global_96050 = iParam0;
}

void func_408()
{
	int iVar0;

	if (UNK_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_30(0))
	{
		if (!func_409())
		{
			iVar0 = func_29();
			if (iVar0 != -1)
			{
				if (!func_16(iVar0))
				{
					return;
				}
				UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_21();
		}
	}
}

bool func_409()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

void func_410()
{
	func_10(475.3364f, -1409.782f, 28.3108f, 123.1614f);
	func_8(471.5946f, -1412.737f, 28.1562f, 68.5531f);
}

