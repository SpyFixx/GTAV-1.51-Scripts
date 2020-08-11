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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
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
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	struct<284> Local_80 = { 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	struct<12> Local_364 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_376 = false;
	int iLocal_377 = 0;
	struct<5> Local_378[32];
	bool bLocal_539 = false;
	bool bLocal_540 = false;
	int iLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	struct<18> Local_544[32];
	vector3 vLocal_1121[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	struct<68> Local_1225[1];
	struct<42> Local_1294[32];
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = -1;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 1;
	var uLocal_2676 = 0;
	var uLocal_2677 = 32;
	var uLocal_2678 = 0;
	var uLocal_2679 = -1;
	var uLocal_2680 = 0;
	var uLocal_2681 = -1;
	var uLocal_2682 = 0;
	var uLocal_2683 = -1;
	var uLocal_2684 = 0;
	var uLocal_2685 = -1;
	var uLocal_2686 = 0;
	var uLocal_2687 = -1;
	var uLocal_2688 = 0;
	var uLocal_2689 = -1;
	var uLocal_2690 = 0;
	var uLocal_2691 = -1;
	var uLocal_2692 = 0;
	var uLocal_2693 = -1;
	var uLocal_2694 = 0;
	var uLocal_2695 = -1;
	var uLocal_2696 = 0;
	var uLocal_2697 = -1;
	var uLocal_2698 = 0;
	var uLocal_2699 = -1;
	var uLocal_2700 = 0;
	var uLocal_2701 = -1;
	var uLocal_2702 = 0;
	var uLocal_2703 = -1;
	var uLocal_2704 = 0;
	var uLocal_2705 = -1;
	var uLocal_2706 = 0;
	var uLocal_2707 = -1;
	var uLocal_2708 = 0;
	var uLocal_2709 = -1;
	var uLocal_2710 = 0;
	var uLocal_2711 = -1;
	var uLocal_2712 = 0;
	var uLocal_2713 = -1;
	var uLocal_2714 = 0;
	var uLocal_2715 = -1;
	var uLocal_2716 = 0;
	var uLocal_2717 = -1;
	var uLocal_2718 = 0;
	var uLocal_2719 = -1;
	var uLocal_2720 = 0;
	var uLocal_2721 = -1;
	var uLocal_2722 = 0;
	var uLocal_2723 = -1;
	var uLocal_2724 = 0;
	var uLocal_2725 = -1;
	var uLocal_2726 = 0;
	var uLocal_2727 = -1;
	var uLocal_2728 = 0;
	var uLocal_2729 = -1;
	var uLocal_2730 = 0;
	var uLocal_2731 = -1;
	var uLocal_2732 = 0;
	var uLocal_2733 = -1;
	var uLocal_2734 = 0;
	var uLocal_2735 = -1;
	var uLocal_2736 = 0;
	var uLocal_2737 = -1;
	var uLocal_2738 = 0;
	var uLocal_2739 = -1;
	var uLocal_2740 = 0;
	var uLocal_2741 = -1;
	var uLocal_2742 = -1;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = -1;
	var uLocal_2749 = -1;
	var uLocal_2750 = -1;
	var uLocal_2751 = -1;
	var uLocal_2752 = -1;
	var uLocal_2753 = -1;
	var uLocal_2754 = 0;
	var uLocal_2755 = 32;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	int iLocal_3172 = 0;
	bool bLocal_3173 = false;
	bool bLocal_3174 = false;
	bool bLocal_3175 = false;
	int iLocal_3176 = 0;
	int iLocal_3177 = 0;
	int iLocal_3178 = 0;
	int iLocal_3179 = 0;
	bool bLocal_3180 = false;
	bool bLocal_3181 = false;
	bool bLocal_3182 = false;
	int iLocal_3183 = 0;
	var uLocal_3184 = 0;
	bool bLocal_3185 = false;
	var uLocal_3186 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	bLocal_376 = -1;
	bLocal_3181 = -1;
	if (UNK_0x8CD06866876216F2() && func_756(UNK_0xD803B885F5E47A62(), 0, 1))
	{
		func_741(ScriptParam_0);
	}
	else
	{
		func_709();
	}
	while (true)
	{
		func_708();
		if (func_701())
		{
			func_709();
		}
		if (func_698(29))
		{
			func_709();
		}
		if (func_696())
		{
			func_709();
		}
		if (func_695())
		{
			func_709();
		}
		bLocal_3181 = -1;
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, UNK_0xD803B885F5E47A62()))
		{
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_3174, UNK_0x57270EE11514DC67()))
			{
				if (!func_693(UNK_0xD803B885F5E47A62()))
				{
					bLocal_3181 = UNK_0x57270EE11514DC67();
				}
				else if (func_692() && !func_691())
				{
					bVar2 = func_689();
					if (UNK_0x34BFC6F0CB887BC2(bVar2))
					{
						bVar3 = UNK_0x83FACCC48B68F9D1(bVar2);
						if (UNK_0xFB75B0F82CA525F6(bVar3))
						{
							iVar4 = UNK_0x7B9C1F53FE442D06(bVar3);
							bLocal_3181 = iVar4;
						}
					}
				}
			}
		}
		func_668();
		if (func_667() < 2)
		{
			if (func_664(2, 0, 1, 0, 0))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_539, 24);
				func_622(0, -1);
				func_709();
			}
		}
		bVar0 = false;
		while (bVar0 < 1)
		{
			func_621(bVar0, -1);
			func_620(bVar0, -1);
			func_619(bVar0, uVar1);
			UNK_0x0674E58A79778E99(&bLocal_539, false);
			bVar0++;
		}
		func_571();
		func_539();
		func_536();
		func_516();
		switch (func_515(UNK_0x57270EE11514DC67()))
		{
			case 0:
				if (func_514() == 1)
				{
					func_506(141, func_513(0), 0, 0);
					func_505(1);
				}
				else if (func_514() == 4)
				{
					func_505(4);
				}
				break;
			case 1:
				if (func_514() == 1)
				{
					func_20();
				}
				else if (func_514() == 4)
				{
					func_19(&(Local_80.f_211));
					func_505(3);
				}
				break;
			case 3:
				if (func_18(&(Local_80.f_211)))
				{
					if (func_17(&(Local_80.f_211)))
					{
						bVar5 = true;
					}
				}
				else
				{
					bVar5 = true;
				}
				if (bVar5)
				{
					func_505(4);
				}
				break;
			case 2:
				func_505(4);
			case 4:
				func_709();
				break;
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			switch (func_514())
			{
				case 0:
					func_16(1);
					break;
				case 1:
					func_1();
					break;
				case 4:
					break;
			}
		}
	}
}

void func_1()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	func_12();
	switch (func_667())
	{
		case 0:
			if (UNK_0xEAE0D21A50E6C7F4(Local_80.f_213, false))
			{
				if (!func_18(&(Local_80.f_1.f_3)))
				{
					func_11(&(Local_80.f_1.f_3), 0, 1);
				}
				func_10(1);
			}
			break;
		case 1:
			if (UNK_0xEAE0D21A50E6C7F4(Local_80.f_213, 2))
			{
				iVar2 = Global_262145.f_11188;
				if (func_18(&(Local_80.f_1.f_1)))
				{
					if (func_9(&(Local_80.f_1.f_1), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			else
			{
				iVar2 = Global_262145.f_11189;
				if (func_18(&(Local_80.f_1.f_3)))
				{
					if (func_9(&(Local_80.f_1.f_3), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			if (bVar1)
			{
				func_10(2);
			}
			break;
		case 2:
			if (UNK_0xEAE0D21A50E6C7F4(Local_80.f_213, true))
			{
				func_10(3);
			}
			break;
		case 3:
			func_10(4);
			break;
		case 4:
			func_16(4);
			break;
	}
	bVar0 = false;
	while (bVar0 < 1)
	{
		func_2(bVar0);
		bVar0++;
	}
}

void func_2(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	bVar0 = func_8(bParam0);
	bVar1 = func_7(bParam0);
	bVar6 = func_18(&(Local_80.f_6[bParam0 /*204*/].f_70));
	if (bVar0 > -1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_3174, bVar0))
		{
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, bVar1))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, bVar1))
				{
					fVar2 = func_6(bParam0, bVar0);
					if (func_18(&(Local_80.f_1.f_1)))
					{
						if (!func_18(&(Local_80.f_6[bParam0 /*204*/].f_70)))
						{
							func_11(&(Local_80.f_6[bParam0 /*204*/].f_70), 0, 1);
						}
						else if ((func_5(&(Local_80.f_6[bParam0 /*204*/].f_70), 1000, 0) && func_9(&(Local_80.f_1.f_1), 0, 0) <= Global_262145.f_11188) && func_667() != 2)
						{
							iVar7 = func_9(&(Local_80.f_6[bParam0 /*204*/].f_70), 0, 1);
							fVar3 = SYSTEM::TO_FLOAT(iVar7);
							fVar3 = (fVar3 / IntToFloat(Global_262145.f_11192 * 1000));
							fVar4 = (SYSTEM::TO_FLOAT(Global_262145.f_11191) * fVar3);
							fVar2 = (fVar2 + fVar4);
							func_4(bParam0, bVar0, fVar2);
							bVar5 = true;
						}
					}
				}
				else if (bVar6)
				{
					bVar5 = true;
				}
			}
			else if (bVar6)
			{
				bVar5 = true;
			}
		}
		else if (bVar6)
		{
			bVar5 = true;
		}
	}
	else if (bVar6)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (bVar6)
		{
			func_3(&(Local_80.f_6[bParam0 /*204*/].f_70));
			if (bVar0 > -1)
			{
				func_11(&(Local_80.f_6[bParam0 /*204*/].f_70), 0, 1);
			}
		}
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_4(bool bParam0, bool bParam1, float fParam2)
{
	Local_80.f_6[bParam0 /*204*/].f_3[bParam1] = fParam2;
}

bool func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_11(uParam0, bParam2, 0);
	if (UNK_0x8CD06866876216F2() && !bParam2)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

float func_6(bool bParam0, bool bParam1)
{
	return Local_80.f_6[bParam0 /*204*/].f_3[bParam1];
}

bool func_7(bool bParam0)
{
	return Local_80.f_6[bParam0 /*204*/].f_2;
}

bool func_8(bool bParam0)
{
	return Local_80.f_6[bParam0 /*204*/].f_1;
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return UNK_0x519D13E6C1911A0B(UNK_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return UNK_0x519D13E6C1911A0B(UNK_0x1C0640BA9A7327B3(), *uParam0);
}

void func_10(int iParam0)
{
	Local_80.f_1 = iParam0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (UNK_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = UNK_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = UNK_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = UNK_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

void func_12()
{
	bool bVar0;
	struct<2> Var1;

	bVar0 = false;
	while (bVar0 < 1)
	{
		switch (func_15(bVar0))
		{
			case 0:
				if (func_14(bVar0))
				{
					if (!func_18(&(Local_80.f_1.f_1)))
					{
						Local_80.f_1.f_3 = { Var1 };
						func_11(&(Local_80.f_1.f_1), 0, 1);
					}
					if (!func_18(&(Local_80.f_6[bVar0 /*204*/].f_70)))
					{
						func_11(&(Local_80.f_6[bVar0 /*204*/].f_70), 0, 1);
					}
					func_13(bVar0, 1);
					if (!UNK_0xEAE0D21A50E6C7F4(Local_80.f_213, 2))
					{
						UNK_0x5D96D8530B3D0904(&(Local_80.f_213), 2);
					}
				}
				break;
			case 1:
				if (!func_14(bVar0))
				{
					func_13(bVar0, 2);
				}
				break;
			case 2:
				if (func_14(bVar0))
				{
					func_13(bVar0, 1);
				}
				break;
		}
		bVar0++;
	}
}

void func_13(bool bParam0, int iParam1)
{
	Local_80.f_6[bParam0 /*204*/] = iParam1;
}

bool func_14(bool bParam0)
{
	return Local_1225[bParam0 /*68*/].f_36;
}

int func_15(bool bParam0)
{
	return Local_80.f_6[bParam0 /*204*/];
}

void func_16(int iParam0)
{
	Local_80 = iParam0;
}

bool func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(UNK_0x2B6E0A53779D29EA(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

bool func_18(var uParam0)
{
	return uParam0->f_1;
}

void func_19(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_11(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;

	func_487();
	func_486();
	func_484();
	if (func_482())
	{
		func_360(bVar0);
	}
	func_344(141, func_359(0), &uLocal_3186, SYSTEM::TO_FLOAT(Global_262145.f_11497), 1148846080 /* Float: 1000f */, bLocal_3185);
	if (func_303(0, 1))
	{
		func_302();
	}
	switch (func_667())
	{
		case 0:
			break;
		case 1:
			func_301();
			bVar0 = false;
			while (bVar0 < 1)
			{
				func_267(bVar0);
				func_266(bVar0);
				func_264(bVar0);
				if (bLocal_3181 == UNK_0x57270EE11514DC67())
				{
					if (!func_262(1, 0))
					{
						if (func_261(UNK_0x57270EE11514DC67(), bVar0))
						{
							if (func_260(UNK_0xD803B885F5E47A62()) == 141)
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 2))
								{
									UNK_0x5D96D8530B3D0904(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 2);
									func_241(1);
								}
							}
							if (!UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 5))
							{
								UNK_0x5D96D8530B3D0904(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 5);
							}
							if (func_8(bVar0) == UNK_0x57270EE11514DC67())
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 20))
								{
									UNK_0x5D96D8530B3D0904(&bLocal_539, 20);
								}
							}
						}
						if (!UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 4))
						{
							if (func_8(bVar0) == UNK_0x57270EE11514DC67())
							{
								UNK_0x5D96D8530B3D0904(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 4);
							}
						}
					}
					else
					{
						if (UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 2))
						{
							UNK_0x0674E58A79778E99(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 2);
						}
						if (UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 5))
						{
							UNK_0x0674E58A79778E99(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 5);
						}
						if (UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 4))
						{
							UNK_0x0674E58A79778E99(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 4);
						}
						if (UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 6))
						{
							UNK_0x0674E58A79778E99(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 6);
						}
						if (UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 7))
						{
							UNK_0x0674E58A79778E99(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 7);
						}
					}
				}
				if (func_15(bVar0) == 0)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 8))
					{
						if (!UNK_0xFEBC1E4EC9E001F0())
						{
							if (!func_240())
							{
								if (bLocal_3181 == UNK_0x57270EE11514DC67())
								{
									if (!func_303(0, 0))
									{
										if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, Local_544[UNK_0x57270EE11514DC67() /*18*/].f_1))
										{
											if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, Local_544[UNK_0x57270EE11514DC67() /*18*/].f_1))
											{
												func_239("KOTC_1STHELP", 30000);
												func_238(0);
												UNK_0x4D7F4CC43D4D0DE3(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
												UNK_0x5D96D8530B3D0904(&bLocal_539, 8);
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (func_237("KOTC_1STHELP"))
					{
						UNK_0xA37A90C62806D848(1);
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 8))
					{
						UNK_0x5D96D8530B3D0904(&bLocal_539, 8);
					}
				}
				if (bLocal_3181 == UNK_0x57270EE11514DC67())
				{
					if (func_236(bVar0) <= 500f)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 9))
						{
							UNK_0x51B096AAC60548C1(0f);
							UNK_0x5D96D8530B3D0904(&bLocal_539, 9);
						}
					}
					else if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 9))
					{
						UNK_0x51B096AAC60548C1(1f);
						UNK_0x0674E58A79778E99(&bLocal_539, 9);
					}
				}
				if (bLocal_3181 != -1)
				{
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 14) && func_8(bVar0) != bLocal_3181)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 21))
						{
							func_235(81);
							UNK_0x5D96D8530B3D0904(&bLocal_539, 21);
						}
					}
					else if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 21))
					{
						UNK_0x0674E58A79778E99(&bLocal_539, 21);
					}
				}
				if (func_15(bVar0) != 0)
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 26))
					{
						func_209(141, 0f, 0f, 0, 0, 0, 0);
						UNK_0x5D96D8530B3D0904(&bLocal_539, 26);
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, true))
					{
						if (bLocal_3181 != -1)
						{
							if (!func_303(0, 0))
							{
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, Local_544[bLocal_3181 /*18*/].f_1))
								{
									if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, Local_544[bLocal_3181 /*18*/].f_1))
									{
										if (func_8(bVar0) != -1)
										{
											if (func_8(bVar0) != bLocal_3181)
											{
												sVar1 = "KOTC_STRAP2";
												if (func_208(UNK_0xD803B885F5E47A62(), func_7(bVar0)))
												{
													sVar1 = "KOTC_STRAP2GN";
												}
												func_206(81, sVar1, UNK_0x6E524813889AECF8(func_7(bVar0)), func_207(), -1, "KOTC_START", func_207());
											}
											else
											{
												func_205(81, "KOTC_START2", "KOTC_STRAP1", func_207(), -1, func_207(), 1, 0);
												UNK_0x5D96D8530B3D0904(&bLocal_539, 14);
												UNK_0x5D96D8530B3D0904(&bLocal_539, 15);
											}
										}
										else
										{
											func_205(81, "KOTC_START", "KOTC_STRAP3", func_207(), -1, func_207(), 1, 0);
										}
										UNK_0x5D96D8530B3D0904(&bLocal_539, true);
									}
								}
							}
						}
					}
					else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 2))
					{
						if (func_204(81))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_539, 2);
						}
					}
					else if (bLocal_3181 != -1)
					{
						if (func_8(bVar0) == bLocal_3181)
						{
							if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 14))
							{
								if (!func_303(0, 0))
								{
									if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, Local_544[bLocal_3181 /*18*/].f_1))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, Local_544[bLocal_3181 /*18*/].f_1))
										{
											func_205(81, "KOTC_START2", "KOTC_STRAP1", 1, -1, 2, 1, 0);
											UNK_0x5D96D8530B3D0904(&bLocal_539, 14);
										}
									}
								}
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 15))
							{
								if (func_204(81))
								{
									UNK_0x5D96D8530B3D0904(&bLocal_539, 15);
								}
							}
						}
						else
						{
							if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 14))
							{
								UNK_0x0674E58A79778E99(&bLocal_539, 14);
							}
							if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 15))
							{
								UNK_0x0674E58A79778E99(&bLocal_539, 15);
							}
						}
					}
					else
					{
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 14))
						{
							UNK_0x0674E58A79778E99(&bLocal_539, 14);
						}
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 15))
						{
							UNK_0x0674E58A79778E99(&bLocal_539, 15);
						}
					}
				}
				else
				{
					func_203();
				}
				if (func_15(bVar0) == 1)
				{
					if (func_8(bVar0) != -1)
					{
						if (bLocal_3181 != -1)
						{
							if (func_8(bVar0) == bLocal_3181)
							{
								if (!func_303(1, 0))
								{
									func_200("KOTC_KINGOB1", 0);
								}
								else
								{
									func_203();
								}
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 10))
								{
									if (bLocal_3181 == UNK_0x57270EE11514DC67())
									{
										if (!UNK_0xFEBC1E4EC9E001F0())
										{
											if (!func_240())
											{
												if (!func_303(0, 0))
												{
													if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, Local_544[UNK_0x57270EE11514DC67() /*18*/].f_1))
													{
														if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, Local_544[UNK_0x57270EE11514DC67() /*18*/].f_1))
														{
															if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 2))
															{
																if (!func_208(UNK_0xD803B885F5E47A62(), func_7(bVar0)))
																{
																	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 10))
																	{
																		func_239("KOTC_YOUKNG", 30000);
																		func_238(1);
																		UNK_0x5D96D8530B3D0904(&bLocal_539, 6);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if (bLocal_3181 == UNK_0x57270EE11514DC67())
								{
									if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 7))
									{
										if (func_199(UNK_0x57270EE11514DC67()))
										{
											if (!UNK_0xFEBC1E4EC9E001F0())
											{
												if (!func_240())
												{
													if (!func_303(0, 0))
													{
														if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, Local_544[UNK_0x57270EE11514DC67() /*18*/].f_1))
														{
															if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, Local_544[UNK_0x57270EE11514DC67() /*18*/].f_1))
															{
																if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 2))
																{
																	if (!func_208(UNK_0xD803B885F5E47A62(), func_7(bVar0)))
																	{
																		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 7))
																		{
																			func_239("KOTC_OTHRKG", 30000);
																			func_238(1);
																			UNK_0x5D96D8530B3D0904(&bLocal_539, 7);
																		}
																	}
																	else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 11))
																	{
																		func_170("KOTC_OTHRKGGN", func_198(), 1, "KOTC_KINGBLIP", func_171(UNK_0xD803B885F5E47A62(), -2, 0, 0, 0), -1);
																		func_238(1);
																		UNK_0x5D96D8530B3D0904(&bLocal_539, 11);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
								if (((func_199(bLocal_3181) || UNK_0xEAE0D21A50E6C7F4(Local_378[bLocal_3181 /*5*/].f_4, 12)) && UNK_0xEAE0D21A50E6C7F4(bLocal_3174, func_8(bVar0))) && !func_303(1, 0))
								{
									if (func_208(UNK_0xD803B885F5E47A62(), func_7(bVar0)))
									{
										func_167("KOTC_PERMKNGb", func_7(bVar0), "KOTC_KINGNAME", 1, func_171(UNK_0xD803B885F5E47A62(), -2, 0, 0, 0), 0);
									}
									else
									{
										func_156("KOTC_PERMKNG", &(Local_544[func_8(bVar0) /*18*/].f_2), 0, 1);
									}
								}
								else
								{
									func_203();
								}
							}
						}
						else
						{
							func_203();
						}
					}
					else if (bLocal_3181 != -1)
					{
						if (!func_303(1, 0))
						{
							if (func_261(UNK_0x57270EE11514DC67(), bVar0))
							{
								func_200("KOTC_KLLALL", 0);
							}
							else
							{
								func_200("KOTC_ENTER", 0);
							}
						}
						else
						{
							func_203();
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 10))
						{
							if (bLocal_3181 == UNK_0x57270EE11514DC67())
							{
								if (func_199(UNK_0x57270EE11514DC67()))
								{
									if (!UNK_0xFEBC1E4EC9E001F0())
									{
										if (!func_240())
										{
											if (!func_303(0, 0))
											{
												if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, Local_544[UNK_0x57270EE11514DC67() /*18*/].f_1))
												{
													if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, Local_544[UNK_0x57270EE11514DC67() /*18*/].f_1))
													{
														if (func_155(bVar0))
														{
															func_239("KOTC_CONTS", 30000);
															func_238(1);
															UNK_0x5D96D8530B3D0904(&bLocal_539, 10);
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						func_203();
					}
				}
				if (bLocal_3181 != -1)
				{
					if (func_15(bVar0) == 2)
					{
						if (func_199(UNK_0x57270EE11514DC67()) && !func_303(1, 0))
						{
							func_200("KOTC_ENTER", 0);
						}
						else
						{
							func_203();
						}
					}
				}
				else
				{
					func_203();
				}
				func_128(bVar0);
				if (func_260(UNK_0xD803B885F5E47A62()) == 141)
				{
					func_89(bVar0);
				}
				func_88();
				bVar0++;
			}
			break;
		case 2:
			iVar3 = -1;
			bVar0 = false;
			while (bVar0 < 1)
			{
				func_86(bVar0);
				func_84(bVar0);
				bVar0++;
			}
			func_203();
			func_302();
			func_80();
			sVar4 = "KOTC_OVER1";
			bVar5 = "KOTC_OVER2";
			iVar7 = -1;
			bVar0 = false;
			while (bVar0 < 1)
			{
				if (bLocal_3181 != -1)
				{
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 20))
					{
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (Local_80.f_6[bVar0 /*204*/].f_74[iVar2 /*4*/] == bLocal_3181)
							{
								if (Local_80.f_6[bVar0 /*204*/].f_74[iVar2 /*4*/].f_3 > 0f)
								{
									iVar3 = iVar2;
									iVar7 = iVar2;
									switch (iVar2)
									{
										case 0:
											bVar5 = "KOTC1ST_STR";
											sVar4 = "KOTC_WIN1";
											bVar6 = true;
											break;
										case 1:
											bVar5 = "KOTC2ND_STR";
											bVar6 = true;
											break;
										case 2:
											bVar5 = "KOTC3RD_STR";
											bVar6 = true;
											break;
									}
								}
							}
							iVar2++;
						}
					}
				}
				func_128(bVar0);
				if (Local_80.f_6[bVar0 /*204*/].f_74[0 /*4*/] == -1)
				{
					bVar8 = true;
				}
				else if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3174, Local_80.f_6[bVar0 /*204*/].f_74[0 /*4*/]))
				{
					bVar8 = true;
				}
				else if (Local_80.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_3 <= 0f)
				{
					bVar8 = true;
				}
				bVar0++;
			}
			if (bVar6)
			{
				Local_364.f_5 = 1;
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, true) && func_79())
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 3))
				{
					bVar0 = false;
					while (bVar0 < 1)
					{
						if (func_15(bVar0) == 0)
						{
							if (!func_303(0, 0))
							{
								func_78("KOTC_NOENTRY");
							}
						}
						else if (bVar8)
						{
							if (bLocal_3181 != -1)
							{
								if (!func_303(0, 0))
								{
									if (!func_303(0, 0))
									{
										if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, Local_544[bLocal_3181 /*18*/].f_1))
										{
											if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, Local_544[bLocal_3181 /*18*/].f_1))
											{
												if (func_199(bLocal_3181))
												{
													func_205(68, "KOTC_OVER1", "KOTC_NOWIN", 1, 15000, 2, 1, 0);
												}
												else
												{
													func_78("KOTC_NOWIN");
												}
											}
										}
									}
								}
							}
						}
						else if (bVar6)
						{
							if (bLocal_3181 != -1)
							{
								if (!func_303(0, 0))
								{
									if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, Local_544[bLocal_3181 /*18*/].f_1))
									{
										if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, Local_544[bLocal_3181 /*18*/].f_1))
										{
											if (func_199(bLocal_3181))
											{
												func_76(64, func_77(Local_80.f_6[bVar0 /*204*/].f_74[iVar7 /*4*/].f_3), bVar5, sVar4, 1, 15000, -1082130432 /* Float: -1f */, 2);
											}
											else
											{
												func_75(bVar5, func_77(Local_80.f_6[bVar0 /*204*/].f_74[iVar7 /*4*/].f_3));
											}
										}
									}
								}
							}
						}
						else if (bLocal_3181 != -1)
						{
							if (!func_303(0, 0))
							{
								if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, Local_544[bLocal_3181 /*18*/].f_1))
								{
									if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, Local_544[bLocal_3181 /*18*/].f_1))
									{
										if (func_199(bLocal_3181))
										{
											bVar5 = "KOTC_OVER3";
											if (func_73(Local_80.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_1, 1))
											{
												bVar9 = func_63(Local_80.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											else
											{
												bVar9 = UNK_0x6E524813889AECF8(Local_80.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											func_44(72, func_77(Local_80.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_3), bVar5, bVar9, sVar4, 1, 15000, 2);
										}
										else
										{
											bVar5 = "KOTC_OVER3";
											func_32(bVar5, Local_80.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_1, 1, func_77(Local_80.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_3), 0, 0, 0, 1, 0);
										}
									}
								}
							}
						}
						bVar0++;
					}
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, Local_544[UNK_0x57270EE11514DC67() /*18*/].f_1))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, Local_544[UNK_0x57270EE11514DC67() /*18*/].f_1))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_539, 3);
						}
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 3))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 4))
					{
						if (bLocal_3181 != -1)
						{
							if (((((((func_204(64) || func_204(72)) || func_204(68)) || !func_199(bLocal_3181)) || func_303(1, 1)) || UNK_0x798A3F1296751F46()) || func_15(0) == 0) || bLocal_3181 == -1)
							{
								UNK_0x5D96D8530B3D0904(&bLocal_539, 4);
							}
						}
						else
						{
							UNK_0x5D96D8530B3D0904(&bLocal_539, 4);
						}
					}
				}
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 4))
				{
					bVar0 = false;
					while (bVar0 < 1)
					{
						func_622(bVar0, iVar3);
						bVar0++;
					}
				}
			}
			bVar10 = true;
			if (func_303(0, 0))
			{
				bVar10 = false;
			}
			if (func_15(0) == 0)
			{
				bVar10 = false;
			}
			if (bLocal_3181 == -1)
			{
				bVar10 = false;
			}
			if (func_21(&uLocal_1218, bVar10) && UNK_0xEAE0D21A50E6C7F4(bLocal_539, 4))
			{
				if (!func_240() || UNK_0x798A3F1296751F46())
				{
					UNK_0x5D96D8530B3D0904(&bLocal_539, 17);
					if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 5))
					{
						UNK_0x5D96D8530B3D0904(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), true);
						func_505(3);
					}
				}
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

bool func_21(var uParam0, bool bParam1)
{
	bool bVar0;

	if (((*uParam0 > 0 && !func_240()) && !(func_31(UNK_0xD803B885F5E47A62(), 0) && (func_30(UNK_0xD803B885F5E47A62()) || func_28(UNK_0xD803B885F5E47A62())))) && !func_25(UNK_0xD803B885F5E47A62()))
	{
		func_24();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_18(&(uParam0->f_3)))
			{
				func_11(&(uParam0->f_3), 0, 0);
			}
			else if (func_5(&(uParam0->f_3), 1000, 0))
			{
				UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 25);
				if (bParam1)
				{
					UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4588), false);
					func_11(&(uParam0->f_5), 0, 0);
				}
				func_11(&(uParam0->f_1), 0, 0);
				func_23(uParam0, 1);
			}
			break;
		case 1:
			if (func_18(&(uParam0->f_5)))
			{
				if (func_5(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_22();
				func_23(uParam0, 2);
			}
			break;
		case 2:
			func_22();
			if (func_5(&(uParam0->f_1), 15000, 0))
			{
				if (func_237("AMEV_LBD_HELP"))
				{
					UNK_0xA37A90C62806D848(1);
				}
				func_23(uParam0, 3);
			}
			break;
		case 3:
			if (func_5(&(uParam0->f_1), 23500, 0))
			{
				UNK_0x0674E58A79778E99(&(Global_2537071.f_4588), true);
				func_23(uParam0, 4);
				return true;
			}
			break;
		case 4:
			UNK_0x0674E58A79778E99(&(Global_2537071.f_4588), true);
			return true;
	}
	return false;
}

void func_22()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, false))
	{
		if (((((!UNK_0x0178C60FEA5C5A75() && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 2)) && func_756(UNK_0xD803B885F5E47A62(), 1, 1)) && !Global_73825) && !Global_58693) && !UNK_0x757EF87A33649210())
		{
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4588), true);
			func_239("AMEV_LBD_HELP", -1);
			func_238(1);
			UNK_0x0674E58A79778E99(&(Global_2537071.f_4588), false);
		}
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_24()
{
	Global_2462222 = 1;
}

bool func_25(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 2;
			}
		}
	}
	return false;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
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
			return 1;
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
		case 81:
			return 5;
		case 82:
			return 6;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
		case 88:
			return 8;
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
		case 101:
			return 10;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
		case 117:
			return 12;
		case 122:
			return 13;
		case 123:
			return 14;
		case 124:
			return 15;
		case 125:
			return 16;
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
		case 145:
			return 18;
	}
	return -1;
}

bool func_27()
{
	return -1;
}

bool func_28(bool bParam0)
{
	return func_29(bParam0, 19);
}

bool func_29(bool bParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_11.f_4, bParam1);
}

bool func_30(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return func_29(bParam0, 9);
	}
	return false;
}

bool func_31(bool bParam0, bool bParam1)
{
	if (Global_1628237[bParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[bParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_32(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;

	iVar0 = -1;
	if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bParam1) || bParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		if (UNK_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		UNK_0x1E64CE678ED5F61E(bParam0);
		UNK_0x3A820E495A7BA3E5(bParam2);
		UNK_0xD06AC7C87A34A6AD(func_42(&Var1));
		UNK_0x6D99DF8263D35CE5(bParam3);
		if (!bParam6)
		{
			iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		}
		else
		{
			Global_2513218 = { func_41(bParam1) };
			if (UNK_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218))
			{
				iVar17 = 0;
				if (UNK_0x7F8A39872A07D2CE(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2513148.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_40(&Var1) };
					}
					iVar0 = UNK_0x0D020422A92A2236(iVar18, UNK_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar17, 0, Global_2513148, &Var1, Global_1314034, Global_1314035, Global_1314036);
				}
				else
				{
					iVar0 = UNK_0xDCEBC63DB246F9AE(iVar18, UNK_0x95A6C443DD6B08B2(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar17, 0, Global_2513148, Global_1314034, Global_1314035, Global_1314036);
				}
			}
			else
			{
				iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
			}
		}
		func_33(14, bParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_33(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;

	if ((!func_39() || !UNK_0xA14BB9332558B949()) || !func_36(UNK_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_34(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0 /*53*/] = iParam0;
		Global_1670846.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0 /*53*/].f_2[0] = bParam4;
		Global_1670846.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1670846.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_34(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0 /*53*/].f_1)
		{
			func_35(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_35(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0 /*53*/] = { Global_1670846.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_36(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_37(-1, 0) == 8;
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

int func_37(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_38();
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

int func_38()
{
	return Global_1312745;
}

bool func_39()
{
	return UNK_0xC146D5FBD23C6954(-1762644250);
}

struct<16> func_40(char* sParam0)
{
	struct<16> Var0;

	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_41(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

var func_42(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_43(&cVar0);
}

char[] func_43(char[4] cParam0)
{
	return cParam0;
}

int func_44(int iParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_62(iParam0, &Var0, bParam1, bParam2, sParam4);
	StringCopy(&(Var0.f_25), sParam3, 64);
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

int func_45(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_61(uParam0, uParam0->f_17);
	func_59(uParam0);
	if (func_58())
	{
		func_59(uParam0);
	}
	if (func_57(uParam0->f_1))
	{
		func_50();
		if (Global_2439138.f_2723[0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2439138.f_2723[0 /*80*/].f_1 == 13 || Global_2439138.f_2723[0 /*80*/].f_1 == 53) || Global_2439138.f_2723[0 /*80*/].f_1 == 54) || Global_2439138.f_2723[0 /*80*/].f_1 == 58)
		{
			Global_2439138.f_2723[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2439138.f_2723[iVar0 + 1 /*80*/] = { Global_2439138.f_2723[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2439138.f_2723[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 == 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_50();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_48(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 2);
				Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_47(uParam0->f_69, 128))
			{
				if (func_46(Global_2439138.f_2723[iVar0 /*80*/].f_1))
				{
					Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
					func_48(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_46(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return true;
		default:
			break;
	}
	return false;
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_48(var uParam0, int iParam1)
{
	func_49(uParam0, iParam1);
}

void func_49(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_50()
{
	bool bVar0;

	if (Global_2439138.f_3046)
	{
		return;
	}
	if (!Global_76890)
	{
		Global_76890 = 1;
		bVar0 = true;
	}
	func_51();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_51()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_55(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_52(&(Global_2439138.f_3047.f_1));
}

void func_52(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		UNK_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			UNK_0x1200CC973A2399C8(false);
			UNK_0x7E60D21B163E9D56();
		}
		UNK_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		UNK_0x31A33F7BCB08CB80(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!UNK_0x131F22FE6F47A65D(UNK_0xA30EC016B12C03E4()))
		{
			if (!Global_76891)
			{
				if (UNK_0x757EF87A33649210() && !func_54(0))
				{
					UNK_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_53(0);
}

void func_53(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_54(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_55(var uParam0)
{
	func_56(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_56(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

bool func_57(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_58()
{
	return Global_2450632.f_17;
}

void func_59(var uParam0)
{
	if (func_60(uParam0->f_1))
	{
		uParam0->f_72 = func_207();
	}
}

bool func_60(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return true;
		default:
			break;
	}
	return false;
}

void func_61(var uParam0, bool bParam1)
{
	if (func_60(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_27() || !func_756(bParam1, 0, 1))
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_171(bParam1, -2, 0, 0, 0);
		}
	}
}

void func_62(int iParam0, var uParam1, bool bParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_27();
	uParam1->f_18 = func_27();
	uParam1->f_19 = func_27();
	uParam1->f_20 = func_27();
	uParam1->f_1 = iParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = bParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

bool func_63(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_72(&(Global_1628237[bParam0 /*615*/].f_11.f_104));
		return bVar0;
	}
	if (Global_1628237[bParam0 /*615*/].f_11.f_120 != Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_120)
	{
		bVar0 = func_67(bParam0, 0);
		return bVar0;
	}
	if (((func_29(bParam0, 28) || func_29(UNK_0xD803B885F5E47A62(), 28)) || func_66(bParam0)) && !func_65(bParam0))
	{
		return func_67(bParam0, 0);
	}
	bVar1 = func_64(bParam0);
	if (bVar1 != func_27())
	{
		if (bVar1 != UNK_0xD803B885F5E47A62())
		{
			if (!UNK_0xDC30EF462887322E() && !UNK_0x05449BDA851F5199(0, -1, 1))
			{
				return func_67(bVar1, 0);
			}
		}
	}
	if (bVar1 != func_27())
	{
		bVar0 = func_72(&(Global_1628237[bVar1 /*615*/].f_11.f_104));
		if (UNK_0xEA6BC48857E0AC4C(bVar0))
		{
			return func_67(bVar1, 0);
		}
		else
		{
			return bVar0;
		}
	}
	return "";
}

bool func_64(bool bParam0)
{
	if (bParam0 != func_27())
	{
		return Global_1628237[bParam0 /*615*/].f_11;
	}
	return func_27();
}

bool func_65(bool bParam0)
{
	struct<13> Var0;

	Var0 = { func_41(bParam0) };
	if (UNK_0xDC30EF462887322E())
	{
		if (UNK_0x4DEB7B48DD0AABA4(0))
		{
			if (UNK_0x5B9BB2932920F9CD(&Var0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_66(bool bParam0)
{
	struct<13> Var0;

	if (bParam0 != func_27())
	{
		Var0 = { func_41(bParam0) };
		if (UNK_0x33A494591F2C1975() || UNK_0x0EFF6B4415DAF4A1())
		{
			if (UNK_0x4DEB7B48DD0AABA4(0))
			{
				return false;
			}
		}
		else if (UNK_0xDC30EF462887322E())
		{
			if (UNK_0x4DEB7B48DD0AABA4(0))
			{
				if (UNK_0x5B9BB2932920F9CD(&Var0))
				{
					return false;
				}
			}
		}
	}
	return true;
}

char* func_67(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_69(bParam0, 1))
		{
			return func_68();
		}
	}
	return UNK_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_68()
{
	return UNK_0x19C9F30A7697B43C("GB_REST_ACCM");
}

bool func_69(bool bParam0, bool bParam1)
{
	return func_70(bParam0, bParam1, 1);
}

int func_70(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (bParam0 == func_27())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_71(bParam0, iParam2))
		{
			return 0;
		}
	}
	bVar0 = Global_1628237[bParam0 /*615*/].f_11;
	if (bVar0 != func_27() && Global_1628237[bVar0 /*615*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_71(bool bParam0, int iParam1)
{
	if (bParam0 != func_27())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_27())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 == bParam0 && Global_1628237[bParam0 /*615*/].f_11.f_450 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

char* func_72(var uParam0)
{
	return uParam0;
}

bool func_73(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_74(bParam0))
		{
			return false;
		}
	}
	return Global_1628237[bParam0 /*615*/].f_11 != func_27();
}

bool func_74(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (Global_1628237[bParam0 /*615*/].f_11 != func_27())
		{
			return Global_1628237[bParam0 /*615*/].f_11 == bParam0;
		}
	}
	return false;
}

int func_75(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	UNK_0x6D99DF8263D35CE5(bParam1);
	iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	func_33(3, bParam0, 1, "", bParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_76(int iParam0, bool bParam1, bool bParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_62(iParam0, &Var0, bParam1, bParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

bool func_77(float fParam0)
{
	int iVar0;

	iVar0 = SYSTEM::FLOOR(fParam0);
	iVar0 = (iVar0 / Global_262145.f_11191);
	iVar0 = (iVar0 * Global_262145.f_11191);
	return iVar0;
}

int func_78(bool bParam0)
{
	int iVar0;

	iVar0 = -1;
	UNK_0x1E64CE678ED5F61E(bParam0);
	iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
	func_33(0, bParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_79()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 25);
}

void func_80()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			func_81(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_81(bool bParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_513(bParam0);
	if (iParam1 != -1)
	{
		bVar0 = iParam1;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_540, bVar0))
	{
		UNK_0x4A847DA194A5532B(func_83(bParam0, 0), 0, func_82(bParam0, 1));
		if (bVar0 == 4)
		{
			UNK_0x4A847DA194A5532B(func_83(bParam0, 1), 0, func_82(bParam0, 1));
		}
		UNK_0x0674E58A79778E99(&bLocal_540, bVar0);
	}
}

int func_82(bool bParam0, bool bParam1)
{
	if (func_8(bParam0) <= -1)
	{
		if (bParam1)
		{
			return 21;
		}
		return 21;
	}
	else if (func_8(bParam0) == UNK_0x57270EE11514DC67())
	{
		return 9;
	}
	else if (func_208(UNK_0xD803B885F5E47A62(), func_7(bParam0)))
	{
		return func_171(UNK_0xD803B885F5E47A62(), -2, 0, 0, 0);
	}
	return 6;
}

int func_83(bool bParam0, bool bParam1)
{
	switch (func_513(bParam0))
	{
		case 0:
			return 6;
		case 1:
			return 9;
		case 2:
			return 8;
		case 3:
			return 10;
		case 5:
			return 11;
		case 6:
			return 12;
		case 7:
			return 13;
		case 4:
			if (!bParam1)
			{
				return 7;
			}
			else
			{
				return 14;
			}
			break;
	}
	return 6;
}

void func_84(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(func_85(bParam0)))
	{
		UNK_0x142CC44DB769B57E(&(Local_1225[bParam0 /*68*/].f_28));
	}
}

var func_85(bool bParam0)
{
	return Local_1225[bParam0 /*68*/].f_28;
}

void func_86(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(func_87(bParam0)))
	{
		UNK_0x142CC44DB769B57E(&(Local_1225[bParam0 /*68*/].f_27));
	}
}

var func_87(bool bParam0)
{
	return Local_1225[bParam0 /*68*/].f_27;
}

void func_88()
{
	bool bVar0;

	if (bLocal_3181 != -1)
	{
		if (func_199(bLocal_3181))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 16))
		{
			UNK_0x8BC9595FD2792B5D("MP_Deathmatch_Type_Challenge_Scene");
			UNK_0x5D96D8530B3D0904(&bLocal_539, 16);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 16))
	{
		UNK_0x8910D3D58E0132B8("MP_Deathmatch_Type_Challenge_Scene");
		UNK_0x0674E58A79778E99(&bLocal_539, 16);
	}
}

void func_89(bool bParam0)
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (((((func_199(UNK_0x57270EE11514DC67()) && !func_303(1, 1)) && bLocal_3181 == UNK_0x57270EE11514DC67()) && !func_113(UNK_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_112(UNK_0xD803B885F5E47A62())) && !func_111())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 18))
		{
			if (bLocal_3185 == 0)
			{
				bLocal_3185 = true;
			}
			func_100(1, 1, 0, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */, 1084227584 /* Float: 5f */, 0, 1066192077 /* Float: 1.1f */, 0, 0, 1, 0, 1109393408 /* Float: 40f */);
			func_95();
			UNK_0x5D96D8530B3D0904(&bLocal_539, 18);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 18))
	{
		if (bLocal_3185)
		{
			bLocal_3185 = false;
		}
		func_90();
		func_100(0, 1, 0, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */, 1084227584 /* Float: 5f */, 0, 1066192077 /* Float: 1.1f */, 0, 0, 1, 0, 1109393408 /* Float: 40f */);
		UNK_0x0674E58A79778E99(&bLocal_539, 18);
	}
}

void func_90()
{
	if (func_94() && !func_93())
	{
		func_92();
	}
	func_91();
	Global_2405072.f_706 = 0;
}

void func_91()
{
	int iVar0;
	struct<5> Var1;

	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405072.f_706.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_92()
{
	if (func_93())
	{
		if (Global_2405072.f_706.f_518 == Global_2405072.f_1225.f_518)
		{
			return;
		}
	}
	if (!UNK_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_1225), &(Global_2405072.f_706), 519);
		Global_2405072.f_493 = { Global_2405072.f_487 };
		Global_2405072.f_1744 = 1;
	}
}

bool func_93()
{
	if ((Global_2405072.f_1744 && !UNK_0x0D0A574C76D769AC() == Global_2405072.f_1225.f_518) && UNK_0x1727A44C562FBED2(Global_2405072.f_1225.f_518))
	{
		return true;
	}
	return false;
}

bool func_94()
{
	if ((Global_2405072.f_1745 && !UNK_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518) && UNK_0x1727A44C562FBED2(Global_2405072.f_706.f_518))
	{
		return true;
	}
	return false;
}

void func_95()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	var uVar6;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 60)
		{
			func_98(func_513(iVar0), iVar1, &vVar2, &uVar5, &uVar6);
			func_96(vVar2, uVar5, uVar6);
			iVar1++;
		}
		iVar0++;
	}
}

void func_96(vector3 vParam0, var uParam3, var uParam4)
{
	func_97(vParam0, uParam3, uParam4);
}

void func_97(vector3 vParam0, var uParam3, var uParam4)
{
	if (!Global_2405072.f_1745)
	{
	}
	if (Global_2405072.f_706 < 100)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405072.f_706.f_1[Global_2405072.f_706 /*5*/] = { vParam0 };
		Global_2405072.f_706.f_1[Global_2405072.f_706 /*5*/].f_3 = uParam3;
		Global_2405072.f_706.f_1[Global_2405072.f_706 /*5*/].f_4 = uParam4;
		Global_2405072.f_706++;
	}
}

void func_98(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1221.708f, -1849.335f, 1.251f };
					*uParam3 = 337.5771f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 1:
					*uParam2 = { -1237.67f, -1835.705f, 1.2517f };
					*uParam3 = 323.4358f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 2:
					*uParam2 = { -1249.548f, -1817.355f, 1.2506f };
					*uParam3 = 297.8504f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 3:
					*uParam2 = { -1248.685f, -1803.257f, 1.3833f };
					*uParam3 = 286.9426f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 4:
					*uParam2 = { -1248.991f, -1791.148f, 1.6577f };
					*uParam3 = 279.8152f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 5:
					*uParam2 = { -1255.678f, -1781.741f, 1.5292f };
					*uParam3 = 271.3008f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 6:
					*uParam2 = { -1245.86f, -1762.165f, 1.7061f };
					*uParam3 = 232.2266f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 7:
					*uParam2 = { -1245.333f, -1747.114f, 2.0783f };
					*uParam3 = 246.9348f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 8:
					*uParam2 = { -1231.577f, -1747.278f, 2.2692f };
					*uParam3 = 208.6838f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 9:
					*uParam2 = { -1220.947f, -1735.378f, 3.3682f };
					*uParam3 = 201.3756f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 10:
					*uParam2 = { -1210.075f, -1736.36f, 3.2672f };
					*uParam3 = 188.154f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 11:
					*uParam2 = { -1198.247f, -1731.74f, 3.3204f };
					*uParam3 = 194.4361f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 12:
					*uParam2 = { -1181.951f, -1730.004f, 3.3951f };
					*uParam3 = 177.6483f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 13:
					*uParam2 = { -1170.59f, -1719.653f, 3.3414f };
					*uParam3 = 159.2419f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 14:
					*uParam2 = { -1159.548f, -1712.506f, 3.327f };
					*uParam3 = 173.1471f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 15:
					*uParam2 = { -1164.51f, -1729.84f, 3.2972f };
					*uParam3 = 164.5387f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 16:
					*uParam2 = { -1153.682f, -1723.684f, 3.2673f };
					*uParam3 = 159.7204f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 17:
					*uParam2 = { -1144.7f, -1734.572f, 3.2823f };
					*uParam3 = 132.856f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 18:
					*uParam2 = { -1128.272f, -1755.871f, 3.0265f };
					*uParam3 = 111.5717f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 19:
					*uParam2 = { -1140.422f, -1768.454f, 3.1609f };
					*uParam3 = 108.3239f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 20:
					*uParam2 = { -1236.169f, -1851.284f, 1.2074f };
					*uParam3 = 330.7894f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 21:
					*uParam2 = { -1250.026f, -1849.988f, 0.8113f };
					*uParam3 = 315.2169f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 22:
					*uParam2 = { -1249.307f, -1832.01f, 1.2365f };
					*uParam3 = 308.724f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 23:
					*uParam2 = { -1262.08f, -1826.342f, 0.88f };
					*uParam3 = 291.1317f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 24:
					*uParam2 = { -1262.728f, -1810.021f, 1.2095f };
					*uParam3 = 279.2619f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 25:
					*uParam2 = { -1260.259f, -1797.316f, 1.24f };
					*uParam3 = 266.2758f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 26:
					*uParam2 = { -1274.153f, -1773.825f, 1.229f };
					*uParam3 = 253.8689f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 27:
					*uParam2 = { -1260.69f, -1766.211f, 1.6755f };
					*uParam3 = 244.6821f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 28:
					*uParam2 = { -1266.035f, -1751.414f, 1.7303f };
					*uParam3 = 225.9904f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 29:
					*uParam2 = { -1208.952f, -1720.76f, 3.4325f };
					*uParam3 = 190.2951f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 30:
					*uParam2 = { -1195.125f, -1711.339f, 3.4745f };
					*uParam3 = 177.7994f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 31:
					*uParam2 = { -1186.983f, -1699.157f, 3.4862f };
					*uParam3 = 185.7234f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 32:
					*uParam2 = { -1174.999f, -1703.776f, 3.4646f };
					*uParam3 = 172.7709f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 33:
					*uParam2 = { -1163.133f, -1699.905f, 3.4278f };
					*uParam3 = 169.2118f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 34:
					*uParam2 = { -1150.336f, -1701.652f, 3.3947f };
					*uParam3 = 148.2826f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 35:
					*uParam2 = { -1144.078f, -1687.13f, 3.4853f };
					*uParam3 = 149.4927f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 36:
					*uParam2 = { -1138.136f, -1707.854f, 3.387f };
					*uParam3 = 133.8241f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 37:
					*uParam2 = { -1140.055f, -1722.341f, 3.3376f };
					*uParam3 = 127.5326f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 38:
					*uParam2 = { -1116.763f, -1746.22f, 3.1299f };
					*uParam3 = 107.5649f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 39:
					*uParam2 = { -1108.207f, -1735.964f, 3.2643f };
					*uParam3 = 123.7412f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 40:
					*uParam2 = { -1227.086f, -1873.856f, 4.935f };
					*uParam3 = 337.0957f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 41:
					*uParam2 = { -1215.905f, -1861.876f, 4.9443f };
					*uParam3 = 346.5332f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 42:
					*uParam2 = { -1206.479f, -1854.022f, 5.0039f };
					*uParam3 = 346.756f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 43:
					*uParam2 = { -1234.57f, -1863.302f, 0.4019f };
					*uParam3 = 334.4932f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 44:
					*uParam2 = { -1261.542f, -1840.843f, 0.429f };
					*uParam3 = 308.3732f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 45:
					*uParam2 = { -1271.821f, -1799.404f, 0.9933f };
					*uParam3 = 276.274f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 46:
					*uParam2 = { -1284.195f, -1789.106f, 0.6971f };
					*uParam3 = 266.1992f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 47:
					*uParam2 = { -1257.971f, -1736.858f, 2.0784f };
					*uParam3 = 227.487f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 48:
					*uParam2 = { -1247.267f, -1725.901f, 3.2245f };
					*uParam3 = 214.7514f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 49:
					*uParam2 = { -1234.988f, -1722.898f, 3.5186f };
					*uParam3 = 220.7502f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 50:
					*uParam2 = { -1235.874f, -1703.238f, 3.0997f };
					*uParam3 = 214.0405f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 51:
					*uParam2 = { -1231.588f, -1682.849f, 2.571f };
					*uParam3 = 203.4435f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 52:
					*uParam2 = { -1215.568f, -1695.777f, 3.1209f };
					*uParam3 = 196.5891f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 53:
					*uParam2 = { -1132.415f, -1669.435f, 3.5755f };
					*uParam3 = 148.2112f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 54:
					*uParam2 = { -1159.309f, -1677.777f, 3.4694f };
					*uParam3 = 175.6314f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 55:
					*uParam2 = { -1129.18f, -1690.502f, 3.4678f };
					*uParam3 = 143.3497f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 56:
					*uParam2 = { -1119.669f, -1702.988f, 3.4241f };
					*uParam3 = 129.3894f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 57:
					*uParam2 = { -1120.063f, -1717.326f, 3.3807f };
					*uParam3 = 123.5869f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 58:
					*uParam2 = { -1111.901f, -1758.692f, 4.7663f };
					*uParam3 = 93.7592f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 59:
					*uParam2 = { -1122.059f, -1769.543f, 4.9921f };
					*uParam3 = 93.2178f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1692.861f, -80.4741f, 174.6247f };
					*uParam3 = 22.7116f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 1:
					*uParam2 = { 1699.049f, -73.278f, 175.3116f };
					*uParam3 = 36.6067f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 2:
					*uParam2 = { 1686.15f, -72.261f, 173.9488f };
					*uParam3 = 33.5969f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 3:
					*uParam2 = { 1673.573f, -76.8662f, 172.6441f };
					*uParam3 = 358.3647f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 4:
					*uParam2 = { 1668.303f, -68.8711f, 172.6008f };
					*uParam3 = 344.7672f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 5:
					*uParam2 = { 1664.004f, -81.4696f, 171.3247f };
					*uParam3 = 335.9399f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 6:
					*uParam2 = { 1653.943f, -82.7018f, 170.2733f };
					*uParam3 = 316.5097f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 7:
					*uParam2 = { 1642.184f, 16.9022f, 172.8744f };
					*uParam3 = 213.6659f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 8:
					*uParam2 = { 1647.117f, 26.0881f, 172.469f };
					*uParam3 = 200.4823f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 9:
					*uParam2 = { 1643.251f, 34.2645f, 171.8502f };
					*uParam3 = 198.3856f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 10:
					*uParam2 = { 1652.155f, 38.4683f, 171.5731f };
					*uParam3 = 167.6548f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 11:
					*uParam2 = { 1647.521f, 46.6361f, 171.515f };
					*uParam3 = 173.6852f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 12:
					*uParam2 = { 1658.341f, 46.5354f, 171.4155f };
					*uParam3 = 142.775f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 13:
					*uParam2 = { 1654.557f, 54.9274f, 171.5186f };
					*uParam3 = 158.0565f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 14:
					*uParam2 = { 1679.687f, -62.2895f, 172.8752f };
					*uParam3 = 19.1425f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 15:
					*uParam2 = { 1648.26f, -92.0332f, 169.0467f };
					*uParam3 = 320.4252f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 16:
					*uParam2 = { 1641.12f, -90.8545f, 167.3707f };
					*uParam3 = 340.133f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 17:
					*uParam2 = { 1632.839f, -88.4347f, 166.232f };
					*uParam3 = 275.8517f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 18:
					*uParam2 = { 1624.526f, -82.0814f, 165.1201f };
					*uParam3 = 268.6114f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 19:
					*uParam2 = { 1709.025f, -79.3046f, 176.215f };
					*uParam3 = 47.9711f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 20:
					*uParam2 = { 1709.47f, -89.1149f, 176.8704f };
					*uParam3 = 45.0986f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 21:
					*uParam2 = { 1719.762f, -89.4824f, 177.2371f };
					*uParam3 = 40.521f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 22:
					*uParam2 = { 1715.411f, -97.7661f, 177.0435f };
					*uParam3 = 39.9521f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 23:
					*uParam2 = { 1725.27f, -101.2808f, 177.3414f };
					*uParam3 = 28.2699f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 24:
					*uParam2 = { 1664.762f, 51.6959f, 171.2758f };
					*uParam3 = 125.1599f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 25:
					*uParam2 = { 1659.656f, 60.4243f, 171.7457f };
					*uParam3 = 155.8516f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 26:
					*uParam2 = { 1671.615f, 58.2652f, 171.0533f };
					*uParam3 = 130.5652f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 27:
					*uParam2 = { 1670.401f, 68.8127f, 170.8255f };
					*uParam3 = 142.8485f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 28:
					*uParam2 = { 1680.824f, 64.6627f, 170.8684f };
					*uParam3 = 171.7255f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 29:
					*uParam2 = { 1686.476f, 72.1055f, 170.6706f };
					*uParam3 = 118.2492f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 30:
					*uParam2 = { 1724.498f, 78.3834f, 169.7617f };
					*uParam3 = 122.1907f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 31:
					*uParam2 = { 1716.555f, 77.9f, 170.125f };
					*uParam3 = 133.2787f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 32:
					*uParam2 = { 1718.658f, 69.3794f, 169.7158f };
					*uParam3 = 123.6501f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 33:
					*uParam2 = { 1708.223f, 67.7488f, 170.122f };
					*uParam3 = 125.7215f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 34:
					*uParam2 = { 1696.666f, 67.5787f, 170.4112f };
					*uParam3 = 130.5078f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 35:
					*uParam2 = { 1688.924f, 64.4787f, 170.5247f };
					*uParam3 = 116.7526f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 36:
					*uParam2 = { 1654.409f, 85.3155f, 178.6964f };
					*uParam3 = 185.1295f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 37:
					*uParam2 = { 1642.521f, 61.9855f, 183.7891f };
					*uParam3 = 187.6025f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 38:
					*uParam2 = { 1663.522f, 37.8715f, 170.7838f };
					*uParam3 = 181.9699f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 39:
					*uParam2 = { 1663.431f, 25.7403f, 167.747f };
					*uParam3 = 165.7094f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 40:
					*uParam2 = { 1660.156f, 12.794f, 165.1707f };
					*uParam3 = 184.4829f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 41:
					*uParam2 = { 1658.881f, -53.3581f, 167.4092f };
					*uParam3 = 340.2356f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 42:
					*uParam2 = { 1650.805f, -63.341f, 163.7801f };
					*uParam3 = 325.3763f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 43:
					*uParam2 = { 1619.019f, -87.1216f, 164.7846f };
					*uParam3 = 285.7851f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 44:
					*uParam2 = { 1616.216f, -76.6892f, 164.2788f };
					*uParam3 = 277.6688f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 45:
					*uParam2 = { 1611.567f, -84.1719f, 164.6911f };
					*uParam3 = 279.2012f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 46:
					*uParam2 = { 1606.564f, -73.1815f, 163.3484f };
					*uParam3 = 256.1666f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 47:
					*uParam2 = { 1595.997f, -78.4415f, 162.1879f };
					*uParam3 = 273.5168f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 48:
					*uParam2 = { 1596.441f, -69.8807f, 162.1016f };
					*uParam3 = 260.1767f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 49:
					*uParam2 = { 1587.161f, -67.6343f, 161.2196f };
					*uParam3 = 253.1009f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 50:
					*uParam2 = { 1582.353f, -76.1702f, 160.4171f };
					*uParam3 = 265.3223f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 51:
					*uParam2 = { 1725.676f, -110.6558f, 177.8831f };
					*uParam3 = 34.6784f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 52:
					*uParam2 = { 1736.203f, -108.6194f, 179.2085f };
					*uParam3 = 50.2519f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 53:
					*uParam2 = { 1746.135f, -106.5357f, 180.7151f };
					*uParam3 = 65.9975f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 54:
					*uParam2 = { 1749.594f, -96.7965f, 182.065f };
					*uParam3 = 79.3328f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 55:
					*uParam2 = { 1758.513f, -98.7928f, 182.982f };
					*uParam3 = 82.5892f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 56:
					*uParam2 = { 1760.473f, -88.7761f, 184.3481f };
					*uParam3 = 83.4158f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 57:
					*uParam2 = { 1770.153f, -89.9473f, 186.0895f };
					*uParam3 = 69.9826f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 58:
					*uParam2 = { 1772.731f, -80.3556f, 187.6041f };
					*uParam3 = 87.3442f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 59:
					*uParam2 = { 1782.038f, -81.4923f, 188.8666f };
					*uParam3 = 92.9392f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -358.9362f, 6101.992f, 30.5445f };
					*uParam3 = 124.1256f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 1:
					*uParam2 = { -348.5437f, 6102.846f, 30.5442f };
					*uParam3 = 115.8979f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 2:
					*uParam2 = { -354.9039f, 6112.223f, 30.5402f };
					*uParam3 = 155.6832f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 3:
					*uParam2 = { -341.2615f, 6111.447f, 30.542f };
					*uParam3 = 114.7182f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 4:
					*uParam2 = { -347.4731f, 6120.339f, 30.5401f };
					*uParam3 = 161.4131f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 5:
					*uParam2 = { -376.9227f, 6129.001f, 30.5322f };
					*uParam3 = 153.5222f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 6:
					*uParam2 = { -384.3775f, 6136.947f, 30.4047f };
					*uParam3 = 187.2874f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 7:
					*uParam2 = { -389.1951f, 6129.617f, 30.5795f };
					*uParam3 = 181.9189f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 8:
					*uParam2 = { -399.0005f, 6127.275f, 30.549f };
					*uParam3 = 204.8398f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 9:
					*uParam2 = { -383.5045f, 6120.464f, 30.5795f };
					*uParam3 = 140.9251f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 10:
					*uParam2 = { -391.13f, 6120.804f, 30.4824f };
					*uParam3 = 201.1372f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 11:
					*uParam2 = { -402.7893f, 6117.366f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 12:
					*uParam2 = { -412.6236f, 6114.75f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 13:
					*uParam2 = { -394.3771f, 6111.254f, 30.4438f };
					*uParam3 = 239.3517f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 14:
					*uParam2 = { -389.6141f, 6105.142f, 30.5445f };
					*uParam3 = 223.9884f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 15:
					*uParam2 = { -393.7008f, 6063.039f, 30.6001f };
					*uParam3 = 307.3006f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 16:
					*uParam2 = { -390.5935f, 6052.42f, 30.6001f };
					*uParam3 = 318.0318f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 17:
					*uParam2 = { -370.7218f, 6062.16f, 30.6001f };
					*uParam3 = 22.496f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 18:
					*uParam2 = { -360.3093f, 6063.834f, 30.6001f };
					*uParam3 = 37.8362f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 19:
					*uParam2 = { -342.4209f, 6079.654f, 30.3972f };
					*uParam3 = 68.9811f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 20:
					*uParam2 = { -341.2047f, 6070.171f, 30.4855f };
					*uParam3 = 63.9301f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 21:
					*uParam2 = { -329.9387f, 6066.402f, 30.3113f };
					*uParam3 = 44.5343f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 22:
					*uParam2 = { -335.7858f, 6122.277f, 31.2548f };
					*uParam3 = 129.6423f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 23:
					*uParam2 = { -342.0471f, 6128.171f, 31.2548f };
					*uParam3 = 142.1917f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 24:
					*uParam2 = { -349.7313f, 6135.283f, 31.2548f };
					*uParam3 = 158.8037f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 25:
					*uParam2 = { -356.2828f, 6125.203f, 30.5402f };
					*uParam3 = 199.7626f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 26:
					*uParam2 = { -359.0895f, 6139.214f, 30.5635f };
					*uParam3 = 124.4663f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 27:
					*uParam2 = { -369.4224f, 6152.725f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 28:
					*uParam2 = { -375.9839f, 6141.022f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 29:
					*uParam2 = { -369.7337f, 6134.166f, 30.5525f };
					*uParam3 = 136.8736f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 30:
					*uParam2 = { -359.228f, 6073.3f, 30.5975f };
					*uParam3 = 40.8648f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 31:
					*uParam2 = { -350.0499f, 6083.418f, 30.3773f };
					*uParam3 = 81.9925f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 32:
					*uParam2 = { -332.9335f, 6056.562f, 30.218f };
					*uParam3 = 34.6386f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 33:
					*uParam2 = { -319.7262f, 6071.655f, 30.4404f };
					*uParam3 = 98.0741f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 34:
					*uParam2 = { -305.5597f, 6086.671f, 30.3145f };
					*uParam3 = 105.1401f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 35:
					*uParam2 = { -315.9f, 6098.8f, 30.5622f };
					*uParam3 = 68.0701f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 36:
					*uParam2 = { -321.8067f, 6105.211f, 30.5847f };
					*uParam3 = 77.1148f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 37:
					*uParam2 = { -333.3944f, 6102.061f, 30.5452f };
					*uParam3 = 94.9811f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 38:
					*uParam2 = { -328.1533f, 6111.544f, 30.5992f };
					*uParam3 = 112.3565f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 39:
					*uParam2 = { -346.6402f, 6170.479f, 30.5104f };
					*uParam3 = 153.9383f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 40:
					*uParam2 = { -348.4091f, 6161.741f, 30.5903f };
					*uParam3 = 127.3381f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 41:
					*uParam2 = { -357.501f, 6164.666f, 30.3218f };
					*uParam3 = 165.9396f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 42:
					*uParam2 = { -362.3921f, 6158.998f, 30.4267f };
					*uParam3 = 164.6814f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 43:
					*uParam2 = { -299.2778f, 6094.682f, 30.3967f };
					*uParam3 = 97.7633f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 44:
					*uParam2 = { -403.1499f, 6144.179f, 30.5344f };
					*uParam3 = 192.2655f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 45:
					*uParam2 = { -419.8507f, 6128.894f, 30.3768f };
					*uParam3 = 226.1505f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 46:
					*uParam2 = { -403.4776f, 6109.125f, 30.432f };
					*uParam3 = 231.4631f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 47:
					*uParam2 = { -418.8898f, 6102.594f, 30.5063f };
					*uParam3 = 250.378f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 48:
					*uParam2 = { -423.8823f, 6087.721f, 30.3067f };
					*uParam3 = 249.7169f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 49:
					*uParam2 = { -409.3334f, 6087.301f, 30.6001f };
					*uParam3 = 255.2337f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 50:
					*uParam2 = { -415.4413f, 6074.564f, 30.6001f };
					*uParam3 = 295.8184f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 51:
					*uParam2 = { -424.9092f, 6072.749f, 30.4263f };
					*uParam3 = 283.0375f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 52:
					*uParam2 = { -420.9166f, 6060.098f, 30.5557f };
					*uParam3 = 253.9669f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 53:
					*uParam2 = { -410.8875f, 6060.549f, 30.6001f };
					*uParam3 = 233.6391f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 54:
					*uParam2 = { -401.7228f, 6048.293f, 30.6001f };
					*uParam3 = 316.9792f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 55:
					*uParam2 = { -410.8336f, 6049.957f, 30.7181f };
					*uParam3 = 282.7038f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 56:
					*uParam2 = { -388.0199f, 6039.768f, 30.5993f };
					*uParam3 = 17.0043f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 57:
					*uParam2 = { -395.2367f, 6033.086f, 30.6906f };
					*uParam3 = 344.4481f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 58:
					*uParam2 = { -385.8562f, 6026.026f, 30.7199f };
					*uParam3 = 19.855f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 59:
					*uParam2 = { -380.7711f, 6033.284f, 30.5989f };
					*uParam3 = 40.8827f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -692.3021f, 5591.033f, 31.803f };
					*uParam3 = 74.8653f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 1:
					*uParam2 = { -688.3215f, 5575.978f, 38.7867f };
					*uParam3 = 59.0735f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 2:
					*uParam2 = { -697.7473f, 5566.13f, 37.8698f };
					*uParam3 = 50.5049f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 3:
					*uParam2 = { -707.0853f, 5561.903f, 37.7135f };
					*uParam3 = 46.5953f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 4:
					*uParam2 = { -718.0601f, 5562.404f, 35.1231f };
					*uParam3 = 35.9231f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 5:
					*uParam2 = { -729.6589f, 5559.356f, 33.8316f };
					*uParam3 = 2.3291f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 6:
					*uParam2 = { -723.8281f, 5544.737f, 34.8933f };
					*uParam3 = 18.3278f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 7:
					*uParam2 = { -780.6183f, 5563.971f, 32.6778f };
					*uParam3 = 329.6704f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 8:
					*uParam2 = { -767.3f, 5569.303f, 35.3f };
					*uParam3 = 331.3245f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 9:
					*uParam2 = { -772.2f, 5581.6f, 32.6824f };
					*uParam3 = 301.3555f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 10:
					*uParam2 = { -778.3644f, 5588.715f, 32.6826f };
					*uParam3 = 270.8067f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 11:
					*uParam2 = { -768.7381f, 5595.103f, 32.6827f };
					*uParam3 = 230.1011f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 12:
					*uParam2 = { -782.3171f, 5573.262f, 32.6847f };
					*uParam3 = 294.6598f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 13:
					*uParam2 = { -781.341f, 5582.1f, 32.6771f };
					*uParam3 = 336.2302f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 14:
					*uParam2 = { -753.9799f, 5627.107f, 27.1403f };
					*uParam3 = 171.4856f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 15:
					*uParam2 = { -730.2549f, 5635.994f, 27.8518f };
					*uParam3 = 162.9716f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 16:
					*uParam2 = { -723.6004f, 5622.383f, 28.385f };
					*uParam3 = 172.2795f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 17:
					*uParam2 = { -718.595f, 5631.016f, 27.7666f };
					*uParam3 = 172.2795f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 18:
					*uParam2 = { -708.1818f, 5621.512f, 29.6452f };
					*uParam3 = 126.8752f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 19:
					*uParam2 = { -696.5601f, 5615.674f, 29.9981f };
					*uParam3 = 125.8635f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 20:
					*uParam2 = { -708.3126f, 5550.206f, 36.7429f };
					*uParam3 = 29.6831f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 21:
					*uParam2 = { -766.3f, 5544.3f, 32.6826f };
					*uParam3 = 30.2344f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 22:
					*uParam2 = { -749.5f, 5527.9f, 33.1f };
					*uParam3 = 346.3935f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 23:
					*uParam2 = { -768.97f, 5520.835f, 32.6799f };
					*uParam3 = 340.5899f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 24:
					*uParam2 = { -763.8516f, 5533.312f, 32.6785f };
					*uParam3 = 1.7896f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 25:
					*uParam2 = { -775.123f, 5542.04f, 32.6934f };
					*uParam3 = 349.4598f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 26:
					*uParam2 = { -766.6f, 5553.1f, 34.4f };
					*uParam3 = 1.046f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 27:
					*uParam2 = { -771.2969f, 5556.745f, 32.6834f };
					*uParam3 = 349.9529f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 28:
					*uParam2 = { -781.6904f, 5555.604f, 32.6802f };
					*uParam3 = 351.5664f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 29:
					*uParam2 = { -769.5516f, 5621.658f, 26.7823f };
					*uParam3 = 235.7381f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 30:
					*uParam2 = { -761.2958f, 5636.444f, 25.4519f };
					*uParam3 = 168.4409f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 31:
					*uParam2 = { -760.2766f, 5661.296f, 22.954f };
					*uParam3 = 164.5044f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 32:
					*uParam2 = { -741.7708f, 5648.583f, 25.8433f };
					*uParam3 = 171.5803f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 33:
					*uParam2 = { -731.1522f, 5650.561f, 27.2619f };
					*uParam3 = 172.6602f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 34:
					*uParam2 = { -721.4506f, 5664.842f, 26.6086f };
					*uParam3 = 175.8839f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 35:
					*uParam2 = { -719.6653f, 5647.082f, 28.1182f };
					*uParam3 = 166.6596f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 36:
					*uParam2 = { -708.6494f, 5641.488f, 29.7045f };
					*uParam3 = 139.2498f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 37:
					*uParam2 = { -698.6087f, 5635.278f, 31.1732f };
					*uParam3 = 130.991f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 38:
					*uParam2 = { -764.6f, 5648.1f, 23.8802f };
					*uParam3 = 183.034f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 39:
					*uParam2 = { -750.9f, 5666.5f, 23.3295f };
					*uParam3 = 231.3595f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 40:
					*uParam2 = { -719.377f, 5680.363f, 25.3398f };
					*uParam3 = 160.6696f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 41:
					*uParam2 = { -698.3569f, 5694.537f, 26.6459f };
					*uParam3 = 147.8193f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 42:
					*uParam2 = { -680.2346f, 5676.271f, 30.6741f };
					*uParam3 = 86.9398f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 43:
					*uParam2 = { -676.3746f, 5655.031f, 32.0498f };
					*uParam3 = 139.4649f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 44:
					*uParam2 = { -680.2036f, 5638.799f, 32.6927f };
					*uParam3 = 134.8275f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 45:
					*uParam2 = { -650.3818f, 5653.84f, 33.0871f };
					*uParam3 = 123.0167f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 46:
					*uParam2 = { -670.8715f, 5583.509f, 38.7761f };
					*uParam3 = 85.3828f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 47:
					*uParam2 = { -743.9585f, 5544.044f, 32.6886f };
					*uParam3 = 10.6683f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 48:
					*uParam2 = { -786.1422f, 5543.069f, 32.7461f };
					*uParam3 = 320.9388f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 49:
					*uParam2 = { -800.3854f, 5544.438f, 32.1822f };
					*uParam3 = 318.5256f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 50:
					*uParam2 = { -808.8489f, 5557.178f, 31.0331f };
					*uParam3 = 284.0945f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 51:
					*uParam2 = { -804.6185f, 5577.981f, 30.1522f };
					*uParam3 = 312.7694f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 52:
					*uParam2 = { -804.7294f, 5593.23f, 28.3762f };
					*uParam3 = 257.0917f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 53:
					*uParam2 = { -796.4553f, 5614.668f, 26.6406f };
					*uParam3 = 245.4986f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 54:
					*uParam2 = { -790.2338f, 5632.483f, 25.0732f };
					*uParam3 = 224.0737f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 55:
					*uParam2 = { -807.922f, 5624.847f, 24.5138f };
					*uParam3 = 240.116f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 56:
					*uParam2 = { -778.2f, 5620.3f, 27f };
					*uParam3 = 221.8036f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 57:
					*uParam2 = { -820.9523f, 5595.459f, 24.6204f };
					*uParam3 = 248.8524f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 58:
					*uParam2 = { -712.2f, 5689.9f, 26f };
					*uParam3 = 156.9858f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 59:
					*uParam2 = { -699.6256f, 5678.481f, 29.242f };
					*uParam3 = 137.245f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2504.708f, 3832.864f, 44.2233f };
					*uParam3 = 183.6139f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 1:
					*uParam2 = { 2470.234f, 3832.214f, 39.2978f };
					*uParam3 = 221.0469f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 2:
					*uParam2 = { 2469.984f, 3815.587f, 39.1223f };
					*uParam3 = 236.1043f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 3:
					*uParam2 = { 2472.682f, 3802.595f, 39.5029f };
					*uParam3 = 252.6169f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 4:
					*uParam2 = { 2448.337f, 3799.731f, 39.2155f };
					*uParam3 = 245.4931f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 5:
					*uParam2 = { 2429.278f, 3803.292f, 38.8134f };
					*uParam3 = 251.2017f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 6:
					*uParam2 = { 2461.768f, 3786.931f, 40.1218f };
					*uParam3 = 273.0054f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 7:
					*uParam2 = { 2446.433f, 3784.864f, 39.6849f };
					*uParam3 = 253.3649f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 8:
					*uParam2 = { 2431.84f, 3775.977f, 39.5771f };
					*uParam3 = 262.8813f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 9:
					*uParam2 = { 2426.948f, 3759.106f, 40.5694f };
					*uParam3 = 286.9683f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 10:
					*uParam2 = { 2413.091f, 3747.124f, 40.6396f };
					*uParam3 = 291.6124f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 11:
					*uParam2 = { 2435.193f, 3749.984f, 41.1655f };
					*uParam3 = 292.603f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 12:
					*uParam2 = { 2447.66f, 3752.583f, 41.4906f };
					*uParam3 = 297.6301f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 13:
					*uParam2 = { 2458.258f, 3758.142f, 41.1153f };
					*uParam3 = 303.2986f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 14:
					*uParam2 = { 2467.802f, 3750.602f, 41.4918f };
					*uParam3 = 303.2986f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 15:
					*uParam2 = { 2473.253f, 3734.285f, 41.4643f };
					*uParam3 = 319.8912f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 16:
					*uParam2 = { 2474.793f, 3718.189f, 43.5229f };
					*uParam3 = 353.5786f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 17:
					*uParam2 = { 2494.569f, 3724.297f, 42.2386f };
					*uParam3 = 354.6885f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 18:
					*uParam2 = { 2336.604f, 3786.805f, 35.4554f };
					*uParam3 = 271.7747f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 19:
					*uParam2 = { 2449.885f, 3769.517f, 40.3259f };
					*uParam3 = 284.606f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 20:
					*uParam2 = { 2486.191f, 3708.932f, 42.8584f };
					*uParam3 = 338.9825f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 21:
					*uParam2 = { 2441.525f, 3726.493f, 49.833f };
					*uParam3 = 305.777f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 22:
					*uParam2 = { 2435.716f, 3718.48f, 50.9846f };
					*uParam3 = 316.2304f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 23:
					*uParam2 = { 2414.73f, 3734.144f, 41.656f };
					*uParam3 = 304.645f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 24:
					*uParam2 = { 2397.829f, 3753.812f, 38.2667f };
					*uParam3 = 277.5322f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 25:
					*uParam2 = { 2413.961f, 3768.889f, 38.9386f };
					*uParam3 = 262.8003f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 26:
					*uParam2 = { 2418.116f, 3784.66f, 38.7937f };
					*uParam3 = 271.0046f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 27:
					*uParam2 = { 2402.416f, 3792.671f, 38.1692f };
					*uParam3 = 252.6272f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 28:
					*uParam2 = { 2392.174f, 3800.214f, 37.3174f };
					*uParam3 = 233.5119f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 29:
					*uParam2 = { 2379.034f, 3800.104f, 36.6627f };
					*uParam3 = 253.7779f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 30:
					*uParam2 = { 2421.42f, 3819.218f, 36.6498f };
					*uParam3 = 240.598f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 31:
					*uParam2 = { 2433.665f, 3833.4f, 36.8711f };
					*uParam3 = 235.1875f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 32:
					*uParam2 = { 2446.784f, 3840.43f, 36.9341f };
					*uParam3 = 232.4636f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 33:
					*uParam2 = { 2462.195f, 3846.708f, 37.3552f };
					*uParam3 = 199.2328f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 34:
					*uParam2 = { 2477.133f, 3855.754f, 37.2602f };
					*uParam3 = 202.825f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 35:
					*uParam2 = { 2450.037f, 3811.51f, 39.475f };
					*uParam3 = 250.1392f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 36:
					*uParam2 = { 2485.065f, 3829.442f, 39.1108f };
					*uParam3 = 211.7988f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 37:
					*uParam2 = { 2484.83f, 3814.141f, 39.3918f };
					*uParam3 = 229.5693f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 38:
					*uParam2 = { 2566.085f, 3806.854f, 64.6304f };
					*uParam3 = 105.4003f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 39:
					*uParam2 = { 2585.664f, 3806.854f, 71.7304f };
					*uParam3 = 110.9439f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 40:
					*uParam2 = { 2620.499f, 3798.988f, 78.4414f };
					*uParam3 = 80.1436f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 41:
					*uParam2 = { 2612.831f, 3816.725f, 77.148f };
					*uParam3 = 105.885f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 42:
					*uParam2 = { 2481.003f, 3874.722f, 38.2954f };
					*uParam3 = 168.6165f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 43:
					*uParam2 = { 2439.931f, 3869.727f, 36.8359f };
					*uParam3 = 194.6768f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 44:
					*uParam2 = { 2415.056f, 3867.74f, 36.4367f };
					*uParam3 = 227.8888f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 45:
					*uParam2 = { 2405.057f, 3840.129f, 37.6172f };
					*uParam3 = 237.4134f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 46:
					*uParam2 = { 2402.643f, 3831.987f, 37.3666f };
					*uParam3 = 243.847f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 47:
					*uParam2 = { 2393.434f, 3820.804f, 37.399f };
					*uParam3 = 274.6625f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 48:
					*uParam2 = { 2379.645f, 3814.471f, 37.141f };
					*uParam3 = 261.4475f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 49:
					*uParam2 = { 2362.336f, 3795.185f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 50:
					*uParam2 = { 2347.031f, 3771.605f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 51:
					*uParam2 = { 2390.352f, 3771.605f, 37.0186f };
					*uParam3 = 277.3893f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 52:
					*uParam2 = { 2376.869f, 3747.89f, 43.6471f };
					*uParam3 = 283.6571f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 53:
					*uParam2 = { 2397.29f, 3720.224f, 45.2658f };
					*uParam3 = 309.3541f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 54:
					*uParam2 = { 2389.842f, 3708.438f, 48.8025f };
					*uParam3 = 328.7773f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 55:
					*uParam2 = { 2414.263f, 3688.072f, 55.1156f };
					*uParam3 = 318.0387f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 56:
					*uParam2 = { 2425.977f, 3703.052f, 52.2051f };
					*uParam3 = 321.8817f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 57:
					*uParam2 = { 2457.983f, 3723.803f, 47.774f };
					*uParam3 = 320.001f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 58:
					*uParam2 = { 2467.429f, 3686.109f, 46.7001f };
					*uParam3 = 326.4034f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 59:
					*uParam2 = { 2500.671f, 3701.153f, 40.9656f };
					*uParam3 = 343.9347f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -393.9336f, 1106.463f, 324.963f };
					*uParam3 = 3.7402f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 1:
					*uParam2 = { -410.0362f, 1109.404f, 324.9667f };
					*uParam3 = 333.049f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 2:
					*uParam2 = { -428.784f, 1115.099f, 325.868f };
					*uParam3 = 300.9811f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 3:
					*uParam2 = { -447.0386f, 1119.385f, 324.9694f };
					*uParam3 = 291.3791f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 4:
					*uParam2 = { -442.3369f, 1130.731f, 324.9604f };
					*uParam3 = 277.1605f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 5:
					*uParam2 = { -440.9719f, 1142.607f, 324.9557f };
					*uParam3 = 250.3044f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 6:
					*uParam2 = { -446.4467f, 1154.628f, 325.0045f };
					*uParam3 = 248.4445f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 7:
					*uParam2 = { -434.5363f, 1160.321f, 324.9632f };
					*uParam3 = 230.0039f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 8:
					*uParam2 = { -424.4414f, 1172.293f, 325.0043f };
					*uParam3 = 219.6946f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 9:
					*uParam2 = { -421.9871f, 1161.774f, 325.0063f };
					*uParam3 = 219.721f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 10:
					*uParam2 = { -427.4456f, 1148.051f, 325.0044f };
					*uParam3 = 230.6394f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 11:
					*uParam2 = { -428.7997f, 1136.869f, 325.0044f };
					*uParam3 = 260.5906f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 12:
					*uParam2 = { -431.5406f, 1126.397f, 325.0403f };
					*uParam3 = 280.8301f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 13:
					*uParam2 = { -416.0247f, 1120.771f, 324.9593f };
					*uParam3 = 308.4634f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 14:
					*uParam2 = { -419.4272f, 1131.455f, 325.0045f };
					*uParam3 = 267.8754f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 15:
					*uParam2 = { -418.7003f, 1142.939f, 324.962f };
					*uParam3 = 234.7959f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 16:
					*uParam2 = { -408.7494f, 1158.555f, 325.0084f };
					*uParam3 = 202.298f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 17:
					*uParam2 = { -411.2803f, 1169.951f, 324.9431f };
					*uParam3 = 205.6539f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 18:
					*uParam2 = { -398.8847f, 1164.101f, 325.0133f };
					*uParam3 = 184.3107f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 19:
					*uParam2 = { -388.1964f, 1173.05f, 324.8147f };
					*uParam3 = 166.4872f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 20:
					*uParam2 = { -368.8524f, 1165.414f, 324.8589f };
					*uParam3 = 143.9187f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 21:
					*uParam2 = { -378.9884f, 1168.124f, 324.9442f };
					*uParam3 = 138.8804f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 22:
					*uParam2 = { -386.2831f, 1186.969f, 324.8583f };
					*uParam3 = 168.679f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 23:
					*uParam2 = { -424.0227f, 1207.077f, 324.8583f };
					*uParam3 = 192.8885f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 24:
					*uParam2 = { -425.9954f, 1196.52f, 324.8583f };
					*uParam3 = 182.6931f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 25:
					*uParam2 = { -400.9391f, 1177.741f, 324.7394f };
					*uParam3 = 183.8522f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 26:
					*uParam2 = { -414.3408f, 1178.525f, 324.7417f };
					*uParam3 = 190.7249f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 27:
					*uParam2 = { -424.777f, 1183.848f, 324.7417f };
					*uParam3 = 204.1173f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 28:
					*uParam2 = { -438.3099f, 1184.969f, 324.9972f };
					*uParam3 = 216.3494f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 29:
					*uParam2 = { -440.8298f, 1174.33f, 324.9674f };
					*uParam3 = 236.8431f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 30:
					*uParam2 = { -450.9589f, 1165.905f, 324.9547f };
					*uParam3 = 238.6017f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 31:
					*uParam2 = { -459.008f, 1156.905f, 324.9622f };
					*uParam3 = 235.1455f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 32:
					*uParam2 = { -466.6086f, 1151.548f, 324.9625f };
					*uParam3 = 262.671f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 33:
					*uParam2 = { -463.0775f, 1140.172f, 325.0044f };
					*uParam3 = 255.8193f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 34:
					*uParam2 = { -453.6404f, 1141.622f, 325.0044f };
					*uParam3 = 270.7759f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 35:
					*uParam2 = { -468.3044f, 1126.492f, 324.9643f };
					*uParam3 = 263.469f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 36:
					*uParam2 = { -457.6102f, 1126.904f, 324.9546f };
					*uParam3 = 262.384f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 37:
					*uParam2 = { -385.6385f, 1102.252f, 324.7293f };
					*uParam3 = 25.2881f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 38:
					*uParam2 = { -383.8219f, 1093.566f, 324.3149f };
					*uParam3 = 2.7963f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 39:
					*uParam2 = { -390.1671f, 1092.119f, 325.2136f };
					*uParam3 = 20.6423f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 40:
					*uParam2 = { -399.5618f, 1081.56f, 326.7102f };
					*uParam3 = 304.4997f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 41:
					*uParam2 = { -390.9579f, 1075.828f, 323.3234f };
					*uParam3 = 339.4828f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 42:
					*uParam2 = { -386.3601f, 1084.166f, 323.7919f };
					*uParam3 = 354.7784f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 43:
					*uParam2 = { -343.6368f, 1155.187f, 324.7273f };
					*uParam3 = 115.9307f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 44:
					*uParam2 = { -350.9581f, 1163.98f, 324.5156f };
					*uParam3 = 116.0754f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 45:
					*uParam2 = { -359.8979f, 1158.566f, 324.6362f };
					*uParam3 = 120.9973f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 46:
					*uParam2 = { -399.4072f, 1196.483f, 324.7383f };
					*uParam3 = 182.8968f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 47:
					*uParam2 = { -400.8836f, 1210.983f, 325.0406f };
					*uParam3 = 195.0742f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 48:
					*uParam2 = { -381.3676f, 1203.004f, 324.8555f };
					*uParam3 = 162.6808f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 49:
					*uParam2 = { -377.298f, 1218.699f, 324.8556f };
					*uParam3 = 161.6516f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 50:
					*uParam2 = { -416.3955f, 1238.681f, 324.8614f };
					*uParam3 = 196.7896f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 51:
					*uParam2 = { -420.2233f, 1223.627f, 324.8551f };
					*uParam3 = 195.917f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 52:
					*uParam2 = { -449.2621f, 1187.425f, 324.988f };
					*uParam3 = 245.0986f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 53:
					*uParam2 = { -462.3227f, 1187.615f, 324.7824f };
					*uParam3 = 250.3676f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 54:
					*uParam2 = { -472.915f, 1142.98f, 324.9524f };
					*uParam3 = 260.1427f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 55:
					*uParam2 = { -476.2405f, 1120.76f, 324.9513f };
					*uParam3 = 281.8387f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 56:
					*uParam2 = { -480.6375f, 1107.113f, 324.9517f };
					*uParam3 = 330.5185f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 57:
					*uParam2 = { -467.9135f, 1119.13f, 324.975f };
					*uParam3 = 291.4161f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 58:
					*uParam2 = { -472.083f, 1186.256f, 324.4922f };
					*uParam3 = 248.7844f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 59:
					*uParam2 = { -336.9653f, 1155.261f, 324.8132f };
					*uParam3 = 116.8097f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 457.789f, -1306.329f, 28.3817f };
					*uParam3 = 213.4484f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 1:
					*uParam2 = { 462.9742f, -1315.816f, 28.3365f };
					*uParam3 = 211.6687f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 2:
					*uParam2 = { 491.3282f, -1343.662f, 28.3462f };
					*uParam3 = 29.1021f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 3:
					*uParam2 = { 488.5634f, -1353.807f, 28.365f };
					*uParam3 = 350.4963f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 4:
					*uParam2 = { 489.778f, -1362.178f, 28.3936f };
					*uParam3 = 333.8013f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 5:
					*uParam2 = { 487.9373f, -1371.324f, 28.3937f };
					*uParam3 = 350.2063f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 6:
					*uParam2 = { 491.692f, -1377.681f, 28.4808f };
					*uParam3 = 6.2341f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 7:
					*uParam2 = { 508.4521f, -1332.725f, 28.8217f };
					*uParam3 = 81.6066f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 8:
					*uParam2 = { 482.3437f, -1302.914f, 28.3646f };
					*uParam3 = 185.9192f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 9:
					*uParam2 = { 489.6881f, -1306.12f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 10:
					*uParam2 = { 486.8906f, -1314.552f, 28.3349f };
					*uParam3 = 201.3654f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 11:
					*uParam2 = { 510.3459f, -1328.159f, 28.4041f };
					*uParam3 = 38.9104f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 12:
					*uParam2 = { 503.6635f, -1316.644f, 28.254f };
					*uParam3 = 78.5885f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 13:
					*uParam2 = { 498.5652f, -1306.801f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 14:
					*uParam2 = { 494.3388f, -1296.788f, 27.8975f };
					*uParam3 = 181.588f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 15:
					*uParam2 = { 445.3724f, -1312.777f, 33.034f };
					*uParam3 = 231.2194f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 16:
					*uParam2 = { 494.6642f, -1289.089f, 28.3994f };
					*uParam3 = 190.9093f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 17:
					*uParam2 = { 512.1788f, -1296.798f, 29.0244f };
					*uParam3 = 127.6323f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 18:
					*uParam2 = { 516.3178f, -1306.591f, 29.0325f };
					*uParam3 = 105.4519f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 19:
					*uParam2 = { 522.4741f, -1315.716f, 28.6153f };
					*uParam3 = 86.1907f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 20:
					*uParam2 = { 530.4f, -1324.764f, 28.611f };
					*uParam3 = 86.0417f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 21:
					*uParam2 = { 512.5676f, -1266.132f, 29.2571f };
					*uParam3 = 138.7522f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 22:
					*uParam2 = { 503.5058f, -1408.527f, 28.4094f };
					*uParam3 = 38.8401f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 23:
					*uParam2 = { 494.4435f, -1405.518f, 28.4094f };
					*uParam3 = 10.3526f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 24:
					*uParam2 = { 480.3399f, -1404.552f, 28.3783f };
					*uParam3 = 327.4608f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 25:
					*uParam2 = { 486.9532f, -1397.729f, 28.4044f };
					*uParam3 = 9.2252f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 26:
					*uParam2 = { 478.9936f, -1390.911f, 28.4649f };
					*uParam3 = 301.6067f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 27:
					*uParam2 = { 491.3508f, -1387.024f, 28.4781f };
					*uParam3 = 349.894f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 28:
					*uParam2 = { 423.8583f, -1342.402f, 34.9472f };
					*uParam3 = 261.565f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 29:
					*uParam2 = { 436.9487f, -1354.909f, 32.8767f };
					*uParam3 = 281.1848f;
					*uParam4 = func_99(iParam0, 1);
					break;
				case 30:
					*uParam2 = { 418.0431f, -1351.691f, 30.4924f };
					*uParam3 = 242.0479f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 31:
					*uParam2 = { 420.5738f, -1360.155f, 31.3616f };
					*uParam3 = 258.2115f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 32:
					*uParam2 = { 427.6197f, -1367.648f, 32.4927f };
					*uParam3 = 295.2934f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 33:
					*uParam2 = { 464.2118f, -1407.325f, 28.4406f };
					*uParam3 = 264.6266f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 34:
					*uParam2 = { 473.348f, -1411.325f, 28.4462f };
					*uParam3 = 282.62f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 35:
					*uParam2 = { 482.7524f, -1415.458f, 28.2625f };
					*uParam3 = 321.8356f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 36:
					*uParam2 = { 495.2037f, -1418.058f, 28.2691f };
					*uParam3 = 7.1158f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 37:
					*uParam2 = { 503.2256f, -1399.498f, 29.6255f };
					*uParam3 = 163.0629f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 38:
					*uParam2 = { 504.0861f, -1418.874f, 28.399f };
					*uParam3 = 19.1681f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 39:
					*uParam2 = { 515.1004f, -1418.266f, 28.4334f };
					*uParam3 = 70.436f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 40:
					*uParam2 = { 526.7444f, -1417.327f, 28.3217f };
					*uParam3 = 77.2632f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 41:
					*uParam2 = { 537.8759f, -1339.477f, 28.7478f };
					*uParam3 = 32.234f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 42:
					*uParam2 = { 523.1588f, -1342.832f, 28.402f };
					*uParam3 = 44.3382f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 43:
					*uParam2 = { 516.2181f, -1333.808f, 28.4019f };
					*uParam3 = 42.2223f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 44:
					*uParam2 = { 545.4319f, -1321.294f, 28.8519f };
					*uParam3 = 82.4327f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 45:
					*uParam2 = { 543.2325f, -1310.26f, 29.2949f };
					*uParam3 = 90.2737f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 46:
					*uParam2 = { 519.066f, -1293.935f, 27.1144f };
					*uParam3 = 165.5317f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 47:
					*uParam2 = { 526.7755f, -1289.459f, 29.7686f };
					*uParam3 = 143.1124f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 48:
					*uParam2 = { 523.58f, -1272.328f, 30.0824f };
					*uParam3 = 138.49f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 49:
					*uParam2 = { 524.081f, -1260.682f, 29.5842f };
					*uParam3 = 132.1786f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 50:
					*uParam2 = { 517.0681f, -1239.373f, 29.9303f };
					*uParam3 = 154.6133f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 51:
					*uParam2 = { 516.2507f, -1253.02f, 29.6427f };
					*uParam3 = 162.9373f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 52:
					*uParam2 = { 513.244f, -1278.351f, 29.7743f };
					*uParam3 = 150.8734f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 53:
					*uParam2 = { 493.7339f, -1268.213f, 28.392f };
					*uParam3 = 179.546f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 54:
					*uParam2 = { 494.1401f, -1281.491f, 28.394f };
					*uParam3 = 175.0507f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 55:
					*uParam2 = { 555.4178f, -1356.743f, 28.7709f };
					*uParam3 = 50.8085f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 56:
					*uParam2 = { 475.9386f, -1304.794f, 32.0473f };
					*uParam3 = 112.0399f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 57:
					*uParam2 = { 465.516f, -1301.604f, 32.0473f };
					*uParam3 = 189.1235f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 58:
					*uParam2 = { 440.8456f, -1321.148f, 30.3086f };
					*uParam3 = 235.1875f;
					*uParam4 = func_99(iParam0, 2);
					break;
				case 59:
					*uParam2 = { 421.228f, -1316.188f, 30.3078f };
					*uParam3 = 236.0292f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1432.451f, 236.9887f, 59.1671f };
					*uParam3 = 127.6804f;
					*uParam4 = func_99(iParam0, 0);
					break;
				case 1:
					*uParam2 = { -1434.54f, 243.4075f, 59.3382f };
					*uParam3 = 176.5221f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 19899
					*uParam2 = { -1425.965f, 233.6748f, 58.9327f };
					*uParam3 = 67.1914f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 19939
					*uParam2 = { -1431.833f, 176.7196f, 55.6359f };
					*uParam3 = 115.4533f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 19979
					*uParam2 = { -1436.571f, 168.3388f, 54.8029f };
					*uParam3 = 42.4646f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 20019
					*uParam2 = { -1441.14f, 162.3594f, 54.1846f };
					*uParam3 = 5.2323f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 20059
					*uParam2 = { -1526.297f, 160.2353f, 53.2037f };
					*uParam3 = 277.6807f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 20099
					*uParam2 = { -1518.497f, 145.7663f, 54.7527f };
					*uParam3 = 310.257f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 20139
					*uParam2 = { -1506.654f, 132.8194f, 54.7529f };
					*uParam3 = 324.8665f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 20179
					*uParam2 = { -1495.287f, 118.9496f, 54.7569f };
					*uParam3 = 328.5237f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 20219
					*uParam2 = { -1482.5f, 114.8686f, 54.589f };
					*uParam3 = 341.3174f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 20259
					*uParam2 = { -1465.16f, 114.8327f, 52.2589f };
					*uParam3 = 357.6763f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 20299
					*uParam2 = { -1451.507f, 64.7578f, 51.4041f };
					*uParam3 = 91.7588f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 20339
					*uParam2 = { -1461.18f, 63.8165f, 51.8802f };
					*uParam3 = 26.7651f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 20379
					*uParam2 = { -1502.689f, 44.4251f, 53.8926f };
					*uParam3 = 308.9227f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 20419
					*uParam2 = { -1470.511f, 65.7823f, 52.315f };
					*uParam3 = 20.0152f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 20459
					*uParam2 = { -1485.597f, 73.3039f, 53.7206f };
					*uParam3 = 353.3321f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 20499
					*uParam2 = { -1598.528f, 149.7495f, 58.6949f };
					*uParam3 = 277.3246f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 20539
					*uParam2 = { -1583.425f, 155.9397f, 57.9714f };
					*uParam3 = 236.3493f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 20579
					*uParam2 = { -1561.721f, 153.229f, 56.9434f };
					*uParam3 = 282.9456f;
					*uParam4 = func_99(iParam0, 0);
					Jump @22222; //curOff = 20619
					*uParam2 = { -1597.874f, 138.8909f, 58.9224f };
					*uParam3 = 291.1977f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 20659
					*uParam2 = { -1624.61f, 118.2495f, 60.9528f };
					*uParam3 = 286.5444f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 20699
					*uParam2 = { -1635.546f, 98.7833f, 61.5816f };
					*uParam3 = 307.8016f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 20739
					*uParam2 = { -1615.593f, 74.5104f, 60.5005f };
					*uParam3 = 358.8846f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 20779
					*uParam2 = { -1623.266f, 72.784f, 60.7418f };
					*uParam3 = 303.1707f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 20819
					*uParam2 = { -1611.091f, 66.0932f, 60.1192f };
					*uParam3 = 8.1702f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 20859
					*uParam2 = { -1485.756f, 49.183f, 53.0408f };
					*uParam3 = 329.1895f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 20899
					*uParam2 = { -1464.841f, 52.066f, 52.0575f };
					*uParam3 = 26.7727f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 20939
					*uParam2 = { -1450.809f, 49.7653f, 51.6797f };
					*uParam3 = 42.6481f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 20979
					*uParam2 = { -1462.326f, 88.4265f, 53.8826f };
					*uParam3 = 353.3917f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 21019
					*uParam2 = { -1491.87f, 95.0945f, 54.1122f };
					*uParam3 = 314.473f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 21059
					*uParam2 = { -1476.808f, 108.3742f, 53.8967f };
					*uParam3 = 348.5514f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 21099
					*uParam2 = { -1443.964f, 153.6641f, 53.4228f };
					*uParam3 = 5.4015f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 21139
					*uParam2 = { -1422.558f, 161.544f, 55.0401f };
					*uParam3 = 41.9873f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 21179
					*uParam2 = { -1425.595f, 187.9517f, 56.689f };
					*uParam3 = 129.5252f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 21219
					*uParam2 = { -1411.395f, 239.4108f, 58.8958f };
					*uParam3 = 94.2972f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 21259
					*uParam2 = { -1415.572f, 249.2832f, 59.1409f };
					*uParam3 = 122.1957f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 21299
					*uParam2 = { -1459.738f, 238.6189f, 58.7949f };
					*uParam3 = 180.7222f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 21339
					*uParam2 = { -1573.812f, 161.2271f, 57.4846f };
					*uParam3 = 134.8161f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 21379
					*uParam2 = { -1589.462f, 172.0972f, 57.9565f };
					*uParam3 = 211.4448f;
					*uParam4 = func_99(iParam0, 1);
					Jump @22222; //curOff = 21419
					*uParam2 = { -1599.631f, 177.347f, 58.4655f };
					*uParam3 = 218.6622f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21459
					*uParam2 = { -1605.247f, 166.7319f, 58.6104f };
					*uParam3 = 240.273f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21499
					*uParam2 = { -1610.489f, 133.2583f, 59.7152f };
					*uParam3 = 286.0001f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21539
					*uParam2 = { -1609.133f, 118.5496f, 59.985f };
					*uParam3 = 309.8568f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21579
					*uParam2 = { -1600.147f, 104.7807f, 60.079f };
					*uParam3 = 345.0445f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21619
					*uParam2 = { -1595.336f, 88.6422f, 59.9101f };
					*uParam3 = 325.4662f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21659
					*uParam2 = { -1571.039f, 95.7035f, 57.4104f };
					*uParam3 = 320.9921f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21699
					*uParam2 = { -1528.822f, 60.1519f, 56.3681f };
					*uParam3 = 299.9443f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21739
					*uParam2 = { -1581.063f, 69.4907f, 59.9072f };
					*uParam3 = 302.81f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21779
					*uParam2 = { -1502.428f, 75.9977f, 54.5965f };
					*uParam3 = 333.9787f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21819
					*uParam2 = { -1533.281f, 81.1755f, 55.8724f };
					*uParam3 = 288.1328f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21859
					*uParam2 = { -1533.984f, 102.1409f, 55.8727f };
					*uParam3 = 232.9465f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21899
					*uParam2 = { -1598.389f, 49.5038f, 59.7089f };
					*uParam3 = 24.7707f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21939
					*uParam2 = { -1613.303f, 45.0376f, 60.9909f };
					*uParam3 = 352.9884f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 21979
					*uParam2 = { -1632.785f, 50.5315f, 61.543f };
					*uParam3 = 325.0906f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 22019
					*uParam2 = { -1636.258f, 69.9035f, 61.7993f };
					*uParam3 = 291.5305f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 22059
					*uParam2 = { -1429.691f, 143.2913f, 53.2468f };
					*uParam3 = 17.521f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 22099
					*uParam2 = { -1408.523f, 152.6476f, 54.6591f };
					*uParam3 = 54.2465f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 22139
					*uParam2 = { -1403.501f, 245.4762f, 59.2192f };
					*uParam3 = 112.9726f;
					*uParam4 = func_99(iParam0, 2);
					Jump @22222; //curOff = 22179
					*uParam2 = { -1417.563f, 260.8751f, 59.5187f };
					*uParam3 = 146.682f;
					*uParam4 = func_99(iParam0, 2);
				}

float func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11409;
				case 1:
					return Global_262145.f_11410;
				case 2:
					return Global_262145.f_11411;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11412;
				case 1:
					return Global_262145.f_11413;
				case 2:
					return Global_262145.f_11414;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11415;
				case 1:
					return Global_262145.f_11416;
				case 2:
					return Global_262145.f_11417;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11418;
				case 1:
					return Global_262145.f_11419;
				case 2:
					return Global_262145.f_11420;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11421;
				case 1:
					return Global_262145.f_11422;
				case 2:
					return Global_262145.f_11423;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11424;
				case 1:
					return Global_262145.f_11425;
				case 2:
					return Global_262145.f_11426;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11427;
				case 1:
					return Global_262145.f_11428;
				case 2:
					return Global_262145.f_11429;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11430;
				case 1:
					return Global_262145.f_11431;
				case 2:
					return Global_262145.f_11432;
				default:
					break;
			}
			break;
	}
	return 1f;
}

void func_100(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_94())
		{
			func_92();
		}
		Global_2405072.f_706.f_518 = UNK_0x0D0A574C76D769AC();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_90();
		func_103(8, 0, 0, 0, 0);
		Global_2405072.f_706.f_507 = iParam11;
		Global_2405072.f_706.f_512 = iParam3;
		Global_2405072.f_706.f_513 = iParam4;
		Global_2405072.f_706.f_510 = iParam5;
		Global_2405072.f_706.f_511 = iParam6;
		Global_2405072.f_706.f_514 = iParam7;
		Global_2405072.f_706.f_515 = iParam8;
		Global_2405072.f_706.f_516 = iParam9;
		Global_2405072.f_706.f_517 = iParam14;
		Global_2405072.f_706.f_508 = iParam12;
		Global_2405072.f_706.f_509 = iParam13;
		Global_2405072.f_1745 = 1;
	}
	else
	{
		func_101();
	}
}

void func_101()
{
	if (func_94() && !func_93())
	{
		func_92();
	}
	if (func_93())
	{
		func_102();
	}
	else
	{
		func_90();
		func_103(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_102()
{
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (UNK_0x0D0A574C76D769AC() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

void func_103(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_27())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[Global_2439138.f_1894.f_703.f_16 /*421*/].f_404, false) && func_104())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412642 = 0;
	}
	Global_2405072.f_487 = iParam0;
	Global_2405072.f_487.f_1 = UNK_0x0D0A574C76D769AC();
	Global_2405072.f_487.f_2 = iParam1;
	Global_2405072.f_487.f_3 = iParam2;
	Global_2405072.f_487.f_4 = iParam3;
	Global_2405072.f_487.f_5 = iParam4;
}

bool func_104()
{
	if ((((((func_110(UNK_0xD803B885F5E47A62()) == 229 || func_110(UNK_0xD803B885F5E47A62()) == 191) || func_109()) || func_111()) || func_108(UNK_0xD803B885F5E47A62())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_105(UNK_0xD803B885F5E47A62())))
	{
		return false;
	}
	return true;
}

int func_105(bool bParam0)
{
	if (func_107(bParam0))
	{
		return 1;
	}
	if (func_106(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_106(bool bParam0)
{
	return func_29(bParam0, 20);
}

bool func_107(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar0 /*615*/].f_1, 7);
	}
	return false;
}

bool func_108(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (!UNK_0x8CD06866876216F2())
	{
		return false;
	}
	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		return Global_2513889;
	}
	else
	{
		bVar0 = UNK_0x9539D44F3E4492F6(bParam0);
		if (UNK_0xC844350D5D58C99A(bVar0))
		{
			iVar1 = UNK_0x134B62B726CEC8E6(bVar0);
			if (iVar1 == joaat("MP_M_FREEMODE_01") || iVar1 == joaat("MP_F_FREEMODE_01"))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_109()
{
	if (Global_4456448 == 6)
	{
		return true;
	}
	return false;
}

int func_110(bool bParam0)
{
	if (func_31(bParam0, 0))
	{
		return Global_1628237[bParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_111()
{
	return Global_1574405;
}

bool func_112(int iParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 14))
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 11))
	{
		return true;
	}
	return false;
}

bool func_113(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[bParam0 /*876*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_274.f_26, false))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!bParam2)
	{
		if (func_127(bParam0))
		{
			return true;
		}
	}
	if (!bParam3)
	{
		if (func_25(bParam0))
		{
			return true;
		}
	}
	if (!bParam4)
	{
		if (func_126(bParam0))
		{
			return true;
		}
	}
	if (!bParam5)
	{
		if (func_125(bParam0))
		{
			return true;
		}
	}
	if (!bParam6)
	{
		if (func_124(bParam0))
		{
			return true;
		}
	}
	if (!bParam7)
	{
		if (func_123(bParam0))
		{
			return true;
		}
	}
	if (!bParam8)
	{
		if (func_122(bParam0))
		{
			return true;
		}
	}
	if (!bParam9)
	{
		if (func_121(bParam0))
		{
			return true;
		}
	}
	if (!bParam10)
	{
		if (func_120(bParam0))
		{
			return true;
		}
	}
	if (!bParam11)
	{
		if (func_119(bParam0, 0))
		{
			return true;
		}
	}
	if (!bParam12)
	{
		if (func_118(bParam0))
		{
			return true;
		}
	}
	if (!bParam13)
	{
		if (func_117(bParam0))
		{
			return true;
		}
	}
	if (!bParam14)
	{
		if (func_116(bParam0))
		{
			return true;
		}
	}
	if (!bParam15)
	{
		if (func_115(bParam0))
		{
			return true;
		}
	}
	if (!bParam16)
	{
		if (func_114(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_114(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return false;
}

bool func_115(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 16;
			}
		}
	}
	return false;
}

bool func_116(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 15;
			}
		}
	}
	return false;
}

bool func_117(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return false;
}

bool func_118(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 13;
			}
		}
	}
	return false;
}

bool func_119(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (bParam1)
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("TERBYTE"))
			{
				return true;
			}
		}
	}
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_27())
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 12;
			}
		}
	}
	return false;
}

bool func_120(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_121(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return false;
}

bool func_122(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[bParam0 /*421*/].f_310.f_8 != func_27())
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 8;
			}
		}
	}
	return false;
}

bool func_123(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return false;
}

bool func_124(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 7;
			}
		}
	}
	return false;
}

bool func_125(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return false;
}

bool func_126(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 1;
			}
		}
	}
	return false;
}

bool func_127(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_756(bParam0, 1, 1))
		{
			if (Global_2425662[bParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_26(Global_2425662[bParam0 /*421*/].f_310.f_5) == 0;
			}
		}
	}
	return false;
}

void func_128(bool bParam0)
{
	if (func_15(bParam0) != 0)
	{
		func_360(bParam0);
		func_129(bParam0);
	}
}

void func_129(bool bParam0)
{
	int iVar0;
	bool bVar1[3];
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8[3];

	if (bLocal_3181 == -1)
	{
		return;
	}
	if (func_303(0, 0))
	{
		return;
	}
	iVar6 = (Global_262145.f_11188 + 1000 - func_9(&(Local_80.f_1.f_1), 0, 0));
	if (iVar6 < 0)
	{
		iVar6 = 0;
	}
	if (func_15(bParam0) == 0)
	{
		return;
	}
	if (iVar6 > 30000)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 6;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Local_378[bLocal_3181 /*5*/].f_4, 12))
	{
		if (!func_199(bLocal_3181))
		{
			func_152(iVar6, iVar7, func_153());
			return;
		}
	}
	func_151(iVar6);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1225[bParam0 /*68*/].f_53[iVar0 /*4*/] = -1;
		Local_1225[bParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = -1;
		Local_1225[bParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = func_27();
		Local_1225[bParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1225[bParam0 /*68*/].f_53[iVar0 /*4*/] = Local_80.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/];
		Local_1225[bParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = Local_80.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
		Local_1225[bParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = Local_80.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/].f_2;
		Local_1225[bParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = SYSTEM::TO_FLOAT(func_77(Local_80.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar1[iVar0] = func_77(Local_1225[bParam0 /*68*/].f_53[iVar0 /*4*/].f_3);
		bVar8[iVar0] = 0;
		if (func_150(1))
		{
			if (Local_1225[bParam0 /*68*/].f_53[iVar0 /*4*/].f_1 != -1)
			{
				if (UNK_0x40B8C182D63932FC(Local_1225[bParam0 /*68*/].f_53[iVar0 /*4*/].f_1))
				{
					if (func_73(Local_1225[bParam0 /*68*/].f_53[iVar0 /*4*/].f_1, 1))
					{
						bVar8[iVar0] = func_171(Local_1225[bParam0 /*68*/].f_53[iVar0 /*4*/].f_1, -2, 0, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
	bVar5 = func_77(func_148(bParam0, bLocal_3181));
	func_131(Local_1225[bParam0 /*68*/].f_53[0 /*4*/].f_1, Local_1225[bParam0 /*68*/].f_53[1 /*4*/].f_1, Local_1225[bParam0 /*68*/].f_53[2 /*4*/].f_1, bVar1[0], bVar1[1], bVar1[2], bVar5, iVar6, &uLocal_3184, iVar7, func_153(), 1, bVar8[0], bVar8[1], bVar8[2]);
	if (Local_1225[bParam0 /*68*/].f_53[0 /*4*/] == UNK_0x57270EE11514DC67())
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 23))
		{
			if (func_130(1))
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			UNK_0x5D96D8530B3D0904(&bLocal_539, 23);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 23))
	{
		if (func_130(1))
		{
			UNK_0x4D7F4CC43D4D0DE3(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			UNK_0x4D7F4CC43D4D0DE3(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		UNK_0x0674E58A79778E99(&bLocal_539, 23);
	}
}

bool func_130(bool bParam0)
{
	return func_69(UNK_0xD803B885F5E47A62(), bParam0);
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	char* sVar0;
	int iVar1;
	bool bVar2;

	if (func_145(0) == 0)
	{
		return;
	}
	func_144();
	iVar1 = 0;
	if (((Global_2461747[0] != iParam0 || Global_2461747[1] != iParam1) || Global_2461747[2] != iParam2) || *uParam8)
	{
		iVar1 = 1;
	}
	Global_2461747[0] = iParam0;
	Global_2461747[1] = iParam1;
	Global_2461747[2] = iParam2;
	Global_2461747[3] = 0;
	Global_2461747[4] = 0;
	if (Global_2461747[0] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = UNK_0x6E524813889AECF8(Global_2461747[0]);
			Global_2461753[0 /*16*/] = { func_143(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_140(iParam3, &(Global_2461753[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam12, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2461747[1] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = UNK_0x6E524813889AECF8(Global_2461747[1]);
			Global_2461753[1 /*16*/] = { func_143(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_140(iParam4, &(Global_2461753[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam13, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2461747[2] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = UNK_0x6E524813889AECF8(Global_2461747[2]);
			Global_2461753[2 /*16*/] = { func_143(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_140(iParam5, &(Global_2461753[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam14, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	switch (iParam11)
	{
		case 0:
			if (UNK_0xD803B885F5E47A62() != func_27())
			{
				if (func_136(UNK_0xD803B885F5E47A62()) == 0)
				{
					func_140(bParam6, UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()), -1, 1, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		case 1:
			if (func_136(UNK_0xD803B885F5E47A62()) == 0)
			{
				func_140(bParam6, "HUD_USCORE", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		case 2:
			if (func_136(UNK_0xD803B885F5E47A62()) == 0)
			{
				func_140(bParam6, "HUD_UBEST", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		case 3:
			break;
	}
	bVar2 = "HUD_COUNTDOWN";
	if (!func_135(bParam10))
	{
		bVar2 = bParam10;
	}
	func_132(iParam7, bVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
	*uParam8 = 0;
}

void func_132(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_134(7, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_133(7, bVar0);
		Global_1378678.f_4562[bVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_4562.f_172[bVar0] = iParam2;
		Global_1378678.f_4562.f_216[bVar0] = iParam3;
		Global_1378678.f_4562.f_183[bVar0] = iParam4;
		Global_1378678.f_4562.f_194[bVar0] = iParam5;
		Global_1378678.f_4562.f_249[bVar0] = iParam6;
		Global_1378678.f_4562.f_260[bVar0] = iParam7;
		Global_1378678.f_4562.f_205[bVar0] = iParam8;
		Global_1378678.f_4562.f_314[bVar0] = iParam9;
		Global_1378678.f_4562.f_325[bVar0] = iParam10;
		Global_1378678.f_4562.f_357[bVar0] = iParam11;
		Global_1378678.f_4562.f_238[bVar0] = iParam12;
		Global_1378678.f_4562.f_271[bVar0] = iParam13;
		Global_1378678.f_4562.f_368[bVar0] = iParam14;
		Global_1378678.f_4562.f_379[bVar0] = iParam15;
		Global_1378678.f_4562.f_390[bVar0] = iParam16;
		Global_1378678.f_4562.f_227[bVar0] = iParam17;
	}
}

void func_133(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), bParam1);
}

bool func_134(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], bParam1);
}

bool func_135(bool bParam0)
{
	if (UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		return true;
	}
	else if (UNK_0x7F8A39872A07D2CE(bParam0, "") || UNK_0x7F8A39872A07D2CE(bParam0, "0"))
	{
		return true;
	}
	return false;
}

bool func_136(bool bParam0)
{
	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		if (((func_139() && !func_138()) || func_137(UNK_0xD803B885F5E47A62(), 21)) || func_137(UNK_0xD803B885F5E47A62(), 25))
		{
			return true;
		}
		if (func_18(&(Global_1574650.f_13)))
		{
			if (!func_5(&(Global_1574650.f_13), Global_262145.f_14, 0))
			{
				return true;
			}
			func_3(&(Global_1574650.f_13));
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 10))
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 9);
}

bool func_137(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_208, bParam1);
}

bool func_138()
{
	return Global_1312418.f_1;
}

bool func_139()
{
	return Global_1312418;
}

void func_140(bool bParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_134(6, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_133(6, bVar0);
		Global_1378678.f_3944[bVar0] = bParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_3944.f_183[bVar0] = iParam3;
		Global_1378678.f_3944.f_172[bVar0] = iParam2;
		Global_1378678.f_3944.f_260[bVar0] = iParam4;
		Global_1378678.f_3944.f_271[bVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[bVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_3944.f_443[bVar0] = iParam7;
		Global_1378678.f_3944.f_454[bVar0] = iParam8;
		Global_1378678.f_3944.f_497[bVar0] = iParam9;
		Global_1378678.f_3944.f_508[bVar0] = iParam10;
		Global_1378678.f_3944.f_205[bVar0] = iParam11;
		Global_1378678.f_3944.f_216[bVar0] = iParam12;
		Global_1378678.f_3944.f_227[bVar0] = iParam13;
		Global_1378678.f_3944.f_238[bVar0] = iParam14;
		Global_1378678.f_3944.f_249[bVar0] = iParam15;
		Global_1378678.f_3944.f_519[bVar0] = iParam16;
		Global_1378678.f_3944.f_530[bVar0] = iParam17;
		Global_1378678.f_3944.f_541[bVar0] = iParam18;
		Global_1378678.f_3944.f_552[bVar0] = iParam19;
		Global_1378678.f_3944.f_563[bVar0] = iParam20;
		Global_1378678.f_3944.f_574[bVar0] = iParam21;
		Global_1378678.f_3944.f_585[bVar0] = iParam22;
		Global_1378678.f_3944.f_596[bVar0] = iParam23;
		Global_1378678.f_3944.f_607[bVar0] = iParam24;
		Global_1378678.f_3944.f_194[bVar0] = iParam25;
		if (iParam15 == 5 && func_142())
		{
			Global_1378678.f_1130 = 1;
		}
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			bVar2 = false;
			UNK_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				bVar2 = true;
			}
			if (bParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (bParam0 > 9999999 || bVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (bParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_141())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

bool func_141()
{
	int iVar0;
	var uVar1;

	if (UNK_0x0EFF6B4415DAF4A1())
	{
		UNK_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return true;
		}
	}
	return false;
}

bool func_142()
{
	if (((UNK_0xB3260A60545D3F11() == 8 || UNK_0xB3260A60545D3F11() == 9) || UNK_0xB3260A60545D3F11() == 10) || UNK_0xB3260A60545D3F11() == 12)
	{
		return true;
	}
	return false;
}

struct<16> func_143(int iParam0, char* sParam1)
{
	struct<16> Var0;

	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
		case 1:
			StringCopy(&Var0, UNK_0x19C9F30A7697B43C("HUD_POSFIRST"), 64);
			break;
		case 2:
			StringCopy(&Var0, UNK_0x19C9F30A7697B43C("HUD_POSSECOND"), 64);
			break;
		case 3:
			StringCopy(&Var0, UNK_0x19C9F30A7697B43C("HUD_POSTHIRD"), 64);
			break;
		case 4:
			StringCopy(&Var0, UNK_0x19C9F30A7697B43C("HUD_POSFOURTH"), 64);
			break;
		case 5:
			StringCopy(&Var0, UNK_0x19C9F30A7697B43C("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_144()
{
	UNK_0x3584F71E5CA29322(8);
	UNK_0x3584F71E5CA29322(9);
	UNK_0x3584F71E5CA29322(6);
	UNK_0x3584F71E5CA29322(7);
	Global_2462225 = 1;
}

int func_145(bool bParam0)
{
	if (func_147())
	{
		return 0;
	}
	if (func_146())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_756(UNK_0xD803B885F5E47A62(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_146()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

bool func_147()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 12);
}

float func_148(bool bParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_149(bParam0, bParam1);
	fVar1 = func_6(bParam0, bParam1);
	return (fVar0 + fVar1);
}

float func_149(bool bParam0, bool bParam1)
{
	return Local_80.f_6[bParam0 /*204*/].f_36[bParam1];
}

bool func_150(bool bParam0)
{
	return func_73(UNK_0xD803B885F5E47A62(), bParam0);
}

void func_151(int iParam0)
{
	if (IntToFloat(iParam0) < UNK_0x6117725E0134737F())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, false))
		{
			if (!UNK_0xEA6BC48857E0AC4C(&(Global_2537071.f_4963)))
			{
				UNK_0xA6C13961116F9033(&(Global_2537071.f_4963));
			}
			UNK_0xBEF52C1D400C0A44(1);
			UNK_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
			UNK_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
			UNK_0x7352ACF3368DF65F("DisableFlightMusic", 0);
			UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
			UNK_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
			if (Global_2537071.f_4971 > -1)
			{
				UNK_0x43A06902454A1172(Global_2537071.f_4971);
				Global_2537071.f_4971 = -1;
			}
			Global_2537071.f_4961 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, false))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 4))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 2))
				{
					if (UNK_0x3133F8A3F91571F1())
					{
						if ((!UNK_0x7F8A39872A07D2CE(UNK_0xE4B65163E4129619(UNK_0xFC21F7E0F4D92523()), "OFF") && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0)) && !UNK_0xEA6BC48857E0AC4C(&(Global_2537071.f_4963)))
						{
							StringCopy(&(Global_2537071.f_4963), "", 32);
							UNK_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
							UNK_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
							UNK_0x7352ACF3368DF65F("DisableFlightMusic", 0);
							UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
							UNK_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
							UNK_0xBEF52C1D400C0A44(1);
							UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 2);
						}
					}
				}
				else if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 5))
				{
					UNK_0xA6C13961116F9033("OFF");
				}
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, true))
			{
				if (iParam0 < 10000)
				{
					UNK_0xC92DB9682A650680("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					UNK_0xC92DB9682A650680("FM_COUNTDOWN_20S");
				}
				else
				{
					UNK_0xC92DB9682A650680("FM_COUNTDOWN_30S");
				}
				UNK_0x8BC9595FD2792B5D("GTAO_FM_Events_30_Sec_Countdown_Scene");
				UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4961), true);
			}
			else if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 4))
			{
				if (iParam0 < 27500)
				{
					if (UNK_0x0931E02856C8B6A4() != 0)
					{
						if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && !UNK_0x3F02B7BDF1B316D6())
						{
							StringCopy(&(Global_2537071.f_4963), UNK_0x04DF2A8CF5EBE3B0(), 32);
							UNK_0xA6C13961116F9033("OFF");
						}
						UNK_0xBEF52C1D400C0A44(1);
						UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 3))
				{
					Global_2537071.f_4971 = UNK_0xD68EA767274B7444();
					UNK_0x4D7F4CC43D4D0DE3(Global_2537071.f_4971, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, false))
			{
				Global_2537071.f_4961 = 0;
				Global_2537071.f_4971 = -1;
				UNK_0x13896FDECC859926("FM_COUNTDOWN_30S_KILL");
				UNK_0xBEF52C1D400C0A44(0);
				UNK_0xC92DB9682A650680("FM_PRE_COUNTDOWN_30S");
				UNK_0x7352ACF3368DF65F("DisableFlightMusic", 1);
				UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 1);
				UNK_0x7352ACF3368DF65F("AllowScoreAndRadio", 1);
				UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4961), false);
				if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) || UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, 2))
				{
					UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 2);
					UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 5);
				}
				else
				{
					UNK_0x0674E58A79778E99(&(Global_2537071.f_4961), 5);
					UNK_0x0674E58A79778E99(&(Global_2537071.f_4961), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, false))
		{
			Global_2537071.f_4961 = 0;
			Global_2537071.f_4971 = -1;
			UNK_0x13896FDECC859926("FM_COUNTDOWN_30S_KILL");
			UNK_0xBEF52C1D400C0A44(0);
			UNK_0xC92DB9682A650680("FM_PRE_COUNTDOWN_30S");
			UNK_0x7352ACF3368DF65F("DisableFlightMusic", 1);
			UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 1);
			UNK_0x7352ACF3368DF65F("AllowScoreAndRadio", 1);
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4961), false);
			if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 2);
				UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4961), 5);
			}
			else
			{
				UNK_0x0674E58A79778E99(&(Global_2537071.f_4961), 2);
				UNK_0x0674E58A79778E99(&(Global_2537071.f_4961), 5);
			}
		}
	}
}

void func_152(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (func_145(0) == 0)
	{
		return;
	}
	bVar0 = "HUD_COUNTDOWN";
	if (!func_135(bParam2))
	{
		bVar0 = bParam2;
	}
	func_132(iParam0, bVar0, 0, 0, -1, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0, 0, 0, 0, -1);
}

bool func_153()
{
	return "HUD_COUNTDOWN";
	switch (func_260(UNK_0xD803B885F5E47A62()))
	{
		case 131:
			return "AET_HOT_TARG";
		case 132:
			return "AET_CHK_COLL";
		case 133:
			switch (func_154())
			{
				case 0:
					return "AET_CHALL_LJ";
				case 1:
					return "AET_CHALL_LS";
				case 2:
					return "AET_CHALL_HS";
				case 3:
					return "AET_CHALL_LST";
				case 4:
					return "AET_CHALL_LW";
				case 5:
					return "AET_CHALL_NC";
				case 6:
					return "AET_CHALL_LP";
				case 7:
					return "AET_CHALL_VS";
				case 8:
					return "AET_CHALL_NM";
				case 9:
					return "AET_CHALL_RD";
				case 10:
					return "AET_CHALL_LF";
				case 11:
					return "AET_CHALL_LFL";
				case 12:
					return "AET_CHALL_LFI";
				case 13:
					return "AET_CHALL_LB";
				case 14:
					return "AET_CHALL_MB";
				case 15:
					return "AET_CHALL_HSH";
				case 16:
					return "AET_CHALL_DB";
				case 17:
					return "AET_CHALL_ML";
				case 18:
					return "AET_CHALL_LSN";
				default:
					break;
			}
			break;
		case 136:
			return "AET_PENNED";
		case 138:
			return "AET_PARCEL";
		case 139:
			return "AET_PROPERTY";
		case 140:
			return "AET_DDROP";
		case 141:
			return "AET_KCASTLE";
		case 144:
			return "AET_BLAST";
		case 129:
			return "AET_UWARF";
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_154()
{
	if (func_260(UNK_0xD803B885F5E47A62()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

bool func_155(bool bParam0)
{
	return Local_80.f_6[bParam0 /*204*/].f_72;
}

int func_156(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (UNK_0x7724E025FD444F45(sParam0) > 23)
	{
		return 0;
	}
	if (UNK_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (UNK_0x7724E025FD444F45(sParam1) > 63)
	{
		return 0;
	}
	if (func_166(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312585.f_54;
	func_160();
	Global_1312585 = 9;
	StringCopy(&(Global_1312585.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = UNK_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	Global_1312585.f_54 = uVar0;
	func_159();
	func_158(bParam2);
	func_157();
	return 1;
}

void func_157()
{
	UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), true);
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1312585.f_59), false);
		return;
	}
	UNK_0x0674E58A79778E99(&(Global_1312585.f_59), false);
}

void func_159()
{
	Global_1312585.f_10 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), 86400000);
	Global_1312585.f_11 = UNK_0x2B6E0A53779D29EA();
}

void func_160()
{
	func_162();
	func_161(0);
}

void func_161(bool bParam0)
{
	bool bVar0;

	bVar0 = UNK_0x8CD06866876216F2();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = UNK_0x2B6E0A53779D29EA();
		Global_1312585.f_11 = UNK_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_162()
{
	if (!func_165())
	{
	}
	if (func_164())
	{
		UNK_0x400C0D66EFD08603(&(Global_1312585.f_12));
		func_163();
		UNK_0x35F2C6537D10DAEB();
	}
}

void func_163()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		case 0:
			return;
		case 1:
			UNK_0x6D99DF8263D35CE5(Global_1312585.f_52);
			return;
		case 2:
			UNK_0x6D99DF8263D35CE5(Global_1312585.f_52);
			UNK_0x6D99DF8263D35CE5(Global_1312585.f_53);
			return;
		case 3:
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 4:
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 5:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		case 6:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		case 7:
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 8:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 9:
			UNK_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		case 10:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		case 12:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 13:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_57);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 11:
			UNK_0x0D45A7AB73600CFA(&(Global_1312585.f_16));
			return;
		case 14:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 15:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_57);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_32));
			return;
		case 17:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_48));
			return;
		case 16:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			return;
		case 19:
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_16));
			return;
		case 18:
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_16));
			UNK_0x3A820E495A7BA3E5(Global_1312585.f_56);
			UNK_0x6B012227B3921E18(&(Global_1312585.f_48));
			UNK_0xD06AC7C87A34A6AD(&(Global_1312585.f_32));
			return;
		default:
			break;
	}
}

bool func_164()
{
	if (Global_1312585 == 20)
	{
		return false;
	}
	return true;
}

bool func_165()
{
	if (!func_164())
	{
		return false;
	}
	UNK_0x18B60B994182620C(&(Global_1312585.f_12));
	func_163();
	return UNK_0xB165082A56EE6E7F();
}

bool func_166(bool bParam0, bool bParam1)
{
	if (!func_164())
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return false;
	}
	if (!UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_12)))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam1) == UNK_0x12AB0310C2281427(&(Global_1312585.f_16));
}

void func_167(char* sParam0, bool bParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (func_168(sParam0, UNK_0x6E524813889AECF8(bParam1), sParam2, bParam5, iParam3))
	{
		Global_1312585 = 15;
		Global_1312585.f_56 = iParam3;
		Global_1312585.f_57 = bParam4;
		Global_1312585.f_54 = bParam1;
	}
}

bool func_168(char* sParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	if (UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		return false;
	}
	if (UNK_0x7724E025FD444F45(sParam0) > 23)
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(sParam1))
	{
		return false;
	}
	if (UNK_0x7724E025FD444F45(sParam1) > 63)
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(sParam2))
	{
		return false;
	}
	if (UNK_0x7724E025FD444F45(sParam2) > 63)
	{
		return false;
	}
	if (func_169(sParam0, sParam1, sParam2) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return false;
	}
	func_160();
	Global_1312585 = 10;
	StringCopy(&(Global_1312585.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = UNK_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	StringCopy(&(Global_1312585.f_32), sParam2, 64);
	Global_1312585.f_58 = iParam4;
	Global_1312585.f_56 = iParam4;
	func_159();
	func_158(bParam3);
	func_157();
	return true;
}

bool func_169(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_164())
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam2))
	{
		return false;
	}
	if (!UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_12)))
	{
		return false;
	}
	if (!UNK_0x12AB0310C2281427(bParam1) == UNK_0x12AB0310C2281427(&(Global_1312585.f_16)))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam2) == UNK_0x12AB0310C2281427(&(Global_1312585.f_32));
}

void func_170(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	if (!bParam2 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam2);
	}
	UNK_0xD06AC7C87A34A6AD(bParam1);
	if (!bParam4 == 0)
	{
		UNK_0x3A820E495A7BA3E5(bParam4);
	}
	UNK_0x6B012227B3921E18(bParam3);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, false, iParam5);
}

int func_171(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (func_693(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = UNK_0x08067D4957B73C02(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_693(UNK_0xD803B885F5E47A62()) || (func_197() && func_692())) && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 31)) && !bParam4)
	{
		bVar1 = func_196();
		if (UNK_0xC844350D5D58C99A(bVar1))
		{
			if (UNK_0x34BFC6F0CB887BC2(bVar1))
			{
				if (UNK_0x83FACCC48B68F9D1(bVar1) != -1)
				{
					if (func_756(UNK_0x83FACCC48B68F9D1(bVar1), 0, 1))
					{
						if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_194(iParam1, bParam0, 0);
							}
							else
							{
								return func_184(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_184(bParam0, UNK_0x83FACCC48B68F9D1(bVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_194(iParam1, bParam0, 0);
				}
				else
				{
					return func_172(0, -1, 0);
				}
			}
			else
			{
				return func_172(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && UNK_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_194(iParam1, bParam0, 0);
		}
		else
		{
			return func_184(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_184(bParam0, UNK_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_172(bool bParam0, int iParam1, bool bParam2)
{
	return func_173(UNK_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_173(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!UNK_0x40B8C182D63932FC(bParam0))
	{
		return 3;
	}
	iVar0 = UNK_0x08067D4957B73C02(bParam0);
	if ((func_183() || (func_182() && func_180())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_179(iParam2, iVar0);
		}
		else
		{
			return func_179(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_178(iVar0, iParam2, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_177(1);
				}
				else
				{
					return func_177(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 20))
			{
				return func_174(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_174(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_177(1);
	}
	return func_177(0);
}

int func_174(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_176(iParam0, iParam1, iParam3);
	if (func_175(Global_4456448.f_194990, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			case 3:
				return 31;
			case 4:
				return 32;
			case 5:
				return 33;
			case 6:
				return 34;
			case 7:
				return 35;
			case 8:
				return 36;
			case 9:
				return 37;
			case 10:
				return 38;
			case 11:
				return 39;
			case 12:
				return 40;
			case 13:
				return 41;
			case 14:
				return 42;
			case 15:
				return 43;
			default:
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			default:
				break;
		}
	}
	return 28;
}

bool func_175(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
		{
			return true;
		}
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_178(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_177(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

bool func_178(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return true;
		}
		return false;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, false);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, true);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 2);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 3);
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 4);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 5);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 6);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 7);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 8);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 9);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 10);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 11);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 12);
				case 1:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 13);
				case 2:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 14);
				case 3:
					return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_220, 15);
				default:
					break;
			}
			break;
	}
	return false;
}

int func_179(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_176(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		default:
			break;
	}
	return 28;
}

bool func_180()
{
	if (func_181())
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, 4);
}

bool func_181()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_226020, 12);
}

bool func_182()
{
	if (UNK_0xA14BB9332558B949())
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false);
	}
	return ((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_237025, false) || Global_1653478) && UNK_0x8A22C4C08282BF26(joaat("FM_DEATHMATCH_CREATOR")) > 0);
}

bool func_183()
{
	if (func_181() && UNK_0xA14BB9332558B949())
	{
		return true;
	}
	return false;
}

int func_184(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (iParam2 == -2)
	{
		iVar0 = UNK_0x08067D4957B73C02(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 148)
	{
		bVar1 = true;
	}
	bVar2 = bParam0;
	if (bVar2 > -1)
	{
		if (Global_1590535[bVar2 /*876*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_190())
			{
				iVar3 = func_189(bParam0);
				if (!iVar3 == -1)
				{
					return func_187(iVar3);
				}
			}
			if ((func_186(bParam1, bParam0, iVar0, 0) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)) || ((func_178(UNK_0x08067D4957B73C02(bParam1), UNK_0x08067D4957B73C02(bParam0), 0) && UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 23)) && !UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 18)))
			{
				return func_177(1);
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26))
			{
				return func_185(1);
			}
			else
			{
				return func_173(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[bParam0 /*876*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_177(1);
			}
			else
			{
				return func_173(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_189(bParam0);
	if (!iVar4 == -1)
	{
		return func_187(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_185(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_186(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (UNK_0x08067D4957B73C02(bParam0) == -1 && UNK_0x08067D4957B73C02(bParam1) == -1)
			{
				return false;
			}
		}
		return UNK_0x08067D4957B73C02(bParam0) == UNK_0x08067D4957B73C02(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (UNK_0x08067D4957B73C02(bParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return UNK_0x08067D4957B73C02(bParam0) == iParam2;
	}
	return UNK_0x08067D4957B73C02(bParam0) == iParam2;
}

int func_187(int iParam0)
{
	int iVar0;

	if (iParam0 > -1)
	{
		iVar0 = func_188(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			case 1:
				return 193;
			case 2:
				return 194;
			case 3:
				return 195;
			case 4:
				return 196;
			case 5:
				return 197;
			case 6:
				return 198;
			case 7:
				return 199;
			case 8:
				return 200;
			case 9:
				return 201;
			case 10:
				return 202;
			case 11:
				return 203;
			case 12:
				return 204;
			case 13:
				return 205;
			case 14:
				return 206;
			default:
				break;
		}
	}
	return 1;
}

int func_188(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_189(bool bParam0)
{
	if (!bParam0 == func_27())
	{
		if (func_73(bParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_64(bParam0)];
		}
	}
	return -1;
}

bool func_190()
{
	if (((func_193() || func_192()) || func_58()) || func_191())
	{
		return true;
	}
	return false;
}

bool func_191()
{
	return Global_2450632.f_19;
}

var func_192()
{
	return Global_2450632.f_16;
}

var func_193()
{
	return Global_2450632.f_15;
}

int func_194(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = Global_969031.f_14[iParam0];
	if (func_190())
	{
		iVar2 = func_189(bParam1);
		if (!iVar2 == -1)
		{
			return func_187(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_271[iParam0 /*15700*/].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != func_27())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_173(bParam1, !bParam2, iParam0, 0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_21, 13))
		{
			iVar0 = func_195(iParam0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_15, 26) && !func_178(iParam0, UNK_0x08067D4957B73C02(bParam1), 0))
		{
			iVar0 = func_185(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_195(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		case 3:
			iVar0 = Global_4456448.f_233010;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		case 4:
			return 6;
		case 5:
			return 9;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 12;
		case 9:
			return 2;
		default:
			break;
	}
	return 2;
}

bool func_196()
{
	return Global_2359302.f_2;
}

bool func_197()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_198()
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_64(UNK_0xD803B885F5E47A62());
	if (bVar0 != func_27())
	{
		if (bVar0 != UNK_0xD803B885F5E47A62())
		{
			if (((func_29(bVar0, 28) || func_29(UNK_0xD803B885F5E47A62(), 28)) || func_66(bVar0)) && !func_65(bVar0))
			{
				return func_67(bVar0, 0);
			}
			if (!UNK_0xDC30EF462887322E() && !UNK_0x05449BDA851F5199(0, -1, 1))
			{
				return func_67(bVar0, 0);
			}
		}
		bVar1 = func_72(&(Global_1628237[bVar0 /*615*/].f_11.f_104));
		if (UNK_0xEA6BC48857E0AC4C(bVar1))
		{
			return func_67(bVar0, 0);
		}
		else
		{
			return bVar1;
		}
	}
	return "";
}

bool func_199(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_378[bParam0 /*5*/].f_4, 2))
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_378[bParam0 /*5*/].f_4, 3))
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 13))
	{
		return true;
	}
	return false;
}

void func_200(char* sParam0, bool bParam1)
{
	if (UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (UNK_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_201(sParam0))
	{
		return;
	}
	func_160();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), UNK_0xBB0808A181D4745C(), 32);
	Global_1312585.f_9 = UNK_0x12AB0310C2281427(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_159();
	func_158(bParam1);
	func_157();
}

bool func_201(bool bParam0)
{
	if (!func_164())
	{
		return false;
	}
	if (Global_1312585 == 11)
	{
		return func_202(bParam0);
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_12));
}

bool func_202(bool bParam0)
{
	if (!func_164())
	{
		return false;
	}
	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return false;
	}
	return UNK_0x12AB0310C2281427(bParam0) == UNK_0x12AB0310C2281427(&(Global_1312585.f_16));
}

void func_203()
{
	if (!func_164())
	{
		return;
	}
	if (!UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == Global_1312585.f_9)
	{
		return;
	}
	func_160();
}

bool func_204(int iParam0)
{
	return Global_2439138.f_2723[0 /*80*/].f_1 == iParam0;
}

int func_205(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_62(iParam0, &Var0, -1, bParam2, bParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_48(&(Var0.f_69), iParam7);
	}
	return func_45(&Var0);
}

int func_206(int iParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	struct<80> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_62(iParam0, &Var0, -1, bParam1, bParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_45(&Var0);
}

int func_207()
{
	return 21;
}

bool func_208(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = func_64(bParam0);
	if (!bVar0 == func_27())
	{
		if (bVar0 == func_64(bParam1))
		{
			return true;
		}
	}
	return false;
}

void func_209(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;

	UNK_0x7352ACF3368DF65F("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 1);
	}
	Global_2537071.f_4971 = -1;
	bVar0 = (func_31(UNK_0xD803B885F5E47A62(), 0) && func_30(UNK_0xD803B885F5E47A62()));
	if (bParam6)
	{
		func_233(func_234(iParam0), 1);
	}
	else
	{
		func_230(iParam0, -1);
		if (func_229(UNK_0xD803B885F5E47A62()))
		{
			Global_1574650.f_3 = iParam0;
		}
		else
		{
			func_228(iParam0);
		}
		Global_1574650.f_4 = -1;
		if (func_229(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 5);
		}
		if (((func_139() && !func_138()) || func_137(UNK_0xD803B885F5E47A62(), 21)) || func_137(UNK_0xD803B885F5E47A62(), 25))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 4);
		}
		UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 17);
		UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 20);
		if (func_227(iParam0))
		{
			func_226();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_222(fParam1);
		}
		if (fParam2 != 1f)
		{
			UNK_0x51B096AAC60548C1(fParam2);
			if (iParam0 == 146)
			{
				UNK_0x34D79252800B23FF(0);
				UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
				UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
			}
		}
		if (func_220(iParam0))
		{
			UNK_0x34D79252800B23FF(0);
			UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), 0, 0);
			UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
			UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_218(1);
				if (func_215(0))
				{
					UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 9);
				}
				if (!bParam6)
				{
					UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_213(1);
			UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 12);
		}
		if (bParam5)
		{
			func_212();
			UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_210(iParam0))
			{
				UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 21);
			}
		}
	}
	Global_2513109 = 1;
}

bool func_210(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return true;
		default:
			break;
	}
	if (func_211())
	{
		return true;
	}
	return false;
}

bool func_211()
{
	switch (func_154())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return true;
		default:
			break;
	}
	return false;
}

void func_212()
{
	UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4962), false);
}

void func_213(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		Global_98796.f_8 = 1;
	}
	else
	{
		Global_98796.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_214(iVar0);
		iVar0++;
	}
}

void func_214(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

bool func_215(int iParam0)
{
	bool bVar0;

	bVar0 = func_216(2534, -1, 0);
	if (iParam0 == 0)
	{
		if ((UNK_0xEAE0D21A50E6C7F4(bVar0, false) && UNK_0xEAE0D21A50E6C7F4(bVar0, true)) && UNK_0xEAE0D21A50E6C7F4(bVar0, 2))
		{
			return false;
		}
	}
	else if (iParam0 == 1)
	{
		if ((UNK_0xEAE0D21A50E6C7F4(bVar0, 3) && UNK_0xEAE0D21A50E6C7F4(bVar0, 4)) && UNK_0xEAE0D21A50E6C7F4(bVar0, 5))
		{
			return false;
		}
	}
	else if (iParam0 == 2)
	{
		if ((UNK_0xEAE0D21A50E6C7F4(bVar0, 6) && UNK_0xEAE0D21A50E6C7F4(bVar0, 7)) && UNK_0xEAE0D21A50E6C7F4(bVar0, 8))
		{
			return false;
		}
	}
	else if (iParam0 == 3)
	{
		if ((UNK_0xEAE0D21A50E6C7F4(bVar0, 9) && UNK_0xEAE0D21A50E6C7F4(bVar0, 10)) && UNK_0xEAE0D21A50E6C7F4(bVar0, 11))
		{
			return false;
		}
	}
	return true;
}

int func_216(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_217(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_217(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
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

void func_218(int iParam0)
{
	if (func_219() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_219()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

bool func_220(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return true;
		case 141:
			if (func_221(UNK_0xD803B885F5E47A62()))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_221(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bVar0 /*615*/].f_1, false);
	}
	return false;
}

void func_222(float fParam0)
{
	bool bVar0;

	if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == func_223())
	{
		return;
	}
	bVar0 = (Global_2537071.f_5119 - fParam0);
	if (UNK_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == UNK_0x0D0A574C76D769AC() && UNK_0x755FF954DAE327E1(bVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2537071.f_5119 = fParam0;
	Global_2537071.f_5120 = UNK_0x0D0A574C76D769AC();
}

int func_223()
{
	switch (func_225())
	{
		case 0:
			return func_224();
		case 2:
			return joaat("CREATOR");
	}
	return 0;
}

int func_224()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("FREEMODE");
		default:
			break;
	}
	return joaat("FREEMODE");
}

int func_225()
{
	return Global_30768;
}

void func_226()
{
	Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_200 = 0;
	UNK_0x0674E58A79778E99(&(Global_2537071.f_4561), true);
}

bool func_227(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return true;
		default:
			break;
	}
	return false;
}

void func_228(int iParam0)
{
	Global_1628237[UNK_0xD803B885F5E47A62() /*615*/] = iParam0;
}

bool func_229(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 2);
}

void func_230(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_232(0) || func_232(func_231(iVar0)))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 2);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 2);
		}
	}
}

bool func_231(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		case 132:
			return true;
		case 133:
			return 2;
		case 136:
			return 11;
		case 138:
			return 5;
		case 139:
			return 6;
		case 129:
			return 8;
		case 140:
			return 4;
		case 141:
			return 9;
		case 144:
			return 3;
		case 146:
			return 7;
		case 236:
			return 12;
		case 150:
			return 12;
		default:
			break;
	}
	return Global_262145.f_23634;
}

bool func_232(bool bParam0)
{
	bool bVar0;

	bVar0 = func_216(2480, -1, 0);
	return UNK_0xEAE0D21A50E6C7F4(bVar0, bParam0);
}

void func_233(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_208, bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_208), bParam0);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_208, bParam0))
	{
		UNK_0x0674E58A79778E99(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_208), bParam0);
	}
}

bool func_234(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		case 254:
			return 25;
		default:
			break;
	}
	return false;
}

void func_235(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_48(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

float func_236(bool bParam0)
{
	return Local_1225[bParam0 /*68*/].f_40;
}

bool func_237(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_238(bool bParam0)
{
	UNK_0x2D03DF47CD5D6E35(3, 21, 200, 0, 0);
	if (bParam0 && !func_240())
	{
		UNK_0x4D7F4CC43D4D0DE3(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_239(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, false, iParam1);
}

bool func_240()
{
	return Global_2439138.f_2723[0 /*80*/].f_1 != 0;
}

void func_241(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 7))
		{
			if (((!func_106(UNK_0xD803B885F5E47A62()) && !func_259(UNK_0xD803B885F5E47A62())) && !func_136(UNK_0xD803B885F5E47A62())) && !func_108(UNK_0xD803B885F5E47A62()))
			{
				if (func_139())
				{
					func_251(2, 0, 1);
					func_250();
				}
				if (func_232(0))
				{
					iVar0 = func_216(2480, -1, 0);
					UNK_0x0674E58A79778E99(&iVar0, false);
					func_250();
				}
				if (func_232(func_231(func_260(UNK_0xD803B885F5E47A62()))))
				{
					iVar0 = func_216(2480, -1, 0);
					UNK_0x0674E58A79778E99(&iVar0, func_231(func_260(UNK_0xD803B885F5E47A62())));
					func_250();
				}
				if (func_249())
				{
					func_250();
				}
				if (func_260(UNK_0xD803B885F5E47A62()) > -1)
				{
					UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 7);
					if (func_248(UNK_0xD803B885F5E47A62()))
					{
						func_247();
					}
					func_244(func_246(func_260(UNK_0xD803B885F5E47A62())));
				}
			}
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 7);
		func_242();
	}
}

void func_242()
{
	if (func_243())
	{
		UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 17);
	}
}

bool func_243()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 17);
}

void func_244(int iParam0)
{
	int iVar0;

	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_245() /*10930*/].f_6174.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_245()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		case 236:
			return 67;
		case 133:
			return 69;
		default:
			break;
	}
	return 68;
}

void func_247()
{
	if (!func_243())
	{
		Global_2537071.f_6577 = UNK_0x2B6E0A53779D29EA();
		UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 17);
	}
}

bool func_248(int iParam0)
{
	if (func_260(iParam0) == 236 || func_260(iParam0) == 150)
	{
		return true;
	}
	return false;
}

bool func_249()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return false;
	}
	return true;
}

void func_250()
{
	if (func_249())
	{
		Global_2439138.f_1156.f_16 = 1;
	}
}

void func_251(int iParam0, int iParam1, bool bParam2)
{
	if (func_139())
	{
		if (iParam1 == 1)
		{
			if (Global_2537071.f_4395 == -1)
			{
				Global_2537071.f_4395 = Global_262145.f_26393;
			}
			func_258(&(Global_2537071.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2537071.f_4398 == -1)
				{
					Global_2537071.f_4398 = Global_262145.f_26394;
				}
				func_258(&(Global_2537071.f_4396), 0, 0);
			}
			else
			{
				Global_1312418 = 0;
				Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_8 = 0;
				func_257(1);
			}
		}
		else
		{
			Global_1312418 = 0;
			Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_8 = 0;
			func_257(1);
		}
		if ((!UNK_0xA14BB9332558B949() && !func_256()) && !func_252(UNK_0xD803B885F5E47A62()))
		{
			Global_968396 = 0;
		}
		UNK_0x6EC9FBED3024FDF5(0, -1, -1, iParam0);
	}
}

bool func_252(int iParam0)
{
	if (func_253(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0 /*876*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_253(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_254(iParam0))
		{
			return true;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0 /*876*/] == -1)
	{
		return false;
	}
	return true;
}

bool func_254(int iParam0)
{
	return func_255(iParam0);
}

bool func_255(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_13.f_1, false);
}

bool func_256()
{
	return Global_2450632.f_740;
}

void func_257(bool bParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
		if (!func_139())
		{
			if (func_756(UNK_0xD803B885F5E47A62(), 1, 0))
			{
				UNK_0x5507FCD92D15E617(UNK_0x16F2683693E537C9(), 1);
				UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 342, false);
				UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 122, false);
			}
			UNK_0xEAA8C82878E482D0(UNK_0xD803B885F5E47A62(), 1f);
			UNK_0x2F82E0AC5EC27DF2(0);
			UNK_0xDC4BBCD7EBECDC32(true);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				Global_1312418.f_2 = 0;
				if (bParam0)
				{
					UNK_0x03718F4C6E876DE6(0, 0);
				}
			}
		}
		else
		{
			if (func_756(UNK_0xD803B885F5E47A62(), 1, 1))
			{
				UNK_0x5507FCD92D15E617(UNK_0x16F2683693E537C9(), 0);
				UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
				UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 342, true);
				UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 122, true);
				UNK_0xEAA8C82878E482D0(UNK_0xD803B885F5E47A62(), 0.5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					UNK_0x03718F4C6E876DE6(1, 0);
				}
			}
			UNK_0x2F82E0AC5EC27DF2(1);
			UNK_0xDC4BBCD7EBECDC32(false);
		}
	}
}

void func_258(var uParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = UNK_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = UNK_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = UNK_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 1;
}

bool func_259(bool bParam0)
{
	if (func_229(bParam0))
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 8);
}

int func_260(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1628237[bVar0 /*615*/];
	}
	return -1;
}

bool func_261(bool bParam0, bool bParam1)
{
	return Local_378[bParam0 /*5*/].f_1[bParam1];
}

bool func_262(bool bParam0, bool bParam1)
{
	if (func_259(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	if (bParam0)
	{
		if (func_136(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
	}
	if (bParam1)
	{
		if (func_263(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
	}
	return false;
}

bool func_263(bool bParam0)
{
	return func_36(bParam0, 0);
}

void func_264(bool bParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 22))
	{
		if (bLocal_3181 == UNK_0x57270EE11514DC67())
		{
			if (func_199(UNK_0x57270EE11514DC67()))
			{
				if (!func_303(1, 1))
				{
					if (Local_80.f_6[bParam0 /*204*/].f_74[0 /*4*/] != -1)
					{
						if (Local_80.f_6[bParam0 /*204*/].f_74[0 /*4*/].f_3 > 0f)
						{
							if (Local_80.f_6[bParam0 /*204*/].f_74[0 /*4*/] != UNK_0x57270EE11514DC67())
							{
								if (!func_208(UNK_0xD803B885F5E47A62(), Local_80.f_6[bParam0 /*204*/].f_74[0 /*4*/].f_1))
								{
									func_265();
									UNK_0x5D96D8530B3D0904(&bLocal_539, 22);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_265()
{
	UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1734), 19);
}

void func_266(bool bParam0)
{
	if (bLocal_376 != func_8(bParam0))
	{
		bLocal_376 = func_8(bParam0);
		if (bLocal_376 > -1)
		{
			iLocal_377++;
			UNK_0x5D96D8530B3D0904(&bLocal_539, 25);
		}
	}
}

void func_267(bool bParam0)
{
	if (func_667() == 1)
	{
		if (func_8(bParam0) == UNK_0x57270EE11514DC67() && !func_262(1, 0))
		{
			if (!func_221(UNK_0xD803B885F5E47A62()))
			{
				func_268(1);
			}
		}
		else if (func_221(UNK_0xD803B885F5E47A62()))
		{
			func_268(0);
		}
	}
}

void func_268(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, false))
		{
			Global_2462854 = func_260(UNK_0xD803B885F5E47A62());
			if (Global_2462854 == -1)
			{
				Global_2462854 = Global_1574650.f_4;
			}
			if (func_300(Global_2462854) == 0)
			{
				if (func_299(1) > 0)
				{
					func_298(26, -1);
				}
			}
			if (func_139())
			{
				func_251(2, 0, 1);
				func_250();
			}
			if (func_232(0))
			{
				iVar1 = func_216(2480, -1, 0);
				UNK_0x0674E58A79778E99(&iVar1, false);
				func_250();
			}
			if (func_232(func_231(func_260(UNK_0xD803B885F5E47A62()))))
			{
				iVar1 = func_216(2480, -1, 0);
				UNK_0x0674E58A79778E99(&iVar1, func_231(func_260(UNK_0xD803B885F5E47A62())));
				func_250();
			}
			if (func_249())
			{
				func_250();
			}
			UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), false);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, false))
	{
		if ((!func_297() && !func_296()) && !func_295())
		{
			Global_2462854 = -1;
			func_294(26, -1);
		}
		else if (func_300(Global_2462854) == 0)
		{
			iVar0 = func_280(1);
			if (iVar0 > 0)
			{
				func_275(joaat("MPPLY_FMEVN_CHEAT_END"), iVar0);
				func_271(1932, 1, -1);
				func_275(joaat("MPPLY_ACTIVITY_ENDED"), 1);
			}
		}
		else if (func_269(26, -1))
		{
			Global_2462854 = -1;
			func_294(26, -1);
		}
		UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), false);
	}
}

bool func_269(bool bParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_38();
	}
	iVar0 = func_270(bParam1);
	bVar1 = UNK_0x0A4C9A3D51EAE31F(iVar0);
	return UNK_0xEAE0D21A50E6C7F4(bVar1, bParam0);
}

int func_270(bool bParam0)
{
	int iVar0;

	if (bParam0 == -1)
	{
		bParam0 = func_38();
	}
	switch (bParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		case 1:
			iVar0 = 910;
			break;
		case 2:
			iVar0 = 911;
			break;
		case 3:
			iVar0 = 912;
			break;
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

void func_271(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	bVar0 = func_216(iParam0, func_217(iParam2), 0);
	bVar0 = (bVar0 + bParam1);
	if (!func_274(iParam0))
	{
		func_273(iParam0, bVar0, iParam2, 1, 0);
	}
	else
	{
		func_272(iParam0, bVar0, iParam2, 1);
	}
}

void func_272(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = Global_2548434[iParam0 /*3*/][func_217(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_217(iParam2)] = bParam1;
			break;
		case 788:
			Global_1387994[func_217(iParam2)] = bParam1;
			break;
		case 789:
			Global_1388000[func_217(iParam2)] = bParam1;
			break;
		case 790:
			Global_1388006[func_217(iParam2)] = bParam1;
			break;
		case 8726:
			Global_1388012[func_217(iParam2)] = bParam1;
			break;
		case 777:
			Global_1387958[func_217(iParam2)] = bParam1;
			break;
		case 778:
			Global_1387964[func_217(iParam2)] = bParam1;
			break;
		case 779:
			Global_1387970[func_217(iParam2)] = bParam1;
			break;
		case 780:
			Global_1387976[func_217(iParam2)] = bParam1;
			break;
		case 8728:
			Global_1387982[func_217(iParam2)] = bParam1;
			break;
		case 767:
			Global_1387928[func_217(iParam2)] = bParam1;
			break;
		case 768:
			Global_1387934[func_217(iParam2)] = bParam1;
			break;
		case 769:
			Global_1387940[func_217(iParam2)] = bParam1;
			break;
		case 770:
			Global_1387946[func_217(iParam2)] = bParam1;
			break;
		case 8730:
			Global_1387952[func_217(iParam2)] = bParam1;
			break;
		case 757:
			Global_1388018[func_217(iParam2)] = bParam1;
			break;
		case 758:
			Global_1388024[func_217(iParam2)] = bParam1;
			break;
		case 759:
			Global_1388030[func_217(iParam2)] = bParam1;
			break;
		case 760:
			Global_1388036[func_217(iParam2)] = bParam1;
			break;
		case 8732:
			Global_1388042[func_217(iParam2)] = bParam1;
			break;
		case 1303:
			Global_1388048[func_217(iParam2)] = bParam1;
			break;
		case 7233:
			Global_1388054[func_217(iParam2)] = bParam1;
			break;
		case 639:
			Global_1388060[func_217(iParam2)] = bParam1;
			break;
		case 1278:
			Global_1388066[func_217(iParam2)] = bParam1;
			break;
		case 1876:
			Global_2586065[0 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 2267:
			Global_2586065[1 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 2929:
			Global_2586065[2 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3058:
			Global_2586065[3 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 10016:
			Global_2586214[func_217(iParam2)] = bParam1;
			break;
		case 764:
			Global_1388072[func_217(iParam2)] = bParam1;
			break;
		case 765:
			Global_1388078[func_217(iParam2)] = bParam1;
			break;
		case 766:
			Global_1388084[func_217(iParam2)] = bParam1;
			break;
		case 8731:
			Global_1388090[func_217(iParam2)] = bParam1;
			break;
		case 1236:
			Global_1388096[func_217(iParam2)] = bParam1;
			break;
		case 3053:
			Global_2586138[0 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3054:
			Global_2586138[1 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3055:
			Global_2586138[2 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3056:
			Global_2586138[3 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3057:
			Global_2586138[4 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3636:
			Global_2586217[0 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3637:
			Global_2586217[1 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3638:
			Global_2586217[2 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3639:
			Global_2586217[3 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3640:
			Global_2586217[4 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3641:
			Global_2586233[0 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3642:
			Global_2586233[1 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3643:
			Global_2586233[2 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3644:
			Global_2586233[3 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3645:
			Global_2586233[4 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3221:
			Global_2586138[5 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3227:
			Global_2586065[4 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3663:
			Global_2586249[func_217(iParam2)] = bParam1;
			break;
		case 3664:
			Global_2586258[func_217(iParam2)] = bParam1;
			break;
		case 3665:
			Global_2586252[func_217(iParam2)] = bParam1;
			break;
		case 3666:
			Global_2586261[func_217(iParam2)] = bParam1;
			break;
		case 3667:
			Global_2586255[func_217(iParam2)] = bParam1;
			break;
		case 3668:
			Global_2586264[func_217(iParam2)] = bParam1;
			break;
		case 3689:
			Global_2586267[func_217(iParam2)] = bParam1;
			break;
		case 3229:
			Global_2586138[6 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3230:
			Global_2586065[5 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3234:
			Global_2586138[7 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 3232:
			Global_2586065[6 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 4019:
			Global_2586138[8 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 4020:
			Global_2586065[7 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 4022:
			Global_2586138[9 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 4023:
			Global_2586065[8 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 4025:
			Global_2586138[10 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 4026:
			Global_2586065[9 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 4028:
			Global_2586138[11 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 4029:
			Global_2586065[10 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 6109:
			Global_2586138[12 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 6110:
			Global_2586065[11 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 6167:
			Global_2586138[13 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 6168:
			Global_2586065[12 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 6545:
			Global_2586138[14 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 6546:
			Global_2586065[13 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 6558:
			Global_2586138[15 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 6559:
			Global_2586065[14 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 6561:
			Global_2586138[16 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 6562:
			Global_2586065[15 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 6564:
			Global_2586138[17 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 6565:
			Global_2586065[16 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 7283:
			Global_2586065[17 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 7285:
			Global_2586065[18 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 7287:
			Global_2586065[19 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 8010:
			Global_2586065[20 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 8282:
			Global_2586270[func_217(iParam2)] = bParam1;
			break;
		case 8283:
			Global_2586273[func_217(iParam2)] = bParam1;
			break;
		case 8284:
			Global_2586276[func_217(iParam2)] = bParam1;
			break;
		case 8285:
			Global_2586279[func_217(iParam2)] = bParam1;
			break;
		case 8286:
			Global_2586282[func_217(iParam2)] = bParam1;
			break;
		case 8287:
			Global_2586285[func_217(iParam2)] = bParam1;
			break;
		case 8288:
			Global_2586288[func_217(iParam2)] = bParam1;
			break;
		case 8289:
			Global_2586291[func_217(iParam2)] = bParam1;
			break;
		case 8290:
			Global_2586294[func_217(iParam2)] = bParam1;
			break;
		case 8291:
			Global_2586297[func_217(iParam2)] = bParam1;
			break;
		case 8292:
			Global_2586300[func_217(iParam2)] = bParam1;
			break;
		case 8293:
			Global_2586303[func_217(iParam2)] = bParam1;
			break;
		case 8294:
			Global_2586306[func_217(iParam2)] = bParam1;
			break;
		case 8900:
			Global_2586309[func_217(iParam2)] = bParam1;
			break;
		case 8534:
			Global_2586065[21 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 8977:
			Global_2586138[23 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 8975:
			Global_2586065[22 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 8980:
			Global_2586138[24 /*3*/][func_217(iParam2)] = bParam1;
			break;
		case 8978:
			Global_2586065[23 /*3*/][func_217(iParam2)] = bParam1;
			break;
		default:
			break;
	}
}

void func_273(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_217(iParam2)];
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, iParam3);
	}
}

bool func_274(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return true;
		}
	}
	return false;
}

void func_275(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_279(iParam0);
	bVar0 = (bVar0 + iParam1);
	if (!func_278(iParam0))
	{
		func_277(iParam0, bVar0);
	}
	else
	{
		func_276(iParam0, bVar0);
	}
}

void func_276(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1387910 = bParam1;
			break;
		case joaat("MPPLY_CREW_1_ID"):
			Global_1387912 = bParam1;
			break;
		case joaat("MPPLY_CREW_2_ID"):
			Global_1387912 = bParam1;
			break;
		case joaat("MPPLY_CREW_3_ID"):
			Global_1387913 = bParam1;
			break;
		case joaat("MPPLY_CREW_4_ID"):
			Global_1387914 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1387915 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1387916 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1387917 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1387918 = bParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1387919 = bParam1;
			break;
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1387920 = bParam1;
			break;
		case joaat("MPPLY_FRIENDLY"):
			Global_1387921 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1387922 = bParam1;
			break;
		case joaat("MPPLY_GRIEFING"):
			Global_1387923 = bParam1;
			break;
		case joaat("MPPLY_HELPFUL"):
			Global_1387924 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1387925 = bParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1387926 = bParam1;
			break;
		default:
			break;
	}
}

void func_277(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		UNK_0xCDC520E5E48E63D9(iVar0, bParam1, 1);
	}
}

bool func_278(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case joaat("MPPLY_CREW_0_ID"):
			case joaat("MPPLY_CREW_1_ID"):
			case joaat("MPPLY_CREW_2_ID"):
			case joaat("MPPLY_CREW_3_ID"):
			case joaat("MPPLY_CREW_4_ID"):
			case joaat("MPPLY_CREW_LOCAL_XP_0"):
			case joaat("MPPLY_CREW_LOCAL_XP_1"):
			case joaat("MPPLY_CREW_LOCAL_XP_2"):
			case joaat("MPPLY_CREW_LOCAL_XP_3"):
			case joaat("MPPLY_CREW_LOCAL_XP_4"):
			case joaat("MPPLY_BECAME_CHEATER_NUM"):
			case joaat("MPPLY_FRIENDLY"):
			case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			case joaat("MPPLY_GRIEFING"):
			case joaat("MPPLY_HELPFUL"):
			case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			case joaat("MPPLY_OFFENSIVE_UGC"):
				return true;
		}
	}
	return false;
}

int func_279(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_280(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	iVar1 = 0;
	if (Global_2461737 == 0)
	{
		return 0;
	}
	if (func_295())
	{
		if (UNK_0xA14BB9332558B949() || (func_293() || func_291()))
		{
			Global_2460684 = 1;
		}
	}
	Global_2461737 = 0;
	if (Global_1315704)
	{
		iVar0 = 1;
	}
	if (Global_2460684)
	{
		iVar0 = 1;
	}
	if (Global_2460683)
	{
		iVar0 = 1;
	}
	if (func_47(Global_110666.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2460606)
	{
		iVar0 = 1;
	}
	if (func_290(512))
	{
		iVar0 = 1;
	}
	if (func_289(128))
	{
		iVar0 = 1;
	}
	if (Global_1315728 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_288())
	{
		iVar0 = 0;
	}
	if (Global_2461176)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_286())
		{
			if (Global_4456448.f_197270 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(UNK_0xD803B885F5E47A62(), 0))
	{
		iVar0 = 0;
	}
	if (func_285())
	{
		iVar0 = 0;
	}
	if ((Global_2460684 || Global_2460683) || Global_1315704)
	{
		if (func_291())
		{
			iVar0 = 0;
		}
	}
	Global_2461176 = 0;
	Global_2460683 = 0;
	Global_2460684 = 0;
	Global_1315704 = 0;
	Global_2460606 = 0;
	func_283(&(Global_110666.f_1), 32);
	func_282(512);
	func_281(128);
	return iVar0;
}

void func_281(int iParam0)
{
	Global_110723 = (Global_110723 - (Global_110723 && iParam0));
}

void func_282(int iParam0)
{
	Global_110724 = (Global_110724 - (Global_110724 && iParam0));
}

void func_283(var uParam0, int iParam1)
{
	func_284(uParam0, iParam1);
}

void func_284(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_285()
{
	if (((Global_1574428 || Global_1574398) || func_36(UNK_0xD803B885F5E47A62(), 0)) || func_197())
	{
		return true;
	}
	return false;
}

bool func_286()
{
	switch (func_287())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return true;
		default:
			break;
	}
	return false;
}

int func_287()
{
	return Global_2451426.f_1.f_2822;
}

bool func_288()
{
	return Global_1312854;
}

bool func_289(int iParam0)
{
	return (Global_110723 && iParam0) != 0;
}

bool func_290(int iParam0)
{
	return (Global_110724 && iParam0) != 0;
}

bool func_291()
{
	if (func_300(Global_2462854))
	{
		return false;
	}
	if (func_292(UNK_0xD803B885F5E47A62(), 146))
	{
		return true;
	}
	return false;
}

bool func_292(bool bParam0, int iParam1)
{
	if (Global_1628237[bParam0 /*615*/] == iParam1)
	{
		return func_221(bParam0);
	}
	return false;
}

bool func_293()
{
	if (func_300(Global_2462854))
	{
		return false;
	}
	if (func_221(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

void func_294(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_38();
	}
	switch (bParam0)
	{
		case 0:
			UNK_0x25C34E9F657F1C79(false, bParam1);
			break;
		default:
			iVar1 = func_270(bParam1);
			bVar0 = UNK_0x0A4C9A3D51EAE31F(iVar1);
			if (UNK_0xEAE0D21A50E6C7F4(bVar0, bParam0))
			{
				UNK_0x0674E58A79778E99(&bVar0, bParam0);
				UNK_0x25C34E9F657F1C79(bVar0, bParam1);
			}
			break;
	}
}

bool func_295()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1312425, false);
}

bool func_296()
{
	return Global_1312846;
}

bool func_297()
{
	return Global_1312877;
}

void func_298(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (bParam1 == -1)
	{
		bParam1 = func_38();
	}
	switch (bParam0)
	{
		case 0:
			UNK_0x25C34E9F657F1C79(false, bParam1);
			break;
		default:
			iVar1 = func_270(bParam1);
			bVar0 = UNK_0x0A4C9A3D51EAE31F(iVar1);
			if (!UNK_0xEAE0D21A50E6C7F4(bVar0, bParam0))
			{
				UNK_0x5D96D8530B3D0904(&bVar0, bParam0);
				UNK_0x25C34E9F657F1C79(bVar0, bParam1);
			}
			break;
	}
}

int func_299(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315728 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_288())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_286())
		{
			if (Global_4456448.f_197270 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(UNK_0xD803B885F5E47A62(), 0))
	{
		iVar0 = 0;
	}
	if (func_285())
	{
		iVar0 = 0;
	}
	Global_2461737 = 1;
	return iVar0;
}

bool func_300(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11389)
			{
				return true;
			}
			break;
		case 132:
			if (Global_262145.f_11391)
			{
				return true;
			}
			break;
		case 133:
			if (Global_262145.f_11388)
			{
				return true;
			}
			break;
		case 136:
			if (Global_262145.f_11392)
			{
				return true;
			}
			break;
		case 138:
			if (Global_262145.f_11393)
			{
				return true;
			}
			break;
		case 139:
			if (Global_262145.f_11394)
			{
				return true;
			}
			break;
		case 129:
			if (Global_262145.f_11390)
			{
				return true;
			}
			break;
		case 140:
			if (Global_262145.f_11395)
			{
				return true;
			}
			break;
		case 141:
			if (Global_262145.f_11396)
			{
				return true;
			}
			break;
		case 144:
			if (Global_262145.f_11397)
			{
				return true;
			}
			break;
		case 146:
			if (Global_262145.f_11398)
			{
				return true;
			}
			break;
		case 236:
		case 150:
			break;
	}
	return false;
}

void func_301()
{
	if (func_303(0, 0))
	{
		return;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 25))
	{
		if (bLocal_376 == UNK_0x57270EE11514DC67())
		{
			if (Local_364.f_11 == 0)
			{
				Local_364.f_11 = UNK_0xDD0E7998AE8AD485();
			}
		}
		UNK_0x0674E58A79778E99(&bLocal_539, 25);
	}
}

void func_302()
{
	if (func_237("KOTC_1STHELP"))
	{
		UNK_0xA37A90C62806D848(1);
	}
	if (func_237("KOTC_OTHRKG"))
	{
		UNK_0xA37A90C62806D848(1);
	}
	if (func_237("KOTC_YOUKNG"))
	{
		UNK_0xA37A90C62806D848(1);
	}
	if (func_237("KOTC_CONTS"))
	{
		UNK_0xA37A90C62806D848(1);
	}
}

bool func_303(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
	}
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 17))
	{
		return true;
	}
	if (func_343(UNK_0xD803B885F5E47A62(), 1, 0))
	{
		return true;
	}
	if (func_146())
	{
		return true;
	}
	if (func_232(9))
	{
		return true;
	}
	if (func_232(0))
	{
		return true;
	}
	if (!func_318(0, 1, 1))
	{
		return true;
	}
	if (func_311())
	{
		return true;
	}
	if (func_306(4))
	{
		return true;
	}
	if (func_305())
	{
		return true;
	}
	if (func_262(bParam0, bParam1))
	{
		return true;
	}
	if (Global_1662006)
	{
		return true;
	}
	if (func_304(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

bool func_304(bool bParam0)
{
	if (!func_756(bParam0, 0, 1))
	{
		return false;
	}
	return Global_1590535[bParam0 /*876*/].f_35;
}

bool func_305()
{
	return Global_98796.f_346 > 0;
}

bool func_306(int iParam0)
{
	int iVar0;

	if (func_305())
	{
		iVar0 = 0;
		while (iVar0 < 53)
		{
			if (func_310(iVar0) == iParam0)
			{
				if (func_307(iVar0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_307(int iParam0)
{
	return func_308(iParam0, 6, 1);
}

bool func_308(int iParam0, bool bParam1, bool bParam2)
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
		if (func_225() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_216(func_309(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

int func_309(int iParam0)
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

int func_310(int iParam0)
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

bool func_311()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_393.f_5, false))
	{
		return true;
	}
	if (func_313() && Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_98 != 3)
	{
		return true;
	}
	if (func_312() && Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_98 != 3)
	{
		return true;
	}
	if (Global_2394768)
	{
		return true;
	}
	if (Global_1574650.f_20)
	{
		return true;
	}
	return false;
}

bool func_312()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632, 5);
}

bool func_313()
{
	if (((func_317() || func_316()) || func_315()) || func_314())
	{
		return true;
	}
	return false;
}

bool func_314()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632, true);
}

bool func_315()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632, 2);
}

bool func_316()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632, 20);
}

bool func_317()
{
	return Global_2450632.f_598;
}

bool func_318(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_342(UNK_0xD803B885F5E47A62(), 29))
	{
		return false;
	}
	if (func_137(UNK_0xD803B885F5E47A62(), 21))
	{
		return false;
	}
	if (func_137(UNK_0xD803B885F5E47A62(), 25))
	{
		return false;
	}
	if (UNK_0x09BE1E6DF7B80B43())
	{
		return false;
	}
	if (bParam1)
	{
		if (UNK_0xF929B1A0A409FF93())
		{
			return false;
		}
	}
	if (func_252(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_341())
	{
		return false;
	}
	if (bParam2)
	{
		if (func_340(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	if (func_339())
	{
		return false;
	}
	if (bParam0)
	{
		if (func_106(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	else if (func_331(UNK_0xD803B885F5E47A62()) == 3)
	{
		return false;
	}
	if (func_330(UNK_0xD803B885F5E47A62()) != func_27() && func_330(UNK_0xD803B885F5E47A62()) == func_64(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_328(func_329()) && !func_248(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_297())
	{
		return false;
	}
	if (func_146())
	{
		return false;
	}
	if (UNK_0xA14BB9332558B949())
	{
		return false;
	}
	if (func_254(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!func_326())
	{
		return false;
	}
	if (func_137(UNK_0xD803B885F5E47A62(), 0) || func_137(UNK_0xD803B885F5E47A62(), 3))
	{
		return false;
	}
	if ((func_137(UNK_0xD803B885F5E47A62(), 12) || func_137(UNK_0xD803B885F5E47A62(), 14)) || func_137(UNK_0xD803B885F5E47A62(), 13))
	{
		return false;
	}
	if (func_343(UNK_0xD803B885F5E47A62(), 1, 1))
	{
		if (!func_325() && !Global_2513487)
		{
			return false;
		}
	}
	if (func_324(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_305())
	{
		return false;
	}
	if (Global_1662006)
	{
		return false;
	}
	if (func_304(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_323())
	{
		return false;
	}
	if (func_321(UNK_0xD803B885F5E47A62()) && Global_1590184.f_171)
	{
		return false;
	}
	if (func_320())
	{
		return false;
	}
	if (func_108(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (Global_2536130)
	{
		return false;
	}
	if (Global_1694139)
	{
		return false;
	}
	if (!func_107(UNK_0xD803B885F5E47A62()))
	{
		if (func_319(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	return true;
}

bool func_319(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0 /*13*/].f_12 != 0;
	}
	return false;
}

bool func_320()
{
	return Global_1676377.f_474;
}

int func_321(int iParam0)
{
	if (func_322(Global_1590535[iParam0 /*876*/].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

bool func_322(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}
	return false;
}

bool func_323()
{
	if (Global_4254512.f_943 > -1)
	{
		return true;
	}
	return false;
}

bool func_324(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, 11);
}

bool func_325()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_326()
{
	if (func_327() == 0)
	{
		return true;
	}
	return false;
}

int func_327()
{
	return Global_1312467.f_18;
}

bool func_328(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return true;
		default:
			break;
	}
	return false;
}

int func_329()
{
	return Global_2439138.f_2723[0 /*80*/].f_1;
}

bool func_330(int iParam0)
{
	return Global_1628237[iParam0 /*615*/].f_11.f_35;
}

int func_331(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 2;
	bVar1 = ((func_338(bParam0) && !func_229(bParam0)) && !UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 8));
	bVar2 = func_106(bParam0);
	bVar3 = func_139();
	bVar4 = func_332();
	if ((bVar1 && (func_107(bParam0) || func_221(bParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_30(bParam0)) && !func_28(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2537071.f_5124.f_216 != iVar0)
	{
		Global_2537071.f_5124.f_216 = iVar0;
	}
	return iVar0;
}

int func_332()
{
	if ((func_29(UNK_0xD803B885F5E47A62(), 21) || func_29(UNK_0xD803B885F5E47A62(), 22)) || func_336())
	{
		return 1;
	}
	if (func_334())
	{
		func_333(22);
		return 1;
	}
	return 0;
}

void func_333(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_4), bParam0);
}

bool func_334()
{
	if (func_31(UNK_0xD803B885F5E47A62(), 0))
	{
		if (((func_139() && !func_138()) || func_137(UNK_0xD803B885F5E47A62(), 21)) || func_137(UNK_0xD803B885F5E47A62(), 25))
		{
			return true;
		}
		else
		{
			func_335(27);
		}
	}
	return false;
}

void func_335(bool bParam0)
{
	UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_4), bParam0);
}

int func_336()
{
	return func_337(358, -1);
}

int func_337(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_217(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_338(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return Global_1628237[bVar0 /*615*/] != -1;
	}
	return false;
}

bool func_339()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 5;
}

bool func_340(int iParam0)
{
	if (Global_2425662[iParam0 /*421*/].f_261.f_4 != 0 || Global_2425662[iParam0 /*421*/].f_261.f_5)
	{
		return true;
	}
	return false;
}

bool func_341()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, false);
}

bool func_342(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_5, bParam1);
}

bool func_343(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_27())
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, false))
	{
		return true;
	}
	if (bParam1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_26, true))
		{
			return true;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

void func_344(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;

	Global_1574650.f_6 = { vParam1 };
	bVar0 = SYSTEM::VDIST(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), vParam1);
	if (bVar0 < bParam5 && !func_229(UNK_0xD803B885F5E47A62()))
	{
		if ((iParam0 != 146 && !func_137(UNK_0xD803B885F5E47A62(), 21)) && !func_137(UNK_0xD803B885F5E47A62(), 25))
		{
			func_358(vParam1, 1, 0);
		}
		if ((!*iParam4 || UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 3)) && func_756(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			*iParam4 = 1;
			func_222(func_357(iParam0));
			UNK_0x51B096AAC60548C1(func_356(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = func_355(iParam0);
				UNK_0x34D79252800B23FF(iVar1);
				if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > iVar1)
				{
					UNK_0x67F91979413C5D76(UNK_0xD803B885F5E47A62(), iVar1, 1);
					UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 1);
				}
				UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 8);
			}
			UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 3);
			UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && bVar0 < bParam6) && !func_229(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 3) && func_756(UNK_0xD803B885F5E47A62(), 1, 1))
		{
			func_354();
			UNK_0x51B096AAC60548C1(Global_262145.f_11401);
			UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 3);
			UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 3);
		}
	}
	else if ((*iParam4 || UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 3)) && func_756(UNK_0xD803B885F5E47A62(), 1, 1))
	{
		*iParam4 = 0;
		func_354();
		UNK_0x51B096AAC60548C1(1f);
		UNK_0x34D79252800B23FF(5);
		UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 8);
		UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 3);
		UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 3);
		if (iParam0 != 146 && bParam7)
		{
			func_345();
		}
	}
}

void func_345()
{
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_24), &Global_2409327, 2);
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_26), &Global_2409329, 19);
	func_352();
	func_348(1, 1, 0);
	func_346();
}

void func_346()
{
	func_347(0, 0);
}

void func_347(int iParam0, int iParam1)
{
	Global_2405072.f_22 = iParam0;
	Global_2405072.f_23 = iParam1;
}

void func_348(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_45), &Global_2409348, 320);
	}
	else
	{
		Global_2405072.f_45 = { Global_2409348 };
		Global_2405072.f_45.f_49 = { Global_2409348.f_49 };
		Global_2405072.f_45.f_52 = Global_2409348.f_52;
		Global_2405072.f_45.f_53 = Global_2409348.f_53;
	}
	if (bParam0)
	{
		func_351();
	}
	if (!bParam2)
	{
		func_100(0, 1, 0, 1060320051 /* Float: 0.7f */, 1086324736 /* Float: 6f */, 1065353216 /* Float: 1f */, 1088421888 /* Float: 7f */, 1084227584 /* Float: 5f */, 0, 1066192077 /* Float: 1.1f */, 0, 0, 1, 0, 1109393408 /* Float: 40f */);
	}
	func_350(0);
	func_349();
}

void func_349()
{
	struct<6> Var0;

	if (Global_2405072.f_487.f_1 == UNK_0x0D0A574C76D769AC())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

void func_350(bool bParam0)
{
	if (bParam0)
	{
		Global_2405072.f_705 = 0;
	}
	else
	{
		Global_2405072.f_705 = 1;
	}
}

void func_351()
{
	UNK_0xBFC87303F2B2ED31(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_352()
{
	func_353();
	Global_2405072.f_2254 = 0;
}

void func_353()
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405072.f_2255[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_354()
{
	if (UNK_0x1727A44C562FBED2(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == UNK_0x0D0A574C76D769AC() && Global_2537071.f_5119 < 1f)
		{
			return;
		}
	}
	Global_2537071.f_5120 = -1;
	Global_2537071.f_5119 = 1f;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0;
		case 144:
			return 0;
		default:
			break;
	}
	return 5;
}

float func_356(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		case 144:
			return 0f;
		case 185:
			return 0f;
		default:
			break;
	}
	return 1f;
}

float func_357(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 146:
		case 236:
		case 150:
			return 0f;
		default:
			break;
	}
	return 1f;
}

void func_358(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405072.f_45.f_49 = { vParam0 };
	Global_2405072.f_45.f_52 = iParam3;
	Global_2405072.f_45.f_53 = iParam4;
}

Vector3 func_359(bool bParam0)
{
	return Local_1225[bParam0 /*68*/].f_24;
}

void func_360(bool bParam0)
{
	int iVar0;

	if (func_303(0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_1294[iVar0 /*42*/] = -1;
		Local_1294[iVar0 /*42*/].f_1 = func_27();
		Local_1294[iVar0 /*42*/].f_9 = 0;
		Local_1294[iVar0 /*42*/].f_31 = -1;
		if (Local_80.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/] > -1)
		{
			Local_1294[iVar0 /*42*/] = Local_80.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/];
			Local_1294[iVar0 /*42*/].f_1 = Local_80.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
			Local_1294[iVar0 /*42*/].f_9 = func_77(Local_80.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/].f_3);
		}
		iVar0++;
	}
	func_361(&Local_1294, &(Local_1225[bParam0 /*68*/].f_66), 27, &uLocal_2639, &uLocal_2755, -1, 0, 0);
}

void func_361(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	bool bVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	var uVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	char cVar57[16];

	if (func_481(iParam2))
	{
		return;
	}
	bVar45 = -1f;
	bVar46 = -1;
	bVar47 = -1;
	bVar49 = false;
	bVar50 = false;
	uParam3->f_36 = 0;
	if (func_479() || iParam2 == 28)
	{
		if (func_432(iParam1, iParam2, uParam3, Global_1574185, 0, func_482(), bParam7))
		{
			func_431(1);
			if ((!func_430() && !func_429()) || UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, true))
			{
				if (func_428())
				{
					func_426();
				}
				else
				{
					UNK_0xD02CE72B4B66DC29(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_425(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_424(iParam1, 0, 0);
							if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
							{
								UNK_0x0674E58A79778E99(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							bVar52 = false;
							while (bVar52 < 32)
							{
								iVar1[bVar52] = -1;
								bVar52++;
							}
							bVar52 = false;
							while (bVar52 < 32)
							{
								if (func_756(UNK_0x117658E336116132(bVar52), 0, 1))
								{
									bVar35 = UNK_0x117658E336116132(bVar52);
									if (!func_36(bVar35, 0))
									{
										if ((func_423(bVar35) || Global_2425662[bVar35 /*421*/].f_236 != -1) || func_422(bVar35))
										{
											bVar44 = bVar35;
											if (func_74(bVar35))
											{
												iVar1[bVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_419(&iVar1, bVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								bVar52++;
							}
						}
						if (!func_416(UNK_0xD803B885F5E47A62(), 0) && func_110(UNK_0xD803B885F5E47A62()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						bVar52 = false;
						while (bVar52 < 32)
						{
							if (func_415())
							{
								if (func_756(UNK_0x117658E336116132(bVar52), 0, 1))
								{
									bVar35 = UNK_0x117658E336116132(bVar52);
								}
								else
								{
									bVar35 = func_27();
								}
							}
							else
							{
								bVar35 = (iParam0[bVar52 /*42*/])->f_1;
							}
							if ((func_414(bVar35) && func_411(bVar35, iParam2)) && func_756(bVar35, 0, 1))
							{
								bVar44 = bVar35;
								uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
								Var38 = { func_406(bVar35) };
								if (bVar35 == UNK_0xD803B885F5E47A62())
								{
									uParam3->f_35 = bVar53;
								}
								StringCopy(&(uParam3->f_1), UNK_0x6E524813889AECF8(bVar35), 64);
								*(uParam4[bVar52 /*13*/]) = { func_41(bVar35) };
								iVar37 = func_400(bVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = UNK_0x5283D58F79627134(iVar37);
								}
								Global_1574185++;
								if ((iParam0[bVar52 /*42*/])->f_22 != -1f)
								{
									bVar45 = (iParam0[bVar52 /*42*/])->f_22;
								}
								if ((iParam0[bVar52 /*42*/])->f_31 != -1)
								{
									bVar46 = (iParam0[bVar52 /*42*/])->f_31;
								}
								if ((iParam0[bVar52 /*42*/])->f_41 != -1)
								{
									bVar47 = (iParam0[bVar52 /*42*/])->f_41;
								}
								bVar43 = (iParam0[bVar52 /*42*/])->f_9;
								if (((iParam0[bVar52 /*42*/])->f_9 != -1 || (iParam0[bVar52 /*42*/])->f_22 != -1f) || (iParam0[bVar52 /*42*/])->f_31 != -1)
								{
									if (!func_415())
									{
										bVar50 = true;
									}
								}
								if (iParam5 != -1)
								{
									func_395(&bVar43, &bVar45, (iParam0[bVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_394(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									bVar48 = (iParam0[bVar52 /*42*/])->f_2 + 1;
									if (iVar54 != bVar48)
									{
										iVar54 = bVar48;
									}
									else
									{
										bVar48 = -2;
									}
								}
								bVar51 = func_393(bVar35, 0);
								if (bVar34)
								{
									if (func_73(bVar35, 1) && iVar1[bVar44] != -1)
									{
										bVar53 = iVar1[bVar44];
									}
									else
									{
										bVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[bVar44 /*2*/].f_1 = bVar53;
								if ((iParam0[bVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&cVar57, "UW_TM", 16);
									StringIntConCat(&cVar57, (iParam0[bVar52 /*42*/])->f_39, 16);
								}
								if (func_392(iParam5))
								{
									func_391(bVar35, iParam1, uParam3, bVar53, Var38, sVar36, uVar42, bVar43, bVar51, bVar50, bVar45, bVar43, bVar47, &cVar57, (iParam0[bVar52 /*42*/])->f_40, bVar48, bParam6);
								}
								else
								{
									func_391(bVar35, iParam1, uParam3, bVar53, Var38, sVar36, uVar42, bVar43, bVar51, bVar50, bVar45, bVar46, bVar47, &cVar57, (iParam0[bVar52 /*42*/])->f_40, bVar48, bParam6);
								}
								UNK_0x5D96D8530B3D0904(&bVar49, bVar35);
								bVar53++;
							}
							bVar52++;
						}
						bVar52 = false;
						while (bVar52 < 32)
						{
							bVar35 = UNK_0x117658E336116132(bVar52);
							if (func_756(bVar35, 0, 1) && !UNK_0xEAE0D21A50E6C7F4(bVar49, bVar35))
							{
								bVar35 = UNK_0x117658E336116132(bVar52);
							}
							else
							{
								bVar35 = func_27();
							}
							if (func_414(bVar35))
							{
								if (func_756(UNK_0x117658E336116132(bVar52), 0, 1))
								{
									bVar44 = bVar35;
									uVar42 = Global_1590535[bVar44 /*876*/].f_211.f_6;
									Var38 = { func_406(bVar35) };
									*(uParam4[bVar52 /*13*/]) = { func_41(bVar35) };
									iVar37 = func_400(bVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = UNK_0x5283D58F79627134(iVar37);
									}
									Global_1574185++;
									bVar51 = func_393(bVar35, 1);
									if (bVar34)
									{
										if (func_73(bVar35, 1))
										{
											bVar53 = iVar1[bVar52];
										}
										else
										{
											bVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[bVar44 /*2*/].f_1 = bVar53;
									func_374(bVar35, UNK_0x6E524813889AECF8(bVar35), iParam1, uParam3, bVar53, Var38, sVar36, uVar42, bVar51, bVar50);
									bVar53++;
								}
							}
							bVar52++;
						}
						if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							func_371(uParam3, iParam1, iParam2);
						}
						func_3(&(uParam3->f_21));
						func_370();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
						{
							func_369(uParam3, iParam1);
							func_368(iParam1, 0, 1);
							UNK_0x5D96D8530B3D0904(&(uParam3->f_33), 7);
						}
						func_369(uParam3, iParam1);
						if (!UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 11))
						{
							UNK_0x5D96D8530B3D0904(&(uParam3->f_33), 11);
						}
						if (func_364(uParam3))
						{
							Global_1574406 = 1;
						}
						func_362(uParam3);
						if (Global_1574406 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574406 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (UNK_0x83D8570832F172A7(*iParam1))
					{
						UNK_0xD9ACBBA59FD5A09E(7);
						UNK_0xEF45C43067063F18(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						UNK_0xD9ACBBA59FD5A09E(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_370();
			func_425(0);
			if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 7))
			{
				UNK_0x0674E58A79778E99(&(uParam3->f_33), 7);
			}
			if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 10))
			{
				UNK_0x0674E58A79778E99(&(uParam3->f_33), 10);
			}
		}
	}
	UNK_0xD59EF13BB60323B9();
}

void func_362(var uParam0)
{
	if (!func_18(&(uParam0->f_21)))
	{
		func_11(&(uParam0->f_21), 0, 0);
	}
	else if (func_5(&(uParam0->f_21), 250, 0))
	{
		func_3(&(uParam0->f_21));
		func_363(0);
	}
}

void func_363(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574406 != 2)
		{
			Global_1574406 = 2;
		}
	}
	else
	{
		switch (Global_1574406)
		{
			case 0:
				Global_1574406 = 1;
				break;
			case 1:
				break;
			case 2:
				break;
		}
	}
}

bool func_364(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;

	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = UNK_0x117658E336116132(uParam0->f_37);
	if (bVar15 != func_27() && func_756(bVar15, 0, 1))
	{
		Var2 = { func_41(bVar15) };
		iVar1 = func_367(uParam0, uParam0->f_37);
		if (func_366(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (UNK_0xD01DD90A3EAEC725(&Var2))
					{
						if (UNK_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_365(uParam0, iVar0, 2);
						}
					}
					else if (UNK_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_365(uParam0, iVar0, 1);
					}
					break;
				case 2:
					if (UNK_0xD01DD90A3EAEC725(&Var2))
					{
						if (!UNK_0x8086012EEEB2D3DF(&Var2))
						{
							iVar16 = 1;
							func_365(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_365(uParam0, iVar0, 0);
					}
					break;
				case 1:
					if (UNK_0xD01DD90A3EAEC725(&Var2))
					{
						if (!UNK_0x74684D5E87B13DBD(&Var2))
						{
							iVar16 = 1;
							func_365(uParam0, iVar0, 0);
						}
					}
					else if (!UNK_0x74684D5E87B13DBD(&Var2))
					{
						iVar16 = 1;
						func_365(uParam0, iVar0, 0);
					}
					break;
			}
		}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_365(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_366(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return UNK_0x83F946529771616E(&uParam0, 13);
}

int func_367(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_368(int iParam0, bool bParam1, int iParam2)
{
	if (UNK_0x7E60C62A7CE58FC8(*iParam0, "COLLAPSE"))
	{
		UNK_0x1200CC973A2399C8(bParam1);
		UNK_0x7E60D21B163E9D56();
	}
	if (iParam2 == 1)
	{
		if (UNK_0x7E60C62A7CE58FC8(*iParam0, "DISPLAY_VIEW"))
		{
			UNK_0x7E60D21B163E9D56();
		}
	}
}

void func_369(var uParam0, int iParam1)
{
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_33, 10))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		UNK_0x3CAEA85DA607305E(uParam0->f_35);
		UNK_0x7E60D21B163E9D56();
		UNK_0x5D96D8530B3D0904(&(uParam0->f_33), 10);
	}
}

void func_370()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_371(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = false;
	while (bVar0 < 32)
	{
		bVar2 = UNK_0x117658E336116132(bVar0);
		if (bVar2 != func_27())
		{
			if (func_756(bVar2, 0, 1))
			{
				if (uParam0->f_38[bVar0 /*2*/].f_1 != -1)
				{
					bVar1 = func_373(uParam0->f_38[bVar0 /*2*/], 0, iParam2);
					func_372(iParam1, uParam0->f_38[bVar0 /*2*/].f_1, bVar1, Global_1590535[bVar0 /*876*/].f_211.f_6);
				}
			}
		}
		bVar0++;
	}
}

void func_372(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		if (UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_ICON"))
		{
			UNK_0x3CAEA85DA607305E(bParam1);
			UNK_0x3CAEA85DA607305E(bParam2);
			if (bParam2 == 65)
			{
				UNK_0x3CAEA85DA607305E(bParam3);
			}
			UNK_0x7E60D21B163E9D56();
		}
	}
}

int func_373(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		case 1:
			return 49;
		default:
			break;
	}
	return iVar0;
}

void func_374(bool bParam0, bool bParam1, int iParam2, var uParam3, bool bParam4, var uParam5, char* sParam6, var uParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	char* sVar1;

	if (bParam4 >= func_390() && bParam4 < func_389())
	{
		bParam4 = (bParam4 % 16);
		iVar0 = bParam4 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (UNK_0x7E60C62A7CE58FC8(*iParam2, sVar1))
		{
			UNK_0x3CAEA85DA607305E(bParam4);
			if (UNK_0xEAE0D21A50E6C7F4(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_388("");
			}
			else
			{
				UNK_0x3CAEA85DA607305E(bParam10);
			}
			func_388(bParam1);
			UNK_0x3CAEA85DA607305E(bParam11);
			if (uParam3->f_108 == 6)
			{
				func_388("");
			}
			else
			{
				UNK_0x3CAEA85DA607305E(65);
			}
			UNK_0x3CAEA85DA607305E(-1);
			func_388("");
			if (uParam3->f_108 == 6)
			{
				func_388("");
			}
			else
			{
				func_388(&uParam5);
			}
			func_379(uParam3, bParam0);
			UNK_0x024BC5F58A72410C(bParam9);
			UNK_0x024BC5F58A72410C(bParam9);
			if (func_378(uParam3))
			{
				func_377("DPAD_FRIEND");
			}
			else if (func_376(uParam3))
			{
				func_377("DPAD_FRIEND");
			}
			else if (func_375(uParam3))
			{
				func_377("DPAD_CREW");
			}
			else
			{
				func_377("");
			}
			UNK_0x7E60D21B163E9D56();
		}
	}
}

bool func_375(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(uParam0->f_33, 6);
}

bool func_376(var uParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(uParam0->f_33, 5);
}

void func_377(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

bool func_378(var uParam0)
{
	if (func_376(uParam0) && func_375(uParam0))
	{
		return true;
	}
	return false;
}

void func_379(var uParam0, bool bParam1)
{
	if (func_387(bParam1))
	{
		UNK_0x3CAEA85DA607305E(121);
	}
	else if (func_383(bParam1))
	{
		UNK_0x3CAEA85DA607305E(122);
	}
	else if (((UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_27, 15) && bParam1 > -1) && bParam1 < 32) && UNK_0xEAE0D21A50E6C7F4(Global_2425662[bParam1 /*421*/].f_413, false))
	{
		UNK_0x3CAEA85DA607305E(123);
	}
	else
	{
		if (func_380())
		{
			uParam0->f_36 = 0;
		}
		UNK_0x1200CC973A2399C8(uParam0->f_36);
	}
}

bool func_380()
{
	if (UNK_0xA14BB9332558B949())
	{
		if (func_381() || func_193())
		{
			return true;
		}
	}
	return false;
}

int func_381()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_193();
	}
	return func_382(Global_4456448.f_194990);
}

int func_382(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_383(bool bParam0)
{
	if ((func_756(bParam0, 0, 1) && func_384()) && func_69(bParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_384()
{
	if (func_338(UNK_0xD803B885F5E47A62()) || func_386())
	{
		if (!func_385(UNK_0xD803B885F5E47A62()))
		{
			return false;
		}
	}
	return true;
}

bool func_385(bool bParam0)
{
	if (func_260(bParam0) == 236 || func_260(bParam0) == 150)
	{
		return func_107(bParam0);
	}
	return false;
}

bool func_386()
{
	switch (func_110(UNK_0xD803B885F5E47A62()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return true;
		default:
			break;
	}
	return false;
}

bool func_387(bool bParam0)
{
	if (func_380())
	{
		if (func_756(bParam0, 0, 1))
		{
			return func_74(bParam0);
		}
	}
	if ((func_756(bParam0, 0, 1) && func_384()) && func_71(bParam0, 0))
	{
		return true;
	}
	return false;
}

void func_388(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_389()
{
	int iVar0;

	if (Global_1574187)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

bool func_390()
{
	int iVar0;

	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_391(bool bParam0, int iParam1, var uParam2, bool bParam3, var uParam4, char* sParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	bool bVar0;
	char* sVar1;

	if (bParam3 >= func_390() && bParam3 < func_389())
	{
		bParam3 = (bParam3 % 16);
		bVar0 = bParam3 + 1;
		if (Global_1574187)
		{
			bVar0 += 16;
		}
		if (bParam19)
		{
			bVar0 = bParam18;
			if (bVar0 == -2)
			{
				bParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (UNK_0x83D8570832F172A7(*iParam1))
		{
			if (UNK_0x7E60C62A7CE58FC8(*iParam1, sVar1))
			{
				UNK_0x3CAEA85DA607305E(bParam3);
				if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_388("");
				}
				else
				{
					UNK_0x3CAEA85DA607305E(bParam9);
				}
				if (uParam2->f_108 == 6 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					func_377(bParam16);
				}
				else
				{
					func_388(&(uParam2->f_1));
				}
				UNK_0x3CAEA85DA607305E(bParam11);
				if (uParam2->f_108 == 6)
				{
					func_388("");
				}
				else
				{
					UNK_0x3CAEA85DA607305E(65);
				}
				if (bParam12 == 1)
				{
					UNK_0x3CAEA85DA607305E(bVar0);
				}
				else
				{
					UNK_0x3CAEA85DA607305E(-1);
				}
				if (func_415())
				{
					func_388("");
				}
				else if (uParam2->f_108 == 6 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					UNK_0x6B012227B3921E18(bParam16);
					UNK_0x6D99DF8263D35CE5(bParam17);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 5 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					UNK_0x6B012227B3921E18(bParam16);
					UNK_0x6D99DF8263D35CE5(bParam17);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 7 && !UNK_0xEA6BC48857E0AC4C(bParam16))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_TWO_INT");
					UNK_0x6B012227B3921E18(bParam16);
					UNK_0x6D99DF8263D35CE5(bParam17);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 8 && !UNK_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_UNIT");
					if (bParam13 != -1f)
					{
						UNK_0x21994591120B91F0(bParam13, 1);
					}
					if (bParam10 != -1)
					{
						UNK_0x6D99DF8263D35CE5(bParam10);
					}
					UNK_0x6B012227B3921E18(&(uParam2->f_104));
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 9)
				{
					UNK_0x7ACC3006A87F8B39("FM_AE_CASH");
					UNK_0xCBD015EC7E4226BC(bParam10, 1);
					UNK_0x779B34565F4D71B1();
				}
				else if (uParam2->f_108 == 10)
				{
					if (bParam10 == 0)
					{
						UNK_0x7ACC3006A87F8B39("FM_AE_CASH");
						UNK_0xCBD015EC7E4226BC(bParam10, 1);
						UNK_0x779B34565F4D71B1();
					}
					else
					{
						UNK_0x7ACC3006A87F8B39("FM_NG_CASH");
						UNK_0xCBD015EC7E4226BC(bParam10, 1);
						UNK_0x779B34565F4D71B1();
					}
				}
				else if (bParam15 > -1)
				{
					if (bParam15 == 0 && !UNK_0xEA6BC48857E0AC4C(&(uParam2->f_104)))
					{
						func_377(&(uParam2->f_104));
					}
					else
					{
						func_388("");
					}
				}
				else if (bParam14 != -1)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam14, 6);
					UNK_0x779B34565F4D71B1();
				}
				else if (bParam13 != -1f)
				{
					UNK_0x7ACC3006A87F8B39("NUMBER");
					UNK_0x21994591120B91F0(bParam13, 1);
					UNK_0x779B34565F4D71B1();
				}
				else if (bParam10 != -1)
				{
					UNK_0x3CAEA85DA607305E(bParam10);
				}
				else
				{
					func_388("");
				}
				if (uParam2->f_108 == 6)
				{
					func_388("");
				}
				else
				{
					func_388(&uParam4);
				}
				func_379(uParam2, bParam0);
				if (bParam12 == 1 || UNK_0xEA6BC48857E0AC4C(bParam8))
				{
					func_388("");
					func_388("");
				}
				else
				{
					UNK_0x024BC5F58A72410C(bParam8);
					UNK_0x024BC5F58A72410C(bParam8);
				}
				if (func_378(uParam2))
				{
					func_377("DPAD_FRIEND");
				}
				else if (func_376(uParam2))
				{
					func_377("DPAD_FRIEND");
				}
				else if (func_375(uParam2))
				{
					func_377("DPAD_CREW");
				}
				else
				{
					func_377("");
				}
				UNK_0x7E60D21B163E9D56();
			}
		}
	}
}

bool func_392(int iParam0)
{
	return false;
	switch (iParam0)
	{
		case 11:
		case 12:
			return true;
		default:
			break;
	}
	return false;
}

int func_393(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 116;
	if ((!bParam1 && func_338(bParam0)) && !func_106(bParam0))
	{
		iVar0 = func_207();
	}
	iVar1 = func_189(bParam0);
	if (!iVar1 == -1)
	{
		return func_187(iVar1);
	}
	return iVar0;
}

char* func_394(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		case 2:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_395(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_399(iParam3))
	{
		*bParam1 = (func_396(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_392(iParam3))
	{
		*bParam1 = (func_396(iParam3, iParam2) / 1000f);
		return 1;
	}
	*bParam0 = iParam2;
	return 0;
}

float func_396(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_398(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		case 2:
			if (UNK_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_397(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_397(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_398(float fParam0)
{
	return (fParam0 / 0.3048f);
}

bool func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return true;
		default:
			break;
	}
	return false;
}

int func_400(bool bParam0)
{
	int iVar0;

	iVar0 = func_403(bParam0);
	if (iVar0 == -1)
	{
		func_401(bParam0, 1);
		return 0;
	}
	Global_1389078[iVar0 /*5*/].f_4 = 1;
	return Global_1389078[iVar0 /*5*/].f_2;
}

void func_401(bool bParam0, bool bParam1)
{
	if (!func_756(bParam0, 0, 1))
	{
		return;
	}
	if (func_403(bParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (bParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_402(bParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = bParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

bool func_402(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_403(bool bParam0)
{
	int iVar0;

	if (!func_756(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0 /*5*/].f_1 == bParam0)
		{
			if (UNK_0x0E66AEE1894BB411(Global_1389078[iVar0 /*5*/].f_2) && UNK_0x0A53A8B5FA0B3F4D(Global_1389078[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_404(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_404(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;

	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (UNK_0x0E66AEE1894BB411(Global_1389078[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, UNK_0x5283D58F79627134(Global_1389078[iParam0 /*5*/].f_2), 64);
			UNK_0x0DA3CF6693AF3C9C(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		UNK_0xC48867F0C23C5A64(Global_1389078[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32 /*5*/] = { Global_1389078[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_405(&(Global_1389078[iVar32 /*5*/]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_405(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_27();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (UNK_0x8CD06866876216F2())
	{
		uParam0->f_3 = UNK_0x2B6E0A53779D29EA();
	}
}

struct<4> func_406(bool bParam0)
{
	char cVar0[32];

	if (func_756(bParam0, 0, 1))
	{
		Global_2513218 = { func_41(bParam0) };
		if (UNK_0xDC30EF462887322E())
		{
			if (func_366(Global_2513218))
			{
				if (!UNK_0x5B9BB2932920F9CD(&Global_2513218))
				{
					return cVar0;
				}
			}
		}
		else if (!UNK_0x4DEB7B48DD0AABA4(0))
		{
			return cVar0;
		}
		if (func_410(&Global_2513218))
		{
			Global_2513148 = { func_408(bParam0) };
			func_407(&Global_2513148, &cVar0);
		}
	}
	return cVar0;
}

void func_407(var uParam0, char* sParam1)
{
	UNK_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

struct<35> func_408(bool bParam0)
{
	struct<13> Var0;
	struct<35> Var13;

	if (func_409(bParam0))
	{
		return Global_1312909[UNK_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_41(bParam0) };
	UNK_0xD9DA83C40D038174(&Var13, 35, &Var0);
	return Var13;
}

bool func_409(bool bParam0)
{
	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		return true;
	}
	return false;
}

bool func_410(var uParam0)
{
	if (UNK_0x1963B11DE70153E0())
	{
		if (UNK_0x080E9D045AEE5605() && UNK_0xF2EC2A39FF9E838D(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_411(bool bParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_229(bParam0) || func_413(bParam0)) || func_259(bParam0))
		{
			return false;
		}
	}
	if (!func_412(bParam0))
	{
		return false;
	}
	if ((!func_423(bParam0) && Global_2425662[bParam0 /*421*/].f_236 == -1) && !func_422(bParam0))
	{
		return false;
	}
	return true;
}

bool func_412(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[bParam0 /*876*/].f_142, 22);
}

bool func_413(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		return (UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 10) || UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 9));
	}
	return false;
}

bool func_414(bool bParam0)
{
	bool bVar0;

	if (bParam0 == func_27())
	{
		return false;
	}
	if (func_36(bParam0, 0))
	{
		return false;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[bVar0 /*876*/].f_142, 2))
		{
			return false;
		}
	}
	return true;
}

bool func_415()
{
	switch (func_110(UNK_0xD803B885F5E47A62()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return true;
		default:
			break;
	}
	switch (func_260(UNK_0xD803B885F5E47A62()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
	}
	if (func_106(UNK_0xD803B885F5E47A62()))
	{
		switch (func_110(UNK_0xD803B885F5E47A62()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return true;
		}
	}
	if (func_385(UNK_0xD803B885F5E47A62()))
	{
		return true;
	}
	return false;
}

bool func_416(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 && func_417(Global_1628237[iParam0 /*615*/].f_11.f_33))
	{
		return true;
	}
	if (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1)
	{
		if (func_417(Global_1628237[iParam0 /*615*/].f_11.f_32))
		{
			return true;
		}
	}
	return false;
}

int func_417(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		default:
			break;
	}
	return func_418(iParam0, 0);
	return 0;
}

int func_418(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		default:
			break;
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

void func_419(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	while (bVar0 < 32)
	{
		if (func_756(UNK_0x117658E336116132(bVar0), 0, 1))
		{
			bVar1 = UNK_0x117658E336116132(bVar0);
			if (!func_36(bVar1, 0))
			{
				if ((func_423(bVar1) || Global_2425662[bVar1 /*421*/].f_236 != -1) || func_422(bVar1))
				{
					if (func_420(bVar1, bParam1, 0))
					{
						(*iParam0)[bVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		bVar0++;
	}
}

bool func_420(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1 != func_27())
	{
		if (!bParam2)
		{
			if (func_421(bParam0, bParam1))
			{
				return false;
			}
		}
		if (Global_1628237[bParam0 /*615*/].f_11 != func_27())
		{
			return bParam1 == Global_1628237[bParam0 /*615*/].f_11;
		}
	}
	return false;
}

bool func_421(bool bParam0, bool bParam1)
{
	if (bParam1 != func_27())
	{
		if (bParam0 != func_27())
		{
			if (Global_1628237[bParam0 /*615*/].f_11 != func_27())
			{
				if (Global_1628237[bParam0 /*615*/].f_11 == bParam0)
				{
					return bParam1 == bParam0;
				}
			}
		}
	}
	return false;
}

bool func_422(bool bParam0)
{
	return Global_1590535[bParam0 /*876*/].f_196 != 0;
}

bool func_423(bool bParam0)
{
	if (func_756(bParam0, 0, 1))
	{
		if (func_756(UNK_0xD803B885F5E47A62(), 0, 1))
		{
			if (UNK_0xF816C4B5324CB295(bParam0, UNK_0xD803B885F5E47A62()) || func_110(bParam0) == 233)
			{
				return true;
			}
		}
	}
	return false;
}

void func_424(int iParam0, bool bParam1, bool bParam2)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		UNK_0x3CAEA85DA607305E(bParam1);
		UNK_0x3CAEA85DA607305E(bParam2);
		UNK_0x7E60D21B163E9D56();
	}
}

void func_425(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377167.f_2 == 0)
		{
			Global_1377167.f_2 = 1;
		}
	}
	else if (Global_1377167.f_2 == 1)
	{
		Global_1377167.f_2 = 0;
	}
}

void func_426()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, true))
	{
		if (func_240())
		{
			func_427();
		}
	}
}

void func_427()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0 /*80*/].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0 /*80*/].f_2 = 5;
			func_48(&(Global_2439138.f_2723[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

bool func_428()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, false) && func_240())
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4588, true) && func_240())
	{
		return true;
	}
	return false;
}

bool func_429()
{
	if (func_240())
	{
		if (func_46(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_430()
{
	if (func_240())
	{
		if (func_60(Global_2439138.f_2723[0 /*80*/].f_1))
		{
			return true;
		}
	}
	return false;
}

void func_431(int iParam0)
{
	if (Global_1377167.f_1 != Global_1377167)
	{
		Global_1377167.f_1 = Global_1377167;
	}
	if (Global_1377167 != iParam0)
	{
		Global_1377167 = iParam0;
	}
}

bool func_432(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;

	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_478(iParam1);
	fVar7 = func_477();
	bVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_476())
		{
			if (func_475() > 0 && Global_1574187)
			{
				UNK_0xB8E3919889462ACD();
				UNK_0xD668DA5CA4A1D2C8(fVar7);
				UNK_0x3584F71E5CA29322(18);
				if (UNK_0xFEBC1E4EC9E001F0())
				{
					UNK_0xE19C2AAC820D8ED5();
				}
				UNK_0x3584F71E5CA29322(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_464())
		{
			func_463(iParam0, uParam2, 1);
			return false;
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4591, 26))
	{
		func_463(iParam0, uParam2, 1);
		return false;
	}
	if (!func_18(&(uParam2->f_19)))
	{
		if (func_475() == 1)
		{
			func_462(bVar6, iParam0, 0);
			func_11(&(uParam2->f_19), 0, 0);
			func_463(iParam0, uParam2, 0);
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_18(&(uParam2->f_19)) || bParam5)
	{
		if (UNK_0xFEBC1E4EC9E001F0())
		{
			UNK_0xE19C2AAC820D8ED5();
		}
		UNK_0x3584F71E5CA29322(10);
		if (func_5(&(uParam2->f_19), 10000, 0) || (func_475() == 0 && !bParam5))
		{
			func_463(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_461();
				if (iParam1 == 27 || iParam1 == 28)
				{
					UNK_0xB8E3919889462ACD();
				}
				UNK_0x3584F71E5CA29322(18);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(uParam2->f_33, false))
			{
				if (bVar5 == 0)
				{
					func_461();
					if (iParam1 == 27 || iParam1 == 28)
					{
						UNK_0xB8E3919889462ACD();
					}
					UNK_0x3584F71E5CA29322(18);
				}
				UNK_0xD668DA5CA4A1D2C8(fVar7);
				if (func_462(bVar6, iParam0, 0))
				{
					func_424(iParam0, 0, 0);
					bVar4 = func_459(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_457(iParam1) };
					if (bParam4)
					{
						func_454(iParam0, bVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_448(iParam0, func_451(uParam2), func_449(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						bVar9 = func_442(uParam2);
						if (!UNK_0xEA6BC48857E0AC4C(bParam6))
						{
							bVar9 = bParam6;
						}
						func_440(iParam0, bVar9, func_441(), -1);
					}
					else if (func_380())
					{
						uParam2->f_34 = Global_1574186;
						func_454(iParam0, bVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						bVar8 = func_433(iParam1);
						uParam2->f_34 = Global_1574186;
						func_454(iParam0, bVar4, "", 0, bVar8, Global_1574186, 1);
					}
					else
					{
						bVar8 = func_433(iParam1);
						func_454(iParam0, bVar4, &Var0, 1, bVar8, -1, 1);
					}
					UNK_0x5D96D8530B3D0904(&(uParam2->f_33), false);
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(uParam2->f_33, false))
			{
				Global_1574185 = uParam3;
				Global_1574184 = 1;
				UNK_0xD668DA5CA4A1D2C8(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574186)
					{
						UNK_0x0674E58A79778E99(&(uParam2->f_33), false);
					}
				}
				return true;
			}
		}
	}
	return false;
}

int func_433(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_439())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 6;
			break;
		case 3:
			iVar0 = 5;
			break;
		case 26:
			iVar0 = 21;
			break;
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		case 7:
			iVar0 = 10;
			break;
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		case 15:
			iVar0 = 17;
			break;
		case 16:
			iVar0 = 18;
			break;
		case 18:
			if (func_438(UNK_0xD803B885F5E47A62()))
			{
				iVar0 = 20;
			}
			if (func_437(UNK_0xD803B885F5E47A62()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_436(UNK_0xD803B885F5E47A62()))
	{
		iVar0 = 2;
	}
	if (func_434())
	{
		iVar0 = 20;
	}
	return iVar0;
}

int func_434()
{
	if (UNK_0xA14BB9332558B949())
	{
		return func_58();
	}
	return func_435(Global_4456448.f_194990);
}

int func_435(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_436(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 4;
}

bool func_437(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

bool func_438(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_439()
{
	return Global_4456448.f_1 == 0;
}

void func_440(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (UNK_0xEA6BC48857E0AC4C(bParam2))
		{
			func_377(bParam1);
		}
		else
		{
			UNK_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			UNK_0x6B012227B3921E18(bParam1);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
		}
		func_377("");
		if (bParam3 != -1)
		{
			UNK_0x3CAEA85DA607305E(bParam3);
		}
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_441()
{
	switch (func_110(UNK_0xD803B885F5E47A62()))
	{
		case 163:
			return "BD_SORT_1";
		case 160:
			return "BD_SORT_4";
		case 154:
			return "BD_SORT_3";
		case 155:
			return "BD_SORT_3";
	}
	return "";
}

char* func_442(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
		case 1:
			return "GR_DPD_F";
		case 2:
			return "GR_DPD_S";
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
		case 1:
			return "GR_DPD_B";
		case 2:
			return "GR_DPD_C";
		case 3:
			return "GR_DPD_D";
	}
	switch (func_110(UNK_0xD803B885F5E47A62()))
	{
		case 233:
			return "H2_DPAD_SET";
		case 180:
			return "GB_BIGUNLOAD_T";
		case 182:
			return "DEAL_DEALN";
		case 194:
			return "PI_BIK_13_0";
		case 189:
			return "PI_BIK_4_1";
		case 193:
			return "PI_BIK_13_1";
		case 205:
			return "PI_BIK_13_3";
		case 186:
			return "CELL_BIKER_CK";
		case 207:
			return "DV_SH_TITLE";
		case 208:
			return "BA_SH_TITLE";
		case 209:
			return "SHU_SH_TITLE";
		case 210:
			return "PI_BIK_13_4";
		case 183:
			return "CELL_BIKER_RESC";
		case 199:
			return "CELL_BIKER_SEAR";
		case 201:
			return "CELL_BIKER_STAN";
		case 142:
			return "PIM_MAGM210";
		case 163:
			return "PIM_MAGM608";
		case 160:
			return "PIM_MAGM604";
		case 154:
			return "PIM_MAGM602";
		case 155:
			return "PIM_MAGM603";
		case 148:
			if (func_444())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
		case 151:
			if (func_130(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
		case 152:
			return "PIM_MAGM204";
		case 153:
			if (func_130(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
		case 157:
			return "PIM_MAGM207";
		case 159:
			return "PIM_MAGM206";
		case 162:
			return "PIM_MAGM607";
		case 164:
			return "PIM_MAGM212";
		case 166:
			return "GB_DPAD_HEAD";
		case 167:
			return "GB_DPAD_BUY";
		case 168:
			return "GB_DPAD_SELL";
		case 169:
			return "GB_DPAD_DEF";
		case 170:
			return "GB_DPAD_AIR";
		case 171:
			return "GB_DPAD_CASH";
		case 172:
			return "GB_DPAD_SAL";
		case 173:
			return "GB_DPAD_FRA";
		case 178:
			return "VEX_TITLEa";
		case 188:
			return "VEX_TITLEb";
		case 218:
			return "FRT_MODE";
		case 217:
			return "FRT_TRNS";
		case 214:
			return "MODE_PLW";
		case 215:
			return "MODE_FUL";
		case 216:
			return "MODE_AA";
		case 219:
			return "MODE_VEL";
		case 220:
			return "MODE_RMP";
		case 221:
			return "MODE_STK";
		case 225:
			return "GR_TITLEL";
		case 226:
			return "GRS_TITLEL";
		case 227:
			return "GRD_TITLEL";
		case 195:
			return "GB_STEAL_T";
		case 198:
			return "SC_MENU_TITLE";
		case 190:
			return "GB_DPAD_BSEL";
		case 191:
			return "GB_DPAD_BDEF";
		case 185:
			return "GB_DPAD_GFH";
		case 197:
			return "GB_DPAD_JB";
		case 179:
			return "CELL_JOUST";
		case 200:
			return "CAG_BLIP";
		case 192:
			if (func_443(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
	}
	return "";
}

bool func_443(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return true;
		default:
			break;
	}
	return false;
}

bool func_444()
{
	return (func_447() && func_445(func_446()));
}

bool func_445(bool bParam0)
{
	return func_71(bParam0, 1);
}

int func_446()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11.f_35;
}

bool func_447()
{
	return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/] == 148;
}

void func_448(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (UNK_0xEA6BC48857E0AC4C(bParam2))
		{
			func_377(bParam1);
		}
		else if (func_260(UNK_0xD803B885F5E47A62()) == 133)
		{
			UNK_0x7ACC3006A87F8B39("FM_AE_BRACKT_C");
			UNK_0x6B012227B3921E18(bParam1);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
		}
		else
		{
			UNK_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			UNK_0x6B012227B3921E18(bParam1);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
		}
		func_377("");
		if (bParam3 != -1)
		{
			UNK_0x3CAEA85DA607305E(bParam3);
		}
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_449(var uParam0)
{
	int iVar0;

	iVar0 = func_260(UNK_0xD803B885F5E47A62());
	if (func_450())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		case 132:
			return "FM_AE_SORT_5";
		case 133:
			switch (func_154())
			{
				case 0:
					return "FM_AE_SORT_2";
				case 1:
					return "FM_AE_SORT_2";
				case 2:
					return "FM_AE_SORT_3";
				case 3:
					return "FM_AE_SORT_2";
				case 4:
					return "FM_AE_SORT_2";
				case 5:
					return "FM_AE_SORT_2";
				case 6:
					return "FM_AE_SORT_2";
				case 7:
					return "FM_AE_SORT_13";
				case 8:
					return "FM_AE_SORT_4";
				case 9:
					return "FM_AE_SORT_2";
				case 10:
					return "FM_AE_SORT_2";
				case 11:
					return "FM_AE_SORT_2";
				case 12:
					return "FM_AE_SORT_2";
				case 13:
					return "FM_AE_SORT_2";
				case 14:
					return "FM_AE_SORT_5";
				case 15:
					return "FM_AE_SORT_9";
				case 16:
					return "FM_AE_SORT_9";
				case 17:
					return "FM_AE_SORT_9";
				case 18:
					return "FM_AE_SORT_9";
				default:
					break;
			}
			break;
		case 136:
			return "";
		case 138:
			return "";
		case 139:
			return "FM_AE_SORT_10";
		case 140:
			return "";
		case 141:
			return "FM_AE_SORT_5";
		case 144:
			return "FM_AE_SORT_1";
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_450()
{
	return Global_1590408;
}

bool func_451(var uParam0)
{
	int iVar0;

	iVar0 = func_260(UNK_0xD803B885F5E47A62());
	if (func_450())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		case 132:
			if (func_453() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_453() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
		case 133:
			switch (func_154())
			{
				case 0:
					return "AMCH_0SLC";
				case 1:
					return "AMCH_1SLC";
				case 2:
					return "AMCH_2SLC";
				case 3:
					return "AMCH_3SLC";
				case 4:
					return "AMCH_4SLC";
				case 5:
					return "AMCH_5SLC";
				case 6:
					return "AMCH_6SLC";
				case 7:
					return "AMCH_7SLC";
				case 8:
					return "AMCH_8SLC";
				case 9:
					return "AMCH_12SLC";
				case 10:
					return "AMCH_13SLC";
				case 11:
					return "AMCH_15SLC";
				case 12:
					return "AMCH_16SLC";
				case 13:
					return "AMCH_23SLC";
				case 14:
					return "AMCH_9SLC";
				case 15:
					return "AMCH_19SLC";
				case 16:
					return "AMCH_20SLC";
				case 17:
					return "AMCH_21SLC";
				case 18:
					return "AMCH_22SLC";
				default:
					break;
			}
			break;
		case 136:
			return "PIM_TA10";
		case 138:
			return "PIM_TA4";
		case 139:
			return "PIM_TA5";
		case 140:
			return "PIM_TA3";
		case 141:
			return "PIM_TA8";
		case 144:
			return "PIM_TA2";
		case 129:
			if (func_452() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_452()
{
	return Global_2537071.f_5048;
}

int func_453()
{
	if (func_260(UNK_0xD803B885F5E47A62()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_454(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_388(bParam1);
		}
		else if (bParam5 != -1)
		{
			UNK_0x7ACC3006A87F8B39(bParam1);
			UNK_0x6D99DF8263D35CE5(bParam5);
			UNK_0x779B34565F4D71B1();
		}
		else
		{
			func_377(bParam1);
		}
		if (func_476() && bParam6)
		{
			if (func_456())
			{
				bVar0 = 2;
				bVar1 = 2;
			}
			else
			{
				bVar0 = true;
				bVar1 = 2;
			}
			UNK_0x7ACC3006A87F8B39("LBD_DPD_CNT");
			UNK_0x6D99DF8263D35CE5(bVar0);
			UNK_0x6D99DF8263D35CE5(bVar1);
			UNK_0x779B34565F4D71B1();
		}
		else
		{
			func_377(bParam2);
		}
		if (bParam4 != -1)
		{
			UNK_0x3CAEA85DA607305E(bParam4);
			if (func_455(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x3CAEA85DA607305E(166);
			}
			else if (func_58())
			{
				UNK_0x3CAEA85DA607305E(220);
			}
		}
		UNK_0x7E60D21B163E9D56();
	}
}

bool func_455(int iParam0)
{
	if (func_438(iParam0) || func_437(iParam0))
	{
		return true;
	}
	return false;
}

bool func_456()
{
	return Global_1574187;
}

struct<4> func_457(int iParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "", 16);
	if (func_458(UNK_0xD803B885F5E47A62()) || func_436(UNK_0xD803B885F5E47A62()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_204, 16);
			break;
	}
	if (func_380() && UNK_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_458(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 5;
}

bool func_459(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	if (iParam0 == 20 && (!func_380() || UNK_0xEA6BC48857E0AC4C(bParam1)))
	{
		sVar0 = func_460();
		return sVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		if (Global_1574425 == 1)
		{
			Global_1574425 = 0;
		}
		return bParam1;
	}
	else
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
			case 1:
				return "HUD_LBD_TDM";
			case 5:
				return "HUD_LBD_GRCE";
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
			case 7:
				return "HUD_LBD_BRCE";
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
			case 3:
				return "HUD_LBD_HRD";
			case 22:
				return "HUD_LBD_SHOO";
		}
	}
	return bParam1;
}

char* func_460()
{
	if (UNK_0xB9110623D4211889())
	{
		return "HUD_LBD_FMF";
	}
	if (UNK_0x4CE7C0420678C221())
	{
		return "HUD_LBD_FMC";
	}
	if (UNK_0xB56AF77A4FB2CF82())
	{
		return "HUD_LBD_FMS";
	}
	if (UNK_0xBADE9A39B01F3DEC())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_461()
{
	Global_42351 = 1;
}

bool func_462(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = UNK_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return UNK_0x83D8570832F172A7(*iParam1);
}

void func_463(int iParam0, var uParam1, bool bParam2)
{
	UNK_0x0674E58A79778E99(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_370();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_18(&(uParam1->f_19)))
		{
			func_3(&(uParam1->f_19));
			UNK_0x0674E58A79778E99(&(Global_2537071.f_4592), 5);
		}
	}
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0xE17FDF9E3068281B(iParam0);
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_33, false))
	{
		UNK_0x0674E58A79778E99(&(uParam1->f_33), false);
	}
	UNK_0xD668DA5CA4A1D2C8(0f);
}

bool func_464()
{
	if (func_474())
	{
		return false;
	}
	if (func_339())
	{
		return false;
	}
	if (!func_472())
	{
		return false;
	}
	if (!func_326())
	{
		return false;
	}
	if (func_471(8, -1))
	{
		return false;
	}
	if (func_475() == 2)
	{
		return false;
	}
	if (Global_2537071.f_4543)
	{
		return false;
	}
	if (func_146())
	{
		return false;
	}
	else if (!func_253(UNK_0xD803B885F5E47A62(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_470(1) || func_468(1)) || Global_22211.f_124) || Global_22211)
	{
		return false;
	}
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (func_467() && Global_1695468 == 2)
	{
		return false;
	}
	if (func_693(UNK_0xD803B885F5E47A62()) && !func_467())
	{
		return false;
	}
	if (Global_1662006)
	{
		return false;
	}
	if (Global_1662011)
	{
		return false;
	}
	if (func_466(0))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, 4))
	{
		return false;
	}
	if (Global_1370230)
	{
		return false;
	}
	if ((Global_1688696.f_718.f_5 || Global_1691522.f_718.f_5) || Global_1687724.f_718.f_5)
	{
		return false;
	}
	if ((Global_1696433.f_724.f_5 || Global_1696433.f_744.f_724.f_5) || Global_1696433.f_1497.f_724.f_5)
	{
		return false;
	}
	if (func_465(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return false;
	}
	return true;
}

bool func_465(int iParam0)
{
	if (iParam0 == func_27())
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310.f_4, 6);
}

bool func_466(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_5124.f_45, bParam0);
}

bool func_467()
{
	return (UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_30, 12) && UNK_0xEAE0D21A50E6C7F4(Global_1695469, false));
}

bool func_468(bool bParam0)
{
	if (UNK_0xD6C3CB7DCE462DB4())
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (func_469(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0x06F8112AA79C53D9(0, 25) || UNK_0x06F8112AA79C53D9(0, 68))
				{
					return false;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return false;
	}
	if (UNK_0x06F8112AA79C53D9(0, 19) || (!bParam0 && UNK_0x7FEE810EE9E768EB(0, 19)))
	{
		return true;
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (((UNK_0x06F8112AA79C53D9(0, 166) || UNK_0x06F8112AA79C53D9(0, 167)) || UNK_0x06F8112AA79C53D9(0, 168)) || UNK_0x06F8112AA79C53D9(0, 169))
		{
			return true;
		}
		if (!bParam0)
		{
			if (((UNK_0x7FEE810EE9E768EB(0, 166) || UNK_0x7FEE810EE9E768EB(0, 167)) || UNK_0x7FEE810EE9E768EB(0, 168)) || UNK_0x7FEE810EE9E768EB(0, 169))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_469(bool bParam0)
{
	int iVar0;

	if (UNK_0x18AF0C72ABD5543B())
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			UNK_0xCAE036C45E7FC720(bParam0, &iVar0, 1);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_470(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_471(bool bParam0, int iParam1)
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

bool func_472()
{
	if (func_473())
	{
		return true;
	}
	if (UNK_0x757EF87A33649210())
	{
		return false;
	}
	if (UNK_0xD0BB2359EC70FC37() || UNK_0x7BCE0E6DD4A1F749())
	{
		return false;
	}
	if (UNK_0x06980BB66EBA4D95())
	{
		return false;
	}
	return true;
}

bool func_473()
{
	return Global_1312440;
}

bool func_474()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_475()
{
	return Global_1377170.f_68;
}

bool func_476()
{
	if (Global_1574186 > 16)
	{
		return true;
	}
	return false;
}

float func_477()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - UNK_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_478(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_479()
{
	if (func_482())
	{
		return true;
	}
	if (func_259(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (func_450())
	{
		return true;
	}
	if (func_338(UNK_0xD803B885F5E47A62()))
	{
		switch (func_260(UNK_0xD803B885F5E47A62()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return true;
			case 140:
				if (!func_480(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
				break;
			case 129:
				if (!func_480(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
				break;
			case 174:
				if (!func_480(UNK_0xD803B885F5E47A62()))
				{
					return true;
				}
				break;
			case 175:
				return true;
		}
	}
	return false;
}

bool func_480(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_1, 4);
}

bool func_481(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_338(UNK_0xD803B885F5E47A62()) && !func_106(UNK_0xD803B885F5E47A62())) && !func_385(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
	}
	if (iParam0 == 27)
	{
		if (func_31(UNK_0xD803B885F5E47A62(), 0) && func_106(UNK_0xD803B885F5E47A62()))
		{
			return true;
		}
		if (func_331(UNK_0xD803B885F5E47A62()) == 3)
		{
			return true;
		}
	}
	return false;
}

bool func_482()
{
	if (func_483(UNK_0xD803B885F5E47A62()))
	{
		return Global_1319101;
	}
	return false;
}

bool func_483(bool bParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
		if (func_36(bParam0, 0))
		{
			return UNK_0xB9BE6EF14AC6F8DE(bParam0);
		}
	}
	return false;
}

void func_484()
{
	if (!func_18(&uLocal_542))
	{
		if (func_485(UNK_0x57270EE11514DC67()))
		{
			func_11(&uLocal_542, 0, 1);
		}
	}
}

bool func_485(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(Local_378[bParam0 /*5*/].f_4, 5))
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_378[bParam0 /*5*/].f_4, 4))
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_378[bParam0 /*5*/].f_4, 6))
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Local_378[bParam0 /*5*/].f_4, 7))
	{
		return true;
	}
	return false;
}

void func_486()
{
	if (func_303(1, 1))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 8))
		{
			UNK_0x5D96D8530B3D0904(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 8);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 8))
	{
		UNK_0x0674E58A79778E99(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 8);
	}
	if (func_303(0, 1))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 9))
		{
			UNK_0x5D96D8530B3D0904(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 9);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 9))
	{
		UNK_0x0674E58A79778E99(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 9);
	}
	if (func_303(1, 0))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 10))
		{
			UNK_0x5D96D8530B3D0904(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 10);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 10))
	{
		UNK_0x0674E58A79778E99(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 10);
	}
	if (func_303(0, 0))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 11))
		{
			UNK_0x5D96D8530B3D0904(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 11);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 11))
	{
		UNK_0x0674E58A79778E99(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 11);
	}
}

void func_487()
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < 1)
	{
		func_494(bVar0);
		func_488(bVar0);
		switch (func_15(bVar0))
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		bVar0++;
	}
}

void func_488(bool bParam0)
{
	if (func_303(0, 0) || bLocal_3181 == -1)
	{
		func_84(bParam0);
		func_86(bParam0);
		func_81(bParam0, -1);
		return;
	}
	if (func_7(bParam0) == -1)
	{
		if (func_261(UNK_0x57270EE11514DC67(), bParam0))
		{
			func_86(bParam0);
		}
		else
		{
			func_490(bParam0);
		}
	}
	else
	{
		func_86(bParam0);
	}
	if (bLocal_3182 != func_82(bParam0, 1))
	{
		switch (iLocal_3183)
		{
			case 0:
				func_81(bParam0, -1);
				iLocal_3183++;
				break;
			case 1:
				func_489(bParam0);
				bLocal_3182 = func_82(bParam0, 1);
				iLocal_3183 = 0;
				break;
		}
	}
}

void func_489(bool bParam0)
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_540, func_513(bParam0)))
	{
		UNK_0x4A847DA194A5532B(func_83(bParam0, 0), 1, func_82(bParam0, 1));
		if (func_513(bParam0) == 4)
		{
			UNK_0x4A847DA194A5532B(func_83(bParam0, 1), 1, func_82(bParam0, 1));
		}
		UNK_0x5D96D8530B3D0904(&bLocal_540, func_513(bParam0));
	}
}

void func_490(bool bParam0)
{
	if (!UNK_0xE4EDC4B0E92C078B(func_87(bParam0)))
	{
		func_493(bParam0, UNK_0x6CC513A908911CF0(func_359(bParam0)));
		UNK_0x2A065371C9D96655(func_87(bParam0), 12);
		if (UNK_0xEF07223F00EBE9C9("KOTC_AREANAME"))
		{
			UNK_0xDC5B2F9D0CCE3A10(func_87(bParam0), "KOTC_AREANAME");
		}
		UNK_0xBC8E0A7390523199(func_87(bParam0), 438);
		func_491(&(Local_1225[bParam0 /*68*/].f_27), func_82(bParam0, 1));
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 13))
		{
			UNK_0xF412DD40DE84CE72(Local_1225[bParam0 /*68*/].f_27, 1);
			UNK_0x0EC848EFF66DF45A(Local_1225[bParam0 /*68*/].f_27, 7000);
			UNK_0x5D96D8530B3D0904(&bLocal_539, 13);
		}
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 12))
		{
			UNK_0x4A51D2E4732BD556();
			UNK_0x5D96D8530B3D0904(&bLocal_539, 12);
		}
		UNK_0xF2D30B8ACAF12A39(func_87(bParam0), true);
		UNK_0xA6B0C9C2D8FC9744(func_87(bParam0), 1);
	}
	else
	{
		func_491(&(Local_1225[bParam0 /*68*/].f_27), func_82(bParam0, 0));
		if (UNK_0xE4EDC4B0E92C078B(func_87(bParam0)))
		{
			if (UNK_0xEF07223F00EBE9C9("KOTC_AREANAME"))
			{
				UNK_0xDC5B2F9D0CCE3A10(func_87(bParam0), "KOTC_AREANAME");
			}
		}
	}
}

void func_491(var uParam0, bool bParam1)
{
	bool bVar0;

	if (UNK_0xE4EDC4B0E92C078B(*uParam0))
	{
		bVar0 = func_492(bParam1);
		UNK_0x61755AC17D8F538E(*uParam0, bVar0);
	}
}

int func_492(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (bParam0)
	{
		case 1:
			return 4;
		case 0:
			return 4;
		case 6:
			return 59;
		case 18:
			return 2;
		case 13:
			return 5;
		case 116:
			return 38;
		case 28:
			return 6;
		case 29:
			return 7;
		case 30:
			return 8;
		case 31:
			return 9;
		case 32:
			return 10;
		case 33:
			return 11;
		case 34:
			return 12;
		case 35:
			return 13;
		case 36:
			return 14;
		case 37:
			return 15;
		case 38:
			return 16;
		case 39:
			return 17;
		case 40:
			return 18;
		case 41:
			return 19;
		case 42:
			return 20;
		case 43:
			return 21;
		case 44:
			return 22;
		case 45:
			return 23;
		case 46:
			return 24;
		case 47:
			return 25;
		case 48:
			return 26;
		case 49:
			return 27;
		case 50:
			return 28;
		case 51:
			return 29;
		case 52:
			return 30;
		case 53:
			return 31;
		case 54:
			return 32;
		case 55:
			return 33;
		case 56:
			return 34;
		case 57:
			return 35;
		case 58:
			return 36;
		case 59:
			return 37;
		case 9:
			return 57;
		case 10:
			return 53;
		case 118:
			return 57;
		case 14:
			return 56;
		case 3:
			return 55;
		case 21:
			return 50;
		case 15:
			return 51;
		case 20:
			return 52;
		case 11:
			return 54;
		case 23:
			return 58;
		case 12:
			return 60;
		case 24:
			return 61;
		case 4:
			return 62;
		default:
			break;
	}
	UNK_0xA402F6C87C08815C(bParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_493(bool bParam0, int iParam1)
{
	Local_1225[bParam0 /*68*/].f_27 = iParam1;
}

void func_494(bool bParam0)
{
	int iVar0;
	vector3 vVar1[3];
	vector3 vVar11[3];
	var uVar21[3];
	vector3 vVar25[3];
	var uVar35[3];
	bool bVar39;
	float fVar40;
	float fVar41;

	fVar40 = 10f;
	fVar41 = 25f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_513(bParam0) == 7)
		{
			fVar40 = 5f;
			fVar41 = 9f;
		}
		vVar1[iVar0 /*3*/] = { func_504(bParam0, iVar0) };
		vVar11[iVar0 /*3*/] = { func_503(bParam0, iVar0) };
		uVar21[iVar0] = func_502(bParam0, iVar0);
		func_501(bParam0, iVar0, &(vVar25[iVar0 /*3*/]), &(uVar35[iVar0]));
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_3174, UNK_0x57270EE11514DC67()))
		{
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, Local_544[UNK_0x57270EE11514DC67() /*18*/].f_1))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, Local_544[UNK_0x57270EE11514DC67() /*18*/].f_1))
				{
					if (!func_303(1, 1))
					{
						if (bLocal_3181 == UNK_0x57270EE11514DC67())
						{
							if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
							{
								if ((!func_500(vVar1[iVar0 /*3*/]) && !func_500(vVar11[iVar0 /*3*/])) && uVar21[iVar0] > 0f)
								{
									if (UNK_0x3D1053F9EB43B7AD(vLocal_1121[UNK_0xD803B885F5E47A62() /*3*/].f_2, vVar1[iVar0 /*3*/], vVar11[iVar0 /*3*/], uVar21[iVar0], 0, true, 0))
									{
										bVar39 = true;
									}
								}
								if (func_513(bParam0) == 7)
								{
									if (func_499(bParam0) < 0f)
									{
										if (func_499(bParam0) <= fVar40 && func_499(bParam0) >= (fVar40 * -1f))
										{
											if (func_498(bParam0) <= fVar41)
											{
												bVar39 = true;
											}
										}
									}
								}
								else if (!func_500(vVar25[iVar0 /*3*/]))
								{
									if (func_497(bParam0, iVar0) < 0f)
									{
										if (func_497(bParam0, iVar0) >= (uVar35[iVar0] * -1f))
										{
											if (func_496(bParam0, iVar0) <= uVar35[iVar0])
											{
												bVar39 = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	func_495(bParam0, bVar39);
}

void func_495(bool bParam0, bool bParam1)
{
	Local_378[UNK_0x57270EE11514DC67() /*5*/].f_1[bParam0] = bParam1;
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_3), bParam0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_3), bParam0);
	}
}

float func_496(bool bParam0, int iParam1)
{
	return Local_1225[bParam0 /*68*/].f_41[iParam1];
}

float func_497(bool bParam0, int iParam1)
{
	return Local_1225[bParam0 /*68*/].f_45[iParam1];
}

float func_498(bool bParam0)
{
	return Local_1225[bParam0 /*68*/].f_38;
}

float func_499(bool bParam0)
{
	return Local_1225[bParam0 /*68*/].f_39;
}

bool func_500(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_501(bool bParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (func_513(bParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 4:
					*uParam2 = { 2515.966f, 3777.477f, 51.767f };
					*fParam3 = 5.3f;
					break;
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		case 1:
			switch (func_513(bParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 4:
					*uParam2 = { 2515.315f, 3789.364f, 52.088f };
					*fParam3 = 3.35f;
					break;
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		case 2:
			switch (func_513(bParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 4:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
	}
}

var func_502(bool bParam0, int iParam1)
{
	return Local_1225[bParam0 /*68*/].f_20[iParam1];
}

Vector3 func_503(bool bParam0, int iParam1)
{
	return Local_1225[bParam0 /*68*/].f_10[iParam1 /*3*/];
}

Vector3 func_504(bool bParam0, int iParam1)
{
	return Local_1225[bParam0 /*68*/][iParam1 /*3*/];
}

void func_505(int iParam0)
{
	Local_378[UNK_0x57270EE11514DC67() /*5*/] = iParam0;
}

void func_506(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_507("kwUfKUus6EuQyNSL8KpY-w");
					func_507("yMTOFLfO2UKwzKrmgPP7kg");
					func_507("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				case 2:
					func_507("tP5HSeCA0UiHnkRzakdO2Q");
					func_507("uEkrqoerQEmQ0uZRtp4rkw");
					func_507("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				case 3:
					func_507("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				case 6:
					func_507("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		case 139:
			switch (iParam1)
			{
				case 1:
					func_507("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				case 2:
					func_507("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		case 138:
			switch (iParam1)
			{
				case 2:
					func_507("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				case 3:
					func_507("uEkrqoerQEmQ0uZRtp4rkw");
					func_507("92t91kL3Wkqvl2Kc82cNSA");
					func_507("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				case 5:
					func_507("WfnWlxu780CwC7LLUrLljw");
					break;
				case 6:
					func_507("lowxnyELLUCxqy_Q1uslIg");
					break;
				case 7:
					func_507("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		case 141:
			switch (iParam1)
			{
				case 0:
					func_507("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 1:
					func_507("QmlvLMLCwkOvoZlkAstYxw");
					break;
				case 4:
					func_507("fOfm7nzMLkav0ldcSCNAzA");
					func_507("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				case 5:
					func_507("3AAj-muvN0iHI5IMyGlboA");
					break;
				case 0:
					func_507("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				case 9:
					func_507("Ma78E44OMkGfYPmCPZXUNA");
					func_507("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				case 19:
					func_507("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				case 10:
					func_507("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_507("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 2:
							func_507("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				case 2:
					func_507("QmlvLMLCwkOvoZlkAstYxw");
					break;
				case 3:
					switch (iParam2)
					{
						case 1:
							func_507("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						case 2:
							func_507("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				case 4:
					func_507("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_507("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_507("kXry-nXRbEC6ktiopjDDcg");
							break;
						case 1:
							func_507("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						case 2:
							func_507("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						case 3:
							func_507("fOfm7nzMLkav0ldcSCNAzA");
							func_507("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							func_507("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						case 1:
							func_507("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							func_507("QmlvLMLCwkOvoZlkAstYxw");
							break;
						case 2:
							func_507("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 3:
							func_507("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 1:
							func_507("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 1:
							func_507("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						case 2:
							func_507("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						case 3:
							func_507("fOfm7nzMLkav0ldcSCNAzA");
							func_507("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							func_507("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						case 1:
							func_507("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							func_507("QmlvLMLCwkOvoZlkAstYxw");
							break;
						case 2:
							func_507("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 3:
							func_507("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_507("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								case 2:
									func_507("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									func_507("kXry-nXRbEC6ktiopjDDcg");
									break;
								case 2:
									func_507("QmlvLMLCwkOvoZlkAstYxw");
									break;
								case 3:
									func_507("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								case 4:
									func_507("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 0:
									func_507("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								case 2:
									func_507("aGBjo2rKi0yMDLl3a2ATGA");
									func_507("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								case 3:
									func_507("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						case 3:
							switch (iParam2)
							{
								case 1:
									func_507("VmS_SI5wSE2LuL9qItQqbw");
									break;
								case 4:
									func_507("f2lnL6wZPkGWUowu0yLm1Q");
									func_507("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						case 4:
							switch (iParam2)
							{
								case 1:
									func_507("Ma78E44OMkGfYPmCPZXUNA");
									break;
								case 2:
									func_507("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						case 5:
							switch (iParam2)
							{
								case 0:
									func_507("W-OJzHlM-0ym9PsIASYZtw");
									func_507("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								case 1:
									func_507("3AAj-muvN0iHI5IMyGlboA");
									break;
								case 3:
									func_507("TjGz31AMYE6bGCjAIitu6w");
									func_507("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						case 6:
							switch (iParam2)
							{
								case 2:
									func_507("QmlvLMLCwkOvoZlkAstYxw");
									func_507("BktATxH9R0Wp2x0kWSbqjw");
									break;
								case 3:
									func_507("BktATxH9R0Wp2x0kWSbqjw");
									func_507("kXry-nXRbEC6ktiopjDDcg");
									break;
								case 4:
									func_507("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_507("kXry-nXRbEC6ktiopjDDcg");
									break;
								case 3:
									func_507("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									func_507("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								case 1:
									func_507("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								case 2:
									func_507("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								case 3:
									func_507("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 3:
									func_507("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_507("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						case 4:
							switch (iParam2)
							{
								case 4:
									func_507("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_507(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xEA6BC48857E0AC4C(bParam0))
	{
		return;
	}
	iVar0 = UNK_0x12AB0310C2281427(bParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_508(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!UNK_0xEAE0D21A50E6C7F4(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					UNK_0x5D96D8530B3D0904(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_508(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;

	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_510(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_509(uParam0) };
			return Var0.f_1;
		case 62:
			return iVar13;
		default:
			break;
	}
	return iVar13;
}

struct<13> func_509(var uParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_510(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar13 /*13*/];
		case 62:
			return Global_917806.f_9405[iVar13 /*13*/];
		default:
			break;
	}
	return Var0;
}

int func_510(var uParam0)
{
	int iVar0;

	if (UNK_0xEA6BC48857E0AC4C(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_512(uParam0->f_1))
	{
		if (func_511(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (UNK_0xEAE0D21A50E6C7F4(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (UNK_0x7F8A39872A07D2CE(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (UNK_0x7F8A39872A07D2CE(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		case 62:
			if (UNK_0xEAE0D21A50E6C7F4(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (UNK_0x7F8A39872A07D2CE(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (UNK_0x7F8A39872A07D2CE(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		case 40:
			return uParam0->f_1;
		default:
			break;
	}
	if (uParam0->f_2 == UNK_0xD803B885F5E47A62())
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (UNK_0x7F8A39872A07D2CE(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (UNK_0x7F8A39872A07D2CE(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

bool func_511(var uParam0)
{
	if (Global_2398103)
	{
		if (UNK_0x7F8A39872A07D2CE(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return true;
		}
	}
	return false;
}

bool func_512(int iParam0)
{
	return iParam0 == 9999;
}

int func_513(bool bParam0)
{
	return Local_80.f_6[bParam0 /*204*/].f_69;
}

int func_514()
{
	return Local_80;
}

int func_515(int iParam0)
{
	return Local_378[iParam0 /*5*/];
}

void func_516()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	bool bVar5;

	bVar0 = -1;
	bVar1 = -1;
	if (!UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, false))
	{
		bVar2 = false;
		while (bVar2 < 1)
		{
			if (func_513(bVar2) > -1)
			{
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_534(bVar2, iVar3, func_535(bVar2, iVar3));
					func_532(bVar2, iVar3, func_533(bVar2, iVar3));
					func_530(bVar2, func_531(bVar2));
					func_528(bVar2, iVar3, func_529(bVar2, iVar3));
					UNK_0x5D96D8530B3D0904(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), false);
					iVar3++;
				}
			}
			bVar2++;
		}
	}
	bVar2 = false;
	while (bVar2 < 1)
	{
		if (UNK_0xBFF81ED3B99522C7())
		{
			if (func_527(bVar2) <= 1)
			{
				func_526(bVar2, 0);
			}
			else
			{
				func_526(bVar2, 1);
			}
		}
		if (func_8(bVar2) == -1)
		{
			if (!func_155(bVar2))
			{
				UNK_0x5D96D8530B3D0904(&bLocal_539, false);
			}
		}
		else if (!func_14(bVar2))
		{
			bVar5 = true;
			if (UNK_0xBFF81ED3B99522C7())
			{
				func_526(bVar2, 0);
			}
		}
		else
		{
			bVar0 = func_8(bVar2);
			bVar1 = func_7(bVar2);
			if (!func_155(bVar2))
			{
				if (UNK_0xBFF81ED3B99522C7())
				{
					if (bVar0 > -1)
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3174, bVar0))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_539, false);
						}
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3173, bVar0))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_539, false);
						}
						if (UNK_0xEAE0D21A50E6C7F4(bLocal_3175, bVar0))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_539, false);
						}
						if (!func_261(bVar0, bVar2))
						{
							UNK_0x5D96D8530B3D0904(&bLocal_539, false);
						}
					}
				}
			}
			else if (bVar0 > -1)
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3174, bVar0))
				{
					bVar5 = true;
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3173, bVar1))
				{
					bVar5 = true;
				}
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_3175, bVar1))
				{
					bVar5 = true;
				}
				if (!func_261(bVar0, bVar2))
				{
					bVar5 = true;
				}
			}
		}
		if (bVar5)
		{
			if (UNK_0xBFF81ED3B99522C7())
			{
				func_525(bVar2, -1);
				func_524(bVar2, -1);
			}
			func_523(bVar2, uVar4);
		}
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, false))
		{
			if (func_522(bVar2) > -1 && func_521(bVar2) > -1)
			{
				if (UNK_0xBFF81ED3B99522C7())
				{
					func_525(bVar2, func_522(bVar2));
					func_524(bVar2, func_521(bVar2));
					func_523(bVar2, func_520(bVar2));
					if (!UNK_0xEAE0D21A50E6C7F4(Local_80.f_6[bVar2 /*204*/].f_203, func_522(bVar2)))
					{
						UNK_0x5D96D8530B3D0904(&(Local_80.f_6[bVar2 /*204*/].f_203), func_522(bVar2));
					}
				}
			}
		}
		if (UNK_0xBFF81ED3B99522C7())
		{
			func_517(bVar2);
		}
		bVar2++;
	}
}

void func_517(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	var uVar16;
	var uVar17;
	var uVar18;

	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_80.f_6[bParam0 /*204*/].f_74[iVar1 /*4*/].f_3 > Local_80.f_6[bParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3)
				{
					uVar16 = Local_80.f_6[bParam0 /*204*/].f_74[iVar1 /*4*/].f_3;
					uVar17 = Local_80.f_6[bParam0 /*204*/].f_74[iVar1 /*4*/];
					uVar18 = Local_80.f_6[bParam0 /*204*/].f_74[iVar1 /*4*/].f_1;
					Local_80.f_6[bParam0 /*204*/].f_74[iVar1 /*4*/].f_3 = Local_80.f_6[bParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3;
					Local_80.f_6[bParam0 /*204*/].f_74[iVar1 /*4*/] = Local_80.f_6[bParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
					Local_80.f_6[bParam0 /*204*/].f_74[iVar1 /*4*/].f_1 = Local_80.f_6[bParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1;
					Local_80.f_6[bParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 = uVar16;
					Local_80.f_6[bParam0 /*204*/].f_74[(iVar1 - 1) /*4*/] = uVar17;
					Local_80.f_6[bParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1 = uVar18;
				}
				if ((iVar1 - 1) == 0 && Local_80.f_6[bParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 > 0f)
				{
					if (!Local_80.f_283 == Local_80.f_6[bParam0 /*204*/].f_74[(iVar1 - 1) /*4*/])
					{
						Local_80.f_283 = Local_80.f_6[bParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
						Var2.f_2 = 296878074;
						Var2.f_10 = UNK_0x117658E336116132(Local_80.f_6[bParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1);
						func_518(Var2, func_519(1));
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_518(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = UNK_0xD803B885F5E47A62();
	if (!bParam14 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &Param0, 14, bParam14);
	}
}

bool func_519(bool bParam0)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	while (bVar1 < UNK_0x54EABC0DD106045B())
	{
		if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(bVar1)))
		{
			bVar2 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(bVar1));
			if (func_756(bVar2, 0, 0))
			{
				if (bVar2 != UNK_0xD803B885F5E47A62() || bParam0)
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar2);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

var func_520(bool bParam0)
{
	return Local_1225[bParam0 /*68*/].f_31;
}

int func_521(bool bParam0)
{
	return Local_1225[bParam0 /*68*/].f_35;
}

int func_522(bool bParam0)
{
	return Local_1225[bParam0 /*68*/].f_34;
}

void func_523(bool bParam0, var uParam1)
{
	Local_1225[bParam0 /*68*/].f_30 = uParam1;
}

void func_524(bool bParam0, int iParam1)
{
	Local_80.f_6[bParam0 /*204*/].f_2 = iParam1;
}

void func_525(bool bParam0, int iParam1)
{
	if (iParam1 != func_8(bParam0))
	{
	}
	Local_80.f_6[bParam0 /*204*/].f_1 = iParam1;
}

void func_526(bool bParam0, int iParam1)
{
	Local_80.f_6[bParam0 /*204*/].f_72 = iParam1;
}

int func_527(bool bParam0)
{
	return Local_1225[bParam0 /*68*/].f_37;
}

void func_528(bool bParam0, int iParam1, float fParam2)
{
	Local_1225[bParam0 /*68*/].f_20[iParam1] = fParam2;
}

float func_529(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_513(bParam0))
			{
				case 0:
					return 23f;
				case 2:
					return 6f;
				case 4:
					return 7f;
				case 1:
					return 8.25f;
				case 3:
					return 16.5f;
				case 5:
					return 9.65f;
				case 6:
					return 9.15f;
				case 7:
					return 0f;
				default:
					break;
			}
			break;
		case 1:
			switch (func_513(bParam0))
			{
				case 0:
					return 23f;
				case 2:
					return 0f;
				case 4:
					return 0f;
				case 1:
					return 3.5f;
				case 3:
					return 0f;
				case 5:
					return 0f;
				case 6:
					return 0f;
				case 7:
					return 0f;
				default:
					break;
			}
			break;
		case 2:
			switch (func_513(bParam0))
			{
				case 0:
					return 23f;
				case 2:
					return 0f;
				case 4:
					return 0f;
				case 1:
					return 0f;
				case 3:
					return 0f;
				case 5:
					return 0f;
				case 6:
					return 0f;
				case 7:
					return 0f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_530(bool bParam0, vector3 vParam1)
{
	Local_1225[bParam0 /*68*/].f_24 = { vParam1 };
}

Vector3 func_531(bool bParam0)
{
	switch (func_513(bParam0))
	{
		case 0:
			return -1195.435f, -1788.217f, 14.6269f;
		case 2:
			return -379.8141f, 6087.215f, 43.2552f;
		case 4:
			return 2516.59f, 3784.677f, 52.0053f;
		case 1:
			return 1667.193f, -27.4697f, 183.774f;
		case 3:
			return -746.2f, 5594.6f, 41.7f;
		case 5:
			return -389.3f, 1135.7f, 322.6f;
		case 6:
			return 473.6f, -1339.1f, 35.2f;
		case 7:
			return -1459.651f, 179.275f, 53f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_532(bool bParam0, int iParam1, vector3 vParam2)
{
	Local_1225[bParam0 /*68*/].f_10[iParam1 /*3*/] = { vParam2 };
}

Vector3 func_533(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_513(bParam0))
			{
				case 0:
					return -1178.575f, -1795.219f, 22.42828f;
				case 2:
					return -377.4193f, 6083.058f, 46.63536f;
				case 4:
					return 2518.118f, 3772.498f, 58.13546f;
				case 1:
					return 1673.975f, -24.62664f, 199.2563f;
				case 3:
					return -756.4877f, 5594.868f, 44.17008f;
				case 5:
					return -391.5381f, 1125.141f, 325.0288f;
				case 6:
					return 470.2388f, -1335.768f, 38.44154f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 1:
			switch (func_513(bParam0))
			{
				case 0:
					return -1180.375f, -1777.348f, 22.48125f;
				case 2:
					return 0f, 0f, 0f;
				case 4:
					return 0f, 0f, 0f;
				case 1:
					return 1676.203f, -25.81484f, 200.1802f;
				case 3:
					return 0f, 0f, 0f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 0f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 2:
			switch (func_513(bParam0))
			{
				case 0:
					return -1194.205f, -1806.82f, 22.48f;
				case 2:
					return 0f, 0f, 0f;
				case 4:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 0f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_534(bool bParam0, int iParam1, vector3 vParam2)
{
	Local_1225[bParam0 /*68*/][iParam1 /*3*/] = { vParam2 };
}

Vector3 func_535(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_513(bParam0))
			{
				case 0:
					return -1212.381f, -1780.108f, 7.481341f;
				case 2:
					return -381.2328f, 6089.681f, 34.37778f;
				case 4:
					return 2516.82f, 3795.646f, 49.82948f;
				case 1:
					return 1660.532f, -27.94882f, 181.587f;
				case 3:
					return -736.0183f, 5595.02f, 40.53122f;
				case 5:
					return -386.508f, 1144.122f, 321.5792f;
				case 6:
					return 479.0627f, -1343.186f, 34.14154f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 1:
			switch (func_513(bParam0))
			{
				case 0:
					return -1209.83f, -1798.181f, 7.481341f;
				case 2:
					return 0f, 0f, 0f;
				case 4:
					return 0f, 0f, 0f;
				case 1:
					return 1669.613f, -27.26755f, 182.2874f;
				case 3:
					return 0f, 0f, 0f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 0f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 2:
			switch (func_513(bParam0))
			{
				case 0:
					return -1197.333f, -1769.584f, 7.474364f;
				case 2:
					return 0f, 0f, 0f;
				case 4:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 3:
					return 0f, 0f, 0f;
				case 5:
					return 0f, 0f, 0f;
				case 6:
					return 0f, 0f, 0f;
				case 7:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_536()
{
	func_538();
	iLocal_3172++;
	func_537();
}

void func_537()
{
	if (iLocal_3172 >= (UNK_0x54EABC0DD106045B() - 1))
	{
		iLocal_3172 = 0;
	}
}

void func_538()
{
	if (iLocal_3172 == 0)
	{
	}
}

void func_539()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<16> Var4;
	vector3 vVar20;
	float fVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;

	bVar0 = -1;
	bVar1 = -1;
	bVar1 = false;
	while (bVar1 < 32)
	{
		vLocal_1121[bVar1 /*3*/] = func_27();
		vLocal_1121[bVar1 /*3*/].f_1 = -1;
		vLocal_1121[bVar1 /*3*/].f_2 = uVar3;
		UNK_0x0674E58A79778E99(&bLocal_3173, bVar1);
		UNK_0x0674E58A79778E99(&bLocal_3175, bVar1);
		bVar1++;
	}
	bVar0 = false;
	while (bVar0 < 32)
	{
		Local_544[bVar0 /*18*/] = func_570();
		Local_544[bVar0 /*18*/].f_1 = -1;
		UNK_0x0674E58A79778E99(&bLocal_3174, bVar0);
		if (UNK_0xBFF81ED3B99522C7())
		{
			bVar25 = false;
			while (bVar25 < 1)
			{
				UNK_0x0674E58A79778E99(&(Local_80.f_6[bVar25 /*204*/].f_73), bVar0);
				bVar25++;
			}
		}
		Local_544[bVar0 /*18*/].f_2 = { Var4 };
		bVar0++;
	}
	bVar25 = false;
	while (bVar25 < 1)
	{
		func_569(bVar25, 0);
		func_568(bVar25, 0);
		func_567(bVar25, 0f);
		func_566(bVar25, 0f);
		func_565(bVar25, 0f);
		iVar28 = 0;
		while (iVar28 < 3)
		{
			func_564(bVar25, iVar28, 0f);
			func_563(bVar25, iVar28, 0f);
			func_562(bVar25, iVar28, 0f);
			iVar28++;
		}
		bVar25++;
	}
	bVar30 = true;
	bVar31 = true;
	bVar0 = false;
	while (bVar0 < UNK_0x54EABC0DD106045B())
	{
		if (UNK_0x81A93C8315C28F58(bVar0))
		{
			Local_544[bVar0 /*18*/] = bVar0;
			UNK_0x5D96D8530B3D0904(&bLocal_3174, bVar0);
			bVar2 = UNK_0x4B2BFE4A3BC248ED(Local_544[bVar0 /*18*/]);
			bVar1 = bVar2;
			if (func_756(bVar2, 0, 1))
			{
				vLocal_1121[bVar1 /*3*/] = bVar2;
				Local_544[bVar0 /*18*/].f_1 = bVar1;
				vLocal_1121[bVar1 /*3*/].f_1 = bVar0;
				vLocal_1121[bVar1 /*3*/].f_2 = UNK_0x9539D44F3E4492F6(bVar2);
				StringCopy(&(Local_544[bVar0 /*18*/].f_2), UNK_0x6E524813889AECF8(bVar2), 64);
				iVar27++;
				if (func_485(bVar0))
				{
					iVar29++;
				}
				UNK_0x5D96D8530B3D0904(&bLocal_3173, bVar1);
				if ((UNK_0x437347B10A200C4B(vLocal_1121[bVar1 /*3*/].f_2, 0) || UNK_0xEB6A8945D1AC98A1(vLocal_1121[bVar1 /*3*/].f_2)) || !UNK_0xE1DBBD6CE209517C(vLocal_1121[bVar1 /*3*/]))
				{
					UNK_0x5D96D8530B3D0904(&bLocal_3175, bVar1);
				}
				if (UNK_0xBFF81ED3B99522C7())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_378[bVar0 /*5*/].f_4, false))
					{
						bVar30 = false;
					}
					if (!UNK_0xEAE0D21A50E6C7F4(Local_378[bVar0 /*5*/].f_4, true))
					{
						bVar31 = false;
					}
				}
				func_560(bVar1, 2);
				if (func_259(bVar1))
				{
					if (UNK_0xBFF81ED3B99522C7())
					{
						func_558(bVar0);
					}
				}
				if (func_136(bVar1))
				{
					if (UNK_0xBFF81ED3B99522C7())
					{
						func_558(bVar0);
					}
				}
				if (func_263(bVar1))
				{
					if (UNK_0xBFF81ED3B99522C7())
					{
						func_558(bVar0);
					}
				}
			}
		}
		else
		{
			UNK_0x0674E58A79778E99(&bLocal_3174, bVar0);
			if (func_667() <= 1)
			{
				if (UNK_0xBFF81ED3B99522C7())
				{
					func_558(bVar0);
				}
			}
		}
		bVar25 = false;
		while (bVar25 < 1)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Local_80.f_213, true))
			{
				if (UNK_0xBFF81ED3B99522C7())
				{
					func_557(bVar0, bVar25);
				}
			}
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_3174, bVar0))
			{
				if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, bVar1))
				{
					if (!UNK_0xEAE0D21A50E6C7F4(Local_80.f_213, true))
					{
						if (UNK_0xBFF81ED3B99522C7())
						{
							func_556(bVar0, bVar1, bVar25, func_148(bVar25, bVar0));
						}
					}
					if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, bVar1))
					{
						if (bVar0 == UNK_0x57270EE11514DC67())
						{
							fVar36 = func_555(vLocal_1121[bVar1 /*3*/].f_2, func_359(bVar25), 0);
							fVar37 = func_555(vLocal_1121[bVar1 /*3*/].f_2, func_359(bVar25), 1);
							vVar38 = { UNK_0x68F4C0EC296D3901(vLocal_1121[bVar1 /*3*/].f_2, true) };
							fVar41 = (Local_1225[bVar25 /*68*/].f_24.f_2 - vVar38.z);
							func_567(bVar25, fVar36);
							func_566(bVar25, fVar41);
							func_565(bVar25, fVar37);
							iVar28 = 0;
							while (iVar28 < 3)
							{
								vVar20 = { 0f, 0f, 0f };
								fVar23 = 0f;
								func_501(bVar25, iVar28, &vVar20, &fVar23);
								if (!func_500(vVar20))
								{
									fVar42 = func_555(vLocal_1121[bVar1 /*3*/].f_2, vVar20, 0);
									fVar43 = func_555(vLocal_1121[bVar1 /*3*/].f_2, vVar20, 1);
									fVar44 = (vVar20.z - vVar38.z);
									func_564(bVar25, iVar28, fVar42);
									func_563(bVar25, iVar28, fVar44);
									func_562(bVar25, iVar28, fVar43);
								}
								iVar28++;
							}
						}
						if (func_261(bVar0, bVar25))
						{
							func_569(bVar25, 1);
							iVar26 = func_527(bVar25);
							iVar26++;
							func_568(bVar25, iVar26);
							if (func_8(bVar25) != bVar0 && func_7(bVar25) != bVar1)
							{
								if (func_522(bVar25) == -1)
								{
									func_621(bVar25, bVar0);
								}
								if (func_521(bVar25) == -1)
								{
									func_620(bVar25, bVar1);
								}
								func_619(bVar25, vLocal_1121[bVar1 /*3*/].f_2);
							}
							if (UNK_0xBFF81ED3B99522C7())
							{
								UNK_0x5D96D8530B3D0904(&(Local_80.f_6[bVar25 /*204*/].f_73), bVar0);
							}
						}
					}
					if (bVar0 == UNK_0x57270EE11514DC67())
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, bVar1))
						{
							if (func_236(bVar25) <= IntToFloat(Global_262145.f_11497))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(Local_378[bVar0 /*5*/].f_4, 12))
								{
									UNK_0x5D96D8530B3D0904(&(Local_378[bVar0 /*5*/].f_4), 12);
								}
							}
							else if (func_236(bVar25) >= IntToFloat(Global_262145.f_11498))
							{
								if (UNK_0xEAE0D21A50E6C7F4(Local_378[bVar0 /*5*/].f_4, 12))
								{
									UNK_0x0674E58A79778E99(&(Local_378[bVar0 /*5*/].f_4), 12);
								}
							}
							if (!func_262(1, 0))
							{
								if (func_236(bVar25) <= IntToFloat(Global_262145.f_11497))
								{
									if (!UNK_0xEAE0D21A50E6C7F4(Local_378[bVar0 /*5*/].f_4, 3))
									{
										UNK_0x5D96D8530B3D0904(&(Local_378[bVar0 /*5*/].f_4), 3);
									}
								}
								else if (func_236(bVar25) >= IntToFloat(Global_262145.f_11498))
								{
									if (UNK_0xEAE0D21A50E6C7F4(Local_378[bVar0 /*5*/].f_4, 3))
									{
										UNK_0x0674E58A79778E99(&(Local_378[bVar0 /*5*/].f_4), 3);
									}
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(Local_378[bVar0 /*5*/].f_4, 3))
							{
								UNK_0x0674E58A79778E99(&(Local_378[bVar0 /*5*/].f_4), 3);
							}
						}
					}
				}
				bVar24 = 6;
				if (UNK_0xD803B885F5E47A62() != vLocal_1121[bVar1 /*3*/])
				{
					if (func_208(UNK_0xD803B885F5E47A62(), vLocal_1121[bVar1 /*3*/]))
					{
						bVar24 = func_171(UNK_0xD803B885F5E47A62(), -2, 0, 0, 0);
					}
				}
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, bVar1))
				{
					if (func_303(0, 0))
					{
						func_554(bVar1);
					}
					else if (func_7(bVar25) != bVar1)
					{
						func_554(bVar1);
					}
					else if (func_667() != 1)
					{
						func_554(bVar1);
					}
					else
					{
						func_549(bVar1);
						if (bVar0 != UNK_0x57270EE11514DC67())
						{
							if (func_199(UNK_0x57270EE11514DC67()))
							{
								UNK_0xA402F6C87C08815C(bVar24, &bVar32, &bVar33, &bVar34, &bVar35);
								bVar35 = 100;
								UNK_0x922D0EFFF8F2403B(2, UNK_0x68F4C0EC296D3901(vLocal_1121[bVar1 /*3*/].f_2, true) + Vector(1.5f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, bVar32, bVar33, bVar34, bVar35, 1, 1, 2, false, false, false, false);
							}
						}
					}
				}
				if (func_756(vLocal_1121[bVar1 /*3*/], 1, 1))
				{
					if (func_547(vLocal_1121[bVar1 /*3*/]))
					{
						func_540(vLocal_1121[bVar1 /*3*/], func_492(bVar24), func_543(bVar0, bVar1, bVar25), 0);
					}
				}
			}
			bVar25++;
		}
		bVar0++;
	}
	if (UNK_0xBFF81ED3B99522C7())
	{
		if (bVar30)
		{
			UNK_0x5D96D8530B3D0904(&(Local_80.f_213), false);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Local_80.f_213), false);
		}
		if (bVar31)
		{
			UNK_0x5D96D8530B3D0904(&(Local_80.f_213), true);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Local_80.f_213), true);
		}
	}
	if (iVar29 > iLocal_541)
	{
		iLocal_541 = iVar29;
	}
	if (iVar27 > iLocal_3176)
	{
		iLocal_3176 = iVar27;
	}
	else
	{
		Local_80.f_216 = (iLocal_3176 - iVar27);
	}
}

void func_540(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_542(bParam0))
	{
		return;
	}
	if (func_541(&(Global_2416079.f_621[bParam0]), &(Global_2416079.f_984[bParam0]), &(Global_2416079.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_456[bParam0] = iParam1;
		}
	}
}

bool func_541(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		if (!UNK_0x1727A44C562FBED2(*uParam1) || *uParam1 == UNK_0x0D0A574C76D769AC())
		{
			*uParam1 = UNK_0x0D0A574C76D769AC();
			*uParam0 = UNK_0x0D0A574C76D769AC();
		}
	}
	if (!UNK_0x1727A44C562FBED2(*uParam0) || *uParam0 == UNK_0x0D0A574C76D769AC())
	{
		if (bParam3)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam2, bParam4))
			{
				*bParam6 = 1;
				UNK_0x5D96D8530B3D0904(bParam2, bParam4);
			}
			*uParam0 = UNK_0x0D0A574C76D769AC();
		}
		else
		{
			if (UNK_0xEAE0D21A50E6C7F4(*bParam2, bParam4))
			{
				*bParam6 = 1;
				UNK_0x0674E58A79778E99(bParam2, bParam4);
			}
			if (*uParam1 == UNK_0x0D0A574C76D769AC())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return true;
	}
	else if (UNK_0x1727A44C562FBED2(*uParam1) && !*uParam1 == UNK_0x0D0A574C76D769AC())
	{
	}
	return false;
}

bool func_542(bool bParam0)
{
	if (bParam0 == func_27())
	{
		return true;
	}
	if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) == func_223())
	{
		return true;
	}
	return false;
}

bool func_543(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_303(0, 0))
	{
		return false;
	}
	if (bParam0 == UNK_0x57270EE11514DC67())
	{
		return false;
	}
	if (func_544(bParam1))
	{
		return false;
	}
	if (bParam0 == func_8(bParam2))
	{
		return true;
	}
	if (UNK_0x57270EE11514DC67() != func_8(bParam2))
	{
		return false;
	}
	return true;
}

bool func_544(bool bParam0)
{
	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		return func_139();
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1377170.f_241.f_136[func_546(10) /*33*/][bParam0], func_545(10));
}

int func_545(int iParam0)
{
	return (iParam0 % 32);
}

int func_546(int iParam0)
{
	return (iParam0 / 32);
}

bool func_547(int iParam0)
{
	return func_548(&(Global_2416079.f_621[iParam0]));
}

int func_548(var uParam0)
{
	if (UNK_0x1727A44C562FBED2(*uParam0))
	{
		if (!*uParam0 == UNK_0x0D0A574C76D769AC())
		{
			return 0;
		}
	}
	return 1;
}

void func_549(bool bParam0)
{
	bool bVar0;

	bVar0 = 6;
	if (bParam0 > -1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, bParam0))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, bParam0))
			{
				if (func_208(UNK_0xD803B885F5E47A62(), vLocal_1121[bParam0 /*3*/]))
				{
					bVar0 = func_171(UNK_0xD803B885F5E47A62(), -2, 0, 0, 0);
				}
				func_552(vLocal_1121[bParam0 /*3*/], 439, 1, 0);
				if (func_547(vLocal_1121[bParam0 /*3*/]))
				{
					func_540(vLocal_1121[bParam0 /*3*/], func_492(bVar0), 1, 0);
				}
				func_550(vLocal_1121[bParam0 /*3*/], 1, 1, 0);
				UNK_0x5D96D8530B3D0904(&bLocal_3180, bParam0);
			}
		}
	}
}

void func_550(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	if (func_542(bParam0))
	{
		return;
	}
	if (func_541(&(Global_2416079.f_819[bParam0]), &(Global_2416079.f_1182[bParam0]), &(Global_2416079.f_367), bParam1, bParam0, bParam3, &uVar0))
	{
		func_551(bParam0, bParam2);
	}
}

void func_551(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_2416079.f_368), bParam0);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_2416079.f_368), bParam0);
	}
	if (UNK_0xE4EDC4B0E92C078B(Global_2416079[bParam0]))
	{
		if (bParam1)
		{
			UNK_0x6ABCCE651368DB93(Global_2416079[bParam0], false);
		}
		else
		{
			UNK_0x6ABCCE651368DB93(Global_2416079[bParam0], true);
		}
	}
}

void func_552(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	if (func_542(bParam0))
	{
		return;
	}
	if (func_541(&(Global_2416079.f_588[bParam0]), &(Global_2416079.f_951[bParam0]), &(Global_2416079.f_388), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_423[bParam0] = iParam1;
		}
		if (bVar0)
		{
			func_553();
		}
	}
}

void func_553()
{
	Global_2416079.f_1614 = 1;
}

void func_554(bool bParam0)
{
	bool bVar0;

	bVar0 = 6;
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_3180, bParam0))
	{
		if (bParam0 > -1)
		{
			if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, bParam0))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bLocal_3175, bParam0))
				{
					if (UNK_0xD803B885F5E47A62() != vLocal_1121[bParam0 /*3*/])
					{
						if (func_208(UNK_0xD803B885F5E47A62(), vLocal_1121[bParam0 /*3*/]))
						{
							bVar0 = func_171(UNK_0xD803B885F5E47A62(), -2, 0, 0, 0);
						}
					}
					func_552(vLocal_1121[bParam0 /*3*/], 439, 0, 0);
					if (func_547(vLocal_1121[bParam0 /*3*/]))
					{
						func_540(vLocal_1121[bParam0 /*3*/], func_492(bVar0), 0, 0);
					}
					func_550(vLocal_1121[bParam0 /*3*/], 0, 0, 0);
					UNK_0x0674E58A79778E99(&bLocal_3180, bParam0);
				}
			}
		}
	}
}

float func_555(bool bParam0, vector3 vParam1, int iParam4)
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

void func_556(bool bParam0, bool bParam1, bool bParam2, float fParam3)
{
	Local_80.f_6[bParam2 /*204*/].f_74[bParam0 /*4*/] = bParam0;
	Local_80.f_6[bParam2 /*204*/].f_74[bParam0 /*4*/].f_1 = bParam1;
	Local_80.f_6[bParam2 /*204*/].f_74[bParam0 /*4*/].f_2 = bParam1;
	Local_80.f_6[bParam2 /*204*/].f_74[bParam0 /*4*/].f_3 = fParam3;
}

void func_557(bool bParam0, int iParam1)
{
	Local_80.f_6[iParam1 /*204*/].f_74[bParam0 /*4*/] = -1;
	Local_80.f_6[iParam1 /*204*/].f_74[bParam0 /*4*/].f_1 = -1;
	Local_80.f_6[iParam1 /*204*/].f_74[bParam0 /*4*/].f_2 = func_27();
	Local_80.f_6[iParam1 /*204*/].f_74[bParam0 /*4*/].f_3 = -1f;
}

void func_558(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	while (bVar0 < 1)
	{
		if (func_6(bVar0, bParam0) > 0f || func_149(bVar0, bParam0) > 0f)
		{
			func_4(bVar0, bParam0, 0f);
			func_559(bVar0, bParam0, 0f);
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (Local_80.f_217[iVar1] > 0f)
			{
				if (Local_80.f_250[iVar1] == bParam0)
				{
					Local_80.f_217[iVar1] = 0f;
					Local_80.f_250[iVar1] = -1;
				}
			}
			iVar1++;
		}
		bVar0++;
	}
}

void func_559(bool bParam0, bool bParam1, float fParam2)
{
	Local_80.f_6[bParam0 /*204*/].f_36[bParam1] = fParam2;
}

void func_560(bool bParam0, int iParam1)
{
	bool bVar0;

	if (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, false))
	{
		return;
	}
	if (func_18(&(Global_1574650.f_18)))
	{
		return;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_2, bParam0))
	{
		if (Global_1574650 < iParam1 && UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, true))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), false);
			return;
		}
		if (Global_1574650 != 0)
		{
			UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), true);
		}
		Global_1574650 = 0;
		Global_1574650.f_2 = 0;
	}
	UNK_0x5D96D8530B3D0904(&(Global_1574650.f_2), bParam0);
	bVar0 = true;
	if (func_229(bParam0))
	{
		bVar0 = false;
	}
	if (func_561(bParam0))
	{
		bVar0 = false;
	}
	if (func_36(bParam0, 0))
	{
		bVar0 = false;
	}
	if (func_259(bParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1574650++;
	}
}

bool func_561(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[bParam0 /*615*/].f_1, 10);
}

void func_562(bool bParam0, int iParam1, float fParam2)
{
	Local_1225[bParam0 /*68*/].f_49[iParam1] = fParam2;
}

void func_563(bool bParam0, int iParam1, float fParam2)
{
	Local_1225[bParam0 /*68*/].f_45[iParam1] = fParam2;
}

void func_564(bool bParam0, int iParam1, float fParam2)
{
	Local_1225[bParam0 /*68*/].f_41[iParam1] = fParam2;
}

void func_565(bool bParam0, float fParam1)
{
	Local_1225[bParam0 /*68*/].f_40 = fParam1;
}

void func_566(bool bParam0, float fParam1)
{
	Local_1225[bParam0 /*68*/].f_39 = fParam1;
}

void func_567(bool bParam0, float fParam1)
{
	Local_1225[bParam0 /*68*/].f_38 = fParam1;
}

void func_568(bool bParam0, int iParam1)
{
	Local_1225[bParam0 /*68*/].f_37 = iParam1;
}

void func_569(bool bParam0, int iParam1)
{
	Local_1225[bParam0 /*68*/].f_36 = iParam1;
}

bool func_570()
{
	return -1;
}

void func_571()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < UNK_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = UNK_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 185)
		{
			func_572(iVar0);
		}
		if (iVar1 == 154)
		{
		}
		iVar0++;
	}
}

void func_572(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<6> Var11;
	struct<14> Var24;
	float fVar38;

	bVar6 = -1;
	bVar7 = -1;
	bVar8 = -1;
	UNK_0x218F818E64020C17(1, iParam0, &Var11, 13);
	if (UNK_0xC844350D5D58C99A(Var11))
	{
		if (UNK_0xEC560E589DF8370E(Var11))
		{
			bVar0 = UNK_0x940C1429253D3B1B(Var11);
			if (UNK_0x34BFC6F0CB887BC2(bVar0))
			{
				bVar2 = UNK_0x83FACCC48B68F9D1(bVar0);
				if (UNK_0xFB75B0F82CA525F6(bVar2))
				{
					bVar4 = UNK_0x7B9C1F53FE442D06(bVar2);
					if (UNK_0x81A93C8315C28F58(bVar4))
					{
						bVar7 = bVar4;
					}
				}
				if (bVar7 != -1)
				{
					if (UNK_0xC844350D5D58C99A(Var11.f_1))
					{
						if (UNK_0xEC560E589DF8370E(Var11.f_1))
						{
							bVar1 = UNK_0x940C1429253D3B1B(Var11.f_1);
							if (UNK_0x34BFC6F0CB887BC2(bVar1))
							{
								bVar3 = UNK_0x83FACCC48B68F9D1(bVar1);
								bVar8 = bVar3;
								if (UNK_0xFB75B0F82CA525F6(bVar3))
								{
									bVar5 = UNK_0x7B9C1F53FE442D06(bVar3);
									if (UNK_0x81A93C8315C28F58(bVar5))
									{
										bVar6 = bVar5;
									}
									if (bVar6 != -1)
									{
										if (bVar6 != bVar7)
										{
											bVar9 = false;
											while (bVar9 < 1)
											{
												if (bVar6 == func_8(bVar9))
												{
													if (!func_262(1, 0))
													{
														if (bVar7 == UNK_0x57270EE11514DC67())
														{
															if (!UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 7))
															{
																UNK_0x5D96D8530B3D0904(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 7);
															}
														}
													}
													if (Var11.f_5)
													{
														if (bVar6 == UNK_0x57270EE11514DC67())
														{
															if (iLocal_3179 < func_618())
															{
																iLocal_3179++;
																func_576(0, bVar1, "", -1859646258, 2131309714, func_617(), 1, -1, 0, 0, 0);
																Local_364.f_7 = (Local_364.f_7 + func_617());
															}
															else
															{
																iLocal_3179++;
															}
														}
														if (UNK_0xBFF81ED3B99522C7())
														{
															fVar38 = func_149(bVar9, bVar6);
															fVar38 = (fVar38 + IntToFloat(Global_262145.f_11193));
															func_559(bVar9, bVar6, fVar38);
														}
													}
												}
												else if (bVar7 == func_8(bVar9))
												{
													if (bVar6 == UNK_0x57270EE11514DC67())
													{
														if (!func_262(1, 0))
														{
															if (!UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 6))
															{
																UNK_0x5D96D8530B3D0904(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 6);
															}
															if (!UNK_0xEAE0D21A50E6C7F4(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4, 2))
															{
																UNK_0x5D96D8530B3D0904(&(Local_378[UNK_0x57270EE11514DC67() /*5*/].f_4), 2);
																func_241(1);
															}
														}
														if (Var11.f_5)
														{
															if (iLocal_3177 < func_575())
															{
																iLocal_3177++;
																func_576(0, bVar1, "", -1859646258, 2131309714, func_574(), 1, -1, 0, 0, 0);
																Local_364.f_7 = (Local_364.f_7 + func_574());
															}
															else
															{
																iLocal_3177++;
															}
														}
													}
													if (bVar7 == UNK_0x57270EE11514DC67())
													{
														iLocal_3178++;
													}
													if (func_261(bVar6, bVar9))
													{
														if (Var11.f_5)
														{
															if (UNK_0xBFF81ED3B99522C7())
															{
																if (func_522(bVar9) == -1)
																{
																	func_621(bVar9, bVar6);
																}
																if (func_521(bVar9) == -1)
																{
																	func_620(bVar9, bVar8);
																}
																UNK_0x5D96D8530B3D0904(&bLocal_539, false);
															}
														}
													}
													else if (Var11.f_5)
													{
														if (UNK_0xBFF81ED3B99522C7())
														{
															Var24.f_2 = 692650692;
															Var24.f_10 = bVar3;
															bVar10 = false;
															while (bVar10 < 32)
															{
																if (UNK_0xEAE0D21A50E6C7F4(bLocal_3174, bVar10))
																{
																	if (UNK_0xEAE0D21A50E6C7F4(bLocal_3173, Local_544[bVar10 /*18*/].f_1))
																	{
																		if (!UNK_0xEAE0D21A50E6C7F4(Local_378[bVar10 /*5*/].f_4, 9) && !UNK_0xEAE0D21A50E6C7F4(Local_378[bVar10 /*5*/].f_4, 10))
																		{
																			if (func_199(bVar10))
																			{
																				func_518(Var24, func_573(Local_544[bVar10 /*18*/].f_1));
																			}
																		}
																	}
																}
																bVar10++;
															}
														}
													}
												}
												bVar9++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_573(bool bParam0)
{
	var uVar0;

	if (bParam0 != -1)
	{
		UNK_0x5D96D8530B3D0904(&uVar0, bParam0);
	}
	return uVar0;
}

int func_574()
{
	return Global_262145.f_10998;
}

int func_575()
{
	return Global_262145.f_11000;
}

bool func_576(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	return func_577(iParam0, bParam1, bParam2, bParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, iParam10);
}

bool func_577(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_587(iParam0, bParam2, bParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (UNK_0xEC560E589DF8370E(bParam1))
			{
				bVar1 = UNK_0x940C1429253D3B1B(bParam1);
				func_583(UNK_0x64430C979F516F7A(bVar1, 31086, 0f, 0f, 0f), bVar0, 0, iParam8, iParam10);
			}
		}
	}
	else
	{
		func_578(bParam1, bVar0, iParam8, iParam10);
	}
	return bVar0;
}

void func_578(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;

	vVar0 = { func_581(bParam0, 1) };
	if (bParam0 == func_580(UNK_0x16F2683693E537C9()))
	{
		func_579(1);
	}
	func_583(vVar0, bParam1, 0, bParam2, iParam3);
}

void func_579(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_580(int iParam0)
{
	return iParam0;
}

Vector3 func_581(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	if (UNK_0x19C7D1907D1DDDAB())
	{
		vVar3 = { UNK_0x3B276DB863622D2E(2) };
	}
	if (bParam0 == func_582(UNK_0x16F2683693E537C9()) && UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
	{
		vVar0 = { UNK_0x68E4ADDDDCD7BDDE(bParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	bVar6 = 0f;
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		bVar6 = UNK_0xD9522BA9E27E1349(bParam0);
		if (UNK_0xA4FD7964FEE91ED8(UNK_0x5A0033B025D45F1B()) == 4)
		{
			bVar6 = vVar3.z;
		}
	}
	UNK_0xA6B02C1DB14DDA13(UNK_0x134B62B726CEC8E6(bParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0.18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0.18f);
	}
	vVar0 = { UNK_0x8A5E176FF719A014(vVar0, bVar6, 0f, 0f, fVar13) };
	return vVar0;
}

bool func_582(int iParam0)
{
	return iParam0;
}

void func_583(vector3 vParam0, bool bParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (bParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0 /*30*/].f_6 == 0 || Global_2439138.f_1290[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1 /*30*/] = { vParam0 };
			Global_2439138.f_1290[iVar1 /*30*/].f_6 = 1;
			Global_2439138.f_1290[iVar1 /*30*/].f_4 = func_586(Global_2439138.f_1290[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1 /*30*/].f_7 = UNK_0x2B6E0A53779D29EA();
			Global_2439138.f_1290[iVar1 /*30*/].f_3 = bParam3;
			Global_2439138.f_1290[iVar1 /*30*/].f_8 = iParam4;
			Global_2439138.f_1290[iVar1 /*30*/].f_9 = func_585();
			Global_2439138.f_1290[iVar1 /*30*/].f_10 = func_584();
			StringCopy(&(Global_2439138.f_1290[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1 /*30*/].f_26 = UNK_0x04787588C7E736F8(UNK_0x2B6E0A53779D29EA(), iParam6);
		}
	}
}

int func_584()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_585()
{
	var uVar0;

	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_586(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = UNK_0x0EB28750412C3A5A(UNK_0x07DAF5424BC6779A(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

bool func_587(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;

	bVar0 = func_588(iParam0, 0, bParam1, iParam4, iParam5, 0, iParam6, 1, bParam2, iParam3, bParam7);
	return bVar0;
}

bool func_588(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (func_616(UNK_0xD803B885F5E47A62()) || func_615(UNK_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_434() || func_613(UNK_0xD803B885F5E47A62()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_135(bParam2))
	{
	}
	if (func_612())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		bVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		bVar1 = func_610(bVar1);
		fVar3 = (SYSTEM::TO_FLOAT(bVar1) * Global_262145.f_1);
		bVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			bVar1 = func_609(&bVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_606(0, &bVar1);
					break;
				case 3:
					func_606(1, &bVar1);
					break;
				case 1:
					func_603(&bVar1);
					break;
			}
		}
		if (bVar1 > Global_1686714)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					bVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					bVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_271(1164, bVar1, -1);
			if (iParam1 == 0)
			{
				func_595((func_602(UNK_0xD803B885F5E47A62()) + bVar1), iParam9, 0);
				if (bParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				UNK_0x189A6F4108CDFDD6(bVar1, bParam8, iParam9);
				if (Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_2 != -1)
				{
					func_271(1165, bVar1, -1);
				}
				func_591(bVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_589((func_590(UNK_0xD803B885F5E47A62()) + bVar1));
			}
			else
			{
				func_589((func_590(UNK_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return bVar1;
}

void func_589(bool bParam0)
{
	if (func_612())
	{
		Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_5 = bParam0;
		func_277(joaat("MPPLY_GLOBALXP"), bParam0);
	}
}

int func_590(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_756(bParam0, 0, 1))
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return func_279(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_5;
			}
		}
		else
		{
			return func_279(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

void func_591(bool bParam0)
{
	struct<13> Var0;
	int iVar13;

	Var0 = { func_41(UNK_0xD803B885F5E47A62()) };
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar13 = func_593(func_594(&Var0));
			if (iVar13 == 0)
			{
				func_592(&Global_1387915, bParam0);
				func_276(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_592(&Global_1387916, bParam0);
				func_276(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_592(&Global_1387917, bParam0);
				func_276(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_592(&Global_1387918, bParam0);
				func_276(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_592(&Global_1387919, bParam0);
				func_276(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1387919);
			}
		}
	}
}

void func_592(var uParam0, bool bParam1)
{
	*uParam0 = (*uParam0 + bParam1);
}

int func_593(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_594(var uParam0)
{
	if (UNK_0x080E9D045AEE5605())
	{
		if (UNK_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

void func_595(bool bParam0, int iParam1, int iParam2)
{
	if (func_612())
	{
		if (bParam0 >= 1787576850)
		{
			bParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (bParam0 < Global_1388060[func_217(-1)])
				{
					UNK_0x189A6F4108CDFDD6(bParam0, -523908350, iParam1);
					return;
				}
				else if (bParam0 == Global_1388060[func_217(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (bParam0 == 0)
			{
				UNK_0x189A6F4108CDFDD6(bParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (bParam0 < 0)
			{
				UNK_0x189A6F4108CDFDD6(bParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_601(UNK_0xD803B885F5E47A62()))
		{
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_1 = bParam0;
			Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_211.f_6 = func_599(bParam0, 1);
		}
		func_272(639, bParam0, -1, 1);
		func_273(640, func_599(bParam0, 1), -1, 1, 0);
		Global_1388060[func_217(-1)] = bParam0;
		func_596(-1109644434, 7, 0);
	}
}

void func_596(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_598(iParam1, bParam2))
	{
		iVar0 = func_597();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_597()
{
	int iVar0;
	int iVar1;

	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_598(int iParam0, bool bParam1)
{
	if (Global_1312865)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((bParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

int func_599(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_600(bParam0, 0);
}

int func_600(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == bParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < bParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

bool func_601(bool bParam0)
{
	if (bParam0 == -1)
	{
		return false;
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_2439138.f_1, bParam0);
	}
	return true;
}

int func_602(bool bParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == UNK_0xD803B885F5E47A62())
			{
				return Global_1388060[func_217(-1)];
			}
			else if (func_601(bParam0))
			{
				return Global_1590535[bParam0 /*876*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_217(-1)];
	}
	return 0;
}

void func_603(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iVar1 = UNK_0x08067D4957B73C02(UNK_0xD803B885F5E47A62());
	bVar0 = false;
	while (bVar0 < UNK_0x54EABC0DD106045B())
	{
		bVar4 = UNK_0xF4FB3A22FC4991C8(bVar0);
		if (UNK_0x81A93C8315C28F58(bVar4))
		{
			bVar5 = UNK_0x4B2BFE4A3BC248ED(bVar4);
			if (UNK_0x08067D4957B73C02(bVar5) != -1)
			{
				if (UNK_0x08067D4957B73C02(bVar5) == iVar1 || func_178(UNK_0x08067D4957B73C02(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != UNK_0xD803B885F5E47A62())
					{
						if (func_605(UNK_0xD803B885F5E47A62(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_604(*bParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_604(*bParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam0 = (*bParam0 + iVar6);
	*bParam0 = (*bParam0 + iVar7);
}

float func_604(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

bool func_605(bool bParam0, bool bParam1)
{
	if (UNK_0x080E9D045AEE5605())
	{
		Global_2513218 = { func_41(bParam0) };
		Global_2513231 = { func_41(bParam1) };
		if (UNK_0xF2EC2A39FF9E838D(&Global_2513218))
		{
			if (UNK_0xF2EC2A39FF9E838D(&Global_2513231))
			{
				UNK_0xD9DA83C40D038174(&Global_2513148, 35, &Global_2513218);
				UNK_0xD9DA83C40D038174(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_606(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < UNK_0x54EABC0DD106045B())
		{
			bVar3 = iVar0;
			if (UNK_0x81A93C8315C28F58(bVar3))
			{
				bVar4 = UNK_0x4B2BFE4A3BC248ED(bVar3);
				if (func_756(bVar4, 0, 1))
				{
					if (bVar4 != UNK_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_605(UNK_0xD803B885F5E47A62(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_756(bVar4, 1, 1))
			{
				if (bVar4 != UNK_0xD803B885F5E47A62())
				{
					if (func_607(UNK_0xD803B885F5E47A62(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_605(UNK_0xD803B885F5E47A62(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_604(*bParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_604(*bParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*bParam1 = (*bParam1 + iVar5);
	*bParam1 = (*bParam1 + iVar6);
}

float func_607(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_608(bParam0), func_608(bParam1));
	return 0f;
}

Vector3 func_608(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

bool func_609(bool bParam0)
{
	int iVar0;

	if (UNK_0xA0501A3E65437842() != 3)
	{
		return *bParam0;
	}
	iVar0 = SYSTEM::ROUND((func_604(*bParam0, 100) * 25f));
	*bParam0 = (*bParam0 + iVar0);
	return *bParam0;
}

bool func_610(bool bParam0)
{
	if (bParam0 < 0)
	{
		if (UNK_0x51D1D19912234EA0(bParam0) > func_602(UNK_0xD803B885F5E47A62()))
		{
			bParam0 = -func_602(UNK_0xD803B885F5E47A62());
		}
	}
	if (func_611(8000, 0, 0) > 0)
	{
		if (func_611(8000, 0, 0) < (bParam0 + func_602(UNK_0xD803B885F5E47A62())))
		{
			bParam0 = (func_611(8000, 0, 0) - func_602(UNK_0xD803B885F5E47A62()));
		}
	}
	return bParam0;
}

int func_611(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

bool func_612()
{
	return true;
}

int func_613(bool bParam0)
{
	return func_614(func_110(bParam0));
}

int func_614(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_615(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 2;
}

bool func_616(int iParam0)
{
	return Global_2425662[iParam0 /*421*/].f_115 == 7;
}

int func_617()
{
	return Global_262145.f_10999;
}

int func_618()
{
	return Global_262145.f_11001;
}

void func_619(bool bParam0, var uParam1)
{
	Local_1225[bParam0 /*68*/].f_31 = uParam1;
}

void func_620(bool bParam0, bool bParam1)
{
	Local_1225[bParam0 /*68*/].f_35 = bParam1;
}

void func_621(bool bParam0, bool bParam1)
{
	Local_1225[bParam0 /*68*/].f_34 = bParam1;
}

void func_622(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_539, 5))
	{
		if (func_15(bParam0) != 0)
		{
			if (!func_259(UNK_0xD803B885F5E47A62()))
			{
				if (!func_136(UNK_0xD803B885F5E47A62()))
				{
					if (func_485(UNK_0x57270EE11514DC67()))
					{
						if (iParam1 <= 2)
						{
							if (func_199(UNK_0x57270EE11514DC67()) || func_485(UNK_0x57270EE11514DC67()))
							{
								func_649(func_663(iParam1), &bVar0, &iVar1, &iVar2);
							}
						}
						else
						{
							func_648(1);
						}
						if (iVar1 > 0)
						{
							func_647();
							func_576(0, UNK_0x16F2683693E537C9(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
							Local_364.f_7 = (Local_364.f_7 + iVar1);
						}
						if (bVar0 > 0)
						{
							func_636(&bVar0, 1);
						}
						bVar0 = (bVar0 + iVar2);
						if (bVar0 > 0)
						{
							if (func_635())
							{
								func_624(-212607085, bVar0, &uVar3, 0, 1, 0);
							}
							else
							{
								UNK_0x9AC21D04D5646532(bVar0, "AM_KING_OF_THE_HILL", &uVar4);
							}
							Local_364.f_6 = (Local_364.f_6 + bVar0);
							if (!Global_262145.f_11404)
							{
								if (Local_364.f_6 > 0)
								{
									func_623(16, Local_364.f_6);
								}
							}
							Global_2462880 = bVar0;
						}
					}
					else
					{
						func_648(0);
					}
				}
				else
				{
					func_648(0);
				}
			}
			else
			{
				func_648(0);
			}
		}
		else
		{
			func_648(0);
		}
		UNK_0x5D96D8530B3D0904(&bLocal_539, 5);
	}
}

void func_623(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!UNK_0x0EFF6B4415DAF4A1() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = iParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

void func_624(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_635())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (bParam1 > 0 || Global_262145.f_27584)
			{
				func_625(uParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
			}
			break;
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_625(uParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (bParam1 > 0 || Global_262145.f_27584)
			{
				func_625(uParam2, -1135378931, 537254313, 1474183246, iParam0, bParam1, iVar0, 7);
			}
			break;
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_625(uParam2, -1135378931, 1445302971, 1474183246, iParam0, bParam1, iVar0, 7);
			break;
	}
}

int func_625(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar0 = false;
	if (!func_635())
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (!bVar0)
	{
		if (!UNK_0x79B28160739BC9E6(func_38()) || UNK_0xDD2EE1F5DA6A6AB0())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || bVar1) || UNK_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, bParam5, iParam6))
	{
		if ((bVar0 || bVar1) || UNK_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_632(iVar4, iParam1, iParam4, iParam2, iParam3, bParam5, 0, iParam6, iParam7, 1, 1);
			if (bVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4263954[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = bParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = bParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_631(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_626(-1, iParam4, iParam6, bParam5, -1);
		}
	}
	return 0;
}

void func_626(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			UNK_0x5D96D8530B3D0904(&(Global_2425662[UNK_0xD803B885F5E47A62() /*421*/].f_122.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_627(iParam0);
	}
}

void func_627(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_635())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_630(iParam0))
		{
			if (!bVar0)
			{
				UNK_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			UNK_0xA6EF5385F39BAC90(Global_4263954[iParam0 /*85*/].f_66);
		}
		func_628(&(Global_4263954[iParam0 /*85*/]));
	}
}

void func_628(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_629(&(uParam0->f_14));
	func_629(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_629(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_630(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return false;
}

void func_631(int iParam0, int iParam1)
{
	Global_2463019 = iParam1;
	Global_2463018 = iParam0;
}

int func_632(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_635())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4263954[iVar0 /*85*/].f_66.f_1 = bParam5;
			Global_4263954[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4263954[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4263954[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4263954[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4263954[iVar0 /*85*/].f_66 = iParam0;
			Global_4263954[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4263954[iVar0 /*85*/].f_66.f_11 = iParam8;
			Global_4263954[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4263954[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4263954[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4263954[iVar0 /*85*/].f_66.f_14 = UNK_0xF4CCC8CB6DE7F1AE();
			Global_4263954[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_633(Global_4263954[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_633(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	vector3 vVar0;
	bool bVar36;

	if (iParam85 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.f_1 = UNK_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_66 };
	vVar0.f_2.f_33 = iParam85;
	bVar36 = func_573(vVar0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!bVar36 == 0)
	{
		func_634();
		UNK_0xFB061A86A7AC749F(1, &vVar0, 36, bVar36);
	}
}

void func_634()
{
	UNK_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

bool func_635()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

void func_636(bool bParam0, int iParam1)
{
	bool bVar0;

	if (*bParam0 > 0)
	{
		if (!func_646())
		{
			if (func_150(0))
			{
				if (!func_130(0))
				{
					if (UNK_0x40B8C182D63932FC(func_645()))
					{
						if (func_644() == 100)
						{
							bVar0 = *bParam0;
							*bParam0 = 0;
						}
						else
						{
							bVar0 = ((*bParam0 / 100) * func_644());
							*bParam0 = (*bParam0 - bVar0);
						}
						func_642(&bVar0, 0);
						if (iParam1 == 1)
						{
							func_641("GB_BCUT_TICK1", func_645(), bVar0, 0, 0, 1);
						}
						func_640(20);
						func_637(func_645(), bVar0, 1);
					}
				}
			}
		}
	}
}

void func_637(bool bParam0, bool bParam1, int iParam2)
{
	struct<8> Var0;

	if (func_756(bParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = UNK_0xD803B885F5E47A62();
		Var0.f_2 = bParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_639(bParam0);
		func_638(&(Var0.f_6), &(Var0.f_7));
		UNK_0xFB061A86A7AC749F(1, &Var0, 8, func_573(bParam0));
	}
}

void func_638(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_639(bool bParam0)
{
	return Global_1628237[bParam0 /*615*/].f_533;
}

void func_640(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	UNK_0x5D96D8530B3D0904(&(Global_2537071.f_5124.f_7[iVar0]), bVar1);
}

int func_641(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	char cVar1[64];

	iVar0 = -1;
	if (UNK_0xF816C4B5324CB295(UNK_0xD803B885F5E47A62(), bParam1) || bParam5)
	{
		if (!bParam4)
		{
			StringCopy(&cVar1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		else
		{
			StringCopy(&cVar1, UNK_0x6E524813889AECF8(bParam1), 64);
		}
		if (UNK_0xEA6BC48857E0AC4C(&cVar1))
		{
		}
		UNK_0x1E64CE678ED5F61E(bParam0);
		UNK_0x3A820E495A7BA3E5(func_171(bParam1, -2, 1, 0, 0));
		UNK_0xD06AC7C87A34A6AD(func_42(&cVar1));
		if (!bParam3 == 0)
		{
			UNK_0x3A820E495A7BA3E5(bParam3);
		}
		UNK_0x6D99DF8263D35CE5(bParam2);
		iVar0 = UNK_0x47AFB2993A42BD03(0, 1);
		func_33(27, bParam0, 1, &cVar1, bParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_642(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar1 = func_643(1);
	}
	else
	{
		iVar1 = func_643(0);
	}
	iVar0 = ((*bParam0 / 100) * iVar1);
	*bParam0 = (*bParam0 - iVar0);
}

int func_643(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_644()
{
	return Global_262145.f_12389;
}

bool func_645()
{
	return Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_11;
}

bool func_646()
{
	return func_74(UNK_0xD803B885F5E47A62());
}

void func_647()
{
	Global_2462221 = 1;
}

void func_648(bool bParam0)
{
	if (bParam0)
	{
		if (func_215(1))
		{
			UNK_0x5D96D8530B3D0904(&Global_1574675, true);
		}
	}
	else if (func_215(2))
	{
		UNK_0x5D96D8530B3D0904(&Global_1574675, 2);
	}
}

void func_649(float fParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = ((func_9(&uLocal_542, 0, 0) / 60) / 1000);
	if (iVar0 > Global_262145.f_11435)
	{
		iVar0 = Global_262145.f_11435;
	}
	else if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	*iParam3 = (func_662() * iVar0);
	*iParam2 = (func_661() * iVar0);
	if (fParam0 > 0f)
	{
		iVar1 = ((Global_262145.f_11188 / 60) / 1000);
		if (iVar1 > func_660())
		{
			iVar1 = func_660();
		}
		iVar2 = iLocal_541;
		if (iVar2 > func_659())
		{
			iVar2 = func_659();
		}
		*bParam1 = SYSTEM::ROUND((IntToFloat(func_652(func_658(), func_657(), iVar1, fParam0, func_656(), func_655(), func_654(), iVar2)) * Global_262145.f_11462));
		*iParam2 = (*iParam2 + SYSTEM::ROUND((IntToFloat(func_652(func_651(), func_650(), iVar1, fParam0, func_656(), func_655(), func_654(), iVar2)) * Global_262145.f_11463)));
	}
}

int func_650()
{
	return Global_262145.f_10995;
}

int func_651()
{
	return Global_262145.f_10997;
}

int func_652(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_653(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_653(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_654()
{
	return Global_262145.f_11004;
}

float func_655()
{
	return Global_262145.f_11003;
}

float func_656()
{
	return Global_262145.f_11002;
}

int func_657()
{
	return Global_262145.f_10994;
}

int func_658()
{
	return Global_262145.f_10996;
}

int func_659()
{
	return Global_262145.f_11347;
}

int func_660()
{
	return Global_262145.f_11346;
}

int func_661()
{
	return Global_262145.f_10993;
}

int func_662()
{
	return Global_262145.f_10992;
}

float func_663(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_11005;
		case 1:
			return Global_262145.f_11006;
		case 2:
			return Global_262145.f_11007;
		default:
			break;
	}
	return 0f;
}

bool func_664(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_31(UNK_0xD803B885F5E47A62(), 0) || func_416(UNK_0xD803B885F5E47A62(), 0))
	{
		if (func_30(UNK_0xD803B885F5E47A62()) || func_106(UNK_0xD803B885F5E47A62()))
		{
			bParam2 = false;
		}
	}
	if (UNK_0x981819F6C45DDB49() < iParam0)
	{
		if (bParam2)
		{
			func_666(bParam3, bParam4, 1);
		}
		if (func_269(26, -1))
		{
			func_294(26, -1);
		}
		return true;
	}
	if (func_18(&(Global_1574650.f_18)))
	{
		if (!func_5(&(Global_1574650.f_18), 7500, 0))
		{
			return false;
		}
		func_3(&(Global_1574650.f_18));
	}
	if (func_665())
	{
		if (bParam2)
		{
			func_666(bParam3, bParam4, 0);
		}
		if (func_269(26, -1))
		{
			func_294(26, -1);
		}
		return true;
	}
	if (bParam1 && UNK_0x0DC0B2DBBD52B0C0() < iParam0)
	{
		if (bParam2)
		{
			func_666(bParam3, bParam4, 1);
		}
		if (func_269(26, -1))
		{
			func_294(26, -1);
		}
		return true;
	}
	return false;
}

bool func_665()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, false);
}

void func_666(bool bParam0, bool bParam1, bool bParam2)
{
	if ((!UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 2) && !func_229(UNK_0xD803B885F5E47A62())) && !func_259(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xEA6BC48857E0AC4C(bParam0))
		{
			bParam0 = "FMEVEN_NUM1";
		}
		if (UNK_0xEA6BC48857E0AC4C(bParam1))
		{
			if (bParam2)
			{
				bParam1 = "FMEVEN_NUM2";
			}
			else
			{
				bParam1 = "FMEVEN_NUM3";
			}
		}
		func_205(66, bParam0, bParam1, 1, -1, 2, 1, 0);
		UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 2);
	}
}

int func_667()
{
	return Local_80.f_1;
}

void func_668()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 6))
	{
		func_687();
		UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 6);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 7))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 4) || UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 16))
		{
			if (((!UNK_0x0178C60FEA5C5A75() && !UNK_0xFEBC1E4EC9E001F0()) && !func_240()) && func_756(UNK_0xD803B885F5E47A62(), 1, 1))
			{
				UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 7);
				func_239("FME_PASINT", 30000);
				func_238(1);
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 17))
		{
			if (func_139() && !func_138())
			{
				UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 17);
				UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 16);
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 23))
	{
		if (((((!UNK_0x0178C60FEA5C5A75() && !UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_795, 2)) && func_756(UNK_0xD803B885F5E47A62(), 1, 1)) && !Global_73825) && !Global_58693) && !UNK_0xFEBC1E4EC9E001F0())
		{
			if (func_685())
			{
				func_239("AMEV_GA_RP", -1);
				if (func_110(UNK_0xD803B885F5E47A62()) != 200)
				{
					func_238(1);
				}
				UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 23);
			}
		}
	}
	if (UNK_0x798A3F1296751F46() && UNK_0x8BB17FEBE0394018() == 15)
	{
		if (func_221(UNK_0xD803B885F5E47A62()))
		{
			if (!UNK_0x70305AA977EFE679(1344549371))
			{
				UNK_0x8134AB7E30C9809E(1344549371);
			}
		}
		else if (UNK_0x70305AA977EFE679(1344549371))
		{
			UNK_0x64366F76B4845277(1344549371);
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 9))
	{
		if (((((!UNK_0x0178C60FEA5C5A75() && !UNK_0xFEBC1E4EC9E001F0()) && !func_240()) && func_756(UNK_0xD803B885F5E47A62(), 1, 1)) && !func_137(UNK_0xD803B885F5E47A62(), 21)) && !func_137(UNK_0xD803B885F5E47A62(), 25))
		{
			UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 9);
			func_684(0);
			func_239("FME_TBL00", -1);
			func_238(1);
		}
	}
	if (func_338(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 18))
		{
			if ((func_137(UNK_0xD803B885F5E47A62(), 21) && UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 20)) && !UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 19))
			{
				UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 18);
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 18))
		{
			if (((((!UNK_0x0178C60FEA5C5A75() && !UNK_0xFEBC1E4EC9E001F0()) && !func_240()) && func_756(UNK_0xD803B885F5E47A62(), 1, 1)) && UNK_0x0F1CCD77290EE12F()) && !Global_2537071.f_5057)
			{
				UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 18);
				UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 19);
				func_239("AMTT_RPAS", -1);
				func_238(1);
			}
		}
	}
	if (((((func_338(UNK_0xD803B885F5E47A62()) && !func_229(UNK_0xD803B885F5E47A62())) && func_260(UNK_0xD803B885F5E47A62()) != 146) && !func_259(UNK_0xD803B885F5E47A62())) && !func_136(UNK_0xD803B885F5E47A62())) && !func_678())
	{
		if (func_220(func_260(UNK_0xD803B885F5E47A62())))
		{
			UNK_0x25A1F489CCEE528A(UNK_0xD803B885F5E47A62());
		}
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 22))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 22);
		}
		if (func_107(UNK_0xD803B885F5E47A62()) || func_211())
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 10))
			{
				if (func_676(func_260(UNK_0xD803B885F5E47A62())))
				{
					if (func_215(0) && !Global_2391045)
					{
						UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_218(1);
						UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 14);
					}
				}
				UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 10);
			}
		}
		if (func_221(UNK_0xD803B885F5E47A62()))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 11))
			{
				if (!Global_98796.f_8)
				{
					UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 12);
					func_213(1);
				}
				if (!func_675())
				{
					UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 13);
					func_212();
				}
				if (!Global_2391045)
				{
					UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 14);
					if (func_215(0) && !Global_2391045)
					{
						UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 9);
					}
					func_218(1);
				}
				UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 11);
			}
		}
		else
		{
			func_673(0);
		}
	}
	else
	{
		func_673(1);
	}
	func_669();
	if (func_210(func_260(UNK_0xD803B885F5E47A62())) && !UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 21))
	{
		UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 21);
	}
	if (((func_139() && !func_138()) || func_137(UNK_0xD803B885F5E47A62(), 21)) || func_137(UNK_0xD803B885F5E47A62(), 25))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 10))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 10);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 10))
	{
		UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 10);
	}
}

void func_669()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_240())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_204(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 26))
				{
					UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 26);
				}
				func_670(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 26))
	{
		func_3(&(Global_1574650.f_22));
		UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 26);
	}
}

void func_670(int iParam0, int iParam1)
{
	if (!func_18(&(Global_1574650.f_22)))
	{
		func_11(&(Global_1574650.f_22), 0, 0);
	}
	else if (func_5(&(Global_1574650.f_22), iParam1, 0))
	{
		if (func_475() > 0)
		{
			func_235(iParam0);
			if (func_237("AMEV_LBD_HELP"))
			{
				UNK_0xA37A90C62806D848(1);
			}
			func_3(&(Global_1574650.f_22));
		}
	}
	else
	{
		func_672(0);
		func_671();
	}
}

void func_671()
{
	Global_2537071.f_4532 = 0;
}

void func_672(int iParam0)
{
	Global_1377170.f_68 = iParam0;
}

void func_673(bool bParam0)
{
	if ((UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 11) || (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 10) && bParam0)) || (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 22) && bParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 12))
		{
			UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 12);
			func_213(0);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 13))
		{
			UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 13);
			func_674();
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 14) && !func_31(UNK_0xD803B885F5E47A62(), 0))
		{
			UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 14);
			func_218(0);
		}
		UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 11);
		UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 10);
		UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 22);
	}
}

void func_674()
{
	UNK_0x0674E58A79778E99(&(Global_2537071.f_4962), false);
}

bool func_675()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4962, false);
}

bool func_676(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return true;
		case 131:
		case 146:
			return func_221(UNK_0xD803B885F5E47A62());
		case 133:
			return (func_211() || func_677(func_154()));
		default:
			break;
	}
	return false;
}

bool func_677(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return true;
		default:
			break;
	}
	return false;
}

bool func_678()
{
	if (((((((((func_317() || func_316()) || func_315()) || func_146()) || (func_312() && !UNK_0xA14BB9332558B949())) || (func_681() && !func_680())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_679() == 2 && !UNK_0xA14BB9332558B949()))
	{
		return true;
	}
	return false;
}

int func_679()
{
	return Global_968397;
}

bool func_680()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 27);
}

bool func_681()
{
	if (func_683() || func_682())
	{
		return Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_98 == 8;
	}
	return false;
}

bool func_682()
{
	return Global_2450632.f_635;
}

bool func_683()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

void func_684(int iParam0)
{
	bool bVar0;

	bVar0 = func_216(2534, -1, 0);
	if (iParam0 == 0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bVar0, false))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, false);
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bVar0, true))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, true);
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 2))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 3))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 3);
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 4))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 4);
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 5))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 6))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 6);
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 7))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 7);
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 8))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 9))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 9);
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 10))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 10);
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bVar0, 11))
		{
			UNK_0x5D96D8530B3D0904(&bVar0, 11);
		}
	}
	func_273(2534, bVar0, -1, 1, 0);
}

bool func_685()
{
	bool bVar0;

	if (!func_18(&(Global_1574650.f_15)))
	{
		func_11(&(Global_1574650.f_15), 0, 0);
		Global_1574650.f_17 = 0;
	}
	else if (func_5(&(Global_1574650.f_15), 1000, 0))
	{
		if (UNK_0x81A93C8315C28F58(UNK_0xF4FB3A22FC4991C8(Global_1574650.f_17)))
		{
			bVar0 = UNK_0x4B2BFE4A3BC248ED(UNK_0xF4FB3A22FC4991C8(Global_1574650.f_17));
			if (UNK_0x40B8C182D63932FC(bVar0))
			{
				if (func_756(bVar0, 1, 1) && func_686(bVar0, 6))
				{
					if (SYSTEM::VDIST(func_608(UNK_0xD803B885F5E47A62()), func_608(bVar0)) < 80f)
					{
						return true;
					}
				}
			}
		}
		Global_1574650.f_17++;
		if (Global_1574650.f_17 >= 32)
		{
			Global_1574650.f_17 = 0;
			func_3(&(Global_1574650.f_15));
		}
	}
	return false;
}

bool func_686(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_225() != 0)
	{
		return false;
	}
	if (!func_601(bParam0))
	{
		return false;
	}
	bVar0 = bParam0;
	if (Global_1590535[bVar0 /*876*/] == iParam1)
	{
		return true;
	}
	return false;
}

void func_687()
{
	UNK_0x34D79252800B23FF(5);
	func_354();
	UNK_0x51B096AAC60548C1(1f);
	UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 8);
	func_688();
}

void func_688()
{
	if (Global_1671757)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1671758, false))
		{
			UNK_0x0674E58A79778E99(&Global_2546092, false);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_1671758, true))
		{
			UNK_0x0674E58A79778E99(&Global_2546092, true);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_1671758, 5))
		{
			UNK_0x0674E58A79778E99(&Global_2546092, 5);
		}
		if (UNK_0x76395FF5E8D5E643(-355737150))
		{
			UNK_0x1BA7FCEAFCE8D46E(-355737150, 1, false, false);
		}
		if (UNK_0x76395FF5E8D5E643(-580979506))
		{
			UNK_0x1BA7FCEAFCE8D46E(-580979506, 1, false, false);
		}
		if (UNK_0x76395FF5E8D5E643(-1426452475))
		{
			UNK_0x1BA7FCEAFCE8D46E(-1426452475, 1, false, false);
		}
		if (UNK_0x76395FF5E8D5E643(745417724))
		{
			UNK_0x1BA7FCEAFCE8D46E(745417724, 1, false, false);
		}
		if (UNK_0x76395FF5E8D5E643(-1305304906))
		{
			UNK_0x1BA7FCEAFCE8D46E(-1305304906, 1, false, false);
		}
		if (UNK_0x76395FF5E8D5E643(-1543175077))
		{
			UNK_0x1BA7FCEAFCE8D46E(-1543175077, 1, false, false);
		}
		if (UNK_0x76395FF5E8D5E643(-811770997))
		{
			UNK_0x1BA7FCEAFCE8D46E(-811770997, 1, false, false);
		}
		Global_1671758 = 0;
	}
	Global_1671757 = 0;
}

bool func_689()
{
	if (UNK_0xC844350D5D58C99A(func_690()))
	{
		return func_690();
	}
	return func_196();
}

var func_690()
{
	return Global_2359302.f_3;
}

bool func_691()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 11);
}

bool func_692()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 4);
}

bool func_693(bool bParam0)
{
	if (func_36(bParam0, 0))
	{
		return true;
	}
	if (func_694())
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

bool func_694()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

bool func_695()
{
	return Global_1574650.f_24;
}

bool func_696()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_2537071.f_4959)
	{
		return false;
	}
	iVar2 = UNK_0x6794171A1021C2D8();
	if (func_18(&(Local_80.f_1.f_1)))
	{
		iVar0 = func_697(&iVar2, &(Local_80.f_1.f_1));
		iVar1 = Global_262145.f_11188;
	}
	else if (func_18(&(Local_80.f_1.f_3)))
	{
		iVar0 = func_697(&iVar2, &(Local_80.f_1.f_3));
		iVar1 = Global_262145.f_11189;
	}
	else
	{
		return false;
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

int func_697(int iParam0, var uParam1)
{
	return UNK_0x51D1D19912234EA0(UNK_0x519D13E6C1911A0B(*iParam0, *uParam1));
}

bool func_698(int iParam0)
{
	return !func_699(iParam0);
}

bool func_699(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			if (Global_262145.f_6660)
			{
				return false;
			}
			if (func_137(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 5:
			if (Global_262145.f_6661)
			{
				return false;
			}
			if (func_137(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 6:
			if (Global_262145.f_6662)
			{
				return false;
			}
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			if (Global_262145.f_6663)
			{
				return false;
			}
			if (func_137(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 15:
			if (func_700(4))
			{
				return false;
			}
			if (func_137(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 17:
			if (func_700(4))
			{
				return false;
			}
			if (func_137(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 16:
			if (func_700(4))
			{
				return false;
			}
			if (func_137(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_700(4))
			{
				return false;
			}
			if (func_137(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_274.f_26, true))
			{
				return false;
			}
			break;
		case 19:
			if (func_700(4))
			{
				return false;
			}
			if (func_137(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			break;
		case 20:
			if (func_700(4))
			{
				return false;
			}
			if (func_137(UNK_0xD803B885F5E47A62(), 7))
			{
				return false;
			}
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
	}
	return true;
}

bool func_700(bool bParam0)
{
	bool bVar0;

	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (func_756(UNK_0x117658E336116132(bVar0), 0, 1))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_2425662[bVar0 /*421*/].f_208, bParam0))
			{
				return true;
			}
		}
		bVar0++;
	}
	return false;
}

bool func_701()
{
	var uVar0;

	func_705(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			return true;
		}
	}
	if (func_704())
	{
		return true;
	}
	if (Global_2462922)
	{
		return true;
	}
	if (func_703())
	{
		return true;
	}
	if (func_702(159))
	{
		if (!func_317())
		{
			return true;
		}
	}
	if (func_702(157))
	{
		return true;
	}
	if (!UNK_0x58424C49F8924842())
	{
		return true;
	}
	if (func_223() != 0)
	{
		if (UNK_0x8A22C4C08282BF26(func_223()) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_702(int iParam0)
{
	if (UNK_0x9DCC716738C7EA49(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_703()
{
	return Global_2460680;
}

bool func_704()
{
	return Global_2450632.f_593;
}

void func_705(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < UNK_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = UNK_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			UNK_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_706(iVar0);
					break;
				case 589125870:
					UNK_0x218F818E64020C17(1, iVar0, &vVar4, 4);
					if (vVar4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_706(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_756(vVar0.y, 1, 1))
		{
			bVar3 = UNK_0x9539D44F3E4492F6(vVar0.y);
			if (UNK_0xC844350D5D58C99A(bVar3))
			{
				if (UNK_0x405E212DDE472467(bVar3, 0))
				{
					bVar4 = UNK_0x6937EA2286828455(bVar3, 0);
					if (UNK_0xD6CC9546EDEF00CE(bVar4, vVar0.z) && UNK_0x2E9F2B9C010D34D9())
					{
						if (func_707(bVar4, &bVar5))
						{
							UNK_0x920D29D81E211607(bVar4, vVar0.z);
						}
						if (bVar5)
						{
							UNK_0x046C362CF15F1935(&bVar4);
						}
					}
				}
			}
		}
	}
}

bool func_707(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0xAF6690C489CC6203(bParam0))
		{
			if (UNK_0x7DDF43006A714856(bParam0))
			{
				if (!UNK_0xA7D7011F9888A365(UNK_0x134B62B726CEC8E6(bParam0)))
				{
					UNK_0x73270B3C9CC833FD(bParam0, false, 1);
					*bParam1 = 1;
				}
			}
		}
		if (UNK_0x9C77D2D0559097F0(bParam0, 0))
		{
			if (UNK_0xAFE0D3608EDA7039(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_708()
{
	SYSTEM::WAIT(0);
}

void func_709()
{
	int iVar0;

	func_203();
	func_740(141);
	func_720(141, 0, UNK_0xEAE0D21A50E6C7F4(bLocal_539, 5));
	func_302();
	func_241(0);
	if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 16))
	{
		UNK_0x8910D3D58E0132B8("MP_Deathmatch_Type_Challenge_Scene");
		UNK_0x0674E58A79778E99(&bLocal_539, 16);
	}
	UNK_0x51B096AAC60548C1(1f);
	func_80();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_717(iVar0);
		iVar0++;
	}
	func_349();
	func_715();
	func_714(0);
	func_233(29, 0);
	if (func_701())
	{
		Local_364.f_5 = 5;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(bLocal_539, 24))
	{
		Local_364.f_5 = 6;
	}
	else if (Local_364.f_5 != 1)
	{
		Local_364.f_5 = 2;
	}
	Local_364 = Local_80.f_214;
	Local_364.f_1 = Local_80.f_215;
	Local_364.f_4 = Local_80.f_216;
	Local_364.f_3 = iLocal_541;
	Local_364.f_10 = (UNK_0xDD0E7998AE8AD485() - Local_364.f_9);
	if (!Global_262145.f_11404)
	{
		if (Local_364.f_6 > 0)
		{
			if (Local_364.f_5 == 1)
			{
				func_713();
			}
		}
	}
	if (UNK_0x57270EE11514DC67() != -1)
	{
		func_711(Local_364, iLocal_377, iLocal_3179, iLocal_3178, func_77(func_148(0, UNK_0x57270EE11514DC67())), -1, -1);
	}
	func_710();
}

void func_710()
{
	UNK_0x10FAF14A60A0DBE1();
}

void func_711(struct<12> Param0, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17)
{
	bool bVar0;
	struct<13> Var1;
	struct<14> Var14;
	struct<18> Var28;
	struct<14> Var52;
	struct<13> Var66;
	struct<14> Var79;
	struct<14> Var93;
	struct<16> Var107;
	struct<13> Var123;
	struct<14> Var136;
	struct<14> Var150;
	struct<13> Var164;

	bVar0 = UNK_0xBB0808A181D4745C();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_76622)
	{
		if (UNK_0x7F8A39872A07D2CE(bVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = iParam12;
			UNK_0x9534DF96382FA79D(&Var1);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, func_712()))
		{
			Var14 = { Param0 };
			Var14.f_12 = iParam12;
			Var14.f_13 = iParam13;
			UNK_0x68F74D8294339590(&Var14);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = iParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = bParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			UNK_0xB4378BE34ED99E2A(&Var28);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = iParam12;
			Var52.f_13 = SYSTEM::TO_FLOAT(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			UNK_0xE20208601F5C75BD(&Var52);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "am_penned_in"))
		{
			UNK_0xAE4A25D32825E179(&Param0);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = iParam12;
			UNK_0xAD412B113AE8E374(&Var66);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = iParam12;
			Var79.f_13 = iParam13;
			UNK_0xAFD26850D8F9D951(&Var79);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = iParam12;
			Var93.f_13 = iParam13;
			UNK_0x2320D6A9337F16FD(&Var93);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = iParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = bParam15;
			UNK_0x8EFE08564F2B2A96(&Var107);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = iParam12;
			UNK_0x99DAD54B2D0F4291(&Var123);
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = iParam12;
				Var136.f_13 = iParam13;
				UNK_0xC6463777F834DA6F(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = iParam12;
				Var150.f_13 = iParam13;
				UNK_0x9563472595C7B3E7(&Var150);
			}
		}
		else if (UNK_0x7F8A39872A07D2CE(bVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = iParam12;
			UNK_0x9BF192C4E1EF8A54(&Var164);
		}
	}
}

char* func_712()
{
	switch (Global_2463024)
	{
		case 0:
			return "freemode";
		default:
			break;
	}
	return "freemode";
}

void func_713()
{
	UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1734), 18);
}

void func_714(bool bParam0)
{
	if (bParam0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1734, 9))
		{
			UNK_0x5D96D8530B3D0904(&(Global_2537071.f_1734), 9);
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1734, 9))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_1734), 9);
	}
}

void func_715()
{
	if (Global_2413899.f_6 == UNK_0x0D0A574C76D769AC())
	{
		func_716();
	}
}

void func_716()
{
	struct<28> Var0;

	if (UNK_0x1727A44C562FBED2(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == UNK_0x0D0A574C76D769AC())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413899 = { Var0 };
	Global_2413899.f_6 = -1;
}

void func_717(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_719(bParam0))
	{
		func_718(iVar0);
		iVar0++;
	}
	func_349();
	func_715();
	func_358(func_359(bParam0), 0, 0);
}

void func_718(int iParam0)
{
	struct<12> Var0;

	if (iParam0 > -1 && iParam0 < 10)
	{
		if (Global_2405072.f_365[iParam0 /*12*/].f_9)
		{
			Global_2405072.f_365[iParam0 /*12*/] = { Var0 };
		}
	}
}

int func_719(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 4:
			return 1;
		case 2:
			return 2;
		case 1:
			return 3;
		case 3:
			return 3;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_720(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
	}
	if (UNK_0xD803B885F5E47A62() != -1)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 13))
		{
			UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 13);
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 14))
		{
			UNK_0x0674E58A79778E99(&(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1), 14);
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1574650.f_1, 21))
	{
		UNK_0x0674E58A79778E99(&(Global_1574650.f_1), 21);
	}
	func_736();
	UNK_0x7352ACF3368DF65F("DisableFlightMusic", 0);
	UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
	if (bParam1)
	{
		bVar0 = func_735(func_260(UNK_0xD803B885F5E47A62()));
		func_233(func_234(iParam0), 0);
	}
	else
	{
		if ((bParam2 && UNK_0xD803B885F5E47A62() != -1) && func_734(UNK_0xD803B885F5E47A62()) >= 12)
		{
			func_733(2546, -1);
			iVar1 = func_216(2546, -1, 0);
			if (iVar1 == 2)
			{
				UNK_0x5D96D8530B3D0904(&Global_1574676, false);
			}
			else if (iVar1 == 4)
			{
				UNK_0x5D96D8530B3D0904(&Global_1574676, true);
			}
			else if (iVar1 == 6)
			{
				UNK_0x5D96D8530B3D0904(&Global_1574676, 2);
			}
			else if (iVar1 == 8)
			{
				UNK_0x5D96D8530B3D0904(&Global_1574676, 3);
			}
			else if (iVar1 == 10)
			{
				UNK_0x5D96D8530B3D0904(&Global_1574676, 4);
			}
			else if (iVar1 == 12)
			{
				UNK_0x5D96D8530B3D0904(&Global_1574676, 5);
			}
		}
		func_732();
		func_731();
		func_730();
		if ((!func_30(UNK_0xD803B885F5E47A62()) && !func_28(UNK_0xD803B885F5E47A62())) && !func_111())
		{
			func_345();
		}
		func_729();
		if (!UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, false) && !UNK_0xEAE0D21A50E6C7F4(Global_1674347.f_3, true))
		{
			func_687();
		}
		func_728();
		UNK_0x0674E58A79778E99(&(Global_2537071.f_1746), 2);
		func_727();
		func_726();
	}
	if (UNK_0x70305AA977EFE679(1344549371))
	{
		UNK_0x64366F76B4845277(1344549371);
	}
	if (!bParam1 || bVar0)
	{
		if (((UNK_0xD803B885F5E47A62() != -1 && !func_137(UNK_0xD803B885F5E47A62(), 21)) && !func_137(UNK_0xD803B885F5E47A62(), 25)) && !func_31(UNK_0xD803B885F5E47A62(), 0))
		{
			func_218(0);
			func_213(0);
			if (!bParam1)
			{
				func_725();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_269(26, -1))
		{
			Global_2462854 = -1;
			func_294(26, -1);
		}
	}
	if (!func_721())
	{
		Global_2513109 = 1;
	}
}

bool func_721()
{
	if ((((((!func_455(UNK_0xD803B885F5E47A62()) && !func_436(UNK_0xD803B885F5E47A62())) && func_260(UNK_0xD803B885F5E47A62()) != 146) && !func_724()) && !func_723()) && !func_722(Global_4456448.f_232883)) && !func_191())
	{
		return false;
	}
	return true;
}

bool func_722(int iParam0)
{
	return iParam0 == 57;
}

bool func_723()
{
	if (Global_4456448.f_194990 == Global_262145.f_9596)
	{
		return true;
	}
	return false;
}

bool func_724()
{
	if ((Global_4456448 == 0 && UNK_0xA14BB9332558B949()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_232883 > 0) || UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 15)) || UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 18)) || UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 19)) || UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 29)) || UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_4, 28)) || UNK_0xEAE0D21A50E6C7F4(Global_4456448.f_5, 23)))
	{
		return true;
	}
	return false;
}

void func_725()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				UNK_0x0674E58A79778E99(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_726()
{
	Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_7 = 0;
}

void func_727()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_4961, true))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_4961), true);
	}
	if (Global_2537071.f_4961 > 0)
	{
		UNK_0xC92DB9682A650680("FM_COUNTDOWN_30S_KILL");
		UNK_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
		UNK_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
		UNK_0xBEF52C1D400C0A44(1);
		Global_2537071.f_4961 = 0;
		UNK_0x7352ACF3368DF65F("DisableFlightMusic", 0);
		UNK_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
		UNK_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
		if (!UNK_0x7F8A39872A07D2CE(UNK_0xBB0808A181D4745C(), "am_pi_menu"))
		{
			if (Global_2537071.f_4971 > -1)
			{
				UNK_0x43A06902454A1172(Global_2537071.f_4971);
				Global_2537071.f_4971 = -1;
			}
		}
	}
}

void func_728()
{
	struct<25> Var0;

	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574650 = { Var0 };
}

void func_729()
{
	var uVar0;

	Global_1319101 = uVar0;
}

void func_730()
{
	Global_2537071.f_4962 = 0;
}

void func_731()
{
	if (UNK_0xD803B885F5E47A62() != -1)
	{
		Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1 = 0;
	}
}

void func_732()
{
	int iVar0;

	iVar0 = UNK_0xD803B885F5E47A62();
	if (iVar0 != -1)
	{
		Global_1628237[iVar0 /*615*/] = -1;
	}
}

void func_733(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_216(iParam0, func_217(iParam1), 0);
	bVar0++;
	if (!func_274(iParam0))
	{
		func_273(iParam0, bVar0, iParam1, 1, 0);
	}
	else
	{
		func_272(iParam0, bVar0, iParam1, 1);
	}
}

int func_734(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_211.f_6;
}

int func_735(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		case 146:
			if (func_221(UNK_0xD803B885F5E47A62()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_736()
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1735, 3) || UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1735, 4))
	{
		if (UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
		{
			UNK_0x82E51BCA72537B6C(800);
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1735, 5))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_1735), 5);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1735, 3))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_1735), 3);
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_2537071.f_1735, 4))
	{
		UNK_0x0674E58A79778E99(&(Global_2537071.f_1735), 4);
	}
	func_739(0);
	func_738(0);
	func_737(0);
}

void func_737(int iParam0)
{
	if (Global_2537071.f_4520 != iParam0)
	{
		Global_2537071.f_4520 = iParam0;
	}
}

void func_738(bool bParam0)
{
	if (Global_2537071.f_4519 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2537071.f_4519 = bParam0;
	}
}

void func_739(int iParam0)
{
	if (Global_2537071.f_4517 != iParam0)
	{
		Global_2537071.f_4517 = iParam0;
	}
}

void func_740(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_741(struct<21> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = func_755(Param0);
	func_754(iVar3, Param0);
	func_753(0, -1, 0);
	func_751(141);
	UNK_0x9752E7BAEABA939E(&Local_80, 284);
	UNK_0x35B62793EAE9ADDF(&Local_378, 161);
	if (!func_750())
	{
		func_709();
	}
	if (UNK_0x8CD06866876216F2())
	{
		UNK_0x256D93AFAE851A7A(0);
		func_233(29, 1);
		if (UNK_0xBFF81ED3B99522C7())
		{
			iVar0 = func_746();
			func_743(func_745(141, iVar0, 0, 0));
			iVar1 = 0;
			while (iVar1 < 1)
			{
				func_742(iVar1, iVar0);
				iVar1++;
			}
			UNK_0xCB466C2A425A9168(&(Local_80.f_214), &(Local_80.f_215));
		}
		Local_364.f_2 = UNK_0x981819F6C45DDB49();
		Local_364.f_9 = UNK_0xDD0E7998AE8AD485();
		Local_364.f_8 = UNK_0xDD0E7998AE8AD485();
		iVar2 = 0;
		while (iVar2 < 32)
		{
			Local_80.f_250[iVar2] = -1;
			iVar2++;
		}
		func_505(0);
	}
	else
	{
		func_709();
	}
}

void func_742(int iParam0, int iParam1)
{
	Local_80.f_6[iParam0 /*204*/].f_69 = iParam1;
}

void func_743(int iParam0)
{
	vector3 vVar0;
	bool bVar3;

	vVar0.x = 1982372647;
	vVar0.f_1 = UNK_0xD803B885F5E47A62();
	vVar0.f_2 = iParam0;
	bVar3 = func_744(1, 1);
	if (!bVar3 == 0)
	{
		UNK_0xFB061A86A7AC749F(1, &vVar0, 3, bVar3);
	}
}

bool func_744(bool bParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = UNK_0x117658E336116132(bVar1);
		if (func_756(bVar2, 0, 0))
		{
			if (bVar2 != UNK_0xD803B885F5E47A62() || bParam0)
			{
				if (bParam1)
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
				else if (!func_36(bVar2, 0))
				{
					UNK_0x5D96D8530B3D0904(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_745(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						case 1:
							return 1;
						case 2:
							return 2;
						case 3:
							return 3;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 5;
						case 2:
							return 6;
						case 3:
							return 7;
						default:
							break;
					}
					break;
			}
			break;
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
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
								default:
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								case 1:
									return 6;
								case 2:
									return 7;
								case 3:
									return 8;
								case 4:
									return 9;
								default:
									break;
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								case 1:
									return 11;
								case 2:
									return 12;
								case 3:
									return 13;
								case 4:
									return 14;
								default:
									break;
							}
							break;
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								case 1:
									return 16;
								case 2:
									return 17;
								case 3:
									return 18;
								case 4:
									return 19;
								default:
									break;
							}
							break;
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								case 1:
									return 21;
								case 2:
									return 22;
								case 3:
									return 24;
								case 4:
									return 25;
								default:
									break;
							}
							break;
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								case 1:
									return 27;
								case 2:
									return 28;
								case 3:
									return 29;
								case 4:
									return 30;
								default:
									break;
							}
							break;
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								case 1:
									return 32;
								case 2:
									return 33;
								case 3:
									return 34;
								case 4:
									return 35;
								default:
									break;
							}
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
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
								default:
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								case 1:
									return 6;
								case 2:
									return 7;
								case 3:
									return 8;
								case 4:
									return 9;
								default:
									break;
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								case 1:
									return 11;
								case 2:
									return 12;
								case 3:
									return 13;
								case 4:
									return 14;
								default:
									break;
							}
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								default:
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								default:
									break;
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								default:
									break;
							}
							break;
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								default:
									break;
							}
							break;
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								default:
									break;
							}
							break;
					}
					break;
			}
			break;
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						case 1:
							return 1;
						case 2:
							return 2;
						case 3:
							return 3;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 5;
						case 2:
							return 6;
						case 3:
							return 7;
						case 4:
							return 8;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						case 1:
							return 10;
						case 2:
							return 11;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						case 1:
							return 13;
						case 2:
							return 14;
						case 3:
							return 15;
						case 4:
							return 16;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						case 1:
							return 18;
						case 2:
							return 19;
						case 3:
							return 20;
						case 4:
							return 21;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						case 1:
							return 24;
						case 2:
							return 25;
						case 3:
							return 26;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						case 1:
							return 28;
						case 2:
							return 29;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						case 1:
							return 31;
						case 2:
							return 32;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						case 1:
							return 34;
						case 2:
							return 35;
						case 3:
							return 36;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						case 1:
							return 38;
						case 2:
							return 39;
						case 3:
							return 40;
						default:
							break;
					}
					break;
			}
			break;
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						case 1:
							return 1;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 4;
						case 2:
							return 5;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 7;
						case 2:
							return 8;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						case 1:
							return 10;
						case 2:
							return 11;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						case 1:
							return 13;
						case 2:
							return 14;
						default:
							break;
					}
					break;
			}
			break;
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						case 1:
							return 1;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 4;
						case 2:
							return 5;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 7;
						case 2:
							return 8;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						case 1:
							return 10;
						case 2:
							return 11;
						default:
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_746()
{
	bool bVar0;
	int iVar1[8];
	int iVar10;
	var uVar11;

	iVar10 = 0;
	while (iVar10 <= 7)
	{
		if (func_749(iVar10) && !func_747(141, iVar10, 0, 0))
		{
			iVar1[bVar0] = iVar10;
			bVar0++;
		}
		iVar10++;
	}
	uVar11 = iVar1[UNK_0x09AC81E49EA267F7(false, bVar0)];
	return uVar11;
}

bool func_747(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return false;
		default:
			break;
	}
	iVar1 = func_748(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8112)
		{
			if (Global_2506618.f_136[iVar0 /*2*/] == iVar1 && Global_2506618.f_136[iVar0 /*2*/].f_1 == func_745(iParam0, iParam1, iParam2, iParam3))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		case 139:
			return 14;
		case 141:
			return 16;
		case 133:
			return 9;
		case 138:
			return 13;
		case 144:
			return 17;
		case 132:
			return 8;
		case 131:
			return 10;
		case 146:
			return 18;
		case 129:
			return 11;
		case 140:
			return 15;
		case 236:
			return 19;
		case 150:
			return 20;
		default:
			break;
	}
	return -1;
}

bool func_749(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_11194)
			{
				return false;
			}
			break;
		case 4:
			if (Global_262145.f_11195)
			{
				return false;
			}
			break;
		case 2:
			if (Global_262145.f_11196)
			{
				return false;
			}
			break;
		case 1:
			if (Global_262145.f_11197)
			{
				return false;
			}
			break;
		case 3:
			if (Global_262145.f_11198)
			{
				return false;
			}
			break;
		case 5:
			if (Global_262145.f_11199)
			{
				return false;
			}
			break;
		case 6:
			if (Global_262145.f_11200)
			{
				return false;
			}
			break;
		case 7:
			if (Global_262145.f_11201)
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_750()
{
	int iVar0;

	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!UNK_0x8CD06866876216F2())
		{
			return false;
		}
		if (UNK_0x67CCE3DFA3467CAD())
		{
			return true;
		}
		if (func_704())
		{
			return false;
		}
		if (func_702(157))
		{
			return false;
		}
		if (iVar0 >= 3600)
		{
			return false;
		}
		SYSTEM::WAIT(0);
	}
	return false;
}

void func_751(int iParam0)
{
	func_728();
	func_752();
	func_730();
	Global_1574650.f_4 = iParam0;
	Global_1574650.f_5 = iParam0;
	func_230(iParam0, -1);
	func_258(&(Global_1574650.f_18), 0, 0);
	Global_2537071.f_4588 = 0;
	Global_2461747[0] = func_27();
	Global_2461747[1] = func_27();
	Global_2461747[2] = func_27();
	Global_2461747[3] = func_27();
	Global_2461747[4] = func_27();
	func_726();
	if (!func_328(func_329()))
	{
		func_427();
	}
	if (func_139() && !func_138())
	{
		UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 16);
	}
	else
	{
		UNK_0x5D96D8530B3D0904(&(Global_1574650.f_1), 17);
	}
}

void func_752()
{
	var uVar0;

	Global_1574675 = uVar0;
}

int func_753(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_710();
			}
			else
			{
				return 0;
			}
		}
		if (!func_288())
		{
			if (iParam0 == 0)
			{
				if (!UNK_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_710();
					}
					else
					{
						return 0;
					}
				}
				if (func_704())
				{
					if (!bParam2)
					{
						func_710();
					}
					else
					{
						return 0;
					}
				}
				if (func_702(157))
				{
					if (!bParam2)
					{
						func_710();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!UNK_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_710();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = UNK_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!UNK_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_710();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!UNK_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_710();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_754(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!UNK_0x8CD06866876216F2())
	{
		func_710();
	}
	UNK_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_16);
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		case 1:
			return 32;
		case 32:
			return 32;
		case 33:
			return 32;
		case 34:
			return 32;
		case 35:
			return 32;
		case 36:
			return 32;
		case 37:
			return 32;
		case 38:
			return 32;
		case 39:
			return 32;
		case 40:
			return 32;
		case 41:
			return 32;
		case 42:
			return 32;
		case 43:
			return 32;
		case 44:
			return 32;
		case 45:
			return 32;
		case 46:
			return 32;
		case 47:
			return 32;
		case 48:
			return 32;
		case 49:
			return 32;
		case 50:
			return 4;
		case 51:
			return 32;
		case 52:
			return 32;
		case 53:
			return 32;
		case 54:
			return 32;
		case 55:
			return 32;
		case 56:
			return 32;
		case 57:
			return 32;
		case 58:
			return 32;
		case 59:
			return 32;
		case 60:
			return 32;
		case 61:
			return 32;
		case 62:
			return 32;
		case 63:
			return 32;
		case 64:
			return 4;
		case 65:
			return 32;
		case 66:
			return 4;
		case 67:
			return 4;
		case 68:
			return 32;
		case 69:
			return 32;
		case 70:
			return 4;
		case 71:
			return 32;
		case 72:
			return 32;
		case 73:
		case 74:
			return 4;
		case 75:
			return 32;
		case 76:
			return 32;
		case 77:
			return 32;
		case 78:
			return 32;
		case 79:
			return 32;
		case 80:
			return 32;
		case 81:
			return 32;
		case 82:
			return 32;
		case 84:
			return 32;
		case 83:
			return 32;
		case 85:
			return 32;
		case 86:
			return 8;
		case 87:
			return 32;
		case 88:
			return 32;
		case 89:
			return 32;
		case 90:
			return 32;
		case 91:
			return 8;
		case 92:
			return 32;
		case 93:
			return 8;
		case 94:
			return 8;
		case 102:
			return 8;
		case 95:
			return 8;
		case 96:
			return 32;
		case 97:
			return 32;
		case 98:
			return 32;
		case 99:
			return 8;
		case 100:
			return 32;
		case 101:
			return 32;
		case 103:
			return 32;
		case 104:
			return 32;
		case 105:
			return 32;
		case 106:
			return 8;
		case 107:
			return 8;
		case 108:
			return 8;
		case 109:
			return 8;
		case 110:
			return 8;
		case 111:
			return 8;
		case 112:
			return 8;
		case 113:
			return 8;
		case 114:
			return 32;
		case 115:
			return 8;
		case 116:
			return 8;
		case 117:
			return 8;
		case 118:
			return 8;
		case 119:
			return 32;
		case 120:
			return 32;
		case 121:
			return 32;
		case 122:
			return 32;
		case 123:
			return 8;
		case 124:
			return 8;
		case 125:
			return 8;
		case 126:
			return 8;
		case 127:
			return 32;
		case 128:
			return 32;
		case 129:
			return 32;
		case 12:
			return 32;
		case 4:
			return 16;
		case 13:
			return 32;
		case 5:
			return 16;
		case 6:
			return 2;
		case 8:
			return 2;
		case 9:
			return 2;
		case 7:
			return 16;
		case 10:
			return 2;
		case 11:
			return 4;
		case 15:
			return 32;
		case 16:
			return 32;
		case 27:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 18:
			return 32;
		case 28:
			return 32;
		case 29:
			return 2;
		case 30:
			return 32;
		case 31:
			return 32;
		case 17:
			return 2;
		case 130:
			return 32;
		case 131:
			return 32;
		case 19:
			return 32;
		case 22:
			return 32;
		case 23:
			return 32;
		case 24:
			return 32;
		case 20:
			return 2;
		case 0:
			return 0;
		case 21:
			return 32;
		case 142:
			return 32;
		case 143:
			return 32;
		case 132:
			return 32;
		case 133:
			return 32;
		case 137:
			return 32;
		case 135:
			return 32;
		case 136:
			return 32;
		case 140:
			return 32;
		case 141:
			return 32;
		case 138:
			return 32;
		case 139:
			return 32;
		case 144:
			return 32;
		case 145:
			return 32;
		case 146:
			return 32;
		case 147:
			return 32;
		case 148:
			return 2;
		case 153:
			return 1;
		case 149:
			return 2;
		case 150:
			return 4;
		case 151:
			return 2;
		case 152:
			return 2;
		case 134:
			return 1;
		case 154:
			return 2;
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		case 176:
			return 1;
		case 161:
			return 4;
		case 164:
			return 4;
		case 165:
			return 1;
		case 166:
			return 1;
		case 172:
			return 1;
		case 168:
			return 2;
		case 173:
			return 1;
		case 169:
			return 1;
		case 167:
			return 2;
		case 170:
			return 8;
		case 171:
			return 8;
		case 174:
			return 1;
		case 162:
			return 16;
		case 163:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_756(bool bParam0, bool bParam1, bool bParam2)
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

