#region Local Var
	bool bLocal_0 = false;
	bool bLocal_1 = false;
	bool bLocal_2 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;

	if (UNK_0x2EBF608FFE6CA406(19))
	{
		func_1();
	}
	bLocal_0 = ScriptParam_0;
	bLocal_1 = ScriptParam_0.f_1;
	while (!UNK_0xEAE0D21A50E6C7F4(bLocal_2, true))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_2, false))
		{
			if (UNK_0xC844350D5D58C99A(bLocal_0))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_0, 0))
				{
					UNK_0x73270B3C9CC833FD(bLocal_0, false, 1);
					UNK_0x1E9649458B15960F(bLocal_0, true);
					UNK_0xAA6B3A4292417750(bLocal_0, true, true, true, true, true, false, 0, false);
					if (UNK_0xC844350D5D58C99A(bLocal_1))
					{
						UNK_0x73270B3C9CC833FD(bLocal_1, false, 1);
						UNK_0x1E9649458B15960F(bLocal_1, true);
						UNK_0xAA6B3A4292417750(bLocal_1, true, true, true, true, true, false, 0, false);
					}
					UNK_0x5D96D8530B3D0904(&bLocal_2, false);
				}
			}
		}
		else if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_0, 0))
			{
				fVar0 = SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bLocal_0, true));
				if (fVar0 > 90000f)
				{
					UNK_0x5D96D8530B3D0904(&bLocal_2, true);
				}
				else if (fVar0 > 40000f && !UNK_0x0A059E0DB9253280(bLocal_0))
				{
					UNK_0x5D96D8530B3D0904(&bLocal_2, true);
				}
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&bLocal_2, true);
			}
		}
		SYSTEM::WAIT(0);
	}
	func_1();
}

void func_1()
{
	UNK_0x046C362CF15F1935(&bLocal_0);
	UNK_0x82692E8F6A0D7A22(&bLocal_1);
	UNK_0x10FAF14A60A0DBE1();
}

