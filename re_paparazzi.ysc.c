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
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	bool bLocal_59 = false;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	bool bLocal_69 = false;
	bool bLocal_70 = false;
	bool bLocal_71 = false;
	bool bLocal_72 = false;
	bool bLocal_73 = false;
	bool bLocal_74 = false;
	char cLocal_75[48] = "";
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = false;
	vector3 vLocal_87 = { 0f, 0f, 0f };
	bool bLocal_90 = false;
	bool bLocal_91 = false;
	vector3 vLocal_92 = { 0f, 0f, 0f };
	bool bLocal_95 = false;
	bool bLocal_96 = false;
	var uLocal_97 = 15;
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
	var uLocal_130 = 1;
	struct<18> Local_131[4];
	struct<18> Local_204[8];
	int iLocal_349 = 0;
	bool bLocal_350 = false;
	bool bLocal_351 = false;
	int iLocal_352 = 0;
	bool bLocal_353 = false;
	int iLocal_354 = 0;
	bool bLocal_355 = false;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	bool bLocal_358 = false;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	bool bLocal_368 = false;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	char* sLocal_371 = NULL;
	char[] cLocal_372[8] = 0;
	bool bLocal_373 = false;
	bool bLocal_374 = false;
	int iLocal_375[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_385 = 0;
	int iLocal_386[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_395[16];
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	int iLocal_560[3] = { 0, 0, 0 };
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	float fLocal_569 = 0f;
	float fLocal_570 = 0f;
	int iLocal_571[2] = { 0, 0 };
	float fLocal_574 = 0f;
	vector3 vLocal_575 = { 0f, 0f, 0f };
	vector3 vLocal_578 = { 0f, 0f, 0f };
	vector3 vLocal_581 = { 0f, 0f, 0f };
	vector3 vLocal_584 = { 0f, 0f, 0f };
	vector3 vLocal_587 = { 0f, 0f, 0f };
	vector3 vLocal_590 = { 0f, 0f, 0f };
	vector3 vLocal_593 = { 0f, 0f, 0f };
	vector3 vLocal_596[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_609[4] = { 0f, 0f, 0f, 0f };
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	bool bLocal_618 = false;
	bool bLocal_619 = false;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	bool bLocal_623 = false;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	char* sLocal_626[3] = { NULL, NULL, NULL };
	int iLocal_630 = 0;
	bool bLocal_631 = false;
	vector3 vLocal_632 = { 0f, 0f, 0f };
	vector3 vLocal_635 = { 0f, 0f, 0f };
	bool bLocal_638 = false;
	vector3 vLocal_639 = { 0f, 0f, 0f };
	vector3 vLocal_642 = { 0f, 0f, 0f };
	bool bLocal_645 = false;
	vector3 vLocal_646 = { 0f, 0f, 0f };
	vector3 vLocal_649 = { 0f, 0f, 0f };
	bool bLocal_652 = false;
	vector3 vLocal_653 = { 0f, 0f, 0f };
	vector3 vLocal_656 = { 0f, 0f, 0f };
	bool bLocal_659 = false;
	bool bLocal_660 = false;
	float fLocal_661 = 0f;
	bool bLocal_662 = false;
	bool bLocal_663 = false;
	bool bLocal_664 = false;
	float fLocal_665 = 0f;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	bool bLocal_668 = false;
	bool bLocal_669 = false;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	bool bLocal_672 = false;
	bool bLocal_673 = false;
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
	vector3 vVar2[24];

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
	iLocal_18 = 3;
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
	fLocal_46 = -1f;
	vLocal_53 = { 226.6825f, 681.0297f, 188.4987f };
	vLocal_56 = { 231.8002f, 672.5261f, 188.9459f };
	bLocal_59 = 32.0905f;
	StringCopy(&cLocal_75, "", 24);
	vLocal_87 = { 259.4603f, 125.8718f, 100.9754f };
	bLocal_90 = 283.0367f;
	vLocal_92 = { 245.1998f, 76.8231f, 90.7069f };
	bLocal_95 = -18.4743f;
	cLocal_372 = "REPAPAU";
	bLocal_373 = "random@escape_paparazzi@standing@";
	bLocal_374 = "random@escape_paparazzi@incar@";
	iLocal_565 = 4000;
	fLocal_569 = 0f;
	fLocal_570 = 0f;
	fLocal_574 = 0f;
	vLocal_575 = { 272.6356f, 155.5618f, 103.3306f };
	vLocal_578 = { 247.5795f, 88.7094f, 92.9859f };
	vLocal_581 = { 259.0348f, 114.0369f, 98.9984f };
	vLocal_584 = { 255.4971f, 116.8744f, 99.8162f };
	vLocal_587 = { 266.8217f, 139.7698f, 103.2269f };
	vLocal_590 = { 270.0174f, 139.1181f, 103.2195f };
	vLocal_593 = { 265.4954f, 144.6143f, 103.3326f };
	bLocal_631 = "left_";
	vLocal_632 = { 261.9341f, 126.2429f, 95.15405f };
	vLocal_635 = { 270.6759f, 152.4763f, 109.2356f };
	bLocal_638 = 16f;
	vLocal_639 = { 261.9341f, 126.2429f, 107.6541f };
	vLocal_642 = { 248.354f, 87.01792f, 92.389f };
	bLocal_645 = 16f;
	vLocal_646 = { 256.6779f, 126.573f, 99.54784f };
	vLocal_649 = { 266.4471f, 123.412f, 105.6728f };
	bLocal_652 = 5.75f;
	vLocal_653 = { 260.242f, 127.423f, 101.65f };
	vLocal_656 = { 0f, 0f, -20f };
	vLocal_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (UNK_0x2EBF608FFE6CA406(11))
	{
		func_282();
	}
	func_281(&uLocal_97, 3);
	if (!Global_3)
	{
		if (func_239(vLocal_50, -1, 0, 0, 0))
		{
			func_236(-1);
		}
		else
		{
			UNK_0x10FAF14A60A0DBE1();
		}
	}
	iLocal_365 = UNK_0x7D6CA5F52B3748BF(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	iLocal_366 = UNK_0x7D6CA5F52B3748BF(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	iLocal_367 = UNK_0x7D6CA5F52B3748BF(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		UNK_0x536F1BE96C726C4B(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, false);
	}
	UNK_0xE342F209E49C5314(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), false, 1);
	UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", false);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_233(&uLocal_97);
		if (!func_232())
		{
			if (func_231())
			{
				func_282();
			}
		}
		UNK_0x1A6DFFFEEC27BF4F("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_131)
		{
			if (UNK_0xC844350D5D58C99A(Local_131[iVar0 /*18*/]) && !UNK_0x437347B10A200C4B(Local_131[iVar0 /*18*/], 0))
			{
				Local_131[iVar0 /*18*/].f_8 = { UNK_0x68F4C0EC296D3901(Local_131[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_204)
		{
			if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/]) && !UNK_0x437347B10A200C4B(Local_204[iVar0 /*18*/], 0))
			{
				Local_204[iVar0 /*18*/].f_6 = { UNK_0x68F4C0EC296D3901(Local_204[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			vLocal_60 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
		{
			vLocal_63 = { UNK_0x68F4C0EC296D3901(bLocal_86, true) };
		}
		if (UNK_0xC844350D5D58C99A(bLocal_91) && !UNK_0x437347B10A200C4B(bLocal_91, 0))
		{
			vLocal_66 = { UNK_0x68F4C0EC296D3901(bLocal_91, true) };
		}
		if (!func_232())
		{
			if (UNK_0x338D6FF72D84D90F())
			{
				switch (iLocal_369)
				{
					case 0:
						if (func_222())
						{
							func_215();
							iLocal_369++;
						}
						else if (func_203())
						{
							func_282();
						}
						break;
					case 1:
						if ((func_202() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || !UNK_0xDF1306B443CD3D15(bLocal_91, 0))
						{
							if (!Global_3 && !bLocal_70)
							{
								func_201();
								func_282();
							}
						}
						else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, true, 0))
						{
							func_192(1);
							iLocal_360 = func_191(bLocal_86, 0, 145);
							func_190("MAG_2_ESCAPE_PAP_GET_CAR");
							func_189(0);
						}
						break;
				}
			}
			else
			{
				func_282();
			}
		}
		else
		{
			UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
			switch (iLocal_47)
			{
				case 0:
					func_186();
					break;
				case 1:
					func_183();
					break;
				case 2:
					func_161();
					break;
				case 3:
					func_149();
					break;
				case 4:
					func_112();
					break;
				case 10:
					func_282();
					break;
				case 5:
					func_111();
					break;
				case 6:
					func_108(sLocal_371);
					break;
				case 7:
					func_107();
					break;
				case 9:
					break;
				case 8:
					if (func_106())
					{
						if (UNK_0xC844350D5D58C99A(bLocal_86))
						{
							UNK_0xEBA53F35D0085654(&bLocal_86);
						}
						func_82();
					}
					break;
				case 11:
					func_78();
					break;
			}
			if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_63, 210f, 210f, 210f, false, true, 0))
			{
				func_201();
				func_282();
			}
			if (((iLocal_47 != 5 && iLocal_47 != 6) && iLocal_47 != 10) && iLocal_47 != 7)
			{
				if (!Global_3 && !bLocal_70)
				{
					if (func_75(bLocal_86, 1, 1) || func_74())
					{
						if (iLocal_47 > 0)
						{
							func_189(5);
						}
						else
						{
							func_201();
							func_189(10);
						}
					}
					if (((iLocal_47 != 5 && iLocal_47 != 10) && iLocal_47 != 0) && iLocal_47 != 7)
					{
						if (func_70())
						{
							func_189(6);
						}
					}
				}
			}
		}
		func_31();
		if (iLocal_47 <= 0)
		{
			iVar1 = func_30();
			if (iVar1 != -1 && (bLocal_74 || func_24() != 0))
			{
				if ((!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, true, 0) && (UNK_0x1C0640BA9A7327B3() - iLocal_564) > 5000) && !UNK_0xEB6A8945D1AC98A1(Local_204[iVar1 /*18*/]))
				{
					if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(Local_204[iVar1 /*18*/], true), vLocal_60) < (30.5f * 30.5f) && SYSTEM::VDIST2(vLocal_63, vLocal_60) > (22.5f * 22.5f))
					{
						if (func_232())
						{
							if (Local_395[4 /*10*/] != Local_204[iVar1 /*18*/])
							{
								func_23(&Local_395, 4);
								func_22(&Local_395, 4, Local_204[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!bLocal_663)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_564 = UNK_0x1C0640BA9A7327B3();
									bLocal_663 = true;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_564 = UNK_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							StringCopy(&cVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&cVar2, UNK_0x09AC81E49EA267F7(true, 13), 24);
							func_3(Local_204[iVar1 /*18*/], &cVar2, "PAPARAZZO", 24);
							iLocal_564 = UNK_0x1C0640BA9A7327B3();
						}
					}
				}
			}
		}
		if (iLocal_47 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		bVar0 = UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9());
		if (UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			bVar1 = UNK_0xA30B8362589C124A(bVar0, false, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar1))
			{
				if (bVar1 != UNK_0x16F2683693E537C9())
				{
					if (UNK_0xAF6690C489CC6203(bVar1))
					{
						if (!UNK_0xE0EC712E4BE1FC42(bVar1, UNK_0x16F2683693E537C9()))
						{
							UNK_0x0C8C0C840C2D1AD2(bVar1, UNK_0x16F2683693E537C9(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/]))
		{
			if (UNK_0x7F6DC62EA9922664(Local_204[iVar0 /*18*/]) < Local_204[iVar0 /*18*/].f_17)
			{
				if (UNK_0xB87D13D0C064E9D1(Local_204[iVar0 /*18*/], UNK_0x16F2683693E537C9(), 1))
				{
					iLocal_386[iVar0] = (iLocal_386[iVar0] + (Local_204[iVar0 /*18*/].f_17 - UNK_0x7F6DC62EA9922664(Local_204[iVar0 /*18*/])));
					iLocal_82 = (iLocal_82 + (Local_204[iVar0 /*18*/].f_17 - UNK_0x7F6DC62EA9922664(Local_204[iVar0 /*18*/])));
					UNK_0xE910A68AA670B4AA(Local_204[iVar0 /*18*/]);
					if (iLocal_386[iVar0] > iLocal_385)
					{
						iLocal_385 = iLocal_386[iVar0];
					}
				}
			}
			Local_204[iVar0 /*18*/].f_17 = UNK_0x7F6DC62EA9922664(Local_204[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xEB0A515D699A7E90(bParam0, bParam1, bParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
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

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
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
					func_20();
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
		if (func_19(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_18();
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
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_12();
		func_7();
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
		func_20();
	}
	return 0;
}

void func_7()
{
	if (!func_8())
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

bool func_8()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_11())
	{
		return false;
	}
	if (func_9(UNK_0xD803B885F5E47A62()))
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

bool func_9(int iParam0)
{
	return func_10(iParam0, 20);
}

bool func_10(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

bool func_11()
{
	return -1;
}

void func_12()
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

void func_13()
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

bool func_14()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_15()
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

void func_16()
{
	if (func_17(14))
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
		Global_19486 = func_24();
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

bool func_17(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_18()
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

bool func_19(bool bParam0, int iParam1)
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

void func_20()
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

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_22(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_23(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_24()
{
	func_25();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_25()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_28(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_27(UNK_0x16F2683693E537C9());
			if (func_26(iVar0) && (!func_17(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_26(Global_111638.f_2358.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return iParam0 < 3;
}

int func_27(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_29(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_30()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if ((UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/]) && !UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/])) && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
		{
			if (SYSTEM::VDIST2(vLocal_60, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(vLocal_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	switch (iLocal_49)
	{
		case 0:
			iLocal_616 = 0;
			UNK_0x523BCC9DC80CD82F(joaat("A_M_Y_GENSTREET_02"));
			UNK_0x523BCC9DC80CD82F(joaat("PROP_PAP_CAMERA_01"));
			UNK_0x523BCC9DC80CD82F(joaat("CAVALCADE2"));
			UNK_0x523BCC9DC80CD82F(joaat("VADER"));
			UNK_0x3F423BF5B8125A50(bLocal_373);
			UNK_0x3F423BF5B8125A50("random@paparazzi@pap_anims");
			if (((((UNK_0xB87F6CF6E5628C67(joaat("A_M_Y_GENSTREET_02")) && UNK_0xB87F6CF6E5628C67(joaat("PROP_PAP_CAMERA_01"))) && UNK_0xB87F6CF6E5628C67(joaat("CAVALCADE2"))) && UNK_0xB87F6CF6E5628C67(joaat("VADER"))) && UNK_0xB4AE0788C1587752(bLocal_373)) && UNK_0xB4AE0788C1587752("random@paparazzi@pap_anims"))
			{
				vLocal_596[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				vLocal_596[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				vLocal_596[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				vLocal_596[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_609[0] = -111.1625f;
				fLocal_609[1] = 68.857f;
				fLocal_609[2] = -108.2056f;
				fLocal_609[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_131)
				{
					func_69(iVar0);
					func_67(func_68(iVar0));
					func_67(func_66(iVar0));
					iVar0++;
				}
				iLocal_614 = 0;
				func_65(func_68(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_65(func_66(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_65(func_66(2), vLocal_596[1 /*3*/], fLocal_609[1]);
				func_65(func_66(3), vLocal_596[1 /*3*/], fLocal_609[1]);
				func_64(0, vLocal_596[0 /*3*/], fLocal_609[0], 1);
				func_64(1, vLocal_596[1 /*3*/], fLocal_609[1], 0);
				UNK_0xA47B46945FF6DE74(func_63(0, 1), 265.408f, 151.2875f, 103.5673f, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(func_63(0, 1), 217.1033f);
				UNK_0xA47B46945FF6DE74(func_63(2, 1), 245.9477f, 72.661f, 89.1067f, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(func_63(2, 1), 38.6283f);
				UNK_0xA47B46945FF6DE74(func_63(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(func_63(3, 1), 272.9875f);
				UNK_0xC6EB89C59F2AF6B8(func_63(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(func_63(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(func_63(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(func_63(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(func_63(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, false, 0, 0, 0);
				iLocal_49 = 1;
			}
			break;
		case 1:
			func_61(func_66(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_61(func_68(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_61(func_66(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_61(func_66(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_61(func_66(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		case 2:
			if (UNK_0xC844350D5D58C99A(Local_204[2 /*18*/].f_2))
			{
				if (!UNK_0x4FC40AB0ECCE6E18(Local_204[2 /*18*/].f_2))
				{
					UNK_0x4A4806F9D471E491(Local_204[2 /*18*/].f_2, true, 0);
				}
			}
			switch (iLocal_616)
			{
				case 0:
					if (!UNK_0xEB6A8945D1AC98A1(func_63(1, 0)))
					{
						UNK_0xA3BF0AA5A2608191(func_63(1, 0));
					}
					if (!UNK_0xEB6A8945D1AC98A1(func_63(1, 1)))
					{
						UNK_0xA3BF0AA5A2608191(func_63(1, 1));
					}
					if (!UNK_0xC844350D5D58C99A(Local_131[2 /*18*/]))
					{
						func_64(2, vLocal_596[2 /*3*/], fLocal_609[2], 0);
						if (UNK_0xDF1306B443CD3D15(Local_131[2 /*18*/], 0))
						{
							func_65(func_68(2), UNK_0x68F4C0EC296D3901(Local_131[2 /*18*/], true), 0f);
							UNK_0xF821F915BC24D246(func_63(2, 0), Local_131[2 /*18*/], -1);
						}
					}
					if (!UNK_0xC844350D5D58C99A(Local_131[3 /*18*/]))
					{
						func_64(3, vLocal_596[3 /*3*/], fLocal_609[3], 0);
					}
					if (!UNK_0xEB6A8945D1AC98A1(func_63(2, 1)))
					{
						UNK_0x96167B03C5A77156(func_63(2, 1), vLocal_581, 2f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					}
					if (!UNK_0xEB6A8945D1AC98A1(func_63(3, 1)))
					{
						UNK_0x96167B03C5A77156(func_63(3, 1), vLocal_584, 2f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					}
					if (!UNK_0xC844350D5D58C99A(func_63(3, 0)))
					{
						func_65(func_68(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_70)
					{
						if (!UNK_0xEB6A8945D1AC98A1(func_63(1, 0)))
						{
							UNK_0x96167B03C5A77156(func_63(1, 0), vLocal_587, 2f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
						}
						if (!UNK_0xEB6A8945D1AC98A1(func_63(1, 1)))
						{
							UNK_0x96167B03C5A77156(func_63(1, 1), vLocal_590, 2f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
						}
						if (!UNK_0xEB6A8945D1AC98A1(func_63(0, 1)))
						{
							UNK_0x96167B03C5A77156(func_63(0, 1), vLocal_593, 2f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
						}
					}
					SYSTEM::SETTIMERB(0);
					iVar1 = 0;
					while (iVar1 < Local_204)
					{
						if (UNK_0xC844350D5D58C99A(Local_204[iVar1 /*18*/]))
						{
							UNK_0x2E1E5367A885F9B7(Local_204[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_131)
					{
						if (UNK_0xC844350D5D58C99A(Local_131[iVar1 /*18*/]))
						{
							UNK_0x2E1E5367A885F9B7(Local_131[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_616++;
					break;
				case 1:
					func_55();
					if ((UNK_0xDF1306B443CD3D15(Local_131[0 /*18*/], 0) && !UNK_0xEB6A8945D1AC98A1(func_63(0, 0))) && !UNK_0xEB6A8945D1AC98A1(func_63(0, 1)))
					{
						if (!iLocal_571[1])
						{
							iLocal_571[1] = 1;
							UNK_0xE9362E4D600DD12A(func_63(0, 0), Local_131[0 /*18*/], vLocal_575, 10f, 0, joaat("CAVALCADE2"), 786469, 2f, 10f);
						}
					}
					if ((UNK_0xDF1306B443CD3D15(Local_131[2 /*18*/], 0) && !UNK_0xEB6A8945D1AC98A1(func_63(2, 0))) && !UNK_0xEB6A8945D1AC98A1(func_63(2, 1)))
					{
						if (!iLocal_571[0])
						{
							UNK_0xE9362E4D600DD12A(func_63(2, 0), Local_131[2 /*18*/], vLocal_578, 10f, 0, joaat("CAVALCADE2"), 786469, 2f, 10f);
							iLocal_571[0] = 1;
						}
					}
					if (UNK_0xC844350D5D58C99A(bLocal_86) && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
					{
						func_52(bLocal_86, 6);
						if (Global_3 || bLocal_70)
						{
							if (!UNK_0xEB6A8945D1AC98A1(func_63(1, 0)))
							{
								if (UNK_0x5A91F08DF773C39D(func_63(1, 0), vLocal_587, Global_22, false, true, 0))
								{
									func_51(bLocal_86, func_68(1));
								}
							}
							if (!UNK_0xEB6A8945D1AC98A1(func_63(1, 1)))
							{
								if (UNK_0x5A91F08DF773C39D(func_63(1, 1), vLocal_590, Global_22, false, true, 0))
								{
									func_51(bLocal_86, func_66(1));
								}
							}
							if (!UNK_0xEB6A8945D1AC98A1(func_63(0, 1)))
							{
								if (UNK_0x5A91F08DF773C39D(func_63(0, 1), vLocal_590, Global_22, false, true, 0))
								{
									func_51(bLocal_86, func_66(0));
								}
							}
						}
						else
						{
							func_52(bLocal_86, func_68(1));
							func_52(bLocal_86, func_66(1));
							if (SYSTEM::TIMERB() > 1000)
							{
								func_52(bLocal_86, func_68(1));
							}
						}
					}
					if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bLocal_91, true), vLocal_87) < 9f)
					{
						if (UNK_0x5A91F08DF773C39D(func_63(2, 1), vLocal_581, Global_22, false, true, 0))
						{
							func_51(bLocal_86, func_66(2));
						}
						if (UNK_0x5A91F08DF773C39D(func_63(3, 1), vLocal_584, Global_22, false, true, 0))
						{
							func_51(bLocal_86, func_66(3));
						}
						if (UNK_0x5A91F08DF773C39D(func_63(0, 1), vLocal_584, Global_22, false, true, 0))
						{
							func_51(bLocal_86, func_66(0));
						}
					}
					else
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_619, 3))
						{
							UNK_0xA3BF0AA5A2608191(Local_204[func_66(3) /*18*/]);
							UNK_0x5D96D8530B3D0904(&bLocal_619, 3);
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_619, 2))
						{
							UNK_0xA3BF0AA5A2608191(Local_204[func_66(2) /*18*/]);
							UNK_0x5D96D8530B3D0904(&bLocal_619, 2);
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_619, false))
						{
							UNK_0xA3BF0AA5A2608191(Local_204[func_66(0) /*18*/]);
							UNK_0x5D96D8530B3D0904(&bLocal_619, false);
						}
						if (Global_3 || bLocal_70)
						{
							func_51(bLocal_86, func_66(3));
						}
						else
						{
							func_52(bLocal_86, func_66(3));
						}
						func_52(bLocal_86, func_66(2));
						func_52(bLocal_86, func_66(0));
					}
					break;
			}
			func_50();
			break;
		case 3:
			func_55();
			if (UNK_0xDF1306B443CD3D15(bLocal_91, 0))
			{
				if (UNK_0x9C66D99E63E8E24C(bLocal_91) < 1f)
				{
					fLocal_574 = (fLocal_574 + UNK_0x6117725E0134737F());
				}
				else if (fLocal_574 > 0f)
				{
					fLocal_574 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_131)
			{
				if (UNK_0xC844350D5D58C99A(Local_131[iVar0 /*18*/]) && iLocal_47 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_614 || !UNK_0xC844350D5D58C99A(Local_131[0 /*18*/])) || !UNK_0xC844350D5D58C99A(Local_131[1 /*18*/]))) && (UNK_0x1C0640BA9A7327B3() - iLocal_615) > 500)
					{
						if (SYSTEM::VDIST2(vLocal_60, vLocal_87) > 400f)
						{
							if (SYSTEM::VDIST2(vLocal_60, vLocal_87) < 62500f || (UNK_0x1C0640BA9A7327B3() - iLocal_370) < 30000)
							{
								func_46(Local_131[iVar0 /*18*/], bLocal_91, &(Local_131[iVar0 /*18*/].f_5), &(Local_131[iVar0 /*18*/].f_15), &(Local_131[iVar0 /*18*/].f_11), &(Local_131[iVar0 /*18*/].f_14), &(Local_131[iVar0 /*18*/].f_16), Local_131[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_614 = iVar0;
								iLocal_615 = UNK_0x1C0640BA9A7327B3();
							}
						}
					}
					iVar2 = func_68(iVar0);
					if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar2 /*18*/]))
					{
						iVar3 = func_66(iVar0);
					}
					else
					{
						iVar3 = func_68(iVar0);
					}
					switch (Local_131[iVar0 /*18*/].f_17)
					{
						case 0:
							if (UNK_0xDF1306B443CD3D15(Local_131[iVar0 /*18*/], 0))
							{
								if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_131[iVar0 /*18*/], 0))
								{
									if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar2 /*18*/]))
									{
										if (!UNK_0xC42A92762C58E1B9(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
										{
											if (UNK_0xD1960163A3042274(Local_204[iVar2 /*18*/], -1794415470) != 1 && UNK_0xBBA8A868118C90ED(Local_131[iVar0 /*18*/], -1, 0))
											{
												UNK_0x5B1D360B9C6F0A09(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar3 /*18*/]))
										{
											if (!UNK_0xC42A92762C58E1B9(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
											{
												if (UNK_0xD1960163A3042274(Local_204[iVar3 /*18*/], -1794415470) != 1 && UNK_0xBBA8A868118C90ED(Local_131[iVar0 /*18*/], false, 0))
												{
													UNK_0x5B1D360B9C6F0A09(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], -1, false, 2f, 1, 0);
												}
											}
										}
										if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar2 /*18*/]) && (iVar3 != -1 && !UNK_0xEB6A8945D1AC98A1(Local_204[iVar3 /*18*/])))
										{
											if ((UNK_0xC42A92762C58E1B9(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar3 != -1 && UNK_0xC42A92762C58E1B9(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))) && UNK_0xDF1306B443CD3D15(bLocal_91, 0))
											{
												if (UNK_0xD1960163A3042274(Local_204[iVar2 /*18*/], -1273030092) != 1 && UNK_0xD1960163A3042274(Local_204[iVar2 /*18*/], -1817882002) != 1)
												{
													UNK_0xAFF39FB306F8E232(Local_204[iVar2 /*18*/], 3, false);
													UNK_0xAFF39FB306F8E232(Local_204[iVar2 /*18*/], 1, true);
													UNK_0xAFF39FB306F8E232(Local_204[iVar2 /*18*/], 2, false);
													if (iVar0 == 0)
													{
														UNK_0x60274E99F9B27DEA(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], bLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														UNK_0x60274E99F9B27DEA(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], bLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														UNK_0x60274E99F9B27DEA(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], bLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														UNK_0x60274E99F9B27DEA(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], bLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												UNK_0x06736587AE5BE33B(Local_204[iVar2 /*18*/], func_45((3f * UNK_0x0EB28750412C3A5A(vLocal_66, Local_131[iVar0 /*18*/].f_8, 1)), 50f, 120f));
											}
										}
									}
									if (fLocal_574 > 3f && SYSTEM::VDIST(Local_131[iVar0 /*18*/].f_8, vLocal_66) < 10f)
									{
										Local_131[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar2 /*18*/]))
								{
									if (!UNK_0xE9FDA1035CFEA94F(Local_204[iVar2 /*18*/]))
									{
										UNK_0xBAFED2F6486F771A(Local_204[iVar2 /*18*/], 2, false);
										UNK_0xF3268524E9BE6D6E(Local_204[iVar2 /*18*/], UNK_0x16F2683693E537C9(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar3 /*18*/]))
									{
										if (!UNK_0xE9FDA1035CFEA94F(Local_204[iVar3 /*18*/]))
										{
											UNK_0xBAFED2F6486F771A(Local_204[iVar3 /*18*/], 2, false);
											UNK_0xF3268524E9BE6D6E(Local_204[iVar3 /*18*/], UNK_0x16F2683693E537C9(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						case 1:
							if (UNK_0x405E212DDE472467(Local_204[iVar2 /*18*/], 0))
							{
								UNK_0x75CDA8644CD3B5F5(Local_204[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_52(bLocal_86, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar3 /*18*/]))
								{
									if (UNK_0x405E212DDE472467(Local_204[iVar3 /*18*/], 0))
									{
										UNK_0x75CDA8644CD3B5F5(Local_204[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_52(bLocal_86, iVar3);
									}
								}
							}
							if (UNK_0xDF1306B443CD3D15(Local_131[iVar0 /*18*/], 0))
							{
								if (SYSTEM::VDIST(Local_131[iVar0 /*18*/].f_8, vLocal_66) > 15f)
								{
									Local_131[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!UNK_0xEB6A8945D1AC98A1(Local_204[iVar2 /*18*/]) && (iVar3 == -1 || !UNK_0xEB6A8945D1AC98A1(Local_204[iVar3 /*18*/]))) && UNK_0xDF1306B443CD3D15(Local_131[iVar0 /*18*/], 0))
					{
						bVar4 = true;
						if (!UNK_0x03068588A1FCED1A(Local_204[iVar2 /*18*/]))
						{
							bVar4 = false;
						}
						if (iVar3 != -1)
						{
							if (!UNK_0x03068588A1FCED1A(Local_204[iVar3 /*18*/]))
							{
								bVar4 = false;
							}
						}
						if (!UNK_0x03068588A1FCED1A(Local_131[iVar0 /*18*/]))
						{
							bVar4 = false;
						}
						if ((bVar4 && SYSTEM::VDIST(vLocal_60, Local_131[iVar0 /*18*/].f_8) > 25f) && SYSTEM::VDIST(vLocal_60, Local_204[iVar0 /*18*/].f_6) > 25f)
						{
							if (!UNK_0xC42A92762C58E1B9(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								UNK_0xF821F915BC24D246(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!UNK_0xC42A92762C58E1B9(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									UNK_0xF821F915BC24D246(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], false);
								}
							}
						}
					}
					if (func_44(iVar0, 1125515264 /* Float: 150f */))
					{
						func_43(iVar0);
					}
				}
				func_50();
				func_35();
				iVar0++;
			}
			break;
		case 4:
			func_55();
			if (!bLocal_618)
			{
				iVar0 = 0;
				while (iVar0 < Local_131)
				{
					iVar5 = func_68(iVar0);
					if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar5 /*18*/]))
					{
						iVar6 = func_66(iVar0);
					}
					else
					{
						iVar6 = func_68(iVar0);
					}
					if (UNK_0xDF1306B443CD3D15(Local_131[iVar0 /*18*/], 0))
					{
						if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar5 /*18*/]))
						{
							if (!UNK_0xC42A92762C58E1B9(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								if (UNK_0xD1960163A3042274(Local_204[iVar5 /*18*/], -1794415470) != 1)
								{
									UNK_0x5B1D360B9C6F0A09(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar6 /*18*/]))
							{
								if (!UNK_0xC42A92762C58E1B9(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									if (UNK_0xD1960163A3042274(Local_204[iVar6 /*18*/], -1794415470) != 1)
									{
										UNK_0x5B1D360B9C6F0A09(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], -1, false, 2f, 1, 0);
									}
								}
							}
							if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar5 /*18*/]) && (iVar6 != -1 && !UNK_0xEB6A8945D1AC98A1(Local_204[iVar6 /*18*/])))
							{
								if ((UNK_0xC42A92762C58E1B9(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar6 != -1 && UNK_0xC42A92762C58E1B9(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))) && UNK_0xDF1306B443CD3D15(bLocal_91, 0))
								{
									bVar7 = func_45((70f - (SYSTEM::TO_FLOAT((UNK_0x1C0640BA9A7327B3() - iLocal_85)) / 50f)), 0f, 70f);
									if (bVar7 <= 1f || (UNK_0x1C0640BA9A7327B3() - iLocal_85) > 4000)
									{
										UNK_0xE76AF7E1683414C6(Local_204[iVar5 /*18*/], bVar7);
										iVar8 = 0;
										while (iVar8 < Local_131)
										{
											if ((UNK_0xDF1306B443CD3D15(Local_131[iVar8 /*18*/], 0) && !UNK_0xEB6A8945D1AC98A1(func_63(iVar8, 0))) && UNK_0xC42A92762C58E1B9(func_63(iVar8, 0), Local_131[iVar8 /*18*/], 0))
											{
												UNK_0xA3BF0AA5A2608191(func_63(iVar8, 0));
												UNK_0x60274E99F9B27DEA(func_63(iVar8, 0), Local_131[iVar8 /*18*/], false, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										bLocal_618 = true;
									}
									else if (UNK_0xD1960163A3042274(Local_204[iVar5 /*18*/], -1273030092) != 1 && UNK_0xD1960163A3042274(Local_204[iVar5 /*18*/], -1817882002) != 1)
									{
										UNK_0xAFF39FB306F8E232(Local_204[iVar5 /*18*/], 3, false);
										UNK_0xAFF39FB306F8E232(Local_204[iVar5 /*18*/], 1, true);
										UNK_0xAFF39FB306F8E232(Local_204[iVar5 /*18*/], 2, false);
										if (iVar0 == 0)
										{
											UNK_0x60274E99F9B27DEA(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], bLocal_91, 10, bVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											UNK_0x60274E99F9B27DEA(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], bLocal_91, 11, bVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											UNK_0x60274E99F9B27DEA(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], bLocal_91, 10, bVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											UNK_0x60274E99F9B27DEA(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], bLocal_91, 11, bVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar5 /*18*/]))
						{
							if (!UNK_0xE9FDA1035CFEA94F(Local_204[iVar5 /*18*/]))
							{
								UNK_0xBAFED2F6486F771A(Local_204[iVar5 /*18*/], 2, false);
								UNK_0xF3268524E9BE6D6E(Local_204[iVar5 /*18*/], UNK_0x16F2683693E537C9(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar6 /*18*/]))
							{
								if (!UNK_0xE9FDA1035CFEA94F(Local_204[iVar6 /*18*/]))
								{
									UNK_0xBAFED2F6486F771A(Local_204[iVar6 /*18*/], 2, false);
									UNK_0xF3268524E9BE6D6E(Local_204[iVar6 /*18*/], UNK_0x16F2683693E537C9(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_44(iLocal_617, 10f))
				{
					func_43(iLocal_617);
				}
				iLocal_617++;
				if (iLocal_617 > 3)
				{
					iLocal_617 = 0;
				}
			}
			func_50();
			func_35();
			break;
		case 6:
			if (func_44(iLocal_617, 1125515264 /* Float: 150f */))
			{
				func_43(iLocal_617);
			}
			iLocal_617++;
			if (iLocal_617 > 3)
			{
				iLocal_617 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/]) && !UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/]))
		{
			if (iLocal_49 > 1)
			{
				if (!UNK_0xEA6BC48857E0AC4C(bLocal_373))
				{
					func_34(iVar0);
					if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/].f_2) && UNK_0xD59B17D2DFF98E26(Local_204[iVar0 /*18*/].f_2))
					{
						if (!UNK_0x405E212DDE472467(Local_204[iVar0 /*18*/], 0))
						{
							if (UNK_0x4FC40AB0ECCE6E18(Local_204[iVar0 /*18*/].f_2))
							{
								if (UNK_0xA48EBBEA418ADC94(Local_204[iVar0 /*18*/]))
								{
									UNK_0x4A4806F9D471E491(Local_204[iVar0 /*18*/].f_2, false, 0);
								}
							}
							else if (!UNK_0xA48EBBEA418ADC94(Local_204[iVar0 /*18*/]))
							{
								UNK_0x4A4806F9D471E491(Local_204[iVar0 /*18*/].f_2, true, 0);
							}
							if (!UNK_0x03068588A1FCED1A(Local_204[iVar0 /*18*/]))
							{
								if (!UNK_0xB4ECF989E2C1DAC8(Local_204[iVar0 /*18*/], bLocal_373, func_33(iVar0), 3))
								{
									if (!Local_204[iVar0 /*18*/].f_11)
									{
										if (!UNK_0xB4ECF989E2C1DAC8(Local_204[iVar0 /*18*/], bLocal_373, "grip", 3))
										{
											UNK_0xC6EB89C59F2AF6B8(Local_204[iVar0 /*18*/], bLocal_373, "grip", 1000f, -1000f, -1, 57, false, 0, 0, 0);
											Local_204[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_204[iVar0 /*18*/].f_11)
								{
									UNK_0xC6EB89C59F2AF6B8(Local_204[iVar0 /*18*/], bLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_204[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_204[iVar0 /*18*/].f_10)
							{
								UNK_0x4942FBD1EF896E39(bLocal_373);
								if (UNK_0xDF3FDDA1EADEDD07(bLocal_373))
								{
									UNK_0x9237814869823B3E(Local_204[iVar0 /*18*/], bLocal_373);
									Local_204[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_204[iVar0 /*18*/].f_11)
							{
								UNK_0xC6EB89C59F2AF6B8(Local_204[iVar0 /*18*/], bLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_204[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_204[iVar0 /*18*/].f_10)
							{
								UNK_0xAB690CF5866CB826(Local_204[iVar0 /*18*/]);
								Local_204[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (UNK_0x0E0E6175453415CB(Local_204[iVar0 /*18*/]) && func_32(Local_204[iVar0 /*18*/], UNK_0x6937EA2286828455(Local_204[iVar0 /*18*/], 0)) == -1)
						{
							if (UNK_0x4FC40AB0ECCE6E18(Local_204[iVar0 /*18*/].f_2))
							{
								UNK_0x4A4806F9D471E491(Local_204[iVar0 /*18*/].f_2, false, 0);
							}
						}
						else if (!UNK_0x4FC40AB0ECCE6E18(Local_204[iVar0 /*18*/].f_2))
						{
							UNK_0x4A4806F9D471E491(Local_204[iVar0 /*18*/].f_2, true, 0);
						}
					}
					else
					{
						if (Local_204[iVar0 /*18*/].f_11)
						{
							UNK_0xC6EB89C59F2AF6B8(Local_204[iVar0 /*18*/], bLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_204[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_204[iVar0 /*18*/].f_10)
						{
							UNK_0xAB690CF5866CB826(Local_204[iVar0 /*18*/]);
							Local_204[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_47 != 7)
			{
				if (UNK_0x36646919F20EAFFC(Local_204[iVar0 /*18*/]) && UNK_0xE64AC821059A938D(UNK_0x16F2683693E537C9()))
				{
					func_189(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_47 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_131)
		{
			if (UNK_0xC844350D5D58C99A(Local_131[iVar0 /*18*/]))
			{
				if (UNK_0xDF1306B443CD3D15(Local_131[iVar0 /*18*/], 0))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_131[iVar0 /*18*/], 0))
					{
						func_189(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_32(bool bParam0, bool bParam1)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0) && !UNK_0x437347B10A200C4B(bParam1, 0))
	{
		if (UNK_0x82CCEAB29E9451DD(bParam0, bParam1))
		{
			if (UNK_0xA30B8362589C124A(bParam1, -1, 0) == bParam0)
			{
				return -1;
			}
			if (UNK_0xA30B8362589C124A(bParam1, false, 0) == bParam0)
			{
				return 0;
			}
			if (UNK_0xA30B8362589C124A(bParam1, true, 0) == bParam0)
			{
				return 1;
			}
			if (UNK_0xA30B8362589C124A(bParam1, 2, 0) == bParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
		case 1:
		case 6:
			return "idle_b";
		case 2:
		case 7:
			return "idle_c";
		case 3:
			return "idle_d";
		case 4:
			return "idle_e";
		default:
			break;
	}
	return "";
}

void func_34(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar0 = false;
	while (bVar0 < 15)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Local_204[iParam0 /*18*/].f_15, bVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_375);
			bVar3 = bVar0;
			if (bVar3 < iVar1)
			{
				if (UNK_0xB4ECF989E2C1DAC8(Local_204[iParam0 /*18*/], bLocal_373, func_33(iParam0), 3))
				{
					if (UNK_0x8CA9406E01C7EE58(Local_204[iParam0 /*18*/], bLocal_373, func_33(iParam0)) > 0.9f)
					{
						UNK_0x0674E58A79778E99(&(Local_204[iParam0 /*18*/].f_15), bVar0);
					}
				}
			}
			else if (bVar3 < iVar2)
			{
				if (UNK_0xB4ECF989E2C1DAC8(Local_204[iParam0 /*18*/], bLocal_374, iLocal_375[(bVar3 - iVar1)], 3))
				{
					if (UNK_0x8CA9406E01C7EE58(Local_204[iParam0 /*18*/], bLocal_374, iLocal_375[(bVar3 - iVar1)]) > 0.9f)
					{
						UNK_0x0674E58A79778E99(&(Local_204[iParam0 /*18*/].f_15), bVar0);
					}
				}
			}
			else if (!UNK_0xB4ECF989E2C1DAC8(Local_204[iParam0 /*18*/], bLocal_373, "grip", 3))
			{
				UNK_0x0674E58A79778E99(&(Local_204[iParam0 /*18*/].f_15), bVar0);
			}
		}
		bVar0++;
	}
}

void func_35()
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
	{
		iVar0 = func_66(iLocal_568);
		if (((UNK_0xC844350D5D58C99A(Local_131[iLocal_568 /*18*/]) && UNK_0xDF1306B443CD3D15(Local_131[iLocal_568 /*18*/], 0)) && UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/])) && !UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/]))
		{
			if (UNK_0x4906F8A34E9F4814(Local_131[iLocal_568 /*18*/], joaat("CAVALCADE2")))
			{
				if (SYSTEM::VDIST2(Local_204[iVar0 /*18*/].f_6, vLocal_63) < SYSTEM::POW(30f, 2f) && UNK_0xA30B8362589C124A(Local_131[iLocal_568 /*18*/], false, 0) == Local_204[iVar0 /*18*/])
				{
					if (!Local_204[iVar0 /*18*/].f_9)
					{
						if (!func_42(iVar0))
						{
							func_36(iVar0);
						}
					}
					else if (!func_42(iVar0) && (UNK_0x1C0640BA9A7327B3() - Local_204[iVar0 /*18*/].f_13) > 1000)
					{
						if (!UNK_0xB4ECF989E2C1DAC8(Local_204[iVar0 /*18*/], bLocal_374, "base", 3))
						{
							UNK_0xC6EB89C59F2AF6B8(Local_204[iVar0 /*18*/], bLocal_374, "base", 8f, 1000f, -1, 16, false, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_204[iVar0 /*18*/].f_9)
			{
				if (SYSTEM::VDIST2(Local_204[iVar0 /*18*/].f_6, vLocal_63) < SYSTEM::POW(30f, 2f) && UNK_0xA30B8362589C124A(Local_131[iLocal_568 /*18*/], false, 0) == Local_204[iVar0 /*18*/])
				{
					UNK_0xBFD82EF80A8224A7(Local_204[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, bLocal_86, 1.57f, 0.25f);
					Local_204[iVar0 /*18*/].f_9 = 1;
					Local_204[iVar0 /*18*/].f_13 = UNK_0x1C0640BA9A7327B3();
				}
			}
			else if (Local_204[iVar0 /*18*/].f_9)
			{
				if ((UNK_0x1C0640BA9A7327B3() - Local_204[iVar0 /*18*/].f_13) > 2000)
				{
					Local_204[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_568++;
		if (iLocal_568 >= Local_131)
		{
			iLocal_568 = 0;
		}
	}
}

void func_36(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;

	if (!UNK_0xEB6A8945D1AC98A1(Local_204[iParam0 /*18*/]) && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
	{
		bVar0 = 15;
		vVar1 = { vLocal_63 - Local_204[iParam0 /*18*/].f_6 };
		vVar4 = { UNK_0x08D89CE2E20AE305(Local_204[iParam0 /*18*/]) };
		bVar7 = func_40(vVar4, vVar1);
		if (UNK_0x755FF954DAE327E1(bVar7) < 10f)
		{
			bVar0 = 5;
		}
		else if (bVar7 >= 10f && bVar7 < 60f)
		{
			bVar0 = 7;
		}
		else if (bVar7 >= 60f && bVar7 < 100f)
		{
			bVar0 = 6;
		}
		else if (bVar7 <= -10f && bVar7 > -60f)
		{
			bVar0 = 10;
		}
		else if (bVar7 < -60f && bVar7 > -100f)
		{
			bVar0 = 9;
		}
		if (bVar0 != 15)
		{
			func_37(iParam0, bVar0);
		}
	}
}

void func_37(int iParam0, bool bParam1)
{
	if (bParam1 < 15)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_204[iParam0 /*18*/].f_15, bParam1))
		{
			if (func_39(bParam1))
			{
				UNK_0xC6EB89C59F2AF6B8(Local_204[iParam0 /*18*/], bLocal_374, iLocal_375[func_38(bParam1)], 4f, -4f, -1, 16, false, 0, 0, 0);
			}
			else if (bParam1 < 5)
			{
				UNK_0xC6EB89C59F2AF6B8(Local_204[iParam0 /*18*/], bLocal_373, func_33(iParam0), 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
			}
			else
			{
				UNK_0xC6EB89C59F2AF6B8(Local_204[iParam0 /*18*/], bLocal_373, "grip", 1000f, -1000f, -1, 57, false, 0, 0, 0);
			}
			Local_204[iParam0 /*18*/].f_15 = 0;
			UNK_0x5D96D8530B3D0904(&(Local_204[iParam0 /*18*/].f_15), bParam1);
		}
	}
}

int func_38(bool bParam0)
{
	return (bParam0 - 5);
}

bool func_39(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	return (bVar0 >= 5 && bVar0 < (5 + iLocal_375));
}

float func_40(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0 = { func_41(vParam0) };
	vParam3 = { func_41(vParam3) };
	fVar0 = (UNK_0x5D8ABF6396A76564(vParam3.y, vParam3.x) - UNK_0x5D8ABF6396A76564(vParam0.y, vParam0.x));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_41(vector3 vParam0)
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

bool func_42(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	if (!UNK_0xEA6BC48857E0AC4C(bLocal_374))
	{
		bVar1 = 5;
		while (bVar1 <= 13)
		{
			if (!bVar0)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Local_204[iParam0 /*18*/].f_15, bVar1))
				{
					bVar0 = true;
				}
			}
			bVar1++;
		}
	}
	return bVar0;
}

void func_43(int iParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(Local_131[iParam0 /*18*/]) && UNK_0x03068588A1FCED1A(Local_131[iParam0 /*18*/]))
	{
		UNK_0xA954465BA6FDEFE2(&(Local_131[iParam0 /*18*/]));
	}
	if (UNK_0xE4EDC4B0E92C078B(Local_131[iParam0 /*18*/].f_1))
	{
		UNK_0x142CC44DB769B57E(&(Local_131[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_66(iParam0);
		}
		else
		{
			iVar1 = func_68(iParam0);
		}
		if (UNK_0xC844350D5D58C99A(Local_204[iVar1 /*18*/]) && UNK_0x03068588A1FCED1A(Local_204[iVar1 /*18*/]))
		{
			if (UNK_0xC844350D5D58C99A(Local_204[iVar1 /*18*/]))
			{
				UNK_0xF690C84DADBB3551(&(Local_204[iVar1 /*18*/].f_2));
			}
			if (UNK_0xE4EDC4B0E92C078B(Local_204[iVar1 /*18*/].f_1))
			{
				UNK_0x142CC44DB769B57E(&(Local_204[iVar1 /*18*/].f_1));
			}
			UNK_0xEBA53F35D0085654(&(Local_204[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

bool func_44(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = 1;
	if (UNK_0xC844350D5D58C99A(Local_131[iParam0 /*18*/]))
	{
		if (UNK_0xDF1306B443CD3D15(Local_131[iParam0 /*18*/], 0))
		{
			if (SYSTEM::VDIST2(vLocal_60, Local_131[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !UNK_0x03068588A1FCED1A(Local_131[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(func_63(iParam0, 0)))
	{
		if (!UNK_0xEB6A8945D1AC98A1(func_63(iParam0, 0)))
		{
			if (SYSTEM::VDIST2(vLocal_60, Local_204[func_68(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !UNK_0x03068588A1FCED1A(func_63(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(func_63(iParam0, 1)))
	{
		if (!UNK_0xEB6A8945D1AC98A1(func_63(iParam0, 1)))
		{
			if (SYSTEM::VDIST2(vLocal_60, Local_204[func_66(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !UNK_0x03068588A1FCED1A(func_63(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_45(float fParam0, float fParam1, float fParam2)
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

void func_46(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, int iParam10, float fParam11)
{
	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (((((UNK_0xC844350D5D58C99A(bParam1) && bParam0 != bParam1) && !UNK_0xA7082C42B8809BF2(UNK_0x134B62B726CEC8E6(bParam1))) && !UNK_0xC41A9202669A24C4(UNK_0x134B62B726CEC8E6(bParam1))) && !UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(bParam1))) && !UNK_0xA7D7011F9888A365(UNK_0x134B62B726CEC8E6(bParam1)))
		{
			if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam1, true), *uParam4, 1) > 20f)
			{
				if (func_49(bParam0, bParam1, bLocal_358, UNK_0x68F4C0EC296D3901(bParam1, true), UNK_0x835730A2D89F6093(bParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { UNK_0x8A5E176FF719A014(*uParam2, *uParam3, vParam7) };
					*uParam4 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
					*uParam5 = UNK_0xD9522BA9E27E1349(bParam1);
				}
			}
			if (!UNK_0x03068588A1FCED1A(bParam0))
			{
				*uParam6 = UNK_0x1C0640BA9A7327B3();
			}
			else if ((UNK_0x1C0640BA9A7327B3() - *uParam6) > iParam10)
			{
				if ((func_48(bParam0, bParam1, 1) > fParam11 && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam1, true), *uParam2, 1) > 20f) && SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), *uParam2) > 100f)
				{
					if (!func_47(*uParam2))
					{
						if (!UNK_0x8E28E832BEAC3DCE(*uParam2, 6f))
						{
							UNK_0x745CE398A4B0A3C6(*uParam2, 6f, 0);
							UNK_0x28F5E4DA506AC0CA(*uParam2, 6f, 0, 0, 0, 0, false, 0);
							UNK_0xA47B46945FF6DE74(bParam0, *uParam2, 1, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(bParam0, *uParam3);
							UNK_0xB9FD7450C0DAB575(bParam0, 1084227584 /* Float: 5f */);
							UNK_0x1AEF7184B203A58D(bParam0, func_45((UNK_0x9C66D99E63E8E24C(bParam1) + 10f), 10f, 60f));
							UNK_0x56FDC9ADE35F7DB0(bParam0, true, true, 0);
							*uParam6 = UNK_0x1C0640BA9A7327B3();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = UNK_0x1C0640BA9A7327B3();
		}
	}
}

bool func_47(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_48(bool bParam0, bool bParam1, int iParam2)
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

bool func_49(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	vector3 vVar24;
	int iVar27;
	var uVar28;
	var uVar31;
	var uVar34;
	int iVar35;

	if (UNK_0xC844350D5D58C99A(bParam2))
	{
		UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bParam0), &vVar7, &vVar10);
		UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bParam1), &vVar13, &uVar16);
		fVar19 = UNK_0x755FF954DAE327E1((vVar10.z - vVar7.z));
		fVar20 = UNK_0x755FF954DAE327E1((vVar10.x - vVar7.x));
		fVar21 = UNK_0x755FF954DAE327E1((vVar10.y - vVar7.y));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - UNK_0x755FF954DAE327E1(vVar7.z));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - UNK_0x755FF954DAE327E1(vVar7.x));
		}
		vVar24.f_2 = (vVar24.z + (vVar13.z - vVar7.z));
		UNK_0xA47B46945FF6DE74(bParam2, vParam3, 1, 0, 0, 1);
		UNK_0xC023D1C4BF532815(bParam2, vParam6, 2, 1);
		vVar1 = { UNK_0x68E4ADDDDCD7BDDE(bParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + vVar24) };
		vVar4 = { UNK_0x68E4ADDDDCD7BDDE(bParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + vVar24) };
		iVar35 = UNK_0x6D4C9F7CF124AE37(vVar4, vVar1, fVar22, 19, UNK_0x16F2683693E537C9(), 4);
		if (UNK_0x1EC301670B54C6DE(iVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_50()
{
	bool bVar0;

	if ((UNK_0x1C0640BA9A7327B3() - iLocal_567) > 100)
	{
		if ((UNK_0x1C0640BA9A7327B3() - Local_204[iLocal_566 /*18*/].f_12) > 500)
		{
			if (UNK_0xC844350D5D58C99A(Local_204[iLocal_566 /*18*/]) && !UNK_0xEB6A8945D1AC98A1(Local_204[iLocal_566 /*18*/]))
			{
				bVar0 = true;
				if (!Local_204[iLocal_566 /*18*/].f_9 && UNK_0x405E212DDE472467(Local_204[iLocal_566 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((UNK_0xB4ECF989E2C1DAC8(Local_204[iLocal_566 /*18*/], bLocal_373, func_33(iLocal_566), 3) && UNK_0x8CA9406E01C7EE58(Local_204[iLocal_566 /*18*/], bLocal_373, func_33(iLocal_566)) > 0.5f) && UNK_0x8CA9406E01C7EE58(Local_204[iLocal_566 /*18*/], bLocal_373, func_33(iLocal_566)) < 0.75f) || Local_204[iLocal_566 /*18*/].f_9)
					{
						UNK_0xE81656B429E5C4B5("scr_rcpap1_camera", Local_204[iLocal_566 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216 /* Float: 1f */, 0, 0, 0);
						if ((iLocal_566 % 3) == 0)
						{
							UNK_0xEB819BD1E585E9CB(-1, "SHUTTER_FLASH", UNK_0x68F4C0EC296D3901(Local_204[iLocal_566 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", false, 0, 0);
						}
						else if ((iLocal_566 % 3) == 1)
						{
							UNK_0xEB819BD1E585E9CB(-1, "SHUTTER", UNK_0x68F4C0EC296D3901(Local_204[iLocal_566 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", false, 0, 0);
						}
						else
						{
							UNK_0xEB819BD1E585E9CB(-1, "FLASH", UNK_0x68F4C0EC296D3901(Local_204[iLocal_566 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", false, 0, 0);
						}
						Local_204[iLocal_566 /*18*/].f_12 = UNK_0x1C0640BA9A7327B3();
					}
					iLocal_567 = UNK_0x1C0640BA9A7327B3();
				}
			}
			iLocal_566++;
			if (iLocal_566 >= Local_204)
			{
				iLocal_566 = 0;
			}
		}
	}
}

void func_51(bool bParam0, int iParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(Local_204[iParam1 /*18*/]) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (!UNK_0x7069CC4DE1EA3FAA(Local_204[iParam1 /*18*/], bParam0, 20f))
		{
			if (UNK_0xD1960163A3042274(Local_204[iParam1 /*18*/], -875674219) != 1)
			{
				UNK_0xF96A174EE26D7588(Local_204[iParam1 /*18*/], bParam0, 0);
			}
		}
		else if ((UNK_0x1C0640BA9A7327B3() - Local_204[iParam1 /*18*/].f_13) > 2000)
		{
			if (!UNK_0xB4ECF989E2C1DAC8(Local_204[iParam1 /*18*/], bLocal_373, func_33(iParam1), 3))
			{
				UNK_0xC6EB89C59F2AF6B8(Local_204[iParam1 /*18*/], bLocal_373, func_33(iParam1), 4f, -4f, -1, 0, false, 0, 0, 0);
				Local_204[iParam1 /*18*/].f_13 = UNK_0x1C0640BA9A7327B3();
			}
		}
	}
}

void func_52(bool bParam0, int iParam1)
{
	vector3 vVar0;

	if (!UNK_0xEB6A8945D1AC98A1(Local_204[iParam1 /*18*/]) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		vVar0 = { UNK_0x68E4ADDDDCD7BDDE(bParam0, func_54(iParam1)) };
		switch (Local_204[iParam1 /*18*/].f_16)
		{
			case 0:
				func_53(vVar0, iParam1, bParam0);
				Local_204[iParam1 /*18*/].f_16++;
				break;
			case 1:
				if (UNK_0xD1960163A3042274(Local_204[iParam1 /*18*/], 713668775) != 1 || SYSTEM::VDIST(vVar0, Local_204[iParam1 /*18*/].f_6) > 5f)
				{
					Local_204[iParam1 /*18*/].f_16++;
				}
				break;
			case 2:
				if (SYSTEM::VDIST(vVar0, Local_204[iParam1 /*18*/].f_6) > 10f)
				{
					func_53(vVar0, iParam1, bParam0);
					Local_204[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_51(bParam0, iParam1);
				}
				break;
			case 3:
				if (SYSTEM::VDIST2(vVar0, Local_204[iParam1 /*18*/].f_3) > 25f)
				{
					func_53(vVar0, iParam1, bParam0);
				}
				if (UNK_0xD1960163A3042274(Local_204[iParam1 /*18*/], 713668775) != 1)
				{
					Local_204[iParam1 /*18*/].f_16 = (Local_204[iParam1 /*18*/].f_16 - 1);
				}
				break;
		}
	}
}

void func_53(vector3 vParam0, int iParam3, bool bParam4)
{
	vector3 vVar0;
	bool bVar3;

	vVar0 = { func_41(UNK_0x68F4C0EC296D3901(bParam4, true) - vParam0) };
	bVar3 = UNK_0xE7D606C557C86100(vVar0.x, vVar0.y);
	Local_204[iParam3 /*18*/].f_3 = { vParam0 };
	UNK_0xA3BF0AA5A2608191(Local_204[iParam3 /*18*/]);
	if (SYSTEM::VDIST(vParam0, Local_204[iParam3 /*18*/].f_6) < 2f)
	{
		UNK_0x96167B03C5A77156(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, bVar3);
	}
	else
	{
		UNK_0x96167B03C5A77156(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, bVar3);
	}
}

Vector3 func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
		case 5:
			return 2.097f, -1.2978f, 0.23f;
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_55()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (UNK_0xE4EDC4B0E92C078B(Local_204[iVar0 /*18*/].f_1))
		{
			if (UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/]))
			{
				UNK_0x142CC44DB769B57E(&(Local_204[iVar0 /*18*/].f_1));
			}
			else if (UNK_0x405E212DDE472467(Local_204[iVar0 /*18*/], 0))
			{
				UNK_0x142CC44DB769B57E(&(Local_204[iVar0 /*18*/].f_1));
			}
		}
		else if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/]) && !UNK_0x405E212DDE472467(Local_204[iVar0 /*18*/], 0))
		{
			Local_204[iVar0 /*18*/].f_1 = func_191(Local_204[iVar0 /*18*/], 1, 145);
			UNK_0xDC5B2F9D0CCE3A10(Local_204[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131)
	{
		if (UNK_0xDF1306B443CD3D15(Local_131[iVar0 /*18*/], 0))
		{
			if (UNK_0xE4EDC4B0E92C078B(Local_131[iVar0 /*18*/].f_1))
			{
				vVar1 = { UNK_0xAC14F6E4B17D7835(Local_131[iVar0 /*18*/].f_1) };
				vVar4 = { Local_131[iVar0 /*18*/].f_8 };
				vVar1.x = (vVar1.x + ((vVar4.x - vVar1.x) / 10f));
				vVar1.f_1 = (vVar1.y + ((vVar4.y - vVar1.y) / 10f));
				vVar1.f_2 = (vVar1.z + ((vVar4.z - vVar1.z) / 10f));
				UNK_0x2F9282246F89FFD1(Local_131[iVar0 /*18*/].f_1, vVar1);
				if (func_58(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
				{
					UNK_0x142CC44DB769B57E(&(Local_131[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_58(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
			{
				Local_131[iVar0 /*18*/].f_1 = func_56(Local_131[iVar0 /*18*/].f_8, 0);
				UNK_0x61755AC17D8F538E(Local_131[iVar0 /*18*/].f_1, true);
				UNK_0xDC5B2F9D0CCE3A10(Local_131[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				UNK_0x2A065371C9D96655(Local_131[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (UNK_0xE4EDC4B0E92C078B(Local_131[iVar0 /*18*/].f_1))
		{
			UNK_0x142CC44DB769B57E(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

int func_56(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_57(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_57(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_58(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar1 = UNK_0xD6DF381716822EFE(bParam0) + 1;
	if (bParam4 || !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			bVar2 = func_60(bParam0, (iVar0 - 1), bParam6, iParam7);
			if (UNK_0xC844350D5D58C99A(bVar2))
			{
				if (bParam3 && bVar2 == UNK_0x16F2683693E537C9())
				{
				}
				else if (bParam2)
				{
					if (UNK_0x34BFC6F0CB887BC2(bVar2))
					{
						bVar3 = UNK_0x83FACCC48B68F9D1(bVar2);
						if (((!UNK_0xEB6A8945D1AC98A1(bVar2) && bVar3 != func_11()) && func_59(bVar3, 1, 1)) || bParam8)
						{
							if (UNK_0x179932739160BA96(UNK_0x83FACCC48B68F9D1(bVar2)) == 0)
							{
								if (!bParam5)
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return false;
				}
				else if (!UNK_0xEB6A8945D1AC98A1(bVar2))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_59(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (UNK_0x40B8C182D63932FC(bParam0))
		{
			if (bParam1)
			{
				if (!UNK_0xE1DBBD6CE209517C(bParam0))
				{
					return false;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[bVar0])
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

bool func_60(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;

	if (!UNK_0xBBA8A868118C90ED(bParam0, bParam1, iParam3))
	{
		bVar0 = UNK_0xA30B8362589C124A(bParam0, bParam1, iParam3);
	}
	if (bParam2)
	{
		if (!UNK_0xC844350D5D58C99A(bVar0) && !UNK_0x437347B10A200C4B(bParam0, 0))
		{
			bVar0 = UNK_0xB0326EA5AFB4EFA7(bParam0, bParam1);
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xD1960163A3042274(bVar0, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1 || UNK_0xD1960163A3042274(bVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bParam0, false), UNK_0x68F4C0EC296D3901(bVar0, false)) < 10f)
					{
						return bVar0;
					}
				}
			}
			bVar0 = -1;
		}
	}
	return bVar0;
}

void func_61(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!UNK_0xEB6A8945D1AC98A1(Local_204[iParam0 /*18*/]))
	{
		if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(Local_204[iParam0 /*18*/], true), vParam1) > 1.5f)
		{
			if (UNK_0xD1960163A3042274(Local_204[iParam0 /*18*/], 713668775) != 1)
			{
				UNK_0x96167B03C5A77156(Local_204[iParam0 /*18*/], vParam1, 2f, -1, 0.25f, 0, bParam4);
			}
		}
		else if (UNK_0x755FF954DAE327E1((func_62(UNK_0xD9522BA9E27E1349(Local_204[iParam0 /*18*/])) - func_62(bParam4))) > 10f)
		{
			if (UNK_0xD1960163A3042274(Local_204[iParam0 /*18*/], 1920390111) != 1)
			{
				UNK_0xE655C47E46F9A7E4(Local_204[iParam0 /*18*/], bParam4, 0);
			}
		}
		else
		{
			switch (Local_204[iParam0 /*18*/].f_16)
			{
				case 0:
					if (UNK_0xEA6BC48857E0AC4C(bParam7))
					{
						if (!UNK_0xB4ECF989E2C1DAC8(Local_204[iParam0 /*18*/], bParam5, bParam6, 3))
						{
							UNK_0xC6EB89C59F2AF6B8(Local_204[iParam0 /*18*/], bParam5, bParam6, 4f, -4f, -1, 1, false, 0, 0, 0);
						}
					}
					else if (!UNK_0xB4ECF989E2C1DAC8(Local_204[iParam0 /*18*/], bParam5, bParam6, 3))
					{
						UNK_0xC6EB89C59F2AF6B8(Local_204[iParam0 /*18*/], bParam5, bParam6, 4f, -4f, -1, 0, false, 0, 0, 0);
					}
					else if (UNK_0x8CA9406E01C7EE58(Local_204[iParam0 /*18*/], bParam5, bParam6) > 0.99f)
					{
						UNK_0xC6EB89C59F2AF6B8(Local_204[iParam0 /*18*/], bParam5, bParam7, 4f, -4f, -1, 0, false, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16++;
					}
					break;
				case 1:
					if (!UNK_0xB4ECF989E2C1DAC8(Local_204[iParam0 /*18*/], bParam5, bParam7, 3))
					{
						UNK_0xC6EB89C59F2AF6B8(Local_204[iParam0 /*18*/], bParam5, bParam7, 4f, -4f, -1, 0, false, 0, 0, 0);
					}
					else if (UNK_0x8CA9406E01C7EE58(Local_204[iParam0 /*18*/], bParam5, bParam7) > 0.99f)
					{
						UNK_0xC6EB89C59F2AF6B8(Local_204[iParam0 /*18*/], bParam5, bParam6, 4f, -4f, -1, 0, false, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16 = 0;
					}
					break;
			}
		}
	}
}

bool func_62(bool bParam0)
{
	if (bParam0 >= 180f)
	{
		bParam0 = (bParam0 - 360f);
	}
	if (bParam0 < -180f)
	{
		bParam0 = (bParam0 + 360f);
	}
	return bParam0;
}

var func_63(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Local_204[func_68(iParam0) /*18*/];
	}
	return Local_204[func_66(iParam0) /*18*/];
}

void func_64(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if ((iParam0 % 2) == 1)
	{
		Local_131[iParam0 /*18*/] = UNK_0x122AAB0B1D6F55AD(joaat("VADER"), vParam1, bParam4, true, true, false);
	}
	else
	{
		Local_131[iParam0 /*18*/] = UNK_0x122AAB0B1D6F55AD(joaat("CAVALCADE2"), vParam1, bParam4, true, true, false);
		UNK_0xC6A6B4DDD6DC073A(Local_131[iParam0 /*18*/], false);
	}
	UNK_0xB9FD7450C0DAB575(Local_131[iParam0 /*18*/], 1084227584 /* Float: 5f */);
	UNK_0xD5A0214B20BCBAD8(Local_131[iParam0 /*18*/], 1);
	if (bParam5)
	{
		if (!UNK_0xC844350D5D58C99A(func_63(iParam0, 0)))
		{
			func_65(func_68(iParam0), vParam1, bParam4);
		}
		if (!UNK_0xC844350D5D58C99A(func_63(iParam0, 1)))
		{
			func_65(func_66(iParam0), vParam1, bParam4);
		}
		if (!UNK_0xEB6A8945D1AC98A1(func_63(iParam0, 0)) && UNK_0xDF1306B443CD3D15(Local_131[iParam0 /*18*/], 0))
		{
			UNK_0xF821F915BC24D246(func_63(iParam0, 0), Local_131[iParam0 /*18*/], -1);
		}
		if (!UNK_0xEB6A8945D1AC98A1(func_63(iParam0, 1)) && UNK_0xDF1306B443CD3D15(Local_131[iParam0 /*18*/], 0))
		{
			UNK_0xF821F915BC24D246(func_63(iParam0, 1), Local_131[iParam0 /*18*/], false);
		}
		UNK_0x56FDC9ADE35F7DB0(Local_131[iParam0 /*18*/], true, true, 0);
	}
}

void func_65(int iParam0, vector3 vParam1, bool bParam4)
{
	Local_204[iParam0 /*18*/] = UNK_0x36F2404464202779(26, joaat("A_M_Y_GENSTREET_02"), vParam1, bParam4, 1, true);
	UNK_0xAFF39FB306F8E232(Local_204[iParam0 /*18*/], 1, false);
	UNK_0x11AD11297DC58CC7(Local_204[iParam0 /*18*/], true);
	UNK_0xAFF39FB306F8E232(Local_204[iParam0 /*18*/], 0, true);
	UNK_0x545E1397F38D9D5A(Local_204[iParam0 /*18*/], 3);
	UNK_0x7980D72D61BEF4D5(Local_204[iParam0 /*18*/], true);
	UNK_0xAFF39FB306F8E232(Local_204[iParam0 /*18*/], 17, true);
	UNK_0xBAFED2F6486F771A(Local_204[iParam0 /*18*/], 2, false);
	UNK_0x120A395B0ECB8EA5(Local_204[iParam0 /*18*/], false);
	UNK_0xFADC0A217229F6B5(Local_204[iParam0 /*18*/], true);
	UNK_0x29CD9554726C7577(Local_204[iParam0 /*18*/], 100);
	UNK_0xAA714ADDDC372E0F(Local_204[iParam0 /*18*/], joaat("FIRING_PATTERN_FULL_AUTO"));
	UNK_0x4E885A246A9D983A(Local_204[iParam0 /*18*/], 101, true);
	UNK_0x4E885A246A9D983A(Local_204[iParam0 /*18*/], 185, false);
	UNK_0xD458AC1C1D29C3B4(Local_204[iParam0 /*18*/], 300, false);
	UNK_0x64F9F278AB9DCA2C(Local_204[iParam0 /*18*/], 3, (iParam0 % 2), SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_70)
	{
		UNK_0xE121AE1BBF90E186(Local_204[iParam0 /*18*/], true);
		UNK_0xD458AC1C1D29C3B4(Local_204[iParam0 /*18*/], 500, false);
	}
	UNK_0x26A6B1686E33113F(Local_204[iParam0 /*18*/], 1);
	UNK_0xAFF39FB306F8E232(Local_204[iParam0 /*18*/], 2, true);
	UNK_0xCAF7AE54F764D5AA(Local_204[iParam0 /*18*/], 2f);
	UNK_0x120A395B0ECB8EA5(Local_204[iParam0 /*18*/], false);
	UNK_0xCC095276B3DD380E(Local_204[iParam0 /*18*/], 0);
	Local_204[iParam0 /*18*/].f_2 = UNK_0x7707E48765093646(joaat("PROP_PAP_CAMERA_01"), UNK_0x64430C979F516F7A(Local_204[iParam0 /*18*/], 28422, 0f, 0f, 0f), true, true, false);
	UNK_0x9F528B1B53FBC5D9(Local_204[iParam0 /*18*/].f_2, Local_204[iParam0 /*18*/], UNK_0x4A089F2B762B8D33(Local_204[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (UNK_0xC844350D5D58C99A(Local_204[0 /*18*/].f_2))
	{
		UNK_0x4A4806F9D471E491(Local_204[0 /*18*/].f_2, false, 0);
	}
	Local_204[iParam0 /*18*/].f_17 = UNK_0x7F6DC62EA9922664(Local_204[iParam0 /*18*/]);
}

int func_66(int iParam0)
{
	return iParam0 * 2 + 1;
}

void func_67(int iParam0)
{
	if ((iParam0 % 2) == 1)
	{
		Local_204[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_204[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_68(int iParam0)
{
	return iParam0 * 2;
}

void func_69(int iParam0)
{
	Local_131[iParam0 /*18*/].f_17 = 0;
}

bool func_70()
{
	bool bVar0;
	bool bVar1;

	if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
	{
		bVar0 = false;
		if (func_73())
		{
			if (UNK_0xC844350D5D58C99A(func_72()))
			{
				if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(func_72(), true), vLocal_63) < 5f && UNK_0x9C66D99E63E8E24C(bLocal_91) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (UNK_0xDF1306B443CD3D15(bLocal_91, 0))
		{
			if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_91, 0) && UNK_0xC42A92762C58E1B9(bLocal_86, bLocal_91, 0))
			{
				fLocal_570 = (fLocal_570 + UNK_0x6117725E0134737F());
			}
			else if (fLocal_570 > 0f)
			{
				fLocal_570 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_569 = (fLocal_569 + UNK_0x6117725E0134737F());
		}
		else if (fLocal_569 > 0f)
		{
			fLocal_569 = 0f;
		}
		if (fLocal_569 > 30f)
		{
			bVar1 = true;
		}
		if (bLocal_71)
		{
			if (!UNK_0x82CCEAB29E9451DD(bLocal_86, bLocal_91))
			{
				if (UNK_0x869EFD0BC0868856(bLocal_86))
				{
					bVar1 = true;
				}
				bLocal_71 = false;
			}
		}
		if (!bLocal_71)
		{
			if (UNK_0x82CCEAB29E9451DD(bLocal_86, bLocal_91))
			{
				bLocal_71 = true;
			}
		}
		if (fLocal_570 > 30f)
		{
			bVar1 = true;
		}
		if (!UNK_0xDF1306B443CD3D15(bLocal_91, 0) && (!bLocal_368 || iLocal_47 == 1))
		{
			bVar1 = true;
		}
		if (SYSTEM::VDIST(vLocal_63, vLocal_60) > 30f)
		{
			bVar1 = true;
		}
		if (((UNK_0xDF1306B443CD3D15(bLocal_91, 0) && func_71(bLocal_91)) && (!bLocal_368 || iLocal_47 == 1)) && SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bLocal_86, true), vLocal_56) > 15f)
		{
			bVar1 = true;
		}
		if (UNK_0xDF1306B443CD3D15(bLocal_91, 0) && UNK_0x70EED0761B82965E(bLocal_91))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (UNK_0x09AC81E49EA267F7(false, 2) == 1)
			{
				sLocal_371 = "REPAP_GUP";
			}
			else
			{
				sLocal_371 = "REPAP_GUP2";
			}
			return true;
		}
	}
	return false;
}

bool func_71(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (((UNK_0x7B5606C651AB51B5(bParam0, 0, 7000) || UNK_0x7B5606C651AB51B5(bParam0, 3, 30000)) || UNK_0x7B5606C651AB51B5(bParam0, 2, 30000)) || UNK_0x7B5606C651AB51B5(bParam0, 1, 40000))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_72()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if ((UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/]) && !UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/])) && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
		{
			if (SYSTEM::VDIST2(vLocal_63, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(vLocal_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_204[iVar1 /*18*/];
	}
	return false;
}

bool func_73()
{
	if (UNK_0xDF1306B443CD3D15(bLocal_91, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
		{
			if (UNK_0xC42A92762C58E1B9(bLocal_86, bLocal_91, 0) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_91, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_74()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (func_75(Local_204[iVar0 /*18*/], 0, 0))
		{
			return true;
		}
		if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/]))
		{
			if (UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/]) || UNK_0x437347B10A200C4B(Local_204[iVar0 /*18*/], 0))
			{
				if (iLocal_386[iVar0] > 50)
				{
					iLocal_349++;
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_75(bool bParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
		if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 7))
		{
			UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (UNK_0xD3DCEC81D13AAFB1(vVar0, 5f, true))
			{
				return true;
			}
		}
		if (SYSTEM::VDIST2(vVar0, vLocal_60) < 400f)
		{
			if (!bParam2)
			{
				if ((UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) && !UNK_0x52AE17073D025311(UNK_0x16F2683693E537C9())) && UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
				{
					return true;
				}
			}
			if ((iVar3 == joaat("WEAPON_PETROLCAN") && UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9())) && SYSTEM::VDIST2(vLocal_60, vVar0) < 9f)
			{
				return true;
			}
			if (((UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0)) && (func_76(vLocal_60, bParam0) && SYSTEM::VDIST2(vLocal_60, UNK_0x68F4C0EC296D3901(bParam0, true)) < 100f)) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
			{
				return true;
			}
			if (iLocal_385 > 150)
			{
				return true;
			}
		}
		if (UNK_0x8ADFEA7B4409B2F8(UNK_0x64430C979F516F7A(bParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return true;
		}
	}
	else if (UNK_0xC844350D5D58C99A(bParam0) && bParam1)
	{
		return true;
	}
	return false;
}

bool func_76(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	vVar0 = { UNK_0x68F4C0EC296D3901(bParam3, true) };
	vVar3 = { UNK_0x68E4ADDDDCD7BDDE(bParam3, 0f, 1f, 0f) - vVar0 };
	vVar6 = { vParam0 - vVar0 };
	fVar9 = func_77(vVar3, vVar6);
	if (fVar9 > 0.5f)
	{
		return true;
	}
	return false;
}

float func_77(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_78()
{
	if (iLocal_47 != 11)
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_362))
		{
			UNK_0x142CC44DB769B57E(&iLocal_362);
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_363))
		{
			UNK_0x142CC44DB769B57E(&iLocal_363);
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_360))
		{
			UNK_0x142CC44DB769B57E(&iLocal_360);
		}
		iLocal_48 = iLocal_47;
		iLocal_47 = 11;
	}
	else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
	{
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) < 3)
		{
			if (!func_81())
			{
				func_79("REPAP_COP1");
			}
		}
		else
		{
			func_189(5);
		}
	}
	else if (func_5(&Local_395, cLocal_372, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_47 = iLocal_48;
	}
}

void func_79(char* sParam0)
{
	if ((UNK_0x1C0640BA9A7327B3() - iLocal_667) > 5000)
	{
		if (!func_80())
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_667 = UNK_0x1C0640BA9A7327B3();
			}
		}
	}
}

bool func_80()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_81()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_86) && SYSTEM::VDIST2(vLocal_60, vLocal_63) < 400f)
	{
		if (!bLocal_350 && (UNK_0x1C0640BA9A7327B3() - iLocal_352) > 5000)
		{
			if (iLocal_82 > 10)
			{
				bLocal_350 = true;
				iLocal_82 = 0;
			}
		}
		if ((!bLocal_355 && !bLocal_350) && (UNK_0x1C0640BA9A7327B3() - iLocal_356) > 4000)
		{
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) && UNK_0x168558745A6AC21E(UNK_0x16F2683693E537C9()))
			{
				if (iLocal_357 > 2)
				{
					if (!Global_3 && !bLocal_70)
					{
						func_189(5);
					}
				}
				else
				{
					bLocal_355 = true;
					iLocal_357++;
				}
			}
		}
		if (((!bLocal_353 && !bLocal_350) && !bLocal_355) && (UNK_0x1C0640BA9A7327B3() - iLocal_354) > 15000)
		{
			if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bLocal_353 = true;
			}
		}
		if (bLocal_350)
		{
			if (bLocal_351)
			{
				if (func_5(&Local_395, cLocal_372, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_352 = UNK_0x1C0640BA9A7327B3();
					bLocal_350 = false;
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_352 = UNK_0x1C0640BA9A7327B3();
				bLocal_350 = false;
				bLocal_351 = true;
			}
		}
		if (bLocal_355)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_356 = UNK_0x1C0640BA9A7327B3();
				bLocal_355 = false;
			}
		}
		if (bLocal_353)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_354 = UNK_0x1C0640BA9A7327B3();
				bLocal_353 = false;
			}
		}
	}
	return ((bLocal_353 || bLocal_355) || bLocal_350);
}

void func_82()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
	{
		UNK_0xFADC0A217229F6B5(bLocal_86, true);
		UNK_0x0E2400AB9174FA81(255, bLocal_69, joaat("PLAYER"));
		if (!Global_3 && !bLocal_70)
		{
			UNK_0x4E885A246A9D983A(bLocal_86, 317, true);
			UNK_0x11AD11297DC58CC7(bLocal_86, false);
		}
	}
	func_86(-1, 0);
	func_83();
	UNK_0x63D66B3917B1F596(62);
	func_282();
}

void func_83()
{
	func_84();
}

int func_84()
{
	if (func_85(0))
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

bool func_85(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_86(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_103(iParam0))
	{
		func_102(iParam0, bParam1);
		if (!func_101(51))
		{
			func_97("RE_REWARD", 1, 0, 4000, 10000, func_100(), 0, 138, 0);
			func_96(51);
		}
		if (func_95(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_94(iParam0, bParam1) != 322)
		{
			func_88(func_94(iParam0, bParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111626 = bParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_87(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_87(7);
			}
			else
			{
				func_87(1);
			}
		}
	}
}

void func_87(int iParam0)
{
	Global_111624 = iParam0;
}

void func_88(int iParam0, var uParam1, var uParam2)
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
		func_92((891 + iParam0), 1, -1, 1);
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
		func_89();
	}
}

void func_89()
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
		func_91(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_90() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_84();
				}
			}
		}
	}
}

int func_90()
{
	return Global_30768;
}

int func_91(int iParam0, bool bParam1)
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

int func_92(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_93();
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

int func_93()
{
	return Global_1312745;
}

int func_94(int iParam0, bool bParam1)
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

bool func_95(int iParam0)
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

void func_96(int iParam0)
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

void func_97(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_98(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_98(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
		func_99();
	}
}

void func_99()
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

int func_100()
{
	func_25();
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

bool func_101(int iParam0)
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

void func_102(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_111638.f_24990.f_8[iParam0]), bParam1);
}

int func_103(int iParam0)
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

int func_104()
{
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, UNK_0xBB0808A181D4745C(), 64);
	iVar16 = func_105(Var0);
	return iVar16;
}

int func_105(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

bool func_106()
{
	if (Global_31006)
	{
		func_87(4);
		return true;
	}
	return false;
}

void func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_360))
	{
		UNK_0x142CC44DB769B57E(&iLocal_360);
	}
	switch (iLocal_369)
	{
		case 0:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
			{
				UNK_0xF3268524E9BE6D6E(bLocal_86, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_204)
			{
				if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/]))
				{
					if (UNK_0x03068588A1FCED1A(Local_204[iVar0 /*18*/]) && SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(Local_204[iVar0 /*18*/], true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > 900f)
					{
						if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/].f_2))
						{
							UNK_0xF690C84DADBB3551(&(Local_204[iVar0 /*18*/].f_2));
						}
						UNK_0xEBA53F35D0085654(&(Local_204[iVar0 /*18*/]));
					}
				}
				if (UNK_0xE4EDC4B0E92C078B(Local_204[iVar0 /*18*/].f_1))
				{
					UNK_0x142CC44DB769B57E(&(Local_204[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_131)
			{
				if (UNK_0xC844350D5D58C99A(Local_131[iVar0 /*18*/]))
				{
					if (UNK_0x03068588A1FCED1A(Local_131[iVar0 /*18*/]) && SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(Local_131[iVar0 /*18*/], true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > 900f)
					{
						UNK_0xA954465BA6FDEFE2(&(Local_131[iVar0 /*18*/]));
					}
				}
				if (UNK_0xE4EDC4B0E92C078B(Local_131[iVar0 /*18*/].f_1))
				{
					UNK_0x142CC44DB769B57E(&(Local_131[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			SYSTEM::SETTIMERA(0);
			bLocal_673 = false;
			iLocal_369++;
			break;
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_204)
			{
				if ((UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/]) && !UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/])) && !UNK_0x437347B10A200C4B(Local_204[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_52(UNK_0x16F2683693E537C9(), iVar0);
					if (UNK_0x03068588A1FCED1A(Local_204[iVar0 /*18*/]) && SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(Local_204[iVar0 /*18*/], true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > 2500f)
					{
						if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/].f_2))
						{
							UNK_0xF690C84DADBB3551(&(Local_204[iVar0 /*18*/].f_2));
						}
						UNK_0xEBA53F35D0085654(&(Local_204[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!bLocal_673)
			{
				if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(func_72(), true)) < 100f)
				{
					iVar2 = UNK_0x09AC81E49EA267F7(false, 3);
					if (func_24() == 1)
					{
						func_23(&Local_395, 6);
						func_23(&Local_395, 7);
						func_23(&Local_395, 8);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_395, 6, func_72(), "PAP1ESCAPE", 0, 1);
								if (UNK_0xC844350D5D58C99A(Local_395[6 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[6 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP1", 4, 0, 0, 0))
									{
										bLocal_673 = true;
									}
								}
								break;
							case 1:
								func_22(&Local_395, 7, func_72(), "PAP2ESCAPE", 0, 1);
								if (UNK_0xC844350D5D58C99A(Local_395[7 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[7 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP2", 4, 0, 0, 0))
									{
										bLocal_673 = true;
									}
								}
								break;
							case 2:
								func_22(&Local_395, 8, func_72(), "PAP3ESCAPE", 0, 1);
								if (UNK_0xC844350D5D58C99A(Local_395[8 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[8 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP3", 4, 0, 0, 0))
									{
										bLocal_673 = true;
									}
								}
								break;
						}
					}
					else if (func_24() == 2)
					{
						func_23(&Local_395, 6);
						func_23(&Local_395, 5);
						iVar2 = UNK_0x09AC81E49EA267F7(false, 3);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_395, 6, func_72(), "PAP1ESCAPE", 0, 1);
								if (UNK_0xC844350D5D58C99A(Local_395[iVar2 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										bLocal_673 = true;
									}
								}
								break;
							case 1:
								func_22(&Local_395, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (UNK_0xC844350D5D58C99A(Local_395[iVar2 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										bLocal_673 = true;
									}
								}
								break;
							case 2:
								func_22(&Local_395, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (UNK_0xC844350D5D58C99A(Local_395[iVar2 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										bLocal_673 = true;
									}
								}
								break;
						}
					}
					else
					{
						func_23(&Local_395, 6);
						func_23(&Local_395, 5);
						iVar2 = UNK_0x09AC81E49EA267F7(false, 3);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_395, 6, func_72(), "PAP1ESCAPE", 0, 1);
								if (UNK_0xC844350D5D58C99A(Local_395[iVar2 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										bLocal_673 = true;
									}
								}
								break;
							case 1:
								func_22(&Local_395, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (UNK_0xC844350D5D58C99A(Local_395[iVar2 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										bLocal_673 = true;
									}
								}
								break;
							case 2:
								func_22(&Local_395, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (UNK_0xC844350D5D58C99A(Local_395[iVar2 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										bLocal_673 = true;
									}
								}
								break;
						}
					}
				}
			}
			if (func_74())
			{
				func_201();
				func_282();
			}
			if (iVar1 == 0)
			{
				func_282();
			}
			break;
	}
}

void func_108(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (!bLocal_672)
	{
		iVar0 = 0;
		while (iVar0 < Local_204)
		{
			if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/]) && !UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/]))
			{
				UNK_0xA3BF0AA5A2608191(Local_204[iVar0 /*18*/]);
				Local_204[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		bLocal_672 = true;
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (UNK_0xE4EDC4B0E92C078B(Local_204[iVar0 /*18*/].f_1))
		{
			UNK_0x142CC44DB769B57E(&(Local_204[iVar0 /*18*/].f_1));
		}
		if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
				{
					if (UNK_0x405E212DDE472467(Local_204[iVar0 /*18*/], 0))
					{
						UNK_0x75CDA8644CD3B5F5(Local_204[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_52(bLocal_86, iVar0);
					}
				}
				else if (UNK_0xD1960163A3042274(Local_204[iVar0 /*18*/], -1146898486) != 1)
				{
					UNK_0x01E4BB5190DF7317(Local_204[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((UNK_0x03068588A1FCED1A(Local_204[iVar0 /*18*/]) && SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(Local_204[iVar0 /*18*/], true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > 400f) && SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(Local_204[iVar0 /*18*/], true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > 400f)
			{
				UNK_0xEBA53F35D0085654(&(Local_204[iVar0 /*18*/]));
				if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/].f_2))
				{
					UNK_0xF690C84DADBB3551(&(Local_204[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131)
	{
		if (UNK_0xC844350D5D58C99A(Local_131[iVar0 /*18*/]))
		{
			if ((UNK_0x03068588A1FCED1A(Local_131[iVar0 /*18*/]) && SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(Local_131[iVar0 /*18*/], true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > 2500f) && func_58(Local_131[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0, 1))
			{
				UNK_0x046C362CF15F1935(&(Local_131[iVar0 /*18*/]));
			}
		}
		if (UNK_0xE4EDC4B0E92C078B(Local_131[iVar0 /*18*/].f_1))
		{
			UNK_0x142CC44DB769B57E(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_86))
	{
		if (UNK_0x03068588A1FCED1A(bLocal_86) && SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_63) > 2500f)
		{
			UNK_0x6DAD7906B73F064D(&bLocal_86);
			func_282();
		}
	}
	if (func_74() || func_75(bLocal_86, 1, 1))
	{
		func_189(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_369)
	{
		case 0:
			if (UNK_0xE4EDC4B0E92C078B(iLocal_360))
			{
				UNK_0x142CC44DB769B57E(&iLocal_360);
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_361))
			{
				UNK_0x142CC44DB769B57E(&iLocal_361);
			}
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
			{
				UNK_0xA3BF0AA5A2608191(bLocal_86);
				UNK_0xCAF7AE54F764D5AA(bLocal_86, 3f);
			}
			func_109();
			if (SYSTEM::VDIST(vLocal_60, vLocal_63) < 30f)
			{
				if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_204)
					{
						if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/]))
						{
							if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/]))
							{
								UNK_0xA3BF0AA5A2608191(Local_204[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_369++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_204)
				{
					if (UNK_0xC844350D5D58C99A(Local_204[iVar0 /*18*/]))
					{
						if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/]))
						{
							UNK_0xA3BF0AA5A2608191(Local_204[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_369++;
			}
			break;
		case 1:
			if (((UNK_0xDF1306B443CD3D15(bLocal_91, 0) && UNK_0xC42A92762C58E1B9(bLocal_86, bLocal_91, 0)) && !bLocal_368) && UNK_0xBBA8A868118C90ED(bLocal_91, -1, 0))
			{
				if (SYSTEM::VDIST(vLocal_63, vLocal_53) < 100f)
				{
					UNK_0xDD353D0E9C789D0E(&iVar2);
					UNK_0x16A6C233289238AA(false, bLocal_91, 0);
					UNK_0xE9362E4D600DD12A(false, bLocal_91, vLocal_53, 20f, 0, joaat("SERRANO"), 786599, 10f, 10f);
					UNK_0x27F3789FF35EEDF1(false, bLocal_91, vLocal_53, 288.7089f, 1, 50f, 0);
					UNK_0x132B85BCE016BCA0(false, bLocal_91, UNK_0x68F4C0EC296D3901(bLocal_91, true), 5, 10f, 262144, 2f, 2f, 1);
					UNK_0x45F014B3D0466974(false, bLocal_91, 0);
					UNK_0x96167B03C5A77156(false, vLocal_56, 1f, -1, 0.25f, 512, bLocal_59);
					UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_SMOKING", 0, 1);
					UNK_0x75ABDC5F81978924(iVar2);
					UNK_0x78ADC381772E3D54(bLocal_86, iVar2);
					UNK_0xF82EA857DA10E0CD(&iVar2);
				}
				else
				{
					UNK_0xDD353D0E9C789D0E(&iVar3);
					UNK_0x16A6C233289238AA(false, bLocal_91, 0);
					UNK_0xE072601B4380E9DF(false, bLocal_91, 15f, 786468);
					UNK_0x75ABDC5F81978924(iVar3);
					UNK_0x78ADC381772E3D54(bLocal_86, iVar3);
					UNK_0xF82EA857DA10E0CD(&iVar3);
				}
				iLocal_369 = 1000;
			}
			else
			{
				if (UNK_0x405E212DDE472467(bLocal_86, 0))
				{
					UNK_0x75CDA8644CD3B5F5(bLocal_86, 0, 0);
				}
				iLocal_369++;
			}
			break;
		case 2:
			if (iVar1 > 0)
			{
				UNK_0xF3268524E9BE6D6E(bLocal_86, UNK_0x16F2683693E537C9(), 3000f, -1, 1, 0);
				iLocal_369 = 1000;
			}
			else
			{
				if (SYSTEM::VDIST(vLocal_63, vLocal_53) < 100f)
				{
					UNK_0xDD353D0E9C789D0E(&iVar4);
					UNK_0x96167B03C5A77156(false, vLocal_56, 1f, -1, 0.25f, 512, bLocal_59);
					UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_SMOKING", 0, 1);
					UNK_0x75ABDC5F81978924(iVar4);
					UNK_0x78ADC381772E3D54(bLocal_86, iVar4);
					UNK_0xF82EA857DA10E0CD(&iVar4);
				}
				else
				{
					UNK_0x01E4BB5190DF7317(bLocal_86, 1193033728, 0);
				}
				iLocal_369 = 1000;
			}
			break;
		case 1000:
			if (iVar1 == 0)
			{
				func_282();
			}
			break;
	}
}

void func_109()
{
	Global_19671 = 0;
	func_110();
}

void func_110()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_111()
{
	func_109();
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_86) && SYSTEM::VDIST2(vLocal_60, vLocal_63) < 900f)
	{
		UNK_0xA3BF0AA5A2608191(bLocal_86);
		if (func_5(&Local_395, cLocal_372, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_201();
			func_189(10);
		}
		UNK_0x6DF7BF67E86AAE86(bLocal_86, -2065892691);
	}
	else
	{
		func_201();
		func_189(10);
	}
}

void func_112()
{
	int iVar0;

	switch (iLocal_369)
	{
		case 0:
			func_148();
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_360))
				{
					iLocal_360 = func_191(bLocal_86, 0, 145);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_363))
				{
					UNK_0x142CC44DB769B57E(&iLocal_363);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_362))
				{
					UNK_0x142CC44DB769B57E(&iLocal_362);
				}
				UNK_0xA3BF0AA5A2608191(bLocal_86);
				UNK_0xDD353D0E9C789D0E(&iVar0);
				UNK_0x45F014B3D0466974(false, bLocal_91, 0);
				UNK_0x96167B03C5A77156(false, vLocal_56, 1f, 30000, 0.25f, 512, bLocal_59);
				UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_SMOKING", 0, 1);
				UNK_0x75ABDC5F81978924(iVar0);
				UNK_0x78ADC381772E3D54(bLocal_86, iVar0);
				UNK_0xF82EA857DA10E0CD(&iVar0);
				if (UNK_0x16102BEDC7435774(bLocal_86))
				{
					UNK_0x0A94A109271BE75A(bLocal_86);
				}
				func_109();
				iLocal_369++;
			}
			break;
		case 1:
			if (!func_80() && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
			{
				if (UNK_0x5A91F08DF773C39D(bLocal_86, vLocal_56, 3f, 3f, 3f, false, true, 0) && UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_56, 5f, 5f, 5f, false, true, 0))
				{
					iLocal_369++;
				}
			}
			break;
		case 2:
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
			{
				func_147(0);
				if (func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
				{
					func_114(func_24(), 1, 150, 0, 1);
					iLocal_369++;
				}
			}
			break;
		case 3:
			if (!func_80() && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_369++;
			}
			break;
		case 4:
			if (SYSTEM::TIMERA() > 2000)
			{
				if (func_113())
				{
					func_82();
				}
			}
			break;
	}
}

bool func_113()
{
	return true;
}

void func_114(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_146(iParam0) == 3)
	{
		return;
	}
	if (func_146(iParam0) == 4)
	{
		return;
	}
	func_115(func_146(iParam0), 1, iParam1, iParam2, 0);
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

int func_115(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_145();
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
					func_144(99, 1);
					func_143(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_143(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_143(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_129(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_124(5))
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
							func_143(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_143(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_143(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_124(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_143(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_143(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_143(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_143(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_143(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_143(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_143(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_143(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_143(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_143(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_143(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_143(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_143(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_143(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_143(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_124(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_143(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_143(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_143(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_143(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_143(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_143(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_123(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_144(95, iParam3);
					break;
				case 1:
					func_144(97, iParam3);
					break;
				case 2:
					func_144(96, iParam3);
					break;
			}
			func_144(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_118(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_118(bVar1);
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
					func_143(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_143(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_143(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_117(iParam0);
	if (Global_41431 == 15)
	{
		func_116(0);
	}
	return 1;
}

void func_116(bool bParam0)
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

void func_117(int iParam0)
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

void func_118(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_92(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_92(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_92(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_92(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_121(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_121(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_121(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_121(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_121(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_121(8274, 0, -1, 1, 0);
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
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_120() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_120() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_119(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_119(bool bParam0)
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

int func_120()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_121(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_122(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_122(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_93();
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

void func_123(int iParam0)
{
	func_144(93, iParam0);
	func_144(29, iParam0);
	func_144(30, iParam0);
}

bool func_124(bool bParam0)
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
		return func_126(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_126(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_126(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_126(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_125(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_125(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_125(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_125(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_125(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_125(8274, -1, 0);
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
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_120() /*10930*/].f_6174.f_10, bParam0);
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_122(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_126(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_93();
	}
	iVar1 = func_128(iParam0, bParam1);
	iVar2 = func_127(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_127(int iParam0)
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

int func_128(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_93();
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

int func_129(bool bParam0)
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
		func_91(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_130(27, 1);
	return 1;
}

int func_130(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_131(iParam0, iParam1);
}

int func_131(int iParam0, int iParam1)
{
	if (func_17(14) && !func_142(iParam0))
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
	if (func_141(&Global_4270065))
	{
		if (func_139(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_132(&Global_4270065, iParam0))
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

bool func_132(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_17(14) && !func_142(iParam1))
	{
		return false;
	}
	if (func_139(uParam0, iParam1))
	{
		return false;
	}
	if (func_138(uParam0) < 0f)
	{
		func_137(uParam0, 0);
	}
	func_135(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_133(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_133(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_142(iParam1))
	{
		return 0;
	}
	if (func_139(uParam0, iParam1))
	{
		return 0;
	}
	if (func_138(uParam0) < 0f)
	{
		func_137(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_134(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_134(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_135(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_136(uParam0, iVar0);
		iVar0++;
	}
	func_137(uParam0, (Global_4270064 - 0.5f));
}

void func_136(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_137(var uParam0, float fParam1)
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

float func_138(var uParam0)
{
	return uParam0->f_80;
}

bool func_139(var uParam0, int iParam1)
{
	return func_140(uParam0, iParam1) != -1;
}

int func_140(var uParam0, int iParam1)
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

bool func_141(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_142(int iParam0)
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

void func_143(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_144(int iParam0, int iParam1)
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

void func_145()
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

int func_146(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

void func_147(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
	{
		if (iLocal_621 > 1)
		{
			if (!UNK_0x7069CC4DE1EA3FAA(bLocal_86, UNK_0x16F2683693E537C9(), 60f))
			{
				iLocal_621 = 0;
				iLocal_622 = 0;
			}
		}
		switch (iLocal_621)
		{
			case 0:
				UNK_0xA3BF0AA5A2608191(bLocal_86);
				UNK_0x0C8C0C840C2D1AD2(bLocal_86, UNK_0x16F2683693E537C9(), -1, 16, 2);
				UNK_0xDD353D0E9C789D0E(&iLocal_620);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 16, 2);
				UNK_0x75ABDC5F81978924(iLocal_620);
				UNK_0x78ADC381772E3D54(bLocal_86, iLocal_620);
				UNK_0xF82EA857DA10E0CD(&iLocal_620);
				iLocal_621++;
				break;
			case 1:
				if (UNK_0xD1960163A3042274(bLocal_86, 242628503) != 1)
				{
					iLocal_621++;
				}
				break;
			case 2:
				if (bParam0)
				{
					switch (iLocal_622)
					{
						case 0:
							if (!UNK_0xB4ECF989E2C1DAC8(bLocal_86, "random@paparazzi@wait", "wait_a", 3))
							{
								UNK_0xC6EB89C59F2AF6B8(bLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, false, 0, 0, 0);
							}
							else if (UNK_0x8CA9406E01C7EE58(bLocal_86, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								UNK_0xC6EB89C59F2AF6B8(bLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, false, 0, 0, 0);
								iLocal_622++;
							}
							break;
						case 1:
							if (!UNK_0xB4ECF989E2C1DAC8(bLocal_86, "random@paparazzi@wait", "wait_b", 3))
							{
								UNK_0xC6EB89C59F2AF6B8(bLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, false, 0, 0, 0);
							}
							else if (UNK_0x8CA9406E01C7EE58(bLocal_86, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								UNK_0xC6EB89C59F2AF6B8(bLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, false, 0, 0, 0);
								iLocal_622++;
							}
							break;
						case 2:
							if (!UNK_0xB4ECF989E2C1DAC8(bLocal_86, "random@paparazzi@wait", "wait_c", 3))
							{
								UNK_0xC6EB89C59F2AF6B8(bLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, false, 0, 0, 0);
							}
							else if (UNK_0x8CA9406E01C7EE58(bLocal_86, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								UNK_0xC6EB89C59F2AF6B8(bLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, false, 0, 0, 0);
								iLocal_622 = 0;
							}
							break;
					}
				}
				break;
		}
	}
}

void func_148()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_364))
	{
		UNK_0x142CC44DB769B57E(&iLocal_364);
	}
}

void func_149()
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bLocal_91, 0))
	{
		switch (iLocal_369)
		{
			case 0:
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_86) && UNK_0xDF1306B443CD3D15(bLocal_91, 0))
				{
					func_148();
					func_153(1, 1, 0, 0, 0, 0);
					if (UNK_0xE4EDC4B0E92C078B(iLocal_362))
					{
						UNK_0x142CC44DB769B57E(&iLocal_362);
					}
					if (UNK_0xE4EDC4B0E92C078B(iLocal_360))
					{
						UNK_0x142CC44DB769B57E(&iLocal_360);
					}
					if (UNK_0xE4EDC4B0E92C078B(iLocal_361))
					{
						UNK_0x142CC44DB769B57E(&iLocal_361);
					}
					if (UNK_0x16102BEDC7435774(bLocal_86))
					{
						UNK_0x0A94A109271BE75A(bLocal_86);
					}
					func_151();
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
					{
						UNK_0xDBE4EC9C88839074(bLocal_86, UNK_0x68E4ADDDDCD7BDDE(bLocal_91, -10f, 5f, 0f), -1, 16, 4);
					}
					UNK_0xDBE4EC9C88839074(UNK_0x16F2683693E537C9(), UNK_0x68E4ADDDDCD7BDDE(bLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 1280);
					if ((bLocal_368 || Global_3) || bLocal_70)
					{
						while (!func_150(&Local_395, cLocal_372, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					else
					{
						while (!func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					func_114(func_24(), 1, 750, 0, 1);
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
					{
						UNK_0xDBE4EC9C88839074(bLocal_86, UNK_0x68E4ADDDDCD7BDDE(bLocal_91, -10f, 5f, 0f), -1, 16, 4);
						UNK_0xF895E10BF4C72645(bLocal_86, 0, 0);
					}
					UNK_0xDBE4EC9C88839074(UNK_0x16F2683693E537C9(), UNK_0x68E4ADDDDCD7BDDE(bLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_369++;
				}
				break;
			case 1:
				if (!func_80() && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
				{
					UNK_0xDD353D0E9C789D0E(&iVar0);
					UNK_0x45F014B3D0466974(false, bLocal_91, 0);
					UNK_0x96167B03C5A77156(false, vLocal_56, 1f, 30000, 0.25f, 512, bLocal_59);
					UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_SMOKING", 0, 1);
					UNK_0x75ABDC5F81978924(iVar0);
					UNK_0x78ADC381772E3D54(bLocal_86, iVar0);
					UNK_0xF82EA857DA10E0CD(&iVar0);
					iLocal_369++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			case 2:
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_86) && UNK_0xDF1306B443CD3D15(bLocal_91, 0))
				{
					if (!UNK_0xC42A92762C58E1B9(bLocal_86, bLocal_91, 0))
					{
						SYSTEM::SETTIMERA(0);
						if (bLocal_368)
						{
							UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
							func_153(0, 1, 0, 0, 0, 0);
							iLocal_369 = 5;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
				break;
			case 3:
				if ((!UNK_0xEB6A8945D1AC98A1(bLocal_86) && UNK_0xDF1306B443CD3D15(bLocal_91, 0)) && SYSTEM::TIMERA() > 1000)
				{
					UNK_0x45F014B3D0466974(UNK_0x16F2683693E537C9(), bLocal_91, 0);
					UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_91, 10000, 0, 3);
					iLocal_369++;
				}
				break;
			case 4:
				if (UNK_0xDF1306B443CD3D15(bLocal_91, 0) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_91, 0))
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
					func_153(0, 1, 0, 0, 0, 0);
					UNK_0x71EDC33E5A423750(bLocal_91, 2);
					SYSTEM::SETTIMERA(0);
					iLocal_369++;
				}
				break;
			case 5:
				if (SYSTEM::TIMERA() > 1000)
				{
					if (func_113())
					{
						if (!bLocal_368)
						{
							if (!func_101(19))
							{
								func_97("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_96(19);
							}
						}
						func_82();
					}
				}
				break;
		}
	}
}

bool func_150(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_6(sParam2, iParam4, 0);
}

void func_151()
{
	Global_19671 = 0;
	func_152();
}

void func_152()
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

void func_153(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_160(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_14())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_159(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_160(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_159(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_157(UNK_0xD803B885F5E47A62())) && !func_155(UNK_0xD803B885F5E47A62(), 0)) && !func_154()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_157(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_154()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_155(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_156(-1, 0) == 8;
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

int func_156(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_93();
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

bool func_157(bool bParam0)
{
	if (func_155(bParam0, 0))
	{
		return true;
	}
	if (func_158())
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

bool func_158()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_159(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_160(int iParam0)
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

void func_161()
{
	if (Global_3 || bLocal_70)
	{
		UNK_0xD60411959D5D930B(0.7f);
	}
	if (bLocal_368 && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
	{
		if (!func_182(bLocal_86))
		{
			if (!UNK_0xE4EDC4B0E92C078B(iLocal_360))
			{
				iLocal_360 = func_191(bLocal_86, 0, 145);
			}
		}
		else
		{
			if (func_73())
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_362))
				{
					iLocal_362 = func_56(vLocal_53, 1);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_363))
				{
					UNK_0x142CC44DB769B57E(&iLocal_363);
				}
			}
			else
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_363))
				{
					iLocal_363 = func_56(vLocal_56, 1);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_362))
				{
					UNK_0x142CC44DB769B57E(&iLocal_362);
				}
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_360))
			{
				UNK_0x142CC44DB769B57E(&iLocal_360);
			}
		}
		if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_91, 0))
		{
			if ((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0)) && func_181(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
			{
				bLocal_91 = false;
				bLocal_91 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				UNK_0x73270B3C9CC833FD(bLocal_91, true, 1);
				UNK_0x71EDC33E5A423750(bLocal_91, 1);
				UNK_0x9A8BCD43DBDDCDCA(bLocal_91, 0, 0);
			}
		}
		if (UNK_0xE4EDC4B0E92C078B(iLocal_363) && !UNK_0x405E212DDE472467(bLocal_86, 0))
		{
			if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vLocal_56, 15f, 15f, 15f, false, true, 0) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, true, true, 0))
			{
				func_189(4);
			}
		}
		else if (iLocal_369 != 100)
		{
			if (func_73() && func_180(1, 1, 1))
			{
				if (UNK_0x3D1053F9EB43B7AD(bLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_369 = 100;
				}
			}
			else if (!UNK_0xC42A92762C58E1B9(bLocal_86, bLocal_91, 0))
			{
				if (UNK_0xD1960163A3042274(bLocal_86, -1794415470) != 1)
				{
					UNK_0x5B1D360B9C6F0A09(bLocal_86, bLocal_91, -1, func_179(bLocal_91), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_369 != 100)
		{
			if (func_73() && func_180(1, 1, 1))
			{
				if (UNK_0x3D1053F9EB43B7AD(bLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_369 = 100;
				}
			}
		}
		func_176(1);
	}
	switch (iLocal_369)
	{
		case 0:
			if (func_73())
			{
				if (UNK_0xB4ECF989E2C1DAC8(bLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || UNK_0xB4ECF989E2C1DAC8(bLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					UNK_0xA3BF0AA5A2608191(bLocal_86);
				}
				if (func_5(&Local_395, cLocal_372, "REPAP_HM", 4, 0, 0, 0))
				{
					UNK_0x51B096AAC60548C1(0.5f);
					iLocal_369++;
				}
				if (!func_175())
				{
					func_170();
				}
			}
			break;
		case 1:
			if (!func_81())
			{
				if (func_73())
				{
					if (!func_80())
					{
						if (func_24() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_24() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		case 2:
			if (!func_81())
			{
				if (func_73())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						if (Global_3 || bLocal_70)
						{
							iLocal_369 = 99;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		case 3:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_166("REPAP_HOME1", (func_169() && !func_81())))
				{
					iLocal_369++;
				}
			}
			break;
		case 4:
			if (func_24() == 0)
			{
				if (func_166("REPAP_HOME1M", (func_169() && !func_81())))
				{
					iLocal_369++;
				}
			}
			else if (func_24() == 1)
			{
				if (func_166("REPAP_HOME1F", (func_169() && !func_81())))
				{
					iLocal_369++;
				}
			}
			else if (func_166("REPAP_HOME1T", (func_169() && !func_81())))
			{
				iLocal_369++;
			}
			break;
		case 5:
			if (func_166("REPAP_HOME1L", (func_169() && !func_81())))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_369++;
			}
			break;
		case 6:
			if (!func_81())
			{
				if (SYSTEM::TIMERA() > 7000)
				{
					if (func_169())
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		case 7:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_HOME2"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		case 8:
			if (func_166("REPAP_HOME2L", (func_169() && !func_81())))
			{
				iLocal_369++;
			}
			break;
		case 9:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_RESP2"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_369++;
					}
				}
			}
			break;
		case 10:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_166("REPAP_HOME3", (func_169() && !func_81())))
				{
					iLocal_369++;
				}
			}
			break;
		case 11:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_HOME3"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_369++;
					}
				}
			}
			break;
		case 12:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_166("REPAP_HOME4", (func_169() && !func_81())))
				{
					iLocal_369++;
				}
			}
			break;
		case 13:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_HOME4"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_369++;
					}
				}
			}
			break;
		case 14:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_166("REPAP_NOBAN", (func_169() && !func_81())))
				{
					iLocal_369++;
				}
			}
			break;
		case 15:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_NOBAN"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		case 16:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_369++;
					}
				}
			}
			break;
		case 17:
			func_81();
			break;
		case 100:
			if (func_163(bLocal_91, 5f, 5, 1056964608 /* Float: 0.5f */, 0, 1, 0))
			{
				func_190("");
				func_189(3);
			}
			break;
	}
	if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
	{
		func_78();
	}
	if (func_24() == 2)
	{
		if ((func_162() && !func_175()) && iLocal_47 != 8)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
			{
				if (UNK_0x5A91F08DF773C39D(bLocal_86, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, false, true, 0))
				{
					if (!UNK_0xBFDE4EE64C4BF2D6(bLocal_86, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62())))
					{
						UNK_0xE25C96A9C36BE5D2(bLocal_86, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62()));
					}
					func_109();
					iLocal_47 = 8;
				}
			}
		}
	}
}

bool func_162()
{
	return Global_31005;
}

bool func_163(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_164(bParam0);
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

void func_164(bool bParam0)
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

bool func_165(char* sParam0)
{
	vector3 vVar0[24];

	StringConCat(&cVar0, sParam0, 24);
	if (func_24() == 0)
	{
		StringConCat(&cVar0, "M", 24);
	}
	else if (func_24() == 1)
	{
		StringConCat(&cVar0, "F", 24);
	}
	else
	{
		StringConCat(&cVar0, "T", 24);
	}
	if (func_5(&Local_395, cLocal_372, &cVar0, 4, 0, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_166(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!bLocal_72)
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				bLocal_72 = true;
				bLocal_73 = false;
			}
		}
		else if (bLocal_73)
		{
			if (func_168(&Local_395, cLocal_372, sParam0, &cLocal_75, 4, 0, 0))
			{
				bLocal_73 = false;
			}
		}
		if ((bLocal_72 && !bLocal_73) && bParam1)
		{
			if (iLocal_81 == -1)
			{
				if (!func_80())
				{
					iLocal_81 = UNK_0x1C0640BA9A7327B3();
				}
			}
			else if ((UNK_0x1C0640BA9A7327B3() - iLocal_81) > 500)
			{
				iLocal_81 = -1;
				bLocal_72 = false;
				bLocal_73 = false;
				return true;
			}
		}
	}
	else if (bLocal_72 && !bLocal_73)
	{
		cLocal_75 = { func_167() };
		func_151();
		bLocal_73 = true;
	}
	return false;
}

struct<6> func_167()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = UNK_0x40EFDB96B3112BA7();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (UNK_0xEF07223F00EBE9C9(&(Global_19673[iVar7 /*6*/])))
			{
				return Global_19673[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (UNK_0xEF07223F00EBE9C9(&(Global_19673[iVar8 /*6*/])))
					{
						return Global_19673[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_168(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_6(sParam2, iParam4, 0);
}

bool func_169()
{
	if (bLocal_368)
	{
		if (UNK_0xDF1306B443CD3D15(bLocal_91, 0))
		{
			if (func_73())
			{
				return true;
			}
		}
		if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x405E212DDE472467(bLocal_86, 0))
		{
			if (SYSTEM::VDIST2(vLocal_60, vLocal_63) < 400f)
			{
				return true;
			}
		}
	}
	else
	{
		return func_73();
	}
	return false;
}

void func_170()
{
	if (func_24() == 2)
	{
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_364))
		{
			func_173();
			iLocal_364 = func_172(-1034.6f, 4918.6f, 205.9f, 0);
			UNK_0xBC8E0A7390523199(iLocal_364, 269);
			func_171();
		}
	}
}

void func_171()
{
	if (!func_175())
	{
		if (func_24() == 2)
		{
			Global_31005 = 1;
		}
	}
}

int func_172(vector3 vParam0, int iParam3)
{
	return func_56(vParam0, iParam3);
}

void func_173()
{
	if (func_24() == 2)
	{
		if (!Global_31007)
		{
			func_174("CULT_BLIP_HELP", -1);
			Global_31007 = 1;
		}
	}
}

void func_174(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_175()
{
	if (Global_111638.f_24990.f_5 == 1000)
	{
		return true;
	}
	return false;
}

void func_176(bool bParam0)
{
	if (UNK_0xDF1306B443CD3D15(bLocal_91, 0) && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
	{
		if (func_73())
		{
			if (bParam0)
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_362))
				{
					iLocal_362 = func_56(vLocal_53, 1);
				}
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_360))
			{
				UNK_0x142CC44DB769B57E(&iLocal_360);
			}
			if (UNK_0xE4EDC4B0E92C078B(iLocal_361))
			{
				UNK_0x142CC44DB769B57E(&iLocal_361);
			}
		}
		else
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_362))
			{
				UNK_0x142CC44DB769B57E(&iLocal_362);
			}
			if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_91, 0))
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_361))
				{
					iLocal_361 = func_177(bLocal_91, 0, 0);
				}
			}
			if (!UNK_0xC42A92762C58E1B9(bLocal_86, bLocal_91, 0))
			{
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_360))
				{
					iLocal_360 = func_191(bLocal_86, 0, 145);
				}
			}
			else if (UNK_0xE4EDC4B0E92C078B(iLocal_360))
			{
				UNK_0x142CC44DB769B57E(&iLocal_360);
			}
		}
	}
}

int func_177(bool bParam0, bool bParam1, bool bParam2)
{
	return func_178(bParam0, !bParam1, bParam2);
}

int func_178(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_57(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_57(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_57(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

bool func_179(bool bParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = -1;
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (UNK_0xD6DF381716822EFE(bParam0) - 1))
		{
			if (bVar0 == -1)
			{
				bVar2 = iVar1;
				if (UNK_0xBBA8A868118C90ED(bParam0, bVar2, 0))
				{
					bVar0 = bVar2;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

bool func_180(bool bParam0, bool bParam1, bool bParam2)
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

bool func_181(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0xBBA8A868118C90ED(bParam0, -1, 0))
		{
			return true;
		}
		if (UNK_0xBBA8A868118C90ED(bParam0, false, 0))
		{
			return true;
		}
		if (UNK_0xBBA8A868118C90ED(bParam0, true, 0))
		{
			return true;
		}
		if (UNK_0xBBA8A868118C90ED(bParam0, 2, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_182(bool bParam0)
{
	if (UNK_0xBFDE4EE64C4BF2D6(bParam0, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62())))
	{
		if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			UNK_0x0A94A109271BE75A(bParam0);
		}
		return true;
	}
	else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, Global_19, 0, 1, 0))
	{
		UNK_0xE25C96A9C36BE5D2(bParam0, UNK_0x5D08BBCCCC2F43A4(UNK_0xD803B885F5E47A62()));
	}
	return false;
}

void func_183()
{
	if (!UNK_0xEB6A8945D1AC98A1(bLocal_86) && UNK_0xDF1306B443CD3D15(bLocal_91, 0))
	{
		if (!UNK_0xC42A92762C58E1B9(bLocal_86, bLocal_91, 1))
		{
			if (UNK_0xD1960163A3042274(bLocal_86, -1794415470) != 1)
			{
				UNK_0x5B1D360B9C6F0A09(bLocal_86, bLocal_91, -1, func_179(bLocal_91), 2f, 8388608, 0);
			}
		}
		if ((UNK_0xC844350D5D58C99A(func_72()) && SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bLocal_86, true), UNK_0x68F4C0EC296D3901(func_72(), true)) < 100f) && (UNK_0x9C66D99E63E8E24C(bLocal_91) < 5f || !UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bLocal_91))))
		{
			if (bLocal_368)
			{
				if (!UNK_0xB4ECF989E2C1DAC8(bLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && UNK_0x82CCEAB29E9451DD(bLocal_86, bLocal_91))
				{
					UNK_0xC6EB89C59F2AF6B8(bLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, false, 0, 0, 0);
				}
			}
			else if (!UNK_0xB4ECF989E2C1DAC8(bLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && UNK_0x82CCEAB29E9451DD(bLocal_86, bLocal_91))
			{
				UNK_0xC6EB89C59F2AF6B8(bLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, false, 0, 0, 0);
			}
		}
		else if ((UNK_0xB4ECF989E2C1DAC8(bLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || UNK_0xB4ECF989E2C1DAC8(bLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && UNK_0x82CCEAB29E9451DD(bLocal_86, bLocal_91))
		{
			UNK_0xA3BF0AA5A2608191(bLocal_86);
		}
		switch (iLocal_369)
		{
			case 0:
				if (SYSTEM::TIMERA() > 2000)
				{
					if (UNK_0xC844350D5D58C99A(func_72()) && !UNK_0xEB6A8945D1AC98A1(func_72()))
					{
						func_23(&Local_395, 4);
						func_22(&Local_395, 4, func_72(), "PAPARAZZO", 0, 1);
					}
					iLocal_49 = 2;
					func_109();
					if (func_5(&Local_395, cLocal_372, "REPAP_GO", 4, 0, 0, 0))
					{
						UNK_0x51B096AAC60548C1(0.2f);
						UNK_0x11AD11297DC58CC7(bLocal_86, true);
						UNK_0x0E2400AB9174FA81(1, bLocal_69, joaat("PLAYER"));
						bLocal_358 = UNK_0x7707E48765093646(joaat("PROP_LD_TEST_01"), vLocal_87, true, true, false);
						UNK_0x20641932E5104B25(bLocal_358, false, 0);
						UNK_0x4A4806F9D471E491(bLocal_358, false, 0);
						UNK_0x1E9649458B15960F(bLocal_358, true);
						iLocal_369++;
					}
				}
				break;
			case 1:
				func_185();
				if (!UNK_0x3D1053F9EB43B7AD(bLocal_86, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, true, 0))
				{
					iLocal_369++;
					iLocal_370 = UNK_0x1C0640BA9A7327B3();
					iLocal_49 = 3;
				}
				break;
			case 2:
				if (!bLocal_668)
				{
					if (((((iLocal_670 != 1 && iLocal_670 != 3) && iLocal_670 != 6) && iLocal_670 != 9) && iLocal_670 != 11) && iLocal_670 != 13)
					{
						bLocal_669 = false;
						if (UNK_0xC844350D5D58C99A(func_72()) && UNK_0x12DE711B1C681E9E(func_72(), bLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = true;
						}
					}
				}
				else
				{
					if (!func_80())
					{
						bLocal_669 = true;
					}
					if (UNK_0xC844350D5D58C99A(func_72()))
					{
						if (!UNK_0x12DE711B1C681E9E(func_72(), bLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = false;
						}
					}
				}
				if (bLocal_669)
				{
					if (!func_81())
					{
						if (!func_184())
						{
							func_185();
						}
					}
				}
				else
				{
					switch (iLocal_670)
					{
						case 0:
							if (((!bLocal_668 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						case 1:
							if (((!bLocal_668 && func_169()) && !func_81()) && !func_80())
							{
								if (func_165("REPAP_RES1"))
								{
									iLocal_671 = UNK_0x1C0640BA9A7327B3();
									iLocal_670++;
								}
							}
							break;
						case 2:
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_169()) && !func_81()) && !func_80())
								{
									if (func_165("REPAP_CHT2"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						case 3:
							if (((!bLocal_668 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_671 = UNK_0x1C0640BA9A7327B3();
									iLocal_670++;
								}
							}
							break;
						case 4:
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_671) > 6000)
							{
								if (func_24() == 0)
								{
									if (func_166("REPAP_CHT3M", ((func_169() && !func_81()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_166("REPAP_CHT3F", ((func_169() && !func_81()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_166("REPAP_CHT3T", ((func_169() && !func_81()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 4)
								{
									iLocal_671 = UNK_0x1C0640BA9A7327B3();
								}
							}
							break;
						case 5:
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_671) > 8000)
							{
								if (func_24() == 0)
								{
									if (func_166("REPAP_CHT4M", ((func_169() && !func_81()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_166("REPAP_CHT4F", ((func_169() && !func_81()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_166("REPAP_CHT4T", ((func_169() && !func_81()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 5)
								{
									iLocal_671 = UNK_0x1C0640BA9A7327B3();
								}
							}
							break;
						case 6:
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_671) > 8000)
							{
								if (func_24() == 0)
								{
									if (func_166("REPAP_CHT5M", ((func_169() && !func_81()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_166("REPAP_CHT5F", ((func_169() && !func_81()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_166("REPAP_CHT5T", ((func_169() && !func_81()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 6)
								{
									iLocal_671 = UNK_0x1C0640BA9A7327B3();
								}
							}
							break;
						case 7:
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_169()) && !func_81()) && !func_80())
								{
									if (func_165("REPAP_CHT6"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						case 8:
							if (((!bLocal_668 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_671 = UNK_0x1C0640BA9A7327B3();
									iLocal_670++;
								}
							}
							break;
						case 9:
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_169()) && !func_81()) && !func_80())
								{
									if (func_165("REPAP_CHT7"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						case 10:
							if (((!bLocal_668 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_671 = UNK_0x1C0640BA9A7327B3();
									iLocal_670++;
								}
							}
							break;
						case 11:
							if ((UNK_0x1C0640BA9A7327B3() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_169()) && !func_81()) && !func_80())
								{
									if (func_165("REPAP_CHT8"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						case 12:
							if (((!bLocal_668 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
					}
				}
				if (!UNK_0xC844350D5D58C99A(func_72()))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_369++;
					func_151();
					if (!Global_3 && !bLocal_70)
					{
						iLocal_49 = 6;
					}
				}
				if (Global_3 || bLocal_70)
				{
					if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, false, true, 0) && func_73())
					{
						iLocal_49 = 4;
						iLocal_85 = UNK_0x1C0640BA9A7327B3();
					}
				}
				break;
			case 3:
				if (SYSTEM::TIMERA() > 3000 && func_73())
				{
					func_190("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_395, cLocal_372, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_189(2);
					}
				}
				break;
			case 4:
				break;
			case 5:
				break;
		}
		func_176(0);
	}
}

bool func_184()
{
	int iVar0;

	iVar0 = func_30();
	if ((UNK_0x1C0640BA9A7327B3() - iLocal_666) > 5000)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_91) && UNK_0xC42A92762C58E1B9(bLocal_86, bLocal_91, 0))
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_91, 1))
			{
				if (iVar0 != -1 && (UNK_0x1C0640BA9A7327B3() - Local_204[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_666 = UNK_0x1C0640BA9A7327B3();
						return true;
					}
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_666 = UNK_0x1C0640BA9A7327B3();
				return true;
			}
		}
	}
	return false;
}

void func_185()
{
	int iVar0;

	if ((UNK_0x1C0640BA9A7327B3() - iLocal_564) > iLocal_565)
	{
		if ((!UNK_0xEB6A8945D1AC98A1(bLocal_86) && UNK_0xC844350D5D58C99A(func_72())) && !UNK_0xEB6A8945D1AC98A1(func_72()))
		{
			if (UNK_0x0EB28750412C3A5A(vLocal_63, UNK_0x68F4C0EC296D3901(func_72(), true), 1) < 8f)
			{
				iVar0 = UNK_0x09AC81E49EA267F7(false, 5);
				func_23(&Local_395, 4);
				func_23(&Local_395, 5);
				func_23(&Local_395, 6);
				func_23(&Local_395, 7);
				switch (iVar0)
				{
					case 0:
						func_22(&Local_395, 4, func_72(), "PAPARAZZO", 0, 1);
						if (UNK_0xC844350D5D58C99A(Local_395[4 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_564 = UNK_0x1C0640BA9A7327B3();
								iLocal_565 = UNK_0x09AC81E49EA267F7(2000, 3000);
							}
						}
						break;
					case 1:
						func_22(&Local_395, 4, func_72(), "PAPARAZZO", 0, 1);
						if (UNK_0xC844350D5D58C99A(Local_395[4 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_564 = UNK_0x1C0640BA9A7327B3();
								iLocal_565 = UNK_0x09AC81E49EA267F7(2000, 3000);
							}
						}
						break;
					case 2:
						func_22(&Local_395, 5, func_72(), "PAP2", 0, 1);
						if (UNK_0xC844350D5D58C99A(Local_395[5 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[5 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_564 = UNK_0x1C0640BA9A7327B3();
								iLocal_565 = UNK_0x09AC81E49EA267F7(2000, 3000);
							}
						}
						break;
					case 3:
						func_22(&Local_395, 6, func_72(), "PAP3", 0, 1);
						if (UNK_0xC844350D5D58C99A(Local_395[6 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[6 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_564 = UNK_0x1C0640BA9A7327B3();
								iLocal_565 = UNK_0x09AC81E49EA267F7(2000, 3000);
							}
						}
						break;
					case 4:
						func_22(&Local_395, 7, func_72(), "PAP4", 0, 1);
						if (UNK_0xC844350D5D58C99A(Local_395[7 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_395[7 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_564 = UNK_0x1C0640BA9A7327B3();
								iLocal_565 = UNK_0x09AC81E49EA267F7(2000, 3000);
							}
						}
						break;
				}
			}
		}
	}
}

void func_186()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar9;
	vector3 vVar10[24];
	int iVar16;

	if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
	{
		if (UNK_0xE4EDC4B0E92C078B(iLocal_360))
		{
			UNK_0xF2D30B8ACAF12A39(iLocal_360, bLocal_664);
		}
		switch (iLocal_369)
		{
			case 0:
				UNK_0x3F423BF5B8125A50("random@paparazzi@peek");
				UNK_0x3F423BF5B8125A50("random@paparazzi@trans");
				UNK_0x3F423BF5B8125A50("random@paparazzi@wait");
				if ((UNK_0xB4AE0788C1587752("random@paparazzi@peek") && UNK_0xB4AE0788C1587752("random@paparazzi@trans")) && UNK_0xB4AE0788C1587752("random@paparazzi@wait"))
				{
					iLocal_625 = UNK_0xE9744DB7B8CA6965(vLocal_653, vLocal_656, 2);
					UNK_0x915804B434753CBD(bLocal_86, iLocal_625, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					UNK_0x0C8C0C840C2D1AD2(bLocal_86, UNK_0x16F2683693E537C9(), -1, 4, 4);
					sLocal_626[0] = "peek_a";
					sLocal_626[1] = "peek_b";
					sLocal_626[2] = "peek_c";
					UNK_0x51B096AAC60548C1(0.2f);
					bLocal_623 = false;
					bLocal_659 = false;
					bLocal_664 = false;
					bLocal_74 = true;
					bLocal_660 = false;
					bLocal_71 = false;
					fLocal_661 = 0f;
					iLocal_369++;
				}
				break;
			case 1:
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_660, false))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_660, true))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_660, true);
					}
					else
					{
						bLocal_660 = false;
					}
				}
				bVar2 = false;
				bVar0 = UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_639, vLocal_642, bLocal_645, 0, true, 0);
				bVar1 = UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_632, vLocal_635, bLocal_638, 0, true, 0);
				if (UNK_0x7F8A39872A07D2CE(bLocal_631, "right_"))
				{
					if (bVar1)
					{
						bLocal_631 = "left_";
						bVar2 = true;
					}
				}
				else if (bVar0)
				{
					bLocal_631 = "right_";
					bVar2 = true;
				}
				if ((UNK_0x69DF961355195C3C(iLocal_625) && UNK_0xA45992A6CE82FB43(iLocal_625) > 0.9f) || bVar2)
				{
					if (bLocal_660 == 0)
					{
						UNK_0xA3BF0AA5A2608191(bLocal_86);
						iLocal_630++;
						if (iLocal_630 >= 3)
						{
							iLocal_630 = 0;
						}
						StringCopy(&cVar3, bLocal_631, 24);
						StringConCat(&cVar3, sLocal_626[iLocal_630], 24);
						iLocal_625 = UNK_0xE9744DB7B8CA6965(vLocal_653, vLocal_656, 2);
						UNK_0x915804B434753CBD(bLocal_86, iLocal_625, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						UNK_0x5D96D8530B3D0904(&bLocal_660, false);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_661 <= 20f)
					{
						fLocal_661 = (fLocal_661 + UNK_0x6117725E0134737F());
					}
					if ((UNK_0x1C0640BA9A7327B3() - iLocal_624) > 5000 && bLocal_660 == 0)
					{
						if (SYSTEM::VDIST2(vLocal_60, vLocal_63) < (22.2f * 22.2f))
						{
							if (fLocal_661 < 10f)
							{
								if (bLocal_662)
								{
									sVar9 = "REPAP_SHT1";
								}
								else
								{
									sVar9 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar9 = "REPAP_PRT";
							}
							if (func_24() == 1)
							{
								func_22(&Local_395, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
							}
							else if (func_24() == 0)
							{
								func_22(&Local_395, 1, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
							}
							else
							{
								func_22(&Local_395, 1, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_395, cLocal_372, sVar9, 4, 0, 0, 0))
							{
								bLocal_662 = true;
								if (!UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bLocal_86, 7f, 7f, 7f, 0, 1, 0))
								{
									UNK_0xA3BF0AA5A2608191(bLocal_86);
									StringCopy(&cVar10, bLocal_631, 24);
									StringConCat(&cVar10, "come_here", 24);
									iLocal_625 = UNK_0xE9744DB7B8CA6965(vLocal_653, vLocal_656, 2);
									UNK_0x915804B434753CBD(bLocal_86, iLocal_625, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									UNK_0x5D96D8530B3D0904(&bLocal_660, false);
								}
								iLocal_624 = UNK_0x1C0640BA9A7327B3();
							}
						}
					}
				}
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_646, vLocal_649, bLocal_652, 0, true, 0) && bLocal_660 == 0)
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_359))
					{
						UNK_0x142CC44DB769B57E(&iLocal_359);
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_360))
						{
							iLocal_360 = func_191(bLocal_86, 0, 145);
						}
					}
					UNK_0xA3BF0AA5A2608191(bLocal_86);
					iLocal_625 = UNK_0xE9744DB7B8CA6965(vLocal_653, vLocal_656, 2);
					if (bVar1)
					{
						UNK_0x915804B434753CBD(bLocal_86, iLocal_625, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						UNK_0x915804B434753CBD(bLocal_86, iLocal_625, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					UNK_0x5D96D8530B3D0904(&bLocal_660, false);
					iLocal_369++;
				}
				break;
			case 2:
				if (UNK_0x69DF961355195C3C(iLocal_625) && UNK_0xA45992A6CE82FB43(iLocal_625) > 0.9f)
				{
					if (UNK_0xD1960163A3042274(bLocal_86, 242628503) != 1)
					{
						UNK_0xA3BF0AA5A2608191(bLocal_86);
						UNK_0xC6EB89C59F2AF6B8(bLocal_86, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, false, 0, 0, 0);
						iLocal_621 = 2;
						SYSTEM::SETTIMERA(0);
					}
					iLocal_369++;
				}
				break;
			case 3:
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (func_188())
					{
						UNK_0x046C362CF15F1935(&bLocal_91);
						bLocal_91 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						UNK_0x73270B3C9CC833FD(bLocal_91, true, 1);
						UNK_0x9A8BCD43DBDDCDCA(bLocal_91, 0, 0);
						UNK_0x71EDC33E5A423750(bLocal_91, 1);
						bLocal_368 = true;
					}
				}
				if (!bLocal_368)
				{
					UNK_0x71EDC33E5A423750(bLocal_91, 1);
					if (func_150(&Local_395, cLocal_372, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						bLocal_664 = true;
						iLocal_369 = 100;
					}
				}
				else if (func_150(&Local_395, cLocal_372, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					bLocal_664 = true;
					iLocal_369++;
				}
				if (SYSTEM::TIMERA() > 2000)
				{
					func_187(vLocal_87, 1);
				}
				break;
			case 4:
				func_55();
				if (UNK_0xDF1306B443CD3D15(bLocal_91, 0))
				{
					if (UNK_0x12DE711B1C681E9E(bLocal_91, bLocal_86, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_368)
					{
						if (UNK_0xD1960163A3042274(bLocal_86, 242628503) != 1 && !bLocal_659)
						{
							UNK_0xDD353D0E9C789D0E(&iVar16);
							UNK_0x96167B03C5A77156(false, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
							UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
							UNK_0x75ABDC5F81978924(iVar16);
							UNK_0x78ADC381772E3D54(bLocal_86, iVar16);
							UNK_0xF895E10BF4C72645(bLocal_86, 0, 0);
							UNK_0xF82EA857DA10E0CD(&iVar16);
							bLocal_659 = true;
						}
						else
						{
							UNK_0xCAF7AE54F764D5AA(bLocal_86, 1f);
							func_187(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_187(vLocal_87, 1);
					}
					if (!bLocal_368)
					{
						if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_91, 0))
						{
							if (UNK_0xE4EDC4B0E92C078B(iLocal_361))
							{
								UNK_0x142CC44DB769B57E(&iLocal_361);
							}
							if (!UNK_0xE4EDC4B0E92C078B(iLocal_360))
							{
								iLocal_360 = func_191(bLocal_86, 0, 145);
							}
						}
					}
					if ((UNK_0x12DE711B1C681E9E(bLocal_91, bLocal_86, Global_19, 0, 1, 0) && func_181(bLocal_91)) && (SYSTEM::TIMERA() > 6000 || !bLocal_368))
					{
						if (!bLocal_623)
						{
							func_109();
							if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
							{
								if (func_24() == 1)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONF", 4, 0, 0, 0))
									{
										bLocal_623 = true;
									}
								}
								else if (func_24() == 0)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONM", 4, 0, 0, 0))
									{
										bLocal_623 = true;
									}
								}
								else if (func_5(&Local_395, cLocal_372, "REPAP_ONT", 4, 0, 0, 0))
								{
									bLocal_623 = true;
								}
							}
							else if (func_24() == 1)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INF", 4, 0, 0, 0))
								{
									bLocal_623 = true;
								}
							}
							else if (func_24() == 0)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INM", 4, 0, 0, 0))
								{
									bLocal_623 = true;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_INT", 4, 0, 0, 0))
							{
								bLocal_623 = true;
							}
						}
						else
						{
							if (!bLocal_368)
							{
								iLocal_369 = -5;
							}
							else
							{
								iLocal_369++;
							}
							UNK_0xA3BF0AA5A2608191(bLocal_86);
							UNK_0x5B1D360B9C6F0A09(bLocal_86, bLocal_91, -1, func_179(bLocal_91), 1f, 8388608, 0);
						}
					}
				}
				break;
			case -5:
				if (bLocal_368)
				{
					func_187(vLocal_87, 1);
				}
				else
				{
					func_187(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (UNK_0xDF1306B443CD3D15(bLocal_91, 0))
				{
					if (func_163(bLocal_91, 1093140480 /* Float: 10.5f */, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
					{
						iLocal_369 = 5;
					}
				}
				break;
			case 5:
				if (UNK_0xDF1306B443CD3D15(bLocal_91, 0))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_86) && UNK_0xC42A92762C58E1B9(bLocal_86, bLocal_91, 0))
					{
						if (UNK_0xE4EDC4B0E92C078B(iLocal_360))
						{
							UNK_0x142CC44DB769B57E(&iLocal_360);
						}
						UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
						func_189(1);
					}
					else
					{
						if (!Global_3 && !bLocal_70)
						{
							if ((UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_91, 0) && !UNK_0xC42A92762C58E1B9(bLocal_86, bLocal_91, 1)) && !UNK_0x3D1053F9EB43B7AD(bLocal_91, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, true, 0))
							{
								if (bLocal_368)
								{
									UNK_0xBAFED2F6486F771A(bLocal_86, 2, true);
									sLocal_371 = "REPAP_GUP";
									func_189(6);
								}
								else
								{
									UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 1, 0);
									UNK_0xBAFED2F6486F771A(bLocal_86, 2, true);
									sLocal_371 = "REPAP_CP";
									func_189(6);
								}
							}
						}
						if (!UNK_0xC42A92762C58E1B9(bLocal_86, bLocal_91, 0))
						{
							if (UNK_0xD1960163A3042274(bLocal_86, -1794415470) != 1)
							{
								UNK_0xA3BF0AA5A2608191(bLocal_86);
								UNK_0x5B1D360B9C6F0A09(bLocal_86, bLocal_91, -1, func_179(bLocal_91), 1f, 8388608, 0);
							}
							else if (SYSTEM::VDIST(vLocal_63, UNK_0x68E4ADDDDCD7BDDE(bLocal_91, 1f, 0f, 0f)) < 1f)
							{
								UNK_0xCAF7AE54F764D5AA(bLocal_86, 1f);
							}
						}
					}
				}
				break;
			case 100:
				if (UNK_0xDF1306B443CD3D15(bLocal_91, 0))
				{
					if (!func_80())
					{
						func_109();
						if (func_24() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_24() == 0)
						{
							func_109();
							if (func_5(&Local_395, cLocal_372, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
							bLocal_74 = false;
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
				if (iLocal_369 == 101)
				{
					fLocal_665 = 0f;
				}
				func_187(vLocal_87, 1);
				break;
			case 101:
				if (SYSTEM::VDIST2(vLocal_60, vLocal_63) < 49f && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if (UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) < 3f)
					{
						fLocal_665 = (fLocal_665 + UNK_0x6117725E0134737F());
					}
					else
					{
						fLocal_665 = (fLocal_665 - (UNK_0x6117725E0134737F() * 2f));
					}
					if (fLocal_665 > 10f)
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_665 = 0f;
						}
					}
				}
				if (UNK_0xDF1306B443CD3D15(bLocal_91, 0))
				{
					if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_91, 0) && func_188())
					{
						bLocal_368 = true;
						bLocal_74 = true;
						bLocal_91 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						UNK_0x73270B3C9CC833FD(bLocal_91, true, 1);
					}
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_91, 0))
					{
						if (UNK_0xE4EDC4B0E92C078B(iLocal_361))
						{
							UNK_0x142CC44DB769B57E(&iLocal_361);
						}
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_360))
						{
							iLocal_360 = func_191(bLocal_86, 0, 145);
						}
					}
					else
					{
						if (UNK_0xE4EDC4B0E92C078B(iLocal_360))
						{
							UNK_0x142CC44DB769B57E(&iLocal_360);
						}
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_361))
						{
							iLocal_361 = func_177(bLocal_91, 0, 0);
						}
					}
					if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bLocal_91))
					{
						if (UNK_0xE4EDC4B0E92C078B(iLocal_361))
						{
							UNK_0x142CC44DB769B57E(&iLocal_361);
						}
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_360))
						{
							iLocal_360 = func_191(bLocal_86, 0, 145);
						}
						func_190("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_369 = 4;
					}
					if (!bLocal_74)
					{
						if (SYSTEM::VDIST2(vLocal_60, vLocal_66) < 9f && func_24() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_MIKE", 4, 0, 0, 0))
							{
								bLocal_74 = true;
							}
						}
					}
				}
				func_187(vLocal_87, 1);
				break;
		}
		if (!Global_3 && !bLocal_70)
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_91, 0))
			{
				if (SYSTEM::VDIST(vLocal_60, vLocal_87) > 75f)
				{
					func_189(6);
				}
				if (func_202())
				{
					func_189(5);
				}
			}
		}
		if (!bLocal_368)
		{
			if (!UNK_0xDF1306B443CD3D15(bLocal_91, 0))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_189(5);
				}
			}
			else
			{
				if (!bLocal_368)
				{
					if (!Global_3 && !bLocal_70)
					{
						if (UNK_0x7F6DC62EA9922664(bLocal_91) < iLocal_83)
						{
							if (UNK_0xB87D13D0C064E9D1(bLocal_91, UNK_0x16F2683693E537C9(), 1))
							{
								iLocal_84 = (iLocal_84 + (iLocal_83 - UNK_0x7F6DC62EA9922664(bLocal_91)));
							}
							UNK_0xE910A68AA670B4AA(bLocal_91);
						}
						if (iLocal_84 > 250)
						{
							if (UNK_0x6AB6A474D29FA7D8(bLocal_86, bLocal_91) && SYSTEM::VDIST(vLocal_63, vLocal_66) < 25f)
							{
								func_189(5);
							}
						}
					}
				}
				iLocal_83 = UNK_0x7F6DC62EA9922664(bLocal_91);
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
		{
			if (UNK_0xE9FDA1035CFEA94F(bLocal_86))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_189(5);
				}
			}
		}
	}
}

void func_187(vector3 vParam0, bool bParam3)
{
	if (SYSTEM::VDIST(vLocal_63, vParam0) > 2.5f)
	{
		if (UNK_0xD1960163A3042274(bLocal_86, 713668775) != 1)
		{
			UNK_0x96167B03C5A77156(bLocal_86, vParam0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (UNK_0xD1960163A3042274(bLocal_86, 713668775) != 1)
	{
		func_147(bParam3);
		UNK_0x0C8C0C840C2D1AD2(bLocal_86, UNK_0x16F2683693E537C9(), -1, 16, 2);
	}
}

bool func_188()
{
	return (((((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xDF1306B443CD3D15(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0)) && (UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0))) || UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0))))) && UNK_0xD6DF381716822EFE(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) > 0) && func_181(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0))) && !Global_110685);
}

void func_189(int iParam0)
{
	iLocal_47 = iParam0;
	iLocal_369 = 0;
}

void func_190(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (!UNK_0x7F8A39872A07D2CE(iLocal_560[iVar0], bParam0))
		{
			if (UNK_0x562F77A7F33D2E46(iLocal_560[iVar0]))
			{
				UNK_0x8910D3D58E0132B8(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (UNK_0x7F8A39872A07D2CE(iLocal_560[iVar0], bParam0))
		{
			if (!UNK_0x562F77A7F33D2E46(iLocal_560[iVar0]))
			{
				UNK_0x8BC9595FD2792B5D(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_191(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_178(bParam0, !bParam1, 0);
	if ((iParam2 != 145 && UNK_0xE4EDC4B0E92C078B(iVar0)) && UNK_0xEF07223F00EBE9C9(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		UNK_0xDC5B2F9D0CCE3A10(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_192(bool bParam0)
{
	if (func_195())
	{
		Global_111628 = 1;
		Global_111625 = UNK_0x1C0640BA9A7327B3();
		if (func_95(Global_111627))
		{
			func_193(0);
		}
		UNK_0x974531784BE14213(1, "RE_TITLE");
		if (bParam0 && func_95(Global_111627))
		{
			UNK_0x4A51D2E4732BD556();
		}
		return 1;
	}
	return 0;
}

void func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UNK_0x8FA469D9C5F1A01F())
				{
					func_174(func_194(iParam0), -1);
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
					func_174(func_194(iParam0), -1);
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
					func_174(func_194(iParam0), -1);
					Global_111638.f_24990.f_4++;
					UNK_0x5D96D8530B3D0904(&Global_111634, 2);
				}
			}
			break;
	}
}

bool func_194(int iParam0)
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

bool func_195()
{
	switch (func_196(&Global_30827, 0, 5, 0, UNK_0x0D0A574C76D769AC()))
	{
		case 1:
			return true;
		case 0:
			return true;
	}
	return false;
}

int func_196(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_200(0))
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
		if (!func_198(iParam2))
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
			func_197(uParam0, iParam4);
		}
	}
	return 2;
}

void func_197(var uParam0, int iParam1)
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

bool func_198(int iParam0)
{
	return func_199(iParam0, Global_41431);
}

int func_199(int iParam0, int iParam1)
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

bool func_200(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_198(iParam0))
	{
		return false;
	}
	return true;
}

void func_201()
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bLocal_86))
	{
		UNK_0xBAFED2F6486F771A(bLocal_86, 2, false);
		UNK_0xF3268524E9BE6D6E(bLocal_86, UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (!UNK_0xEB6A8945D1AC98A1(Local_204[iVar0 /*18*/]))
		{
			UNK_0xF3268524E9BE6D6E(Local_204[iVar0 /*18*/], UNK_0x16F2683693E537C9(), 300f, -1, 0, 0);
			UNK_0x6DF7BF67E86AAE86(Local_204[iVar0 /*18*/], -2065892691);
			UNK_0x11AD11297DC58CC7(Local_204[iVar0 /*18*/], false);
		}
		iVar0++;
	}
}

bool func_202()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_204)
	{
		if (UNK_0xC844350D5D58C99A(Local_204[iVar1 /*18*/]) && !UNK_0xEB6A8945D1AC98A1(Local_204[iVar1 /*18*/]))
		{
			if (UNK_0x4FC40AB0ECCE6E18(Local_204[iVar1 /*18*/]))
			{
				if (((UNK_0xD3DCEC81D13AAFB1(Local_204[iVar1 /*18*/].f_6, 5f, true) || UNK_0x681F21BF9F7B449B(-1, Local_204[iVar1 /*18*/].f_6, 10f)) || UNK_0xE9FDA1035CFEA94F(Local_204[iVar1 /*18*/])) || (iLocal_386[iVar1] > 10 && iLocal_47 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_349 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_131)
	{
		if (UNK_0xC844350D5D58C99A(Local_131[iVar1 /*18*/]))
		{
			if (UNK_0xDF1306B443CD3D15(Local_131[iVar1 /*18*/], 0) && UNK_0x4FC40AB0ECCE6E18(Local_131[iVar1 /*18*/]))
			{
				if (UNK_0x4E861BC5B1EDA7BD(Local_131[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_203()
{
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_43) < (75f * 75f))
		{
			return true;
		}
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_214())
		{
			return false;
		}
	}
	if (func_210())
	{
		return true;
	}
	if (func_204(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

int func_204(float fParam0, bool bParam1)
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
		if (func_26(func_24()))
		{
			iVar36 = func_100();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 2) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar32 /*6*/], 3))
				{
					func_205(iVar32, &Var0);
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

void func_205(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_206(uParam1, "Abigail1", func_208(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_207(iParam0), 1, 0);
			break;
		case 1:
			func_206(uParam1, "Abigail2", func_208(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_207(iParam0), 1, 0);
			break;
		case 2:
			func_206(uParam1, "Barry1", func_208(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_207(iParam0), 1, 0);
			break;
		case 3:
			func_206(uParam1, "Barry2", func_208(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_207(iParam0), 1, 1);
			break;
		case 4:
			func_206(uParam1, "Barry3", func_208(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 5:
			func_206(uParam1, "Barry3A", func_208(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 6:
			func_206(uParam1, "Barry3C", func_208(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 7:
			func_206(uParam1, "Barry4", func_208(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_207(iParam0), 0, 0);
			break;
		case 8:
			func_206(uParam1, "Dreyfuss1", func_208(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 9:
			func_206(uParam1, "Epsilon1", func_208(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 10:
			func_206(uParam1, "Epsilon2", func_208(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_207(iParam0), 1, 0);
			break;
		case 11:
			func_206(uParam1, "Epsilon3", func_208(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 12:
			func_206(uParam1, "Epsilon4", func_208(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 13:
			func_206(uParam1, "Epsilon5", func_208(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_207(iParam0), 1, 0);
			break;
		case 14:
			func_206(uParam1, "Epsilon6", func_208(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 15:
			func_206(uParam1, "Epsilon7", func_208(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 16:
			func_206(uParam1, "Epsilon8", func_208(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_207(iParam0), 1, 0);
			break;
		case 17:
			func_206(uParam1, "Extreme1", func_208(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 18:
			func_206(uParam1, "Extreme2", func_208(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 19:
			func_206(uParam1, "Extreme3", func_208(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 20:
			func_206(uParam1, "Extreme4", func_208(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 21:
			func_206(uParam1, "Fanatic1", func_208(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_207(iParam0), 1, 0);
			break;
		case 22:
			func_206(uParam1, "Fanatic2", func_208(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_207(iParam0), 1, 0);
			break;
		case 23:
			func_206(uParam1, "Fanatic3", func_208(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_207(iParam0), 0, 1);
			break;
		case 24:
			func_206(uParam1, "Hao1", func_208(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_207(iParam0), 0, 1);
			break;
		case 25:
			func_206(uParam1, "Hunting1", func_208(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 26:
			func_206(uParam1, "Hunting2", func_208(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 27:
			func_206(uParam1, "Josh1", func_208(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_207(iParam0), 1, 0);
			break;
		case 28:
			func_206(uParam1, "Josh2", func_208(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_207(iParam0), 1, 1);
			break;
		case 29:
			func_206(uParam1, "Josh3", func_208(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_207(iParam0), 1, 1);
			break;
		case 30:
			func_206(uParam1, "Josh4", func_208(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_207(iParam0), 1, 0);
			break;
		case 31:
			func_206(uParam1, "Maude1", func_208(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 32:
			func_206(uParam1, "Minute1", func_208(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 33:
			func_206(uParam1, "Minute2", func_208(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 34:
			func_206(uParam1, "Minute3", func_208(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 35:
			func_206(uParam1, "MrsPhilips1", func_208(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 36:
			func_206(uParam1, "MrsPhilips2", func_208(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 37:
			func_206(uParam1, "Nigel1", func_208(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_207(iParam0), 1, 0);
			break;
		case 38:
			func_206(uParam1, "Nigel1A", func_208(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_207(iParam0), 1, 1);
			break;
		case 39:
			func_206(uParam1, "Nigel1B", func_208(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_207(iParam0), 1, 1);
			break;
		case 40:
			func_206(uParam1, "Nigel1C", func_208(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_207(iParam0), 1, 1);
			break;
		case 41:
			func_206(uParam1, "Nigel1D", func_208(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_207(iParam0), 1, 1);
			break;
		case 42:
			func_206(uParam1, "Nigel2", func_208(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_207(iParam0), 1, 1);
			break;
		case 43:
			func_206(uParam1, "Nigel3", func_208(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_207(iParam0), 1, 1);
			break;
		case 44:
			func_206(uParam1, "Omega1", func_208(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 45:
			func_206(uParam1, "Omega2", func_208(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 46:
			func_206(uParam1, "Paparazzo1", func_208(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 47:
			func_206(uParam1, "Paparazzo2", func_208(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 48:
			func_206(uParam1, "Paparazzo3", func_208(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 49:
			func_206(uParam1, "Paparazzo3A", func_208(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 50:
			func_206(uParam1, "Paparazzo3B", func_208(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 51:
			func_206(uParam1, "Paparazzo4", func_208(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 52:
			func_206(uParam1, "Rampage1", func_208(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 54:
			func_206(uParam1, "Rampage3", func_208(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_207(iParam0), 1, 0);
			break;
		case 55:
			func_206(uParam1, "Rampage4", func_208(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_207(iParam0), 1, 0);
			break;
		case 56:
			func_206(uParam1, "Rampage5", func_208(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_207(iParam0), 0, 0);
			break;
		case 53:
			func_206(uParam1, "Rampage2", func_208(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_207(iParam0), 1, 0);
			break;
		case 57:
			func_206(uParam1, "TheLastOne", func_208(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 58:
			func_206(uParam1, "Tonya1", func_208(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 59:
			func_206(uParam1, "Tonya2", func_208(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 60:
			func_206(uParam1, "Tonya3", func_208(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 61:
			func_206(uParam1, "Tonya4", func_208(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		case 62:
			func_206(uParam1, "Tonya5", func_208(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_206(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
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

int func_207(int iParam0)
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

struct<2> func_208(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_209(iParam0) };
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

struct<2> func_209(int iParam0)
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

bool func_210()
{
	if (func_213() && !func_214())
	{
		return true;
	}
	if (func_212() && func_211())
	{
		return true;
	}
	return false;
}

bool func_211()
{
	return Global_111356 > 0;
}

bool func_212()
{
	if (Global_95666 != -1)
	{
		return true;
	}
	return false;
}

bool func_213()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return false;
}

bool func_214()
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

void func_215()
{
	func_217(39, 1);
	func_217(40, 1);
	func_217(41, 1);
	func_217(42, 1);
	func_217(43, 1);
	func_217(44, 1);
	iLocal_359 = func_216(vLocal_87);
	bLocal_86 = UNK_0x36F2404464202779(26, joaat("A_F_Y_BEVHILLS_03"), vLocal_87, bLocal_90, 1, true);
	UNK_0xAFF39FB306F8E232(bLocal_86, 1, true);
	UNK_0xAFF39FB306F8E232(bLocal_86, 17, true);
	UNK_0xBAFED2F6486F771A(bLocal_86, 128, true);
	UNK_0xFADC0A217229F6B5(bLocal_86, true);
	UNK_0x5507FCD92D15E617(bLocal_86, 0);
	UNK_0x64F9F278AB9DCA2C(bLocal_86, false, false, true, 0);
	UNK_0x64F9F278AB9DCA2C(bLocal_86, 2, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(bLocal_86, 3, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(bLocal_86, 4, false, false, 0);
	UNK_0x64F9F278AB9DCA2C(bLocal_86, 7, true, false, 0);
	UNK_0x64F9F278AB9DCA2C(bLocal_86, 8, false, false, 0);
	UNK_0x35126F52AFE6E6CA(bLocal_86, 1);
	UNK_0x11AD11297DC58CC7(bLocal_86, true);
	UNK_0x25C5402CC10F76CD(bLocal_86, false);
	UNK_0x4F39CC3882DD074E(bLocal_86, "LACEY");
	if (Global_3 || bLocal_70)
	{
		UNK_0xE121AE1BBF90E186(bLocal_86, true);
	}
	if (UNK_0xF63400DBE3303D26("CELEBRITY", &bLocal_69))
	{
		UNK_0x6DF7BF67E86AAE86(bLocal_86, bLocal_69);
	}
	bLocal_91 = UNK_0x122AAB0B1D6F55AD(joaat("SURANO"), vLocal_92, bLocal_95, true, true, false);
	UNK_0x08841CDB215AE18F(bLocal_91, vLocal_92, 0, 0, 1);
	UNK_0xC4C7FD0EF3FEAB0B(bLocal_91, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	UNK_0x9A8BCD43DBDDCDCA(bLocal_91, 0, 0);
	UNK_0xC6A6B4DDD6DC073A(bLocal_91, 10);
	UNK_0xB9FD7450C0DAB575(bLocal_91, 1084227584 /* Float: 5f */);
	UNK_0x71EDC33E5A423750(bLocal_91, 3);
	UNK_0xF3F7BF451A720FDF(bLocal_91, 1);
	UNK_0x0218D9089D75EFEE(bLocal_91, 1);
	UNK_0x3CBF2C83A68C1611(bLocal_91, UNK_0xE4B65163E4129619(1));
	if (func_24() == 1)
	{
		func_22(&Local_395, 1, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else if (func_24() == 0)
	{
		func_22(&Local_395, 1, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else
	{
		func_22(&Local_395, 1, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	func_22(&Local_395, 3, bLocal_86, "LACEY", 0, 1);
	iLocal_375[0] = "idle_a";
	iLocal_375[1] = "idle_b";
	iLocal_375[2] = "idle_c";
	iLocal_375[3] = "idle_d";
	iLocal_375[4] = "idle_e";
	iLocal_375[5] = "idle_f";
	iLocal_375[6] = "idle_g";
	iLocal_375[7] = "idle_h";
	iLocal_375[8] = "idle_i";
	iLocal_560[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_560[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_560[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	UNK_0xAB8E2DDC7AF955E0(joaat("VADER"), true);
	UNK_0xAB8E2DDC7AF955E0(joaat("SURANO"), true);
	UNK_0xAB8E2DDC7AF955E0(joaat("CAVALCADE2"), true);
}

int func_216(vector3 vParam0)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x7F010F50CE03A8AF(iVar0, false);
	UNK_0x9D7CDDB4B55142AF(iVar0, 0);
	return iVar0;
}

void func_217(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_221(iParam0, 2, 1))
		{
			func_220(iParam0, 2, 1);
		}
	}
	else if (func_221(iParam0, 2, 1))
	{
		func_218(iParam0, 2, 1);
	}
}

void func_218(int iParam0, bool bParam1, bool bParam2)
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
		if (func_90() == 0)
		{
			bVar0 = func_125(func_219(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_121(func_219(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

int func_219(int iParam0)
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

void func_220(int iParam0, bool bParam1, bool bParam2)
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
		if (func_90() == 0)
		{
			bVar0 = func_125(func_219(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_121(func_219(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

bool func_221(int iParam0, bool bParam1, bool bParam2)
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
		if (func_90() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_125(func_219(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

bool func_222()
{
	if (!bLocal_96)
	{
		func_230(&uLocal_97, joaat("SURANO"));
		func_230(&uLocal_97, joaat("PROP_LD_TEST_01"));
		func_230(&uLocal_97, joaat("A_F_Y_BEVHILLS_03"));
		func_230(&uLocal_97, joaat("A_M_Y_GENSTREET_02"));
		func_230(&uLocal_97, joaat("VADER"));
		func_230(&uLocal_97, joaat("CAVALCADE2"));
		func_230(&uLocal_97, joaat("PROP_PAP_CAMERA_01"));
		func_227(&uLocal_97);
		bLocal_96 = true;
	}
	if (!func_223(&uLocal_97))
	{
		return false;
	}
	UNK_0x3F423BF5B8125A50("random@escape_paparazzi@standing@");
	UNK_0x3F423BF5B8125A50("random@paparazzi@pap_anims");
	UNK_0x3F423BF5B8125A50("random@paparazzi@peek");
	UNK_0x3F423BF5B8125A50("random@paparazzi@trans");
	UNK_0x3F423BF5B8125A50("random@paparazzi@wait");
	UNK_0x3F423BF5B8125A50("veh@std@ps@idle_panic");
	UNK_0x3F423BF5B8125A50("veh@low@front_ps@idle_panic");
	UNK_0x3F423BF5B8125A50(bLocal_374);
	UNK_0xD7992BEF7A9D109E("ESCPAP", false);
	if (((((((((UNK_0xB4AE0788C1587752("random@escape_paparazzi@standing@") && UNK_0xB4AE0788C1587752("random@paparazzi@pap_anims")) && UNK_0xB4AE0788C1587752("random@paparazzi@peek")) && UNK_0xB4AE0788C1587752("random@paparazzi@trans")) && UNK_0xB4AE0788C1587752("random@paparazzi@wait")) && UNK_0xB4AE0788C1587752("veh@std@ps@idle_panic")) && UNK_0xB4AE0788C1587752("veh@low@front_ps@idle_panic")) && UNK_0xB4AE0788C1587752(bLocal_374)) && UNK_0x67C1D9E5B91B2E37(false)) && UNK_0xAE317D00A5A55DF6("Distant_Camera_Flash", 0, -1))
	{
		return true;
	}
	return false;
}

bool func_223(var uParam0)
{
	int iVar0;

	if (!uParam0->f_31)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 29))
			{
				return false;
			}
			if (!func_224(uParam0[iVar0 /*2*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return true;
}

bool func_224(var uParam0)
{
	return func_225(*uParam0, "NULL", uParam0->f_1);
}

bool func_225(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0, 30))
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0, 29))
		{
			switch (func_226(bParam0))
			{
				case 0:
					return UNK_0xB87F6CF6E5628C67(bParam2);
				case 1:
					return UNK_0xB4AE0788C1587752(bParam1);
				case 2:
					return UNK_0x59F02DA2266A744C(bParam1);
				case 3:
					return UNK_0x27117E2CDD4D67C3(bParam1);
				case 4:
					return UNK_0x3DDA6C6A285628E4(bParam2, bParam1);
				case 5:
					return UNK_0x1C2E18E9C63BEB77(bParam1);
				case 6:
					return UNK_0xAE317D00A5A55DF6(bParam1, UNK_0xEAE0D21A50E6C7F4(bParam0, 27), -1);
				case 7:
					return UNK_0x64EF15C5E09BAD76(bParam2);
				case 8:
					return UNK_0x67C1D9E5B91B2E37(bParam2);
				case 9:
					return UNK_0x25F7A4D42AF2AB93();
				default:
					break;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_226(bool bParam0)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < 10)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_227(var uParam0)
{
	func_228(uParam0, 9, -1, 0);
}

void func_228(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_229(bParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
		{
			if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			UNK_0x5D96D8530B3D0904(uParam0[iVar0 /*2*/], bParam1);
			UNK_0x5D96D8530B3D0904(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

bool func_229(bool bParam0)
{
	switch (bParam0)
	{
		case -1:
			return false;
		case 0:
			return true;
		case 1:
			return false;
		case 2:
			return false;
		case 3:
			return false;
		case 4:
			return false;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return true;
		case 8:
			return false;
		case 9:
			return true;
	}
	return false;
}

void func_230(var uParam0, int iParam1)
{
	func_228(uParam0, 0, iParam1, 0);
}

bool func_231()
{
	if (!func_198(5))
	{
		return true;
	}
	if (func_210())
	{
		return true;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_214())
		{
			return false;
		}
	}
	if (func_204(100f, 1) != -1)
	{
		return true;
	}
	return false;
}

bool func_232()
{
	if ((Global_111627 == func_104() && UNK_0xD4A2BF1975E2C50F()) && Global_111628)
	{
		return true;
	}
	return false;
}

void func_233(var uParam0)
{
	int iVar0;

	if (uParam0->f_31)
	{
		if ((UNK_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_32 + uParam0->f_33) || UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 2)) || UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 29))
					{
						func_234(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = UNK_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_234(bool bParam0)
{
	func_235(bParam0, "NULL", bParam0->f_1);
}

void func_235(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 30))
	{
		switch (func_226(*bParam0))
		{
			case 0:
				UNK_0x523BCC9DC80CD82F(bParam2);
				break;
			case 1:
				UNK_0x3F423BF5B8125A50(bParam1);
				break;
			case 2:
				UNK_0x4E09E67A27F104A7(bParam1);
				break;
			case 3:
				UNK_0x0D3BE1DE0262A012(bParam1, UNK_0xEAE0D21A50E6C7F4(*bParam0, 28));
				break;
			case 4:
				UNK_0x36187931D29E5BBE(bParam2, bParam1);
				break;
			case 5:
				UNK_0x29398344B9E5B8A7(bParam1);
				break;
			case 6:
				UNK_0xAE317D00A5A55DF6(bParam1, UNK_0xEAE0D21A50E6C7F4(*bParam0, 27), -1);
				break;
			case 7:
				UNK_0x8CFFBE74CB5C864A(bParam2);
				break;
			case 8:
				UNK_0xD7992BEF7A9D109E(bParam1, bParam2);
				break;
			case 9:
				UNK_0x9E5E60D8C63FD9D1();
				break;
			default:
				break;
		}
		UNK_0x5D96D8530B3D0904(bParam0, 29);
	}
}

void func_236(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_238(iParam0);
	UNK_0x24D1A8A556F3252A(0);
	UNK_0xD084C7D80DE4139C(1);
	Global_111624 = 0;
	func_237();
}

void func_237()
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

void func_238(int iParam0)
{
	Global_111627 = iParam0;
}

bool func_239(vector3 vParam0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_104();
	}
	if (iParam3 == -1)
	{
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_280())
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
			if (SYSTEM::VMAG2(UNK_0x56E9E0FD5ACCD35D(UNK_0x16F2683693E537C9())) > 1369f && !func_214())
			{
				return false;
			}
		}
		if (!Global_111638.f_9080)
		{
			return false;
		}
		if (func_85(0))
		{
			return false;
		}
		if (func_210())
		{
			return false;
		}
		if (func_279())
		{
			return false;
		}
		if (Global_111627 != -1)
		{
			return false;
		}
		if (func_26(func_24()))
		{
			if (func_204(100f, 1) != -1)
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
		if (!func_278(iParam3))
		{
			return false;
		}
		if (func_26(func_24()))
		{
			if (func_277(func_24()) == 4 || func_277(func_24()) == 5)
			{
				return false;
			}
		}
		if (func_26(func_24()))
		{
			if (!func_276(iParam3, bParam4, 145))
			{
				return false;
			}
		}
		if (!func_275(Global_111638.f_24990.f_43[iParam3]))
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
		if (func_274())
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
		if (!func_265(4))
		{
			return false;
		}
		if (!func_198(5))
		{
			return false;
		}
		if (func_264(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_264(0, 0))
		{
			return false;
		}
		if (Global_30914)
		{
			return false;
		}
		if (func_278(30) && !func_264(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return false;
				}
			}
		}
		if (func_26(func_24()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111638.f_2358.f_539.f_2300[iVar4 /*3*/] };
				bVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_263(bVar8))
				{
					if (func_241(iVar4))
					{
						if (!func_240(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vVar5) < (210f * 210f))
							{
								if (func_24() != iVar4)
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

bool func_240(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_241(int iParam0)
{
	bool bVar0;

	bVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_242(bVar0);
}

int func_242(bool bParam0)
{
	return func_243(bParam0, 1);
}

int func_243(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_263(bParam0))
	{
		return 0;
	}
	func_244(bParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_244(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_245(func_256(), bParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_245(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_255(bParam0, bParam1))
	{
		iVar0 = func_254(bParam1);
		iVar1 = func_252(bParam0);
		iVar2 = (func_252(bParam0) - func_252(bParam1));
		iVar3 = (func_254(bParam0) - func_254(bParam1));
		iVar4 = (func_251(bParam0) - func_251(bParam1));
		iVar5 = (func_250(bParam0) - func_250(bParam1));
		iVar6 = (func_249(bParam0) - func_249(bParam1));
		iVar7 = (func_248(bParam0) - func_248(bParam1));
	}
	else
	{
		iVar0 = func_254(bParam0);
		iVar1 = func_252(bParam1);
		iVar2 = (func_252(bParam1) - func_252(bParam0));
		iVar3 = (func_254(bParam1) - func_254(bParam0));
		iVar4 = (func_251(bParam1) - func_251(bParam0));
		iVar5 = (func_250(bParam1) - func_250(bParam0));
		iVar6 = (func_249(bParam1) - func_249(bParam0));
		iVar7 = (func_248(bParam1) - func_248(bParam0));
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
		iVar4 = (iVar4 + func_247(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_246(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_246(float fParam0, float fParam1, float fParam2)
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

int func_247(bool bParam0, int iParam1)
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

int func_248(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_249(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_250(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_251(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

int func_252(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_253(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_253(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_254(bool bParam0)
{
	return (bParam0 && 15);
}

bool func_255(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_263(bParam1) || !func_263(bParam0))
	{
		return true;
	}
	bVar0 = func_252(bParam0);
	bVar1 = func_252(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_254(bParam0);
	bVar1 = func_254(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_251(bParam0);
	bVar1 = func_251(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_250(bParam0);
	bVar1 = func_250(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_249(bParam0);
	bVar1 = func_249(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_248(bParam0);
	bVar1 = func_248(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_256()
{
	var uVar0;

	func_262(&uVar0, UNK_0x4460E481B9E33ADA());
	func_261(&uVar0, UNK_0x8D199E381D262EEF());
	func_260(&uVar0, UNK_0xD8A54335F18763BA());
	func_259(&uVar0, UNK_0x972A296334C9D57B());
	func_258(&uVar0, UNK_0x118229AD063C3C1D());
	func_257(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_257(bool bParam0, int iParam1)
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

void func_258(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_259(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_254(*bParam0);
	iVar1 = func_252(*bParam0);
	if (iParam1 < 1 || iParam1 > func_247(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_260(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_261(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_262(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_263(bool bParam0)
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
	iVar0 = func_248(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_249(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_250(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_252(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_254(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_251(bParam0);
	if (iVar5 < 1 || iVar5 > func_247(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_264(int iParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_24990.f_8[iParam0], bParam1))
	{
		return true;
	}
	return false;
}

bool func_265(int iParam0)
{
	int iVar0;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				iVar0 = func_24();
				if (!func_26(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_273()) || Global_110685) || Global_30770) || func_272()) || func_19(8, -1)) || func_271()) || func_270()) || func_269()) || func_268()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 1:
						if (((((((((UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1) || func_273()) || Global_30770) || func_272()) || func_19(8, -1)) || func_269()) || func_271()) || func_270()) || func_268()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 2:
						if ((((((((((((((((((!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_273()) || Global_110685) || Global_30770) || func_272()) || func_19(8, -1)) || func_269()) || func_271()) || func_270()) || func_268()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return false;
						}
						break;
					case 3:
						if ((((((((((((UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false)) || func_273()) || Global_110685) || Global_30770) || func_272()) || func_19(8, -1)) || func_271()) || func_270()) || func_268()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 4:
						if (((((func_273() || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || func_19(8, -1)) || func_268()) || func_267()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 5:
						if ((((func_19(8, -1) || func_271()) || func_270()) || func_267()) || func_266())
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
							if ((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_273()) || Global_30770) || func_272()) || func_19(8, -1)) || func_270()) || func_269()) || func_268()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					case 7:
						if ((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || func_273()) || func_270()) || Global_110685) || Global_30770) || func_272()) || Global_42596) || func_19(8, -1)) || func_269()) || func_267()) || func_268()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					case 8:
						if (((((((((((((((((((((UNK_0x4734A6196B611C3B(UNK_0x16F2683693E537C9(), false) || !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62())) || !UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62())) || !UNK_0x0F1CCD77290EE12F()) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || UNK_0xE934758D273C899A(UNK_0x16F2683693E537C9())) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) || UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9())) || UNK_0x92444005288A72ED(UNK_0x16F2683693E537C9())) || UNK_0x5EB102898326C705(UNK_0x16F2683693E537C9())) || UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1)) || UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62())) || func_273()) || Global_110685) || Global_30770) || func_272()) || func_19(8, -1)) || func_269()) || func_267()) || func_271()) || func_270()) || func_268())
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

bool func_266()
{
	return Global_98783.f_1;
}

bool func_267()
{
	if (Global_95666 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return false;
}

bool func_268()
{
	if (UNK_0x8A22C4C08282BF26(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
	{
		return true;
	}
	return false;
}

bool func_269()
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

bool func_270()
{
	return Global_98796.f_346 > 0;
}

bool func_271()
{
	return Global_98796.f_345 > 0;
}

bool func_272()
{
	return Global_1312877;
}

bool func_273()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

bool func_274()
{
	func_16();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return true;
	}
	return false;
}

bool func_275(bool bParam0)
{
	return func_255(func_256(), bParam0);
}

bool func_276(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_24();
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

int func_277(int iParam0)
{
	if (!func_26(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_278(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_280())
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

bool func_279()
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

bool func_280()
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

void func_281(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_282()
{
	func_300(0);
	UNK_0xF5894FEB702E7E76(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	UNK_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_295(&uLocal_97, 0);
	UNK_0x8D17794CE3273D70("random@escape_paparazzi@standing@");
	UNK_0x8D17794CE3273D70("random@paparazzi@pap_anims");
	UNK_0x8D17794CE3273D70("random@paparazzi@peek");
	UNK_0x8D17794CE3273D70("random@paparazzi@trans");
	UNK_0x8D17794CE3273D70("random@paparazzi@wait");
	UNK_0x8D17794CE3273D70("veh@std@ps@idle_panic");
	UNK_0x8D17794CE3273D70("veh@low@front_ps@idle_panic");
	UNK_0x8D17794CE3273D70(bLocal_374);
	UNK_0x8C26F31DFF77D124();
	if (func_232())
	{
		UNK_0x51B096AAC60548C1(1f);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_86) && !UNK_0xEB6A8945D1AC98A1(bLocal_86))
	{
		if (UNK_0x16102BEDC7435774(bLocal_86))
		{
			UNK_0x0A94A109271BE75A(bLocal_86);
		}
		if (UNK_0x405E212DDE472467(bLocal_86, 1))
		{
			if (!UNK_0xE9FDA1035CFEA94F(bLocal_86))
			{
				UNK_0x75CDA8644CD3B5F5(bLocal_86, 0, 0);
			}
		}
	}
	func_284(-1);
	UNK_0x053C926E5E341906();
	UNK_0xB8C3D2D6C4AAEF18(0);
	UNK_0xAB8E2DDC7AF955E0(joaat("VADER"), false);
	UNK_0xAB8E2DDC7AF955E0(joaat("SURANO"), false);
	UNK_0xAB8E2DDC7AF955E0(joaat("CAVALCADE2"), false);
	UNK_0x2952D66A502EA873(iLocal_365, 0);
	UNK_0x2952D66A502EA873(iLocal_366, 0);
	UNK_0x2952D66A502EA873(iLocal_367, 0);
	UNK_0xE342F209E49C5314(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), true, 1);
	if (Global_31009)
	{
		UNK_0xC92DB9682A650680("AC_STOP");
	}
	func_283();
	UNK_0x10FAF14A60A0DBE1();
}

void func_283()
{
	Global_31005 = 0;
	Global_31006 = 0;
	Global_31008 = 0;
	Global_31009 = 0;
	Global_31010 = 0;
}

void func_284(int iParam0)
{
	char cVar0[64];

	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_232())
	{
		func_288(iParam0);
		UNK_0x974531784BE14213(0, 0);
		Global_111629 = UNK_0x1C0640BA9A7327B3();
		func_287(30000);
		StringCopy(&cVar0, func_286(Global_111627, 1), 64);
		if (func_103(Global_111627) > 0)
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
	func_285(&Global_30827);
	Global_111628 = 0;
	func_238(-1);
}

void func_285(var uParam0)
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

char* func_286(int iParam0, bool bParam1)
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

void func_287(int iParam0)
{
	Global_41982 = (UNK_0x1C0640BA9A7327B3() + iParam0);
}

void func_288(int iParam0)
{
	func_289(iParam0, 0, func_294(iParam0));
}

void func_289(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	struct<16> Var1;

	bVar0 = func_256();
	func_292(&bVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_291(iParam0, &bVar0);
	Var1 = { func_290(&bVar0) };
}

struct<16> func_290(bool bParam0)
{
	struct<16> Var0;
	bool bVar16;

	StringCopy(&Var0, "", 64);
	bVar16 = func_250(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_249(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, ":", 64);
	bVar16 = func_248(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "  ", 64);
	bVar16 = func_251(*bParam0);
	if (bVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16, 64);
	StringConCat(&Var0, "/", 64);
	bVar16 = func_254(*bParam0);
	if (bVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, bVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_252(*bParam0), 64);
	return Var0;
}

void func_291(int iParam0, bool bParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *bParam1;
}

void func_292(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_252(*bParam0);
	bVar1 = func_254(*bParam0);
	iVar2 = func_251(*bParam0);
	iVar3 = func_250(*bParam0);
	iVar4 = func_249(*bParam0);
	iVar5 = func_248(*bParam0);
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
	iVar6 = func_247(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_247(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_293(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_293(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_262(bParam0, iParam1);
	func_261(bParam0, iParam2);
	func_260(bParam0, iParam3);
	func_258(bParam0, bParam5);
	func_259(bParam0, iParam4);
	func_257(bParam0, iParam6);
}

int func_294(int iParam0)
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

void func_295(var uParam0, bool bParam1)
{
	int iVar0;

	if (!bParam1)
	{
		func_297(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_296(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_296(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_297(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (UNK_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
		{
			func_298(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_298(var uParam0)
{
	func_299(*uParam0, "NULL", uParam0->f_1);
}

void func_299(bool bParam0, bool bParam1, bool bParam2)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0, 30))
	{
		switch (func_226(bParam0))
		{
			case 0:
				UNK_0x71199B01895C6202(bParam2);
				break;
			case 1:
				UNK_0x8D17794CE3273D70(bParam1);
				break;
			case 2:
				UNK_0x413168EF79E35C7B(bParam1);
				break;
			case 3:
				UNK_0xF5A41F3D3B38EFE3(bParam1);
				break;
			case 4:
				UNK_0xDB8844D4B7C60440(bParam2, bParam1);
				break;
			case 5:
				UNK_0x2F3540C2227116A3(bParam1);
				break;
			case 6:
				UNK_0x8C26F31DFF77D124();
				break;
			case 7:
				UNK_0xB60B60856BF98DCE(bParam2);
				break;
			case 8:
				UNK_0x11CCD0ACA866C6C5(bParam2, UNK_0xEAE0D21A50E6C7F4(bParam0, 26));
				break;
			case 9:
				UNK_0x29D7581AEF4440C2();
				break;
			default:
				break;
		}
	}
}

void func_300(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_217(iVar0, bParam0);
		iVar0++;
	}
}

