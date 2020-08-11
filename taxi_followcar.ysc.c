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
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_64 = false;
	bool bLocal_65 = false;
	bool bLocal_66 = false;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = false;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = false;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 1132396544;
	var uLocal_101 = 1132396544;
	var uLocal_102 = 1132396544;
	var uLocal_103 = 0;
	var uLocal_104 = -1082130432;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 8;
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
	var uLocal_164 = -1;
	var uLocal_165 = 1092616192;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	struct<21> Local_169 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_190[15];
	bool bLocal_341 = false;
	bool bLocal_342 = false;
	struct<2> Local_343 = { 0, 16 } ;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	vector3 vLocal_409[1] = {{ 0f, 0f, 0f } };
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417[3] = { 0, 0, 0 };
	bool bLocal_421 = false;
	int iLocal_422 = 0;
	struct<418> Local_423 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_841 = -1;
	var uLocal_842 = -1;
	var uLocal_843 = -1;
	var uLocal_844 = -1;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	struct<32> Local_853 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_885 = 0;
	bool bLocal_886 = false;
	bool bLocal_887 = false;
	bool bLocal_888 = false;
	bool bLocal_889 = false;
	bool bLocal_890 = false;
	bool bLocal_891 = false;
	bool bLocal_892 = false;
	bool bLocal_893 = false;
	int iLocal_894 = 0;
	var uLocal_895 = 0;
	int iLocal_896 = 0;
	int iLocal_897 = 0;
	var uLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	bool bLocal_901 = false;
	bool bLocal_902 = false;
	bool bLocal_903 = false;
	bool bLocal_904 = false;
	bool bLocal_905 = false;
	bool bLocal_906 = false;
	bool bLocal_907 = false;
	bool bLocal_908 = false;
	bool bLocal_909 = false;
	bool bLocal_910 = false;
	bool bLocal_911 = false;
	bool bLocal_912 = false;
	bool bLocal_913 = false;
	bool bLocal_914 = false;
	bool bLocal_915 = false;
	vector3 vLocal_916 = { 0f, 0f, 0f };
	vector3 vLocal_919 = { 0f, 0f, 0f };
	vector3 vLocal_922 = { 0f, 0f, 0f };
	vector3 vLocal_925 = { 0f, 0f, 0f };
	vector3 vLocal_928 = { 0f, 0f, 0f };
	vector3 vLocal_931 = { 0f, 0f, 0f };
	vector3 vLocal_934 = { 0f, 0f, 0f };
	vector3 vLocal_937 = { 0f, 0f, 0f };
	vector3 vLocal_940 = { 0f, 0f, 0f };
	vector3 vLocal_943 = { 0f, 0f, 0f };
	vector3 vLocal_946 = { 0f, 0f, 0f };
	vector3 vLocal_949 = { 0f, 0f, 0f };
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	vector3 vLocal_955 = { 0f, 0f, 0f };
	vector3 vLocal_958 = { 0f, 0f, 0f };
	vector3 vLocal_961 = { 0f, 0f, 0f };
	vector3 vLocal_964 = { 0f, 0f, 0f };
	vector3 vLocal_967 = { 0f, 0f, 0f };
	bool bLocal_970 = false;
	bool bLocal_971 = false;
	float fLocal_972 = 0f;
	float fLocal_973 = 0f;
	bool bLocal_974 = false;
	int iLocal_975 = 0;
	char cLocal_976[16] = "";
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	char cLocal_980[64] = "";
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	char cLocal_996[64] = "";
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	char cLocal_1012[64] = "";
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	char cLocal_1028[64] = "";
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	vector3 vLocal_1044 = { 0f, 0f, 0f };
	vector3 vLocal_1047 = { 0f, 0f, 0f };
	bool bLocal_1050 = false;
	bool bLocal_1051 = false;
	struct<28> Local_1052 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 5;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	int iLocal_1123 = 0;
	int iLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 1097859072;
	var uLocal_1128 = 1500;
	var uLocal_1129 = 45;
	var uLocal_1130 = 1103626240;
	var uLocal_1131 = 5;
	int iLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	int iLocal_1142 = 0;
	int iLocal_1143 = 0;
	int iLocal_1144 = 0;
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
	iLocal_77 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_78 = UNK_0x817B3657F78A517A();
	vLocal_83 = { 500f, 500f, 500f };
	bLocal_886 = joaat("A_F_Y_GENHOT_01");
	bLocal_887 = joaat("A_F_Y_BEVHILLS_01");
	bLocal_888 = joaat("AMBULANCE");
	bLocal_889 = joaat("BISON");
	iLocal_896 = 1;
	iLocal_897 = 1000;
	vLocal_916 = { 1358.822f, -1547.396f, 53.7793f };
	vLocal_919 = { 1358.822f, -1547.396f, 53.7793f };
	vLocal_922 = { -694.2758f, -1119.447f, 13.525f };
	vLocal_925 = { -683.1272f, -1102.185f, 13.5257f };
	vLocal_928 = { 410.2629f, -1399.16f, 28.4017f };
	vLocal_931 = { 371.3834f, -1482.955f, 28.3418f };
	vLocal_934 = { 404.8026f, -1416.294f, 28.435f };
	vLocal_937 = { 406.612f, -1419.937f, 29.00375f };
	vLocal_940 = { -682.5392f, -1109.082f, 13.6729f };
	vLocal_943 = { -688.6727f, -1117.512f, 13.52498f };
	vLocal_946 = { -667.136f, -1046.06f, 15.9174f };
	vLocal_949 = { -703.1228f, -1142.432f, 9.8127f };
	vLocal_955 = { -701.2533f, -1080.285f, 12.2884f };
	vLocal_958 = { -687.8794f, -1108.073f, 13.5257f };
	vLocal_961 = { -703.0013f, -1084.073f, 12.1105f };
	bLocal_970 = 25.0227f;
	bLocal_971 = 226.3085f;
	fLocal_972 = -128.2329f;
	fLocal_973 = 238.4969f;
	bLocal_974 = 212.7682f;
	StringCopy(&cLocal_976, "taxi_oj_fc_2", 16);
	StringCopy(&cLocal_980, "amb@world_human_hang_out_street@male_c@idle_a", 64);
	StringCopy(&cLocal_996, "amb@world_human_hang_out_street@male_c@exit", 64);
	StringCopy(&cLocal_1012, "amb@world_human_hang_out_street@female_hold_arm@idle_a", 64);
	StringCopy(&cLocal_1028, "amb@world_human_hang_out_street@female_hold_arm@exit", 64);
	vLocal_1044 = { -727.111f, -1046.357f, 11.43926f };
	vLocal_1047 = { -642.6097f, -1085.538f, 28.42921f };
	bLocal_1050 = 76.75f;
	iLocal_1123 = 786468;
	iLocal_1124 = 1;
	if (UNK_0x2EBF608FFE6CA406(67))
	{
		func_462(2);
		func_458();
	}
	UNK_0x7798376279BB5369(1);
	func_444();
	while (true)
	{
		if (UNK_0xC844350D5D58C99A(Local_423.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_423);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = UNK_0x16F2683693E537C9();
	func_7(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;

	iVar1 = func_3(UNK_0x16F2683693E537C9());
	if (iVar1 == 0)
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("SP2_DIST_DRIVING_CAR");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("SP1_DIST_DRIVING_CAR");
	}
	else
	{
		iVar0 = joaat("SP0_DIST_DRIVING_CAR");
	}
	return iVar0;
}

int func_3(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_5(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_6(int iParam0)
{
	return iParam0 < 3;
}

void func_7(var uParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = func_3(UNK_0x16F2683693E537C9());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, UNK_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_8(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_9()
{
	if (func_443(&Local_423))
	{
		func_442(&Local_423);
		if (UNK_0xE4EDC4B0E92C078B(Local_853.f_4))
		{
			UNK_0x142CC44DB769B57E(&(Local_853.f_4));
		}
		if (func_441(&Local_423, 0))
		{
			func_439();
		}
	}
	else
	{
		func_438(&Local_423);
		if (Local_423.f_410 < 28)
		{
			func_404(&Local_423, &uLocal_1125);
			func_403(&Local_423);
			func_402(&Local_423, &uLocal_898, 0);
		}
		if (Local_423.f_410 > 2)
		{
			if (!func_401(&Local_423))
			{
				func_370();
			}
			else
			{
				func_361(&Local_423, "Taxi Not Driveable", func_369(&Local_423));
			}
		}
		if (Local_423.f_410 >= 21 && !bLocal_905)
		{
			func_345();
		}
		if (bLocal_907)
		{
			UNK_0xD60411959D5D930B(0.8f);
		}
		if (Local_423.f_410 == 9 || Local_423.f_410 == 17)
		{
			func_321(&Local_423, 0, 0);
		}
		switch (Local_423.f_410)
		{
			case 0:
				func_318();
				func_317(&Local_423, 16, 4f, 0);
				func_315(&Local_423, vLocal_916, vLocal_919, "TaxiKeyla", bLocal_886, 41.1334f, 15f);
				func_314(&Local_423);
				func_313(&Local_423, 1);
				break;
			case 1:
				if (func_311())
				{
					func_310();
					func_290();
					func_289(&(vLocal_409[0 /*3*/]), "TAXI_SC_BN_04", 100);
					func_288(&Local_423, &vLocal_409);
					func_287(&Local_423);
					UNK_0xE342F209E49C5314(vLocal_928, vLocal_931, false, 1);
					Local_423.f_14 = { vLocal_916 };
					func_313(&Local_423, 3);
				}
				break;
			case 3:
				if (func_282(&Local_423, 1))
				{
					if (!UNK_0x437347B10A200C4B(Local_423.f_3, 0))
					{
						UNK_0x64F9F278AB9DCA2C(Local_423.f_3, false, false, true, 0);
						UNK_0x64F9F278AB9DCA2C(Local_423.f_3, 2, true, 2, 0);
						UNK_0x64F9F278AB9DCA2C(Local_423.f_3, 3, false, 2, 0);
						UNK_0x64F9F278AB9DCA2C(Local_423.f_3, 4, true, 3, 0);
						UNK_0x64F9F278AB9DCA2C(Local_423.f_3, 8, true, false, 0);
					}
					func_281(&Local_423, 1, 0);
					UNK_0xF63400DBE3303D26("TAXI_Escapee", &(Local_853.f_30));
					UNK_0x0E2400AB9174FA81(255, Local_853.f_30, Local_423.f_413);
					UNK_0x0E2400AB9174FA81(255, Local_853.f_30, joaat("PLAYER"));
					UNK_0xF858EFDE1871B5F2(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, false, 1);
					func_313(&Local_423, 5);
				}
				break;
			case 5:
				if (func_262(&Local_423, 0, 1109393408 /* Float: 40f */))
				{
					func_261();
					func_313(&Local_423, 6);
				}
				break;
			case 6:
				if (func_260(&Local_423))
				{
					func_256(&Local_423, 9, 1, 0, 0);
					func_255(&Local_423);
					Local_423.f_17 = { 485.2039f, -1418.064f, 28.2112f };
					func_254();
					func_253(392.8545f, -1379.577f, 29.2837f, 0, 50f);
					func_313(&Local_423, 17);
				}
				if (UNK_0xDF1306B443CD3D15(Local_423.f_4, 0))
				{
					if (!UNK_0xC42A92762C58E1B9(Local_423.f_2, Local_423.f_4, 0))
					{
						func_251(&Local_423);
						func_313(&Local_423, 5);
					}
				}
				break;
			case 17:
				func_250(&Local_423, &(Local_423.f_9));
				if (!UNK_0xC844350D5D58C99A(Local_853.f_3))
				{
					if (func_249())
					{
						func_248(&Local_853, vLocal_937, fLocal_972);
					}
				}
				else
				{
					func_247(&Local_423, &Local_853);
				}
				if (func_221(&Local_423, 9f, 1097859072 /* Float: 15f */, 1117782016 /* Float: 80f */))
				{
					if (UNK_0x327E5A6DA6CE9849(Local_423.f_9))
					{
						UNK_0x661342B9651D16E2(Local_423.f_9, false);
					}
					UNK_0x142CC44DB769B57E(&(Local_423.f_9));
					func_313(&Local_423, 19);
				}
				break;
			case 19:
				if (func_214())
				{
					if (!func_213())
					{
						func_256(&Local_423, 139, 1, 0, 0);
						bLocal_907 = true;
						func_313(&Local_423, 9);
					}
				}
				break;
			case 9:
				func_247(&Local_423, &Local_853);
				func_212();
				if (func_211(Local_853.f_2, Local_853.f_3))
				{
					func_210(&Local_423, 2, 0);
					UNK_0xE5B803CC231E2867(Local_853.f_2, 1);
					UNK_0xAFF39FB306F8E232(Local_853.f_2, 6, true);
					UNK_0xAFF39FB306F8E232(Local_853.f_2, 17, true);
					func_281(&Local_423, 1, 0);
					Local_853.f_5 = UNK_0x7F6DC62EA9922664(Local_853.f_3);
					Local_853.f_15 = UNK_0x6EE94F60DA2A2273(Local_853.f_3);
					Local_853.f_16 = UNK_0xD96C5EC6FCB061BA(Local_853.f_3);
					func_317(&Local_423, 13, 0f, 0);
					func_317(&Local_423, 20, 0f, 0);
					UNK_0x10F3BFFADF2CE3DA(vLocal_946, vLocal_949);
					iLocal_894 = UNK_0x7D6CA5F52B3748BF(vLocal_946, vLocal_949, 0, 1, 1, 1);
					UNK_0xF3039DE1FDB4F6FD(0);
					func_313(&Local_423, 13);
				}
				break;
			case 13:
				func_212();
				func_247(&Local_423, &Local_853);
				func_250(&Local_423, &(Local_853.f_4));
				if (func_209(&Local_423))
				{
					if (func_208(Local_853.f_2, Local_853.f_4))
					{
						func_256(&Local_423, 51, 1, 0, 0);
						func_313(&Local_423, 25);
					}
					func_204(&Local_423);
					func_201(Local_853.f_3, 291.0313f, -1476.446f, 28.2945f, 15f, &Local_1052, 2);
					if (func_161())
					{
						if (UNK_0xE0058AC511E68F8A(Local_853.f_3))
						{
							UNK_0xC55F2A0377488064(Local_853.f_3);
							UNK_0xDB8844D4B7C60440(false, "taxi_oj_fc3");
						}
						func_159(&uLocal_45, 0, 0);
						func_158();
						func_313(&Local_423, 20);
					}
				}
				break;
			case 20:
				if (func_157())
				{
					if (func_136())
					{
						func_313(&Local_423, 14);
					}
				}
				break;
			case 14:
				func_135(&Local_423, &(Local_423.f_43));
				if (UNK_0xDF1306B443CD3D15(Local_853.f_3, 0))
				{
					if ((UNK_0x5A91F08DF773C39D(Local_853.f_3, vLocal_922, 20f, 20f, 60f, true, true, 0) && UNK_0x9C66D99E63E8E24C(Local_853.f_3) < 5f) || Local_853.f_31 > 2)
					{
						if (!UNK_0x437347B10A200C4B(bLocal_890, 0))
						{
							UNK_0xA3BF0AA5A2608191(bLocal_890);
							UNK_0xA47B46945FF6DE74(bLocal_890, vLocal_943, 1, 0, 0, 1);
						}
						func_256(&Local_423, 37, 1, 0, 0);
						func_313(&Local_423, 21);
					}
				}
				break;
			case 21:
				func_135(&Local_423, &(Local_423.f_43));
				func_134(&Local_423, Local_853.f_2, 1, 1);
				func_134(&Local_423, bLocal_890, 0, 0);
				func_250(&Local_423, &(Local_423.f_9));
				if (UNK_0xE4EDC4B0E92C078B(Local_853.f_4))
				{
					UNK_0x142CC44DB769B57E(&(Local_853.f_4));
					Local_423.f_17 = { vLocal_925 };
				}
				else if (!UNK_0xE4EDC4B0E92C078B(Local_423.f_9))
				{
					Local_423.f_9 = func_132(Local_423.f_17, 1);
				}
				if (UNK_0xDF1306B443CD3D15(Local_423.f_4, 0))
				{
					if (UNK_0xC42A92762C58E1B9(Local_423.f_2, Local_423.f_4, 0))
					{
						if (UNK_0x5A91F08DF773C39D(Local_423.f_4, -684.526f, -1105.76f, 13.52571f, 1f, 1f, 2f, !Local_423.f_140, true, 0))
						{
						}
						if (UNK_0x3D1053F9EB43B7AD(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(Local_423.f_4, -704.1705f, -1115.226f, 13.525f, -700.2585f, -1121.292f, 15.4336f, 2.25f, 0, true, 0))
						{
							if (UNK_0x3D1053F9EB43B7AD(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, true, 0))
							{
								iLocal_413 = 0;
							}
							else
							{
								iLocal_413 = 1;
							}
							Local_423.f_35 = 60f;
							Local_423.f_417 = 143;
							Local_423.f_416 = 143;
							bLocal_907 = false;
							func_313(&Local_423, 22);
						}
					}
				}
				break;
			case 22:
				func_134(&Local_423, Local_853.f_2, 0, 1);
				func_134(&Local_423, bLocal_890, 0, 0);
				if (!UNK_0xEB6A8945D1AC98A1(Local_423.f_3))
				{
					if (UNK_0xDF1306B443CD3D15(Local_423.f_4, 0))
					{
						if (Local_853.f_31 != 6)
						{
							if (func_128(&Local_423, 1, 3f))
							{
								bLocal_906 = true;
								UNK_0x142CC44DB769B57E(&(Local_423.f_9));
								func_313(&Local_423, 27);
							}
						}
						else
						{
							if (!UNK_0xE4EDC4B0E92C078B(Local_423.f_9))
							{
								Local_423.f_9 = func_132(Local_423.f_17, 1);
							}
							if (func_221(&Local_423, 8f, 1097859072 /* Float: 15f */, 1117782016 /* Float: 80f */) || func_128(&Local_423, 1, 1084227584 /* Float: 5f */))
							{
								UNK_0x142CC44DB769B57E(&(Local_423.f_9));
								func_313(&Local_423, 27);
							}
						}
					}
				}
				break;
			case 25:
				func_134(&Local_423, Local_853.f_2, 0, 1);
				func_134(&Local_423, bLocal_890, 0, 0);
				if (UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) < 1)
				{
					func_256(&Local_423, 37, 1, 0, 0);
					func_313(&Local_423, 27);
				}
				break;
			case 27:
				func_134(&Local_423, Local_853.f_2, 0, 1);
				func_134(&Local_423, bLocal_890, 0, 0);
				if (!UNK_0xEB6A8945D1AC98A1(Local_423.f_3))
				{
					if (UNK_0xE4EDC4B0E92C078B(Local_853.f_4))
					{
						UNK_0x142CC44DB769B57E(&(Local_853.f_4));
					}
					UNK_0x2F23E8033F1ADDD9("TAXI_OBJ_DRIVE");
					if (Local_853.f_9 > 2)
					{
						Local_423.f_56 = -10;
					}
					else if (Local_853.f_9 == 0)
					{
						Local_423.f_56 = 7;
						func_127(&Local_423, 0);
					}
					else
					{
						Local_423.f_56 = 4;
					}
					func_125(&Local_423);
					func_121(&Local_423);
					func_120(&Local_423);
					func_313(&Local_423, 29);
				}
				break;
			case 29:
				UNK_0x2F23E8033F1ADDD9("TAXI_OBJ_DRIVE");
				if (func_83(&Local_423, &iLocal_1132))
				{
					func_57(&Local_423);
					func_313(&Local_423, 28);
				}
				break;
			case 28:
				if (bLocal_905 || bLocal_904)
				{
					func_313(&Local_423, 30);
				}
				break;
			case 30:
				UNK_0x2F23E8033F1ADDD9("TAXI_OBJ_DRIVE");
				if ((!UNK_0xEB6A8945D1AC98A1(Local_423.f_3) && UNK_0xB87D13D0C064E9D1(bLocal_890, Local_423.f_3, 1)) && UNK_0xB87D13D0C064E9D1(Local_853.f_2, Local_423.f_3, 1))
				{
					if (bLocal_910 || SYSTEM::TIMERA() > 20000)
					{
						func_54(1, &Local_423, 1);
						func_458();
					}
					else
					{
						bLocal_421 = UNK_0x6E7D01E16ABEFABB(vLocal_940, 10f, joaat("AMBULANCE"), 0);
						if (UNK_0xDF1306B443CD3D15(bLocal_421, 0))
						{
							bLocal_910 = true;
						}
						bLocal_891 = UNK_0xF187F2EA5437526A(vLocal_940, 5f, 5f, 5f, -1);
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_891))
						{
							bLocal_910 = true;
						}
						if (!bLocal_911)
						{
							if (UNK_0x58C79C59A23B279F(5, vLocal_940, 1, 0f, &uLocal_895, 0, 0))
							{
								SYSTEM::SETTIMERA(0);
								bLocal_911 = true;
							}
						}
					}
				}
				if (func_52(vLocal_940, 1) > 100f || func_50(Local_423.f_3, UNK_0x16F2683693E537C9()) > 100f)
				{
					func_54(1, &Local_423, 1);
					func_458();
				}
				else if ((UNK_0xEB6A8945D1AC98A1(Local_423.f_3) || UNK_0xB87D13D0C064E9D1(bLocal_890, UNK_0x16F2683693E537C9(), 1)) || UNK_0xB87D13D0C064E9D1(Local_853.f_2, UNK_0x16F2683693E537C9(), 1))
				{
					if (!UNK_0xEB6A8945D1AC98A1(Local_423.f_3))
					{
						UNK_0x11AD11297DC58CC7(Local_423.f_3, true);
						UNK_0xA3BF0AA5A2608191(Local_423.f_3);
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xDD353D0E9C789D0E(&iLocal_414);
						UNK_0x8BE3D040D15AEA1D(false, 2000);
						UNK_0xEEB67C3D0A71A47B(false, Local_423.f_17, 1000f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_414);
						UNK_0x78ADC381772E3D54(Local_423.f_3, iLocal_414);
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xFADC0A217229F6B5(Local_423.f_3, true);
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_890))
					{
						UNK_0x11AD11297DC58CC7(bLocal_890, true);
						UNK_0xA3BF0AA5A2608191(bLocal_890);
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xDD353D0E9C789D0E(&iLocal_414);
						UNK_0x8BE3D040D15AEA1D(false, 1000);
						UNK_0xEEB67C3D0A71A47B(false, Local_423.f_17, 1000f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_414);
						UNK_0x78ADC381772E3D54(bLocal_890, iLocal_414);
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xFADC0A217229F6B5(bLocal_890, true);
					}
					if (!UNK_0xEB6A8945D1AC98A1(Local_853.f_2))
					{
						UNK_0x11AD11297DC58CC7(Local_853.f_2, true);
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xDD353D0E9C789D0E(&iLocal_414);
						if (bLocal_908)
						{
							UNK_0xC6EB89C59F2AF6B8(false, "MOVE_DUCK_FOR_COVER", "exit", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
						}
						UNK_0x93D47DFD0AE94949(false, 500);
						UNK_0xEEB67C3D0A71A47B(false, Local_423.f_17, 1000f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_414);
						UNK_0x78ADC381772E3D54(Local_853.f_2, iLocal_414);
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xFADC0A217229F6B5(Local_853.f_2, true);
					}
					func_54(1, &Local_423, 1);
					func_458();
				}
				else if ((bLocal_904 && !func_213()) && (UNK_0x1C0640BA9A7327B3() - iLocal_900) > 500)
				{
					if (!UNK_0xEB6A8945D1AC98A1(Local_423.f_3))
					{
						UNK_0x11AD11297DC58CC7(Local_423.f_3, true);
						UNK_0xA3BF0AA5A2608191(Local_423.f_3);
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xDD353D0E9C789D0E(&iLocal_414);
						UNK_0x2C4A1A0F54A166E8(false, UNK_0x16F2683693E537C9(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
						UNK_0x75ABDC5F81978924(iLocal_414);
						UNK_0x78ADC381772E3D54(Local_423.f_3, iLocal_414);
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xFADC0A217229F6B5(Local_423.f_3, true);
					}
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_890))
					{
						UNK_0x11AD11297DC58CC7(bLocal_890, true);
						UNK_0xA3BF0AA5A2608191(bLocal_890);
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xDD353D0E9C789D0E(&iLocal_414);
						UNK_0x8BE3D040D15AEA1D(false, 1000);
						UNK_0xEEB67C3D0A71A47B(false, Local_423.f_17, 1000f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_414);
						UNK_0x78ADC381772E3D54(bLocal_890, iLocal_414);
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xFADC0A217229F6B5(bLocal_890, true);
					}
					if (!UNK_0xEB6A8945D1AC98A1(Local_853.f_2))
					{
						UNK_0x11AD11297DC58CC7(Local_853.f_2, true);
						UNK_0xA3BF0AA5A2608191(Local_853.f_2);
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xDD353D0E9C789D0E(&iLocal_414);
						UNK_0x93D47DFD0AE94949(false, 500);
						UNK_0xEEB67C3D0A71A47B(false, Local_423.f_17, 1000f, -1, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_414);
						UNK_0x78ADC381772E3D54(Local_853.f_2, iLocal_414);
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xFADC0A217229F6B5(Local_853.f_2, true);
					}
					func_10(&Local_423, 1);
					func_458();
				}
				break;
		}
	}
}

void func_10(int iParam0, bool bParam1)
{
	func_442(iParam0);
	if (func_213())
	{
		func_48();
	}
	func_46();
	UNK_0x790015DC92C918E2();
	UNK_0xA37A90C62806D848(1);
	func_41(0);
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		UNK_0x44A200C9B6E1CEA6(iParam0->f_4, false);
		UNK_0x78CCB85A0DC35709(iParam0->f_4);
		UNK_0x7AA3AFA47C4179D1(iParam0->f_4);
	}
	func_37(iParam0->f_14, 1);
	func_253(iParam0->f_14, 1, 1114636288 /* Float: 60f */);
	func_36(&(iParam0->f_244), 3);
	UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, true);
	if (func_33())
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	}
	UNK_0x2D23BE319D971F4C(1);
	func_23(0, 1, 1, 0, 0, 0);
	UNK_0xBFE31971E49FA500(1);
	UNK_0x8BCB70EB440DED83(1);
	if (UNK_0x9F4FE516EAACCFC5(*iParam0))
	{
		UNK_0x9A8DDC7C522F5BF5(*iParam0, 0);
		UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		UNK_0xF3039DE1FDB4F6FD(1);
	}
	if (func_22(Global_111638.f_19092, 4))
	{
		func_20(&(Global_111638.f_19092), 4);
		UNK_0xAB8E2DDC7AF955E0(func_19(), false);
	}
	if (bParam1)
	{
		func_18(iParam0);
	}
	func_17(iParam0);
	UNK_0x8D17794CE3273D70("gestures@m@standing@casual");
	UNK_0x8D17794CE3273D70("oddjobs@taxi@");
	UNK_0x8D17794CE3273D70("oddjobs@towingcome_here");
	if (UNK_0x58424C49F8924842())
	{
		func_15(iParam0->f_411);
	}
	if (!UNK_0x93B62D155C014521(UNK_0xA30EC016B12C03E4()))
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
	}
	UNK_0x11E0F00830F70E15(SYSTEM::ROUND((func_11(&uLocal_90) * 1000f)), 12, 0);
}

float func_11(bool bParam0)
{
	if (func_14(bParam0))
	{
		if (func_13(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_12(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return 0f;
}

float func_12(bool bParam0)
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

bool func_13(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, 2);
}

bool func_14(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

void func_15(int iParam0)
{
	var uVar0;

	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_16(iParam0)}, 6);
		if (!UNK_0x2EBF5002C6B6A06C(&uVar0))
		{
		}
	}
}

struct<8> func_16(int iParam0)
{
	struct<8> Var0;

	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_17(int iParam0)
{
	UNK_0x5A5CC21130AD387A(iParam0->f_51[0]);
}

void func_18(int iParam0)
{
	if (UNK_0xC844350D5D58C99A(iParam0->f_3))
	{
		if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
		{
			if (!UNK_0x405E212DDE472467(iParam0->f_3, 0))
			{
				UNK_0x61F0DE0226FF7252(iParam0->f_3);
			}
			UNK_0x11AD11297DC58CC7(iParam0->f_3, false);
			UNK_0x0E2400AB9174FA81(255, iParam0->f_413, joaat("PLAYER"));
			if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				UNK_0xFB131B855F2FD560(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				UNK_0xFB131B855F2FD560(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				UNK_0xFB131B855F2FD560(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				UNK_0xFB131B855F2FD560(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			UNK_0x6DAD7906B73F064D(&(iParam0->f_3));
		}
	}
}

int func_19()
{
	return joaat("TAXI");
}

void func_20(var uParam0, int iParam1)
{
	func_21(uParam0, iParam1);
}

void func_21(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_22(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_23(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_32(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_31())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_30(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_32(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_30(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_28(UNK_0xD803B885F5E47A62())) && !func_25(UNK_0xD803B885F5E47A62(), 0)) && !func_24()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_28(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_24()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_25(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1312745;
}

bool func_28(bool bParam0)
{
	if (func_25(bParam0, 0))
	{
		return true;
	}
	if (func_29())
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

bool func_29()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_30(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_31()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_32(int iParam0)
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

bool func_33()
{
	if (!func_35() && !func_34())
	{
		if (!UNK_0x04B2EAD6D5301B36(UNK_0xA30EC016B12C03E4()))
		{
			return true;
		}
	}
	return false;
}

bool func_34()
{
	if (UNK_0x8A22C4C08282BF26(joaat("APPCAMERA")) > 0)
	{
		return true;
	}
	return false;
}

bool func_35()
{
	if (UNK_0x8A22C4C08282BF26(joaat("APPINTERNET")) > 0)
	{
		return true;
	}
	return false;
}

void func_36(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_37(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_39(vParam0, func_40(), 0))
	{
		vVar0 = { func_38(vParam0, 1f, -30f, -30f, -10f) };
		vVar3 = { func_38(vParam0, 1f, 30f, 30f, 10f) };
		UNK_0xE342F209E49C5314(vVar0, vVar3, bParam3, 1);
	}
}

Vector3 func_38(vector3 vParam0, float fParam3, struct<2> Param4, float fParam6)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;

	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	vVar0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	vVar0.f_1 = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	vVar6 = { vParam0 + vVar0 };
	return vVar6;
}

bool func_39(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_40()
{
	vector3 vVar0;

	return vVar0;
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_44())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_31())
	{
		Global_19486.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_43(0))
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

bool func_43(int iParam0)
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

bool func_44()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_45()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_46()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95677[iVar0 /*17*/] && !Global_95677[iVar0 /*17*/].f_1)
		{
			if (Global_95677[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_95677[iVar0 /*17*/].f_5 != 88 && Global_95677[iVar0 /*17*/].f_5 != 89) && Global_95677[iVar0 /*17*/].f_5 != 92)
				{
					func_47(Global_95677[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_47(int iParam0, bool bParam1)
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

void func_48()
{
	Global_19671 = 0;
	func_49();
}

void func_49()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

float func_50(bool bParam0, bool bParam1)
{
	return func_51(bParam0, bParam1, 1);
}

float func_51(bool bParam0, bool bParam1, int iParam2)
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

float func_52(vector3 vParam0, int iParam3)
{
	return func_53(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), vParam0, iParam3);
}

float func_53(bool bParam0, vector3 vParam1, int iParam4)
{
	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return -1f;
	}
	return UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1, iParam4);
}

void func_54(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		func_57(iParam1);
		if (!UNK_0xEB6A8945D1AC98A1(iParam1->f_3))
		{
			UNK_0x4E885A246A9D983A(iParam1->f_3, 317, true);
		}
	}
	else
	{
		func_55(1, 0);
	}
	func_10(iParam1, bParam2);
}

void func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_111638.f_19092.f_22[0]++;
			func_56("Fares Completed ++ = ", Global_111638.f_19092.f_22[0]);
			break;
		case 1:
			Global_111638.f_19092.f_22[1]++;
			func_56("Fares Failed ++ = ", Global_111638.f_19092.f_22[1]);
			break;
		case 2:
			Global_111638.f_19092.f_22[2]++;
			func_56("Fares Accepted ++ ", Global_111638.f_19092.f_22[2]);
			break;
		case 3:
			Global_111638.f_19092.f_22[3]++;
			func_56("Fares Expired ++ ", Global_111638.f_19092.f_22[3]);
			break;
		case 13:
			Global_111638.f_19092.f_22[13]++;
			func_56("Passengers run ++ = ", Global_111638.f_19092.f_22[13]);
			break;
		case 14:
			Global_111638.f_19092.f_22[14]++;
			func_56("Passenger Forced to Pay ++ = ", Global_111638.f_19092.f_22[14]);
			break;
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_111638.f_19092.f_22[4])
				{
					Global_111638.f_19092.f_22[4] = iParam1;
					func_56("This distance ", iParam1);
					func_56(" is longer than current best", Global_111638.f_19092.f_22[4]);
				}
				else
				{
					func_56("Longest Distance Not Beat ", Global_111638.f_19092.f_22[4]);
				}
			}
			break;
		case 5:
			Global_111638.f_19092.f_22[5] = (Global_111638.f_19092.f_22[5] + iParam1);
			func_56("Total Distance w/ Passenger = ", Global_111638.f_19092.f_22[5]);
			break;
		case 6:
			if (iParam1 == 0)
			{
				Global_111638.f_19092.f_22[6]++;
			}
			else
			{
				Global_111638.f_19092.f_22[6] = (Global_111638.f_19092.f_22[6] + iParam1);
			}
			func_56("Wanted Levels ++ = ", Global_111638.f_19092.f_22[6]);
			break;
		case 7:
			if (iParam1 > 0)
			{
				Global_111638.f_19092.f_22[7] = (Global_111638.f_19092.f_22[7] + iParam1);
			}
			else
			{
				Global_111638.f_19092.f_22[7]++;
			}
			func_56("Wanted Levels Lost = ", Global_111638.f_19092.f_22[7]);
			break;
		case 8:
			Global_111638.f_19092.f_22[8]++;
			func_56("Taxis wrecked ++ = ", Global_111638.f_19092.f_22[8]);
			break;
		case 9:
			Global_111638.f_19092.f_22[9]++;
			func_56("Horn Honked ++ = ", Global_111638.f_19092.f_22[9]);
			break;
		case 10:
			Global_111638.f_19092.f_22[10] = (Global_111638.f_19092.f_22[10] + iParam1);
			func_56("Total Money Earned = ", Global_111638.f_19092.f_22[10]);
			break;
		case 11:
			Global_111638.f_19092.f_22[11] = (Global_111638.f_19092.f_22[11] + iParam1);
			func_56("Total Tips Earned = ", Global_111638.f_19092.f_22[11]);
			break;
		case 12:
			if (iParam1 > Global_111638.f_19092.f_22[12])
			{
				Global_111638.f_19092.f_22[12] = iParam1;
				func_56("New Highest Tip = ", Global_111638.f_19092.f_22[12]);
			}
			else
			{
				func_56("Highest Tip Not Reached = ", Global_111638.f_19092.f_22[12]);
			}
			break;
	}
}

void func_56(char* sParam0, int iParam1)
{
}

void func_57(int iParam0)
{
	func_55(0, 0);
	if (iParam0->f_411 != 9)
	{
		func_462(1);
		func_69(15, 1);
	}
	func_67(&(Global_111638.f_19092), 1024);
	if (!func_22(Global_111638.f_19092, 64))
	{
		func_58(func_65(func_66(iParam0)), 0, 0);
	}
}

void func_58(int iParam0, int iParam1, int iParam2)
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
		func_64((891 + iParam0), 1, -1, 1);
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
		func_59();
	}
}

void func_59()
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
		func_63(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_62() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_60();
				}
			}
		}
	}
}

int func_60()
{
	if (func_61(0))
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

bool func_61(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

int func_62()
{
	return Global_30768;
}

int func_63(int iParam0, bool bParam1)
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

int func_64(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_27();
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

int func_65(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		case 1:
			iVar0 = 200;
			break;
		case 2:
			iVar0 = 201;
			break;
		case 3:
			iVar0 = 202;
			break;
		case 4:
			iVar0 = 203;
			break;
		case 5:
			iVar0 = 204;
			break;
		case 6:
			iVar0 = 205;
			break;
		case 7:
			iVar0 = 206;
			break;
		case 8:
			iVar0 = 207;
			break;
		case 9:
			break;
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_66(int iParam0)
{
	return iParam0->f_411;
}

void func_67(var uParam0, int iParam1)
{
	func_68(uParam0, iParam1);
}

void func_68(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_69(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_70(iParam0, iParam1);
}

int func_70(int iParam0, int iParam1)
{
	if (func_82(14) && !func_81(iParam0))
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
	if (func_80(&Global_4270065))
	{
		if (func_78(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_71(&Global_4270065, iParam0))
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

bool func_71(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return false;
	}
	if (func_82(14) && !func_81(iParam1))
	{
		return false;
	}
	if (func_78(uParam0, iParam1))
	{
		return false;
	}
	if (func_77(uParam0) < 0f)
	{
		func_76(uParam0, 0);
	}
	func_74(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_72(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

int func_72(var uParam0, int iParam1)
{
	int iVar0;

	if (UNK_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_82(14) && !func_81(iParam1))
	{
		return 0;
	}
	if (func_78(uParam0, iParam1))
	{
		return 0;
	}
	if (func_77(uParam0) < 0f)
	{
		func_76(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_73(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_73(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_74(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_75(uParam0, iVar0);
		iVar0++;
	}
	func_76(uParam0, (Global_4270064 - 0.5f));
}

void func_75(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_76(var uParam0, float fParam1)
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

float func_77(var uParam0)
{
	return uParam0->f_80;
}

bool func_78(var uParam0, int iParam1)
{
	return func_79(uParam0, iParam1) != -1;
}

int func_79(var uParam0, int iParam1)
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

bool func_80(var uParam0)
{
	return uParam0->f_79 == 1;
}

bool func_81(int iParam0)
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

bool func_82(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_83(int iParam0, int iParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_213() && func_118(iParam0, 0) > 1f)
			{
				if (func_33())
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				}
				func_117(iParam0);
				func_20(&(Global_111638.f_19092), 4096);
				func_114(iParam1, "TAXI_FARE_TITLE", iParam0->f_50, iParam0->f_56, ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105), iParam0->f_105, func_116(iParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				UNK_0x4D7F4CC43D4D0DE3(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_113(1);
				iLocal_168 = 6;
			}
			break;
		case 6:
			if (!func_107(iParam1, 0))
			{
				func_84(iParam0);
				func_317(iParam0, 0, 0, 0);
				func_113(0);
				iLocal_168 = 7;
				return true;
			}
			break;
	}
	return false;
}

void func_84(int iParam0)
{
	int iVar0;

	iVar0 = ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105);
	if (iVar0 > 0)
	{
		func_85(func_105(), 21, iVar0, 0, 0);
		func_55(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_85(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;

	if (func_104(iParam0) == 3)
	{
		return;
	}
	if (func_104(iParam0) == 4)
	{
		return;
	}
	func_86(func_104(iParam0), 1, iParam1, iParam2, 0);
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

int func_86(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_103();
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
					func_102(99, 1);
					func_101(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 1:
					func_101(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				case 2:
					func_101(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_100(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_95(5))
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
							func_101(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 1:
							func_101(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						case 2:
							func_101(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_95(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				case 21:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 1:
							func_101(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						case 2:
							func_101(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				case 25:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 1:
							func_101(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						case 2:
							func_101(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_101(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 1:
							func_101(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						case 2:
							func_101(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_101(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 1:
									func_101(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								case 2:
									func_101(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 1:
									func_101(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								case 2:
									func_101(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_95(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 1:
									func_101(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								case 2:
									func_101(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 1:
									func_101(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								case 2:
									func_101(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_94(iParam3);
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					func_102(95, iParam3);
					break;
				case 1:
					func_102(97, iParam3);
					break;
				case 2:
					func_102(96, iParam3);
					break;
			}
			func_102(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_89(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_89(bVar1);
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
					func_101(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 1:
					func_101(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				case 2:
					func_101(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_88(iParam0);
	if (Global_41431 == 15)
	{
		func_87(0);
	}
	return 1;
}

void func_87(bool bParam0)
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

void func_88(int iParam0)
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

void func_89(bool bParam0)
{
	bool bVar0;
	char cVar1[64];

	if (bParam0 == 8)
	{
		func_64(129, 0, -1, 1);
		return;
	}
	if (bParam0 == 9)
	{
		func_64(135, 0, -1, 1);
		return;
	}
	if (bParam0 == 10)
	{
		func_64(136, 0, -1, 1);
		return;
	}
	if (bParam0 == 11)
	{
		func_64(137, 0, -1, 1);
		return;
	}
	if (bParam0 == 12)
	{
		func_92(8269, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_92(8270, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_92(8271, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_92(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_92(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_92(8274, 0, -1, 1, 0);
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
	else if (UNK_0xEAE0D21A50E6C7F4(Global_111638.f_20559.f_471, bParam0) || UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_91() /*10930*/].f_6174.f_10, bParam0))
	{
		bVar0 = true;
		UNK_0x0674E58A79778E99(&(Global_111638.f_20559.f_471), bParam0);
		UNK_0x0674E58A79778E99(&(Global_2097152[func_91() /*10930*/].f_6174.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UNK_0x1E64CE678ED5F61E("COUP_RED");
		UNK_0x6B012227B3921E18(func_90(bParam0));
		UNK_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_90(bool bParam0)
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

int func_91()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_92(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_93(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

int func_93(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

void func_94(int iParam0)
{
	func_102(93, iParam0);
	func_102(29, iParam0);
	func_102(30, iParam0);
}

bool func_95(bool bParam0)
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
		return func_97(129, -1, -1);
	}
	if (bParam0 == 9)
	{
		return func_97(135, -1, -1);
	}
	if (bParam0 == 10)
	{
		return func_97(136, -1, -1);
	}
	if (bParam0 == 11)
	{
		return func_97(137, -1, -1);
	}
	if (bParam0 == 12)
	{
		iVar0 = UNK_0xDD0E7998AE8AD485();
		iVar1 = func_96(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 13)
	{
		iVar2 = UNK_0xDD0E7998AE8AD485();
		iVar3 = func_96(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 14)
	{
		iVar4 = UNK_0xDD0E7998AE8AD485();
		iVar5 = func_96(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 15)
	{
		iVar6 = UNK_0xDD0E7998AE8AD485();
		iVar7 = func_96(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 16)
	{
		iVar8 = UNK_0xDD0E7998AE8AD485();
		iVar9 = func_96(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return false;
		}
		return true;
	}
	if (bParam0 == 17)
	{
		iVar10 = UNK_0xDD0E7998AE8AD485();
		iVar11 = func_96(8274, -1, 0);
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
	return UNK_0xEAE0D21A50E6C7F4(Global_2097152[func_91() /*10930*/].f_6174.f_10, bParam0);
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_93(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_97(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1 == -1)
	{
		bParam1 = func_27();
	}
	iVar1 = func_99(iParam0, bParam1);
	iVar2 = func_98(iParam0);
	if (0 != iVar1)
	{
		iVar0 = UNK_0x16AE5C7FBDF5077E(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

int func_98(int iParam0)
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

int func_99(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 == -1)
	{
		bParam1 = func_27();
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

int func_100(bool bParam0)
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
		func_63(27, bVar1);
	}
	if (bVar1 < 200000000)
	{
		return 0;
	}
	func_69(27, 1);
	return 1;
}

void func_101(int iParam0, int iParam1)
{
	bool bVar0;

	UNK_0x6FB46C25CCB7E6D5(iParam0, &bVar0, -1);
	bVar0 = (bVar0 + iParam1);
	UNK_0xCDC520E5E48E63D9(iParam0, bVar0, 1);
}

void func_102(int iParam0, int iParam1)
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

void func_103()
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

int func_104(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_105()
{
	func_106();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_106()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_4(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_3(UNK_0x16F2683693E537C9());
			if (func_6(iVar0) && (!func_82(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_6(Global_111638.f_2358.f_539.f_4321))
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

bool func_107(int iParam0, int iParam1)
{
	if (!func_14(&(iParam0->f_2)))
	{
		func_111(&(iParam0->f_2));
	}
	UNK_0x3584F71E5CA29322(14);
	UNK_0x6567AE843FADBA94(*iParam0, 255, 255, 255, 255, 0);
	if (iParam1 || iParam0->f_8)
	{
		if (UNK_0xBFC0798A6E3417F9(2, 201) || iParam0->f_8)
		{
			if (!func_14(&(iParam0->f_5)))
			{
				func_111(&(iParam0->f_5));
				func_110(iParam0, 1051260355 /* Float: 0.33f */);
			}
		}
		if (func_14(&(iParam0->f_5)))
		{
			if (func_109(&(iParam0->f_5)) > 0.33f)
			{
				func_108(&(iParam0->f_5));
				return false;
			}
		}
	}
	if (iParam0->f_1 == -1)
	{
		return true;
	}
	if (func_109(&(iParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(iParam0->f_1)
	{
		if (!func_14(&(iParam0->f_5)))
		{
			func_111(&(iParam0->f_5));
			func_110(iParam0, 1051260355 /* Float: 0.33f */);
		}
		else if (func_109(&(iParam0->f_5)) > 0.33f)
		{
			func_108(&(iParam0->f_2));
			return false;
		}
	}
	return true;
}

void func_108(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_109(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(UNK_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_110(int iParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(*iParam0, "SHARD_ANIM_OUT");
	UNK_0x3CAEA85DA607305E(iParam0->f_9);
	UNK_0x7C19E5E4784BD7CF(bParam1);
	UNK_0x7E60D21B163E9D56();
}

void func_111(bool bParam0)
{
	func_112(bParam0, 0f);
}

void func_112(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_12(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_113(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_114(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	UNK_0x7E60C62A7CE58FC8(*iParam0, func_115());
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0x3A820E495A7BA3E5(bParam9);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x779B34565F4D71B1();
	UNK_0x7ACC3006A87F8B39(bParam7);
	UNK_0x6D99DF8263D35CE5(bParam2);
	UNK_0x6D99DF8263D35CE5(bParam3);
	UNK_0x6B012227B3921E18(bParam6);
	UNK_0x6D99DF8263D35CE5(bParam5);
	UNK_0x6D99DF8263D35CE5(bParam4);
	UNK_0x779B34565F4D71B1();
	UNK_0x7E60D21B163E9D56();
	func_111(&(iParam0->f_2));
	iParam0->f_1 = iParam8;
	iParam0->f_9 = 1;
}

char* func_115()
{
	if (UNK_0x8CD06866876216F2())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

bool func_116(int iParam0)
{
	char* sVar0;

	switch (iParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_117(int iParam0)
{
	int iVar0;

	Local_169.f_1 = SYSTEM::TO_FLOAT(iParam0->f_50);
	Local_169.f_2 = SYSTEM::TO_FLOAT(iParam0->f_56);
	func_55(11, iParam0->f_56);
	func_55(12, iParam0->f_56);
	iLocal_57[1] = iParam0->f_56;
	iLocal_57[2] = iParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { iParam0->f_60[iVar0 /*3*/] };
		if (UNK_0xEAE0D21A50E6C7F4(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(iParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169 = iParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

float func_118(int iParam0, int iParam1)
{
	if (!func_14(&(iParam0->f_146[iParam1 /*3*/])))
	{
		func_119(&(iParam0->f_146[iParam1 /*3*/]));
	}
	return func_109(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_119(bool bParam0)
{
	if (!func_14(bParam0))
	{
		func_111(bParam0);
	}
}

void func_120(var uParam0)
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = SYSTEM::CEIL((IntToFloat(uParam0->f_50) * 0.4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = SYSTEM::CEIL((IntToFloat(uParam0->f_50) * 0.15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!func_22(uParam0->f_55, 1))
	{
		func_67(&(uParam0->f_55), 1);
	}
}

void func_121(int iParam0)
{
	func_123();
	UNK_0x790015DC92C918E2();
	if (iParam0->f_56 < iParam0->f_58)
	{
		if (iParam0->f_411 == 0)
		{
			func_256(iParam0, 105, 1, 0, 0);
		}
		else
		{
			func_256(iParam0, 103, 1, 0, 0);
		}
		func_122(1);
	}
	else if (iParam0->f_56 >= iParam0->f_59)
	{
		func_256(iParam0, 101, 1, 0, 0);
	}
	else
	{
		func_256(iParam0, 102, 1, 0, 0);
	}
	func_317(iParam0, 16, 4f, 0);
}

void func_122(int iParam0)
{
	Global_110348.f_221 = iParam0;
}

void func_123()
{
	Global_19671 = 0;
	func_124();
}

void func_124()
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

void func_125(var uParam0)
{
	float fVar0;

	fVar0 = uParam0->f_41;
	fVar0 = func_126(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_55(4, SYSTEM::CEIL(fVar0));
	func_55(5, SYSTEM::CEIL(fVar0));
	uParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_126(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_127(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		UNK_0x5D96D8530B3D0904(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

bool func_128(int iParam0, bool bParam1, float fParam2)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0xC42A92762C58E1B9(iParam0->f_2, iParam0->f_4, 0))
		{
			if (func_43(1))
			{
				func_41(0);
			}
			if (func_33())
			{
				func_131();
				return true;
			}
			else if (func_129(iParam0->f_4, fParam2, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
			{
				if (bParam1)
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), false, 256);
				}
				else
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), false, false);
				}
			}
			UNK_0xACCB31D58716FE8F(iParam0->f_4, 1);
		}
	}
	return false;
}

bool func_129(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_130(bParam0);
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

void func_130(bool bParam0)
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

void func_131()
{
	if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
	{
		UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
	}
}

int func_132(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_133(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

float func_133(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_134(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		if (bParam2)
		{
			if (!UNK_0x437347B10A200C4B(bParam1, 0))
			{
				if (UNK_0x36646919F20EAFFC(bParam1))
				{
					if (UNK_0xE64AC821059A938D(UNK_0x16F2683693E537C9()))
					{
						if (Local_423.f_109 == 0)
						{
							func_361(&Local_423, "Driver jacked the fiance", 7);
						}
					}
				}
			}
		}
		if (UNK_0xEB6A8945D1AC98A1(bParam1))
		{
			if (bParam3)
			{
				if (!UNK_0x437347B10A200C4B(bLocal_890, 0))
				{
					UNK_0xA3BF0AA5A2608191(bLocal_890);
					UNK_0xF3268524E9BE6D6E(bLocal_890, UNK_0x16F2683693E537C9(), 100f, 20000, 0, 0);
					UNK_0xFADC0A217229F6B5(bLocal_890, true);
				}
				func_361(iParam0, "Target injured.", 13);
			}
			else
			{
				if (!UNK_0x437347B10A200C4B(Local_853.f_2, 0))
				{
					UNK_0xA3BF0AA5A2608191(Local_853.f_2);
					UNK_0xF3268524E9BE6D6E(Local_853.f_2, UNK_0x16F2683693E537C9(), 100f, 20000, 0, 0);
					UNK_0xFADC0A217229F6B5(Local_853.f_2, true);
				}
				func_361(iParam0, "Mistress injured.", 14);
			}
		}
		else if (UNK_0x1A069ED4E9BDE50A(UNK_0xD803B885F5E47A62()))
		{
			if ((UNK_0x0361981EE62202D8(bParam1, joaat("WEAPON_STUNGUN"), 0) || UNK_0x0361981EE62202D8(bParam1, false, 2)) || UNK_0x0361981EE62202D8(bParam1, false, 1))
			{
				if (!UNK_0x437347B10A200C4B(bLocal_890, 0))
				{
					UNK_0xA3BF0AA5A2608191(bLocal_890);
					UNK_0xF3268524E9BE6D6E(bLocal_890, UNK_0x16F2683693E537C9(), 100f, 20000, 0, 0);
					UNK_0xFADC0A217229F6B5(bLocal_890, true);
				}
				if (!UNK_0x437347B10A200C4B(Local_853.f_2, 0))
				{
					UNK_0xA3BF0AA5A2608191(Local_853.f_2);
					UNK_0xF3268524E9BE6D6E(Local_853.f_2, UNK_0x16F2683693E537C9(), 100f, 20000, 0, 0);
					UNK_0xFADC0A217229F6B5(Local_853.f_2, true);
				}
				func_361(iParam0, "Passenger injured by player with weapon.", 14);
			}
			if (!bParam3)
			{
				UNK_0xB2AF08FECE4571EC(UNK_0xD803B885F5E47A62());
			}
		}
	}
}

void func_135(int iParam0, var uParam1)
{
	UNK_0x893A626C476B583D(iParam0->f_428, uParam1, -1);
	iParam0->f_41 = (*uParam1 - iParam0->f_42);
}

bool func_136()
{
	vector3 vVar0;

	func_156();
	if (iLocal_1143 < 3 && iLocal_1143 > 0)
	{
		if (func_152(iLocal_897))
		{
			iLocal_1143 = 3;
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_890))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_890))
		{
			vVar0 = { UNK_0x68F4C0EC296D3901(bLocal_890, true) };
		}
	}
	switch (iLocal_1143)
	{
		case 0:
			if (func_151(1, 1, 1) && !Local_423.f_142)
			{
				iLocal_897 = UNK_0x1C0640BA9A7327B3();
				func_149(&uLocal_1082);
				func_148(&Local_1052, -1, 1);
				func_253(vLocal_958, 0, 15f);
				func_253(vLocal_961, 0, 15f);
				func_147(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848 /* Float: 50f */);
				func_146();
				func_317(&Local_423, 19, 0, 0);
				iLocal_1143 = 1;
			}
			else
			{
				func_145("TX_FC CAN_PLAYER_START_CUTSCENE returns false", &(Local_423.f_78), 1000);
			}
			break;
		case 1:
			if (func_118(&Local_423, 19) > 0.5f)
			{
				func_144(0, 0, 1);
				UNK_0x28F5E4DA506AC0CA(vLocal_958, 30f, 0, 0, 0, 0, false, 0);
				UNK_0x28F5E4DA506AC0CA(vLocal_961, 30f, 0, 0, 0, 0, false, 0);
				UNK_0x745CE398A4B0A3C6(vLocal_958, 30f, 0);
				UNK_0x745CE398A4B0A3C6(vLocal_961, 30f, 0);
				func_142(vLocal_958, 1114636288 /* Float: 60f */, 1);
				func_142(vLocal_961, 1114636288 /* Float: 60f */, 1);
				UNK_0xE342F209E49C5314(vLocal_946, vLocal_949, false, 1);
				func_256(&Local_423, 35, 1, 1, 0);
				UNK_0x608A456FDD8A83D8(Local_423, func_141(0));
				UNK_0x5F3CBA6EB9341C90(Local_423, func_140(0), 2);
				UNK_0x5818C8D5303DCCF8(Local_423, 44.5167f);
				UNK_0x91F5B0244AAE6222(Local_423, "HAND_SHAKE", 0.1f);
				UNK_0xE3BB8E05FCEB3FBE(Local_423, true);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				if (UNK_0xDF1306B443CD3D15(Local_853.f_3, 0))
				{
					UNK_0xA47B46945FF6DE74(Local_853.f_3, vLocal_955, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(Local_853.f_3, bLocal_971);
					if (UNK_0x9414396734E14897(&cLocal_976, vLocal_955, &iLocal_899))
					{
					}
					if (UNK_0xEF8F639897C675D5(&cLocal_976, iLocal_899, &uLocal_952))
					{
					}
					if (!UNK_0x437347B10A200C4B(Local_853.f_2, 0))
					{
						UNK_0x1B901F542DF070CF(Local_853.f_2, Local_853.f_3, &cLocal_976, iLocal_1124, iLocal_899 + 4, 0, -1, -1082130432, 0, 1073741824 /* Float: 2f */);
					}
				}
				func_317(&Local_423, 19, 0, 0);
				iLocal_1143 = 2;
			}
			break;
		case 2:
			if (func_118(&Local_423, 19) > 5f)
			{
				func_317(&Local_423, 19, 0, 0);
				iLocal_1143 = 4;
			}
			else if (func_118(&Local_423, 19) > 4.7f)
			{
				if (func_139())
				{
					if (!bLocal_915)
					{
						UNK_0x82A772610883F395("CamPushInNeutral", 0, 0);
						UNK_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						bLocal_915 = true;
					}
				}
			}
			break;
		case 3:
			if (UNK_0xDF1306B443CD3D15(Local_853.f_3, 0))
			{
				UNK_0xA47B46945FF6DE74(Local_853.f_3, vLocal_922, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(Local_853.f_3, bLocal_974);
				UNK_0xC55F2A0377488064(Local_853.f_3);
			}
			func_317(&Local_423, 19, 0, 0);
			iLocal_1143 = 4;
			break;
		case 4:
			if (UNK_0xDF1306B443CD3D15(Local_423.f_4, 0))
			{
				Local_423.f_141 = 0;
				UNK_0x82E51BCA72537B6C(800);
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				if (UNK_0xDF1306B443CD3D15(Local_853.f_3, 0))
				{
					UNK_0xA47B46945FF6DE74(Local_853.f_3, vLocal_922, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(Local_853.f_3, bLocal_974);
					UNK_0xC55F2A0377488064(Local_853.f_3);
					if (!UNK_0x437347B10A200C4B(Local_853.f_2, 0))
					{
						UNK_0x327AAEE25F323797(Local_853.f_2);
						UNK_0xA47B46945FF6DE74(Local_853.f_2, -691.1571f, -1117.732f, 13.52498f, 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(Local_853.f_2, -49.27436f);
					}
				}
				UNK_0x9A8DDC7C522F5BF5(Local_423, 0);
				UNK_0x9A8DDC7C522F5BF5(iLocal_422, 0);
				func_137(1, 1, 1);
				UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				while (!UNK_0x0F1CCD77290EE12F())
				{
					SYSTEM::WAIT(0);
				}
				func_210(&Local_423, 19, 0);
				iLocal_1143 = 5;
				return true;
			}
			break;
	}
	return false;
}

void func_137(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
	}
	UNK_0x2D23BE319D971F4C(1);
	func_23(0, 1, bParam2, 0, 0, 0);
	if (bParam1)
	{
		UNK_0xBFE31971E49FA500(1);
		UNK_0x8BCB70EB440DED83(1);
	}
	func_138(23, 0);
}

void func_138(bool bParam0, bool bParam1)
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

bool func_139()
{
	if (UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
	{
		return true;
	}
	return false;
}

Vector3 func_140(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { 1.9027f, 0f, 170.5764f };
			break;
	}
	return vVar0;
}

Vector3 func_141(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -686.0368f, -1073.22f, 16.1762f };
			break;
	}
	return vVar0;
}

void func_142(vector3 vParam0, float fParam3, bool bParam4)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	UNK_0xC55B75EFB7DDC5D6(vParam0, &vVar1, &fVar0, 1, 1077936128 /* Float: 3f */, 0);
	vVar4 = { func_38(vVar1, func_143(fVar0), fParam3, fParam3, 5f) };
	vVar7 = { func_38(vVar1, fVar0, fParam3, fParam3, -5f) };
	vVar7.f_2 = (vVar7.z - 22f);
	vVar4.f_2 = (vVar4.z + 22f);
	if (bParam4)
	{
		UNK_0xF858EFDE1871B5F2(vVar7, vVar4, false, 1);
	}
	else
	{
		UNK_0xF5894FEB702E7E76(vVar7, vVar4, 1);
	}
}

float func_143(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

void func_144(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), false, bParam0);
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x7800CEC090C01D4D(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 15f);
	}
	UNK_0x2D23BE319D971F4C(iParam1);
	func_41(0);
	func_23(1, 1, bParam2, 0, 0, 0);
	UNK_0xBFE31971E49FA500(0);
	UNK_0x8BCB70EB440DED83(0);
	func_138(23, 1);
}

void func_145(char* sParam0, int iParam1, int iParam2)
{
	if (UNK_0x1C0640BA9A7327B3() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = UNK_0x1C0640BA9A7327B3();
}

void func_146()
{
	int iVar0;

	bLocal_890 = UNK_0x36F2404464202779(26, bLocal_887, vLocal_940, bLocal_970, 1, true);
	UNK_0x093A734E5AEA758F(bLocal_890, 5);
	UNK_0x64F9F278AB9DCA2C(bLocal_890, 3, true, 2, 0);
	UNK_0x64F9F278AB9DCA2C(bLocal_890, 4, false, true, 0);
	UNK_0x64F9F278AB9DCA2C(bLocal_890, 2, true, 2, 0);
	UNK_0x4E885A246A9D983A(bLocal_890, 20, true);
	func_8(&(Local_423.f_244), 5, bLocal_890, "TaxiCarrie", 0, 1);
	if (!UNK_0x437347B10A200C4B(bLocal_890, 0))
	{
		UNK_0xD8F6A53F4799FAFE(bLocal_890, bLocal_970);
		UNK_0xF82EA857DA10E0CD(&iVar0);
		UNK_0xDD353D0E9C789D0E(&iVar0);
		UNK_0x93D47DFD0AE94949(false, 2500);
		UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -1.5f, 2000, 0, false, 0, 0, 0);
		UNK_0xB87AD42E3FA06BDE(false, vLocal_943, 1f, 0, 0, 786603, -1082130432 /* Float: -1f */);
		UNK_0x75ABDC5F81978924(iVar0);
		UNK_0x78ADC381772E3D54(bLocal_890, iVar0);
		UNK_0xF82EA857DA10E0CD(&iVar0);
	}
}

void func_147(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	if (!UNK_0x9F4FE516EAACCFC5(*iParam0))
	{
		*iParam0 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vParam1, vParam4, fParam7, 0, 2);
	}
}

void func_148(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_149(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_150(), 24);
		iVar0++;
	}
	UNK_0x790015DC92C918E2();
	func_48();
}

char* func_150()
{
	var uVar0;

	return uVar0;
}

bool func_151(bool bParam0, bool bParam1, bool bParam2)
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

bool func_152(int iParam0)
{
	if (func_155() && UNK_0x1C0640BA9A7327B3() >= iParam0 + 1000)
	{
		UNK_0x53491B90E4FD0E56(500);
		while (!UNK_0x757EF87A33649210())
		{
			SYSTEM::WAIT(0);
		}
		func_41(0);
		func_153();
		return true;
	}
	return false;
}

void func_153()
{
	Global_19671 = 0;
	func_154();
}

void func_154()
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

bool func_155()
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

void func_156()
{
	if (func_35())
	{
		UNK_0xCB0CD9B929EB37B9("appInternet");
	}
	if (func_34())
	{
		UNK_0xCB0CD9B929EB37B9("appCamera");
	}
	if (func_43(1))
	{
		func_41(0);
	}
}

bool func_157()
{
	if (!UNK_0xB87F6CF6E5628C67(bLocal_887))
	{
		return false;
	}
	if (!UNK_0xB4AE0788C1587752("MOVE_DUCK_FOR_COVER"))
	{
		func_145("TAXI_ASSETS_STREAMED - Loading MOVE_DUCK_FOR_COVER", &iLocal_896, 1000);
		return false;
	}
	return true;
}

void func_158()
{
	UNK_0x523BCC9DC80CD82F(bLocal_887);
	UNK_0x3F423BF5B8125A50("MOVE_DUCK_FOR_COVER");
	UNK_0x3F423BF5B8125A50(&cLocal_980);
	UNK_0x3F423BF5B8125A50(&cLocal_996);
	UNK_0x3F423BF5B8125A50(&cLocal_1012);
	UNK_0x3F423BF5B8125A50(&cLocal_1028);
}

void func_159(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (UNK_0x8CD06866876216F2())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
		{
			return;
		}
	}
	if (UNK_0x8C74DE122769E1BF())
	{
		UNK_0x29D5132FBDCF2B1E(iParam2);
		UNK_0x9A1335ECD7BD117F("FocusIn");
		UNK_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			UNK_0x82A772610883F395("FocusOut", 0, 0);
			UNK_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	UNK_0xF3039DE1FDB4F6FD(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	bVar0 = bParam1;
	if (UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_160(uParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_160(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

bool func_160(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

bool func_161()
{
	if (func_118(&Local_423, 20) > 2f)
	{
		if (!Local_423.f_142)
		{
			func_190(&Local_423, &Local_853, (UNK_0x1C0640BA9A7327B3() - iLocal_975) > 15000, 0);
		}
	}
	if (UNK_0xDF1306B443CD3D15(Local_853.f_3, 0))
	{
		if (UNK_0xDF1306B443CD3D15(Local_423.f_4, 0))
		{
			if (UNK_0x3D1053F9EB43B7AD(Local_423.f_4, vLocal_1044, vLocal_1047, bLocal_1050, 0, true, 0))
			{
				UNK_0xE0C0351D5B931E37(Local_423.f_4, 5f, 1, 0);
				return true;
			}
		}
		func_162(&uLocal_45, Local_853.f_3, 0, 0, 1, 1, 1);
		func_135(&Local_423, &(Local_423.f_43));
		if (!bLocal_903)
		{
			if (!UNK_0x437347B10A200C4B(Local_853.f_2, 0))
			{
				if (!UNK_0x20D6474D5F4B9FC6(Local_853.f_3) && IntToFloat((UNK_0x1C0640BA9A7327B3() - iLocal_975)) > UNK_0x1C8FE65729F6E371(120, "txm_fc_h1_"))
				{
					UNK_0xE9362E4D600DD12A(Local_853.f_2, Local_853.f_3, vLocal_955, 28f, 0, Local_853.f_1, iLocal_1123, 13.75f, -1f);
					bLocal_903 = true;
				}
			}
		}
	}
	return false;
}

void func_162(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_163(uParam0, bParam1, bParam2, iParam3, bParam4, bParam5, bParam6);
}

void func_163(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_164(uParam0, bParam1, 0f, 0f, 0f, bParam2, iParam3, bParam4, bParam5, bParam6);
}

void func_164(var uParam0, bool bParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
	bool bVar1;

	if (uParam0->f_1 && UNK_0x8C74DE122769E1BF())
	{
		if (UNK_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	bVar0 = bParam5;
	if (UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (!UNK_0x8CD06866876216F2())
		{
			bVar0 = "CMN_HINT";
		}
		else
		{
			bVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_160(bVar0))
	{
		func_189();
	}
	if (func_188(bParam1) && UNK_0x4FC40AB0ECCE6E18(bParam1))
	{
		bVar1 = false;
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			UNK_0x4862370C9F046219(UNK_0x940C1429253D3B1B(bParam1));
			UNK_0xB9099320B5179E0A(UNK_0x940C1429253D3B1B(bParam1), 1);
			if (UNK_0x71313E3D03CEEB37(UNK_0x940C1429253D3B1B(bParam1)))
			{
				bVar1 = true;
			}
		}
		else if (UNK_0xE2F1E99DD161A861(bParam1))
		{
			UNK_0x00D1596840E78F77(UNK_0x96A5FE5834B81CE7(bParam1));
			if (UNK_0xC03F94FBD72F6D02(UNK_0x96A5FE5834B81CE7(bParam1)))
			{
				bVar1 = true;
			}
		}
		else if (UNK_0x6BC06B42AD71CD8B(bParam1))
		{
			UNK_0xFF7829816FC6D977(UNK_0x486F67509A82DB2D(bParam1));
			if (UNK_0x660643587812C91B(UNK_0x486F67509A82DB2D(bParam1)))
			{
				bVar1 = true;
			}
		}
		if (!UNK_0x8C74DE122769E1BF())
		{
			if (func_183(uParam0, bParam7, bParam9, 0))
			{
				func_180(uParam0, bParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_169(bVar0))
				{
					if ((UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0)) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if ((bVar1 && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
						{
							if (!func_160(bVar0))
							{
								func_168(bVar0, -1);
								uParam0->f_3 = bVar0;
								if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
								{
									func_167(1);
								}
							}
						}
					}
				}
			}
			else if (func_169(bVar0))
			{
				if (UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0))
				{
					if (((UNK_0x0A059E0DB9253280(bParam1) && bVar1) && !UNK_0xFEBC1E4EC9E001F0()) && bParam8)
					{
						if (!func_160(bVar0))
						{
							func_168(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
							{
								func_167(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!UNK_0x2EBF5002C6B6A06C(bParam5))
			{
				if (func_160(bParam5))
				{
					UNK_0xA37A90C62806D848(1);
				}
			}
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
			{
				if (UNK_0xC8676198F2355F9F(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(3) == 3 || UNK_0xA4FD7964FEE91ED8(3) == 4)
					{
						func_159(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
					{
						func_159(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
					{
						func_159(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
					{
						func_159(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
					{
						func_159(uParam0, bVar0, 1);
					}
				}
				else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
				{
					func_159(uParam0, bVar0, 1);
				}
			}
			if (!func_183(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_166(uParam0))
				{
					func_165(uParam0);
				}
			}
		}
	}
	else
	{
		func_159(uParam0, bVar0, 0);
	}
}

void func_165(var uParam0)
{
	if (func_188(UNK_0x16F2683693E537C9()))
	{
		UNK_0xBC43ED9FE28DB191(UNK_0x16F2683693E537C9());
	}
	if (UNK_0x8C74DE122769E1BF())
	{
		UNK_0xF3039DE1FDB4F6FD(1);
		UNK_0x29D5132FBDCF2B1E(0);
		UNK_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		UNK_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_11)
		{
			UNK_0x82A772610883F395("FocusOut", 0, 0);
			UNK_0x4D7F4CC43D4D0DE3(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

bool func_166(var uParam0)
{
	int iVar0;

	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > UNK_0x1C0640BA9A7327B3()
		{
			return true;
		}
	}
	return false;
}

int func_167(bool bParam0)
{
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111638.f_10044.f_100++;
			}
			return Global_111638.f_10044.f_100;
		case 4:
			if (bParam0)
			{
				Global_111638.f_10044.f_101++;
			}
			return Global_111638.f_10044.f_101;
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111638.f_10044.f_102++;
			}
			return Global_111638.f_10044.f_102;
		default:
			break;
	}
	return 3;
}

void func_168(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_169(bool bParam0)
{
	if (!func_170(1, 1, 0))
	{
		if ((!UNK_0xEA6BC48857E0AC4C(bParam0) && func_160(bParam0)) || func_160("CMN_HINT"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_167(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_167(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_167(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_170(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	if (bParam0)
	{
		if (!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	if (bParam2)
	{
		return true;
	}
	if (UNK_0x991B1F0980C62628())
	{
		return false;
	}
	if (func_43(0))
	{
		return false;
	}
	if (func_179())
	{
		return false;
	}
	if (UNK_0x4FD68D5821EE3E19())
	{
		return false;
	}
	if (Global_73825)
	{
		return false;
	}
	if (UNK_0x8A22C4C08282BF26(joaat("APPINTERNET")) > 0)
	{
		return false;
	}
	if (Global_58693)
	{
		return false;
	}
	if (bParam1)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
		{
			if (UNK_0xC8676198F2355F9F(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(3) == 3 || UNK_0xA4FD7964FEE91ED8(3) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
				{
					return false;
				}
			}
			else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
				{
					return false;
				}
			}
			else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
			{
				return false;
			}
			if (UNK_0xC4E6FF7CA2A185EA())
			{
				return false;
			}
		}
	}
	if ((func_178() || func_177(Global_4456448.f_232883)) || func_176())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_175(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_174(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_171(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_171(bool bParam0)
{
	if (bParam0 != func_173())
	{
		if (func_172(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_172(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_172(bool bParam0, bool bParam1, bool bParam2)
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

int func_173()
{
	return -1;
}

bool func_174(bool bParam0, int iParam1)
{
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0x40B3F576B41FA183(bParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
				default:
					if (UNK_0x461CAC843A21E4B6(bParam0, iParam1) > 0)
					{
						return true;
					}
					break;
			}
		}
	}
	return false;
}

bool func_175(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x405E212DDE472467(bParam0, iParam1))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam0, iParam1);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				iVar1 = UNK_0x7087E053058E9F6C(UNK_0x134B62B726CEC8E6(bVar0));
				if (iVar1 == 1)
				{
					bVar3 = -1;
					return bVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					bVar3 = (iVar2 - 1);
					if (!UNK_0xBBA8A868118C90ED(bVar0, bVar3, 0))
					{
						if (UNK_0xA30B8362589C124A(bVar0, bVar3, 0) == bParam0)
						{
							return bVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return bVar3;
}

bool func_176()
{
	return Global_2450632.f_17;
}

bool func_177(int iParam0)
{
	return iParam0 == 51;
}

bool func_178()
{
	return Global_2450632.f_16;
}

bool func_179()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_180(var uParam0, bool bParam1, vector3 vParam2, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Global_1319117 == 1)
	{
		return;
	}
	if (UNK_0x437347B10A200C4B(bParam1, 0))
	{
		func_159(uParam0, 0, 0);
	}
	if (func_39(vParam2, 0f, 0f, 0f, 0))
	{
		if (UNK_0xEC560E589DF8370E(bParam1))
		{
			bVar0 = UNK_0x940C1429253D3B1B(bParam1);
			if (!UNK_0x405E212DDE472467(bVar0, 0))
			{
				if (UNK_0x34BFC6F0CB887BC2(bVar0))
				{
					if (!func_181())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (UNK_0xCED082ADD3739B9F(bVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	UNK_0xF3039DE1FDB4F6FD(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (bParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	UNK_0xC0B0B9E466C0ED17(bParam1, vParam2, 1, -1, iVar1, iVar2, bParam5);
	iVar3 = 2048;
	iVar4 = 3;
	UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bParam1, -1, iVar3, iVar4);
	UNK_0x82A772610883F395("FocusIn", 0, 0);
	UNK_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	UNK_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_181()
{
	return func_182(UNK_0xD803B885F5E47A62());
}

int func_182(bool bParam0)
{
	if (UNK_0x134B62B726CEC8E6(UNK_0x9539D44F3E4492F6(bParam0)) == joaat("MP_F_FREEMODE_01"))
	{
		return 1;
	}
	return 0;
}

bool func_183(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (UNK_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					if (func_187(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_186(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_186(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_187(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_166(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		case 1:
			if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
					{
						if (!func_187(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_186(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_186(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_187(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					if (!func_187(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_186(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_186(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || UNK_0x8B8AFAD7ED240B7F(UNK_0x16F2683693E537C9(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_187(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		case 3:
			if ((UNK_0x1C0640BA9A7327B3() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
					{
						if (func_185(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_184(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_184(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || UNK_0x8B8AFAD7ED240B7F(UNK_0x16F2683693E537C9(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_185(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_166(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_170(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_189();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_184(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_170(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x38C3A68D7861DCFD(0, 140, 1);
			UNK_0x38C3A68D7861DCFD(0, 80, 1);
			if (UNK_0x9A01369A10646AFE(0, 80))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_185(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_170(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x38C3A68D7861DCFD(0, 80, 1);
		if (UNK_0x0F01D47446BE1FEB())
		{
			if (UNK_0x9A01369A10646AFE(0, 80))
			{
				UNK_0xF3039DE1FDB4F6FD(0);
				return true;
			}
		}
	}
	return false;
}

bool func_186(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_170(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x38C3A68D7861DCFD(0, 140, 1);
			UNK_0x38C3A68D7861DCFD(0, 80, 1);
			if (UNK_0x7FEE810EE9E768EB(0, 80) && UNK_0x1C0640BA9A7327B3() > Global_116)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_187(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_170(bParam0, bParam1, bParam2))
	{
		return false;
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x38C3A68D7861DCFD(0, 80, 1);
		if (UNK_0x0F01D47446BE1FEB())
		{
			if (UNK_0x7FEE810EE9E768EB(0, 80) && UNK_0x1C0640BA9A7327B3() > Global_116)
			{
				UNK_0xF3039DE1FDB4F6FD(0);
				return true;
			}
		}
	}
	return false;
}

bool func_188(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xE2F1E99DD161A861(bParam0))
		{
			if (UNK_0xDF1306B443CD3D15(UNK_0x96A5FE5834B81CE7(bParam0), 0))
			{
				return true;
			}
		}
		else if (UNK_0xEC560E589DF8370E(bParam0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x940C1429253D3B1B(bParam0)))
			{
				return true;
			}
		}
		else if (UNK_0x6BC06B42AD71CD8B(bParam0))
		{
			return true;
		}
	}
	return false;
}

void func_189()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

void func_190(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!UNK_0x437347B10A200C4B(uParam1->f_2, 0))
	{
		if (UNK_0xB87D13D0C064E9D1(uParam1->f_2, UNK_0x16F2683693E537C9(), 0))
		{
			func_361(iParam0, "Taxi shot up the car", 12);
		}
	}
	else
	{
		func_361(iParam0, "Followee died", 13);
	}
	if ((UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0 && UNK_0xDF1306B443CD3D15(uParam1->f_3, 0)) && !UNK_0x437347B10A200C4B(uParam1->f_2, 0))
	{
		UNK_0x60274E99F9B27DEA(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
		UNK_0xFADC0A217229F6B5(uParam1->f_2, true);
		func_361(iParam0, "Player went wanted", 4);
	}
	func_199(iParam0, uParam1);
	if (UNK_0xDF1306B443CD3D15(uParam1->f_3, 0) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (bParam3)
		{
			if (func_198(&(uParam1->f_3)))
			{
				UNK_0x5F3EEC968FEB7235(UNK_0x68F4C0EC296D3901(uParam1->f_3, true), 22.5f, 255, false, false, 60);
			}
			else if (func_197(&(uParam1->f_3)))
			{
				UNK_0x5F3EEC968FEB7235(UNK_0x68F4C0EC296D3901(uParam1->f_3, true), func_196(&(uParam1->f_3)), 255, false, false, 60);
			}
			else if (func_195(&(uParam1->f_3)))
			{
				UNK_0x5F3EEC968FEB7235(UNK_0x68F4C0EC296D3901(uParam1->f_3, true), 13f, 125, false, 125, 60);
			}
		}
		if ((UNK_0x6EE94F60DA2A2273(uParam1->f_3) < uParam1->f_15 || UNK_0xB87D13D0C064E9D1(uParam1->f_3, UNK_0x16F2683693E537C9(), 1)) || UNK_0xD96C5EC6FCB061BA(uParam1->f_3) < uParam1->f_16)
		{
			if (UNK_0xB87D13D0C064E9D1(uParam1->f_3, UNK_0x16F2683693E537C9(), 0))
			{
				func_361(iParam0, "Taxi shot up the car", 12);
			}
			if (func_118(iParam0, 13) > 5f)
			{
				func_194(iParam0, uParam1, 1);
			}
			else
			{
				uParam1->f_15 = UNK_0x6EE94F60DA2A2273(uParam1->f_3);
				uParam1->f_5 = UNK_0x7F6DC62EA9922664(uParam1->f_3);
				uParam1->f_16 = UNK_0xD96C5EC6FCB061BA(uParam1->f_3);
			}
		}
		if (func_51(iParam0->f_4, uParam1->f_3, 1) >= 120f)
		{
			if (func_51(iParam0->f_4, uParam1->f_3, 1) >= 480f)
			{
				func_256(iParam0, 143, 0, 0, 0);
				func_361(iParam0, "Taxi let the Chasee lose him", 2);
			}
			else if (!uParam1->f_21)
			{
				if ((func_193(&(iParam0->f_409), UNK_0x68F4C0EC296D3901(iParam0->f_4, true), UNK_0x68F4C0EC296D3901(uParam1->f_3, true), 0) == -1 && func_51(iParam0->f_4, uParam1->f_3, 1) >= 150f) && func_118(iParam0, 8) > 10f)
				{
					uParam1->f_21 = 1;
					uParam1->f_23 = 0;
					uParam1->f_9++;
					func_317(iParam0, 8, 0, 0);
					if (uParam1->f_9 > 3)
					{
						if (UNK_0xDF1306B443CD3D15(uParam1->f_3, 0) && !UNK_0x437347B10A200C4B(uParam1->f_2, 0))
						{
							UNK_0x60274E99F9B27DEA(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
							UNK_0xFADC0A217229F6B5(uParam1->f_2, true);
						}
						func_361(iParam0, "Taxi let the Chasee lose him", 2);
					}
					else if (uParam1->f_9 == 3)
					{
						func_192(iParam0, 6, 1);
					}
					else
					{
						func_192(iParam0, 1, 1);
					}
					func_256(iParam0, 13, 1, 0, 0);
				}
			}
			else if (UNK_0xF649DD3BF44195C7(iParam0->f_4, uParam1->f_3, 17))
			{
				uParam1->f_21 = 0;
				func_317(iParam0, 8, 0, 0);
			}
			else if (func_51(iParam0->f_4, uParam1->f_3, 1) >= 300f)
			{
				func_256(iParam0, 143, 0, 0, 0);
				func_361(iParam0, "Taxi let the Chasee lose him", 2);
			}
		}
		else if (((func_51(iParam0->f_4, uParam1->f_3, 1) < 22.5f && func_198(&(uParam1->f_3))) || (func_51(iParam0->f_4, uParam1->f_3, 1) < 13f && func_195(&(uParam1->f_3)))) || (func_51(iParam0->f_4, uParam1->f_3, 1) < func_196(&(uParam1->f_3)) && func_197(&(uParam1->f_3))))
		{
			if (!uParam1->f_22 || func_191(iParam0, 21))
			{
				if ((UNK_0xF649DD3BF44195C7(iParam0->f_4, uParam1->f_3, 17) && func_118(iParam0, 8) > 10f) && bParam2)
				{
					uParam1->f_22 = 1;
					uParam1->f_23 = 0;
					uParam1->f_8++;
					uParam1->f_9++;
					func_317(iParam0, 8, 0, 0);
					if (!func_191(iParam0, 21))
					{
						func_317(iParam0, 21, 0, 0);
					}
					if (uParam1->f_9 > 3)
					{
						if (!func_213())
						{
							if (UNK_0xDF1306B443CD3D15(uParam1->f_3, 0) && !UNK_0x437347B10A200C4B(uParam1->f_2, 0))
							{
								UNK_0x60274E99F9B27DEA(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								UNK_0xFADC0A217229F6B5(uParam1->f_2, true);
							}
							func_361(iParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_153();
						}
					}
					else if (uParam1->f_9 == 3)
					{
						func_192(iParam0, 3, 1);
					}
					else
					{
						func_192(iParam0, 2, 1);
					}
					if (func_51(iParam0->f_4, uParam1->f_3, 1) < 15f)
					{
						if (!func_213())
						{
							func_256(iParam0, 143, 0, 0, 0);
							func_48();
							if (UNK_0xDF1306B443CD3D15(uParam1->f_3, 0) && !UNK_0x437347B10A200C4B(uParam1->f_2, 0))
							{
								UNK_0x60274E99F9B27DEA(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								UNK_0xFADC0A217229F6B5(uParam1->f_2, true);
							}
							func_361(iParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_153();
						}
					}
					else if (uParam1->f_9 <= 3)
					{
						func_256(iParam0, 13, 1, 0, 0);
					}
					uParam1->f_15 = UNK_0x6EE94F60DA2A2273(uParam1->f_3);
				}
			}
		}
		else
		{
			if (func_191(iParam0, 21))
			{
				func_210(iParam0, 21, 0);
			}
			if (uParam1->f_22)
			{
				if (func_51(iParam0->f_4, uParam1->f_3, 1) > 22.5f)
				{
					uParam1->f_22 = 0;
					func_317(iParam0, 8, 0, 0);
				}
			}
			if (uParam1->f_21)
			{
				if (func_51(iParam0->f_4, uParam1->f_3, 1) < 150f && UNK_0xF649DD3BF44195C7(iParam0->f_4, uParam1->f_3, 17))
				{
					uParam1->f_21 = 0;
					func_317(iParam0, 8, 0, 0);
				}
			}
			if (!uParam1->f_23)
			{
				if (!uParam1->f_21 && !uParam1->f_22)
				{
					uParam1->f_23 = 1;
					func_192(iParam0, 8, 1);
					func_256(iParam0, 13, 1, 0, 0);
					func_317(iParam0, 8, 0, 0);
				}
			}
			else
			{
				if (iParam0->f_80 > iParam0->f_101)
				{
					uParam1->f_24 = 1;
				}
				if ((!uParam1->f_24 && !uParam1->f_21) && !uParam1->f_22)
				{
					if (func_118(iParam0, 8) > 15f && !func_213())
					{
						func_192(iParam0, 9, 1);
						func_256(iParam0, 13, 1, 0, 0);
						func_317(iParam0, 8, 0, 0);
					}
				}
			}
		}
	}
}

bool func_191(int iParam0, int iParam1)
{
	return func_14(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_192(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

int func_193(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;

	if (*uParam0 == 0)
	{
		*uParam0 = UNK_0xCD02F8660C47B801(vParam1, vParam4, 511, false, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = UNK_0x1EC301670B54C6DE(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
		if (iVar8 == 2)
		{
			if (bParam7)
			{
			}
			if (iVar6 == 0)
			{
				*uParam0 = 0;
				return iVar6;
			}
			else
			{
				if (bParam7)
				{
				}
				*uParam0 = 0;
				return iVar6;
			}
		}
		else if (iVar8 == 0)
		{
			if (bParam7)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

void func_194(int iParam0, var uParam1, bool bParam2)
{
	uParam1->f_6++;
	uParam1->f_9++;
	if (uParam1->f_6 >= 1)
	{
		if (!func_213())
		{
			func_281(iParam0, 0, 1);
			if (UNK_0xDF1306B443CD3D15(uParam1->f_3, 0) && !UNK_0x437347B10A200C4B(uParam1->f_2, 0))
			{
				UNK_0x60274E99F9B27DEA(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
				UNK_0xFADC0A217229F6B5(uParam1->f_2, true);
			}
			func_361(iParam0, "Taxi was ID'd by the Chasee", 3);
		}
		else
		{
			func_153();
		}
	}
	else
	{
		func_317(iParam0, 13, 0, 0);
		UNK_0xE910A68AA670B4AA(uParam1->f_3);
		func_192(iParam0, 10, 1);
		func_281(iParam0, 1, 0);
	}
	if (bParam2)
	{
	}
}

bool func_195(var uParam0)
{
	if (UNK_0xDF1306B443CD3D15(*uParam0, 0))
	{
		if (UNK_0x8B38C0DAEEDB5F9C(*uParam0) || UNK_0x9C66D99E63E8E24C(*uParam0) < 4f)
		{
			return true;
		}
	}
	return false;
}

float func_196(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar2 = 22.5f;
	fVar3 = 13f;
	if (UNK_0xDF1306B443CD3D15(*uParam0, 0))
	{
		fVar1 = UNK_0x9C66D99E63E8E24C(*uParam0);
	}
	fVar0 = ((((fVar1 - 4f) / 11f) * (fVar2 - fVar3)) + fVar3);
	return fVar0;
}

bool func_197(var uParam0)
{
	if (UNK_0xDF1306B443CD3D15(*uParam0, 0))
	{
		if (UNK_0x9C66D99E63E8E24C(*uParam0) >= 4f && UNK_0x9C66D99E63E8E24C(*uParam0) < 15f)
		{
			return true;
		}
	}
	return false;
}

bool func_198(var uParam0)
{
	if (UNK_0xDF1306B443CD3D15(*uParam0, 0))
	{
		if (UNK_0x9C66D99E63E8E24C(*uParam0) >= 15f)
		{
			return true;
		}
	}
	return false;
}

void func_199(int iParam0, var uParam1)
{
	if (UNK_0xDF1306B443CD3D15(uParam1->f_3, 0) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (func_51(iParam0->f_4, uParam1->f_3, 1) < 120f)
		{
			if (iParam0->f_414 == 6 || iParam0->f_414 == 1)
			{
				if (func_200(iParam0) == 13)
				{
					func_123();
				}
			}
		}
		if (func_51(iParam0->f_4, uParam1->f_3, 1) >= 22.5f)
		{
			if (iParam0->f_414 == 3 || iParam0->f_414 == 2)
			{
				if (func_200(iParam0) == 13)
				{
					func_123();
				}
			}
		}
	}
}

int func_200(int iParam0)
{
	return iParam0->f_416;
}

void func_201(bool bParam0, vector3 vParam1, float fParam4, var uParam5, int iParam6)
{
	if (!func_213())
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (func_53(bParam0, vParam1, 1) < fParam4)
			{
				if (func_203(uParam5))
				{
					func_202(uParam5, iParam6, -1);
				}
			}
		}
	}
}

void func_202(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

bool func_203(var uParam0)
{
	return *uParam0 == 0;
}

void func_204(int iParam0)
{
	if (func_207(iParam0))
	{
		func_205(iParam0);
	}
}

void func_205(int iParam0)
{
	if (UNK_0xEFFB47DC2D8F23F9() && iParam0->f_418.f_4 != 0)
	{
		iParam0->f_418.f_4 = 0;
	}
	switch (iParam0->f_418.f_4)
	{
		case 0:
			iParam0->f_418 = UNK_0xFC21F7E0F4D92523();
			func_210(iParam0, 20, 0);
			iParam0->f_418.f_4++;
			break;
		case 1:
			if (iParam0->f_418.f_8 && !iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (func_118(iParam0, 20) > 3f)
				{
					func_256(iParam0, 87, 1, 0, 0);
					iParam0->f_418.f_8 = 0;
					iParam0->f_418.f_4++;
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_1)
			{
				if (!func_22(iParam0->f_81, 262144) || !func_22(iParam0->f_81, 1048576))
				{
					if (func_118(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_5 = 1;
						func_256(iParam0, 84, 1, 0, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (!func_22(iParam0->f_82, 67108864))
				{
					if (func_118(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_6 = 1;
						iParam0->f_418.f_8 = 0;
						func_256(iParam0, 85, 1, 0, 0);
						func_210(iParam0, 22, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418.f_7)
			{
				if (func_118(iParam0, 20) > 8f)
				{
					func_256(iParam0, 86, 1, 0, 0);
					iParam0->f_418.f_4++;
				}
			}
			break;
		case 2:
			if (func_22(iParam0->f_81, 262144) || func_22(iParam0->f_82, 67108864))
			{
				if (!func_191(iParam0, 22))
				{
					func_206(iParam0, 22);
				}
			}
			if (func_191(iParam0, 22) && func_118(iParam0, 22) > 15f)
			{
				if (iParam0->f_418 == iParam0->f_418.f_1)
				{
					if (!func_22(iParam0->f_81, 1048576))
					{
						func_256(iParam0, 84, 1, 0, 0);
						func_210(iParam0, 22, 0);
					}
				}
				else if (iParam0->f_418 == iParam0->f_418.f_2)
				{
					if (!func_22(iParam0->f_82, 134217728))
					{
						func_256(iParam0, 85, 1, 0, 0);
						func_210(iParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_206(int iParam0, int iParam1)
{
	func_119(&(iParam0->f_146[iParam1 /*3*/]));
}

bool func_207(int iParam0)
{
	return iParam0->f_120;
}

bool func_208(bool bParam0, int iParam1)
{
	if (UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) < 1)
	{
		if (UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
				{
					UNK_0x67F91979413C5D76(UNK_0xA30EC016B12C03E4(), 1, 0);
					UNK_0x56EA5D248F36A081(UNK_0xA30EC016B12C03E4(), 0);
					if (UNK_0xE4EDC4B0E92C078B(iParam1))
					{
						UNK_0x142CC44DB769B57E(&iParam1);
					}
					return true;
				}
			}
		}
	}
	return false;
}

bool func_209(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0xA30B8362589C124A(iParam0->f_4, -1, 0) == UNK_0x16F2683693E537C9())
		{
			return true;
		}
	}
	return false;
}

void func_210(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_108(&(iParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_108(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

bool func_211(bool bParam0, bool bParam1)
{
	if (UNK_0xDF1306B443CD3D15(bParam1, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			return true;
		}
	}
	return false;
}

void func_212()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { 402.42f, -1457.19f, 28.82f };
	vVar3 = { -701.25f, -1080.29f, 12.29f };
	if (vVar3.x <= vVar0.x)
	{
		vLocal_964.x = vVar3.x;
		vLocal_967.x = vVar0.x;
	}
	else
	{
		vLocal_964.x = vVar0.x;
		vLocal_967.x = vVar3.x;
	}
	if (vVar3.y <= vVar0.y)
	{
		vLocal_964.f_1 = vVar3.y;
		vLocal_967.f_1 = vVar0.y;
	}
	else
	{
		vLocal_964.f_1 = vVar0.y;
		vLocal_967.f_1 = vVar3.y;
	}
	vLocal_964 = { vLocal_964 - Vector(20f, 20f, 20f) };
	vLocal_967 = { vLocal_967 + Vector(20f, 20f, 20f) };
	UNK_0x10FEEAFF01E32639(vLocal_964.x, vLocal_964.y, vLocal_967.x, vLocal_967.y);
}

bool func_213()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_214()
{
	func_156();
	if (iLocal_1144 < 9 && iLocal_1144 > 2)
	{
		if (func_152(iLocal_897))
		{
			iLocal_1144 = 9;
		}
	}
	switch (iLocal_1144)
	{
		case 0:
			if (func_151(1, 1, 1))
			{
				iLocal_897 = UNK_0x1C0640BA9A7327B3();
				func_144(256, 0, 1);
				func_149(&uLocal_1082);
				func_148(&Local_1052, 2, 0);
				if (func_220(&Local_853, vLocal_934, fLocal_973))
				{
					UNK_0xF858EFDE1871B5F2(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, true, 1);
					func_147(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848 /* Float: 50f */);
					func_256(&Local_423, 138, 1, 0, 0);
					iLocal_1144 = 1;
				}
			}
			break;
		case 1:
			if (func_118(&Local_423, 19) > 3f)
			{
				if (!UNK_0xEB6A8945D1AC98A1(Local_853.f_2))
				{
					UNK_0x11AD11297DC58CC7(Local_853.f_2, true);
					UNK_0xA3BF0AA5A2608191(Local_853.f_2);
					if (UNK_0xDF1306B443CD3D15(Local_853.f_3, 0))
					{
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xDD353D0E9C789D0E(&iLocal_414);
						UNK_0x5B1D360B9C6F0A09(false, Local_853.f_3, 20000, -1, 1f, 1, 0);
						UNK_0xC6EB89C59F2AF6B8(false, "veh@truck@ds@base", "start_engine", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
						UNK_0x75ABDC5F81978924(iLocal_414);
						UNK_0x78ADC381772E3D54(Local_853.f_2, iLocal_414);
						UNK_0x71EDC33E5A423750(Local_853.f_3, 1);
					}
				}
				UNK_0xBFB24B9B15F6108F(UNK_0x16F2683693E537C9(), Local_423.f_17);
				UNK_0x608A456FDD8A83D8(Local_423, func_219(0));
				UNK_0x5F3CBA6EB9341C90(Local_423, func_218(0), 2);
				UNK_0x5818C8D5303DCCF8(Local_423, 17.2f);
				UNK_0x91F5B0244AAE6222(Local_423, "HAND_SHAKE", 0.1f);
				UNK_0xE3BB8E05FCEB3FBE(Local_423, true);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				func_317(&Local_423, 19, 0, 0);
				iLocal_1144 = 2;
			}
			break;
		case 2:
			iLocal_422 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
			UNK_0x608A456FDD8A83D8(iLocal_422, func_219(4));
			UNK_0x5F3CBA6EB9341C90(iLocal_422, func_218(0), 2);
			UNK_0x5818C8D5303DCCF8(iLocal_422, 17.2f);
			UNK_0x91F5B0244AAE6222(iLocal_422, "HAND_SHAKE", 0.1f);
			UNK_0xF1E4C781086FABC1(iLocal_422, Local_423, 6000, 1, 1);
			func_317(&Local_423, 19, 0, 0);
			iLocal_1144 = 3;
			break;
		case 3:
			if (func_118(&Local_423, 19) > 7.85f && !bLocal_912)
			{
				if (func_200(&Local_423) > 10)
				{
					func_215();
				}
				bLocal_912 = true;
			}
			if (func_118(&Local_423, 19) > 8f && bLocal_912)
			{
				UNK_0x608A456FDD8A83D8(Local_423, func_219(2));
				UNK_0x1305278186D1C53E(Local_423, Local_853.f_3, 0f, 0f, 0f, 1);
				UNK_0x5818C8D5303DCCF8(Local_423, 35f);
				UNK_0x91F5B0244AAE6222(Local_423, "HAND_SHAKE", 0.2f);
				UNK_0xE3BB8E05FCEB3FBE(Local_423, true);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				func_317(&Local_423, 19, 0, 0);
				iLocal_1144 = 4;
			}
			break;
		case 4:
			UNK_0x608A456FDD8A83D8(iLocal_422, func_219(2));
			UNK_0x1305278186D1C53E(iLocal_422, Local_853.f_3, 0f, 0f, 0f, 1);
			UNK_0x5818C8D5303DCCF8(iLocal_422, 45f);
			UNK_0x91F5B0244AAE6222(iLocal_422, "HAND_SHAKE", 0.2f);
			UNK_0xF1E4C781086FABC1(iLocal_422, Local_423, 10000, 1, 1);
			func_317(&Local_423, 19, 0, 0);
			iLocal_1144 = 11;
			break;
		case 9:
			if (!UNK_0x437347B10A200C4B(Local_853.f_2, 0) && !UNK_0x437347B10A200C4B(Local_853.f_3, 0))
			{
				if (!UNK_0x405E212DDE472467(Local_853.f_2, 0))
				{
					UNK_0xF821F915BC24D246(Local_853.f_2, Local_853.f_3, -1);
				}
				UNK_0x1AEF7184B203A58D(Local_853.f_3, 10f);
				func_111(&(Local_853.f_27));
				func_317(&Local_423, 19, 2f, 0);
				iLocal_1144 = 11;
				if (!bLocal_901)
				{
					func_215();
				}
			}
			break;
		case 11:
			if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
			{
			}
			if (UNK_0xBF75E4DF4C367CD9(413.8f, -1416.19f, 29.26f, 5f, joaat("PROP_SEC_BARRIER_LD_02A"), 0))
			{
				UNK_0x6DA3AC47D5DB9EED(joaat("PROP_SEC_BARRIER_LD_02A"), 413.8f, -1416.19f, 29.26f, false, 0.85f, 0);
			}
			if (func_118(&Local_423, 19) > 4f)
			{
				UNK_0x82E51BCA72537B6C(800);
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				func_111(&(Local_853.f_27));
				UNK_0x9A8DDC7C522F5BF5(Local_423, 0);
				UNK_0x9A8DDC7C522F5BF5(iLocal_422, 0);
				func_137(1, 1, 1);
				UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				func_210(&Local_423, 19, 0);
				iLocal_1144 = 12;
			}
			else if (func_118(&Local_423, 19) > 3.7f)
			{
				if (func_139())
				{
					if (!bLocal_914)
					{
						UNK_0x82A772610883F395("CamPushInNeutral", 0, 0);
						UNK_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						bLocal_914 = true;
					}
				}
			}
			break;
		case 12:
			return true;
	}
	return false;
}

void func_215()
{
	bLocal_901 = true;
	if (!UNK_0xEB6A8945D1AC98A1(Local_853.f_2))
	{
		if (UNK_0xDF1306B443CD3D15(Local_853.f_3, 0))
		{
			if (UNK_0xC42A92762C58E1B9(Local_853.f_2, Local_853.f_3, 0))
			{
				UNK_0xA47B46945FF6DE74(Local_853.f_3, 406.612f, -1419.937f, 29.00375f, 1, 0, 0, 1);
				UNK_0x6DF7BF67E86AAE86(Local_853.f_2, Local_853.f_30);
				UNK_0xAFF39FB306F8E232(Local_853.f_2, 1, true);
				UNK_0xAFF39FB306F8E232(Local_853.f_2, 6, false);
				UNK_0xAFF39FB306F8E232(Local_853.f_2, 17, false);
				UNK_0xAFF39FB306F8E232(Local_853.f_2, 3, false);
				UNK_0x9FA191B317572861(Local_853.f_2, 500f);
				UNK_0x967762C930C0C5FD(Local_853.f_2, 500f);
				UNK_0xA656189732A3FF4B(Local_853.f_2, 500f);
				UNK_0x11AD11297DC58CC7(Local_853.f_2, true);
				UNK_0x25BD67336EA4AECE(Local_853.f_3, 500);
				UNK_0x25BD67336EA4AECE(Local_853.f_2, 500);
				UNK_0xE8832A9E16A57A1F(Local_853.f_3, true, 1);
				UNK_0xE8832A9E16A57A1F(Local_853.f_2, true, 1);
				if (!UNK_0xE4EDC4B0E92C078B(Local_853.f_4))
				{
					Local_853.f_4 = func_216(Local_853.f_3, 0, 0);
				}
				UNK_0x11AD11297DC58CC7(Local_853.f_2, true);
				UNK_0x4D3C3C0B0DE2663E(Local_853.f_3, 120, "txm_fc_h1_", 1);
				UNK_0xA9FBE21EB8701B34(Local_853.f_3, 0.8f);
				iLocal_975 = UNK_0x1C0640BA9A7327B3();
			}
		}
	}
}

int func_216(bool bParam0, bool bParam1, bool bParam2)
{
	return func_217(bParam0, !bParam1, bParam2);
}

int func_217(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_133(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_133(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_133(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

Vector3 func_218(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -0.7535f, -0.0475f, 91.9877f };
			break;
		case 1:
			vVar0 = { 4.2328f, 0f, 165.0072f };
			break;
		case 2:
			vVar0 = { -0.3221f, 0f, 68.7635f };
			break;
		case 3:
			vVar0 = { -0.3614f, 0f, -145.1533f };
			break;
		case 4:
			vVar0 = { -5.4284f, 0f, 1.8065f };
			break;
		case 5:
			vVar0 = { 1.2038f, 0f, 68.7635f };
			break;
		case 6:
			vVar0 = { -2.1877f, 0f, 71.1648f };
			break;
	}
	return vVar0;
}

Vector3 func_219(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { 495.4f, -1416.8f, 30.2f };
			break;
		case 1:
			vVar0 = { 429.6911f, -1385.415f, 29.7266f };
			break;
		case 2:
			vVar0 = { 417.9f, -1419.4f, 30.6f };
			break;
		case 3:
			vVar0 = { 426.754f, -1386.51f, 29.6201f };
			break;
		case 4:
			vVar0 = { 493.7f, -1416.9f, 30.2f };
			break;
		case 5:
			vVar0 = { 450.0146f, -1414.523f, 34.4507f };
			break;
		case 6:
			vVar0 = { 448.2621f, -1413.842f, 34.4501f };
			break;
	}
	return vVar0;
}

bool func_220(var uParam0, vector3 vParam1, bool bParam4)
{
	if (!UNK_0xC844350D5D58C99A(uParam0->f_2))
	{
		uParam0->f_2 = UNK_0x36F2404464202779(26, *uParam0, vParam1, bParam4, 1, true);
	}
	func_8(&(Local_423.f_244), 4, uParam0->f_2, "TaxiJames", 0, 1);
	UNK_0x4F39CC3882DD074E(uParam0->f_2, "TaxiJames");
	if (!UNK_0x437347B10A200C4B(bLocal_890, 0))
	{
		UNK_0x4E885A246A9D983A(bLocal_890, 20, true);
	}
	if (!UNK_0x437347B10A200C4B(uParam0->f_2, 0))
	{
		UNK_0x64F9F278AB9DCA2C(uParam0->f_2, false, true, false, 0);
		UNK_0x64F9F278AB9DCA2C(uParam0->f_2, 3, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(uParam0->f_2, 4, false, true, 0);
		UNK_0x64F9F278AB9DCA2C(uParam0->f_2, 8, false, false, 0);
		UNK_0x64F9F278AB9DCA2C(uParam0->f_2, 11, false, true, 0);
		UNK_0x6DF7BF67E86AAE86(uParam0->f_2, uParam0->f_30);
		UNK_0xAFF39FB306F8E232(uParam0->f_2, 1, true);
		UNK_0xAFF39FB306F8E232(uParam0->f_2, 6, true);
		UNK_0xAFF39FB306F8E232(uParam0->f_2, 17, true);
		UNK_0xAFF39FB306F8E232(uParam0->f_2, 3, false);
		UNK_0x9FA191B317572861(uParam0->f_2, 300f);
		UNK_0x967762C930C0C5FD(uParam0->f_2, 300f);
		UNK_0xA656189732A3FF4B(uParam0->f_2, 300f);
		UNK_0x11AD11297DC58CC7(uParam0->f_2, true);
	}
	return true;
}

int func_221(int iParam0, float fParam1, float fParam2, float fParam3)
{
	if ((((UNK_0x0F1CCD77290EE12F() && !UNK_0x7BCE0E6DD4A1F749()) && !UNK_0xD0BB2359EC70FC37()) && !UNK_0x757EF87A33649210()) && !iParam0->f_142)
	{
		if (func_233(iParam0))
		{
			func_135(iParam0, &(iParam0->f_43));
			func_228(iParam0);
			func_227(iParam0);
			func_204(iParam0);
			func_226(iParam0, fParam2, fParam3);
			func_224(iParam0);
			return func_222(iParam0, fParam1);
		}
	}
	return 0;
}

bool func_222(int iParam0, float fParam1)
{
	if (func_66(iParam0) == 2)
	{
		if (UNK_0x5A91F08DF773C39D(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0))
		{
		}
		if (((func_223(iParam0->f_4, iParam0->f_17, 1) <= (fParam1 + 1f) && UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) < 1) && func_151(1, 1, 1)) && UNK_0xF79A7BCA9E38BBBC(iParam0->f_4))
		{
			return func_128(iParam0, 1, fParam1);
		}
	}
	else if (((UNK_0x5A91F08DF773C39D(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0) && UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) < 1) && func_151(1, 1, 1)) && UNK_0xF79A7BCA9E38BBBC(iParam0->f_4))
	{
		return func_128(iParam0, 1, fParam1);
	}
	return false;
}

float func_223(bool bParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vParam1, iParam4);
}

void func_224(int iParam0)
{
	float fVar0;

	if ((func_225(iParam0) && func_22(iParam0->f_81, 67108864)) && UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
	{
		if ((UNK_0x1C0640BA9A7327B3() - iLocal_97) >= 10000)
		{
			fVar0 = func_52(iParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = UNK_0x1C0640BA9A7327B3();
		}
		if (iLocal_96 >= 2 && !func_213())
		{
			func_256(iParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((UNK_0x1C0640BA9A7327B3() % 4000) < 50)
		{
			if (!func_225(iParam0))
			{
			}
			if (!func_22(iParam0->f_81, 67108864))
			{
			}
		}
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

bool func_225(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
		{
			if (UNK_0xC42A92762C58E1B9(iParam0->f_3, iParam0->f_4, 1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_226(int iParam0, float fParam1, float fParam2)
{
	if (func_225(iParam0) && func_22(iParam0->f_44, 4))
	{
		if ((UNK_0x8B38C0DAEEDB5F9C(iParam0->f_4) || UNK_0x9C66D99E63E8E24C(iParam0->f_4) < 3f) && func_209(iParam0))
		{
			if (!func_191(iParam0, 2))
			{
				func_206(iParam0, 2);
			}
			else if (func_225(iParam0))
			{
				if (func_118(iParam0, 2) > fParam1 && !func_191(iParam0, 14))
				{
					if (func_35())
					{
						func_256(iParam0, 48, 1, 0, 0);
					}
					else
					{
						func_256(iParam0, 48, 1, 0, 0);
					}
					func_317(iParam0, 2, 0, 0);
					if (func_191(iParam0, 10))
					{
						func_317(iParam0, 10, 0, 0);
					}
				}
				if (!func_191(iParam0, 3))
				{
					func_317(iParam0, 3, 0, 0);
				}
				else if (func_118(iParam0, 3) >= fParam2)
				{
					func_210(iParam0, 3, 0);
					func_361(iParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_191(iParam0, 2))
			{
				func_210(iParam0, 2, 0);
			}
			if (func_191(iParam0, 3))
			{
				func_210(iParam0, 3, 0);
			}
		}
	}
}

void func_227(int iParam0)
{
	if (UNK_0x1BF376CEB706080F(UNK_0xA30EC016B12C03E4()) && !func_22(iParam0->f_44, 2))
	{
		func_67(&(iParam0->f_44), 2);
	}
	else if (!UNK_0x1BF376CEB706080F(UNK_0xA30EC016B12C03E4()) && func_22(iParam0->f_44, 2))
	{
		func_20(&(iParam0->f_44), 2);
		iParam0->f_47++;
		func_55(9, 0);
	}
	if (iParam0->f_47 > 30)
	{
		func_256(iParam0, 47, 1, 0, 0);
		iParam0->f_47 = 0;
		iParam0->f_76 = (iParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_228(int iParam0)
{
	if (!func_22(iParam0->f_44, 1))
	{
		switch (iParam0->f_412)
		{
			case 0:
				if (UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) >= 1)
				{
					if (func_118(iParam0, 9) > 1f)
					{
						func_232(iParam0, UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()));
						if (iParam0->f_410 != 22)
						{
							func_256(iParam0, 50, 1, 1, 0);
						}
						func_317(iParam0, 9, 0, 0);
						if (UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
						{
							UNK_0x7F010F50CE03A8AF(iParam0->f_9, false);
							UNK_0x661342B9651D16E2(iParam0->f_9, false);
						}
						iParam0->f_140 = 1;
						iParam0->f_412 = 1;
					}
				}
				break;
			case 1:
				if (!func_213() && func_118(iParam0, 9) > 4f)
				{
					func_256(iParam0, 52, 1, 0, 0);
					iParam0->f_412 = 2;
				}
				break;
			case 2:
				if (func_231("TAXI_OBJ_POL", 0, 0))
				{
					if (iParam0->f_410 != 22)
					{
						func_256(iParam0, 51, 0, 0, 0);
					}
					iParam0->f_412 = 3;
				}
				else if (UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) < 1)
				{
					iParam0->f_412 = 3;
				}
				break;
			case 3:
				if (UNK_0xF06268E966D7C1A2(UNK_0xA30EC016B12C03E4(), func_230(iParam0)))
				{
					func_232(iParam0, UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()));
					func_55(6, 0);
				}
				if (!func_229(iParam0))
				{
					if (!UNK_0x25037C66EB32B076())
					{
						if (func_118(iParam0, 16) > 10f)
						{
							if (iParam0->f_410 != 22)
							{
								func_256(iParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) < 1)
				{
					if (func_231("TAXI_OBJ_POL", 0, 0))
					{
						UNK_0x790015DC92C918E2();
					}
					if (UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
					{
						UNK_0x7F010F50CE03A8AF(iParam0->f_9, 255);
						UNK_0x661342B9651D16E2(iParam0->f_9, true);
					}
					iParam0->f_140 = 0;
					iParam0->f_412 = 4;
				}
				break;
			case 4:
				if (!func_213())
				{
					if (iParam0->f_410 != 22)
					{
						func_256(iParam0, 53, 1, 0, 1);
					}
					func_55(7, func_230(iParam0));
					func_232(iParam0, 0);
					iParam0->f_412 = 5;
				}
				break;
			case 5:
				if (!func_213())
				{
					func_210(iParam0, 9, 0);
					func_317(iParam0, 11, 0, 0);
					iParam0->f_412 = 0;
				}
				break;
		}
	}
}

bool func_229(int iParam0)
{
	return iParam0->f_110;
}

int func_230(int iParam0)
{
	return iParam0->f_106;
}

bool func_231(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x18B60B994182620C(bParam0);
	if (iParam1 == 1)
	{
		UNK_0x6B012227B3921E18(bParam2);
	}
	return UNK_0xB165082A56EE6E7F();
}

void func_232(int iParam0, int iParam1)
{
	if (iParam0->f_106 != iParam1)
	{
		iParam0->f_106 = iParam1;
	}
}

bool func_233(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
		{
			if (!UNK_0xC42A92762C58E1B9(iParam0->f_3, iParam0->f_4, 1) && !UNK_0x81A5359F25512A04(iParam0->f_3))
			{
				func_361(iParam0, "Passenger left car.", 9);
			}
			else if (func_243(iParam0))
			{
				if (func_231("TAXI_OBJ_PICKUP", 0, 0))
				{
					UNK_0x2F23E8033F1ADDD9("TAXI_OBJ_PICKUP");
				}
				if (UNK_0x0F1CCD77290EE12F())
				{
					return true;
				}
			}
			else
			{
				if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
				{
				}
				func_234(iParam0, 1);
			}
		}
	}
	return false;
}

void func_234(int iParam0, bool bParam1)
{
	func_242(iParam0, iParam0->f_3);
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0xC42A92762C58E1B9(iParam0->f_2, iParam0->f_4, 0))
		{
			if (!func_191(iParam0, 14))
			{
				if (func_213())
				{
					func_241(1);
				}
				func_192(iParam0, 11, 1);
				func_236(iParam0, 1);
				func_317(iParam0, 14, 0f, 1);
				if (iParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_225(iParam0))
				{
					if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
					{
					}
					if (UNK_0x405E212DDE472467(iParam0->f_2, 0))
					{
						if (func_118(iParam0, 15) > 5f)
						{
							func_317(iParam0, 15, 0f, 1);
						}
					}
					if (func_118(iParam0, 14) > 20f)
					{
						func_361(iParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_118(iParam0, 14) > 20f)
				{
					if (func_235(iParam0->f_4, 1) > 40f)
					{
						func_361(iParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_361(iParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_235(bool bParam0, int iParam1)
{
	return func_51(UNK_0x9539D44F3E4492F6(UNK_0xA30EC016B12C03E4()), bParam0, iParam1);
}

void func_236(int iParam0, bool bParam1)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (UNK_0xE4EDC4B0E92C078B(iParam0->f_8))
			{
				UNK_0x7F010F50CE03A8AF(iParam0->f_8, false);
				UNK_0x661342B9651D16E2(iParam0->f_8, false);
				func_240(iParam0, &(iParam0->f_98), 4, 3);
			}
			else if (UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
			{
				UNK_0x7F010F50CE03A8AF(iParam0->f_9, false);
				UNK_0x661342B9651D16E2(iParam0->f_9, false);
				UNK_0x790015DC92C918E2();
				if (func_225(iParam0))
				{
					func_256(iParam0, 2, 1, 0, 0);
				}
				else
				{
					func_240(iParam0, &(iParam0->f_98), 4, 3);
				}
			}
			func_237(iParam0, 0, 0);
		}
		else if (UNK_0xE4EDC4B0E92C078B(iParam0->f_10))
		{
			UNK_0x142CC44DB769B57E(&(iParam0->f_10));
			if (UNK_0xE4EDC4B0E92C078B(iParam0->f_8))
			{
				UNK_0x7F010F50CE03A8AF(iParam0->f_8, 255);
				UNK_0x661342B9651D16E2(iParam0->f_8, true);
			}
			else if (UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
			{
				if (iParam0->f_411 == 5 && iParam0->f_410 == 17)
				{
					UNK_0x7F010F50CE03A8AF(iParam0->f_9, false);
					UNK_0x661342B9651D16E2(iParam0->f_9, false);
				}
				else if (iParam0->f_411 != 4)
				{
					UNK_0x7F010F50CE03A8AF(iParam0->f_9, 255);
					UNK_0x661342B9651D16E2(iParam0->f_9, true);
				}
			}
			UNK_0x790015DC92C918E2();
		}
	}
}

void func_237(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_442(iParam0);
	}
	if (!UNK_0xE4EDC4B0E92C078B(iParam0->f_10))
	{
		iParam0->f_10 = func_217(iParam0->f_4, 1, 0);
		UNK_0xDC5B2F9D0CCE3A10(iParam0->f_10, "TAXI_BLIP_CAR");
		UNK_0x661342B9651D16E2(iParam0->f_10, true);
		func_238(iParam0);
		if (bParam2)
		{
			UNK_0x790015DC92C918E2();
			func_256(iParam0, 3, 1, 0, 0);
		}
	}
}

void func_238(int iParam0)
{
	func_317(iParam0, 14, 0, 0);
	func_239();
}

void func_239()
{
	bool bVar0;

	bVar0 = UNK_0x728870EB733D12A1();
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		UNK_0xCEAA091B490F8407(-1, "Radio_Off", bVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_240(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_22(*uParam1, iParam2))
	{
		UNK_0x790015DC92C918E2();
		func_256(iParam0, iParam3, 1, 0, 0);
		func_67(uParam1, iParam2);
	}
}

void func_241(int iParam0)
{
	Global_21816 = iParam0;
}

void func_242(int iParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam1))
		{
			if (UNK_0x1A069ED4E9BDE50A(UNK_0xD803B885F5E47A62()))
			{
				if ((UNK_0x0361981EE62202D8(bParam1, joaat("WEAPON_STUNGUN"), 0) || UNK_0x0361981EE62202D8(bParam1, false, 2)) || UNK_0x0361981EE62202D8(bParam1, false, 1))
				{
					func_361(iParam0, "Passenger injured by player with weapon.", 14);
				}
				UNK_0xB2AF08FECE4571EC(UNK_0xD803B885F5E47A62());
			}
		}
	}
}

bool func_243(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0xA30B8362589C124A(iParam0->f_4, -1, 0) == iParam0->f_2)
		{
			if (func_191(iParam0, 14))
			{
				func_244(iParam0);
			}
			func_236(iParam0, 0);
			return true;
		}
	}
	return false;
}

void func_244(int iParam0)
{
	func_210(iParam0, 14, 0);
	func_210(iParam0, 15, 0);
	func_246();
	if (func_245())
	{
		func_241(0);
	}
}

bool func_245()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

void func_246()
{
	bool bVar0;

	bVar0 = UNK_0x728870EB733D12A1();
	if (UNK_0xDF1306B443CD3D15(bVar0, 0))
	{
		UNK_0xCEAA091B490F8407(-1, "Radio_On", bVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_247(int iParam0, var uParam1)
{
	func_134(iParam0, uParam1->f_2, 1, 1);
	if (UNK_0xDF1306B443CD3D15(uParam1->f_3, 0))
	{
		if (UNK_0xB87D13D0C064E9D1(uParam1->f_3, UNK_0x16F2683693E537C9(), 1))
		{
			if (!func_213())
			{
				func_361(&Local_423, "Target's vehicle has been damaged by the player", 3);
			}
			else
			{
				func_153();
			}
		}
	}
	else if (!func_213())
	{
		func_361(&Local_423, "Target's vehicle isn't driveable", 13);
	}
	else
	{
		func_153();
	}
}

int func_248(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_17 = { vParam1 };
	uParam0->f_10 = fParam4;
	uParam0->f_3 = UNK_0x122AAB0B1D6F55AD(uParam0->f_1, uParam0->f_17, uParam0->f_10, true, true, false);
	UNK_0xAB8E2DDC7AF955E0(uParam0->f_1, true);
	UNK_0x71199B01895C6202(uParam0->f_1);
	iLocal_417[0] = UNK_0x122AAB0B1D6F55AD(bLocal_888, 404.9912f, -1423.974f, 28.4638f, 227.5235f, true, true, false);
	iLocal_417[1] = UNK_0x122AAB0B1D6F55AD(bLocal_888, 402.2958f, -1427.018f, 28.4632f, 226.6982f, true, true, false);
	iLocal_417[2] = UNK_0x122AAB0B1D6F55AD(bLocal_889, 398.415f, -1428.167f, 28.4504f, 226.4081f, true, true, false);
	UNK_0x71EDC33E5A423750(iLocal_417[0], 2);
	UNK_0x71EDC33E5A423750(iLocal_417[1], 2);
	UNK_0x71EDC33E5A423750(iLocal_417[2], 2);
	UNK_0x55A3C4ED4728EA42(iLocal_417[0], "BRAVEST");
	UNK_0x55A3C4ED4728EA42(iLocal_417[1], "BOLDEST");
	UNK_0x55A3C4ED4728EA42(iLocal_417[2], "BADDEST");
	UNK_0xD458AC1C1D29C3B4(uParam0->f_3, 800, false);
	UNK_0x55A3C4ED4728EA42(uParam0->f_3, "PUSSYWAG");
	UNK_0xF3F7BF451A720FDF(uParam0->f_3, 1);
	UNK_0xAACF4BD59CB35944(uParam0->f_3, 1);
	uParam0->f_15 = UNK_0x6EE94F60DA2A2273(uParam0->f_3);
	uParam0->f_31 = 1;
	UNK_0x7980D72D61BEF4D5(uParam0->f_3, true);
	func_253(Local_423.f_14, 1, 1114636288 /* Float: 60f */);
	func_253(vLocal_958, 1, 15f);
	func_253(vLocal_961, 1, 15f);
	UNK_0x71EDC33E5A423750(uParam0->f_3, 2);
	return 1;
}

bool func_249()
{
	if (!UNK_0xB87F6CF6E5628C67(Local_853))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Loading escape ped", &iLocal_896, 1000);
		return false;
	}
	if (!UNK_0xB87F6CF6E5628C67(Local_853.f_1))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Loading escape car", &iLocal_896, 1000);
		return false;
	}
	if (!UNK_0xB87F6CF6E5628C67(bLocal_888))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Loading ambulance", &iLocal_896, 1000);
		return false;
	}
	if (!UNK_0xB87F6CF6E5628C67(bLocal_889))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Loading hospital car 2", &iLocal_896, 1000);
		return false;
	}
	if (!UNK_0x3DDA6C6A285628E4(120, "txm_fc_h1_"))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading txm_fc_h1_...", &iLocal_896, 1000);
		return false;
	}
	if (!UNK_0x3DDA6C6A285628E4(false, "taxi_oj_fc3"))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading taxi_oj_fc3...", &iLocal_896, 1000);
		return false;
	}
	if (!UNK_0x1C2E18E9C63BEB77(&cLocal_976))
	{
		func_145("TAXI_ASSETS_FC_STAGE_02 - Way point Recording Loading taxi_oj_fc...", &iLocal_896, 1000);
		return false;
	}
	if (!UNK_0xB4AE0788C1587752("veh@truck@ds@base"))
	{
		return false;
	}
	return true;
}

void func_250(int iParam0, var uParam1)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0xC42A92762C58E1B9(iParam0->f_2, iParam0->f_4, 0))
		{
			if (!func_191(iParam0, 14))
			{
				if (UNK_0xE4EDC4B0E92C078B(*uParam1) && UNK_0x4FA921CB56EDB0F8(*uParam1) > 0)
				{
					UNK_0x7F010F50CE03A8AF(*uParam1, false);
				}
				func_237(iParam0, 0, 0);
				func_256(iParam0, 2, 1, 0, 0);
			}
			else if (func_118(iParam0, 14) > 20f)
			{
				func_361(iParam0, "Player not in taxi - HANDLE BLIPS", 8);
			}
		}
		else
		{
			if (func_191(iParam0, 14))
			{
				func_317(iParam0, 2, 0, 0);
				func_244(iParam0);
			}
			if (UNK_0xE4EDC4B0E92C078B(iParam0->f_10))
			{
				UNK_0x142CC44DB769B57E(&(iParam0->f_10));
			}
			if ((UNK_0xE4EDC4B0E92C078B(*uParam1) && UNK_0x4FA921CB56EDB0F8(*uParam1) < 255) && UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) < 1)
			{
				UNK_0x7F010F50CE03A8AF(*uParam1, 255);
				UNK_0x661342B9651D16E2(*uParam1, true);
			}
		}
	}
}

void func_251(int iParam0)
{
	func_252(iParam0, 1000);
	if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x327AAEE25F323797(iParam0->f_3);
		UNK_0xF96A174EE26D7588(iParam0->f_3, UNK_0x16F2683693E537C9(), 0);
	}
	func_153();
	func_244(iParam0);
}

void func_252(var uParam0, int iParam1)
{
	if (UNK_0x9F4FE516EAACCFC5(*uParam0))
	{
		UNK_0x9A8DDC7C522F5BF5(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		UNK_0xB3A1B75CB59FEB56(false, true, iParam1, 1, 0, 0);
	}
	else
	{
		UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
	}
}

void func_253(vector3 vParam0, bool bParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_38(vParam0, 1f, -fParam4, -fParam4, -fParam4) };
	vVar3 = { func_38(vParam0, 1f, fParam4, fParam4, fParam4) };
	vVar0.f_2 = (vVar0.z - 22f);
	vVar3.f_2 = (vVar3.z + 22f);
	if (!bParam3)
	{
		UNK_0xF858EFDE1871B5F2(vVar0, vVar3, false, 1);
	}
	else
	{
		UNK_0xF5894FEB702E7E76(vVar0, vVar3, 1);
		UNK_0xEFED0CD6E25037B9();
	}
}

void func_254()
{
	func_67(&(Local_423.f_55), 2);
	func_67(&(Local_423.f_55), 4);
	func_67(&(Local_423.f_55), 16);
	func_67(&(Local_423.f_55), 64);
	func_67(&(Local_423.f_55), 256);
	func_67(&(Local_423.f_55), 512);
	func_67(&(Local_423.f_55), 1024);
	func_67(&(Local_423.f_55), 2048);
	func_67(&(Local_423.f_55), 1073741824 /* Float: 2f */);
	func_67(&(Local_423.f_55), 8388608);
	func_67(&(Local_423.f_55), 33554432);
	func_67(&(Local_423.f_55), 16777216);
	func_67(&(Local_423.f_55), 4096);
	func_67(&(Local_423.f_100), 8);
	func_67(&(Local_423.f_100), 2048);
	func_67(&(Local_423.f_100), 256);
	func_67(&uLocal_1125, 2);
}

void func_255(var uParam0)
{
	UNK_0xB2AF08FECE4571EC(UNK_0xD803B885F5E47A62());
	UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
	func_252(uParam0, 1000);
}

void func_256(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_317(iParam0, 16, 4f, 0);
		if (func_257(iParam0))
		{
			func_48();
		}
	}
	func_281(iParam0, iParam2, bParam3);
}

bool func_257(int iParam0)
{
	vector3 vVar0[24];
	struct<6> Var6;

	StringCopy(&cVar0, iParam0->f_143, 24);
	if (func_213())
	{
		Var6 = { func_259() };
		if (!UNK_0xEA6BC48857E0AC4C(&Var6))
		{
			StringConCat(&cVar0, "_obj1", 24);
			if (UNK_0x7F8A39872A07D2CE(&Var6, &cVar0))
			{
				return true;
			}
			StringCopy(&cVar0, iParam0->f_143, 24);
			StringConCat(&cVar0, "_gret1", 24);
			func_258(&cVar0);
			if (UNK_0x7F8A39872A07D2CE(&Var6, &cVar0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_258(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_259()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

bool func_260(var uParam0)
{
	if (UNK_0xDF1306B443CD3D15(uParam0->f_4, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if ((UNK_0x81A5359F25512A04(uParam0->f_3) && (UNK_0x1C0640BA9A7327B3() - iLocal_89) > 500) || UNK_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_261()
{
	UNK_0x523BCC9DC80CD82F(Local_853);
	UNK_0x523BCC9DC80CD82F(Local_853.f_1);
	UNK_0x523BCC9DC80CD82F(bLocal_888);
	UNK_0x523BCC9DC80CD82F(bLocal_889);
	UNK_0x36187931D29E5BBE(120, "txm_fc_h1_");
	UNK_0x36187931D29E5BBE(false, "taxi_oj_fc3");
	UNK_0x29398344B9E5B8A7(&cLocal_976);
	UNK_0x3F423BF5B8125A50("veh@truck@ds@base");
}

bool func_262(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0xC42A92762C58E1B9(iParam0->f_2, iParam0->f_4, 0))
		{
			if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
			{
			}
			func_234(iParam0, 1);
			if (func_33())
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), true, false);
			}
			if (UNK_0xD1960163A3042274(iParam0->f_3, 2106541073) == 1 || UNK_0xD1960163A3042274(iParam0->f_3, 2106541073) == 0)
			{
				UNK_0x327AAEE25F323797(iParam0->f_3);
				iParam0->f_48 = 0;
				iLocal_87 = 0;
				UNK_0xF96A174EE26D7588(iParam0->f_3, UNK_0x16F2683693E537C9(), 0);
			}
		}
		else if (UNK_0xF06268E966D7C1A2(UNK_0xA30EC016B12C03E4(), 0))
		{
			func_279(iParam0);
			if (iParam0->f_48 > 1)
			{
				UNK_0xF82EA857DA10E0CD(&iVar3);
				UNK_0xDD353D0E9C789D0E(&iVar3);
				UNK_0x96167B03C5A77156(false, iParam0->f_11, iParam0->f_6, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0xF96A174EE26D7588(false, iParam0->f_4, 0);
				UNK_0x75ABDC5F81978924(iVar3);
				UNK_0x78ADC381772E3D54(iParam0->f_3, iVar3);
				iParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_191(iParam0, 14))
			{
				func_244(iParam0);
				func_236(iParam0, 0);
			}
			if (func_191(iParam0, 9))
			{
				func_210(iParam0, 9, 0);
				UNK_0x790015DC92C918E2();
				if (UNK_0xE4EDC4B0E92C078B(iParam0->f_8))
				{
					UNK_0x7F010F50CE03A8AF(iParam0->f_8, 255);
					UNK_0x661342B9651D16E2(iParam0->f_8, true);
				}
			}
			if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
			{
				fVar4 = ((UNK_0x9C66D99E63E8E24C(iParam0->f_4) / 5f) + 4f);
				if (iParam0->f_141 && func_278(iParam0, iParam0->f_3) > 300f)
				{
					func_361(iParam0, "Left Passenger", 8);
				}
				switch (iParam0->f_48)
				{
					case 0:
						if (UNK_0xD1960163A3042274(iParam0->f_3, 242628503) != 1 || ((func_51(UNK_0x16F2683693E537C9(), iParam0->f_3, 1) < 20f && func_223(iParam0->f_3, iParam0->f_11, 1) <= 28f) && func_223(iParam0->f_4, iParam0->f_11, 1) <= 28f))
						{
							if (func_275(iParam0, fParam2))
							{
								iParam0->f_48++;
							}
						}
						break;
					case 1:
						if (func_274(iParam0, 0, 28f, fVar4, 4f))
						{
							iParam0->f_138 = 1;
							if (bLocal_94)
							{
								iParam0->f_7 = func_273(iParam0->f_4, iParam0->f_3);
								bVar0 = func_272(iParam0, &iVar1);
								if (!UNK_0x437347B10A200C4B(bVar0, 0))
								{
									if (iVar1 == iParam0->f_7)
									{
										if (iParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (iParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										UNK_0x75CDA8644CD3B5F5(bVar0, 0, iVar2);
									}
									else
									{
										UNK_0x75CDA8644CD3B5F5(bVar0, 0, 0);
									}
								}
								if (iParam0->f_411 == 0)
								{
									if (UNK_0x3CAA763EEC01ADF7(iParam0->f_3, iParam0->f_4, 0, 0, false))
									{
										if (iParam0->f_7 == 2)
										{
											iParam0->f_7 = 0;
											if (!UNK_0x437347B10A200C4B(bVar0, 0))
											{
												UNK_0x75CDA8644CD3B5F5(bVar0, 0, 4096);
											}
										}
									}
								}
							}
							UNK_0xA3BF0AA5A2608191(iParam0->f_3);
							UNK_0x5B1D360B9C6F0A09(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
							iParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								UNK_0x5F3EEC968FEB7235(UNK_0x68F4C0EC296D3901(iParam0->f_3, true), fVar4, false, false, 255, 150);
							}
							if (!func_209(iParam0))
							{
								UNK_0xA3BF0AA5A2608191(iParam0->f_3);
							}
							else if (((UNK_0xD1960163A3042274(iParam0->f_3, 242628503) != 1 && UNK_0xD1960163A3042274(iParam0->f_3, 242628503) != 0) && UNK_0xD1960163A3042274(iParam0->f_3, 242628503) != 7) && func_278(iParam0, iParam0->f_3) > 8f)
							{
								UNK_0xF82EA857DA10E0CD(&(iParam0->f_243));
								UNK_0xDD353D0E9C789D0E(&(iParam0->f_243));
								UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
								if (iParam0->f_411 != 9)
								{
									UNK_0xC6EB89C59F2AF6B8(false, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, false, 0, 0, 0);
								}
								else
								{
									UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, false, 0, 0, 0);
								}
								UNK_0x75ABDC5F81978924(iParam0->f_243);
								UNK_0x78ADC381772E3D54(iParam0->f_3, iParam0->f_243);
							}
							if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								UNK_0x8352CA08CF578D18(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					case 2:
						if (bLocal_94)
						{
							if (func_51(iParam0->f_4, iParam0->f_3, 1) < 3f)
							{
								if (!func_271(iParam0, 1))
								{
									UNK_0x327AAEE25F323797(iParam0->f_3);
									func_361(iParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_270(iParam0->f_4))
								{
									UNK_0x327AAEE25F323797(iParam0->f_3);
									func_361(iParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_268(iParam0);
						if (func_278(iParam0, iParam0->f_3) < fVar4 || func_33())
						{
							if (UNK_0xC42A92762C58E1B9(iParam0->f_2, iParam0->f_4, 0))
							{
								if (func_264(iParam0))
								{
									func_263(iParam0);
									iLocal_89 = UNK_0x1C0640BA9A7327B3();
									UNK_0x4E885A246A9D983A(iParam0->f_3, 26, true);
									func_210(iParam0, 5, 0);
									UNK_0x0DC19E268D45C03F();
									UNK_0x893A626C476B583D(iParam0->f_428, &(iParam0->f_42), -1);
									UNK_0x7D732AB707BE9152(iParam0->f_3, 0);
									return true;
								}
							}
						}
						else if (bParam1)
						{
							UNK_0x5F3EEC968FEB7235(UNK_0x68F4C0EC296D3901(iParam0->f_3, true), fVar4, false, false, 255, 150);
						}
						break;
				}
			}
		}
	}
	return false;
}

void func_263(int iParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(iParam0->f_8))
	{
		UNK_0x661342B9651D16E2(iParam0->f_8, false);
		UNK_0x142CC44DB769B57E(&(iParam0->f_8));
	}
}

bool func_264(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	vector3 vVar13;

	func_145("UPDATE_PASSENGER_ENTER_CUTSCENE", &(iParam0->f_78), 1000);
	iVar12 = -1;
	if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0) && !UNK_0x437347B10A200C4B(iParam0->f_4, 0))
	{
		func_156();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_152(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_128(iParam0, 0, 1084227584 /* Float: 5f */) && func_151(1, 1, 1))
			{
				if (func_271(iParam0, 1))
				{
					iLocal_88 = UNK_0x1C0640BA9A7327B3();
					SYSTEM::SETTIMERA(0);
					iLocal_86 = 1;
				}
				else
				{
					func_361(iParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				iParam0->f_7 = func_273(iParam0->f_4, iParam0->f_3);
				bVar9 = func_272(iParam0, &iVar10);
				if (!UNK_0x437347B10A200C4B(bVar9, 0))
				{
					if (iVar10 == iParam0->f_7)
					{
						if (iParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						UNK_0x75CDA8644CD3B5F5(bVar9, 0, iVar11);
					}
					else
					{
						UNK_0x75CDA8644CD3B5F5(bVar9, 0, 0);
					}
				}
				if (iParam0->f_411 == 0)
				{
					if (UNK_0x3CAA763EEC01ADF7(iParam0->f_3, iParam0->f_4, 0, 0, false))
					{
						iParam0->f_7 = 0;
						if (!UNK_0x437347B10A200C4B(bVar9, 0))
						{
							UNK_0x75CDA8644CD3B5F5(bVar9, 0, 4096);
						}
					}
				}
				iLocal_86 = 2;
			}
			break;
		case 2:
			if (iParam0->f_7 == 0)
			{
				vVar6 = { 1.5f, 0f, -0.6422f };
				vVar0 = { -1.4309f, 3.958f, 3.5037f };
				vVar3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (iParam0->f_7 == 2)
			{
				vVar6 = { 1.5f, -1f, -0.6422f };
				vVar0 = { 1.4309f, 3.958f, 0.5037f };
				vVar3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				vVar6 = { -1.5f, -1f, -0.6422f };
				vVar0 = { -1.4823f, 4.2333f, 0.5939f };
				vVar3 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar12 = func_193(&(iParam0->f_409), UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, 0f, 2.2f, 0.275f), UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar0), 1);
			if (iVar12 == 1)
			{
				vVar0.f_2 = (vVar0.z + 1.5f);
				if (iParam0->f_7 == 2)
				{
					vVar3 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar12 != -1)
			{
				func_144(0, 0, 1);
				UNK_0x745CE398A4B0A3C6(UNK_0x68F4C0EC296D3901(iParam0->f_4, true), 3f, 0);
				UNK_0x75CFD6AD66ADFDD1(UNK_0x68F4C0EC296D3901(iParam0->f_4, true), 25f, 0);
				UNK_0xA37A90C62806D848(1);
				UNK_0x790015DC92C918E2();
				func_123();
				func_281(iParam0, 0, 0);
				vVar13 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar6) };
				UNK_0xA47B46945FF6DE74(iParam0->f_3, vVar13, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(iParam0->f_3, func_266(iParam0));
				func_147(iParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848 /* Float: 50f */);
				UNK_0x608A456FDD8A83D8(*iParam0, UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar0));
				UNK_0x1305278186D1C53E(*iParam0, iParam0->f_4, vVar3, 1);
				UNK_0xE3BB8E05FCEB3FBE(*iParam0, true);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				UNK_0xF895E10BF4C72645(iParam0->f_3, 0, 0);
				UNK_0x5B1D360B9C6F0A09(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		case 5:
			func_145("TAXI_PED_ENTER_CUT_WAIT", &(iParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		case 6:
			break;
		case 7:
			if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0) && !UNK_0x437347B10A200C4B(iParam0->f_4, 0))
			{
				if (!UNK_0x405E212DDE472467(iParam0->f_3, 0))
				{
					UNK_0xF821F915BC24D246(iParam0->f_3, iParam0->f_4, iParam0->f_7);
					UNK_0x152BCACCF710B36E(iParam0->f_4, func_265(iParam0->f_7), 1);
				}
				UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				UNK_0x9A8DDC7C522F5BF5(*iParam0, 0);
				UNK_0x9A8DDC7C522F5BF5(iParam0->f_1, 0);
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				UNK_0x82E51BCA72537B6C(800);
				UNK_0xA37A90C62806D848(1);
				UNK_0x790015DC92C918E2();
				func_123();
				func_281(iParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		case 8:
			if (UNK_0x0F1CCD77290EE12F() && !UNK_0x7BCE0E6DD4A1F749())
			{
				func_137(1, 1, 1);
				return true;
			}
			break;
		case 9:
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			UNK_0x9A8DDC7C522F5BF5(*iParam0, 0);
			UNK_0x9A8DDC7C522F5BF5(iParam0->f_1, 0);
			UNK_0x2FB9A57162E54BAB(0f);
			UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
			func_137(1, 1, 1);
			return true;
		case 10:
			if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0) && !UNK_0x437347B10A200C4B(iParam0->f_4, 0))
			{
				if (UNK_0x81A5359F25512A04(iParam0->f_3) || UNK_0x405E212DDE472467(iParam0->f_3, 1))
				{
					return true;
				}
				else if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -1794415470) != 1 && UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), -1794415470) != 0)
				{
					UNK_0x5B1D360B9C6F0A09(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return false;
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 3;
		case 0:
			return 1;
		case -1:
			return 0;
		default:
			break;
	}
	return 2;
}

float func_266(int iParam0)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	vVar1 = { func_40() };
	if (iParam0->f_7 == 2)
	{
		vVar1 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_267(UNK_0x68F4C0EC296D3901(iParam0->f_3, true), vVar1);
	return fVar0;
}

int func_267(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return UNK_0xE7D606C557C86100((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_268(int iParam0)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
		{
			if (func_235(iParam0->f_3, 1) > 30f || func_269(iParam0))
			{
				if (UNK_0xD1960163A3042274(iParam0->f_3, -1794415470) == 1 || UNK_0xD1960163A3042274(iParam0->f_3, 242628503) == 1)
				{
					UNK_0xF82EA857DA10E0CD(&iVar0);
					UNK_0xDD353D0E9C789D0E(&iVar0);
					UNK_0xF96A174EE26D7588(false, iParam0->f_4, 0);
					UNK_0xC6EB89C59F2AF6B8(false, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
					UNK_0x96167B03C5A77156(false, iParam0->f_11, iParam0->f_6, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					UNK_0x75ABDC5F81978924(iVar0);
					UNK_0x78ADC381772E3D54(iParam0->f_3, iVar0);
					func_361(iParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

bool func_269(int iParam0)
{
	if ((UNK_0x9C66D99E63E8E24C(iParam0->f_4) > 3f && func_118(iParam0, 5) > 15f) || UNK_0x377BE9A1BF38C7CE(iParam0->f_4))
	{
		return true;
	}
	return false;
}

bool func_270(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!UNK_0x464B3D84B739AE72(bParam0, false, 0))
	{
		iVar0++;
	}
	if (!UNK_0x464B3D84B739AE72(bParam0, true, 0))
	{
		iVar0++;
	}
	if (!UNK_0x464B3D84B739AE72(bParam0, 4, 0))
	{
		iVar0++;
	}
	if (!UNK_0x464B3D84B739AE72(bParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return false;
	}
	if (UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		iVar1 = 0;
		if (!UNK_0x1150BCE24B1630AC(bParam0, false))
		{
			iVar1++;
		}
		if (!UNK_0x1150BCE24B1630AC(bParam0, true))
		{
			iVar1++;
		}
		if (!UNK_0x1150BCE24B1630AC(bParam0, 2))
		{
			iVar1++;
		}
		if (!UNK_0x1150BCE24B1630AC(bParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return false;
		}
	}
	return true;
}

bool func_271(int iParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		iVar0[0] = UNK_0xA30B8362589C124A(iParam0->f_4, true, 0);
		iVar0[1] = UNK_0xA30B8362589C124A(iParam0->f_4, 2, 0);
		iVar0[2] = UNK_0xA30B8362589C124A(iParam0->f_4, false, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (UNK_0xC844350D5D58C99A(iVar0[iVar4]))
			{
				if (UNK_0x437347B10A200C4B(iVar0[iVar4], 0))
				{
					if (iVar4 == 0)
					{
						iParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar4 == 1)
					{
						iParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						iParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return false;
				}
			}
			iVar4++;
		}
		if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
		{
		}
	}
	return true;
}

bool func_272(int iParam0, int iParam1)
{
	bool bVar0;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		bVar0 = UNK_0xA30B8362589C124A(iParam0->f_4, true, 0);
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			*iParam1 = 1;
			return bVar0;
		}
		else
		{
			bVar0 = UNK_0xA30B8362589C124A(iParam0->f_4, 2, 0);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				*iParam1 = 2;
				return bVar0;
			}
			else
			{
				bVar0 = UNK_0xA30B8362589C124A(iParam0->f_4, false, 0);
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					*iParam1 = 0;
					return bVar0;
				}
			}
		}
	}
	return false;
}

int func_273(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar4 = UNK_0xD6DF381716822EFE(bParam0);
	vVar0 = { UNK_0x5293C88BD2F4DE13(bParam0, UNK_0x68F4C0EC296D3901(bParam1, true)) };
	if (UNK_0x134B62B726CEC8E6(bParam0) != joaat("VACCA"))
	{
	}
	if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("SENTINEL2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (vVar0.x > 0f)
	{
		if (UNK_0x3CAA763EEC01ADF7(bParam1, bParam0, 2, 0, false))
		{
			iVar3 = 2;
		}
		else if (UNK_0x3CAA763EEC01ADF7(bParam1, bParam0, 1, 0, false))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (UNK_0x3CAA763EEC01ADF7(bParam1, bParam0, 1, 0, false))
	{
		iVar3 = 1;
	}
	else if (UNK_0x3CAA763EEC01ADF7(bParam1, bParam0, 2, 0, false))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

bool func_274(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
	{
		if (!UNK_0x03068588A1FCED1A(iParam0->f_3) && func_235(iParam0->f_3, 1) < fParam2)
		{
			if (!func_191(iParam0, 5))
			{
				func_317(iParam0, 5, 0, 0);
			}
		}
		else if (func_191(iParam0, 5))
		{
			func_210(iParam0, 5, 0);
		}
		if (((func_118(iParam0, 5) > IntToFloat(iParam1) && UNK_0x9C66D99E63E8E24C(iParam0->f_4) < fParam4) && !UNK_0x03068588A1FCED1A(iParam0->f_3)) || func_235(iParam0->f_3, 1) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

bool func_275(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	var uVar12;
	int iVar15;
	var uVar16;
	int iVar17;
	bool bVar18;

	bVar18 = UNK_0xF653B9B22DA806A9(iParam0->f_4, "windscreen");
	if (bVar18 == -1)
	{
		bVar18 = UNK_0xF653B9B22DA806A9(iParam0->f_4, "windscreen_f");
	}
	if (bVar18 != -1)
	{
		vVar6 = { UNK_0xBF584557291FDD31(iParam0->f_4, bVar18) };
		vVar6 = { UNK_0x5293C88BD2F4DE13(iParam0->f_4, vVar6) };
		vVar6.f_1 = (vVar6.y + 1f);
	}
	else
	{
		vVar6 = { 0f, 1f, 1f };
	}
	vVar0 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar6) };
	vVar3 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_3, 0f, 0.25f, 0.9f) };
	UNK_0x4ADCCF23C40DC113(vVar0, vVar3, false, false, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			UNK_0x11AD11297DC58CC7(iParam0->f_3, true);
			iLocal_87 = 1;
			break;
		case 1:
			if ((func_51(iParam0->f_4, iParam0->f_3, 0) <= fParam1 && !iParam0->f_142) && UNK_0x755FF954DAE327E1((vVar0.z - vVar3.z)) < 5f)
			{
				if (iParam0->f_409 == 0)
				{
					iParam0->f_409 = UNK_0xCD02F8660C47B801(vVar0, vVar3, 511, false, 7);
				}
				else
				{
					iVar17 = UNK_0x1EC301670B54C6DE(iParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_87 = 2;
						}
						iParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						iParam0->f_409 = 0;
					}
				}
			}
			else if (UNK_0xD1960163A3042274(iParam0->f_3, 242628503) != 1 && UNK_0xD1960163A3042274(iParam0->f_3, 242628503) != 0)
			{
				UNK_0xF82EA857DA10E0CD(&(iParam0->f_243));
				UNK_0xDD353D0E9C789D0E(&(iParam0->f_243));
				UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
				UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
				UNK_0x25644C31B4B6E9F3(iParam0->f_243, 1);
				UNK_0x75ABDC5F81978924(iParam0->f_243);
				UNK_0x78ADC381772E3D54(iParam0->f_3, iParam0->f_243);
			}
			break;
		case 2:
			UNK_0x790015DC92C918E2();
			if (iParam0->f_411 != 9)
			{
				if (!func_22(iParam0->f_44, 128))
				{
					func_256(iParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_276(iParam0->f_3, "TAXI_HAIL", iParam0->f_145, 4);
			}
			UNK_0xA3BF0AA5A2608191(iParam0->f_3);
			UNK_0x0C8C0C840C2D1AD2(iParam0->f_3, iParam0->f_4, -1, 2048, 4);
			UNK_0xF82EA857DA10E0CD(&(iParam0->f_243));
			UNK_0xDD353D0E9C789D0E(&(iParam0->f_243));
			if (iParam0->f_411 != 9)
			{
				UNK_0xC6EB89C59F2AF6B8(false, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, false, 0, 0, 0);
			}
			else
			{
				UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, false, 0, 0, 0);
			}
			UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
			UNK_0x75ABDC5F81978924(iParam0->f_243);
			UNK_0x78ADC381772E3D54(iParam0->f_3, iParam0->f_243);
			UNK_0xF82EA857DA10E0CD(&(iParam0->f_243));
			iLocal_87 = 3;
			break;
		case 3:
			iLocal_87 = 0;
			if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				UNK_0x8352CA08CF578D18(iParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return true;
	}
	return false;
}

void func_276(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xEB0A515D699A7E90(bParam0, bParam1, bParam2, func_277(iParam3), 0);
}

int func_277(int iParam0)
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

float func_278(int iParam0, bool bParam1)
{
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		if (func_209(iParam0))
		{
			return func_51(iParam0->f_4, bParam1, 1);
		}
	}
	return 0f;
}

void func_279(int iParam0)
{
	func_242(iParam0, iParam0->f_3);
	if (func_209(iParam0))
	{
		if (func_191(iParam0, 14))
		{
			func_244(iParam0);
			if (UNK_0xE4EDC4B0E92C078B(iParam0->f_10))
			{
				UNK_0x142CC44DB769B57E(&(iParam0->f_10));
			}
		}
	}
	if (!func_191(iParam0, 9))
	{
		if (UNK_0xE4EDC4B0E92C078B(iParam0->f_8))
		{
			UNK_0x7F010F50CE03A8AF(iParam0->f_8, false);
			UNK_0x661342B9651D16E2(iParam0->f_8, false);
		}
		func_317(iParam0, 9, 0, 0);
		func_280("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_280(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_281(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_48();
		func_317(iParam0, 16, 4f, 0);
		UNK_0x790015DC92C918E2();
	}
}

bool func_282(int iParam0, int iParam1)
{
	if (!UNK_0x67C1D9E5B91B2E37(2))
	{
		return false;
	}
	func_286(12);
	if (func_22(iParam0->f_44, 8))
	{
		if (!func_22(iParam0->f_44, 128))
		{
			if (UNK_0xE64AC821059A938D(UNK_0x16F2683693E537C9()) && !func_22(iParam0->f_44, 256))
			{
				func_67(&(iParam0->f_44), 256);
			}
			if (func_22(iParam0->f_44, 256) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				func_256(iParam0, 135, 1, 0, 1);
				func_67(&(iParam0->f_44), 128);
			}
		}
	}
	if (!func_285(iParam0, iParam1))
	{
		if (func_235(iParam0->f_3, 1) < 35f)
		{
			if (!func_22(iParam0->f_44, 8))
			{
				UNK_0xF96A174EE26D7588(iParam0->f_3, UNK_0x16F2683693E537C9(), 0);
				func_256(iParam0, 133, 1, 0, 1);
				func_67(&(iParam0->f_44), 8);
			}
		}
		if ((UNK_0xEB6A8945D1AC98A1(iParam0->f_3) || UNK_0xE9FDA1035CFEA94F(iParam0->f_3)) || func_235(iParam0->f_3, 1) > 400f)
		{
			func_361(iParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		iParam0->f_4 = UNK_0x6937EA2286828455(iParam0->f_2, 0);
		UNK_0x44A200C9B6E1CEA6(iParam0->f_4, true);
		if (UNK_0xA30B8362589C124A(iParam0->f_4, -1, 0) == iParam0->f_2)
		{
			UNK_0x2F625BED8BF7F26A(iParam0->f_4);
			func_283(iParam0);
			func_55(2, 0);
			bLocal_94 = true;
			func_119(&uLocal_90);
			return true;
		}
		else
		{
			func_361(iParam0, "No Taxi", 21);
			func_168("TAXI_DBG_NTAXI", -1);
		}
	}
	return false;
}

void func_283(int iParam0)
{
	if (!UNK_0x437347B10A200C4B(iParam0->f_4, 0))
	{
		if (func_284())
		{
		}
	}
}

bool func_284()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return true;
	}
	return false;
}

bool func_285(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				bVar1 = UNK_0x134B62B726CEC8E6(bVar0);
				bVar2 = func_270(bVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((bVar1 == joaat("RHINO") || bVar1 == joaat("RATLOADER")) || bVar1 == joaat("SURFER")) || bVar1 == joaat("SURFER2")) || bVar1 == joaat("ARMYTANKER")) || bVar1 == joaat("BARRACKS")) || bVar1 == joaat("BARRACKS2")) || bVar1 == joaat("CRUSADER")) || bVar1 == joaat("UTILLITRUCK")) || bVar1 == joaat("UTILLITRUCK2")) || bVar1 == joaat("UTILLITRUCK3")) || bVar1 == joaat("AIRTUG")) || bVar1 == joaat("CADDY")) || bVar1 == joaat("CADDY2")) || bVar1 == joaat("DLOADER")) || bVar1 == joaat("DOCKTUG")) || bVar1 == joaat("FLATBED")) || bVar1 == joaat("RIPLEY")) || bVar1 == joaat("ROMERO")) || bVar1 == joaat("TOWTRUCK")) || bVar1 == joaat("TOWTRUCK2")) || bVar1 == joaat("AIRBUS")) || bVar1 == joaat("BUS")) || bVar1 == joaat("COACH")) || bVar1 == joaat("RENTALBUS")) || bVar1 == joaat("TOURBUS")) || bVar1 == joaat("RIOT")) || bVar1 == joaat("TRASH")) || bVar1 == joaat("BENSON")) || bVar1 == joaat("BIFF")) || bVar1 == joaat("HAULER")) || bVar1 == joaat("PACKER")) || bVar1 == joaat("PHANTOM")) || bVar1 == joaat("POUNDER")) || bVar1 == joaat("BULLDOZER")) || bVar1 == joaat("HANDLER")) || bVar1 == joaat("TIPTRUCK2")) || bVar1 == joaat("CUTTER")) || bVar1 == joaat("DUMP")) || bVar1 == joaat("MIXER")) || bVar1 == joaat("MIXER2")) || bVar1 == joaat("RUBBLE")) || bVar1 == joaat("SCRAP")) || bVar1 == joaat("TIPTRUCK")) || bVar1 == joaat("CAMPER")) || bVar1 == joaat("TACO")) || bVar1 == joaat("BOXVILLE")) || bVar1 == joaat("BOXVILLE2")) || bVar1 == joaat("BOXVILLE3")) || bVar1 == joaat("BURRITO")) || bVar1 == joaat("BURRITO2")) || bVar1 == joaat("BURRITO3")) || bVar1 == joaat("BURRITO4")) || bVar1 == joaat("GBURRITO")) || bVar1 == joaat("JOURNEY")) || bVar1 == joaat("MULE")) || bVar1 == joaat("MULE2")) || bVar1 == joaat("PONY")) || bVar1 == joaat("RUMPO")) || bVar1 == joaat("RUMPO2")) || bVar1 == joaat("SPEEDO")) || bVar1 == joaat("SPEEDO2")) || bVar1 == joaat("YOUGA")) || bVar1 == joaat("MOWER")) || bVar1 == joaat("TRACTOR")) || bVar1 == joaat("TRACTOR2")) || bVar1 == joaat("FBI")) || bVar1 == joaat("FBI2")) || bVar1 == joaat("PRANGER")) || bVar1 == joaat("AMBULANCE")) || bVar1 == joaat("DILETTANTE2")) || bVar1 == joaat("FIRETRUK")) || bVar1 == joaat("LGUARD")) || bVar1 == joaat("DUNE")) || bVar1 == joaat("PBUS")) || bVar1 == joaat("POLICE")) || bVar1 == joaat("POLICE2")) || bVar1 == joaat("POLICE3")) || bVar1 == joaat("POLICE4")) || bVar1 == joaat("POLICEB")) || bVar1 == joaat("POLICET")) || bVar1 == joaat("SHERIFF")) || bVar1 == joaat("SHERIFF2")) || bVar1 == joaat("STOCKADE"))
				{
					bVar3 = false;
				}
				if (iParam0->f_411 == 7)
				{
					if (bVar1 == joaat("BODHI2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (UNK_0x8E39AC3C76C8AA58(bVar1))
				{
					if (UNK_0xA30B8362589C124A(bVar0, -1, 0) == UNK_0x16F2683693E537C9())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (UNK_0xD6DF381716822EFE(bVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_22(iParam0->f_44, 64))
					{
						if (UNK_0x67C1D9E5B91B2E37(2))
						{
							func_168("TX_VIP_DMGD", -1);
							if (func_160("TX_VIP_DMGD"))
							{
								func_67(&(iParam0->f_44), 64);
							}
						}
					}
					return false;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_22(iParam0->f_44, 32))
					{
						if (UNK_0x67C1D9E5B91B2E37(2))
						{
							func_168("TX_VIP_CAR", -1);
							if (func_160("TX_VIP_CAR"))
							{
								func_67(&(iParam0->f_44), 32);
							}
						}
					}
					return false;
				}
				else if (!bVar5)
				{
					if (!func_22(iParam0->f_44, 16))
					{
						if (UNK_0x67C1D9E5B91B2E37(2))
						{
							func_168("TX_VIP_SMALL", -1);
							if (func_160("TX_VIP_SMALL"))
							{
								func_67(&(iParam0->f_44), 16);
							}
						}
					}
					return false;
				}
				return true;
			}
		}
		else
		{
			func_20(&(iParam0->f_44), 16);
			func_20(&(iParam0->f_44), 64);
			func_20(&(iParam0->f_44), 32);
		}
	}
	return false;
}

void func_286(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];

	if (UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E())
	{
		iVar0 = iParam0;
		UNK_0x3CFFF3C8EACD8DC1(8, &iVar0, 1, 1);
	}
	else if (UNK_0xBA301E03A078FA59() || UNK_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		UNK_0x8DECFDD6715449E4(8, &cVar1);
	}
}

void func_287(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_21(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_288(var uParam0, var uParam1)
{
	int iVar0;

	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			UNK_0x0674E58A79778E99(&(uParam0->f_60[iVar0 /*3*/]), true);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_60[iVar0 /*3*/]), true);
			UNK_0x0674E58A79778E99(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_289(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_290()
{
	Local_343 = 0;
	func_307(49214, 49189, 1);
	func_307(48947, 48923, 1);
	func_307(48861, 48836, 1);
	func_307(48764, 48740, 1);
	func_307(48630, 48609, 1);
	func_307(48556, 48531, 1);
	func_307(48389, 48365, 1);
}

int func_291(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_361(iParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_292(var uParam0)
{
	if (UNK_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_294(uParam0->f_4))
		{
			func_293(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_293(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

bool func_294(bool bParam0)
{
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return true;
	}
	if (UNK_0x6EE94F60DA2A2273(bParam0) < -100f)
	{
		return true;
	}
	else if (UNK_0x7B5606C651AB51B5(bParam0, 0, 40000) || UNK_0x7B5606C651AB51B5(bParam0, 1, 40000))
	{
		return true;
	}
	return false;
}

int func_295(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_361(iParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_296(var uParam0)
{
	if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
	{
		if (func_297(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_297(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_298(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_293(uParam0, 11);
	return 1;
}

int func_299(int iParam0)
{
	if (UNK_0xC844350D5D58C99A(iParam0->f_4))
	{
		if (UNK_0x70EED0761B82965E(iParam0->f_4) && !UNK_0xF79A7BCA9E38BBBC(iParam0->f_4))
		{
			if (!func_191(iParam0, 25))
			{
				func_317(iParam0, 25, 0, 0);
			}
			else if (func_118(iParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_191(iParam0, 25))
		{
			func_210(iParam0, 25, 0);
		}
	}
	return 0;
}

int func_300(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_361(iParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_301(var uParam0)
{
	if (!UNK_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		if (UNK_0x4DA54CAC0D81A673(uParam0->f_4))
		{
			if (UNK_0x7B5606C651AB51B5(uParam0->f_4, 0, 40000) || UNK_0x7B5606C651AB51B5(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_302(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_361(iParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_303(var uParam0)
{
	if (!UNK_0x437347B10A200C4B(uParam0->f_4, 0))
	{
		if (UNK_0xDF1306B443CD3D15(uParam0->f_4, 0))
		{
			if (UNK_0x8B38C0DAEEDB5F9C(uParam0->f_4))
			{
				if (func_297(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_304(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_361(iParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_305(var uParam0)
{
	if (UNK_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_306(uParam0->f_4))
		{
			func_293(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

bool func_306(bool bParam0)
{
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return true;
	}
	if (UNK_0x6EE94F60DA2A2273(bParam0) == 0f)
	{
		if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
		}
		return true;
	}
	else if (UNK_0x7B5606C651AB51B5(bParam0, 0, 40000) || UNK_0x7B5606C651AB51B5(bParam0, 1, 40000))
	{
		return true;
	}
	return false;
}

void func_307(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343 >= 16)
	{
		Local_343 = 16;
		return;
	}
	Local_343.f_1[Local_343 /*4*/] = 0;
	func_68(&(Local_343.f_1[Local_343 /*4*/]), 1);
	if (bParam2)
	{
		func_68(&(Local_343.f_1[Local_343 /*4*/]), 2);
	}
	Local_343.f_1[Local_343 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343 /*4*/].f_3 = iParam1;
	Local_343++;
}

int func_308(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_361(iParam0, "Passenger injured.", 15);
	return 1;
}

int func_309(var uParam0)
{
	if (UNK_0xC844350D5D58C99A(uParam0->f_3))
	{
		if ((UNK_0xEB6A8945D1AC98A1(uParam0->f_3) || UNK_0x437347B10A200C4B(uParam0->f_3, 0)) || UNK_0x4E861BC5B1EDA7BD(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_310()
{
	Local_190[5 /*10*/] = 5;
	Local_190[5 /*10*/].f_1 = 0;
	Local_190[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_190[5 /*10*/].f_9 = 78;
	Local_190[0 /*10*/] = 5;
	Local_190[0 /*10*/].f_1 = 0;
	Local_190[0 /*10*/].f_2 = "TX_AIR_N";
	Local_190[0 /*10*/].f_9 = 76;
	Local_190[2 /*10*/] = 5;
	Local_190[2 /*10*/].f_1 = 0;
	Local_190[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_190[2 /*10*/].f_9 = 21;
	Local_190[1 /*10*/] = 10;
	Local_190[1 /*10*/].f_1 = 0;
	Local_190[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_190[1 /*10*/].f_9 = 71;
	Local_190[4 /*10*/] = 10;
	Local_190[4 /*10*/].f_1 = 0;
	Local_190[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_190[4 /*10*/].f_9 = 79;
	Local_190[6 /*10*/] = 10;
	Local_190[6 /*10*/].f_1 = 0;
	Local_190[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_190[6 /*10*/].f_9 = 80;
	Local_190[9 /*10*/] = 15;
	Local_190[9 /*10*/].f_1 = 0;
	Local_190[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_190[9 /*10*/].f_9 = 82;
	Local_190[8 /*10*/] = 15;
	Local_190[8 /*10*/].f_1 = 0;
	Local_190[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_190[8 /*10*/].f_9 = 72;
	Local_190[7 /*10*/] = 15;
	Local_190[7 /*10*/].f_1 = 0;
	Local_190[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_190[7 /*10*/].f_9 = 74;
	Local_190[11 /*10*/] = 5;
	Local_190[11 /*10*/].f_1 = 0;
	Local_190[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_190[11 /*10*/].f_9 = 70;
	Local_190[12 /*10*/] = 5;
	Local_190[12 /*10*/].f_1 = 0;
	Local_190[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_190[12 /*10*/].f_9 = 69;
	Local_190[13 /*10*/] = 10;
	Local_190[13 /*10*/].f_1 = 0;
	Local_190[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_190[13 /*10*/].f_9 = 67;
	Local_190[14 /*10*/] = 10;
	Local_190[14 /*10*/].f_1 = 0;
	Local_190[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_190[14 /*10*/].f_9 = 75;
}

bool func_311()
{
	if (!UNK_0xB87F6CF6E5628C67(bLocal_886))
	{
		return false;
	}
	if (!UNK_0xB4AE0788C1587752("gestures@m@standing@casual"))
	{
		return false;
	}
	if (!func_312(&iLocal_896, 0))
	{
		func_145("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_896, 1000);
		return false;
	}
	return true;
}

bool func_312(int iParam0, bool bParam1)
{
	if (!UNK_0xB87F6CF6E5628C67(func_19()))
	{
		func_145("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return false;
	}
	if (bParam1)
	{
		if (!UNK_0xB4AE0788C1587752("gestures@m@standing@casual"))
		{
			func_145("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return false;
		}
	}
	if (!UNK_0xB4AE0788C1587752("oddjobs@taxi@"))
	{
		func_145("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return false;
	}
	if (!UNK_0xB4AE0788C1587752("oddjobs@towingcome_here"))
	{
		func_145("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return false;
	}
	if (!UNK_0xB4AE0788C1587752("misscommon@response"))
	{
		func_145("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return false;
	}
	if (!UNK_0x67C1D9E5B91B2E37(2))
	{
		func_145("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return false;
	}
	return true;
}

void func_313(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			iParam0->f_123 = "TRS_STREAMING";
			break;
		case 2:
			iParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		case 3:
			iParam0->f_123 = " TRS_SPAWNING ";
			break;
		case 4:
			iParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		case 5:
			iParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		case 6:
			iParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		case 7:
			iParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		case 8:
			iParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		case 9:
			iParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		case 10:
			iParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		case 18:
			iParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		case 11:
			iParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		case 19:
			iParam0->f_123 = " TRS_CUTSCENE ";
			break;
		case 20:
			iParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		case 13:
			iParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		case 12:
			iParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		case 14:
			iParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		case 15:
			iParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		case 16:
			iParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		case 17:
			iParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		case 22:
			iParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		case 25:
			iParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		case 26:
			iParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		case 24:
			iParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		case 27:
			iParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		case 23:
			iParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		case 28:
			iParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		case 29:
			iParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		case 30:
			iParam0->f_123 = " TRS_CLEANUP ";
			break;
		case 21:
			iParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		default:
			iParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	iParam0->f_410 = iParam1;
}

int func_314(var uParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		uParam0->f_8 = func_216(uParam0->f_3, 0, 0);
		UNK_0x138116A08F9AC5F4(1, 0f);
		UNK_0x661342B9651D16E2(uParam0->f_8, true);
		UNK_0xDC5B2F9D0CCE3A10(uParam0->f_8, "TAXI_BLIP_PASS");
		UNK_0x0C8C0C840C2D1AD2(uParam0->f_3, UNK_0x16F2683693E537C9(), -1, 2048, 4);
	}
	return 1;
}

int func_315(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7, bool bParam8, bool bParam9, float fParam10)
{
	if (!UNK_0xC844350D5D58C99A(uParam0->f_3))
	{
		func_316(uParam0, uParam0->f_14);
		uParam0->f_11 = { vParam1 };
		uParam0->f_14 = { vParam4 };
		func_37(uParam0->f_14, 0);
		UNK_0x745CE398A4B0A3C6(uParam0->f_14, 2f, 0);
		func_253(uParam0->f_14, 0, fParam10);
		if (bParam8 == 0)
		{
			uParam0->f_3 = UNK_0x852B8A2DB29D2288(uParam0->f_11);
		}
		else if (UNK_0xC844350D5D58C99A(Global_110348.f_225[0]))
		{
			uParam0->f_3 = Global_110348.f_225[0];
			UNK_0x73270B3C9CC833FD(uParam0->f_3, true, 1);
		}
		else
		{
			uParam0->f_3 = UNK_0x36F2404464202779(26, bParam8, uParam0->f_11, bParam9, 1, true);
		}
		func_8(&(uParam0->f_244), 3, uParam0->f_3, bParam7, 0, 1);
		UNK_0x4F39CC3882DD074E(uParam0->f_3, bParam7);
		UNK_0x9DD8618CA5BF832D(uParam0->f_3, 112, true);
		if (!UNK_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			UNK_0x25BD67336EA4AECE(uParam0->f_3, 250);
			UNK_0x4E885A246A9D983A(uParam0->f_3, 32, false);
			UNK_0x4E885A246A9D983A(uParam0->f_3, 104, true);
			UNK_0x4E885A246A9D983A(uParam0->f_3, 177, true);
			UNK_0x4E885A246A9D983A(uParam0->f_3, 116, false);
			UNK_0xF63400DBE3303D26("TAXI_Passenger", &(uParam0->f_413));
			UNK_0x0E2400AB9174FA81(1, uParam0->f_413, joaat("PLAYER"));
			UNK_0x0E2400AB9174FA81(2, uParam0->f_413, joaat("COP"));
			UNK_0x6DF7BF67E86AAE86(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_316(var uParam0, vector3 vParam1)
{
	uParam0->f_51[0] = UNK_0xA4B9EE930B45BDFA(vParam1, 20f, 5f, 0);
}

void func_317(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_112(&(iParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_111(&(iParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_112(&(iParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_111(&(iParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_318()
{
	UNK_0x523BCC9DC80CD82F(bLocal_886);
	func_320(0);
	iLocal_1132 = func_319();
	UNK_0x3F423BF5B8125A50("gestures@m@standing@casual");
}

int func_319()
{
	return UNK_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_320(bool bParam0)
{
	UNK_0x523BCC9DC80CD82F(func_19());
	if (bParam0)
	{
		UNK_0x3F423BF5B8125A50("gestures@m@standing@casual");
	}
	UNK_0x3F423BF5B8125A50("oddjobs@taxi@");
	UNK_0x3F423BF5B8125A50("oddjobs@towingcome_here");
	UNK_0x3F423BF5B8125A50("misscommon@response");
	UNK_0xD7992BEF7A9D109E("TAXI", 2);
	if (!func_22(Global_111638.f_19092, 128))
	{
		func_67(&(Global_111638.f_19092), 128);
	}
}

void func_321(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0->f_411 == 0)
	{
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
		{
			if (bParam2)
			{
				if (func_118(iParam0, 10) > (20f + 10f))
				{
					if (iParam0->f_112)
					{
						func_256(iParam0, 92, 1, 0, 0);
						iParam0->f_112 = 0;
					}
					else
					{
						func_256(iParam0, 83, 1, 0, 0);
					}
					iParam0->f_113 = 1;
					func_317(iParam0, 10, 0f, 1);
				}
			}
			else if (func_118(iParam0, 10) > 20f)
			{
				if (iParam0->f_112)
				{
					func_256(iParam0, 92, 1, 0, 0);
					iParam0->f_112 = 0;
				}
				else
				{
					func_256(iParam0, 83, 1, 0, 0);
				}
				iParam0->f_113 = 1;
				func_317(iParam0, 10, 0f, 1);
			}
		}
	}
	if (iParam0->f_411 == 1)
	{
		if (func_118(iParam0, 10) > 30f)
		{
			if (!func_213())
			{
				if (iParam0->f_112)
				{
					func_256(iParam0, 92, 1, 0, 0);
					iParam0->f_112 = 0;
				}
				else
				{
					func_256(iParam0, 83, 1, 0, 0);
				}
				iParam0->f_113 = 1;
				func_317(iParam0, 10, 0f, 1);
			}
		}
	}
	if (func_22(iParam0->f_100, 64))
	{
		if (!func_14(&(Local_190[5 /*10*/].f_6)))
		{
			func_119(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_344(iParam0))
			{
				if (iParam0->f_113)
				{
					func_256(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_256(iParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_343(iParam0, 1);
				func_341(5, iParam0);
				func_340(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 1))
	{
		if (!func_14(&(Local_190[0 /*10*/].f_6)))
		{
			func_119(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_339(iParam0))
			{
				func_343(iParam0, 1);
				func_341(0, iParam0);
				if (iParam0->f_113)
				{
					func_256(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_256(iParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_340(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 2))
	{
		if (!func_14(&(Local_190[1 /*10*/].f_6)))
		{
			func_119(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_338(iParam0))
			{
				func_343(iParam0, 1);
				func_341(1, iParam0);
				if (iParam0->f_113)
				{
					func_256(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_256(iParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_340(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 2048))
	{
		if (!func_14(&(Local_190[8 /*10*/].f_6)))
		{
			if (UNK_0xC844350D5D58C99A(iParam0->f_4))
			{
				iParam0->f_46 = UNK_0x7F6DC62EA9922664(iParam0->f_4);
				func_119(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_109(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_337(iParam0))
			{
				func_343(iParam0, 1);
				func_341(8, iParam0);
				func_340(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 128))
	{
		if (!func_14(&(Local_190[6 /*10*/].f_6)))
		{
			func_119(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_336(iParam0))
			{
				func_343(iParam0, 1);
				func_341(6, iParam0);
				if (iParam0->f_113)
				{
					func_256(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_256(iParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_340(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 32))
	{
		if (!func_14(&(Local_190[4 /*10*/].f_6)))
		{
			func_119(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_335(iParam0))
			{
				func_343(iParam0, 1);
				func_341(4, iParam0);
				if (iParam0->f_113)
				{
					func_256(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_256(iParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_340(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 256))
	{
		if (!func_14(&(Local_190[7 /*10*/].f_6)))
		{
			func_119(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_334(iParam0))
			{
				func_341(7, iParam0);
				func_343(iParam0, 1);
				if (iParam0->f_113)
				{
					func_256(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_256(iParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_340(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 8))
	{
		if (!func_14(&(Local_190[9 /*10*/].f_6)))
		{
			func_119(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			UNK_0xB2AF08FECE4571EC(UNK_0xD803B885F5E47A62());
		}
		else if (func_109(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_333(iParam0))
			{
				func_343(iParam0, 1);
				func_341(9, iParam0);
				if (iParam0->f_113)
				{
					func_256(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_256(iParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_340(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 16384))
	{
		if (!func_14(&(Local_190[13 /*10*/].f_6)))
		{
			func_119(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_327(iParam0))
			{
				func_343(iParam0, 1);
				func_341(13, iParam0);
				if (iParam0->f_113)
				{
					func_256(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_256(iParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_340(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 32768))
	{
		if (!func_14(&(Local_190[14 /*10*/].f_6)))
		{
			func_119(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_326(iParam0))
			{
				func_343(iParam0, 1);
				func_341(14, iParam0);
				if (iParam0->f_113)
				{
					func_256(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_256(iParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_340(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 4096))
	{
		if (!func_14(&(Local_190[11 /*10*/].f_6)))
		{
			func_119(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_325(iParam0))
			{
				func_343(iParam0, 1);
				func_341(11, iParam0);
				if (iParam0->f_113)
				{
					func_256(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_256(iParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_340(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 8192))
	{
		if (!func_14(&(Local_190[12 /*10*/].f_6)))
		{
			func_119(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_109(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_324(iParam0))
			{
				func_343(iParam0, 1);
				func_341(12, iParam0);
				if (iParam0->f_113)
				{
					func_256(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_256(iParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_340(iParam0);
			}
		}
	}
	if (func_22(iParam0->f_100, 4))
	{
		if (!func_14(&(Local_190[2 /*10*/].f_6)))
		{
			func_323(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_109(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_322(iParam0))
			{
				if (iParam0->f_113)
				{
					func_256(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_256(iParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_343(iParam0, 1);
				func_341(2, iParam0);
				func_340(iParam0);
			}
		}
	}
}

bool func_322(int iParam0)
{
	float fVar0;

	if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_2))
	{
		if ((!UNK_0x4024663A44BC1535(iParam0->f_2) && !func_14(&(Local_190[0 /*10*/].f_3))) && !func_14(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[2 /*10*/].f_3)))
			{
				iParam0->f_37 = UNK_0x9C66D99E63E8E24C(iParam0->f_2);
				if (iParam0->f_37 > 10f)
				{
					func_119(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_109(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				iParam0->f_38 = iParam0->f_37;
				iParam0->f_37 = UNK_0x9C66D99E63E8E24C(iParam0->f_2);
				fVar0 = (iParam0->f_38 - iParam0->f_37);
				func_108(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && iParam0->f_37 < 12f)
				{
					return true;
				}
			}
		}
		else
		{
			func_108(&(Local_190[2 /*10*/].f_3));
		}
	}
	return false;
}

void func_323(bool bParam0, float fParam1)
{
	if (!func_14(bParam0))
	{
		func_112(bParam0, fParam1);
	}
}

bool func_324(int iParam0)
{
	vector3 vVar0;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		vVar0 = { UNK_0x698705F356FA8F72(iParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_14(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[12 /*10*/].f_3)))
			{
				func_119(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_108(&(Local_190[12 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_108(&(Local_190[12 /*10*/].f_3));
		}
	}
	return false;
}

bool func_325(int iParam0)
{
	vector3 vVar0;

	if ((((((UNK_0xDF1306B443CD3D15(iParam0->f_4, 0) && !func_14(&(Local_190[0 /*10*/].f_3))) && !func_14(&(Local_190[1 /*10*/].f_3))) && !func_14(&(Local_190[5 /*10*/].f_3))) && !func_14(&(Local_190[9 /*10*/].f_3))) && !func_14(&(Local_190[7 /*10*/].f_3))) && !func_14(&(Local_190[8 /*10*/].f_3)))
	{
		vVar0 = { UNK_0x698705F356FA8F72(iParam0->f_4, 1) };
		if (UNK_0x755FF954DAE327E1(vVar0.x) > 2.5f && !func_14(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[11 /*10*/].f_3)))
			{
				func_119(&(Local_190[11 /*10*/].f_3));
				bLocal_342 = vVar0.x;
			}
			else if (func_109(&(Local_190[11 /*10*/].f_3)) < 1.5f && (UNK_0x755FF954DAE327E1(bLocal_342) - UNK_0x755FF954DAE327E1(vVar0.x)) < 0f)
			{
				func_108(&(Local_190[11 /*10*/].f_3));
				return true;
			}
			else if (func_109(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_108(&(Local_190[11 /*10*/].f_3));
				return false;
			}
		}
	}
	return false;
}

bool func_326(int iParam0)
{
	if (((((UNK_0xDF1306B443CD3D15(iParam0->f_4, 0) && !func_14(&(Local_190[0 /*10*/].f_3))) && !func_14(&(Local_190[8 /*10*/].f_3))) && !func_14(&(Local_190[5 /*10*/].f_3))) && !func_14(&(Local_190[9 /*10*/].f_3))) && !func_14(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_14(&(Local_190[14 /*10*/].f_3)))
		{
			iParam0->f_5 = UNK_0x83C1D4B63BBD91F6(UNK_0x68F4C0EC296D3901(iParam0->f_4, true), 10f, false, 260);
			if (UNK_0xC844350D5D58C99A(iParam0->f_5))
			{
				if ((UNK_0x9C66D99E63E8E24C(iParam0->f_4) > 15f && func_51(iParam0->f_5, iParam0->f_4, 1) < 3f) && (!UNK_0x437347B10A200C4B(iParam0->f_5, 0) && !UNK_0xBBA8A868118C90ED(iParam0->f_5, -1, 0)))
				{
					func_119(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_109(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_51(iParam0->f_5, iParam0->f_4, 1) > 4.5f) && !UNK_0xE147126C9AD09A60(iParam0->f_5))
		{
			func_108(&(Local_190[14 /*10*/].f_3));
			return true;
		}
		else if (func_109(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_108(&(Local_190[14 /*10*/].f_3));
			return false;
		}
		else if (UNK_0xE147126C9AD09A60(iParam0->f_5))
		{
			func_108(&(Local_190[14 /*10*/].f_3));
			return false;
		}
	}
	return false;
}

bool func_327(int iParam0)
{
	if (((UNK_0xDF1306B443CD3D15(iParam0->f_4, 0) && !func_14(&(Local_190[9 /*10*/].f_3))) && !func_14(&(Local_190[7 /*10*/].f_3))) && !func_14(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_328(iParam0->f_4) && UNK_0x9C66D99E63E8E24C(iParam0->f_4) > 15f)
		{
			if (!func_14(&(Local_190[13 /*10*/].f_3)))
			{
				func_119(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_108(&(Local_190[13 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_108(&(Local_190[13 /*10*/].f_3));
		}
	}
	return false;
}

int func_328(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	float fVar27;

	UNK_0x4490D017C57827E9(UNK_0x68F4C0EC296D3901(bParam0, true), 1, &vVar0, 1, 3f, 0f);
	UNK_0x4490D017C57827E9(UNK_0x68F4C0EC296D3901(bParam0, true), 2, &vVar3, 1, 3f, 0f);
	UNK_0x48C17E97DDC41CBC(vVar0, -1, &vVar6);
	fVar27 = SYSTEM::VMAG(vVar6 - vVar0);
	vVar9 = { func_332((vVar3.x - vVar0.x), (vVar3.y - vVar0.y), 0f) };
	vVar12 = { func_331(vVar9, 0) * Vector(fVar27, fVar27, fVar27) };
	vVar9 = { vVar9 * Vector(2f, 2f, 2f) };
	vVar15 = { vVar0 - vVar9 + vVar12 };
	vVar18 = { vVar0 - vVar9 - vVar12 };
	vVar21 = { vVar3 + vVar9 + vVar12 };
	vVar24 = { vVar3 + vVar9 - vVar12 };
	vVar24 = { vVar24 };
	return func_329(UNK_0x68F4C0EC296D3901(bParam0, true), vVar15, vVar18, vVar21);
}

int func_329(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	vParam6.f_2 = 0f;
	vParam9.f_2 = 0f;
	vVar0 = { func_332(vParam6 - vParam3) };
	vVar3 = { func_332(vParam9 - vParam3) };
	fVar6 = func_330(vParam0, vVar0);
	fVar7 = func_330(vParam3, vVar0);
	fVar8 = func_330(vParam6, vVar0);
	fVar9 = func_330(vParam0, vVar3);
	fVar10 = func_330(vParam3, vVar3);
	fVar11 = func_330(vParam9, vVar3);
	if (fVar7 > fVar8)
	{
		fVar12 = fVar7;
		fVar7 = fVar8;
		fVar8 = fVar12;
	}
	if (fVar6 < fVar7 || fVar6 > fVar8)
	{
		return 0;
	}
	if (fVar10 > fVar11)
	{
		fVar13 = fVar10;
		fVar10 = fVar11;
		fVar11 = fVar13;
	}
	if (fVar9 < fVar10 || fVar9 > fVar11)
	{
		return 0;
	}
	return 1;
}

float func_330(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_331(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	switch (iParam3)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.f_1 = vParam0.x;
			break;
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.f_1 = -vParam0.y;
			break;
		case 2:
			vVar0.x = vParam0.y;
			vVar0.f_1 = -vParam0.x;
			break;
	}
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

Vector3 func_332(vector3 vParam0)
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

bool func_333(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0xA30B8362589C124A(iParam0->f_4, -1, 0) == UNK_0x16F2683693E537C9())
		{
			if (UNK_0x1A069ED4E9BDE50A(UNK_0xD803B885F5E47A62()))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_334(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0xA30B8362589C124A(iParam0->f_4, -1, 0) == UNK_0x16F2683693E537C9())
		{
			if (UNK_0x377BE9A1BF38C7CE(iParam0->f_4))
			{
				if (!bLocal_341)
				{
					if (UNK_0xCE563465D2227DD6(iParam0->f_4) <= -145f || UNK_0xCE563465D2227DD6(iParam0->f_4) >= 145f)
					{
						bLocal_341 = true;
					}
				}
			}
			else if (bLocal_341)
			{
				if (UNK_0xCE563465D2227DD6(iParam0->f_4) <= 35f && UNK_0xCE563465D2227DD6(iParam0->f_4) >= -35f)
				{
					bLocal_341 = false;
					return true;
				}
			}
		}
	}
	return false;
}

bool func_335(int iParam0)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		iVar0 = UNK_0xB32FE193F79AD48C(UNK_0xD803B885F5E47A62());
		if (iVar0 == 0)
		{
			if (!func_14(&(Local_190[4 /*10*/].f_3)))
			{
				func_119(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_108(&(Local_190[4 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_108(&(Local_190[4 /*10*/].f_3));
		}
	}
	return false;
}

bool func_336(int iParam0)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		iVar0 = UNK_0x00AC2C41F7B083B2(UNK_0xD803B885F5E47A62());
		if (iVar0 == 0)
		{
			if (!func_14(&(Local_190[6 /*10*/].f_3)))
			{
				func_119(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_108(&(Local_190[6 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_108(&(Local_190[6 /*10*/].f_3));
		}
	}
	return false;
}

bool func_337(int iParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0xE608C809F9416F00(iParam0->f_4))
		{
			iVar0 = UNK_0x7F6DC62EA9922664(iParam0->f_4);
			iVar1 = (iParam0->f_46 - iVar0);
			iParam0->f_46 = iVar0;
			UNK_0xE910A68AA670B4AA(iParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (iParam0->f_113)
				{
					func_256(iParam0, 93, 1, 0, 0);
					iParam0->f_113 = 0;
				}
				else
				{
					func_256(iParam0, 72, 1, 0, 1);
				}
				func_108(&(Local_190[2 /*10*/].f_6));
				return true;
			}
		}
	}
	return false;
}

bool func_338(int iParam0)
{
	vector3 vVar0;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		vVar0 = { UNK_0x698705F356FA8F72(iParam0->f_4, 1) };
		if (UNK_0x755FF954DAE327E1(vVar0.x) > 3f && !func_14(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_14(&(Local_190[1 /*10*/].f_3)))
			{
				func_119(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_108(&(Local_190[1 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_108(&(Local_190[1 /*10*/].f_3));
		}
	}
	return false;
}

bool func_339(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0xF79A7BCA9E38BBBC(iParam0->f_4) && UNK_0xE934758D273C899A(iParam0->f_4))
		{
			if (!func_14(&(Local_190[0 /*10*/].f_3)))
			{
				func_119(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_108(&(Local_190[0 /*10*/].f_3));
				func_111(&(Local_190[1 /*10*/].f_6));
				return true;
			}
		}
		else
		{
			func_108(&(Local_190[0 /*10*/].f_3));
		}
	}
	return false;
}

void func_340(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_14(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_111(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_317(iParam0, 10, 0f, 1);
	UNK_0xB2AF08FECE4571EC(UNK_0xD803B885F5E47A62());
}

void func_341(int iParam0, int iParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_342(iParam1, iParam0);
	func_108(&(Local_190[iParam0 /*10*/].f_6));
	iParam1->f_112 = 1;
}

void func_342(int iParam0, int iParam1)
{
	iParam0->f_76 = (iParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_343(int iParam0, int iParam1)
{
	iParam0->f_104 = (iParam0->f_104 + iParam1);
}

bool func_344(int iParam0)
{
	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (UNK_0x9C66D99E63E8E24C(iParam0->f_4) > 25f)
		{
			if (!func_14(&(Local_190[5 /*10*/].f_3)))
			{
				func_119(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_109(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_108(&(Local_190[5 /*10*/].f_3));
				return true;
			}
		}
		else
		{
			func_108(&(Local_190[5 /*10*/].f_3));
		}
	}
	return false;
}

void func_345()
{
	vector3 vVar0;

	func_145("UPDATE_FINAL_SCENE()", &iLocal_896, 1000);
	if ((Local_423.f_410 >= 28 && !bLocal_905) && ((UNK_0xB87D13D0C064E9D1(Local_423.f_3, UNK_0x16F2683693E537C9(), 1) || UNK_0xB87D13D0C064E9D1(bLocal_890, UNK_0x16F2683693E537C9(), 1)) || UNK_0xB87D13D0C064E9D1(Local_853.f_2, UNK_0x16F2683693E537C9(), 1)))
	{
		bLocal_905 = true;
	}
	else if (!UNK_0x437347B10A200C4B(Local_423.f_3, 0))
	{
		if (UNK_0xB87D13D0C064E9D1(Local_853.f_2, Local_423.f_3, 1) && iLocal_1142 < 6)
		{
			bLocal_905 = true;
		}
	}
	if (iLocal_1142 >= 4)
	{
		if (func_235(Local_423.f_3, 1) < 3f && !bLocal_904)
		{
			if (!func_213())
			{
				func_348(&(Local_423.f_244), Local_423.f_144, "txm4_aggro", 8, 0, 0, 0);
				UNK_0x9BE7E7B6B488CC55(Local_423.f_3, UNK_0x16F2683693E537C9(), -1, 0);
				iLocal_900 = UNK_0x1C0640BA9A7327B3();
				bLocal_904 = true;
			}
			else if (!bLocal_913)
			{
				func_153();
				bLocal_913 = true;
			}
		}
	}
	switch (iLocal_1142)
	{
		case 0:
			if ((!UNK_0x437347B10A200C4B(Local_853.f_2, 0) && !UNK_0x437347B10A200C4B(Local_423.f_3, 0)) && !UNK_0x437347B10A200C4B(bLocal_890, 0))
			{
				UNK_0xF63400DBE3303D26("TAXI_Whore", &bLocal_893);
				bLocal_892 = UNK_0xD09DF7101876AFB8(Local_423.f_3);
				UNK_0x0E2400AB9174FA81(255, Local_853.f_30, bLocal_893);
				UNK_0x0E2400AB9174FA81(255, Local_853.f_30, bLocal_892);
				UNK_0x6DF7BF67E86AAE86(Local_853.f_2, Local_853.f_30);
				UNK_0x6DF7BF67E86AAE86(bLocal_890, bLocal_893);
				UNK_0x11AD11297DC58CC7(Local_853.f_2, true);
				UNK_0xAFF39FB306F8E232(Local_853.f_2, 17, true);
				UNK_0xD458AC1C1D29C3B4(Local_853.f_2, 130, false);
				UNK_0x00A6D36F507FD6EA(Local_853.f_2, 1);
				UNK_0x1365063FA6365BE8(Local_853.f_2, true);
				UNK_0xA3BF0AA5A2608191(Local_853.f_2);
				UNK_0x11AD11297DC58CC7(bLocal_890, true);
				UNK_0xAFF39FB306F8E232(bLocal_890, 17, true);
				UNK_0xD458AC1C1D29C3B4(bLocal_890, 130, false);
				UNK_0x00A6D36F507FD6EA(bLocal_890, 1);
				UNK_0x1365063FA6365BE8(bLocal_890, true);
				UNK_0xA3BF0AA5A2608191(bLocal_890);
				iLocal_1142 = 1;
			}
			break;
		case 1:
			if (((!UNK_0x437347B10A200C4B(Local_853.f_2, 0) && !UNK_0x437347B10A200C4B(Local_423.f_3, 0)) && !UNK_0x437347B10A200C4B(bLocal_890, 0)) && !UNK_0x437347B10A200C4B(Local_853.f_3, 0))
			{
				UNK_0xF82EA857DA10E0CD(&iLocal_414);
				UNK_0xDD353D0E9C789D0E(&iLocal_414);
				UNK_0xF96A174EE26D7588(false, bLocal_890, 0);
				UNK_0xC6EB89C59F2AF6B8(false, &cLocal_980, "idle_b", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, &cLocal_996, "exit", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_414);
				UNK_0x78ADC381772E3D54(Local_853.f_2, iLocal_414);
				UNK_0xF82EA857DA10E0CD(&iLocal_414);
				UNK_0xF82EA857DA10E0CD(&iLocal_415);
				UNK_0xDD353D0E9C789D0E(&iLocal_415);
				UNK_0xF96A174EE26D7588(false, Local_853.f_2, 0);
				UNK_0xC6EB89C59F2AF6B8(false, &cLocal_1012, "idle_a", 8f, -8f, -1, 1, false, 0, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_415);
				UNK_0x78ADC381772E3D54(bLocal_890, iLocal_415);
				UNK_0xF82EA857DA10E0CD(&iLocal_415);
				iLocal_1142 = 2;
			}
			break;
		case 2:
			if (bLocal_906)
			{
				if (!UNK_0x437347B10A200C4B(bLocal_890, 0) && !UNK_0x437347B10A200C4B(Local_423.f_3, 0))
				{
					UNK_0x6DF7BF67E86AAE86(Local_423.f_3, bLocal_892);
					UNK_0x11AD11297DC58CC7(Local_423.f_3, true);
					UNK_0xAFF39FB306F8E232(Local_423.f_3, 13, true);
					UNK_0x29CD9554726C7577(Local_423.f_3, 100);
					UNK_0x298903DD96203C2C(Local_423.f_3, 100);
					UNK_0xD458AC1C1D29C3B4(Local_423.f_3, 105, false);
					UNK_0xA3BF0AA5A2608191(Local_423.f_3);
					UNK_0xF82EA857DA10E0CD(&iLocal_416);
					UNK_0xDD353D0E9C789D0E(&iLocal_416);
					UNK_0x93D47DFD0AE94949(false, 5000);
					func_347(&Local_423, -691.48f, -1113.31f, 13.53f);
					UNK_0xE20F700AC2AFCA92(false, func_346(iLocal_413), bLocal_890, 3f, true, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					UNK_0x2C4A1A0F54A166E8(false, bLocal_890, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					UNK_0x75ABDC5F81978924(iLocal_416);
					UNK_0x78ADC381772E3D54(Local_423.f_3, iLocal_416);
					UNK_0xF82EA857DA10E0CD(&iLocal_416);
					bLocal_902 = true;
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 256);
					UNK_0x262EF6C6306BEA6C(Local_423.f_3, joaat("WEAPON_PISTOL"), 100, true, true);
					iLocal_1142 = 3;
				}
			}
			else if (!bLocal_909)
			{
				if (!UNK_0xEB6A8945D1AC98A1(Local_853.f_2) && !UNK_0xEB6A8945D1AC98A1(bLocal_890))
				{
					if (func_235(Local_853.f_2, 1) < 2f || func_235(bLocal_890, 1) < 2f)
					{
						UNK_0xA3BF0AA5A2608191(Local_853.f_2);
						UNK_0xA3BF0AA5A2608191(bLocal_890);
						UNK_0x0C8C0C840C2D1AD2(Local_853.f_2, UNK_0x16F2683693E537C9(), -1, 2048, 4);
						UNK_0xF82EA857DA10E0CD(&iLocal_414);
						UNK_0xDD353D0E9C789D0E(&iLocal_414);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
						UNK_0x75ABDC5F81978924(iLocal_414);
						UNK_0x78ADC381772E3D54(Local_853.f_2, iLocal_414);
						UNK_0x0C8C0C840C2D1AD2(bLocal_890, UNK_0x16F2683693E537C9(), -1, 2048, 4);
						UNK_0xF82EA857DA10E0CD(&iLocal_415);
						UNK_0xDD353D0E9C789D0E(&iLocal_415);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
						UNK_0x75ABDC5F81978924(iLocal_415);
						UNK_0x78ADC381772E3D54(bLocal_890, iLocal_415);
						bLocal_909 = true;
					}
				}
				else
				{
					if (UNK_0xEB6A8945D1AC98A1(Local_853.f_2))
					{
					}
					else
					{
						UNK_0xA3BF0AA5A2608191(Local_853.f_2);
						UNK_0xF3268524E9BE6D6E(Local_853.f_2, UNK_0x16F2683693E537C9(), 100f, 20000, 0, 0);
					}
					if (UNK_0xEB6A8945D1AC98A1(bLocal_890))
					{
					}
					else
					{
						UNK_0xA3BF0AA5A2608191(bLocal_890);
						UNK_0xF3268524E9BE6D6E(bLocal_890, UNK_0x16F2683693E537C9(), 100f, 20000, 0, 0);
					}
				}
			}
			break;
		case 3:
			func_145("UPDATE_FINAL_SCENE - FINAL_SCENE_WAIT_FOR_DIALOGUE", &iLocal_896, 1000);
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(Local_423.f_3, 0))
			{
				if (UNK_0xD1960163A3042274(Local_423.f_3, 242628503) == 1)
				{
					if (UNK_0x4F1B602325013CC2(Local_423.f_3) > 0 && bLocal_902)
					{
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						bLocal_902 = false;
					}
				}
			}
			else
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			}
			if (((!UNK_0xEB6A8945D1AC98A1(bLocal_890) && UNK_0x688A90832774AB83(bLocal_890)) && !UNK_0x437347B10A200C4B(Local_853.f_2, 0)) && !bLocal_908)
			{
				UNK_0x0C8C0C840C2D1AD2(Local_853.f_2, Local_423.f_3, -1, 2048, 4);
				UNK_0xF82EA857DA10E0CD(&iLocal_414);
				UNK_0xDD353D0E9C789D0E(&iLocal_414);
				UNK_0x93D47DFD0AE94949(false, 500);
				UNK_0xC6EB89C59F2AF6B8(false, "MOVE_DUCK_FOR_COVER", "enter", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, "MOVE_DUCK_FOR_COVER", "loop", 8f, -8f, -1, 1, false, 0, 0, 0);
				UNK_0xF96A174EE26D7588(false, Local_423.f_3, 0);
				UNK_0x75ABDC5F81978924(iLocal_414);
				UNK_0x78ADC381772E3D54(Local_853.f_2, iLocal_414);
				bLocal_908 = true;
			}
			if (!UNK_0x437347B10A200C4B(Local_423.f_3, 0) && !UNK_0x437347B10A200C4B(Local_853.f_2, 0))
			{
				if (UNK_0x4F1B602325013CC2(Local_423.f_3) > 2)
				{
					func_256(&Local_423, 58, 1, 0, 0);
					UNK_0xF82EA857DA10E0CD(&iLocal_416);
					UNK_0xDD353D0E9C789D0E(&iLocal_416);
					UNK_0xBC43ED9FE28DB191(false);
					UNK_0x9BE7E7B6B488CC55(false, Local_853.f_2, 2000, 0);
					UNK_0x75ABDC5F81978924(iLocal_416);
					UNK_0x78ADC381772E3D54(Local_423.f_3, iLocal_416);
					iLocal_1142 = 4;
				}
			}
			break;
		case 4:
			func_145("FINAL_SCENE_KILL_WOMAN", &iLocal_896, 1000);
			if (UNK_0x437347B10A200C4B(bLocal_890, 0))
			{
				if (!UNK_0x437347B10A200C4B(Local_853.f_2, 0))
				{
					if (!UNK_0x437347B10A200C4B(Local_423.f_3, 0))
					{
						UNK_0xF82EA857DA10E0CD(&iLocal_415);
						UNK_0xDD353D0E9C789D0E(&iLocal_415);
						UNK_0xE20F700AC2AFCA92(false, -691.48f, -1113.31f, 13.53f, Local_853.f_2, 1f, false, 0.5f, 4f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						UNK_0x9BE7E7B6B488CC55(false, Local_853.f_2, -1, 1);
						UNK_0x75ABDC5F81978924(iLocal_415);
						UNK_0x78ADC381772E3D54(Local_423.f_3, iLocal_415);
					}
				}
				iLocal_1142 = 6;
			}
			break;
		case 6:
			func_145("FINAL_SCENE_KILL_MAN", &iLocal_896, 1000);
			if (!func_213())
			{
				if (!UNK_0x437347B10A200C4B(Local_423.f_3, 0) && !UNK_0x437347B10A200C4B(Local_853.f_2, 0))
				{
					UNK_0x2C4A1A0F54A166E8(Local_423.f_3, Local_853.f_2, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					iLocal_1142 = 7;
				}
			}
			break;
		case 7:
			func_145("FINAL_SCENE_FLEE", &iLocal_896, 1000);
			if (UNK_0x437347B10A200C4B(Local_853.f_2, 0) && !UNK_0x437347B10A200C4B(Local_423.f_3, 0))
			{
				vVar0 = { UNK_0x68F4C0EC296D3901(Local_853.f_2, false) };
				UNK_0xDD353D0E9C789D0E(&iLocal_416);
				UNK_0x731C6942D48648D6(false, vVar0, 1000, 0, 0);
				UNK_0x9294582561BECEE7(false, 0);
				UNK_0x93D47DFD0AE94949(false, 500);
				UNK_0xEEB67C3D0A71A47B(false, -691.48f, -1113.31f, 13.53f, 1000f, -1, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_416);
				UNK_0x78ADC381772E3D54(Local_423.f_3, iLocal_416);
				UNK_0xF82EA857DA10E0CD(&iLocal_416);
				UNK_0xFADC0A217229F6B5(Local_423.f_3, true);
				bLocal_905 = true;
			}
			break;
	}
}

Vector3 func_346(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -691.48f, -1113.31f, 13.53f;
		case 1:
			return -691.48f, -1113.31f, 13.53f;
		default:
			break;
	}
	return -691.48f, -1113.31f, 13.53f;
}

void func_347(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
	{
		if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
		{
			vVar0 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar3 = { UNK_0x68E4ADDDDCD7BDDE(iParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (UNK_0x0EB28750412C3A5A(vVar0, vParam1, 0) < UNK_0x0EB28750412C3A5A(vVar3, vParam1, 0) && UNK_0x3CAA763EEC01ADF7(iParam0->f_3, iParam0->f_4, 1, 0, false))
			{
				UNK_0x45F014B3D0466974(false, iParam0->f_4, 131584);
			}
			else if (UNK_0x0EB28750412C3A5A(vVar0, vParam1, 0) >= UNK_0x0EB28750412C3A5A(vVar3, vParam1, 0) && UNK_0x3CAA763EEC01ADF7(iParam0->f_3, iParam0->f_4, 2, 0, false))
			{
				UNK_0x45F014B3D0466974(false, iParam0->f_4, 262656);
			}
			else
			{
				UNK_0x45F014B3D0466974(false, iParam0->f_4, 512);
			}
		}
	}
}

int func_348(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_360(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_349(sParam2, iParam3, 0);
}

int func_349(char* sParam0, int iParam1, bool bParam2)
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
					func_154();
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
		if (func_359(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_358();
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
				func_357();
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
				if (func_356())
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
			if (func_31())
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
			func_355();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_354();
		func_350();
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
		func_154();
	}
	return 0;
}

void func_350()
{
	if (!func_351())
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

bool func_351()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_173())
	{
		return false;
	}
	if (func_352(UNK_0xD803B885F5E47A62()))
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

bool func_352(int iParam0)
{
	return func_353(iParam0, 20);
}

bool func_353(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

void func_354()
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

void func_355()
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

bool func_356()
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

void func_357()
{
	if (func_82(14))
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
		Global_19486 = func_105();
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

void func_358()
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

bool func_359(bool bParam0, int iParam1)
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

void func_360(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_361(int iParam0, char* sParam1, int iParam2)
{
	vector3 vVar0[24];

	func_153();
	func_462(2);
	cVar0 = { func_368() };
	if ((!UNK_0xEA6BC48857E0AC4C(&cVar0) && func_213()) && !UNK_0x7F8A39872A07D2CE(&cVar0, "NULL"))
	{
	}
	else
	{
		UNK_0x790015DC92C918E2();
		UNK_0xA37A90C62806D848(1);
		StringCopy(&cVar0, iParam0->f_143, 24);
		if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
		{
			if (!func_225(iParam0))
			{
				if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					UNK_0xFB131B855F2FD560(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					UNK_0xFB131B855F2FD560(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (UNK_0xB4ECF989E2C1DAC8(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					UNK_0xFB131B855F2FD560(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		iParam0->f_109 = 1;
		iParam0->f_121 = sParam1;
		iParam0->f_415 = iParam2;
		func_317(iParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aband1", 24);
				}
				func_366(iParam0, &cVar0);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_276(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (iParam0->f_115)
			{
				StringConCat(&cVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&cVar0, "_aggro", 24);
			}
			func_366(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam0->f_415 == 15)
		{
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&cVar0, "_lost1", 24);
			func_366(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&cVar0, "_spotd1", 24);
			func_366(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&cVar0, "_wntd1", 24);
			func_366(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&cVar0, "_spook", 24);
			func_366(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_225(iParam0))
			{
				if (UNK_0x8B38C0DAEEDB5F9C(iParam0->f_4))
				{
					func_363(iParam0, 4096, 0);
				}
				else
				{
					func_363(iParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&cVar0, "_hit2", 24);
			func_366(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&cVar0, "_jak", 24);
			func_366(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_shot1", 24);
				}
				func_366(iParam0, &cVar0);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_276(iParam0->f_3, "CALL_COPS_COMMIT", iParam0->f_145, 4);
			}
			UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&cVar0, "_shot1", 24);
			func_366(iParam0, &cVar0);
			UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&cVar0, "_shot1", 24);
			func_366(iParam0, &cVar0);
			UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 1, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_55(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_366(iParam0, &cVar0);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_276(iParam0->f_3, "GENERIC_INSULT_MED", iParam0->f_145, 4);
			}
			func_363(iParam0, 0, 0);
			func_366(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_55(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_366(iParam0, &cVar0);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_276(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			func_366(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_55(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_366(iParam0, &cVar0);
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_276(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&cVar0, "OJTX_QUIT_", 24);
			func_362(&cVar0);
			func_348(&(iParam0->f_244), "OJTXAUD", &cVar0, 7, 0, 0, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (iParam0->f_115)
			{
				StringConCat(&cVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&cVar0, "_fail1", 24);
			}
			func_366(iParam0, &cVar0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&cVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aband1", 24);
				}
				if (iParam0->f_410 > 5)
				{
					func_366(iParam0, &cVar0);
				}
			}
			else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_276(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_55(3, 0);
		}
		func_317(iParam0, 3, 0f, 1);
	}
}

void func_362(char* sParam0)
{
	switch (func_3(UNK_0x16F2683693E537C9()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_363(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
	{
		UNK_0x11AD11297DC58CC7(iParam0->f_3, false);
		UNK_0xE910A68AA670B4AA(iParam0->f_3);
		UNK_0xBAFED2F6486F771A(iParam0->f_3, 3, false);
		UNK_0xAFF39FB306F8E232(iParam0->f_3, 17, true);
		UNK_0xA3BF0AA5A2608191(iParam0->f_3);
		if ((func_53(iParam0->f_3, iParam0->f_29, 1) <= 200f && !func_365(iParam0->f_29)) && !bParam2)
		{
			func_364(iParam0);
		}
		else
		{
			UNK_0xBAFED2F6486F771A(iParam0->f_3, 1024, true);
			UNK_0xBAFED2F6486F771A(iParam0->f_3, 131072, true);
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0x75CDA8644CD3B5F5(false, 0, iParam1);
			if (iParam0->f_415 == 8)
			{
				UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
			}
			else
			{
				UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
			}
			UNK_0xD93EE6549113F9E1(false, 0);
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(iParam0->f_3, iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
		UNK_0xFADC0A217229F6B5(iParam0->f_3, true);
	}
}

void func_364(int iParam0)
{
	int iVar0;

	if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
	{
		if (func_39(func_40(), iParam0->f_29, 0))
		{
			if (iParam0->f_411 == 2)
			{
				UNK_0xD8F6A53F4799FAFE(iParam0->f_3, 84.9058f);
				UNK_0xFADC0A217229F6B5(iParam0->f_3, true);
			}
			else if (iParam0->f_411 == 4)
			{
				UNK_0xD8F6A53F4799FAFE(iParam0->f_3, 68.3138f);
				UNK_0xFADC0A217229F6B5(iParam0->f_3, true);
			}
			else
			{
				UNK_0x01E4BB5190DF7317(iParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			UNK_0xA3BF0AA5A2608191(iParam0->f_3);
			UNK_0xF82EA857DA10E0CD(&iVar0);
			UNK_0xDD353D0E9C789D0E(&iVar0);
			UNK_0x75CDA8644CD3B5F5(false, 0, 0);
			UNK_0xD93EE6549113F9E1(false, 0);
			UNK_0x96167B03C5A77156(false, iParam0->f_29, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
			if (iParam0->f_411 == 2)
			{
				UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (iParam0->f_411 == 0)
			{
				UNK_0x91CF687749AD9691(false, 1);
				UNK_0x96167B03C5A77156(false, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0xE655C47E46F9A7E4(false, 151.7794f, 0);
				UNK_0x509B8296EBA9B408(false, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (iParam0->f_411 == 4)
			{
				UNK_0x4A35AD9FC803369E(false, iParam0->f_29, 15f, 0);
			}
			else if (iParam0->f_411 == 1)
			{
				UNK_0x4A35AD9FC803369E(false, iParam0->f_29, 15f, 20000);
				UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
			}
			else
			{
				UNK_0xC6EB89C59F2AF6B8(false, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
			}
			if (UNK_0x4742C50E93110B10(iParam0->f_29, 15f, 1))
			{
				UNK_0x4A35AD9FC803369E(false, iParam0->f_29, 15f, 0);
			}
			else
			{
				UNK_0x01E4BB5190DF7317(false, 1193033728, 0);
			}
			UNK_0x75ABDC5F81978924(iVar0);
			UNK_0x78ADC381772E3D54(iParam0->f_3, iVar0);
			UNK_0xF82EA857DA10E0CD(&iVar0);
		}
		UNK_0xFADC0A217229F6B5(iParam0->f_3, true);
	}
}

bool func_365(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_366(int iParam0, char* sParam1)
{
	if (func_367(iParam0))
	{
		func_348(&(iParam0->f_244), iParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

bool func_367(int iParam0)
{
	if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
	{
		if (func_51(UNK_0x16F2683693E537C9(), iParam0->f_3, 1) < 40f && !UNK_0x03068588A1FCED1A(iParam0->f_3))
		{
			return true;
		}
	}
	return false;
}

struct<6> func_368()
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

int func_369(var uParam0)
{
	return uParam0->f_118;
}

void func_370()
{
	func_400(&Local_423);
	if (func_399(&Local_423, &Local_1052))
	{
		switch (Local_1052.f_27)
		{
			case 0:
				if (Local_423.f_410 == 17)
				{
					if (!func_398(&Local_423))
					{
						if (func_397("TAXI_OBJ_FTC1") || UNK_0xE4EDC4B0E92C078B(Local_423.f_9))
						{
							Local_1052.f_27++;
						}
						else if (func_200(&Local_423) != 10)
						{
							func_256(&Local_423, 10, 1, 0, 1);
						}
					}
				}
				break;
			case 1:
				if ((func_200(&Local_423) > 10 && func_200(&Local_423) != 15) && !func_398(&Local_423))
				{
					func_256(&Local_423, 15, 1, 0, 0);
					func_206(&Local_423, 7);
				}
				break;
		}
	}
	func_371(&Local_423, &uLocal_1082, &Local_1052, bLocal_1051);
}

int func_371(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	func_379(iParam0, uParam1);
	if (((*uParam2 == -1 && iParam0->f_410 < 29) && !iParam0->f_109) && !func_191(iParam0, 2))
	{
		if (func_378(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((UNK_0x1C0640BA9A7327B3() % 2000) < 50)
		{
		}
	}
	if (!iParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_377(iParam0))
				{
					uParam2->f_7 = { func_376(uParam1) };
					func_348(&(iParam0->f_244), iParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			case 2:
				if (func_213())
				{
					uParam2->f_13 = { func_259() };
					if (UNK_0x7F8A39872A07D2CE(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_68(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_374(uParam1);
					func_317(iParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 3:
				if (func_229(iParam0))
				{
					if (func_213())
					{
						func_317(iParam0, 17, 0f, 1);
						uParam2->f_1 = { func_373() };
						if (UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_213())
				{
					uParam2->f_19 = { func_368() };
				}
				else
				{
					func_68(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_374(uParam1);
					func_317(iParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 4:
				if (((!func_191(iParam0, 14) && !func_213()) && !func_229(iParam0)) && func_118(iParam0, 18) > 1f)
				{
					func_317(iParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			case 6:
				if (!func_213())
				{
					if (func_118(iParam0, 18) > 1f)
					{
						if (!UNK_0xEA6BC48857E0AC4C(&(uParam2->f_1)))
						{
							func_372(&(iParam0->f_244), iParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			case 7:
				if (!func_213())
				{
					func_68(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_374(uParam1);
					func_317(iParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
		}
	}
	return 0;
}

int func_372(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_360(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_349(sParam2, iParam4, 0);
}

struct<6> func_373()
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

void func_374(var uParam0)
{
	int iVar0;

	iVar0 = func_375(uParam0);
	if (iVar0 > -1)
	{
		func_20(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_20(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_67(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_150(), 24);
	}
}

int func_375(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_376(var uParam0)
{
	int iVar0;
	struct<6> Var1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_67(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

bool func_377(int iParam0)
{
	switch (iParam0->f_411)
	{
		case 0:
			if (func_231("TX_OBJ_NEX_DO", 0, 0))
			{
				return true;
			}
			break;
		case 1:
			if (func_231("TX_OBJ_TIE_DO", 0, 0))
			{
				return true;
			}
			break;
		case 2:
			if (func_231("TX_OBJ_DL_DO", 0, 0))
			{
				return true;
			}
			break;
		case 3:
			if ((func_231("TX_OBJ_GYB_DO", 0, 0) || func_231("TAXI_OBJ_GYB", 0, 0)) || func_231("TAXI_OBJ_GYB_2", 0, 0))
			{
				return true;
			}
			break;
		case 4:
			if (func_231("TX_OBJ_TTB_DO", 0, 0))
			{
				return true;
			}
			break;
		case 5:
			if ((func_231("TX_OBJ_CYI_DO", 0, 0) || func_231("TAXI_OBJ_CYI_01", 0, 0)) || func_231("TAXI_OBJ_CYI_02", 0, 0))
			{
				return true;
			}
			break;
		case 6:
			if (((func_231("TX_OBJ_GYN_DO", 0, 0) || func_231("TAXI_OBJ_GYN", 0, 0)) || func_231("TAXI_OBJ_GYN_TG", 0, 0)) || func_231("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return true;
			}
			break;
		case 7:
			if ((func_231("TAXI_OBJ_CC1", 0, 0) || func_231("TAXI_OBJ_CC2", 0, 0)) || func_231("TAXI_OBJ_CC3", 0, 0))
			{
				return true;
			}
			break;
		case 8:
			if ((func_231("TAXI_OBJ_FTC1", 0, 0) || func_231("TAXI_OBJ_FTC2", 0, 0)) || func_231("TAXI_OBJ_FTC3", 0, 0))
			{
				return true;
			}
			break;
		case 9:
			if (func_231("TX_OBJ_PRO_DO", 0, 0))
			{
				return true;
			}
			break;
	}
	return (((((func_231("TAXI_OBJ_GETRUN", 0, 0) || func_231("TAXI_OBJ_DRIVE", 0, 0)) || func_231("TAXI_OBJ_RETURN", 0, 0)) || func_231("TAXI_OBJ_POL", 0, 0)) || func_231("TAXI_OBJ_RUNOUT", 0, 0)) || func_231("TAXI_OBJ_POL", 0, 0));
}

bool func_378(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_379(int iParam0, var uParam1)
{
	vector3 vVar0[24];
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;

	if (func_377(iParam0))
	{
	}
	else if (!iParam0->f_110)
	{
	}
	else if (func_191(iParam0, 14))
	{
		StringCopy(&cVar0, iParam0->f_143, 24);
		switch (func_200(iParam0))
		{
			case 55:
				StringConCat(&cVar0, "_lvMe1", 24);
				cVar6 = { cVar0 };
				func_396(&(iParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_317(iParam0, 16, 0, 0);
				func_394(4, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 2:
				if (!func_213())
				{
					if (iParam0->f_115)
					{
						StringConCat(&cVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&cVar0, "_retrn1", 24);
					}
					if (iParam0->f_411 != 9)
					{
						func_393(iParam0, &cVar0, 0, 0, 8);
					}
				}
				else
				{
					func_390(iParam0, cVar0, func_392(iParam0, 2));
				}
				if (func_22(iParam0->f_98, 4))
				{
					func_317(iParam0, 16, 0, 0);
					func_281(iParam0, 0, 0);
				}
				func_240(iParam0, &(iParam0->f_98), 4, 3);
				break;
			case 3:
				if (func_118(iParam0, 16) > 1f)
				{
					func_241(1);
					if (iParam0->f_411 == 9)
					{
						func_280("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_280("TAXI_VIP_RETURN", 7500, 1);
					}
					func_317(iParam0, 16, 0, 0);
					func_281(iParam0, 0, 0);
				}
				break;
			case 65:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_aggro", 24);
				}
				iParam0->f_107++;
				if (iParam0->f_411 != 9)
				{
					func_393(iParam0, &cVar0, 0, 1, 8);
				}
				else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
				{
					func_276(iParam0->f_3, "TAXI_WHAT_THE_HELL", iParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_118(iParam0, 16) > func_133(iParam0->f_411 == 0, 1f, 4f) && !iParam0->f_142) && (((iParam0->f_411 == 0 || iParam0->f_411 == 1) && !func_213()) || (iParam0->f_411 != 0 && iParam0->f_411 != 1)))
	{
		StringCopy(&cVar0, iParam0->f_143, 24);
		switch (func_200(iParam0))
		{
			case 142:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_noDri1", 24);
				}
				func_393(iParam0, &cVar0, 1, 0, 8);
				break;
			case 56:
				StringConCat(&cVar0, "_lvMe2", 24);
				cVar6 = { cVar0 };
				func_396(&(iParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_317(iParam0, 16, 0, 0);
				func_394(4, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 0:
				if (iParam0->f_411 == 9)
				{
					func_348(&(iParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_256(iParam0, 1, 1, 0, 0);
				break;
			case 1:
				func_317(iParam0, 16, 0, 0);
				func_256(iParam0, 4, 0, 0, 0);
				break;
			case 4:
				StringConCat(&cVar0, "_hail1", 24);
				cVar6 = { cVar0 };
				if (!func_22(iParam0->f_44, 128))
				{
					if ((iParam0->f_411 == 0 || iParam0->f_411 == 1) || iParam0->f_411 == 4)
					{
						func_396(&(iParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_393(iParam0, &cVar0, 0, 0, 8);
					}
				}
				func_317(iParam0, 16, 4f, 0);
				iParam0->f_141 = 1;
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 5:
				if (iParam0->f_411 == 7)
				{
					func_280("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_280("TAXI_OBJ_PICKUP", 7500, 1);
				}
				iParam0->f_141 = 1;
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 8:
				StringConCat(&cVar0, "_obj1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				if (iParam0->f_411 != 7 && iParam0->f_411 != 4)
				{
					if (!UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
					{
						iParam0->f_9 = func_132(iParam0->f_17, 1);
					}
					else if (UNK_0x4FA921CB56EDB0F8(iParam0->f_9) == 0)
					{
						UNK_0x7F010F50CE03A8AF(iParam0->f_9, 255);
						UNK_0x2F9282246F89FFD1(iParam0->f_9, iParam0->f_17);
						UNK_0x661342B9651D16E2(iParam0->f_9, true);
					}
				}
				func_256(iParam0, 10, 1, 0, 0);
				iParam0->f_417 = 10;
				break;
			case 9:
				if ((iParam0->f_101 == 1 || iParam0->f_411 == 2) || iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_gret1", 24);
				}
				else
				{
					switch (iParam0->f_102)
					{
						case 1:
							StringConCat(&cVar0, "_gret1", 24);
							break;
						case 0:
							StringConCat(&cVar0, "_gret2", 24);
							break;
						case 2:
							StringConCat(&cVar0, "_gret3", 24);
							break;
						default:
							StringConCat(&cVar0, "_gret4", 24);
							break;
					}
				}
				func_258(&cVar0);
				if (iParam0->f_411 != 9)
				{
					func_393(iParam0, &cVar0, 0, 0, 8);
				}
				else
				{
					func_276(iParam0->f_3, "TAXI_START", iParam0->f_145, 4);
				}
				if (iParam0->f_411 != 7 && iParam0->f_411 != 4)
				{
					if (!UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
					{
						iParam0->f_9 = func_132(iParam0->f_17, 1);
					}
					else if (UNK_0x4FA921CB56EDB0F8(iParam0->f_9) == 0)
					{
						UNK_0x7F010F50CE03A8AF(iParam0->f_9, 255);
						UNK_0x2F9282246F89FFD1(iParam0->f_9, iParam0->f_17);
						UNK_0x661342B9651D16E2(iParam0->f_9, true);
					}
				}
				func_256(iParam0, 10, 1, 0, 0);
				iParam0->f_417 = 10;
				break;
			case 7:
				StringConCat(&cVar0, "_dest2", 24);
				func_389(iParam0, 33554432, cVar0, "", 1, 8);
				func_317(iParam0, 16, 0, 0);
				func_256(iParam0, 10, 1, 0, 0);
				iParam0->f_417 = 10;
				break;
			case 10:
				if (!func_213())
				{
					func_388(iParam0, 0);
					func_67(&(iParam0->f_44), 4);
					func_317(iParam0, 16, 0, 0);
					func_256(iParam0, 13, 0, 0, 0);
				}
				break;
			case 14:
				switch (iParam0->f_102)
				{
					case 0:
						StringConCat(&cVar0, "_bant2", 24);
						break;
					case 1:
						StringConCat(&cVar0, "_bant1", 24);
						break;
					case 2:
						StringConCat(&cVar0, "_bant3", 24);
						break;
					default:
						StringConCat(&cVar0, "_bant1", 24);
						break;
				}
				func_258(&cVar0);
				func_386(cVar0, uParam1);
				func_317(iParam0, 16, 0, 0);
				func_317(iParam0, 11, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 15:
				if (func_118(iParam0, 11) > iParam0->f_36)
				{
					if (iParam0->f_411 == 0)
					{
						StringConCat(&cVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&cVar0, "_bant1", 24);
						func_258(&cVar0);
					}
					func_386(cVar0, uParam1);
					func_67(&(iParam0->f_81), 67108864);
					func_317(iParam0, 16, 0, 0);
					func_317(iParam0, 11, 0, 0);
					func_281(iParam0, 0, 0);
				}
				break;
			case 16:
				if (func_118(iParam0, 11) > iParam0->f_36)
				{
					if (iParam0->f_411 == 0)
					{
						StringConCat(&cVar0, "_ban2", 24);
					}
					else if (iParam0->f_411 == 1)
					{
						StringConCat(&cVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&cVar0, "_bant2", 24);
						if (iParam0->f_411 != 6)
						{
							func_258(&cVar0);
						}
					}
					func_386(cVar0, uParam1);
					func_317(iParam0, 11, 0, 0);
					func_317(iParam0, 16, 0, 0);
					func_281(iParam0, 0, 0);
				}
				break;
			case 17:
				if (iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant3", 24);
					func_258(&cVar0);
				}
				func_386(cVar0, uParam1);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 18:
				if (iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant4", 24);
				}
				func_258(&cVar0);
				func_386(cVar0, uParam1);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 19:
				if (iParam0->f_411 == 0)
				{
					StringConCat(&cVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&cVar0, "_bant5", 24);
				}
				func_258(&cVar0);
				func_386(cVar0, uParam1);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 20:
				StringConCat(&cVar0, "_dest2b", 24);
				func_258(&cVar0);
				func_386(cVar0, uParam1);
				func_317(iParam0, 16, 0, 0);
				func_317(iParam0, 11, 0, 0);
				func_281(iParam0, 0, 0);
				func_67(&(iParam0->f_82), 262144);
				iParam0->f_36 = 20f;
				break;
			case 23:
				StringConCat(&cVar0, "_seePt1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_256(iParam0, 24, 1, 0, 0);
				break;
			case 24:
				iParam0->f_417 = 24;
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 90:
				StringConCat(&cVar0, "_talk", 24);
				StringIntConCat(&cVar0, 1, 24);
				func_258(&cVar0);
				func_393(iParam0, &cVar0, 1, 0, 8);
				break;
			case 89:
				switch (iParam0->f_102)
				{
					case 0:
						StringConCat(&cVar0, "_deal1", 24);
						break;
					case 1:
						StringConCat(&cVar0, "_deal1", 24);
						break;
					default:
						StringConCat(&cVar0, "_deal1", 24);
						break;
				}
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 91:
				StringConCat(&cVar0, "_ig1c", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 27:
				StringConCat(&cVar0, "_bTime", 24);
				if (iParam0->f_411 == 2)
				{
					iVar13 = 8;
				}
				else
				{
					iVar13 = 3;
				}
				iVar12 = 0;
				while (iVar12 < iVar13)
				{
					switch (iParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar15[iVar12] = 0;
									break;
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (iParam0->f_411 == 2)
				{
					func_385(&(iParam0->f_90), 8, &cVar0, &iVar15, 1, 0);
				}
				else
				{
					func_385(&(iParam0->f_90), 3, &cVar0, &iVar15, 1, 0);
				}
				func_386(cVar0, uParam1);
				func_394(0, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_317(iParam0, 16, 0, 0);
				func_317(iParam0, 6, 0f, 1);
				func_281(iParam0, 0, 0);
				break;
			case 26:
				StringConCat(&cVar0, "_gTime", 24);
				iVar12 = 0;
				while (iVar12 < 8)
				{
					switch (iParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar15[iVar12] = 0;
									break;
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (iParam0->f_411 == 2)
				{
					func_385(&(iParam0->f_89), 8, &cVar0, &iVar15, 1, 0);
				}
				else
				{
					func_385(&(iParam0->f_89), 3, &cVar0, &iVar15, 1, 0);
				}
				func_386(cVar0, uParam1);
				func_394(0, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 1);
				func_317(iParam0, 16, 0, 0);
				func_317(iParam0, 6, 0f, 1);
				func_281(iParam0, 0, 0);
				break;
			case 12:
				func_280("TAXI_OBJ_GYB", 3500, 1);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 11:
				if (iParam0->f_410 == 12 || iParam0->f_410 == 18)
				{
					func_280("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (iParam0->f_410 < 21)
				{
					func_280("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_280("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				iParam0->f_417 = 11;
				iParam0->f_141 = 1;
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 28:
				switch (iParam0->f_102)
				{
					case 0:
						StringConCat(&cVar0, "_dest1A", 24);
						break;
					case 1:
						StringConCat(&cVar0, "_dest1B", 24);
						break;
					default:
						StringConCat(&cVar0, "_dest1A", 24);
						break;
				}
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_256(iParam0, 29, 1, 0, 0);
				break;
			case 29:
				if (!func_22(iParam0->f_98, 268435456))
				{
					func_280("TAXI_OBJ_CYI_01", 7500, 1);
					func_67(&(iParam0->f_98), 268435456);
				}
				iParam0->f_417 = 29;
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 30:
				StringConCat(&cVar0, "_rCar1", 24);
				func_258(&cVar0);
				func_386(cVar0, uParam1);
				iParam0->f_124 = { cVar0 };
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 31:
				StringConCat(&cVar0, "_rCar2", 24);
				func_258(&cVar0);
				func_386(cVar0, uParam1);
				iParam0->f_124 = { cVar0 };
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 32:
				StringConCat(&cVar0, "_rCar3", 24);
				func_258(&cVar0);
				func_386(cVar0, uParam1);
				iParam0->f_124 = { cVar0 };
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 33:
				func_280("TAXI_OBJ_CYI_02", 7500, 1);
				iParam0->f_417 = 33;
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 34:
				if (!func_22(iParam0->f_82, 8192))
				{
					if (func_118(iParam0, 11) > iParam0->f_36)
					{
						StringConCat(&cVar0, "_airBr1", 24);
						func_258(&cVar0);
						if (iParam0->f_411 == 5)
						{
							func_386(cVar0, uParam1);
						}
						else
						{
							func_393(iParam0, &cVar0, 0, 0, 8);
						}
						func_67(&(iParam0->f_82), 8192);
						func_317(iParam0, 16, 0, 0);
						func_317(iParam0, 11, 0, 0);
						func_281(iParam0, 0, 0);
					}
				}
				break;
			case 35:
				if (!func_22(iParam0->f_82, 16384))
				{
					StringConCat(&cVar0, "_seeD1", 24);
					func_258(&cVar0);
					func_393(iParam0, &cVar0, 0, 0, 8);
					func_67(&(iParam0->f_82), 16384);
				}
				break;
			case 36:
				if (!func_22(iParam0->f_82, 32768))
				{
					StringConCat(&cVar0, "_seeD2", 24);
					func_258(&cVar0);
					func_393(iParam0, &cVar0, 0, 0, 8);
					func_67(&(iParam0->f_82), 32768);
				}
				break;
			case 37:
				StringConCat(&cVar0, "_done1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_256(iParam0, 46, 1, 0, 0);
				break;
			case 138:
				if (iParam0->f_101 == 1)
				{
					StringConCat(&cVar0, "_ftc1", 24);
				}
				else
				{
					switch (iParam0->f_102)
					{
						case 1:
							StringConCat(&cVar0, "_ftc1", 24);
							break;
						case 0:
							StringConCat(&cVar0, "_ftc2", 24);
							break;
						case 2:
							StringConCat(&cVar0, "_ftc3", 24);
							break;
						default:
							StringConCat(&cVar0, "_ftc3", 24);
							break;
					}
				}
				func_258(&cVar0);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_256(iParam0, 139, 1, 0, 0);
				iParam0->f_417 = 139;
				func_281(iParam0, 0, 0);
				break;
			case 139:
				func_280("TAXI_OBJ_FTC2", 7500, 1);
				iParam0->f_417 = 13;
				func_256(iParam0, 13, 0, 0, 0);
				break;
			case 38:
				StringConCat(&cVar0, "_dOff1", 24);
				cVar6 = { cVar0 };
				iVar14 = UNK_0x09AC81E49EA267F7(false, 120);
				if (!func_22(iParam0->f_82, 268435456))
				{
					if (iVar14 > 80)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else if (iVar14 > 40)
					{
						StringConCat(&cVar6, "_2", 24);
					}
					else
					{
						StringConCat(&cVar6, "_3", 24);
					}
					func_67(&(iParam0->f_82), 268435456);
				}
				else if (iVar14 > 80)
				{
					StringConCat(&cVar6, "_4", 24);
				}
				else if (iVar14 > 40)
				{
					StringConCat(&cVar6, "_5", 24);
				}
				else
				{
					StringConCat(&cVar6, "_6", 24);
				}
				func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 39:
				StringConCat(&cVar0, "_bdOff1", 24);
				cVar6 = { cVar0 };
				iVar14 = UNK_0x09AC81E49EA267F7(false, 100);
				if (!func_22(iParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_67(&(iParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 41:
				StringConCat(&cVar0, "_dr2P", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 42:
				StringConCat(&cVar0, "_dr2N", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 40:
				StringConCat(&cVar0, "_dOff2", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_256(iParam0, 44, 1, 0, 0);
				break;
			case 44:
				func_280("TAXI_OBJ_CC2", 7500, 1);
				iParam0->f_417 = 44;
				func_281(iParam0, 0, 0);
				func_256(iParam0, 97, 1, 0, 0);
				break;
			case 43:
				StringConCat(&cVar0, "_dOff3", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_256(iParam0, 45, 1, 0, 0);
				break;
			case 45:
				if (!func_213())
				{
					func_280("TAXI_OBJ_CC3", 7500, 1);
					iParam0->f_417 = 45;
					func_281(iParam0, 0, 0);
					func_256(iParam0, 98, 1, 0, 0);
				}
				break;
			case 46:
				func_280("TAXI_OBJ_FTC3", 7500, 1);
				iParam0->f_417 = 46;
				func_281(iParam0, 0, 0);
				break;
			case 21:
				if (!func_22(iParam0->f_81, 1))
				{
					func_384(iParam0, 1, cVar0, "_sick1", 8);
					func_20(&(iParam0->f_81), 2);
				}
				else if (!func_22(iParam0->f_81, 2))
				{
					func_384(iParam0, 2, cVar0, "_sick2", 8);
					func_20(&(iParam0->f_81), 1);
				}
				func_394(12, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 22:
				if (!func_22(iParam0->f_82, 2097152))
				{
					StringConCat(&cVar0, "_nopke1", 24);
				}
				else if (!func_22(iParam0->f_82, 4194304))
				{
					StringConCat(&cVar0, "_nopke2", 24);
				}
				func_67(&(iParam0->f_81), 2097152);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_317(iParam0, 16, 0, 0);
				func_394(17, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 1);
				func_281(iParam0, 0, 0);
				break;
			case 61:
				StringConCat(&cVar0, "_Puke1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_394(18, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				break;
			case 63:
				StringConCat(&cVar0, "_PkStp2", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_394(20, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 62:
				StringConCat(&cVar0, "_PkStp1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_394(19, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				break;
			case 64:
				StringConCat(&cVar0, "_PukeR1", 24);
				func_258(&cVar0);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 71:
				if (!func_22(iParam0->f_81, 4))
				{
					func_384(iParam0, 4, cVar0, "_turns1", 8);
				}
				else if (!func_22(iParam0->f_81, 8))
				{
					func_384(iParam0, 8, cVar0, "_turns2", 8);
				}
				else
				{
					func_384(iParam0, 8, cVar0, "_turns3", 8);
					func_20(&(iParam0->f_81), 4);
					func_20(&(iParam0->f_81), 8);
				}
				func_394(13, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 72:
				if (func_383(iParam0))
				{
					func_390(iParam0, cVar0, func_392(iParam0, 72));
				}
				else if (iParam0->f_411 == 9)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
					{
						func_276(iParam0->f_3, "CRASH_GENERIC", iParam0->f_145, 4);
					}
				}
				else if (iParam0->f_411 == 1)
				{
					StringConCat(&cVar0, "_carHt", 24);
					cVar6 = { cVar0 };
					func_396(&(iParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&cVar0, "_carHt1", 24);
					cVar6 = { cVar0 };
					if (iParam0->f_411 == 0)
					{
						func_396(&(iParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_396(&(iParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				}
				func_394(2, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar6, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 73:
				StringConCat(&cVar0, "_genPnHi", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 75:
				if (!func_22(iParam0->f_83, 128))
				{
					StringConCat(&cVar0, "_nMiss1", 24);
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_67(&(iParam0->f_83), 128);
					func_20(&(iParam0->f_83), 256);
					func_317(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 256))
				{
					StringConCat(&cVar0, "_nMiss2", 24);
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_67(&(iParam0->f_83), 256);
					func_20(&(iParam0->f_83), 512);
					func_317(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 512))
				{
					StringConCat(&cVar0, "_nMiss3", 24);
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_67(&(iParam0->f_83), 512);
					func_20(&(iParam0->f_83), 128);
					func_317(iParam0, 16, 0, 0);
				}
				func_281(iParam0, 0, 0);
				break;
			case 76:
				if (iParam0->f_411 == 1 || iParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(iParam0->f_83, 1))
				{
					StringConCat(&cVar0, "_air1", 24);
					if (bVar24)
					{
						func_258(&cVar0);
					}
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_67(&(iParam0->f_83), 1);
					func_20(&(iParam0->f_83), 2);
					func_317(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 2))
				{
					StringConCat(&cVar0, "_air2", 24);
					if (bVar24)
					{
						func_258(&cVar0);
					}
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_67(&(iParam0->f_83), 2);
					if (iParam0->f_411 == 0)
					{
						func_20(&(iParam0->f_83), 4);
					}
					else
					{
						func_20(&(iParam0->f_83), 1);
					}
					func_317(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 4))
				{
					StringConCat(&cVar0, "_air3", 24);
					if (bVar24)
					{
						func_258(&cVar0);
					}
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_67(&(iParam0->f_83), 4);
					func_20(&(iParam0->f_83), 1);
					func_317(iParam0, 16, 0, 0);
				}
				func_394(11, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 79:
				if (iParam0->f_411 == 1 || iParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(iParam0->f_81, 4096))
				{
					func_389(iParam0, 4096, cVar0, "_sideW1", bVar24, 8);
				}
				else if (!func_22(iParam0->f_81, 8192))
				{
					func_389(iParam0, 8192, cVar0, "_sideW2", bVar24, 8);
				}
				func_394(15, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 80:
				if (iParam0->f_411 == 1 || iParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_22(iParam0->f_81, 16384))
				{
					func_389(iParam0, 16384, cVar0, "_opLne1", bVar24, 8);
				}
				else if (!func_22(iParam0->f_81, 32768))
				{
					func_389(iParam0, 32768, cVar0, "_opLne2", bVar24, 8);
				}
				func_394(14, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 83:
				if (iParam0->f_411 == 0)
				{
					if (!func_22(iParam0->f_82, 8))
					{
						func_382(iParam0, 8, cVar0, "_bored1", 8, 0);
					}
					else if (!func_22(iParam0->f_82, 16))
					{
						func_382(iParam0, 16, cVar0, "_bored2", 8, 0);
					}
					else if (!func_22(iParam0->f_82, 32))
					{
						func_382(iParam0, 32, cVar0, "_bored3", 8, 0);
					}
					func_394(9, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
					func_281(iParam0, 0, 0);
				}
				if (iParam0->f_411 == 1)
				{
					StringConCat(&cVar0, "_good1", 24);
					cVar6 = { cVar0 };
					func_396(&(iParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
					func_394(9, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
					func_317(iParam0, 16, 0, 0);
					func_281(iParam0, 0, 0);
				}
				break;
			case 92:
				StringConCat(&cVar0, "_EtoB1", 24);
				cVar6 = { cVar0 };
				func_396(&(iParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_394(9, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 93:
				StringConCat(&cVar0, "_BtoE1", 24);
				cVar6 = { cVar0 };
				func_396(&(iParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_394(12, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 81:
				if (!func_22(iParam0->f_81, 65536))
				{
					func_389(iParam0, 65536, cVar0, "_runLit1", 1, 8);
				}
				else if (!func_22(iParam0->f_81, 131072))
				{
					func_389(iParam0, 131072, cVar0, "_runLit2", 1, 8);
				}
				func_281(iParam0, 0, 0);
				break;
			case 82:
				if (func_383(iParam0))
				{
					func_390(iParam0, cVar0, func_392(iParam0, 82));
				}
				else if (iParam0->f_411 == 9)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
					{
						func_276(iParam0->f_3, "CAR_HIT_PED_DRIVEN", iParam0->f_145, 4);
					}
				}
				else if (!func_22(iParam0->f_83, 8))
				{
					StringConCat(&cVar0, "_hitR1", 24);
					func_258(&cVar0);
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_67(&(iParam0->f_83), 8);
					func_20(&(iParam0->f_83), 16);
					func_317(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 16))
				{
					StringConCat(&cVar0, "_hitR2", 24);
					func_258(&cVar0);
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_67(&(iParam0->f_83), 16);
					func_20(&(iParam0->f_83), 32);
					func_317(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 32))
				{
					StringConCat(&cVar0, "_hitR3", 24);
					func_258(&cVar0);
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_67(&(iParam0->f_83), 32);
					if (iParam0->f_411 == 0)
					{
						func_20(&(iParam0->f_83), 64);
					}
					else
					{
						func_20(&(iParam0->f_83), 8);
					}
					func_317(iParam0, 16, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 64))
				{
					StringConCat(&cVar0, "_hitR4", 24);
					func_258(&cVar0);
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
					func_67(&(iParam0->f_83), 64);
					func_20(&(iParam0->f_83), 8);
					func_317(iParam0, 16, 0, 0);
				}
				func_394(1, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 65:
				if (!func_213())
				{
					if (iParam0->f_115)
					{
						StringConCat(&cVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&cVar0, "_aggro", 24);
					}
					func_393(iParam0, &cVar0, 0, 1, 8);
				}
				else
				{
					func_390(iParam0, cVar0, func_392(iParam0, 65));
					func_281(iParam0, 0, 0);
				}
				iParam0->f_107++;
				break;
			case 66:
				if (!func_213())
				{
					if (iParam0->f_411 == 4)
					{
						StringCopy(&cVar0, "tm6_shoot", 24);
					}
					else if (iParam0->f_115)
					{
						StringConCat(&cVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&cVar0, "_shoot", 24);
					}
					func_393(iParam0, &cVar0, 0, 1, 8);
				}
				else
				{
					func_390(iParam0, cVar0, func_392(iParam0, 66));
					func_281(iParam0, 0, 0);
				}
				iParam0->f_107++;
				break;
			case 13:
				if (iParam0->f_411 == 8)
				{
					if (!iParam0->f_109 && !func_213())
					{
						switch (iParam0->f_414)
						{
							case 3:
								StringConCat(&cVar0, "_warnC1", 24);
								func_393(iParam0, &cVar0, 0, 0, 8);
								break;
							case 6:
								StringConCat(&cVar0, "_warnF1", 24);
								func_393(iParam0, &cVar0, 0, 0, 8);
								break;
							case 1:
								StringConCat(&cVar0, "_far1", 24);
								func_393(iParam0, &cVar0, 0, 0, 8);
								func_394(21, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
								break;
							case 2:
								StringConCat(&cVar0, "_close1", 24);
								func_393(iParam0, &cVar0, 0, 0, 8);
								func_394(22, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
								break;
							case 10:
								StringConCat(&cVar0, "_hit1", 24);
								func_393(iParam0, &cVar0, 0, 0, 8);
								break;
							case 8:
								StringConCat(&cVar0, "_good1", 24);
								cVar6 = { cVar0 };
								func_396(&(iParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
								func_394(23, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar6, 0);
								func_317(iParam0, 16, 0, 0);
								func_281(iParam0, 0, 0);
								break;
							case 9:
								if (!bLocal_64)
								{
									StringConCat(&cVar0, "_sBant1", 24);
									cVar6 = { cVar0 };
									func_393(iParam0, &cVar0, 0, 0, 8);
									func_317(iParam0, 16, 0, 0);
									func_317(iParam0, 11, 0, 0);
									func_281(iParam0, 0, 0);
									if (!bLocal_66)
									{
										bLocal_64 = true;
									}
								}
								else
								{
									if (!bLocal_65)
									{
										StringConCat(&cVar0, "_bant3", 24);
										bLocal_65 = true;
									}
									else
									{
										StringConCat(&cVar0, "_bant2", 24);
										bLocal_66 = true;
									}
									func_258(&cVar0);
									func_393(iParam0, &cVar0, 0, 0, 8);
									func_317(iParam0, 16, 0, 0);
									func_317(iParam0, 11, 0, 0);
									func_281(iParam0, 0, 0);
									bLocal_64 = false;
								}
								break;
							case 7:
								StringConCat(&cVar0, "_done1", 24);
								func_393(iParam0, &cVar0, 0, 0, 8);
								break;
						}
						func_256(iParam0, 143, 0, 0, 0);
					}
				}
				break;
			case 78:
				StringConCat(&cVar0, "_speed1", 24);
				cVar6 = { cVar0 };
				func_396(&(iParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_394(10, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 25:
				if (!func_22(iParam0->f_82, 1))
				{
					func_382(iParam0, 1, cVar0, "_close1", 8, 0);
				}
				else if (!func_22(iParam0->f_82, 2))
				{
					func_382(iParam0, 2, cVar0, "_close2", 8, 0);
				}
				else if (!func_22(iParam0->f_82, 4))
				{
					func_382(iParam0, 4, cVar0, "_close3", 8, 0);
				}
				func_281(iParam0, 0, 0);
				break;
			case 48:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_stop1", 24);
				}
				cVar6 = { cVar0 };
				func_396(&(iParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (iParam0->f_411 != 9)
				{
					func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				}
				else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
				{
					func_276(iParam0->f_3, "TAXI_STOPPED", iParam0->f_145, 4);
				}
				func_317(iParam0, 16, 0, 0);
				func_394(5, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 74:
				if (func_383(iParam0))
				{
					func_390(iParam0, cVar0, func_392(iParam0, 74));
				}
				else if (iParam0->f_411 == 9)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
					{
						func_276(iParam0->f_3, "VEHICLE_FLIPPED", iParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&cVar0, "_roll1", 24);
					func_381(iParam0, cVar0, 8);
				}
				func_394(3, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 70:
				if (!func_22(iParam0->f_83, 1024))
				{
					func_67(&(iParam0->f_83), 1024);
					func_317(iParam0, 16, 0, 0);
					StringConCat(&cVar0, "_swrv1", 24);
					func_258(&cVar0);
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 2048))
				{
					func_67(&(iParam0->f_83), 2048);
					func_317(iParam0, 16, 0, 0);
					StringConCat(&cVar0, "_swrv2", 24);
					func_258(&cVar0);
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
				}
				else if (!func_22(iParam0->f_83, 4096))
				{
					func_67(&(iParam0->f_83), 4096);
					func_317(iParam0, 16, 0, 0);
					StringConCat(&cVar0, "_swrv3", 24);
					func_258(&cVar0);
					func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 8, 0, 0, 0);
				}
				func_281(iParam0, 0, 0);
				break;
			case 69:
				if (!func_22(iParam0->f_82, 1024))
				{
					func_382(iParam0, 1024, cVar0, "_rvrs1", 8, 1);
					func_20(&(iParam0->f_82), 2048);
				}
				else if (!func_22(iParam0->f_82, 2048))
				{
					func_382(iParam0, 2048, cVar0, "_rvrs2", 8, 1);
				}
				func_281(iParam0, 0, 0);
				break;
			case 67:
				StringConCat(&cVar0, "_ofrd1", 24);
				cVar6 = { cVar0 };
				func_396(&(iParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_394(16, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar6, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 68:
				StringConCat(&cVar0, "_ofrdch1", 24);
				func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 9, 0, 0, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 49:
				StringConCat(&cVar0, "_losPol1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_256(iParam0, 52, 1, 0, 0);
				break;
			case 50:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_lsPo1", 24);
				}
				if (iParam0->f_411 != 9)
				{
					func_393(iParam0, &cVar0, 0, 0, 8);
				}
				else if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
				{
					func_276(iParam0->f_3, "POLICE_PURSUIT_DRIVEN", iParam0->f_145, 4);
				}
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 51:
				if (func_383(iParam0))
				{
					if (iParam0->f_411 == 2)
					{
						StringConCat(&cVar0, "_copBa1", 24);
						cVar6 = { cVar0 };
						cVar6 = { cVar0 };
						func_393(iParam0, &cVar0, 0, 0, 8);
						func_256(iParam0, 52, 1, 0, 0);
						func_317(iParam0, 16, 0, 0);
					}
					else
					{
						if (iParam0->f_411 == 5 && iParam0->f_410 > 9)
						{
							StringConCat(&cVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&cVar0, "_copBa1", 24);
						}
						cVar6 = { cVar0 };
						func_393(iParam0, &cVar0, 0, 0, 8);
						func_317(iParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&cVar0, "_copBa1", 24);
					cVar6 = { cVar0 };
					func_396(&(iParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
					func_317(iParam0, 16, 0, 0);
					func_281(iParam0, 0, 0);
				}
				break;
			case 53:
				StringConCat(&cVar0, "_evdeP1", 24);
				func_394(8, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_317(iParam0, 10, 0f, 1);
				break;
			case 52:
				if (UNK_0x179932739160BA96(UNK_0xA30EC016B12C03E4()) >= 1)
				{
					func_280("TAXI_OBJ_POL", 7500, 1);
					iParam0->f_417 = 52;
				}
				func_281(iParam0, 0, 0);
				break;
			case 54:
				StringConCat(&cVar0, "_cpFz1", 24);
				func_258(&cVar0);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 84:
				if (!func_22(iParam0->f_81, 262144))
				{
					func_389(iParam0, 262144, cVar0, "_rdCh1", 1, 8);
				}
				else if (!func_22(iParam0->f_81, 1048576))
				{
					if (iParam0->f_411 == 0 || iParam0->f_411 == 1)
					{
						func_389(iParam0, 1048576, cVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_389(iParam0, 1048576, cVar0, "_rdCh2", 0, 8);
					}
				}
				func_394(7, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 85:
				if (!func_22(iParam0->f_82, 67108864))
				{
					if (iParam0->f_418.f_6)
					{
						func_380(iParam0, 67108864, cVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_22(iParam0->f_82, 134217728))
				{
					func_380(iParam0, 134217728, cVar0, "_rdFv1", 0, 7);
				}
				func_394(6, &(iParam0->f_57), &(iParam0->f_55), &(iParam0->f_124), cVar0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 86:
				StringConCat(&cVar0, "_rdneu1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 87:
				StringConCat(&cVar0, "_rdtip1", 24);
				cVar6 = { cVar0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, iParam0->f_418.f_3, 24);
				func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 100:
				func_280("TAXI_OBJ_GYB_2", 7500, 1);
				iParam0->f_417 = 100;
				func_281(iParam0, 0, 0);
				break;
			case 47:
				if (iParam0->f_411 == 1)
				{
					StringConCat(&cVar0, "_horn", 24);
					func_393(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 101:
				StringConCat(&cVar0, "_thank1", 24);
				if ((iParam0->f_411 == 1 || iParam0->f_411 == 5) || iParam0->f_411 == 0)
				{
					func_258(&cVar0);
				}
				func_67(&(iParam0->f_81), 2097152);
				if (iParam0->f_411 != 9)
				{
					func_393(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 102:
				StringConCat(&cVar0, "_thank2", 24);
				if ((iParam0->f_411 == 1 || iParam0->f_411 == 5) || iParam0->f_411 == 0)
				{
					func_258(&cVar0);
				}
				func_67(&(iParam0->f_81), 2097152);
				if (iParam0->f_411 != 9)
				{
					func_393(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 103:
				if (iParam0->f_411 == 4)
				{
					StringConCat(&cVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&cVar0, "_thank3", 24);
				}
				if ((iParam0->f_411 == 1 || iParam0->f_411 == 5) || iParam0->f_411 == 0)
				{
					func_258(&cVar0);
				}
				func_67(&(iParam0->f_81), 2097152);
				if (iParam0->f_411 != 9)
				{
					func_393(iParam0, &cVar0, 0, 0, 8);
				}
				break;
			case 97:
				if (!func_22(iParam0->f_82, 65536))
				{
					if (func_118(iParam0, 11) > iParam0->f_36)
					{
						switch (iParam0->f_102)
						{
							case 0:
								StringConCat(&cVar0, "_ccba2", 24);
								break;
							case 1:
								StringConCat(&cVar0, "_ccba1", 24);
								break;
							default:
								StringConCat(&cVar0, "_ccba1", 24);
								break;
						}
						func_258(&cVar0);
						func_386(cVar0, uParam1);
						func_67(&(iParam0->f_82), 65536);
						func_317(iParam0, 16, 0, 0);
						func_317(iParam0, 11, 0, 0);
						func_281(iParam0, 0, 0);
					}
				}
				break;
			case 98:
				if (!func_22(iParam0->f_82, 131072))
				{
					if (func_118(iParam0, 11) > iParam0->f_36)
					{
						StringConCat(&cVar0, "_ccbb1", 24);
						func_258(&cVar0);
						func_386(cVar0, uParam1);
						func_67(&(iParam0->f_82), 131072);
						func_317(iParam0, 16, 0, 0);
						func_317(iParam0, 11, 0, 0);
						func_281(iParam0, 0, 0);
					}
				}
				break;
			case 99:
				if (!func_22(iParam0->f_82, 8388608))
				{
					StringConCat(&cVar0, "_close1", 24);
					func_67(&(iParam0->f_82), 8388608);
				}
				else if (!func_22(iParam0->f_82, 16777216))
				{
					StringConCat(&cVar0, "_close2", 24);
					func_67(&(iParam0->f_82), 16777216);
				}
				else if (!func_22(iParam0->f_82, 33554432))
				{
					StringConCat(&cVar0, "_close3", 24);
					func_67(&(iParam0->f_82), 33554432);
				}
				func_386(cVar0, uParam1);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 58:
				if (iParam0->f_411 == 6)
				{
					StringConCat(&cVar0, "_kill1", 24);
					cVar6 = { cVar0 };
					func_396(&(iParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_258(&cVar0);
					func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				}
				else if (iParam0->f_411 == 8)
				{
					StringConCat(&cVar0, "_cheat1", 24);
					func_393(iParam0, &cVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&cVar0, "_kill1", 24);
					func_393(iParam0, &cVar0, 0, 0, 8);
				}
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 95:
				StringConCat(&cVar0, "_wndw2", 24);
				func_386(cVar0, uParam1);
				func_317(iParam0, 16, 0, 0);
				func_317(iParam0, 11, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 94:
				StringConCat(&cVar0, "_wndw0", 24);
				func_386(cVar0, uParam1);
				func_317(iParam0, 16, 0, 0);
				func_317(iParam0, 11, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 96:
				StringConCat(&cVar0, "_wndw1", 24);
				func_386(cVar0, uParam1);
				func_317(iParam0, 16, 0, 0);
				func_317(iParam0, 11, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 113:
				StringConCat(&cVar0, "_csite1", 24);
				func_258(&cVar0);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 119:
				StringConCat(&cVar0, "_fair1", 24);
				func_258(&cVar0);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 115:
				StringConCat(&cVar0, "_AlCk1", 24);
				cVar6 = { cVar0 };
				func_396(&(iParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 116:
				StringConCat(&cVar0, "_eggG1", 24);
				cVar6 = { cVar0 };
				func_396(&(iParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_395(&(iParam0->f_244), iParam0->f_144, &cVar0, &cVar6, 8, 0, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 114:
				StringConCat(&cVar0, "_goons1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 59:
				StringConCat(&cVar0, "_oRun1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 117:
				StringConCat(&cVar0, "_gotG1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 118:
				StringConCat(&cVar0, "_getA1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 120:
				StringConCat(&cVar0, "_gnawy1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 121:
				StringConCat(&cVar0, "_grl1", 24);
				func_258(&cVar0);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 122:
				StringConCat(&cVar0, "_figt1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 123:
				StringConCat(&cVar0, "_gEgg1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 124:
				StringConCat(&cVar0, "_gEgg3", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 125:
				StringConCat(&cVar0, "_gEgg2", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 126:
				StringConCat(&cVar0, "_gLeav1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 127:
				StringConCat(&cVar0, "_aKill1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 129:
				StringConCat(&cVar0, "_gHelp1", 24);
				func_258(&cVar0);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 130:
				StringConCat(&cVar0, "_gDest1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_256(iParam0, 11, 1, 0, 0);
				break;
			case 128:
				StringConCat(&cVar0, "_gKO1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 132:
				StringConCat(&cVar0, "_gThank1", 24);
				func_67(&(iParam0->f_81), 2097152);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 131:
				StringConCat(&cVar0, "_gDriv1", 24);
				func_258(&cVar0);
				func_386(cVar0, uParam1);
				func_67(&(iParam0->f_81), 67108864);
				func_317(iParam0, 16, 0, 0);
				func_317(iParam0, 11, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 60:
				StringConCat(&cVar0, "_cash1", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 105:
				if (!func_22(iParam0->f_81, 33554432) && iParam0->f_411 != 9)
				{
					func_389(iParam0, 33554432, cVar0, "_noPay1", 1, 8);
				}
				else if (iParam0->f_411 == 9)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
					{
						func_276(iParam0->f_3, "TAXI_NO_PAY", iParam0->f_145, 4);
					}
				}
				func_256(iParam0, 108, 1, 0, 0);
				break;
			case 106:
				StringConCat(&cVar0, "_foot", 24);
				func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 9, 0, 0, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 107:
				if (!func_22(iParam0->f_81, 268435456))
				{
					func_389(iParam0, 268435456, cVar0, "_kPay1", 1, 8);
				}
				func_256(iParam0, 52, 1, 0, 0);
				break;
			case 108:
				func_280("TAXI_OBJ_RUNOUT", 7500, 1);
				iParam0->f_417 = 108;
				func_281(iParam0, 0, 0);
				break;
			case 109:
				if (!func_22(iParam0->f_81, 4194304))
				{
					if (iParam0->f_411 == 2 || iParam0->f_411 == 6)
					{
						func_389(iParam0, 4194304, cVar0, "_mPay1", 0, 8);
					}
					else if (iParam0->f_411 == 9)
					{
						if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
						{
							func_276(iParam0->f_3, "APOLOGY_NO_TROUBLE", iParam0->f_145, 4);
						}
					}
					else
					{
						func_389(iParam0, 4194304, cVar0, "_mPay1", 1, 8);
					}
				}
				func_256(iParam0, 111, 1, 0, 0);
				break;
			case 111:
				func_280("TAXI_OBJ_GETRUN", 7500, 1);
				iParam0->f_417 = 111;
				func_281(iParam0, 0, 0);
				break;
			case 110:
				StringConCat(&cVar0, "_runoff", 24);
				func_348(&(iParam0->f_244), iParam0->f_144, &cVar0, 9, 0, 0, 0);
				func_317(iParam0, 16, 0, 0);
				func_281(iParam0, 0, 0);
				break;
			case 141:
				if (!func_22(iParam0->f_81, 16777216))
				{
					func_389(iParam0, 16777216, cVar0, "_ret1", 1, 8);
				}
				func_281(iParam0, 0, 0);
				break;
			case 88:
				func_280("TAXI_TIEFLEE", 7500, 1);
				func_281(iParam0, 0, 0);
				break;
			case 57:
				if (!func_22(iParam0->f_98, 536870912))
				{
					func_280("TAXI_OBJ_CYI_1B", 7500, 1);
					func_67(&(iParam0->f_98), 536870912);
				}
				iParam0->f_417 = 57;
				func_281(iParam0, 0, 0);
				break;
			case 104:
				StringConCat(&cVar0, "_joke1", 24);
				func_258(&cVar0);
				func_393(iParam0, &cVar0, 0, 0, 8);
				break;
			case 136:
				if (iParam0->f_115)
				{
					StringConCat(&cVar0, "_wronglz", 24);
				}
				else if (iParam0->f_116)
				{
					StringConCat(&cVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&cVar0, "_wrong", 24);
				}
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_281(iParam0, 0, 0);
				break;
			case 140:
				StringConCat(&cVar0, "_shout", 24);
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_281(iParam0, 0, 0);
				break;
			case 135:
				if (iParam0->f_411 == 4)
				{
					StringCopy(&cVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&cVar0, "_jack", 24);
				}
				func_393(iParam0, &cVar0, 0, 0, 8);
				func_281(iParam0, 0, 0);
				break;
			case 133:
				StringConCat(&cVar0, "_getCar", 24);
				func_393(iParam0, &cVar0, 1, 0, 8);
				func_256(iParam0, 134, 1, 0, 0);
				break;
			case 134:
				func_280("TX_VIP", 7500, 0);
				iParam0->f_417 = 134;
				func_256(iParam0, 0, 0, 0, 0);
				func_281(iParam0, 0, 0);
				break;
		}
	}
}

void func_380(int iParam0, int iParam1, char[12] cParam2, int iParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_67(&(iParam0->f_82), iParam1);
	func_317(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if (bParam9)
	{
		func_258(&cParam2);
	}
	func_348(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam10, 0, 0, 0);
}

void func_381(int iParam0, char[24] cParam1, int iParam7)
{
	vector3 vVar0[24];

	cVar0 = { cParam1 };
	if (!func_22(iParam0->f_82, 64))
	{
		func_67(&(iParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_22(iParam0->f_82, 128))
	{
		func_67(&(iParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, UNK_0x09AC81E49EA267F7(true, 3), 24);
	}
	func_395(&(iParam0->f_244), iParam0->f_144, &cParam1, &cVar0, iParam7, 0, 0);
	func_317(iParam0, 16, 0, 0);
}

void func_382(int iParam0, int iParam1, char[12] cParam2, int iParam5, var uParam6, var uParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_67(&(iParam0->f_82), iParam1);
	func_317(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if ((((iParam0->f_411 == 1 || iParam0->f_411 == 0) || iParam0->f_411 == 5) || iParam0->f_411 == 8) || iParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_258(&cParam2);
		}
	}
	func_348(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam9, 0, 0, 0);
}

bool func_383(int iParam0)
{
	if ((((((iParam0->f_411 == 2 || iParam0->f_411 == 3) || iParam0->f_411 == 4) || iParam0->f_411 == 5) || iParam0->f_411 == 6) || iParam0->f_411 == 7) || iParam0->f_411 == 8)
	{
		return true;
	}
	return false;
}

void func_384(int iParam0, int iParam1, char[12] cParam2, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9)
{
	func_67(&(iParam0->f_81), iParam1);
	func_317(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	func_348(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam9, 0, 0, 0);
}

void func_385(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_297(*uParam0, iVar1))
		{
			func_68(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_258(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_386(char[24] cParam0, var uParam6)
{
	int iVar0;

	iVar0 = func_387(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_67(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_387(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (UNK_0xEA6BC48857E0AC4C(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_388(int iParam0, bool bParam1)
{
	switch (iParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_280("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_280("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		case 2:
			if (bParam1)
			{
				func_280("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_280("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_280("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_280("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		case 6:
			if (bParam1)
			{
				func_280("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		case 7:
			if (bParam1)
			{
				func_280("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_280("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		case 8:
			if (bParam1)
			{
				func_280("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_280("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		case 9:
			if (bParam1)
			{
				func_280("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_280("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		iParam0->f_139 = 1;
	}
}

void func_389(int iParam0, int iParam1, char[12] cParam2, int iParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_67(&(iParam0->f_81), iParam1);
	func_317(iParam0, 16, 0, 0);
	StringConCat(&cParam2, sParam8, 24);
	if (bParam9)
	{
		func_258(&cParam2);
	}
	func_348(&(iParam0->f_244), iParam0->f_144, &cParam2, iParam10, 0, 0, 0);
}

void func_390(int iParam0, char[12] cParam1, var uParam4, var uParam5, var uParam6, char* sParam7)
{
	func_317(iParam0, 16, 0, 0);
	func_317(iParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!UNK_0xEB6A8945D1AC98A1(iParam0->f_3))
	{
		UNK_0x9A8EDAF1C0D299FF(iParam0->f_3, &cParam1, func_391(iParam0));
	}
}

char* func_391(int iParam0)
{
	char* sVar0;

	switch (iParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		case 1:
			sVar0 = "TaxiOtis";
			break;
		case 2:
			sVar0 = "TaxiKwak";
			break;
		case 3:
			sVar0 = "TaxiWalter";
			break;
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		case 7:
			sVar0 = "TaxiDarren";
			break;
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_392(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (iParam0->f_411)
			{
				case 0:
					return "_ACRH";
				case 1:
					return "_ACRH";
				case 2:
					return "_ACAA";
				case 3:
					return "_ACRH";
				case 4:
					return "_AEAA";
				case 5:
					return "_DKAA";
				case 6:
					return "_ACAA";
				case 7:
					return "_ACAA";
				case 8:
					return "_ACRH";
				default:
					break;
			}
			return "_ACRH";
		case 82:
			switch (iParam0->f_411)
			{
				case 0:
					return "_AHIT";
				case 1:
					return "_AHIT";
				case 2:
					return "_AEAA";
				case 3:
					return "_ADAA";
				case 4:
					return "_AFAA";
				case 5:
					return "_AFAA";
				case 6:
					return "_AEAA";
				case 7:
					return "_AHAA";
				case 8:
					return "_AEAA";
				default:
					break;
			}
			return "_AHIT";
		case 74:
			switch (iParam0->f_411)
			{
				case 0:
					return "_AROL";
				case 1:
					return "_AROL";
				case 2:
					return "_AHAA";
				case 3:
					return "_AROL";
				case 4:
					return "_AGAA";
				case 5:
					return "_AROL";
				case 6:
					return "_AROL";
				case 7:
					return "_AROL";
				case 8:
					return "_AROL";
				default:
					break;
			}
			return "_AROL";
		case 65:
			switch (iParam0->f_411)
			{
				case 0:
					return "_ABAA";
				case 1:
					return "_FUAA";
				case 2:
					return "_AFAA";
				case 3:
					return "_DBAA";
				case 4:
					return "_DLAA";
				case 5:
					return "_DKAA";
				case 6:
					if (iParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				case 7:
					return "_DBAA";
				case 8:
					return "_EFAA";
				default:
					return "_AROL";
			}
			break;
		case 66:
			switch (iParam0->f_411)
			{
				case 0:
					return "_AEAA";
				case 1:
					return "_ACAA";
				case 2:
					return "_AJAA";
				case 3:
					return "_AHAA";
				case 4:
					return "_AHAA";
				case 5:
					return "_AIAA";
				case 6:
					if (iParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				case 7:
					return "_AUAA";
				case 8:
					return "_AHAA";
				default:
					return "_AROL";
			}
			break;
		case 2:
			switch (iParam0->f_411)
			{
				case 0:
					return "_AAAA";
				case 1:
					return "_AAAA";
				case 2:
					return "_ADAA";
				case 3:
					return "_ABAA";
				case 4:
					return "_AAAA";
				case 5:
					return "_ABAA";
				case 6:
					if (iParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				case 7:
					return "_BUAA";
				case 8:
					return "_ADAA";
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_393(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_317(iParam0, 16, 0, 0);
	if (bParam3)
	{
		func_317(iParam0, 17, 0f, 1);
	}
	func_281(iParam0, iParam2, 0);
	return func_348(&(iParam0->f_244), iParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_394(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_22(*uParam2, 2))
		{
			if (!bParam10)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_22(*uParam2, 1073741824 /* Float: 2f */))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_22(*uParam2, 4))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_22(*uParam2, 512))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_22(*uParam2, 16))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_22(*uParam2, 64))
		{
			if (!func_22(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_20(uParam2, 4096);
			}
		}
		else if (func_22(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_22(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_22(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_22(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_22(*uParam2, 8192))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_22(*uParam2, 16384))
		{
			if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_22(*uParam2, 32768))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_22(*uParam2, 65536))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_22(*uParam2, 131072))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_22(*uParam2, 262144))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_22(*uParam2, 524288))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_22(*uParam2, 1048576))
		{
			if (func_22(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_22(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_22(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_22(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_22(*uParam2, 67108864))
		{
			if (func_22(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_22(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_22(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_22(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_22(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_395(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_360(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_349(sParam2, iParam4, 0);
}

void func_396(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_297(*uParam0, iVar1))
		{
			func_68(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_258(sParam2);
				}
				else
				{
					func_258(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

bool func_397(bool bParam0)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		if (func_231(bParam0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_398(int iParam0)
{
	if (func_213())
	{
		return true;
	}
	if (func_191(iParam0, 17))
	{
		return true;
	}
	if (func_191(iParam0, 14))
	{
		return true;
	}
	if (func_229(iParam0))
	{
		return true;
	}
	return false;
}

bool func_399(int iParam0, var uParam1)
{
	return ((*uParam1 == -1 && iParam0->f_412 == 0) && !func_191(iParam0, 9));
}

void func_400(int iParam0)
{
	if (func_191(iParam0, 17))
	{
		if (!func_191(iParam0, 14))
		{
			if (!func_229(iParam0))
			{
				if (!func_213())
				{
					func_210(iParam0, 17, 1);
				}
			}
		}
	}
}

bool func_401(var uParam0)
{
	return uParam0->f_117;
}

void func_402(var uParam0, var uParam1, bool bParam2)
{
	if (!func_22(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!UNK_0xEA6BC48857E0AC4C(&(uParam0->f_124)) && func_213())
				{
					*uParam1++;
				}
				break;
			case 1:
				if (!func_213())
				{
					StringCopy(&(uParam0->f_124), func_150(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
		}
	}
}

void func_403(int iParam0)
{
	int iVar0;

	if (iParam0->f_410 >= 5)
	{
		if (UNK_0xC844350D5D58C99A(iParam0->f_4))
		{
			if (Local_343 > 0 && !func_297(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343 - 1))
				{
					if (func_297(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(iParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_297(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_68(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = UNK_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							func_21(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_297(Local_343.f_1[iVar0 /*4*/], 4) && !func_297(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(iParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_68(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_361(iParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_404(int iParam0, var uParam1)
{
	var uVar0;

	if (!func_191(iParam0, 27))
	{
		func_206(iParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!iParam0->f_109 && func_118(iParam0, 27) > 5f)
	{
		if (func_431(iParam0->f_3, iParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_317(iParam0, 27, 0, 0);
			func_317(iParam0, 10, 0, 0);
			func_429(iParam0, &uVar0, uParam1);
		}
		func_426(iParam0);
	}
	if (iParam0->f_410 >= 3 && iParam0->f_410 <= 5)
	{
		func_405(iParam0);
	}
	if ((((!UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()) && (UNK_0x9F4FE516EAACCFC5(*iParam0) && !UNK_0xFBB4F23D534EB790(*iParam0))) && (UNK_0x9F4FE516EAACCFC5(iParam0->f_1) && !UNK_0xFBB4F23D534EB790(iParam0->f_1))) && !UNK_0xD17F06053799A7CA()) && !func_213())
	{
		if (func_118(iParam0, 26) > 10f)
		{
			func_210(iParam0, 26, 0);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
		}
	}
	else if (func_191(iParam0, 26))
	{
		func_210(iParam0, 26, 0);
	}
	return 0;
}

void func_405(int iParam0)
{
	if (!func_425(iParam0->f_429))
	{
		iParam0->f_429 = func_424();
		func_415(&(iParam0->f_429), 0, 0, UNK_0x09AC81E49EA267F7(4, 7), 0, 0, 0);
	}
	else if (func_406(iParam0->f_429))
	{
		func_361(iParam0, "Player took too long to make pickup", 9);
	}
}

int func_406(bool bParam0)
{
	return func_407(func_424(), bParam0);
}

int func_407(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_425(bParam1) || !func_425(bParam0))
	{
		return 1;
	}
	iVar0 = func_413(bParam0);
	iVar1 = func_413(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_412(bParam0);
	iVar1 = func_412(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_411(bParam0);
	iVar1 = func_411(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_410(bParam0);
	iVar1 = func_410(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_409(bParam0);
	iVar1 = func_409(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_408(bParam0);
	iVar1 = func_408(bParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_408(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_409(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_410(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_411(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

bool func_412(bool bParam0)
{
	return (bParam0 && 15);
}

int func_413(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_414(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_414(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_415(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_413(*uParam0);
	bVar1 = func_412(*uParam0);
	iVar2 = func_411(*uParam0);
	iVar3 = func_410(*uParam0);
	iVar4 = func_409(*uParam0);
	iVar5 = func_408(*uParam0);
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
	iVar6 = func_423(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_423(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_416(uParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

void func_416(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_422(uParam0, iParam1);
	func_421(uParam0, iParam2);
	func_420(uParam0, iParam3);
	func_419(uParam0, bParam5);
	func_418(uParam0, iParam4);
	func_417(uParam0, iParam6);
}

void func_417(var uParam0, int iParam1)
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

void func_418(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_412(*uParam0);
	iVar1 = func_413(*uParam0);
	if (iParam1 < 1 || iParam1 > func_423(bVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_419(var uParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || bParam1);
}

void func_420(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_421(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_422(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_423(bool bParam0, int iParam1)
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

bool func_424()
{
	var uVar0;

	func_422(&uVar0, UNK_0x4460E481B9E33ADA());
	func_421(&uVar0, UNK_0x8D199E381D262EEF());
	func_420(&uVar0, UNK_0xD8A54335F18763BA());
	func_418(&uVar0, UNK_0x972A296334C9D57B());
	func_419(&uVar0, UNK_0x118229AD063C3C1D());
	func_417(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

bool func_425(bool bParam0)
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
	iVar0 = func_408(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_409(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_410(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_413(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_412(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_411(bParam0);
	if (iVar5 < 1 || iVar5 > func_423(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_426(int iParam0)
{
	var uVar0;

	if (iParam0->f_410 < 7 && !iParam0->f_138)
	{
		if (((iParam0->f_411 == 9 && func_428()) && !func_209(iParam0)) || ((iParam0->f_411 != 9 && func_285(iParam0, 1)) && !func_209(iParam0)))
		{
			uVar0 = func_427(iParam0->f_4);
			UNK_0x82692E8F6A0D7A22(&uVar0);
			iParam0->f_4 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			UNK_0x73270B3C9CC833FD(iParam0->f_4, true, 0);
			func_244(iParam0);
			func_236(iParam0, 0);
		}
	}
}

var func_427(var uParam0)
{
	return uParam0;
}

bool func_428()
{
	bool bVar0;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0xA30B8362589C124A(bVar0, -1, 0) == UNK_0x16F2683693E537C9())
				{
					if (UNK_0x4906F8A34E9F4814(bVar0, func_19()))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_429(int iParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_430(iParam0, 0, 1))
			{
				func_361(iParam0, "Aggro Aiming", 5);
			}
			break;
		case 4:
			if (func_430(iParam0, 0, 4))
			{
				func_361(iParam0, "Aggro Shot Near", 8);
			}
			break;
		case 8:
			if (func_430(iParam0, 0, 8))
			{
				func_361(iParam0, "Aggro Heard Shot", 8);
			}
			break;
		case 16:
			if (func_430(iParam0, 1, 1))
			{
				func_361(iParam0, "Aggro Attacked", 14);
			}
			break;
		case 32:
			if (func_430(iParam0, 0, 1))
			{
				func_361(iParam0, "Aggro Minor Attacked", 8);
			}
			break;
		case 2:
			if (!func_22(*uParam2, 2) && func_225(iParam0))
			{
				func_361(iParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

bool func_430(int iParam0, bool bParam1, int iParam2)
{
	if (((iParam0->f_107 >= 2 && iParam0->f_410 < 29) || iParam0->f_410 <= 5) || (bParam1 && !iParam0->f_114))
	{
		return true;
	}
	else if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
	{
		if (!UNK_0x03068588A1FCED1A(iParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_256(iParam0, 66, 1, 0, 1);
			}
			else
			{
				func_256(iParam0, 65, 1, 0, 1);
			}
		}
	}
	return false;
}

bool func_431(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x16F2683693E537C9();
	if (!UNK_0x437347B10A200C4B(bVar0, 0) && !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (!func_22(*uParam2, 1))
		{
			if (func_437(bParam0, uParam2))
			{
				*uParam3 = 1;
				return true;
			}
		}
		if (!func_22(*uParam2, 2))
		{
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
			{
				*uParam3 = 2;
				return true;
			}
		}
		if (!func_22(*uParam2, 4))
		{
			if (func_435(bVar0, bParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return true;
			}
		}
		if (!func_22(*uParam2, 8))
		{
			if (func_434(bVar0, bParam0, uParam2))
			{
				*uParam3 = 8;
				return true;
			}
		}
		bVar1 = !func_22(*uParam2, 128);
		if (bParam4)
		{
			if (func_432(bParam0, bParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return true;
			}
		}
		else if (!func_22(*uParam2, 16))
		{
			if (func_432(bParam0, bParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return true;
			}
		}
	}
	else if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (bParam7 && UNK_0xB87D13D0C064E9D1(bParam0, bVar0, 1))
		{
			*uParam3 = 16;
			return true;
		}
	}
	return false;
}

bool func_432(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;

	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = UNK_0x7F6DC62EA9922664(bParam0);
			bLocal_79 = true;
		}
		iLocal_81 = UNK_0x7F6DC62EA9922664(bParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		bVar0 = UNK_0x728870EB733D12A1();
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, bVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return true;
				}
			}
		}
		if (bLocal_79)
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return true;
				}
			}
		}
	}
	else if (UNK_0xB87D13D0C064E9D1(bParam0, UNK_0x16F2683693E537C9(), 1))
	{
		return true;
	}
	if (!bParam3)
	{
		bVar1 = UNK_0x728870EB733D12A1();
		if (!UNK_0x437347B10A200C4B(bVar1, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bParam0, bVar1, 1))
			{
				return true;
			}
		}
	}
	if (bParam4)
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (UNK_0x36646919F20EAFFC(bParam0))
			{
				if (UNK_0x710D117BA581D7D2(bParam0) == UNK_0x16F2683693E537C9())
				{
					return true;
				}
			}
		}
	}
	if (bParam5)
	{
		if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x5A91F08DF773C39D(bParam0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (UNK_0x1A069ED4E9BDE50A(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
			}
		}
	}
	if (UNK_0xE9B814896D415EDD(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xC021B60D52071374(bParam0))
		{
			return true;
		}
	}
	if (func_433(UNK_0x16F2683693E537C9(), bParam0))
	{
		return true;
	}
	if (bParam2)
	{
		if (UNK_0x869EFD0BC0868856(bParam0) && func_235(bParam0, 1) < 1.5f)
		{
			return true;
		}
		else if (UNK_0x405E212DDE472467(bParam0, 0))
		{
			if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), UNK_0x6937EA2286828455(bParam0, 0)))
			{
				return true;
			}
		}
		else if (UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), bParam0))
		{
			return true;
		}
		if (!UNK_0x437347B10A200C4B(bParam1, 0))
		{
			if (UNK_0xB87D13D0C064E9D1(bParam1, UNK_0x16F2683693E537C9(), 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_433(bool bParam0, bool bParam1)
{
	int iVar0;

	UNK_0xCAE036C45E7FC720(bParam0, &iVar0, 1);
	if (iVar0 == joaat("WEAPON_PETROLCAN"))
	{
		if (UNK_0x168558745A6AC21E(bParam0))
		{
			if (SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(bParam1, true)) < 2.5f)
			{
				if (UNK_0x7069CC4DE1EA3FAA(bParam0, bParam1, 180f))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_434(bool bParam0, bool bParam1, var uParam2)
{
	if (UNK_0x03A10A5707B2BB1F(bParam0, 4))
	{
		if (UNK_0x168558745A6AC21E(bParam0) && !UNK_0x52AE17073D025311(bParam0))
		{
			if (UNK_0x5A91F08DF773C39D(bParam1, UNK_0x68F4C0EC296D3901(bParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_435(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	bool bVar3;

	bVar3 = false;
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	if (UNK_0xD3DCEC81D13AAFB1(vVar0, 4f, true))
	{
		return true;
	}
	if (UNK_0xD15F544473A95FE8(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return true;
	}
	if (UNK_0x03A10A5707B2BB1F(bParam0, 2))
	{
		if (UNK_0x168558745A6AC21E(bParam0))
		{
			if (UNK_0x5A91F08DF773C39D(bParam1, UNK_0x68F4C0EC296D3901(bParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (UNK_0x7069CC4DE1EA3FAA(UNK_0x940C1429253D3B1B(bParam1), bParam0, 120f) && UNK_0xF649DD3BF44195C7(bParam1, bParam0, 17))
				{
					return true;
				}
			}
		}
		else
		{
			if (UNK_0x405E212DDE472467(UNK_0x940C1429253D3B1B(bParam1), 0))
			{
				bVar3 = UNK_0x6937EA2286828455(UNK_0x940C1429253D3B1B(bParam1), 0);
			}
			if (UNK_0xFB275CE013F3A38C(bParam0) || func_436(bVar3))
			{
				if (UNK_0x5A91F08DF773C39D(bParam1, UNK_0x68F4C0EC296D3901(bParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (UNK_0x7069CC4DE1EA3FAA(UNK_0x940C1429253D3B1B(bParam1), bParam0, 120f) && UNK_0xF649DD3BF44195C7(bParam1, bParam0, 17))
					{
						return true;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (UNK_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return true;
		}
	}
	return false;
}

bool func_436(bool bParam0)
{
	int iVar0;
	bool bVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (UNK_0xA30B8362589C124A(bParam0, -1, 0) != 0)
			{
				if (UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar0, 1))
				{
					if (iVar0 == joaat("WEAPON_STICKYBOMB"))
					{
						if (func_51(UNK_0x16F2683693E537C9(), bParam0, 1) < 40f)
						{
							if (UNK_0x38AF5DD0BDDE9545(UNK_0xD803B885F5E47A62(), &bVar1))
							{
								if ((UNK_0xE2F1E99DD161A861(bVar1) && UNK_0x96A5FE5834B81CE7(bVar1) == bParam0) || (UNK_0xEC560E589DF8370E(bVar1) && UNK_0x940C1429253D3B1B(bVar1) == UNK_0xA30B8362589C124A(bParam0, -1, 0)))
								{
									if ((UNK_0xE3614539F8B5C807(UNK_0x16F2683693E537C9()) && UNK_0x06F8112AA79C53D9(0, 24)) || (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0x06F8112AA79C53D9(0, 69)))
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

bool func_437(bool bParam0, var uParam1)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 6))
		{
			if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0))
			{
				if (UNK_0x7069CC4DE1EA3FAA(bParam0, UNK_0x16F2683693E537C9(), 90f))
				{
					if (func_235(bParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = UNK_0x1C0640BA9A7327B3();
						}
						else if ((UNK_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_438(var uParam0)
{
	if (!func_22(uParam0->f_98, 2))
	{
		if (UNK_0xDF1306B443CD3D15(uParam0->f_4, 0))
		{
			if (func_53(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				UNK_0x28F5E4DA506AC0CA(uParam0->f_17, 25f, 0, 0, 0, 0, false, 0);
				func_67(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_439()
{
	func_440(&Local_423);
	func_462(2);
	func_458();
}

void func_440(int iParam0)
{
	func_54(0, iParam0, 1);
	if (iParam0->f_411 != 9)
	{
		func_462(2);
	}
}

bool func_441(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return true;
	}
	if ((((!func_213() && func_118(iParam0, 3) > 1f) || iParam0->f_415 == 18) || iParam0->f_415 == 14) || iParam0->f_415 == 15)
	{
		if (!UNK_0x437347B10A200C4B(iParam0->f_3, 0))
		{
			if (UNK_0xDF1306B443CD3D15(iParam0->f_4, 0))
			{
				if (UNK_0xC42A92762C58E1B9(iParam0->f_3, iParam0->f_4, 0))
				{
					if (func_66(iParam0) == 0 || func_297(iParam0->f_85, 32))
					{
						if (!UNK_0x8B38C0DAEEDB5F9C(iParam0->f_4))
						{
							func_363(iParam0, 4160, 0);
						}
						else
						{
							func_363(iParam0, 0, 0);
						}
						return true;
					}
					else
					{
						func_363(iParam0, 0, 0);
						return true;
					}
				}
				else
				{
					func_363(iParam0, 0, 0);
					return true;
				}
			}
			else
			{
				func_363(iParam0, 0, 0);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	else if ((UNK_0x1C0640BA9A7327B3() % 1000) < 50)
	{
	}
	return false;
}

void func_442(int iParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(iParam0->f_8))
	{
		UNK_0x142CC44DB769B57E(&(iParam0->f_8));
	}
	if (UNK_0xE4EDC4B0E92C078B(iParam0->f_9))
	{
		UNK_0x142CC44DB769B57E(&(iParam0->f_9));
	}
	if (UNK_0xE4EDC4B0E92C078B(iParam0->f_10))
	{
		UNK_0x142CC44DB769B57E(&(iParam0->f_10));
	}
}

bool func_443(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return true;
	}
	return false;
}

void func_444()
{
	func_447(&Local_423, 8);
	Local_423.f_410 = 0;
	func_446(&Local_423, 3, 6);
	Local_423.f_23 = { 1412.324f, -1518.315f, 58.4644f };
	Local_423.f_33 = 114.1f;
	Local_423.f_26 = { vLocal_925 };
	Local_423.f_34 = 95.93f;
	func_445(&Local_423, &Local_853);
	Local_853 = joaat("S_M_M_DOCTOR_01");
	Local_853.f_1 = joaat("BISON");
}

void func_445(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = Global_111638.f_19092.f_39[iParam0->f_411];
	bParam1->f_20 = 1;
	bParam1->f_32 = -1817882002;
	bParam1->f_12 = (0.7f - (0.6f * IntToFloat(iVar0)));
	bParam1->f_13 = (0.8f - (0.6f * IntToFloat(iVar0)));
	bParam1->f_14 = (24f + IntToFloat((10 * iVar0)));
}

void func_446(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_58 = iParam1;
	iParam0->f_59 = iParam2;
}

void func_447(int iParam0, int iParam1)
{
	func_457(1);
	func_246();
	func_7(&(iParam0->f_244));
	func_456(iParam0);
	iParam0->f_411 = iParam1;
	if (!func_22(Global_111638.f_19092, 4))
	{
		func_67(&(Global_111638.f_19092), 4);
	}
	func_451(iParam0);
	func_449(iParam0);
	UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
	iParam0->f_102 = (func_448(iParam0->f_411) % iParam0->f_101);
	iParam0->f_80 = 0;
	iParam0->f_428 = func_2();
	UNK_0xD7992BEF7A9D109E("TAXI", 2);
}

int func_448(int iParam0)
{
	return Global_111638.f_19092.f_39[iParam0];
}

void func_449(int iParam0)
{
	switch (func_66(iParam0))
	{
		case 0:
			func_450(iParam0, "EXC", "Txm2", "Txm2aud");
			iParam0->f_101 = 2;
			break;
		case 1:
			func_450(iParam0, "TIE", "Txm1", "txm1aud");
			iParam0->f_101 = 1;
			break;
		case 2:
			func_450(iParam0, "DED", "Txm3", "Txm3aud");
			iParam0->f_101 = 1;
			break;
		case 3:
			func_450(iParam0, "GYB", "Txm12", "Txm12au");
			iParam0->f_101 = 2;
			break;
		case 4:
			func_450(iParam0, "TTB", "Txm6", "Txm6aud");
			iParam0->f_101 = 2;
			break;
		case 5:
			func_450(iParam0, "CUI", "Txm8", "Txm8aud");
			iParam0->f_101 = 1;
			break;
		case 6:
			func_450(iParam0, "GYN", "Txm9", "Txm9aud");
			iParam0->f_101 = 1;
			break;
		case 7:
			func_450(iParam0, "TCC", "Txm10", "Txm10au");
			iParam0->f_101 = 2;
			break;
		case 8:
			func_450(iParam0, "TFC", "Txm4", "Txm4aud");
			iParam0->f_101 = 1;
			break;
		case 9:
			func_450(iParam0, "PRO", "txmP", "TxmPaud");
			iParam0->f_101 = 1;
			break;
	}
}

void func_450(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	iParam0->f_122 = sParam1;
	iParam0->f_143 = sParam2;
	iParam0->f_144 = sParam3;
}

void func_451(int iParam0)
{
	int iVar0;

	switch (iParam0->f_411)
	{
		case 0:
			func_455(iParam0, 3);
			func_454(iParam0, 14);
			break;
		case 1:
			func_455(iParam0, 14);
			func_454(iParam0, 8);
			break;
		case 2:
			func_455(iParam0, 8);
			func_454(iParam0, 7);
			break;
		case 3:
			func_455(iParam0, 15);
			func_454(iParam0, 6);
			break;
		case 4:
			func_455(iParam0, 0);
			func_454(iParam0, 3);
			break;
		case 5:
			func_455(iParam0, 6);
			func_454(iParam0, 7);
			break;
		case 6:
			func_455(iParam0, 8);
			func_454(iParam0, 15);
			break;
		case 7:
			func_455(iParam0, 8);
			func_454(iParam0, 14);
			break;
		case 8:
			func_455(iParam0, 7);
			func_454(iParam0, 15);
			break;
		case 9:
			func_455(iParam0, UNK_0x09AC81E49EA267F7(false, 17));
			iVar0 = func_453((iParam0->f_418.f_2 + UNK_0x09AC81E49EA267F7(true, 17)), 0, 16);
			func_454(iParam0, iVar0);
			func_452(iParam0);
			iParam0->f_418.f_7 = 1;
			iParam0->f_418.f_8 = 1;
			break;
	}
}

void func_452(int iParam0)
{
	switch (iParam0->f_418.f_2)
	{
		case 2:
		case 8:
			iParam0->f_418.f_3 = 1;
			break;
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			iParam0->f_418.f_3 = 2;
			break;
		case 4:
		case 10:
			iParam0->f_418.f_3 = 3;
			break;
		case 1:
		case 6:
		case 13:
			iParam0->f_418.f_3 = 4;
			break;
		case 11:
			iParam0->f_418.f_3 = 5;
			break;
		case 12:
		case 14:
			iParam0->f_418.f_3 = 6;
			break;
		case 7:
			iParam0->f_418.f_3 = 7;
			break;
	}
}

int func_453(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_454(int iParam0, int iParam1)
{
	iParam0->f_418.f_1 = iParam1;
}

void func_455(int iParam0, int iParam1)
{
	iParam0->f_418.f_2 = iParam1;
}

void func_456(int iParam0)
{
	iParam0->f_2 = UNK_0x16F2683693E537C9();
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_14 = { func_40() };
	iParam0->f_17 = { func_40() };
	iParam0->f_35 = 0f;
	iParam0->f_76 = 0;
	iParam0->f_49 = 0;
	iParam0->f_109 = 0;
	iParam0->f_36 = 0f;
	iParam0->f_410 = 2;
	iParam0->f_123 = "TRS_FINDING_LOCATION";
	func_210(iParam0, 32, 0);
}

void func_457(bool bParam0)
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

void func_458()
{
	UNK_0xE342F209E49C5314(vLocal_928, vLocal_931, true, 1);
	UNK_0xE342F209E49C5314(vLocal_946, vLocal_949, true, 1);
	func_142(vLocal_958, 60f, 0);
	func_142(vLocal_961, 60f, 0);
	UNK_0xEFED0CD6E25037B9();
	UNK_0x2952D66A502EA873(iLocal_894, 0);
	UNK_0x51732B934211201A(bLocal_893);
	UNK_0x51732B934211201A(bLocal_892);
	UNK_0x2F3540C2227116A3(&cLocal_976);
	func_253(385.1685f, -1372.719f, 29.8554f, 1, 50f);
	func_461();
	func_460();
	func_459();
	UNK_0xAB8E2DDC7AF955E0(Local_853.f_1, false);
	func_159(&uLocal_45, 0, 0);
	UNK_0x10FAF14A60A0DBE1();
}

void func_459()
{
	UNK_0x71199B01895C6202(bLocal_887);
	UNK_0x8D17794CE3273D70("MOVE_DUCK_FOR_COVER");
	UNK_0x8D17794CE3273D70(&cLocal_980);
	UNK_0x8D17794CE3273D70(&cLocal_996);
	UNK_0x8D17794CE3273D70(&cLocal_1012);
	UNK_0x8D17794CE3273D70(&cLocal_1028);
}

void func_460()
{
	UNK_0x71199B01895C6202(Local_853);
	UNK_0x71199B01895C6202(Local_853.f_1);
	UNK_0x71199B01895C6202(bLocal_888);
	UNK_0x71199B01895C6202(bLocal_889);
	UNK_0x2F3540C2227116A3(&cLocal_976);
	UNK_0x8D17794CE3273D70("veh@truck@ds@base");
}

void func_461()
{
	UNK_0x71199B01895C6202(bLocal_886);
	UNK_0x8D17794CE3273D70("gestures@m@standing@casual");
}

void func_462(int iParam0)
{
	Global_110348.f_22 = iParam0;
}

