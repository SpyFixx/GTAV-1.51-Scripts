void __EntryFunction__()
{
	UNK_0xB57F88F0123F4C38();
	func_1("main_install", 1424);
}

void func_1(bool bParam0, int iParam1)
{
	UNK_0x92DCE5C81176D2B4(bParam0);
	while (!UNK_0x1FBF08B001C4788A(bParam0))
	{
		SYSTEM::WAIT(0);
		UNK_0x92DCE5C81176D2B4(bParam0);
	}
	SYSTEM::START_NEW_SCRIPT(bParam0, iParam1);
}

