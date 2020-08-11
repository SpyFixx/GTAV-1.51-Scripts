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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1000;
	var uLocal_38 = 1000;
	var uLocal_39 = 0;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = false;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	bool bLocal_54 = false;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = false;
	bool bLocal_76 = false;
	bool bLocal_77 = false;
	bool bLocal_78 = false;
	bool bLocal_79 = false;
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	bool bLocal_82 = false;
	bool bLocal_83 = false;
	bool bLocal_84 = false;
	bool bLocal_85 = false;
	bool bLocal_86 = false;
	bool bLocal_87 = false;
	bool bLocal_88 = false;
	bool bLocal_89 = false;
	bool bLocal_90 = false;
	int iLocal_91 = 0;
	bool bLocal_92 = false;
	bool bLocal_93 = false;
	bool bLocal_94 = false;
	bool bLocal_95 = false;
	bool bLocal_96 = false;
	bool bLocal_97 = false;
	bool bLocal_98 = false;
	bool bLocal_99 = false;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	bool bLocal_102 = false;
	bool bLocal_103 = false;
	bool bLocal_104 = false;
	bool bLocal_105 = false;
	bool bLocal_106 = false;
	bool bLocal_107 = false;
	bool bLocal_108 = false;
	float fLocal_109[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_285[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_461[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_637[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_813[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_989 = 0f;
	float fLocal_990 = 0f;
	float fLocal_991 = 0f;
	float fLocal_992 = 0f;
	float fLocal_993[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1029[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1065[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1101[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1137[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1173[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1209[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1225[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1241[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1257[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	bool bLocal_1273 = false;
	float fLocal_1274 = 0f;
	float fLocal_1275 = 0f;
	float fLocal_1276 = 0f;
	float fLocal_1277 = 0f;
	float fLocal_1278 = 0f;
	float fLocal_1279 = 0f;
	float fLocal_1280 = 0f;
	float fLocal_1281 = 0f;
	float fLocal_1282 = 0f;
	float fLocal_1283 = 0f;
	float fLocal_1284 = 0f;
	float fLocal_1285 = 0f;
	float fLocal_1286 = 0f;
	float fLocal_1287 = 0f;
	float fLocal_1288 = 0f;
	float fLocal_1289 = 0f;
	float fLocal_1290 = 0f;
	float fLocal_1291 = 0f;
	float fLocal_1292 = 0f;
	float fLocal_1293 = 0f;
	int iLocal_1294[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1470[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1646[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1822[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1858[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1894[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1930[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1946 = 0;
	int iLocal_1947 = 0;
	int iLocal_1948 = 0;
	bool bLocal_1949 = false;
	int iLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	int iLocal_1953 = 0;
	int iLocal_1954 = 0;
	int iLocal_1955 = 0;
	int iLocal_1956 = 0;
	bool bLocal_1957 = false;
	bool bLocal_1958 = false;
	int iLocal_1959 = 0;
	int iLocal_1960 = 0;
	int iLocal_1961 = 0;
	int iLocal_1962 = 0;
	vector3 vLocal_1963[175] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_2489[15] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_2535[35] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_2641 = { 0f, 0f, 0f };
	vector3 vLocal_2644 = { 0f, 0f, 0f };
	vector3 vLocal_2647 = { 0f, 0f, 0f };
	vector3 vLocal_2650 = { 0f, 0f, 0f };
	vector3 vLocal_2653 = { 0f, 0f, 0f };
	vector3 vLocal_2656 = { 0f, 0f, 0f };
	vector3 vLocal_2659 = { 0f, 0f, 0f };
	vector3 vLocal_2662 = { 0f, 0f, 0f };
	vector3 vLocal_2665 = { 0f, 0f, 0f };
	char cLocal_2668[64] = "";
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	bool bLocal_2684 = false;
	int iLocal_2685[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2861[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2877[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2913 = 0;
	int iLocal_2914 = 0;
	int iLocal_2915 = 0;
	int iLocal_2916[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3092[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3105[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3121[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3157[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_3164 = false;
	bool bLocal_3165 = false;
	int iLocal_3166 = 0;
	var uLocal_3167 = 12;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	int iLocal_3180 = 0;
	int iLocal_3181 = 0;
	int iLocal_3182 = 0;
	int iLocal_3183 = 0;
	int iLocal_3184 = 0;
	int iLocal_3185 = 0;
	bool bLocal_3186 = false;
	int iLocal_3187 = 0;
	int iLocal_3188 = 0;
	int iLocal_3189 = 0;
	int iLocal_3190 = 0;
	int iLocal_3191 = 0;
	int iLocal_3192 = 0;
	int iLocal_3193 = 0;
	int iLocal_3194 = 0;
	int iLocal_3195 = 0;
	int iLocal_3196 = 0;
	int iLocal_3197 = 0;
	int iLocal_3198 = 0;
	int iLocal_3199 = 0;
	int iLocal_3200 = 0;
	int iLocal_3201 = 0;
	int iLocal_3202 = 0;
	int iLocal_3203 = 0;
	int iLocal_3204 = 0;
	int iLocal_3205 = 0;
	int iLocal_3206 = 0;
	int iLocal_3207 = 0;
	int iLocal_3208 = 0;
	int iLocal_3209 = 0;
	int iLocal_3210 = 0;
	int iLocal_3211 = 0;
	int iLocal_3212 = 0;
	int iLocal_3213 = 0;
	int iLocal_3214 = 0;
	int iLocal_3215 = 0;
	int iLocal_3216 = 0;
	int iLocal_3217 = 0;
	int iLocal_3218 = 0;
	int iLocal_3219 = 0;
	int iLocal_3220 = 0;
	int iLocal_3221 = 0;
	bool bLocal_3222 = false;
	int iLocal_3223[4] = { 0, 0, 0, 0 };
	bool bLocal_3228 = false;
	var uLocal_3229[3] = { 0, 0, 0 };
	int iLocal_3233[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_3245 = false;
	bool bLocal_3246 = false;
	bool bLocal_3247 = false;
	bool bLocal_3248 = false;
	bool bLocal_3249 = false;
	bool bLocal_3250 = false;
	int iLocal_3251[2] = { 0, 0 };
	int iLocal_3254[2] = { 0, 0 };
	bool bLocal_3257 = false;
	bool bLocal_3258 = false;
	bool bLocal_3259 = false;
	int iLocal_3260[2] = { 0, 0 };
	bool bLocal_3263 = false;
	bool bLocal_3264 = false;
	bool bLocal_3265 = false;
	bool bLocal_3266 = false;
	bool bLocal_3267 = false;
	int iLocal_3268[2] = { 0, 0 };
	bool bLocal_3271 = false;
	int iLocal_3272[2] = { 0, 0 };
	bool bLocal_3275 = false;
	bool bLocal_3276 = false;
	bool bLocal_3277 = false;
	bool bLocal_3278 = false;
	int iLocal_3279[2] = { 0, 0 };
	bool bLocal_3282 = false;
	bool bLocal_3283 = false;
	bool bLocal_3284 = false;
	int iLocal_3285 = 0;
	int iLocal_3286 = 0;
	int iLocal_3287 = 0;
	int iLocal_3288 = 0;
	int iLocal_3289 = 0;
	int iLocal_3290 = 0;
	int iLocal_3291 = 0;
	int iLocal_3292 = 0;
	int iLocal_3293 = 0;
	vector3 vLocal_3294 = { 0f, 0f, 0f };
	vector3 vLocal_3297 = { 0f, 0f, 0f };
	vector3 vLocal_3300 = { 0f, 0f, 0f };
	vector3 vLocal_3303 = { 0f, 0f, 0f };
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	vector3 vLocal_3312 = { 0f, 0f, 0f };
	vector3 vLocal_3315 = { 0f, 0f, 0f };
	vector3 vLocal_3318 = { 0f, 0f, 0f };
	bool bLocal_3321 = false;
	bool bLocal_3322 = false;
	bool bLocal_3323 = false;
	float fLocal_3324 = 0f;
	bool bLocal_3325 = false;
	float fLocal_3326 = 0f;
	int iLocal_3327 = 0;
	int iLocal_3328 = 0;
	var uLocal_3329 = 0;
	int iLocal_3330 = 0;
	int iLocal_3331 = 0;
	int iLocal_3332 = 0;
	int iLocal_3333 = 0;
	int iLocal_3334 = 0;
	bool bLocal_3335 = false;
	bool bLocal_3336 = false;
	int iLocal_3337 = 0;
	int iLocal_3338 = 0;
	int iLocal_3339 = 0;
	int iLocal_3340 = 0;
	int iLocal_3341 = 0;
	int iLocal_3342 = 0;
	int iLocal_3343 = 0;
	int iLocal_3344 = 0;
	int iLocal_3345 = 0;
	int iLocal_3346 = 0;
	int iLocal_3347 = 0;
	int iLocal_3348 = 0;
	int iLocal_3349 = 0;
	int iLocal_3350 = 0;
	int iLocal_3351 = 0;
	int iLocal_3352 = 0;
	int iLocal_3353 = 0;
	int iLocal_3354 = 0;
	int iLocal_3355 = 0;
	int iLocal_3356 = 0;
	int iLocal_3357 = 0;
	int iLocal_3358 = 0;
	int iLocal_3359 = 0;
	int iLocal_3360 = 0;
	int iLocal_3361 = 0;
	int iLocal_3362 = 0;
	int iLocal_3363 = 0;
	int iLocal_3364 = 0;
	int iLocal_3365[3] = { 0, 0, 0 };
	int iLocal_3369[2] = { 0, 0 };
	int iLocal_3372 = 0;
	int iLocal_3373 = 0;
	int iLocal_3374 = 0;
	int iLocal_3375 = 0;
	int iLocal_3376 = 0;
	int iLocal_3377 = 0;
	int iLocal_3378 = 0;
	int iLocal_3379 = 0;
	int iLocal_3380 = 0;
	int iLocal_3381 = 0;
	int iLocal_3382 = 0;
	int iLocal_3383 = 0;
	int iLocal_3384 = 0;
	int iLocal_3385 = 0;
	int iLocal_3386 = 0;
	int iLocal_3387 = 0;
	int iLocal_3388 = 0;
	int iLocal_3389 = 0;
	int iLocal_3390 = 0;
	int iLocal_3391 = 0;
	int iLocal_3392 = 0;
	int iLocal_3393 = 0;
	int iLocal_3394 = 0;
	int iLocal_3395 = 0;
	int iLocal_3396 = 0;
	int iLocal_3397 = 0;
	int iLocal_3398 = 0;
	int iLocal_3399 = 0;
	var uLocal_3400 = 0;
	int iLocal_3401 = 0;
	int iLocal_3402 = 0;
	int iLocal_3403 = 0;
	int iLocal_3404[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3430 = 0;
	int iLocal_3431 = 0;
	int iLocal_3432 = 0;
	int iLocal_3433 = 0;
	int iLocal_3434 = 0;
	int iLocal_3435 = 0;
	int iLocal_3436 = 0;
	int iLocal_3437 = 0;
	int iLocal_3438 = 0;
	int iLocal_3439 = 0;
	int iLocal_3440 = 0;
	int iLocal_3441 = 0;
	int iLocal_3442 = 0;
	int iLocal_3443 = 0;
	int iLocal_3444 = 0;
	int iLocal_3445[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3465 = 0;
	int iLocal_3466 = 0;
	int iLocal_3467 = 0;
	int iLocal_3468 = 0;
	int iLocal_3469 = 0;
	int iLocal_3470 = 0;
	int iLocal_3471 = 0;
	int iLocal_3472 = 0;
	int iLocal_3473 = 0;
	int iLocal_3474 = 0;
	int iLocal_3475 = 0;
	int iLocal_3476 = 0;
	int iLocal_3477 = 0;
	int iLocal_3478 = 0;
	int iLocal_3479 = 0;
	int iLocal_3480[2] = { 0, 0 };
	int iLocal_3483[2] = { 0, 0 };
	int iLocal_3486 = 0;
	int iLocal_3487 = 0;
	int iLocal_3488 = 0;
	int iLocal_3489 = 0;
	int iLocal_3490[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3498[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3506 = 0;
	int iLocal_3507 = 0;
	int iLocal_3508 = 0;
	int iLocal_3509 = 0;
	int iLocal_3510 = 0;
	int iLocal_3511 = 0;
	int iLocal_3512 = 0;
	int iLocal_3513 = 0;
	int iLocal_3514 = 0;
	int iLocal_3515 = 0;
	int iLocal_3516[3] = { 0, 0, 0 };
	int iLocal_3520[2] = { 0, 0 };
	int iLocal_3523 = 0;
	int iLocal_3524[4] = { 0, 0, 0, 0 };
	int iLocal_3529 = 0;
	int iLocal_3530 = 0;
	int iLocal_3531 = 0;
	int iLocal_3532 = 0;
	int iLocal_3533 = 0;
	int iLocal_3534 = 0;
	bool bLocal_3535 = false;
	int iLocal_3536 = 0;
	int iLocal_3537 = 0;
	int iLocal_3538 = 0;
	int iLocal_3539 = 0;
	int iLocal_3540 = 0;
	int iLocal_3541 = 0;
	int iLocal_3542 = 0;
	int iLocal_3543[3] = { 0, 0, 0 };
	int iLocal_3547[3] = { 0, 0, 0 };
	int iLocal_3551 = 0;
	int iLocal_3552 = 0;
	int iLocal_3553 = 0;
	int iLocal_3554 = 0;
	int iLocal_3555 = 0;
	int iLocal_3556 = 0;
	int iLocal_3557 = 0;
	int iLocal_3558 = 0;
	int iLocal_3559 = 0;
	int iLocal_3560 = 0;
	int iLocal_3561 = 0;
	int iLocal_3562 = 0;
	int iLocal_3563 = 0;
	int iLocal_3564 = 0;
	int iLocal_3565 = 0;
	int iLocal_3566 = 0;
	int iLocal_3567 = 0;
	int iLocal_3568 = 0;
	int iLocal_3569 = 0;
	int iLocal_3570 = 0;
	int iLocal_3571[4] = { 0, 0, 0, 0 };
	bool bLocal_3576 = false;
	char* sLocal_3577 = NULL;
	var uLocal_3578 = 16;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 21;
	var uLocal_3751 = 6;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	int iLocal_3755[3] = { 0, 0, 0 };
	int iLocal_3759 = 0;
	int iLocal_3760 = 0;
	int iLocal_3761 = 0;
	int iLocal_3762 = 0;
	int iLocal_3763 = 0;
	int iLocal_3764 = 0;
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
	iLocal_55 = 3;
	fLocal_58 = 80f;
	fLocal_59 = 140f;
	fLocal_60 = 180f;
	iLocal_66 = 1;
	iLocal_67 = 65;
	iLocal_68 = 49;
	iLocal_69 = 64;
	iLocal_73 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_74 = UNK_0x817B3657F78A517A();
	bLocal_78 = true;
	bLocal_85 = true;
	bLocal_107 = true;
	bLocal_1273 = 120f;
	fLocal_1274 = 0f;
	fLocal_1276 = 1f;
	fLocal_1277 = 0f;
	fLocal_1278 = 1f;
	fLocal_1279 = 30f;
	fLocal_1281 = 1f;
	fLocal_1282 = 5f;
	fLocal_1283 = 1f;
	fLocal_1284 = 1f;
	fLocal_1285 = 100f;
	fLocal_1286 = 100f;
	fLocal_1287 = 0f;
	fLocal_1288 = 7000f;
	fLocal_1289 = 0f;
	fLocal_1290 = 0f;
	fLocal_1291 = 0.3f;
	fLocal_1292 = 0.5f;
	fLocal_1293 = 50f;
	bLocal_1949 = -1;
	bLocal_1957 = -1;
	bLocal_1958 = -1;
	vLocal_3294 = { -1024.1f, -485.3321f, 35.9816f };
	vLocal_3297 = { -428.0263f, -2153.577f, 9.2997f };
	vLocal_3300 = { -498.7f, -2136.5f, 8.4f };
	vLocal_3312 = { -272.8615f, -2186.932f, 9.3174f };
	bLocal_3321 = 209.7233f;
	bLocal_3322 = 90.947f;
	bLocal_3325 = 46.7161f;
	if (func_432(0))
	{
		func_425(24, 0);
	}
	UNK_0x9CBC55A05A07FC47(0);
	UNK_0x8225571BCEE038F8("EXTRASUNNY", 20f);
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_423(UNK_0x16F2683693E537C9(), 0);
		UNK_0xC92DB9682A650680("TRV4_FAIL");
		func_421();
		func_419();
	}
	func_418(1);
	UNK_0x7798376279BB5369(1);
	iLocal_3181 = 0;
	iLocal_3180 = 0;
	while (true)
	{
		UNK_0x1A6DFFFEEC27BF4F("M_LegalTrouble", 0);
		if (iLocal_3207 > UNK_0x1C0640BA9A7327B3())
		{
			UNK_0x9501364A300048C6();
		}
		func_414();
		func_413();
		func_411();
		func_407();
		func_406();
		switch (iLocal_3180)
		{
			case 0:
				func_402();
				break;
			case 1:
				func_357();
				break;
			case 2:
				func_351();
				break;
			case 3:
				func_348();
				break;
			case 4:
				func_247();
				break;
			case 5:
				func_235();
				break;
			case 6:
				func_229();
				break;
			case 7:
				func_219();
				break;
			case 8:
				func_5();
				break;
			case 9:
				break;
			case 10:
				break;
			case 11:
				break;
		}
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()
{
	if (iLocal_3443 == 0)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			func_4(UNK_0x16F2683693E537C9(), 476);
			iLocal_3443 = 1;
		}
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (iLocal_3444 == 0)
			{
				bLocal_3275 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				if (UNK_0xC844350D5D58C99A(bLocal_3275))
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3275, 0))
					{
						func_3(bLocal_3275, -1);
						func_4(bLocal_3275, 479);
						iLocal_3444 = 1;
					}
				}
			}
		}
		else
		{
			func_4(0, 479);
			func_3(0, -1);
			if (iLocal_3444 == 1)
			{
				iLocal_3444 = 0;
			}
		}
	}
	if (iLocal_3445[0] == 0)
	{
		if (UNK_0xC844350D5D58C99A(uLocal_3229[0]))
		{
			if (UNK_0xEB6A8945D1AC98A1(uLocal_3229[0]))
			{
				iLocal_3191++;
				iLocal_3445[0] = 1;
			}
		}
	}
	if (iLocal_3445[1] == 0)
	{
		if (UNK_0xC844350D5D58C99A(uLocal_3229[1]))
		{
			if (UNK_0xEB6A8945D1AC98A1(uLocal_3229[1]))
			{
				iLocal_3191++;
				iLocal_3445[1] = 1;
			}
		}
	}
	if (iLocal_3445[2] == 0)
	{
		if (UNK_0xC844350D5D58C99A(uLocal_3229[2]))
		{
			if (UNK_0xEB6A8945D1AC98A1(uLocal_3229[2]))
			{
				iLocal_3191++;
				iLocal_3445[2] = 1;
			}
		}
	}
	if (iLocal_3445[3] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3233[0]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_3233[0]))
			{
				iLocal_3191++;
				iLocal_3445[3] = 1;
			}
		}
	}
	if (iLocal_3445[4] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3233[1]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_3233[1]))
			{
				iLocal_3191++;
				iLocal_3445[4] = 1;
			}
		}
	}
	if (iLocal_3445[5] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3233[2]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_3233[2]))
			{
				iLocal_3191++;
				iLocal_3445[5] = 1;
			}
		}
	}
	if (iLocal_3445[6] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3233[3]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_3233[3]))
			{
				iLocal_3191++;
				iLocal_3445[6] = 1;
			}
		}
	}
	if (iLocal_3445[7] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3233[4]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_3233[4]))
			{
				iLocal_3191++;
				iLocal_3445[7] = 1;
			}
		}
	}
	if (iLocal_3445[8] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3233[5]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_3233[5]))
			{
				iLocal_3191++;
				iLocal_3445[8] = 1;
			}
		}
	}
	if (iLocal_3445[9] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3233[6]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_3233[6]))
			{
				iLocal_3191++;
				iLocal_3445[9] = 1;
			}
		}
	}
	if (iLocal_3445[10] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3233[7]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_3233[7]))
			{
				iLocal_3191++;
				iLocal_3445[10] = 1;
			}
		}
	}
	if (iLocal_3445[11] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3233[8]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_3233[8]))
			{
				iLocal_3191++;
				iLocal_3445[11] = 1;
			}
		}
	}
	if (iLocal_3445[12] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3233[9]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_3233[9]))
			{
				iLocal_3191++;
				iLocal_3445[12] = 1;
			}
		}
	}
	if (iLocal_3445[13] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3233[10]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_3233[10]))
			{
				iLocal_3191++;
				iLocal_3445[13] = 1;
			}
		}
	}
	if (iLocal_3445[14] == 0)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_3248))
		{
			if (UNK_0xEB6A8945D1AC98A1(bLocal_3248))
			{
				iLocal_3191++;
				iLocal_3445[14] = 1;
			}
		}
	}
	if (iLocal_3445[15] == 0)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_3249))
		{
			if (UNK_0xEB6A8945D1AC98A1(bLocal_3249))
			{
				iLocal_3191++;
				iLocal_3445[15] = 1;
			}
		}
	}
	if (iLocal_3445[16] == 0)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_3250))
		{
			if (UNK_0xEB6A8945D1AC98A1(bLocal_3250))
			{
				iLocal_3191++;
				iLocal_3445[16] = 1;
			}
		}
	}
	if (iLocal_3445[17] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3251[0]))
		{
			if (UNK_0xEB6A8945D1AC98A1(iLocal_3251[0]))
			{
				iLocal_3191++;
				iLocal_3445[17] = 1;
			}
		}
	}
	if (iLocal_3180 == 8)
	{
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) != 0)
		{
			if (iLocal_3465 == 0)
			{
				func_2(482, 0);
				iLocal_3465 = 1;
			}
		}
	}
}

void func_2(int iParam0, bool bParam1)
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

void func_3(bool bParam0, int iParam1)
{
	Global_61523 = bParam0;
	Global_61524 = iParam1;
}

void func_4(bool bParam0, int iParam1)
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

void func_5()
{
	if (UNK_0x757EF87A33649210())
	{
		if (UNK_0xC844350D5D58C99A(bLocal_3267))
		{
			UNK_0x611DFA9294B339CA(bLocal_3267, false, 0, true);
		}
	}
	if (iLocal_3181 > 0)
	{
		func_217();
	}
	if (iLocal_3181 == 0)
	{
		if (iLocal_3345 == 1)
		{
			func_120();
			iLocal_3345 = 0;
		}
		func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_3374 = 0;
		iLocal_3375 = 0;
		iLocal_3376 = 0;
		iLocal_3346 = 0;
		iLocal_3347 = 0;
		iLocal_3348 = 0;
		iLocal_3430 = 0;
		iLocal_3431 = 0;
		iLocal_3432 = 0;
		iLocal_3469 = 0;
		iLocal_3470 = 0;
		iLocal_3474 = 0;
		iLocal_3477 = 0;
		iLocal_3185 = 0;
		UNK_0x3F423BF5B8125A50("Misssolomon_3");
		UNK_0x523BCC9DC80CD82F(joaat("ORACLE2"));
		UNK_0x523BCC9DC80CD82F(joaat("BALLER2"));
		if (UNK_0xE4EDC4B0E92C078B(iLocal_3285))
		{
			UNK_0x142CC44DB769B57E(&iLocal_3285);
		}
		if (UNK_0x1C2E18E9C63BEB77("Trev4_5"))
		{
			UNK_0xA19A5ADE229B4734("Trev4_5", 0, 1f, 1f);
			UNK_0x2F3540C2227116A3("Trev4_5");
		}
		if (UNK_0xC844350D5D58C99A(bLocal_3259))
		{
			UNK_0x046C362CF15F1935(&bLocal_3259);
		}
		SYSTEM::SETTIMERA(0);
		if (UNK_0x757EF87A33649210())
		{
			if (!func_24())
			{
				UNK_0x90CECE08EA8E77CC(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true));
			}
			func_21(0, -1, 1);
		}
		if (!UNK_0x0F1CCD77290EE12F())
		{
			UNK_0x82E51BCA72537B6C(800);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_3228))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_3228))
			{
				UNK_0x25C5402CC10F76CD(bLocal_3228, true);
				UNK_0x11AD11297DC58CC7(bLocal_3228, false);
			}
		}
		UNK_0xC92DB9682A650680("TRV4_LOSE_COPS");
		if (!UNK_0x562F77A7F33D2E46("SOL_3_LOSE_COPS"))
		{
			UNK_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS");
		}
		UNK_0x790015DC92C918E2();
		func_20("TRV4_END1", 7500, 1);
		if (UNK_0x562F77A7F33D2E46("SOL_3_ENGINE_DEATH_SCENE"))
		{
			UNK_0x8910D3D58E0132B8("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2))
		{
			func_18(2, 0);
		}
		iLocal_3221 = UNK_0x544B74C043CE9948(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, 0, 7);
		if (UNK_0xC844350D5D58C99A(bLocal_3266))
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3266, 0))
			{
				UNK_0x9F3D85A3461AB1C3(bLocal_3266, 0);
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_3267))
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3267, 0))
			{
				UNK_0x9F3D85A3461AB1C3(bLocal_3267, 0);
			}
		}
		UNK_0x34D79252800B23FF(5);
		UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 3, 0);
		UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
		func_17(&uLocal_3578, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		UNK_0x7352ACF3368DF65F("PoliceScannerDisabled", 0);
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3469 == 0)
		{
			if (!UNK_0xC844350D5D58C99A(iLocal_3279[0]))
			{
				if (UNK_0xB87F6CF6E5628C67(joaat("ORACLE2")))
				{
					iLocal_3279[0] = UNK_0x122AAB0B1D6F55AD(joaat("ORACLE2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, true, true, false);
					UNK_0xE8832A9E16A57A1F(iLocal_3279[0], true, 1);
					UNK_0xB9FD7450C0DAB575(iLocal_3279[0], 1084227584 /* Float: 5f */);
					UNK_0x71199B01895C6202(joaat("ORACLE2"));
					iLocal_3469 = 1;
				}
			}
		}
		if (iLocal_3470 == 0)
		{
			if (!UNK_0xC844350D5D58C99A(iLocal_3279[1]))
			{
				if (UNK_0xB87F6CF6E5628C67(joaat("BALLER2")))
				{
					iLocal_3279[1] = UNK_0x122AAB0B1D6F55AD(joaat("BALLER2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, true, true, false);
					UNK_0xE8832A9E16A57A1F(iLocal_3279[1], true, 1);
					UNK_0xB9FD7450C0DAB575(iLocal_3279[1], 1084227584 /* Float: 5f */);
					UNK_0x71199B01895C6202(joaat("BALLER2"));
					iLocal_3470 = 1;
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(iLocal_3279[0]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3279[0], 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), iLocal_3279[0], 0))
				{
					if (!UNK_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_VEHICLE"))
					{
						UNK_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(UNK_0x16F2683693E537C9(), iLocal_3279[0], 1) > 200f || UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), iLocal_3279[0], 0))
			{
				UNK_0x046C362CF15F1935(&(iLocal_3279[0]));
			}
		}
		if (UNK_0xC844350D5D58C99A(iLocal_3279[1]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3279[1], 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), iLocal_3279[1], 0))
				{
					if (!UNK_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_VEHICLE"))
					{
						UNK_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(UNK_0x16F2683693E537C9(), iLocal_3279[1], 1) > 200f || UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), iLocal_3279[1], 0))
			{
				UNK_0x046C362CF15F1935(&(iLocal_3279[1]));
			}
		}
		if (iLocal_3430 == 0)
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[0]))
			{
				func_14(iLocal_3233[0], "SURROUNDED", 24);
				iLocal_3430 = 1;
			}
		}
		if (iLocal_3374 == 0)
		{
			if (SYSTEM::TIMERA() > 8000)
			{
				if (UNK_0xDF1306B443CD3D15(iLocal_3268[0], 0))
				{
					UNK_0x4D3C3C0B0DE2663E(iLocal_3268[0], 68, "BB_Chase", 1);
					UNK_0x7387D280FCEB227F(iLocal_3268[0], 0f, 0f, 0.15f);
				}
				if (UNK_0xDF1306B443CD3D15(iLocal_3268[1], 0))
				{
					UNK_0x4D3C3C0B0DE2663E(iLocal_3268[1], 69, "BB_Chase", 1);
					UNK_0x7387D280FCEB227F(iLocal_3268[1], 0f, 0f, 0.15f);
				}
				iLocal_3374 = 1;
			}
		}
		else
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3268[0], 0))
			{
				if (UNK_0x20D6474D5F4B9FC6(iLocal_3268[0]))
				{
					if (UNK_0x9901AABAC4D4C590(iLocal_3268[0]) > 5000f)
					{
						if (UNK_0x8B38C0DAEEDB5F9C(iLocal_3268[0]))
						{
							UNK_0xC55F2A0377488064(iLocal_3268[0]);
						}
					}
				}
				else if (iLocal_3375 == 0)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[6]))
					{
						UNK_0x11AD11297DC58CC7(iLocal_3233[6], false);
					}
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[7]))
					{
						UNK_0x11AD11297DC58CC7(iLocal_3233[7], false);
					}
					iLocal_3375 = 1;
				}
			}
			if (UNK_0xDF1306B443CD3D15(iLocal_3268[1], 0))
			{
				if (UNK_0x20D6474D5F4B9FC6(iLocal_3268[1]))
				{
					if (UNK_0x9901AABAC4D4C590(iLocal_3268[1]) > 5000f)
					{
						if (UNK_0x8B38C0DAEEDB5F9C(iLocal_3268[1]))
						{
							UNK_0xC55F2A0377488064(iLocal_3268[1]);
						}
					}
				}
				else if (iLocal_3376 == 0)
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[8]))
					{
						UNK_0x11AD11297DC58CC7(iLocal_3233[8], false);
					}
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[9]))
					{
						UNK_0x11AD11297DC58CC7(iLocal_3233[9], false);
					}
					iLocal_3376 = 1;
				}
			}
		}
		func_12();
		if (iLocal_3474 == 0)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3267))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_3267, 0))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_3267, 0))
					{
						UNK_0xC92DB9682A650680("TRV4_JET_ENTERED");
						if (!UNK_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_PLANE"))
						{
							UNK_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS_PLANE");
						}
						UNK_0x8B4C4CA774181102(4f, 15f, 4);
						UNK_0x046C362CF15F1935(&bLocal_3267);
						iLocal_3474 = 1;
					}
					else if (func_16(UNK_0x16F2683693E537C9(), bLocal_3267, 1) > 200f)
					{
						UNK_0x046C362CF15F1935(&bLocal_3267);
					}
				}
			}
		}
		if (iLocal_3474 == 1)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3267))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_3267, 0))
				{
					if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_3267, 0))
					{
						if (UNK_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_PLANE"))
						{
							UNK_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_PLANE");
						}
						UNK_0xC92DB9682A650680("TRV4_LOSE_COPS");
						iLocal_3474 = 0;
					}
				}
			}
		}
		if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
		{
			if (iLocal_3477 == 0)
			{
				iLocal_3193 = UNK_0x1C0640BA9A7327B3();
				iLocal_3477 = 1;
			}
		}
		if (iLocal_3477 == 1)
		{
			if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
			{
				if (UNK_0x1C0640BA9A7327B3() > iLocal_3193 + 3500)
				{
					if (UNK_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_PLANE"))
					{
						UNK_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_PLANE");
					}
					if (UNK_0x562F77A7F33D2E46("SOL_3_LOSE_COPS"))
					{
						UNK_0x8910D3D58E0132B8("SOL_3_LOSE_COPS");
					}
					if (UNK_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_VEHICLE"))
					{
						UNK_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_VEHICLE");
					}
					UNK_0xC92DB9682A650680("TRV4_COPS_LOST");
					func_11(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_3477 = 0;
			}
		}
	}
}

void func_6()
{
	func_10(481, iLocal_3191, 0);
	func_7(0, 0);
	func_419();
}

void func_7(bool bParam0, int iParam1)
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
		if ((func_432(0) && Global_76868.f_1 == 1) && func_9(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_432(0))
	{
		iVar0 = func_8();
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

int func_8()
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

bool func_9(int iParam0)
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

void func_10(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (Global_73608[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_73608[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_73608[iVar0 /*9*/].f_1 = (Global_73608[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_73608[iVar0 /*9*/] != -1)
	{
		if (Global_61737[Global_73608[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_73608[iVar0 /*9*/].f_1 > 1)
			{
				Global_73608[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_73608[iVar0 /*9*/].f_1 < 0)
			{
				Global_73608[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_11(bool bParam0, int iParam1)
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

void func_12()
{
	iLocal_3189 = 0;
	while (iLocal_3189 <= 9)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3233[iLocal_3189]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[iLocal_3189]))
			{
				if (!UNK_0x405E212DDE472467(iLocal_3233[iLocal_3189], 0))
				{
					if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (func_13(UNK_0x16F2683693E537C9(), iLocal_3233[iLocal_3189]) > 200f)
						{
							UNK_0xA3BF0AA5A2608191(iLocal_3233[iLocal_3189]);
							UNK_0x6DAD7906B73F064D(&(iLocal_3233[iLocal_3189]));
						}
						else if (func_13(UNK_0x16F2683693E537C9(), iLocal_3233[iLocal_3189]) > 20f)
						{
							if (UNK_0xD1960163A3042274(iLocal_3233[iLocal_3189], -1207174364) != 1 && UNK_0xD1960163A3042274(iLocal_3233[iLocal_3189], -1207174364) != 0)
							{
								UNK_0x161356BF7864C47B(iLocal_3233[iLocal_3189], UNK_0x16F2683693E537C9(), UNK_0x16F2683693E537C9(), 2f, 1, 15f, 20f, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						else if (UNK_0xD1960163A3042274(iLocal_3233[iLocal_3189], 780511057) != 1 && UNK_0xD1960163A3042274(iLocal_3233[iLocal_3189], 780511057) != 0)
						{
							UNK_0x6C3AE6E278DB3D0E(iLocal_3233[iLocal_3189], UNK_0x16F2683693E537C9(), 0, 16);
							UNK_0xAFF39FB306F8E232(iLocal_3233[iLocal_3189], 50, true);
						}
					}
					else if (func_13(UNK_0x16F2683693E537C9(), iLocal_3233[iLocal_3189]) > 200f)
					{
						UNK_0x6DAD7906B73F064D(&(iLocal_3233[iLocal_3189]));
					}
					else if (func_13(UNK_0x16F2683693E537C9(), iLocal_3233[iLocal_3189]) > 5f)
					{
						if (UNK_0xD1960163A3042274(iLocal_3233[iLocal_3189], -1207174364) != 1 && UNK_0xD1960163A3042274(iLocal_3233[iLocal_3189], -1207174364) != 0)
						{
							UNK_0x161356BF7864C47B(iLocal_3233[iLocal_3189], UNK_0x16F2683693E537C9(), UNK_0x16F2683693E537C9(), 2f, 1, 15f, 20f, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
						}
					}
					else if (UNK_0xD1960163A3042274(iLocal_3233[iLocal_3189], 780511057) != 1 && UNK_0xD1960163A3042274(iLocal_3233[iLocal_3189], 780511057) != 0)
					{
						UNK_0x6C3AE6E278DB3D0E(iLocal_3233[iLocal_3189], UNK_0x16F2683693E537C9(), 0, 16);
						UNK_0xAFF39FB306F8E232(iLocal_3233[iLocal_3189], 50, true);
					}
				}
			}
		}
		iLocal_3189++;
	}
	if (iLocal_3374 == 1)
	{
		if (iLocal_3346 == 0)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3268[0]))
			{
				if (UNK_0xDF1306B443CD3D15(iLocal_3268[0], 0))
				{
					if (UNK_0x20D6474D5F4B9FC6(iLocal_3268[0]))
					{
					}
					else
					{
						if (UNK_0xC844350D5D58C99A(iLocal_3233[6]))
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[6]))
							{
								UNK_0x11AD11297DC58CC7(iLocal_3233[6], false);
								UNK_0xA3BF0AA5A2608191(iLocal_3233[6]);
								UNK_0xDD353D0E9C789D0E(&iLocal_3292);
								UNK_0x45F014B3D0466974(false, iLocal_3268[0], 256);
								UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
								UNK_0x75ABDC5F81978924(iLocal_3292);
								UNK_0x78ADC381772E3D54(iLocal_3233[6], iLocal_3292);
								UNK_0xF82EA857DA10E0CD(&iLocal_3292);
							}
						}
						if (UNK_0xC844350D5D58C99A(iLocal_3233[7]))
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[7]))
							{
								UNK_0x11AD11297DC58CC7(iLocal_3233[7], false);
								UNK_0xA3BF0AA5A2608191(iLocal_3233[7]);
								UNK_0xDD353D0E9C789D0E(&iLocal_3292);
								UNK_0x45F014B3D0466974(false, iLocal_3268[0], 256);
								UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
								UNK_0x75ABDC5F81978924(iLocal_3292);
								UNK_0x78ADC381772E3D54(iLocal_3233[7], iLocal_3292);
								UNK_0xF82EA857DA10E0CD(&iLocal_3292);
							}
						}
						iLocal_3346 = 1;
					}
				}
			}
		}
		else if (iLocal_3431 == 0)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3268[0]))
			{
				if (UNK_0xDF1306B443CD3D15(iLocal_3268[0], 0))
				{
					if (UNK_0xC844350D5D58C99A(iLocal_3233[6]))
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[6]))
						{
							if (!UNK_0xC42A92762C58E1B9(iLocal_3233[6], iLocal_3268[0], 0))
							{
								if (func_13(UNK_0x16F2683693E537C9(), iLocal_3233[6]) < 20f)
								{
									func_14(iLocal_3233[6], "DRAW_GUN", 24);
									iLocal_3431 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3347 == 0)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3268[1]))
			{
				if (UNK_0xDF1306B443CD3D15(iLocal_3268[1], 0))
				{
					if (UNK_0x20D6474D5F4B9FC6(iLocal_3268[1]))
					{
					}
					else
					{
						if (UNK_0xC844350D5D58C99A(iLocal_3233[8]))
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[8]))
							{
								UNK_0x11AD11297DC58CC7(iLocal_3233[8], false);
								UNK_0xA3BF0AA5A2608191(iLocal_3233[8]);
								UNK_0xDD353D0E9C789D0E(&iLocal_3292);
								UNK_0x45F014B3D0466974(false, iLocal_3268[1], 256);
								UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
								UNK_0x75ABDC5F81978924(iLocal_3292);
								UNK_0x78ADC381772E3D54(iLocal_3233[8], iLocal_3292);
								UNK_0xF82EA857DA10E0CD(&iLocal_3292);
							}
						}
						if (UNK_0xC844350D5D58C99A(iLocal_3233[9]))
						{
							if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[9]))
							{
								UNK_0x11AD11297DC58CC7(iLocal_3233[9], false);
								UNK_0xA3BF0AA5A2608191(iLocal_3233[9]);
								UNK_0xDD353D0E9C789D0E(&iLocal_3292);
								UNK_0x45F014B3D0466974(false, iLocal_3268[1], 256);
								UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
								UNK_0x75ABDC5F81978924(iLocal_3292);
								UNK_0x78ADC381772E3D54(iLocal_3233[9], iLocal_3292);
								UNK_0xF82EA857DA10E0CD(&iLocal_3292);
							}
						}
						iLocal_3347 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3348 == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3233[10]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[10]))
			{
				if (func_13(UNK_0x16F2683693E537C9(), iLocal_3233[10]) > 200f)
				{
					UNK_0x6DAD7906B73F064D(&(iLocal_3233[iLocal_3189]));
					UNK_0x8D17794CE3273D70("misssolomon_3");
				}
				else if (UNK_0xB4AE0788C1587752("misssolomon_3"))
				{
					if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, false, true, 0))
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[10]))
						{
							UNK_0xA3BF0AA5A2608191(iLocal_3233[10]);
							UNK_0xDD353D0E9C789D0E(&iLocal_3292);
							UNK_0xC6EB89C59F2AF6B8(false, "misssolomon_3", "plyr_roll_left", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
							UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
							UNK_0x75ABDC5F81978924(iLocal_3292);
							UNK_0x78ADC381772E3D54(iLocal_3233[10], iLocal_3292);
							UNK_0xF82EA857DA10E0CD(&iLocal_3292);
							iLocal_3348 = 1;
						}
					}
				}
			}
		}
	}
}

float func_13(bool bParam0, bool bParam1)
{
	return func_16(bParam0, bParam1, 1);
}

void func_14(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_15(iParam2), 1);
}

int func_15(int iParam0)
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

float func_16(bool bParam0, bool bParam1, int iParam2)
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

void func_17(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_18(bool bParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_30926, bParam0))
	{
		if (!bParam1)
		{
			UNK_0x0674E58A79778E99(&Global_30926, bParam0);
			StringCopy(&(Global_30927[bParam0 /*6*/]), "NULL", 24);
			Global_30982[bParam0] = bParam1;
		}
	}
}

bool func_19(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_30926, bParam0))
	{
		return true;
	}
	return false;
}

void func_20(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_21(bool bParam0, bool bParam1, int iParam2)
{
	if (func_23() && func_24())
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
		func_22(0);
	}
}

void func_22(int iParam0)
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

bool func_23()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return true;
	}
	return false;
}

bool func_24()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

void func_25(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;

	if (iParam3 == 1)
	{
		if (!UNK_0x7F8A39872A07D2CE("FinaleC2", UNK_0xBB0808A181D4745C()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_98781)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_98781)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_119(1);
		if (iParam0 <= Global_98781)
		{
		}
		iVar1 = func_117(UNK_0xBB0808A181D4745C(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_111638.f_9080.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_115(iVar1);
			cVar3 = { Global_89532[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_111638.f_9080.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
				}
			}
			UNK_0x353729B0A07DC11A(&cVar3, iVar2, Global_98781, iParam0);
		}
		else
		{
			iVar5 = func_110(UNK_0xBB0808A181D4745C(), 1);
			if (iVar5 != -1)
			{
				Global_111638.f_18569[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_109(iVar5)}, 4);
				UNK_0x353729B0A07DC11A(&uVar6, 0, Global_98781, iParam0);
			}
			else
			{
				iVar10 = func_108(&(Global_98744.f_3));
				if (iVar10 > -1)
				{
					Global_111638.f_24981.f_4[iVar10] = 0;
				}
			}
		}
		Global_92922 = iParam2;
		Global_98781 = iParam0;
		func_26(iParam0, bParam1, bParam4, iParam5);
		if (UNK_0x7F8A39872A07D2CE(bParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_98781)
	{
	}
}

void func_26(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	func_27(&Global_105187, UNK_0xBB0808A181D4745C(), iParam0, bParam1, iParam3, bParam2);
}

void func_27(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	*uParam0 = func_107();
	uParam0->f_1 = func_96();
	UNK_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		func_68(&(uParam0->f_2884), 0);
		func_67(UNK_0x16F2683693E537C9());
		func_60(UNK_0x16F2683693E537C9(), 0);
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111638.f_2358.f_539.f_294[iVar1];
		if (iVar1 == func_57())
		{
			func_50(UNK_0x16F2683693E537C9(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_98469[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_98469[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_98469[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_98469[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_98469[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_98469[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_98469[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_98469[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_98469[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_98469[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_111638.f_20559.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_58686[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_111638.f_2358[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	UNK_0x6FB46C25CCB7E6D5(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	UNK_0x6FB46C25CCB7E6D5(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	UNK_0x6FB46C25CCB7E6D5(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_29(&(uParam0->f_2890), uParam0, bParam5, 1, 1, 0);
	}
	func_28(&(uParam0->f_2980));
	bParam3 = bParam3;
	iParam2 = iParam2;
}

int func_28(var uParam0)
{
	*uParam0 = Global_94593;
	uParam0->f_1 = Global_94594;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_29(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;

	if (bParam2 == 0)
	{
		bParam2 = UNK_0x16F2683693E537C9();
	}
	if (UNK_0xC844350D5D58C99A(bParam2))
	{
		uParam1->f_5 = func_47(bParam2);
	}
	if (func_44(bParam2, &bVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, bVar0, iParam4);
	}
	else if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x4906F8A34E9F4814(bVar0, joaat("SKYLIFT")) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
			{
				func_30(uParam0, uParam1, bVar0, iParam4);
			}
		}
	}
}

int func_30(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (UNK_0xDF1306B443CD3D15(bParam2, 0))
	{
		func_32(uParam0, bParam2, iParam3);
		uParam1->f_4 = bParam2;
		if (func_31(bParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

bool func_31(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98744.f_22[iVar0] == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_32(var uParam0, bool bParam1, int iParam2)
{
	func_39(bParam1, &(uParam0->f_12));
	uParam0->f_7 = func_35(bParam1, 145, 0);
	uParam0->f_11 = func_34(bParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_33(bParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
		uParam0->f_6 = UNK_0xD9522BA9E27E1349(bParam1);
		uParam0->f_3 = { UNK_0x56E9E0FD5ACCD35D(bParam1) };
		if (UNK_0x3D1053F9EB43B7AD(bParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76346 == bParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_33(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if (bParam0 == Global_75441.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(bool bParam0)
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

int func_35(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == bParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96085[iVar0])
				{
					if (iParam2 == 0 || UNK_0x134B62B726CEC8E6(bParam0) == func_36(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_38(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_37(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37(int iParam0, var uParam1, int iParam2)
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

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

void func_39(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_43(uParam1);
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
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
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
		func_41(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_40(iVar0 + 1));
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

int func_40(int iParam0)
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

int func_41(bool bParam0, var uParam1, var uParam2)
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

bool func_42(int iParam0)
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

void func_43(var uParam0)
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

bool func_44(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				*bParam1 = UNK_0x728870EB733D12A1();
			}
			else
			{
				*bParam1 = UNK_0x6937EA2286828455(bParam0, 1);
			}
			if (UNK_0xC844350D5D58C99A(*bParam1))
			{
				if (UNK_0xDF1306B443CD3D15(*bParam1, 0))
				{
					if (iParam2 == 0 || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(*bParam1, true), UNK_0x68F4C0EC296D3901(bParam0, true), 1) < 100f)
					{
						if (UNK_0x4906F8A34E9F4814(*bParam1, joaat("TAXI")))
						{
							if (UNK_0xA30B8362589C124A(*bParam1, -1, 0) != bParam0 && UNK_0xA30B8362589C124A(*bParam1, -1, 0) != 0)
							{
								return false;
							}
						}
						if (func_45(*bParam1, func_107(), 1))
						{
							bVar0 = UNK_0xBB0808A181D4745C();
							if (!UNK_0x7F8A39872A07D2CE(bVar0, "save_anywhere"))
							{
								return false;
							}
							else if (!UNK_0x405E212DDE472467(bParam0, 1))
							{
								return false;
							}
						}
						if (iParam3 == 1)
						{
							if (UNK_0x30F813723591D02E(*bParam1, "IgnoredByQuickSave"))
							{
								if (UNK_0xB2C7CF65CF9B897C(*bParam1, "IgnoredByQuickSave"))
								{
									return false;
								}
							}
						}
						else if (UNK_0x4906F8A34E9F4814(*bParam1, joaat("BLIMP")))
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_45(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_46(int iParam0, int iParam1, char* sParam2, int iParam3)
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

int func_47(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_49(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_49(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_50(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		iVar0 = func_47(bParam0);
		bVar1 = false;
		while (bVar1 < 12)
		{
			func_56(bParam0, bVar1, &(uParam1->f_13[bVar1]), uParam1[bVar1], &(uParam1->f_26[bVar1]), iParam2, 145);
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 9)
		{
			func_55(bParam0, bVar1, &(uParam1->f_39[bVar1]), &(uParam1->f_49[bVar1]), iParam2, 145);
			bVar1++;
		}
		if (func_38(iVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_64;
		}
		else if (UNK_0x8CD06866876216F2() && UNK_0x134B62B726CEC8E6(bParam0) == UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			if (func_54(161, iParam3))
			{
				uParam1->f_59 = func_51(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_51(752, iParam3, 0);
			}
			uParam1->f_60 = func_51(753, iParam3, 0);
			uParam1->f_61 = func_51(754, iParam3, 0);
		}
		if (UNK_0x8CD06866876216F2() && bParam0 == UNK_0x16F2683693E537C9())
		{
			if (func_54(161, iParam3))
			{
				uParam1->f_59 = func_51(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_51(752, iParam3, 0);
			}
		}
	}
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_52(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_53();
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

int func_53()
{
	return Global_1312745;
}

bool func_54(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_52(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

void func_55(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;

	iVar0 = func_47(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = UNK_0x98F1B512A2CC07C5(bParam0, bParam1);
		*uParam3 = UNK_0x22286A85EDEAEC56(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (bParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (bParam0 != 0)
			{
				if (UNK_0xDCCE25EA1C1D1F76(bParam0) && UNK_0x6BE6D34EA3F561AC(bParam0) != -1)
				{
					*uParam2 = UNK_0x6BE6D34EA3F561AC(bParam0);
					*uParam3 = UNK_0x7E1F0AD2CE37D34C(bParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (bParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		case 1:
			if (bParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		case 2:
			if (bParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_56(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;

	iVar0 = func_47(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = UNK_0x36C584991B4C183F(bParam0, bParam1);
		*uParam3 = UNK_0xDADA8E1DD0D0D9D9(bParam0, bParam1);
		*uParam4 = UNK_0xAA973E78065E07A0(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		case 1:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		case 2:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_57()
{
	func_58();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_58()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_48(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_47(UNK_0x16F2683693E537C9());
			if (func_38(iVar0) && (!func_59(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_38(Global_111638.f_2358.f_539.f_4321))
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

bool func_59(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_60(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = func_47(bParam0);
	if (func_38(iVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (bParam0 == UNK_0x16F2683693E537C9())
		{
			func_61(bParam0, &(Global_111638.f_2358.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] = UNK_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = UNK_0xFA91242148B28E7D();
					if (Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			UNK_0x812D6591566D640E(UNK_0xD803B885F5E47A62(), &bVar3);
			if (iVar0 == 0)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP0_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (iVar0 == 1)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP1_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (iVar0 == 2)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP2_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
		}
	}
}

void func_61(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	bool bVar73;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_66(iVar0);
			if (iVar3 != 0)
			{
				Var4 = UNK_0x3F0B5EEC37A0EDD3(bParam0, func_66(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (Var4 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
					Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_64(Var4, bVar1);
					while (iVar2 != 0)
					{
						if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, iVar2))
						{
							UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_64(Var4, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = UNK_0x4160B65AE085B5A9();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((UNK_0x310836EE7129BA33(iVar9, &Var11) && !func_63(Var11.f_1)) && iVar72 < 51)
			{
				if (!UNK_0x232048AB4B0E0259(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
						Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					bVar73 = false;
					bVar1 = false;
					while (bVar1 < UNK_0xAD2A7A6DFF55841B(iVar9))
					{
						if (UNK_0x31D5E073B6F93CDC(iVar9, bVar1, &Var50))
						{
							if (!func_62(Var50.f_3))
							{
								if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, Var50.f_3))
								{
									UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar73);
								}
								bVar73++;
							}
						}
						bVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

bool func_62(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return true;
	}
	return false;
}

bool func_63(int iParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case -1523701417:
			case -2112826155:
			case -664359727:
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
				return true;
		}
	}
	return false;
}

int func_64(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_65(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					bVar2 = false;
					while (bVar2 < UNK_0xA942498EEAA3EEAD(iVar1))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar1, bVar2, &Var43))
						{
							if (!func_62(Var43.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						bVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_65(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (UNK_0x6532540B34EE6273(iVar0, iParam1))
		{
			if (iParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}
	return iVar0;
}

void func_67(bool bParam0)
{
	int iVar0;

	iVar0 = func_47(bParam0);
	if (func_38(iVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = UNK_0x34460709B9A5160B(bParam0);
	}
}

void func_68(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;

	*uParam0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	uParam0->f_3 = UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9());
	uParam0->f_5 = UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9());
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		uParam0->f_4 = UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (UNK_0x8A22C4C08282BF26(joaat("FINALE_CHOICE")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0x0D1736C2E221BCEA(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_72(&iVar0))
		{
			if (func_70(iVar0, &vVar1, &uVar4))
			{
				vVar1.f_2 = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_107();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_69(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

bool func_69(vector3 vParam0, bool bParam3, vector3 vParam4)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xD1BF3090E1F8300E(vParam0))
	{
		iVar0 = UNK_0x0D1736C2E221BCEA(vParam4, bParam3);
		if (!UNK_0x31609A585163CBAC(iVar0))
		{
			return false;
		}
		iVar1 = UNK_0x16804749AA17EEA8(vParam0);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

bool func_70(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_71(*uParam1, 0f, 0f, 0f, 0);
}

bool func_71(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_72(int iParam0)
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (func_95())
		{
			*iParam0 = func_78(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 6, -1, 0, 1, -1);
			if (func_77(*iParam0) && !func_73(*iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_73(int iParam0)
{
	return func_74(iParam0, 0, 1);
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
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
		if (func_76() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_51(func_75(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

int func_75(int iParam0)
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

int func_76()
{
	return Global_30768;
}

bool func_77(int iParam0)
{
	return func_74(iParam0, 5, 1);
}

int func_78(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_94(iVar0))
		{
			if (!bParam5 || func_93(iVar0))
			{
				fVar1 = UNK_0x0EB28750412C3A5A(vParam0, func_79(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (bParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_79(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
		case 4:
			return 1208.333f, -470.917f, 65.208f;
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		case 45:
			return func_90(Global_100839);
		case 46:
			if (Global_1590374 != func_89())
			{
				if (func_88(Global_1590374))
				{
					return func_81(2, 2);
				}
				else if (func_80(Global_1590374))
				{
					return func_81(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		case 47:
			return 510.1f, 4749.5f, -69f;
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
		case 50:
			return Global_1696048;
		case 51:
			return 1100f, 220f, -50f;
	}
	return 1000000f, 1000000f, 1000000f;
}

bool func_80(int iParam0)
{
	if (iParam0 != func_89())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, true)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_81(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar6;

	vVar6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_89())
	{
		if (iParam1 == 3)
		{
			if (func_82(iParam0, 1, &vVar0, 0, 0))
			{
				vVar6 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 4))
			{
				if (func_82(iParam0, 1, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 5))
			{
				if (func_82(iParam0, 2, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
		}
	}
	return vVar6;
}

bool func_82(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar6;
	struct<4> Var12;
	vector3 vVar18;

	if (!func_87(iParam3, &Var0))
	{
		return false;
	}
	if (!func_87(iParam1, &vVar6))
	{
		return false;
	}
	if (!bParam4)
	{
		Var12 = { func_85(iParam0) };
	}
	else
	{
		Var12 = { func_84(iParam0) };
	}
	vVar18 = { Var12 - Var0 };
	vVar18 = { func_83(vVar18, -Var0.f_3.f_2) };
	vVar18 = { func_83(vVar18, vVar6.f_3.f_2) };
	*uParam2 = { UNK_0x8A5E176FF719A014(vVar6, 0f, vVar18) };
	uParam2->f_3 = { Var12.f_3 };
	return true;
}

Vector3 func_83(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

struct<6> func_84(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_85(int iParam0)
{
	return func_86(iParam0);
}

struct<6> func_86(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

bool func_87(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		default:
			break;
	}
	return false;
}

bool func_88(int iParam0)
{
	if (iParam0 != func_89())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 3) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 4)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 5))
		{
			return true;
		}
	}
	return false;
}

int func_89()
{
	return -1;
}

Vector3 func_90(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
		case 2:
			return 1060f, -2990f, -35f;
		case 3:
			return 974.9542f, -3000.091f, -35f;
		case 6:
			return -1586.36f, -566.6f, 106.17f;
		case 7:
			return -1389.87f, -465.17f, 82.68f;
		case 8:
			return -145.81f, -590.2f, 171.13f;
		case 9:
			return -62.49f, -823.55f, 288.74f;
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
		case 10:
			return 1103.562f, -3000f, -40f;
		case 11:
			return 938.3077f, -3196.112f, -100f;
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
		case 13:
			return 520.0001f, 4750f, -70f;
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
		case 16:
			return -1421.015f, -3012.587f, -80f;
		case 17:
			if (func_91() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		default:
			return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

int func_91()
{
	return func_92(UNK_0xD803B885F5E47A62());
}

int func_92(int iParam0)
{
	return UNK_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

bool func_93(int iParam0)
{
	return func_74(iParam0, 0, 0);
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 50:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
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
			return 2;
		case 23:
			return 2;
		case 24:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 27:
			return 2;
		case 28:
			return 3;
		case 29:
			return 3;
		case 30:
			return 3;
		case 31:
			return 3;
		case 32:
			return 3;
		case 33:
			return 3;
		case 34:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		case 37:
			return 3;
		case 38:
			return 3;
		case 39:
			return 4;
		case 40:
			return 4;
		case 41:
			return 4;
		case 42:
			return 4;
		case 43:
			return 4;
		case 44:
			return 4;
		case 45:
			return 5;
		case 46:
			return 3;
		case 47:
			return 3;
		case 48:
			return 3;
		case 49:
			return 3;
		case 52:
			return 3;
		case 51:
			return 1;
	}
	return 6;
}

bool func_95()
{
	return Global_98796.f_345 > 0;
}

bool func_96()
{
	var uVar0;

	func_106(&uVar0, UNK_0x4460E481B9E33ADA());
	func_105(&uVar0, UNK_0x8D199E381D262EEF());
	func_104(&uVar0, UNK_0xD8A54335F18763BA());
	func_99(&uVar0, UNK_0x972A296334C9D57B());
	func_98(&uVar0, UNK_0x118229AD063C3C1D());
	func_97(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_97(bool bParam0, int iParam1)
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

void func_98(bool bParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 > 11)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15);
	*bParam0 = (*bParam0 || bParam1);
}

void func_99(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_103(*bParam0);
	iVar1 = func_101(*bParam0);
	if (iParam1 < 1 || iParam1 > func_100(bVar0, iVar1))
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 496);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_100(bool bParam0, int iParam1)
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

int func_101(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_102(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_102(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_103(bool bParam0)
{
	return (bParam0 && 15);
}

void func_104(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 15872);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_105(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 1032192);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_106(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*bParam0 = (*bParam0 - *bParam0 & 66060288);
	*bParam0 = (*bParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_107()
{
	func_58();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_108(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE("BailBond1", bParam0))
	{
		return 0;
	}
	else if (UNK_0x7F8A39872A07D2CE("BailBond2", bParam0))
	{
		return 1;
	}
	else if (UNK_0x7F8A39872A07D2CE("BailBond3", bParam0))
	{
		return 2;
	}
	else if (UNK_0x7F8A39872A07D2CE("BailBond4", bParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_109(int iParam0)
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

int func_110(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar33;
	int iVar34;

	iVar33 = UNK_0x12AB0310C2281427(bParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_111(iVar0, &bVar1);
		if (UNK_0x12AB0310C2281427(bVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_111(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_112(bParam1, "Abigail1", func_114(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 1:
			func_112(bParam1, "Abigail2", func_114(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 2:
			func_112(bParam1, "Barry1", func_114(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 3:
			func_112(bParam1, "Barry2", func_114(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		case 4:
			func_112(bParam1, "Barry3", func_114(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 5:
			func_112(bParam1, "Barry3A", func_114(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 6:
			func_112(bParam1, "Barry3C", func_114(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 7:
			func_112(bParam1, "Barry4", func_114(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_113(iParam0), 0, 0);
			break;
		case 8:
			func_112(bParam1, "Dreyfuss1", func_114(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 9:
			func_112(bParam1, "Epsilon1", func_114(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 10:
			func_112(bParam1, "Epsilon2", func_114(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 11:
			func_112(bParam1, "Epsilon3", func_114(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 12:
			func_112(bParam1, "Epsilon4", func_114(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 13:
			func_112(bParam1, "Epsilon5", func_114(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 14:
			func_112(bParam1, "Epsilon6", func_114(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 15:
			func_112(bParam1, "Epsilon7", func_114(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 16:
			func_112(bParam1, "Epsilon8", func_114(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 17:
			func_112(bParam1, "Extreme1", func_114(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 18:
			func_112(bParam1, "Extreme2", func_114(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 19:
			func_112(bParam1, "Extreme3", func_114(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 20:
			func_112(bParam1, "Extreme4", func_114(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 21:
			func_112(bParam1, "Fanatic1", func_114(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_113(iParam0), 1, 0);
			break;
		case 22:
			func_112(bParam1, "Fanatic2", func_114(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_113(iParam0), 1, 0);
			break;
		case 23:
			func_112(bParam1, "Fanatic3", func_114(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_113(iParam0), 0, 1);
			break;
		case 24:
			func_112(bParam1, "Hao1", func_114(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_113(iParam0), 0, 1);
			break;
		case 25:
			func_112(bParam1, "Hunting1", func_114(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 26:
			func_112(bParam1, "Hunting2", func_114(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 27:
			func_112(bParam1, "Josh1", func_114(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 28:
			func_112(bParam1, "Josh2", func_114(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		case 29:
			func_112(bParam1, "Josh3", func_114(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		case 30:
			func_112(bParam1, "Josh4", func_114(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 31:
			func_112(bParam1, "Maude1", func_114(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 32:
			func_112(bParam1, "Minute1", func_114(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 33:
			func_112(bParam1, "Minute2", func_114(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 34:
			func_112(bParam1, "Minute3", func_114(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 35:
			func_112(bParam1, "MrsPhilips1", func_114(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 36:
			func_112(bParam1, "MrsPhilips2", func_114(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 37:
			func_112(bParam1, "Nigel1", func_114(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 38:
			func_112(bParam1, "Nigel1A", func_114(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		case 39:
			func_112(bParam1, "Nigel1B", func_114(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		case 40:
			func_112(bParam1, "Nigel1C", func_114(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		case 41:
			func_112(bParam1, "Nigel1D", func_114(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_113(iParam0), 1, 1);
			break;
		case 42:
			func_112(bParam1, "Nigel2", func_114(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		case 43:
			func_112(bParam1, "Nigel3", func_114(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 1);
			break;
		case 44:
			func_112(bParam1, "Omega1", func_114(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 45:
			func_112(bParam1, "Omega2", func_114(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 46:
			func_112(bParam1, "Paparazzo1", func_114(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 47:
			func_112(bParam1, "Paparazzo2", func_114(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 48:
			func_112(bParam1, "Paparazzo3", func_114(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 49:
			func_112(bParam1, "Paparazzo3A", func_114(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 50:
			func_112(bParam1, "Paparazzo3B", func_114(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 51:
			func_112(bParam1, "Paparazzo4", func_114(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 52:
			func_112(bParam1, "Rampage1", func_114(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 54:
			func_112(bParam1, "Rampage3", func_114(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 55:
			func_112(bParam1, "Rampage4", func_114(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 56:
			func_112(bParam1, "Rampage5", func_114(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_113(iParam0), 0, 0);
			break;
		case 53:
			func_112(bParam1, "Rampage2", func_114(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_113(iParam0), 1, 0);
			break;
		case 57:
			func_112(bParam1, "TheLastOne", func_114(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 58:
			func_112(bParam1, "Tonya1", func_114(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 59:
			func_112(bParam1, "Tonya2", func_114(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 60:
			func_112(bParam1, "Tonya3", func_114(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 61:
			func_112(bParam1, "Tonya4", func_114(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		case 62:
			func_112(bParam1, "Tonya5", func_114(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_113(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_112(bool bParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
{
	bParam0->f_4 = iParam5;
	*bParam0 = sParam1;
	bParam0->f_1 = { Param2 };
	bParam0->f_3 = iParam4;
	bParam0->f_5 = iParam6;
	bParam0->f_6 = { vParam7 };
	bParam0->f_9 = sParam10;
	StringCopy(&(bParam0->f_10), sParam11, 16);
	bParam0->f_14 = iParam12;
	bParam0->f_15 = sParam13;
	StringCopy(&(bParam0->f_16), sParam14, 24);
	bParam0->f_22 = iParam15;
	bParam0->f_23 = iParam16;
	bParam0->f_24 = iParam17;
	bParam0->f_25 = iParam18;
	bParam0->f_26 = iParam19;
	bParam0->f_27 = iParam20;
	bParam0->f_28 = iParam21;
	bParam0->f_29 = iParam22;
	bParam0->f_30 = iParam23;
	bParam0->f_31 = uParam24;
}

int func_113(int iParam0)
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

struct<2> func_114(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_109(iParam0) };
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

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_116(Global_111638.f_9080.f_99.f_205[10]);
		case 74:
		case 75:
			return func_116(Global_111638.f_9080.f_99.f_205[8]);
		case 84:
		case 85:
			return func_116(Global_111638.f_9080.f_99.f_205[11]);
		case 90:
			return func_116(Global_111638.f_9080.f_99.f_205[7]);
		case 93:
			return func_116(Global_111638.f_9080.f_99.f_205[9]);
	}
	return 0;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
	}
	return -1;
}

int func_117(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0x12AB0310C2281427(bParam0);
	iVar1 = func_118(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_118(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_89532[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_119(bool bParam0)
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

void func_120()
{
	UNK_0x25A28F88B27F5218("EXTRASUNNY");
	func_216();
	func_188();
	func_122();
	if (!func_24())
	{
		func_121();
	}
	iLocal_3351 = 1;
	UNK_0x2FB9A57162E54BAB(0f);
}

void func_121()
{
	switch (iLocal_3180)
	{
		case 2:
			UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 93.7701f);
			break;
		case 3:
			if (UNK_0xDF1306B443CD3D15(bLocal_3259, 0))
			{
				if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_3259, 0))
				{
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), bLocal_3259, -1);
				}
				UNK_0xD458AC1C1D29C3B4(bLocal_3259, 3000, false);
				UNK_0xAA6B3A4292417750(bLocal_3259, false, true, false, false, false, false, 0, false);
			}
			break;
		case 5:
			UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -935.4413f, -2928.061f, 12.9451f, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 178.466f);
			UNK_0xE8832A9E16A57A1F(UNK_0x16F2683693E537C9(), true, 1);
			break;
		case 8:
			UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
			UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -937.5466f, -2968.713f, 12.9451f, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 111.5016f);
			UNK_0xE8832A9E16A57A1F(UNK_0x16F2683693E537C9(), true, 1);
			break;
	}
}

void func_122()
{
	switch (iLocal_3180)
	{
		case 2:
			UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
			UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
			UNK_0x536F1BE96C726C4B(-1026.8f, -492.1f, 36f, 18f, 1, 0, 0, false);
			UNK_0xE342F209E49C5314(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, false, 1);
			UNK_0x21688103CC7F9B19(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0);
			UNK_0x523BCC9DC80CD82F(joaat("RAPIDGT"));
			UNK_0x523BCC9DC80CD82F(joaat("SURANO"));
			UNK_0x523BCC9DC80CD82F(joaat("CARBONIZZARE"));
			while ((!UNK_0xB87F6CF6E5628C67(joaat("RAPIDGT")) || !UNK_0xB87F6CF6E5628C67(joaat("SURANO"))) || !UNK_0xB87F6CF6E5628C67(joaat("CARBONIZZARE")))
			{
				SYSTEM::WAIT(0);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3259))
			{
				UNK_0x536F1BE96C726C4B(vLocal_3294, 5f, 1, 0, 0, false);
				bLocal_3259 = UNK_0x122AAB0B1D6F55AD(joaat("RAPIDGT"), vLocal_3294, bLocal_3321, true, true, false);
				UNK_0xC002508A277213DE(bLocal_3259, 112, 112);
				UNK_0xD458AC1C1D29C3B4(bLocal_3259, 3000, false);
				UNK_0xD5A0214B20BCBAD8(bLocal_3259, 1);
				UNK_0x71199B01895C6202(joaat("RAPIDGT"));
				UNK_0xAB8E2DDC7AF955E0(joaat("RAPIDGT"), true);
				UNK_0x120A395B0ECB8EA5(bLocal_3259, true);
				UNK_0x44A200C9B6E1CEA6(bLocal_3259, true);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3276))
			{
				if (UNK_0xB87F6CF6E5628C67(joaat("SURANO")))
				{
					UNK_0x536F1BE96C726C4B(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, false);
					bLocal_3276 = UNK_0x122AAB0B1D6F55AD(joaat("SURANO"), -1037.398f, -491.6539f, 35.5545f, 208.889f, true, true, false);
					UNK_0xC002508A277213DE(bLocal_3276, false, false);
					UNK_0xD458AC1C1D29C3B4(bLocal_3276, 3000, false);
					UNK_0xD5A0214B20BCBAD8(bLocal_3276, 1);
					UNK_0x71199B01895C6202(joaat("SURANO"));
					UNK_0xAB8E2DDC7AF955E0(joaat("SURANO"), true);
					UNK_0x44A200C9B6E1CEA6(bLocal_3276, true);
				}
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3277))
			{
				if (UNK_0xB87F6CF6E5628C67(joaat("CARBONIZZARE")))
				{
					UNK_0x536F1BE96C726C4B(vLocal_3294, 5f, 1, 0, 0, false);
					bLocal_3277 = UNK_0x122AAB0B1D6F55AD(joaat("CARBONIZZARE"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, true, true, false);
					UNK_0xC002508A277213DE(bLocal_3277, 89, 89);
					UNK_0xD458AC1C1D29C3B4(bLocal_3277, 3000, false);
					UNK_0xD5A0214B20BCBAD8(bLocal_3277, 1);
					UNK_0x71199B01895C6202(joaat("CARBONIZZARE"));
					UNK_0xAB8E2DDC7AF955E0(joaat("CARBONIZZARE"), true);
					UNK_0x44A200C9B6E1CEA6(bLocal_3277, true);
				}
			}
			break;
		case 3:
			UNK_0x13896FDECC859926("TRV4_CHASE");
			UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
			UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
			func_185();
			UNK_0x536F1BE96C726C4B(vLocal_3297, 200f, 1, 0, 0, false);
			if (!UNK_0xC844350D5D58C99A(bLocal_3258))
			{
				bLocal_3258 = UNK_0x122AAB0B1D6F55AD(joaat("COGCABRIO"), vLocal_3297, bLocal_3322, true, true, false);
				UNK_0xAA6B3A4292417750(bLocal_3258, true, true, true, true, true, false, 0, false);
				UNK_0xC002508A277213DE(bLocal_3258, 27, 27);
				UNK_0x71199B01895C6202(joaat("COGCABRIO"));
				UNK_0x2E1E5367A885F9B7(bLocal_3258, "SOL_3_MOLLY_CAR_Group", 0);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3222))
			{
				bLocal_3222 = UNK_0x852A19533F896693(bLocal_3258, 26, joaat("IG_MOLLY"), -1, 1, true);
				UNK_0xAA6B3A4292417750(bLocal_3222, true, true, true, true, true, false, 0, false);
				UNK_0xE121AE1BBF90E186(bLocal_3222, true);
				UNK_0x25C5402CC10F76CD(bLocal_3222, false);
				UNK_0x71199B01895C6202(joaat("IG_MOLLY"));
				UNK_0x6DF7BF67E86AAE86(bLocal_3222, joaat("PLAYER"));
			}
			if (func_23())
			{
				if (!UNK_0xC844350D5D58C99A(bLocal_3259))
				{
					if (func_184())
					{
						if (!UNK_0xAFB8495D36825275(func_183()) && !UNK_0xC41A9202669A24C4(func_183()))
						{
							bLocal_3259 = func_143(vLocal_3312, bLocal_3325);
							UNK_0x71199B01895C6202(func_183());
							UNK_0x44A200C9B6E1CEA6(bLocal_3259, true);
						}
						else
						{
							bLocal_3259 = UNK_0x122AAB0B1D6F55AD(joaat("RAPIDGT"), vLocal_3312, bLocal_3325, true, true, false);
							UNK_0xC002508A277213DE(bLocal_3259, 112, 112);
						}
					}
					else
					{
						bLocal_3259 = UNK_0x122AAB0B1D6F55AD(joaat("RAPIDGT"), vLocal_3312, bLocal_3325, true, true, false);
						UNK_0xC002508A277213DE(bLocal_3259, 112, 112);
					}
					UNK_0xD458AC1C1D29C3B4(bLocal_3259, 3000, false);
					UNK_0xD5A0214B20BCBAD8(bLocal_3259, 1);
					UNK_0xAA6B3A4292417750(bLocal_3259, false, true, false, false, false, false, 0, false);
					UNK_0x120A395B0ECB8EA5(bLocal_3259, true);
					UNK_0x71199B01895C6202(joaat("RAPIDGT"));
					UNK_0x44A200C9B6E1CEA6(bLocal_3259, true);
				}
			}
			else if (!UNK_0xC844350D5D58C99A(bLocal_3259))
			{
				bLocal_3259 = UNK_0x122AAB0B1D6F55AD(joaat("RAPIDGT"), vLocal_3312, bLocal_3325, true, true, false);
				UNK_0xC002508A277213DE(bLocal_3259, 112, 112);
				UNK_0x71199B01895C6202(joaat("RAPIDGT"));
				UNK_0xD458AC1C1D29C3B4(bLocal_3259, 3000, false);
				UNK_0xD5A0214B20BCBAD8(bLocal_3259, 1);
				UNK_0xAA6B3A4292417750(bLocal_3259, false, true, false, false, false, false, 0, false);
				UNK_0x120A395B0ECB8EA5(bLocal_3259, true);
				UNK_0x44A200C9B6E1CEA6(bLocal_3259, true);
			}
			break;
		case 5:
			iLocal_3352 = 0;
			UNK_0x536F1BE96C726C4B(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, false);
			SYSTEM::SETTIMERA(0);
			UNK_0x523BCC9DC80CD82F(joaat("JET"));
			UNK_0x523BCC9DC80CD82F(joaat("SHAMAL"));
			UNK_0x29398344B9E5B8A7("BB_MOLLY_2");
			UNK_0x523BCC9DC80CD82F(joaat("S_M_Y_AIRWORKER"));
			UNK_0x523BCC9DC80CD82F(joaat("S_M_Y_COP_01"));
			UNK_0x523BCC9DC80CD82F(joaat("POLICE3"));
			UNK_0x523BCC9DC80CD82F(joaat("IG_MOLLY"));
			UNK_0x523BCC9DC80CD82F(joaat("COGCABRIO"));
			UNK_0x523BCC9DC80CD82F(joaat("RAPIDGT"));
			UNK_0x523BCC9DC80CD82F(joaat("PROP_CS_FILM_REEL_01"));
			UNK_0x36187931D29E5BBE(68, "BB_Chase");
			UNK_0x36187931D29E5BBE(69, "BB_Chase");
			UNK_0x29398344B9E5B8A7("Trev4_5");
			UNK_0x9E5E60D8C63FD9D1();
			UNK_0x3F423BF5B8125A50("move_f@film_reel_arms");
			UNK_0x3F423BF5B8125A50("misssolomon_3");
			while (((((((((((((((!UNK_0xB87F6CF6E5628C67(joaat("JET")) || !UNK_0xB87F6CF6E5628C67(joaat("SHAMAL"))) || !UNK_0x1C2E18E9C63BEB77("BB_MOLLY_2")) || !UNK_0xB87F6CF6E5628C67(joaat("S_M_Y_AIRWORKER"))) || !UNK_0xB87F6CF6E5628C67(joaat("S_M_Y_COP_01"))) || !UNK_0xB87F6CF6E5628C67(joaat("POLICE3"))) || !UNK_0xB87F6CF6E5628C67(joaat("IG_MOLLY"))) || !UNK_0xB87F6CF6E5628C67(joaat("COGCABRIO"))) || !UNK_0xB87F6CF6E5628C67(joaat("RAPIDGT"))) || !UNK_0xB87F6CF6E5628C67(joaat("PROP_CS_FILM_REEL_01"))) || !UNK_0x3DDA6C6A285628E4(68, "BB_Chase")) || !UNK_0x3DDA6C6A285628E4(69, "BB_Chase")) || !UNK_0x1C2E18E9C63BEB77("Trev4_5")) || !UNK_0x25F7A4D42AF2AB93()) || !UNK_0xB4AE0788C1587752("move_f@film_reel_arms")) || !UNK_0xB4AE0788C1587752("misssolomon_3"))
			{
				SYSTEM::WAIT(0);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3222))
			{
				bLocal_3222 = UNK_0x36F2404464202779(26, joaat("IG_MOLLY"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, 1, true);
				UNK_0xE121AE1BBF90E186(bLocal_3222, true);
				UNK_0x25C5402CC10F76CD(bLocal_3222, false);
				UNK_0x11AD11297DC58CC7(bLocal_3222, true);
				UNK_0x71199B01895C6202(joaat("IG_MOLLY"));
				UNK_0xE8832A9E16A57A1F(bLocal_3222, true, 1);
				UNK_0x6DF7BF67E86AAE86(bLocal_3222, joaat("PLAYER"));
			}
			bLocal_3283 = UNK_0x7707E48765093646(joaat("PROP_CS_FILM_REEL_01"), -929f, -2917f, 13f, true, true, false);
			UNK_0x9F528B1B53FBC5D9(bLocal_3283, bLocal_3222, UNK_0x4A089F2B762B8D33(bLocal_3222, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			if (!UNK_0xC844350D5D58C99A(bLocal_3266))
			{
				bLocal_3266 = UNK_0x122AAB0B1D6F55AD(joaat("JET"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
				UNK_0x446EA2500F021666(bLocal_3266, 2);
				UNK_0x05EC10F460C3A4AF(bLocal_3266, 0);
				UNK_0x1E9649458B15960F(bLocal_3266, true);
				UNK_0xAA6B3A4292417750(bLocal_3266, true, true, true, true, true, false, 0, false);
				UNK_0x71199B01895C6202(joaat("JET"));
				UNK_0x25BD67336EA4AECE(bLocal_3266, 500);
			}
			if (func_23())
			{
				if (func_184())
				{
					func_141();
					while (!func_128())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!UNK_0xC844350D5D58C99A(bLocal_3259))
				{
					if (func_184())
					{
						bLocal_3259 = func_143(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						UNK_0x120A395B0ECB8EA5(bLocal_3259, true);
						UNK_0x71199B01895C6202(func_183());
						UNK_0x44A200C9B6E1CEA6(bLocal_3259, true);
					}
					else
					{
						bLocal_3259 = UNK_0x122AAB0B1D6F55AD(joaat("RAPIDGT"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
						UNK_0xC002508A277213DE(bLocal_3259, 112, 112);
						UNK_0x120A395B0ECB8EA5(bLocal_3259, true);
						UNK_0x71199B01895C6202(joaat("RAPIDGT"));
						UNK_0x44A200C9B6E1CEA6(bLocal_3259, true);
					}
				}
			}
			else if (!UNK_0xC844350D5D58C99A(bLocal_3259))
			{
				bLocal_3259 = UNK_0x122AAB0B1D6F55AD(joaat("RAPIDGT"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
				UNK_0xC002508A277213DE(bLocal_3259, 112, 112);
				UNK_0x71199B01895C6202(joaat("RAPIDGT"));
				UNK_0x120A395B0ECB8EA5(bLocal_3259, true);
				UNK_0x44A200C9B6E1CEA6(bLocal_3259, true);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3258))
			{
				bLocal_3258 = UNK_0x122AAB0B1D6F55AD(joaat("COGCABRIO"), -928.3279f, -2916.16f, 12.945f, 61.7688f, true, true, false);
				UNK_0xC002508A277213DE(bLocal_3258, 27, 27);
				UNK_0x71199B01895C6202(joaat("COGCABRIO"));
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3263))
			{
				bLocal_3263 = UNK_0x122AAB0B1D6F55AD(joaat("POLICE3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, true, true, false);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3248))
			{
				bLocal_3248 = UNK_0x36F2404464202779(6, joaat("S_M_Y_COP_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, true);
				UNK_0x262EF6C6306BEA6C(bLocal_3248, joaat("WEAPON_PISTOL"), 1000, true, true);
				func_127(bLocal_3248, 0);
				UNK_0x71199B01895C6202(joaat("S_M_Y_COP_01"));
			}
			SYSTEM::SETTIMERA(0);
			func_126(2, 1);
			iLocal_3360 = 1;
			break;
		case 8:
			UNK_0x536F1BE96C726C4B(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, false);
			SYSTEM::SETTIMERA(0);
			iLocal_3352 = 0;
			iLocal_3360 = 0;
			iLocal_3339 = 0;
			UNK_0x523BCC9DC80CD82F(joaat("JET"));
			UNK_0x523BCC9DC80CD82F(joaat("S_M_Y_AIRWORKER"));
			UNK_0x523BCC9DC80CD82F(joaat("SHAMAL"));
			UNK_0x523BCC9DC80CD82F(joaat("S_M_Y_COP_01"));
			UNK_0x523BCC9DC80CD82F(joaat("POLICE3"));
			UNK_0x523BCC9DC80CD82F(joaat("COGCABRIO"));
			UNK_0x523BCC9DC80CD82F(joaat("RAPIDGT"));
			UNK_0x523BCC9DC80CD82F(joaat("PROP_JET_BLOODSPLAT_01"));
			UNK_0x36187931D29E5BBE(68, "BB_Chase");
			UNK_0x36187931D29E5BBE(69, "BB_Chase");
			UNK_0x9E5E60D8C63FD9D1();
			while ((((((((((!UNK_0xB87F6CF6E5628C67(joaat("JET")) || !UNK_0xB87F6CF6E5628C67(joaat("S_M_Y_AIRWORKER"))) || !UNK_0xB87F6CF6E5628C67(joaat("SHAMAL"))) || !UNK_0xB87F6CF6E5628C67(joaat("S_M_Y_COP_01"))) || !UNK_0xB87F6CF6E5628C67(joaat("POLICE3"))) || !UNK_0xB87F6CF6E5628C67(joaat("COGCABRIO"))) || !UNK_0xB87F6CF6E5628C67(joaat("RAPIDGT"))) || !UNK_0xB87F6CF6E5628C67(joaat("PROP_JET_BLOODSPLAT_01"))) || !UNK_0x3DDA6C6A285628E4(68, "BB_Chase")) || !UNK_0x3DDA6C6A285628E4(69, "BB_Chase")) || !UNK_0x25F7A4D42AF2AB93())
			{
				SYSTEM::WAIT(0);
			}
			func_125();
			if (func_23())
			{
				if (func_184())
				{
					func_141();
					while (!func_128())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!UNK_0xC844350D5D58C99A(bLocal_3259))
				{
					if (func_184())
					{
						bLocal_3259 = func_143(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						UNK_0x120A395B0ECB8EA5(bLocal_3259, true);
						UNK_0x71199B01895C6202(func_183());
						UNK_0x44A200C9B6E1CEA6(bLocal_3259, true);
					}
					else
					{
						bLocal_3259 = UNK_0x122AAB0B1D6F55AD(joaat("RAPIDGT"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
						UNK_0xC002508A277213DE(bLocal_3259, 112, 112);
						UNK_0x120A395B0ECB8EA5(bLocal_3259, true);
						UNK_0x71199B01895C6202(joaat("RAPIDGT"));
						UNK_0x44A200C9B6E1CEA6(bLocal_3259, true);
					}
				}
			}
			else if (!UNK_0xC844350D5D58C99A(bLocal_3259))
			{
				bLocal_3259 = UNK_0x122AAB0B1D6F55AD(joaat("RAPIDGT"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
				UNK_0xC002508A277213DE(bLocal_3259, 112, 112);
				UNK_0x71199B01895C6202(joaat("RAPIDGT"));
				UNK_0x120A395B0ECB8EA5(bLocal_3259, true);
				UNK_0x44A200C9B6E1CEA6(bLocal_3259, true);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3258))
			{
				bLocal_3258 = UNK_0x122AAB0B1D6F55AD(joaat("COGCABRIO"), -928.3279f, -2916.16f, 12.945f, 61.7688f, true, true, false);
				UNK_0xC002508A277213DE(bLocal_3258, 27, 27);
				UNK_0x71199B01895C6202(joaat("COGCABRIO"));
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3263))
			{
				bLocal_3263 = UNK_0x122AAB0B1D6F55AD(joaat("POLICE3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, true, true, false);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3248))
			{
				bLocal_3248 = UNK_0x36F2404464202779(6, joaat("S_M_Y_COP_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, true);
				UNK_0x262EF6C6306BEA6C(bLocal_3248, joaat("WEAPON_PISTOL"), 1000, true, true);
				func_127(bLocal_3248, 0);
				UNK_0x71199B01895C6202(joaat("S_M_Y_COP_01"));
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3282))
			{
				bLocal_3282 = UNK_0x7707E48765093646(joaat("PROP_JET_BLOODSPLAT_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
				UNK_0xC023D1C4BF532815(bLocal_3282, 0f, 0f, -121.5948f, 2, 1);
				UNK_0xC4C7FD0EF3FEAB0B(bLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
				UNK_0x71199B01895C6202(joaat("PROP_JET_BLOODSPLAT_01"));
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3266))
			{
				bLocal_3266 = UNK_0x122AAB0B1D6F55AD(joaat("JET"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
				UNK_0x446EA2500F021666(bLocal_3266, 2);
				UNK_0x05EC10F460C3A4AF(bLocal_3266, 0);
				UNK_0x1E9649458B15960F(bLocal_3266, true);
				UNK_0xAA6B3A4292417750(bLocal_3266, true, true, true, true, true, false, 0, false);
				UNK_0x71199B01895C6202(joaat("JET"));
				iLocal_3763 = UNK_0xC1879030EB463216("scr_trev4_747_engine_damage", bLocal_3266, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1f, 0, 0, 0);
				UNK_0x25BD67336EA4AECE(bLocal_3266, 500);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3228))
			{
				bLocal_3228 = UNK_0x36F2404464202779(26, joaat("S_M_Y_AIRWORKER"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, 1, true);
				func_17(&uLocal_3578, 4, bLocal_3228, "HangerWorker", 0, 1);
				UNK_0x71199B01895C6202(joaat("S_M_Y_AIRWORKER"));
				UNK_0x25C5402CC10F76CD(bLocal_3228, true);
				UNK_0x11AD11297DC58CC7(bLocal_3228, true);
				UNK_0xF3268524E9BE6D6E(bLocal_3228, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
				UNK_0xFADC0A217229F6B5(bLocal_3228, true);
				UNK_0xAA6B3A4292417750(bLocal_3228, false, false, false, false, false, false, 0, false);
				UNK_0x6DAD7906B73F064D(&bLocal_3228);
			}
			if (func_124(0) == 0 || func_124(0) == joaat("WEAPON_UNARMED"))
			{
				func_123(1);
			}
			break;
	}
}

void func_123(bool bParam0)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		bVar0 = UNK_0xE939991717D9E39F(UNK_0x16F2683693E537C9(), 0);
		if (bVar0 != joaat("WEAPON_UNARMED"))
		{
			UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), bVar0, bParam0);
		}
	}
}

int func_124(int iParam0)
{
	if (Global_98781 > 0)
	{
		return Global_105187.f_21[iParam0];
	}
	return Global_102203.f_21[iParam0];
}

void func_125()
{
	if (iLocal_3339 == 0)
	{
		if (!UNK_0xC844350D5D58C99A(iLocal_3268[0]))
		{
			iLocal_3268[0] = UNK_0x122AAB0B1D6F55AD(joaat("POLICE3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, true, true, false);
			UNK_0x626D5ADA3EFAE431(iLocal_3268[0], 0);
		}
		if (!UNK_0xC844350D5D58C99A(iLocal_3233[0]))
		{
			iLocal_3233[0] = UNK_0x36F2404464202779(6, joaat("S_M_Y_COP_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, true);
			UNK_0x262EF6C6306BEA6C(iLocal_3233[0], joaat("WEAPON_PISTOL"), 1000, true, true);
			UNK_0x298903DD96203C2C(iLocal_3233[0], 20);
			UNK_0xE8832A9E16A57A1F(iLocal_3233[0], true, 1);
			UNK_0x9BE7E7B6B488CC55(iLocal_3233[0], UNK_0x16F2683693E537C9(), -1, 1);
			func_127(iLocal_3233[0], 0);
		}
		if (!UNK_0xC844350D5D58C99A(bLocal_3267))
		{
			bLocal_3267 = UNK_0x122AAB0B1D6F55AD(joaat("SHAMAL"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, true, true, false);
			UNK_0xB9FD7450C0DAB575(bLocal_3267, 1084227584 /* Float: 5f */);
			UNK_0x71199B01895C6202(joaat("SHAMAL"));
			UNK_0xD458AC1C1D29C3B4(bLocal_3267, 2000, false);
			UNK_0x611DFA9294B339CA(bLocal_3267, false, 0, true);
		}
		if (!UNK_0xC844350D5D58C99A(iLocal_3233[6]))
		{
			iLocal_3233[6] = UNK_0x852A19533F896693(iLocal_3268[0], 6, joaat("S_M_Y_COP_01"), false, 1, true);
			UNK_0x262EF6C6306BEA6C(iLocal_3233[6], joaat("WEAPON_PISTOL"), 1000, true, true);
			UNK_0x298903DD96203C2C(iLocal_3233[6], 20);
			UNK_0xE8832A9E16A57A1F(iLocal_3233[6], true, 1);
			UNK_0x11AD11297DC58CC7(iLocal_3233[6], true);
			func_127(iLocal_3233[6], 0);
		}
		if (!UNK_0xC844350D5D58C99A(iLocal_3233[7]))
		{
			iLocal_3233[7] = UNK_0x852A19533F896693(iLocal_3268[0], 6, joaat("S_M_Y_COP_01"), -1, 1, true);
			UNK_0x262EF6C6306BEA6C(iLocal_3233[7], joaat("WEAPON_PISTOL"), 1000, true, true);
			UNK_0x298903DD96203C2C(iLocal_3233[7], 20);
			UNK_0xE8832A9E16A57A1F(iLocal_3233[7], true, 1);
			UNK_0x11AD11297DC58CC7(iLocal_3233[7], true);
			func_127(iLocal_3233[7], 0);
		}
		if (!UNK_0xC844350D5D58C99A(iLocal_3268[1]))
		{
			iLocal_3268[1] = UNK_0x122AAB0B1D6F55AD(joaat("POLICE3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, true, true, false);
			UNK_0x626D5ADA3EFAE431(iLocal_3268[1], 0);
		}
		if (!UNK_0xC844350D5D58C99A(iLocal_3233[8]))
		{
			iLocal_3233[8] = UNK_0x852A19533F896693(iLocal_3268[1], 6, joaat("S_M_Y_COP_01"), false, 1, true);
			UNK_0x262EF6C6306BEA6C(iLocal_3233[8], joaat("WEAPON_PISTOL"), 1000, true, true);
			UNK_0x298903DD96203C2C(iLocal_3233[8], 20);
			UNK_0xE8832A9E16A57A1F(iLocal_3233[8], true, 1);
			UNK_0x11AD11297DC58CC7(iLocal_3233[8], true);
			func_127(iLocal_3233[8], 0);
		}
		if (!UNK_0xC844350D5D58C99A(iLocal_3233[9]))
		{
			iLocal_3233[9] = UNK_0x852A19533F896693(iLocal_3268[1], 6, joaat("S_M_Y_COP_01"), -1, 1, true);
			UNK_0x262EF6C6306BEA6C(iLocal_3233[9], joaat("WEAPON_PISTOL"), 1000, true, true);
			UNK_0x298903DD96203C2C(iLocal_3233[9], 20);
			UNK_0xE8832A9E16A57A1F(iLocal_3233[9], true, 1);
			UNK_0x11AD11297DC58CC7(iLocal_3233[9], true);
			func_127(iLocal_3233[9], 0);
		}
		if (!UNK_0xC844350D5D58C99A(iLocal_3233[10]))
		{
			iLocal_3233[10] = UNK_0x36F2404464202779(6, joaat("S_M_Y_COP_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, 1, true);
			UNK_0x262EF6C6306BEA6C(iLocal_3233[10], joaat("WEAPON_PISTOL"), 1000, true, true);
			UNK_0x298903DD96203C2C(iLocal_3233[10], 20);
			UNK_0xE8832A9E16A57A1F(iLocal_3233[10], true, 1);
			UNK_0x11AD11297DC58CC7(iLocal_3233[10], true);
			func_127(iLocal_3233[10], 0);
			UNK_0xDB4B1656BA06B94E(iLocal_3233[10], 1);
		}
		iLocal_3339 = 1;
	}
}

void func_126(bool bParam0, int iParam1)
{
	UNK_0x5D96D8530B3D0904(&Global_30926, bParam0);
	StringCopy(&(Global_30927[bParam0 /*6*/]), UNK_0xBB0808A181D4745C(), 24);
	Global_30982[bParam0] = iParam1;
}

void func_127(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_61542[iVar0 /*2*/] != 0)
			{
				if (Global_61542[iVar0 /*2*/] == bParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_61541)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_61542[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_61542[iVar1 /*2*/] = bParam0;
	Global_61542[iVar1 /*2*/].f_1 = 7;
	Global_61541++;
}

bool func_128()
{
	return func_129(&(Global_105187.f_2890));
}

bool func_129(var uParam0)
{
	if (func_130(uParam0))
	{
		if (UNK_0xB87F6CF6E5628C67(uParam0->f_12.f_66))
		{
			return true;
		}
		else
		{
			return false;
		}
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

bool func_130(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return false;
	}
	if (!func_132(uParam0->f_12.f_66, 0))
	{
		return false;
	}
	if (uParam0->f_12.f_66 == joaat("STUNT") && func_131(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608 /* Float: 0.5f */, 0))
	{
		return false;
	}
	return true;
}

bool func_131(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_132(bool bParam0, bool bParam1)
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
		if (!func_140())
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
		if ((((!func_139() && !func_138()) && !func_137()) && !func_136()) && !func_140())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_137())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_135(bParam0))
		{
			return false;
		}
	}
	if (!func_133(bParam0))
	{
		return false;
	}
	return true;
}

bool func_133(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_134())
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

bool func_134()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_135(bool bParam0)
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

bool func_136()
{
	return false;
}

bool func_137()
{
	return true;
}

bool func_138()
{
	return true;
}

bool func_139()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_140()
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

void func_141()
{
	func_142(&(Global_105187.f_2890));
}

void func_142(var uParam0)
{
	if (func_130(uParam0))
	{
		UNK_0x523BCC9DC80CD82F(uParam0->f_12.f_66);
	}
}

bool func_143(vector3 vParam0, bool bParam3)
{
	return func_144(&(Global_105187.f_2890), vParam0, bParam3, 0);
}

bool func_144(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	var uVar5;
	int iVar8;

	if (func_130(uParam0))
	{
		if (func_71(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { *uParam0 };
			bParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("MONSTER") || uParam0->f_12.f_66 == joaat("MARSHALL"))
		{
			if (UNK_0x0399732A9EBC368E(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, true))
			{
				vParam1 = { -850.93f, 158.82f, 65.7f };
				bParam4 = 89.5f;
			}
		}
		if (func_129(uParam0))
		{
			UNK_0x536F1BE96C726C4B(vParam1, 5f, 1, 0, 0, false);
			func_182(vParam1, 5f, 0);
			bVar0 = UNK_0x122AAB0B1D6F55AD(uParam0->f_12.f_66, vParam1, bParam4, true, true, false);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				vVar1 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					UNK_0x08841CDB215AE18F(bVar0, vParam1, 0, 0, 1);
				}
				func_165(bVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (UNK_0xA7082C42B8809BF2(uParam0->f_12.f_66) || UNK_0x83496B932152D4D4(uParam0->f_12.f_66))
				{
					if (!UNK_0xA267CBB20C26B1B9(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bVar0)))
						{
							func_164(uParam0->f_11, 1);
						}
						else if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bVar0)))
						{
							func_164(uParam0->f_11, 2);
						}
					}
					UNK_0x316958DDB94DF3FC(bVar0, 0);
					UNK_0x626D5ADA3EFAE431(bVar0, 0);
					UNK_0x44A200C9B6E1CEA6(bVar0, true);
					func_163(bVar0, uParam0->f_11);
				}
				else if ((!func_161(bVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && UNK_0x7F8A39872A07D2CE(UNK_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar8 = func_160(bVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_155(iVar8);
					}
				}
				if (((Global_98744 != 13 && Global_98744 != 10) && Global_98744 != 11) && Global_98744 != 12)
				{
					if (UNK_0x12AB0310C2281427(&(Global_98744.f_3)) == Global_76429)
					{
						if (uParam0->f_12.f_66 == Global_111638.f_32744.f_69[21 /*78*/].f_66)
						{
							func_152(24, 0);
							func_155(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_145(bVar0, uParam0->f_11);
				}
				UNK_0x71199B01895C6202(uParam0->f_12.f_66);
				vVar1 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
			}
			return bVar0;
		}
	}
	return bVar0;
}

void func_145(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_146(bParam0))
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
	func_39(bParam0, &(Global_111638.f_32744.f_5510));
}

bool func_146(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_45(bParam0, 0, 0)) || func_45(bParam0, 1, 0)) || func_45(bParam0, 2, 0)) || func_34(bParam0) != 145) || func_151(bParam0)) || func_150(bParam0)) || func_149(bParam0)) || func_148(bParam0)) || !func_147(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_150(bParam0))
		{
		}
		if (func_150(bParam0))
		{
		}
		if (func_45(bParam0, 0, 0))
		{
		}
		if (func_45(bParam0, 1, 0))
		{
		}
		if (func_45(bParam0, 2, 0))
		{
		}
		if (func_34(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_147(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_132(bParam0, 0))
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

bool func_148(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_132(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_149(bool bParam0)
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

bool func_150(bool bParam0)
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

bool func_151(bool bParam0)
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

void func_152(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_154(iParam0, 0))
		{
			func_153(iParam0, 1, 0);
			func_153(iParam0, 2, 0);
			func_153(iParam0, 3, 0);
			func_153(iParam0, 4, 0);
			func_153(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_153(iParam0, 0, 0);
	}
}

void func_153(int iParam0, bool bParam1, bool bParam2)
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

bool func_154(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_155(int iParam0)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (func_159(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			bVar0 = true;
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xDF1306B443CD3D15(Global_75441.f_139[iParam0], 0))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_75441.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
				UNK_0xA954465BA6FDEFE2(&(Global_75441.f_139[iParam0]));
			}
		}
		Global_75441[iParam0] = 1;
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_154(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] > 3) && (!func_157(0, Global_75441.f_555[0 /*21*/].f_12) || !func_157(1, Global_75441.f_555[0 /*21*/].f_12)))
			{
				func_156(&(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_152(iParam0, 0);
		}
	}
}

void func_156(var uParam0, var uParam1)
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

bool func_157(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_158(&(Global_111638.f_32744.f_5038[iVar0 /*157*/])))
	{
		return false;
	}
	return func_132(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_158(var uParam0)
{
	return *uParam0;
}

bool func_159(var uParam0, int iParam1)
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
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_36(2, 1);
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
			if (func_140())
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
			if (func_140())
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
		if (!func_71(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_71(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_71(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_160(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]) && !UNK_0x437347B10A200C4B(Global_75441.f_484[iVar0], 0)) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[iVar0], 0))
		{
			UNK_0x9412F17E127D9759(bParam0, &iVar1, &iVar2);
			UNK_0x9412F17E127D9759(Global_75441.f_484[iVar0], &iVar3, &iVar4);
			if (((UNK_0x134B62B726CEC8E6(bParam0) == UNK_0x134B62B726CEC8E6(Global_75441.f_484[iVar0]) && UNK_0xF22DC2D0CA24A151(bParam0) == UNK_0xF22DC2D0CA24A151(Global_75441.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_161(bool bParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;

	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	switch (iVar0)
	{
		case joaat("CARGOBOB"):
			if (func_162(bParam0, Global_75441.f_139[38], 0))
			{
				func_155(38);
				return true;
			}
			break;
		case joaat("FIRETRUK"):
			if (func_162(bParam0, Global_75441.f_139[43], 1))
			{
				func_155(43);
				return true;
			}
			break;
		case joaat("CUBAN800"):
			iVar5 = UNK_0xA361D247A75E0128(UNK_0x16F2683693E537C9(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_162(bParam0, uVar1[iVar6], 1) && func_131(UNK_0x68F4C0EC296D3901(uVar1[iVar6], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_71(vParam1, 0f, 0f, 0f, 0)) || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(uVar1[iVar6], true), 1) < 10f)
					{
						UNK_0xA954465BA6FDEFE2(&bParam0);
						return true;
					}
					else
					{
						return false;
					}
				}
				iVar6++;
			}
			break;
		case joaat("LUXOR2"):
			if ((UNK_0xC844350D5D58C99A(Global_75441.f_484[14]) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[14], 0))
			{
				if (UNK_0x134B62B726CEC8E6(Global_75441.f_484[14]) == joaat("LUXOR2") && UNK_0xF22DC2D0CA24A151(bParam0) == UNK_0xF22DC2D0CA24A151(Global_75441.f_484[14]))
				{
					func_155(14);
					return true;
				}
			}
			break;
		case joaat("SWIFT2"):
			if ((UNK_0xC844350D5D58C99A(Global_75441.f_484[20]) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[20], 0))
			{
				if (UNK_0x134B62B726CEC8E6(Global_75441.f_484[20]) == joaat("SWIFT2") && UNK_0xF22DC2D0CA24A151(bParam0) == UNK_0xF22DC2D0CA24A151(Global_75441.f_484[20]))
				{
					func_155(20);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_162(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((UNK_0xC844350D5D58C99A(bParam1) && !UNK_0x437347B10A200C4B(bParam1, 0)) && UNK_0xDF1306B443CD3D15(bParam1, 0))
	{
		if (bParam2)
		{
			UNK_0x9412F17E127D9759(bParam0, &iVar0, &iVar1);
			UNK_0x9412F17E127D9759(bParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
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

void func_163(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			Global_96075[iVar0] = bParam0;
			Global_96085[iVar0] = iParam1;
			Global_96095[iVar0] = UNK_0x134B62B726CEC8E6(bParam0);
			if (UNK_0x8E39AC3C76C8AA58(Global_96095[iVar0]))
			{
				Global_96123[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_96123[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_164(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (iParam0 == 145 || Global_96085[iVar0] == iParam0)
			{
				if (iParam1 == 0 || UNK_0x134B62B726CEC8E6(Global_96075[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Global_96075[iVar0], 0))
					{
						UNK_0x73270B3C9CC833FD(Global_96075[iVar0], false, 1);
						UNK_0xA954465BA6FDEFE2(&(Global_96075[iVar0]));
						Global_96085[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_165(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (!func_174(bParam0))
		{
			if (UNK_0x12AB0310C2281427(&(uParam1->f_1)) != 0)
			{
				UNK_0x55A3C4ED4728EA42(bParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < UNK_0xBCB9B04D4DA658DF())
			{
				UNK_0xA22B35B584F0580A(bParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("SOVEREIGN"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("CASCO"))
		{
			iVar0 = 1;
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_40(iVar0 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_40(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("SANDKING2"))
		{
			iVar1 = 1;
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_40(iVar1 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_40(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_40(iVar2)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_40(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_40(iVar3)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_40(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == 1181339704)
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_40(iVar4)))
					{
					}
					else
					{
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_40(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == -1728685474)
		{
			if (UNK_0x0ECB5CA5140957AD(bParam0, 10) != 0)
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), false);
			}
		}
		if (uParam1->f_66 == joaat("NIGHTSHARK"))
		{
			UNK_0xF4FAAFEE2CE3B86C(bParam0, 0);
			if (UNK_0x0ECB5CA5140957AD(bParam0, 5) != -1)
			{
				UNK_0xF4FAAFEE2CE3B86C(bParam0, 1);
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 13))
		{
			UNK_0xBC3B1E7E1CC2D15C(bParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			UNK_0x231087BDB2AEBD55(bParam0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 12))
		{
			UNK_0xAA443C33B073D88B(bParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			UNK_0xC15818BDC09EC354(bParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			UNK_0xC002508A277213DE(bParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		UNK_0x58A0C35FA7CA6162(bParam0, uParam1->f_7, uParam1->f_8);
		if (((UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_173(bParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_172())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		UNK_0x9F0DB8A295EA8513(bParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			UNK_0x8BF0BEF985EB6D43(bParam0, 0);
		}
		else
		{
			UNK_0x8BF0BEF985EB6D43(bParam0, 0);
			UNK_0x8BF0BEF985EB6D43(bParam0, uParam1->f_65);
		}
		UNK_0xA22F71BBC8173C39(bParam0, !UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 9));
		if (bParam2)
		{
			UNK_0x71EDC33E5A423750(bParam0, uParam1->f_70);
		}
		UNK_0x85654A532F20966B(bParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		UNK_0x7726E33AC3B60544(bParam0, 2, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 28));
		UNK_0x7726E33AC3B60544(bParam0, 3, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 29));
		UNK_0x7726E33AC3B60544(bParam0, 0, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 30));
		UNK_0x7726E33AC3B60544(bParam0, 1, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 31));
		UNK_0x750A9DEB80D6992C(bParam0, UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 10));
		if (UNK_0x579935D850368851(bParam0) > 1 && uParam1->f_67 >= 0)
		{
			UNK_0x446EA2500F021666(bParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(bParam0)))
			{
				if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_171(bParam0, uParam1->f_69);
					}
				}
				else
				{
					func_171(bParam0, uParam1->f_69);
				}
			}
		}
		if (UNK_0x587993B327460A82(bParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				UNK_0x429C172A00A5F89B(bParam0, 1);
			}
			else
			{
				UNK_0x821D9A7077DBCDBC(bParam0, 1);
			}
		}
		if (bParam3)
		{
			func_166(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!UNK_0xAFB8495D36825275(uParam1->f_66) && !UNK_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_40(iVar5 + 1)))
				{
					if (!UNK_0xDD62D560CFE11A27(bParam0, iVar5 + 1))
					{
						UNK_0xD3421E391490133B(bParam0, iVar5 + 1, false);
					}
				}
				else if (UNK_0xDD62D560CFE11A27(bParam0, iVar5 + 1))
				{
					UNK_0xD3421E391490133B(bParam0, iVar5 + 1, true);
				}
				iVar5++;
			}
		}
		if ((UNK_0x134B62B726CEC8E6(bParam0) == joaat("SHEAVA") || UNK_0x134B62B726CEC8E6(bParam0) == joaat("OMNIS")) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("LE7B"))
		{
			if (UNK_0x0ECB5CA5140957AD(bParam0, 0) == -1)
			{
				UNK_0xD3421E391490133B(bParam0, true, false);
			}
		}
		if (((UNK_0xC41A9202669A24C4(uParam1->f_66) && UNK_0xE7BF3A9C4976022F(bParam0)) && !UNK_0x4906F8A34E9F4814(bParam0, joaat("AVENGER"))) && !((((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19) && Global_4456448.f_2 == 20))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 23))
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 22))
				{
					UNK_0xB58CA658A628ED02(bParam0, 2);
				}
				else
				{
					UNK_0xB58CA658A628ED02(bParam0, 3);
				}
			}
			else
			{
				UNK_0xB58CA658A628ED02(bParam0, 4);
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 27))
		{
			UNK_0xA1093ABB024EC9BD(bParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			UNK_0xA1093ABB024EC9BD(bParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_166(bool bParam0, var uParam1, var uParam2)
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
	UNK_0xF95FF0A179413A39(*bParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			UNK_0x73BEC6F1685574E6(*bParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				UNK_0x73BEC6F1685574E6(*bParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					UNK_0x0CAC3E53DC3F794F(*bParam0, 255);
				}
				else
				{
					UNK_0x0CAC3E53DC3F794F(*bParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				UNK_0x73BEC6F1685574E6(*bParam0, iVar1, false);
			}
		}
		else if (UNK_0x0ECB5CA5140957AD(*bParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			UNK_0x7AFDC9F56E7BB635(*bParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					UNK_0xEE6A1776A67F70C1(*bParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					UNK_0xEE6A1776A67F70C1(*bParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					UNK_0xEE6A1776A67F70C1(*bParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_170(UNK_0x134B62B726CEC8E6(*bParam0), 1) && UNK_0x0ECB5CA5140957AD(*bParam0, 24) != func_169(*bParam0, ((*uParam1)[38] - 1)))
	{
		UNK_0xEE6A1776A67F70C1(*bParam0, 24, func_169(*bParam0, ((*uParam1)[38] - 1)), false);
	}
	func_168(bParam0);
	if (func_167(*bParam0))
	{
		UNK_0xD5A0214B20BCBAD8(*bParam0, 1);
		UNK_0x44A200C9B6E1CEA6(*bParam0, true);
	}
	return 1;
}

bool func_167(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	if ((UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0x40B3F576B41FA183(bParam0) > 0)
	{
		UNK_0xF95FF0A179413A39(bParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (UNK_0x0ECB5CA5140957AD(bParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, UNK_0xAE6250B518DF3C3B(bParam0, iVar1, UNK_0x0ECB5CA5140957AD(bParam0, iVar1)), 16);
				iVar2 = UNK_0x12AB0310C2281427(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == UNK_0x12AB0310C2281427("MNU_CAGE") || iVar2 == UNK_0x12AB0310C2281427("SABRE_CAG"))
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_168(bool bParam0)
{
	switch (UNK_0x134B62B726CEC8E6(*bParam0))
	{
		case joaat("STARLING"):
			if (UNK_0x0ECB5CA5140957AD(*bParam0, 4) == 0)
			{
				UNK_0xEE6A1776A67F70C1(*bParam0, 13, false, false);
			}
			else
			{
				UNK_0x7AFDC9F56E7BB635(*bParam0, 13);
			}
			break;
	}
}

int func_169(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		switch (UNK_0x134B62B726CEC8E6(bParam0))
		{
			case joaat("TORNADO5"):
				switch (iParam1)
				{
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
						return 4;
				}
				break;
			case joaat("FACTION3"):
				return 3;
		}
		iVar0 = UNK_0x461CAC843A21E4B6(bParam0, 38);
		iVar1 = UNK_0x461CAC843A21E4B6(bParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

bool func_170(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return true;
		case joaat("SABREGT2"):
			if (!Global_262145.f_14219)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("TORNADO5"):
			if (!Global_262145.f_14220)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("VIRGO2"):
			if (!Global_262145.f_14218)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("MINIVAN2"):
			if (!Global_262145.f_14221)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("SLAMVAN3"):
			if (!Global_262145.f_14223)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("FACTION3"):
			if (!Global_262145.f_14222)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("COMET3"):
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("DIABLOUS2"):
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("FCR2"):
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("ELEGY"):
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("NERO2"):
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("ITALIGTB2"):
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("SPECTER2"):
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("TECHNICAL3"):
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("INSURGENT3"):
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return false;
				}
				return true;
			}
			return false;
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("ISSI4"):
		case joaat("ISSI5"):
		case joaat("ISSI6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("DOMINATOR4"):
		case joaat("DOMINATOR5"):
		case joaat("DOMINATOR6"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case joaat("BRUISER"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
		case 1717532765:
		case 1107404867:
		case -913589546:
			return true;
	}
	return false;
}

void func_171(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (UNK_0x40B3F576B41FA183(bParam0) > 0)
	{
		UNK_0xF95FF0A179413A39(bParam0, 0);
		bVar0 = UNK_0x0ECB5CA5140957AD(bParam0, 24);
		iVar1 = UNK_0x3A5601978F787E51(bParam0, 24);
		UNK_0x920DACD685EA4957(bParam0, iParam1);
		if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("TORNADO6") || UNK_0x134B62B726CEC8E6(bParam0) == -1804415708)
		{
			return;
		}
		if (bVar0 == -1)
		{
			UNK_0x7AFDC9F56E7BB635(bParam0, 24);
		}
		else
		{
			UNK_0xEE6A1776A67F70C1(bParam0, 24, bVar0, iVar1 == 1);
		}
	}
}

bool func_172()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPINDEPENDENCE"));
}

bool func_173(bool bParam0)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (UNK_0xF1D385D359D58F72("MPBitset", 3))
			{
				if (UNK_0x30F813723591D02E(bParam0, "MPBitset"))
				{
					bVar0 = UNK_0x1E2DFB0EF4BB4566(bParam0, "MPBitset");
				}
				return UNK_0xEAE0D21A50E6C7F4(bVar0, 4);
			}
		}
	}
	return false;
}

bool func_174(bool bParam0)
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!func_180(UNK_0xD803B885F5E47A62(), -1))
		{
			bParam0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		}
	}
	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return false;
	}
	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return false;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	if (func_176(UNK_0xD803B885F5E47A62()) == 3)
	{
		if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (func_175(bParam0) != -1)
			{
				return true;
			}
		}
	}
	return false;
}

int func_175(bool bParam0)
{
	if (UNK_0xF1D385D359D58F72("FMDeliverableID", 3))
	{
		if (UNK_0x30F813723591D02E(bParam0, "FMDeliverableID"))
		{
			return UNK_0x1E2DFB0EF4BB4566(bParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_176(int iParam0)
{
	if (func_179(iParam0) == 233)
	{
		return func_177(iParam0);
	}
	return -1;
}

int func_177(int iParam0)
{
	if (func_178(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_178(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_179(int iParam0)
{
	if (func_178(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_180(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (func_181(bParam0, 1, 1))
	{
		if (UNK_0x405E212DDE472467(UNK_0x9539D44F3E4492F6(bParam0), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x9539D44F3E4492F6(bParam0), 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (UNK_0x16F2683693E537C9() == UNK_0xA30B8362589C124A(bVar0, bParam1, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_181(bool bParam0, bool bParam1, bool bParam2)
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

void func_182(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_159(&(Global_75441.f_555[0 /*21*/]), iVar0))
		{
			if (UNK_0x0EB28750412C3A5A(vParam0, Global_75441.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_155(iVar0);
			}
		}
		iVar0++;
	}
}

var func_183()
{
	return Global_105187.f_2890.f_12.f_66;
}

bool func_184()
{
	return func_130(&(Global_105187.f_2890));
}

void func_185()
{
	iLocal_3293 = UNK_0xB01F55A0FD1CFD49("BREAKING_NEWS");
	UNK_0x523BCC9DC80CD82F(joaat("JET"));
	UNK_0x523BCC9DC80CD82F(joaat("POLICE3"));
	UNK_0x523BCC9DC80CD82F(joaat("MAVERICK"));
	UNK_0x523BCC9DC80CD82F(joaat("BISON"));
	UNK_0x523BCC9DC80CD82F(joaat("BLISTA"));
	UNK_0x523BCC9DC80CD82F(joaat("IG_MOLLY"));
	UNK_0x523BCC9DC80CD82F(joaat("COGCABRIO"));
	UNK_0x523BCC9DC80CD82F(joaat("RAPIDGT"));
	UNK_0x36187931D29E5BBE(45, "BB_Chase");
	UNK_0x36187931D29E5BBE(35, "BB_Chase");
	UNK_0x36187931D29E5BBE(2, "BB_Chase");
	UNK_0x36187931D29E5BBE(54, "BB_Chase");
	UNK_0x36187931D29E5BBE(55, "BB_Chase");
	UNK_0x36187931D29E5BBE(67, "BB_Chase");
	func_187(1, "BB_Chase");
	if (func_23())
	{
		if (func_184())
		{
			if (!UNK_0xAFB8495D36825275(func_183()) && !UNK_0xC41A9202669A24C4(func_183()))
			{
				func_141();
				while (!func_128())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	while (((((((!UNK_0xB87F6CF6E5628C67(joaat("JET")) || !UNK_0xB87F6CF6E5628C67(joaat("POLICE3"))) || !UNK_0xB87F6CF6E5628C67(joaat("MAVERICK"))) || !UNK_0xB87F6CF6E5628C67(joaat("BISON"))) || !UNK_0xB87F6CF6E5628C67(joaat("BLISTA"))) || !UNK_0xB87F6CF6E5628C67(joaat("IG_MOLLY"))) || !UNK_0xB87F6CF6E5628C67(joaat("COGCABRIO"))) || !UNK_0xB87F6CF6E5628C67(joaat("RAPIDGT")))
	{
		SYSTEM::WAIT(0);
	}
	while (!UNK_0x83D8570832F172A7(iLocal_3293) || !func_186(1, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!UNK_0x3DDA6C6A285628E4(45, "BB_Chase") || !UNK_0x3DDA6C6A285628E4(35, "BB_Chase")) || !UNK_0x3DDA6C6A285628E4(2, "BB_Chase")) || !UNK_0x3DDA6C6A285628E4(54, "BB_Chase")) || !UNK_0x3DDA6C6A285628E4(55, "BB_Chase")) || !UNK_0x3DDA6C6A285628E4(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}

bool func_186(bool bParam0, bool bParam1)
{
	return UNK_0x3DDA6C6A285628E4(bParam0, bParam1);
}

void func_187(bool bParam0, bool bParam1)
{
	UNK_0x36187931D29E5BBE(bParam0, bParam1);
}

void func_188()
{
	func_214();
	func_212();
	UNK_0x790015DC92C918E2();
	UNK_0xB975E4541DDAB1F5(0);
	UNK_0x5C2EBB66AD2EA5FF(0);
	UNK_0xF3039DE1FDB4F6FD(1);
	if (UNK_0x76395FF5E8D5E643(iLocal_3220))
	{
		UNK_0xA4A8625CC710BC1F(iLocal_3220);
	}
	if (UNK_0x49083FDB78AC0509(iLocal_3221))
	{
		UNK_0xDDABC98CFF1A4C60(iLocal_3221);
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
		UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 93.7701f);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3259))
	{
		if (UNK_0xDF1306B443CD3D15(bLocal_3259, 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(bLocal_3259))
			{
				UNK_0xC55F2A0377488064(bLocal_3259);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3258))
	{
		if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
		{
			UNK_0x06FF977AA95DCCE3(bLocal_3258, 0);
			if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
			{
				UNK_0xC55F2A0377488064(bLocal_3258);
			}
		}
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3759))
	{
		UNK_0xF7E25143642732EA(iLocal_3759, 0);
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3760))
	{
		UNK_0xF7E25143642732EA(iLocal_3760, 0);
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3761))
	{
		UNK_0xF7E25143642732EA(iLocal_3761, 0);
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3762))
	{
		UNK_0xF7E25143642732EA(iLocal_3762, 0);
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3763))
	{
		UNK_0xF7E25143642732EA(iLocal_3763, 0);
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3755[0]))
	{
		UNK_0xF7E25143642732EA(iLocal_3755[0], 0);
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3755[1]))
	{
		UNK_0xF7E25143642732EA(iLocal_3755[1], 0);
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3755[2]))
	{
		UNK_0xF7E25143642732EA(iLocal_3755[2], 0);
	}
	UNK_0x29D7581AEF4440C2();
	if (UNK_0xC844350D5D58C99A(bLocal_3222))
	{
		UNK_0xEBA53F35D0085654(&bLocal_3222);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3228))
	{
		UNK_0xEBA53F35D0085654(&bLocal_3228);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3245))
	{
		UNK_0xEBA53F35D0085654(&bLocal_3245);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3246))
	{
		UNK_0xEBA53F35D0085654(&bLocal_3246);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3247))
	{
		UNK_0xEBA53F35D0085654(&bLocal_3247);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3248))
	{
		UNK_0xEBA53F35D0085654(&bLocal_3248);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3249))
	{
		UNK_0xEBA53F35D0085654(&bLocal_3249);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3250))
	{
		UNK_0xEBA53F35D0085654(&bLocal_3250);
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3223[0]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3223[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3223[1]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3223[1]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3223[2]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3223[2]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3223[3]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3223[3]));
	}
	if (UNK_0xC844350D5D58C99A(uLocal_3229[0]))
	{
		UNK_0xEBA53F35D0085654(&(uLocal_3229[0]));
	}
	if (UNK_0xC844350D5D58C99A(uLocal_3229[1]))
	{
		UNK_0xEBA53F35D0085654(&(uLocal_3229[1]));
	}
	if (UNK_0xC844350D5D58C99A(uLocal_3229[2]))
	{
		UNK_0xEBA53F35D0085654(&(uLocal_3229[2]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[0]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3233[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[1]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3233[1]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[2]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3233[2]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[3]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3233[3]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[4]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3233[4]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[5]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3233[5]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[6]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3233[6]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[7]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3233[7]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[8]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3233[8]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[9]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3233[9]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[10]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3233[10]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3251[0]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3251[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3254[0]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3254[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3254[1]))
	{
		UNK_0xEBA53F35D0085654(&(iLocal_3254[1]));
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3258))
	{
		UNK_0xA954465BA6FDEFE2(&bLocal_3258);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3259))
	{
		if (!UNK_0xAF6690C489CC6203(bLocal_3259))
		{
			UNK_0x73270B3C9CC833FD(bLocal_3259, true, 0);
		}
		UNK_0xA954465BA6FDEFE2(&bLocal_3259);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3264))
	{
		UNK_0xA954465BA6FDEFE2(&bLocal_3264);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3265))
	{
		UNK_0xA954465BA6FDEFE2(&bLocal_3265);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3266))
	{
		UNK_0xA954465BA6FDEFE2(&bLocal_3266);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3267))
	{
		UNK_0xA954465BA6FDEFE2(&bLocal_3267);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3271))
	{
		UNK_0xA954465BA6FDEFE2(&bLocal_3271);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3275))
	{
		UNK_0xA954465BA6FDEFE2(&bLocal_3275);
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3279[0]))
	{
		UNK_0xA954465BA6FDEFE2(&(iLocal_3279[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3279[1]))
	{
		UNK_0xA954465BA6FDEFE2(&(iLocal_3279[1]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3260[0]))
	{
		UNK_0xA954465BA6FDEFE2(&(iLocal_3260[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3260[1]))
	{
		UNK_0xA954465BA6FDEFE2(&(iLocal_3260[1]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3279[0]))
	{
		UNK_0xA954465BA6FDEFE2(&(iLocal_3279[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3279[1]))
	{
		UNK_0xA954465BA6FDEFE2(&(iLocal_3279[1]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3268[0]))
	{
		UNK_0xA954465BA6FDEFE2(&(iLocal_3268[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3268[1]))
	{
		UNK_0xA954465BA6FDEFE2(&(iLocal_3268[1]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3272[0]))
	{
		UNK_0xA954465BA6FDEFE2(&(iLocal_3272[0]));
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3263))
	{
		UNK_0xA954465BA6FDEFE2(&bLocal_3263);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3282))
	{
		UNK_0xF690C84DADBB3551(&bLocal_3282);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3283))
	{
		UNK_0xF690C84DADBB3551(&bLocal_3283);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3284))
	{
		UNK_0xF690C84DADBB3551(&bLocal_3284);
	}
	UNK_0x8C26F31DFF77D124();
	if (UNK_0x562F77A7F33D2E46("SOL_3_DRIVE_TO_AIRPORT"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_MAIN_CHASE"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_MAIN_CHASE");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_CHOPPER_CAM");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_HELI_TAKEOFF"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_HELI_TAKEOFF");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_EVENT_TANKER_CRASH"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_EVENT_TANKER_CRASH");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_CAR_JET_ENGINE");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_PLANE_ON_FIRE"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_PLANE_ON_FIRE");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_EVENT_JET_LANDING"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_EVENT_JET_LANDING");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_ARRIVE_AT_HANGAR"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_ON_FOOT_CHASE"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_ON_FOOT_CHASE");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_LOSE_COPS"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_LOSE_COPS");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_PLANE"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_PLANE");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_VEHICLE"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (UNK_0x562F77A7F33D2E46("SOL_3_ENGINE_DEATH_SCENE"))
	{
		UNK_0x8910D3D58E0132B8("SOL_3_ENGINE_DEATH_SCENE");
	}
	UNK_0x55D0A2DB35045A35(iLocal_3211);
	UNK_0x55D0A2DB35045A35(iLocal_3213);
	UNK_0x55D0A2DB35045A35(iLocal_3214);
	UNK_0x55D0A2DB35045A35(iLocal_3215);
	UNK_0x55D0A2DB35045A35(iLocal_3216);
	UNK_0x55D0A2DB35045A35(iLocal_3217);
	UNK_0x55D0A2DB35045A35(iLocal_3218);
	UNK_0x55D0A2DB35045A35(iLocal_3219);
	UNK_0x55D0A2DB35045A35(iLocal_3212);
	func_210(&uLocal_28, 0, 0);
	if (UNK_0x9F4FE516EAACCFC5(iLocal_3289))
	{
		UNK_0x9A8DDC7C522F5BF5(iLocal_3289, 0);
	}
	if (UNK_0x9F4FE516EAACCFC5(iLocal_3290))
	{
		UNK_0x9A8DDC7C522F5BF5(iLocal_3290, 0);
	}
	if (UNK_0x9F4FE516EAACCFC5(iLocal_3291))
	{
		UNK_0x9A8DDC7C522F5BF5(iLocal_3291, 0);
	}
	func_189(1, 1);
	UNK_0x8D17794CE3273D70("misssolomon_3");
	UNK_0x8D17794CE3273D70("amb@world_human_clipboard@male@base");
	UNK_0x8D17794CE3273D70("missheist_agency3aig_lift_waitped_a");
	UNK_0xDB8844D4B7C60440(true, "BB_CHASE");
	UNK_0xDB8844D4B7C60440(2, "BB_Chase");
	UNK_0xDB8844D4B7C60440(9, "BB_CHASE");
	UNK_0xDB8844D4B7C60440(35, "BB_Chase");
	UNK_0xDB8844D4B7C60440(45, "BB_Chase");
	UNK_0xDB8844D4B7C60440(54, "BB_Chase");
	UNK_0xDB8844D4B7C60440(55, "BB_Chase");
	UNK_0xDB8844D4B7C60440(61, "BB_CHASE");
	UNK_0xDB8844D4B7C60440(63, "BB_CHASE");
	UNK_0xDB8844D4B7C60440(64, "BB_CHASE");
	UNK_0xDB8844D4B7C60440(67, "BB_Chase");
	UNK_0xDB8844D4B7C60440(68, "BB_CHASE");
	UNK_0xDB8844D4B7C60440(69, "BB_Chase");
	UNK_0xE17FDF9E3068281B(&iLocal_3293);
	UNK_0xF5A41F3D3B38EFE3("digitalOverlay");
}

void func_189(bool bParam0, bool bParam1)
{
	if (!UNK_0xEA6BC48857E0AC4C(&cLocal_2668))
	{
		iLocal_91 = 0;
		func_209();
		UNK_0x51732B934211201A(bLocal_2684);
		UNK_0xF5894FEB702E7E76(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x85089606511D395B(UNK_0xD803B885F5E47A62(), 1f);
			UNK_0xCE1A2E36474A9D6F(UNK_0xD803B885F5E47A62(), 1);
			UNK_0x060F249A9A3E3F4E(true);
		}
		if (bLocal_107)
		{
			UNK_0x71199B01895C6202(func_208());
		}
		UNK_0x71199B01895C6202(func_207());
		UNK_0x71199B01895C6202(func_206());
		UNK_0x71199B01895C6202(func_205());
		if (!UNK_0x757EF87A33649210() && !bParam0)
		{
			func_204();
			func_203();
			func_200();
		}
		else
		{
			func_196();
			func_195();
		}
		if (bParam1)
		{
			func_190(0);
		}
	}
}

void func_190(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_191(iVar0, bParam0);
		iVar0++;
	}
}

void func_191(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_74(iParam0, 2, 1))
		{
			func_194(iParam0, 2, 1);
		}
	}
	else if (func_74(iParam0, 2, 1))
	{
		func_192(iParam0, 2, 1);
	}
}

void func_192(int iParam0, bool bParam1, bool bParam2)
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
		if (func_76() == 0)
		{
			bVar0 = func_51(func_75(iParam0), -1, 0);
			UNK_0x0674E58A79778E99(&bVar0, bParam1);
			func_193(func_75(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_193(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_52(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

void func_194(int iParam0, bool bParam1, bool bParam2)
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
		if (func_76() == 0)
		{
			bVar0 = func_51(func_75(iParam0), -1, 0);
			UNK_0x5D96D8530B3D0904(&bVar0, bParam1);
			func_193(func_75(iParam0), bVar0, -1, 1, 0);
		}
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_668[iParam0]), bParam1);
	}
}

void func_195()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_2916[iVar0] = 0;
		vLocal_1963[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_109[iVar0] = 0f;
		fLocal_285[iVar0] = 0f;
		fLocal_461[iVar0] = 0f;
		fLocal_637[iVar0] = 0f;
		iLocal_1294[iVar0] = 0;
		fLocal_813[iVar0] = 0f;
		iLocal_1470[iVar0] = 0;
		iLocal_2685[iVar0] = 0;
		iLocal_1646[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_3092[iVar0] = 0;
		iVar0++;
	}
	iLocal_1946 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_3105[iVar0] = 0;
		vLocal_2489[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1209[iVar0] = 0f;
		fLocal_1225[iVar0] = 0f;
		fLocal_1241[iVar0] = 0f;
		fLocal_1257[iVar0] = 0f;
		iLocal_1930[iVar0] = 0;
		iLocal_2861[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_3157[iVar0] = 0;
		iVar0++;
	}
	iLocal_1948 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_3121[iVar0] = 0;
		vLocal_2535[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_993[iVar0] = 0f;
		fLocal_1029[iVar0] = 0f;
		fLocal_1065[iVar0] = 0f;
		fLocal_1101[iVar0] = 0f;
		iLocal_1822[iVar0] = 0;
		fLocal_1137[iVar0] = 0f;
		iLocal_1858[iVar0] = 0;
		iLocal_2877[iVar0] = 0;
		iLocal_1894[iVar0] = 0;
		iVar0++;
	}
	iLocal_1947 = 0;
	iLocal_1950 = 0;
	iLocal_1953 = 0;
	iLocal_1954 = 0;
	iLocal_1955 = 0;
}

void func_196()
{
	func_199();
	func_198();
	func_197();
}

void func_197()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3121[iVar0]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
			{
				if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[iVar0]))
				{
					UNK_0xC55F2A0377488064(iLocal_3121[iVar0]);
				}
				bVar1 = UNK_0xA30B8362589C124A(iLocal_3121[iVar0], -1, 0);
				if (UNK_0xC844350D5D58C99A(bVar1) && bVar1 != UNK_0x16F2683693E537C9())
				{
					if (UNK_0xAF6690C489CC6203(bVar1))
					{
						UNK_0xEBA53F35D0085654(&bVar1);
					}
				}
			}
			if (UNK_0xAF6690C489CC6203(iLocal_3121[iVar0]))
			{
				UNK_0xA954465BA6FDEFE2(&(iLocal_3121[iVar0]));
			}
		}
		iLocal_1858[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1822[iVar0] > 0)
			{
				UNK_0xDB8844D4B7C60440(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2877[iVar0] == 0)
		{
			UNK_0x71199B01895C6202(iLocal_2877[iVar0]);
		}
		iVar0++;
	}
}

void func_198()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3105[iVar0]))
		{
			if (UNK_0xAF6690C489CC6203(iLocal_3105[iVar0]))
			{
				UNK_0xA954465BA6FDEFE2(&(iLocal_3105[iVar0]));
			}
		}
		iLocal_1930[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2861[iVar0] == 0)
		{
			UNK_0x71199B01895C6202(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

void func_199()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_2916[iVar0]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_2916[iVar0], 0))
			{
				if (UNK_0x20D6474D5F4B9FC6(iLocal_2916[iVar0]))
				{
					UNK_0xC55F2A0377488064(iLocal_2916[iVar0]);
				}
				bVar1 = UNK_0xA30B8362589C124A(iLocal_2916[iVar0], -1, 0);
				if (UNK_0xC844350D5D58C99A(bVar1) && bVar1 != UNK_0x16F2683693E537C9())
				{
					if (UNK_0xAF6690C489CC6203(bVar1))
					{
						UNK_0xEBA53F35D0085654(&bVar1);
					}
				}
			}
			if (UNK_0xAF6690C489CC6203(iLocal_2916[iVar0]))
			{
				UNK_0xA954465BA6FDEFE2(&(iLocal_2916[iVar0]));
			}
		}
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1294[iVar0] > 0)
			{
				UNK_0xDB8844D4B7C60440(iLocal_1294[iVar0], &cLocal_2668);
			}
		}
		iLocal_1470[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			UNK_0x71199B01895C6202(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
}

void func_200()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3121[iVar0]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
			{
				if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[iVar0]))
				{
					UNK_0xC55F2A0377488064(iLocal_3121[iVar0]);
				}
			}
			func_202(iLocal_3121[iVar0]);
			func_201(iLocal_3121[iVar0]);
		}
		iLocal_1858[iVar0] = 0;
		iLocal_1894[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1822[iVar0] > 0)
			{
				UNK_0xDB8844D4B7C60440(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2877[iVar0] == 0)
		{
			UNK_0x71199B01895C6202(iLocal_2877[iVar0]);
		}
		iVar0++;
	}
	iLocal_1952 = 0;
}

void func_201(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		UNK_0x046C362CF15F1935(&bParam0);
	}
}

void func_202(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		bVar1 = UNK_0xA30B8362589C124A(bParam0, -1, 0);
		if (!UNK_0xEB6A8945D1AC98A1(bVar1))
		{
			if (!bVar1 == UNK_0x16F2683693E537C9())
			{
				bVar0 = UNK_0x9C66D99E63E8E24C(bParam0);
				if (bVar0 < 8f)
				{
					bVar0 = 8f;
				}
				if (bVar0 > 62.9f)
				{
					bVar0 = 62.9f;
				}
				UNK_0x60274E99F9B27DEA(bVar1, bParam0, false, 1, bVar0, 786603, 5f, 5f, 1);
				UNK_0xBAFED2F6486F771A(bVar1, 8192, true);
				if (bLocal_108)
				{
					UNK_0xBAFED2F6486F771A(bVar1, 65536, true);
					UNK_0xBAFED2F6486F771A(bVar1, 2, false);
				}
				UNK_0xAFF39FB306F8E232(bVar1, 6, false);
			}
		}
	}
}

void func_203()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3105[iVar0]))
		{
			if (!UNK_0x437347B10A200C4B(iLocal_3105[iVar0], 0))
			{
				UNK_0x20641932E5104B25(iLocal_3105[iVar0], true, 0);
			}
			func_201(iLocal_3105[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2861[iVar0] == 0)
		{
			UNK_0x71199B01895C6202(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

void func_204()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_2916[iVar0]))
		{
			if (!UNK_0x437347B10A200C4B(iLocal_2916[iVar0], 0))
			{
				UNK_0x20641932E5104B25(iLocal_2916[iVar0], true, 0);
			}
			if (UNK_0xDF1306B443CD3D15(iLocal_2916[iVar0], 0))
			{
				if (UNK_0x20D6474D5F4B9FC6(iLocal_2916[iVar0]))
				{
					UNK_0xC55F2A0377488064(iLocal_2916[iVar0]);
				}
			}
			func_202(iLocal_2916[iVar0]);
			func_201(iLocal_2916[iVar0]);
		}
		iLocal_1470[iVar0] = 0;
		iLocal_1646[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1294[iVar0] > 0)
			{
				UNK_0xDB8844D4B7C60440(iLocal_1294[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			UNK_0x71199B01895C6202(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
}

int func_205()
{
	return joaat("S_M_Y_COP_01");
}

int func_206()
{
	return joaat("POLICE");
}

int func_207()
{
	return joaat("SULTAN");
}

int func_208()
{
	if (iLocal_2913 == 0)
	{
		return joaat("A_M_Y_BUSINESS_01");
	}
	return iLocal_2913;
}

void func_209()
{
	UNK_0xCE7D0828D683D536();
	UNK_0xEF7906595D9044B8(-1);
	UNK_0xD980FF3526C8CB9E(1);
	UNK_0xE9B51BC60A3B47D9(1);
	UNK_0xD60411959D5D930B(1f);
	UNK_0xC83E7A5E408DF68C(3);
	UNK_0xFF42993F8A095C58(3);
}

void func_210(var uParam0, int iParam1, int iParam2)
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
	bVar0 = iParam1;
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
		if (func_211(uParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_211(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

bool func_211(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_212()
{
	Global_19671 = 0;
	func_213();
}

void func_213()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_214()
{
	Global_19671 = 0;
	func_215();
}

void func_215()
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

void func_216()
{
	if (UNK_0xE4EDC4B0E92C078B(iLocal_3285))
	{
		UNK_0x142CC44DB769B57E(&iLocal_3285);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_3286))
	{
		UNK_0x142CC44DB769B57E(&iLocal_3286);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_3287))
	{
		UNK_0x142CC44DB769B57E(&iLocal_3287);
	}
	if (UNK_0xE4EDC4B0E92C078B(iLocal_3288))
	{
		UNK_0x142CC44DB769B57E(&iLocal_3288);
	}
}

void func_217()
{
	if (iLocal_3570 == 0)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_3228))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_3228))
			{
				if (UNK_0xB87D13D0C064E9D1(bLocal_3228, UNK_0x16F2683693E537C9(), 0))
				{
					iLocal_3570 = 1;
				}
			}
		}
	}
	if (iLocal_3570 == 0)
	{
		if (iLocal_3534 == 0)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3228))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_3228))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_3222))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
						{
							if (UNK_0xB72E131222E66495(bLocal_3222))
							{
								if (UNK_0x4E496981D6BC4CA4(bLocal_3222) > 18)
								{
									if (UNK_0xC844350D5D58C99A(bLocal_3284))
									{
										if (UNK_0xD59B17D2DFF98E26(bLocal_3284))
										{
											UNK_0x15AFB6CBDE990FB6(bLocal_3284, 1, true);
										}
									}
									iLocal_3210 = UNK_0xE9744DB7B8CA6965(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
									UNK_0x915804B434753CBD(bLocal_3228, iLocal_3210, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1148846080, 0);
									UNK_0x0C8C0C840C2D1AD2(bLocal_3228, UNK_0x16F2683693E537C9(), 9000, 1024, 3);
									iLocal_3534 = 1;
									bLocal_3535 = false;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3534 == 1 && iLocal_3536 == 0)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3228))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_3228))
				{
					if (UNK_0x69DF961355195C3C(iLocal_3210))
					{
						if (!bLocal_3535)
						{
							if (UNK_0xA45992A6CE82FB43(iLocal_3210) > 0.25f)
							{
								func_17(&uLocal_3578, 4, bLocal_3228, "HangerWorker", 0, 1);
								func_218(bLocal_3228, "T1M4_BCAA", "HangerWorker", 11);
								bLocal_3535 = true;
							}
						}
						if (UNK_0xA45992A6CE82FB43(iLocal_3210) > 0.99f)
						{
							iLocal_3210 = UNK_0xE9744DB7B8CA6965(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							UNK_0x915804B434753CBD(bLocal_3228, iLocal_3210, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1148846080, 0);
							iLocal_3536 = 1;
						}
					}
				}
			}
		}
		if (iLocal_3536 == 1 && iLocal_3539 == 0)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3228))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_3228))
				{
					if (UNK_0x69DF961355195C3C(iLocal_3210))
					{
						if (UNK_0xDDCA9A4E51DADA2B(bLocal_3228, UNK_0x12AB0310C2281427("ENDS_IN_RUN")))
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_3292);
							UNK_0x818303F509839F80(0, joaat("MOTIONSTATE_SPRINT"), 0);
							UNK_0x80AA372E04ED318D(false, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
							UNK_0x75ABDC5F81978924(iLocal_3292);
							UNK_0x78ADC381772E3D54(bLocal_3228, iLocal_3292);
							UNK_0xF82EA857DA10E0CD(&iLocal_3292);
							UNK_0xBD453909DC26A85D(bLocal_3228, joaat("MOTIONSTATE_SPRINT"), false, 0, 0);
							iLocal_3539 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_3539 == 0)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_3228))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_3228))
			{
				UNK_0xDD353D0E9C789D0E(&iLocal_3292);
				UNK_0x80AA372E04ED318D(false, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_3292);
				UNK_0x78ADC381772E3D54(bLocal_3228, iLocal_3292);
				UNK_0xF82EA857DA10E0CD(&iLocal_3292);
				iLocal_3539 = 1;
			}
		}
	}
}

void func_218(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xEB0A515D699A7E90(bParam0, bParam1, bParam2, func_15(iParam3), 0);
}

void func_219()
{
	if (iLocal_3181 == 0)
	{
		iLocal_3183 = 0;
		iLocal_3211 = UNK_0xD68EA767274B7444();
		UNK_0xAE1670DD12E839C3("TRV_4_MCS_2", 8);
		UNK_0x523BCC9DC80CD82F(joaat("PROP_JET_BLOODSPLAT_01"));
		if (UNK_0x1C2E18E9C63BEB77("Trev4_5"))
		{
			UNK_0xA19A5ADE229B4734("Trev4_5", 0, 0.5f, 1f);
		}
		if (!UNK_0x0F1CCD77290EE12F())
		{
			UNK_0x82E51BCA72537B6C(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		switch (iLocal_3183)
		{
			case 0:
				while (!UNK_0x62A1F4500E8F07E0())
				{
					SYSTEM::WAIT(0);
				}
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
				{
					UNK_0x29E8331978B73E7F(bLocal_3222, "Molly", 1, joaat("IG_MOLLY"), 0);
				}
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_3228))
				{
					UNK_0x29E8331978B73E7F(bLocal_3228, "Airworker_Tackle_trevor", 0, joaat("S_M_Y_AIRWORKER"), 0);
				}
				if (UNK_0xDF1306B443CD3D15(bLocal_3266, 0))
				{
					UNK_0x29E8331978B73E7F(bLocal_3266, "JET_TRV4", 0, joaat("JET"), 0);
				}
				func_220(1, 1, 1, 0, 0, 0);
				UNK_0xC92DB9682A650680("TRV4_SUCK_CS");
				UNK_0x4C902758BEA97C68(0);
				iLocal_3183++;
				break;
			case 1:
				func_125();
				if (UNK_0x3148AE92ED70DC30("JET_TRV4", joaat("JET")))
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3266, 0))
					{
						if (!UNK_0x437347B10A200C4B(bLocal_3266, 0))
						{
							UNK_0x1E9649458B15960F(bLocal_3266, true);
						}
					}
				}
				if (UNK_0x3148AE92ED70DC30("Airworker_Tackle_trevor", joaat("S_M_Y_AIRWORKER")))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_3228))
					{
						UNK_0x11AD11297DC58CC7(bLocal_3228, true);
						UNK_0xF3268524E9BE6D6E(bLocal_3228, UNK_0x16F2683693E537C9(), 150f, -1, 0, 0);
						UNK_0xE121AE1BBF90E186(bLocal_3228, false);
						UNK_0x25C5402CC10F76CD(bLocal_3228, true);
						UNK_0xAA6B3A4292417750(bLocal_3228, false, false, false, false, false, false, 0, false);
					}
				}
				if (UNK_0x3148AE92ED70DC30("Michael", 0))
				{
					func_125();
					func_123(1);
				}
				if (!UNK_0x39B7A3CCD2467CAB())
				{
					iLocal_3338 = 1;
					if (!UNK_0xC844350D5D58C99A(bLocal_3282))
					{
						if (UNK_0xB87F6CF6E5628C67(joaat("PROP_JET_BLOODSPLAT_01")))
						{
							bLocal_3282 = UNK_0x7707E48765093646(joaat("PROP_JET_BLOODSPLAT_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
							UNK_0xC023D1C4BF532815(bLocal_3282, 0f, 0f, -121.5948f, 2, 1);
							UNK_0xC4C7FD0EF3FEAB0B(bLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
							UNK_0x71199B01895C6202(joaat("PROP_JET_BLOODSPLAT_01"));
						}
					}
					UNK_0x2D23BE319D971F4C(0);
					func_220(0, 1, 1, 0, 0, 0);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
					if (!UNK_0x440C646F2F11A2A1(UNK_0x16F2683693E537C9(), false, 2))
					{
						UNK_0x262EF6C6306BEA6C(UNK_0x16F2683693E537C9(), joaat("WEAPON_SMG"), 150, true, true);
					}
					iLocal_3181 = 2;
				}
				break;
		}
	}
	if (iLocal_3181 == 2)
	{
		iLocal_3181 = 0;
		iLocal_3180 = 8;
	}
}

void func_220(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_228(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_227())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_226(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_228(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_226(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_224(UNK_0xD803B885F5E47A62())) && !func_222(UNK_0xD803B885F5E47A62(), 0)) && !func_221()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_224(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_221()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_222(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_223(-1, 0) == 8;
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

int func_223(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_53();
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

bool func_224(bool bParam0)
{
	if (func_222(bParam0, 0))
	{
		return true;
	}
	if (func_225())
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

bool func_225()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_226(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_227()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_228(int iParam0)
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

void func_229()
{
	if (iLocal_3511 == 0)
	{
		if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, true, 0))
		{
			iLocal_3511 = 1;
		}
	}
	else if (iLocal_3515 == 0)
	{
		UNK_0x38C3A68D7861DCFD(0, 22, 1);
		UNK_0x38C3A68D7861DCFD(0, 25, 1);
		if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, 0, true, 0))
		{
			UNK_0xCAF7AE54F764D5AA(UNK_0x16F2683693E537C9(), 0f);
		}
		else
		{
			if (fLocal_3326 < 1f)
			{
				fLocal_3326 = 1f;
			}
			fLocal_3326 = (fLocal_3326 * 0.975f);
			UNK_0xCAF7AE54F764D5AA(UNK_0x16F2683693E537C9(), fLocal_3326);
		}
	}
	if (iLocal_3181 > 0)
	{
		func_217();
	}
	if (iLocal_3181 == 0)
	{
		iLocal_3339 = 0;
		iLocal_3340 = 0;
		iLocal_3341 = 0;
		iLocal_3342 = 0;
		iLocal_3344 = 0;
		iLocal_3360 = 0;
		iLocal_3471 = 0;
		iLocal_3472 = 0;
		iLocal_3473 = 0;
		iLocal_3479 = 0;
		iLocal_3512 = 0;
		iLocal_3513 = 0;
		iLocal_3514 = 0;
		iLocal_3515 = 0;
		iLocal_3516[0] = 0;
		iLocal_3520[0] = 0;
		iLocal_3516[1] = 0;
		iLocal_3520[1] = 0;
		iLocal_3516[2] = 0;
		iLocal_3534 = 0;
		iLocal_3536 = 0;
		iLocal_3537 = 0;
		iLocal_3538 = 0;
		iLocal_3539 = 0;
		iLocal_3542 = 0;
		iLocal_3568 = 0;
		iLocal_3570 = 0;
		iLocal_3571[3] = 0;
		UNK_0x523BCC9DC80CD82F(joaat("PROP_JET_BLOODSPLAT_01"));
		UNK_0xB8842F7C7761A196("V_60_HangerRm");
		UNK_0x34D79252800B23FF(5);
		UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 3, 0);
		UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
		if (UNK_0xC844350D5D58C99A(bLocal_3222))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
			{
				if (UNK_0xB72E131222E66495(bLocal_3222))
				{
					UNK_0xFD2107656FB54C9D(bLocal_3222, 3f, 1);
				}
			}
		}
		if (!UNK_0x0F1CCD77290EE12F())
		{
			UNK_0x82E51BCA72537B6C(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3479 == 0)
		{
			if (UNK_0xAE317D00A5A55DF6("Trv_4_747", 0, -1))
			{
				iLocal_3479 = 1;
			}
		}
		if (iLocal_3471 == 0)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3222))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
				{
					if (UNK_0xB72E131222E66495(bLocal_3222))
					{
						if (UNK_0x4E496981D6BC4CA4(bLocal_3222) > 20)
						{
							if (UNK_0xC844350D5D58C99A(bLocal_3266))
							{
								if (UNK_0xDF1306B443CD3D15(bLocal_3266, 0))
								{
									func_234(&bLocal_3266);
									UNK_0xEB819BD1E585E9CB(iLocal_3211, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, false, false, 0, 0);
									UNK_0x56FDC9ADE35F7DB0(bLocal_3266, true, false, 0);
									iLocal_3471 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3512 == 0)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3222))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
				{
					if (UNK_0xB72E131222E66495(bLocal_3222))
					{
						if (UNK_0x4E496981D6BC4CA4(bLocal_3222) > 23)
						{
							UNK_0xA3BF0AA5A2608191(bLocal_3222);
							if (UNK_0xC844350D5D58C99A(bLocal_3266))
							{
								if (UNK_0xDF1306B443CD3D15(bLocal_3266, 0))
								{
									if (!UNK_0x562F77A7F33D2E46("SOL_3_ENGINE_DEATH_SCENE"))
									{
										UNK_0x8BC9595FD2792B5D("SOL_3_ENGINE_DEATH_SCENE");
									}
									iLocal_3209 = UNK_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 2);
									UNK_0x6BE2EAE992FD7C26(iLocal_3209, bLocal_3266, UNK_0xF653B9B22DA806A9(bLocal_3266, "chassis_Control"));
									UNK_0x915804B434753CBD(bLocal_3222, iLocal_3209, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1148846080, 0);
									UNK_0xEFC3DF9D33E248D8(iLocal_3209, true);
									iLocal_3512 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3513 == 0)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3222))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
				{
					if (iLocal_3512 == 1)
					{
						vLocal_3318 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
						if (vLocal_3318.y < -2965f)
						{
							UNK_0xC0B0B9E466C0ED17(bLocal_3222, 0f, 0f, 0f, 1, 6000, 1000, 2000, false);
							UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
							UNK_0xF96A174EE26D7588(UNK_0x16F2683693E537C9(), bLocal_3222, 0);
							UNK_0x0C8C0C840C2D1AD2(UNK_0x16F2683693E537C9(), bLocal_3222, 4000, 48, 4);
							iLocal_3513 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_3514 == 0)
		{
			if (!UNK_0xC844350D5D58C99A(bLocal_3222))
			{
				UNK_0x29D5132FBDCF2B1E(0);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				if (UNK_0xC844350D5D58C99A(iLocal_3233[0]))
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[0]))
					{
						UNK_0xA3BF0AA5A2608191(iLocal_3233[0]);
						UNK_0x11AD11297DC58CC7(iLocal_3233[0], false);
					}
				}
				iLocal_3514 = 1;
			}
		}
		if (iLocal_3473 == 0)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3222))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_3283))
					{
						if (UNK_0x50B5F6F3C29E9380(bLocal_3283, bLocal_3222))
						{
							if (UNK_0xB4ECF989E2C1DAC8(bLocal_3222, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (UNK_0xA45992A6CE82FB43(iLocal_3209) > 0.59f)
								{
									UNK_0x15AFB6CBDE990FB6(bLocal_3283, 1, true);
									if (UNK_0xE4EDC4B0E92C078B(iLocal_3285))
									{
										UNK_0x142CC44DB769B57E(&iLocal_3285);
									}
									if (!UNK_0xE4EDC4B0E92C078B(iLocal_3288))
									{
										func_218(bLocal_3222, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (UNK_0x562F77A7F33D2E46("SOL_3_ON_FOOT_CHASE"))
										{
											UNK_0x8910D3D58E0132B8("SOL_3_ON_FOOT_CHASE");
										}
										if (!UNK_0x562F77A7F33D2E46("SOL_3_LOSE_COPS"))
										{
											UNK_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS");
										}
										SYSTEM::SETTIMERB(0);
										iLocal_3473 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3515 == 0)
		{
			if (iLocal_3473 == 1 && SYSTEM::TIMERB() > 2500)
			{
				iLocal_3288 = func_231(bLocal_3283);
				func_20("SOL3_GOD1", 7500, -1);
				SYSTEM::SETTIMERB(0);
				iLocal_3515 = 1;
			}
		}
		if (iLocal_3571[3] == 0)
		{
			if (iLocal_3515 == 1 && iLocal_3514 == 1)
			{
				if (SYSTEM::TIMERB() > 2500)
				{
					UNK_0x8B4C4CA774181102(10f, 1073741824 /* Float: 2f */, 3);
					iLocal_3571[3] = 1;
				}
			}
		}
		if (iLocal_3472 == 0)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
			{
				if (UNK_0xB4ECF989E2C1DAC8(bLocal_3222, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (UNK_0xA45992A6CE82FB43(iLocal_3209) > 0.89f)
					{
						if (UNK_0xC844350D5D58C99A(bLocal_3266))
						{
							if (UNK_0xDF1306B443CD3D15(bLocal_3266, 0))
							{
								UNK_0xEBA53F35D0085654(&bLocal_3222);
								UNK_0xE81656B429E5C4B5("scr_trev4_747_blood_impact", bLocal_3266, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
								iLocal_3764 = UNK_0xC1879030EB463216("scr_trev4_747_exhaust_plane_misfire", bLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
								UNK_0xEB819BD1E585E9CB(iLocal_3212, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, false, false, 0, 0);
								iLocal_3192 = UNK_0x1C0640BA9A7327B3();
								iLocal_3472 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (UNK_0x1C0640BA9A7327B3() > iLocal_3192 + 574)
			{
				if (!UNK_0xC844350D5D58C99A(bLocal_3282))
				{
					if (UNK_0xB87F6CF6E5628C67(joaat("PROP_JET_BLOODSPLAT_01")))
					{
						bLocal_3282 = UNK_0x7707E48765093646(joaat("PROP_JET_BLOODSPLAT_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
						UNK_0xC023D1C4BF532815(bLocal_3282, 0f, 0f, -121.5948f, 2, 1);
						UNK_0xC4C7FD0EF3FEAB0B(bLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
						UNK_0x71199B01895C6202(joaat("PROP_JET_BLOODSPLAT_01"));
					}
				}
				if (iLocal_3568 == 0)
				{
					if (UNK_0xC844350D5D58C99A(bLocal_3266))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3266, 0))
						{
							UNK_0xE81656B429E5C4B5("scr_trev4_747_engine_debris", bLocal_3266, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, 0, 0, 0);
							UNK_0x56FDC9ADE35F7DB0(bLocal_3266, false, false, 0);
							func_230();
							UNK_0x55D0A2DB35045A35(iLocal_3211);
							iLocal_3568 = 1;
						}
					}
				}
			}
			if (iLocal_3516[0] == 0)
			{
				if (UNK_0x1C0640BA9A7327B3() > iLocal_3192 + 300)
				{
					if (UNK_0x83A8177D302E1A7E(iLocal_3764))
					{
						UNK_0xF7E25143642732EA(iLocal_3764, 0);
					}
					iLocal_3516[0] = 1;
				}
			}
			else if (iLocal_3520[0] == 0)
			{
				if (UNK_0x1C0640BA9A7327B3() > iLocal_3192 + 700)
				{
					if (UNK_0xC844350D5D58C99A(bLocal_3266))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3266, 0))
						{
							iLocal_3764 = UNK_0xC1879030EB463216("scr_trev4_747_exhaust_plane_misfire", bLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_3520[0] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[1] == 0)
			{
				if (UNK_0x1C0640BA9A7327B3() > iLocal_3192 + 1000)
				{
					if (UNK_0x83A8177D302E1A7E(iLocal_3764))
					{
						UNK_0xF7E25143642732EA(iLocal_3764, 0);
					}
					iLocal_3516[1] = 1;
				}
			}
			else if (iLocal_3520[1] == 0)
			{
				if (UNK_0x1C0640BA9A7327B3() > iLocal_3192 + 1400)
				{
					if (UNK_0xC844350D5D58C99A(bLocal_3266))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3266, 0))
						{
							iLocal_3764 = UNK_0xC1879030EB463216("scr_trev4_747_exhaust_plane_misfire", bLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_3763 = UNK_0xC1879030EB463216("scr_trev4_747_engine_damage", bLocal_3266, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1f, 0, 0, 0);
							iLocal_3520[1] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[2] == 0)
			{
				if (UNK_0x1C0640BA9A7327B3() > iLocal_3192 + 3500)
				{
					if (UNK_0x83A8177D302E1A7E(iLocal_3764))
					{
						UNK_0xF7E25143642732EA(iLocal_3764, 0);
					}
					if (UNK_0xC844350D5D58C99A(bLocal_3266))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3266, 0))
						{
							UNK_0xAA6B3A4292417750(bLocal_3266, false, false, false, false, false, false, 0, false);
						}
					}
					iLocal_3516[2] = 1;
				}
			}
		}
		if (iLocal_3537 == 0)
		{
			if (iLocal_3473 == 1)
			{
				if (iLocal_3538 == 0)
				{
					if (!UNK_0xE934758D273C899A(bLocal_3283))
					{
						iLocal_3202 = UNK_0x1C0640BA9A7327B3();
						iLocal_3538 = 1;
					}
				}
				else if (UNK_0x1C0640BA9A7327B3() > iLocal_3202 + 2000)
				{
					UNK_0x1E9649458B15960F(bLocal_3283, true);
					iLocal_3537 = 1;
				}
			}
		}
		if (iLocal_3542 == 0)
		{
			if (!UNK_0xC844350D5D58C99A(bLocal_3222))
			{
				if (UNK_0xC844350D5D58C99A(bLocal_3266))
				{
					UNK_0x1E9649458B15960F(bLocal_3266, false);
					iLocal_3542 = 1;
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_3283))
		{
			if (UNK_0xE4EDC4B0E92C078B(iLocal_3288))
			{
				if (func_16(UNK_0x16F2683693E537C9(), bLocal_3283, 1) < 1.5f && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					UNK_0x142CC44DB769B57E(&iLocal_3288);
					UNK_0xF690C84DADBB3551(&bLocal_3283);
					func_125();
					iLocal_3181 = 0;
					iLocal_3180 = 8;
				}
			}
		}
	}
}

void func_230()
{
	if (UNK_0x83A8177D302E1A7E(iLocal_3759))
	{
		UNK_0xF7E25143642732EA(iLocal_3759, 0);
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3760))
	{
		UNK_0xF7E25143642732EA(iLocal_3760, 0);
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3761))
	{
		UNK_0xF7E25143642732EA(iLocal_3761, 0);
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3762))
	{
		UNK_0xF7E25143642732EA(iLocal_3762, 0);
	}
}

int func_231(bool bParam0)
{
	return func_232(bParam0, 1, 0);
}

int func_232(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_233(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_233(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_233(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_233(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_234(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	if (!UNK_0x437347B10A200C4B(*bParam0, 0))
	{
		vVar0 = { 22.6057f, -2.10018f, -6.22841f };
		vVar3 = { 12.6349f, 7.89711f, -7.09742f };
		vVar6 = { -22.5879f, -2.2931f, -6.22542f };
		vVar9 = { -12.6675f, 8.15519f, -6.98833f };
		vVar12 = { 180f, 0f, 0f };
		iLocal_3759 = UNK_0xC1879030EB463216("scr_trev4_747_engine_heathaze", *bParam0, vVar0, vVar12, 1f, 0, 0, 0);
		iLocal_3760 = UNK_0xC1879030EB463216("scr_trev4_747_engine_heathaze", *bParam0, vVar3, vVar12, 1f, 0, 0, 0);
		iLocal_3761 = UNK_0xC1879030EB463216("scr_trev4_747_engine_heathaze", *bParam0, vVar6, vVar12, 1f, 0, 0, 0);
		iLocal_3762 = UNK_0xC1879030EB463216("scr_trev4_747_engine_heathaze", *bParam0, vVar9, vVar12, 1f, 0, 0, 0);
	}
}

void func_235()
{
	if (UNK_0xC844350D5D58C99A(bLocal_3222))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
		{
			if (UNK_0xB72E131222E66495(bLocal_3222))
			{
				if (func_16(UNK_0x16F2683693E537C9(), bLocal_3222, 1) < 17f)
				{
					UNK_0xFD2107656FB54C9D(bLocal_3222, 3f, 1);
				}
				if (func_16(UNK_0x16F2683693E537C9(), bLocal_3222, 1) < 22f && func_16(UNK_0x16F2683693E537C9(), bLocal_3222, 1) > 17f)
				{
					UNK_0xFD2107656FB54C9D(bLocal_3222, 2f, 1);
				}
				if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), -921.7f, -2946.4f, 13.4f, 1) > 8f && !UNK_0x0A059E0DB9253280(bLocal_3222))
				{
					if (func_16(UNK_0x16F2683693E537C9(), bLocal_3222, 1) > 22f)
					{
						UNK_0xFD2107656FB54C9D(bLocal_3222, 1f, 1);
					}
				}
				else if (func_16(UNK_0x16F2683693E537C9(), bLocal_3222, 1) > 22f)
				{
					UNK_0xFD2107656FB54C9D(bLocal_3222, 2f, 1);
				}
			}
		}
	}
	if (iLocal_3181 > 0)
	{
		if (iLocal_3511 == 0)
		{
			if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, true, 0))
			{
				iLocal_3511 = 1;
			}
		}
		else
		{
			UNK_0x38C3A68D7861DCFD(0, 22, 1);
			UNK_0x38C3A68D7861DCFD(0, 25, 1);
			if (fLocal_3326 < 1f)
			{
				fLocal_3326 = 1f;
			}
			fLocal_3326 = (fLocal_3326 * 0.98f);
			UNK_0xCAF7AE54F764D5AA(UNK_0x16F2683693E537C9(), fLocal_3326);
		}
		if (!UNK_0xC844350D5D58C99A(bLocal_3266))
		{
			UNK_0x523BCC9DC80CD82F(joaat("JET"));
			if (UNK_0xB87F6CF6E5628C67(joaat("JET")))
			{
				bLocal_3266 = UNK_0x122AAB0B1D6F55AD(joaat("JET"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
				UNK_0x446EA2500F021666(bLocal_3266, 2);
				UNK_0x05EC10F460C3A4AF(bLocal_3266, 0);
				UNK_0x1E9649458B15960F(bLocal_3266, true);
				UNK_0xAA6B3A4292417750(bLocal_3266, true, true, true, true, true, false, 0, false);
				UNK_0x71199B01895C6202(joaat("JET"));
				UNK_0x25BD67336EA4AECE(bLocal_3266, 500);
			}
		}
		if (!UNK_0xC844350D5D58C99A(bLocal_3228))
		{
			UNK_0x523BCC9DC80CD82F(joaat("S_M_Y_AIRWORKER"));
			UNK_0x3F423BF5B8125A50("misssolomon_3");
			UNK_0x523BCC9DC80CD82F(joaat("P_AMB_CLIPBOARD_01"));
			if ((UNK_0xB87F6CF6E5628C67(joaat("S_M_Y_AIRWORKER")) && UNK_0xB4AE0788C1587752("misssolomon_3")) && UNK_0xB87F6CF6E5628C67(joaat("P_AMB_CLIPBOARD_01")))
			{
				bLocal_3228 = UNK_0x36F2404464202779(26, joaat("S_M_Y_AIRWORKER"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, 1, true);
				UNK_0xAA6B3A4292417750(bLocal_3228, false, false, false, false, false, false, 0, false);
				UNK_0x25C5402CC10F76CD(bLocal_3228, false);
				UNK_0x11AD11297DC58CC7(bLocal_3228, true);
				func_17(&uLocal_3578, 4, bLocal_3228, "HangerWorker", 0, 1);
				bLocal_3284 = UNK_0x7707E48765093646(joaat("P_AMB_CLIPBOARD_01"), -932.1812f, -2967.947f, 12.9451f, true, true, false);
				UNK_0x9F528B1B53FBC5D9(bLocal_3284, bLocal_3228, UNK_0x4A089F2B762B8D33(bLocal_3222, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				iLocal_3210 = UNK_0xE9744DB7B8CA6965(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				UNK_0x915804B434753CBD(bLocal_3228, iLocal_3210, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1148846080, 0);
				UNK_0x71199B01895C6202(joaat("S_M_Y_AIRWORKER"));
				UNK_0x71199B01895C6202(joaat("P_AMB_CLIPBOARD_01"));
			}
		}
		if (!UNK_0xC844350D5D58C99A(iLocal_3233[0]))
		{
			UNK_0x523BCC9DC80CD82F(joaat("S_M_Y_COP_01"));
			if (UNK_0xB87F6CF6E5628C67(joaat("S_M_Y_COP_01")))
			{
				iLocal_3233[0] = UNK_0x36F2404464202779(6, joaat("S_M_Y_COP_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, true);
				UNK_0x262EF6C6306BEA6C(iLocal_3233[0], joaat("WEAPON_PISTOL"), 1000, true, true);
				UNK_0x298903DD96203C2C(iLocal_3233[0], 20);
				UNK_0xE8832A9E16A57A1F(iLocal_3233[0], true, 1);
				UNK_0x11AD11297DC58CC7(iLocal_3233[0], true);
				UNK_0x9BE7E7B6B488CC55(iLocal_3233[0], UNK_0x16F2683693E537C9(), -1, 1);
				func_127(iLocal_3233[0], 0);
			}
		}
		if (!UNK_0xC844350D5D58C99A(bLocal_3267))
		{
			UNK_0x523BCC9DC80CD82F(joaat("SHAMAL"));
			if (UNK_0xB87F6CF6E5628C67(joaat("SHAMAL")))
			{
				bLocal_3267 = UNK_0x122AAB0B1D6F55AD(joaat("SHAMAL"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, true, true, false);
				UNK_0x611DFA9294B339CA(bLocal_3267, false, 0, true);
				UNK_0xB9FD7450C0DAB575(bLocal_3267, 1084227584 /* Float: 5f */);
				UNK_0x71199B01895C6202(joaat("SHAMAL"));
				UNK_0xD458AC1C1D29C3B4(bLocal_3267, 2000, false);
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_3267))
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3267, 0))
			{
				if (func_16(UNK_0x16F2683693E537C9(), bLocal_3267, 1) > 5f)
				{
					UNK_0x611DFA9294B339CA(bLocal_3267, false, 0, false);
				}
			}
		}
	}
	if (iLocal_3181 == 0)
	{
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_3345 == 1)
		{
			if (!UNK_0x757EF87A33649210())
			{
				UNK_0x53491B90E4FD0E56(0);
			}
			func_120();
			func_17(&uLocal_3578, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
			iLocal_3345 = 0;
		}
		iLocal_3432 = 0;
		iLocal_3433 = 0;
		iLocal_3511 = 0;
		fLocal_3326 = 3f;
		iLocal_3185 = 0;
		func_189(0, 1);
		UNK_0xDB8844D4B7C60440(45, "BB_CHASE");
		UNK_0xDB8844D4B7C60440(35, "BB_CHASE");
		UNK_0xDB8844D4B7C60440(2, "BB_CHASE");
		UNK_0xDB8844D4B7C60440(54, "BB_CHASE");
		UNK_0xDB8844D4B7C60440(true, "BB_CHASE");
		UNK_0xDB8844D4B7C60440(9, "BB_CHASE");
		UNK_0xDB8844D4B7C60440(61, "BB_CHASE");
		UNK_0xDB8844D4B7C60440(63, "BB_CHASE");
		UNK_0xDB8844D4B7C60440(64, "BB_CHASE");
		UNK_0xE17FDF9E3068281B(&iLocal_3293);
		UNK_0xF5A41F3D3B38EFE3("digitalOverlay");
		if (UNK_0xC844350D5D58C99A(bLocal_3258))
		{
			UNK_0x06FF977AA95DCCE3(bLocal_3258, 0);
			UNK_0x046C362CF15F1935(&bLocal_3258);
		}
		if (UNK_0xC844350D5D58C99A(bLocal_3271))
		{
			UNK_0xA954465BA6FDEFE2(&bLocal_3271);
		}
		if (UNK_0xC844350D5D58C99A(iLocal_3254[0]))
		{
			UNK_0xEBA53F35D0085654(&(iLocal_3254[0]));
		}
		if (UNK_0xC844350D5D58C99A(iLocal_3260[0]))
		{
			UNK_0xA954465BA6FDEFE2(&(iLocal_3260[0]));
		}
		UNK_0xE801AB3C8990A86C(0);
		UNK_0xC0FB48F966BB7D11(1);
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
		{
			if (!UNK_0xE4EDC4B0E92C078B(iLocal_3285))
			{
				iLocal_3285 = UNK_0x5C3B41825F6AC5A0(bLocal_3222);
				UNK_0x321E019A46034F39(iLocal_3285, true);
			}
		}
		UNK_0x7352ACF3368DF65F("PoliceScannerDisabled", 1);
		if (iLocal_3365[2] == 1)
		{
			if (!UNK_0x8AA6DC470ABA63A2(iLocal_3219))
			{
				UNK_0x55D0A2DB35045A35(iLocal_3219);
			}
			UNK_0x43A06902454A1172(iLocal_3219);
			iLocal_3397 = 0;
			iLocal_3365[2] = 0;
		}
		UNK_0x34D79252800B23FF(5);
		UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 3, 0);
		UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC92DB9682A650680("TRV4_RUN");
		if (!UNK_0xC844350D5D58C99A(bLocal_3266))
		{
			UNK_0x523BCC9DC80CD82F(joaat("JET"));
		}
		if (!UNK_0xC844350D5D58C99A(bLocal_3228))
		{
			UNK_0x523BCC9DC80CD82F(joaat("S_M_Y_AIRWORKER"));
		}
		UNK_0x523BCC9DC80CD82F(joaat("SHAMAL"));
		UNK_0x523BCC9DC80CD82F(joaat("S_M_Y_COP_01"));
		UNK_0x523BCC9DC80CD82F(joaat("POLICE3"));
		UNK_0x523BCC9DC80CD82F(joaat("P_AMB_CLIPBOARD_01"));
		UNK_0x36187931D29E5BBE(68, "BB_Chase");
		UNK_0x36187931D29E5BBE(69, "BB_Chase");
		UNK_0x3F423BF5B8125A50("misssolomon_3");
		SYSTEM::SETTIMERA(0);
		if (UNK_0x1C2E18E9C63BEB77("Trev4_5"))
		{
			UNK_0xA19A5ADE229B4734("Trev4_5", 1, 1f, 1f);
		}
		if (UNK_0x757EF87A33649210())
		{
			if (!func_24())
			{
				UNK_0x90CECE08EA8E77CC(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!UNK_0x0F1CCD77290EE12F())
		{
			UNK_0x82E51BCA72537B6C(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2)
	{
		if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, false, true, 0))
		{
			func_236("TRV4_FAIL1");
		}
		if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, false, true, 0))
		{
			func_236("TRV4_FAIL1");
		}
		if (SYSTEM::TIMERA() > 15000)
		{
			func_236("TRV4_FAIL1");
		}
		if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, false, true, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
			{
				if (!UNK_0xB72E131222E66495(bLocal_3222))
				{
					UNK_0xF44B0E19CAC31C33(bLocal_3222, "BB_MOLLY_2", 10, 4, -1);
					UNK_0xC6EB89C59F2AF6B8(bLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, false, 0, 0, 0);
				}
			}
			SYSTEM::SETTIMERA(0);
			iLocal_3181 = 3;
		}
	}
	if (iLocal_3181 == 3)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
		{
			if (UNK_0xB72E131222E66495(bLocal_3222))
			{
				if (UNK_0x4E496981D6BC4CA4(bLocal_3222) > 18 && iLocal_3437 == 0)
				{
					iLocal_3352 = 0;
					UNK_0xFD2107656FB54C9D(bLocal_3222, 3f, 1);
					iLocal_3181 = 0;
					iLocal_3180 = 6;
				}
			}
		}
		if (SYSTEM::TIMERA() > 50000)
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
			{
				UNK_0x327AAEE25F323797(bLocal_3222);
				UNK_0xA47B46945FF6DE74(bLocal_3222, -932.5f, -2964.1f, 13.4f, 1, 0, 0, 1);
				UNK_0xF44B0E19CAC31C33(bLocal_3222, "BB_MOLLY_2", 18, 4, -1);
				UNK_0xC6EB89C59F2AF6B8(bLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, false, 0, 0, 0);
				iLocal_3352 = 0;
				iLocal_3181 = 0;
				iLocal_3180 = 6;
			}
		}
	}
}

void func_236(char* sParam0)
{
	if (iLocal_3437 == 0)
	{
		if (bLocal_3336)
		{
			func_226(0, 1, 1, 0);
			UNK_0xE3BB8E05FCEB3FBE(iLocal_3289, false);
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			UNK_0xBFE31971E49FA500(1);
			if (UNK_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
			{
				UNK_0x8910D3D58E0132B8("SOL_3_CHOPPER_CAM");
			}
			UNK_0x55D0A2DB35045A35(iLocal_3219);
			func_246();
			UNK_0xC0FB48F966BB7D11(1);
			iLocal_3365[2] = 0;
			bLocal_3336 = false;
		}
		UNK_0xC92DB9682A650680("TRV4_FAIL");
		sLocal_3577 = sParam0;
		UNK_0x790015DC92C918E2();
		func_214();
		func_212();
		func_237(sLocal_3577);
		iLocal_3437 = 1;
	}
}

void func_237(char* sParam0)
{
	func_245(sParam0);
	func_238(0);
}

void func_238(int iParam0)
{
	int iVar0;

	if (Global_111638.f_9080 || func_432(0))
	{
		iVar0 = func_8();
		if (!func_239(iVar0))
		{
			return;
		}
		UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
		Global_98780 = iParam0;
	}
}

bool func_239(int iParam0)
{
	int iVar0;
	int iVar1;

	func_244();
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0 /*5*/];
	iVar1 = Global_76891.f_109[iVar0 /*4*/];
	func_243(iVar1, 1);
	UNK_0xAE08886CF478C471(UNK_0xD803B885F5E47A62(), 0);
	UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
	func_240(&(Global_111638.f_2358.f_539), iVar1);
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

void func_240(var uParam0, int iParam1)
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
			if (!func_242(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_241(&(uParam0->f_2296[iVar0]));
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

void func_241(var uParam0)
{
	*uParam0 = -15;
}

bool func_242(int iParam0, var uParam1, float fParam2)
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
			return func_242(8, uParam1, fParam2);
		case 10:
			return func_242(8, uParam1, fParam2);
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

void func_243(int iParam0, bool bParam1)
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

void func_244()
{
	Global_98779 = 1;
	if (UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_107())
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
			switch (func_107())
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

void func_245(char* sParam0)
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

void func_246()
{
	Global_61519 = 0;
}

void func_247()
{
	if (!UNK_0xC844350D5D58C99A(bLocal_3266))
	{
		if (UNK_0xC844350D5D58C99A(bLocal_3258))
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
				{
					if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 30000f)
					{
						UNK_0x523BCC9DC80CD82F(joaat("JET"));
						if (UNK_0xB87F6CF6E5628C67(joaat("JET")))
						{
							bLocal_3266 = UNK_0x122AAB0B1D6F55AD(joaat("JET"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
							UNK_0x446EA2500F021666(bLocal_3266, 2);
							UNK_0x05EC10F460C3A4AF(bLocal_3266, 0);
							UNK_0x1E9649458B15960F(bLocal_3266, true);
							UNK_0xAA6B3A4292417750(bLocal_3266, true, true, true, true, true, false, 0, false);
							UNK_0x71199B01895C6202(joaat("JET"));
							UNK_0x25BD67336EA4AECE(bLocal_3266, 500);
						}
					}
				}
			}
		}
	}
	func_347();
	if (UNK_0xE4EDC4B0E92C078B(iLocal_3285))
	{
		func_346(iLocal_3285, bLocal_3222, 300f, 0.9f, 0);
	}
	if (iLocal_3181 == 0)
	{
		if (iLocal_3182 < 2)
		{
			UNK_0x87F7E6A954466069(UNK_0x16F2683693E537C9(), 0);
		}
		func_345();
		func_313();
		if (iLocal_3402 == 0)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3121[20]))
			{
				if (UNK_0xDF1306B443CD3D15(iLocal_3121[20], 0))
				{
					UNK_0x56FDC9ADE35F7DB0(iLocal_3121[20], true, true, 0);
					UNK_0x873BCADC75FF6D20(iLocal_3121[20]);
					iLocal_3402 = 1;
				}
			}
		}
		func_312();
		func_311();
		if (iLocal_3349 == 0)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3258))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
				{
					if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
					{
						func_310(iLocal_3289, bLocal_3271, "BB_Chase", 1);
						iLocal_3349 = 1;
					}
				}
			}
		}
		else if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
			{
				func_309(iLocal_3289, bLocal_3271, bLocal_3323);
				UNK_0x5818C8D5303DCCF8(iLocal_3289, 45f);
			}
		}
		if (iLocal_3337 == 0)
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
				{
					if ((UNK_0x9901AABAC4D4C590(bLocal_3258) > 15000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 125464f) && func_301(1, 0, 0))
					{
						iLocal_3352 = 1;
						if (iLocal_3437 == 0)
						{
							UNK_0xA37A90C62806D848(1);
							func_300("TRV4_HELP1", -1);
							func_293(1);
							func_210(&uLocal_28, 0, 0);
							UNK_0xF3039DE1FDB4F6FD(0);
							iLocal_3337 = 1;
						}
					}
				}
			}
		}
		else if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
			{
				if (UNK_0x83D8570832F172A7(iLocal_3293) && func_186(1, "BB_Chase"))
				{
					if (((UNK_0x9901AABAC4D4C590(bLocal_3258) > 15000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 125464f) && iLocal_3437 == 0) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						func_271();
					}
					if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 125464f || !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (bLocal_3336)
						{
							UNK_0xA37A90C62806D848(1);
							func_226(0, 1, 1, 0);
							UNK_0xE3BB8E05FCEB3FBE(iLocal_3289, false);
							UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
							UNK_0xBFE31971E49FA500(1);
							if (UNK_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
							{
								UNK_0x8910D3D58E0132B8("SOL_3_CHOPPER_CAM");
							}
							UNK_0x55D0A2DB35045A35(iLocal_3219);
							func_246();
							UNK_0xC0FB48F966BB7D11(1);
							iLocal_3365[2] = 0;
							bLocal_3336 = false;
						}
					}
				}
			}
		}
		switch (iLocal_3182)
		{
			case 0:
				if (iLocal_3571[0] == 0)
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
						{
							if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 44255f && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), -1187.3f, -2847.8f, 13.6f, 1) < 100f)
							{
								UNK_0x8B4C4CA774181102(10f, 1073741824 /* Float: 2f */, 3);
								iLocal_3571[0] = 1;
							}
						}
					}
				}
				if (iLocal_3571[1] == 0)
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
						{
							if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 52875f && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), -1349f, -2720f, 14f, 1) < 50f)
							{
								UNK_0x8B4C4CA774181102(6f, 1073741824 /* Float: 2f */, 3);
								iLocal_3571[1] = 1;
							}
						}
					}
				}
				if (iLocal_3571[2] == 0)
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
						{
							if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 87085f && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), -1507f, -2520f, 14f, 1) < 70f)
							{
								UNK_0x8B4C4CA774181102(10f, 1073741824 /* Float: 2f */, 3);
								iLocal_3571[2] = 1;
							}
						}
					}
				}
				func_270();
				func_269();
				if (!UNK_0x562F77A7F33D2E46("SOL_3_PLANE_ON_FIRE"))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_3258))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
						{
							if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
							{
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 64280f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 72000f)
								{
									if (UNK_0x0EB28750412C3A5A(-1149.6f, -2323.7f, 22.5f, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1) < 130f)
									{
										UNK_0x8BC9595FD2792B5D("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (UNK_0xC844350D5D58C99A(bLocal_3258))
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
						{
							if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 72500f)
							{
								UNK_0x8910D3D58E0132B8("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!UNK_0x562F77A7F33D2E46("SOL_3_EVENT_JET_LANDING"))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_3258))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
						{
							if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
							{
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 78000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 85000f)
								{
									UNK_0x8BC9595FD2792B5D("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (UNK_0xC844350D5D58C99A(bLocal_3258))
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
						{
							if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 85500f)
							{
								UNK_0x8910D3D58E0132B8("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!UNK_0x562F77A7F33D2E46("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_3258))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
						{
							if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
							{
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 100000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 107000f)
								{
									UNK_0x8BC9595FD2792B5D("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (UNK_0xC844350D5D58C99A(bLocal_3258))
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
						{
							if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 107500f)
							{
								UNK_0x8910D3D58E0132B8("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (UNK_0xC844350D5D58C99A(bLocal_3258))
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
						{
							if (UNK_0x9901AABAC4D4C590(bLocal_3258) < 10000f)
							{
								func_268();
							}
						}
					}
				}
				if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
				{
					if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
					{
						if (UNK_0x9901AABAC4D4C590(bLocal_3258) < 30000f)
						{
							func_267(bLocal_3258, UNK_0x9901AABAC4D4C590(bLocal_3258));
						}
					}
				}
				if (iLocal_3440 == 0)
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
						{
							if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 22000f)
							{
								UNK_0x13896FDECC859926("TRV4_AIRPORT_ENTERED");
								iLocal_3440 = 1;
							}
						}
					}
				}
				else if (iLocal_3441 == 0)
				{
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, 0, true, 0))
					{
						UNK_0xC92DB9682A650680("TRV4_AIRPORT_ENTERED");
						iLocal_3441 = 1;
					}
				}
				if (iLocal_3343 == 0)
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (func_16(bLocal_3258, UNK_0x16F2683693E537C9(), 1) < 170f && UNK_0x0A059E0DB9253280(bLocal_3258))
						{
							if (UNK_0xE4EDC4B0E92C078B(iLocal_3287))
							{
								UNK_0x142CC44DB769B57E(&iLocal_3287);
							}
							if (UNK_0x562F77A7F33D2E46("SOL_3_DRIVE_TO_AIRPORT"))
							{
								UNK_0x8910D3D58E0132B8("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!UNK_0x562F77A7F33D2E46("SOL_3_MAIN_CHASE"))
							{
								UNK_0x8BC9595FD2792B5D("SOL_3_MAIN_CHASE");
							}
							if (!UNK_0xE4EDC4B0E92C078B(iLocal_3285))
							{
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
								{
									iLocal_3285 = UNK_0x5C3B41825F6AC5A0(bLocal_3222);
									UNK_0x321E019A46034F39(iLocal_3285, true);
								}
							}
							UNK_0x053C926E5E341906();
							if (!UNK_0xD17F06053799A7CA())
							{
								func_20("TRV4_CHASE2", 7500, 1);
								func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								UNK_0xC92DB9682A650680("TRV4_CHASE");
								iLocal_3343 = 1;
							}
						}
					}
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, 0, true, 0))
					{
						if (UNK_0xE4EDC4B0E92C078B(iLocal_3287))
						{
							UNK_0x142CC44DB769B57E(&iLocal_3287);
						}
						if (!UNK_0xE4EDC4B0E92C078B(iLocal_3285))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
							{
								iLocal_3285 = UNK_0x5C3B41825F6AC5A0(bLocal_3222);
								UNK_0x321E019A46034F39(iLocal_3285, true);
							}
						}
						UNK_0x053C926E5E341906();
						if (!UNK_0xD17F06053799A7CA())
						{
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							UNK_0xC92DB9682A650680("TRV4_CHASE");
							iLocal_3343 = 1;
						}
					}
				}
				else if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
				{
					if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
					{
						if (UNK_0x9901AABAC4D4C590(bLocal_3258) < 15000f)
						{
						}
					}
				}
				if (iLocal_3328 == 0)
				{
					UNK_0x523BCC9DC80CD82F(joaat("JET"));
					if (UNK_0xB87F6CF6E5628C67(joaat("JET")))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
						{
							if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
							{
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 18490f)
								{
									iLocal_3260[1] = UNK_0x122AAB0B1D6F55AD(joaat("JET"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, true, true, false);
									UNK_0x4D3C3C0B0DE2663E(iLocal_3260[1], 2, "BB_Chase", 1);
									UNK_0x71199B01895C6202(joaat("JET"));
									iLocal_3328 = 1;
								}
							}
						}
					}
				}
				else if (UNK_0xC844350D5D58C99A(iLocal_3260[1]))
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3260[1], 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(iLocal_3260[1]))
						{
							UNK_0xA9FBE21EB8701B34(iLocal_3260[1], bLocal_3323);
							if (UNK_0x9901AABAC4D4C590(iLocal_3260[1]) > 20000f)
							{
								if (func_16(UNK_0x16F2683693E537C9(), iLocal_3260[1], 1) > 200f && !UNK_0x0A059E0DB9253280(iLocal_3260[1]))
								{
									UNK_0xC55F2A0377488064(iLocal_3260[1]);
									if (UNK_0xC844350D5D58C99A(iLocal_3254[1]))
									{
										UNK_0xEBA53F35D0085654(&(iLocal_3254[1]));
									}
									UNK_0xA954465BA6FDEFE2(&(iLocal_3260[1]));
									iLocal_3207 = UNK_0x1C0640BA9A7327B3() + 1000;
								}
							}
							if (UNK_0xC844350D5D58C99A(iLocal_3260[1]))
							{
								if (UNK_0x9901AABAC4D4C590(iLocal_3260[1]) > 31543f)
								{
									UNK_0xC55F2A0377488064(iLocal_3260[1]);
									UNK_0x1E9649458B15960F(iLocal_3260[1], true);
								}
							}
						}
						else if (func_16(UNK_0x16F2683693E537C9(), iLocal_3260[1], 1) > 200f && !UNK_0x0A059E0DB9253280(iLocal_3260[1]))
						{
							if (UNK_0xC844350D5D58C99A(iLocal_3254[1]))
							{
								UNK_0xEBA53F35D0085654(&(iLocal_3254[1]));
							}
							UNK_0xA954465BA6FDEFE2(&(iLocal_3260[1]));
							iLocal_3207 = UNK_0x1C0640BA9A7327B3() + 1000;
						}
					}
				}
				if (iLocal_3487 == 0)
				{
					if (!UNK_0xC844350D5D58C99A(bLocal_3265))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
						{
							if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
							{
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 23000f)
								{
									UNK_0x523BCC9DC80CD82F(joaat("TANKER"));
									if (UNK_0xB87F6CF6E5628C67(joaat("TANKER")))
									{
										bLocal_3265 = UNK_0x122AAB0B1D6F55AD(joaat("TANKER"), -1325f, -2779f, 14f, 233.9563f, true, true, false);
										UNK_0x71199B01895C6202(joaat("TANKER"));
										UNK_0xC002508A277213DE(bLocal_3265, 57, 57);
										iLocal_3487 = 1;
									}
								}
							}
						}
					}
				}
				if (UNK_0xC844350D5D58C99A(iLocal_3121[1]))
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[1], 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[1]))
						{
							if (UNK_0x9901AABAC4D4C590(iLocal_3121[1]) > 13000f)
							{
								if (iLocal_3377 == 0)
								{
									fLocal_1173[1] = 0.5f;
									bLocal_3245 = UNK_0xA30B8362589C124A(iLocal_3121[1], -1, 0);
									iLocal_3377 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3334 == 0)
				{
					UNK_0xA0D09682534C2176(-1325f, -2779f, 14f);
					if (UNK_0xC844350D5D58C99A(iLocal_3121[1]))
					{
						if (iLocal_3363 == 0)
						{
							UNK_0xC002508A277213DE(iLocal_3121[1], 57, 57);
							iLocal_3363 = 1;
						}
						if (UNK_0xC844350D5D58C99A(bLocal_3265))
						{
							if (!UNK_0x437347B10A200C4B(iLocal_3121[1], 0))
							{
								if (!UNK_0x437347B10A200C4B(bLocal_3265, 0))
								{
									if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[1]))
									{
										UNK_0xC74DAD25331A5425(iLocal_3121[1], bLocal_3265, 1065353216 /* Float: 1f */);
									}
								}
							}
						}
					}
					if (UNK_0xC844350D5D58C99A(bLocal_3265))
					{
						if (UNK_0xC844350D5D58C99A(bLocal_3258))
						{
							if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
							{
								if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
								{
									if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 41430f)
									{
										UNK_0x15AFB6CBDE990FB6(bLocal_3265, 1, true);
										iLocal_3334 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_3380 == 0)
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[1], 0))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
						{
							if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
							{
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 42700f)
								{
									if (UNK_0xC844350D5D58C99A(bLocal_3245))
									{
										if (!UNK_0xEB6A8945D1AC98A1(bLocal_3245))
										{
											UNK_0xD458AC1C1D29C3B4(bLocal_3245, false, false);
										}
									}
									if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[1]))
									{
										UNK_0xC55F2A0377488064(iLocal_3121[1]);
										iLocal_3380 = 1;
									}
								}
							}
						}
					}
				}
				if (UNK_0xC844350D5D58C99A(bLocal_3258))
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
						{
							if (iLocal_3551 == 0)
							{
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 38000f)
								{
									if (UNK_0xC844350D5D58C99A(iLocal_3121[1]) && UNK_0xDF1306B443CD3D15(iLocal_3121[1], 0))
									{
										UNK_0xCEAA091B490F8407(-1, "Trevor_4_747_Tanker_Horn", iLocal_3121[1], false, 0, 0);
										iLocal_3551 = 1;
									}
								}
							}
							if (iLocal_3365[1] == 0)
							{
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 39000f)
								{
									if (!UNK_0x562F77A7F33D2E46("SOL_3_EVENT_TANKER_CRASH"))
									{
										UNK_0x8BC9595FD2792B5D("SOL_3_EVENT_TANKER_CRASH");
									}
									if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
									{
										UNK_0xAA6B3A4292417750(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), false, true, true, false, false, false, 0, false);
									}
									iLocal_3365[1] = 1;
								}
							}
							if (iLocal_3435 == 0)
							{
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 41611f)
								{
									if (UNK_0xC844350D5D58C99A(bLocal_3265))
									{
										if (!UNK_0x437347B10A200C4B(bLocal_3265, 0))
										{
											if (UNK_0xC844350D5D58C99A(iLocal_3121[7]))
											{
												if (!UNK_0x437347B10A200C4B(iLocal_3121[7], 0))
												{
													UNK_0xCEAA091B490F8407(-1, "Trevor_4_747_Tanker_Explosion", bLocal_3265, false, 0, 0);
													UNK_0xC55F2A0377488064(iLocal_3121[7]);
													UNK_0x0DC87D17DC2658DC(iLocal_3121[7], 1, 0);
													UNK_0x0DC87D17DC2658DC(bLocal_3265, 1, 0);
													UNK_0xDA55CDFB97015579(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1f, 0);
													UNK_0xDA55CDFB97015579(-1212f, -2855f, 14.34f, 14, 1f, 1, 0, 1f, 0);
													UNK_0x046C362CF15F1935(&bLocal_3265);
													UNK_0x046C362CF15F1935(&(iLocal_3121[1]));
													iLocal_3435 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3369[1] == 0)
							{
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 43204f)
								{
									if (UNK_0x562F77A7F33D2E46("SOL_3_EVENT_TANKER_CRASH"))
									{
										UNK_0x8910D3D58E0132B8("SOL_3_EVENT_TANKER_CRASH");
									}
									UNK_0x42740B44BA8D7B43("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
									{
										UNK_0xAA6B3A4292417750(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), false, false, false, false, false, false, 0, false);
									}
									iLocal_3369[1] = 1;
								}
							}
						}
					}
				}
				if (!UNK_0x562F77A7F33D2E46("SOL_3_HELI_TAKEOFF"))
				{
					if (UNK_0xC844350D5D58C99A(iLocal_3121[0]))
					{
						if (UNK_0xDF1306B443CD3D15(iLocal_3121[0], 0))
						{
							if (UNK_0xC844350D5D58C99A(bLocal_3258))
							{
								if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
								{
									if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
									{
										if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 36000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 40000f)
										{
											UNK_0x8BC9595FD2792B5D("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (UNK_0xC844350D5D58C99A(iLocal_3121[0]))
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[0], 0))
					{
						if (UNK_0xC844350D5D58C99A(bLocal_3258))
						{
							if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
							{
								if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
								{
									if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 43204f)
									{
										UNK_0x8910D3D58E0132B8("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_3327 == 0)
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
						{
							if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 60500f)
							{
								UNK_0x523BCC9DC80CD82F(joaat("JET"));
							}
							if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 66500f)
							{
								if (UNK_0xB87F6CF6E5628C67(joaat("JET")))
								{
									iLocal_3260[0] = UNK_0x122AAB0B1D6F55AD(joaat("JET"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, true, true, false);
									UNK_0xE121AE1BBF90E186(iLocal_3260[0], true);
									UNK_0x446EA2500F021666(iLocal_3260[0], 2);
									UNK_0x4D3C3C0B0DE2663E(iLocal_3260[0], 35, "BB_Chase", 1);
									UNK_0xF12C1D85AFEE8FAD(iLocal_3260[0], 3491f);
									UNK_0x71199B01895C6202(joaat("JET"));
									iLocal_3327 = 1;
								}
							}
						}
					}
				}
				else if (UNK_0xC844350D5D58C99A(iLocal_3260[0]))
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3260[0], 0))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
						{
							if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
							{
								if (UNK_0x20D6474D5F4B9FC6(iLocal_3260[0]))
								{
									UNK_0xA9FBE21EB8701B34(iLocal_3260[0], bLocal_3323);
									if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 80000f)
									{
										if (func_16(iLocal_3260[0], UNK_0x16F2683693E537C9(), 1) > 200f)
										{
											UNK_0xC55F2A0377488064(iLocal_3260[0]);
										}
									}
								}
								else if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 80000f)
								{
									if (func_16(iLocal_3260[0], UNK_0x16F2683693E537C9(), 1) > 200f && !UNK_0x0A059E0DB9253280(iLocal_3260[0]))
									{
										if (UNK_0xC844350D5D58C99A(iLocal_3254[0]))
										{
											UNK_0xEBA53F35D0085654(&(iLocal_3254[0]));
										}
										UNK_0xA954465BA6FDEFE2(&(iLocal_3260[0]));
										iLocal_3207 = UNK_0x1C0640BA9A7327B3() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_3399 == 0)
				{
					if (iLocal_3398 == 0)
					{
						if (UNK_0xC844350D5D58C99A(bLocal_3258))
						{
							if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
							{
								if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
								{
									if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 50000f)
									{
										UNK_0x523BCC9DC80CD82F(joaat("S_M_Y_AIRWORKER"));
										UNK_0x3F423BF5B8125A50("misstrevor4");
										if (UNK_0xB87F6CF6E5628C67(joaat("S_M_Y_AIRWORKER")))
										{
											bLocal_3246 = UNK_0x36F2404464202779(26, joaat("S_M_Y_AIRWORKER"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, 1, true);
											bLocal_3247 = UNK_0x36F2404464202779(26, joaat("S_M_Y_AIRWORKER"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, 1, true);
											UNK_0x11AD11297DC58CC7(bLocal_3246, true);
											UNK_0x11AD11297DC58CC7(bLocal_3247, true);
											UNK_0x71199B01895C6202(joaat("S_M_Y_AIRWORKER"));
											iLocal_3398 = 1;
										}
									}
								}
							}
						}
					}
					else if (UNK_0xC844350D5D58C99A(bLocal_3258))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
						{
							if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
							{
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 58000f)
								{
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_3246))
									{
										if (UNK_0xB4AE0788C1587752("misstrevor4"))
										{
											if (!UNK_0xB4ECF989E2C1DAC8(bLocal_3246, "misstrevor4", "dive_clear_goon1", 3))
											{
												UNK_0xC6EB89C59F2AF6B8(bLocal_3246, "misstrevor4", "dive_clear_goon1", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
											}
										}
									}
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_3247))
									{
										if (UNK_0xB4AE0788C1587752("misstrevor4"))
										{
											if (!UNK_0xB4ECF989E2C1DAC8(bLocal_3247, "misstrevor4", "dive_clear_goon2", 3))
											{
												UNK_0xC6EB89C59F2AF6B8(bLocal_3247, "misstrevor4", "dive_clear_goon2", 1090519040, -1056964608, -1, 0, false, 0, 0, 0);
											}
										}
									}
									iLocal_3399 = 1;
								}
							}
						}
					}
				}
				else if (UNK_0xC844350D5D58C99A(bLocal_3246))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_3246))
					{
						if (!UNK_0xB4ECF989E2C1DAC8(bLocal_3246, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (UNK_0xC844350D5D58C99A(bLocal_3247))
							{
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_3247))
								{
									if (!UNK_0xB4ECF989E2C1DAC8(bLocal_3247, "misstrevor4", "dive_clear_goon2", 3))
									{
										UNK_0x8D17794CE3273D70("misstrevor4");
										UNK_0x6DAD7906B73F064D(&bLocal_3246);
										UNK_0x6DAD7906B73F064D(&bLocal_3247);
									}
								}
							}
						}
					}
				}
				if (UNK_0xC844350D5D58C99A(iLocal_3121[8]))
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[8], 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[8]))
						{
							if (UNK_0xC844350D5D58C99A(bLocal_3258))
							{
								if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
								{
									if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
									{
										if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 50200f)
										{
											if (iLocal_3330 == 0)
											{
												UNK_0xA9FBE21EB8701B34(iLocal_3121[8], 1f);
												if (func_16(UNK_0x16F2683693E537C9(), iLocal_3121[8], 1) < 100f)
												{
													UNK_0x9A82EEAF6CA12AEE(0.3f);
													iLocal_3373 = 0;
													if (!UNK_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
													{
														UNK_0x8BC9595FD2792B5D("SOL_3_CAR_JET_ENGINE");
													}
													UNK_0xB9BBC76CD5A81754(iLocal_3121[8], 0f, 0f, 0f, 1, 1500, 500, 100);
												}
												UNK_0xE8832A9E16A57A1F(iLocal_3121[8], true, 1);
												UNK_0x44C45BC1FDF14D14(iLocal_3121[8], true, 0);
												UNK_0xCEAA091B490F8407(iLocal_3213, "Trevor_4_747_Flying_Car", iLocal_3121[8], false, 0, 0);
												SYSTEM::SETTIMERB(0);
												iLocal_3330 = 1;
											}
										}
										if (iLocal_3330 == 1)
										{
											if (SYSTEM::TIMERB() > 662)
											{
												if (UNK_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
												{
													UNK_0x8910D3D58E0132B8("SOL_3_CAR_JET_ENGINE");
												}
												UNK_0x9A82EEAF6CA12AEE(1f);
												iLocal_3373 = 1;
											}
											if (SYSTEM::TIMERB() > 1872)
											{
												UNK_0xC55F2A0377488064(iLocal_3121[8]);
											}
										}
									}
								}
							}
						}
						else if (UNK_0xC844350D5D58C99A(bLocal_3258))
						{
							if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
							{
								if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
								{
									if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 50200f)
									{
										if (!UNK_0xE934758D273C899A(iLocal_3121[8]))
										{
											if (iLocal_3385 == 0)
											{
												UNK_0xCEAA091B490F8407(iLocal_3213, "Trevor_4_747_Carsplosion", iLocal_3121[8], false, 0, 0);
												UNK_0x0DC87D17DC2658DC(iLocal_3121[8], 1, 0);
												iLocal_3385 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_3373 == 0)
					{
						if (iLocal_3330 == 1)
						{
							if (SYSTEM::TIMERB() > 662)
							{
								if (UNK_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
								{
									UNK_0x8910D3D58E0132B8("SOL_3_CAR_JET_ENGINE");
								}
								UNK_0x9A82EEAF6CA12AEE(1f);
								iLocal_3373 = 1;
							}
						}
					}
				}
				else if (iLocal_3373 == 0)
				{
					if (iLocal_3330 == 1)
					{
						if (SYSTEM::TIMERB() > 662)
						{
							if (UNK_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
							{
								UNK_0x8910D3D58E0132B8("SOL_3_CAR_JET_ENGINE");
							}
							UNK_0x9A82EEAF6CA12AEE(1f);
							iLocal_3373 = 1;
						}
					}
				}
				if (UNK_0xC844350D5D58C99A(iLocal_3121[11]))
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[11], 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[11]))
						{
							if (UNK_0xC844350D5D58C99A(bLocal_3258))
							{
								if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
								{
									if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
									{
										if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 82683f)
										{
											if (iLocal_3331 == 0)
											{
												UNK_0xCEAA091B490F8407(iLocal_3215, "Trevor_4_747_Flying_Car", iLocal_3121[11], false, 0, 0);
												iLocal_3331 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_3331 == 1)
											{
												if (SYSTEM::TIMERB() > 1872)
												{
													if (!UNK_0xE934758D273C899A(iLocal_3121[11]))
													{
														UNK_0xC55F2A0377488064(iLocal_3121[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_3331 == 1)
						{
							if (iLocal_3386 == 0)
							{
								if (!UNK_0xE934758D273C899A(iLocal_3121[11]))
								{
									UNK_0xCEAA091B490F8407(iLocal_3215, "Trevor_4_747_Carsplosion", iLocal_3121[11], false, 0, 0);
									UNK_0x0DC87D17DC2658DC(iLocal_3121[11], 1, 0);
									iLocal_3386 = 1;
								}
							}
						}
					}
				}
				if (UNK_0xC844350D5D58C99A(iLocal_3121[12]))
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[12], 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[12]))
						{
							if (UNK_0xC844350D5D58C99A(bLocal_3258))
							{
								if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
								{
									if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
									{
										if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 82463f)
										{
											if (iLocal_3332 == 0)
											{
												UNK_0xCEAA091B490F8407(iLocal_3216, "Trevor_4_747_Flying_Car", iLocal_3121[12], false, 0, 0);
												iLocal_3332 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_3332 == 1)
											{
												if (SYSTEM::TIMERB() > 1000)
												{
													if (!UNK_0xE934758D273C899A(iLocal_3121[12]))
													{
														UNK_0xC55F2A0377488064(iLocal_3121[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_3541 == 0)
							{
								if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[12]))
								{
									if (UNK_0x9901AABAC4D4C590(iLocal_3121[12]) > 22216f && func_16(bLocal_3259, iLocal_3121[12], 1) < 90f)
									{
										UNK_0x9A82EEAF6CA12AEE(0.3f);
										UNK_0xB9BBC76CD5A81754(iLocal_3121[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
										iLocal_3203 = UNK_0x1C0640BA9A7327B3();
										iLocal_3541 = 1;
									}
								}
							}
						}
						else if (iLocal_3332 == 1)
						{
							if (iLocal_3387 == 0)
							{
								if (!UNK_0xE934758D273C899A(iLocal_3121[12]))
								{
									UNK_0xCEAA091B490F8407(iLocal_3216, "Trevor_4_747_Carsplosion", iLocal_3121[12], false, 0, 0);
									UNK_0x0DC87D17DC2658DC(iLocal_3121[12], 1, 0);
									iLocal_3387 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3541 == 1)
				{
				}
				if (iLocal_3540 == 0 && iLocal_3541 == 1)
				{
					if (UNK_0xC844350D5D58C99A(iLocal_3121[12]))
					{
						if (UNK_0xDF1306B443CD3D15(iLocal_3121[12], 0))
						{
							vLocal_3315 = { UNK_0x68F4C0EC296D3901(iLocal_3121[12], true) };
						}
					}
					vLocal_3318 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
					if (UNK_0x1C0640BA9A7327B3() > iLocal_3203 + 1579 || vLocal_3318.y < vLocal_3315.y)
					{
						UNK_0x9A82EEAF6CA12AEE(1f);
						UNK_0x29D5132FBDCF2B1E(0);
						iLocal_3540 = 1;
					}
				}
				if (UNK_0xC844350D5D58C99A(bLocal_3258))
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
						{
							if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 105000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 113000f)
							{
								UNK_0xA0D09682534C2176(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (UNK_0xC844350D5D58C99A(iLocal_3121[13]))
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[13], 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[13]))
						{
							if (UNK_0xC844350D5D58C99A(bLocal_3258))
							{
								if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
								{
									if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
									{
										if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 108830f)
										{
											UNK_0x9BAC3470A92767CB(iLocal_3121[13], 0);
											UNK_0xE8832A9E16A57A1F(iLocal_3121[13], true, 1);
											UNK_0x120A395B0ECB8EA5(iLocal_3121[13], false);
											SYSTEM::SETTIMERA(0);
											iLocal_3486 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_3486 == 1)
						{
							UNK_0xD458AC1C1D29C3B4(iLocal_3121[13], false, false);
							UNK_0x5A751CC648EB6940(iLocal_3121[13], 1);
							UNK_0xD458AC1C1D29C3B4(UNK_0xA30B8362589C124A(iLocal_3121[13], -1, 0), false, false);
						}
					}
				}
				if (iLocal_3478 == 0)
				{
					if (UNK_0xC844350D5D58C99A(iLocal_3121[5]))
					{
						if (UNK_0xDF1306B443CD3D15(iLocal_3121[5], 0))
						{
							UNK_0x446EA2500F021666(iLocal_3121[5], false);
							UNK_0xE121AE1BBF90E186(iLocal_3121[5], true);
							iLocal_3478 = 1;
						}
					}
				}
				if (UNK_0xC844350D5D58C99A(iLocal_3121[15]))
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[15], 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[15]))
						{
							if (UNK_0xC844350D5D58C99A(bLocal_3258))
							{
								if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
								{
									if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
									{
										if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 104989f)
										{
											UNK_0xC55F2A0377488064(iLocal_3121[15]);
											func_265(iLocal_3121[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
											func_265(iLocal_3121[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
											UNK_0x0DC87D17DC2658DC(iLocal_3121[15], 1, 0);
											UNK_0x8B4C4CA774181102(4f, 4f, 4);
											UNK_0xCEAA091B490F8407(-1, "Trevor_4_747_Carsplosion", iLocal_3121[15], false, 0, 0);
											UNK_0x42740B44BA8D7B43("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (UNK_0xC844350D5D58C99A(bLocal_3258))
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
						{
							if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 112000f)
							{
								UNK_0x29398344B9E5B8A7("BB_MOLLY_2");
								UNK_0x3F423BF5B8125A50("misssolomon_3");
								UNK_0x3F423BF5B8125A50("move_f@film_reel_arms");
								iLocal_3182 = 1;
							}
						}
					}
				}
				break;
			case 1:
				if (iLocal_3508 == 0)
				{
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, true, 0))
					{
						iLocal_3508 = 1;
					}
				}
				if (UNK_0xC844350D5D58C99A(iLocal_3272[0]))
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3272[0], 0))
					{
						UNK_0x06FF977AA95DCCE3(iLocal_3272[0], 0);
						UNK_0x046C362CF15F1935(&(iLocal_3272[0]));
					}
				}
				if (UNK_0xC844350D5D58C99A(iLocal_3251[0]))
				{
					if (!UNK_0xEB6A8945D1AC98A1(iLocal_3251[0]))
					{
						UNK_0xA3BF0AA5A2608191(iLocal_3251[0]);
						UNK_0x6DAD7906B73F064D(&(iLocal_3251[0]));
					}
				}
				if (iLocal_3401 == 0)
				{
					if (UNK_0xC844350D5D58C99A(bLocal_3258))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
						{
							if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
							{
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 115000f)
								{
									UNK_0x29398344B9E5B8A7("Trev4_5");
									UNK_0x523BCC9DC80CD82F(joaat("PROP_CS_FILM_REEL_01"));
									if (!UNK_0xEB880D98B5988D0C())
									{
										UNK_0x9E632F16E887F781(-930.7f, -2916.9f, 13.4f, 10f, 0);
									}
									iLocal_3401 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3437 == 0)
				{
					if (UNK_0xC844350D5D58C99A(bLocal_3258))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
						{
							if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
							{
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 120000f)
								{
									if (!UNK_0x562F77A7F33D2E46("SOL_3_ARRIVE_AT_HANGAR"))
									{
										UNK_0x8BC9595FD2792B5D("SOL_3_ARRIVE_AT_HANGAR");
									}
									UNK_0x8F741CB9D8AB80F4(bLocal_3258);
								}
								if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 125513f)
								{
									UNK_0xC55F2A0377488064(bLocal_3258);
									UNK_0x1E9649458B15960F(bLocal_3258, true);
									func_264();
									UNK_0xEFED0CD6E25037B9();
									UNK_0x17E8C6920A1E386F(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, true, 0);
									UNK_0x8910D3D58E0132B8("TREVOR_4_MAIN_CHASE");
									if (!UNK_0x9F4FE516EAACCFC5(iLocal_3291))
									{
										iLocal_3291 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
									}
									if (!UNK_0x9F4FE516EAACCFC5(iLocal_3290))
									{
										iLocal_3290 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
									}
									iLocal_3194 = UNK_0x1C0640BA9A7327B3();
									UNK_0xF3039DE1FDB4F6FD(1);
									UNK_0xB975E4541DDAB1F5(0);
									iLocal_3182 = 2;
								}
							}
						}
					}
				}
				break;
			case 2:
				vLocal_3318 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
				UNK_0x8F741CB9D8AB80F4(bLocal_3258);
				if (iLocal_3508 == 0)
				{
					if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, true, 0))
					{
						iLocal_3508 = 1;
					}
				}
				if (iLocal_3437 == 0)
				{
					if (UNK_0x0EB28750412C3A5A(vLocal_3318, -930.7f, -2916.9f, 13.4f, 1) < 45f)
					{
						iLocal_3182 = 3;
					}
					if (UNK_0xC844350D5D58C99A(bLocal_3258))
					{
						if (UNK_0x0A059E0DB9253280(bLocal_3258))
						{
							if (iLocal_3508 == 1)
							{
								iLocal_3182 = 3;
							}
						}
					}
					if (UNK_0x1C0640BA9A7327B3() > iLocal_3194 + 5000 && iLocal_3508 == 1)
					{
						iLocal_3182 = 3;
					}
				}
				break;
			case 3:
				if (UNK_0xEB880D98B5988D0C())
				{
					UNK_0x486B4ADE317F0689();
				}
				UNK_0x8F741CB9D8AB80F4(bLocal_3258);
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
				{
					if (UNK_0xB4ECF989E2C1DAC8(bLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_3466 == 0)
				{
					if (UNK_0xC844350D5D58C99A(bLocal_3258))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
						{
							if (!UNK_0x20D6474D5F4B9FC6(bLocal_3258))
							{
								if (UNK_0xB4AE0788C1587752("misssolomon_3"))
								{
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
									{
										if (!UNK_0xC844350D5D58C99A(bLocal_3283))
										{
											if (UNK_0xB87F6CF6E5628C67(joaat("PROP_CS_FILM_REEL_01")))
											{
												bLocal_3283 = UNK_0x7707E48765093646(joaat("PROP_CS_FILM_REEL_01"), -929f, -2917f, 13f, true, true, false);
												UNK_0x9F528B1B53FBC5D9(bLocal_3283, bLocal_3222, UNK_0x4A089F2B762B8D33(bLocal_3222, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											}
										}
										if (!UNK_0xB4ECF989E2C1DAC8(bLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											UNK_0x1E9649458B15960F(bLocal_3258, false);
											iLocal_3208 = UNK_0xE9744DB7B8CA6965(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
											UNK_0xE14EC663EED44AD5(bLocal_3258, iLocal_3208, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											UNK_0x915804B434753CBD(bLocal_3222, iLocal_3208, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1148846080, 0);
											UNK_0xEFC3DF9D33E248D8(iLocal_3208, false);
											UNK_0xC92DB9682A650680("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_3466 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3468 == 0)
				{
					if (iLocal_3466 == 1)
					{
						if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
						{
							if (UNK_0x3D1053F9EB43B7AD(bLocal_3222, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, 0, true, 0))
							{
								if (UNK_0xB4ECF989E2C1DAC8(bLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									UNK_0x1BF8B16C32704027(bLocal_3222, -1000f, 1);
								}
								UNK_0x327AAEE25F323797(bLocal_3222);
								UNK_0x11AD11297DC58CC7(bLocal_3222, true);
								UNK_0xA47B46945FF6DE74(bLocal_3222, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
								UNK_0xD8F6A53F4799FAFE(bLocal_3222, 236.5739f);
								UNK_0xF44B0E19CAC31C33(bLocal_3222, "BB_MOLLY_2", 1, 4, -1);
								if (UNK_0xB4AE0788C1587752("move_f@film_reel_arms"))
								{
									UNK_0xC6EB89C59F2AF6B8(bLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, false, 0, 0, 0);
								}
								iLocal_3468 = 1;
							}
						}
					}
				}
				if (iLocal_3437 == 0)
				{
					if (iLocal_3476 == 0)
					{
						if (iLocal_3475 == 0)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
							{
								if (UNK_0xB4ECF989E2C1DAC8(bLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (UNK_0xA45992A6CE82FB43(iLocal_3208) > 0.18f || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), -930.7f, -2916.9f, 13.4f, 1) < 10f)
									{
										iLocal_3183 = 0;
										iLocal_3475 = 1;
									}
								}
							}
						}
						while (iLocal_3475 == 1)
						{
							UNK_0x1A6DFFFEEC27BF4F("M_LegalTrouble", 0);
							switch (iLocal_3183)
							{
								case 0:
									UNK_0x86F44313DFA8F00C(iLocal_3291, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, 0, 1, 1, 2);
									UNK_0x86F44313DFA8F00C(iLocal_3290, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, 0, 1, 1, 2);
									UNK_0xF1E4C781086FABC1(iLocal_3290, iLocal_3291, 4000, 1, 1);
									UNK_0xBFE31971E49FA500(0);
									UNK_0x8BCB70EB440DED83(0);
									UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
									if (UNK_0xC844350D5D58C99A(bLocal_3271))
									{
										UNK_0xA954465BA6FDEFE2(&bLocal_3271);
									}
									if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
									{
										UNK_0xA47B46945FF6DE74(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										UNK_0xD8F6A53F4799FAFE(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 47.9465f);
									}
									else
									{
										UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 47.9465f);
									}
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
									{
										func_17(&uLocal_3578, 2, bLocal_3222, "MOLLY", 0, 1);
										UNK_0xC46BC31D2529AD8C(bLocal_3222, 1);
									}
									UNK_0x8B4C4CA774181102(4f, 0f, 3);
									UNK_0x420FE818E70BB523(4);
									UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
									iLocal_3529 = 0;
									iLocal_3183++;
									Jump @8963; //curOff = 8430
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
									{
										if (UNK_0xB4ECF989E2C1DAC8(bLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_3529 == 0)
											{
												if (UNK_0xA45992A6CE82FB43(iLocal_3208) > 0.3f)
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														UNK_0x8B4C4CA774181102(6f, 7f, 4);
														iLocal_3529 = 1;
													}
												}
											}
											if (UNK_0xA45992A6CE82FB43(iLocal_3208) > 0.5f)
											{
												UNK_0x86F44313DFA8F00C(iLocal_3291, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, 0, 1, 1, 2);
												UNK_0x86F44313DFA8F00C(iLocal_3290, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, 0, 1, 1, 2);
												UNK_0xF1E4C781086FABC1(iLocal_3290, iLocal_3291, 4000, 1, 1);
												iLocal_3206 = UNK_0x1C0640BA9A7327B3();
												iLocal_3183++;
											}
										}
									}
									Jump @8963; //curOff = 8657
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
									{
										if (UNK_0xB4ECF989E2C1DAC8(bLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_3206 != -1 && UNK_0xA4FD7964FEE91ED8(0) == 4) && (UNK_0x1C0640BA9A7327B3() - iLocal_3206) >= 2230)
											{
												UNK_0x82A772610883F395("CamPushInNeutral", 0, 0);
												UNK_0x4D7F4CC43D4D0DE3(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
												iLocal_3206 = -1;
											}
											if (UNK_0xA45992A6CE82FB43(iLocal_3208) > 0.85f)
											{
												UNK_0x8BCB70EB440DED83(1);
												UNK_0xBFE31971E49FA500(1);
												UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
												UNK_0x2FB9A57162E54BAB(0f);
												iLocal_3220 = 346732587;
												UNK_0x8010B3127F058F0F(iLocal_3220, joaat("V_ILEV_SS_DOOR5_R"), -935.641f, -2927.185f, 14.0945f, 1, true, 0);
												UNK_0x838CC054A9235BEC(iLocal_3220, 1f, false, true);
												UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
												if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
												{
													UNK_0x45F014B3D0466974(UNK_0x16F2683693E537C9(), UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0);
													if (UNK_0xA4FD7964FEE91ED8(1) != 4 && UNK_0xA4FD7964FEE91ED8(0) == 4)
													{
														UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 1, 0);
													}
												}
												UNK_0xC46BC31D2529AD8C(bLocal_3222, 0);
												UNK_0xBF40D896CA4BDBE7();
												UNK_0x8B4C4CA774181102(0f, 4f, 3);
												iLocal_3195 = UNK_0x1C0640BA9A7327B3();
												iLocal_3475 = 0;
												iLocal_3476 = 1;
												iLocal_3183++;
											}
										}
									}
									SYSTEM::WAIT(0);
								}
							}
						}
						if (iLocal_3476 == 1)
						{
							UNK_0x1BA7FCEAFCE8D46E(iLocal_3220, 5, false, true);
							if (iLocal_3552 == 0)
							{
								if (UNK_0xC844350D5D58C99A(bLocal_3222))
								{
									if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
									{
										if (UNK_0x5A91F08DF773C39D(bLocal_3222, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, false, true, 0))
										{
											UNK_0xEB819BD1E585E9CB(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, false, false, 0, 0);
											iLocal_3552 = 1;
										}
									}
								}
							}
						}
						if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							if (UNK_0x562F77A7F33D2E46("SOL_3_MAIN_CHASE"))
							{
								UNK_0x8910D3D58E0132B8("SOL_3_MAIN_CHASE");
							}
							if (UNK_0x562F77A7F33D2E46("SOL_3_ARRIVE_AT_HANGAR"))
							{
								UNK_0x8910D3D58E0132B8("SOL_3_ARRIVE_AT_HANGAR");
							}
							if (!UNK_0x562F77A7F33D2E46("SOL_3_ON_FOOT_CHASE"))
							{
								UNK_0x8BC9595FD2792B5D("SOL_3_ON_FOOT_CHASE");
							}
						}
						if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							func_248();
						}
						if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, 0, true, 1))
						{
							if (iLocal_3468 == 0)
							{
								if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
								{
									if (UNK_0xB4ECF989E2C1DAC8(bLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
									{
										UNK_0x1BF8B16C32704027(bLocal_3222, -1000f, 1);
									}
									UNK_0x327AAEE25F323797(bLocal_3222);
									UNK_0x11AD11297DC58CC7(bLocal_3222, true);
									UNK_0xA47B46945FF6DE74(bLocal_3222, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
									UNK_0xD8F6A53F4799FAFE(bLocal_3222, 236.5739f);
									UNK_0xF44B0E19CAC31C33(bLocal_3222, "BB_MOLLY_2", 1, 4, -1);
									if (UNK_0xB4AE0788C1587752("move_f@film_reel_arms"))
									{
										UNK_0xC6EB89C59F2AF6B8(bLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, false, 0, 0, 0);
									}
									iLocal_3468 = 1;
								}
							}
							if (UNK_0xC844350D5D58C99A(bLocal_3266))
							{
								UNK_0xA954465BA6FDEFE2(&bLocal_3266);
							}
							iLocal_3181 = 0;
							iLocal_3183 = 0;
							iLocal_3180 = 5;
						}
						break;
				}
			}
		}

void func_248()
{
	if (iLocal_3433 == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3121[14]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3121[14], 0))
			{
				bLocal_3248 = UNK_0xA30B8362589C124A(iLocal_3121[14], -1, 0);
				UNK_0x262EF6C6306BEA6C(bLocal_3248, joaat("WEAPON_PISTOL"), 1000, true, true);
				UNK_0x73270B3C9CC833FD(bLocal_3248, true, 0);
				UNK_0x11AD11297DC58CC7(bLocal_3248, true);
				UNK_0x298903DD96203C2C(bLocal_3248, 5);
				UNK_0xD458AC1C1D29C3B4(bLocal_3248, 150, false);
				func_17(&uLocal_3578, 3, bLocal_3248, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_3433 = 1;
	}
	else if (iLocal_3432 == 0)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_3248))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_3248))
			{
				UNK_0xA3BF0AA5A2608191(bLocal_3248);
				UNK_0xED253B8DDB3FFB77(bLocal_3248, UNK_0x68F4C0EC296D3901(bLocal_3248, true), 5f, 0, 0);
				UNK_0xDD353D0E9C789D0E(&iLocal_3292);
				UNK_0x75CDA8644CD3B5F5(false, 0, 0);
				UNK_0x5DA3F35E3BFDEE66(false, UNK_0x16F2683693E537C9(), 5000, 1);
				UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
				UNK_0x75ABDC5F81978924(iLocal_3292);
				UNK_0x78ADC381772E3D54(bLocal_3248, iLocal_3292);
				UNK_0xF82EA857DA10E0CD(&iLocal_3292);
				iLocal_3432 = 1;
			}
		}
	}
	else if (iLocal_3489 == 0)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_3248))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bLocal_3248))
			{
				if (!UNK_0x405E212DDE472467(bLocal_3248, 0) && func_13(UNK_0x16F2683693E537C9(), bLocal_3248) < 20f)
				{
					if (!func_262())
					{
						if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
						{
							func_17(&uLocal_3578, 4, bLocal_3248, "SOL3COP", 0, 1);
							if (func_249(&uLocal_3578, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_3489 = 1;
							}
						}
					}
				}
			}
		}
	}
}

int func_249(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_261(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_250(sParam2, iParam4, 0);
}

int func_250(char* sParam0, int iParam1, bool bParam2)
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
					func_215();
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
		if (func_260(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_259();
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
				func_258();
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
				if (func_257())
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
			if (func_227())
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
			func_256();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_255();
		func_251();
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
		func_215();
	}
	return 0;
}

void func_251()
{
	if (!func_252())
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

bool func_252()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_89())
	{
		return false;
	}
	if (func_253(UNK_0xD803B885F5E47A62()))
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

bool func_253(int iParam0)
{
	return func_254(iParam0, 20);
}

bool func_254(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

void func_255()
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

void func_256()
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

bool func_257()
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

void func_258()
{
	if (func_59(14))
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
		Global_19486 = func_107();
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

void func_259()
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

bool func_260(bool bParam0, int iParam1)
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

void func_261(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

bool func_262()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

int func_263(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_261(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_250(sParam2, iParam3, 0);
}

void func_264()
{
	if (UNK_0x83A8177D302E1A7E(iLocal_3755[0]))
	{
		UNK_0xF7E25143642732EA(iLocal_3755[0], 0);
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3755[1]))
	{
		UNK_0xF7E25143642732EA(iLocal_3755[1], 0);
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3755[2]))
	{
		UNK_0xF7E25143642732EA(iLocal_3755[2], 0);
	}
	if (iLocal_3388 == 1)
	{
		UNK_0x43A06902454A1172(iLocal_3217);
		iLocal_3396 = 0;
	}
}

void func_265(bool bParam0, vector3 vParam1, vector3 vParam4, float fParam7, bool bParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x20D6474D5F4B9FC6(bParam0))
		{
			UNK_0xC55F2A0377488064(bParam0);
		}
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
		if (bParam8)
		{
			vVar0 = { UNK_0x68E4ADDDDCD7BDDE(bParam0, vParam1) };
		}
		else
		{
			vVar0 = { vParam1 };
		}
		vVar6 = { func_266(vVar0 - vVar3) };
		vVar6 = { vVar6 * Vector(fParam7, fParam7, fParam7) };
		UNK_0xDFC6BA855748EB10(bParam0, 3, vVar6, vParam4, 0, 0, 1, 1, 0, 1);
	}
}

Vector3 func_266(vector3 vParam0)
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

void func_267(bool bParam0, float fParam1)
{
	int iVar0;
	vector3 vVar1;

	if (iLocal_1956 < 15)
	{
		if (iLocal_1956 == 0)
		{
			vLocal_2656 = { 99999.9f, 99999.9f, 99999.9f };
			vLocal_2659 = { -99999.9f, -99999.9f, -99999.9f };
		}
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(bParam0))
			{
				iVar0 = UNK_0x60755EFECF81FC68(bParam0);
				vVar1 = { UNK_0xAA8A22FF67DFFDCD(iVar0, (fParam1 + (SYSTEM::TO_FLOAT((iLocal_1956 - 1)) * 2000f))) };
				if (vVar1.x < vLocal_2656.x)
				{
					vLocal_2656.x = vVar1.x;
				}
				if (vVar1.y < vLocal_2656.y)
				{
					vLocal_2656.f_1 = vVar1.y;
				}
				if (vVar1.z < vLocal_2656.z)
				{
					vLocal_2656.f_2 = vVar1.z;
				}
				if (vVar1.x > vLocal_2659.x)
				{
					vLocal_2659.x = vVar1.x;
				}
				if (vVar1.y > vLocal_2659.y)
				{
					vLocal_2659.f_1 = vVar1.y;
				}
				if (vVar1.z > vLocal_2659.z)
				{
					vLocal_2659.f_2 = vVar1.z;
				}
			}
		}
		iLocal_1956++;
	}
	else if (!bLocal_106)
	{
		UNK_0xF5894FEB702E7E76(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 1);
		vLocal_2656 = { vLocal_2656 + Vector((fLocal_1293 * -1f), (fLocal_1293 * -1f), (fLocal_1293 * -1f)) };
		vLocal_2659 = { vLocal_2659 + Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
		vLocal_2650 = { vLocal_2656 };
		vLocal_2653 = { vLocal_2659 };
		UNK_0xF858EFDE1871B5F2(vLocal_2650, vLocal_2653, false, 0);
		iLocal_1956 = 0;
	}
}

void func_268()
{
	bLocal_89 = true;
}

void func_269()
{
	if (iLocal_3333 == 0)
	{
		if (UNK_0xC844350D5D58C99A(bLocal_3258))
		{
			if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
			{
				if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 55000f)
				{
					UNK_0x523BCC9DC80CD82F(joaat("FIRETRUK"));
					UNK_0x523BCC9DC80CD82F(joaat("S_M_Y_FIREMAN_01"));
					UNK_0x3F423BF5B8125A50("missheist_agency3aig_lift_waitped_a");
					if ((UNK_0xB87F6CF6E5628C67(joaat("FIRETRUK")) && UNK_0xB87F6CF6E5628C67(joaat("S_M_Y_FIREMAN_01"))) && UNK_0xB4AE0788C1587752("missheist_agency3aig_lift_waitped_a"))
					{
						if (!UNK_0xC844350D5D58C99A(bLocal_3264))
						{
							UNK_0x536F1BE96C726C4B(-1129.566f, -2319.888f, 12.9445f, 10f, 0, 0, 0, false);
							bLocal_3264 = UNK_0x122AAB0B1D6F55AD(joaat("FIRETRUK"), -1129.566f, -2319.888f, 12.9445f, 16.5423f, true, true, false);
						}
						iLocal_3755[0] = UNK_0xB055A4268B938F30("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1065353216 /* Float: 1f */, 0, 0, 0, false);
						if (iLocal_3388 == 0)
						{
							UNK_0xEB819BD1E585E9CB(iLocal_3217, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, false, false, 0, 0);
							iLocal_3388 = 1;
						}
						iLocal_3755[1] = UNK_0xB055A4268B938F30("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1065353216 /* Float: 1f */, 0, 0, 0, false);
						iLocal_3755[2] = UNK_0xB055A4268B938F30("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1065353216 /* Float: 1f */, 0, 0, 0, false);
						if (!UNK_0xC844350D5D58C99A(iLocal_3223[0]))
						{
							iLocal_3223[0] = UNK_0x852A19533F896693(bLocal_3264, 21, joaat("S_M_Y_FIREMAN_01"), -1, 1, true);
							UNK_0x11AD11297DC58CC7(iLocal_3223[0], true);
							UNK_0xFADC0A217229F6B5(iLocal_3223[0], true);
							UNK_0xC857FDE2E17345F2(iLocal_3223[0], -1147.07f, -2320.65f, 18.93f, 1101004800 /* Float: 20f */);
						}
						if (!UNK_0xC844350D5D58C99A(iLocal_3223[1]))
						{
							iLocal_3223[1] = UNK_0x36F2404464202779(21, joaat("S_M_Y_FIREMAN_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, 1, true);
							UNK_0xC6EB89C59F2AF6B8(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, false, 0, 0, 0);
							UNK_0x11AD11297DC58CC7(iLocal_3223[1], true);
							UNK_0xFADC0A217229F6B5(iLocal_3223[1], true);
						}
						if (!UNK_0xC844350D5D58C99A(iLocal_3223[2]))
						{
							iLocal_3223[2] = UNK_0x36F2404464202779(21, joaat("S_M_Y_FIREMAN_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, 1, true);
							UNK_0xC6EB89C59F2AF6B8(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, false, 0, 0, 0);
							UNK_0x11AD11297DC58CC7(iLocal_3223[2], true);
							UNK_0xFADC0A217229F6B5(iLocal_3223[2], true);
						}
						if (!UNK_0xC844350D5D58C99A(iLocal_3223[3]))
						{
							iLocal_3223[3] = UNK_0x36F2404464202779(21, joaat("S_M_Y_FIREMAN_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, 1, true);
							UNK_0xC6EB89C59F2AF6B8(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, false, 0, 0, 0);
							UNK_0x11AD11297DC58CC7(iLocal_3223[3], true);
							UNK_0xFADC0A217229F6B5(iLocal_3223[3], true);
						}
						UNK_0x71199B01895C6202(joaat("S_M_Y_FIREMAN_01"));
						UNK_0x71199B01895C6202(joaat("FIRETRUK"));
						iLocal_3333 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3333 == 1)
	{
		if (iLocal_3543[0] == 0)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3223[1]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_3223[1]))
				{
					if (iLocal_3547[0] == 0)
					{
						if (UNK_0xB4ECF989E2C1DAC8(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_3547[0] = 1;
						}
					}
					if (iLocal_3547[0] == 1)
					{
						if (!UNK_0xB4ECF989E2C1DAC8(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							UNK_0x8BE3D040D15AEA1D(iLocal_3223[1], -1);
							UNK_0xFADC0A217229F6B5(iLocal_3223[1], true);
							UNK_0x11AD11297DC58CC7(iLocal_3223[1], false);
							iLocal_3543[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[1] == 0)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3223[2]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_3223[2]))
				{
					if (iLocal_3547[1] == 0)
					{
						if (UNK_0xB4ECF989E2C1DAC8(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_3547[1] = 1;
						}
					}
					if (iLocal_3547[1] == 1)
					{
						if (!UNK_0xB4ECF989E2C1DAC8(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							UNK_0x8BE3D040D15AEA1D(iLocal_3223[2], -1);
							UNK_0xFADC0A217229F6B5(iLocal_3223[2], true);
							UNK_0x11AD11297DC58CC7(iLocal_3223[2], false);
							iLocal_3543[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[2] == 0)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3223[3]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iLocal_3223[3]))
				{
					if (iLocal_3547[2] == 0)
					{
						if (UNK_0xB4ECF989E2C1DAC8(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_3547[2] = 1;
						}
					}
					if (iLocal_3547[2] == 1)
					{
						if (!UNK_0xB4ECF989E2C1DAC8(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							UNK_0x8BE3D040D15AEA1D(iLocal_3223[3], -1);
							UNK_0xFADC0A217229F6B5(iLocal_3223[3], true);
							UNK_0x11AD11297DC58CC7(iLocal_3223[3], false);
							iLocal_3543[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_270()
{
	if (iLocal_3434 == 0)
	{
		UNK_0x523BCC9DC80CD82F(joaat("POLICE3"));
		UNK_0x523BCC9DC80CD82F(joaat("S_M_Y_COP_01"));
		UNK_0x36187931D29E5BBE(true, "BB_AIChase");
		if (UNK_0xB87F6CF6E5628C67(joaat("POLICE3")) && UNK_0xB87F6CF6E5628C67(joaat("S_M_Y_COP_01")))
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
				{
					if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 15500f)
					{
						UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 2, 0);
						UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
						iLocal_3272[0] = UNK_0x122AAB0B1D6F55AD(joaat("POLICE3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, true, true, false);
						iLocal_3251[0] = UNK_0x852A19533F896693(iLocal_3272[0], 6, joaat("S_M_Y_COP_01"), -1, 1, true);
						UNK_0x11AD11297DC58CC7(iLocal_3251[0], true);
						UNK_0x2E1E5367A885F9B7(iLocal_3272[0], "SOL_3_POLICE_CARS_Group", 0);
						func_127(iLocal_3251[0], 0);
						UNK_0x56FDC9ADE35F7DB0(iLocal_3272[0], true, true, 0);
						UNK_0x4D3C3C0B0DE2663E(iLocal_3272[0], true, "BB_AIChase", 1);
						UNK_0x262EF6C6306BEA6C(iLocal_3251[0], joaat("WEAPON_PISTOL"), 1000, true, true);
						UNK_0xAA280AF45BCCCF21(iLocal_3272[0], 1);
						UNK_0x71199B01895C6202(joaat("POLICE3"));
						UNK_0x71199B01895C6202(joaat("S_M_Y_COP_01"));
						iLocal_3434 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3434 == 1)
	{
		if (iLocal_3480[0] == 0)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3272[0]))
			{
				if (UNK_0xDF1306B443CD3D15(iLocal_3272[0], 0))
				{
					if (UNK_0x20D6474D5F4B9FC6(iLocal_3272[0]))
					{
						UNK_0xA9FBE21EB8701B34(iLocal_3272[0], bLocal_3323);
						if (UNK_0x9901AABAC4D4C590(iLocal_3272[0]) > 13000f)
						{
							UNK_0xC55F2A0377488064(iLocal_3272[0]);
						}
					}
					else if (UNK_0xC844350D5D58C99A(iLocal_3251[0]))
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_3251[0]))
						{
							UNK_0x11AD11297DC58CC7(iLocal_3251[0], true);
							if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								UNK_0x0D88E2F7C05BF3A2(iLocal_3251[0], UNK_0x16F2683693E537C9());
								UNK_0xFADC0A217229F6B5(iLocal_3251[0], true);
							}
							else
							{
								UNK_0x6C3AE6E278DB3D0E(iLocal_3251[0], UNK_0x16F2683693E537C9(), 0, 16);
								UNK_0xFADC0A217229F6B5(iLocal_3251[0], true);
							}
							UNK_0xDB8844D4B7C60440(true, "BB_AIChase");
							iLocal_3196 = UNK_0x1C0640BA9A7327B3();
							iLocal_3480[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3483[0] == 0)
		{
			if (iLocal_3480[0] == 1)
			{
				if (UNK_0x1C0640BA9A7327B3() > iLocal_3196 + 500)
				{
					if (UNK_0xC844350D5D58C99A(iLocal_3251[0]))
					{
						if (!UNK_0xEB6A8945D1AC98A1(iLocal_3251[0]))
						{
							if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								UNK_0x91CF06FFB63510D4(iLocal_3251[0], 16, 1);
								UNK_0x91CF06FFB63510D4(iLocal_3251[0], 1, 1);
								iLocal_3483[0] = 1;
							}
							else
							{
								iLocal_3483[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_271()
{
	if (!bLocal_3335)
	{
		if (UNK_0xDF1306B443CD3D15(iLocal_3121[20], 0))
		{
			iLocal_3289 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
			UNK_0xE3BB8E05FCEB3FBE(iLocal_3289, true);
			bLocal_3336 = false;
			bLocal_3335 = true;
		}
	}
	else if (func_286(&uLocal_28, 1, 0, 0) && iLocal_3437 == 0)
	{
		if (UNK_0xFEBC1E4EC9E001F0())
		{
			UNK_0xA37A90C62806D848(1);
		}
		if (func_262())
		{
			UNK_0x790015DC92C918E2();
			func_212();
		}
		if (iLocal_3365[2] == 0)
		{
			if (!UNK_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
			{
				UNK_0x8BC9595FD2792B5D("SOL_3_CHOPPER_CAM");
			}
			UNK_0x4D7F4CC43D4D0DE3(iLocal_3219, "Trevor_4_747_TV", false, 1);
			iLocal_3365[2] = 1;
		}
		func_277(1, 1, 30, 5, 0);
		if (iLocal_3354 == 0)
		{
			UNK_0x7E60C62A7CE58FC8(iLocal_3293, "SET_TEXT");
			func_276("TRV4_NEWS1");
			func_276("");
			UNK_0x7E60D21B163E9D56();
			iLocal_3354 = 1;
		}
		if (iLocal_3355 == 0)
		{
			UNK_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
			UNK_0x7C19E5E4784BD7CF(1f);
			UNK_0x7C19E5E4784BD7CF(0f);
			func_276("TRV4_NEWS2");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
			UNK_0x7C19E5E4784BD7CF(0f);
			UNK_0x7C19E5E4784BD7CF(0f);
			func_276("TRV4_NEWS6");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
			UNK_0x7C19E5E4784BD7CF(0f);
			UNK_0x7C19E5E4784BD7CF(1f);
			func_276("TRV4_NEWS7");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
			UNK_0x7C19E5E4784BD7CF(0f);
			UNK_0x7C19E5E4784BD7CF(2f);
			func_276("TRV4_NEWS8");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
			UNK_0x7C19E5E4784BD7CF(0f);
			UNK_0x7C19E5E4784BD7CF(3f);
			func_276("TRV4_NEWS9");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
			UNK_0x7C19E5E4784BD7CF(0f);
			UNK_0x7C19E5E4784BD7CF(4f);
			func_276("TRV4_NEWS10");
			UNK_0x7E60D21B163E9D56();
			UNK_0x7E60C62A7CE58FC8(iLocal_3293, "DISPLAY_SCROLL_TEXT");
			UNK_0x7C19E5E4784BD7CF(1f);
			UNK_0x7C19E5E4784BD7CF(0f);
			UNK_0x7E60D21B163E9D56();
			iLocal_3201 = (UNK_0x1C0640BA9A7327B3() - 5000);
			iLocal_3355 = 1;
		}
		if (UNK_0x1C0640BA9A7327B3() > iLocal_3201 + 5000)
		{
			func_275();
			iLocal_3201 = UNK_0x1C0640BA9A7327B3();
		}
		if (iLocal_3356 == 0)
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
				{
					if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 25000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 50000f)
					{
						UNK_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
						UNK_0x7C19E5E4784BD7CF(1f);
						UNK_0x7C19E5E4784BD7CF(1f);
						func_276("TRV4_NEWS5");
						UNK_0x7E60D21B163E9D56();
						UNK_0x7E60C62A7CE58FC8(iLocal_3293, "DISPLAY_SCROLL_TEXT");
						UNK_0x7C19E5E4784BD7CF(1f);
						UNK_0x7C19E5E4784BD7CF(1f);
						UNK_0x7E60D21B163E9D56();
						iLocal_3356 = 1;
					}
				}
			}
		}
		if (iLocal_3357 == 0)
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
				{
					if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 77600f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 115000f)
					{
						UNK_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
						UNK_0x7C19E5E4784BD7CF(1f);
						UNK_0x7C19E5E4784BD7CF(2f);
						func_276("TRV4_NEWS3");
						UNK_0x7E60D21B163E9D56();
						UNK_0x7E60C62A7CE58FC8(iLocal_3293, "DISPLAY_SCROLL_TEXT");
						UNK_0x7C19E5E4784BD7CF(1f);
						UNK_0x7C19E5E4784BD7CF(2f);
						UNK_0x7E60D21B163E9D56();
						iLocal_3357 = 1;
					}
				}
			}
		}
		if (iLocal_3358 == 0)
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
				{
					if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 115000f)
					{
						UNK_0x7E60C62A7CE58FC8(iLocal_3293, "SET_SCROLL_TEXT");
						UNK_0x7C19E5E4784BD7CF(1f);
						UNK_0x7C19E5E4784BD7CF(3f);
						func_276("TRV4_NEWS4");
						UNK_0x7E60D21B163E9D56();
						UNK_0x7E60C62A7CE58FC8(iLocal_3293, "DISPLAY_SCROLL_TEXT");
						UNK_0x7C19E5E4784BD7CF(1f);
						UNK_0x7C19E5E4784BD7CF(3f);
						UNK_0x7E60D21B163E9D56();
						iLocal_3358 = 1;
					}
				}
			}
		}
		UNK_0x3039591AD3E735CE(iLocal_3184);
		UNK_0x6567AE843FADBA94(iLocal_3293, 255, 255, 255, false, 0);
		if (bLocal_3336 == 0)
		{
			func_226(1, 1, 1, 0);
			UNK_0x91F5B0244AAE6222(iLocal_3289, "ROAD_VIBRATION_SHAKE", 1f);
			UNK_0xE3BB8E05FCEB3FBE(iLocal_3289, true);
			UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			UNK_0xBFE31971E49FA500(0);
			UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
			func_274();
			bLocal_3336 = true;
		}
		func_272();
		UNK_0x3584F71E5CA29322(6);
		UNK_0x3584F71E5CA29322(7);
		UNK_0x3584F71E5CA29322(8);
		UNK_0x3584F71E5CA29322(9);
		UNK_0x3584F71E5CA29322(1);
		UNK_0x3584F71E5CA29322(2);
		UNK_0x3584F71E5CA29322(15);
		UNK_0x3584F71E5CA29322(3);
		UNK_0x38C3A68D7861DCFD(0, 85, 1);
		UNK_0xC0FB48F966BB7D11(0);
	}
	else if (bLocal_3336)
	{
		func_226(0, 1, 1, 0);
		UNK_0xE3BB8E05FCEB3FBE(iLocal_3289, false);
		UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		UNK_0xBFE31971E49FA500(1);
		if (UNK_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
		{
			UNK_0x8910D3D58E0132B8("SOL_3_CHOPPER_CAM");
		}
		UNK_0x55D0A2DB35045A35(iLocal_3219);
		func_246();
		UNK_0xC0FB48F966BB7D11(1);
		iLocal_3365[2] = 0;
		bLocal_3336 = false;
	}
}

void func_272()
{
	UNK_0xC2127C0F64D6A3B9();
	func_273();
}

void func_273()
{
	Global_22211.f_134 = 1;
}

void func_274()
{
	Global_61519 = 1;
}

void func_275()
{
	if (bLocal_3186 > 4)
	{
		bLocal_3186 = false;
	}
	UNK_0x7E60C62A7CE58FC8(iLocal_3293, "DISPLAY_SCROLL_TEXT");
	UNK_0x3CAEA85DA607305E(false);
	UNK_0x3CAEA85DA607305E(bLocal_3186);
	UNK_0x7E60D21B163E9D56();
	bLocal_3186++;
}

void func_276(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_277(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_50 <= 225 && iLocal_44 == 0)
			{
				iLocal_50 += 30;
				if (iLocal_50 >= 225)
				{
					iLocal_44 = 1;
				}
			}
			else if (iLocal_50 >= 30)
			{
				iLocal_50 = (iLocal_50 - 30);
				if (iLocal_50 <= 30)
				{
					iLocal_44 = 0;
				}
			}
		}
		func_284(1, 200);
		if (bLocal_48 <= bParam2 && iLocal_43 == 0)
		{
			bLocal_48++;
			func_281(1, bLocal_48);
			if (bLocal_48 == bParam2)
			{
				iLocal_43 = 1;
				iLocal_49 = UNK_0x09AC81E49EA267F7(bParam3, bParam2);
			}
		}
		else if (bLocal_48 > 0)
		{
			if (bLocal_48 > iLocal_49)
			{
				bLocal_48 = (bLocal_48 - 1);
				func_281(1, bLocal_48);
				if (bLocal_48 == iLocal_49)
				{
					iLocal_43 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_278(1, 40, 1, 1, 1);
		}
	}
}

void func_278(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_280(0))
			{
				func_279(0);
			}
			else
			{
				UNK_0x539E86AE011A8B38("digitalOverlay", "nscuzz1", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255, bParam1, 0);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 = (fLocal_51 + 0.01f);
			}
			else
			{
				fLocal_51 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_280(1))
			{
				func_279(1);
			}
			else
			{
				UNK_0x539E86AE011A8B38("digitalOverlay", "nscuzz2", 0.5f, fLocal_52, 1f, 0.2f, 0f, 255, 255, 255, bParam1, 0);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 = (fLocal_52 + 0.02f);
			}
			else
			{
				fLocal_52 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_280(2))
			{
				func_279(2);
			}
			else
			{
				UNK_0x539E86AE011A8B38("digitalOverlay", "nscuzz3", 0.5f, fLocal_53, 1f, 0.2f, 0f, 255, 255, 255, bParam1, 0);
			}
			if (fLocal_53 < 1f)
			{
				fLocal_53 = (fLocal_53 + 0.028f);
			}
			else
			{
				fLocal_53 = 0f;
			}
		}
	}
}

void func_279(bool bParam0)
{
	if (bParam0 < 32)
	{
		UNK_0x5D96D8530B3D0904(&bLocal_54, bParam0);
	}
}

bool func_280(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_54, bParam0))
	{
		return true;
	}
	return false;
}

void func_281(bool bParam0, bool bParam1)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		iLocal_46 = func_283(5);
		iLocal_45 = UNK_0x09AC81E49EA267F7(false, 4);
		while (iLocal_47 == iLocal_46)
		{
			iLocal_46 = func_283(5);
		}
		if (iLocal_46 == 0)
		{
			if (!func_280(3))
			{
				func_279(3);
			}
			else
			{
				UNK_0x539E86AE011A8B38("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, bParam1, 0);
			}
		}
		if (iLocal_46 == 1)
		{
			if (!func_280(4))
			{
				func_279(4);
			}
			else
			{
				UNK_0x539E86AE011A8B38("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, bParam1, 0);
			}
		}
		if (iLocal_46 == 2)
		{
			if (!func_280(5))
			{
				func_279(5);
			}
			else
			{
				UNK_0x539E86AE011A8B38("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, bParam1, 0);
			}
		}
		if (iLocal_46 == 3)
		{
			if (!func_280(6))
			{
				func_279(6);
			}
			else
			{
				UNK_0x539E86AE011A8B38("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, bParam1, 0);
			}
		}
		if (iLocal_46 == 4)
		{
			if (!func_280(7))
			{
				func_279(7);
			}
			else
			{
				UNK_0x539E86AE011A8B38("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 255, 255, 255, bParam1, 0);
			}
		}
	}
}

float func_282(bool bParam0)
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

int func_283(bool bParam0)
{
	if (UNK_0x09AC81E49EA267F7(false, 50) > 25)
	{
		bLocal_40 = true;
	}
	else
	{
		bLocal_40 = false;
	}
	if (UNK_0x09AC81E49EA267F7(false, 50) > 25)
	{
		bLocal_41 = true;
	}
	else
	{
		bLocal_41 = false;
	}
	return UNK_0x09AC81E49EA267F7(false, bParam0);
}

void func_284(bool bParam0, bool bParam1)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		if (bLocal_42)
		{
			if (!func_280(8))
			{
				func_279(8);
			}
			else
			{
				UNK_0x539E86AE011A8B38("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, bParam1, 0);
			}
			bLocal_42 = false;
		}
		else
		{
			if (!func_280(8))
			{
				func_279(8);
			}
			else
			{
				UNK_0x539E86AE011A8B38("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, bParam1, 0);
			}
			bLocal_42 = true;
		}
	}
}

bool func_285()
{
	UNK_0x0D3BE1DE0262A012("digitalOverlay", 0);
	if (UNK_0x27117E2CDD4D67C3("digitalOverlay"))
	{
		return true;
	}
	return false;
}

bool func_286(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_292(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_290(uParam0))
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
						if (!func_292(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_291(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_291(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_292(bParam1, bParam2, bParam3))
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
					if (!func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_291(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
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
				else if (!func_292(bParam1, bParam2, bParam3))
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
						if (func_289(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_288(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_288(bParam1, bParam2, bParam3))
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
					else if (func_289(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_290(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_301(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_287();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_287()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

bool func_288(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
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

bool func_289(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
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

bool func_290(var uParam0)
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

bool func_291(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
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

bool func_292(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
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

void func_293(bool bParam0)
{
	if (bParam0)
	{
		func_299();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_298(0))
		{
			func_294(0);
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

void func_294(int iParam0)
{
	if (func_297())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_296())
		{
			func_295(1, 1);
		}
		else
		{
			func_295(0, 0);
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
	if (!func_227())
	{
		Global_19486.f_1 = 3;
	}
}

void func_295(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_298(0))
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

bool func_296()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_297()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_298(int iParam0)
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

void func_299()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_300(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_301(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_298(0))
	{
		return false;
	}
	if (func_308())
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
	if ((func_307() || func_306(Global_4456448.f_232883)) || func_305())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_304(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_303(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_302(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_302(bool bParam0)
{
	if (bParam0 != func_89())
	{
		if (func_181(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_181(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

bool func_303(bool bParam0, int iParam1)
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

bool func_304(bool bParam0, int iParam1)
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

bool func_305()
{
	return Global_2450632.f_17;
}

bool func_306(int iParam0)
{
	return iParam0 == 51;
}

bool func_307()
{
	return Global_2450632.f_16;
}

bool func_308()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_309(int iParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		if (UNK_0x20D6474D5F4B9FC6(bParam1))
		{
			UNK_0xA9FBE21EB8701B34(bParam1, bParam2);
			vVar0 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
			vVar3 = { UNK_0x835730A2D89F6093(bParam1, 2) };
			UNK_0x608A456FDD8A83D8(iParam0, vVar0);
			UNK_0x5F3CBA6EB9341C90(iParam0, vVar3, 2);
		}
	}
}

void func_310(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;

	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		UNK_0x4A4806F9D471E491(bParam1, false, 0);
		UNK_0x20641932E5104B25(bParam1, false, 0);
		UNK_0xE121AE1BBF90E186(bParam1, true);
		UNK_0xAA6B3A4292417750(bParam1, true, true, true, true, true, false, 0, false);
		UNK_0x4D3C3C0B0DE2663E(bParam1, bParam3, bParam2, 1);
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
		UNK_0x608A456FDD8A83D8(iParam0, vVar0);
		UNK_0x5F3CBA6EB9341C90(iParam0, UNK_0x835730A2D89F6093(bParam1, 2), 2);
	}
}

void func_311()
{
	if (iLocal_3218 != -1)
	{
		if (iLocal_3389 == 1)
		{
			if (iLocal_3381 == 0)
			{
				UNK_0x43A06902454A1172(iLocal_3218);
				iLocal_3391 = 0;
				iLocal_3381 = 1;
			}
		}
	}
	if (iLocal_3213 != -1)
	{
		if (iLocal_3385 == 1)
		{
			if (iLocal_3383 == 0)
			{
				UNK_0x43A06902454A1172(iLocal_3213);
				iLocal_3392 = 0;
				iLocal_3383 = 1;
			}
		}
	}
	if (iLocal_3214 != -1)
	{
		if (iLocal_3390 == 1)
		{
			if (iLocal_3372 == 0)
			{
				UNK_0x43A06902454A1172(iLocal_3214);
				iLocal_3393 = 0;
				iLocal_3372 = 1;
			}
		}
	}
	if (iLocal_3215 != -1)
	{
		if (iLocal_3386 == 1)
		{
			if (iLocal_3382 == 0)
			{
				UNK_0x43A06902454A1172(iLocal_3215);
				iLocal_3394 = 0;
				iLocal_3382 = 1;
			}
		}
	}
	if (iLocal_3216 != -1)
	{
		if (iLocal_3387 == 1)
		{
			if (iLocal_3384 == 0)
			{
				UNK_0x43A06902454A1172(iLocal_3216);
				iLocal_3395 = 0;
				iLocal_3384 = 1;
			}
		}
	}
}

void func_312()
{
	if (UNK_0xC844350D5D58C99A(iLocal_3121[19]))
	{
		if (!UNK_0x437347B10A200C4B(iLocal_3121[19], 0))
		{
			if (!UNK_0xB9F5AD0599FD42F7(iLocal_3121[19]))
			{
				UNK_0xAA280AF45BCCCF21(iLocal_3121[19], 1);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[7]))
	{
		if (!UNK_0x437347B10A200C4B(iLocal_3121[7], 0))
		{
			if (!UNK_0xB9F5AD0599FD42F7(iLocal_3121[7]))
			{
				UNK_0xAA280AF45BCCCF21(iLocal_3121[7], 1);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[8]))
	{
		if (!UNK_0x437347B10A200C4B(iLocal_3121[8], 0))
		{
			if (!UNK_0xB9F5AD0599FD42F7(iLocal_3121[8]))
			{
				UNK_0xAA280AF45BCCCF21(iLocal_3121[8], 1);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[9]))
	{
		if (!UNK_0x437347B10A200C4B(iLocal_3121[9], 0))
		{
			if (!UNK_0xB9F5AD0599FD42F7(iLocal_3121[9]))
			{
				UNK_0xAA280AF45BCCCF21(iLocal_3121[9], 1);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[10]))
	{
		if (!UNK_0x437347B10A200C4B(iLocal_3121[10], 0))
		{
			if (!UNK_0xB9F5AD0599FD42F7(iLocal_3121[10]))
			{
				UNK_0xAA280AF45BCCCF21(iLocal_3121[10], 1);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[11]))
	{
		if (!UNK_0x437347B10A200C4B(iLocal_3121[11], 0))
		{
			if (!UNK_0xB9F5AD0599FD42F7(iLocal_3121[11]))
			{
				UNK_0xAA280AF45BCCCF21(iLocal_3121[11], 1);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[13]))
	{
		if (!UNK_0x437347B10A200C4B(iLocal_3121[13], 0))
		{
			if (!UNK_0xB9F5AD0599FD42F7(iLocal_3121[13]))
			{
				UNK_0xAA280AF45BCCCF21(iLocal_3121[13], 1);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[14]))
	{
		if (!UNK_0x437347B10A200C4B(iLocal_3121[14], 0))
		{
			if (!UNK_0xB9F5AD0599FD42F7(iLocal_3121[14]))
			{
				UNK_0xAA280AF45BCCCF21(iLocal_3121[14], 1);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[15]))
	{
		if (!UNK_0x437347B10A200C4B(iLocal_3121[15], 0))
		{
			if (!UNK_0xB9F5AD0599FD42F7(iLocal_3121[15]))
			{
				UNK_0xAA280AF45BCCCF21(iLocal_3121[15], 1);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[16]))
	{
		if (!UNK_0x437347B10A200C4B(iLocal_3121[16], 0))
		{
			if (!UNK_0xB9F5AD0599FD42F7(iLocal_3121[16]))
			{
				UNK_0xAA280AF45BCCCF21(iLocal_3121[16], 1);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[17]))
	{
		if (!UNK_0x437347B10A200C4B(iLocal_3121[17], 0))
		{
			if (!UNK_0xB9F5AD0599FD42F7(iLocal_3121[17]))
			{
				UNK_0xAA280AF45BCCCF21(iLocal_3121[17], 1);
			}
		}
	}
}

void func_313()
{
	if (func_344())
	{
		fLocal_3324 = 0.5f;
	}
	else if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (UNK_0xD890711CFD5AF100(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) > 40f)
		{
			fLocal_3324 = 0.85f;
		}
		else
		{
			fLocal_3324 = 0.9f;
		}
	}
	else
	{
		fLocal_3324 = 0.9f;
	}
	if (!UNK_0x437347B10A200C4B(bLocal_3258, 0))
	{
		if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
			{
				if (iLocal_3359 == 0)
				{
					if (UNK_0x9901AABAC4D4C590(bLocal_3258) < 10000f)
					{
						if (func_16(UNK_0x16F2683693E537C9(), bLocal_3258, 1) < 100f || UNK_0x0A059E0DB9253280(bLocal_3258))
						{
							func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_3324, 0);
							UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
							func_314(bLocal_3258, bLocal_3323);
						}
						else
						{
							func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_3324, 0);
							UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
							func_314(bLocal_3258, bLocal_3323);
						}
					}
				}
				else if (func_16(UNK_0x16F2683693E537C9(), bLocal_3258, 1) > 175f)
				{
					bLocal_3323 = 0.6f;
					UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
					func_314(bLocal_3258, bLocal_3323);
				}
				else if (UNK_0x9901AABAC4D4C590(bLocal_3258) < 10000f)
				{
					func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_3324, 0);
					UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
					func_314(bLocal_3258, bLocal_3323);
				}
				if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 10000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 23000f)
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[8], 0))
					{
						func_340(iLocal_3121[8], UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_3324, 1);
						UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
						func_314(bLocal_3258, bLocal_3323);
					}
					else
					{
						func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_3324, 1);
						UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
						func_314(bLocal_3258, bLocal_3323);
					}
				}
				if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 23000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 32000f)
				{
					if (UNK_0xC844350D5D58C99A(iLocal_3121[7]))
					{
						if (UNK_0xDF1306B443CD3D15(iLocal_3121[7], 0))
						{
							func_340(iLocal_3121[7], UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_3324, 0);
							UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
							func_314(bLocal_3258, bLocal_3323);
						}
						else if (UNK_0xC844350D5D58C99A(iLocal_3121[8]))
						{
							if (UNK_0xDF1306B443CD3D15(iLocal_3121[8], 0))
							{
								func_340(iLocal_3121[8], UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3324, 0);
								UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
								func_314(bLocal_3258, bLocal_3323);
							}
							else
							{
								func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
								UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
								func_314(bLocal_3258, bLocal_3323);
							}
						}
						else
						{
							func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
							UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
							func_314(bLocal_3258, bLocal_3323);
						}
					}
					else if (UNK_0xC844350D5D58C99A(iLocal_3121[8]))
					{
						if (UNK_0xDF1306B443CD3D15(iLocal_3121[8], 0))
						{
							func_340(iLocal_3121[8], UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3324, 0);
							UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
							func_314(bLocal_3258, bLocal_3323);
						}
						else
						{
							func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
							UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
							func_314(bLocal_3258, bLocal_3323);
						}
					}
					else
					{
						func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
						UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
						func_314(bLocal_3258, bLocal_3323);
					}
				}
				if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 32000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 39000f)
				{
					if (UNK_0xC844350D5D58C99A(iLocal_3121[7]))
					{
						if (UNK_0xDF1306B443CD3D15(iLocal_3121[7], 0))
						{
							func_340(iLocal_3121[7], UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_3324, 1);
							UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
							func_314(bLocal_3258, bLocal_3323);
						}
						else
						{
							func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3324, 1);
							UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
							func_314(bLocal_3258, bLocal_3323);
						}
					}
					else
					{
						func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3324, 1);
						UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
						func_314(bLocal_3258, bLocal_3323);
					}
				}
				if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 39000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 56000f)
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[8], 0))
					{
						func_340(iLocal_3121[8], UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
						UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
						func_314(bLocal_3258, bLocal_3323);
					}
					else
					{
						func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_3324, 0);
						UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
						func_314(bLocal_3258, bLocal_3323);
					}
				}
				if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 56000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 65000f)
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[11], 0))
					{
						func_340(iLocal_3121[11], UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_3324, 0);
						UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
						func_314(bLocal_3258, bLocal_3323);
					}
					else
					{
						func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_3324, 0);
						UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
						func_314(bLocal_3258, bLocal_3323);
					}
				}
				if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 65000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 90000f)
				{
					if (UNK_0xC844350D5D58C99A(iLocal_3121[13]))
					{
						if (UNK_0xDF1306B443CD3D15(iLocal_3121[13], 0))
						{
							func_340(iLocal_3121[13], UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_3324, 0);
							UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
							func_314(bLocal_3258, bLocal_3323);
						}
						else
						{
							func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3324, 0);
							UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
							func_314(bLocal_3258, bLocal_3323);
						}
					}
					else
					{
						func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3324, 0);
						UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
						func_314(bLocal_3258, bLocal_3323);
					}
				}
				if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 90000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 110000f)
				{
					func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_3324, 1);
					UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
					func_314(bLocal_3258, bLocal_3323);
				}
				if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 110000f)
				{
					func_340(bLocal_3258, UNK_0x16F2683693E537C9(), &bLocal_3323, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_3324, 0);
					UNK_0xA9FBE21EB8701B34(bLocal_3258, bLocal_3323);
					func_314(bLocal_3258, bLocal_3323);
				}
			}
		}
	}
}

void func_314(bool bParam0, bool bParam1)
{
	float fVar0;
	vector3 vVar1;
	bool bVar4;

	fVar0 = UNK_0x6117725E0134737F();
	fVar0 = (fVar0 * 1000f);
	bLocal_106 = false;
	if (!bLocal_88)
	{
		if (bLocal_87)
		{
			func_339();
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
				UNK_0x536F1BE96C726C4B(vVar1, 1000f, 1, 0, 0, false);
			}
			bLocal_88 = true;
		}
	}
	else if (!bLocal_87)
	{
		func_209();
		bLocal_88 = false;
	}
	if (bLocal_87)
	{
		bParam1 = 1f;
		UNK_0xD60411959D5D930B(0f);
	}
	if (!bLocal_81)
	{
		if (bLocal_76)
		{
			fLocal_1278 = 0f;
		}
		else
		{
			fLocal_1278 = 1f;
		}
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(bParam0))
			{
				if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
				{
					if (func_338(UNK_0x16F2683693E537C9(), bParam0))
					{
						bLocal_86 = true;
					}
					else
					{
						bLocal_86 = false;
					}
				}
				fLocal_1275 = UNK_0x9901AABAC4D4C590(bParam0);
				UNK_0xA9FBE21EB8701B34(bParam0, ((bParam1 * fLocal_1276) * fLocal_1278));
				if (bLocal_85)
				{
					func_337(bParam0, fLocal_1275);
					func_336(bParam0, fLocal_1285);
					if (fLocal_1280 > 1000f)
					{
						if (iLocal_1962 == 0)
						{
							func_335(bParam0, fLocal_1285);
						}
						fVar0 = ((fLocal_1275 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1962) * 2000f));
						func_334(bParam0, fVar0, fLocal_1279);
						iLocal_1962++;
						if (iLocal_1962 > 2)
						{
							fLocal_1280 = 0f;
						}
					}
					else
					{
						iLocal_1962 = 0;
						fLocal_1280 = (fLocal_1280 + (UNK_0x6117725E0134737F() * 1000f));
					}
				}
			}
		}
		bVar4 = false;
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(bParam0))
			{
				bVar4 = true;
			}
		}
		if (fLocal_1275 == 0f || UNK_0x757EF87A33649210())
		{
			bVar4 = true;
		}
		if (bVar4 && !bLocal_93)
		{
			if (!bLocal_75)
			{
				func_331(bParam0, ((bParam1 * fLocal_1276) * fLocal_1278), 0);
				if (!bLocal_96)
				{
				}
				bLocal_96 = false;
			}
			if (bLocal_78)
			{
				func_330(bParam0);
			}
			if (!bLocal_75)
			{
				func_317(bParam0, ((bParam1 * fLocal_1276) * fLocal_1278), 0);
			}
		}
		if (bLocal_83)
		{
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					bLocal_3164 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
					vLocal_2641 = { UNK_0x68F4C0EC296D3901(bLocal_3164, true) };
					UNK_0xAB6708C4A38AE038(bLocal_3164, &fLocal_989, &fLocal_990, &fLocal_991, &fLocal_992);
				}
			}
			bLocal_83 = false;
		}
		if (bLocal_82)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3164))
			{
				func_201(bLocal_3165);
				bLocal_3165 = bLocal_3164;
			}
			if (UNK_0xDF1306B443CD3D15(bLocal_3165, 0))
			{
				UNK_0xA47B46945FF6DE74(bLocal_3165, vLocal_2641, 1, 0, 0, 1);
				UNK_0xC4C7FD0EF3FEAB0B(bLocal_3165, fLocal_989, fLocal_990, fLocal_991, fLocal_992);
			}
			fLocal_1274 = fLocal_1277;
			bLocal_75 = true;
			bLocal_82 = false;
		}
		if (bLocal_75)
		{
			while (!func_315(&bParam0, fLocal_1274))
			{
				SYSTEM::WAIT(0);
			}
			bLocal_76 = true;
		}
		if (bLocal_89)
		{
			bLocal_89 = false;
		}
	}
}

bool func_315(bool bParam0, float fParam1)
{
	if (!bLocal_90)
	{
		bLocal_75 = true;
		func_196();
		if (UNK_0xDF1306B443CD3D15(*bParam0, 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(*bParam0))
			{
				UNK_0xC55F2A0377488064(*bParam0);
				UNK_0x51B954DAB1BCAF73(*bParam0);
			}
			if (!bLocal_1949 == -1)
			{
				while (!func_316(bParam0, bLocal_1949, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_80)
				{
					bLocal_76 = true;
					fLocal_1278 = 0f;
					iLocal_1950 = 0;
					iLocal_1952 = 0;
					iLocal_1951 = 0;
					iLocal_1946 = 0;
					iLocal_1947 = 0;
					iLocal_1948 = 0;
					iLocal_1953 = 0;
					iLocal_1954 = 0;
					iLocal_1955 = 0;
				}
			}
		}
		bLocal_90 = true;
	}
	else
	{
		if (UNK_0xDF1306B443CD3D15(*bParam0, 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(*bParam0))
			{
				UNK_0xA9FBE21EB8701B34(*bParam0, ((1f * fLocal_1276) * fLocal_1278));
				func_316(bParam0, bLocal_1949, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1275 = fParam1;
		iLocal_1956 = 0;
		iLocal_1959 = 0;
		fLocal_1290 = 0f;
		fLocal_1289 = 0f;
		func_317(*bParam0, ((1f * fLocal_1276) * fLocal_1278), 1);
		func_331(*bParam0, ((1f * fLocal_1276) * fLocal_1278), 1);
		func_330(*bParam0);
		if ((iLocal_1953 == 0 && iLocal_1954 == 0) && iLocal_1955 == 0)
		{
			bLocal_76 = false;
			bLocal_75 = false;
			bLocal_90 = false;
			return true;
		}
	}
	return false;
}

bool func_316(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (bParam1 > 0)
	{
		UNK_0x36187931D29E5BBE(bParam1, &cLocal_2668);
		if (UNK_0x3DDA6C6A285628E4(bParam1, &cLocal_2668))
		{
			if (UNK_0xDF1306B443CD3D15(*bParam0, 0))
			{
				if (!UNK_0x20D6474D5F4B9FC6(*bParam0))
				{
					UNK_0x1E9649458B15960F(*bParam0, false);
					if (bParam4)
					{
						UNK_0xC3C6B5ABAB3277F5(*bParam0, bParam1, &cLocal_2668, 1092616192, 786603);
					}
					else
					{
						if (bParam1 != bLocal_1957 && bParam1 != bLocal_1958)
						{
							if (bParam7)
							{
								UNK_0x0CB57CDDC76DA8E0(*bParam0, bParam1, &cLocal_2668, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								UNK_0x0CB57CDDC76DA8E0(*bParam0, bParam1, &cLocal_2668, 1 | 4, 0, 786603);
							}
							else
							{
								UNK_0x4D3C3C0B0DE2663E(*bParam0, bParam1, &cLocal_2668, 1);
							}
						}
						else
						{
							UNK_0x4D3C3C0B0DE2663E(*bParam0, bParam1, &cLocal_2668, 1);
						}
						UNK_0xF12C1D85AFEE8FAD(*bParam0, fParam2);
						if (bParam5)
						{
							UNK_0x9C8F7A2F15781E10(*bParam0, 1);
						}
						return true;
					}
				}
				else if (UNK_0x60755EFECF81FC68(*bParam0) == UNK_0x1A2511CB22B86C17(bParam1, &cLocal_2668))
				{
					fVar0 = UNK_0x9901AABAC4D4C590(*bParam0);
					UNK_0xF12C1D85AFEE8FAD(*bParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						UNK_0xC55F2A0377488064(*bParam0);
						UNK_0x36187931D29E5BBE(bParam1, &cLocal_2668);
					}
					if (bParam5)
					{
						UNK_0x9C8F7A2F15781E10(*bParam0, 1);
					}
					return true;
				}
				else
				{
					UNK_0xC55F2A0377488064(*bParam0);
					UNK_0x1E9649458B15960F(*bParam0, false);
					if (bParam4)
					{
						UNK_0xC3C6B5ABAB3277F5(*bParam0, bParam1, &cLocal_2668, 1092616192, 786603);
					}
					else if (bParam1 != bLocal_1957 && bParam1 != bLocal_1958)
					{
						if (bParam7)
						{
							UNK_0x0CB57CDDC76DA8E0(*bParam0, bParam1, &cLocal_2668, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							UNK_0x0CB57CDDC76DA8E0(*bParam0, bParam1, &cLocal_2668, 1 | 4, 0, 786603);
						}
						else
						{
							UNK_0x4D3C3C0B0DE2663E(*bParam0, bParam1, &cLocal_2668, 1);
						}
					}
					else
					{
						UNK_0x4D3C3C0B0DE2663E(*bParam0, bParam1, &cLocal_2668, 1);
					}
					UNK_0xF12C1D85AFEE8FAD(*bParam0, fParam2);
					if (bParam5)
					{
						UNK_0x9C8F7A2F15781E10(*bParam0, 1);
					}
					return true;
				}
			}
		}
	}
	return false;
}

void func_317(bool bParam0, float fParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	int iVar19;
	int iVar20;

	bVar15 = UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62());
	bVar16 = UNK_0x5C45F6B29A99E47E();
	bVar17 = UNK_0x1E3C51C9DE5100B7();
	bVar18 = false;
	if (bVar15)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar2 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		}
		vVar9 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	}
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar0 = iLocal_1952;
		while (iVar0 < 35)
		{
			if (iLocal_1858[iVar0] != 99)
			{
				if (iLocal_1858[iVar0] == 0)
				{
					if (iLocal_1822[iVar0] > 0)
					{
						if (!bLocal_75)
						{
							if (fLocal_1275 > (fLocal_1137[iVar0] - (7000f * fParam1)))
							{
								if (func_329(iLocal_2877[iVar0]))
								{
									UNK_0x5D96D8530B3D0904(&(iLocal_1894[iVar0]), false);
								}
								else if (UNK_0x7D8B2A8F9EA82DB7(iLocal_2877[iVar0]))
								{
									UNK_0x5D96D8530B3D0904(&(iLocal_1894[iVar0]), 2);
								}
								UNK_0x0674E58A79778E99(&(iLocal_1894[iVar0]), true);
								iLocal_1858[iVar0]++;
								iLocal_1954++;
							}
						}
						else
						{
							fVar12 = (fLocal_1275 - fLocal_1137[iVar0]);
							fVar12 = (fVar12 * fLocal_1173[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_328(iLocal_1822[iVar0]))
								{
									if (func_329(iLocal_2877[iVar0]))
									{
										UNK_0x5D96D8530B3D0904(&(iLocal_1894[iVar0]), false);
									}
									else if (UNK_0x7D8B2A8F9EA82DB7(iLocal_2877[iVar0]))
									{
										UNK_0x5D96D8530B3D0904(&(iLocal_1894[iVar0]), 2);
									}
									UNK_0x0674E58A79778E99(&(iLocal_1894[iVar0]), true);
									iLocal_1858[iVar0]++;
									iLocal_1954++;
								}
								else
								{
									iLocal_1858[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1858[iVar0] = 99;
					}
				}
				else if (iLocal_1858[iVar0] == 1)
				{
					bVar14 = false;
					UNK_0x36187931D29E5BBE(iLocal_1822[iVar0], &cLocal_2668);
					if (UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], false))
					{
						UNK_0x523BCC9DC80CD82F(func_205());
						bVar14 = UNK_0xB87F6CF6E5628C67(func_205());
					}
					else if (!bLocal_102 && ((!UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 2) && bVar16) || (UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 2) && bVar17)))
					{
						bVar14 = true;
					}
					else
					{
						UNK_0x523BCC9DC80CD82F(func_208());
						bVar14 = UNK_0xB87F6CF6E5628C67(func_208());
					}
					if (bVar14)
					{
						if (!UNK_0xC844350D5D58C99A(iLocal_3121[iVar0]))
						{
							UNK_0x523BCC9DC80CD82F(iLocal_2877[iVar0]);
							if (UNK_0xB87F6CF6E5628C67(iLocal_2877[iVar0]) && UNK_0x3DDA6C6A285628E4(iLocal_1822[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 >= (fLocal_1137[iVar0] - (fLocal_1288 * fParam1)))
								{
									if ((bLocal_89 || bParam2) || (!bLocal_106 && !func_327(vLocal_2535[iVar0 /*3*/], vVar9, 5f, fLocal_1286)))
									{
										if (bLocal_85)
										{
											func_326(vLocal_2535[iVar0 /*3*/], vVar9, fLocal_1279);
										}
										iLocal_3121[iVar0] = UNK_0x122AAB0B1D6F55AD(iLocal_2877[iVar0], vLocal_2535[iVar0 /*3*/], false, false, false, false);
										if (iLocal_2877[iVar0] == joaat("POLMAV"))
										{
											UNK_0x446EA2500F021666(iLocal_3121[iVar0], false);
										}
										if (bLocal_98 && !UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], false))
										{
											func_325(iLocal_3121[iVar0]);
										}
										if (UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 3))
										{
											UNK_0x120A395B0ECB8EA5(iLocal_3121[iVar0], true);
										}
										UNK_0x08841CDB215AE18F(iLocal_3121[iVar0], vLocal_2535[iVar0 /*3*/], 0, 0, 1);
										UNK_0xC4C7FD0EF3FEAB0B(iLocal_3121[iVar0], fLocal_993[iVar0], fLocal_1029[iVar0], fLocal_1065[iVar0], fLocal_1101[iVar0]);
										if (UNK_0x8E39AC3C76C8AA58(iLocal_2877[iVar0]) || UNK_0x7D8B2A8F9EA82DB7(iLocal_2877[iVar0]))
										{
											UNK_0xB9FD7450C0DAB575(iLocal_3121[iVar0], 1084227584 /* Float: 5f */);
										}
										if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], false))
										{
											UNK_0x56FDC9ADE35F7DB0(iLocal_3121[iVar0], true, true, 0);
											if (UNK_0xD8A54335F18763BA() > 19 || UNK_0xD8A54335F18763BA() < 7)
											{
												UNK_0x0882E3DC0C991680(iLocal_3121[iVar0], 3);
											}
										}
										UNK_0x1E9649458B15960F(iLocal_3121[iVar0], true);
										UNK_0x71199B01895C6202(iLocal_2877[iVar0]);
										iLocal_1954 = (iLocal_1954 - 1);
										iLocal_1858[iVar0]++;
										bLocal_106 = true;
									}
								}
							}
						}
						else if (!UNK_0x437347B10A200C4B(iLocal_3121[iVar0], 0) && UNK_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
						{
							UNK_0x08841CDB215AE18F(iLocal_3121[iVar0], vLocal_2535[iVar0 /*3*/], 0, 0, 1);
							UNK_0xC4C7FD0EF3FEAB0B(iLocal_3121[iVar0], fLocal_993[iVar0], fLocal_1029[iVar0], fLocal_1065[iVar0], fLocal_1101[iVar0]);
							if (UNK_0x8E39AC3C76C8AA58(iLocal_2877[iVar0]) || UNK_0x7D8B2A8F9EA82DB7(iLocal_2877[iVar0]))
							{
								UNK_0xB9FD7450C0DAB575(iLocal_3121[iVar0], 1084227584 /* Float: 5f */);
							}
							UNK_0x1E9649458B15960F(iLocal_3121[iVar0], true);
							UNK_0x71199B01895C6202(iLocal_2877[iVar0]);
							iLocal_1954 = (iLocal_1954 - 1);
							iLocal_1858[iVar0]++;
						}
					}
				}
				else if (iLocal_1858[iVar0] == 2)
				{
					UNK_0x36187931D29E5BBE(iLocal_1822[iVar0], &cLocal_2668);
					if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], true))
					{
						bVar14 = false;
						if (UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], false))
						{
							UNK_0x523BCC9DC80CD82F(func_205());
							bVar14 = UNK_0xB87F6CF6E5628C67(func_205());
							iVar19 = 2;
						}
						else if (!bLocal_102 && ((!UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 2) && bVar16) || (UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], 2) && bVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							UNK_0x523BCC9DC80CD82F(func_208());
							bVar14 = UNK_0xB87F6CF6E5628C67(func_208());
							iVar19 = 0;
						}
						if (!UNK_0x437347B10A200C4B(iLocal_3121[iVar0], 0))
						{
							if (!bLocal_106 && UNK_0xBBA8A868118C90ED(iLocal_3121[iVar0], -1, 0))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(iLocal_3121[iVar0], true), vVar9) < 10000f || bParam2) || bLocal_89)
									{
										func_323(&(iLocal_3121[iVar0]), iVar19, 1);
										UNK_0x5D96D8530B3D0904(&(iLocal_1894[iVar0]), true);
									}
								}
							}
						}
					}
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
					{
						if (fLocal_1275 >= fLocal_1137[iVar0])
						{
							if (14 > iLocal_1947)
							{
								fVar12 = (fLocal_1275 - fLocal_1137[iVar0]);
								fVar12 = (fVar12 * fLocal_1173[iVar0]);
								if (UNK_0x3DDA6C6A285628E4(iLocal_1822[iVar0], &cLocal_2668))
								{
									if (fVar12 < UNK_0x1C8FE65729F6E371(iLocal_1822[iVar0], &cLocal_2668))
									{
										vVar3 = { UNK_0x68F4C0EC296D3901(iLocal_3121[iVar0], true) };
										vVar6 = { UNK_0x87A3DA08ACDE0189(iLocal_1822[iVar0], fVar12, &cLocal_2668) };
										if (((!func_327(vVar3, vVar9, 5f, fLocal_1286) && func_327(vVar6, vVar9, 5f, fLocal_1286)) && !bLocal_89) && !bParam2)
										{
											if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], true))
											{
												func_323(&(iLocal_3121[iVar0]), iVar19, 1);
											}
											iLocal_1947++;
											iLocal_1858[iVar0]++;
										}
										else if (((!bLocal_106 || UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], true)) || bLocal_89) || bParam2)
										{
											if (func_316(&(iLocal_3121[iVar0]), iLocal_1822[iVar0], fVar12, 1, 0, 0, bLocal_104, bLocal_103))
											{
												UNK_0xA9FBE21EB8701B34(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
												if (UNK_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
												{
													if (UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], false))
													{
														UNK_0x56FDC9ADE35F7DB0(iLocal_3121[iVar0], true, true, 0);
														UNK_0xAA280AF45BCCCF21(iLocal_3121[iVar0], 1);
														UNK_0x0882E3DC0C991680(iLocal_3121[iVar0], 2);
														if (!UNK_0x7D8B2A8F9EA82DB7(iLocal_2877[iVar0]))
														{
															UNK_0x21CBAD8B56E628F6(iLocal_3121[iVar0], 1);
														}
													}
												}
												if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], true))
												{
													func_323(&(iLocal_3121[iVar0]), iVar19, 1);
												}
												iLocal_1947++;
												iLocal_1858[iVar0]++;
											}
										}
									}
									else
									{
										if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], true))
										{
											func_323(&(iLocal_3121[iVar0]), iVar19, 1);
										}
										iLocal_1947++;
										iLocal_1858[iVar0]++;
									}
								}
							}
							else
							{
								if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], true))
								{
									func_323(&(iLocal_3121[iVar0]), iVar19, 1);
								}
								iLocal_1947++;
								iLocal_1858[iVar0]++;
							}
						}
					}
					else
					{
						if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1894[iVar0], true))
						{
							func_323(&(iLocal_3121[iVar0]), iVar19, 1);
						}
						iLocal_1947++;
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 3)
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[iVar0]))
						{
							bVar1 = UNK_0xA30B8362589C124A(iLocal_3121[iVar0], -1, 0);
							if (!UNK_0xEB6A8945D1AC98A1(bVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_79 && !bLocal_76) && !bLocal_95) && (((!bLocal_104 && !bLocal_103) && UNK_0x1B3D109B39CC2C89(UNK_0x16F2683693E537C9(), iLocal_3121[iVar0])) || func_322(iLocal_3121[iVar0])))
									{
										if (UNK_0xC844350D5D58C99A(bVar2))
										{
											bVar14 = false;
											if (bLocal_97)
											{
												bVar14 = true;
											}
											else
											{
												bVar13 = UNK_0x9C66D99E63E8E24C(bVar2);
												if (bVar13 < 1f)
												{
													bVar14 = true;
												}
												else if (UNK_0x755FF954DAE327E1((bVar13 - UNK_0x9C66D99E63E8E24C(iLocal_3121[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!func_321(iLocal_3121[iVar0], bVar2, 45f))
												{
													bVar14 = true;
												}
												else if (func_319(bVar2, iLocal_3121[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_318(iLocal_3121[iVar0]);
												iLocal_1858[iVar0]++;
											}
										}
									}
									else
									{
										UNK_0xA9FBE21EB8701B34(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
									}
								}
							}
							else
							{
								UNK_0xC55F2A0377488064(iLocal_3121[iVar0]);
							}
						}
						else
						{
							iLocal_1858[iVar0]++;
						}
					}
					else
					{
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 4)
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
					{
						if (!UNK_0x20D6474D5F4B9FC6(iLocal_3121[iVar0]))
						{
							iLocal_1858[iVar0]++;
						}
						else
						{
							bVar1 = UNK_0xA30B8362589C124A(iLocal_3121[iVar0], -1, 0);
							if (!UNK_0xEB6A8945D1AC98A1(bVar1))
							{
								UNK_0xA9FBE21EB8701B34(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
							}
							else
							{
								UNK_0xC55F2A0377488064(iLocal_3121[iVar0]);
							}
							if (UNK_0x3DDA6C6A285628E4(iLocal_1822[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 > (fLocal_1137[iVar0] + UNK_0x1C8FE65729F6E371(iLocal_1822[iVar0], &cLocal_2668)))
								{
									UNK_0xC55F2A0377488064(iLocal_3121[iVar0]);
								}
							}
							else
							{
								UNK_0xC55F2A0377488064(iLocal_3121[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 5)
				{
					if (!iLocal_3121[iVar0] == iLocal_3166)
					{
						if (UNK_0xDF1306B443CD3D15(iLocal_3121[iVar0], 0))
						{
							bVar1 = UNK_0xA30B8362589C124A(iLocal_3121[iVar0], -1, 0);
							if (!UNK_0xEB6A8945D1AC98A1(bVar1))
							{
								iVar20 = UNK_0xD1960163A3042274(bVar1, 242628503);
								if (iVar20 == 7)
								{
									bVar13 = UNK_0x9C66D99E63E8E24C(iLocal_3121[iVar0]);
									if (bVar13 < 8f)
									{
										bVar13 = 8f;
									}
									if (bVar13 > 62.9f)
									{
										bVar13 = 62.9f;
									}
									UNK_0x06736587AE5BE33B(bVar1, bVar13);
								}
							}
						}
						if (!bLocal_87 && !bLocal_100)
						{
							if (iLocal_1822[iVar0] > 0)
							{
								UNK_0xDB8844D4B7C60440(iLocal_1822[iVar0], &cLocal_2668);
							}
						}
						if (!bLocal_77)
						{
							if (!bLocal_105)
							{
								func_201(iLocal_3121[iVar0]);
							}
						}
						else if (UNK_0xC844350D5D58C99A(iLocal_3121[iVar0]))
						{
							UNK_0xA954465BA6FDEFE2(&(iLocal_3121[iVar0]));
						}
					}
					iLocal_1947 = (iLocal_1947 - 1);
					iLocal_1858[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1952 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_200();
	}
}

void func_318(bool bParam0)
{
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_202(bParam0);
		UNK_0xFCA4899C6BBAD48F(bParam0, 786603);
	}
}

bool func_319(bool bParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	if (UNK_0xDF1306B443CD3D15(bParam1, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
		if (bParam2)
		{
			vVar15 = { UNK_0x56E9E0FD5ACCD35D(bParam1) };
			vVar12 = { vVar15 / FtoV(SYSTEM::VMAG(vVar15)) };
		}
		else
		{
			vVar6 = { UNK_0x68E4ADDDDCD7BDDE(bParam1, 0f, 5f, 0f) };
			vVar12 = { vVar6 - vVar3 };
		}
	}
	vVar9 = { vVar3 - vVar0 };
	vVar9.f_2 = 0f;
	vVar12.f_2 = 0f;
	if (func_320(vVar9, vVar12) < 0f)
	{
		return true;
	}
	return false;
}

float func_320(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_321(bool bParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		vVar0 = { UNK_0x698705F356FA8F72(bParam0, 0) };
	}
	else
	{
		return false;
	}
	if (UNK_0xDF1306B443CD3D15(bParam1, 0))
	{
		vVar3 = { UNK_0x698705F356FA8F72(bParam1, 0) };
	}
	else
	{
		return false;
	}
	vVar0.f_2 = 0f;
	vVar3.f_2 = 0f;
	fVar6 = func_320(vVar0, vVar3);
	if (fVar6 < 0f)
	{
		return false;
	}
	fVar6 = UNK_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar3.x, vVar3.y);
	if (!fVar6 < fParam2)
	{
		return false;
	}
	return true;
}

bool func_322(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (bLocal_101)
	{
		bVar1 = UNK_0x728870EB733D12A1();
		if (!UNK_0x437347B10A200C4B(bVar1, 0))
		{
			iVar2 = UNK_0x134B62B726CEC8E6(bVar1);
			if (iVar2 == joaat("PHANTOM"))
			{
				if (UNK_0x6CFEA4CFD9C496C8(bVar1))
				{
					if (UNK_0x565509D116400807(bVar1, &bVar0))
					{
						if (UNK_0xDF1306B443CD3D15(bVar0, 0))
						{
							if (UNK_0x1B3D109B39CC2C89(bVar0, bParam0))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

int func_323(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (!UNK_0x437347B10A200C4B(*uParam0, 0))
	{
		if (UNK_0xBBA8A868118C90ED(*uParam0, -1, 0))
		{
			if (iParam1 == 2)
			{
				bVar0 = UNK_0x852A19533F896693(*uParam0, 6, func_205(), -1, 0, false);
				UNK_0x6DF7BF67E86AAE86(bVar0, bLocal_2684);
				UNK_0x71199B01895C6202(func_205());
			}
			else if (iParam1 == 1)
			{
				bVar0 = UNK_0x0268AF082D60F2AE(*uParam0, 1);
				if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(*uParam0)))
				{
					UNK_0x83F619A03CDDE284(bVar0, 1, 4096, -1);
				}
			}
			else
			{
				bVar0 = UNK_0x852A19533F896693(*uParam0, 4, func_208(), -1, 0, false);
				if (bLocal_107)
				{
					UNK_0x71199B01895C6202(func_208());
				}
			}
			if (bParam2)
			{
				UNK_0x7980D72D61BEF4D5(bVar0, true);
				UNK_0x00A6D36F507FD6EA(bVar0, 0);
				UNK_0x4E885A246A9D983A(bVar0, 32, false);
			}
			if (bLocal_108)
			{
				UNK_0xBAFED2F6486F771A(bVar0, 8192, true);
				UNK_0xBAFED2F6486F771A(bVar0, 65536, true);
				UNK_0xBAFED2F6486F771A(bVar0, 2, false);
				UNK_0xDC2C59BD0989562B(*uParam0, 1);
			}
			UNK_0x11AD11297DC58CC7(bVar0, true);
			func_324(bVar0);
			bLocal_106 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_324(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		UNK_0x6DAD7906B73F064D(&bParam0);
	}
}

void func_325(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0x09AC81E49EA267F7(false, 12);
	if (iLocal_2914 >= -1 && iLocal_2915 >= -1)
	{
		while (iVar0 == iLocal_2914 || iVar0 == iLocal_2915)
		{
			iVar0++;
		}
	}
	else if (iLocal_2914 >= -1)
	{
		if (iVar0 == iLocal_2914)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			UNK_0xC002508A277213DE(bParam0, false, false);
			break;
		case 1:
			UNK_0xC002508A277213DE(bParam0, 2, 2);
			break;
		case 2:
			UNK_0xC002508A277213DE(bParam0, 4, 4);
			break;
		case 3:
			UNK_0xC002508A277213DE(bParam0, 27, 27);
			break;
		case 4:
			UNK_0xC002508A277213DE(bParam0, 7, 7);
			break;
		case 5:
			UNK_0xC002508A277213DE(bParam0, 73, 73);
			break;
		case 6:
			UNK_0xC002508A277213DE(bParam0, 68, 68);
			break;
		case 7:
			UNK_0xC002508A277213DE(bParam0, 62, 62);
			break;
		case 8:
			UNK_0xC002508A277213DE(bParam0, 132, 132);
			break;
		case 9:
			UNK_0xC002508A277213DE(bParam0, 117, false);
			break;
		case 10:
			UNK_0xC002508A277213DE(bParam0, 52, 52);
			break;
		case 11:
			UNK_0xC002508A277213DE(bParam0, 88, 88);
			break;
		case 12:
			UNK_0xC002508A277213DE(bParam0, true, true);
			break;
		case 13:
			UNK_0xC002508A277213DE(bParam0, 36, 36);
			break;
		case 14:
			UNK_0xC002508A277213DE(bParam0, 95, 95);
			break;
		default:
			UNK_0xC002508A277213DE(bParam0, 73, 73);
			break;
	}
}

void func_326(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	bool bVar0;
	bool bVar1;

	bVar0 = true;
	if (!bLocal_88)
	{
		if (!func_327(vParam0, vParam3, bParam6, 200f))
		{
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				bVar1 = UNK_0x728870EB733D12A1();
				if (!UNK_0x437347B10A200C4B(bVar1, 0))
				{
					if (UNK_0x5A91F08DF773C39D(bVar1, vParam0, bParam6, bParam6, bParam6, false, true, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				UNK_0x28F5E4DA506AC0CA(vParam0, bParam6, 0, 0, 0, 0, false, 0);
			}
		}
	}
}

bool func_327(vector3 vParam0, vector3 vParam3, bool bParam6, float fParam7)
{
	if (!UNK_0x757EF87A33649210())
	{
		if (!bLocal_88)
		{
			if (!bLocal_75)
			{
				if (SYSTEM::VMAG2(vParam3 - vParam0) - bParam6) < (fParam7 * fParam7)
				{
					if (UNK_0x8E28E832BEAC3DCE(vParam0, bParam6))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

float func_328(bool bParam0)
{
	float fVar0;

	UNK_0x36187931D29E5BBE(bParam0, &cLocal_2668);
	while (!UNK_0x3DDA6C6A285628E4(bParam0, &cLocal_2668))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = UNK_0x1C8FE65729F6E371(bParam0, &cLocal_2668);
	UNK_0xDB8844D4B7C60440(bParam0, &cLocal_2668);
	return fVar0;
}

bool func_329(int iParam0)
{
	if (((((((iParam0 == joaat("POLICE") || iParam0 == joaat("POLICE2")) || iParam0 == joaat("POLICE3")) || iParam0 == joaat("POLICEB")) || iParam0 == joaat("POLICET")) || iParam0 == joaat("POLMAV")) || iParam0 == joaat("PRANGER")) || iParam0 == joaat("SHERIFF"))
	{
		return true;
	}
	return false;
}

void func_330(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		vVar1 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	}
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		bVar7 = false;
		bVar8 = false;
		iVar0 = iLocal_1951;
		while (iVar0 < 15)
		{
			switch (iLocal_1930[iVar0])
			{
				case 0:
					if (!iLocal_2861[iVar0] == 0)
					{
						if (UNK_0x5A91F08DF773C39D(bParam0, vLocal_2489[iVar0 /*3*/], bLocal_1273, bLocal_1273, bLocal_1273, false, true, 0))
						{
							iLocal_1953++;
							iLocal_1930[iVar0]++;
						}
					}
					else
					{
						iLocal_1930[iVar0] = 99;
					}
					break;
				case 1:
					if (6 > iLocal_1948)
					{
						if (!UNK_0xC844350D5D58C99A(iLocal_3105[iVar0]))
						{
							UNK_0x523BCC9DC80CD82F(iLocal_2861[iVar0]);
							if (UNK_0xB87F6CF6E5628C67(iLocal_2861[iVar0]))
							{
								if ((bLocal_75 || bLocal_89) || (!bLocal_106 && !func_327(vLocal_2489[iVar0 /*3*/], vVar1, 5f, fLocal_1286)))
								{
									if (bLocal_85)
									{
										func_326(vLocal_2489[iVar0 /*3*/], vVar1, fLocal_1279);
									}
									iLocal_3105[iVar0] = UNK_0x122AAB0B1D6F55AD(iLocal_2861[iVar0], vLocal_2489[iVar0 /*3*/], false, false, false, false);
									if (iLocal_2861[iVar0] == joaat("POLMAV"))
									{
										UNK_0x446EA2500F021666(iLocal_3105[iVar0], false);
									}
									UNK_0xC4C7FD0EF3FEAB0B(iLocal_3105[iVar0], fLocal_1209[iVar0], fLocal_1225[iVar0], fLocal_1241[iVar0], fLocal_1257[iVar0]);
									UNK_0x71199B01895C6202(iLocal_2861[iVar0]);
									if (UNK_0x4906F8A34E9F4814(iLocal_3105[iVar0], func_206()))
									{
										UNK_0xAA280AF45BCCCF21(iLocal_3105[iVar0], 1);
										if (!UNK_0x7D8B2A8F9EA82DB7(iLocal_2861[iVar0]))
										{
											UNK_0x21CBAD8B56E628F6(iLocal_3105[iVar0], 1);
										}
									}
									if (UNK_0x4906F8A34E9F4814(iLocal_3105[iVar0], func_207()))
									{
										UNK_0xC002508A277213DE(iLocal_3105[iVar0], false, false);
									}
									UNK_0x120A395B0ECB8EA5(iLocal_3105[iVar0], true);
									iLocal_1953 = (iLocal_1953 - 1);
									iLocal_1948++;
									iLocal_1930[iVar0]++;
									bLocal_106 = true;
								}
							}
						}
						else
						{
							iLocal_1953 = (iLocal_1953 - 1);
							iLocal_1948++;
							iLocal_1930[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar7)
					{
						if (UNK_0xDF1306B443CD3D15(iLocal_3105[iVar0], 0))
						{
							vVar4 = { UNK_0x68F4C0EC296D3901(iLocal_3105[iVar0], true) };
						}
						if (fLocal_1287 == 0f || SYSTEM::VDIST2(vVar1, vVar4) < (fLocal_1287 * fLocal_1287))
						{
							if (!func_319(iLocal_3105[iVar0], bParam0, 0))
							{
								if (!bLocal_77)
								{
									func_201(iLocal_3105[iVar0]);
								}
								else
								{
									UNK_0xA954465BA6FDEFE2(&(iLocal_3105[iVar0]));
								}
								iLocal_1948 = (iLocal_1948 - 1);
								iLocal_1930[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1930[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1951 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_203();
	}
}

void func_331(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	bool bVar24;
	vector3 vVar25;

	bVar5 = false;
	bVar18 = UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62());
	bVar19 = UNK_0x5C45F6B29A99E47E();
	bVar20 = UNK_0x1E3C51C9DE5100B7();
	if (bVar18)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar5 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		}
		vVar12 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	}
	iVar1 = 0;
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0x20D6474D5F4B9FC6(bParam0))
		{
			fLocal_1275 = UNK_0x9901AABAC4D4C590(bParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1950;
		while (iVar0 < 175 && !bVar23)
		{
			if (iLocal_1470[iVar0] != 99)
			{
				if (iLocal_1470[iVar0] == 0)
				{
					if (iLocal_1294[iVar0] > 0 && iLocal_2685[iVar0] != 0)
					{
						if (!bLocal_75)
						{
							if (fLocal_1275 < (fLocal_813[iVar0] + 20000f))
							{
								if (fLocal_1275 >= (fLocal_813[iVar0] - (7000f * bParam1)))
								{
									if (func_329(iLocal_2685[iVar0]))
									{
										UNK_0x5D96D8530B3D0904(&(iLocal_1646[iVar0]), false);
									}
									else if (UNK_0x7D8B2A8F9EA82DB7(iLocal_2685[iVar0]))
									{
										UNK_0x5D96D8530B3D0904(&(iLocal_1646[iVar0]), 2);
									}
									UNK_0x0674E58A79778E99(&(iLocal_1646[iVar0]), true);
									iLocal_1955++;
									iLocal_1470[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar23 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_333(iVar0, 1090519040 /* Float: 8f */);
							}
						}
						else
						{
							fVar15 = (fLocal_1275 - fLocal_813[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_328(iLocal_1294[iVar0]))
								{
									if (func_329(iLocal_2685[iVar0]))
									{
										UNK_0x5D96D8530B3D0904(&(iLocal_1646[iVar0]), false);
									}
									else if (UNK_0x7D8B2A8F9EA82DB7(iLocal_2685[iVar0]))
									{
										UNK_0x5D96D8530B3D0904(&(iLocal_1646[iVar0]), 2);
									}
									UNK_0x0674E58A79778E99(&(iLocal_1646[iVar0]), true);
									iLocal_1955++;
									iLocal_1470[iVar0]++;
								}
								else
								{
									func_333(iVar0, 1090519040 /* Float: 8f */);
								}
							}
						}
					}
					else
					{
						func_333(iVar0, 1090519040 /* Float: 8f */);
					}
				}
				else if (iLocal_1470[iVar0] == 1)
				{
					UNK_0x36187931D29E5BBE(iLocal_1294[iVar0], &cLocal_2668);
					bVar17 = false;
					if (UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], false))
					{
						UNK_0x523BCC9DC80CD82F(func_205());
						if (UNK_0xB87F6CF6E5628C67(func_205()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_102 && ((!UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 2) && bVar19) || (UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 2) && bVar20)))
					{
						bVar17 = true;
					}
					else
					{
						UNK_0x523BCC9DC80CD82F(func_208());
						bVar17 = UNK_0xB87F6CF6E5628C67(func_208());
					}
					if (!UNK_0xC844350D5D58C99A(iLocal_2916[iVar0]))
					{
						UNK_0x523BCC9DC80CD82F(iLocal_2685[iVar0]);
						if ((UNK_0xB87F6CF6E5628C67(iLocal_2685[iVar0]) && UNK_0x3DDA6C6A285628E4(iLocal_1294[iVar0], &cLocal_2668)) && bVar17)
						{
							if (fLocal_1275 >= (fLocal_813[iVar0] - (fLocal_1288 * bParam1)))
							{
								if ((bLocal_89 || bParam2) || (!bLocal_106 && !func_327(vLocal_1963[iVar0 /*3*/], vVar12, 5f, fLocal_1286)))
								{
									if (bLocal_85)
									{
										func_326(vLocal_1963[iVar0 /*3*/], vVar12, fLocal_1279);
									}
									iLocal_2916[iVar0] = UNK_0x122AAB0B1D6F55AD(iLocal_2685[iVar0], vLocal_1963[iVar0 /*3*/], false, false, false, false);
									if (iLocal_2685[iVar0] == joaat("POLMAV"))
									{
										UNK_0x446EA2500F021666(iLocal_2916[iVar0], false);
									}
									if (bLocal_98 && !UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], false))
									{
										func_325(iLocal_2916[iVar0]);
									}
									UNK_0x08841CDB215AE18F(iLocal_2916[iVar0], vLocal_1963[iVar0 /*3*/], 0, 0, 1);
									UNK_0xC4C7FD0EF3FEAB0B(iLocal_2916[iVar0], fLocal_109[iVar0], fLocal_285[iVar0], fLocal_461[iVar0], fLocal_637[iVar0]);
									if (UNK_0x8E39AC3C76C8AA58(iLocal_2685[iVar0]) || UNK_0x7D8B2A8F9EA82DB7(iLocal_2685[iVar0]))
									{
										UNK_0xB9FD7450C0DAB575(iLocal_2916[iVar0], 1084227584 /* Float: 5f */);
									}
									if (UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 3))
									{
										UNK_0x120A395B0ECB8EA5(iLocal_2916[iVar0], true);
									}
									if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], false))
									{
										UNK_0x56FDC9ADE35F7DB0(iLocal_2916[iVar0], true, true, 0);
										if (UNK_0xD8A54335F18763BA() > 19 || UNK_0xD8A54335F18763BA() < 7)
										{
											UNK_0x0882E3DC0C991680(iLocal_2916[iVar0], 3);
										}
									}
									UNK_0x1E9649458B15960F(iLocal_2916[iVar0], true);
									UNK_0x7980D72D61BEF4D5(iLocal_2916[iVar0], true);
									UNK_0x71199B01895C6202(iLocal_2685[iVar0]);
									iLocal_1955 = (iLocal_1955 - 1);
									iLocal_1470[iVar0]++;
									bLocal_106 = true;
								}
								else if (fLocal_1275 > fLocal_813[iVar0])
								{
									iLocal_1955 = (iLocal_1955 - 1);
									func_333(iVar0, 1090519040 /* Float: 8f */);
								}
							}
						}
					}
				}
				else if (iLocal_1470[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1961 || iLocal_1961 == 0)) || bLocal_89) || bParam2)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], true))
						{
							if (UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], false))
							{
								UNK_0x523BCC9DC80CD82F(func_205());
								bVar17 = UNK_0xB87F6CF6E5628C67(func_205());
								iVar21 = 2;
							}
							else if (!bLocal_102 && ((!UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 2) && bVar19) || (UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 2) && bVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								UNK_0x523BCC9DC80CD82F(func_208());
								bVar17 = UNK_0xB87F6CF6E5628C67(func_208());
								iVar21 = 0;
							}
							if (!UNK_0x437347B10A200C4B(iLocal_2916[iVar0], 0))
							{
								if (!bLocal_106 && UNK_0xBBA8A868118C90ED(iLocal_2916[iVar0], -1, 0))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(iLocal_2916[iVar0], true), vVar12) < 10000f || bParam2) || bLocal_89)
										{
											func_323(&(iLocal_2916[iVar0]), iVar21, 0);
											UNK_0x5D96D8530B3D0904(&(iLocal_1646[iVar0]), true);
										}
									}
								}
							}
						}
						if (UNK_0xDF1306B443CD3D15(iLocal_2916[iVar0], 0))
						{
							UNK_0x36187931D29E5BBE(iLocal_1294[iVar0], &cLocal_2668);
							if (fLocal_1275 >= fLocal_813[iVar0])
							{
								if (12 > iLocal_1946)
								{
									fVar15 = (fLocal_1275 - fLocal_813[iVar0]);
									if (UNK_0x3DDA6C6A285628E4(iLocal_1294[iVar0], &cLocal_2668))
									{
										if (fVar15 < UNK_0x1C8FE65729F6E371(iLocal_1294[iVar0], &cLocal_2668))
										{
											vVar6 = { UNK_0x68F4C0EC296D3901(iLocal_2916[iVar0], true) };
											vVar9 = { UNK_0x87A3DA08ACDE0189(iLocal_1294[iVar0], fVar15, &cLocal_2668) };
											if (!func_327(vVar6, vVar12, 5f, fLocal_1286) && func_327(vVar9, vVar12, 5f, fLocal_1286))
											{
												if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], true))
												{
													func_323(&(iLocal_2916[iVar0]), iVar21, 0);
												}
												func_333(iVar0, 1090519040 /* Float: 8f */);
											}
											else if (((!bLocal_106 || UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], true)) || bLocal_89) || bParam2)
											{
												if (func_316(&(iLocal_2916[iVar0]), iLocal_1294[iVar0], fVar15, 1, 0, 0, 1, bLocal_103))
												{
													if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], true))
													{
														func_323(&(iLocal_2916[iVar0]), iVar21, 0);
													}
													UNK_0x20641932E5104B25(iLocal_2916[iVar0], true, 0);
													UNK_0xA9FBE21EB8701B34(iLocal_2916[iVar0], bParam1);
													iLocal_1946++;
													iLocal_1470[iVar0]++;
												}
											}
										}
										else
										{
											if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], true))
											{
												func_323(&(iLocal_2916[iVar0]), iVar21, 0);
											}
											func_333(iVar0, 1090519040 /* Float: 8f */);
										}
									}
									else if (fVar15 > UNK_0x1C8FE65729F6E371(iLocal_1294[iVar0], &cLocal_2668))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], true))
										{
											func_323(&(iLocal_2916[iVar0]), iVar21, 0);
										}
										func_333(iVar0, 1090519040 /* Float: 8f */);
									}
								}
								else
								{
									if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], true))
									{
										func_323(&(iLocal_2916[iVar0]), iVar21, 0);
									}
									func_333(iVar0, 1090519040 /* Float: 8f */);
								}
							}
							else if (bLocal_86 && !bLocal_94)
							{
								if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], true))
								{
									func_323(&(iLocal_2916[iVar0]), iVar21, 0);
								}
								func_333(iVar0, 1090519040 /* Float: 8f */);
							}
						}
						else
						{
							if (!UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], true))
							{
								func_323(&(iLocal_2916[iVar0]), iVar21, 0);
							}
							func_333(iVar0, 1090519040 /* Float: 8f */);
						}
						iVar3++;
						iLocal_1961 = iVar0;
					}
				}
				else if (iLocal_1470[iVar0] == 3)
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_2916[iVar0], 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(iLocal_2916[iVar0]))
						{
							bVar4 = UNK_0xA30B8362589C124A(iLocal_2916[iVar0], -1, 0);
							if (!UNK_0xEB6A8945D1AC98A1(bVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_84)
									{
										if ((!bLocal_79 && !bLocal_76) && func_322(iLocal_2916[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1960 || iLocal_1960 == 0))
											{
												if (!UNK_0x437347B10A200C4B(bVar5, 0))
												{
													bVar17 = false;
													if (!func_332(iLocal_2916[iVar0], bVar5) || func_319(bVar5, iLocal_2916[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1960 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_99 && !UNK_0xEAE0D21A50E6C7F4(iLocal_1646[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1960 || iLocal_1960 == 0))
										{
											vVar25 = { UNK_0x5293C88BD2F4DE13(bParam0, UNK_0x68F4C0EC296D3901(iLocal_2916[iVar0], true)) };
											if (vVar25.y < 0f)
											{
												if (UNK_0x755FF954DAE327E1(vVar25.y) > UNK_0x755FF954DAE327E1(vVar25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1960 = iVar0;
										}
									}
									if (bVar24)
									{
										func_318(iLocal_2916[iVar0]);
										iLocal_1470[iVar0]++;
									}
									else
									{
										UNK_0xA9FBE21EB8701B34(iLocal_2916[iVar0], bParam1);
									}
								}
							}
							else
							{
								UNK_0xC55F2A0377488064(iLocal_2916[iVar0]);
							}
						}
						else
						{
							iLocal_1470[iVar0]++;
						}
					}
					else
					{
						iLocal_1470[iVar0]++;
					}
				}
				else if (iLocal_1470[iVar0] == 4)
				{
					if (UNK_0xDF1306B443CD3D15(iLocal_2916[iVar0], 0))
					{
						if (!UNK_0x20D6474D5F4B9FC6(iLocal_2916[iVar0]))
						{
							iLocal_1470[iVar0]++;
						}
						else
						{
							bVar4 = UNK_0xA30B8362589C124A(iLocal_2916[iVar0], -1, 0);
							if (!UNK_0xEB6A8945D1AC98A1(bVar4))
							{
								UNK_0xA9FBE21EB8701B34(iLocal_2916[iVar0], bParam1);
							}
							else
							{
								UNK_0xC55F2A0377488064(iLocal_2916[iVar0]);
							}
							if (UNK_0x3DDA6C6A285628E4(iLocal_1294[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 > (fLocal_813[iVar0] + UNK_0x1C8FE65729F6E371(iLocal_1294[iVar0], &cLocal_2668)))
								{
									UNK_0xC55F2A0377488064(iLocal_2916[iVar0]);
								}
							}
							else
							{
								UNK_0xC55F2A0377488064(iLocal_2916[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1470[iVar0]++;
					}
				}
				else if (iLocal_1470[iVar0] == 5)
				{
					if (!UNK_0x437347B10A200C4B(iLocal_2916[iVar0], 0))
					{
						bVar16 = UNK_0x9C66D99E63E8E24C(iLocal_2916[iVar0]);
					}
					iLocal_1946 = (iLocal_1946 - 1);
					func_333(iVar0, bVar16);
				}
				if (iVar22 == -1)
				{
					iVar22 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar22 != -1)
		{
			iLocal_1950 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1960 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1961 = 0;
		}
	}
	else
	{
		func_204();
	}
}

bool func_332(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		vVar0 = { UNK_0x698705F356FA8F72(bParam0, 0) };
	}
	else
	{
		return false;
	}
	if (UNK_0xDF1306B443CD3D15(bParam1, 0))
	{
		vVar3 = { UNK_0x698705F356FA8F72(bParam1, 0) };
	}
	else
	{
		return false;
	}
	vVar0.f_2 = 0f;
	vVar3.f_2 = 0f;
	fVar6 = func_320(vVar0, vVar3);
	if (fVar6 < 0f)
	{
		return false;
	}
	return true;
}

void func_333(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!iLocal_2685[iParam0] == 0)
	{
		UNK_0x71199B01895C6202(iLocal_2685[iParam0]);
	}
	if (!UNK_0x437347B10A200C4B(iLocal_2916[iParam0], 0))
	{
		UNK_0x20641932E5104B25(iLocal_2916[iParam0], true, 0);
		UNK_0x1E9649458B15960F(iLocal_2916[iParam0], false);
		bVar0 = UNK_0xA30B8362589C124A(iLocal_2916[iParam0], -1, 0);
		if (!UNK_0xEB6A8945D1AC98A1(bVar0) && bVar0 != UNK_0x16F2683693E537C9())
		{
			UNK_0x11AD11297DC58CC7(bVar0, false);
			if (bParam1 < 8f)
			{
				bParam1 = 8f;
			}
			if (bParam1 > 62.9f)
			{
				bParam1 = 62.9f;
			}
			UNK_0x60274E99F9B27DEA(bVar0, iLocal_2916[iParam0], false, 1, bParam1, 786603, 5f, 5f, 1);
			UNK_0xBAFED2F6486F771A(bVar0, 8192, true);
			if (bLocal_108)
			{
				UNK_0xBAFED2F6486F771A(bVar0, 65536, true);
				UNK_0xBAFED2F6486F771A(bVar0, 2, false);
			}
			UNK_0xAFF39FB306F8E232(bVar0, 6, false);
			UNK_0x06736587AE5BE33B(bVar0, bParam1);
		}
	}
	if (!bLocal_77)
	{
		if (!bLocal_105)
		{
			func_324(bVar0);
			func_201(iLocal_2916[iParam0]);
		}
	}
	else
	{
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			UNK_0xEBA53F35D0085654(&bVar0);
		}
		if (UNK_0xC844350D5D58C99A(iLocal_2916[iParam0]))
		{
			UNK_0xA954465BA6FDEFE2(&(iLocal_2916[iParam0]));
		}
	}
	if (!bLocal_87 && !bLocal_100)
	{
		if (iLocal_1294[iParam0] > 0)
		{
			UNK_0xDB8844D4B7C60440(iLocal_1294[iParam0], &cLocal_2668);
		}
	}
	iLocal_1470[iParam0] = 99;
}

void func_334(bool bParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		vVar10 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	}
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0x20D6474D5F4B9FC6(bParam0))
		{
			iVar0 = UNK_0x60755EFECF81FC68(bParam0);
			vVar1 = { UNK_0xAA8A22FF67DFFDCD(iVar0, fParam1) };
			vVar4 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
			vVar7 = { vVar4 - vVar1 };
			fVar13 = SYSTEM::VMAG(vVar7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_326(vVar1, vVar10, fVar13);
		}
	}
}

void func_335(bool bParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > (fParam1 * fParam1))
				{
					UNK_0xC83E7A5E408DF68C(1);
				}
				else
				{
					UNK_0xC83E7A5E408DF68C(0);
				}
			}
		}
	}
}

void func_336(bool bParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) > (fParam1 * fParam1))
				{
					UNK_0xD60411959D5D930B(1f);
				}
				else
				{
					UNK_0xD60411959D5D930B(0f);
				}
			}
		}
	}
}

void func_337(bool bParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;

	if (!UNK_0x437347B10A200C4B(bParam0, 0) && UNK_0x20D6474D5F4B9FC6(bParam0))
	{
		fVar1 = (fLocal_1289 + 2000f);
		fVar2 = (fLocal_1290 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = UNK_0x60755EFECF81FC68(bParam0);
			if (fVar1 <= UNK_0x9FC30AC87F925DDF(iVar0))
			{
				if (iLocal_1956 == 0)
				{
					vLocal_2656 = { UNK_0xAA8A22FF67DFFDCD(iVar0, fLocal_1289) };
					iLocal_1956++;
				}
				else if (iLocal_1956 == 1)
				{
					vLocal_2659 = { UNK_0xAA8A22FF67DFFDCD(iVar0, fVar1) };
					iLocal_1956++;
				}
				else if (!bLocal_106)
				{
					if (vLocal_2656.x > vLocal_2659.x)
					{
						fVar3 = vLocal_2656.x;
						vLocal_2656.x = vLocal_2659.x;
						vLocal_2659.x = fVar3;
					}
					if (vLocal_2656.y > vLocal_2659.y)
					{
						fVar3 = vLocal_2656.y;
						vLocal_2656.f_1 = vLocal_2659.y;
						vLocal_2659.f_1 = fVar3;
					}
					if (vLocal_2656.z > vLocal_2659.z)
					{
						fVar3 = vLocal_2656.z;
						vLocal_2656.f_2 = vLocal_2659.z;
						vLocal_2659.f_2 = fVar3;
					}
					vLocal_2656 = { vLocal_2656 - Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
					vLocal_2659 = { vLocal_2659 + Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
					UNK_0xF858EFDE1871B5F2(vLocal_2656, vLocal_2659, false, 0);
					fLocal_1289 = fVar1;
					iLocal_1956 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = UNK_0x60755EFECF81FC68(bParam0);
			if (iLocal_1959 == 0)
			{
				vLocal_2662 = { UNK_0xAA8A22FF67DFFDCD(iVar0, fLocal_1290) };
				iLocal_1959++;
			}
			else if (iLocal_1959 == 1)
			{
				vLocal_2665 = { UNK_0xAA8A22FF67DFFDCD(iVar0, fVar2) };
				iLocal_1959++;
			}
			else if (!bLocal_106 && !bVar4)
			{
				if (vLocal_2662.x > vLocal_2665.x)
				{
					fVar3 = vLocal_2662.x;
					vLocal_2662.x = vLocal_2665.x;
					vLocal_2665.x = fVar3;
				}
				if (vLocal_2662.y > vLocal_2665.y)
				{
					fVar3 = vLocal_2662.y;
					vLocal_2662.f_1 = vLocal_2665.y;
					vLocal_2665.f_1 = fVar3;
				}
				if (vLocal_2662.z > vLocal_2665.z)
				{
					fVar3 = vLocal_2662.z;
					vLocal_2662.f_2 = vLocal_2665.z;
					vLocal_2665.f_2 = fVar3;
				}
				vLocal_2662 = { vLocal_2662 - Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
				vLocal_2665 = { vLocal_2665 + Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
				UNK_0xF5894FEB702E7E76(vLocal_2662, vLocal_2665, 1);
				fLocal_1290 = fVar2;
				iLocal_1959 = 0;
			}
		}
	}
}

bool func_338(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam1, 0))
		{
			if (UNK_0xC42A92762C58E1B9(bParam0, bParam1, 0))
			{
				return false;
			}
		}
	}
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	if (UNK_0xDF1306B443CD3D15(bParam1, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
		vVar6 = { UNK_0x68E4ADDDDCD7BDDE(bParam1, 0f, 5f, 0f) };
		vVar12 = { vVar6 - vVar3 };
	}
	vVar9 = { vVar3 - vVar0 };
	vVar9.f_2 = 0f;
	vVar12.f_2 = 0f;
	fVar15 = func_320(vVar9, vVar12);
	if (fVar15 < 0f)
	{
		return true;
	}
	return false;
}

void func_339()
{
	UNK_0xE342F209E49C5314(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, 1);
	UNK_0xEF7906595D9044B8(0);
	UNK_0xD980FF3526C8CB9E(0);
	UNK_0xE9B51BC60A3B47D9(0);
	UNK_0xD60411959D5D930B(0f);
	UNK_0xC83E7A5E408DF68C(0);
	UNK_0xFF42993F8A095C58(3);
}

void func_340(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
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
	bool bVar9;
	bool bVar10;

	if (iLocal_91 == 0)
	{
		if (*bParam2 < fParam3)
		{
			*bParam2 = fParam3;
			iLocal_91 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1284;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_343(bParam0, bParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		if (func_338(bParam1, bParam0))
		{
			if (UNK_0x405E212DDE472467(bParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_342(bParam0, bParam1) < fParam5)
			{
				fVar1 = func_341(bParam0, bParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			bLocal_92 = true;
		}
		else if (bLocal_92)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				bLocal_92 = false;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *bParam2);
	if (fVar1 > 0f)
	{
		fVar1 = UNK_0x6117725E0134737F();
		fVar8 = ((fLocal_1291 * fParam3) * fVar1);
		fVar1 = (fVar4 - *bParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*bParam2 = (*bParam2 + fVar1);
	}
	else
	{
		fVar1 = UNK_0x6117725E0134737F();
		fVar8 = ((fLocal_1292 * fParam3) * fVar1);
		fVar1 = (fVar4 - *bParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*bParam2 = (*bParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam1))
		{
			if (UNK_0x405E212DDE472467(bParam1, 0))
			{
				bVar9 = UNK_0x6937EA2286828455(bParam1, 0);
				if (!UNK_0x437347B10A200C4B(bVar9, 0))
				{
					bVar10 = UNK_0x134B62B726CEC8E6(bVar9);
					if (UNK_0x8E39AC3C76C8AA58(bVar10) || UNK_0x7D8B2A8F9EA82DB7(bVar10))
					{
						if (UNK_0xDF1306B443CD3D15(bVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_1282 - fLocal_1283));
							fVar1 = (fVar1 + fLocal_1283);
							fLocal_1281 = fVar1;
							if (fLocal_1281 < fLocal_1283)
							{
								fLocal_1281 = fLocal_1283;
							}
							if (fLocal_1281 > fLocal_1282)
							{
								fLocal_1281 = fLocal_1282;
							}
							UNK_0x85089606511D395B(UNK_0xD803B885F5E47A62(), fLocal_1281);
						}
					}
				}
			}
		}
	}
}

float func_341(bool bParam0, bool bParam1)
{
	struct<2> Var0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	bool bVar13;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		Var0 = UNK_0x5045843AAD2F36F7(bParam0);
		Var0.f_1 = UNK_0x580A699989F7AD54(bParam0);
	}
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
		if (UNK_0x405E212DDE472467(bParam1, 0))
		{
			bVar13 = UNK_0x6937EA2286828455(bParam1, 0);
			vVar9.x = UNK_0x5045843AAD2F36F7(bVar13);
			vVar9.f_1 = UNK_0x580A699989F7AD54(bVar13);
		}
		else
		{
			vVar6 = { UNK_0x68E4ADDDDCD7BDDE(bParam1, 0f, 5f, 0f) };
			vVar9 = { vVar6 - vVar3 };
		}
	}
	fVar12 = UNK_0x07AB02F3C4AE2B04(Var0, Var0.f_1, vVar9.x, vVar9.y);
	return fVar12;
}

float func_342(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	vVar6 = { vVar3 - vVar0 };
	vVar6.f_2 = 0f;
	fVar9 = SYSTEM::VMAG(vVar6);
	return fVar9;
}

float func_343(bool bParam0, bool bParam1)
{
	struct<2> Var0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		Var0 = UNK_0x5045843AAD2F36F7(bParam0);
		Var0.f_1 = UNK_0x580A699989F7AD54(bParam0);
		vVar6 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar9 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	vVar3 = { vVar9 - vVar6 };
	fVar12 = UNK_0x07AB02F3C4AE2B04(vVar3.x, vVar3.y, Var0, Var0.f_1);
	fVar12 = (fVar12 + -90f);
	if (fVar12 < 0f)
	{
		fVar12 = (fVar12 * -1f);
	}
	vVar3.f_2 = 0f;
	return (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(fVar12));
}

bool func_344()
{
	if (UNK_0xC844350D5D58C99A(bLocal_3258))
	{
		if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
		{
			if (!UNK_0x0A059E0DB9253280(bLocal_3258))
			{
				iLocal_3403 = 1;
			}
			else
			{
				iLocal_3403 = 0;
			}
		}
		else
		{
			iLocal_3403 = 1;
		}
	}
	else
	{
		iLocal_3403 = 1;
	}
	iLocal_3190 = 0;
	while (iLocal_3190 <= 24)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3121[iLocal_3190]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3121[iLocal_3190], 0))
			{
				if (!UNK_0x0A059E0DB9253280(iLocal_3121[iLocal_3190]))
				{
					iLocal_3404[iLocal_3190] = 1;
				}
				else
				{
					iLocal_3404[iLocal_3190] = 0;
				}
			}
			else
			{
				iLocal_3404[iLocal_3190] = 1;
			}
		}
		else
		{
			iLocal_3404[iLocal_3190] = 1;
		}
		iLocal_3190++;
	}
	if (((((((((((((((((((((((((iLocal_3403 == 1 && iLocal_3404[0] == 1) && iLocal_3404[1] == 1) && iLocal_3404[2] == 1) && iLocal_3404[3] == 1) && iLocal_3404[4] == 1) && iLocal_3404[5] == 1) && iLocal_3404[6] == 1) && iLocal_3404[7] == 1) && iLocal_3404[8] == 1) && iLocal_3404[9] == 1) && iLocal_3404[10] == 1) && iLocal_3404[11] == 1) && iLocal_3404[12] == 1) && iLocal_3404[13] == 1) && iLocal_3404[14] == 1) && iLocal_3404[15] == 1) && iLocal_3404[16] == 1) && iLocal_3404[17] == 1) && iLocal_3404[18] == 1) && iLocal_3404[19] == 1) && iLocal_3404[20] == 1) && iLocal_3404[21] == 1) && iLocal_3404[22] == 1) && iLocal_3404[23] == 1) && iLocal_3404[24] == 1)
	{
		return true;
	}
	return false;
}

void func_345()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (UNK_0xC844350D5D58C99A(iLocal_3121[4]))
	{
		if (UNK_0xDF1306B443CD3D15(iLocal_3121[4], 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[4]))
			{
				vLocal_3303 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
				vVar3 = { UNK_0x68F4C0EC296D3901(iLocal_3121[4], true) };
				if (vLocal_3303.x < (vVar3.x - 10f) && !UNK_0x0A059E0DB9253280(iLocal_3121[4]))
				{
					UNK_0xC55F2A0377488064(iLocal_3121[4]);
					UNK_0x046C362CF15F1935(&(iLocal_3121[4]));
				}
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[3]))
	{
		if (UNK_0xDF1306B443CD3D15(iLocal_3121[3], 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[3]))
			{
				vLocal_3303 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
				vVar0 = { UNK_0x68F4C0EC296D3901(iLocal_3121[3], true) };
				if (vLocal_3303.x < (vVar0.x - 10f) && !UNK_0x0A059E0DB9253280(iLocal_3121[3]))
				{
					UNK_0xC55F2A0377488064(iLocal_3121[3]);
					UNK_0x046C362CF15F1935(&(iLocal_3121[3]));
				}
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[21]))
	{
		if (UNK_0xDF1306B443CD3D15(iLocal_3121[21], 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[21]))
			{
				vLocal_3303 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
				vVar6 = { UNK_0x68F4C0EC296D3901(iLocal_3121[21], true) };
				if (vLocal_3303.x < (vVar6.x - 10f) && !UNK_0x0A059E0DB9253280(iLocal_3121[21]))
				{
					UNK_0xC55F2A0377488064(iLocal_3121[21]);
					UNK_0x046C362CF15F1935(&(iLocal_3121[21]));
				}
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[0]))
	{
		if (UNK_0xDF1306B443CD3D15(iLocal_3121[0], 0))
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3258))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
				{
					if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
					{
						if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 50000f && !UNK_0x0A059E0DB9253280(iLocal_3121[0]))
						{
							if (UNK_0x20D6474D5F4B9FC6(iLocal_3121[0]))
							{
								UNK_0xC55F2A0377488064(iLocal_3121[0]);
							}
							UNK_0x046C362CF15F1935(&(iLocal_3121[0]));
						}
					}
				}
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3264))
	{
		if (UNK_0xDF1306B443CD3D15(bLocal_3264, 0))
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3258))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
				{
					if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
					{
						if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 90000f && !UNK_0x0A059E0DB9253280(bLocal_3264))
						{
							UNK_0xF7E25143642732EA(iLocal_3755[0], 0);
							UNK_0xF7E25143642732EA(iLocal_3755[1], 0);
							UNK_0xF7E25143642732EA(iLocal_3755[2], 0);
							if (UNK_0xC844350D5D58C99A(iLocal_3223[0]))
							{
								UNK_0x6DAD7906B73F064D(&(iLocal_3223[0]));
							}
							if (UNK_0xC844350D5D58C99A(iLocal_3223[1]))
							{
								UNK_0x6DAD7906B73F064D(&(iLocal_3223[1]));
							}
							if (UNK_0xC844350D5D58C99A(iLocal_3223[2]))
							{
								UNK_0x6DAD7906B73F064D(&(iLocal_3223[2]));
							}
							if (UNK_0xC844350D5D58C99A(iLocal_3223[3]))
							{
								UNK_0x6DAD7906B73F064D(&(iLocal_3223[3]));
							}
							UNK_0x046C362CF15F1935(&bLocal_3264);
							UNK_0x8D17794CE3273D70("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_346(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;

	fVar2 = (fParam2 * fParam3);
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		if ((UNK_0xC844350D5D58C99A(bParam1) && UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9())) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0xE2F1E99DD161A861(bParam1))
			{
				if (UNK_0xDF1306B443CD3D15(UNK_0x96A5FE5834B81CE7(bParam1), 0))
				{
					fVar1 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bParam1, true), 1);
					if (fVar1 >= fVar2 || bParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						UNK_0xF412DD40DE84CE72(iParam0, 1);
						UNK_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						UNK_0xF412DD40DE84CE72(iParam0, 0);
						UNK_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
			else if (UNK_0xEC560E589DF8370E(bParam1))
			{
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x940C1429253D3B1B(bParam1)))
				{
					fVar1 = UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bParam1, true), 1);
					if (fVar1 >= fVar2 || bParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						UNK_0xF412DD40DE84CE72(iParam0, 1);
						UNK_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						UNK_0xF412DD40DE84CE72(iParam0, 0);
						UNK_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_347()
{
	if (UNK_0xC844350D5D58C99A(iLocal_3121[2]))
	{
		if (UNK_0xDF1306B443CD3D15(iLocal_3121[2], 0))
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3258))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
				{
					if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
					{
						if (UNK_0x9901AABAC4D4C590(bLocal_3258) < 50530f)
						{
							if (!UNK_0x2F6DBDA9ACD7D3AB(iLocal_3121[2]))
							{
								UNK_0x56FDC9ADE35F7DB0(iLocal_3121[2], true, true, 0);
							}
						}
						else if (UNK_0x2F6DBDA9ACD7D3AB(iLocal_3121[2]))
						{
							UNK_0x56FDC9ADE35F7DB0(iLocal_3121[2], false, false, 0);
						}
					}
				}
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3121[5]))
	{
		if (UNK_0xDF1306B443CD3D15(iLocal_3121[5], 0))
		{
			if (!UNK_0x2F6DBDA9ACD7D3AB(iLocal_3121[5]))
			{
				UNK_0x56FDC9ADE35F7DB0(iLocal_3121[5], true, true, 0);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3260[0]))
	{
		if (UNK_0xDF1306B443CD3D15(iLocal_3260[0], 0))
		{
			if (!UNK_0x2F6DBDA9ACD7D3AB(iLocal_3260[0]))
			{
				UNK_0x56FDC9ADE35F7DB0(iLocal_3260[0], true, true, 0);
			}
			if (UNK_0xBBA8A868118C90ED(iLocal_3260[0], -1, 0))
			{
				if (!UNK_0xC844350D5D58C99A(iLocal_3254[0]))
				{
					UNK_0x523BCC9DC80CD82F(joaat("S_M_M_GENTRANSPORT"));
					if (UNK_0xB87F6CF6E5628C67(joaat("S_M_M_GENTRANSPORT")))
					{
						iLocal_3254[0] = UNK_0x852A19533F896693(iLocal_3260[0], 26, joaat("S_M_M_GENTRANSPORT"), -1, 1, true);
						UNK_0x71199B01895C6202(joaat("S_M_M_GENTRANSPORT"));
					}
				}
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3260[1]))
	{
		if (UNK_0xDF1306B443CD3D15(iLocal_3260[1], 0))
		{
			if (!UNK_0x2F6DBDA9ACD7D3AB(iLocal_3260[1]))
			{
				UNK_0x56FDC9ADE35F7DB0(iLocal_3260[1], true, true, 0);
			}
			if (UNK_0xBBA8A868118C90ED(iLocal_3260[1], -1, 0))
			{
				if (!UNK_0xC844350D5D58C99A(iLocal_3254[1]))
				{
					UNK_0x523BCC9DC80CD82F(joaat("S_M_M_GENTRANSPORT"));
					if (UNK_0xB87F6CF6E5628C67(joaat("S_M_M_GENTRANSPORT")))
					{
						iLocal_3254[1] = UNK_0x852A19533F896693(iLocal_3260[1], 26, joaat("S_M_M_GENTRANSPORT"), -1, 1, true);
						UNK_0x71199B01895C6202(joaat("S_M_M_GENTRANSPORT"));
					}
				}
			}
		}
	}
}

void func_348()
{
	if (iLocal_3181 == 0)
	{
		UNK_0xAE317D00A5A55DF6("SCRIPT\Trv_4_747_Cop_Cars", 0, -1);
		UNK_0xAE317D00A5A55DF6("SCRIPT\Trv_4_747_Plane_Explosion", 0, -1);
		UNK_0xAE317D00A5A55DF6("SCRIPT\Trv_4_747_Tanker_Explosion", 0, -1);
		UNK_0xAE317D00A5A55DF6("SCRIPT\TV_Monitors", 0, -1);
		if (iLocal_3392 == 0)
		{
			iLocal_3213 = UNK_0xD68EA767274B7444();
			iLocal_3392 = 1;
		}
		if (iLocal_3393 == 0)
		{
			iLocal_3214 = UNK_0xD68EA767274B7444();
			iLocal_3393 = 1;
		}
		if (iLocal_3394 == 0)
		{
			iLocal_3215 = UNK_0xD68EA767274B7444();
			iLocal_3394 = 1;
		}
		if (iLocal_3395 == 0)
		{
			iLocal_3216 = UNK_0xD68EA767274B7444();
			iLocal_3395 = 1;
		}
		if (iLocal_3396 == 0)
		{
			iLocal_3217 = UNK_0xD68EA767274B7444();
			iLocal_3396 = 1;
		}
		if (iLocal_3391 == 0)
		{
			iLocal_3218 = UNK_0xD68EA767274B7444();
			iLocal_3391 = 1;
		}
		if (iLocal_3397 == 0)
		{
			iLocal_3219 = UNK_0xD68EA767274B7444();
			iLocal_3397 = 1;
		}
		if (iLocal_3345 == 1)
		{
			func_120();
			iLocal_3345 = 0;
		}
		if (!UNK_0x9F4FE516EAACCFC5(iLocal_3289))
		{
			iLocal_3289 = UNK_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", true);
			UNK_0x5818C8D5303DCCF8(iLocal_3289, 40f);
		}
		iLocal_3343 = 0;
		iLocal_3337 = 0;
		iLocal_3349 = 0;
		iLocal_3333 = 0;
		iLocal_3328 = 0;
		iLocal_3334 = 0;
		iLocal_3327 = 0;
		iLocal_3363 = 0;
		iLocal_3365[0] = 0;
		iLocal_3369[0] = 0;
		iLocal_3365[1] = 0;
		iLocal_3369[1] = 0;
		iLocal_3365[2] = 0;
		iLocal_3372 = 0;
		iLocal_3373 = 0;
		iLocal_3331 = 0;
		iLocal_3332 = 0;
		iLocal_3330 = 0;
		iLocal_3377 = 0;
		iLocal_3380 = 0;
		iLocal_3381 = 0;
		iLocal_3382 = 0;
		iLocal_3384 = 0;
		iLocal_3383 = 0;
		iLocal_3385 = 0;
		iLocal_3386 = 0;
		iLocal_3387 = 0;
		iLocal_3388 = 0;
		iLocal_3389 = 0;
		iLocal_3390 = 0;
		iLocal_3398 = 0;
		iLocal_3399 = 0;
		iLocal_3401 = 0;
		iLocal_3402 = 0;
		iLocal_3434 = 0;
		iLocal_3435 = 0;
		iLocal_3551 = 0;
		iLocal_3351 = 1;
		iLocal_3352 = 1;
		iLocal_3360 = 1;
		iLocal_3440 = 0;
		iLocal_3441 = 0;
		iLocal_3466 = 0;
		iLocal_3468 = 0;
		iLocal_3475 = 0;
		iLocal_3476 = 0;
		iLocal_3478 = 0;
		iLocal_3480[0] = 0;
		iLocal_3480[1] = 0;
		iLocal_3483[0] = 0;
		iLocal_3483[1] = 0;
		iLocal_3486 = 0;
		iLocal_3487 = 0;
		iLocal_3489 = 0;
		iLocal_3508 = 0;
		iLocal_3509 = 0;
		iLocal_3510 = 0;
		iLocal_3540 = 0;
		iLocal_3541 = 0;
		iLocal_3552 = 0;
		iLocal_3185 = 0;
		iLocal_3198 = 0;
		iLocal_3189 = 0;
		while (iLocal_3189 <= 2)
		{
			iLocal_3543[iLocal_3189] = 0;
			iLocal_3547[iLocal_3189] = 0;
			iLocal_3189++;
		}
		iLocal_3189 = 0;
		while (iLocal_3189 <= 2)
		{
			iLocal_3571[iLocal_3189] = 0;
			iLocal_3189++;
		}
		iLocal_3189 = 0;
		while (iLocal_3189 <= 6)
		{
			iLocal_3490[iLocal_3189] = 0;
			iLocal_3498[iLocal_3189] = 0;
			iLocal_3189++;
		}
		UNK_0x9E5E60D8C63FD9D1();
		bLocal_89 = true;
		bLocal_95 = true;
		func_285();
		iLocal_3184 = UNK_0x1D14FD94FCD601B4();
		UNK_0x536F1BE96C726C4B(-823.71f, -2548.2f, 13.75f, 20f, 1, 0, 0, false);
		UNK_0x10F3BFFADF2CE3DA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		UNK_0x17E8C6920A1E386F(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, false, 0);
		UNK_0xF858EFDE1871B5F2(-482f, -2118f, 6f, -1072f, -2724f, 17f, false, 1);
		func_126(2, 1);
		func_350("BB_Chase", 45, 0, 1);
		UNK_0x34D79252800B23FF(3);
		func_17(&uLocal_3578, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		if (UNK_0x757EF87A33649210())
		{
			if (!func_24())
			{
				UNK_0x90CECE08EA8E77CC(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true));
			}
			func_21(bLocal_3259, -1, 1);
		}
		iLocal_3182 = 0;
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
		func_349();
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2)
	{
		if (!UNK_0xC844350D5D58C99A(bLocal_3271))
		{
			bLocal_3271 = UNK_0x122AAB0B1D6F55AD(joaat("BLISTA"), 0f, 0f, 1f, 0f, true, true, false);
		}
		while (!UNK_0x3DDA6C6A285628E4(45, "BB_Chase"))
		{
			SYSTEM::WAIT(0);
		}
		if (UNK_0x757EF87A33649210())
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3259, 0))
			{
				UNK_0x56FDC9ADE35F7DB0(bLocal_3259, true, true, 0);
				UNK_0x1AEF7184B203A58D(bLocal_3259, 30f);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_3258))
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				UNK_0x4D3C3C0B0DE2663E(bLocal_3258, 45, "BB_Chase", 1);
				SYSTEM::SETTIMERB(0);
				func_268();
				UNK_0xB975E4541DDAB1F5(2);
				if (UNK_0xC844350D5D58C99A(bLocal_3259))
				{
					if (UNK_0xDF1306B443CD3D15(bLocal_3259, 0))
					{
						UNK_0x046C362CF15F1935(&bLocal_3259);
					}
				}
				if (!UNK_0x0F1CCD77290EE12F())
				{
					UNK_0x82E51BCA72537B6C(800);
				}
				iLocal_3181 = 0;
				iLocal_3180 = 4;
			}
		}
	}
}

void func_349()
{
	vLocal_2489[0 /*3*/] = { -583.6427f, -2157.497f, 5.7947f };
	fLocal_1209[0] = -0.0003f;
	fLocal_1225[0] = -0.0085f;
	fLocal_1241[0] = 0.9998f;
	fLocal_1257[0] = 0.0158f;
	iLocal_2861[0] = joaat("BLISTA");
	vLocal_1963[4 /*3*/] = { -827.2035f, -2575.697f, 13.5688f };
	fLocal_109[4] = 0.0004f;
	fLocal_285[4] = -0.0003f;
	fLocal_461[4] = -0.2526f;
	fLocal_637[4] = 0.9676f;
	iLocal_1294[4] = 50;
	fLocal_813[4] = 20310f;
	iLocal_2685[4] = joaat("MANANA");
	vLocal_2489[1 /*3*/] = { -1033.717f, -2949.014f, 13.4922f };
	fLocal_1209[1] = 0.0032f;
	fLocal_1225[1] = -0.0003f;
	fLocal_1241[1] = -0.0255f;
	fLocal_1257[1] = 0.9997f;
	iLocal_2861[1] = joaat("BISON2");
	vLocal_2535[0 /*3*/] = { -1178.365f, -2845.981f, 13.9027f };
	fLocal_993[0] = 0.0018f;
	fLocal_1029[0] = 0.0123f;
	fLocal_1065[0] = 0.9644f;
	fLocal_1101[0] = 0.2642f;
	iLocal_1822[0] = 9;
	fLocal_1137[0] = 22357f;
	fLocal_1173[0] = 1f;
	iLocal_2877[0] = joaat("BUZZARD");
	vLocal_2535[1 /*3*/] = { -1376.197f, -2755.167f, 14.0646f };
	fLocal_993[1] = -0.0012f;
	fLocal_1029[1] = 0.0013f;
	fLocal_1065[1] = 0.8439f;
	fLocal_1101[1] = -0.5365f;
	iLocal_1822[1] = 10;
	fLocal_1137[1] = 27135f;
	fLocal_1173[1] = 1f;
	iLocal_2877[1] = joaat("PACKER");
	vLocal_2535[2 /*3*/] = { -1342.543f, -2688.482f, 22.8254f };
	fLocal_993[2] = 0.0057f;
	fLocal_1029[2] = -0.0014f;
	fLocal_1065[2] = -0.2451f;
	fLocal_1101[2] = 0.9695f;
	iLocal_1822[2] = 11;
	fLocal_1137[2] = 35135f;
	fLocal_1173[2] = 1f;
	iLocal_2877[2] = joaat("JET");
	vLocal_2535[3 /*3*/] = { -898.3506f, -2698.965f, 20.159f };
	fLocal_993[3] = 0.0065f;
	fLocal_1029[3] = 0.0191f;
	fLocal_1065[3] = -0.2629f;
	fLocal_1101[3] = 0.9646f;
	iLocal_1822[3] = 3;
	fLocal_1137[3] = 6764f;
	fLocal_1173[3] = 1f;
	iLocal_2877[3] = joaat("BUS");
	vLocal_2535[4 /*3*/] = { -576.655f, -2231.905f, 5.2834f };
	fLocal_993[4] = 0.0043f;
	fLocal_1029[4] = 0.0331f;
	fLocal_1065[4] = -0.3125f;
	fLocal_1101[4] = 0.9493f;
	iLocal_1822[4] = 4;
	fLocal_1137[4] = 2102f;
	fLocal_1173[4] = 1f;
	iLocal_2877[4] = joaat("BISON");
	vLocal_2535[5 /*3*/] = { -994.9925f, -3154.125f, 23.1145f };
	fLocal_993[5] = 0.0056f;
	fLocal_1029[5] = 0.0029f;
	fLocal_1065[5] = 0.4915f;
	fLocal_1101[5] = 0.8708f;
	iLocal_1822[5] = 21;
	fLocal_1137[5] = 92500f;
	fLocal_1173[5] = 1f;
	iLocal_2877[5] = joaat("JET");
	vLocal_2535[7 /*3*/] = { -553.3315f, -2073.951f, 6.8909f };
	fLocal_993[7] = 0.0072f;
	fLocal_1029[7] = 0.0176f;
	fLocal_1065[7] = 0.9739f;
	fLocal_1101[7] = -0.2263f;
	iLocal_1822[7] = 54;
	fLocal_1137[7] = 0f;
	fLocal_1173[7] = 1f;
	iLocal_2877[7] = joaat("POLICE3");
	vLocal_2535[8 /*3*/] = { -561.7264f, -2076.761f, 6.7664f };
	fLocal_993[8] = -0.027f;
	fLocal_1029[8] = 0.0016f;
	fLocal_1065[8] = 0.9169f;
	fLocal_1101[8] = -0.3981f;
	iLocal_1822[8] = 108;
	fLocal_1137[8] = 150f;
	fLocal_1173[8] = 1f;
	iLocal_2877[8] = joaat("POLICE3");
	vLocal_2535[11 /*3*/] = { -1563.918f, -2745.409f, 13.5643f };
	fLocal_993[11] = -0.0022f;
	fLocal_1029[11] = -0.0019f;
	fLocal_1065[11] = 0.928f;
	fLocal_1101[11] = -0.3726f;
	iLocal_1822[11] = 111;
	fLocal_1137[11] = 36000f;
	fLocal_1173[11] = 1f;
	iLocal_2877[11] = joaat("POLICE3");
	vLocal_2535[12 /*3*/] = { -1026.024f, -2336.396f, 13.5678f };
	fLocal_993[12] = -0.0083f;
	fLocal_1029[12] = -0.0054f;
	fLocal_1065[12] = 0.55f;
	fLocal_1101[12] = 0.8351f;
	iLocal_1822[12] = 112;
	fLocal_1137[12] = 60000f;
	fLocal_1173[12] = 1f;
	iLocal_2877[12] = joaat("POLICE3");
	vLocal_2535[13 /*3*/] = { -1013.316f, -2340.457f, 13.5678f };
	fLocal_993[13] = -0.0086f;
	fLocal_1029[13] = -0.005f;
	fLocal_1065[13] = 0.5052f;
	fLocal_1101[13] = 0.8629f;
	iLocal_1822[13] = 113;
	fLocal_1137[13] = 60000f;
	fLocal_1173[13] = 1f;
	iLocal_2877[13] = joaat("POLICE3");
	vLocal_2535[14 /*3*/] = { -1221.049f, -2731.169f, 13.5681f };
	fLocal_993[14] = -0.0083f;
	fLocal_1029[14] = -0.0057f;
	fLocal_1065[14] = 0.6469f;
	fLocal_1101[14] = 0.7625f;
	iLocal_1822[14] = 61;
	fLocal_1137[14] = 80000f;
	fLocal_1173[14] = 1f;
	iLocal_2877[14] = joaat("POLICE3");
	vLocal_2535[15 /*3*/] = { -1227.203f, -2735.872f, 13.568f };
	fLocal_993[15] = -0.0041f;
	fLocal_1029[15] = -0.0091f;
	fLocal_1065[15] = 0.9133f;
	fLocal_1101[15] = 0.4072f;
	iLocal_1822[15] = 62;
	fLocal_1137[15] = 80000f;
	fLocal_1173[15] = 1f;
	iLocal_2877[15] = joaat("POLICE3");
	vLocal_2535[19 /*3*/] = { -1240.048f, -2203.457f, 14.0347f };
	fLocal_993[19] = 0.0002f;
	fLocal_1029[19] = 0.0018f;
	fLocal_1065[19] = 0.9611f;
	fLocal_1101[19] = -0.2763f;
	iLocal_1822[19] = 66;
	fLocal_1137[19] = 55125f;
	fLocal_1173[19] = 1f;
	iLocal_2877[19] = joaat("FIRETRUK");
	vLocal_2535[20 /*3*/] = { -438.0192f, -2060.751f, 73.6354f };
	fLocal_993[20] = -0.0005f;
	fLocal_1029[20] = 0.0018f;
	fLocal_1065[20] = 0.9559f;
	fLocal_1101[20] = 0.2938f;
	iLocal_1822[20] = 67;
	fLocal_1137[20] = 0f;
	fLocal_1173[20] = 1f;
	iLocal_2877[20] = joaat("MAVERICK");
	vLocal_2535[21 /*3*/] = { -546.8047f, -2187.925f, 5.8819f };
	fLocal_993[21] = -0.0252f;
	fLocal_1029[21] = -0.0034f;
	fLocal_1065[21] = 0.9369f;
	fLocal_1101[21] = 0.3487f;
	iLocal_1822[21] = 5;
	fLocal_1137[21] = 3834f;
	fLocal_1173[21] = 1f;
	iLocal_2877[21] = joaat("BLISTA");
	vLocal_2535[22 /*3*/] = { -1001.674f, -2947.732f, 13.3947f };
	fLocal_993[22] = 0.001f;
	fLocal_1029[22] = -0.0004f;
	fLocal_1065[22] = 0.8616f;
	fLocal_1101[22] = 0.5075f;
	iLocal_1822[22] = 6;
	fLocal_1137[22] = 20176f;
	fLocal_1173[22] = 1f;
	iLocal_2877[22] = joaat("AIRTUG");
	vLocal_2535[23 /*3*/] = { -1249.588f, -2525.9f, 13.3942f };
	fLocal_993[23] = 0.001f;
	fLocal_1029[23] = -0.0001f;
	fLocal_1065[23] = 0.9749f;
	fLocal_1101[23] = -0.2228f;
	iLocal_1822[23] = 7;
	fLocal_1137[23] = 48538f;
	fLocal_1173[23] = 1f;
	iLocal_2877[23] = joaat("AIRTUG");
	vLocal_2535[24 /*3*/] = { -1362.538f, -2625.609f, 13.3895f };
	fLocal_993[24] = -0.0001f;
	fLocal_1029[24] = 0.0018f;
	fLocal_1065[24] = 0.5344f;
	fLocal_1101[24] = 0.8452f;
	iLocal_1822[24] = 8;
	fLocal_1137[24] = 75112f;
	fLocal_1173[24] = 1f;
	iLocal_2877[24] = joaat("AIRTUG");
}

void func_350(char* sParam0, int iParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;

	StringCopy(&cLocal_2668, sParam0, 64);
	bLocal_85 = true;
	bLocal_90 = false;
	iLocal_1946 = 0;
	iLocal_1947 = 0;
	iLocal_1948 = 0;
	bLocal_1949 = iParam1;
	iLocal_1950 = 0;
	iLocal_1951 = 0;
	iLocal_1952 = 0;
	iLocal_1956 = 0;
	iLocal_1959 = 0;
	bLocal_1957 = -1;
	bLocal_1958 = -1;
	iLocal_1960 = 0;
	iLocal_1961 = 0;
	fLocal_1289 = 0f;
	fLocal_1290 = 0f;
	fLocal_1275 = 0f;
	iLocal_91 = 0;
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		vLocal_2644.x = (vVar0.x - 100f);
		vLocal_2644.f_1 = (vVar0.y - 100f);
		vLocal_2644.f_2 = (vVar0.z - 100f);
		vLocal_2647.x = (vVar0.x + 100f);
		vLocal_2647.f_1 = (vVar0.y + 100f);
		vLocal_2647.f_2 = (vVar0.z + 100f);
		UNK_0xF858EFDE1871B5F2(vLocal_2644, vLocal_2647, false, 0);
		if (bParam2)
		{
			UNK_0x28F5E4DA506AC0CA(vVar0, 500f, 0, 0, 0, 0, false, 0);
		}
	}
	UNK_0xF63400DBE3303D26("rgh_traffic", &bLocal_2684);
	func_339();
	if (bParam3)
	{
		func_190(1);
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0xCE1A2E36474A9D6F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0x060F249A9A3E3F4E(false);
	}
	func_195();
}

void func_351()
{
	if (iLocal_3181 == 0)
	{
		UNK_0x8B4C4CA774181102(0f, 14f, 4);
		if (iLocal_3345 == 1)
		{
			func_120();
			iLocal_3345 = 0;
		}
		iLocal_3359 = 0;
		iLocal_3360 = 0;
		iLocal_3362 = 0;
		iLocal_3364 = 0;
		iLocal_3379 = 0;
		iLocal_3327 = 0;
		iLocal_3328 = 0;
		iLocal_3331 = 0;
		iLocal_3333 = 0;
		iLocal_3334 = 0;
		bLocal_3335 = false;
		bLocal_3336 = false;
		iLocal_3337 = 0;
		iLocal_3338 = 0;
		iLocal_3343 = 0;
		iLocal_3352 = 0;
		iLocal_3350 = 0;
		iLocal_3439 = 0;
		iLocal_3442 = 0;
		iLocal_3523 = 0;
		iLocal_3378 = 0;
		iLocal_3351 = 1;
		iLocal_3185 = 0;
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			iLocal_3361 = 1;
		}
		else
		{
			iLocal_3361 = 0;
		}
		func_17(&uLocal_3578, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		UNK_0x5C2EBB66AD2EA5FF(1);
		UNK_0xF858EFDE1871B5F2(-617f, -2274f, 0f, -406.01f, -2044f, 15f, false, 1);
		iLocal_3188 = UNK_0x1C0640BA9A7327B3();
		if (UNK_0x757EF87A33649210())
		{
			if (!func_24())
			{
				UNK_0x90CECE08EA8E77CC(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true));
			}
			func_21(0, -1, 1);
			UNK_0x046C362CF15F1935(&bLocal_3259);
			UNK_0x046C362CF15F1935(&bLocal_3276);
			UNK_0x046C362CF15F1935(&bLocal_3277);
		}
		if (!UNK_0x0F1CCD77290EE12F())
		{
			UNK_0x82E51BCA72537B6C(800);
		}
		if (!UNK_0xE4EDC4B0E92C078B(iLocal_3287))
		{
			iLocal_3287 = func_356(vLocal_3300, 0);
		}
		UNK_0xC92DB9682A650680("TRV4_GAMEPLAY_START");
		vLocal_3318 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3350 == 0 && iLocal_3364 == 1)
		{
			if (!func_262() || !UNK_0x04E6B3EAA8742BFA())
			{
				func_20("TRV4_GO1", 7500, 1);
				iLocal_3350 = 1;
			}
		}
		if (iLocal_3378 == 0 && !func_355())
		{
			if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_3300, 1) < 800f)
			{
				iLocal_3187 = UNK_0x09AC81E49EA267F7(false, 2);
				if (iLocal_3187 == 0)
				{
					UNK_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					UNK_0x8B4C4CA774181102(0f, 6f, 3);
					iLocal_3378 = 1;
				}
				if (iLocal_3187 == 1)
				{
					UNK_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					UNK_0x8B4C4CA774181102(0f, 6f, 3);
					iLocal_3378 = 1;
				}
			}
		}
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_3300, 1) < 600f)
		{
			if (!UNK_0xC844350D5D58C99A(bLocal_3258))
			{
				UNK_0x523BCC9DC80CD82F(joaat("COGCABRIO"));
				if (UNK_0xB87F6CF6E5628C67(joaat("COGCABRIO")))
				{
					bLocal_3258 = UNK_0x122AAB0B1D6F55AD(joaat("COGCABRIO"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, true, true, false);
					UNK_0xAA6B3A4292417750(bLocal_3258, false, true, true, true, false, false, 0, false);
					UNK_0xC002508A277213DE(bLocal_3258, 27, 27);
					UNK_0x71199B01895C6202(joaat("COGCABRIO"));
					UNK_0x2E1E5367A885F9B7(bLocal_3258, "SOL_3_MOLLY_CAR_Group", 0);
				}
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3222))
			{
				UNK_0x523BCC9DC80CD82F(joaat("IG_MOLLY"));
				if (UNK_0xB87F6CF6E5628C67(joaat("IG_MOLLY")))
				{
					if (UNK_0xC844350D5D58C99A(bLocal_3258))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
						{
							bLocal_3222 = UNK_0x852A19533F896693(bLocal_3258, 26, joaat("IG_MOLLY"), -1, 1, true);
							UNK_0xE121AE1BBF90E186(bLocal_3222, true);
							UNK_0x25C5402CC10F76CD(bLocal_3222, false);
							UNK_0x71199B01895C6202(joaat("COGCABRIO"));
							UNK_0x71199B01895C6202(joaat("IG_MOLLY"));
							UNK_0x6DF7BF67E86AAE86(bLocal_3222, joaat("PLAYER"));
							iLocal_3360 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3222))
			{
				UNK_0xEBA53F35D0085654(&bLocal_3222);
			}
			if (UNK_0xC844350D5D58C99A(bLocal_3258))
			{
				UNK_0xA954465BA6FDEFE2(&bLocal_3258);
			}
		}
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), vLocal_3300, 1) < 500f)
		{
			if (iLocal_3362 == 0)
			{
				iLocal_3293 = UNK_0xB01F55A0FD1CFD49("BREAKING_NEWS");
				UNK_0x523BCC9DC80CD82F(joaat("POLICE3"));
				UNK_0x523BCC9DC80CD82F(joaat("MAVERICK"));
				UNK_0x523BCC9DC80CD82F(joaat("BISON"));
				UNK_0x523BCC9DC80CD82F(joaat("BLISTA"));
				UNK_0x36187931D29E5BBE(45, "BB_Chase");
				UNK_0x36187931D29E5BBE(35, "BB_Chase");
				UNK_0x36187931D29E5BBE(2, "BB_Chase");
				UNK_0x36187931D29E5BBE(54, "BB_Chase");
				UNK_0x36187931D29E5BBE(55, "BB_Chase");
				UNK_0x36187931D29E5BBE(67, "BB_Chase");
				func_187(1, "BB_Chase");
				UNK_0x13896FDECC859926("TRV4_CHASE");
				iLocal_3362 = 1;
			}
		}
		else if (iLocal_3362 == 1)
		{
			UNK_0x71199B01895C6202(joaat("POLICE3"));
			UNK_0x71199B01895C6202(joaat("MAVERICK"));
			UNK_0x71199B01895C6202(joaat("BISON"));
			UNK_0x71199B01895C6202(joaat("BLISTA"));
			UNK_0xDB8844D4B7C60440(45, "BB_Chase");
			UNK_0xDB8844D4B7C60440(35, "BB_Chase");
			UNK_0xDB8844D4B7C60440(2, "BB_Chase");
			UNK_0xDB8844D4B7C60440(54, "BB_Chase");
			UNK_0xDB8844D4B7C60440(55, "BB_Chase");
			UNK_0xDB8844D4B7C60440(67, "BB_Chase");
			func_354(1, "BB_Chase");
			UNK_0x38DC636F3D2D2FA8("TRV4_CHASE");
			iLocal_3362 = 0;
		}
		if (iLocal_3379 == 0)
		{
			if (UNK_0x1C0640BA9A7327B3() > (iLocal_3188 + 135000))
			{
				UNK_0x790015DC92C918E2();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_3188 = UNK_0x1C0640BA9A7327B3();
				iLocal_3379 = 1;
			}
		}
		if (iLocal_3379 == 1)
		{
			if (UNK_0x1C0640BA9A7327B3() > (iLocal_3188 + 135000))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (!UNK_0x562F77A7F33D2E46("SOL_3_DRIVE_TO_AIRPORT"))
			{
				UNK_0x8BC9595FD2792B5D("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_3439 == 0)
			{
				UNK_0xC92DB9682A650680("TRV4_CAR_ENTERED");
				iLocal_3439 = 1;
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3259))
			{
				bLocal_3259 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				UNK_0xAA6B3A4292417750(bLocal_3259, false, true, false, false, false, false, 0, false);
				UNK_0x2F625BED8BF7F26A(bLocal_3259);
				UNK_0x44A200C9B6E1CEA6(bLocal_3259, true);
			}
		}
		else if (UNK_0xC844350D5D58C99A(bLocal_3259))
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3259, 0))
			{
				if (iLocal_3361 == 0)
				{
					UNK_0xAA6B3A4292417750(bLocal_3259, false, false, false, false, false, false, 0, false);
					iLocal_3361 = 1;
				}
				if (iLocal_3353 == 1)
				{
					UNK_0x7AA3AFA47C4179D1(bLocal_3259);
					iLocal_3353 = 0;
				}
				if (UNK_0x9C77D2D0559097F0(bLocal_3259, 1))
				{
					UNK_0x046C362CF15F1935(&bLocal_3259);
				}
			}
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			if (iLocal_3442 == 0)
			{
				UNK_0xB7EA504773B19E4E(156, 1, 0);
				UNK_0x69028CD9C862B137(-244f, -1842.74f, 28.48f);
				UNK_0x69028CD9C862B137(-1.5f, -2014.4f, 11.5f);
				UNK_0x69028CD9C862B137(-498.7f, -2136.5f, 8.4f);
				UNK_0xB8C3D2D6C4AAEF18(1);
				iLocal_3442 = 1;
			}
		}
		else if (iLocal_3442 == 1)
		{
			UNK_0xB8C3D2D6C4AAEF18(0);
			iLocal_3442 = 0;
		}
		if ((iLocal_3362 == 1 && UNK_0xC844350D5D58C99A(bLocal_3258)) && UNK_0xC844350D5D58C99A(bLocal_3222))
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				if (UNK_0x54648B774DB42A3A(bLocal_3258, func_353(UNK_0x16F2683693E537C9()), 0))
				{
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bLocal_3258))
				{
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(bLocal_3258, true), 200f, 132f, 100f, false, true, 0))
				{
					iLocal_3359 = 0;
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, false, true, 0))
				{
					iLocal_3359 = 1;
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, false, true, 0))
				{
					UNK_0x053C926E5E341906();
					UNK_0x5C2EBB66AD2EA5FF(0);
					iLocal_3359 = 1;
					func_352();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
		}
	}
}

void func_352()
{
	while (((!UNK_0xB87F6CF6E5628C67(joaat("POLICE3")) || !UNK_0xB87F6CF6E5628C67(joaat("MAVERICK"))) || !UNK_0xB87F6CF6E5628C67(joaat("BISON"))) || !UNK_0xB87F6CF6E5628C67(joaat("BLISTA")))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!UNK_0x3DDA6C6A285628E4(45, "BB_Chase") || !UNK_0x3DDA6C6A285628E4(35, "BB_Chase")) || !UNK_0x3DDA6C6A285628E4(2, "BB_Chase")) || !UNK_0x3DDA6C6A285628E4(54, "BB_Chase")) || !UNK_0x3DDA6C6A285628E4(55, "BB_Chase")) || !UNK_0x3DDA6C6A285628E4(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}

var func_353(bool bParam0)
{
	var uVar0;

	UNK_0xCAE036C45E7FC720(bParam0, &uVar0, 1);
	return uVar0;
}

void func_354(bool bParam0, bool bParam1)
{
	UNK_0xDB8844D4B7C60440(bParam0, bParam1);
}

bool func_355()
{
	if (Global_20805 == 4)
	{
		if (UNK_0x1EE04CEA36EF313B())
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

int func_356(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_233(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

void func_357()
{
	if (iLocal_3181 == 0)
	{
		iLocal_3338 = 1;
		iLocal_3467 = 0;
		iLocal_3488 = 0;
		iLocal_3506 = 0;
		while (iLocal_3338 == 1)
		{
			UNK_0x1A6DFFFEEC27BF4F("M_LegalTrouble", 0);
			switch (iLocal_3183)
			{
				case 0:
					UNK_0xAE1670DD12E839C3("sol_3_int", 8);
					if (func_401())
					{
						while (!func_373(61, &uLocal_3743, 0, 1, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						iLocal_3438 = 0;
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
						func_220(1, 1, 1, 0, 0, 0);
						UNK_0x29E8331978B73E7F(UNK_0x16F2683693E537C9(), "Michael", 0, false, 0);
						if (UNK_0xC844350D5D58C99A(Global_95241[0]))
						{
							if (UNK_0xDF1306B443CD3D15(Global_95241[0], 0))
							{
								UNK_0x73270B3C9CC833FD(Global_95241[0], true, 1);
								bLocal_3259 = Global_95241[0];
							}
						}
						if (UNK_0xC844350D5D58C99A(Global_95241[1]))
						{
							if (UNK_0xDF1306B443CD3D15(Global_95241[1], 0))
							{
								UNK_0x73270B3C9CC833FD(Global_95241[1], true, 1);
								bLocal_3276 = Global_95241[1];
							}
						}
						if (UNK_0xC844350D5D58C99A(Global_95241[2]))
						{
							if (UNK_0xDF1306B443CD3D15(Global_95241[2], 0))
							{
								UNK_0x73270B3C9CC833FD(Global_95241[2], true, 1);
								bLocal_3277 = Global_95241[2];
							}
						}
						if (UNK_0xC844350D5D58C99A(Global_95241[3]))
						{
							if (UNK_0xDF1306B443CD3D15(Global_95241[3], 0))
							{
								UNK_0x73270B3C9CC833FD(Global_95241[3], true, 1);
								bLocal_3278 = Global_95241[3];
							}
						}
						UNK_0x4C902758BEA97C68(0);
						UNK_0x420FE818E70BB523(4);
						func_372();
						if (!UNK_0x0F1CCD77290EE12F())
						{
							UNK_0x82E51BCA72537B6C(250);
						}
						iLocal_3183++;
					}
					break;
				case 1:
					if (iLocal_3467 == 0)
					{
						if (UNK_0x39B7A3CCD2467CAB())
						{
							if (iLocal_3506 == 0)
							{
								if (UNK_0xC844350D5D58C99A(bLocal_3278))
								{
									if (UNK_0xDF1306B443CD3D15(bLocal_3278, 0))
									{
										if (UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(bLocal_3278)))
										{
											UNK_0xB58CA658A628ED02(bLocal_3278, 2);
											UNK_0xA47B46945FF6DE74(bLocal_3278, -1048.722f, -506.8387f, 35.0386f, 1, 0, 0, 1);
											UNK_0xD8F6A53F4799FAFE(bLocal_3278, 357.1288f);
											UNK_0x05CA0E7946B27A19(bLocal_3278, 1);
											UNK_0xB9FD7450C0DAB575(bLocal_3278, 1084227584 /* Float: 5f */);
											func_362(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
											iLocal_3506 = 1;
										}
										if (((UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bLocal_3278)) || UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bLocal_3278))) || UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(bLocal_3278))) || UNK_0xD1CC995EE5EB1EC1(UNK_0x134B62B726CEC8E6(bLocal_3278)))
										{
											if ((((((((UNK_0x134B62B726CEC8E6(bLocal_3278) != joaat("BUS") && UNK_0x134B62B726CEC8E6(bLocal_3278) != joaat("POUNDER")) && UNK_0x134B62B726CEC8E6(bLocal_3278) != joaat("PACKER")) && UNK_0x134B62B726CEC8E6(bLocal_3278) != joaat("AIRBUS")) && UNK_0x134B62B726CEC8E6(bLocal_3278) != joaat("AMBULANCE")) && UNK_0x134B62B726CEC8E6(bLocal_3278) != joaat("BARRACKS")) && UNK_0x134B62B726CEC8E6(bLocal_3278) != joaat("BARRACKS2")) && UNK_0x134B62B726CEC8E6(bLocal_3278) != joaat("BENSON")) && UNK_0x134B62B726CEC8E6(bLocal_3278) != joaat("BIFF"))
											{
												UNK_0xA47B46945FF6DE74(bLocal_3278, -1027.657f, -486.6945f, 35.9571f, 1, 0, 0, 1);
												UNK_0xD8F6A53F4799FAFE(bLocal_3278, 207.7515f);
												UNK_0xB9FD7450C0DAB575(bLocal_3278, 1084227584 /* Float: 5f */);
												func_362(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
												iLocal_3506 = 1;
											}
										}
										if ((((!UNK_0xAFB8495D36825275(UNK_0x134B62B726CEC8E6(bLocal_3278)) && !UNK_0x8E39AC3C76C8AA58(UNK_0x134B62B726CEC8E6(bLocal_3278))) && !UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bLocal_3278))) && !UNK_0xAD09C9A4B56FA133(UNK_0x134B62B726CEC8E6(bLocal_3278))) && !UNK_0xD1CC995EE5EB1EC1(UNK_0x134B62B726CEC8E6(bLocal_3278)))
										{
											UNK_0xA954465BA6FDEFE2(&bLocal_3278);
											iLocal_3506 = 1;
										}
									}
								}
							}
							func_360(&uLocal_3743, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_3467 = 1;
						}
					}
					if (iLocal_3438 == 0)
					{
						UNK_0xF63400DBE3303D26("SecGuards", &bLocal_3576);
						UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_3576);
						UNK_0x0E2400AB9174FA81(5, bLocal_3576, joaat("PLAYER"));
						UNK_0xD7992BEF7A9D109E("TREV4", false);
						iLocal_3438 = 1;
					}
					if (iLocal_3488 == 0)
					{
						if (UNK_0x22A8E52414415B76())
						{
							UNK_0xFE76348A7A0CEF66(UNK_0x16F2683693E537C9());
							UNK_0xADCFE13F048E110C(UNK_0x16F2683693E537C9());
							UNK_0x759A5E1D0F0A31A1(UNK_0x16F2683693E537C9());
							if (UNK_0x8F677B1F58B4741C() > 120000)
							{
								UNK_0xC92DB9682A650680("TRV4_START");
								iLocal_3488 = 1;
							}
						}
					}
					if (UNK_0x3148AE92ED70DC30("Michael", 0))
					{
						UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), -1012.268f, -480.0742f, 38.9757f, 1, 0, 0, 1);
						UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 121.4087f);
						UNK_0x5A9FF5F994E904B8(UNK_0xD803B885F5E47A62(), 2f, 3000, false, 1, 0);
						UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
						UNK_0xBD453909DC26A85D(UNK_0x16F2683693E537C9(), joaat("MOTIONSTATE_RUN"), false, 0, 0);
					}
					if (UNK_0xEABED1927EFB48CA(0))
					{
						UNK_0x2FB9A57162E54BAB(0f);
					}
					if (!UNK_0x39B7A3CCD2467CAB())
					{
						func_359(61);
						if (iLocal_3488 == 0)
						{
							UNK_0xC92DB9682A650680("TRV4_START_CS_SKIP");
							iLocal_3488 = 1;
						}
						UNK_0xBF40D896CA4BDBE7();
						func_220(0, 1, 1, 0, 0, 0);
						iLocal_3183++;
					}
					break;
				case 2:
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
					if (UNK_0xC844350D5D58C99A(bLocal_3259))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3259, 0))
						{
							if (UNK_0x9C77D2D0559097F0(bLocal_3259, 1))
							{
								UNK_0x046C362CF15F1935(&bLocal_3259);
							}
						}
					}
					if (UNK_0xC844350D5D58C99A(bLocal_3276))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3276, 0))
						{
							if (UNK_0x9C77D2D0559097F0(bLocal_3276, 1))
							{
								UNK_0x046C362CF15F1935(&bLocal_3276);
							}
						}
					}
					if (UNK_0xC844350D5D58C99A(bLocal_3277))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3277, 0))
						{
							if (UNK_0x9C77D2D0559097F0(bLocal_3277, 1))
							{
								UNK_0x046C362CF15F1935(&bLocal_3277);
							}
						}
					}
					func_358();
					iLocal_3338 = 0;
					iLocal_3183 = 0;
					iLocal_3181 = 0;
					iLocal_3180 = 2;
					break;
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_358()
{
	Global_61518 = 0;
}

void func_359(int iParam0)
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

void func_360(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (iParam4 == 1)
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()), 64);
	}
	if (!UNK_0x22A8E52414415B76())
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), !bParam1, false);
	}
	if (bParam7)
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0xE731059548189243(UNK_0x16F2683693E537C9(), 1);
		}
	}
	if (!bParam1 && bParam6)
	{
		UNK_0x04B065D07D2FB5B9(0, 0, 3, 0);
	}
	else
	{
		UNK_0xB3A1B75CB59FEB56(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		UNK_0xA37A90C62806D848(1);
	}
	else
	{
		if (UNK_0x9F4FE516EAACCFC5(uParam0->f_4))
		{
			if (UNK_0xFBB4F23D534EB790(uParam0->f_4))
			{
				UNK_0xE3BB8E05FCEB3FBE(uParam0->f_4, false);
			}
			UNK_0x9A8DDC7C522F5BF5(uParam0->f_4, 1);
		}
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), true, 0);
		}
		bVar0 = UNK_0x728870EB733D12A1();
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			UNK_0x4A4806F9D471E491(bVar0, true, 0);
		}
		UNK_0x42740B44BA8D7B43("TIME_LAPSE");
		if (UNK_0x562F77A7F33D2E46("TOD_SHIFT_SCENE"))
		{
			UNK_0x55D0A2DB35045A35(uParam0->f_10);
			UNK_0x42740B44BA8D7B43("TIME_LAPSE");
			UNK_0x8910D3D58E0132B8("TOD_SHIFT_SCENE");
		}
	}
	func_220(bParam1, 1, 0, 0, 0, 0);
	func_361();
	if (!bParam1 && bParam5)
	{
		if (uParam0->f_5)
		{
			UNK_0x71592C07333285FE(uParam0->f_7, 0, 0);
		}
		else
		{
			UNK_0x71592C07333285FE(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (UNK_0x757EF87A33649210())
		{
			UNK_0x82E51BCA72537B6C(250);
		}
	}
	if (!bParam1)
	{
		if (Global_111638.f_32744.f_4801 != -15)
		{
			Global_111638.f_32744.f_4801 = func_96();
		}
	}
}

void func_361()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		UNK_0xD59AE843FA2C6B40(Global_111638.f_14136[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

void func_362(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	vector3 vVar0;
	float fVar3;

	if (UNK_0xC844350D5D58C99A(Global_102203.f_4))
	{
		if (UNK_0xDF1306B443CD3D15(Global_102203.f_4, 0))
		{
			if (func_371(24) != Global_102203.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_368(UNK_0x68F4C0EC296D3901(Global_102203.f_4, true), iParam5, &vVar0, &fVar3))
					{
						vParam0 = { vVar0 };
						fParam3 = fVar3;
					}
				}
				func_363(Global_102203.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_363(bool bParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
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
		func_367(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_39(bParam0, &Var0);
		if (func_71(vParam1, 0f, 0f, 0f, 0))
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
		func_365(iParam5, &Var0, vParam1, iParam4, func_34(bParam0));
		func_364(iParam5, bParam0, 0);
	}
}

void func_364(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_159(&(Global_75441.f_555[0 /*21*/]), iParam0))
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
				Global_111638.f_32744.f_4801 = func_96();
			}
			if (bParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_371(iParam0);
					if ((UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0)) && bParam1 != bVar0)
					{
						func_145(bVar0, 145);
					}
				}
				Global_76347 = bParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_365(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_159(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
		{
			func_366(iParam0);
			func_156(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_152(iParam0, 1);
		}
	}
}

void func_366(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_159(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			func_152(iParam0, 0);
		}
	}
}

void func_367(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_366(iParam0);
	func_152(iParam0, 0);
}

bool func_368(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	iVar0 = func_369(vParam0, uParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return true;
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return true;
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return true;
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return true;
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return true;
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return true;
		default:
			break;
	}
	return false;
}

int func_369(vector3 vParam0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_93782[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_93782[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_370(iVar0) || iParam4 == 0)
				{
					fVar1 = UNK_0x0EB28750412C3A5A(vParam0, Global_93782[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_370(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], false);
}

int func_371(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

void func_372()
{
	Global_61518 = 1;
}

int func_373(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<2> Var0;

	func_400(iParam0, &Var0);
	func_399(iParam0, &Var0, &(Var0.f_1));
	return func_374(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_374(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((func_432(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			UNK_0x71592C07333285FE(uParam0->f_7, 0, 0);
		}
		else
		{
			UNK_0x71592C07333285FE(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !func_397(uParam0->f_8, uParam0->f_7))
			{
				if (UNK_0x64F604CF561734A9("TIME_LAPSE", 0, -1))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	UNK_0x3FC8DBCC154CA56B();
	UNK_0x3584F71E5CA29322(7);
	UNK_0x6A36BC55C7F6D023(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			UNK_0x9A8DDC7C522F5BF5(uParam0->f_4, 0);
			uParam0->f_4 = UNK_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", false);
			UNK_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				UNK_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				UNK_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			UNK_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_14);
			UNK_0xE3BB8E05FCEB3FBE(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), false, 0);
				}
				bVar0 = UNK_0x728870EB733D12A1();
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (!UNK_0xAF6690C489CC6203(bVar0))
					{
						UNK_0x73270B3C9CC833FD(bVar0, true, 0);
					}
					UNK_0x4A4806F9D471E491(bVar0, false, 0);
				}
			}
			bVar1 = UNK_0x94AE88F396FEBF6C(uParam0->f_4);
			UNK_0xBAF1FC9E86FF7F91();
			UNK_0x0002EE0323037BB6(uParam1->f_2, bVar1, 0);
			UNK_0xD7AD2803AD9697F7(uParam1->f_2, bVar1);
			UNK_0x58B5D6A0F1D7754D(uParam1->f_2, bVar1);
			if (bParam3)
			{
				UNK_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 1, 1, 0, false);
			}
			func_396(&(uParam0->f_1), 0, 0, 0, UNK_0x972A296334C9D57B(), UNK_0x118229AD063C3C1D(), UNK_0x1A61A218F5C5EB02());
			func_360(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_397(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				UNK_0x9A8DDC7C522F5BF5(uParam0->f_4, 0);
				uParam0->f_4 = UNK_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", false);
				UNK_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					UNK_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					UNK_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				UNK_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_14);
				UNK_0xE3BB8E05FCEB3FBE(uParam0->f_4, true);
				if (!bParam6)
				{
					if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
					{
						UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), false, 0);
					}
					bVar2 = UNK_0x728870EB733D12A1();
					if (UNK_0xC844350D5D58C99A(bVar2))
					{
						if (!UNK_0xAF6690C489CC6203(bVar2))
						{
							UNK_0x73270B3C9CC833FD(bVar2, true, 0);
						}
						UNK_0x4A4806F9D471E491(bVar2, false, 0);
					}
				}
				bVar3 = UNK_0x94AE88F396FEBF6C(uParam0->f_4);
				UNK_0xBAF1FC9E86FF7F91();
				UNK_0x0002EE0323037BB6(uParam1->f_2, bVar3, 0);
				UNK_0xD7AD2803AD9697F7(uParam1->f_2, bVar3);
				UNK_0x58B5D6A0F1D7754D(uParam1->f_2, bVar3);
				if (bParam3)
				{
					UNK_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 1, 1, 0, false);
				}
				func_396(&(uParam0->f_1), 0, 0, 8, UNK_0x972A296334C9D57B(), UNK_0x118229AD063C3C1D(), UNK_0x1A61A218F5C5EB02());
				func_360(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				UNK_0x42740B44BA8D7B43("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			UNK_0x9A8DDC7C522F5BF5(uParam0->f_4, 0);
			uParam0->f_4 = UNK_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", false);
			UNK_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				UNK_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				UNK_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			UNK_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_14);
			UNK_0x34570E685597AE09(uParam0->f_4, 3);
			UNK_0xE3BB8E05FCEB3FBE(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
				{
					UNK_0x4A4806F9D471E491(UNK_0x16F2683693E537C9(), false, 0);
				}
				bVar4 = UNK_0x728870EB733D12A1();
				if (UNK_0xC844350D5D58C99A(bVar4))
				{
					if (!UNK_0xAF6690C489CC6203(bVar4))
					{
						UNK_0x73270B3C9CC833FD(bVar4, true, 0);
					}
					UNK_0x4A4806F9D471E491(bVar4, false, 0);
				}
			}
			bVar5 = UNK_0x94AE88F396FEBF6C(uParam0->f_4);
			UNK_0xBAF1FC9E86FF7F91();
			UNK_0x0002EE0323037BB6(uParam1->f_2, bVar5, 0);
			UNK_0xD7AD2803AD9697F7(uParam1->f_2, bVar5);
			UNK_0x58B5D6A0F1D7754D(uParam1->f_2, bVar5);
			if (bParam3)
			{
				UNK_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0, 1, 0, false);
			}
			func_396(&(uParam0->f_1), 0, 0, 0, UNK_0x972A296334C9D57B(), UNK_0x118229AD063C3C1D(), UNK_0x1A61A218F5C5EB02());
			func_360(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			UNK_0x42740B44BA8D7B43("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			UNK_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0, 1, 0, false);
		}
		if (!uParam0->f_5)
		{
			if (func_377(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432 /* Float: -1f */, 0, 1, 1065353216 /* Float: 1f */))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = UNK_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", false);
					UNK_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					UNK_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					UNK_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_14);
					UNK_0x34570E685597AE09(uParam0->f_4, 3);
					UNK_0xE3BB8E05FCEB3FBE(uParam0->f_4, true);
					uParam0->f_9 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_377(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432 /* Float: -1f */, 0, 1, 1065353216 /* Float: 1f */))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = UNK_0x1C0640BA9A7327B3();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = UNK_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", false);
				UNK_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				UNK_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				UNK_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_14);
				UNK_0x34570E685597AE09(uParam0->f_4, 3);
				UNK_0xE3BB8E05FCEB3FBE(uParam0->f_4, true);
				uParam0->f_9 = UNK_0x1C0640BA9A7327B3();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (func_375(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!UNK_0xD0BB2359EC70FC37())
				{
					UNK_0x53491B90E4FD0E56(250);
				}
				if (!UNK_0x757EF87A33649210())
				{
					UNK_0x3FC8DBCC154CA56B();
					UNK_0x3584F71E5CA29322(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					func_377(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216 /* Float: 1f */);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			UNK_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0, 1, 0, false);
		}
		if (UNK_0x9F4FE516EAACCFC5(uParam0->f_4) && UNK_0xFA06B985B30FB0FC(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = UNK_0x1C0640BA9A7327B3();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (func_375(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!UNK_0xD0BB2359EC70FC37())
				{
					UNK_0x53491B90E4FD0E56(250);
				}
				if (!UNK_0x757EF87A33649210())
				{
					UNK_0x3FC8DBCC154CA56B();
					UNK_0x3584F71E5CA29322(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			UNK_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0, 1, 0, false);
		}
		if (uParam0->f_9 + 1000 > UNK_0x1C0640BA9A7327B3())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0)
{
	if (UNK_0x0F1CCD77290EE12F())
	{
		if ((UNK_0x1C0640BA9A7327B3() - Global_28) > iParam0)
		{
			Global_27 = UNK_0x1C0640BA9A7327B3();
		}
		Global_28 = UNK_0x1C0640BA9A7327B3();
		if ((UNK_0x1C0640BA9A7327B3() - Global_27) > iParam0)
		{
			if (func_376())
			{
				Global_27 = UNK_0x1C0640BA9A7327B3();
				return 1;
			}
		}
	}
	return 0;
}

bool func_376()
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

bool func_377(int iParam0, int iParam1, bool bParam2, bool bParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;

	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_96();
			bVar5 = func_96();
			func_104(&bVar5, iParam0);
			func_105(&bVar5, iParam1);
			func_106(&bVar5, 0);
			if (func_394(*uParam4, bVar5))
			{
				func_393(&bVar5, 0, 0, 0, 1, 0, 0);
			}
			func_391(*uParam4, bVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_384((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				UNK_0x25CDE70818786F1F(0.6f);
				UNK_0x365391E40B6BA75B(0);
				UNK_0x9B84ADFFC9CAC31A(0);
			}
			func_383();
			uParam4->f_10 = UNK_0xD68EA767274B7444();
			UNK_0x4D7F4CC43D4D0DE3(uParam4->f_10, "TIME_LAPSE_MASTER", false, 1);
			UNK_0x8BC9595FD2792B5D("TOD_SHIFT_SCENE");
			func_361();
			uParam4->f_3++;
			break;
		case 1:
		case 2:
			if ((UNK_0x9F4FE516EAACCFC5(uParam4->f_4) && UNK_0xFA06B985B30FB0FC(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (UNK_0x9F4FE516EAACCFC5(uParam4->f_4) && UNK_0xFA06B985B30FB0FC(uParam4->f_4))
				{
					fVar0 = UNK_0xEDD067DFFB8D5784(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (UNK_0x12AB0310C2281427(bParam2) != 0)
						{
							UNK_0x8225571BCEE038F8(bParam2, fParam8);
						}
						if (UNK_0x12AB0310C2281427(bParam3) != 0)
						{
							UNK_0xF1662D1948765623();
							UNK_0xCD7E6F59323AEBCB(bParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				bVar5 = *uParam4;
				func_393(&bVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				UNK_0x71592C07333285FE(func_382(bVar5), func_381(bVar5), func_380(bVar5));
				if (bParam7)
				{
					UNK_0xF8041E6992430151();
				}
				UNK_0x55D0A2DB35045A35(uParam4->f_10);
				UNK_0x42740B44BA8D7B43("TIME_LAPSE");
				if (bParam7)
				{
					UNK_0x9B84ADFFC9CAC31A(1);
					UNK_0x365391E40B6BA75B(1);
				}
				return true;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_379(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar12));
			bVar5 = *uParam4;
			func_393(&bVar5, iVar4, 0, 0, 0, 0, 0);
			UNK_0x71592C07333285FE(func_382(bVar5), func_381(bVar5), func_380(bVar5));
			if (func_378(bVar5) != UNK_0x972A296334C9D57B())
			{
				UNK_0xD3A9F3BA3F4248BA(func_378(bVar5), func_103(bVar5), func_101(bVar5));
			}
			func_272();
			UNK_0xF99F2927BEBB5EE7(6);
			break;
	}
	return false;
}

int func_378(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 4) & 31;
}

float func_379(float fParam0, float fParam1, float fParam2)
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

int func_380(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 20) & 63;
}

int func_381(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 14) & 63;
}

int func_382(bool bParam0)
{
	return SYSTEM::SHIFT_RIGHT(bParam0, 9) & 31;
}

int func_383()
{
	bool bVar0;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
	{
		return 0;
	}
	bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
	if (!UNK_0x437347B10A200C4B(bVar0, 0))
	{
		return 0;
	}
	UNK_0x3CBF2C83A68C1611(bVar0, "OFF");
	return 1;
}

void func_384(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_390(&(Global_111638.f_18098.f_175[iVar0 /*19*/].f_5)))
		{
			func_385(&(Global_111638.f_18098.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_390(&(Global_111638.f_18098.f_362[iVar1 /*3*/])))
		{
			func_385(&(Global_111638.f_18098.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	UNK_0x9911B88AFCF2F6D2();
}

void func_385(bool bParam0, float fParam1)
{
	if (func_390(bParam0))
	{
		func_386(bParam0, (func_388(bParam0) + fParam1));
	}
}

void func_386(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_387(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

float func_387(bool bParam0)
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

float func_388(bool bParam0)
{
	if (func_390(bParam0))
	{
		if (func_389(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_387(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

bool func_389(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, 2);
}

bool func_390(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

void func_391(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_394(bParam0, bParam1))
	{
		bVar0 = func_103(bParam1);
		iVar1 = func_101(bParam0);
		iVar2 = (func_101(bParam0) - func_101(bParam1));
		iVar3 = (func_103(bParam0) - func_103(bParam1));
		iVar4 = (func_378(bParam0) - func_378(bParam1));
		iVar5 = (func_382(bParam0) - func_382(bParam1));
		iVar6 = (func_381(bParam0) - func_381(bParam1));
		iVar7 = (func_380(bParam0) - func_380(bParam1));
	}
	else
	{
		bVar0 = func_103(bParam0);
		iVar1 = func_101(bParam1);
		iVar2 = (func_101(bParam1) - func_101(bParam0));
		iVar3 = (func_103(bParam1) - func_103(bParam0));
		iVar4 = (func_378(bParam1) - func_378(bParam0));
		iVar5 = (func_382(bParam1) - func_382(bParam0));
		iVar6 = (func_381(bParam1) - func_381(bParam0));
		iVar7 = (func_380(bParam1) - func_380(bParam0));
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
		iVar4 = (iVar4 + func_100(bVar0, iVar1));
		iVar3 = (iVar3 - 1);
		bVar0 = SYSTEM::ROUND(func_392(SYSTEM::TO_FLOAT(bVar0 + 1), 0f, 12f));
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
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_392(float fParam0, float fParam1, float fParam2)
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

void func_393(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_101(*bParam0);
	bVar1 = func_103(*bParam0);
	iVar2 = func_378(*bParam0);
	iVar3 = func_382(*bParam0);
	iVar4 = func_381(*bParam0);
	iVar5 = func_380(*bParam0);
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
	iVar6 = func_100(bVar1, iVar0);
	while (iVar2 > iVar6)
	{
		bVar1++;
		iVar2 = (iVar2 - iVar6);
		if (bVar1 > 11)
		{
			iVar0++;
			bVar1 = (bVar1 - 12);
		}
		iVar6 = func_100(bVar1, iVar0);
	}
	bVar1 = (bVar1 + iParam5);
	while (bVar1 > 11)
	{
		iParam6++;
		bVar1 = (bVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_396(bParam0, iVar5, iVar4, iVar3, iVar2, bVar1, iVar0);
}

bool func_394(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (!func_395(bParam1) || !func_395(bParam0))
	{
		return true;
	}
	bVar0 = func_101(bParam0);
	bVar1 = func_101(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_103(bParam0);
	bVar1 = func_103(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_378(bParam0);
	bVar1 = func_378(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_382(bParam0);
	bVar1 = func_382(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_381(bParam0);
	bVar1 = func_381(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	else if (bVar0 < bVar1)
	{
		return false;
	}
	bVar0 = func_380(bParam0);
	bVar1 = func_380(bParam1);
	if (bVar0 > bVar1)
	{
		return true;
	}
	return false;
}

bool func_395(bool bParam0)
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
	iVar0 = func_380(bParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_381(bParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_382(bParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_101(bParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	bVar4 = func_103(bParam0);
	if (bVar4 < 0 || bVar4 > 11)
	{
		return false;
	}
	iVar5 = func_378(bParam0);
	if (iVar5 < 1 || iVar5 > func_100(bVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_396(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	func_106(bParam0, iParam1);
	func_105(bParam0, iParam2);
	func_104(bParam0, iParam3);
	func_98(bParam0, bParam5);
	func_99(bParam0, iParam4);
	func_97(bParam0, iParam6);
}

int func_397(int iParam0, int iParam1)
{
	return func_398(UNK_0xD8A54335F18763BA(), iParam0, iParam1);
}

int func_398(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_399(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		default:
			*uParam1 = Global_89532[iParam0 /*34*/].f_14;
			*uParam2 = Global_89532[iParam0 /*34*/].f_13;
			break;
	}
}

void func_400(int iParam0, var uParam1)
{
	uParam1->f_17 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			uParam1->f_2 = { -58.1338f, -1115.653f, 25.8856f };
			uParam1->f_5 = { 18.4907f, 0f, 3.566f };
			uParam1->f_8 = { -58.3857f, -1115.083f, 26.0824f };
			uParam1->f_11 = { 18.4907f, 0f, 2.0628f };
			uParam1->f_14 = 40.0256f;
			uParam1->f_15 = 4000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		case 17:
		case 18:
			uParam1->f_2 = { -830.1f, 171.4f, 71.5f };
			uParam1->f_5 = { 17.5f, 0f, -76f };
			uParam1->f_8 = { -829.5f, 171.6f, 71.7f };
			uParam1->f_11 = { 17.9f, 0f, -75.4f };
			uParam1->f_14 = 47.9931f;
			uParam1->f_15 = 6600;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		case 21:
		case 22:
			uParam1->f_2 = { -776.5807f, 181.1033f, 72.2059f };
			uParam1->f_5 = { 11.8135f, 0f, 95.7275f };
			uParam1->f_8 = { -776.8288f, 181.0926f, 72.2551f };
			uParam1->f_11 = { 11.8134f, 0f, 95.7284f };
			uParam1->f_14 = 46.7255f;
			uParam1->f_15 = 5500;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		case 20:
			switch (func_107())
			{
				case 0:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
				case 2:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
			}
			break;
		case 40:
			uParam1->f_2 = { -8.0845f, -1450.367f, 36.8585f };
			uParam1->f_5 = { 13.3776f, 0f, 4.513f };
			uParam1->f_8 = { -9.0519f, -1450.444f, 36.8585f };
			uParam1->f_11 = { 13.3776f, 0f, 4.513f };
			uParam1->f_14 = 39.9659f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		case 27:
			uParam1->f_2 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_5 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_8 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_11 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_14 = 40f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		case 43:
			uParam1->f_2 = { -7.205f, -1471.656f, 31.1614f };
			uParam1->f_5 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_8 = { -7.2909f, -1471.232f, 31.2546f };
			uParam1->f_11 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_14 = 38.5265f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		case 61:
			uParam1->f_2 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_5 = { 5.6441f, 0f, -138.7474f };
			uParam1->f_8 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_11 = { 4.8242f, 0f, -118.3167f };
			uParam1->f_14 = 37f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		case 91:
		case 93:
			uParam1->f_2 = { 1406.112f, 3590.231f, 34.4113f };
			uParam1->f_5 = { 17.5005f, 0f, 55.9579f };
			uParam1->f_8 = { 1405.673f, 3590.525f, 34.4113f };
			uParam1->f_11 = { 18.4979f, 0f, 55.9579f };
			uParam1->f_14 = 56.3199f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 69:
		case 86:
		case 90:
			uParam1->f_2 = { 739.1493f, -990.3961f, 29.85194f };
			uParam1->f_5 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_8 = { 738.4197f, -989.6462f, 30.17581f };
			uParam1->f_11 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_14 = 47.56362f;
			uParam1->f_15 = 6000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		case 70:
			uParam1->f_2 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_5 = { -0.2f, 0f, -169.6f };
			uParam1->f_8 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_11 = { -0.2f, 0f, -169.6f };
			uParam1->f_14 = 47.6f;
			uParam1->f_15 = 5000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 1;
			break;
		case 45:
			uParam1->f_2 = { -458.5666f, 1010.097f, 316.3736f };
			uParam1->f_5 = { 14.47186f, 0f, -18.28884f };
			uParam1->f_8 = { -457.3f, 1011.6f, 316.9f };
			uParam1->f_11 = { 14.5f, 0f, -18.5f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 49:
			uParam1->f_2 = { -723.9982f, -155.7184f, 38.12362f };
			uParam1->f_5 = { 30.12048f, 0f, -99.11243f };
			uParam1->f_8 = { -722.4385f, -155.7817f, 37.4443f };
			uParam1->f_11 = { 2.0429f, 0f, -101.5132f };
			uParam1->f_14 = 45f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 9:
			switch (func_107())
			{
				case 2:
					uParam1->f_2 = { 416.3221f, -960.2586f, 30.6696f };
					uParam1->f_5 = { 21.5747f, 0f, -135.2969f };
					uParam1->f_8 = { 416.8894f, -960.832f, 30.9887f };
					uParam1->f_11 = { 21.9916f, 0f, -135.2969f };
					uParam1->f_14 = 47.1057f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
				case 1:
					uParam1->f_2 = { 1393.363f, -2052.581f, 65.4054f };
					uParam1->f_5 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_8 = { 1393.456f, -2052.656f, 68.146f };
					uParam1->f_11 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_14 = 35.9859f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
			}
			break;
		case 30:
			uParam1->f_2 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_5 = { 61.9f, 0f, -63.8f };
			uParam1->f_8 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_11 = { 61.9f, 0f, -63.8f };
			uParam1->f_14 = 46.6f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 39:
			uParam1->f_2 = { 3841.93f, 4464.658f, 2.6587f };
			uParam1->f_5 = { 8.4859f, 0.0024f, 143.0775f };
			uParam1->f_8 = { 3842.54f, 4464.184f, 2.6587f };
			uParam1->f_11 = { 8.4859f, 0.0024f, 142.0089f };
			uParam1->f_14 = 34.1544f;
			uParam1->f_15 = 3000;
			uParam1->f_16 = 0;
			break;
		case 71:
			uParam1->f_2 = { -1193.1f, -1525.3f, 4.4f };
			uParam1->f_5 = { 9.4f, 0f, -78.8f };
			uParam1->f_8 = { -1192.2f, -1525.1f, 4.4f };
			uParam1->f_11 = { 9.4f, 0f, -78.5f };
			uParam1->f_14 = 30.4f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 74:
			uParam1->f_2 = { -24.2f, -2417.6f, 7.8f };
			uParam1->f_5 = { 10.4f, 0f, 80.4f };
			uParam1->f_8 = { -23.8f, -2414.8f, 7.8f };
			uParam1->f_11 = { 10.4f, 0f, 81.4f };
			uParam1->f_14 = 48.1095f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 84:
		case 85:
		case 65:
			uParam1->f_2 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_5 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_8 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_11 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_14 = 39.4027f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 62:
		case 15:
		case 16:
			uParam1->f_2 = { 1998.215f, 3816.983f, 33.0117f };
			uParam1->f_5 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_8 = { 1997.154f, 3817.004f, 33.1215f };
			uParam1->f_11 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_14 = 36.8186f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			if (iParam0 == 62)
			{
				if (func_107() != 2)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_11 = { 0f, 0f, 0f };
					uParam1->f_14 = -1f;
					uParam1->f_15 = -1;
					uParam1->f_16 = 0;
				}
			}
			break;
		case 63:
			uParam1->f_2 = { 1576f, 3363.9f, 55.5f };
			uParam1->f_5 = { 0.5f, 0f, -123.8f };
			uParam1->f_8 = { 1575.2f, 3364.4f, 49.2f };
			uParam1->f_11 = { -4.3f, 0f, -124.1f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		case 64:
			uParam1->f_2 = { 1566f, 3378.8f, 42.8f };
			uParam1->f_5 = { -2.4f, 0f, -126.3f };
			uParam1->f_8 = { 1567.6f, 3376.9f, 45f };
			uParam1->f_11 = { 1.6f, 0f, -124.6f };
			uParam1->f_14 = 34.7f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		case 24:
			uParam1->f_2 = { 1339.573f, -2550.873f, 56.28254f };
			uParam1->f_5 = { -2.348373f, -2.1E-05f, 159.736f };
			uParam1->f_8 = { 1334.491f, -2549.345f, 47.69109f };
			uParam1->f_11 = { 2.789334f, -2.1E-05f, -156.4397f };
			uParam1->f_14 = 25.66f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		case 25:
			uParam1->f_2 = { 2383.651f, 2624.787f, 46.9527f };
			uParam1->f_5 = { 14.6191f, 0f, 64.366f };
			uParam1->f_8 = { 2383.929f, 2622.802f, 47.2707f };
			uParam1->f_11 = { 33.17714f, -0.13073f, 12.31436f };
			uParam1->f_14 = 35.31843f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 26:
			uParam1->f_2 = { 1755.519f, -1474.981f, 126.1743f };
			uParam1->f_5 = { 4.5341f, 0f, 89.6405f };
			uParam1->f_8 = { 1772.26f, -1475.085f, 125.9465f };
			uParam1->f_11 = { 5.8327f, 0f, 89.6405f };
			uParam1->f_14 = 32.7f;
			uParam1->f_15 = 6500;
			uParam1->f_16 = 0;
			break;
		case 3:
			uParam1->f_2 = { -1514.257f, -947.7281f, 15.0253f };
			uParam1->f_5 = { -3.5807f, -0.0001f, -46.3209f };
			uParam1->f_8 = { -1512.601f, -949.2796f, 14.8827f };
			uParam1->f_11 = { -4.7682f, -0.0001f, -34.1393f };
			uParam1->f_14 = 29.9555f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 4:
			uParam1->f_2 = { -698.2578f, -934.4238f, 31.6909f };
			uParam1->f_5 = { -22.0467f, 0f, 32.1888f };
			uParam1->f_8 = { -697.8695f, -935.0406f, 31.9861f };
			uParam1->f_11 = { -20.6093f, 0f, 32.1888f };
			uParam1->f_14 = 30f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 5:
			uParam1->f_2 = { 221.8613f, -830.6434f, 45.3154f };
			uParam1->f_5 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_8 = { 227.5233f, -832.8285f, 45.3154f };
			uParam1->f_11 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 6:
			uParam1->f_2 = { -23.3747f, -120.3161f, 64.139f };
			uParam1->f_5 = { -5.7232f, 0f, 5.1015f };
			uParam1->f_8 = { -22.5824f, -122.52f, 64.139f };
			uParam1->f_11 = { -5.7232f, 0f, 6.6362f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		case 7:
			uParam1->f_2 = { 803.5977f, -1075.869f, 37.1981f };
			uParam1->f_5 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_8 = { 803.5977f, -1075.869f, 32.7981f };
			uParam1->f_11 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_11 = { 0f, 0f, 0f };
			uParam1->f_14 = -1f;
			uParam1->f_15 = -1;
			uParam1->f_16 = 0;
			break;
	}
	if (UNK_0x12AB0310C2281427("RAIN") == UNK_0x99910ECF8C64BEC6())
	{
		if (UNK_0xEA6BC48857E0AC4C(&(uParam1->f_18)))
		{
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
		}
		if (UNK_0xEA6BC48857E0AC4C(&(uParam1->f_22)))
		{
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
		}
	}
}

bool func_401()
{
	bool bVar0;

	bVar0 = UNK_0x62A1F4500E8F07E0();
	if (!Global_76621)
	{
		if (!bVar0)
		{
			Global_76621 = 1;
		}
	}
	return bVar0;
}

void func_402()
{
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	if (!func_23())
	{
		if (func_432(0))
		{
			UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
			UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
			UNK_0x523BCC9DC80CD82F(joaat("RAPIDGT"));
			UNK_0x523BCC9DC80CD82F(joaat("SURANO"));
			UNK_0x523BCC9DC80CD82F(joaat("CARBONIZZARE"));
			while ((!UNK_0xB87F6CF6E5628C67(joaat("RAPIDGT")) || !UNK_0xB87F6CF6E5628C67(joaat("SURANO"))) || !UNK_0xB87F6CF6E5628C67(joaat("CARBONIZZARE")))
			{
				SYSTEM::WAIT(0);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3259))
			{
				UNK_0x536F1BE96C726C4B(vLocal_3294, 5f, 1, 0, 0, false);
				bLocal_3259 = UNK_0x122AAB0B1D6F55AD(joaat("RAPIDGT"), vLocal_3294, bLocal_3321, true, true, false);
				UNK_0xC002508A277213DE(bLocal_3259, 112, 112);
				UNK_0xD458AC1C1D29C3B4(bLocal_3259, 3000, false);
				UNK_0xD5A0214B20BCBAD8(bLocal_3259, 1);
				UNK_0x71199B01895C6202(joaat("RAPIDGT"));
				UNK_0xAB8E2DDC7AF955E0(joaat("RAPIDGT"), true);
				UNK_0x120A395B0ECB8EA5(bLocal_3259, true);
				UNK_0x44A200C9B6E1CEA6(bLocal_3259, true);
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3276))
			{
				if (UNK_0xB87F6CF6E5628C67(joaat("SURANO")))
				{
					UNK_0x536F1BE96C726C4B(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, false);
					bLocal_3276 = UNK_0x122AAB0B1D6F55AD(joaat("SURANO"), -1037.398f, -491.6539f, 35.5545f, 208.889f, true, true, false);
					UNK_0xC002508A277213DE(bLocal_3276, false, false);
					UNK_0xD458AC1C1D29C3B4(bLocal_3276, 3000, false);
					UNK_0xD5A0214B20BCBAD8(bLocal_3276, 1);
					UNK_0x71199B01895C6202(joaat("SURANO"));
					UNK_0xAB8E2DDC7AF955E0(joaat("SURANO"), true);
					UNK_0x44A200C9B6E1CEA6(bLocal_3276, true);
				}
			}
			if (!UNK_0xC844350D5D58C99A(bLocal_3277))
			{
				if (UNK_0xB87F6CF6E5628C67(joaat("CARBONIZZARE")))
				{
					UNK_0x536F1BE96C726C4B(vLocal_3294, 5f, 1, 0, 0, false);
					bLocal_3277 = UNK_0x122AAB0B1D6F55AD(joaat("CARBONIZZARE"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, true, true, false);
					UNK_0xC002508A277213DE(bLocal_3277, 89, 89);
					UNK_0xD458AC1C1D29C3B4(bLocal_3277, 3000, false);
					UNK_0xD5A0214B20BCBAD8(bLocal_3277, 1);
					UNK_0x71199B01895C6202(joaat("CARBONIZZARE"));
					UNK_0xAB8E2DDC7AF955E0(joaat("CARBONIZZARE"), true);
					UNK_0x44A200C9B6E1CEA6(bLocal_3277, true);
				}
			}
		}
		iLocal_3181 = 0;
		iLocal_3183 = 0;
		iLocal_3345 = 0;
		iLocal_3180 = 1;
	}
	else
	{
		UNK_0xF63400DBE3303D26("SecGuards", &bLocal_3576);
		UNK_0x0E2400AB9174FA81(5, joaat("PLAYER"), bLocal_3576);
		UNK_0x0E2400AB9174FA81(5, bLocal_3576, joaat("PLAYER"));
		if (Global_92921 == 1)
		{
			if (func_405() == 0)
			{
				func_404(vLocal_3312, bLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				UNK_0xC92DB9682A650680("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_405() == 1)
			{
				func_404(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				UNK_0xC92DB9682A650680("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_405() == 2)
			{
				func_404(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				UNK_0xC92DB9682A650680("TRV4_EVADE_RT");
				iLocal_3180 = 8;
			}
			if (func_405() == 3)
			{
				func_404(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 1, 0);
				func_403();
			}
		}
		else
		{
			if (func_405() == 0)
			{
				func_404(-1019.579f, -484.872f, 36.0795f, 93.7701f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				UNK_0xC92DB9682A650680("TRV4_START_RT");
				iLocal_3180 = 2;
			}
			if (func_405() == 1)
			{
				func_404(vLocal_3312, bLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				UNK_0xC92DB9682A650680("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_405() == 2)
			{
				func_404(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				UNK_0xC92DB9682A650680("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_405() == 3)
			{
				func_404(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				UNK_0xC92DB9682A650680("TRV4_EVADE_RT");
				iLocal_3180 = 8;
			}
		}
		UNK_0xD7992BEF7A9D109E("TREV4", false);
		while (!UNK_0x67C1D9E5B91B2E37(false))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_403()
{
	if (iLocal_3181 == 0)
	{
		UNK_0x536F1BE96C726C4B(-920.0547f, -2744.662f, 12.8434f, 20f, 1, 0, 0, false);
		UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
		UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
		iLocal_3181++;
	}
	if (iLocal_3181 == 1)
	{
		UNK_0x90CECE08EA8E77CC(-920.0547f, -2744.662f, 12.8434f);
		if (!UNK_0x0F1CCD77290EE12F())
		{
			func_21(0, -1, 1);
			UNK_0x82E51BCA72537B6C(800);
		}
		func_6();
	}
}

void func_404(vector3 vParam0, bool bParam3, int iParam4, int iParam5)
{
	if (func_23())
	{
		UNK_0x256D93AFAE851A7A(0);
		UNK_0x0674E58A79778E99(&(Global_98744.f_20), 2);
		UNK_0x21387C9EECC2B220(true);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
		}
		Global_98740 = { vParam0 };
		Global_98743 = bParam3;
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
		func_22(1);
	}
}

int func_405()
{
	if (!Global_98744 == 10 && !Global_98744 == 9)
	{
		return 0;
	}
	return Global_98744.f_2;
}

void func_406()
{
	if (iLocal_3490[0] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3121[7]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3121[7], 0))
			{
				UNK_0x2E1E5367A885F9B7(iLocal_3121[7], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[0] = 1;
			}
		}
	}
	if (iLocal_3498[0] == 0)
	{
		if (iLocal_3490[0] == 1)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3121[7]))
			{
				if (!UNK_0xDF1306B443CD3D15(iLocal_3121[7], 0))
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[7], 0);
					iLocal_3498[0] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[7], 0);
					iLocal_3498[0] = 1;
				}
			}
			else
			{
				iLocal_3498[0] = 1;
			}
		}
	}
	if (iLocal_3490[1] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3121[8]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3121[8], 0))
			{
				UNK_0x2E1E5367A885F9B7(iLocal_3121[8], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[1] = 1;
			}
		}
	}
	if (iLocal_3498[1] == 0)
	{
		if (iLocal_3490[1] == 1)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3121[8]))
			{
				if (!UNK_0xDF1306B443CD3D15(iLocal_3121[8], 0))
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[8], 0);
					iLocal_3498[1] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[8], 0);
					iLocal_3498[1] = 1;
				}
			}
			else
			{
				iLocal_3498[1] = 1;
			}
		}
	}
	if (iLocal_3490[2] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3121[11]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3121[11], 0))
			{
				UNK_0x2E1E5367A885F9B7(iLocal_3121[11], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[2] = 1;
			}
		}
	}
	if (iLocal_3498[2] == 0)
	{
		if (iLocal_3490[2] == 1)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3121[11]))
			{
				if (!UNK_0xDF1306B443CD3D15(iLocal_3121[11], 0))
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[11], 0);
					iLocal_3498[2] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[11], 0);
					iLocal_3498[2] = 1;
				}
			}
			else
			{
				iLocal_3498[2] = 1;
			}
		}
	}
	if (iLocal_3490[3] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3121[12]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3121[12], 0))
			{
				UNK_0x2E1E5367A885F9B7(iLocal_3121[12], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[3] = 1;
			}
		}
	}
	if (iLocal_3498[3] == 0)
	{
		if (iLocal_3490[3] == 1)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3121[12]))
			{
				if (!UNK_0xDF1306B443CD3D15(iLocal_3121[12], 0))
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[12], 0);
					iLocal_3498[3] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[12], 0);
					iLocal_3498[3] = 1;
				}
			}
			else
			{
				iLocal_3498[3] = 1;
			}
		}
	}
	if (iLocal_3490[4] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3121[13]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3121[13], 0))
			{
				UNK_0x2E1E5367A885F9B7(iLocal_3121[13], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[4] = 1;
			}
		}
	}
	if (iLocal_3498[4] == 0)
	{
		if (iLocal_3490[4] == 1)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3121[13]))
			{
				if (!UNK_0xDF1306B443CD3D15(iLocal_3121[13], 0))
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[13], 0);
					iLocal_3498[4] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[13], 0);
					iLocal_3498[4] = 1;
				}
			}
			else
			{
				iLocal_3498[4] = 1;
			}
		}
	}
	if (iLocal_3490[5] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3121[14]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3121[14], 0))
			{
				UNK_0x2E1E5367A885F9B7(iLocal_3121[14], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[5] = 1;
			}
		}
	}
	if (iLocal_3498[5] == 0)
	{
		if (iLocal_3490[5] == 1)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3121[14]))
			{
				if (!UNK_0xDF1306B443CD3D15(iLocal_3121[14], 0))
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[14], 0);
					iLocal_3498[5] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[14], 0);
					iLocal_3498[5] = 1;
				}
			}
			else
			{
				iLocal_3498[5] = 1;
			}
		}
	}
	if (iLocal_3490[6] == 0)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_3121[15]))
		{
			if (UNK_0xDF1306B443CD3D15(iLocal_3121[15], 0))
			{
				UNK_0x2E1E5367A885F9B7(iLocal_3121[15], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[6] = 1;
			}
		}
	}
	if (iLocal_3498[6] == 0)
	{
		if (iLocal_3490[6] == 1)
		{
			if (UNK_0xC844350D5D58C99A(iLocal_3121[15]))
			{
				if (!UNK_0xDF1306B443CD3D15(iLocal_3121[15], 0))
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[15], 0);
					iLocal_3498[6] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					UNK_0x06FF977AA95DCCE3(iLocal_3121[15], 0);
					iLocal_3498[6] = 1;
				}
			}
			else
			{
				iLocal_3498[6] = 1;
			}
		}
	}
}

void func_407()
{
	switch (iLocal_3180)
	{
		case 2:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3364 = 0;
					iLocal_3523 = 0;
					iLocal_3556 = 0;
					iLocal_3557 = 0;
					func_17(&uLocal_3578, 1, 0, "Devin", 0, 1);
					func_17(&uLocal_3578, 0, UNK_0x16F2683693E537C9(), "Michael", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3364 == 0)
					{
						if (UNK_0x0EB28750412C3A5A(vLocal_3318, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1) > 2f)
						{
							if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_3364 = 1;
								}
							}
						}
					}
					if (iLocal_3523 == 0)
					{
						if (UNK_0x0EB28750412C3A5A(vLocal_3318, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1) > 100f)
						{
							if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
							{
								if (func_410(&uLocal_3578, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									UNK_0x8B4C4CA774181102(4f, 10f, 4);
									iLocal_3523 = 1;
								}
							}
						}
					}
					if (iLocal_3556 == 0 && iLocal_3523 == 1)
					{
						if (func_409())
						{
							if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_3556 = 1;
								}
							}
						}
					}
					if (iLocal_3557 == 0)
					{
						if (UNK_0xC844350D5D58C99A(bLocal_3258))
						{
							if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
							{
								if (func_16(UNK_0x16F2683693E537C9(), bLocal_3258, 1) < 200f && UNK_0x0A059E0DB9253280(bLocal_3258))
								{
									if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
									{
										if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												UNK_0x8B4C4CA774181102(3f, 12f, 4);
												iLocal_3557 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case 4:
			if (iLocal_3181 >= 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3524[0] = 0;
					iLocal_3524[1] = 0;
					iLocal_3524[2] = 0;
					iLocal_3524[3] = 0;
					iLocal_3553 = 0;
					iLocal_3554 = 0;
					iLocal_3555 = 0;
					iLocal_3558 = 0;
					iLocal_3559 = 0;
					iLocal_3560 = 0;
					iLocal_3561 = 0;
					iLocal_3562 = 0;
					iLocal_3199 = UNK_0x1C0640BA9A7327B3();
					func_17(&uLocal_3578, 0, UNK_0x16F2683693E537C9(), "Michael", 0, 1);
					func_17(&uLocal_3578, 4, 0, "SOL3COP", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3557 == 0)
					{
						if (UNK_0xC844350D5D58C99A(bLocal_3258))
						{
							if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
							{
								if (func_16(UNK_0x16F2683693E537C9(), bLocal_3258, 1) < 200f && UNK_0x0A059E0DB9253280(bLocal_3258))
								{
									if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
									{
										if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_3557 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (UNK_0xC844350D5D58C99A(bLocal_3258))
					{
						if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
						{
							if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
							{
								if (iLocal_3524[0] == 0)
								{
									if (UNK_0xDF1306B443CD3D15(iLocal_3121[7], 0) || UNK_0xDF1306B443CD3D15(iLocal_3121[8], 0))
									{
										if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 7000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 28000f)
										{
											if (!func_262())
											{
												if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_3524[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[1] == 0)
								{
									if (UNK_0xDF1306B443CD3D15(iLocal_3121[7], 0) || UNK_0xDF1306B443CD3D15(iLocal_3121[8], 0))
									{
										if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 28000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 34500f)
										{
											if (!func_262())
											{
												if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														UNK_0x8B4C4CA774181102(4f, 4f, 4);
														iLocal_3524[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[2] == 0)
								{
									if (UNK_0xDF1306B443CD3D15(iLocal_3121[7], 0) || UNK_0xDF1306B443CD3D15(iLocal_3121[8], 0))
									{
										if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 36000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 41000f)
										{
											if (!func_262())
											{
												if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														UNK_0x8B4C4CA774181102(2f, 4f, 4);
														iLocal_3524[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3554 == 0)
								{
									if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 41000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 43500f)
									{
										if (UNK_0xC844350D5D58C99A(bLocal_3265) && UNK_0x0A059E0DB9253280(bLocal_3265))
										{
											if (!func_262())
											{
												if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														UNK_0x8B4C4CA774181102(4f, 4f, 4);
														iLocal_3554 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3555 == 0)
								{
									if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 50509f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 50872f)
									{
										if (UNK_0xC844350D5D58C99A(bLocal_3265) && UNK_0x0A059E0DB9253280(bLocal_3265))
										{
											if (!func_262())
											{
												if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_3555 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[3] == 0)
								{
									if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 58000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 68000f)
									{
										if (!func_262())
										{
											if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
											{
												if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_3524[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_3558 == 0 && iLocal_3524[3] == 1)
								{
									if (UNK_0x9901AABAC4D4C590(bLocal_3258) < 76000f)
									{
										if (!func_262())
										{
											if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
											{
												if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_3558 = 1;
												}
											}
										}
									}
								}
								if (iLocal_3553 == 0)
								{
									if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 80000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 82000f)
									{
										if (UNK_0xC844350D5D58C99A(iLocal_3260[0]))
										{
											if (UNK_0xDF1306B443CD3D15(iLocal_3260[0], 0))
											{
												if (UNK_0x0A059E0DB9253280(iLocal_3260[0]))
												{
													if (!func_262())
													{
														if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
														{
															if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																UNK_0x8B4C4CA774181102(3f, 10f, 4);
																iLocal_3553 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3559 == 0)
								{
									if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 82100f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 83500f)
									{
										if (UNK_0xC844350D5D58C99A(iLocal_3121[11]))
										{
											if (UNK_0x0A059E0DB9253280(iLocal_3121[11]))
											{
												if (!func_262())
												{
													if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
													{
														if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3559 = 1;
														}
													}
												}
											}
										}
										else if (UNK_0xC844350D5D58C99A(iLocal_3121[12]))
										{
											if (UNK_0x0A059E0DB9253280(iLocal_3121[12]))
											{
												if (!func_262())
												{
													if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
													{
														if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3559 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3562 == 0)
								{
									if ((UNK_0x9901AABAC4D4C590(bLocal_3258) > 101891f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 105000f) && UNK_0x0A059E0DB9253280(bLocal_3258))
									{
										if (!func_262())
										{
											if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
											{
												if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													UNK_0x8B4C4CA774181102(3f, 10f, 4);
													iLocal_3562 = 1;
												}
											}
										}
									}
								}
								if (((UNK_0x9901AABAC4D4C590(bLocal_3258) > 105500f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 119000f) && UNK_0x1C0640BA9A7327B3() > iLocal_3199 + 7000) && iLocal_3561 == 0)
								{
									if (!func_262())
									{
										if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3199 = UNK_0x1C0640BA9A7327B3();
												iLocal_3561 = 1;
											}
										}
									}
								}
								if (iLocal_3560 == 0 && iLocal_3561 == 1)
								{
									if (!func_262())
									{
										if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_3560 = 1;
											}
										}
									}
								}
								if (((UNK_0x9901AABAC4D4C590(bLocal_3258) > 105500f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 119000f) && UNK_0x1C0640BA9A7327B3() > iLocal_3199 + 7000) && iLocal_3560 == 1)
								{
									if (!func_262())
									{
										if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3199 = UNK_0x1C0640BA9A7327B3();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case 5:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3530 = 0;
					iLocal_3563 = 0;
					iLocal_3569 = 0;
					iLocal_3564 = 1;
					iLocal_3204 = UNK_0x1C0640BA9A7327B3();
					func_17(&uLocal_3578, 0, UNK_0x16F2683693E537C9(), "Michael", 0, 1);
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
					{
						func_17(&uLocal_3578, 2, bLocal_3222, "MOLLY", 0, 1);
					}
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3569 == 0)
					{
						UNK_0xCAB39E12D9493B73("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_3569 = 1;
					}
					if (iLocal_3564 == 1)
					{
						if (iLocal_3530 == 0)
						{
							if (!func_262())
							{
								if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
								{
									if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										UNK_0x8B4C4CA774181102(4f, 6f, 4);
										iLocal_3200 = UNK_0x1C0640BA9A7327B3();
										iLocal_3530 = 1;
										iLocal_3563 = 1;
										iLocal_3564 = 0;
									}
								}
							}
						}
						if (UNK_0x1C0640BA9A7327B3() > iLocal_3200 + 5000)
						{
							if (!func_262())
							{
								if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
								{
									if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										UNK_0x8B4C4CA774181102(4f, 6f, 4);
										iLocal_3200 = UNK_0x1C0640BA9A7327B3();
									}
								}
							}
						}
					}
					if (iLocal_3563 == 1 && UNK_0x1C0640BA9A7327B3() > iLocal_3204 + 4000)
					{
						if (!func_262())
						{
							if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									UNK_0x8B4C4CA774181102(4f, 6f, 4);
									iLocal_3204 = UNK_0x1C0640BA9A7327B3();
									iLocal_3564 = 1;
									iLocal_3563 = 0;
								}
							}
						}
					}
				}
			}
			break;
		case 6:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3531 = 0;
					iLocal_3532 = 0;
					iLocal_3533 = 0;
					iLocal_3565 = 0;
					iLocal_3566 = 0;
					func_17(&uLocal_3578, 0, UNK_0x16F2683693E537C9(), "Michael", 0, 1);
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
					{
						func_17(&uLocal_3578, 2, bLocal_3222, "MOLLY", 0, 1);
					}
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3531 == 0)
					{
						if (!func_262())
						{
							if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_3531 = 1;
								}
							}
						}
					}
					if (iLocal_3531 == 1 && iLocal_3533 == 0)
					{
						if (!func_262())
						{
							if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_3533 = 1;
								}
							}
						}
					}
					if (iLocal_3532 == 0)
					{
						if (UNK_0xC844350D5D58C99A(bLocal_3222))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
							{
								if (UNK_0x69DF961355195C3C(iLocal_3209))
								{
									if (UNK_0xA45992A6CE82FB43(iLocal_3209) > 0.65f && UNK_0xA45992A6CE82FB43(iLocal_3209) < 0.835f)
									{
										if (!func_262())
										{
											if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
											{
												if (func_263(&uLocal_3578, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													UNK_0x8B4C4CA774181102(8f, 8f, 4);
													iLocal_3532 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3565 == 0)
					{
						if (!UNK_0xC844350D5D58C99A(bLocal_3222))
						{
							if (!func_262())
							{
								if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
								{
									if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_3565 = 1;
									}
								}
							}
						}
					}
					if (iLocal_3565 == 1 && iLocal_3566 == 0)
					{
						if (!func_262())
						{
							if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_3566 = 1;
								}
							}
						}
					}
				}
			}
			break;
		case 8:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3567 = 0;
					iLocal_3205 = UNK_0x1C0640BA9A7327B3();
					func_17(&uLocal_3578, 0, UNK_0x16F2683693E537C9(), "Michael", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3567 == 0)
					{
						if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							bLocal_3257 = func_408(UNK_0x16F2683693E537C9(), joaat("COP"), 0, 0, 28);
							if (UNK_0xC844350D5D58C99A(bLocal_3257))
							{
								if (func_16(UNK_0x16F2683693E537C9(), bLocal_3257, 1) < 40f)
								{
									if (!func_262())
									{
										if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3567 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3567 == 1 && UNK_0x1C0640BA9A7327B3() > iLocal_3205 + 5000)
					{
						if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							bLocal_3257 = func_408(UNK_0x16F2683693E537C9(), joaat("COP"), 0, 0, 28);
							if (UNK_0xC844350D5D58C99A(bLocal_3257))
							{
								if (func_16(UNK_0x16F2683693E537C9(), bLocal_3257, 1) < 40f)
								{
									if (!func_262())
									{
										if (!UNK_0xD17F06053799A7CA() || !UNK_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3205 = UNK_0x1C0640BA9A7327B3();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_408(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar17;

	iVar17 = 0;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		UNK_0x263615A674FCA6E9(bParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (UNK_0xC844350D5D58C99A(iVar0[iVar17]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(iVar0[iVar17]))
				{
					if (UNK_0xD09DF7101876AFB8(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (UNK_0x0A059E0DB9253280(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2) <= (iVar0 - 1)
						{
							if (UNK_0xC844350D5D58C99A(iVar0[(iVar17 + iParam2)]))
							{
								if (!UNK_0xEB6A8945D1AC98A1(iVar0[(iVar17 + iParam2)]))
								{
									if (UNK_0xD09DF7101876AFB8(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (UNK_0x0A059E0DB9253280(iVar0[(iVar17 + iParam2)]))
											{
												return iVar0[(iVar17 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar17 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

bool func_409()
{
	if (Global_20805 == 0)
	{
		return true;
	}
	return false;
}

int func_410(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_261(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_250(sParam3, iParam4, bParam7);
}

void func_411()
{
	if (((iLocal_3180 == 4 || iLocal_3180 == 5) || iLocal_3180 == 8) || iLocal_3180 == 6)
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (func_412(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 2, 200, 0))
			{
				UNK_0x3245169DF7F47EAF(UNK_0xD803B885F5E47A62());
				UNK_0x1E69CBC4A01168BD(UNK_0xD803B885F5E47A62());
			}
		}
	}
	if (iLocal_3510 == 0)
	{
		if (iLocal_3180 == 4)
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (func_412(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 2, 200, 0))
				{
					UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 3, 0);
					UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
					iLocal_3510 = 1;
				}
			}
		}
	}
}

bool func_412(vector3 vParam0, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0[15];
	vector3 vVar46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;

	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9 /*3*/].f_2 = (vVar46[9 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[10 /*3*/].f_2 = (vVar46[10 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[11 /*3*/].f_2 = (vVar46[11 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[12 /*3*/].f_2 = (vVar46[12 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[13 /*3*/].f_2 = (vVar46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (UNK_0x0399732A9EBC368E(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], iVar110, true))
		{
			return true;
		}
		iVar109++;
	}
	return false;
}

void func_413()
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bLocal_3259 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		}
	}
}

void func_414()
{
	if (iLocal_3351 == 1)
	{
		if (iLocal_3180 == 4)
		{
			if (iLocal_3182 > 1 && iLocal_3475 == 0)
			{
				if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, 0, true, 0))
				{
					func_236("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 6)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3283))
			{
				if (UNK_0xE4EDC4B0E92C078B(iLocal_3288))
				{
					if (func_16(UNK_0x16F2683693E537C9(), bLocal_3283, 1) > 100f)
					{
						func_236("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (iLocal_3182 == 2)
			{
				if (UNK_0x1C0640BA9A7327B3() > iLocal_3194 + 7000 && iLocal_3508 == 0)
				{
					func_236("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3258))
			{
				if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
				{
					if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
					{
						if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 62000f && UNK_0x9901AABAC4D4C590(bLocal_3258) < 77000f)
						{
							if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), -1219f, -2570f, 13f, 1) < 210f)
							{
								if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
								{
									if (UNK_0xD9522BA9E27E1349(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) < 200f && UNK_0xD9522BA9E27E1349(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)) > 125f)
									{
										if (iLocal_3507 == 0)
										{
											iLocal_3197 = UNK_0x1C0640BA9A7327B3();
											iLocal_3507 = 1;
										}
										if (iLocal_3507 == 1 && UNK_0x1C0640BA9A7327B3() > iLocal_3197 + 4000)
										{
											func_236("TRV4_FAIL1");
										}
									}
									else if (iLocal_3507 == 1)
									{
										iLocal_3507 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3180 == 5 || iLocal_3180 == 6)
		{
			if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), -928.9f, -2935f, 13f, 1) < 5f && !UNK_0x93B62D155C014521(UNK_0xD803B885F5E47A62()))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4)
		{
			if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()) || UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
			{
				if (func_412(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 2, 200, 0))
				{
					func_236("TRV4_FAIL2");
				}
				else if (!func_211("TRV4_HELP3"))
				{
					func_417("TRV4_HELP3");
				}
			}
			else if (func_211("TRV4_HELP3"))
			{
				UNK_0xA37A90C62806D848(1);
			}
		}
		if (UNK_0xC844350D5D58C99A(bLocal_3258))
		{
			if (!UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				if (UNK_0xC844350D5D58C99A(bLocal_3222))
				{
					if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
					{
						UNK_0xE121AE1BBF90E186(bLocal_3222, false);
						UNK_0xD458AC1C1D29C3B4(bLocal_3222, false, false);
					}
				}
			}
		}
		if (iLocal_3360 == 1)
		{
			if (UNK_0xC844350D5D58C99A(bLocal_3222))
			{
				if (UNK_0xEB6A8945D1AC98A1(bLocal_3222))
				{
					func_236("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (iLocal_3352 == 1)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
				{
					if (func_13(UNK_0x16F2683693E537C9(), bLocal_3222) > 300f)
					{
						if (iLocal_3436 == 1)
						{
							UNK_0x790015DC92C918E2();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_3436 = 0;
						}
					}
					else if (iLocal_3436 == 0)
					{
						iLocal_3436 = 1;
					}
					if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
					{
						if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
						{
							if (UNK_0x9901AABAC4D4C590(bLocal_3258) < 40000f)
							{
								if (func_13(UNK_0x16F2683693E537C9(), bLocal_3222) > 400f)
								{
									func_236("TRV4_FAIL1");
								}
							}
							else if (func_13(UNK_0x16F2683693E537C9(), bLocal_3222) > 350f)
							{
								func_236("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_3182 == 3)
			{
				if (iLocal_3476 == 1)
				{
					if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), -934.4f, -2927.2f, 13.2f, 1) > 25f || UNK_0x1C0640BA9A7327B3() > iLocal_3195 + 12000)
					{
						func_236("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4)
		{
			if (UNK_0x7EBBF23C1CD917AA(UNK_0x16F2683693E537C9()))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 4)
		{
			if (UNK_0xDF1306B443CD3D15(bLocal_3258, 0))
			{
				if (UNK_0x20D6474D5F4B9FC6(bLocal_3258))
				{
					if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 111509f)
					{
						if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, 0, true, 0))
						{
							func_236("TRV4_FAIL1");
						}
					}
					if (UNK_0x9901AABAC4D4C590(bLocal_3258) > 122000f)
					{
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
						{
							if (UNK_0x377BE9A1BF38C7CE(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
							{
								if (iLocal_3509 == 0)
								{
									iLocal_3198 = UNK_0x1C0640BA9A7327B3();
									iLocal_3509 = 1;
								}
								if (iLocal_3509 == 1)
								{
									if (UNK_0x1C0640BA9A7327B3() > iLocal_3198 + 4000)
									{
										func_236("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_3509 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_3180 == 2)
		{
			if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, 0, true, 0))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (iLocal_3437 == 1)
		{
			if (func_416())
			{
				func_415();
			}
		}
	}
}

void func_415()
{
	func_423(UNK_0x16F2683693E537C9(), 0);
	func_419();
}

bool func_416()
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

void func_417(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_418(bool bParam0)
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

void func_419()
{
	func_425(24, 1);
	UNK_0x7352ACF3368DF65F("PoliceScannerDisabled", 0);
	UNK_0xE342F209E49C5314(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, true, 1);
	func_420();
	func_210(&uLocal_28, 0, 0);
	UNK_0xB975E4541DDAB1F5(0);
	UNK_0x5C2EBB66AD2EA5FF(0);
	UNK_0x8C26F31DFF77D124();
	if (UNK_0xC844350D5D58C99A(bLocal_3271))
	{
		UNK_0xA954465BA6FDEFE2(&bLocal_3271);
	}
	func_418(0);
	if (UNK_0x49083FDB78AC0509(iLocal_3221))
	{
		UNK_0xDDABC98CFF1A4C60(iLocal_3221);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3222))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_3222))
		{
			UNK_0xFADC0A217229F6B5(bLocal_3222, true);
		}
		UNK_0x6DAD7906B73F064D(&bLocal_3222);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3228))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_3228))
		{
			UNK_0xFADC0A217229F6B5(bLocal_3228, true);
		}
		UNK_0x6DAD7906B73F064D(&bLocal_3228);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3245))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_3245))
		{
			UNK_0xFADC0A217229F6B5(bLocal_3245, true);
		}
		UNK_0x6DAD7906B73F064D(&bLocal_3245);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3246))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_3246))
		{
			UNK_0xFADC0A217229F6B5(bLocal_3246, true);
		}
		UNK_0x6DAD7906B73F064D(&bLocal_3246);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3247))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_3247))
		{
			UNK_0xFADC0A217229F6B5(bLocal_3247, true);
		}
		UNK_0x6DAD7906B73F064D(&bLocal_3247);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3248))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_3248))
		{
			UNK_0xFADC0A217229F6B5(bLocal_3248, true);
		}
		UNK_0x6DAD7906B73F064D(&bLocal_3248);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3249))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_3249))
		{
			UNK_0xFADC0A217229F6B5(bLocal_3249, true);
		}
		UNK_0x6DAD7906B73F064D(&bLocal_3249);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3250))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bLocal_3250))
		{
			UNK_0xFADC0A217229F6B5(bLocal_3250, true);
		}
		UNK_0x6DAD7906B73F064D(&bLocal_3250);
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3223[0]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3223[0]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3223[0], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3223[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3223[1]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3223[1]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3223[1], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3223[1]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3223[2]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3223[2]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3223[2], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3223[2]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3223[3]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3223[3]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3223[3], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3223[3]));
	}
	if (UNK_0xC844350D5D58C99A(uLocal_3229[0]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(uLocal_3229[0]))
		{
			UNK_0xFADC0A217229F6B5(uLocal_3229[0], true);
		}
		UNK_0x6DAD7906B73F064D(&(uLocal_3229[0]));
	}
	if (UNK_0xC844350D5D58C99A(uLocal_3229[1]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(uLocal_3229[1]))
		{
			UNK_0xFADC0A217229F6B5(uLocal_3229[1], true);
		}
		UNK_0x6DAD7906B73F064D(&(uLocal_3229[1]));
	}
	if (UNK_0xC844350D5D58C99A(uLocal_3229[2]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(uLocal_3229[2]))
		{
			UNK_0xFADC0A217229F6B5(uLocal_3229[2], true);
		}
		UNK_0x6DAD7906B73F064D(&(uLocal_3229[2]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[0]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[0]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3233[0], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3233[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[1]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[1]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3233[1], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3233[1]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[2]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[2]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3233[2], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3233[2]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[3]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[3]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3233[3], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3233[3]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[4]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[4]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3233[4], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3233[4]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[5]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[5]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3233[5], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3233[5]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[6]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[6]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3233[6], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3233[6]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[7]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[7]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3233[7], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3233[7]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[8]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[8]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3233[8], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3233[8]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[9]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[9]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3233[9], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3233[9]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3233[10]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3233[10]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3233[10], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3233[10]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3251[0]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3251[0]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3251[0], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3251[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3254[0]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3254[0]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3254[0], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3254[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3254[1]))
	{
		if (!UNK_0xEB6A8945D1AC98A1(iLocal_3254[1]))
		{
			UNK_0xFADC0A217229F6B5(iLocal_3254[1], true);
		}
		UNK_0x6DAD7906B73F064D(&(iLocal_3254[1]));
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3258))
	{
		UNK_0x046C362CF15F1935(&bLocal_3258);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3259))
	{
		if (UNK_0x9C77D2D0559097F0(bLocal_3259, 0))
		{
			UNK_0x046C362CF15F1935(&bLocal_3259);
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3264))
	{
		UNK_0x046C362CF15F1935(&bLocal_3264);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3265))
	{
		UNK_0x046C362CF15F1935(&bLocal_3265);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3266))
	{
		UNK_0x046C362CF15F1935(&bLocal_3266);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3267))
	{
		UNK_0x046C362CF15F1935(&bLocal_3267);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3271))
	{
		UNK_0x046C362CF15F1935(&bLocal_3271);
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3275))
	{
		if (UNK_0x9C77D2D0559097F0(bLocal_3275, 0))
		{
			UNK_0x046C362CF15F1935(&bLocal_3275);
		}
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3279[0]))
	{
		UNK_0x046C362CF15F1935(&(iLocal_3279[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3279[1]))
	{
		UNK_0x046C362CF15F1935(&(iLocal_3279[1]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3260[0]))
	{
		UNK_0x046C362CF15F1935(&(iLocal_3260[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3260[1]))
	{
		UNK_0x046C362CF15F1935(&(iLocal_3260[1]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3279[0]))
	{
		UNK_0x046C362CF15F1935(&(iLocal_3279[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3279[1]))
	{
		UNK_0x046C362CF15F1935(&(iLocal_3279[1]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3268[0]))
	{
		UNK_0x046C362CF15F1935(&(iLocal_3268[0]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3268[1]))
	{
		UNK_0x046C362CF15F1935(&(iLocal_3268[1]));
	}
	if (UNK_0xC844350D5D58C99A(iLocal_3272[0]))
	{
		UNK_0x046C362CF15F1935(&(iLocal_3272[0]));
	}
	if (UNK_0xC844350D5D58C99A(bLocal_3263))
	{
		UNK_0x046C362CF15F1935(&bLocal_3263);
	}
	UNK_0x38DC636F3D2D2FA8("TRV4_START");
	UNK_0x38DC636F3D2D2FA8("TRV4_GAMEPLAY_START");
	UNK_0x38DC636F3D2D2FA8("TRV4_START_CS_SKIP");
	UNK_0x38DC636F3D2D2FA8("TRV4_START_RT");
	UNK_0x38DC636F3D2D2FA8("TRV4_FOOT_CHASE_RT");
	UNK_0x38DC636F3D2D2FA8("TRV4_EVADE_RT");
	UNK_0x38DC636F3D2D2FA8("TRV4_CAR_ENTERED");
	UNK_0x38DC636F3D2D2FA8("TRV4_AIRPORT_ENTERED");
	UNK_0x38DC636F3D2D2FA8("TRV4_CHASE");
	UNK_0x38DC636F3D2D2FA8("TRV4_JET_ENTERED");
	if (UNK_0x76395FF5E8D5E643(iLocal_3220))
	{
		UNK_0xA4A8625CC710BC1F(iLocal_3220);
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_3763))
	{
		UNK_0xB2C7809F92540947(iLocal_3763, 0);
	}
	UNK_0x053C926E5E341906();
	UNK_0xE17FDF9E3068281B(&iLocal_3293);
	UNK_0xF5A41F3D3B38EFE3("digitalOverlay");
	UNK_0xF858EFDE1871B5F2(-617f, -2274f, 0f, -406.01f, -2044f, 15f, true, 1);
	UNK_0xF858EFDE1871B5F2(-482f, -2118f, 6f, -1072f, -2724f, 17f, true, 1);
	if (UNK_0x1C2E18E9C63BEB77("Trev4_5"))
	{
		UNK_0xA19A5ADE229B4734("Trev4_5", 0, 0.5f, 1f);
	}
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	UNK_0x9A82EEAF6CA12AEE(1f);
	UNK_0xBFE31971E49FA500(1);
	UNK_0x8BCB70EB440DED83(1);
	UNK_0x8D17794CE3273D70("missheist_agency3aig_lift_waitped_a");
	func_293(0);
	UNK_0xF3039DE1FDB4F6FD(1);
	if (func_19(2))
	{
		func_18(2, 0);
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_420()
{
	int iVar0;

	Global_61541 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_61542[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_421()
{
	int iVar0;

	if (UNK_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_432(0))
	{
		if (!func_422())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_239(iVar0))
				{
					return;
				}
				UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_244();
		}
	}
}

bool func_422()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

void func_423(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xCAE036C45E7FC720(bParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (!func_424(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_98781 > 0)
	{
		Global_105187.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_102203.f_21[iParam1] = iVar0;
	}
}

bool func_424(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (Global_98781 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_105187.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_105187.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_105187.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_105187.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_102203.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_102203.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_102203.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_102203.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_425(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = "NULL";
	iVar1 = 0;
	bVar0 = func_429(iParam0, &iVar1);
	if (!UNK_0x7F8A39872A07D2CE("NONE", bVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (UNK_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == iVar1)
			{
				func_428(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!UNK_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (func_426(iParam0))
			{
				func_428(iParam0, 0);
			}
		}
		UNK_0xD65FA6F2BAD953C8(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

bool func_426(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_427(iParam0) };
	if (Var0.f_1 != -1 && UNK_0xEAE0D21A50E6C7F4(Global_37208[Var0.f_1], Var0))
	{
		return true;
	}
	return false;
}

struct<2> func_427(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	iVar0 = iParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 7)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_428(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_427(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_37208[Var0.f_1]), Var0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_37208[Var0.f_1]), Var0);
	}
}

char* func_429(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_430(iParam0) };
	*iParam1 = UNK_0x0D1736C2E221BCEA(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_430(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		case 25:
			vVar5 = { func_431(1, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		case 26:
			vVar5 = { func_431(2, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		case 27:
			vVar5 = { func_431(3, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		case 28:
			vVar5 = { func_431(4, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		case 29:
			vVar5 = { func_431(5, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		case 30:
			vVar5 = { func_431(6, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		case 31:
			vVar5 = { func_431(7, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		case 32:
			Var0 = { Global_1049922[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		case 33:
			vVar5 = { func_431(35, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		case 34:
			vVar5 = { func_431(36, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		case 35:
			vVar5 = { func_431(37, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		case 36:
			vVar5 = { func_431(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		case 37:
			vVar5 = { func_431(39, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		case 38:
			vVar5 = { func_431(40, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		case 39:
			vVar5 = { func_431(41, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		case 40:
			vVar5 = { func_431(42, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		case 41:
			vVar5 = { func_431(43, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 3706
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 3744
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 3782
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 3820
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 3858
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 3896
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 3934
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 3972
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4010
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4048
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4086
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4124
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4162
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4200
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4238
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4276
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4314
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4352
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4390
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4428
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4466
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4504
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4542
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4584
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4626
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4668
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4710
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4752
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4794
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4836
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4878
			vVar5 = { func_431(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4920
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 4962
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5004
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5046
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5088
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5130
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5172
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5214
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5256
			vVar5 = { func_431(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5298
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5340
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5382
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5424
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5466
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5508
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5550
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5592
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5634
			vVar5 = { func_431(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5676
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5718
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5760
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5802
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5844
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5886
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5928
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 5970
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6012
			vVar5 = { func_431(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6054
			vVar5 = { func_431(91, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6096
			vVar5 = { func_431(97, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6138
			vVar5 = { func_431(103, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6180
			vVar5 = { func_431(104, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6222
			vVar5 = { func_431(105, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6264
			vVar5 = { func_431(106, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6306
			vVar5 = { func_431(107, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6348
			vVar5 = { func_431(108, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6390
			vVar5 = { func_431(109, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6432
			vVar5 = { func_431(110, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6474
			vVar5 = { func_431(111, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6516
			vVar5 = { func_431(112, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6558
			vVar5 = { func_431(113, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6600
			vVar5 = { func_431(114, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6642
			vVar5 = { func_431(103, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6684
			vVar5 = { func_431(106, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6726
			vVar5 = { func_431(109, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6768
			vVar5 = { func_431(112, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6810
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6848
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6886
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6924
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 6962
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7000
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7038
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7076
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7114
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7152
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7190
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7228
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7266
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7304
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7342
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7380
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7418
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7456
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7494
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7532
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7570
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7608
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7646
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7684
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7722
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7760
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7798
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7836
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7874
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7912
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7950
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 7988
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8026
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8064
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8102
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8140
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8178
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8216
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8254
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8292
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8330
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8368
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8406
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8444
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8482
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8520
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8558
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8596
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8634
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8672
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8710
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8748
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8786
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8824
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8862
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8900
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8938
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 8976
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9014
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9052
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9090
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9128
			Jump @9780; //curOff = 9131
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9169
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9207
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9245
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9283
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9321
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9359
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9397
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9435
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9473
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9511
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9549
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9587
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9625
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9663
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9701
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			Jump @9780; //curOff = 9739
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			return Var0;
		}

struct<6> func_431(int iParam0, bool bParam1)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

bool func_432(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

