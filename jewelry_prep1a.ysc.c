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
	struct<110> Local_28[4];
	struct<94> Local_469 = { 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = -1;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = -1;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	struct<8> Local_579[5];
	int iLocal_620[1] = { 0 };
	char cLocal_622[32] = "";
	char cLocal_626[64] = "";
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	vector3 vLocal_642 = { 0f, 0f, 0f };
	vector3 vLocal_645[24] = "";
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	bool bLocal_653 = false;
	bool bLocal_654 = false;
	int iLocal_655 = 0;
	bool bLocal_656 = false;
	int iLocal_657 = 0;
	var uLocal_658 = 30;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 10;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 10;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 20;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 20;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
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
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 30;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 5;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 7;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 5;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 3;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 16;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 10;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 5;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 5;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 3;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 1092616192;
	var uLocal_1651 = 1101004800;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 3;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	struct<8> Local_1668[5];
	struct<32> Local_1709[20];
	char cLocal_2350[32] = "";
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 16;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	bool bLocal_2523 = false;
	int iLocal_2524 = 0;
	bool bLocal_2525 = false;
	int iLocal_2526 = 0;
	int iLocal_2527 = 0;
	int iLocal_2528 = 0;
	int iLocal_2529 = 0;
	char cLocal_2530[16] = "";
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	char cLocal_2534[16] = "";
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	int iLocal_2538 = 0;
	float fLocal_2539 = 0f;
	bool bLocal_2540 = false;
	bool bLocal_2541 = false;
	bool bLocal_2542 = false;
	bool bLocal_2543 = false;
	bool bLocal_2544 = false;
	int iLocal_2545 = 0;
	char cLocal_2546[16] = "";
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	int iLocal_2550 = 0;
	bool bLocal_2551 = false;
	bool bLocal_2552 = false;
	bool bLocal_2553 = false;
	int iLocal_2554 = 0;
	int iLocal_2555 = 0;
	int iLocal_2556 = 0;
	char cLocal_2557[16] = "";
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	char cLocal_2561[16] = "";
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	bool bLocal_2565 = false;
	bool bLocal_2566 = false;
	bool bLocal_2567 = false;
	bool bLocal_2568 = false;
	bool bLocal_2569 = false;
	bool bLocal_2570 = false;
	int iLocal_2571 = 0;
	bool bLocal_2572 = false;
	int iLocal_2573 = 0;
	int iLocal_2574 = 0;
	bool bLocal_2575 = false;
	bool bLocal_2576 = false;
	bool bLocal_2577 = false;
	int iLocal_2578 = 0;
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
	StringCopy(&cLocal_622, "JHP1ADS", 16);
	StringCopy(&cLocal_626, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	vLocal_642 = { 154.9478f, -3092.523f, 4.911984f };
	StringCopy(&cLocal_645, "jhp1a_sec_arrive", 24);
	iLocal_651 = 0;
	iLocal_657 = 6;
	iLocal_2524 = -1;
	iLocal_2528 = -1;
	iLocal_2529 = -1;
	StringCopy(&cLocal_2530, "", 16);
	StringCopy(&cLocal_2534, "", 16);
	fLocal_2539 = 1E+08f;
	bLocal_2542 = true;
	iLocal_2545 = -1;
	StringCopy(&cLocal_2546, "", 16);
	iLocal_2550 = -1;
	bLocal_2551 = true;
	iLocal_2555 = -1;
	iLocal_2556 = -1;
	StringCopy(&cLocal_2557, "", 16);
	StringCopy(&cLocal_2561, "", 16);
	bLocal_2565 = true;
	bLocal_2567 = true;
	iLocal_2571 = -1;
	iLocal_2573 = -1;
	iLocal_2574 = -1;
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		func_289(6);
	}
	UNK_0x7798376279BB5369(1);
	func_282();
	func_241();
	while (true)
	{
		UNK_0x1A6DFFFEEC27BF4F("M_JewelStoreJobPrep1A", 0);
		if (bLocal_656)
		{
			func_239();
		}
		func_236(&uLocal_658);
		func_187();
		if (!bLocal_654)
		{
			func_185();
			func_174();
			func_173(&Local_1668);
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	switch (iLocal_651)
	{
		case 0:
			if (func_25())
			{
				func_24(1);
			}
			break;
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	int iVar0;

	if ((iLocal_2574 != -1 && UNK_0xC844350D5D58C99A(Local_579[iLocal_2574 /*8*/])) && UNK_0xDF1306B443CD3D15(Local_579[iLocal_2574 /*8*/], 0))
	{
		iVar0 = UNK_0x7F6DC62EA9922664(Local_579[iLocal_2574 /*8*/]);
		func_23(Local_579[iLocal_2574 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_95169 = 1000;
	}
	else
	{
		Global_95169 = iVar0;
	}
	if (!func_22(&(Local_1668[3 /*8*/])))
	{
		func_21(699);
	}
	func_8(0);
	if (func_7(88))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_3(bool bParam0, int iParam1)
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
		if ((func_6(0) && Global_76868.f_1 == 1) && func_5(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_6(0))
	{
		iVar0 = func_4();
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

int func_4()
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

bool func_5(int iParam0)
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

bool func_6(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

bool func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	return Global_111638.f_9080.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	int iVar1;

	UNK_0x790015DC92C918E2();
	UNK_0xA37A90C62806D848(1);
	if (bParam0)
	{
		UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
		UNK_0xC92DB9682A650680("JHP1A_FAIL");
	}
	else
	{
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x0FFE8B6DB75A4C39(UNK_0xD803B885F5E47A62(), 1f);
	}
	UNK_0x34D79252800B23FF(5);
	UNK_0xCE1A2E36474A9D6F(UNK_0xD803B885F5E47A62(), 1);
	UNK_0x060F249A9A3E3F4E(true);
	func_18(&Local_1668);
	func_13(&uLocal_1643, 1, 0);
	bLocal_2523 = false;
	iLocal_2524 = -1;
	bLocal_2568 = false;
	bLocal_2569 = false;
	bLocal_2570 = false;
	iLocal_2571 = -1;
	iLocal_2573 = -1;
	iLocal_2574 = -1;
	bLocal_2575 = false;
	bLocal_2576 = false;
	bLocal_2572 = false;
	if (bParam0)
	{
		func_11();
		UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
		UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
		UNK_0x745CE398A4B0A3C6(158.78f, -3100.44f, 6.0019f, 100f, 0);
		UNK_0x0002EE0323037BB6(158.78f, -3100.44f, 6.0019f, 100f, 0);
		UNK_0x75CFD6AD66ADFDD1(158.78f, -3100.44f, 6.0019f, 100f, 0);
		UNK_0x28F5E4DA506AC0CA(158.78f, -3100.44f, 6.0019f, 100f, 0, 0, 0, 0, false, 0);
		UNK_0x679C321F8CAA2CFA(158.78f, -3100.44f, 6.0019f, 100f, 0);
		UNK_0x58B5D6A0F1D7754D(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_620)
	{
		if (UNK_0xC844350D5D58C99A(iLocal_620[iVar0]))
		{
			if (bParam0)
			{
				UNK_0xF690C84DADBB3551(&(iLocal_620[iVar0]));
			}
			else
			{
				UNK_0xEEEE2E5FA6F78DF0(&(iLocal_620[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		func_10(&(Local_28[iVar0 /*110*/]), bParam0);
		iVar0++;
	}
	func_10(&Local_469, bParam0);
	iVar0 = 0;
	while (iVar0 < Local_579)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					UNK_0xEBA53F35D0085654(&(Local_579[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					UNK_0x6DAD7906B73F064D(&(Local_579[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				UNK_0xA954465BA6FDEFE2(&(Local_579[iVar0 /*8*/]));
			}
			else
			{
				UNK_0x046C362CF15F1935(&(Local_579[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (UNK_0xEA16CBEF43A5CA3C(&cLocal_626))
	{
		UNK_0x7B35981153AECDBE(&cLocal_626, bParam0);
	}
	if (iLocal_2578 != 0)
	{
		UNK_0x2952D66A502EA873(iLocal_2578, 0);
	}
	func_9();
}

void func_9()
{
	Global_94599 = 0;
}

void func_10(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (bParam1)
		{
			UNK_0xEBA53F35D0085654(bParam0);
		}
		else
		{
			UNK_0x6DAD7906B73F064D(bParam0);
		}
	}
	bParam0->f_5 = 0;
	bParam0->f_6 = -1;
	bParam0->f_7 = -1;
	bParam0->f_39 = 0;
	bParam0->f_41 = 0;
	bParam0->f_93 = 1;
	bParam0->f_102 = 0;
	bParam0->f_47 = 0;
	bParam0->f_46 = 0;
	bParam0->f_48 = 0;
	bParam0->f_37 = -1;
	bParam0->f_103 = -1;
	bParam0->f_40 = 0;
	bParam0->f_92 = -1;
	bParam0->f_43 = { 0f, 0f, 0f };
	bParam0->f_88 = { 0f, 0f, 0f };
	bParam0->f_91 = 0;
	if (UNK_0xC844350D5D58C99A(bParam0->f_105))
	{
		if (UNK_0xD59B17D2DFF98E26(bParam0->f_105))
		{
			UNK_0x15AFB6CBDE990FB6(bParam0->f_105, 1, true);
		}
		if (bParam1)
		{
			UNK_0xF690C84DADBB3551(&(bParam0->f_105));
		}
		else
		{
			UNK_0xEEEE2E5FA6F78DF0(&(bParam0->f_105));
		}
	}
	bParam0->f_106 = -1;
	bParam0->f_107 = 0;
	bParam0->f_109 = 0;
	bParam0->f_104 = 0;
}

void func_11()
{
	Global_19671 = 0;
	func_12();
}

void func_12()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_13(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_17(bParam0);
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
		{
			UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
		}
		func_16(bVar0, bParam0);
		func_15(bVar0, bParam0);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (bVar0 != 8)
		{
			UNK_0x0674E58A79778E99(&(bParam0->f_13), bVar0);
			UNK_0x0674E58A79778E99(&(bParam0->f_14), bVar0);
		}
		bVar0++;
	}
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x142CC44DB769B57E(bParam0);
	}
	bParam0->f_6 = 0;
	bParam0->f_12 = 0;
	bParam0->f_15 = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
		{
			UNK_0xA245D14CC59CDD36(bParam0->f_17[bVar0], 1);
			UNK_0x7D732AB707BE9152(bParam0->f_17[bVar0], 1);
			if (bParam2)
			{
				UNK_0x4E885A246A9D983A(bParam0->f_17[bVar0], 32, true);
				UNK_0x4E885A246A9D983A(bParam0->f_17[bVar0], 305, false);
			}
			UNK_0x4E885A246A9D983A(bParam0->f_17[bVar0], 268, false);
			if (bParam1)
			{
				if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_14()) && bParam0->f_17[bVar0] != UNK_0x16F2683693E537C9())
				{
					UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 29))
			{
				UNK_0xD5EF6A937E06E46F(bParam0->f_17[bVar0], 0, -1, 0);
			}
			bParam0->f_17[bVar0] = 0;
		}
		bVar0++;
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0xA245D14CC59CDD36(UNK_0x16F2683693E537C9(), 1);
		UNK_0x7D732AB707BE9152(UNK_0x16F2683693E537C9(), 1);
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (bParam2)
		{
			UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, true);
		}
	}
	bParam0->f_21 = 0;
}

int func_14()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

void func_15(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 17);
			break;
		case 1:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 18);
			break;
		case 2:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 19);
			break;
	}
}

void func_16(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 14);
			break;
		case 1:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 15);
			break;
		case 2:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 16);
			break;
	}
}

void func_17(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
	{
		UNK_0x142CC44DB769B57E(&(bParam0->f_5));
	}
}

void func_18(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_19(var uParam0)
{
	if (!func_20(uParam0))
	{
		*uParam0 = 0;
	}
}

bool func_20(var uParam0)
{
	if (*uParam0 == 0)
	{
		return true;
	}
	return false;
}

void func_21(int iParam0)
{
	bool bVar0;
	int iVar1;

	Global_61513 = 0;
	if (!Global_61737[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_73607)
	{
		if (Global_73608[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_73608[iVar1 /*9*/].f_1 = 1;
			Global_73608[iVar1 /*9*/].f_2 = 0f;
			if (Global_73608[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_22(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return true;
	}
	return false;
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;

	Global_61525 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (iParam1 == -1 || Global_73608[iVar0 /*9*/] == iParam1)
		{
			if (Global_73608[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_73608[iVar0 /*9*/].f_6 = iParam0;
				Global_73608[iVar0 /*9*/].f_7 = 1;
				Global_73608[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_652 = 0;
		bLocal_653 = false;
		iLocal_651 = iParam0;
	}
}

bool func_25()
{
	bool bVar0;

	if (!bLocal_653)
	{
		func_172(&uLocal_658, "SCRIPT\JWL_HA_RAID_STORE");
		func_171(&uLocal_658, joaat("S_M_M_SECURITY_01"));
		func_170(&(Local_1668[1 /*8*/]), 0, 0, 1);
		func_170(&(Local_1668[0 /*8*/]), 0, 0, 1);
		func_170(&(Local_1668[4 /*8*/]), 0, 0, 1);
		func_111(0f, 0f, 0f, 0f, 1, func_165());
		Global_95169 = 1000;
		UNK_0x51B096AAC60548C1(0.1f);
		func_110("JHP1A_STEAL_BSV", 7500, 1);
		bLocal_653 = true;
	}
	if (bLocal_653)
	{
		switch (iLocal_652)
		{
			case 0:
				if (func_105(1) == 0)
				{
					func_13(&uLocal_1643, 1, 0);
					func_23(0, -1);
					func_104(0, -1);
				}
				else if ((func_103() && UNK_0xC844350D5D58C99A(Local_579[func_102() /*8*/])) && UNK_0xDF1306B443CD3D15(Local_579[func_102() /*8*/], 0))
				{
					UNK_0x7DE464FD26F7E7E7(0.5f);
					if (iLocal_2574 != func_102())
					{
						UNK_0x8B4C4CA774181102(5f, 10f, 4);
						func_23(Local_579[func_102() /*8*/], -1);
						func_104(Local_579[func_102() /*8*/], -1);
						iLocal_2574 = func_102();
					}
					if (func_100(&uLocal_1643, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_579[func_102() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_652++;
					}
				}
				else if (func_99())
				{
					UNK_0x7DE464FD26F7E7E7(0.5f);
					func_55(&uLocal_1643, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, bLocal_2575, "", "", "", 1, 0, 1, -1);
					if (UNK_0x3D1053F9EB43B7AD(Local_579[func_54() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, true, 0))
					{
						iLocal_652++;
					}
				}
				else
				{
					func_17(&uLocal_1643);
					func_23(0, -1);
					func_104(0, -1);
				}
				break;
			case 1:
				if (func_103())
				{
					if (func_52(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 5f, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				else if (func_99())
				{
					if (func_52(bLocal_2575, 5f, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					if (func_7(88))
					{
						UNK_0x8B4C4CA774181102(5f, 10f, 4);
						UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), true);
						func_51(1);
						func_50(1, 0);
						iLocal_652 = 1000;
					}
					else
					{
						UNK_0x8B4C4CA774181102(5f, 10f, 4);
						iLocal_652++;
					}
					if (func_103())
					{
						UNK_0x05EC10F460C3A4AF(Local_579[iLocal_2574 /*8*/], 0);
					}
					else if (func_99())
					{
						UNK_0x05EC10F460C3A4AF(Local_579[func_54() /*8*/], 0);
						UNK_0xF3F7BF451A720FDF(Local_579[func_54() /*8*/], 1);
						UNK_0x4C3F954E2F66DAE2(Local_579[func_54() /*8*/]);
					}
					UNK_0x75CDA8644CD3B5F5(UNK_0x16F2683693E537C9(), 0, 0);
				}
				break;
			case 2:
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
				{
					return true;
				}
				break;
			case 1000:
				func_50(1, 0);
				if (!func_48())
				{
					func_46();
				}
				else
				{
					func_45(&uLocal_2358, 3, 0, "LESTER", 0, 1);
					if (func_28(&uLocal_2358, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_652++;
					}
				}
				break;
			case 1001:
				func_50(1, 0);
				if (func_27())
				{
					UNK_0x8B4C4CA774181102(5f, 10f, 4);
					iLocal_652++;
				}
				break;
			case 1002:
				func_50(1, 0);
				if (!func_27())
				{
					func_26();
					return true;
				}
				break;
		}
	}
	return false;
}

void func_26()
{
	int iVar0;

	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xAA6B3A4292417750(UNK_0x16F2683693E537C9(), false, false, false, false, false, false, 0, false);
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 157, true);
		UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96113[iVar0]))
		{
			if (!UNK_0x437347B10A200C4B(Global_96113[iVar0], 0))
			{
				UNK_0xAA6B3A4292417750(Global_96113[iVar0], false, false, false, false, false, false, 0, false);
				UNK_0xE121AE1BBF90E186(Global_96113[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_41431 != 0 && Global_41431 != 3) && Global_41431 != 2)
	{
		UNK_0x34D79252800B23FF(5);
		UNK_0x51B096AAC60548C1(1f);
	}
}

bool func_27()
{
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		return true;
	}
	return false;
}

int func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_44(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	if (iParam5 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	Global_2621441 = 0;
	return func_29(sParam3, iParam4, bParam8);
}

int func_29(char* sParam0, int iParam1, bool bParam2)
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
					func_43();
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
		if (func_42(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_41();
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
				func_39();
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
				if (func_38())
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
			if (func_37())
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
			func_36();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_35();
		func_30();
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
		func_43();
	}
	return 0;
}

void func_30()
{
	if (!func_31())
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

bool func_31()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_34())
	{
		return false;
	}
	if (func_32(UNK_0xD803B885F5E47A62()))
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

bool func_32(int iParam0)
{
	return func_33(iParam0, 20);
}

bool func_33(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_34()
{
	return -1;
}

void func_35()
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

void func_36()
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

bool func_37()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_38()
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

void func_39()
{
	if (func_40(14))
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
		Global_19486 = func_165();
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

bool func_40(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_41()
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

bool func_42(bool bParam0, int iParam1)
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

void func_43()
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

void func_44(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_45(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_46()
{
	Global_19671 = 0;
	func_47();
}

void func_47()
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

bool func_48()
{
	if (func_49())
	{
		return false;
	}
	if (UNK_0x04E6B3EAA8742BFA())
	{
		if (UNK_0xD17F06053799A7CA())
		{
			return false;
		}
	}
	return true;
}

bool func_49()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_50(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		UNK_0x38C3A68D7861DCFD(0, 21, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 25, 1);
	UNK_0x38C3A68D7861DCFD(0, 24, 1);
	UNK_0x38C3A68D7861DCFD(0, 257, 1);
	UNK_0x38C3A68D7861DCFD(0, 141, 1);
	UNK_0x38C3A68D7861DCFD(0, 140, 1);
	UNK_0x38C3A68D7861DCFD(0, 22, 1);
	UNK_0x38C3A68D7861DCFD(0, 44, 1);
	UNK_0x38C3A68D7861DCFD(0, 23, 1);
	UNK_0x38C3A68D7861DCFD(0, 47, 1);
	UNK_0x38C3A68D7861DCFD(0, 36, 1);
	if (bParam0)
	{
		UNK_0x38C3A68D7861DCFD(0, 37, 1);
	}
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		if (bParam1)
		{
			UNK_0xCAF7AE54F764D5AA(UNK_0x16F2683693E537C9(), 2f);
		}
		else
		{
			UNK_0xCAF7AE54F764D5AA(UNK_0x16F2683693E537C9(), 1f);
		}
		UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 102, true);
	}
	if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
	{
		UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
	}
}

void func_51(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0xAA6B3A4292417750(UNK_0x16F2683693E537C9(), true, true, true, true, true, false, 0, false);
		UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 157, false);
		UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), true);
		UNK_0x6E8BDA9057564534(UNK_0x16F2683693E537C9(), 0, 0);
		if (bParam0)
		{
			UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), false);
		}
		UNK_0xE731059548189243(UNK_0x16F2683693E537C9(), 0);
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
	}
	UNK_0x34D79252800B23FF(0);
	UNK_0x51B096AAC60548C1(0f);
}

bool func_52(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_53(bParam0);
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

void func_53(bool bParam0)
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

int func_54()
{
	int iVar0;

	if (func_99())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]) && UNK_0xDF1306B443CD3D15(Local_579[iVar0 /*8*/], 0))
			{
				if (UNK_0x6D18156F72BE0773(bLocal_2575, Local_579[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_55(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7, bool bParam8, char* sParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	return func_56(bParam0, vParam1, vParam4, func_98(), func_98(), iParam7, 5, 0, 0, 0, bParam8, sParam9, func_97(), func_97(), func_97(), func_97(), iParam10, 0, bParam12, bParam11, 0, bParam13, bParam14, bParam15, 0, 0, 0, 1, 1065353216 /* Float: 1f */);
}

int func_56(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10, bool bParam13, bool bParam14, bool bParam15, int iParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, bool bParam30, bool bParam31, bool bParam32, bool bParam33, bool bParam34, bool bParam35, bool bParam36)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	bParam0->f_17[0] = bParam15;
	bParam0->f_17[1] = iParam16;
	bParam0->f_17[2] = iParam17;
	bParam0->f_16 = bParam15;
	func_96(bParam0);
	func_95(bParam0);
	func_94();
	if (func_78(bParam0, bParam0->f_17[0], bParam0->f_17[1], bParam0->f_17[2], bParam20, bParam21, bParam22, bParam23, bParam0->f_8, bParam25, bParam18, 0, 0, bParam32, bParam33, bParam34, bParam14, bParam26))
	{
		func_77(bParam20);
		func_77(bParam21);
		func_77(bParam22);
		func_77(bParam23);
		if (UNK_0x0F1CCD77290EE12F())
		{
			bVar1 = false;
			if (UNK_0xDF1306B443CD3D15(bParam18, 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam18, 0))
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
					{
						UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 23))
					{
						UNK_0x0674E58A79778E99(&(bParam0->f_13), 23);
					}
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (bParam14 == 4 || bParam14 == 5)
			{
				if (func_75(bParam0, bParam29))
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
					{
						UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
					}
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_77(bParam24);
				func_77(bParam27);
				func_77("MORE_SEATS");
				if (bParam26 && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
					{
						UNK_0x142CC44DB769B57E(&(bParam0->f_5));
						func_77(bParam19);
					}
					if (UNK_0xE4EDC4B0E92C078B(*bParam0))
					{
						UNK_0x142CC44DB769B57E(bParam0);
					}
					if ((!func_72(bParam0, 1) && !func_71(bParam0)) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						if (bParam30)
						{
							func_70(bParam0, "LOSE_WANTED", 0);
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_68(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), false);
						UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
					}
				}
				else
				{
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						func_77("LOSE_WANTED");
						UNK_0x0674E58A79778E99(&(bParam0->f_13), false);
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), true);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, true))
					{
						if (!func_72(bParam0, 1))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_68(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
						}
					}
					if (!UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
					{
						if (UNK_0xE4EDC4B0E92C078B(*bParam0))
						{
							UNK_0x142CC44DB769B57E(bParam0);
						}
						bParam0->f_5 = func_67(vVar3, 0);
						if (!bParam31 == -1)
						{
							UNK_0xBC8E0A7390523199(bParam0->f_5, bParam31);
						}
						if (bParam35)
						{
							func_66(bParam0->f_5, bParam0);
						}
					}
					else if (!func_65(vVar3, UNK_0xAC14F6E4B17D7835(bParam0->f_5), 0.1f, 0))
					{
						UNK_0x2F9282246F89FFD1(bParam0->f_5, vVar3);
						if (bParam35)
						{
							func_66(bParam0->f_5, bParam0);
						}
					}
					if (!func_72(bParam0, 2))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 2))
						{
							func_70(bParam0, bParam19, 0);
							UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 2);
						}
					}
					if (bParam14 == 4 || bParam14 == 5)
					{
						if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 13))
						{
							bParam13 = false;
						}
					}
					bVar1 = false;
					bVar6 = false;
					iVar7 = 0;
					if ((bParam14 == 1 || bParam14 == 3) || bParam14 == 5)
					{
						bVar6 = true;
					}
					if (bParam14 == 2 || bParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (bParam14 == 4 || bParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, vParam4, bParam13, bVar6, iVar7);
						if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vParam7, vParam10, bParam36, 0, bVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, vParam4, bParam13, bVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar2]))
							{
								if (bParam14 == 4 || bParam14 == 5)
								{
									bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
									if (!UNK_0xC42A92762C58E1B9(bParam0->f_17[iVar2], bVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (bParam18 != 0)
								{
									if (!UNK_0xC42A92762C58E1B9(bParam0->f_17[iVar2], bParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[iVar2], func_14()) || !func_63(bParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_60(bParam0))
							{
								func_77(bParam19);
								func_77(bParam24);
								func_77(bParam20);
								func_77(bParam21);
								func_77(bParam22);
								func_77(bParam23);
								func_77("LOSE_WANTED");
								func_77("MORE_SEATS");
								func_77(bParam27);
								func_13(bParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (UNK_0xC844350D5D58C99A(bParam18))
			{
				if ((bParam26 && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) && (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 22)))
				{
					func_77(bParam24);
					func_77(bParam27);
					if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5) || UNK_0xE4EDC4B0E92C078B(*bParam0))
					{
						UNK_0x142CC44DB769B57E(&(bParam0->f_5));
						UNK_0x142CC44DB769B57E(bParam0);
						func_77(bParam19);
					}
					if ((!func_72(bParam0, 1) && !func_71(bParam0)) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						if (bParam30)
						{
							func_70(bParam0, "LOSE_WANTED", 0);
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_68(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), false);
						UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
					}
				}
				else
				{
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						func_77("LOSE_WANTED");
						UNK_0x0674E58A79778E99(&(bParam0->f_13), false);
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), true);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, true))
					{
						if (!func_72(bParam0, 1))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_68(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
						}
					}
					if (UNK_0xDF1306B443CD3D15(bParam18, 0))
					{
						if (!UNK_0xE4EDC4B0E92C078B(*bParam0))
						{
							if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
							{
								UNK_0x142CC44DB769B57E(&(bParam0->f_5));
								func_77(bParam19);
							}
							*bParam0 = func_57(bParam18, 0, 0);
							UNK_0x9D7CDDB4B55142AF(*bParam0, 2);
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
							{
								func_66(*bParam0, bParam0);
							}
						}
						if (!func_72(bParam0, 2))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 3))
							{
								func_70(bParam0, bParam24, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
								UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
							}
							else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
							{
								if (!UNK_0x2EBF5002C6B6A06C(bParam27))
								{
									if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
									{
										func_70(bParam0, bParam27, 0);
										UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
									}
								}
								else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
								{
									func_70(bParam0, bParam24, 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
								}
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 23))
								{
									if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
									{
										func_68(bParam0->f_17[0], "GET_IN_CAR", 3);
									}
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
				{
					UNK_0x142CC44DB769B57E(&(bParam0->f_5));
					func_77(bParam19);
				}
				if (bParam14 == 4 || bParam14 == 5)
				{
					if (bParam29 > 0)
					{
						if (!func_72(bParam0, 2))
						{
							if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 13))
								{
									bVar8 = false;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar2]))
										{
											bVar8++;
										}
										iVar2++;
									}
									iVar9 = UNK_0x09AC81E49EA267F7(false, bVar8);
									if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar9]))
									{
										func_68(bParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_70(bParam0, "MORE_SEATS", 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 13);
								}
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 3))
							{
								func_70(bParam0, bParam24, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
								UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
							{
								if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
								{
									func_70(bParam0, bParam27, 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_72(bParam0, 2))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 3))
						{
							func_70(bParam0, bParam24, 0);
							UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
							UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
						}
						else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
						{
							if (!UNK_0x2EBF5002C6B6A06C(bParam27))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
								{
									func_70(bParam0, bParam27, 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
								}
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
							{
								func_70(bParam0, bParam24, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
		{
			UNK_0x0674E58A79778E99(&(bParam0->f_13), false);
		}
		func_77(bParam19);
		func_77(bParam24);
		func_77(bParam27);
		func_77(bParam24);
		func_77("LOSE_WANTED");
		if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
		{
			UNK_0x142CC44DB769B57E(&(bParam0->f_5));
		}
		if (UNK_0xE4EDC4B0E92C078B(*bParam0))
		{
			UNK_0x142CC44DB769B57E(bParam0);
		}
	}
	UNK_0x0674E58A79778E99(&(bParam0->f_13), 11);
	UNK_0x0674E58A79778E99(&(bParam0->f_13), 12);
	return 0;
}

int func_57(bool bParam0, bool bParam1, bool bParam2)
{
	return func_58(bParam0, !bParam1, bParam2);
}

int func_58(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_59(UNK_0x8CD06866876216F2(), 1f, 1f));
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
		UNK_0x516E63E474722206(iVar0, func_59(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_59(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_59(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_60(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 12))
	{
		if (func_62(UNK_0x16F2683693E537C9()))
		{
			if (func_61(1, 0, 1) || UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 7))
			{
				return true;
			}
		}
	}
	else if (func_61(1, 0, 1) || UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 7))
	{
		return true;
	}
	return false;
}

bool func_61(bool bParam0, bool bParam1, bool bParam2)
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

bool func_62(bool bParam0)
{
	float fVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		fVar0 = UNK_0x9C66D99E63E8E24C(bParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_63(bool bParam0, bool bParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()) && bParam1)
		{
			if (func_64(UNK_0x16F2683693E537C9(), bParam0))
			{
				UNK_0x7C27693C5112825F(func_14(), 50f);
				return true;
			}
		}
		else if (UNK_0xBFDE4EE64C4BF2D6(bParam0, func_14()))
		{
			UNK_0x7C27693C5112825F(func_14(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_64(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x0E0E6175453415CB(bParam0))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam0, 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam1))
				{
					if (UNK_0x82CCEAB29E9451DD(bParam1, bVar0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_65(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_66(int iParam0, bool bParam1)
{
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		if (UNK_0xE4EDC4B0E92C078B(bParam1->f_6))
		{
			UNK_0x661342B9651D16E2(bParam1->f_6, false);
		}
		UNK_0xB8C3D2D6C4AAEF18(0);
		UNK_0x053C926E5E341906();
		bParam1->f_6 = iParam0;
		UNK_0x661342B9651D16E2(iParam0, true);
	}
}

int func_67(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_59(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

void func_68(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_69(iParam2), 1);
}

int func_69(int iParam0)
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

void func_70(bool bParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!UNK_0x2EBF5002C6B6A06C(bParam1))
		{
			if (!UNK_0x7F8A39872A07D2CE(bParam1, ""))
			{
				func_110(bParam1, 7500, 1);
			}
		}
	}
	bParam0->f_10 = UNK_0x1C0640BA9A7327B3();
}

bool func_71(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_16))
	{
		if (UNK_0x65636D4556D82155(bParam0->f_16))
		{
			return true;
		}
	}
	return false;
}

bool func_72(bool bParam0, int iParam1)
{
	if (iParam1 != 1 || UNK_0x04E6B3EAA8742BFA())
	{
		if (UNK_0xD17F06053799A7CA())
		{
			return true;
		}
		if (func_74(bParam0))
		{
			return true;
		}
	}
	if (iParam1 != 2 || UNK_0x04E6B3EAA8742BFA())
	{
		if (func_49() && !func_73())
		{
			return true;
		}
	}
	return false;
}

bool func_73()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

bool func_74(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x1C0640BA9A7327B3();
	iVar0 = (iVar1 - bParam0->f_10);
	if (iVar0 < 35)
	{
		return true;
	}
	return false;
}

bool func_75(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_76(bVar0, bParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_76(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (UNK_0xC844350D5D58C99A(bParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = UNK_0xD6DF381716822EFE(bParam0);
		if (bParam2 > 0)
		{
			if (iVar1 >= bParam2)
			{
				if (bParam2 > 1)
				{
					if (!UNK_0x4A43A287EB2A2B60(bParam0, 1))
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!UNK_0x4A43A287EB2A2B60(bParam0, 1))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

void func_77(bool bParam0)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		UNK_0x2F23E8033F1ADDD9(bParam0);
	}
}

bool func_78(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	bool bVar15[3];
	bool bVar19[3];
	bool bVar23;
	bool bVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	vector3 vVar28;
	bool bVar31;
	bool bVar32;

	iVar4 = 0;
	bParam0->f_17[0] = uParam1;
	bParam0->f_17[1] = uParam2;
	bParam0->f_17[2] = uParam3;
	bParam0->f_16 = uParam1;
	bVar15[0] = bParam4;
	bVar15[1] = bParam5;
	bVar15[2] = bParam6;
	bVar19[0] = bParam13;
	bVar19[1] = bParam14;
	bVar19[2] = bParam15;
	bVar6 = true;
	bVar1 = false;
	iVar2 = 0;
	bVar3 = false;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
		{
			bVar3++;
		}
		if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 29) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 28))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
				{
					UNK_0xD5EF6A937E06E46F(bParam0->f_17[bVar0], 1, -1, 0);
				}
				if (bVar0 == 2)
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 28);
				}
			}
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 29) && UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 28))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
			{
				UNK_0xD5EF6A937E06E46F(bParam0->f_17[bVar0], 0, -1, 0);
			}
			if (bVar0 == 2)
			{
				UNK_0x0674E58A79778E99(&(bParam0->f_13), 28);
			}
		}
		bVar0++;
	}
	if (bVar3 == 0)
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 26))
	{
		bVar23 = false;
		if (!UNK_0xC844350D5D58C99A(bParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			bVar24 = UNK_0x83C1D4B63BBD91F6(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 50f, false, iVar25);
			if (UNK_0xDF1306B443CD3D15(bVar24, 0))
			{
				bParam0->f_21 = bVar24;
			}
		}
		if (UNK_0xDF1306B443CD3D15(bParam0->f_21, 0))
		{
			if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bParam0->f_21, true)) < 400f)
			{
				if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
				{
					if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0) || !bParam17)
					{
						if (func_76(bParam0->f_21, bParam0, bVar3))
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
								{
									UNK_0xCAF7AE54F764D5AA(bParam0->f_17[bVar0], 1f);
									if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_14()))
									{
										UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
									}
									if (UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470) == 7 && !func_93(bParam0->f_17[bVar0], bParam0->f_21))
									{
										if (!UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0]) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0]))
										{
											UNK_0x11AD11297DC58CC7(bParam0->f_17[bVar0], true);
											UNK_0x5B1D360B9C6F0A09(bParam0->f_17[bVar0], bParam0->f_21, 60000, bVar0, 1f, 1, 0);
											UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], bVar0);
										}
									}
								}
								bVar0++;
							}
							return true;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			UNK_0x0674E58A79778E99(&(bParam0->f_13), 26);
			bVar0 = false;
			while (bVar0 < 3)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
				{
					if (!UNK_0x81A5359F25512A04(bParam0->f_17[bVar0]) && !bParam0->f_15)
					{
						UNK_0xA3BF0AA5A2608191(bParam0->f_17[bVar0]);
					}
					if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_14()))
					{
						if (func_91(bParam0, bParam0->f_17[bVar0], bParam8, 1))
						{
							UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_14());
						}
					}
				}
				bVar0++;
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 26))
	{
		if ((!func_90(bParam0) && UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9())) && !UNK_0xC844350D5D58C99A(bParam10))
		{
			bVar13 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar13, 0))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 13))
				{
					if (bParam16 == 4 || bParam16 == 5)
					{
					}
					if (!func_72(bParam0, 2))
					{
						bVar26 = false;
						iVar27 = 0;
						bVar0 = false;
						while (bVar0 < 3)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
							{
								bVar26++;
							}
							bVar0++;
						}
						iVar27 = UNK_0x09AC81E49EA267F7(false, bVar26);
						if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar27]))
						{
							func_68(bParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_70(bParam0, "MORE_SEATS", 0);
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			UNK_0x0674E58A79778E99(&(bParam0->f_13), 13);
			func_77("MORE_SEATS");
		}
		if (!UNK_0xC844350D5D58C99A(bParam10))
		{
			if ((!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]) || !UNK_0xEB6A8945D1AC98A1(bParam0->f_17[1])) || !UNK_0xEB6A8945D1AC98A1(bParam0->f_17[2]))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 31))
				{
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()) && !func_72(bParam0, 2))
					{
						bVar13 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						if (func_89(bVar13, bParam0))
						{
							func_70(bParam0, "CMN_VEHSUIT", 0);
							UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 31);
						}
					}
				}
				else if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
				{
					UNK_0x0674E58A79778E99(&(bParam0->f_13), 31);
					func_77("CMN_VEHSUIT");
				}
			}
		}
		if (UNK_0xDF1306B443CD3D15(bParam10, 0))
		{
			if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bParam10))
			{
				if (UNK_0xBFC0798A6E3417F9(0, 75))
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 21);
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 21))
			{
				UNK_0x0674E58A79778E99(&(bParam0->f_13), 21);
			}
		}
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (UNK_0xC844350D5D58C99A(bParam0->f_17[bVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
				{
					if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_14()))
					{
						UNK_0xFCCF7611216AE801(bParam0->f_17[bVar0], 1);
					}
					else
					{
						UNK_0xFCCF7611216AE801(bParam0->f_17[bVar0], 0);
					}
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
					{
						bVar13 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						if (UNK_0xDF1306B443CD3D15(bVar13, 0))
						{
							if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_14()))
							{
								if (!func_90(bParam0) && UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
								{
									if (!func_88(bParam0->f_17[bVar0]))
									{
										UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
									}
								}
							}
						}
						if (bVar13 != bParam10 && !UNK_0x437347B10A200C4B(bVar13, 0))
						{
							if (UNK_0x82CCEAB29E9451DD(bParam0->f_17[bVar0], bVar13))
							{
								if (UNK_0x70EED0761B82965E(bVar13) && !UNK_0xF79A7BCA9E38BBBC(bVar13))
								{
									vVar28 = { UNK_0x68F4C0EC296D3901(bVar13, true) };
									if (vVar28.z < -1f)
									{
										UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_14()))
					{
						if (UNK_0x0E0E6175453415CB(bParam0->f_17[bVar0]))
						{
							bVar13 = UNK_0x6937EA2286828455(bParam0->f_17[bVar0], 0);
							if (!UNK_0x437347B10A200C4B(bVar13, 0))
							{
								if (UNK_0xDF1306B443CD3D15(bParam10, 0))
								{
									if (bVar13 != bParam10)
									{
										if (!UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bVar13))
										{
											if (UNK_0x9C66D99E63E8E24C(bVar13) > 5f)
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 4160);
											}
											else
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
									{
										bVar31 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
									}
									if (UNK_0xDF1306B443CD3D15(bVar31, 0))
									{
										if (bVar13 != bVar31)
										{
											if (UNK_0x9C66D99E63E8E24C(bVar13) > 5f)
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 4160);
											}
											else
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_14()))
					{
						bVar32 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
						if (UNK_0xC844350D5D58C99A(bVar32))
						{
							if (func_76(bVar32, bParam0, 0))
							{
								if (func_87(bVar0, bParam0) || !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 27))
								{
									UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], bVar0);
									func_15(bVar0, bParam0);
									iVar4++;
									if (iVar4 >= bVar3)
									{
										UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 27);
									}
								}
							}
							else if (!func_87(bVar0, bParam0))
							{
								if (UNK_0x134B62B726CEC8E6(bVar32) == joaat("SENTINEL2"))
								{
									UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], 4);
								}
								else
								{
									UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], 2);
								}
								func_86(bVar0, bParam0);
							}
						}
					}
					if ((!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_14()) && !func_85(bParam0->f_17[bVar0], bParam10)) && !func_84(bParam0->f_17[bVar0], bParam10))
					{
						if (func_91(bParam0, bParam0->f_17[bVar0], bParam8, bParam11))
						{
							if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_14()))
							{
								if (((!UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0]) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0])) && !UNK_0x7F69A7C512ACACFD(bParam0->f_17[bVar0])) && !UNK_0x81A5359F25512A04(bParam0->f_17[bVar0]))
								{
									iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470);
									if (iVar14 == 7)
									{
										UNK_0xA3BF0AA5A2608191(bParam0->f_17[bVar0]);
									}
									UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_14());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
							{
								bParam0->f_11 = UNK_0x1C0640BA9A7327B3();
								bParam0->f_1[bVar0] = func_57(bParam0->f_17[bVar0], 0, 0);
								UNK_0x9D7CDDB4B55142AF(bParam0->f_1[bVar0], 2);
								if (bParam9)
								{
									func_66(bParam0->f_1[bVar0], bParam0);
								}
							}
						}
						bVar6 = false;
					}
					else if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
					{
						if (((func_63(bParam0->f_17[bVar0], 1) || func_85(bParam0->f_17[bVar0], bParam10)) || bParam12) || (UNK_0xDF1306B443CD3D15(bParam10, 0) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam10, 0)))
						{
							if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
							{
								UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
								func_77(bVar15[bVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_66(bParam0->f_1[bVar0], bParam0);
							}
							bVar6 = false;
						}
					}
					else if (UNK_0xDF1306B443CD3D15(bParam10, 0))
					{
						if (!UNK_0x82CCEAB29E9451DD(bParam0->f_17[bVar0], bParam10))
						{
							if ((UNK_0x12DE711B1C681E9E(bParam0->f_17[bVar0], bParam10, 20f, 20f, 5f, 0, 1, 0) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 11)) && !((bParam17 && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam10, 0)))
							{
								if (UNK_0x0E0E6175453415CB(bParam0->f_17[bVar0]))
								{
									if (!UNK_0xC42A92762C58E1B9(bParam0->f_17[bVar0], bParam10, 0))
									{
										if (!func_63(bParam0->f_17[bVar0], 1))
										{
											if (func_62(bParam0->f_17[bVar0]))
											{
												iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], joaat("SCRIPT_TASK_LEAVE_VEHICLE"));
												if (iVar14 == 7)
												{
													UNK_0x75CDA8644CD3B5F5(bParam0->f_17[bVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_14()))
									{
										if ((((!UNK_0x7F69A7C512ACACFD(bParam0->f_17[bVar0]) && !UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0])) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0])) && !UNK_0x81A5359F25512A04(bParam0->f_17[bVar0])) && !UNK_0x4E861BC5B1EDA7BD(bParam10))
										{
											UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
										}
									}
									iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470);
									if (iVar14 == 7 && !func_93(bParam0->f_17[bVar0], bParam10))
									{
										if (((((!UNK_0x7F69A7C512ACACFD(bParam0->f_17[bVar0]) && !UNK_0x7F69A7C512ACACFD(UNK_0x16F2683693E537C9())) && !func_83(bParam0->f_17[bVar0], 2f)) && !UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0])) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0])) && !UNK_0x4E861BC5B1EDA7BD(bParam10))
										{
											UNK_0x11AD11297DC58CC7(bParam0->f_17[bVar0], true);
											if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 10))
											{
												UNK_0xCAF7AE54F764D5AA(bParam0->f_17[bVar0], 1f);
											}
											UNK_0x5B1D360B9C6F0A09(bParam0->f_17[bVar0], bParam10, 60000, bVar0, 2f, 1, 0);
											UNK_0x579B0182884711E5(bParam0->f_17[bVar0], 0);
										}
									}
									else if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam10, 0))
									{
										bParam0->f_1[bVar0] = func_57(bParam0->f_17[bVar0], 0, 0);
										UNK_0x9D7CDDB4B55142AF(bParam0->f_1[bVar0], 2);
										bVar6 = false;
									}
								}
							}
							else if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_14()))
							{
								if (func_91(bParam0, bParam0->f_17[bVar0], bParam8, bParam11))
								{
									if (!UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0]) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0]))
									{
										iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470);
										if (iVar14 == 7)
										{
											UNK_0xA3BF0AA5A2608191(bParam0->f_17[bVar0]);
										}
										UNK_0x11AD11297DC58CC7(bParam0->f_17[bVar0], false);
										UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_14());
									}
								}
							}
						}
						else if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bParam10))
						{
							if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_14()))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 21))
								{
									UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_14());
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 21))
							{
								UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 21);
							}
						}
						else if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_14()) && !UNK_0x4E861BC5B1EDA7BD(bParam10))
						{
							UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
						}
					}
				}
				else if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
				{
					UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
					func_77(bVar15[bVar0]);
				}
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
			{
				iVar7[bVar0] = 1;
				bVar1++;
			}
			bVar0++;
		}
		if (!func_72(bParam0, 2))
		{
			if (bVar1 > 0)
			{
				bVar0 = false;
				while (bVar0 < 3)
				{
					if (iVar7[bVar0])
					{
						if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
						{
							if (func_88(bParam0->f_17[bVar0]) || UNK_0x12DE711B1C681E9E(bParam0->f_17[bVar0], UNK_0x16F2683693E537C9(), bParam0->f_8, bParam0->f_8, bParam0->f_8, 0, 1, 0))
							{
								bVar1 = (bVar1 - 1);
								iVar7[bVar0] = 0;
							}
						}
					}
					else if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
					{
						if (!UNK_0x12DE711B1C681E9E(bParam0->f_17[bVar0], UNK_0x16F2683693E537C9(), (bParam0->f_8 * 0.85f), (bParam0->f_8 * 0.85f), bParam0->f_8, 0, 1, 0) && !func_88(bParam0->f_17[bVar0]))
						{
						}
					}
					bVar0++;
				}
			}
			iVar5 = UNK_0x1C0640BA9A7327B3();
			if ((iVar5 - bParam0->f_11) > 1500 || bVar3 == 1)
			{
				if (bVar1 > 0)
				{
					if (bParam0->f_12 < bVar1)
					{
						if ((bVar1 == bVar3 || (iVar2 + bVar1) == bVar3) && bVar3 > 1)
						{
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 5))
							{
								func_70(bParam0, bParam7, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 5);
								bParam0->f_12 = bVar1;
							}
							else
							{
								bParam0->f_12 = bVar1;
							}
						}
						else
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (iVar7[bVar0])
								{
									if (!func_82(bVar0, bParam0))
									{
										if (!UNK_0x2EBF5002C6B6A06C(bVar19[bVar0]))
										{
											if (!UNK_0x7F8A39872A07D2CE(bVar19[bVar0], ""))
											{
												func_80(bParam0, bVar15[bVar0], bVar19[bVar0], 0);
												func_79(bVar0, bParam0);
												bParam0->f_12 = bVar1;
											}
										}
										if (!func_82(bVar0, bParam0))
										{
											func_70(bParam0, bVar15[bVar0], 0);
											func_79(bVar0, bParam0);
											bParam0->f_12 = bVar1;
										}
									}
									else
									{
										bParam0->f_12 = bVar1;
									}
								}
								bVar0++;
							}
						}
					}
				}
				else
				{
					bParam0->f_12 = 0;
				}
			}
		}
		UNK_0x0674E58A79778E99(&(bParam0->f_13), 10);
		if (bVar6 && !bVar12)
		{
			bVar0 = false;
			while (bVar0 < 3)
			{
				if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
				{
					UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
					func_77(bVar15[bVar0]);
				}
				bVar0++;
			}
			func_77("MORE_SEATS");
			return true;
		}
	}
	return false;
}

void func_79(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 14);
			break;
		case 1:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 15);
			break;
		case 2:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 16);
			break;
	}
}

void func_80(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!UNK_0x2EBF5002C6B6A06C(bParam1))
		{
			if (!UNK_0x7F8A39872A07D2CE(bParam1, ""))
			{
				func_81(bParam1, bParam2, 7500, 1);
			}
		}
	}
	bParam0->f_10 = UNK_0x1C0640BA9A7327B3();
}

void func_81(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x12F275EDEEF63A2B(iParam2, 1);
}

bool func_82(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 14);
		case 1:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 15);
		case 2:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 16);
		default:
			break;
	}
	return false;
}

bool func_83(bool bParam0, float fParam1)
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(bParam0, 0))
	{
		bVar0 = UNK_0x6937EA2286828455(bParam0, 0);
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x9C66D99E63E8E24C(bVar0) > fParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_84(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (!UNK_0xBFDE4EE64C4BF2D6(bParam0, func_14()))
		{
			iVar0 = UNK_0x8B157DA177FBCF50(bParam0);
			if (UNK_0xDF1306B443CD3D15(bParam1, 0))
			{
				if (UNK_0x12DE711B1C681E9E(bParam0, bParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == bParam1)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_85(bool bParam0, bool bParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (UNK_0xDF1306B443CD3D15(bParam1, 0))
			{
				if (UNK_0x82CCEAB29E9451DD(bParam0, bParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_86(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 17);
			break;
		case 1:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 18);
			break;
		case 2:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 19);
			break;
	}
}

bool func_87(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 17);
		case 1:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 18);
		case 2:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 19);
		default:
			break;
	}
	return false;
}

bool func_88(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
		if (UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				bVar1 = UNK_0x3C66DF04E6EA3587(bParam0);
				if (UNK_0xDF1306B443CD3D15(bVar1, 0))
				{
					if (bVar0 == bVar1)
					{
						if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, 20f, 20f, 20f, 0, 1, 0) && UNK_0x12DE711B1C681E9E(bParam0, bVar1, 20f, 20f, 20f, 0, 1, 0))
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

bool func_89(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("BUS") || UNK_0x134B62B726CEC8E6(bParam0) == joaat("COACH"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			bVar3 = UNK_0xA30B8362589C124A(bParam0, false, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar3))
			{
				if ((bVar3 == bParam1->f_17[0] || bVar3 == bParam1->f_17[1]) || bVar3 == bParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			bVar4 = UNK_0xA30B8362589C124A(bParam0, true, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar4))
			{
				if ((bVar4 == bParam1->f_17[0] || bVar4 == bParam1->f_17[1]) || bVar4 == bParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			bVar5 = UNK_0xA30B8362589C124A(bParam0, 2, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar5))
			{
				if ((bVar5 == bParam1->f_17[0] || bVar5 == bParam1->f_17[1]) || bVar5 == bParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_90(bool bParam0)
{
	bool bVar0;

	if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_76(bVar0, bParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_91(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam1))
	{
		if (UNK_0x0E0E6175453415CB(bParam1))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam1, 0);
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xDF1306B443CD3D15(bVar0, 0))
				{
					if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bVar0))
					{
						if (func_90(bParam0))
						{
							return true;
						}
					}
					else if (bParam3)
					{
						return true;
					}
				}
				else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam1, bParam2, bParam2, 3f, 0, 1, 0))
				{
					return true;
				}
			}
		}
		else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam1, bParam2, bParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (func_76(bVar0, bParam0, 0))
					{
						if (UNK_0xDF1306B443CD3D15(bVar0, 0))
						{
							if (func_92(bVar0))
							{
								return true;
							}
						}
					}
				}
				else
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_92(bool bParam0)
{
	float fVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		fVar0 = UNK_0x9C66D99E63E8E24C(bParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_93(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam1, 0))
		{
			iVar0 = UNK_0x3C66DF04E6EA3587(bParam0);
			if (iVar0 == bParam1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_94()
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

void func_95(bool bParam0)
{
	int iVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 25))
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (UNK_0xC844350D5D58C99A(bParam0->f_17[iVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar0]))
				{
					UNK_0x4E885A246A9D983A(bParam0->f_17[iVar0], 32, false);
					UNK_0x4E885A246A9D983A(bParam0->f_17[iVar0], 305, true);
					UNK_0x4E885A246A9D983A(bParam0->f_17[iVar0], 268, true);
					UNK_0x579B0182884711E5(bParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 25);
	}
}

void func_96(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(bParam0->f_17[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar0]))
			{
				if (UNK_0x0E0E6175453415CB(bParam0->f_17[iVar0]))
				{
					UNK_0xA245D14CC59CDD36(bParam0->f_17[iVar0], 0);
					UNK_0x7D732AB707BE9152(bParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
			{
				UNK_0xA245D14CC59CDD36(UNK_0x16F2683693E537C9(), 0);
				UNK_0x7D732AB707BE9152(UNK_0x16F2683693E537C9(), 0);
			}
		}
	}
}

bool func_97()
{
	var uVar0;

	return uVar0;
}

Vector3 func_98()
{
	vector3 vVar0;

	return vVar0;
}

bool func_99()
{
	if (UNK_0xC844350D5D58C99A(bLocal_2575) && UNK_0xDF1306B443CD3D15(bLocal_2575, 0))
	{
		return true;
	}
	return false;
}

int func_100(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, bool bParam10, int iParam11, var uParam12, char* sParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	return func_56(bParam0, vParam1, func_101(), vParam4, vParam7, iParam11, 5, 0, 0, 0, uParam12, sParam13, func_97(), func_97(), func_97(), func_97(), iParam14, 0, bParam16, bParam15, 1, bParam17, bParam18, bParam19, func_97(), func_97(), func_97(), 1, bParam10);
}

Vector3 func_101()
{
	return 0f, 0f, 2f;
}

int func_102()
{
	int iVar0;

	if (func_103())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]) && UNK_0xDF1306B443CD3D15(Local_579[iVar0 /*8*/], 0))
			{
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_579[iVar0 /*8*/], 1))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_103()
{
	int iVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]) && UNK_0xDF1306B443CD3D15(Local_579[iVar0 /*8*/], 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_579[iVar0 /*8*/], 0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_104(int iParam0, int iParam1)
{
	Global_61523 = iParam0;
	Global_61524 = iParam1;
}

int func_105(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((UNK_0xC844350D5D58C99A(Local_579[iVar1 /*8*/]) && UNK_0xDF1306B443CD3D15(Local_579[iVar1 /*8*/], 0)) && !func_109(Local_579[iVar1 /*8*/])) && (!bParam0 || func_106(Local_579[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_106(bool bParam0)
{
	if (UNK_0x4D570FEF9D230CE7(bParam0) == iLocal_2527)
	{
		if (func_108(UNK_0x16F2683693E537C9(), vLocal_642, 1) < 500f)
		{
			return true;
		}
	}
	else if (func_107(bParam0, UNK_0x16F2683693E537C9(), 1) < 300f)
	{
		return true;
	}
	return false;
}

float func_107(bool bParam0, bool bParam1, int iParam2)
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

float func_108(bool bParam0, vector3 vParam1, int iParam4)
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

bool func_109(bool bParam0)
{
	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if ((UNK_0x7B5606C651AB51B5(bParam0, 0, 7000) || UNK_0x7B5606C651AB51B5(bParam0, 1, 7000)) || UNK_0x7B5606C651AB51B5(bParam0, 2, 7000))
		{
			return true;
		}
	}
	return false;
}

void func_110(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_111(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	vector3 vVar0;
	float fVar3;

	if (UNK_0xC844350D5D58C99A(Global_102203.f_4))
	{
		if (UNK_0xDF1306B443CD3D15(Global_102203.f_4, 0))
		{
			if (func_164(24) != Global_102203.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_161(UNK_0x68F4C0EC296D3901(Global_102203.f_4, true), iParam5, &vVar0, &fVar3))
					{
						vParam0 = { vVar0 };
						fParam3 = fVar3;
					}
				}
				func_112(Global_102203.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_112(bool bParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
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
		func_160(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_155(bParam0, &Var0);
		if (func_154(vParam1, 0f, 0f, 0f, 0))
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
		func_147(iParam5, &Var0, vParam1, iParam4, func_153(bParam0));
		func_113(iParam5, bParam0, 0);
	}
}

void func_113(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_143(&(Global_75441.f_555[0 /*21*/]), iParam0))
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
				Global_111638.f_32744.f_4801 = func_132();
			}
			if (bParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_164(iParam0);
					if ((UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0)) && bParam1 != bVar0)
					{
						func_114(bVar0, 145);
					}
				}
				Global_76347 = bParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_114(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_115(bParam0))
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
	func_155(bParam0, &(Global_111638.f_32744.f_5510));
}

bool func_115(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_130(bParam0, 0, 0)) || func_130(bParam0, 1, 0)) || func_130(bParam0, 2, 0)) || func_153(bParam0) != 145) || func_129(bParam0)) || func_128(bParam0)) || func_127(bParam0)) || func_126(bParam0)) || !func_116(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_128(bParam0))
		{
		}
		if (func_128(bParam0))
		{
		}
		if (func_130(bParam0, 0, 0))
		{
		}
		if (func_130(bParam0, 1, 0))
		{
		}
		if (func_130(bParam0, 2, 0))
		{
		}
		if (func_153(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_116(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_117(bParam0, 0))
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

bool func_117(bool bParam0, bool bParam1)
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
		if (!func_125())
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
		if ((((!func_124() && !func_123()) && !func_122()) && !func_121()) && !func_125())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_122())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_120(bParam0))
		{
			return false;
		}
	}
	if (!func_118(bParam0))
	{
		return false;
	}
	return true;
}

bool func_118(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_119())
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

bool func_119()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_120(bool bParam0)
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

bool func_121()
{
	return false;
}

bool func_122()
{
	return true;
}

bool func_123()
{
	return true;
}

bool func_124()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_125()
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

bool func_126(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_117(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_127(bool bParam0)
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

bool func_128(bool bParam0)
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

bool func_129(bool bParam0)
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

bool func_130(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_131(iParam1, iVar0, &uVar1, &iVar9))
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

bool func_131(int iParam0, int iParam1, char* sParam2, int iParam3)
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

var func_132()
{
	var uVar0;

	func_142(&uVar0, UNK_0x4460E481B9E33ADA());
	func_141(&uVar0, UNK_0x8D199E381D262EEF());
	func_140(&uVar0, UNK_0xD8A54335F18763BA());
	func_135(&uVar0, UNK_0x972A296334C9D57B());
	func_134(&uVar0, UNK_0x118229AD063C3C1D());
	func_133(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_133(var uParam0, int iParam1)
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

void func_134(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_135(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_139(*uParam0);
	iVar1 = func_137(*uParam0);
	if (iParam1 < 1 || iParam1 > func_136(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_136(int iParam0, int iParam1)
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

int func_137(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_138(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_138(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_139(int iParam0)
{
	return iParam0 & 15;
}

void func_140(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_141(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

bool func_143(var uParam0, int iParam1)
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
			uParam0->f_4 = func_144(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_144(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_144(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_144(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_144(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_144(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_144(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_144(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_144(2, 1);
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
			if (func_125())
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
			if (func_125())
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
		if (!func_154(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_154(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_154(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_144(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_146(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_145(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_145(int iParam0, var uParam1, int iParam2)
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

bool func_146(int iParam0)
{
	return iParam0 < 3;
}

void func_147(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_143(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
		{
			func_152(iParam0);
			func_151(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_148(iParam0, 1);
		}
	}
}

void func_148(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_150(iParam0, 0))
		{
			func_149(iParam0, 1, 0);
			func_149(iParam0, 2, 0);
			func_149(iParam0, 3, 0);
			func_149(iParam0, 4, 0);
			func_149(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_149(iParam0, 0, 0);
	}
}

void func_149(int iParam0, bool bParam1, bool bParam2)
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

bool func_150(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_151(var uParam0, var uParam1)
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

void func_152(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_143(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			func_148(iParam0, 0);
		}
	}
}

int func_153(bool bParam0)
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

bool func_154(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_155(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_159(uParam1);
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
		if (uParam1->f_65 == -1 && !func_158(uParam1->f_66))
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
		func_157(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_156(iVar0 + 1));
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

int func_156(int iParam0)
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

int func_157(bool bParam0, var uParam1, var uParam2)
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

bool func_158(int iParam0)
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

void func_159(var uParam0)
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

void func_160(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_152(iParam0);
	func_148(iParam0, 0);
}

bool func_161(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	iVar0 = func_162(vParam0, uParam3, 1);
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

int func_162(vector3 vParam0, int iParam3, int iParam4)
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
				if (func_163(iVar0) || iParam4 == 0)
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

bool func_163(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], false);
}

int func_164(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

int func_165()
{
	func_166();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_166()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_168(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_167(UNK_0x16F2683693E537C9());
			if (func_146(iVar0) && (!func_40(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_146(Global_111638.f_2358.f_539.f_4321))
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

int func_167(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_168(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_168(int iParam0)
{
	if (func_146(iParam0))
	{
		return func_169(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_169(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_170(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && bParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_5 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

int func_171(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == bParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		UNK_0x523BCC9DC80CD82F(bParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = UNK_0x1C0640BA9A7327B3();
		(uParam0[iVar1 /*5*/])->f_4 = bParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_172(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (UNK_0x7F8A39872A07D2CE(uParam0->f_737[iVar0 /*5*/].f_4, bParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		UNK_0xAE317D00A5A55DF6(bParam1, 0, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_737[iVar1 /*5*/].f_4 = bParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_173(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			case 2:
				if ((UNK_0x1C0640BA9A7327B3() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_174()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	bVar2 = false;
	if (func_108(UNK_0x16F2683693E537C9(), vLocal_642, 1) < 70f)
	{
		UNK_0xA80942BEA6D69B21();
	}
	if (iLocal_2573 == 9)
	{
		if (!bLocal_2572)
		{
			if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
			{
				UNK_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				bLocal_2572 = true;
			}
		}
		if (UNK_0xC844350D5D58C99A(Local_469))
		{
			if (func_107(Local_469, UNK_0x16F2683693E537C9(), 1) > 300f)
			{
				UNK_0x6DAD7906B73F064D(&Local_469);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(bLocal_2575) && UNK_0xDF1306B443CD3D15(bLocal_2575, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]) && UNK_0xDF1306B443CD3D15(Local_579[iVar0 /*8*/], 0))
			{
				if (UNK_0x6D18156F72BE0773(bLocal_2575, Local_579[iVar0 /*8*/]))
				{
					bVar2 = true;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			bLocal_2575 = false;
		}
	}
	if (func_184())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]) && UNK_0xDF1306B443CD3D15(Local_579[iVar0 /*8*/], 0))
			{
				if (UNK_0x6D18156F72BE0773(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), Local_579[iVar0 /*8*/]))
				{
					bLocal_2575 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				}
			}
			iVar0++;
		}
	}
	func_177();
	if (iLocal_651 == 0)
	{
		if (!UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, false, true, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_28)
		{
			if (UNK_0xC844350D5D58C99A(Local_28[iVar1 /*110*/]))
			{
				if ((Local_28[iVar1 /*110*/].f_5 == 5 && func_107(UNK_0x16F2683693E537C9(), Local_28[iVar1 /*110*/], 1) > 300f) && func_108(UNK_0x16F2683693E537C9(), vLocal_642, 1) > 300f)
				{
					UNK_0xEBA53F35D0085654(&(Local_28[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]))
			{
				if (!UNK_0xDF1306B443CD3D15(Local_579[iVar0 /*8*/], 0))
				{
					UNK_0x046C362CF15F1935(&(Local_579[iVar0 /*8*/]));
					if (UNK_0xE4EDC4B0E92C078B(Local_579[iVar0 /*8*/].f_1))
					{
						UNK_0x142CC44DB769B57E(&(Local_579[iVar0 /*8*/].f_1));
					}
					if (bVar3)
					{
						iVar4 = 1;
					}
					else
					{
						iVar4 = 2;
					}
				}
				else if (func_109(Local_579[iVar0 /*8*/]))
				{
					if (UNK_0xE4EDC4B0E92C078B(Local_579[iVar0 /*8*/].f_1))
					{
						UNK_0x142CC44DB769B57E(&(Local_579[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_106(Local_579[iVar0 /*8*/]))
				{
					if (UNK_0x4D570FEF9D230CE7(Local_579[iVar0 /*8*/]) == iLocal_2527)
					{
						if (iVar4 != 4)
						{
							iVar4 = 5;
						}
					}
					else
					{
						iVar4 = 4;
					}
				}
			}
			if (((((iLocal_2573 == 9 && func_102() != -1) && UNK_0xC844350D5D58C99A(Local_579[func_102() /*8*/])) && UNK_0xDF1306B443CD3D15(Local_579[func_102() /*8*/], 0)) && !func_109(Local_579[func_102() /*8*/])) || (((iLocal_2573 == 10 && func_54() != -1) && UNK_0xC844350D5D58C99A(Local_579[func_54() /*8*/])) && UNK_0xDF1306B443CD3D15(Local_579[func_54() /*8*/], 0)))
			{
				if (UNK_0xE4EDC4B0E92C078B(Local_579[iVar0 /*8*/].f_1))
				{
					UNK_0x142CC44DB769B57E(&(Local_579[iVar0 /*8*/].f_1));
				}
			}
			else if ((((UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]) && UNK_0xDF1306B443CD3D15(Local_579[iVar0 /*8*/], 0)) && !func_109(Local_579[iVar0 /*8*/])) && func_106(Local_579[iVar0 /*8*/])) && iLocal_652 == 0)
			{
				if (!UNK_0xE4EDC4B0E92C078B(Local_579[iVar0 /*8*/].f_1))
				{
					Local_579[iVar0 /*8*/].f_1 = func_176(Local_579[iVar0 /*8*/], 0, 0);
					UNK_0x2A065371C9D96655(Local_579[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_2573 == 9 || iLocal_2573 == 10)
		{
			if (func_175("JHP1A_BKIN", 0, 0) || func_175("JHP1A_BKINANY", 0, 0))
			{
				UNK_0x790015DC92C918E2();
			}
		}
		else if (iLocal_652 == 0)
		{
			if (!bLocal_2567)
			{
				if (func_105(1) == 1)
				{
					func_110("JHP1A_BKIN", 7500, 1);
				}
				bLocal_2567 = true;
			}
		}
		if (func_105(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_289(iVar4);
			}
		}
	}
}

var func_175(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x18B60B994182620C(bParam0);
	if (iParam1 == 1)
	{
		UNK_0x6B012227B3921E18(bParam2);
	}
	return UNK_0xB165082A56EE6E7F();
}

int func_176(bool bParam0, bool bParam1, bool bParam2)
{
	return func_58(bParam0, !bParam1, bParam2);
}

void func_177()
{
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_579[3 /*8*/], 1))
		{
			iLocal_2573 = 11;
		}
		else if (func_183())
		{
			iLocal_2573 = 7;
		}
		else if (func_182())
		{
			iLocal_2573 = 6;
		}
		else if (func_103())
		{
			iLocal_2573 = 9;
			bLocal_2567 = false;
		}
		else if (func_99())
		{
			iLocal_2573 = 10;
		}
		else if (func_181())
		{
			iLocal_2573 = 8;
		}
		else if (((UNK_0xC844350D5D58C99A(bLocal_2576) && UNK_0xDF1306B443CD3D15(bLocal_2576, 0)) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_2576, 1)) && UNK_0x3D1053F9EB43B7AD(bLocal_2576, vLocal_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_2573 = 5;
		}
		else if (((!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && UNK_0xC844350D5D58C99A(UNK_0x728870EB733D12A1())) && !func_180()) && UNK_0x3D1053F9EB43B7AD(UNK_0x728870EB733D12A1(), vLocal_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			bLocal_2576 = UNK_0x728870EB733D12A1();
			iLocal_2573 = 5;
		}
		else if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			iLocal_2573 = 2;
		}
		else if (((UNK_0xC844350D5D58C99A(bLocal_2576) && UNK_0xDF1306B443CD3D15(bLocal_2576, 0)) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bLocal_2576, 1)) && (UNK_0x3D1053F9EB43B7AD(bLocal_2576, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, true, 0) || UNK_0x5A91F08DF773C39D(bLocal_2576, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_2573 = 4;
		}
		else if (((!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && UNK_0xC844350D5D58C99A(UNK_0x728870EB733D12A1())) && !func_180()) && (UNK_0x3D1053F9EB43B7AD(UNK_0x728870EB733D12A1(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, true, 0) || UNK_0x5A91F08DF773C39D(UNK_0x728870EB733D12A1(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			bLocal_2576 = UNK_0x728870EB733D12A1();
			iLocal_2573 = 4;
		}
		else if ((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && !func_180()) && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vLocal_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, true, 0))
		{
			bLocal_2576 = UNK_0x728870EB733D12A1();
			iLocal_2573 = 3;
		}
		else if ((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && !func_180()) && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, true, 0))
		{
			bLocal_2576 = UNK_0x728870EB733D12A1();
			iLocal_2573 = 1;
		}
		else if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
		{
			iLocal_2573 = 1;
		}
		else
		{
			bLocal_2576 = false;
			if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, false, true, 0))
			{
				iLocal_2573 = 0;
			}
			else if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
			{
				iLocal_2573 = 0;
			}
			else
			{
				iLocal_2573 = -1;
			}
		}
		if (iLocal_2573 == 1)
		{
			if (func_179(Local_28[0 /*110*/]))
			{
				func_178(Local_28[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_179(Local_28[0 /*110*/]))
		{
			func_178(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_2570)
		{
			UNK_0x9DD8618CA5BF832D(UNK_0x16F2683693E537C9(), 155, true);
		}
		if ((iLocal_2573 != -1 && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) && UNK_0x029064EA9141FCC2(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

void func_178(bool bParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		UNK_0x9FA191B317572861(bParam0, bParam1);
		UNK_0xB21189153A095FA1(bParam0, fParam2);
		UNK_0xCF443519BC24A3CB(bParam0, (fParam3 / 2f));
		UNK_0x8979D9784F39DF46(bParam0, fParam4);
		UNK_0xBEC9D6BBD21A735F(bParam0, fParam5);
	}
}

bool func_179(bool bParam0)
{
	if (bParam0 != 0 && UNK_0xC844350D5D58C99A(bParam0))
	{
		switch (UNK_0xBBCAD76F60334F95(bParam0))
		{
			case 1:
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x940C1429253D3B1B(bParam0)))
				{
					return true;
				}
				break;
			case 2:
				if (UNK_0xDF1306B443CD3D15(UNK_0x96A5FE5834B81CE7(bParam0), 0))
				{
					return true;
				}
				break;
			default:
				if (!UNK_0x437347B10A200C4B(bParam0, 0))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_180()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]) && UNK_0xDF1306B443CD3D15(Local_579[iVar0 /*8*/], 0))
		{
			if (UNK_0x728870EB733D12A1() == Local_579[iVar0 /*8*/])
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_181()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]) && UNK_0xB87D13D0C064E9D1(Local_579[iVar0 /*8*/], UNK_0x16F2683693E537C9(), 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_182()
{
	int iVar0;

	if (UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]) && UNK_0xDF1306B443CD3D15(Local_579[iVar0 /*8*/], 0)) && UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9()) == Local_579[iVar0 /*8*/])
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_183()
{
	int iVar0;

	if ((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) && !UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9())) && !UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]) && UNK_0xDF1306B443CD3D15(Local_579[iVar0 /*8*/], 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_579[iVar0 /*8*/], 1))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_184()
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (UNK_0xDF1306B443CD3D15(bVar0, 0) && (UNK_0x134B62B726CEC8E6(bVar0) == joaat("TOWTRUCK") || UNK_0x134B62B726CEC8E6(bVar0) == joaat("TOWTRUCK2")))
		{
			return true;
		}
	}
	return false;
}

void func_185()
{
	int iVar0;

	if (UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		func_289(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (UNK_0xC844350D5D58C99A(Local_28[iVar0 /*110*/]))
		{
			if (Local_28[iVar0 /*110*/].f_93)
			{
				if (Local_28[iVar0 /*110*/].f_102)
				{
					func_186(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432 /* Float: -1f */, 0, -1, -1, 1);
				}
				else
				{
					func_186(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432 /* Float: -1f */, 0, -1, -1, 1);
				}
			}
			if (!func_179(Local_28[iVar0 /*110*/]))
			{
				if (Local_28[iVar0 /*110*/].f_103 == -1)
				{
					Local_28[iVar0 /*110*/].f_103 = UNK_0x1C0640BA9A7327B3();
				}
				else if ((UNK_0x1C0640BA9A7327B3() - Local_28[iVar0 /*110*/].f_103) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_579)
	{
		if (UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]) && Local_579[iVar0 /*8*/].f_7)
		{
			if (!func_179(Local_579[iVar0 /*8*/]))
			{
				if (UNK_0xE4EDC4B0E92C078B(Local_579[iVar0 /*8*/].f_1))
				{
					UNK_0x142CC44DB769B57E(&(Local_579[iVar0 /*8*/].f_1));
				}
				UNK_0x046C362CF15F1935(&(Local_579[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_186(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
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

void func_187()
{
	vector3 vVar0;
	bool bVar3;

	if (bLocal_654 == 1)
	{
		if (!UNK_0x757EF87A33649210())
		{
			if (!UNK_0xD0BB2359EC70FC37())
			{
				UNK_0x53491B90E4FD0E56(1000);
			}
		}
		else
		{
			if (UNK_0x39B7A3CCD2467CAB())
			{
				UNK_0x55BE34EDDEA0AC9E(0);
				UNK_0x5C8D148FC238F38A();
			}
			func_24(iLocal_655);
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			UNK_0x790015DC92C918E2();
			UNK_0xA37A90C62806D848(1);
			func_8(1);
			if (!func_235())
			{
				func_234(iLocal_651, &vVar0, &bVar3);
				UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar0, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), bVar3);
				UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
				func_232(&uLocal_658, vVar0, 50f, 0);
			}
			func_231(&uLocal_658);
			switch (iLocal_651)
			{
				case 0:
					func_171(&uLocal_658, joaat("BURRITO2"));
					func_171(&uLocal_658, joaat("S_M_Y_PESTCONT_01"));
					func_171(&uLocal_658, joaat("S_M_M_SECURITY_01"));
					func_171(&uLocal_658, joaat("DILETTANTE2"));
					func_171(&uLocal_658, joaat("P_AMB_CLIPBOARD_01"));
					func_230(&uLocal_658, &cLocal_645);
					func_229(&uLocal_658, "misslsdhsclipboard@base");
					func_229(&uLocal_658, "misslsdhsclipboard@idle_a");
					func_229(&uLocal_658, "misstrevor3");
					func_228(&uLocal_658, iLocal_2527);
					if (((func_227() && !UNK_0xA7082C42B8809BF2(func_226())) && !UNK_0xC41A9202669A24C4(func_226())) && !UNK_0xAFB8495D36825275(func_226()))
					{
						func_171(&uLocal_658, func_226());
					}
					break;
				case 1:
					func_171(&uLocal_658, joaat("BURRITO2"));
					break;
			}
			while (!func_225(&uLocal_658))
			{
				SYSTEM::WAIT(0);
				func_185();
			}
			switch (iLocal_651)
			{
				case 0:
					if (((func_227() && !UNK_0xA7082C42B8809BF2(func_226())) && !UNK_0xC41A9202669A24C4(func_226())) && !UNK_0xAFB8495D36825275(func_226()))
					{
						while (!func_224())
						{
							SYSTEM::WAIT(0);
						}
						Local_579[4 /*8*/] = func_194(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (func_235())
					{
						if (UNK_0xC844350D5D58C99A(Local_579[4 /*8*/]))
						{
							func_191(Local_579[4 /*8*/], -1, 1);
						}
						else
						{
							func_191(0, -1, 1);
						}
					}
					else
					{
						UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
						if (UNK_0xC844350D5D58C99A(Local_579[4 /*8*/]))
						{
							UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_579[4 /*8*/], -1);
						}
					}
					while (!func_188(0))
					{
						SYSTEM::WAIT(0);
					}
					UNK_0x2FB9A57162E54BAB(0f);
					UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					break;
				case 1:
					if (!func_7(88))
					{
						Local_579[0 /*8*/] = UNK_0x122AAB0B1D6F55AD(joaat("BURRITO2"), 693.725f, -1006.302f, 21.8355f, 359.884f, true, true, false);
						UNK_0x05EC10F460C3A4AF(Local_579[0 /*8*/], 0);
						UNK_0xB9FD7450C0DAB575(Local_579[0 /*8*/], 1084227584 /* Float: 5f */);
					}
					if (func_235())
					{
						func_191(0, -1, 1);
					}
					else
					{
						UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
					}
					UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
					UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), 359.5735f);
					UNK_0x2FB9A57162E54BAB(0f);
					UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					break;
			}
			if (UNK_0x757EF87A33649210() || !UNK_0x7BCE0E6DD4A1F749())
			{
				if (!func_7(88) || iLocal_651 != 1)
				{
					UNK_0x82E51BCA72537B6C(800);
				}
			}
			bLocal_654 = false;
		}
	}
}

bool func_188(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = false;
	bVar1 = true;
	if (bParam0)
	{
		if (UNK_0xC844350D5D58C99A(Global_95241[0]))
		{
			Local_579[0 /*8*/] = Global_95241[0];
			UNK_0x73270B3C9CC833FD(Local_579[0 /*8*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (UNK_0xC844350D5D58C99A(Global_95241[1]))
		{
			Local_579[1 /*8*/] = Global_95241[1];
			UNK_0x73270B3C9CC833FD(Local_579[1 /*8*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (UNK_0xC844350D5D58C99A(Global_95241[2]))
		{
			Local_579[2 /*8*/] = Global_95241[2];
			UNK_0x73270B3C9CC833FD(Local_579[2 /*8*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (UNK_0xC844350D5D58C99A(Global_95241.f_9[0]))
		{
			Local_28[1 /*110*/] = Global_95241.f_9[0];
			if (!UNK_0xEB6A8945D1AC98A1(Local_28[1 /*110*/]))
			{
				UNK_0xE8832A9E16A57A1F(Local_28[1 /*110*/], false, 1);
			}
			UNK_0x73270B3C9CC833FD(Local_28[1 /*110*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (UNK_0xC844350D5D58C99A(Global_95241.f_28[0]))
		{
			Local_28[1 /*110*/].f_105 = Global_95241.f_28[0];
			UNK_0x73270B3C9CC833FD(Local_28[1 /*110*/].f_105, true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (UNK_0xC844350D5D58C99A(Global_95241.f_9[2]))
		{
			Local_28[0 /*110*/] = Global_95241.f_9[2];
			if (!UNK_0xEB6A8945D1AC98A1(Local_28[0 /*110*/]))
			{
				UNK_0xE8832A9E16A57A1F(Local_28[0 /*110*/], false, 1);
			}
			UNK_0x73270B3C9CC833FD(Local_28[0 /*110*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (UNK_0xC844350D5D58C99A(Global_95241.f_9[3]))
		{
			Local_28[2 /*110*/] = Global_95241.f_9[3];
			if (!UNK_0xEB6A8945D1AC98A1(Local_28[3 /*110*/]))
			{
				UNK_0xE8832A9E16A57A1F(Local_28[2 /*110*/], false, 1);
			}
			UNK_0x73270B3C9CC833FD(Local_28[2 /*110*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (UNK_0xC844350D5D58C99A(Global_95241.f_9[4]))
		{
			Local_28[3 /*110*/] = Global_95241.f_9[4];
			if (!UNK_0xEB6A8945D1AC98A1(Local_28[3 /*110*/]))
			{
				UNK_0xE8832A9E16A57A1F(Local_28[3 /*110*/], false, 1);
			}
			UNK_0x73270B3C9CC833FD(Local_28[3 /*110*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (UNK_0xC844350D5D58C99A(Global_95241.f_9[5]))
		{
			Local_469 = Global_95241.f_9[5];
			if (!UNK_0xEB6A8945D1AC98A1(Local_469))
			{
				UNK_0xE8832A9E16A57A1F(Local_469, false, 1);
			}
			UNK_0x73270B3C9CC833FD(Local_469, true, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (UNK_0xC844350D5D58C99A(Global_95241[3]))
		{
			Local_579[3 /*8*/] = Global_95241[3];
			UNK_0x73270B3C9CC833FD(Local_579[3 /*8*/], true, 1);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!UNK_0xC844350D5D58C99A(Local_579[0 /*8*/]))
		{
			Local_579[0 /*8*/] = UNK_0x122AAB0B1D6F55AD(joaat("BURRITO2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, true, true, false);
		}
		if (!UNK_0xC844350D5D58C99A(Local_579[1 /*8*/]))
		{
			Local_579[1 /*8*/] = UNK_0x122AAB0B1D6F55AD(joaat("BURRITO2"), 145.9856f, -3080f, 4.8962f, 269.0827f, true, true, false);
		}
		if (!UNK_0xC844350D5D58C99A(Local_579[2 /*8*/]))
		{
			Local_579[2 /*8*/] = UNK_0x122AAB0B1D6F55AD(joaat("BURRITO2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, true, true, false);
		}
		if (!UNK_0xC844350D5D58C99A(Local_28[1 /*110*/]))
		{
			Local_28[1 /*110*/] = UNK_0x36F2404464202779(26, joaat("S_M_Y_PESTCONT_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, 1, true);
			UNK_0xD458AC1C1D29C3B4(Local_28[1 /*110*/], 150, false);
			UNK_0x64F9F278AB9DCA2C(Local_28[1 /*110*/], 8, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[1 /*110*/], false, false, 2, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[1 /*110*/], 3, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[1 /*110*/], 4, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[1 /*110*/], 8, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[1 /*110*/], 10, true, false, 0);
			UNK_0x9A28E8CB86CD4694(Local_28[1 /*110*/], false, 1, 0, false);
			UNK_0x9A28E8CB86CD4694(Local_28[1 /*110*/], true, 0, 0, false);
			UNK_0x8B66ED74C2DC2E98(Local_28[1 /*110*/], 2f);
		}
		if (!UNK_0xC844350D5D58C99A(Local_28[1 /*110*/].f_105))
		{
			Local_28[1 /*110*/].f_105 = UNK_0x7707E48765093646(joaat("P_AMB_CLIPBOARD_01"), UNK_0x64430C979F516F7A(Local_28[1 /*110*/], 60309, 0f, 0f, 0f), true, true, false);
			UNK_0x9F528B1B53FBC5D9(Local_28[1 /*110*/].f_105, Local_28[1 /*110*/], UNK_0x4A089F2B762B8D33(Local_28[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
		}
		if (!UNK_0xC844350D5D58C99A(Local_28[0 /*110*/]))
		{
			Local_28[0 /*110*/] = UNK_0x36F2404464202779(26, joaat("S_M_Y_PESTCONT_01"), 155.74f, -3098.89f, 5.93f, false, 1, true);
			UNK_0x64F9F278AB9DCA2C(Local_28[0 /*110*/], false, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[0 /*110*/], 3, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[0 /*110*/], 4, false, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[0 /*110*/], 8, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[0 /*110*/], 10, false, false, 0);
			UNK_0x9A28E8CB86CD4694(Local_28[0 /*110*/], false, 0, 0, false);
			UNK_0x8B66ED74C2DC2E98(Local_28[0 /*110*/], 2f);
		}
		if (!UNK_0xC844350D5D58C99A(Local_28[2 /*110*/]))
		{
			Local_28[2 /*110*/] = UNK_0x36F2404464202779(26, joaat("S_M_Y_PESTCONT_01"), 159.8f, -3085.96f, 6f, false, 1, true);
			UNK_0x64F9F278AB9DCA2C(Local_28[2 /*110*/], false, false, true, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[2 /*110*/], 3, false, 2, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[2 /*110*/], 4, false, 2, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[2 /*110*/], 8, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[2 /*110*/], 10, true, false, 0);
			UNK_0x9A28E8CB86CD4694(Local_28[2 /*110*/], true, 0, 0, false);
			UNK_0x8B66ED74C2DC2E98(Local_28[2 /*110*/], 2f);
		}
		if (!UNK_0xC844350D5D58C99A(Local_28[3 /*110*/]))
		{
			Local_28[3 /*110*/] = UNK_0x36F2404464202779(26, joaat("S_M_Y_PESTCONT_01"), 159.06f, -3085f, 6.01f, false, 1, true);
			UNK_0x64F9F278AB9DCA2C(Local_28[3 /*110*/], false, true, true, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[3 /*110*/], 3, false, 3, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[3 /*110*/], 4, false, 3, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[3 /*110*/], 8, true, false, 0);
			UNK_0x64F9F278AB9DCA2C(Local_28[3 /*110*/], 10, false, false, 0);
			UNK_0x9A28E8CB86CD4694(Local_28[3 /*110*/], false, 0, 0, false);
			UNK_0x8B66ED74C2DC2E98(Local_28[3 /*110*/], 2f);
		}
		if (!UNK_0xC844350D5D58C99A(Local_469) && !UNK_0xC844350D5D58C99A(Local_579[3 /*8*/]))
		{
			if (UNK_0xD8A54335F18763BA() >= 5 && UNK_0xD8A54335F18763BA() < 21)
			{
				Local_579[3 /*8*/] = UNK_0x122AAB0B1D6F55AD(joaat("DILETTANTE2"), 144.84f, -2982.75f, 5.32f, 266.5972f, true, true, false);
				Local_469 = UNK_0x852A19533F896693(Local_579[3 /*8*/], 26, joaat("S_M_M_SECURITY_01"), -1, 1, true);
			}
			else
			{
				Local_579[3 /*8*/] = UNK_0x122AAB0B1D6F55AD(joaat("DILETTANTE2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, true, true, false);
				Local_469 = UNK_0x36F2404464202779(26, joaat("S_M_M_SECURITY_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, 1, true);
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(Local_579[0 /*8*/]))
	{
		func_190(Local_579[0 /*8*/], 0);
		UNK_0x71EDC33E5A423750(Local_579[0 /*8*/], 7);
		UNK_0xAACF4BD59CB35944(Local_579[0 /*8*/], 1);
		UNK_0x44A200C9B6E1CEA6(Local_579[0 /*8*/], true);
		Local_579[0 /*8*/].f_7 = 0;
	}
	if (UNK_0xC844350D5D58C99A(Local_579[1 /*8*/]))
	{
		func_190(Local_579[1 /*8*/], 1);
		UNK_0x56FDC9ADE35F7DB0(Local_579[1 /*8*/], true, true, 0);
		UNK_0x2E81FA494A883541(Local_579[1 /*8*/], 4, 0);
		UNK_0x611DFA9294B339CA(Local_579[1 /*8*/], false, 1, false);
		UNK_0x611DFA9294B339CA(Local_579[1 /*8*/], 4, 0, true);
		UNK_0x44A200C9B6E1CEA6(Local_579[1 /*8*/], true);
		Local_579[1 /*8*/].f_7 = 0;
	}
	if (UNK_0xC844350D5D58C99A(Local_579[2 /*8*/]))
	{
		func_190(Local_579[2 /*8*/], 2);
		UNK_0x611DFA9294B339CA(Local_579[2 /*8*/], 2, 1, false);
		UNK_0x611DFA9294B339CA(Local_579[2 /*8*/], 3, 1, false);
		UNK_0x44A200C9B6E1CEA6(Local_579[2 /*8*/], true);
		Local_579[2 /*8*/].f_7 = 0;
	}
	if (UNK_0xC844350D5D58C99A(Local_28[1 /*110*/]))
	{
		UNK_0x5F2AA9E2843E9403(Local_28[1 /*110*/], &(Local_28[1 /*110*/].f_1));
		UNK_0x11AD11297DC58CC7(Local_28[1 /*110*/], true);
		UNK_0x6DF7BF67E86AAE86(Local_28[1 /*110*/], bLocal_2525);
		UNK_0x33CE5A9E32EA10B2(Local_28[1 /*110*/], 1);
		func_178(Local_28[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		UNK_0x967762C930C0C5FD(Local_28[1 /*110*/], 50f);
		StringCopy(&(Local_28[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_28[1 /*110*/].f_42 = 20f;
		Local_28[1 /*110*/].f_86 = 1;
		Local_28[1 /*110*/].f_87 = 1;
		Local_28[1 /*110*/].f_107 = joaat("P_AMB_CLIPBOARD_01");
		Local_28[1 /*110*/].f_106 = 60309;
		Local_28[1 /*110*/].f_108 = 0;
	}
	if (UNK_0xC844350D5D58C99A(Local_28[0 /*110*/]))
	{
		UNK_0x5F2AA9E2843E9403(Local_28[0 /*110*/], &(Local_28[0 /*110*/].f_1));
		UNK_0x11AD11297DC58CC7(Local_28[0 /*110*/], true);
		UNK_0x6DF7BF67E86AAE86(Local_28[0 /*110*/], bLocal_2525);
		UNK_0x33CE5A9E32EA10B2(Local_28[0 /*110*/], 1);
		func_178(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		UNK_0x967762C930C0C5FD(Local_28[0 /*110*/], 50f);
		StringCopy(&(Local_28[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_28[0 /*110*/].f_86 = 1;
		Local_28[0 /*110*/].f_87 = 1;
		Local_28[0 /*110*/].f_42 = 17.5f;
	}
	if (UNK_0xC844350D5D58C99A(Local_28[2 /*110*/]))
	{
		UNK_0x5F2AA9E2843E9403(Local_28[2 /*110*/], &(Local_28[2 /*110*/].f_1));
		UNK_0x11AD11297DC58CC7(Local_28[2 /*110*/], true);
		UNK_0x6DF7BF67E86AAE86(Local_28[2 /*110*/], bLocal_2525);
		func_178(Local_28[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		UNK_0x33CE5A9E32EA10B2(Local_28[2 /*110*/], 1);
		UNK_0x967762C930C0C5FD(Local_28[2 /*110*/], 50f);
		StringCopy(&(Local_28[2 /*110*/].f_1), "front 1", 16);
		Local_28[2 /*110*/].f_86 = 0;
		Local_28[2 /*110*/].f_87 = 0;
		Local_28[2 /*110*/].f_42 = 17.5f;
	}
	if (UNK_0xC844350D5D58C99A(Local_28[3 /*110*/]))
	{
		UNK_0x5F2AA9E2843E9403(Local_28[3 /*110*/], &(Local_28[3 /*110*/].f_1));
		UNK_0x11AD11297DC58CC7(Local_28[3 /*110*/], true);
		UNK_0x6DF7BF67E86AAE86(Local_28[3 /*110*/], bLocal_2525);
		UNK_0x967762C930C0C5FD(Local_28[3 /*110*/], 50f);
		func_178(Local_28[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		UNK_0x33CE5A9E32EA10B2(Local_28[3 /*110*/], 1);
		StringCopy(&(Local_28[3 /*110*/].f_1), "front 2", 16);
		Local_28[3 /*110*/].f_86 = 0;
		Local_28[3 /*110*/].f_87 = 0;
		Local_28[3 /*110*/].f_42 = 17.5f;
	}
	if (UNK_0xC844350D5D58C99A(Local_469) && UNK_0xC844350D5D58C99A(Local_579[3 /*8*/]))
	{
		UNK_0x5F2AA9E2843E9403(Local_469, &(Local_469.f_1));
		UNK_0x11AD11297DC58CC7(Local_469, true);
		UNK_0x6DF7BF67E86AAE86(Local_469, bLocal_2525);
		UNK_0x26A6B1686E33113F(Local_469, 2);
		UNK_0xAFF39FB306F8E232(Local_469, 2, false);
		UNK_0x262EF6C6306BEA6C(Local_469, joaat("WEAPON_NIGHTSTICK"), -1, false, true);
		UNK_0x298903DD96203C2C(Local_469, 5);
		func_178(Local_469, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_469.f_1), "sec", 16);
		Local_469.f_86 = 1;
		Local_469.f_87 = 1;
		Local_469.f_93 = 0;
		if (Global_95241.f_357 == 1)
		{
			if (!func_189(Local_469, 242628503, 1))
			{
				if (UNK_0xDB27A414FA5965A7(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, 1))
				{
					bLocal_2577 = false;
					UNK_0xDD353D0E9C789D0E(&iVar2);
					UNK_0x1B901F542DF070CF(false, Local_579[3 /*8*/], &cLocal_645, 786599, 0, 0, -1, -1082130432, 0, 1073741824 /* Float: 2f */);
					UNK_0x45F014B3D0466974(false, Local_579[3 /*8*/], 0);
					UNK_0x4A35AD9FC803369E(false, 203.68f, -3132.46f, 4.79f, 1f, 0);
					UNK_0x75ABDC5F81978924(iVar2);
					UNK_0x78ADC381772E3D54(Local_469, iVar2);
					UNK_0xF82EA857DA10E0CD(&iVar2);
				}
				else
				{
					bVar1 = false;
				}
			}
		}
		else if (!func_189(Local_469, -1680762137, 1))
		{
			if (UNK_0xDB27A414FA5965A7(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, 1))
			{
				bLocal_2577 = true;
				UNK_0x819251B8C1EB686D(Local_469, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				bVar1 = false;
			}
		}
	}
	if (((((((((UNK_0xC844350D5D58C99A(Local_579[0 /*8*/]) && UNK_0xC844350D5D58C99A(Local_579[1 /*8*/])) && UNK_0xC844350D5D58C99A(Local_579[2 /*8*/])) && UNK_0xC844350D5D58C99A(Local_579[3 /*8*/])) && UNK_0xC844350D5D58C99A(Local_28[1 /*110*/])) && UNK_0xC844350D5D58C99A(Local_28[0 /*110*/])) && UNK_0xC844350D5D58C99A(Local_28[2 /*110*/])) && UNK_0xC844350D5D58C99A(Local_28[3 /*110*/])) && UNK_0xC844350D5D58C99A(Local_469)) && bVar1)
	{
		return true;
	}
	else if (bVar0)
	{
		return false;
	}
	return false;
}

bool func_189(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xD1960163A3042274(bParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return true;
		}
	}
	return false;
}

void func_190(var uParam0, int iParam1)
{
	Global_98744.f_22[iParam1] = uParam0;
}

void func_191(bool bParam0, bool bParam1, int iParam2)
{
	if (func_193() && func_235())
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
		func_192(0);
	}
}

void func_192(int iParam0)
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

bool func_193()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return true;
	}
	return false;
}

bool func_194(vector3 vParam0, float fParam3)
{
	return func_195(&(Global_105187.f_2890), vParam0, fParam3, 0);
}

bool func_195(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	var uVar5;
	int iVar8;

	if (func_223(uParam0))
	{
		if (func_154(vParam1, 0f, 0f, 0f, 0))
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
		if (func_222(uParam0))
		{
			UNK_0x536F1BE96C726C4B(vParam1, 5f, 1, 0, 0, false);
			func_221(vParam1, 5f, 0);
			bVar0 = UNK_0x122AAB0B1D6F55AD(uParam0->f_12.f_66, vParam1, bParam4, true, true, false);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				vVar1 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					UNK_0x08841CDB215AE18F(bVar0, vParam1, 0, 0, 1);
				}
				func_204(bVar0, &(uParam0->f_12), 0, 1);
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
							func_203(uParam0->f_11, 1);
						}
						else if (UNK_0x7D8B2A8F9EA82DB7(UNK_0x134B62B726CEC8E6(bVar0)))
						{
							func_203(uParam0->f_11, 2);
						}
					}
					UNK_0x316958DDB94DF3FC(bVar0, 0);
					UNK_0x626D5ADA3EFAE431(bVar0, 0);
					UNK_0x44A200C9B6E1CEA6(bVar0, true);
					func_202(bVar0, uParam0->f_11);
				}
				else if ((!func_200(bVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && UNK_0x7F8A39872A07D2CE(UNK_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar8 = func_199(bVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_196(iVar8);
					}
				}
				if (((Global_98744 != 13 && Global_98744 != 10) && Global_98744 != 11) && Global_98744 != 12)
				{
					if (UNK_0x12AB0310C2281427(&(Global_98744.f_3)) == Global_76429)
					{
						if (uParam0->f_12.f_66 == Global_111638.f_32744.f_69[21 /*78*/].f_66)
						{
							func_148(24, 0);
							func_196(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_114(bVar0, uParam0->f_11);
				}
				UNK_0x71199B01895C6202(uParam0->f_12.f_66);
				vVar1 = { UNK_0x68F4C0EC296D3901(bVar0, true) };
			}
			return bVar0;
		}
	}
	return bVar0;
}

void func_196(int iParam0)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (func_143(&(Global_75441.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_150(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] > 3) && (!func_197(0, Global_75441.f_555[0 /*21*/].f_12) || !func_197(1, Global_75441.f_555[0 /*21*/].f_12)))
			{
				func_151(&(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_148(iParam0, 0);
		}
	}
}

bool func_197(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_198(&(Global_111638.f_32744.f_5038[iVar0 /*157*/])))
	{
		return false;
	}
	return func_117(Global_111638.f_32744.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_198(var uParam0)
{
	return *uParam0;
}

int func_199(bool bParam0)
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

bool func_200(bool bParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;

	iVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	switch (iVar0)
	{
		case joaat("CARGOBOB"):
			if (func_201(bParam0, Global_75441.f_139[38], 0))
			{
				func_196(38);
				return true;
			}
			break;
		case joaat("FIRETRUK"):
			if (func_201(bParam0, Global_75441.f_139[43], 1))
			{
				func_196(43);
				return true;
			}
			break;
		case joaat("CUBAN800"):
			iVar5 = UNK_0xA361D247A75E0128(UNK_0x16F2683693E537C9(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_201(bParam0, uVar1[iVar6], 1) && func_65(UNK_0x68F4C0EC296D3901(uVar1[iVar6], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_154(vParam1, 0f, 0f, 0f, 0)) || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam0, true), UNK_0x68F4C0EC296D3901(uVar1[iVar6], true), 1) < 10f)
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
					func_196(14);
					return true;
				}
			}
			break;
		case joaat("SWIFT2"):
			if ((UNK_0xC844350D5D58C99A(Global_75441.f_484[20]) && UNK_0xDF1306B443CD3D15(bParam0, 0)) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[20], 0))
			{
				if (UNK_0x134B62B726CEC8E6(Global_75441.f_484[20]) == joaat("SWIFT2") && UNK_0xF22DC2D0CA24A151(bParam0) == UNK_0xF22DC2D0CA24A151(Global_75441.f_484[20]))
				{
					func_196(20);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_201(bool bParam0, bool bParam1, bool bParam2)
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

void func_202(bool bParam0, int iParam1)
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

void func_203(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (iParam0 == 145 || Global_96085[iVar0] == iParam0)
			{
				if (iParam1 == 0 || UNK_0x134B62B726CEC8E6(Global_96075[iVar0]) == func_144(iParam0, iParam1))
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

void func_204(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (!func_213(bParam0))
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
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_156(iVar0 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_156(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("SANDKING2"))
		{
			iVar1 = 1;
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_156(iVar1 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_156(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_156(iVar2)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_156(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_156(iVar3)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_156(iVar3));
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
					if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_156(iVar4)))
					{
					}
					else
					{
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_156(iVar4));
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
		if (((UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_212(bParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_211())
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
		if (uParam1->f_65 == -1 && !func_158(uParam1->f_66))
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
						func_210(bParam0, uParam1->f_69);
					}
				}
				else
				{
					func_210(bParam0, uParam1->f_69);
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
			func_205(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!UNK_0xAFB8495D36825275(uParam1->f_66) && !UNK_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_156(iVar5 + 1)))
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

int func_205(bool bParam0, var uParam1, var uParam2)
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
	if (func_209(UNK_0x134B62B726CEC8E6(*bParam0), 1) && UNK_0x0ECB5CA5140957AD(*bParam0, 24) != func_208(*bParam0, ((*uParam1)[38] - 1)))
	{
		UNK_0xEE6A1776A67F70C1(*bParam0, 24, func_208(*bParam0, ((*uParam1)[38] - 1)), false);
	}
	func_207(bParam0);
	if (func_206(*bParam0))
	{
		UNK_0xD5A0214B20BCBAD8(*bParam0, 1);
		UNK_0x44A200C9B6E1CEA6(*bParam0, true);
	}
	return 1;
}

bool func_206(bool bParam0)
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

void func_207(bool bParam0)
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

int func_208(bool bParam0, int iParam1)
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

bool func_209(int iParam0, int iParam1)
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

void func_210(bool bParam0, int iParam1)
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

bool func_211()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPINDEPENDENCE"));
}

bool func_212(bool bParam0)
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

bool func_213(bool bParam0)
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!func_219(UNK_0xD803B885F5E47A62(), -1))
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
	if (func_215(UNK_0xD803B885F5E47A62()) == 3)
	{
		if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (func_214(bParam0) != -1)
			{
				return true;
			}
		}
	}
	return false;
}

int func_214(bool bParam0)
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

int func_215(int iParam0)
{
	if (func_218(iParam0) == 233)
	{
		return func_216(iParam0);
	}
	return -1;
}

int func_216(int iParam0)
{
	if (func_217(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_217(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_218(int iParam0)
{
	if (func_217(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_219(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (func_220(bParam0, 1, 1))
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

bool func_220(bool bParam0, bool bParam1, bool bParam2)
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

void func_221(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_143(&(Global_75441.f_555[0 /*21*/]), iVar0))
		{
			if (UNK_0x0EB28750412C3A5A(vParam0, Global_75441.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_196(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_222(var uParam0)
{
	if (func_223(uParam0))
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

bool func_223(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return false;
	}
	if (!func_117(uParam0->f_12.f_66, 0))
	{
		return false;
	}
	if (uParam0->f_12.f_66 == joaat("STUNT") && func_65(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608 /* Float: 0.5f */, 0))
	{
		return false;
	}
	return true;
}

bool func_224()
{
	return func_222(&(Global_105187.f_2890));
}

bool func_225(var uParam0)
{
	if (func_236(uParam0))
	{
		return true;
	}
	return false;
}

bool func_226()
{
	return Global_105187.f_2890.f_12.f_66;
}

bool func_227()
{
	return func_223(&(Global_105187.f_2890));
}

int func_228(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!UNK_0x31609A585163CBAC(iParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_763)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			if (uParam0->f_763[iVar0 /*5*/].f_4 == iParam1)
			{
				uParam0->f_763[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_763[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		UNK_0x0007C2367F4F23F3(iParam1);
		uParam0->f_763[iVar1 /*5*/] = 1;
		uParam0->f_763[iVar1 /*5*/].f_3 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_763[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_229(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (UNK_0x7F8A39872A07D2CE(uParam0->f_273[iVar0 /*5*/].f_4, bParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		UNK_0x3F423BF5B8125A50(bParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_273[iVar1 /*5*/].f_4 = bParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_230(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (UNK_0x7F8A39872A07D2CE(uParam0->f_374[iVar0 /*5*/].f_4, bParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		UNK_0x29398344B9E5B8A7(bParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_374[iVar1 /*5*/].f_4 = bParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_231(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_879[iVar0 /*5*/])
		{
			uParam0->f_879[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_930[iVar0 /*5*/])
		{
			uParam0->f_930[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_868)
	{
		uParam0->f_868.f_2 = 1;
	}
	if (uParam0->f_860)
	{
		uParam0->f_860.f_2 = 1;
	}
	if (uParam0->f_864)
	{
		uParam0->f_864.f_2 = 1;
	}
}

int func_232(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (func_233(vParam1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if (func_154(uParam0->f_868.f_4, vParam1, 0) && uParam0->f_868.f_10 == fParam4)
		{
			uParam0->f_868.f_2 = 0;
			if (!uParam0->f_868.f_1)
			{
				uParam0->f_982 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	UNK_0x9E632F16E887F781(vParam1, fParam4, iParam5);
	uParam0->f_868 = 1;
	uParam0->f_868.f_3 = UNK_0x1C0640BA9A7327B3();
	uParam0->f_868.f_4 = { vParam1 };
	uParam0->f_868.f_7 = { 0f, 0f, 0f };
	uParam0->f_868.f_10 = fParam4;
	uParam0->f_982 = 1;
	return 1;
}

bool func_233(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_234(int iParam0, var uParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 183.533f, -2946.199f, 5.5113f };
			*bParam2 = 177.8164f;
			break;
		case 1:
			*uParam1 = { 692.067f, -1004.812f, 21.9059f };
			*bParam2 = 359.5735f;
			break;
	}
}

bool func_235()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

bool func_236(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (uParam0->f_982)
	{
		bVar0 = true;
		bVar1 = false;
		while (bVar1 < 30)
		{
			if ((*uParam0)[bVar1 /*5*/])
			{
				if (!(uParam0[bVar1 /*5*/])->f_1)
				{
					if (UNK_0xB87F6CF6E5628C67((uParam0[bVar1 /*5*/])->f_4))
					{
						(uParam0[bVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[bVar1 /*5*/])->f_2)
				{
					if ((uParam0[bVar1 /*5*/])->f_1)
					{
						UNK_0x71199B01895C6202((uParam0[bVar1 /*5*/])->f_4);
						func_238(uParam0[bVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 20)
		{
			if (uParam0->f_273[bVar1 /*5*/])
			{
				if (!uParam0->f_273[bVar1 /*5*/].f_1)
				{
					if (UNK_0xB4AE0788C1587752(uParam0->f_273[bVar1 /*5*/].f_4))
					{
						uParam0->f_273[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[bVar1 /*5*/].f_1)
					{
						UNK_0x8D17794CE3273D70(uParam0->f_273[bVar1 /*5*/].f_4);
						func_238(&(uParam0->f_273[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 20)
		{
			if (uParam0->f_374[bVar1 /*5*/])
			{
				if (!uParam0->f_374[bVar1 /*5*/].f_1)
				{
					if (UNK_0x1C2E18E9C63BEB77(uParam0->f_374[bVar1 /*5*/].f_4))
					{
						uParam0->f_374[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[bVar1 /*5*/].f_1)
					{
						UNK_0x2F3540C2227116A3(uParam0->f_374[bVar1 /*5*/].f_4);
						func_238(&(uParam0->f_374[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_656[bVar1 /*6*/])
			{
				if (!uParam0->f_656[bVar1 /*6*/].f_1)
				{
					if (UNK_0x83D8570832F172A7(uParam0->f_656[bVar1 /*6*/].f_5))
					{
						uParam0->f_656[bVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[bVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[bVar1 /*6*/].f_1)
					{
						UNK_0xE17FDF9E3068281B(&(uParam0->f_656[bVar1 /*6*/].f_5));
						func_238(&(uParam0->f_656[bVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 30)
		{
			if (uParam0->f_475[bVar1 /*6*/])
			{
				if (!uParam0->f_475[bVar1 /*6*/].f_1)
				{
					if (UNK_0x3DDA6C6A285628E4(uParam0->f_475[bVar1 /*6*/].f_5, uParam0->f_475[bVar1 /*6*/].f_4))
					{
						uParam0->f_475[bVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[bVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[bVar1 /*6*/].f_1)
					{
						UNK_0xDB8844D4B7C60440(uParam0->f_475[bVar1 /*6*/].f_5, uParam0->f_475[bVar1 /*6*/].f_4);
						func_238(&(uParam0->f_475[bVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (uParam0->f_202[bVar1 /*7*/])
			{
				if (!uParam0->f_202[bVar1 /*7*/].f_1)
				{
					if (UNK_0x1787731C4D1D6B19(uParam0->f_202[bVar1 /*7*/].f_4))
					{
						uParam0->f_202[bVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[bVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[bVar1 /*7*/].f_1)
					{
						UNK_0x2914827AC2790D54(uParam0->f_202[bVar1 /*7*/].f_4);
						func_238(&(uParam0->f_202[bVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (uParam0->f_151[bVar1 /*5*/])
			{
				if (!uParam0->f_151[bVar1 /*5*/].f_1)
				{
					if (UNK_0x1F04E7FA44219580(uParam0->f_151[bVar1 /*5*/].f_4))
					{
						uParam0->f_151[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[bVar1 /*5*/].f_1)
					{
						UNK_0x058E3033265DBA9A(uParam0->f_151[bVar1 /*5*/].f_4);
						func_238(&(uParam0->f_151[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_737[bVar1 /*5*/])
			{
				if (!uParam0->f_737[bVar1 /*5*/].f_1)
				{
					if (UNK_0xAE317D00A5A55DF6(uParam0->f_737[bVar1 /*5*/].f_4, 0, -1))
					{
						uParam0->f_737[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[bVar1 /*5*/].f_1)
					{
						UNK_0x42740B44BA8D7B43(uParam0->f_737[bVar1 /*5*/].f_4);
						func_238(&(uParam0->f_737[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 3)
		{
			if (uParam0->f_763[bVar1 /*5*/])
			{
				if (!uParam0->f_763[bVar1 /*5*/].f_1)
				{
					if (UNK_0xBD307E66C0669BFC(uParam0->f_763[bVar1 /*5*/].f_4))
					{
						uParam0->f_763[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[bVar1 /*5*/].f_1)
					{
						UNK_0x25BB71BA267FE042(uParam0->f_763[bVar1 /*5*/].f_4);
						func_238(&(uParam0->f_763[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 7)
		{
			if (!UNK_0xEA6BC48857E0AC4C(uParam0->f_687[bVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[bVar1 /*7*/])
				{
					iVar2 = UNK_0x60AFCA824DC1AD70(uParam0->f_687[bVar1 /*7*/].f_5);
					if (!uParam0->f_687[bVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[bVar1 /*7*/].f_1 = 1;
								break;
							case 0:
								uParam0->f_687[bVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							case 3:
								uParam0->f_687[bVar1 /*7*/].f_1 = 0;
								func_238(&(uParam0->f_687[bVar1 /*7*/]));
								break;
							case -1:
								uParam0->f_687[bVar1 /*7*/].f_1 = 0;
								UNK_0xBCE1F37016C0E41B(uParam0->f_687[bVar1 /*7*/].f_5);
								uParam0->f_687[bVar1 /*7*/] = 0;
								bVar0 = false;
								break;
						}
					}
				}
				else if (UNK_0xBD307E66C0669BFC(uParam0->f_687[bVar1 /*7*/].f_6))
				{
					uParam0->f_687[bVar1 /*7*/].f_5 = UNK_0x112DEE377BFBC278(uParam0->f_687[bVar1 /*7*/].f_4);
					uParam0->f_687[bVar1 /*7*/].f_3 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_687[bVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[bVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[bVar1 /*7*/])
					{
						if (uParam0->f_687[bVar1 /*7*/].f_1)
						{
							UNK_0xBCE1F37016C0E41B(uParam0->f_687[bVar1 /*7*/].f_5);
							func_238(&(uParam0->f_687[bVar1 /*7*/]));
							uParam0->f_687[bVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_238(&(uParam0->f_687[bVar1 /*7*/]));
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (uParam0->f_879[bVar1 /*5*/])
			{
				if (!uParam0->f_879[bVar1 /*5*/].f_1)
				{
					if (UNK_0xC76EFA929F5277B9(uParam0->f_879[bVar1 /*5*/].f_4))
					{
						uParam0->f_879[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_879[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_879[bVar1 /*5*/].f_1)
					{
						UNK_0x70EAF6AF279DEC61(uParam0->f_879[bVar1 /*5*/].f_4);
						func_238(&(uParam0->f_879[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_930[bVar1 /*5*/])
			{
				if (!uParam0->f_930[bVar1 /*5*/].f_1)
				{
					if (UNK_0x93776B156FD8804A(uParam0->f_930[bVar1 /*5*/].f_4))
					{
						uParam0->f_930[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_930[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_930[bVar1 /*5*/].f_1)
					{
						func_238(&(uParam0->f_930[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[bVar1 /*5*/])
			{
				if (!uParam0->f_779[bVar1 /*5*/].f_1)
				{
					if (UNK_0x67C1D9E5B91B2E37(bVar1))
					{
						uParam0->f_779[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[bVar1 /*5*/].f_1)
					{
						UNK_0x11CCD0ACA866C6C5(bVar1, 1);
						func_238(&(uParam0->f_779[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		if (uParam0->f_860)
		{
			if (!uParam0->f_860.f_1)
			{
				if (UNK_0x25F7A4D42AF2AB93())
				{
					uParam0->f_860.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_860.f_2)
			{
				if (uParam0->f_860.f_1)
				{
					UNK_0x29D7581AEF4440C2();
					func_238(&(uParam0->f_860));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_864)
		{
			if (!uParam0->f_864.f_1)
			{
				if (UNK_0xEE4B5EDF70ABF498())
				{
					uParam0->f_864.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_864.f_2)
			{
				if (uParam0->f_864.f_1)
				{
					UNK_0xFE5EFE178CCBA358();
					func_238(&(uParam0->f_864));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_868 && UNK_0xEB880D98B5988D0C())
		{
			if (!uParam0->f_868.f_1)
			{
				if (UNK_0x68367101660E33F0())
				{
					uParam0->f_868.f_1 = 1;
					if (uParam0->f_983)
					{
						UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
						func_237(uParam0);
						uParam0->f_983 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_868.f_2)
			{
				UNK_0x486B4ADE317F0689();
				func_238(&(uParam0->f_868));
			}
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_956[bVar1 /*5*/])
			{
				if (!uParam0->f_956[bVar1 /*5*/].f_1)
				{
					if (UNK_0x27117E2CDD4D67C3(uParam0->f_956[bVar1 /*5*/].f_4))
					{
						uParam0->f_956[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_956[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_956[bVar1 /*5*/].f_1)
					{
						func_238(&(uParam0->f_956[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		if (bVar0)
		{
			uParam0->f_982 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_237(var uParam0)
{
	if (UNK_0xEB880D98B5988D0C())
	{
		UNK_0x486B4ADE317F0689();
		func_238(&(uParam0->f_868));
	}
}

void func_238(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_239()
{
	if (func_240())
	{
		func_8(1);
		UNK_0x10FAF14A60A0DBE1();
	}
}

bool func_240()
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

void func_241()
{
	func_259(&(Local_1668[1 /*8*/]), 65562, "AI Controller");
	func_259(&(Local_1668[0 /*8*/]), 63926, "Dialogue");
	func_259(&(Local_1668[3 /*8*/]), 62953, "Alarms & Wanted Level");
	func_259(&(Local_1668[4 /*8*/]), 62401, "Music Manager");
}

void func_242(var uParam0)
{
	if (!func_245(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((UNK_0xEA16CBEF43A5CA3C(&cLocal_626) || UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) || func_22(&(Local_1668[3 /*8*/])))
			{
				UNK_0xC92DB9682A650680("JHP1A_ATTACK");
				func_244(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (func_108(UNK_0x16F2683693E537C9(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					UNK_0xC92DB9682A650680("JHP1A_START");
					func_244(uParam0, 2, 0);
				}
				break;
			case 2:
				if (iLocal_2573 == 3 || iLocal_2573 == 2)
				{
					UNK_0xC92DB9682A650680("JHP1A_WAREHOUSE");
					func_244(uParam0, 3, 0);
				}
				break;
			case 3:
				if (iLocal_2573 == 6 || iLocal_2573 == 9)
				{
					UNK_0xC92DB9682A650680("JHP1A_VAN");
					func_244(uParam0, 4, 0);
				}
				break;
			case 4:
				if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					if (iLocal_2573 == 9 && func_108(UNK_0x16F2683693E537C9(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (UNK_0x13896FDECC859926("JHP1A_RADIO_1"))
						{
							UNK_0xC92DB9682A650680("JHP1A_RADIO_1");
							func_243(uParam0);
						}
					}
				}
				break;
			case 5:
				if ((UNK_0xEA16CBEF43A5CA3C(&cLocal_626) && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) && bLocal_2569)
				{
					func_244(uParam0, 6, 0);
				}
				break;
			case 6:
				if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					if (UNK_0x13896FDECC859926("JHP1A_RADIO_2"))
					{
						UNK_0xC92DB9682A650680("JHP1A_RADIO_2");
						func_244(uParam0, 6, 0);
						func_243(uParam0);
					}
				}
				break;
		}
	}
	if (func_245(uParam0))
	{
		UNK_0x51B096AAC60548C1(1f);
	}
}

void func_243(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_244(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

bool func_245(var uParam0)
{
	if (*uParam0 == 4)
	{
		return true;
	}
	return false;
}

void func_246(var uParam0)
{
	if (!func_245(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_244(uParam0, 2, 2000);
				break;
			case 2:
				if (UNK_0x93776B156FD8804A(&cLocal_626))
				{
					UNK_0x6021F0389B7BAA70(&cLocal_626, false);
					func_249(&cLocal_2350, vLocal_642, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_2350, "", 32);
					func_244(uParam0, 3, 5000);
				}
				break;
			case 3:
				func_247(&Local_469, 3, 1, "ALARM EVENT SET IT", 1, 0);
				UNK_0xCB9603FE12CFDEF4(UNK_0xD803B885F5E47A62(), 2, 0);
				UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
				UNK_0x34D79252800B23FF(2);
				UNK_0xCE1A2E36474A9D6F(UNK_0xD803B885F5E47A62(), 0);
				UNK_0x060F249A9A3E3F4E(false);
				UNK_0xB61FC7262CB2E7A1(UNK_0xD803B885F5E47A62());
				UNK_0x3245169DF7F47EAF(UNK_0xD803B885F5E47A62());
				uParam0->f_2 = UNK_0x1C0640BA9A7327B3() + 15000;
				func_244(uParam0, 4, 0);
				break;
			case 4:
				if (UNK_0x1C0640BA9A7327B3() > uParam0->f_2)
				{
					UNK_0xCE1A2E36474A9D6F(UNK_0xD803B885F5E47A62(), 1);
					UNK_0x060F249A9A3E3F4E(true);
					UNK_0x34D79252800B23FF(5);
					bLocal_2569 = true;
					func_243(uParam0);
				}
				UNK_0xB61FC7262CB2E7A1(UNK_0xD803B885F5E47A62());
				UNK_0x3245169DF7F47EAF(UNK_0xD803B885F5E47A62());
				break;
		}
	}
}

int func_247(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	return func_248(bParam0, iParam1, bParam3, 0f, 0f, 0f, 0, bParam2, bParam4, bParam5);
}

int func_248(bool bParam0, int iParam1, char* sParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (func_179(*bParam0))
	{
		if (!bParam7 || iParam1 >= bParam0->f_5)
		{
			bParam0->f_38 = UNK_0x1C0640BA9A7327B3();
			if (iParam1 != bParam0->f_5 || !UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), sParam2))
			{
				bParam0->f_6 = bParam0->f_5;
				bParam0->f_5 = iParam1;
				bParam0->f_17 = { bParam0->f_9 };
				StringCopy(&(bParam0->f_9), sParam2, 32);
				if (bParam9)
				{
					bParam0->f_36 = 1;
					bParam0->f_35 = 0;
				}
				else
				{
					bParam0->f_36 = 0;
					bParam0->f_35 = bParam8;
				}
				bParam0->f_47 = 0;
				bParam0->f_46 = 0;
				bParam0->f_48 = 0;
				bParam0->f_37 = UNK_0x1C0640BA9A7327B3();
				if (!func_233(vParam3))
				{
					bParam0->f_88 = { vParam3 };
				}
				if (bParam6 != 0 && UNK_0xC844350D5D58C99A(bParam6))
				{
					bParam0->f_91 = bParam6;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_249(char* sParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<32> Var0;

	Var0 = -1;
	StringCopy(&(Var0.f_1), sParam0, 64);
	StringCopy(&(Var0.f_17), "", 24);
	Var0.f_28 = iParam5;
	Var0.f_26 = fParam4;
	Var0.f_29 = iParam6;
	Var0.f_30 = iParam7;
	Var0.f_31 = iParam8;
	Var0.f_23 = { vParam1 };
	func_250(&Var0, 0);
}

int func_250(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if ((UNK_0xEA6BC48857E0AC4C(&(uParam0->f_1)) && *uParam0 != -1) && (!UNK_0xC844350D5D58C99A(Local_28[*uParam0 /*110*/]) || UNK_0xEB6A8945D1AC98A1(Local_28[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !UNK_0xEA6BC48857E0AC4C(&(Local_1709[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1709 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (UNK_0xEA6BC48857E0AC4C(bParam1) || UNK_0x7F8A39872A07D2CE(bParam1, &(uParam0->f_17))))
		{
			Local_1709[iVar0 /*32*/] = *uParam0;
			Local_1709[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1709[iVar0 /*32*/].f_23 = { UNK_0x68F4C0EC296D3901(Local_28[*uParam0 /*110*/], true) };
			}
			else
			{
				Local_1709[iVar0 /*32*/].f_23 = { uParam0->f_23 };
			}
			Local_1709[iVar0 /*32*/].f_26 = uParam0->f_26;
			Local_1709[iVar0 /*32*/].f_28 = uParam0->f_28;
			Local_1709[iVar0 /*32*/].f_29 = uParam0->f_29;
			Local_1709[iVar0 /*32*/].f_27 = UNK_0x1C0640BA9A7327B3();
			Local_1709[iVar0 /*32*/].f_30 = uParam0->f_30;
			Local_1709[iVar0 /*32*/].f_31 = uParam0->f_31;
			iVar1 = 1;
		}
		else
		{
			iVar1 = 0;
		}
		*uParam0 = -1;
		StringCopy(&(uParam0->f_1), "", 64);
		uParam0->f_23 = { 0f, 0f, 0f };
		uParam0->f_26 = 0f;
		uParam0->f_28 = 0;
		uParam0->f_29 = 0;
		uParam0->f_27 = 0;
		uParam0->f_30 = 0;
		uParam0->f_31 = 0;
		return iVar1;
	}
	return 0;
}

void func_251(var uParam0)
{
	vector3 vVar0[24];
	bool bVar6;
	vector3 vVar7;

	if (!func_245(uParam0))
	{
		if (func_49())
		{
			iLocal_2524 = -1;
		}
		else if (iLocal_2524 == -1)
		{
			iLocal_2524 = UNK_0x1C0640BA9A7327B3();
			iLocal_2550 = -1;
			bLocal_2551 = true;
		}
		if (iLocal_2528 != -1 && !UNK_0xEA6BC48857E0AC4C(&cLocal_2530))
		{
			if (((Local_28[iLocal_2528 /*110*/] != 0 && UNK_0xC844350D5D58C99A(Local_28[iLocal_2528 /*110*/])) && !UNK_0xEB6A8945D1AC98A1(Local_28[iLocal_2528 /*110*/])) && !UNK_0x2C5F61A6EA7B6E03(Local_28[iLocal_2528 /*110*/]))
			{
				if (!UNK_0x869EFD0BC0868856(Local_28[iLocal_2528 /*110*/]))
				{
					if (func_49())
					{
						if (bLocal_2540 && (bLocal_2551 || iLocal_2529 > iLocal_2550))
						{
							if (bLocal_2552)
							{
								iLocal_2555 = iLocal_2545;
								iLocal_2556 = iLocal_2550;
								MemCopy(&cLocal_2557, {func_258()}, 4);
								MemCopy(&cLocal_2561, {func_257()}, 4);
								bLocal_2565 = bLocal_2551;
								bLocal_2566 = bLocal_2553;
							}
							if (bLocal_2541)
							{
								func_11();
							}
							else
							{
								func_46();
							}
						}
					}
					if (func_48())
					{
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_2524) > iLocal_2538)
						{
							if (func_256(iLocal_2528))
							{
								MemCopy(&cVar0, {cLocal_622}, 6);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_2528)
							{
								case 0:
									func_45(&uLocal_2358, 4, Local_28[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								case 1:
									func_45(&uLocal_2358, 5, Local_28[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								case 2:
									func_45(&uLocal_2358, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								case 3:
									func_45(&uLocal_2358, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (UNK_0xEA6BC48857E0AC4C(&cLocal_2534))
							{
								if (func_255(&uLocal_2358, &cVar0, &cLocal_2530, 8, 0, 0, 0))
								{
									bVar6 = true;
								}
							}
							else if (func_254(&uLocal_2358, &cVar0, &cLocal_2530, &cLocal_2534, 8, 0, 0))
							{
								bVar6 = true;
							}
							if (bVar6)
							{
								func_250(&(Local_28[iLocal_2528 /*110*/].f_50), &cLocal_2530);
								iLocal_2550 = iLocal_2529;
								bLocal_2551 = bLocal_2542;
								bLocal_2552 = bLocal_2544;
								bLocal_2553 = bLocal_2543;
								iLocal_2528 = -1;
								iLocal_2529 = -1;
								StringCopy(&cLocal_2530, "", 16);
								iLocal_2538 = 0;
								fLocal_2539 = 9999999f;
								bLocal_2540 = false;
								bLocal_2541 = false;
								bLocal_2542 = true;
								bLocal_2544 = false;
								bLocal_2543 = false;
							}
						}
					}
				}
			}
			else
			{
				iLocal_2528 = -1;
				iLocal_2529 = -1;
				StringCopy(&cLocal_2530, "", 16);
				iLocal_2538 = 0;
				fLocal_2539 = 9999999f;
				bLocal_2540 = false;
				bLocal_2541 = false;
				bLocal_2542 = true;
				bLocal_2543 = false;
			}
		}
		if (((func_49() && iLocal_2545 != -1) && bLocal_2553) && !UNK_0xEA6BC48857E0AC4C(&cLocal_2546))
		{
			vVar7 = { UNK_0x68F4C0EC296D3901(Local_28[iLocal_2545 /*110*/], true) };
			if (func_108(UNK_0x16F2683693E537C9(), vVar7, 1) >= 25f)
			{
				iLocal_2555 = iLocal_2545;
				iLocal_2556 = iLocal_2550;
				MemCopy(&cLocal_2557, {func_258()}, 4);
				MemCopy(&cLocal_2561, {func_257()}, 4);
				bLocal_2565 = bLocal_2551;
				bLocal_2566 = bLocal_2553;
				func_11();
				iLocal_2545 = -1;
				iLocal_2550 = -1;
				StringCopy(&cLocal_2546, "", 16);
				bLocal_2551 = false;
				bLocal_2553 = false;
			}
		}
		if (iLocal_2555 != -1 && !UNK_0xEA6BC48857E0AC4C(&cLocal_2557))
		{
			if (Local_28[iLocal_2555 /*110*/].f_5 > iLocal_2556)
			{
				iLocal_2555 = -1;
				iLocal_2556 = -1;
				StringCopy(&cLocal_2557, "", 16);
				StringCopy(&cLocal_2561, "", 16);
				bLocal_2565 = true;
			}
		}
		if (iLocal_2528 == -1 && UNK_0xEA6BC48857E0AC4C(&cLocal_2530))
		{
			if (func_48() && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 10000)
			{
				if (iLocal_2555 != -1 && !UNK_0xEA6BC48857E0AC4C(&cLocal_2557))
				{
					func_253(iLocal_2555, &cLocal_2557, iLocal_2556, 0, 0, bLocal_2565, 0, 1, &cLocal_2561, bLocal_2566);
					iLocal_2555 = -1;
					iLocal_2556 = -1;
					StringCopy(&cLocal_2557, "", 16);
					StringCopy(&cLocal_2561, "", 16);
					bLocal_2565 = true;
				}
			}
		}
	}
	func_252(bLocal_2566);
}

void func_252(bool bParam0)
{
	if (bParam0)
	{
	}
}

bool func_253(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, char* sParam8, bool bParam9)
{
	float fVar0;
	bool bVar1;

	fVar0 = func_107(Local_28[iParam0 /*110*/], UNK_0x16F2683693E537C9(), 1);
	if ((iParam2 > iLocal_2529 || iParam2 == 4) || ((iParam2 == iLocal_2529 && (fVar0 < fLocal_2539 || (func_256(iParam0) && !func_256(iLocal_2528)))) && iParam2 != 5))
	{
		switch (iParam2)
		{
			case 0:
				if (fVar0 < 20f)
				{
					bVar1 = true;
				}
				break;
			default:
				if (fVar0 < 40f)
				{
					bVar1 = true;
				}
				break;
		}
		if (bVar1)
		{
			iLocal_2528 = iParam0;
			iLocal_2529 = iParam2;
			StringCopy(&cLocal_2530, sParam1, 16);
			StringCopy(&cLocal_2534, sParam8, 16);
			fLocal_2539 = fVar0;
			bLocal_2540 = bParam3;
			bLocal_2541 = bParam4;
			iLocal_2538 = iParam6;
			bLocal_2542 = bParam5;
			bLocal_2544 = bParam7;
			bLocal_2543 = bParam9;
			return true;
		}
	}
	return false;
}

bool func_254(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_44(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_29(sParam2, iParam4, 0);
}

bool func_255(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_44(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_29(sParam2, iParam3, 0);
}

bool func_256(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return true;
	}
	return false;
}

struct<6> func_257()
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

struct<6> func_258()
{
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_259(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_260(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;

	if (!func_245(uParam0))
	{
		bLocal_2570 = true;
		if (!bLocal_2568)
		{
			if (func_181())
			{
				bLocal_2568 = true;
				iLocal_2571 = UNK_0x1C0640BA9A7327B3();
			}
		}
		else if ((UNK_0x1C0640BA9A7327B3() - iLocal_2571) > 3000)
		{
			bLocal_2568 = false;
			iLocal_2571 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (func_179(Local_28[iVar0 /*110*/]))
			{
				func_280(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_179(Local_469))
		{
			func_280(&Local_469);
		}
		iVar1 = 0;
		while (iVar1 < Local_1709)
		{
			if (!UNK_0xEA6BC48857E0AC4C(&(Local_1709[iVar1 /*32*/].f_1)) && Local_1709[iVar1 /*32*/].f_27 != -1)
			{
				if (Local_1709[iVar1 /*32*/].f_28 == -1 || (UNK_0x1C0640BA9A7327B3() - Local_1709[iVar1 /*32*/].f_27) < Local_1709[iVar1 /*32*/].f_28)
				{
					if (Local_1709[iVar1 /*32*/].f_29 <= 0 || (UNK_0x1C0640BA9A7327B3() - Local_1709[iVar1 /*32*/].f_27) > Local_1709[iVar1 /*32*/].f_29)
					{
						if (Local_1709[iVar1 /*32*/] != -1 && func_179(Local_28[Local_1709[iVar1 /*32*/] /*110*/]))
						{
							vVar2 = { UNK_0x68F4C0EC296D3901(Local_28[Local_1709[iVar1 /*32*/] /*110*/], true) };
							Local_1709[iVar1 /*32*/].f_23 = { vVar2 };
						}
						else
						{
							vVar2 = { Local_1709[iVar1 /*32*/].f_23 };
						}
						if (!func_22(&(Local_1668[3 /*8*/])))
						{
							if (Local_1709[iVar1 /*32*/].f_31 && UNK_0x0EB28750412C3A5A(vVar2, vLocal_642, 1) < 35f)
							{
								func_170(&(Local_1668[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_28)
						{
							if (Local_1709[iVar1 /*32*/] == -1 || (iVar0 != Local_1709[iVar1 /*32*/] && Local_28[Local_1709[iVar1 /*32*/] /*110*/].f_5 >= Local_28[iVar0 /*110*/].f_5))
							{
								if (UNK_0xC844350D5D58C99A(Local_28[iVar0 /*110*/]) && !UNK_0xEB6A8945D1AC98A1(Local_28[iVar0 /*110*/]))
								{
									if (func_108(Local_28[iVar0 /*110*/], vVar2, 1) < (Local_1709[iVar1 /*32*/].f_26 + Local_28[iVar0 /*110*/].f_42))
									{
										Local_28[iVar0 /*110*/].f_34 = iVar1;
										if (Local_1709[iVar1 /*32*/].f_30)
										{
											if (!func_22(&(Local_1668[3 /*8*/])))
											{
												func_170(&(Local_1668[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_2350, {Local_1709[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((UNK_0x1C0640BA9A7327B3() - Local_1709[iVar1 /*32*/].f_27) > Local_1709[iVar1 /*32*/].f_28 + 2000)
				{
					StringCopy(&(Local_1709[iVar1 /*32*/].f_1), "", 64);
					Local_1709[iVar1 /*32*/] = -1;
					Local_1709[iVar1 /*32*/].f_23 = { 0f, 0f, 0f };
					Local_1709[iVar1 /*32*/].f_26 = 0f;
					Local_1709[iVar1 /*32*/].f_27 = -1;
					Local_1709[iVar1 /*32*/].f_28 = -1;
					Local_1709[iVar1 /*32*/].f_29 = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (func_179(Local_28[iVar0 /*110*/]))
			{
				func_274(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_179(Local_469))
		{
			func_265(&Local_469);
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (func_179(Local_28[iVar0 /*110*/]))
			{
				func_264(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_179(Local_469))
		{
			func_262(&Local_469);
		}
		iVar0 = 0;
		while (iVar0 < Local_28)
		{
			if (UNK_0xC844350D5D58C99A(Local_28[iVar0 /*110*/].f_105))
			{
				if (((!UNK_0xC844350D5D58C99A(Local_28[iVar0 /*110*/]) || UNK_0xEB6A8945D1AC98A1(Local_28[iVar0 /*110*/])) || UNK_0x4580010DFDF4D53F(Local_28[iVar0 /*110*/])) || (Local_28[iVar0 /*110*/].f_108 && Local_28[iVar0 /*110*/].f_5 != 0))
				{
					bVar5 = true;
				}
				else if (Local_28[iVar0 /*110*/].f_5 != 0)
				{
					bVar6 = true;
				}
				if (bVar5 || bVar6)
				{
					if (UNK_0x50B5F6F3C29E9380(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/]))
					{
						UNK_0x15AFB6CBDE990FB6(Local_28[iVar0 /*110*/].f_105, 1, true);
					}
					if (bVar5)
					{
						UNK_0xEEEE2E5FA6F78DF0(&(Local_28[iVar0 /*110*/].f_105));
					}
					else if (bVar6)
					{
						UNK_0xF690C84DADBB3551(&(Local_28[iVar0 /*110*/].f_105));
					}
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			else if (Local_28[iVar0 /*110*/].f_107 != 0 && Local_28[iVar0 /*110*/].f_106 != -1)
			{
				if (Local_28[iVar0 /*110*/].f_109 && UNK_0xB87F6CF6E5628C67(Local_28[iVar0 /*110*/].f_107))
				{
					Local_28[iVar0 /*110*/].f_105 = UNK_0x7707E48765093646(Local_28[iVar0 /*110*/].f_107, UNK_0x64430C979F516F7A(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106, 0f, 0f, 0f), true, true, false);
					UNK_0x9F528B1B53FBC5D9(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/], UNK_0x4A089F2B762B8D33(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_28)
		{
			if (UNK_0xC844350D5D58C99A(Local_28[iVar1 /*110*/]) && !UNK_0xEB6A8945D1AC98A1(Local_28[iVar1 /*110*/]))
			{
				UNK_0xE910A68AA670B4AA(Local_28[iVar1 /*110*/]);
				UNK_0x432CE6C256EE1D4A(Local_28[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_261();
	}
	if (func_245(uParam0))
	{
	}
}

void func_261()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_179(Local_579[iVar0 /*8*/]))
		{
			UNK_0xE910A68AA670B4AA(Local_579[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_262(bool bParam0)
{
	int iVar0;
	bool bVar1;

	UNK_0x2ECF845953E95D1B(*bParam0);
	if (func_263(*bParam0))
	{
		Local_469.f_46 = 0;
	}
	switch (bParam0->f_5)
	{
		case 0:
			if (UNK_0xD8A54335F18763BA() >= 5 && UNK_0xD8A54335F18763BA() < 21)
			{
				if ((!func_189(*bParam0, 1647992574, 1) && !func_189(*bParam0, 242628503, 1)) || bLocal_2577)
				{
					if (UNK_0x4742C50E93110B10(203.68f, -3132.46f, 4.79f, 1f, 1))
					{
						UNK_0x4A35AD9FC803369E(*bParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						bLocal_2577 = false;
					}
				}
			}
			else if (!func_189(*bParam0, -1680762137, 1) || !bLocal_2577)
			{
				if (UNK_0x4742C50E93110B10(162.69f, -3115.67f, 4.95f, 1f, 1))
				{
					UNK_0x3003D662BC385BD6(*bParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					bLocal_2577 = true;
				}
			}
			break;
		case 3:
			UNK_0xD5EF6A937E06E46F(*bParam0, 1, -1, "DEFAULT_ACTION");
			switch (UNK_0x12AB0310C2281427(&(bParam0->f_9)))
			{
				case joaat("FIGHT"):
				case 1681313069:
				case 1156217463:
					if (UNK_0x440C646F2F11A2A1(*bParam0, joaat("WEAPON_PISTOL"), 0))
					{
						UNK_0x650567883F5E3136(*bParam0, joaat("WEAPON_PISTOL"));
					}
					if (!UNK_0x440C646F2F11A2A1(*bParam0, joaat("WEAPON_NIGHTSTICK"), 0))
					{
						UNK_0x262EF6C6306BEA6C(*bParam0, joaat("WEAPON_NIGHTSTICK"), -1, true, true);
					}
					if (UNK_0xCAE036C45E7FC720(*bParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("WEAPON_NIGHTSTICK"))
						{
							UNK_0x5745EA6329A91E29(*bParam0, joaat("WEAPON_NIGHTSTICK"), false);
						}
					}
					break;
				case joaat("KILLED"):
				case 1518302817:
				case -1298712083:
				case joaat("PLAYER_KO"):
				case -1645534839:
				case 880647822:
				case joaat("GUNSHOT"):
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (UNK_0x440C646F2F11A2A1(*bParam0, joaat("WEAPON_NIGHTSTICK"), 0))
					{
						UNK_0x650567883F5E3136(*bParam0, joaat("WEAPON_NIGHTSTICK"));
					}
					if (!UNK_0x440C646F2F11A2A1(*bParam0, joaat("WEAPON_PISTOL"), 0))
					{
						UNK_0x262EF6C6306BEA6C(*bParam0, joaat("WEAPON_PISTOL"), -1, true, true);
					}
					if (UNK_0xCAE036C45E7FC720(*bParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("WEAPON_PISTOL"))
						{
							UNK_0x5745EA6329A91E29(*bParam0, joaat("WEAPON_PISTOL"), false);
						}
					}
					break;
			}
			if (!func_189(*bParam0, 780511057, 1) || func_263(*bParam0))
			{
				UNK_0x6C3AE6E278DB3D0E(*bParam0, UNK_0x16F2683693E537C9(), 0, 16);
				UNK_0x0C8C0C840C2D1AD2(*bParam0, UNK_0x16F2683693E537C9(), -1, 2048, 2);
			}
			break;
		case 1:
			switch (UNK_0x12AB0310C2281427(&(bParam0->f_9)))
			{
				case 686645495:
					if (UNK_0xC844350D5D58C99A(bParam0->f_91))
					{
						if (!UNK_0xBFDF2644D7CBD7C5(*bParam0, UNK_0x68F4C0EC296D3901(bParam0->f_91, true), 180f) && (UNK_0x1C0640BA9A7327B3() - bParam0->f_37) < 5000)
						{
							if (!func_189(*bParam0, -875674219, 1) || func_263(*bParam0))
							{
								UNK_0xF96A174EE26D7588(*bParam0, bParam0->f_91, -1);
								UNK_0x0C8C0C840C2D1AD2(*bParam0, bParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_189(*bParam0, -2015108952, 1) || func_263(*bParam0))
						{
							UNK_0xB5F6ECE04E1BA9FF(*bParam0, bParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				case -1225951737:
					if (bParam0->f_41 && !func_65(bParam0->f_88, bParam0->f_43, 1f, 0))
					{
						bParam0->f_88 = { bParam0->f_43 };
						bVar1 = true;
					}
					if (!func_233(bParam0->f_88))
					{
						if (!UNK_0xBFDF2644D7CBD7C5(*bParam0, bParam0->f_88, 90f) && (UNK_0x1C0640BA9A7327B3() - bParam0->f_37) < 5000)
						{
							if ((!func_189(*bParam0, 1464580341, 1) || func_263(*bParam0)) || bVar1)
							{
								UNK_0x796BDF31572BB055(*bParam0, bParam0->f_88, 0);
								UNK_0xDBE4EC9C88839074(*bParam0, bParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_189(*bParam0, 713668775, 1) || func_263(*bParam0)) || bVar1)
						{
							UNK_0x96167B03C5A77156(*bParam0, bParam0->f_43, 1f, -1, 3f, 0, 1193033728);
						}
					}
					break;
				case -1940555668:
					break;
				case -927541383:
					if (!func_233(bParam0->f_88))
					{
						if (!func_189(*bParam0, 1464580341, 1) || func_263(*bParam0))
						{
							UNK_0x796BDF31572BB055(*bParam0, bParam0->f_88, -1);
							UNK_0xDBE4EC9C88839074(*bParam0, bParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						UNK_0x93D47DFD0AE94949(*bParam0, -1);
					}
					break;
				case 58299323:
					if (UNK_0xC844350D5D58C99A(bParam0->f_91))
					{
						if (!func_189(*bParam0, -875674219, 1) || func_263(*bParam0))
						{
							UNK_0xF96A174EE26D7588(*bParam0, bParam0->f_91, -1);
							UNK_0x0C8C0C840C2D1AD2(*bParam0, bParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						UNK_0x93D47DFD0AE94949(*bParam0, -1);
					}
					break;
			}
			break;
	}
}

bool func_263(struct<26> Param0, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)
{
	if (Param0.f_5 != Param0.f_7 || !UNK_0x7F8A39872A07D2CE(&(Param0.f_9), &(Param0.f_25)))
	{
		return true;
	}
	return false;
}

void func_264(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	bool bVar8;
	bool bVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	int iVar14;

	UNK_0x2ECF845953E95D1B(*uParam0);
	if (func_263(*uParam0))
	{
		uParam0->f_46 = 0;
	}
	switch (uParam0->f_5)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < Local_28)
			{
				if (Local_28[iVar1 /*110*/] == *uParam0)
				{
					iVar0 = iVar1;
				}
				iVar1++;
			}
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						if (!func_189(*uParam0, 1647992574, 1))
						{
							if (UNK_0x4742C50E93110B10(155.74f, -3098.89f, 4.93f, 0.5f, 1))
							{
								UNK_0x4A35AD9FC803369E(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					case 1:
						if ((!func_189(*uParam0, 242628503, 1) || func_263(*uParam0)) && UNK_0xB4AE0788C1587752("misslsdhsclipboard@base"))
						{
							if (!UNK_0xB4ECF989E2C1DAC8(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_2526);
								if (!func_65(UNK_0x68F4C0EC296D3901(*uParam0, true), 126.8496f, -3089.249f, 4.9141f, 0.75f, 0))
								{
									UNK_0x96167B03C5A77156(false, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, 0, 264.2812f);
								}
								UNK_0xE655C47E46F9A7E4(false, 264.2812f, 0);
								UNK_0xC6EB89C59F2AF6B8(false, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, false, 0, 0, 0);
								UNK_0x75ABDC5F81978924(iLocal_2526);
								UNK_0x78ADC381772E3D54(*uParam0, iLocal_2526);
								UNK_0xF82EA857DA10E0CD(&iLocal_2526);
							}
							if (UNK_0xC844350D5D58C99A(Local_579[2 /*8*/]))
							{
								UNK_0xDBE4EC9C88839074(*uParam0, UNK_0xBF584557291FDD31(Local_579[2 /*8*/], UNK_0xF653B9B22DA806A9(Local_579[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_46 = 0;
						}
						else if (UNK_0xB4AE0788C1587752("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_46)
							{
								case 0:
								case 2:
									if (uParam0->f_46 == 0 && UNK_0x4F1B602325013CC2(*uParam0) == 2)
									{
										uParam0->f_109 = 1;
									}
									if (((uParam0->f_46 == 0 && UNK_0x4F1B602325013CC2(*uParam0) == 2) || uParam0->f_46 == 2) && UNK_0x1C0640BA9A7327B3() > uParam0->f_37)
									{
										UNK_0xDD353D0E9C789D0E(&iLocal_2526);
										switch (UNK_0x09AC81E49EA267F7(false, 3))
										{
											case 0:
												StringCopy(&cVar2, "idle_a", 24);
												break;
											case 1:
												StringCopy(&cVar2, "idle_b", 24);
												break;
											case 2:
												StringCopy(&cVar2, "idle_c", 24);
												break;
										}
										UNK_0xC6EB89C59F2AF6B8(false, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, false, 0, 0, 0);
										UNK_0xC6EB89C59F2AF6B8(false, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, false, 0, 0, 0);
										UNK_0x75ABDC5F81978924(iLocal_2526);
										UNK_0x78ADC381772E3D54(*uParam0, iLocal_2526);
										UNK_0xF82EA857DA10E0CD(&iLocal_2526);
										uParam0->f_46 = 1;
									}
									break;
								case 1:
									if (UNK_0x4F1B602325013CC2(*uParam0) == 1)
									{
										uParam0->f_46++;
									}
									break;
							}
						}
						break;
					case 2:
					case 3:
						if (!func_189(*uParam0, 1647992574, 1))
						{
							if (UNK_0x4742C50E93110B10(159.82f, -3085.93f, 5f, 0.1f, 1))
							{
								UNK_0x4A35AD9FC803369E(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (UNK_0x4742C50E93110B10(160.15f, -3084.79f, 4.99f, 0.1f, 1))
							{
								UNK_0x4A35AD9FC803369E(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (UNK_0x4742C50E93110B10(159.09f, -3085.02f, 5.01f, 0.1f, 1))
							{
								UNK_0x4A35AD9FC803369E(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
				}
			}
			break;
		case 1:
			switch (UNK_0x12AB0310C2281427(&(uParam0->f_9)))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (UNK_0xC844350D5D58C99A(uParam0->f_91))
					{
						if (!UNK_0xBFDF2644D7CBD7C5(*uParam0, UNK_0x68F4C0EC296D3901(uParam0->f_91, true), 180f) && (UNK_0x1C0640BA9A7327B3() - uParam0->f_37) < 5000)
						{
							if (!func_189(*uParam0, -875674219, 1) || func_263(*uParam0))
							{
								UNK_0xF96A174EE26D7588(*uParam0, uParam0->f_91, -1);
								UNK_0x0C8C0C840C2D1AD2(*uParam0, uParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_189(*uParam0, -2015108952, 1) || func_263(*uParam0))
						{
							UNK_0xB5F6ECE04E1BA9FF(*uParam0, uParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				case -1225951737:
					if (uParam0->f_41 && !func_65(uParam0->f_88, uParam0->f_43, 1f, 0))
					{
						uParam0->f_88 = { uParam0->f_43 };
						bVar8 = true;
					}
					if (!func_233(uParam0->f_88))
					{
						if (!UNK_0xBFDF2644D7CBD7C5(*uParam0, uParam0->f_88, 90f) && (UNK_0x1C0640BA9A7327B3() - uParam0->f_37) < 5000)
						{
							if ((!func_189(*uParam0, 1464580341, 1) || func_263(*uParam0)) || bVar8)
							{
								UNK_0x796BDF31572BB055(*uParam0, uParam0->f_88, 0);
								UNK_0xDBE4EC9C88839074(*uParam0, uParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_189(*uParam0, 713668775, 1) || func_263(*uParam0)) || bVar8)
						{
							UNK_0x96167B03C5A77156(*uParam0, uParam0->f_43, 1f, -1, 3f, 0, 1193033728);
						}
					}
					break;
				case -1940555668:
					break;
				case -927541383:
					if (!func_233(uParam0->f_88))
					{
						if (!func_189(*uParam0, 1464580341, 1) || func_263(*uParam0))
						{
							UNK_0x796BDF31572BB055(*uParam0, uParam0->f_88, -1);
							UNK_0xDBE4EC9C88839074(*uParam0, uParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						UNK_0x93D47DFD0AE94949(*uParam0, -1);
					}
					break;
				case 58299323:
					if (UNK_0xC844350D5D58C99A(uParam0->f_91))
					{
						if (!func_189(*uParam0, -875674219, 1) || func_263(*uParam0))
						{
							UNK_0xF96A174EE26D7588(*uParam0, uParam0->f_91, -1);
							UNK_0x0C8C0C840C2D1AD2(*uParam0, uParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						UNK_0x93D47DFD0AE94949(*uParam0, -1);
					}
					break;
			}
			break;
		case 2:
			if (((UNK_0x7F8A39872A07D2CE(&(uParam0->f_9), "ENT_FOOT_LEAVE") || UNK_0x7F8A39872A07D2CE(&(uParam0->f_9), "ENT_VEH_LEAVE")) || UNK_0x7F8A39872A07D2CE(&(uParam0->f_9), "WH_FOOT_LEAVE")) || UNK_0x7F8A39872A07D2CE(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!func_189(*uParam0, 242628503, 1) || !UNK_0x7069CC4DE1EA3FAA(*uParam0, UNK_0x16F2683693E537C9(), 90f)) || func_263(*uParam0))
				{
					UNK_0xDD353D0E9C789D0E(&iLocal_2526);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
					UNK_0x93D47DFD0AE94949(false, 2000);
					UNK_0x25644C31B4B6E9F3(iLocal_2526, 1);
					UNK_0x75ABDC5F81978924(iLocal_2526);
					UNK_0x78ADC381772E3D54(*uParam0, iLocal_2526);
					UNK_0xF82EA857DA10E0CD(&iLocal_2526);
					UNK_0x0C8C0C840C2D1AD2(*uParam0, UNK_0x16F2683693E537C9(), -1, 2048, 2);
				}
			}
			else
			{
				if (UNK_0xC844350D5D58C99A(bLocal_2576) && UNK_0xDF1306B443CD3D15(bLocal_2576, 0))
				{
					fVar11 = func_107(UNK_0x16F2683693E537C9(), bLocal_2576, 1);
				}
				if ((iLocal_2573 == 3 || iLocal_2573 == 2) || iLocal_2573 == 8)
				{
					bVar9 = UNK_0x16F2683693E537C9();
					fVar12 = 2f;
				}
				else if (iLocal_2573 == 0 || iLocal_2573 == 1)
				{
					bVar9 = UNK_0x16F2683693E537C9();
					fVar12 = 1f;
				}
				else if (iLocal_2573 == 5 && UNK_0xC844350D5D58C99A(bLocal_2576))
				{
					if (fVar11 > 10f)
					{
						bVar9 = UNK_0x16F2683693E537C9();
						fVar12 = 2f;
					}
					else
					{
						bVar9 = bLocal_2576;
						fVar12 = 2f;
					}
				}
				else if (iLocal_2573 == 4 && UNK_0xC844350D5D58C99A(bLocal_2576))
				{
					bVar9 = bLocal_2576;
					fVar12 = 1f;
				}
				if (UNK_0xC844350D5D58C99A(bVar9))
				{
					fVar10 = func_107(*uParam0, bVar9, 1);
				}
				if (fVar10 <= 7.5f)
				{
					if (((!func_189(*uParam0, 242628503, 1) && !func_189(*uParam0, 1227113341, 1)) || !UNK_0x7069CC4DE1EA3FAA(*uParam0, UNK_0x16F2683693E537C9(), 90f)) || func_263(*uParam0))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_2526);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
						UNK_0x93D47DFD0AE94949(false, 2000);
						UNK_0x25644C31B4B6E9F3(iLocal_2526, 1);
						UNK_0x75ABDC5F81978924(iLocal_2526);
						UNK_0x78ADC381772E3D54(*uParam0, iLocal_2526);
						UNK_0xF82EA857DA10E0CD(&iLocal_2526);
						UNK_0x0C8C0C840C2D1AD2(*uParam0, UNK_0x16F2683693E537C9(), -1, 2048, 2);
					}
				}
				else if (!func_189(*uParam0, 1227113341, 1) || func_263(*uParam0))
				{
					if (fVar12 > 1f)
					{
						fVar13 = 6f;
					}
					else
					{
						fVar13 = 3f;
					}
					UNK_0xE185F110925D87DB(*uParam0, bVar9, -1, fVar13, fVar12, 1073741824 /* Float: 2f */, 0);
					UNK_0x0C8C0C840C2D1AD2(*uParam0, UNK_0x16F2683693E537C9(), -1, 2048, 2);
				}
			}
			break;
		case 3:
			switch (UNK_0x12AB0310C2281427(&(uParam0->f_9)))
			{
				case joaat("FIGHT"):
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case joaat("PLAYER_KO"):
					if (UNK_0xCAE036C45E7FC720(*uParam0, &iVar14, 1))
					{
						if (iVar14 != joaat("WEAPON_UNARMED"))
						{
							UNK_0x5745EA6329A91E29(*uParam0, joaat("WEAPON_UNARMED"), false);
						}
					}
					if (!func_189(*uParam0, 780511057, 1))
					{
						UNK_0x6C3AE6E278DB3D0E(*uParam0, UNK_0x16F2683693E537C9(), 0, 16);
					}
					break;
				case 1093888274:
					if ((!func_189(*uParam0, 242628503, 1) || !UNK_0x7069CC4DE1EA3FAA(*uParam0, UNK_0x16F2683693E537C9(), 90f)) || func_263(*uParam0))
					{
						UNK_0xDD353D0E9C789D0E(&iLocal_2526);
						UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), 0);
						UNK_0x93D47DFD0AE94949(false, 2000);
						UNK_0x25644C31B4B6E9F3(iLocal_2526, 1);
						UNK_0x75ABDC5F81978924(iLocal_2526);
						UNK_0x78ADC381772E3D54(*uParam0, iLocal_2526);
						UNK_0xF82EA857DA10E0CD(&iLocal_2526);
						UNK_0x0C8C0C840C2D1AD2(*uParam0, UNK_0x16F2683693E537C9(), -1, 2048, 2);
					}
					break;
			}
			break;
		case 5:
			if (func_108(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f)
			{
				if (!func_189(*uParam0, 1805844857, 1))
				{
					UNK_0xF3268524E9BE6D6E(*uParam0, UNK_0x16F2683693E537C9(), 1000f, -1, 0, 0);
				}
			}
			else if ((!func_189(*uParam0, 1805844857, 1) && !func_189(*uParam0, 713668775, 1)) || func_263(*uParam0))
			{
				UNK_0x96167B03C5A77156(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 1048576000 /* Float: 0.25f */, 1, 1193033728);
			}
			break;
		case 4:
			switch (UNK_0x12AB0310C2281427(&(uParam0->f_9)))
			{
				case -1645534839:
					if (!func_189(*uParam0, -1519143300, 1) || func_263(*uParam0))
					{
						UNK_0xF9B5DB58254657F1(*uParam0, -1, UNK_0x16F2683693E537C9(), 0, 1);
					}
					break;
			}
			break;
	}
}

void func_265(bool bParam0)
{
	var uVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;

	UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &uVar0, 1);
	fVar1 = func_107(UNK_0x16F2683693E537C9(), *bParam0, 1);
	if (UNK_0xE147126C9AD09A60(*bParam0))
	{
		bVar3 = true;
	}
	if (UNK_0xB87D13D0C064E9D1(*bParam0, UNK_0x16F2683693E537C9(), 1))
	{
		if (UNK_0x54648B774DB42A3A(*bParam0, joaat("WEAPON_UNARMED"), 0))
		{
			bVar2 = true;
		}
	}
	bVar4 = func_272(*bParam0, &bVar5, &bVar6, &bVar7);
	if ((bVar4 && bVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_247(bParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_247(bParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((UNK_0xFA4CE147B4D9AEE0(*bParam0, 124) || UNK_0xFA4CE147B4D9AEE0(*bParam0, 125)) || UNK_0xFA4CE147B4D9AEE0(*bParam0, 126)) || UNK_0xFA4CE147B4D9AEE0(*bParam0, 22)) || UNK_0xFA4CE147B4D9AEE0(*bParam0, 23)) || UNK_0xFA4CE147B4D9AEE0(*bParam0, 88))
	{
		func_247(bParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (bParam0->f_39 && func_271(4))
	{
		func_247(bParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (bParam0->f_39 && func_270(*bParam0, 2))
	{
		func_247(bParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((bParam0->f_39 && fVar1 < 8f) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 5))
	{
		func_247(bParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((bParam0->f_39 || bParam0->f_41) && iLocal_2573 == 11)
	{
		if (bParam0->f_39)
		{
			func_247(bParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_269(bParam0, 1, "HEARD_SEC_CAR", Local_579[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((bParam0->f_39 || bParam0->f_41) && iLocal_2573 == 6)
	{
		if (bParam0->f_39)
		{
			func_247(bParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_269(bParam0, 1, "HEARD_VAN", Local_579[func_102() /*8*/], 1, 1, 0);
		}
	}
	else if ((bParam0->f_39 || bParam0->f_41) && iLocal_2573 == 10)
	{
		if (bParam0->f_39)
		{
			func_269(bParam0, 3, "STEALING_VAN", Local_579[func_54() /*8*/], 1, 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_269(bParam0, 1, "HEARD_VAN", Local_579[func_54() /*8*/], 1, 1, 0);
		}
	}
	else if (((bVar2 || UNK_0xFA4CE147B4D9AEE0(*bParam0, 42)) || UNK_0xFA4CE147B4D9AEE0(*bParam0, 114)) || func_267(*bParam0, 0))
	{
		func_247(bParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((bVar3 || UNK_0xFA4CE147B4D9AEE0(*bParam0, 103)) || func_267(*bParam0, 1))
	{
		func_247(bParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((bParam0->f_5 != 3 && bParam0->f_84) && (bParam0->f_39 || bParam0->f_41)) && (fVar1 < 8f || func_108(UNK_0x16F2683693E537C9(), vLocal_642, 1) < 40f))
	{
		if (bParam0->f_39)
		{
			func_247(bParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_266(bParam0, 1, "HEARD_PLAYER", UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1, 1, 0);
		}
	}
	else if (bParam0->f_5 != 5 && bVar4)
	{
		if ((bVar5 && bVar6) && bVar7)
		{
			func_247(bParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_247(bParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (bParam0->f_34 > -1 && bParam0->f_34 < (Local_1709 - 1))
	{
		bVar8 = Local_1709[bParam0->f_34 /*32*/].f_30;
		switch (UNK_0x12AB0310C2281427(&(Local_1709[bParam0->f_34 /*32*/].f_1)))
		{
			case joaat("KILLED"):
			case 1518302817:
			case -1298712083:
			case joaat("PLAYER_KO"):
			case -1645534839:
			case 880647822:
			case 1921975061:
			case joaat("FIGHT"):
			case 1681313069:
			case 1156217463:
			case 1682434916:
			case -924218668:
			case joaat("GUNSHOT"):
			case 600040296:
				func_247(bParam0, 3, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), 0, bVar8);
				break;
			case -1225951737:
				func_266(bParam0, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1, 0, bVar8);
				break;
			case 2074432461:
			case 686645495:
				func_269(bParam0, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), Local_579[func_102() /*8*/], 1, 0, bVar8);
				break;
		}
	}
	bParam0->f_34 = -1;
	if (bParam0->f_7 != bParam0->f_5)
	{
		bParam0->f_8 = 1;
	}
	else
	{
		bParam0->f_8 = 0;
	}
	bParam0->f_7 = bParam0->f_5;
	if (!UNK_0x7F8A39872A07D2CE(&(bParam0->f_25), &(bParam0->f_9)))
	{
		bParam0->f_33 = 1;
	}
	else
	{
		bParam0->f_33 = 0;
	}
	bParam0->f_25 = { bParam0->f_9 };
	switch (bParam0->f_5)
	{
		case 0:
			break;
		case 1:
			switch (UNK_0x12AB0310C2281427(&(bParam0->f_9)))
			{
				case 58299323:
					if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_37) > 3000)
					{
						func_247(bParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				case -1225951737:
					if (((UNK_0x1C0640BA9A7327B3() - bParam0->f_37) > 4000 && func_108(*bParam0, bParam0->f_88, 1) < 3f) && UNK_0xA91A066C1723AE72(*bParam0))
					{
						func_247(bParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				case -927541383:
					if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_37) > 4000 && !UNK_0x82FE7F11C00330B0(*bParam0))
					{
						func_247(bParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		case 3:
			switch (UNK_0x12AB0310C2281427(&(bParam0->f_9)))
			{
				case joaat("FIGHT"):
				case 1681313069:
				case 1156217463:
					if ((((UNK_0x1C0640BA9A7327B3() - bParam0->f_38) > 8000 && func_108(UNK_0x16F2683693E537C9(), vLocal_642, 1) > 65f) && (func_107(UNK_0x16F2683693E537C9(), *bParam0, 1) > 10f || (UNK_0x1C0640BA9A7327B3() - bParam0->f_38) > 16000)) && !UNK_0x82FE7F11C00330B0(*bParam0))
					{
						func_247(bParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
				case joaat("KILLED"):
				case 1518302817:
				case -1298712083:
				case joaat("PLAYER_KO"):
				case -1645534839:
				case 880647822:
				case joaat("GUNSHOT"):
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (func_108(UNK_0x16F2683693E537C9(), vLocal_642, 1) > 300f && func_107(UNK_0x16F2683693E537C9(), *bParam0, 1) > 150f)
					{
						func_247(bParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_266(bool bParam0, int iParam1, bool bParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8)
{
	return func_248(bParam0, iParam1, bParam2, vParam3, 0, bParam6, bParam7, bParam8);
}

bool func_267(struct<110> Param0, int iParam110)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (func_268(Param0, Local_28[iVar0 /*110*/], iParam110))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_268(bool bParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, bool bParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, int iParam220)
{
	if (UNK_0xC844350D5D58C99A(bParam110) && UNK_0xB87D13D0C064E9D1(bParam110, UNK_0x16F2683693E537C9(), iParam220))
	{
		if (func_107(bParam0, bParam110, 1) < 15f)
		{
			if (UNK_0x6AB6A474D29FA7D8(bParam0, bParam110))
			{
				return true;
			}
		}
	}
	return false;
}

int func_269(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	return func_248(bParam0, iParam1, bParam2, 0f, 0f, 0f, bParam3, bParam4, bParam5, bParam6);
}

bool func_270(bool bParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)
{
	if ((bParam0 != 0 && UNK_0xC844350D5D58C99A(bParam0)) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), iParam110) && (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), bParam0) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), bParam0)))
		{
			return true;
		}
	}
	return false;
}

bool func_271(int iParam0)
{
	if (UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), iParam0) && (UNK_0x85651FDAB8414096(UNK_0xD803B885F5E47A62()) || UNK_0xBBFFD1937ED16008(UNK_0xD803B885F5E47A62())))
	{
		return true;
	}
	return false;
}

int func_272(struct<110> Param0, bool bParam110, bool bParam111, bool bParam112)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (func_273(Param0, Local_28[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
		{
			if (bVar2 && bVar4)
			{
				Local_28[iVar0 /*110*/].f_85 = 1;
			}
			if (!bVar1)
			{
				bVar1 = true;
				*bParam110 = bVar2;
				*bParam111 = bVar3;
				*bParam112 = bVar4;
			}
			else
			{
				if (bVar2)
				{
					*bParam110 = 1;
				}
				if (bVar3)
				{
					*bParam111 = 1;
				}
				if (bVar4)
				{
					*bParam112 = 1;
				}
			}
			if (Local_28[iVar0 /*110*/].f_85)
			{
				*bParam111 = 1;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	*bParam110 = 0;
	*bParam111 = 0;
	*bParam112 = 0;
	return 0;
}

bool func_273(struct<40> Param0, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, struct<104> Param110, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, bool bParam220, bool bParam221, bool bParam222)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0xC844350D5D58C99A(Param110) && UNK_0xEB6A8945D1AC98A1(Param110))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(Param110, false) };
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(Param0, true), vVar0, 1) < 10f)
		{
			if (UNK_0x6AB6A474D29FA7D8(Param0, Param110))
			{
				if ((UNK_0x1C0640BA9A7327B3() - Param110.f_103) < 3000)
				{
					*bParam220 = 1;
				}
				else
				{
					*bParam220 = 0;
				}
				if (*bParam220)
				{
					bVar3 = UNK_0xA390E7DD86EDBEA0(Param110);
					if (UNK_0xEC560E589DF8370E(bVar3))
					{
						bVar4 = UNK_0x940C1429253D3B1B(bVar3);
						if ((bVar4 == UNK_0x16F2683693E537C9() && !UNK_0xEB6A8945D1AC98A1(bVar4)) && Param0.f_39)
						{
							*bParam221 = 1;
						}
						else
						{
							*bParam221 = 0;
						}
					}
					else
					{
						*bParam221 = 0;
					}
				}
				else
				{
					*bParam221 = 0;
				}
				bVar5 = UNK_0xF71162D1C14C71E7(Param110);
				if (bVar5 == joaat("WEAPON_UNARMED") || (bVar5 != joaat("WEAPON_UNARMED") && UNK_0xEAAE5E58EF8421BD(bVar5) == 2))
				{
					*bParam222 = 1;
				}
				return true;
			}
		}
	}
	return false;
}

void func_274(bool bParam0)
{
	var uVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	char cVar4[64];
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	char cVar27[48];
	bool bVar33;
	float fVar34;
	float fVar35;
	vector3 vVar36;
	vector3 vVar39;
	char cVar42[32];

	UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &uVar0, 1);
	fVar1 = func_107(UNK_0x16F2683693E537C9(), *bParam0, 1);
	if (UNK_0xE147126C9AD09A60(*bParam0))
	{
		bVar3 = true;
	}
	if (UNK_0xB87D13D0C064E9D1(*bParam0, UNK_0x16F2683693E537C9(), 1))
	{
		if (UNK_0x54648B774DB42A3A(*bParam0, joaat("WEAPON_UNARMED"), 0))
		{
			bVar2 = true;
		}
	}
	bVar20 = func_272(*bParam0, &bVar21, &bVar22, &bVar23);
	if (((bParam0->f_5 != 5 && bVar20) && bVar21) && !bVar23)
	{
		if (bVar22)
		{
			func_247(bParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_247(bParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((UNK_0xFA4CE147B4D9AEE0(*bParam0, 124) || UNK_0xFA4CE147B4D9AEE0(*bParam0, 125)) || UNK_0xFA4CE147B4D9AEE0(*bParam0, 126)) || UNK_0xFA4CE147B4D9AEE0(*bParam0, 22)) || UNK_0xFA4CE147B4D9AEE0(*bParam0, 23)) || UNK_0xFA4CE147B4D9AEE0(*bParam0, 88))
	{
		func_247(bParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((bParam0->f_39 && bParam0->f_5 != 4) && func_271(4))
	{
		func_247(bParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (bParam0->f_39 && func_270(*bParam0, 2))
	{
		func_247(bParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((bParam0->f_39 && fVar1 < 8f) && bParam0->f_5 != 4) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) && UNK_0x03A10A5707B2BB1F(UNK_0x16F2683693E537C9(), 5))
	{
		func_247(bParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((bParam0->f_39 || bParam0->f_41) && iLocal_2573 == 7)
	{
		if (bParam0->f_39)
		{
			func_247(bParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_266(bParam0, 1, "HEARD_PLAYER", UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1, 1, 0);
		}
	}
	else if ((bParam0->f_39 || bParam0->f_41) && iLocal_2573 == 6)
	{
		if (bParam0->f_39)
		{
			func_247(bParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_266(bParam0, 1, "HEARD_PLAYER", UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1, 1, 0);
		}
	}
	else if ((bParam0->f_39 || bParam0->f_41) && iLocal_2573 == 10)
	{
		if (bParam0->f_39)
		{
			func_269(bParam0, 3, "STEALING_VAN", Local_579[func_54() /*8*/], 1, 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_269(bParam0, 1, "HEARD_VAN", Local_579[func_54() /*8*/], 1, 1, 0);
		}
	}
	else if (((bVar2 || UNK_0xFA4CE147B4D9AEE0(*bParam0, 42)) || UNK_0xFA4CE147B4D9AEE0(*bParam0, 114)) || func_267(*bParam0, 0))
	{
		func_247(bParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((bVar3 || UNK_0xFA4CE147B4D9AEE0(*bParam0, 103)) || func_267(*bParam0, 1))
	{
		func_247(bParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((bParam0->f_5 != 3 && bParam0->f_84) && (bParam0->f_39 || bParam0->f_41)) && (fVar1 < 8f || func_108(UNK_0x16F2683693E537C9(), vLocal_642, 1) < 40f))
	{
		if (bParam0->f_39)
		{
			func_247(bParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_266(bParam0, 1, "HEARD_PLAYER", UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1, 1, 0);
		}
	}
	else if (bParam0->f_5 != 5 && bVar20)
	{
		if ((bVar21 && bVar22) && bVar23)
		{
			func_247(bParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar22)
		{
			func_247(bParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((bParam0->f_39 || bParam0->f_41) && (bParam0->f_86 || bParam0->f_87)) && iLocal_2573 == 9) && !UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "SEE_VAN_LEAVING")) && !UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "SEE_VAN_LEAVING_1")) && !UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "CHECK_DRIVER")) && func_108(UNK_0x16F2683693E537C9(), vLocal_642, 1) < 15f)
	{
		if (bParam0->f_39)
		{
			func_269(bParam0, 1, "SEE_VAN_LEAVING", Local_579[func_102() /*8*/], 1, 1, 0);
		}
		else if (bParam0->f_41)
		{
			func_269(bParam0, 1, "HEARD_VAN", Local_579[func_102() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_2573 != 9)
	{
		if ((bParam0->f_86 && (((iLocal_2573 == 0 || iLocal_2573 == 1) || iLocal_2573 == 4) || bParam0->f_5 == 1)) || (bParam0->f_87 && ((iLocal_2573 == 3 || iLocal_2573 == 2) || iLocal_2573 == 5)))
		{
			if ((iLocal_2573 == 5 || iLocal_2573 == 4) && UNK_0xF649DD3BF44195C7(*bParam0, bLocal_2576, 19))
			{
				switch (iLocal_2573)
				{
					case 5:
						StringCopy(&cVar4, "WH_DITCH_VEH", 64);
						break;
					case 4:
						StringCopy(&cVar4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_247(bParam0, 2, 1, &cVar4, 1, 0);
			}
			else if (bParam0->f_39)
			{
				switch (iLocal_2573)
				{
					case 0:
						StringCopy(&cVar4, "ENT_FOOT", 64);
						break;
					case 1:
						StringCopy(&cVar4, "ENT_VEH", 64);
						break;
					case 2:
						StringCopy(&cVar4, "WH_FOOT", 64);
						break;
					case 3:
						StringCopy(&cVar4, "WH_VEH", 64);
						break;
					case 5:
						StringCopy(&cVar4, "WH_DITCH_VEH", 64);
						break;
					case 4:
						StringCopy(&cVar4, "ENT_DITCH_VEH", 64);
						break;
					case -1:
						if (bParam0->f_5 == 1)
						{
							StringCopy(&cVar4, "ENT_FOOT", 64);
						}
						break;
				}
				func_247(bParam0, 2, 1, &cVar4, 1, 0);
			}
			else if (bParam0->f_41)
			{
				func_266(bParam0, 1, "HEARD_PLAYER", UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1, 1, 0);
			}
		}
	}
	if (bParam0->f_34 > -1 && bParam0->f_34 < (Local_1709 - 1))
	{
		bVar24 = Local_1709[bParam0->f_34 /*32*/].f_30;
		switch (UNK_0x12AB0310C2281427(&(Local_1709[bParam0->f_34 /*32*/].f_1)))
		{
			case joaat("KILLED"):
			case 1518302817:
			case -1298712083:
				if (bParam0->f_5 != 4)
				{
					func_247(bParam0, 5, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			case joaat("PLAYER_KO"):
				if (bParam0->f_5 != 4)
				{
					func_247(bParam0, 3, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			case -1645534839:
				if (bParam0->f_5 != 4)
				{
					if (func_108(*bParam0, Local_1709[bParam0->f_34 /*32*/].f_23, 1) < 5f)
					{
						func_247(bParam0, 4, 1, "GUN_AIMED_AT", 0, bVar24);
					}
					else
					{
						func_247(bParam0, 5, 1, "SEEN_WEAPON", 0, bVar24);
					}
				}
				break;
			case 880647822:
				if (bParam0->f_5 != 4)
				{
					func_247(bParam0, 5, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			case 1921975061:
				if (bParam0->f_5 != 4)
				{
					func_247(bParam0, 5, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			case joaat("FIGHT"):
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (bParam0->f_5 != 4)
				{
					func_247(bParam0, 3, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((bParam0->f_5 != 4 && !UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "STEALING_VAN")) && !UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "GET_IN_VAN")) && !UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "EXIT_VAN"))
				{
					func_247(bParam0, 3, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			case joaat("GUNSHOT"):
				if (bParam0->f_5 != 4)
				{
					func_247(bParam0, 5, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			case -426892158:
				if (bParam0->f_86)
				{
					func_247(bParam0, 2, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			case -1461435341:
				if (bParam0->f_86)
				{
					func_247(bParam0, 2, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			case -972653884:
				if (bParam0->f_87)
				{
					func_247(bParam0, 2, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			case -520621538:
				if (bParam0->f_87)
				{
					func_247(bParam0, 2, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			case -1349994105:
				if (bParam0->f_87)
				{
					func_247(bParam0, 2, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			case -1225951737:
				if (bParam0->f_87)
				{
					func_266(bParam0, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1, 0, bVar24);
				}
				break;
			case 2074432461:
				if (bParam0->f_87)
				{
					func_269(bParam0, 1, &(Local_1709[bParam0->f_34 /*32*/].f_1), Local_579[func_102() /*8*/], 1, 0, bVar24);
				}
				break;
		}
	}
	bParam0->f_34 = -1;
	if (bParam0->f_7 != bParam0->f_5)
	{
		bParam0->f_8 = 1;
	}
	else
	{
		bParam0->f_8 = 0;
	}
	bParam0->f_7 = bParam0->f_5;
	if (!UNK_0x7F8A39872A07D2CE(&(bParam0->f_25), &(bParam0->f_9)))
	{
		bParam0->f_33 = 1;
	}
	else
	{
		bParam0->f_33 = 0;
	}
	bParam0->f_25 = { bParam0->f_9 };
	iVar25 = 0;
	while (iVar25 < Local_28)
	{
		if (Local_28[iVar25 /*110*/] == *bParam0)
		{
			iVar26 = iVar25;
		}
		iVar25++;
	}
	switch (bParam0->f_5)
	{
		case 5:
			switch (UNK_0x12AB0310C2281427(&(bParam0->f_9)))
			{
				case joaat("GUNSHOT"):
				case 1921975061:
				case 880647822:
				case joaat("KILLED"):
				case 1518302817:
				case -1298712083:
					if ((func_279(*bParam0) || (bParam0->f_48 % 2) == 0) || !func_179(Local_469))
					{
						if ((UNK_0x12AB0310C2281427(&(bParam0->f_9)) == joaat("GUNSHOT") || UNK_0x12AB0310C2281427(&(bParam0->f_9)) == 1921975061) || UNK_0x12AB0310C2281427(&(bParam0->f_9)) == 880647822)
						{
							if (func_256(iVar26))
							{
								cVar27 = { func_278(iVar26, "JS_GUN1") };
								if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_277(bParam0, &(bParam0->f_9), &cVar27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (bParam0->f_48 == 0)
								{
									func_277(bParam0, &(bParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else
							{
								switch (iVar26)
								{
									case 2:
										StringCopy(&cVar27, "SOL1_ARM1", 24);
										break;
									case 3:
										StringCopy(&cVar27, "SOL1_ARM2", 24);
										break;
								}
								if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_277(bParam0, &(bParam0->f_9), &cVar27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (bParam0->f_48 == 0)
								{
									func_277(bParam0, &(bParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((UNK_0x12AB0310C2281427(&(bParam0->f_9)) == joaat("KILLED") || UNK_0x12AB0310C2281427(&(bParam0->f_9)) == 1518302817) || UNK_0x12AB0310C2281427(&(bParam0->f_9)) == -1298712083)
						{
							if (func_256(iVar26))
							{
								cVar27 = { func_278(iVar26, "JS_KILL") };
								if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_277(bParam0, &(bParam0->f_9), &cVar27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (bParam0->f_48 == 0)
								{
									func_277(bParam0, &(bParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (bParam0->f_48 == 0)
							{
								func_277(bParam0, &(bParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						bParam0->f_48++;
					}
					else
					{
						if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_GETSEC") };
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (bParam0->f_48 == 0)
							{
								func_277(bParam0, &(bParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&cVar27, "SOL1_SECIN1", 24);
									break;
								case 3:
									StringCopy(&cVar27, "SOL1_SECIN2", 24);
									break;
							}
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (bParam0->f_48 == 0)
							{
								func_277(bParam0, &(bParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						bParam0->f_48++;
					}
					break;
			}
			break;
		case 4:
			switch (UNK_0x12AB0310C2281427(&(bParam0->f_9)))
			{
				case 1224761252:
					if (func_270(*bParam0, 4))
					{
						func_247(bParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_37) > 1000)
					{
						func_247(bParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				case -1645534839:
					if (func_270(*bParam0, 4))
					{
						func_247(bParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((UNK_0x1C0640BA9A7327B3() - bParam0->f_37) > 15000 || (UNK_0x1C0640BA9A7327B3() - bParam0->f_38) > 3000) && !UNK_0x82FE7F11C00330B0(*bParam0))
					{
						func_247(bParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_279(*bParam0) || bParam0->f_48 == 0)
					{
						if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_HND1") };
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (bParam0->f_48 == 0)
							{
								func_277(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&cVar27, "SOL1_SCAR1", 24);
									break;
								case 3:
									StringCopy(&cVar27, "SOL1_SCAR2", 24);
									break;
							}
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (bParam0->f_48 == 0)
							{
								func_277(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						bParam0->f_48++;
					}
					else
					{
						if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_HND1") };
							if (func_253(iVar26, &cVar27, bParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (bParam0->f_48 == 0)
							{
								func_277(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&cVar27, "SOL1_SCAR1", 24);
									break;
								case 3:
									StringCopy(&cVar27, "SOL1_SCAR2", 24);
									break;
							}
							if (func_253(iVar26, &cVar27, bParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (bParam0->f_48 == 0)
							{
								func_277(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						bParam0->f_48++;
					}
					break;
			}
			break;
		case 0:
			switch (iVar26)
			{
				case 1:
					if (func_48() && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 5000)
					{
						switch (iLocal_2554)
						{
							case 0:
								func_253(iVar26, "JS_STOCK", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							case 1:
								func_253(iVar26, "JS_STOCKb", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							case 2:
								func_253(iVar26, "JS_STOCKc", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							case 3:
								func_253(iVar26, "JS_STOCKd", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							case 4:
								func_253(iVar26, "JS_STOCKe", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							case 5:
								func_253(iVar26, "JS_STOCKf", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							case 6:
								func_253(iVar26, "JS_STOCKg", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							case 7:
								func_253(iVar26, "JS_STOCKh", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							case 8:
								func_253(iVar26, "JS_STOCKi", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							case 9:
								func_253(iVar26, "JS_STOCKj", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							case 10:
								func_253(iVar26, "JS_STOCKk", bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554 = 0;
								break;
						}
					}
					break;
				case 2:
					if (!bParam0->f_49)
					{
						if (func_253(iVar26, "SOL1_AMB1", bParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							func_45(&uLocal_2358, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
							func_45(&uLocal_2358, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
							bParam0->f_49 = 1;
						}
					}
					break;
			}
			break;
		case 1:
			if (UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "SEE_VAN_LEAVING") || UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "CHECK_DRIVER"))
			{
				vVar36 = { func_276(UNK_0x68E4ADDDDCD7BDDE(UNK_0x16F2683693E537C9(), 0f, 1f, 0f) - UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) };
				vVar39 = { func_276(UNK_0x68F4C0EC296D3901(Local_28[iVar26 /*110*/], true) - UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true)) };
				fVar34 = func_275(vVar36, vVar39);
				fVar35 = UNK_0x3DCA5D50DD292443(fVar34);
				if ((fVar35 < 90f && fVar1 < 8f) && UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9()) < 1f)
				{
					bVar33 = true;
				}
			}
			switch (UNK_0x12AB0310C2281427(&(bParam0->f_9)))
			{
				case -414594135:
				case 1260350710:
					if (func_279(*bParam0) && UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_VAN_LVE1") };
							func_253(iVar26, &cVar27, bParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar33)
					{
						func_269(bParam0, 1, "CHECK_DRIVER", Local_579[func_102() /*8*/], 0, 1, 0);
					}
					else if (func_108(UNK_0x16F2683693E537C9(), vLocal_642, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_247(bParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				case 58299323:
					if (func_279(*bParam0))
					{
						cVar27 = { func_278(iVar26, "JS_VAN_LVE2") };
						func_253(iVar26, &cVar27, bParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_37) > 3000)
					{
						func_247(bParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				case 356486511:
					if (bVar33)
					{
						if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_37) > 2000 && !UNK_0x82FE7F11C00330B0(*bParam0))
						{
							func_247(bParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_269(bParam0, 1, "SEE_VAN_LEAVING_1", Local_579[func_102() /*8*/], 0, 1, 0);
					}
					break;
				case -1225951737:
					if (((UNK_0x1C0640BA9A7327B3() - bParam0->f_37) > 4000 && func_108(*bParam0, bParam0->f_88, 1) < 3f) && UNK_0xA91A066C1723AE72(*bParam0))
					{
						func_247(bParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_279(*bParam0))
					{
						if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_SND_INV") };
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				case -927541383:
					if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_37) > 4000 && !UNK_0x82FE7F11C00330B0(*bParam0))
					{
						if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_SNDLOST2") };
							func_253(iVar26, &cVar27, bParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_247(bParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_279(*bParam0))
					{
						if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_SNDLOST1") };
							func_253(iVar26, &cVar27, bParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		case 3:
			switch (UNK_0x12AB0310C2281427(&(bParam0->f_9)))
			{
				case joaat("FIGHT"):
				case 1681313069:
				case 1156217463:
				case -419867425:
					if ((((UNK_0x1C0640BA9A7327B3() - bParam0->f_38) > 8000 && func_108(UNK_0x16F2683693E537C9(), vLocal_642, 1) > 65f) && (func_107(UNK_0x16F2683693E537C9(), *bParam0, 1) > 10f || (UNK_0x1C0640BA9A7327B3() - bParam0->f_38) > 16000)) && !UNK_0x82FE7F11C00330B0(*bParam0))
					{
						func_247(bParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_279(*bParam0) && bParam0->f_35)
					{
						if (!bParam0->f_84)
						{
							if (func_256(iVar26))
							{
								cVar27 = { func_278(iVar26, "JS_MELE_1") };
								if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							else
							{
								switch (iVar26)
								{
									case 2:
										StringCopy(&cVar27, "SOL1_FIGHT1", 24);
										break;
									case 3:
										StringCopy(&cVar27, "SOL1_FIGHT2", 24);
										break;
								}
								if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							bParam0->f_84 = 1;
						}
						else if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_MELE_2") };
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 0, 0, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&cVar27, "SOL1_FIGHT1", 24);
									break;
								case 3:
									StringCopy(&cVar27, "SOL1_FIGHT2", 24);
									break;
							}
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				case 1093888274:
					if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_37) > 4000)
					{
						func_247(bParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_279(*bParam0))
					{
						if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_MELE_ESC") };
							func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				case 1682434916:
					if (((((UNK_0x1C0640BA9A7327B3() - bParam0->f_37) > 2000 && bParam0->f_39) && !UNK_0x82FE7F11C00330B0(*bParam0)) && iLocal_2573 != 9) && iLocal_2573 != 10)
					{
						func_247(bParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_279(*bParam0))
					{
						if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_VAN_IN2") };
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&cVar27, "SOL1_VAN1", 24);
									break;
								case 3:
									StringCopy(&cVar27, "SOL1_VAN2", 24);
									break;
							}
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_48() && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 2000)
					{
						if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_VAN_TK") };
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				case -924218668:
					if (func_279(*bParam0))
					{
						if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_VAN_IN1") };
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&cVar27, "SOL1_VAN1", 24);
									break;
								case 3:
									StringCopy(&cVar27, "SOL1_VAN2", 24);
									break;
							}
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_48() && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 2000)
					{
						if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_VAN_TK") };
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				case 2056033185:
					if (func_279(*bParam0))
					{
						if (func_256(iVar26))
						{
							cVar27 = { func_278(iVar26, "JS_VAN_IN2") };
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&cVar27, "SOL1_VAN1", 24);
									break;
								case 3:
									StringCopy(&cVar27, "SOL1_VAN2", 24);
									break;
							}
							if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_277(bParam0, &(bParam0->f_9), &cVar27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		case 2:
			if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_38) > 5000 && !UNK_0x82FE7F11C00330B0(*bParam0))
			{
				if (iVar26 == 1)
				{
					func_253(iVar26, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_2554 = 0;
				}
				func_247(bParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (bParam0->f_39)
				{
					if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_38) > 1000 && !UNK_0x82FE7F11C00330B0(*bParam0))
					{
						if (((UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "ENT_FOOT") || UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "ENT_VEH")) || UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "WH_FOOT")) || UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "WH_VEH"))
						{
							cVar42 = { bParam0->f_9 };
							StringConCat(&cVar42, "_LEAVE", 32);
							func_247(bParam0, 2, 0, &cVar42, 1, 0);
						}
					}
					if ((UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "WH_FOOT") || UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "WH_VEH")) || (UNK_0x7F8A39872A07D2CE(&(bParam0->f_9), "WH_DITCH_VEH") && !UNK_0x82FE7F11C00330B0(*bParam0)))
					{
						if (((bParam0->f_104 >= 6 && iLocal_2524 != -1) && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 7000) && (UNK_0x1C0640BA9A7327B3() - bParam0->f_38) == 0)
						{
							func_247(bParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (UNK_0x12AB0310C2281427(&(bParam0->f_9)))
				{
					case -426892158:
						if (func_279(*bParam0))
						{
							if (!bParam0->f_82)
							{
								if (func_256(iVar26))
								{
									if (!bParam0->f_83)
									{
										cVar27 = { func_278(iVar26, "JS_ENT_F1") };
										func_253(iVar26, &cVar27, bParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										cVar27 = { func_278(iVar26, "JS_ENT_F1_P") };
										func_253(iVar26, &cVar27, bParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_256(iVar26))
							{
								if (!bParam0->f_83)
								{
									cVar27 = { func_278(iVar26, "JS_ENT_F2") };
									func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									cVar27 = { func_278(iVar26, "JS_ENT_F2_P") };
									func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							bParam0->f_82 = 1;
						}
						else if (func_48() && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 5000)
						{
							if (func_256(iVar26))
							{
								if (!bParam0->f_83)
								{
									cVar27 = { func_278(iVar26, "JS_ENT_F") };
									func_253(iVar26, &cVar27, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									cVar27 = { func_278(iVar26, "JS_ENT_F_P") };
									func_253(iVar26, &cVar27, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					case -1461435341:
						if (func_279(*bParam0) || bParam0->f_48 == 0)
						{
							if (!bParam0->f_82)
							{
								if (func_256(iVar26))
								{
									cVar27 = { func_278(iVar26, "JS_ENT_V1") };
									if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										bParam0->f_48++;
									}
								}
								bParam0->f_82 = 1;
							}
							else if (UNK_0x7F8A39872A07D2CE(&(bParam0->f_17), "WH_VEH"))
							{
								if (func_256(iVar26))
								{
									cVar27 = { func_278(iVar26, "JS_ENT_V") };
									if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										bParam0->f_48++;
									}
								}
							}
							else if (func_256(iVar26))
							{
								cVar27 = { func_278(iVar26, "JS_ENT_V3") };
								if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									bParam0->f_48++;
								}
							}
						}
						else if (func_48() && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 5000)
						{
							if (func_256(iVar26))
							{
								cVar27 = { func_278(iVar26, "JS_ENT_V3") };
								func_253(iVar26, &cVar27, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					case -972653884:
						if (func_279(*bParam0))
						{
							if (bParam0->f_104 == 0)
							{
								if (func_256(iVar26))
								{
									cVar27 = { func_278(iVar26, "JS_WH1") };
									if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_277(bParam0, &(bParam0->f_9), &cVar27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_277(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
							else if (bParam0->f_104 > 0)
							{
								if (func_256(iVar26))
								{
									cVar27 = { func_278(iVar26, "JS_WH2") };
									if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_277(bParam0, &(bParam0->f_9), &cVar27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_277(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
							bParam0->f_82 = 1;
						}
						else if (bParam0->f_104 < 6)
						{
							if (func_48() && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 5000)
							{
								if (func_256(iVar26))
								{
									if (bParam0->f_104 < 5)
									{
										cVar27 = { func_278(iVar26, "JS_WH") };
									}
									else
									{
										cVar27 = { func_278(iVar26, "JS_WH_F") };
									}
									if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_277(bParam0, &(bParam0->f_9), &cVar27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_277(bParam0, &(bParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
						}
						break;
					case -640827668:
						if (func_279(*bParam0))
						{
							if (bParam0->f_104 == 0)
							{
								if (func_256(iVar26))
								{
									cVar27 = { func_278(iVar26, "JS_WH1") };
									if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_277(bParam0, &(bParam0->f_9), &cVar27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_277(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
							else if (bParam0->f_104 > 0)
							{
								if (func_256(iVar26))
								{
									cVar27 = { func_278(iVar26, "JS_WH2") };
									if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_277(bParam0, &(bParam0->f_9), &cVar27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_277(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
							bParam0->f_82 = 1;
						}
						else if (bParam0->f_104 < 6)
						{
							if (func_48() && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 5000)
							{
								if (func_256(iVar26))
								{
									if (bParam0->f_104 < 5)
									{
										if (((bParam0->f_104 - 1) % 2) == 0)
										{
											cVar27 = { func_278(iVar26, "JS_ENT_V4") };
										}
										else
										{
											cVar27 = { func_278(iVar26, "JS_ENT_V3") };
										}
									}
									else
									{
										cVar27 = { func_278(iVar26, "JS_WH_F") };
									}
									if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_277(bParam0, &(bParam0->f_9), &cVar27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_277(bParam0, &(bParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
						}
						break;
					case -520621538:
						if (func_279(*bParam0))
						{
							if (bParam0->f_104 == 0)
							{
								if (func_256(iVar26))
								{
									cVar27 = { func_278(iVar26, "JS_WH1") };
									if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_277(bParam0, &(bParam0->f_9), &cVar27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_277(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
							else if (bParam0->f_104 > 0)
							{
								if (func_256(iVar26))
								{
									cVar27 = { func_278(iVar26, "JS_WH2") };
									if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_277(bParam0, &(bParam0->f_9), &cVar27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_277(bParam0, &(bParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
							bParam0->f_82 = 1;
						}
						else if (bParam0->f_104 < 6)
						{
							if (func_48() && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 5000)
							{
								if (func_256(iVar26))
								{
									if (bParam0->f_104 < 5)
									{
										if (((bParam0->f_104 - 1) % 2) == 0)
										{
											cVar27 = { func_278(iVar26, "JS_ENT_V3") };
										}
										else
										{
											cVar27 = { func_278(iVar26, "JS_WH") };
										}
									}
									else
									{
										cVar27 = { func_278(iVar26, "JS_WH_F") };
									}
									if (func_253(iVar26, &cVar27, bParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_277(bParam0, &(bParam0->f_9), &cVar27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_277(bParam0, &(bParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									bParam0->f_104++;
								}
							}
						}
						break;
					case 778765338:
						if (bParam0->f_48 == 0)
						{
							if (func_48() && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 1000)
							{
								if (func_256(iVar26))
								{
									cVar27 = { func_278(iVar26, "JS_ENT_V4") };
									func_253(iVar26, &cVar27, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								bParam0->f_48++;
							}
						}
						else if (func_48() && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 5000)
						{
							if (((bParam0->f_48 - 1) % 3) == 0)
							{
								cVar27 = { func_278(iVar26, "JS_ENT_V4") };
							}
							else
							{
								cVar27 = { func_278(iVar26, "JS_ENT_V3") };
							}
							func_253(iVar26, &cVar27, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							bParam0->f_48++;
						}
						break;
					case 1580556320:
						if (bParam0->f_48 == 0)
						{
							if (func_48() && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 1000)
							{
								if (func_256(iVar26))
								{
									if (!bParam0->f_83)
									{
										cVar27 = { func_278(iVar26, "JS_ENT_F3") };
										func_253(iVar26, &cVar27, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										cVar27 = { func_278(iVar26, "JS_ENT_F3_P") };
										func_253(iVar26, &cVar27, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
								}
								bParam0->f_48++;
							}
						}
						break;
					case -1697689838:
					case -628260985:
					case -1891358342:
						if (bParam0->f_48 == 0)
						{
							if (func_48() && (UNK_0x1C0640BA9A7327B3() - iLocal_2524) > 1000)
							{
								if (func_256(iVar26))
								{
									cVar27 = { func_278(iVar26, "JS_ENT_V5") };
									func_253(iVar26, &cVar27, bParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								bParam0->f_48++;
							}
						}
						break;
				}
			}
			break;
	}
}

float func_275(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_276(vector3 vParam0)
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

void func_277(bool bParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Local_28)
	{
		if (Local_28[iVar0 /*110*/] == *bParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	bParam0->f_50 = iVar1;
	StringCopy(&(bParam0->f_50.f_1), sParam1, 64);
	StringCopy(&(bParam0->f_50.f_17), sParam2, 24);
	bParam0->f_50.f_28 = iParam4;
	bParam0->f_50.f_26 = fParam3;
	bParam0->f_50.f_29 = iParam5;
	bParam0->f_50.f_30 = iParam7;
	bParam0->f_50.f_31 = iParam8;
	if (bParam6)
	{
		func_250(&(bParam0->f_50), 0);
	}
}

struct<6> func_278(int iParam0, char* sParam1)
{
	struct<6> Var0;

	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

bool func_279(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)
{
	if (Param0.f_8 || Param0.f_33)
	{
		return true;
	}
	return false;
}

void func_280(bool bParam0)
{
	if (UNK_0xE115347EA59F7B86(*bParam0, UNK_0x16F2683693E537C9()))
	{
		bParam0->f_40 = UNK_0x1C0640BA9A7327B3();
		bParam0->f_39 = 1;
	}
	else if ((UNK_0x1C0640BA9A7327B3() - bParam0->f_40) > 2000 || !UNK_0x7069CC4DE1EA3FAA(*bParam0, UNK_0x16F2683693E537C9(), 90f))
	{
		bParam0->f_40 = UNK_0x1C0640BA9A7327B3();
		bParam0->f_39 = 0;
	}
	if (bParam0->f_39)
	{
		bLocal_2570 = false;
	}
	if (bLocal_2570)
	{
		UNK_0x9DD8618CA5BF832D(*bParam0, 188, true);
	}
	if (!func_281())
	{
		bParam0->f_41 = UNK_0x8B674081D2209D07(UNK_0xD803B885F5E47A62(), *bParam0);
		if (bParam0->f_41)
		{
			bParam0->f_43 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
		}
	}
	else
	{
		bParam0->f_41 = 0;
	}
	switch (bParam0->f_5)
	{
		case 5:
		case 4:
		case 3:
			bParam0->f_102 = 1;
			break;
		default:
			bParam0->f_102 = 0;
			break;
	}
}

bool func_281()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (UNK_0xC844350D5D58C99A(Local_579[iVar0 /*8*/]) && UNK_0xDF1306B443CD3D15(Local_579[iVar0 /*8*/], 0))
		{
			if (UNK_0x63DF57B5632952E5(Local_579[iVar0 /*8*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_282()
{
	vector3 vVar0;
	var uVar3;

	UNK_0xF63400DBE3303D26("BUGSTAR", &bLocal_2525);
	UNK_0x0E2400AB9174FA81(3, joaat("PLAYER"), bLocal_2525);
	UNK_0x0E2400AB9174FA81(5, bLocal_2525, joaat("PLAYER"));
	UNK_0x0E2400AB9174FA81(1, joaat("COP"), bLocal_2525);
	UNK_0x0E2400AB9174FA81(1, bLocal_2525, joaat("COP"));
	UNK_0xE342F209E49C5314(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), false, 1);
	UNK_0x21688103CC7F9B19(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f), 0);
	UNK_0x536F1BE96C726C4B(138.43f, -3092.47f, 4.9f, 28.375f, 1, 0, 0, false);
	if (func_193() || func_6(0))
	{
		iLocal_655 = 0;
		if (func_193())
		{
			if (Global_92921)
			{
				iLocal_655++;
			}
		}
		if (func_193())
		{
			func_234(iLocal_655, &vVar0, &uVar3);
			func_288(vVar0, uVar3, 1, 0);
		}
		bLocal_654 = true;
	}
	else
	{
		while (!func_188(1))
		{
			SYSTEM::WAIT(0);
			func_287(&uLocal_658);
		}
	}
	func_286(&uLocal_658, "JHP1A", 0);
	func_229(&uLocal_658, "misslsdhsclipboard@base");
	func_229(&uLocal_658, "misslsdhsclipboard@idle_a");
	func_229(&uLocal_658, "misstrevor3");
	func_171(&uLocal_658, joaat("P_AMB_CLIPBOARD_01"));
	func_228(&uLocal_658, iLocal_2527);
	func_230(&uLocal_658, &cLocal_645);
	UNK_0x0FFE8B6DB75A4C39(UNK_0xD803B885F5E47A62(), 0.15f);
	func_284(87);
	func_45(&uLocal_2358, 0, UNK_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	func_45(&uLocal_2358, 3, 0, "LESTER", 0, 1);
	func_252(bLocal_2523);
	func_283();
	iLocal_2527 = UNK_0x0D1736C2E221BCEA(vLocal_642, "po1_08_warehouseint1");
	UNK_0x93776B156FD8804A(&cLocal_626);
	iLocal_2578 = UNK_0x7D6CA5F52B3748BF(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!UNK_0x67C1D9E5B91B2E37(false))
	{
		SYSTEM::WAIT(0);
	}
}

void func_283()
{
	Global_92922 = 1;
}

void func_284(int iParam0)
{
	Global_94599 = 0;
	switch (iParam0)
	{
		case 72:
			func_285(2);
			func_285(4);
			break;
		case 73:
			func_285(0);
			func_285(1);
			func_285(7);
			break;
		case 92:
			func_285(10);
			func_285(9);
			func_285(13);
			func_285(6);
			break;
		case 68:
			func_285(11);
			break;
		case 78:
			func_285(14);
			break;
		case 79:
			func_285(3);
			break;
		default:
			break;
	}
}

void func_285(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&Global_94599, bParam0);
}

int func_286(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_779[bParam2 /*5*/].f_1 || uParam0->f_779[bParam2 /*5*/])
	{
		if (UNK_0x7F8A39872A07D2CE(uParam0->f_779[bParam2 /*5*/].f_4, bParam1))
		{
			uParam0->f_779[bParam2 /*5*/].f_2 = 0;
			uParam0->f_982 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (bParam2 >= 11)
		{
			UNK_0x23249A21DED9ADF1(bParam1, bParam2);
		}
		else
		{
			UNK_0xD7992BEF7A9D109E(bParam1, bParam2);
		}
		uParam0->f_779[bParam2 /*5*/] = 1;
		uParam0->f_779[bParam2 /*5*/].f_3 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_779[bParam2 /*5*/].f_4 = bParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_287(var uParam0)
{
	func_236(uParam0);
}

void func_288(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_193())
	{
		UNK_0x256D93AFAE851A7A(0);
		UNK_0x0674E58A79778E99(&(Global_98744.f_20), 2);
		UNK_0x21387C9EECC2B220(true);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
		}
		Global_98740 = { vParam0 };
		Global_98743 = iParam3;
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
		func_192(1);
	}
}

void func_289(int iParam0)
{
	vector3 vVar0[24];
	char[] cVar6[8];

	if (iParam0 == 6)
	{
		func_301();
		func_8(0);
		UNK_0xC92DB9682A650680("JHP1A_FAIL");
		UNK_0x10FAF14A60A0DBE1();
	}
	else if (!bLocal_656)
	{
		bLocal_656 = true;
		iLocal_657 = iParam0;
		switch (iLocal_657)
		{
			case 1:
				StringCopy(&cVar0, "JHP1A_VAN_DEAD", 24);
				break;
			case 3:
				StringCopy(&cVar0, "JHP1A_VAN_STUCK", 24);
				break;
			case 2:
				StringCopy(&cVar0, "JHP1A_VANS_DEAD", 24);
				break;
			case 4:
				StringCopy(&cVar0, "JHP1A_VAN_ABAN", 24);
				break;
			case 5:
				StringCopy(&cVar0, "JHP1A_ABAN", 24);
				break;
			case 0:
			default:
				StringCopy(&cVar0, "JHP1A_FF", 24);
				break;
		}
		if (UNK_0xEA6BC48857E0AC4C(&cVar6))
		{
			func_299(&cVar0);
		}
		else
		{
			func_290(&cVar0, &cVar6);
		}
		UNK_0xC92DB9682A650680("JHP1A_FAIL");
	}
}

void func_290(char* sParam0, char* sParam1)
{
	func_298(sParam0, sParam1);
	func_291(0);
}

void func_291(int iParam0)
{
	int iVar0;

	if (Global_111638.f_9080 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_292(iVar0))
		{
			return;
		}
		UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
		Global_98780 = iParam0;
	}
}

bool func_292(int iParam0)
{
	int iVar0;
	int iVar1;

	func_297();
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0 /*5*/];
	iVar1 = Global_76891.f_109[iVar0 /*4*/];
	func_296(iVar1, 1);
	UNK_0xAE08886CF478C471(UNK_0xD803B885F5E47A62(), 0);
	UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
	func_293(&(Global_111638.f_2358.f_539), iVar1);
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

void func_293(var uParam0, int iParam1)
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
			if (!func_295(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_294(&(uParam0->f_2296[iVar0]));
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

void func_294(var uParam0)
{
	*uParam0 = -15;
}

bool func_295(int iParam0, var uParam1, float fParam2)
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
			return func_295(8, uParam1, fParam2);
		case 10:
			return func_295(8, uParam1, fParam2);
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

void func_296(int iParam0, bool bParam1)
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

void func_297()
{
	Global_98779 = 1;
	if (UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_165())
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
			switch (func_165())
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

void func_298(char* sParam0, char* sParam1)
{
	if (!UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		if (UNK_0x4880526EC51D1C27(sParam0) <= 16)
		{
			if (UNK_0x4880526EC51D1C27(sParam1) <= 16)
			{
				StringCopy(&Global_76854, sParam0, 16);
				StringCopy(&Global_76858, sParam1, 16);
			}
		}
	}
}

void func_299(char* sParam0)
{
	func_300(sParam0);
	func_291(0);
}

void func_300(char* sParam0)
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

void func_301()
{
	int iVar0;

	if (UNK_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_6(0))
	{
		if (!func_302())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_292(iVar0))
				{
					return;
				}
				UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_297();
		}
	}
}

bool func_302()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

