#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	bool bLocal_4 = false;
	bool bScriptParam_0 = false;
#endregion

void __EntryFunction__()
{
	int iVar0;

	if (UNK_0x2EBF608FFE6CA406(2))
	{
		func_1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (UNK_0xC844350D5D58C99A(bScriptParam_0))
		{
			if (UNK_0x63D2C15453688621(bScriptParam_0) && UNK_0x8A22C4C08282BF26(joaat("FINALEC1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
						{
							iVar0 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
							if (UNK_0x31609A585163CBAC(iVar0))
							{
								if (UNK_0xBD307E66C0669BFC(iVar0))
								{
									if (UNK_0x7C2B4C53942076F8())
									{
										UNK_0x9E5E60D8C63FD9D1();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					case 1:
						if (UNK_0x25F7A4D42AF2AB93())
						{
							if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
							{
								if (!UNK_0xC844350D5D58C99A(bLocal_4))
								{
									bLocal_4 = UNK_0x4B72871A3BE7B474(1090f, -1996f, 39f, 100f, joaat("V_ILEV_FOUND_CRANEBUCKET"), 1, 0, 1);
								}
								if (!UNK_0x83A8177D302E1A7E(iLocal_3))
								{
									if (UNK_0xC844350D5D58C99A(bLocal_4))
									{
										iVar0 = UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9());
										if (UNK_0x31609A585163CBAC(iVar0))
										{
											if (UNK_0xBD307E66C0669BFC(iVar0))
											{
												if (UNK_0x7C2B4C53942076F8())
												{
													iLocal_3 = UNK_0xC1879030EB463216("scr_obfoundry_cauldron_steam", bLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
						break;
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (UNK_0x83A8177D302E1A7E(iLocal_3))
	{
		UNK_0xF7E25143642732EA(iLocal_3, 0);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_4))
	{
		UNK_0xEEEE2E5FA6F78DF0(&bLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	UNK_0x10FAF14A60A0DBE1();
}

void func_2(bool bParam0)
{
	func_3(bParam0);
}

void func_3(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE(bParam0, bParam0))
	{
	}
}

