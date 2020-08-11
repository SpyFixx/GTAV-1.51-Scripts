#region Local Var
	bool bLocal_0 = false;
	vector3 vLocal_1 = { 0f, 0f, 0f };
	int iLocal_4 = 0;
	float fLocal_5 = 0f;
	int iLocal_6 = 0;
	bool bLocal_7 = false;
	bool bLocal_8 = false;
	bool bLocal_9 = false;
#endregion

void __EntryFunction__()
{
	vLocal_1 = { 613f, 6438f, 31f };
	fLocal_5 = 5f;
	iLocal_6 = 1;
	UNK_0x7798376279BB5369(1);
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_1();
	}
	UNK_0xF48790410026514E(0);
	UNK_0x52D3C9744D7CF20D();
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), -177f);
		UNK_0x2FB9A57162E54BAB(0f);
	}
	UNK_0x523BCC9DC80CD82F(joaat("FREIGHT"));
	UNK_0x523BCC9DC80CD82F(joaat("FREIGHTCAR"));
	UNK_0x523BCC9DC80CD82F(joaat("FREIGHTGRAIN"));
	UNK_0x523BCC9DC80CD82F(joaat("FREIGHTCONT1"));
	UNK_0x523BCC9DC80CD82F(joaat("FREIGHTCONT2"));
	UNK_0x523BCC9DC80CD82F(joaat("TANKERCAR"));
	UNK_0x523BCC9DC80CD82F(joaat("METROTRAIN"));
	while ((((((!UNK_0xB87F6CF6E5628C67(joaat("FREIGHT")) || !UNK_0xB87F6CF6E5628C67(joaat("FREIGHTCAR"))) || !UNK_0xB87F6CF6E5628C67(joaat("FREIGHTGRAIN"))) || !UNK_0xB87F6CF6E5628C67(joaat("FREIGHTCONT1"))) || !UNK_0xB87F6CF6E5628C67(joaat("FREIGHTCONT2"))) || !UNK_0xB87F6CF6E5628C67(joaat("TANKERCAR"))) || !UNK_0xB87F6CF6E5628C67(joaat("METROTRAIN")))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (bLocal_7)
			{
				if (UNK_0xC844350D5D58C99A(bLocal_0))
				{
					UNK_0x86AA47F87DFBA4D0(&bLocal_0);
				}
				bLocal_0 = UNK_0x9F136BAA293FE131(iLocal_4, vLocal_1, iLocal_6);
				bLocal_7 = false;
			}
			if (bLocal_9)
			{
				vLocal_1 = { UNK_0xF1EE614CA05DDE75() };
				bLocal_9 = false;
			}
			if (UNK_0xDF1306B443CD3D15(bLocal_0, 0) && !UNK_0x437347B10A200C4B(bLocal_0, 0))
			{
				UNK_0x88FD99BDEAF715B4(bLocal_0, fLocal_5);
				UNK_0x5D6C12CA95187FB3(bLocal_0, fLocal_5);
			}
			if (bLocal_8)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	UNK_0xF48790410026514E(1);
	UNK_0x10FAF14A60A0DBE1();
}

