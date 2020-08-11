#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	iLocal_0 = -1;
	UNK_0xB57F88F0123F4C38();
	UNK_0x2404539258C5376B("prologue06_int");
	UNK_0x2404539258C5376B("prologue01");
	UNK_0x2404539258C5376B("prologue02");
	UNK_0x2404539258C5376B("prologue03");
	UNK_0x2404539258C5376B("prologue04");
	UNK_0x2404539258C5376B("prologue05");
	UNK_0x2404539258C5376B("prologue06");
	UNK_0x2404539258C5376B("prologuerd");
	UNK_0x2404539258C5376B("Prologue01c");
	UNK_0x2404539258C5376B("Prologue01d");
	UNK_0x2404539258C5376B("Prologue01e");
	UNK_0x2404539258C5376B("Prologue01f");
	UNK_0x2404539258C5376B("Prologue01g");
	UNK_0x2404539258C5376B("prologue01h");
	UNK_0x2404539258C5376B("prologue01i");
	UNK_0x2404539258C5376B("prologue01j");
	UNK_0x2404539258C5376B("prologue01k");
	UNK_0x2404539258C5376B("prologue01z");
	UNK_0x2404539258C5376B("prologue03b");
	UNK_0x2404539258C5376B("prologue04b");
	UNK_0x2404539258C5376B("prologue05b");
	UNK_0x2404539258C5376B("prologue06b");
	UNK_0x2404539258C5376B("prologuerdb");
	UNK_0x2404539258C5376B("prologue_occl");
	UNK_0x2404539258C5376B("DES_ProTree_start");
	UNK_0x2404539258C5376B("DES_ProTree_start_lod");
	UNK_0x2404539258C5376B("prologue04_cover");
	UNK_0x2404539258C5376B("prologue03_grv_fun");
	UNK_0x81CF20E10AAD5FD5("prologue03_grv_dug");
	UNK_0x81CF20E10AAD5FD5("prologue_grv_torch");
	UNK_0x666B67209D7AA5DD("prologue", 1);
	UNK_0x523BCC9DC80CD82F(joaat("CSB_PROLSEC"));
	while (!UNK_0xB87F6CF6E5628C67(joaat("CSB_PROLSEC")))
	{
		SYSTEM::WAIT(0);
	}
	UNK_0xC634196566A6962B(UNK_0xD803B885F5E47A62(), joaat("CSB_PROLSEC"));
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), 5313.8f, -5207.2f, 83.5f, 1, 0, 0, 1);
		UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 169.2f);
	}
	UNK_0xBFE31971E49FA500(0);
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
	UNK_0x9E632F16E887F781(5312.996f, -5208.671f, 83.90526f, 10f, 0);
	iVar0 = UNK_0x1C0640BA9A7327B3() + 10000;
	while (!UNK_0x68367101660E33F0() && UNK_0x1C0640BA9A7327B3() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	UNK_0x9CCCC7CF60F2D30F();
	UNK_0x8BC9595FD2792B5D("MISSION_FAILED_SCENE");
	UNK_0x82E51BCA72537B6C(2500);
	UNK_0x486B4ADE317F0689();
	UNK_0xD7992BEF7A9D109E("NG_INSTALL", false);
	while (true)
	{
		if (!UNK_0x0F1CCD77290EE12F())
		{
			UNK_0x82E51BCA72537B6C(0);
		}
		UNK_0xC1032CAC14DE468A(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
		UNK_0xC1032CAC14DE468A(0.5f, 0.5f, 0.8f, 0.8f, 20, 20, 20, 255, 0);
		UNK_0xD3539A877EC25E86(0.5f, 0.5f);
		UNK_0xAAE406A7DA443B93(1);
		if (SYSTEM::TIMERA() > 10000 && UNK_0x67C1D9E5B91B2E37(false))
		{
			iLocal_0 = UNK_0x09AC81E49EA267F7(false, 5);
			if ((iLocal_0 - iLocal_1) != 0)
			{
				iLocal_1 = iLocal_0;
				SYSTEM::SETTIMERA(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0.5f, 0.4f, "NG_INST_TT_1", 0);
					break;
				case 1:
					func_1(0.5f, 0.4f, "NG_INST_TT_2", 0);
					break;
				case 2:
					func_1(0.5f, 0.4f, "NG_INST_TT_3", 0);
					break;
				case 3:
					func_1(0.5f, 0.4f, "NG_INST_TT_4", 0);
					break;
				case 4:
					func_1(0.5f, 0.4f, "NG_INST_TT_5", 0);
					break;
			}
		}
		UNK_0x857E3CE01DEA2D26();
		if (UNK_0xA1F6F2E566B60C4B())
		{
			UNK_0x0922D0C0FDC7C49E();
			return;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(float fParam0, float fParam1, bool bParam2, int iParam3)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

