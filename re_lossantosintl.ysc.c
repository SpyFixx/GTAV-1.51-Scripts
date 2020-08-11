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
	int iLocal_49[4] = { 0, 0, 0, 0 };
	bool bLocal_54 = false;
	int iLocal_55[4] = { 0, 0, 0, 0 };
	bool bLocal_60 = false;
	vector3 vLocal_61[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	bool bLocal_77 = false;
	bool bLocal_78 = false;
	bool bLocal_79 = false;
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	bool bLocal_82 = false;
	int iLocal_83 = 0;
	bool bLocal_84 = false;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = false;
	bool bLocal_90 = false;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	bool bLocal_95 = false;
	var uLocal_96 = 0;
	bool bLocal_97 = false;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	bLocal_78 = true;
	bLocal_84 = joaat("S_M_M_PILOT_01");
	iLocal_99 = 500;
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_12();
	}
	bLocal_97 = UNK_0x16F2683693E537C9();
	while (true)
	{
		if (UNK_0x437347B10A200C4B(bLocal_97, 0))
		{
			iLocal_98 = 5;
		}
		switch (iLocal_98)
		{
			case 0:
				iLocal_98 = 1;
				break;
			case 1:
				func_11();
				iLocal_98 = 2;
				break;
			case 2:
				if (func_10())
				{
					iLocal_98 = 3;
				}
				break;
			case 3:
				func_9();
				iLocal_98 = 4;
				break;
			case 4:
				if (Global_95672)
				{
					iLocal_98 = 5;
				}
				func_4();
				break;
			case 5:
				func_1();
				func_12();
				break;
		}
		SYSTEM::WAIT(iLocal_99);
	}
}

void func_1()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_49[iVar0]))
		{
			if (UNK_0x03068588A1FCED1A(iLocal_49[iVar0]) || (!UNK_0x437347B10A200C4B(iLocal_49[iVar0], 0) && !UNK_0x4FC40AB0ECCE6E18(iLocal_49[iVar0])))
			{
				UNK_0xA954465BA6FDEFE2(&(iLocal_49[iVar0]));
				UNK_0xEBA53F35D0085654(&(iLocal_55[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(iLocal_49[iVar0]), &(iLocal_55[iVar0]));
				UNK_0x046C362CF15F1935(&(iLocal_49[iVar0]));
				UNK_0x6DAD7906B73F064D(&(iLocal_55[iVar0]));
			}
		}
		iVar0++;
	}
	if (UNK_0xC844350D5D58C99A(bLocal_54))
	{
		if (UNK_0x03068588A1FCED1A(bLocal_54))
		{
			UNK_0xA954465BA6FDEFE2(&bLocal_54);
			UNK_0xEBA53F35D0085654(&bLocal_60);
		}
		else
		{
			func_2(&bLocal_54, &bLocal_60);
			UNK_0x046C362CF15F1935(&bLocal_54);
			UNK_0x6DAD7906B73F064D(&bLocal_60);
		}
	}
	if (bLocal_82)
	{
		UNK_0xDB8844D4B7C60440(101, "AirportJetTakeOff");
		UNK_0xDB8844D4B7C60440(102, "AirportJetTakeOff");
		UNK_0xDB8844D4B7C60440(101, "AirportNew");
		UNK_0xDB8844D4B7C60440(102, "AirportNew");
		UNK_0xDB8844D4B7C60440(103, "AirplaneLandingRedux");
		UNK_0xDB8844D4B7C60440(104, "AirplaneLandingRedux");
		UNK_0xDB8844D4B7C60440(101, "EastWestFlight");
	}
}

void func_2(bool bParam0, bool bParam1)
{
	if (((UNK_0xC844350D5D58C99A(*bParam0) && UNK_0xC844350D5D58C99A(*bParam1)) && !UNK_0x437347B10A200C4B(*bParam0, 0)) && !UNK_0x437347B10A200C4B(*bParam1, 0))
	{
		if (UNK_0xE934758D273C899A(*bParam0))
		{
			if (UNK_0x20D6474D5F4B9FC6(*bParam0))
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					UNK_0x0C4243AF9A434F34(*bParam1, *bParam0, false, false, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_78)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_49[0]) && !UNK_0x437347B10A200C4B(iLocal_49[0], 0))
		{
			if (UNK_0xE934758D273C899A(iLocal_49[0]))
			{
				if (!UNK_0x20D6474D5F4B9FC6(iLocal_49[0]))
				{
					if ((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !UNK_0x437347B10A200C4B(iLocal_55[0], 0)) && !UNK_0x437347B10A200C4B(iLocal_49[0], 0))
					{
						UNK_0x0C4243AF9A434F34(iLocal_55[0], iLocal_49[0], false, false, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !UNK_0x437347B10A200C4B(iLocal_55[0], 0)) && !UNK_0x437347B10A200C4B(iLocal_49[0], 0))
					{
						UNK_0x0C4243AF9A434F34(iLocal_55[0], iLocal_49[0], false, false, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(iLocal_49[2]) && !UNK_0x437347B10A200C4B(iLocal_49[2], 0))
		{
			if (UNK_0xE934758D273C899A(iLocal_49[2]))
			{
				if (!UNK_0x20D6474D5F4B9FC6(iLocal_49[2]))
				{
					if ((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !UNK_0x437347B10A200C4B(iLocal_55[2], 0)) && !UNK_0x437347B10A200C4B(iLocal_49[2], 0))
					{
						UNK_0x0C4243AF9A434F34(iLocal_55[2], iLocal_49[2], false, false, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !UNK_0x437347B10A200C4B(iLocal_55[2], 0)) && !UNK_0x437347B10A200C4B(iLocal_49[2], 0))
					{
						UNK_0x0C4243AF9A434F34(iLocal_55[2], iLocal_49[2], false, false, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
	}
}

void func_4()
{
	int iVar0;

	switch (iLocal_88)
	{
		case 0:
			vLocal_61[0 /*3*/] = { -1542.113f, -3023.802f, 23.2538f };
			vLocal_61[1 /*3*/] = { -3089.888f, -1960.075f, 313.559f };
			vLocal_61[2 /*3*/] = { -1037.638f, -3316.12f, 23.2475f };
			vLocal_61[3 /*3*/] = { 451.174f, -4009.46f, 135.1171f };
			vLocal_74 = { -1612.174f, -2688.442f, 12.9444f };
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if ((UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()) || UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9())) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					bLocal_78 = false;
				}
				else
				{
					bLocal_78 = true;
				}
			}
			iLocal_88 = 1;
			break;
		case 1:
			UNK_0x523BCC9DC80CD82F(joaat("JET"));
			UNK_0x523BCC9DC80CD82F(bLocal_84);
			UNK_0x36187931D29E5BBE(101, "AirportJetTakeOff");
			UNK_0x36187931D29E5BBE(103, "AirplaneLandingRedux");
			UNK_0x36187931D29E5BBE(101, "EastWestFlight");
			UNK_0x36187931D29E5BBE(101, "AirportNew");
			UNK_0x36187931D29E5BBE(104, "AirplaneLandingRedux");
			iLocal_88 = 2;
			break;
		case 2:
			if (!bLocal_82)
			{
				if ((((((UNK_0xB87F6CF6E5628C67(joaat("JET")) && UNK_0xB87F6CF6E5628C67(bLocal_84)) && UNK_0x3DDA6C6A285628E4(101, "AirportJetTakeOff")) && UNK_0x3DDA6C6A285628E4(103, "AirplaneLandingRedux")) && UNK_0x3DDA6C6A285628E4(101, "AirportNew")) && UNK_0x3DDA6C6A285628E4(104, "AirplaneLandingRedux")) && UNK_0x3DDA6C6A285628E4(101, "EastWestFlight"))
				{
					bLocal_82 = true;
				}
				else
				{
					UNK_0x523BCC9DC80CD82F(joaat("JET"));
					UNK_0x523BCC9DC80CD82F(bLocal_84);
					UNK_0x36187931D29E5BBE(101, "AirportJetTakeOff");
					UNK_0x36187931D29E5BBE(102, "AirportJetTakeOff");
					UNK_0x36187931D29E5BBE(101, "AirportNew");
					UNK_0x36187931D29E5BBE(102, "AirportNew");
					UNK_0x36187931D29E5BBE(101, "EastWestFlight");
				}
			}
			if (bLocal_82)
			{
				if (!UNK_0x8E28E832BEAC3DCE(vLocal_61[0 /*3*/], 50f) && !UNK_0x8E28E832BEAC3DCE(vLocal_74, 50f))
				{
					iLocal_88 = 3;
				}
				else
				{
					if (UNK_0x8E28E832BEAC3DCE(vLocal_61[0 /*3*/], 50f))
					{
					}
					if (UNK_0x8E28E832BEAC3DCE(vLocal_74, 50f))
					{
					}
				}
			}
			break;
		case 3:
			iLocal_49[0] = UNK_0x122AAB0B1D6F55AD(joaat("JET"), vLocal_61[0 /*3*/], false, true, true, false);
			UNK_0xD8F6A53F4799FAFE(iLocal_49[0], 240.3179f);
			UNK_0xEEC7D92310C70DE2(iLocal_49[0], 0);
			iLocal_49[1] = UNK_0x122AAB0B1D6F55AD(joaat("JET"), vLocal_61[1 /*3*/], false, true, true, false);
			UNK_0xEEC7D92310C70DE2(iLocal_49[1], 0);
			iLocal_49[2] = UNK_0x122AAB0B1D6F55AD(joaat("JET"), vLocal_61[2 /*3*/], false, true, true, false);
			UNK_0xEEC7D92310C70DE2(iLocal_49[2], 0);
			iLocal_49[3] = UNK_0x122AAB0B1D6F55AD(joaat("JET"), vLocal_61[3 /*3*/], false, true, true, false);
			UNK_0xEEC7D92310C70DE2(iLocal_49[3], 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (UNK_0xC844350D5D58C99A(iLocal_49[iVar0]))
				{
					iLocal_55[iVar0] = UNK_0x852A19533F896693(iLocal_49[iVar0], 4, bLocal_84, -1, 1, true);
					UNK_0x25BD67336EA4AECE(iLocal_49[iVar0], 1000);
					UNK_0x56FDC9ADE35F7DB0(iLocal_49[iVar0], true, true, 0);
					UNK_0x11AD11297DC58CC7(iLocal_55[iVar0], true);
				}
				iVar0++;
			}
			func_8(&(iLocal_49[1]), &(iLocal_55[1]));
			func_8(&(iLocal_49[2]), &(iLocal_55[2]));
			func_8(&(iLocal_49[3]), &(iLocal_55[3]));
			if (bLocal_78)
			{
				if (UNK_0xC844350D5D58C99A(iLocal_49[0]))
				{
					if (UNK_0x3DDA6C6A285628E4(101, "AirportJetTakeOff"))
					{
						UNK_0x0CB57CDDC76DA8E0(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						bLocal_77 = true;
					}
					else
					{
						UNK_0x36187931D29E5BBE(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_88 = 4;
			break;
		case 4:
			if (bLocal_81)
			{
				if (UNK_0xC844350D5D58C99A(iLocal_49[3]) && !UNK_0x437347B10A200C4B(iLocal_49[3], 0))
				{
					if (UNK_0x03068588A1FCED1A(iLocal_49[3]))
					{
						if (!bLocal_79)
						{
							func_8(&(iLocal_49[3]), &(iLocal_55[3]));
							bLocal_79 = true;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_87)
			{
				case 0:
					if (!bLocal_77)
					{
						if (bLocal_78)
						{
							if (UNK_0xC844350D5D58C99A(iLocal_49[0]) && !UNK_0x437347B10A200C4B(iLocal_49[0], 0))
							{
								if (UNK_0x03068588A1FCED1A(iLocal_49[0]) && !UNK_0x8E28E832BEAC3DCE(vLocal_61[0 /*3*/], 50f))
								{
									if (UNK_0x3DDA6C6A285628E4(101, "AirportJetTakeOff"))
									{
										UNK_0x0CB57CDDC76DA8E0(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										bLocal_77 = true;
									}
									else
									{
										UNK_0x36187931D29E5BBE(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (bLocal_77)
					{
						if (UNK_0xC844350D5D58C99A(iLocal_49[0]) && !UNK_0x437347B10A200C4B(iLocal_49[0], 0))
						{
							if (UNK_0x20D6474D5F4B9FC6(iLocal_49[0]))
							{
								fLocal_85 = UNK_0x7B694C942A404ABF(iLocal_49[0]);
							}
						}
						if (fLocal_85 > 1100f)
						{
							iLocal_87 = 1;
						}
					}
					break;
				case 1:
					if (UNK_0xC844350D5D58C99A(iLocal_49[1]) && !UNK_0x437347B10A200C4B(iLocal_49[1], 0))
					{
						if (bLocal_78)
						{
							if (UNK_0x03068588A1FCED1A(iLocal_49[1]))
							{
								if (bLocal_81)
								{
									if (bLocal_79)
									{
										func_6(&(iLocal_49[1]), &(iLocal_55[1]));
										if (UNK_0x3DDA6C6A285628E4(103, "AirplaneLandingRedux"))
										{
											UNK_0x0CB57CDDC76DA8E0(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											bLocal_80 = false;
											iLocal_87 = 2;
										}
										else
										{
											UNK_0x36187931D29E5BBE(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(iLocal_49[1]), &(iLocal_55[1]));
									if (UNK_0x3DDA6C6A285628E4(103, "AirplaneLandingRedux"))
									{
										UNK_0x0CB57CDDC76DA8E0(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										bLocal_80 = false;
										iLocal_87 = 2;
									}
									else
									{
										UNK_0x36187931D29E5BBE(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				case 2:
					if (UNK_0xC844350D5D58C99A(iLocal_49[1]) && !UNK_0x437347B10A200C4B(iLocal_49[1], 0))
					{
						if (!UNK_0x20D6474D5F4B9FC6(iLocal_49[1]))
						{
							iLocal_87 = 3;
						}
					}
					break;
				case 3:
					if (UNK_0xC844350D5D58C99A(iLocal_49[2]) && !UNK_0x437347B10A200C4B(iLocal_49[2], 0))
					{
						if (UNK_0x3DDA6C6A285628E4(101, "AirportNew"))
						{
							if (!UNK_0x8E28E832BEAC3DCE(vLocal_61[2 /*3*/], 50f))
							{
								if (!UNK_0x20D6474D5F4B9FC6(iLocal_49[2]))
								{
									func_6(&(iLocal_49[2]), &(iLocal_55[2]));
									UNK_0x4D3C3C0B0DE2663E(iLocal_49[2], 101, "AirportNew", 1);
									iLocal_87 = 4;
								}
							}
						}
					}
					break;
				case 4:
					if (UNK_0xC844350D5D58C99A(iLocal_49[2]) && !UNK_0x437347B10A200C4B(iLocal_49[2], 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(iLocal_49[2]))
						{
							fLocal_86 = UNK_0x7B694C942A404ABF(iLocal_49[2]);
						}
					}
					if (UNK_0xC844350D5D58C99A(iLocal_49[1]) && !UNK_0x437347B10A200C4B(iLocal_49[1], 0))
					{
						if (!UNK_0x20D6474D5F4B9FC6(iLocal_49[1]))
						{
							if (UNK_0x03068588A1FCED1A(iLocal_49[1]))
							{
								func_8(&(iLocal_49[1]), &(iLocal_55[1]));
								bLocal_80 = true;
							}
						}
					}
					if (fLocal_86 > 1100f)
					{
						if (UNK_0xC844350D5D58C99A(iLocal_49[3]) && !UNK_0x437347B10A200C4B(iLocal_49[3], 0))
						{
							if (UNK_0x3DDA6C6A285628E4(104, "AirplaneLandingRedux"))
							{
								if (!UNK_0x8E28E832BEAC3DCE(vLocal_61[3 /*3*/], 50f))
								{
									if (!UNK_0x20D6474D5F4B9FC6(iLocal_49[3]) && bLocal_80)
									{
										func_6(&(iLocal_49[3]), &(iLocal_55[3]));
										UNK_0x4D3C3C0B0DE2663E(iLocal_49[3], 104, "AirplaneLandingRedux", 1);
										iLocal_87 = 5;
									}
								}
							}
						}
					}
					break;
				case 5:
					if (UNK_0xC844350D5D58C99A(iLocal_49[3]) && !UNK_0x437347B10A200C4B(iLocal_49[3], 0))
					{
						if (!UNK_0x20D6474D5F4B9FC6(iLocal_49[3]))
						{
							func_5();
							iLocal_87 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()
{
	fLocal_85 = 0f;
	bLocal_77 = false;
	bLocal_81 = true;
	bLocal_79 = false;
}

void func_6(var uParam0, var uParam1)
{
	UNK_0x4A4806F9D471E491(*uParam0, true, 0);
	UNK_0x4A4806F9D471E491(*uParam1, true, 0);
	UNK_0x20641932E5104B25(*uParam0, true, 0);
	UNK_0x1E9649458B15960F(*uParam0, false);
}

void func_7()
{
	vector3 vVar0;

	switch (iLocal_83)
	{
		case 0:
			if (!UNK_0xC844350D5D58C99A(bLocal_54))
			{
				bLocal_54 = UNK_0x122AAB0B1D6F55AD(joaat("JET"), -65.3177f, 15.4603f, 703.106f, false, true, true, false);
				UNK_0x25BD67336EA4AECE(bLocal_54, 1000);
				UNK_0x56FDC9ADE35F7DB0(bLocal_54, true, true, 0);
				UNK_0xEEC7D92310C70DE2(bLocal_54, 0);
				bLocal_60 = UNK_0x852A19533F896693(bLocal_54, 4, bLocal_84, -1, 1, true);
				UNK_0x11AD11297DC58CC7(bLocal_60, true);
				iLocal_83 = 1;
			}
			break;
		case 1:
			if (UNK_0xC844350D5D58C99A(bLocal_54) && !UNK_0x437347B10A200C4B(bLocal_54, 0))
			{
				if (UNK_0x3DDA6C6A285628E4(101, "EastWestFlight"))
				{
					if (!UNK_0x20D6474D5F4B9FC6(bLocal_54))
					{
						UNK_0x0CB57CDDC76DA8E0(bLocal_54, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_83 = 2;
					}
				}
			}
			break;
		case 2:
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
			}
			if (UNK_0xC844350D5D58C99A(bLocal_54) && !UNK_0x437347B10A200C4B(bLocal_54, 0))
			{
				if (!UNK_0x20D6474D5F4B9FC6(bLocal_54))
				{
					if ((UNK_0x03068588A1FCED1A(bLocal_54) && !UNK_0x8E28E832BEAC3DCE(-1602.086f, -2674.039f, 12.9444f, 50f)) && SYSTEM::VDIST2(vVar0, UNK_0x68F4C0EC296D3901(bLocal_54, true)) > 62500f)
					{
						iLocal_83 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	UNK_0x4A4806F9D471E491(*uParam0, false, 0);
	UNK_0x4A4806F9D471E491(*uParam1, false, 0);
	UNK_0x20641932E5104B25(*uParam0, false, 0);
	UNK_0x1E9649458B15960F(*uParam0, true);
}

void func_9()
{
}

bool func_10()
{
	return true;
}

void func_11()
{
}

void func_12()
{
	func_1();
	func_13();
	UNK_0x10FAF14A60A0DBE1();
}

void func_13()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;

	if (UNK_0xC844350D5D58C99A(bLocal_89))
	{
		if (UNK_0x03068588A1FCED1A(bLocal_89))
		{
			UNK_0xA954465BA6FDEFE2(&bLocal_89);
		}
		else if (!UNK_0x437347B10A200C4B(bLocal_89, 0) && !UNK_0xEB6A8945D1AC98A1(bLocal_90))
		{
			UNK_0xC55F2A0377488064(bLocal_89);
			UNK_0xFADC0A217229F6B5(bLocal_90, true);
			vVar0 = { UNK_0x68F4C0EC296D3901(bLocal_89, true) };
			bVar9 = UNK_0xD9522BA9E27E1349(bLocal_89);
			vVar3 = { 0f, 500f, 50f };
			vVar6 = { UNK_0x8A5E176FF719A014(vVar0, bVar9, vVar3) };
			UNK_0x9AFA0796FDCABCD5(bLocal_90, bLocal_89, false, false, vVar6, 4, 50f, -1f, 0f, 100, 50, -1f, 0);
		}
	}
	if (bLocal_95)
	{
		UNK_0xDB8844D4B7C60440(102, "HelicopterTakeOff");
	}
}

