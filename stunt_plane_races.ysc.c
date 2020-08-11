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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	vector3 vLocal_30 = { 0f, 0f, 0f };
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	bool bLocal_43 = false;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	vector3 vLocal_48 = { 0f, 0f, 0f };
	struct<328> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_390 = 8;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 4;
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
	var uLocal_409 = 4;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 4;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 4;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 4;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 4;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 4;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 4;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	vector3 vLocal_517 = { 0f, 0f, 0f };
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	bool bLocal_525 = false;
	bool bLocal_526 = false;
	bool bLocal_527 = false;
	bool bLocal_528 = false;
	bool bLocal_529 = false;
	bool bLocal_530 = false;
	int iLocal_531[5] = { 0, 0, 0, 0, 0 };
	float fLocal_537 = 0f;
	float fLocal_538 = 0f;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	float fLocal_558 = 0f;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	bool bLocal_562 = false;
	var uLocal_563 = 35;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
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
	var uLocal_809 = 0;
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
	var uLocal_860 = 0;
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
	var uLocal_879 = 50;
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
	var uLocal_931 = 0;
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
	var uLocal_983 = 40;
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
	var uLocal_1032 = 0;
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
	var uLocal_1133 = 0;
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
	var uLocal_1314 = 0;
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
	var uLocal_1345 = 0;
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
	var uLocal_1395 = 0;
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
	var uLocal_1421 = 0;
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
	var uLocal_1437 = 0;
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
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 1;
	var uLocal_1540 = 0;
	var uLocal_1541 = 1;
	var uLocal_1542 = 1;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 1;
	var uLocal_1547 = 1;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 3;
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
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 4;
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
	var uLocal_1614 = 0;
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
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 2;
	var uLocal_1664 = 0;
	var uLocal_1665 = 4;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 4;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 12;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 3;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	int iLocal_1987 = 0;
	var uLocal_1988 = 0;
	int iLocal_1989 = 0;
	int iLocal_1990 = 0;
	bool bLocal_1991 = false;
	int iLocal_1992 = 0;
	int iLocal_1993 = 0;
	int iLocal_1994 = 0;
	int iLocal_1995 = 0;
	int iLocal_1996 = 0;
	int iLocal_1997 = 0;
	int iLocal_1998 = 0;
	int iLocal_1999 = 0;
	int iLocal_2000 = 0;
	int iLocal_2001 = 0;
	int iLocal_2002 = 0;
	int iLocal_2003 = 0;
	int iLocal_2004 = 0;
	int iLocal_2005 = 0;
	int iLocal_2006 = 0;
	int iLocal_2007 = 0;
	bool bLocal_2008 = false;
	bool bLocal_2009 = false;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	int iLocal_2046 = 0;
	int iLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	int iLocal_2053[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2059[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2065[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2071 = 0;
	int iLocal_2072 = 0;
	char* sLocal_2073 = NULL;
	float fLocal_2074 = 0f;
	int iLocal_2075 = 0;
	int iLocal_2076 = 0;
	int iLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	int iLocal_2081 = 0;
	var uLocal_2082 = 16;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	bool bLocal_2247 = false;
	float fLocal_2248 = 0f;
	float fLocal_2249 = 0f;
	bool bLocal_2250 = false;
	bool bLocal_2251 = false;
	vector3 vLocal_2252 = { 0f, 0f, 0f };
	vector3 vLocal_2255 = { 0f, 0f, 0f };
	vector3 vLocal_2258 = { 0f, 0f, 0f };
	float fLocal_2261 = 0f;
	float fLocal_2262 = 0f;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = -1;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 1000;
	var uLocal_2273 = 1000;
	var uLocal_2274 = 0;
	bool bLocal_2275 = false;
	bool bLocal_2276 = false;
	bool bLocal_2277 = false;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	bool bLocal_2287 = false;
	int iLocal_2288 = 0;
	int iLocal_2289 = 0;
	struct<7> Local_2290 = { 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	int iLocal_2302 = 0;
	int iLocal_2303 = 0;
	bool bLocal_2304 = false;
	bool bLocal_2305 = false;
	char* sLocal_2306 = NULL;
	vector3 vLocal_2307 = { 0f, 0f, 0f };
	vector3 vLocal_2310 = { 0f, 0f, 0f };
	int iLocal_2313 = 0;
	int iLocal_2314 = 0;
	int iLocal_2315 = 0;
	int iLocal_2316 = 0;
	int iLocal_2317 = 0;
	int iLocal_2318 = 0;
	int iLocal_2319 = 0;
	int iLocal_2320 = 0;
	struct<7> Local_2321 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 1132396544;
	var uLocal_2332 = 1132396544;
	var uLocal_2333 = 1132396544;
	var uLocal_2334 = 0;
	var uLocal_2335 = -1082130432;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 8;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
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
	var uLocal_2395 = -1;
	var uLocal_2396 = 1092616192;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	bool bLocal_2405 = false;
	bool bLocal_2406 = false;
	bool bLocal_2407 = false;
	bool bLocal_2408 = false;
	var uLocal_2409 = 0;
	bool bLocal_2410 = false;
	int iLocal_2411 = 0;
	struct<2863> Local_2412 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_5275 = 1;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	vector3 vLocal_5280 = { 0f, 0f, 0f };
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_45 = { 1691.228f, 3251.785f, 44.2574f };
	vLocal_48 = { 2.5652f, 0f, -4.1481f };
	vLocal_517 = { 500f, 500f, 500f };
	iLocal_520 = -1;
	bLocal_529 = true;
	fLocal_537 = 0.008f;
	fLocal_538 = 0.013f;
	fLocal_558 = ((0.05f + 0.275f) - 0.01f);
	fLocal_2074 = -1f;
	iLocal_2075 = 1;
	fLocal_2248 = 0.2f;
	fLocal_2249 = 0.2f;
	fLocal_2262 = 0f;
	bLocal_2275 = "SPR_UI_FAILD";
	bLocal_2276 = "SPR_UI_FRETRY";
	bLocal_2304 = "CHECKPOINT_NORMAL";
	bLocal_2305 = "CHECKPOINT_MISSED";
	sLocal_2306 = "CHECKPOINT_PERFECT";
	vLocal_2307 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_2310 = { 8.79494f, 0.59893f, 154.8464f };
	bLocal_2407 = true;
	bLocal_2408 = true;
	bLocal_2410 = true;
	vLocal_5280 = { -1497.708f, -3449.576f, 7.3477f };
	if (UNK_0x2EBF608FFE6CA406(114))
	{
		func_599();
	}
	UNK_0x7798376279BB5369(1);
	Local_2321.f_1 = 0;
	Local_2321.f_5 = 0;
	Local_2321.f_6 = 0;
	while (true)
	{
		func_598();
		switch (Local_2321.f_1)
		{
			case 0:
				if (!func_587())
				{
					Local_2321.f_1 = 1;
				}
				break;
			case 1:
				if (!func_1())
				{
					Local_2321.f_1 = 2;
				}
				break;
			case 2:
				func_599();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;

	if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
	}
	if (UNK_0xC844350D5D58C99A(Local_51.f_1))
	{
		if (!UNK_0x437347B10A200C4B(Local_51.f_1, 0))
		{
			if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_51.f_1, 0))
			{
				if (UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9()))
				{
					Local_51.f_1 = UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9());
				}
			}
		}
	}
	else if (UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9()))
	{
		Local_51.f_1 = UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9());
	}
	else
	{
		Local_51.f_1 = UNK_0x83C1D4B63BBD91F6(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 10f, joaat("STUNT"), 0);
	}
	if (Local_2412.f_2861 != 0)
	{
		Local_2412.f_2862 = (Local_2412.f_2862 - 25);
		if (Local_2412.f_2862 <= 0)
		{
			UNK_0xE223EB8FE6F8CC15(Local_2412.f_2861);
			Local_2412.f_2861 = 0;
			bLocal_2277 = false;
		}
		else
		{
			if (bLocal_2277)
			{
				bVar4 = 6;
			}
			else
			{
				bVar4 = true;
			}
			func_584(func_585(bVar4), &bVar0, &bVar1, &bVar2, &uVar3);
			UNK_0xF0B0A50DF3EA0E70(Local_2412.f_2861, bVar0, bVar1, bVar2, func_583(SYSTEM::CEIL((1.5f * IntToFloat(Local_2412.f_2862))), 255));
			UNK_0xF08C5AE8AC5C7427(Local_2412.f_2861, bVar0, bVar1, bVar2, Local_2412.f_2862);
		}
	}
	func_582();
	UNK_0x3F44493428307317("AMMUNATION");
	UNK_0x38C3A68D7861DCFD(0, 99, 1);
	UNK_0x38C3A68D7861DCFD(0, 100, 1);
	if (Local_2321.f_6 == 4)
	{
		UNK_0x34FABD75496259E4(UNK_0xD803B885F5E47A62());
		UNK_0x7800CEC090C01D4D(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 10f);
		if (UNK_0xDF1306B443CD3D15(Local_51.f_1, 0))
		{
			if (UNK_0x4E861BC5B1EDA7BD(Local_51.f_1))
			{
				UNK_0x98B861C98966897A(Local_51.f_1);
			}
		}
	}
	switch (Local_2321.f_6)
	{
		case 0:
			UNK_0x5CEB4DB888A62073(false);
			Local_2321 = -1;
			Local_51.f_10 = 0;
			UNK_0xE342F209E49C5314(1734.802f, 3224.105f, 41.3709f, 1762.067f, 3258.69f, 40.5188f, false, 1);
			if (UNK_0xC844350D5D58C99A(Local_51.f_1))
			{
				UNK_0x71EDC33E5A423750(Local_51.f_1, 1);
				Local_2412.f_2859 = 0;
				Local_2321.f_6 = 3;
			}
			else
			{
				Local_2321.f_6 = 1;
			}
			break;
		case 1:
			Local_2321.f_6 = 18;
			break;
		case 2:
			if (UNK_0xC844350D5D58C99A(Local_51.f_1))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 512);
				UNK_0x71EDC33E5A423750(Local_51.f_1, 1);
				Local_2412.f_2859 = 0;
				Local_2321.f_6 = 3;
			}
			break;
		case 3:
			if (Local_2412)
			{
			}
			else if ((UNK_0x9F4FE516EAACCFC5(iLocal_2046) && UNK_0xFBB4F23D534EB790(iLocal_2046)) && UNK_0x0F1CCD77290EE12F())
			{
				if (UNK_0x9F4FE516EAACCFC5(Local_2412.f_2858))
				{
					UNK_0x9A8DDC7C522F5BF5(Local_2412.f_2858, 0);
				}
				UNK_0x9A1335ECD7BD117F("MinigameTransitionOut");
				UNK_0x82A772610883F395("MinigameTransitionIn", 0, 1);
				Local_2412.f_2858 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_45, vLocal_48, 34.9705f, 1, 2);
				UNK_0x0185A047F396C3B9(0);
				UNK_0xF3039DE1FDB4F6FD(0);
				UNK_0x82A772610883F395("MinigameTransitionOut", 0, 0);
				UNK_0x608A456FDD8A83D8(iLocal_2046, vLocal_45.x, vLocal_45.y, (vLocal_45.z + 1000f));
				UNK_0x5F3CBA6EB9341C90(iLocal_2046, 90f, vLocal_48.y, vLocal_48.z, 2);
				UNK_0xF1E4C781086FABC1(Local_2412.f_2858, iLocal_2046, 500, 1, 1);
				UNK_0x4D7F4CC43D4D0DE3(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			}
			else
			{
				func_581(500);
				if (UNK_0x9F4FE516EAACCFC5(Local_2412.f_2858))
				{
					UNK_0x9A8DDC7C522F5BF5(Local_2412.f_2858, 0);
				}
				Local_2412.f_2858 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_45, vLocal_48, 34.9705f, 1, 2);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			}
			func_580(&iLocal_2297);
			func_579(1);
			UNK_0x066C43E677C08D5C();
			Local_2321.f_6 = 4;
			break;
		case 4:
			if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0x437347B10A200C4B(Local_51.f_1, 0))
			{
				UNK_0x56FDC9ADE35F7DB0(Local_51.f_1, true, false, 0);
			}
			if (UNK_0x0EFF6B4415DAF4A1())
			{
				UNK_0x38C3A68D7861DCFD(2, 199, 1);
			}
			UNK_0x38C3A68D7861DCFD(2, 200, 1);
			UNK_0xBFE31971E49FA500(0);
			Local_2412.f_2 = Local_2412;
			if (Local_2412)
			{
				if (UNK_0xC844350D5D58C99A(Local_2412.f_358[0 /*189*/].f_9))
				{
					UNK_0x71EDC33E5A423750(Local_2412.f_358[0 /*189*/].f_9, 4);
				}
				iLocal_1990 = 0;
				Local_2412 = false;
				func_548();
				Local_2321.f_6 = 8;
			}
			else if (Local_2412.f_2859)
			{
				if (UNK_0x1963B11DE70153E0())
				{
					if ((Local_2412.f_2859 && UNK_0xB9132A06AE472728(2, 202)) && SYSTEM::TIMERA() > 500)
					{
						UNK_0x22293E611B2408F1(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
						Local_2412.f_2859 = 0;
						Local_2412.f_2860 = 1;
						func_547(&(Local_51.f_119));
						SYSTEM::SETTIMERA(0);
					}
					if (!Local_2412.f_2860 && func_546(&uLocal_1550))
					{
						Local_2412.f_2860 = 1;
						func_544(Local_2412.f_2860);
					}
					func_481(&(Local_51.f_118), Global_110668, &(Local_51.f_24[Global_110668 /*8*/]));
				}
				else if (func_471(&iLocal_1987, 0))
				{
					Local_2412.f_2859 = 0;
					iLocal_1987 = 0;
					func_547(&(Local_51.f_119));
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if ((func_432(&Local_2412, 0) && !bLocal_527) && !bLocal_526)
				{
					func_547(&(Local_51.f_119));
				}
				if (bLocal_530 && UNK_0x1963B11DE70153E0())
				{
					func_547(&(Local_51.f_119));
					bLocal_530 = false;
				}
				if ((((!Local_2412.f_2859 && !bLocal_527) && !bLocal_526) && (bLocal_529 || !UNK_0x1963B11DE70153E0())) && (UNK_0xB9132A06AE472728(2, 211) || UNK_0x9A01369A10646AFE(2, 211)))
				{
					Local_2412.f_2859 = 1;
					UNK_0x22293E611B2408F1(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					func_431(&uLocal_1550);
					Local_2412.f_2860 = func_546(&uLocal_1550);
					func_544(Local_2412.f_2860);
					SYSTEM::SETTIMERA(0);
				}
				if (func_372(&uLocal_5275, &(Local_2412.f_1)))
				{
					iLocal_1990 = 0;
					if (Local_51.f_10 != -1)
					{
						func_364();
						func_548();
						if (UNK_0x5A91F08DF773C39D(Local_51.f_1, vLocal_2307, 5f, 5f, 5f, false, true, 0))
						{
							if (!UNK_0x437347B10A200C4B(Local_51.f_1, 0))
							{
								func_363(&uLocal_5277);
								Local_2321.f_6 = 8;
							}
						}
						else if (!UNK_0x437347B10A200C4B(Local_51.f_1, 0))
						{
							Local_2321.f_6 = 8;
						}
					}
					else
					{
						Local_2321.f_6 = 7;
					}
				}
			}
			break;
		case 7:
			UNK_0x3FC8DBCC154CA56B();
			if (UNK_0xDF1306B443CD3D15(Local_51.f_1, 0))
			{
				UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				Local_2321.f_6 = 18;
			}
			else
			{
				if (UNK_0xC844350D5D58C99A(Local_2412.f_358[0 /*189*/].f_9))
				{
					UNK_0x1E9649458B15960F(Local_2412.f_358[0 /*189*/].f_9, false);
				}
				UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vLocal_2307, 1, 0, 0, 1);
				UNK_0xC023D1C4BF532815(UNK_0x16F2683693E537C9(), vLocal_2310, 2, 1);
				if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					UNK_0xB9FD7450C0DAB575(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 1084227584 /* Float: 5f */);
				}
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				if (UNK_0xC844350D5D58C99A(Local_2412.f_358[0 /*189*/].f_9))
				{
					if (!UNK_0xEB880D98B5988D0C())
					{
						UNK_0xD67D6A3F0D653D93(vLocal_2307, UNK_0x08D89CE2E20AE305(UNK_0x16F2683693E537C9()), 500f, 0);
					}
					if (UNK_0x68367101660E33F0())
					{
						UNK_0x486B4ADE317F0689();
						Local_2321.f_6 = 18;
					}
				}
				else
				{
					Local_2321.f_6 = 18;
				}
			}
			break;
		case 8:
			UNK_0x9501364A300048C6();
			if (Local_51.f_10 == 0)
			{
				UNK_0xC55F2A0377488064(Local_51.f_1);
				if (func_362(iLocal_2288, 16))
				{
					func_360(&iLocal_2288, 16);
				}
				UNK_0x56FDC9ADE35F7DB0(Local_51.f_1, true, true, 0);
				UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_51.f_1, -1);
				UNK_0x51B954DAB1BCAF73(Local_51.f_1);
				func_359();
				iLocal_2046 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 1702.487f, 3279.545f, 41.9968f, -2.9399f, 0f, 110.4428f, 45.0218f, 1, 2);
				UNK_0xE3BB8E05FCEB3FBE(Local_2412.f_2858, false);
				Local_2321.f_6 = 9;
			}
			else if (func_358(1000))
			{
				UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0x51B954DAB1BCAF73(Local_51.f_1);
				UNK_0xC55F2A0377488064(Local_51.f_1);
				if (UNK_0x757EF87A33649210())
				{
					func_359();
					Local_2321.f_6 = 10;
				}
			}
			break;
		case 9:
			if (!((UNK_0xFBB4F23D534EB790(iLocal_2046) && UNK_0xFA06B985B30FB0FC(iLocal_2046)) || (UNK_0xFBB4F23D534EB790(Local_2412.f_2858) && UNK_0xFA06B985B30FB0FC(Local_2412.f_2858))))
			{
				UNK_0x04B065D07D2FB5B9(1, 0, 3, 0);
				func_359();
				Local_2321.f_6 = 10;
			}
			break;
		case 10:
			Local_2412.f_25 = 0;
			Local_2321.f_6 = 11;
			break;
		case 11:
			if (!func_344(&Local_2412))
			{
				func_579(1);
				if (Local_2412.f_2)
				{
					UNK_0xD67D6A3F0D653D93(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x08D89CE2E20AE305(UNK_0x16F2683693E537C9()), 500f, 0);
				}
				if (Local_51.f_10 == 0)
				{
					func_343("SPR_TAXI_GATE", 10000, 1);
					if (!func_362(iLocal_2288, 16))
					{
						func_335(&Local_2412, 0, 1);
						func_334(&iLocal_2288, 16);
					}
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						UNK_0x1E9649458B15960F(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), false);
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
					}
					UNK_0x8BCB70EB440DED83(1);
					UNK_0xBFE31971E49FA500(1);
					Local_2321.f_6 = 13;
				}
				else
				{
					Local_2321.f_6 = 13;
				}
				Local_2412.f_2 = 0;
			}
			break;
		case 13:
			if (!UNK_0xEB880D98B5988D0C() || UNK_0x68367101660E33F0())
			{
				if (UNK_0xEB880D98B5988D0C())
				{
					UNK_0x486B4ADE317F0689();
				}
				UNK_0x0185A047F396C3B9(0);
				UNK_0xF3039DE1FDB4F6FD(1);
				UNK_0x1E9649458B15960F(Local_2412.f_358[0 /*189*/].f_9, false);
				func_359();
				if (func_362(iLocal_2288, 16))
				{
					func_360(&iLocal_2288, 16);
				}
				if (Local_51.f_10 == 0)
				{
					if (func_581(500))
					{
						Local_2412.f_26 = 0;
						Local_2321.f_6 = 14;
					}
				}
				else
				{
					func_333(&Local_2412);
					UNK_0x2FB9A57162E54BAB(0f);
					UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					if (func_581(500))
					{
						Local_2412.f_26 = 0;
						Local_2321.f_6 = 14;
					}
				}
			}
			break;
		case 14:
			if (Local_2321 == 1)
			{
				return true;
			}
			if (func_24(&Local_2412))
			{
				return true;
			}
			iLocal_1990 = 3;
			func_23();
			func_13();
			if (!Local_2412)
			{
				func_10(&(Local_2412.f_6));
				func_9(&(Local_2412.f_358[0 /*189*/]), Local_51.f_3, Local_51.f_6, 0f);
				if (UNK_0xC844350D5D58C99A(Local_2412.f_358[0 /*189*/].f_9))
				{
					UNK_0xB9FD7450C0DAB575(Local_2412.f_358[0 /*189*/].f_9, 1084227584 /* Float: 5f */);
				}
				if (UNK_0xD67D6A3F0D653D93(vLocal_45, func_8(vLocal_48), 4500f, 0))
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
					while (!UNK_0x68367101660E33F0() && func_5(&(Local_2412.f_6)) < 20f)
					{
						SYSTEM::WAIT(0);
					}
					UNK_0x486B4ADE317F0689();
					UNK_0xF49D1BC9EF1C3EF4(vLocal_45, func_8(vLocal_48));
					func_4(&(Local_2412.f_6));
					Local_2321.f_6 = 15;
				}
				else if (func_2(&(Local_2412.f_6), 20f))
				{
					func_4(&(Local_2412.f_6));
					Local_2321.f_6 = 15;
				}
			}
			else
			{
				Local_2321.f_6 = 3;
			}
			break;
		case 15:
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				UNK_0x71EDC33E5A423750(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 1);
			}
			Local_2412.f_2859 = 0;
			Local_2321.f_6 = 3;
			break;
		case 18:
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				UNK_0x71EDC33E5A423750(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 1);
			}
			func_432(&Local_2412, 1);
			if (UNK_0x757EF87A33649210())
			{
				func_581(1000);
			}
			else
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_2(bool bParam0, float fParam1)
{
	if (func_3(bParam0))
	{
		if (func_5(bParam0) > fParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_3(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, true);
}

void func_4(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

float func_5(bool bParam0)
{
	if (func_3(bParam0))
	{
		if (func_7(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_6(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return bParam0->f_1;
}

float func_6(bool bParam0)
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

bool func_7(bool bParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(*bParam0, 2);
}

Vector3 func_8(vector3 vParam0)
{
	return (-SYSTEM::SIN(vParam0.z) * SYSTEM::COS(vParam0.x)), (SYSTEM::COS(vParam0.z) * SYSTEM::COS(vParam0.x)), SYSTEM::SIN(vParam0.x);
}

void func_9(var uParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	UNK_0xA47B46945FF6DE74(uParam0->f_9, vParam1, 1, 0, 0, 1);
	UNK_0xD8F6A53F4799FAFE(uParam0->f_9, bParam4);
	UNK_0x1AEF7184B203A58D(uParam0->f_9, bParam5);
}

void func_10(bool bParam0)
{
	if (!func_3(bParam0))
	{
		func_363(bParam0);
	}
	else
	{
		func_11(bParam0);
	}
}

void func_11(bool bParam0)
{
	func_12(bParam0, 0f);
}

void func_12(bool bParam0, float fParam1)
{
	bParam0->f_1 = (func_6(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - fParam1);
	UNK_0x5D96D8530B3D0904(bParam0, true);
	UNK_0x0674E58A79778E99(bParam0, 2);
	bParam0->f_2 = 0f;
}

void func_13()
{
	if (Global_111638.f_19038.f_12[4 /*8*/].f_4 == 1)
	{
		if (Global_111638.f_19038.f_6[4] > 0f)
		{
			if (Global_111638.f_19038.f_6[4] <= func_22(4))
			{
				func_14(125, 0, 0);
			}
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2)
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
		func_20((891 + iParam0), 1, -1, 1);
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
		func_15();
	}
}

void func_15()
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
		func_19(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!UNK_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_18() == 2 == 0 && !UNK_0x8CD06866876216F2())
			{
				if (UNK_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_16();
				}
			}
		}
	}
}

int func_16()
{
	if (func_17(0))
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

bool func_17(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

int func_18()
{
	return Global_30768;
}

int func_19(int iParam0, bool bParam1)
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

int func_20(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
		bParam2 = func_21();
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

int func_21()
{
	return Global_1312745;
}

float func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 130f;
		case 1:
			return 120f;
		case 2:
			return 120f;
		case 3:
			return 170f;
		case 4:
			return 180f;
	}
	return -1f;
}

void func_23()
{
	iLocal_2313 = 0;
	iLocal_2314 = 0;
	iLocal_2315 = 0;
	iLocal_2316 = 0;
	iLocal_2317 = 0;
	iLocal_2318 = 0;
	iLocal_2319 = 0;
	iLocal_2320 = 0;
}

bool func_24(bool bParam0)
{
	switch (bParam0->f_26)
	{
		case 0:
			func_360(&iLocal_2288, 4);
			UNK_0x3584F71E5CA29322(2);
			func_332(bParam0);
			bParam0->f_17 = func_331();
			if (Local_51.f_10 == 0)
			{
				if (!func_362(iLocal_2288, 16))
				{
					func_335(bParam0, 0, 1);
					func_335(bParam0, 1, 0);
					func_334(&iLocal_2288, 16);
				}
			}
			else
			{
				func_333(bParam0);
				if (!func_362(iLocal_2288, 16))
				{
					func_335(bParam0, 0, 1);
					func_335(bParam0, 1, 0);
					func_334(&iLocal_2288, 16);
				}
			}
			func_4(&(bParam0->f_14));
			iLocal_2302 = 0;
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
			bParam0->f_26 = 1;
			break;
		case 1:
			UNK_0x3584F71E5CA29322(2);
			if (Local_51.f_10 == 0)
			{
				if (func_362(iLocal_2288, 16))
				{
					func_360(&iLocal_2288, 16);
				}
				func_329(bParam0);
				bParam0->f_26 = 7;
			}
			else
			{
				func_333(bParam0);
				if (!func_304(&(bParam0->f_14)))
				{
					if (!UNK_0x7686B2698B4F28AD())
					{
						UNK_0xB3A1B75CB59FEB56(false, true, 3000, 1, 0, 0);
					}
					if (func_362(iLocal_2288, 16))
					{
						func_360(&iLocal_2288, 16);
					}
					UNK_0x8BCB70EB440DED83(1);
					func_329(bParam0);
					if (Local_51.f_10 == 0 && (Global_111638.f_19038.f_6[0] > Local_51.f_112[0] || Global_111638.f_19038.f_6[0] == 0f))
					{
						func_303("SPR_HELP_GATE", 10000);
					}
					bParam0->f_26 = 7;
				}
			}
			break;
		case 2:
			if (!func_362(iLocal_2288, 1))
			{
				SYSTEM::SETTIMERA(0);
				func_264(bParam0);
				func_263(&(Local_51.f_119), 0, 0, 1, 1);
				func_262(&(Local_51.f_119), "SPR_CONT2", 2, 201, 1, 1, 0);
				func_261(&(Local_51.f_119), 1);
				func_334(&iLocal_2288, 1);
			}
			if (UNK_0xFEBC1E4EC9E001F0())
			{
				UNK_0xA37A90C62806D848(1);
			}
			if (func_260("SPR_RETR_FAIL", 0, 0))
			{
				UNK_0x790015DC92C918E2();
			}
			if (UNK_0xFEBC1E4EC9E001F0())
			{
				UNK_0xA37A90C62806D848(1);
			}
			if (func_260("SPR_RETR_FAIL", 0, 0))
			{
				UNK_0x790015DC92C918E2();
			}
			SYSTEM::SETTIMERA(0);
			func_258();
			func_257(0);
			UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
			UNK_0x85A7389D2B63E61A(UNK_0xD803B885F5E47A62(), 0, 0);
			UNK_0x38C3A68D7861DCFD(0, 75, 1);
			func_256(1);
			bParam0->f_26 = 4;
			break;
		case 4:
			UNK_0x38C3A68D7861DCFD(0, 75, 1);
			func_254();
			if (!UNK_0x437347B10A200C4B(bParam0->f_358[0 /*189*/].f_9, 0))
			{
				if (!UNK_0x0A059E0DB9253280(bParam0->f_358[0 /*189*/].f_9) && UNK_0x9F4FE516EAACCFC5(iLocal_2047))
				{
					UNK_0x17D61C69BA58F815(iLocal_2047, 2);
					UNK_0x4A4806F9D471E491(bParam0->f_358[0 /*189*/].f_9, false, 0);
					UNK_0x1E9649458B15960F(bParam0->f_358[0 /*189*/].f_9, true);
					func_253();
				}
			}
			if (!func_239(bParam0, bLocal_2407, bLocal_2408))
			{
				func_253();
				func_238(0);
				UNK_0xA37A90C62806D848(1);
				if (func_362(iLocal_2288, 1))
				{
					func_360(&iLocal_2288, 1);
				}
				func_237(0, 0);
				if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
				{
					UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
				}
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0x5CEB4DB888A62073(false);
				iLocal_2411 = UNK_0xD68EA767274B7444();
				UNK_0x4D7F4CC43D4D0DE3(iLocal_2411, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				func_4(&uLocal_2278);
				bParam0->f_26 = 5;
			}
			break;
		case 5:
			if (!UNK_0x437347B10A200C4B(bParam0->f_358[0 /*189*/].f_9, 0))
			{
				UNK_0xA47B46945FF6DE74(bParam0->f_358[0 /*189*/].f_9, vLocal_2307, 1, 0, 0, 1);
				UNK_0xC023D1C4BF532815(bParam0->f_358[0 /*189*/].f_9, vLocal_2310, 2, 1);
				UNK_0x4A4806F9D471E491(bParam0->f_358[0 /*189*/].f_9, true, 0);
				UNK_0x38C3A68D7861DCFD(0, 75, 1);
				UNK_0xB9FD7450C0DAB575(bParam0->f_358[0 /*189*/].f_9, 1084227584 /* Float: 5f */);
				UNK_0xE121AE1BBF90E186(bParam0->f_358[0 /*189*/].f_9, false);
			}
			bLocal_2406 = false;
			bParam0->f_26 = 6;
			bParam0->f_358[0 /*189*/].f_23 = 7;
			break;
		case 6:
			bParam0->f_26 = 8;
			break;
		case 7:
			UNK_0xEF45C43067063F18(iLocal_2297, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!func_362(iLocal_2288, 16))
			{
				func_335(bParam0, 0, 1);
				func_335(bParam0, 1, 0);
				func_334(&iLocal_2288, 16);
				func_257(1);
				func_236(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 /*10*/]);
			}
			if (bParam0->f_1)
			{
				func_202(bParam0);
				func_200(bParam0);
			}
			else
			{
				func_197(&uLocal_2263, 0);
				func_253();
				UNK_0xF3039DE1FDB4F6FD(0);
			}
			if (!func_41(bParam0, Local_51))
			{
				UNK_0xC92DB9682A650680("MGSP_END");
				func_28(bParam0);
				func_4(&(bParam0->f_14));
				bParam0->f_26 = 2;
				func_4(&(bParam0->f_22));
			}
			break;
		case 8:
			UNK_0x38C3A68D7861DCFD(0, 75, 1);
			func_27(&(bParam0->f_17));
			func_253();
			func_25();
			return false;
	}
	return true;
}

void func_25()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_362(iLocal_2071, iVar0))
		{
			func_360(&iLocal_2071, iVar0);
		}
		if (func_362(iLocal_2072, iVar0))
		{
			func_360(&iLocal_2072, iVar0);
		}
		if (UNK_0xC844350D5D58C99A(iLocal_2059[iVar0]))
		{
			UNK_0xA954465BA6FDEFE2(&(iLocal_2059[iVar0]));
		}
		if (UNK_0xC844350D5D58C99A(iLocal_2065[iVar0]))
		{
			UNK_0xEBA53F35D0085654(&(iLocal_2065[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_2053);
	iVar0 = 0;
	while (iVar0 < iLocal_2053)
	{
		iLocal_2053[iVar0] = 0;
		iVar0++;
	}
}

void func_26(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			UNK_0x71199B01895C6202((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_27(int iParam0)
{
	if (UNK_0x83D8570832F172A7(*iParam0))
	{
		UNK_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
}

void func_28(bool bParam0)
{
	int iVar0;

	if (!func_7(&(bParam0->f_3)))
	{
		func_40(&(bParam0->f_3));
	}
	UNK_0xE121AE1BBF90E186(bParam0->f_358[0 /*189*/].f_9, true);
	UNK_0x38C3A68D7861DCFD(0, 75, 1);
	func_39(bParam0);
	if (Local_51 == 0)
	{
		func_38(bParam0);
	}
	func_32(bParam0);
	iVar0 = 0;
	while (iVar0 < bParam0->f_13)
	{
		func_30(&(bParam0->f_358[iVar0 /*189*/]));
		if (iVar0 != 0)
		{
			func_29(&(bParam0->f_358[iVar0 /*189*/]));
		}
		iVar0++;
	}
}

void func_29(var uParam0)
{
}

void func_30(var uParam0)
{
	if (!UNK_0x437347B10A200C4B(uParam0->f_9, 0))
	{
		if (Local_51 != 0)
		{
			func_31();
		}
	}
}

void func_31()
{
}

void func_32(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 0;
	while (iVar0 < bParam0->f_13)
	{
		if (!UNK_0x437347B10A200C4B(bParam0->f_358[iVar0 /*189*/].f_8, 0))
		{
			if (bParam0->f_358[iVar0 /*189*/].f_8 == UNK_0x16F2683693E537C9())
			{
				iVar1 = func_37(Local_51.f_10);
				if (iVar1 <= 0 || iVar1 > bParam0->f_358[iVar0 /*189*/].f_12)
				{
					func_36(Local_51.f_10, bParam0->f_358[iVar0 /*189*/].f_12);
				}
				fVar2 = func_35(Local_51.f_10);
				func_34(Local_51.f_10, SYSTEM::TO_FLOAT(SYSTEM::CEIL(bParam0->f_358[0 /*189*/].f_13)));
				if (fVar2 == 0f || fVar2 > bParam0->f_358[0 /*189*/].f_13)
				{
					func_33(Local_51.f_10, SYSTEM::TO_FLOAT(SYSTEM::CEIL(bParam0->f_358[0 /*189*/].f_13)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, float fParam1)
{
	Global_111638.f_19038.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)
{
	Local_51.f_18[iParam0] = fParam1;
}

float func_35(int iParam0)
{
	var uVar0;

	uVar0 = Global_111638.f_19038.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)
{
	Global_111638.f_19038[iParam0] = uParam1;
}

int func_37(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = Global_111638.f_19038[iParam0];
	return iVar0;
}

void func_38(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < bParam0->f_13)
	{
		iVar2 = 1;
		iVar1 = 0;
		while (iVar1 < bParam0->f_13)
		{
			if (iVar0 != iVar1)
			{
				if (bParam0->f_358[iVar0 /*189*/].f_13 > bParam0->f_358[iVar1 /*189*/].f_13)
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		bParam0->f_358[iVar0 /*189*/].f_12 = iVar2;
		iVar0++;
	}
}

void func_39(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < bParam0->f_13)
	{
		if (bParam0->f_358[iVar0 /*189*/].f_11 != bParam0->f_12)
		{
			bParam0->f_358[iVar0 /*189*/].f_13 = (bParam0->f_358[0 /*189*/].f_13 + (IntToFloat((bParam0->f_12 - bParam0->f_358[iVar0 /*189*/].f_11)) * UNK_0x79833B02DBD2A244(0.5f, 2.5f)));
		}
		iVar0++;
	}
}

void func_40(bool bParam0)
{
	if (func_3(bParam0))
	{
		if (!func_7(bParam0))
		{
			bParam0->f_2 = (func_6(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
			UNK_0x5D96D8530B3D0904(bParam0, 2);
		}
	}
}

bool func_41(bool bParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	struct<10> Var2;
	struct<10> Var12;
	bool bVar22;
	bool bVar23;
	int iVar24;
	char cVar25[16];

	if (Local_51.f_10 == 0)
	{
		if (bParam0->f_358[0 /*189*/].f_11 == 0)
		{
			func_11(&(bParam0->f_3));
			if (func_362(iLocal_2289, 131072))
			{
				UNK_0xB0E9868F5DDD25D3(bParam0->f_358[0 /*189*/].f_9, 4);
				func_360(&iLocal_2289, 131072);
			}
		}
		else if (bParam0->f_358[0 /*189*/].f_11 == 1 && !func_362(iLocal_2289, 131072))
		{
			func_303("SPR_INFO_BON", 10000);
			func_334(&iLocal_2289, 131072);
			if (func_362(iLocal_2289, 262144))
			{
				func_360(&iLocal_2289, 262144);
			}
		}
		else if (bParam0->f_358[0 /*189*/].f_11 == 4 && !func_362(iLocal_2289, 262144))
		{
			func_303("SPR_INFO_RESET", 10000);
			func_334(&iLocal_2289, 262144);
		}
	}
	if (func_3(&(bParam0->f_3)))
	{
		fVar0 = func_5(&(bParam0->f_3));
	}
	func_179(bParam0->f_358[0 /*189*/].f_11, bParam0->f_1);
	UNK_0x38C3A68D7861DCFD(0, 75, 1);
	iVar1 = 0;
	while (iVar1 < bParam0->f_13)
	{
		if (bParam0->f_358[iVar1 /*189*/].f_11 < bParam0->f_12)
		{
			bVar23 = false;
			if (bParam0->f_358[iVar1 /*189*/].f_8 == UNK_0x16F2683693E537C9())
			{
				bVar23 = true;
			}
			bVar22 = bParam0->f_358[iVar1 /*189*/].f_11;
			if (bParam0->f_358[iVar1 /*189*/].f_11 >= bParam0->f_12)
			{
				Var2 = { bParam0->f_27[(bParam0->f_12 - 1) /*10*/] };
			}
			else
			{
				Var2 = { bParam0->f_27[bVar22 /*10*/] };
			}
			if (bVar22 < (bParam0->f_12 - 1))
			{
				Var12 = { bParam0->f_27[bVar22 + 1 /*10*/] };
			}
			else
			{
				Var12 = { Var2 };
			}
			if (bVar22 != bParam0->f_12)
			{
				bParam0->f_358[iVar1 /*189*/].f_13 = (fVar0 - bParam0->f_358[iVar1 /*189*/].f_15);
				if (bParam0->f_358[iVar1 /*189*/].f_13 < 0f)
				{
					bParam0->f_358[iVar1 /*189*/].f_13 = 0f;
				}
			}
			if (!func_105(bParam0, &(bParam0->f_358[iVar1 /*189*/]), bVar23))
			{
				if ((bVar23 && bParam0->f_1) && (Local_51.f_10 != 0 || bParam0->f_358[0 /*189*/].f_11 > 0))
				{
					if (!func_3(&uLocal_2399))
					{
						func_363(&uLocal_2399);
					}
					if (func_5(&uLocal_2402) >= 6.5f)
					{
						if (!UNK_0x06F8112AA79C53D9(2, 222))
						{
							func_11(&uLocal_2399);
						}
						else if (func_5(&uLocal_2399) >= 1.5f)
						{
							bParam0->f_1 = 0;
							func_360(&iLocal_2289, 32768);
							bParam0->f_358[0 /*189*/].f_23 = 6;
						}
					}
					else if (UNK_0x06F8112AA79C53D9(2, 222))
					{
						if (func_5(&(bParam0->f_3)) < 6.5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_2289, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_2289, 32768, 0);
						}
					}
				}
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_358[iVar1 /*189*/].f_8))
				{
					func_101(bParam0, iVar1);
					if (Local_51 == 0 && func_3(&uLocal_2284))
					{
						return true;
					}
					if (bVar23)
					{
						if (bParam0->f_358[iVar1 /*189*/].f_14 != 0f)
						{
							func_363(&(bParam0->f_14));
						}
						if (func_362(iLocal_2288, 8))
						{
							func_335(bParam0, bVar22, 1);
							if (bVar22 < (bParam0->f_12 - 1))
							{
								func_335(bParam0, bVar22 + 1, 0);
							}
							func_360(&iLocal_2288, 8);
						}
					}
					if (bParam0->f_1)
					{
						bParam0->f_11 = func_93(bParam0, &Var2, &Var12, bParam0->f_358[iVar1 /*189*/].f_8);
						func_90(&Var2, &Var12);
					}
					if (bParam0->f_11 != -1)
					{
						if (iParam1 == 0)
						{
							func_85(&(bParam0->f_358[iVar1 /*189*/]), bVar23, bParam0->f_11);
						}
						bLocal_2277 = func_84(bParam0->f_11);
						bParam0->f_358[iVar1 /*189*/].f_11++;
						bVar22 = bParam0->f_358[iVar1 /*189*/].f_11;
						if (bVar22 >= (bParam0->f_12 - 1))
						{
							Var2 = { bParam0->f_27[(bParam0->f_12 - 1) /*10*/] };
						}
						else
						{
							Var2 = { bParam0->f_27[bVar22 /*10*/] };
						}
						if (bVar23)
						{
							func_78(bParam0, (bVar22 - 1));
							if (bVar22 == bParam0->f_12)
							{
								iVar24 = 0;
								if (func_3(&(bParam0->f_3)))
								{
									if (!func_7(&(bParam0->f_3)))
									{
										func_40(&(bParam0->f_3));
									}
									if (bParam0->f_358[0 /*189*/].f_13 > 0f)
									{
										if (bParam0->f_358[0 /*189*/].f_13 <= Local_51.f_106[Local_51.f_10])
										{
											iVar24 = 1;
										}
										else if (bParam0->f_358[0 /*189*/].f_13 <= (((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]))
										{
											iVar24 = 2;
										}
										else if (bParam0->f_358[0 /*189*/].f_13 <= Local_51.f_112[Local_51.f_10])
										{
											iVar24 = 3;
										}
									}
								}
								if (iVar24 == 0)
								{
								}
								if (iVar24 > 0)
								{
									return false;
								}
								else
								{
									bParam0->f_1 = 0;
									bParam0->f_358[iVar1 /*189*/].f_11 = (bParam0->f_358[iVar1 /*189*/].f_11 - 1);
									UNK_0x790015DC92C918E2();
									bLocal_2276 = "SPR_TIME_FAIL";
									bParam0->f_358[0 /*189*/].f_23 = 0;
								}
							}
							else
							{
								func_335(bParam0, bVar22, 1);
								if (bVar22 < (bParam0->f_12 - 1))
								{
									func_335(bParam0, bVar22 + 1, 0);
								}
							}
							if (bParam0->f_358[iVar1 /*189*/].f_14 == 0f)
							{
								if (func_3(&(bParam0->f_14)))
								{
									func_4(&(bParam0->f_14));
								}
							}
							if (bParam0->f_12 > 0)
							{
								if (bParam0->f_10 > 0f)
								{
									if (bVar22 == SYSTEM::ROUND((IntToFloat(bParam0->f_12) / 2f)))
									{
										bParam0->f_358[iVar1 /*189*/].f_14 = 0f;
										func_11(&(bParam0->f_14));
									}
								}
							}
						}
						else if (bParam0->f_358[iVar1 /*189*/].f_11 >= bParam0->f_12)
						{
							if (Local_51 != 2)
							{
								if (!UNK_0x437347B10A200C4B(bParam0->f_358[iVar1 /*189*/].f_8, 0))
								{
									func_29(&(bParam0->f_358[iVar1 /*189*/]));
								}
							}
						}
						else
						{
							if (Local_51 != 1)
							{
								if (iVar1 != 0)
								{
									func_76(bParam0, bParam0->f_358[iVar1 /*189*/].f_8, bParam0->f_358[iVar1 /*189*/].f_9, bParam0->f_27[bParam0->f_358[iVar1 /*189*/].f_11 /*10*/], bParam0->f_27[bParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar25, "Offroad_", 16);
								StringIntConCat(&cVar25, Local_51.f_10 + 1, 16);
								if (iVar1 == 1)
								{
									StringConCat(&cVar25, "a", 16);
								}
								if (iVar1 > 0)
								{
									if (bLocal_2410)
									{
										if (!UNK_0x437347B10A200C4B(bParam0->f_358[iVar1 /*189*/].f_8, 0) && !UNK_0x437347B10A200C4B(bParam0->f_358[iVar1 /*189*/].f_9, 0))
										{
											if (UNK_0xD1960163A3042274(bParam0->f_358[iVar1 /*189*/].f_8, -235832601) == 1)
											{
											}
											else
											{
												UNK_0x1B901F542DF070CF(bParam0->f_358[iVar1 /*189*/].f_8, bParam0->f_358[iVar1 /*189*/].f_9, &cVar25, 262144, 0, 8, -1, UNK_0xD890711CFD5AF100(bParam0->f_358[iVar1 /*189*/].f_9), 0, 1073741824 /* Float: 2f */);
											}
										}
									}
									else if (iVar1 != 0)
									{
										func_76(bParam0, bParam0->f_358[iVar1 /*189*/].f_8, bParam0->f_358[iVar1 /*189*/].f_9, bParam0->f_27[bParam0->f_358[iVar1 /*189*/].f_11 /*10*/], bParam0->f_27[bParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
									}
								}
							}
							if (Local_51 != 2)
							{
								func_75(bParam0, iVar1);
							}
						}
					}
					if (iParam1 == 0)
					{
						if (bVar23)
						{
							func_74();
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (bParam0->f_1 == 1)
	{
		func_67(bParam0);
		func_65(bParam0, &uLocal_2409);
		func_64(bParam0, &uLocal_2409);
		func_63();
		func_58(bParam0);
		func_57();
		func_56(bParam0);
		if (bParam0->f_358[0 /*189*/].f_23 != 0)
		{
			if (Local_51.f_10 == 0)
			{
				if (bParam0->f_358[0 /*189*/].f_11 > 0)
				{
					func_42(bParam0);
				}
			}
			else
			{
				func_42(bParam0);
			}
		}
	}
	return true;
}

void func_42(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;

	if (UNK_0x0178C60FEA5C5A75())
	{
		UNK_0xBFE31971E49FA500(1);
	}
	if (!func_3(&uLocal_2078))
	{
		iLocal_2076 = 0;
		iLocal_2077 = 0;
		func_363(&uLocal_2078);
	}
	if (SYSTEM::CEIL((bParam0->f_358[0 /*189*/].f_15 * 1000f)) != iLocal_2077)
	{
		iLocal_2076 = (SYSTEM::CEIL((bParam0->f_358[0 /*189*/].f_15 * 1000f)) - iLocal_2077);
		iLocal_2077 = SYSTEM::CEIL((bParam0->f_358[0 /*189*/].f_15 * 1000f));
		func_11(&uLocal_2078);
	}
	iVar0 = (SYSTEM::FLOOR((func_5(&(bParam0->f_3)) * 100f)) * 10 - SYSTEM::CEIL((bParam0->f_358[0 /*189*/].f_15 * 1000f)));
	iVar1 = 0;
	if (func_5(&uLocal_2078) <= 2f)
	{
		if (bParam0->f_358[0 /*189*/].f_11 > 0)
		{
			iVar1 = -iLocal_2076;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = SYSTEM::FLOOR((Global_111638.f_19038.f_6[Local_51.f_10] * 100f)) * 10;
	if (iVar2 <= 0)
	{
		iVar2 = -1;
	}
	if (IntToFloat(iVar0) <= (Local_51.f_106[Local_51.f_10] * 1000f))
	{
		iVar3 = SYSTEM::FLOOR((Local_51.f_106[Local_51.f_10] * 1000f));
		iVar6 = 3;
		sVar4 = "SPR_GBEST";
		iVar5 = 109;
	}
	else if (IntToFloat(iVar0) <= ((((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]) * 1000f))
	{
		iVar6 = 2;
		iVar3 = SYSTEM::FLOOR(((((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]) * 1000f));
		sVar4 = "SPR_SBEST";
		iVar5 = 108;
	}
	else if (IntToFloat(iVar0) <= (Local_51.f_112[Local_51.f_10] * 1000f))
	{
		iVar6 = 1;
		iVar3 = SYSTEM::FLOOR((Local_51.f_112[Local_51.f_10] * 1000f));
		sVar4 = "SPR_BBEST";
		iVar5 = 107;
	}
	else
	{
		iVar3 = -1;
	}
	func_55();
	func_43(iVar0, "", -1, -1, "", -1, -1, "", iVar1, 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar3, sVar4, iVar6, iVar5, iVar2, "SPRBEST", 0, 1, 1, -1, "", -1f, func_54());
}

void func_43(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26, int iParam27, char* sParam28, float fParam29, int iParam30)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	char cVar6[64];
	int iVar22;

	if (fParam29 > -1f)
	{
		func_51(0, "", iParam27, iParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam14 > -1)
	{
		bVar0 = sParam16;
		if (func_50(bVar0))
		{
			bVar0 = "TIM_DAMAGE";
		}
		func_49(iParam14, iParam15, bVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 1, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		bVar1 = sParam12;
		if (func_50(bVar1))
		{
			bVar1 = "TIM_CHECKPOIN";
		}
		func_48((iParam11 - iParam10), bVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iParam5 > -1)
	{
		bVar2 = sParam7;
		if (func_50(bVar2))
		{
			bVar2 = "TIM_POSIT";
		}
		func_47(iParam5, iParam6, bVar2, iParam9, iParam27, 6, 0, 0, 0, 1, 0);
	}
	if (iParam2 > -1)
	{
		bVar3 = sParam4;
		if (func_50(bVar3))
		{
			bVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		bVar4 = sParam19;
		if (func_50(bVar4))
		{
			bVar4 = "TIMER_BESTIME";
		}
		func_44(iParam18, bVar4, 0, 1, iParam27, iParam20, 4, 0, iParam21, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iParam22 > -1)
	{
		bVar5 = sParam23;
		if (func_50(bVar5))
		{
			bVar5 = "TIMER_BESTIME";
		}
		func_44(iParam22, bVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	StringCopy(&cVar6, sParam1, 64);
	if (iParam8 < 0)
	{
		StringCopy(&cVar6, "TIMER_REWARD", 64);
	}
	else if (iParam8 > 0)
	{
		StringCopy(&cVar6, "TIMER_PENAL", 64);
	}
	else if (func_50(&cVar6))
	{
		StringCopy(&cVar6, "TIM_TIMER", 64);
	}
	iParam26 = iParam26;
	iVar22 = 4;
	func_44(iParam0, &cVar6, iParam8, iVar22, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

void func_44(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_46(7, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(7, bVar0);
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

void func_45(int iParam0, bool bParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), bParam1);
}

bool func_46(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], bParam1);
}

void func_47(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_46(5, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(5, bVar0);
		Global_1378678.f_3630[bVar0] = iParam0;
		Global_1378678.f_3630.f_172[bVar0] = iParam1;
		StringCopy(&(Global_1378678.f_3630.f_11[bVar0 /*16*/]), sParam2, 64);
		Global_1378678.f_3630.f_194[bVar0] = iParam3;
		Global_1378678.f_3630.f_183[bVar0] = iParam4;
		Global_1378678.f_3630.f_216[bVar0] = iParam5;
		Global_1378678.f_3630.f_227[bVar0] = iParam6;
		Global_1378678.f_3630.f_270[bVar0] = iParam7;
		Global_1378678.f_3630.f_281[bVar0] = iParam8;
		Global_1378678.f_3630.f_292[bVar0] = iParam9;
		Global_1378678.f_3630.f_303[bVar0] = iParam10;
	}
}

void func_48(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	bool bVar0;
	bool bVar1;

	if (func_50(sParam6))
	{
		sParam6 = "NUMBER";
	}
	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_46(3, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(3, bVar0);
		Global_1378678.f_2764[bVar0] = iParam0;
		StringCopy(&(Global_1378678.f_2764.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_2764.f_183[bVar0] = iParam3;
		Global_1378678.f_2764.f_172[bVar0] = iParam2;
		Global_1378678.f_2764.f_205[bVar0] = iParam4;
		Global_1378678.f_2764.f_216[bVar0] = iParam5;
		StringCopy(&(Global_1378678.f_2764.f_259[bVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_2764.f_420[bVar0] = iParam7;
		Global_1378678.f_2764.f_453[bVar0] = iParam8;
		Global_1378678.f_2764.f_431[bVar0] = iParam9;
		Global_1378678.f_2764.f_442[bVar0] = iParam10;
		Global_1378678.f_2764.f_464[bVar0] = iParam11;
		Global_1378678.f_2764.f_475[bVar0] = iParam12;
		Global_1378678.f_2764.f_486[bVar0] = iParam13;
		Global_1378678.f_2764.f_497[bVar0] = iParam14;
	}
}

void func_49(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	bool bVar0;
	bool bVar1;

	bVar0 = -1;
	bVar1 = false;
	while (bVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_46(0, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(0, bVar0);
		Global_1378678.f_1135[bVar0] = iParam0;
		Global_1378678.f_1135.f_11[bVar0] = iParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[bVar0 /*16*/]), sParam2, 64);
		Global_1378678.f_1135.f_194[bVar0] = iParam3;
		Global_1378678.f_1135.f_183[bVar0] = iParam4;
		Global_1378678.f_1135.f_216[bVar0] = iParam5;
		Global_1378678.f_1135.f_227[bVar0 /*3*/] = fParam6;
		Global_1378678.f_1135.f_227[bVar0 /*3*/].f_1 = fParam7;
		Global_1378678.f_1135.f_258[bVar0] = iParam8;
		Global_1378678.f_1135.f_269[bVar0] = iParam9;
		Global_1378678.f_1135.f_312[bVar0] = iParam10;
		Global_1378678.f_1135.f_323[bVar0] = iParam11;
		Global_1378678.f_1135.f_334[bVar0] = iParam12;
		Global_1378678.f_1135.f_345[bVar0] = iParam13;
		Global_1378678.f_1130 = 1;
		Global_1378678.f_1135.f_356[bVar0] = iParam14;
		Global_1378678.f_1135.f_367[bVar0] = iParam15;
		Global_1378678.f_1135.f_378[bVar0] = iParam16;
		Global_1378678.f_1135.f_389[bVar0] = iParam17;
		Global_1378678.f_1135.f_400[bVar0] = iParam18;
		Global_1378678.f_1135.f_411[bVar0] = iParam19;
		Global_1378678.f_1135.f_422[bVar0] = iParam20;
		Global_1378678.f_1135.f_433[bVar0] = iParam21;
		Global_1378678.f_1135.f_444[bVar0] = iParam22;
		Global_1378678.f_1135.f_455[bVar0] = iParam23;
		Global_1378678.f_1135.f_466[bVar0] = iParam24;
		Global_1378678.f_1135.f_205[bVar0] = iParam25;
		Global_1378678.f_1135.f_477[bVar0] = iParam26;
		Global_1378678.f_1135.f_488[bVar0] = iParam27;
		Global_1378678.f_1135.f_499[bVar0] = iParam28;
		Global_1378678.f_1135.f_510[bVar0] = iParam29;
		Global_1378678.f_1135.f_521[bVar0] = iParam30;
		Global_1378678.f_1135.f_532[bVar0] = iParam31;
		Global_1378678.f_1135.f_543[bVar0] = iParam32;
		Global_1378678.f_1135.f_554[bVar0] = iParam33;
	}
}

bool func_50(bool bParam0)
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

void func_51(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_46(6, bVar1) == 0)
			{
				bVar0 = bVar1;
			}
		}
		bVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(6, bVar0);
		Global_1378678.f_3944[bVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_3944.f_183[bVar0] = iParam3;
		Global_1378678.f_3944.f_172[bVar0] = iParam2;
		Global_1378678.f_3944.f_260[bVar0] = iParam4;
		Global_1378678.f_3944.f_271[bVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[bVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_3944.f_443[bVar0] = iParam7;
		Global_1378678.f_3944.f_454[bVar0] = fParam8;
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
		if (iParam15 == 5 && func_53())
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
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || bVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_52())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

bool func_52()
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

bool func_53()
{
	if (((UNK_0xB3260A60545D3F11() == 8 || UNK_0xB3260A60545D3F11() == 9) || UNK_0xB3260A60545D3F11() == 10) || UNK_0xB3260A60545D3F11() == 12)
	{
		return true;
	}
	return false;
}

int func_54()
{
	return iLocal_2075;
}

void func_55()
{
	Global_1378678.f_1130 = 1;
}

void func_56(bool bParam0)
{
	if (bParam0->f_13 == -1)
	{
	}
}

void func_57()
{
	if (Local_51 == 0)
	{
		UNK_0x4A847DA194A5532B(0, 0, -1);
		UNK_0x4A847DA194A5532B(1, 0, -1);
		UNK_0x4A847DA194A5532B(2, 0, -1);
		UNK_0x4A847DA194A5532B(3, 0, -1);
	}
}

void func_58(bool bParam0)
{
	if (func_5(&(bParam0->f_3)) > 15f)
	{
		if (UNK_0x9C66D99E63E8E24C(bParam0->f_358[0 /*189*/].f_9) < 5f)
		{
			if (!func_3(&uLocal_2281))
			{
				func_10(&uLocal_2281);
			}
			else if (func_5(&uLocal_2281) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_2289, 8192);
				if (bParam0->f_358[0 /*189*/].f_11 <= (bParam0->f_12 - 1))
				{
					if (UNK_0xE4EDC4B0E92C078B(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
					{
						UNK_0x9D7CDDB4B55142AF(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
					}
				}
				if (bParam0->f_358[0 /*189*/].f_11 + 1 <= (bParam0->f_12 - 2))
				{
					if (UNK_0xE4EDC4B0E92C078B(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
					{
						UNK_0x9D7CDDB4B55142AF(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
					}
				}
				func_11(&uLocal_2281);
				func_11(&uLocal_2278);
				bParam0->f_1 = 0;
				UNK_0x790015DC92C918E2();
				bLocal_2276 = "SPR_RETR_IDLE";
				bParam0->f_358[0 /*189*/].f_23 = 0;
			}
			else if (func_5(&uLocal_2281) > 30f)
			{
				if (!func_362(iLocal_2288, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_2288, 32, 0);
				}
			}
		}
		else if (func_3(&uLocal_2281))
		{
			func_360(&iLocal_2288, 32);
			func_11(&uLocal_2281);
		}
	}
	else if (func_3(&uLocal_2281))
	{
		func_360(&iLocal_2288, 32);
		func_11(&uLocal_2281);
	}
}

void func_59(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_62(*iParam3, iParam4))
	{
		return;
	}
	func_61(bParam0, iParam1, iParam2);
	func_60(iParam3, iParam4);
}

void func_60(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_61(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

bool func_62(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_63()
{
	if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
	{
		UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
	}
}

void func_64(bool bParam0, bool bParam1)
{
	if (bParam0->f_1)
	{
		if ((!UNK_0xDF1306B443CD3D15(bParam0->f_358[0 /*189*/].f_9, 0) || UNK_0x7F6DC62EA9922664(bParam0->f_358[0 /*189*/].f_9) < 5) || UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			func_11(&uLocal_2278);
			if (UNK_0xE4EDC4B0E92C078B(*bParam1))
			{
				UNK_0x142CC44DB769B57E(bParam1);
			}
			if (bParam0->f_358[0 /*189*/].f_11 <= (bParam0->f_12 - 1))
			{
				if (UNK_0xE4EDC4B0E92C078B(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
				{
					UNK_0x9D7CDDB4B55142AF(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
				}
			}
			if (bParam0->f_358[0 /*189*/].f_11 + 1 <= (bParam0->f_12 - 2))
			{
				if (UNK_0xE4EDC4B0E92C078B(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
				{
					UNK_0x9D7CDDB4B55142AF(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
				}
			}
			bParam0->f_1 = 0;
			UNK_0x790015DC92C918E2();
			bLocal_2276 = "SPR_RETR_DES";
			bParam0->f_358[0 /*189*/].f_23 = 0;
		}
		return;
	}
}

void func_65(bool bParam0, bool bParam1)
{
	if (Local_51 == 0)
	{
		if (!UNK_0x437347B10A200C4B(bParam0->f_358[0 /*189*/].f_9, 0))
		{
			if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
			{
				UNK_0x790015DC92C918E2();
				UNK_0x5CEB4DB888A62073(false);
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				if (UNK_0xE4EDC4B0E92C078B(*bParam1))
				{
					UNK_0x142CC44DB769B57E(bParam1);
					if (bParam0->f_358[0 /*189*/].f_11 <= (bParam0->f_12 - 1))
					{
						if (UNK_0xE4EDC4B0E92C078B(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
						{
							UNK_0x9D7CDDB4B55142AF(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
						}
					}
					if (bParam0->f_358[0 /*189*/].f_11 + 1 <= (bParam0->f_12 - 2))
					{
						if (UNK_0xE4EDC4B0E92C078B(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
						{
							UNK_0x9D7CDDB4B55142AF(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
						}
					}
				}
				bParam0->f_1 = 0;
				UNK_0x790015DC92C918E2();
				bLocal_2276 = "SPR_RETR_DES";
				func_66(&(Local_51.f_321), 1);
				bParam0->f_358[0 /*189*/].f_23 = 7;
			}
		}
	}
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	UNK_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0, -1);
}

void func_67(bool bParam0)
{
	if (bParam0->f_1)
	{
		func_72(bParam0);
		func_68(bParam0);
	}
}

void func_68(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0x7F6DC62EA9922664(bParam0->f_358[0 /*189*/].f_9);
	if (!UNK_0x437347B10A200C4B(bParam0->f_358[0 /*189*/].f_9, 0))
	{
		iVar1 = SYSTEM::ROUND(UNK_0x6EE94F60DA2A2273(bParam0->f_358[0 /*189*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_51 == 2)
		{
			if (!UNK_0x437347B10A200C4B(bParam0->f_358[0 /*189*/].f_9, 0) && !UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam0->f_358[0 /*189*/].f_9, 0))
				{
					bLocal_2287 = true;
				}
			}
			if (bLocal_2287)
			{
				if (bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 6 || bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 10)
				{
					if (!UNK_0xD17F06053799A7CA())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2289, 2);
					}
				}
			}
		}
		else
		{
			if (UNK_0xD17F06053799A7CA())
			{
				UNK_0x790015DC92C918E2();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2289, 2);
		}
	}
	if (Local_51 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (UNK_0xD17F06053799A7CA())
			{
				UNK_0x790015DC92C918E2();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2289, 2);
		}
	}
}

void func_69()
{
	Global_19671 = 0;
	func_70();
}

void func_70()
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

bool func_71()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

void func_72(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	bool bVar15;
	bool bVar16;

	vVar0 = { bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 /*10*/] };
	if (bParam0->f_358[0 /*189*/].f_11 > 0)
	{
		vVar3 = { bParam0->f_27[(bParam0->f_358[0 /*189*/].f_11 - 1) /*10*/] };
	}
	else
	{
		vVar3 = { 0f, 0f, 0f };
	}
	fVar6 = UNK_0x0EB28750412C3A5A(vVar0, vVar3, 1);
	fVar7 = fVar6;
	if (bParam0->f_358[0 /*189*/].f_11 == 0)
	{
		fVar6 = (fVar6 + 200f);
		fVar7 = (fVar7 + 750f);
	}
	else
	{
		fVar6 = (fVar6 + 200f);
		fVar7 = (fVar7 + 750f);
	}
	vVar8 = { UNK_0x68F4C0EC296D3901(bParam0->f_358[0 /*189*/].f_8, true) };
	if (func_73(vVar3, 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 0))
	{
		vVar11 = { vVar0 };
	}
	else
	{
		vVar11 = { UNK_0xE3C0A5DBED4FBAB7(vVar8, vVar3, vVar0, 1) };
	}
	fVar14 = UNK_0x0EB28750412C3A5A(vVar11, vVar8, 1);
	bVar15 = fVar14 >= fVar6;
	bVar16 = fVar14 >= fVar7;
	if (Local_51 == 1)
	{
		if (UNK_0x755FF954DAE327E1((vVar11.z - vVar8.z)) > 15f)
		{
			bVar15 = true;
		}
	}
	if (bVar16)
	{
		func_11(&uLocal_2278);
		bParam0->f_1 = 0;
		UNK_0x790015DC92C918E2();
		func_256(1);
		bParam0->f_358[0 /*189*/].f_23 = 0;
		func_263(&(Local_51.f_119), 0, 0, 1, 1);
		func_262(&(Local_51.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
		func_262(&(Local_51.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
		UNK_0xC92DB9682A650680("MGSP_FAIL");
		bLocal_2276 = "SPR_HELP_FAIL";
	}
	else if (bVar15)
	{
		if (fVar14 <= (fVar7 - 15f))
		{
			func_303("SPR_HELP_RESET", -1);
		}
		if (fVar14 <= (fVar7 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_2289, 4);
		}
	}
	else
	{
		UNK_0x2F23E8033F1ADDD9("SPR_HELP_WARN");
		if (func_362(iLocal_2289, 4))
		{
			func_360(&iLocal_2289, 4);
		}
	}
}

bool func_73(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_74()
{
	if (iLocal_1992 == 1)
	{
		if (func_3(&uLocal_2022))
		{
			if (func_5(&uLocal_2022) <= 2.5f)
			{
				sLocal_2073 = "GATEMISS";
				fLocal_2074 = 5f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1992 = 0;
			}
		}
	}
	if (iLocal_1993 == 1)
	{
		if (func_3(&uLocal_2028))
		{
			if (func_5(&uLocal_2028) <= 2.5f)
			{
				sLocal_2073 = "GATEINNER";
				fLocal_2074 = 1f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1993 = 0;
			}
		}
	}
	if (iLocal_1994 == 1)
	{
		if (func_3(&uLocal_2025))
		{
			if (func_5(&uLocal_2025) <= 2.5f)
			{
				sLocal_2073 = "GATEOUTTER";
				fLocal_2074 = 0f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1994 = 0;
			}
		}
	}
	if (iLocal_1995 == 1)
	{
		if (func_3(&uLocal_2037))
		{
			if (func_5(&uLocal_2037) <= 2.5f)
			{
				sLocal_2073 = "GATEKNIFEINNER";
				fLocal_2074 = 2.5f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1995 = 0;
			}
		}
	}
	if (iLocal_1996 == 1)
	{
		if (func_3(&uLocal_2040))
		{
			if (func_5(&uLocal_2040) <= 2.5f)
			{
				sLocal_2073 = "GATEINVERTEDIN";
				fLocal_2074 = 3f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1996 = 0;
			}
		}
	}
	if (iLocal_1997 == 1)
	{
		if (func_3(&uLocal_2031))
		{
			if (func_5(&uLocal_2031) <= 2.5f)
			{
				sLocal_2073 = "GATEKNIFEOUTTER";
				fLocal_2074 = 1.5f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1997 = 0;
			}
		}
	}
	if (iLocal_1998 == 1)
	{
		if (func_3(&uLocal_2034))
		{
			if (func_5(&uLocal_2034) <= 2.5f)
			{
				sLocal_2073 = "GATEINVERTEDOUT";
				fLocal_2074 = 2f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1998 = 0;
			}
		}
	}
	if (iLocal_1999 == 1)
	{
		if (func_3(&uLocal_2010))
		{
			if (func_5(&uLocal_2010) <= 2.5f)
			{
				sLocal_2073 = "STUNTKNIFELEFT";
				fLocal_2074 = 4f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1999 = 0;
			}
		}
	}
	if (iLocal_2000 == 1)
	{
		if (func_3(&uLocal_2010))
		{
			if (func_5(&uLocal_2010) <= 2.5f)
			{
				sLocal_2073 = "STUNTKNIFELEFTHIT";
				fLocal_2074 = 1.5f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2000 = 0;
			}
		}
	}
	if (iLocal_2001 == 1)
	{
		if (func_3(&uLocal_2010))
		{
			if (func_5(&uLocal_2010) <= 2.5f)
			{
				sLocal_2073 = "STUNTKNIFELEFTMISS";
				fLocal_2074 = 5f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2001 = 0;
			}
		}
	}
	if (iLocal_2002 == 1)
	{
		if (func_3(&uLocal_2010))
		{
			if (func_5(&uLocal_2010) <= 2.5f)
			{
				sLocal_2073 = "STUNTKNIFERIGHT";
				fLocal_2074 = 4f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2002 = 0;
			}
		}
	}
	if (iLocal_2003 == 1)
	{
		if (func_3(&uLocal_2010))
		{
			if (func_5(&uLocal_2010) <= 2.5f)
			{
				sLocal_2073 = "STUNTKNIFERIGHTHIT";
				fLocal_2074 = 1.5f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2003 = 0;
			}
		}
	}
	if (iLocal_2004 == 1)
	{
		if (func_3(&uLocal_2010))
		{
			if (func_5(&uLocal_2010) <= 2.5f)
			{
				sLocal_2073 = "STUNTKNIFERIGHTMISS";
				fLocal_2074 = 5f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2004 = 0;
			}
		}
	}
	if (iLocal_2005 == 1)
	{
		if (func_3(&uLocal_2013))
		{
			if (func_5(&uLocal_2013) <= 2.5f)
			{
				sLocal_2073 = "STUNTINVERTED";
				fLocal_2074 = 4f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2005 = 0;
			}
		}
	}
	if (iLocal_2006 == 1)
	{
		if (func_3(&uLocal_2013))
		{
			if (func_5(&uLocal_2013) <= 2.5f)
			{
				sLocal_2073 = "STUNTINVERTEDHIT";
				fLocal_2074 = 1.5f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2006 = 0;
			}
		}
	}
	if (iLocal_2007 == 1)
	{
		if (func_3(&uLocal_2013))
		{
			if (func_5(&uLocal_2013) <= 2.5f)
			{
				sLocal_2073 = "STUNTINVERTEDMISS";
				fLocal_2074 = 5f;
				iLocal_2075 = 1;
			}
			else
			{
				sLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2007 = 0;
			}
		}
	}
}

void func_75(bool bParam0, int iParam1)
{
	bool bVar0;

	if (iParam1 < 0 || iParam1 > bParam0->f_358)
	{
		return;
	}
	if (!UNK_0x437347B10A200C4B(bParam0->f_358[iParam1 /*189*/].f_8, 0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0->f_358[iParam1 /*189*/].f_9, 0))
		{
			if (UNK_0xC42A92762C58E1B9(bParam0->f_358[iParam1 /*189*/].f_8, bParam0->f_358[iParam1 /*189*/].f_9, 0))
			{
				bVar0 = UNK_0xD890711CFD5AF100(bParam0->f_358[iParam1 /*189*/].f_9);
				if (bParam0->f_358[0 /*189*/].f_11 == bParam0->f_358[iParam1 /*189*/].f_11)
				{
				}
				else if (bParam0->f_358[iParam1 /*189*/].f_11 > bParam0->f_358[0 /*189*/].f_11)
				{
					bVar0 = (bVar0 * 0.69f);
				}
				else
				{
					bVar0 = (bVar0 * 1f);
				}
				if (UNK_0x82CCEAB29E9451DD(bParam0->f_358[iParam1 /*189*/].f_8, bParam0->f_358[iParam1 /*189*/].f_9))
				{
					if (UNK_0xBBA8A868118C90ED(bParam0->f_358[iParam1 /*189*/].f_9, -1, 0))
					{
						UNK_0xF821F915BC24D246(bParam0->f_358[iParam1 /*189*/].f_8, bParam0->f_358[iParam1 /*189*/].f_9, -1);
						UNK_0x06736587AE5BE33B(bParam0->f_358[iParam1 /*189*/].f_8, bVar0);
					}
				}
			}
		}
	}
}

void func_76(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, var uParam6, int iParam7)
{
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		if (Local_51 == 1)
		{
			if (!UNK_0x437347B10A200C4B(bParam2, 0))
			{
				UNK_0xE9362E4D600DD12A(bParam1, bParam2, vParam3, UNK_0xD890711CFD5AF100(bParam2), 1, false, 786469, 5f, -1f);
			}
		}
		else if (Local_51 == 2)
		{
			uParam6 = uParam6;
			func_77(bParam0, vParam3, iParam7);
		}
	}
}

void func_77(bool bParam0, vector3 vParam1, int iParam4)
{
	bParam0->f_12 = bParam0->f_12;
	vParam1 = { vParam1 };
	iParam4 = iParam4;
}

void func_78(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(bParam0->f_27[iParam1 /*10*/]));
	func_81(&(bParam0->f_27[iParam1 /*10*/].f_6), &(bParam0->f_2861), &(bParam0->f_2862), bParam0->f_27[iParam1 /*10*/].f_7 == 4);
	if (iParam1 + 1 < bParam0->f_12)
	{
		func_82(&(bParam0->f_27[iParam1 + 1 /*10*/]));
		func_79(&(bParam0->f_27[iParam1 + 1 /*10*/]));
	}
}

void func_79(var uParam0)
{
	func_80(&(uParam0->f_6));
}

void func_80(var uParam0)
{
	if (*uParam0 != 0)
	{
		UNK_0xE223EB8FE6F8CC15(*uParam0);
		*uParam0 = 0;
	}
}

void func_81(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	func_80(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (bParam3)
		{
			*uParam2 = 0;
		}
		if (bLocal_2277)
		{
			bVar3 = 6;
		}
		else
		{
			bVar3 = true;
		}
		func_584(func_585(bVar3), &bVar0, &bVar1, &bVar2, uParam2);
		UNK_0xF0B0A50DF3EA0E70(*uParam1, bVar0, bVar1, bVar2, *uParam2);
		UNK_0xF08C5AE8AC5C7427(*uParam1, bVar0, bVar1, bVar2, *uParam2);
	}
}

void func_82(var uParam0)
{
	func_83(&(uParam0->f_5));
}

void func_83(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x142CC44DB769B57E(bParam0);
	}
}

int func_84(int iParam0)
{
	if ((((((iParam0 == 9 || iParam0 == 12) || iParam0 == 15) || iParam0 == 10) || iParam0 == 13) || iParam0 == 16) || iParam0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_85(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (Local_51 == 0)
		{
			if (func_3(&uLocal_2022))
			{
				func_89(&uLocal_2022, 3f);
			}
			if (func_3(&uLocal_2016))
			{
				func_89(&uLocal_2016, 3f);
			}
			if (func_3(&uLocal_2010))
			{
				func_89(&uLocal_2010, 3f);
			}
			if (func_3(&uLocal_2019))
			{
				func_89(&uLocal_2019, 3f);
			}
			if (func_3(&uLocal_2013))
			{
				func_89(&uLocal_2013, 3f);
			}
			if (func_3(&uLocal_2025))
			{
				func_89(&uLocal_2025, 3f);
			}
			if (func_3(&uLocal_2028))
			{
				func_89(&uLocal_2028, 3f);
			}
			if (func_3(&uLocal_2031))
			{
				func_89(&uLocal_2031, 3f);
			}
			if (func_3(&uLocal_2034))
			{
				func_89(&uLocal_2034, 3f);
			}
			if (func_3(&uLocal_2037))
			{
				func_89(&uLocal_2037, 3f);
			}
			if (func_3(&uLocal_2040))
			{
				func_89(&uLocal_2040, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_1992 = 1;
					func_11(&uLocal_2022);
					break;
				case 1:
					iLocal_1993 = 1;
					func_11(&uLocal_2028);
					break;
				case 2:
					iLocal_1994 = 1;
					func_11(&uLocal_2025);
					break;
				case 3:
					iLocal_1995 = 1;
					func_11(&uLocal_2037);
					break;
				case 4:
					iLocal_1996 = 1;
					func_11(&uLocal_2040);
					break;
				case 5:
					iLocal_1997 = 1;
					func_11(&uLocal_2031);
					break;
				case 6:
					iLocal_1998 = 1;
					func_11(&uLocal_2034);
					break;
				case 8:
					iLocal_1999 = 1;
					func_11(&uLocal_2010);
					break;
				case 9:
					iLocal_2000 = 1;
					func_11(&uLocal_2019);
					break;
				case 10:
					iLocal_2001 = 1;
					func_11(&uLocal_2022);
					break;
				case 11:
					iLocal_2002 = 1;
					func_11(&uLocal_2010);
					break;
				case 12:
					iLocal_2003 = 1;
					func_11(&uLocal_2019);
					break;
				case 13:
					iLocal_2004 = 1;
					func_11(&uLocal_2022);
					break;
				case 14:
					iLocal_2005 = 1;
					func_11(&uLocal_2013);
					break;
				case 15:
					iLocal_2006 = 1;
					func_11(&uLocal_2019);
					break;
				case 16:
					iLocal_2007 = 1;
					func_11(&uLocal_2022);
					break;
			}
		}
	}
}

void func_86(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 7:
			func_88(uParam0, 5f);
			break;
		case 0:
			break;
		case 1:
			func_87(uParam0, 1f);
			break;
		case 2:
			func_87(uParam0, 0f);
			break;
		case 5:
			func_87(uParam0, 1.5f);
			break;
		case 6:
			func_87(uParam0, 2f);
			break;
		case 3:
			func_87(uParam0, 2.5f);
			break;
		case 4:
			func_87(uParam0, 3f);
			break;
		case 8:
			func_87(uParam0, 4f);
			break;
		case 9:
			func_88(uParam0, 1.5f);
			break;
		case 10:
			func_88(uParam0, 5f);
			break;
		case 11:
			func_87(uParam0, 4f);
			break;
		case 12:
			func_88(uParam0, 1.5f);
			break;
		case 13:
			func_88(uParam0, 5f);
			break;
		case 14:
			func_87(uParam0, 4f);
			break;
		case 15:
			func_88(uParam0, 1.5f);
			break;
		case 16:
			func_88(uParam0, 5f);
			break;
	}
}

void func_87(var uParam0, float fParam1)
{
	uParam0->f_14 = fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_88(var uParam0, float fParam1)
{
	uParam0->f_14 = -fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_89(bool bParam0, float fParam1)
{
	if (func_3(bParam0))
	{
		func_12(bParam0, (func_5(bParam0) + fParam1));
	}
}

void func_90(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;

	if (uParam0->f_6 != 0)
	{
		bVar4 = func_92();
		if (uParam0->f_8 == 2 || uParam0->f_8 == 3)
		{
			bVar4 = 18;
		}
		else if (uParam0->f_8 == 1)
		{
			bVar4 = 9;
		}
		func_584(func_585(bVar4), &bVar0, &bVar1, &bVar2, &uVar3);
		UNK_0xF0B0A50DF3EA0E70(uParam0->f_6, bVar0, bVar1, bVar2, func_91(*uParam0, 25, 200));
	}
	if (uParam1->f_6 != 0)
	{
		bVar5 = func_92();
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			bVar5 = 18;
		}
		else if (uParam1->f_8 == 1)
		{
			bVar5 = 9;
		}
		func_584(func_585(bVar5), &bVar0, &bVar1, &bVar2, &uVar3);
		UNK_0xF0B0A50DF3EA0E70(uParam1->f_6, bVar0, bVar1, bVar2, func_91(*uParam1, 25, 200));
	}
}

int func_91(vector3 vParam0, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	fVar0 = 100f;
	iVar1 = 50;
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		fVar2 = UNK_0x0EB28750412C3A5A(vParam0, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 1);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam4;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam4 - SYSTEM::CEIL((IntToFloat((iParam4 - iParam3)) * fVar3)));
		}
	}
	if (iVar1 < iParam3)
	{
		iVar1 = iParam3;
	}
	return iVar1;
}

bool func_92()
{
	return 12;
}

int func_93(bool bParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar3;
	vector3 vVar6;
	var uVar9;
	int iVar12;

	if (UNK_0x437347B10A200C4B(bParam0->f_358[0 /*189*/].f_9, 0))
	{
		return -1;
	}
	iVar12 = func_100(uParam1, bParam3);
	if (Local_51 == 0)
	{
		if (iVar12 != 17)
		{
			if (iVar12 == 1)
			{
				if (func_99(bParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 8;
							return iVar12;
						}
						if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 3;
						if (!func_362(iLocal_2320, 262144))
						{
							func_98("Gate_PK", &iLocal_2319);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 262144);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 524288))
						{
							func_98("Con_PK", &iLocal_2319);
							func_334(&iLocal_2320, 524288);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 1048576))
						{
							func_98("Con_PK", &iLocal_2319);
							func_334(&iLocal_2320, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2319);
							return iVar12;
						}
					}
				}
				else if (func_97(bParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar12 = 11;
							return iVar12;
						}
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 3;
						if (!func_362(iLocal_2320, 262144))
						{
							func_98("Gate_PK", &iLocal_2319);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 262144);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 524288))
						{
							func_98("Con_PK", &iLocal_2319);
							func_334(&iLocal_2320, 524288);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 1048576))
						{
							func_98("Con_PK", &iLocal_2319);
							func_334(&iLocal_2320, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2319);
							return iVar12;
						}
					}
				}
				else
				{
					UNK_0x61890296D3AA030F(bParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar3, &vVar6, &uVar9);
					if (vVar6.z <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar12 = 14;
								return iVar12;
							}
							if (uParam1->f_8 == 2)
							{
								iVar12 = 9;
								return iVar12;
							}
							if (uParam1->f_8 == 3)
							{
								iVar12 = 12;
								return iVar12;
							}
						}
						else
						{
							iVar12 = 4;
							if (!func_362(iLocal_2320, 32768))
							{
								func_98("Gate_PI", &iLocal_2318);
								iLocal_2320 = 0;
								func_334(&iLocal_2320, 32768);
								return iVar12;
							}
							else if (!func_362(iLocal_2320, 65536))
							{
								func_98("Con_PI", &iLocal_2318);
								func_334(&iLocal_2320, 65536);
								return iVar12;
							}
							else if (!func_362(iLocal_2320, 131072))
							{
								func_98("Con_PI", &iLocal_2318);
								func_334(&iLocal_2320, 131072);
								return iVar12;
							}
							else
							{
								func_98("Con_PI", &iLocal_2318);
								return iVar12;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 1;
						if (!func_362(iLocal_2320, 4096))
						{
							func_98("Get_Perf", &iLocal_2315);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 4096);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 8192))
						{
							func_98("Con_Perf", &iLocal_2315);
							func_334(&iLocal_2320, 8192);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 16384))
						{
							func_98("Con_Perf", &iLocal_2315);
							func_334(&iLocal_2320, 16384);
							return iVar12;
						}
						else
						{
							func_98("Con_Perf", &iLocal_2315);
							return iVar12;
						}
					}
				}
			}
			if (iVar12 == 2)
			{
				if (func_99(bParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 8;
							return iVar12;
						}
						if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 5;
						if (!func_362(iLocal_2320, 64))
						{
							func_98("Gate_Kni", &iLocal_2317);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 64);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 128))
						{
							func_98("Con_Kni", &iLocal_2317);
							func_334(&iLocal_2320, 128);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 256))
						{
							func_98("Con_Kni", &iLocal_2317);
							func_334(&iLocal_2320, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2317);
							return iVar12;
						}
					}
				}
				else if (func_97(bParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar12 = 11;
							return iVar12;
						}
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 5;
						if (!func_362(iLocal_2320, 64))
						{
							func_98("Gate_Kni", &iLocal_2317);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 64);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 128))
						{
							func_98("Con_Kni", &iLocal_2317);
							func_334(&iLocal_2320, 128);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 256))
						{
							func_98("Con_Kni", &iLocal_2317);
							func_334(&iLocal_2320, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2317);
							return iVar12;
						}
					}
				}
				else
				{
					UNK_0x61890296D3AA030F(bParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar3, &vVar6, &uVar9);
					if (vVar6.z <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar12 = 14;
								return iVar12;
							}
							if (uParam1->f_8 == 2)
							{
								iVar12 = 8;
								return iVar12;
							}
							if (uParam1->f_8 == 3)
							{
								iVar12 = 12;
								return iVar12;
							}
						}
						else
						{
							iVar12 = 6;
							if (!func_362(iLocal_2320, 512))
							{
								func_98("Gate_Inv", &iLocal_2316);
								iLocal_2320 = 0;
								func_334(&iLocal_2320, 512);
								return iVar12;
							}
							else if (!func_362(iLocal_2320, 1024))
							{
								func_98("Con_Inv", &iLocal_2316);
								func_334(&iLocal_2320, 1024);
								return iVar12;
							}
							else if (!func_362(iLocal_2320, 2048))
							{
								func_98("Con_Inv", &iLocal_2316);
								func_334(&iLocal_2320, 2048);
								return iVar12;
							}
							else
							{
								func_98("Con_Inv", &iLocal_2316);
								return iVar12;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 2;
						if (!func_362(iLocal_2320, 8))
						{
							func_98("Gate_Hit", &iLocal_2314);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 8);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 16))
						{
							func_98("Con_Hit", &iLocal_2314);
							func_334(&iLocal_2320, 16);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 32))
						{
							func_98("Con_Hit", &iLocal_2314);
							func_334(&iLocal_2320, 32);
							return iVar12;
						}
						else
						{
							func_98("Con_Hit", &iLocal_2314);
							return iVar12;
						}
					}
				}
			}
			if (func_94(uParam1, uParam2, bParam3))
			{
				if (uParam1->f_8 != 0)
				{
					if (uParam1->f_8 == 2)
					{
						iVar12 = 10;
						return iVar12;
					}
					if (uParam1->f_8 == 3)
					{
						iVar12 = 13;
						return iVar12;
					}
					if (uParam1->f_8 == 1)
					{
						iVar12 = 16;
						return iVar12;
					}
				}
				else
				{
					iVar12 = 7;
					if (!func_362(iLocal_2320, 1))
					{
						func_98("Gate_Miss", &iLocal_2313);
						iLocal_2320 = 0;
						func_334(&iLocal_2320, 1);
						return iVar12;
					}
					else if (!func_362(iLocal_2320, 2))
					{
						func_98("Con_Miss", &iLocal_2313);
						func_334(&iLocal_2320, 2);
						return iVar12;
					}
					else if (!func_362(iLocal_2320, 4))
					{
						func_98("Con_Miss", &iLocal_2313);
						func_334(&iLocal_2320, 4);
						return iVar12;
					}
					else
					{
						func_98("Con_Miss", &iLocal_2313);
						return iVar12;
					}
				}
			}
			return iVar12;
		}
		if (func_94(uParam1, uParam2, bParam3))
		{
			if (uParam1->f_8 != 0)
			{
				if (uParam1->f_8 == 2)
				{
					iVar12 = 10;
					return iVar12;
				}
				if (uParam1->f_8 == 3)
				{
					iVar12 = 13;
					return iVar12;
				}
				if (uParam1->f_8 == 1)
				{
					iVar12 = 16;
					return iVar12;
				}
			}
			else
			{
				iVar12 = 7;
				if (!func_362(iLocal_2320, 1))
				{
					func_98("Gate_Miss", &iLocal_2313);
					iLocal_2320 = 0;
					func_334(&iLocal_2320, 1);
					return iVar12;
				}
				else if (!func_362(iLocal_2320, 2))
				{
					func_98("Con_Miss", &iLocal_2313);
					func_334(&iLocal_2320, 2);
					return iVar12;
				}
				else if (!func_362(iLocal_2320, 4))
				{
					func_98("Con_Miss", &iLocal_2313);
					func_334(&iLocal_2320, 4);
					return iVar12;
				}
				else
				{
					func_98("Con_Miss", &iLocal_2313);
					return iVar12;
				}
			}
			return iVar12;
		}
	}
	else if (iVar12 != 17)
	{
		return iVar12;
	}
	return -1;
}

bool func_94(var uParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	vector3 vVar1;

	if (!func_73(*uParam0, *uParam1, 1056964608 /* Float: 0.5f */, 0))
	{
		bVar0 = (uParam0->f_3 * 5f);
		if (UNK_0x5A91F08DF773C39D(bParam2, *uParam0, bVar0, bVar0, bVar0, false, true, 0))
		{
			vVar1 = { func_96(*uParam1 - *uParam0) };
			if ((func_95(UNK_0x68F4C0EC296D3901(bParam2, true), vVar1) - func_95(*uParam0, vVar1)) > 15f)
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, bLocal_2305, "HUD_MINI_GAME_SOUNDSET", 1);
				return true;
			}
		}
	}
	return false;
}

float func_95(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_96(vector3 vParam0)
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

bool func_97(bool bParam0)
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;

	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return false;
	}
	UNK_0x61890296D3AA030F(bParam0, &uVar0, &vVar3, &vVar6, &uVar9);
	if (UNK_0x755FF954DAE327E1(vVar6.z) > 0.342f)
	{
		return false;
	}
	return vVar3.z < 0f;
}

void func_98(bool bParam0, int iParam1)
{
	char cVar0[16];

	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_362(*iParam1, 1))
	{
		if (!bLocal_1991)
		{
			bLocal_1991 = true;
			func_334(iParam1, 1);
			return;
		}
		else
		{
			bLocal_1991 = false;
			if (UNK_0x7F8A39872A07D2CE(bParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (func_362(*iParam1, 1))
	{
		if (!func_362(*iParam1, 2))
		{
			if (!bLocal_1991)
			{
				bLocal_1991 = true;
				func_334(iParam1, 2);
				return;
			}
			else
			{
				bLocal_1991 = false;
				if (UNK_0x7F8A39872A07D2CE(bParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_362(*iParam1, 2))
	{
		if (!func_362(*iParam1, 4))
		{
			if (!bLocal_1991)
			{
				bLocal_1991 = true;
				func_334(iParam1, 4);
				return;
			}
			else
			{
				bLocal_1991 = false;
				if (UNK_0x7F8A39872A07D2CE(bParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_362(*iParam1, 4))
	{
		if (!func_362(*iParam1, 8))
		{
			if (!bLocal_1991)
			{
				bLocal_1991 = true;
				func_334(iParam1, 8);
				return;
			}
			else
			{
				bLocal_1991 = false;
				if (UNK_0x7F8A39872A07D2CE(bParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_362(*iParam1, 8))
	{
		if (!func_362(*iParam1, 16))
		{
			if (!bLocal_1991)
			{
				bLocal_1991 = true;
				func_334(iParam1, 16);
				return;
			}
			else
			{
				bLocal_1991 = false;
				if (UNK_0x7F8A39872A07D2CE(bParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
}

bool func_99(bool bParam0)
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;

	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return false;
	}
	UNK_0x61890296D3AA030F(bParam0, &uVar0, &vVar3, &vVar6, &uVar9);
	if (UNK_0x755FF954DAE327E1(vVar6.z) > 0.342f)
	{
		return false;
	}
	return vVar3.z > 0f;
}

int func_100(var uParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;

	vVar0 = { *uParam0 };
	UNK_0x61890296D3AA030F(bParam1, &vVar12, &vVar6, &vVar9, &vVar3);
	vVar15 = { vVar0 - vVar3 };
	fVar18 = UNK_0x755FF954DAE327E1(func_95(vVar15, vVar12));
	fVar19 = UNK_0x755FF954DAE327E1(func_95(vVar15, vVar9));
	fVar20 = UNK_0x755FF954DAE327E1(func_95(vVar15, vVar6));
	fVar21 = ((fVar19 * fVar19) + (fVar20 * fVar20));
	if (fVar18 > 6.5f)
	{
		return 17;
	}
	else
	{
		if (fVar21 > 900f)
		{
			if (bParam1 == UNK_0x16F2683693E537C9())
			{
				func_197(&uLocal_2263, 0);
			}
			return 17;
		}
		if (fVar21 > 110f)
		{
			if (bParam1 == UNK_0x16F2683693E537C9())
			{
				func_197(&uLocal_2263, 0);
			}
			UNK_0x4D7F4CC43D4D0DE3(-1, bLocal_2304, "HUD_MINI_GAME_SOUNDSET", 1);
			return 2;
		}
		else
		{
			if (bParam1 == UNK_0x16F2683693E537C9())
			{
				func_197(&uLocal_2263, 0);
			}
			UNK_0x4D7F4CC43D4D0DE3(-1, bLocal_2304, "HUD_MINI_GAME_SOUNDSET", 1);
			return 1;
		}
	}
	return -1;
}

void func_101(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<189> Var2;
	float fVar191;
	float fVar192;

	if (iParam1 < 0 || iParam1 > (bParam0->f_13 - 1))
	{
		return;
	}
	iVar0 = bParam0->f_13;
	Var2 = { bParam0->f_358[iParam1 /*189*/] };
	iVar1 = 0;
	while (iVar1 < bParam0->f_13)
	{
		if (Var2.f_8 != bParam0->f_358[iVar1 /*189*/].f_8)
		{
			if (!UNK_0x437347B10A200C4B(bParam0->f_358[iVar1 /*189*/].f_8, 0) && !UNK_0x437347B10A200C4B(Var2.f_8, 0))
			{
				if (Var2.f_11 > bParam0->f_358[iVar1 /*189*/].f_11)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_11 == bParam0->f_358[iVar1 /*189*/].f_11)
				{
					fVar191 = func_102(Var2.f_8, bParam0->f_27[Var2.f_11 /*10*/], 1);
					fVar192 = func_102(bParam0->f_358[iVar1 /*189*/].f_8, bParam0->f_27[bParam0->f_358[iVar1 /*189*/].f_11 /*10*/], 1);
					if (fVar191 < fVar192)
					{
						iVar0 = (iVar0 - 1);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		iVar1++;
	}
	bParam0->f_358[iParam1 /*189*/].f_12 = iVar0;
}

float func_102(bool bParam0, vector3 vParam1, int iParam4)
{
	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return -1f;
	}
	return UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(bParam0, true), vParam1, iParam4);
}

void func_103(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		func_303(bParam0, -1);
	}
	else
	{
		func_104(bParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

bool func_105(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;

	switch (uParam1->f_23)
	{
		case 0:
			func_178(bParam0);
			func_253();
			func_263(&(Local_51.f_119), 0, 0, 1, 1);
			func_262(&(Local_51.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
			func_262(&(Local_51.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
			func_256(1);
			UNK_0xC92DB9682A650680("MGSP_FAIL");
			uParam1->f_23 = 1;
			break;
		case 1:
			if (func_172(&(Local_51.f_321), &(Local_51.f_327), &(bParam0->f_17), bLocal_2275, bLocal_2276, bParam0, 78))
			{
				bLocal_2406 = false;
				if (!UNK_0x437347B10A200C4B(bParam0->f_358[0 /*189*/].f_9, 0))
				{
					UNK_0x71EDC33E5A423750(bParam0->f_358[0 /*189*/].f_9, 4);
				}
				if (func_260("SPR_HELP_DAMG", 0, 0))
				{
					UNK_0x2F23E8033F1ADDD9("SPR_HELP_DAMG");
				}
				bParam0->f_1 = 0;
				func_66(&(Local_51.f_321), 1);
				if (*bParam0)
				{
					func_164(0, 0);
					func_163(0, 0);
					func_162();
					if (func_260("SPR_RETR_DES", 0, 0))
					{
						UNK_0x2F23E8033F1ADDD9("SPR_RETR_DES");
					}
					func_256(0);
					*bParam0 = 1;
					uParam1->f_23 = 6;
				}
				else
				{
					func_164(0, 0);
					func_163(0, 0);
					func_162();
					func_89(&uLocal_2278, 10f);
					func_256(0);
					*bParam0 = 0;
					uParam1->f_23 = 7;
				}
			}
			break;
		case 2:
			func_154(&(Local_51.f_119), 1128792064 /* Float: 200f */, 7, 1, 1, 1065353216 /* Float: 1f */);
			if (UNK_0xBFC0798A6E3417F9(2, 201))
			{
				func_164(0, 0);
				func_163(0, 0);
				func_162();
				iLocal_2411 = UNK_0xD68EA767274B7444();
				UNK_0x4D7F4CC43D4D0DE3(iLocal_2411, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				if (func_260("SPR_RETR_DES", 0, 0))
				{
					UNK_0x2F23E8033F1ADDD9("SPR_RETR_DES");
				}
				func_256(0);
				*bParam0 = 1;
				uParam1->f_23 = 6;
			}
			else if (UNK_0xBFC0798A6E3417F9(2, 202))
			{
				func_164(0, 0);
				func_163(0, 0);
				func_162();
				iLocal_2411 = UNK_0xD68EA767274B7444();
				UNK_0x4D7F4CC43D4D0DE3(iLocal_2411, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
				func_89(&uLocal_2278, 10f);
				func_256(0);
				*bParam0 = 0;
				uParam1->f_23 = 7;
			}
			break;
		case 4:
			if (*bParam0 == 1)
			{
				bParam0->f_1 = 0;
			}
			if (uParam1->f_11 > 0)
			{
				uParam1->f_16 = { bParam0->f_27[uParam1->f_11 /*10*/] };
			}
			if (bParam2)
			{
				if (UNK_0xDF1306B443CD3D15(bParam0->f_358[0 /*189*/].f_9, 0))
				{
					UNK_0x62DE699599F0417E(UNK_0xD803B885F5E47A62(), 1);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
					func_263(&(Local_51.f_119), 0, 0, 1, 1);
					func_262(&(Local_51.f_119), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					func_262(&(Local_51.f_119), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (UNK_0xDF1306B443CD3D15(bParam0->f_358[0 /*189*/].f_9, 0))
				{
					uParam1->f_23 = 5;
				}
			}
			else
			{
				uParam1->f_23 = 8;
			}
			break;
		case 5:
			if (!UNK_0x437347B10A200C4B(bParam0->f_358[0 /*189*/].f_9, 0))
			{
				UNK_0x71EDC33E5A423750(bParam0->f_358[0 /*189*/].f_9, 4);
			}
			bParam0->f_1 = 0;
			if (func_5(&uLocal_2278) <= 10f)
			{
				if (bParam2)
				{
					UNK_0x3584F71E5CA29322(9);
					UNK_0x3584F71E5CA29322(7);
					UNK_0x38C3A68D7861DCFD(0, 99, 1);
					UNK_0x38C3A68D7861DCFD(0, 100, 1);
					func_154(&(Local_51.f_119), 1128792064 /* Float: 200f */, 1, 0, 1, 1065353216 /* Float: 1f */);
					if (UNK_0xBFC0798A6E3417F9(2, 201))
					{
						*bParam0 = 1;
						iLocal_2411 = UNK_0xD68EA767274B7444();
						UNK_0x4D7F4CC43D4D0DE3(iLocal_2411, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
					else if (UNK_0xBFC0798A6E3417F9(2, 202))
					{
						*bParam0 = 0;
						func_89(&uLocal_2278, 10f);
						iLocal_2411 = UNK_0xD68EA767274B7444();
						UNK_0x4D7F4CC43D4D0DE3(iLocal_2411, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
				}
			}
			else
			{
				UNK_0x790015DC92C918E2();
				bLocal_2276 = "SPR_RETR_DES";
				func_66(&(Local_51.f_321), 1);
				uParam1->f_23 = 14;
			}
			break;
		case 6:
			if (func_358(500))
			{
				UNK_0x790015DC92C918E2();
				UNK_0xA37A90C62806D848(1);
				uParam1->f_23 = 8;
			}
			break;
		case 7:
			if (func_3(&(bParam0->f_3)))
			{
				func_4(&(bParam0->f_3));
			}
			if (func_135())
			{
				if (UNK_0x757EF87A33649210())
				{
					func_178(bParam0);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
					if (UNK_0xC844350D5D58C99A(bParam0->f_358[0 /*189*/].f_9))
					{
						UNK_0x37806EBF326ECEE9(bParam0->f_358[0 /*189*/].f_9, 0f, 0f, 0f);
						UNK_0xD458AC1C1D29C3B4(bParam0->f_358[0 /*189*/].f_9, UNK_0xC08489BCA49ECCA8(bParam0->f_358[0 /*189*/].f_9), false);
					}
					uParam1->f_23 = 10;
				}
			}
			break;
		case 8:
			if (func_133(uParam1, 1))
			{
				if (*bParam0)
				{
					bParam0->f_26 = 8;
				}
				else
				{
					if (bParam2)
					{
						UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
						if (Local_51 == 0)
						{
							UNK_0x62DE699599F0417E(UNK_0xD803B885F5E47A62(), 1);
						}
					}
					uParam1->f_23 = 9;
				}
			}
			break;
		case 9:
			iVar0 = 0;
			while (iVar0 < bParam0->f_13)
			{
				if (bParam0->f_358[iVar0 /*189*/].f_8 == uParam1->f_8)
				{
					func_131(bParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!UNK_0x437347B10A200C4B(bParam0->f_358[0 /*189*/].f_9, 0) && bParam0->f_358[0 /*189*/].f_11 != -1)
				{
					func_130(bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 + 1 /*10*/], bParam0->f_358[0 /*189*/].f_9, bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 /*10*/], bParam0->f_358[0 /*189*/].f_11 == 0);
				}
				UNK_0x2FB9A57162E54BAB(0f);
				func_11(&uLocal_2402);
				uParam1->f_23 = 11;
			}
			else
			{
				uParam1->f_23 = 13;
			}
			break;
		case 10:
			func_164(0, 0);
			func_163(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_51.f_3, Local_51.f_6, 0f);
			SYSTEM::SETTIMERA(0);
			uParam1->f_23 = 12;
			break;
		case 11:
			if (!UNK_0xEB880D98B5988D0C() || UNK_0x68367101660E33F0())
			{
				bParam0->f_1 = 1;
				func_11(&uLocal_2402);
				func_108(&(bParam0->f_358[iVar0 /*189*/]), 60f, 0);
				if (func_581(500))
				{
					UNK_0x486B4ADE317F0689();
					if (!UNK_0x437347B10A200C4B(bParam0->f_358[0 /*189*/].f_9, 0))
					{
						UNK_0xF821F915BC24D246(bParam0->f_358[0 /*189*/].f_8, bParam0->f_358[0 /*189*/].f_9, -1);
					}
					if (bParam2 && Local_51 == 0)
					{
						func_88(&(bParam0->f_358[0 /*189*/]), 5f);
					}
					uParam1->f_23 = 13;
				}
				return false;
			}
			else if (UNK_0xEB880D98B5988D0C())
			{
				if (bParam0->f_358[0 /*189*/].f_11 < bParam0->f_12)
				{
					if (func_3(&uLocal_2402))
					{
						if (func_107(&uLocal_2402) >= 3f)
						{
							UNK_0x486B4ADE317F0689();
						}
					}
					else
					{
						func_10(&uLocal_2402);
					}
				}
			}
			break;
		case 12:
			bParam0->f_26 = 8;
			return false;
		case 13:
			if (uParam1->f_22 != 0)
			{
				if (!UNK_0x437347B10A200C4B(uParam1->f_8, 0))
				{
					if (func_106(uParam1))
					{
						func_11(&uLocal_2278);
						bLocal_2276 = "SPR_RETR_STUK";
						uParam1->f_23 = 0;
						return true;
					}
				}
			}
			return false;
		case 14:
			func_178(bParam0);
			func_4(&(bParam0->f_3));
			bParam0->f_26 = 8;
			break;
	}
	return true;
}

bool func_106(var uParam0)
{
	if (uParam0->f_22 != 0)
	{
		if (!UNK_0x131F22FE6F47A65D(UNK_0xD803B885F5E47A62()))
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), uParam0->f_9, 0))
			{
				if (UNK_0x9C66D99E63E8E24C(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_22 == joaat("STUNT"))
					{
						if (UNK_0xEE9925602B29903C(uParam0->f_9) < 3f || UNK_0xE608C809F9416F00(uParam0->f_9))
						{
							if (UNK_0x377BE9A1BF38C7CE(uParam0->f_9) && UNK_0xEE9925602B29903C(uParam0->f_9) < 1f)
							{
								return true;
							}
							if (UNK_0x7B5606C651AB51B5(uParam0->f_9, 0, 1000))
							{
								return true;
							}
							if (UNK_0x7B5606C651AB51B5(uParam0->f_9, 1, 1000))
							{
								return true;
							}
							if (UNK_0x7B5606C651AB51B5(uParam0->f_9, 2, 10000))
							{
								return true;
							}
							if (UNK_0x7B5606C651AB51B5(uParam0->f_9, 3, 10000))
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

float func_107(bool bParam0)
{
	if (func_3(bParam0))
	{
		if (func_7(bParam0))
		{
			return bParam0->f_2;
		}
		else
		{
			return (func_6(UNK_0xEAE0D21A50E6C7F4(*bParam0, 4)) - bParam0->f_1);
		}
	}
	return 0f;
}

void func_108(var uParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;

	if (!UNK_0x437347B10A200C4B(uParam0->f_9, 0))
	{
		if (UNK_0xC41A9202669A24C4(uParam0->f_22))
		{
			vVar0 = { UNK_0x835730A2D89F6093(uParam0->f_9, 2) };
			func_109(uParam0->f_9, bParam1, bParam2, vVar0.x, 0);
		}
	}
}

void func_109(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4)
{
	vector3 vVar0;
	bool bVar3;
	float fVar4;

	UNK_0x38C3A68D7861DCFD(0, 75, 1);
	if (UNK_0x437347B10A200C4B(bParam0, 0))
	{
		return;
	}
	if (UNK_0x9C66D99E63E8E24C(bParam0) < bParam1)
	{
		UNK_0x1AEF7184B203A58D(bParam0, bParam1);
	}
	vVar0 = { UNK_0x835730A2D89F6093(bParam0, 2) };
	bVar3 = false;
	if (bParam2)
	{
		fVar4 = (UNK_0x6117725E0134737F() * 45f);
		if (vVar0.x < -fVar4)
		{
			bVar3 = true;
			vVar0.x = (vVar0.x + fVar4);
		}
		else if (vVar0.x < fParam3)
		{
			bVar3 = true;
			vVar0.x = fParam3;
		}
		else if (vVar0.x > fVar4)
		{
			bVar3 = true;
			vVar0.x = (vVar0.x - fVar4);
		}
		else if (vVar0.x > fParam3)
		{
			bVar3 = true;
			vVar0.x = fParam3;
		}
		if (vVar0.y < -fVar4)
		{
			bVar3 = true;
			vVar0.f_1 = (vVar0.y + fVar4);
		}
		else if (vVar0.y < fParam4)
		{
			bVar3 = true;
			vVar0.f_1 = fParam4;
		}
		else if (vVar0.y > fVar4)
		{
			bVar3 = true;
			vVar0.f_1 = (vVar0.y - fVar4);
		}
		else if (vVar0.y > fParam4)
		{
			bVar3 = true;
			vVar0.f_1 = fParam4;
		}
	}
	else
	{
		if (vVar0.x != fParam3)
		{
			bVar3 = true;
			vVar0.x = fParam3;
		}
		if (vVar0.y != fParam4)
		{
			bVar3 = true;
			vVar0.f_1 = fParam4;
		}
	}
	if (bVar3)
	{
		UNK_0xC023D1C4BF532815(bParam0, vVar0, 2, 1);
	}
}

bool func_110(var uParam0, bool bParam1)
{
	char cVar0[16];

	if (bParam1)
	{
		if (UNK_0xC844350D5D58C99A(uParam0->f_9))
		{
			if (!UNK_0x437347B10A200C4B(uParam0->f_9, 0) || !UNK_0xDF1306B443CD3D15(uParam0->f_9, 0))
			{
				if (UNK_0xC42A92762C58E1B9(uParam0->f_8, uParam0->f_9, 0))
				{
					UNK_0x327AAEE25F323797(uParam0->f_8);
					UNK_0x73270B3C9CC833FD(uParam0->f_9, true, 1);
					UNK_0xA954465BA6FDEFE2(&(uParam0->f_9));
				}
			}
			else
			{
				if (UNK_0xC42A92762C58E1B9(uParam0->f_8, uParam0->f_9, 0))
				{
					UNK_0xA47B46945FF6DE74(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
				}
				if (UNK_0xC42A92762C58E1B9(uParam0->f_8, uParam0->f_9, 0))
				{
				}
				else
				{
					UNK_0x73270B3C9CC833FD(uParam0->f_9, true, 1);
					UNK_0xA954465BA6FDEFE2(&(uParam0->f_9));
				}
			}
		}
	}
	if (!UNK_0x437347B10A200C4B(uParam0->f_9, 0))
	{
		UNK_0xD458AC1C1D29C3B4(uParam0->f_9, 1000, false);
		UNK_0x51B954DAB1BCAF73(uParam0->f_9);
		UNK_0x5DAB50E08C3C504A(uParam0->f_9, 1000f);
		UNK_0xA47B46945FF6DE74(uParam0->f_9, uParam0->f_16, 1, 0, 0, 1);
		UNK_0xD8F6A53F4799FAFE(uParam0->f_9, uParam0->f_19);
		UNK_0xB9FD7450C0DAB575(uParam0->f_9, 1084227584 /* Float: 5f */);
	}
	else
	{
		if (uParam0->f_22 == 0)
		{
			return true;
		}
		uParam0->f_9 = UNK_0x122AAB0B1D6F55AD(joaat("STUNT"), uParam0->f_16, uParam0->f_19, true, true, false);
		if (UNK_0x437347B10A200C4B(uParam0->f_9, 0))
		{
			return false;
		}
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0x71EDC33E5A423750(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 4);
		}
		UNK_0x44A200C9B6E1CEA6(uParam0->f_9, true);
		func_111(uParam0->f_9, &(Local_51.f_243), 0, 1);
	}
	UNK_0x128A778E98A59AB1(uParam0->f_9, 0);
	UNK_0x56FDC9ADE35F7DB0(uParam0->f_9, true, true, 0);
	UNK_0x873BCADC75FF6D20(uParam0->f_9);
	if (!UNK_0x437347B10A200C4B(uParam0->f_8, 0))
	{
		if (!UNK_0x82CCEAB29E9451DD(uParam0->f_8, uParam0->f_9))
		{
			UNK_0xF821F915BC24D246(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!UNK_0xAF6690C489CC6203(uParam0->f_9))
	{
		UNK_0x73270B3C9CC833FD(uParam0->f_9, true, 0);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	UNK_0x95514F113C1EDFBD(uParam0->f_9, &cVar0);
	if (uParam0->f_20 <= 3)
	{
		UNK_0x6728CA90E5387ABE(uParam0->f_9, 0);
		Local_51.f_1 = uParam0->f_9;
	}
	return true;
}

void func_111(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (!func_122(bParam0))
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
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_121(iVar0 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_121(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("SANDKING2"))
		{
			iVar1 = 1;
			if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_121(iVar1 + 1)))
			{
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_121(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_121(iVar2)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_121(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_121(iVar3)))
				{
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_121(iVar3));
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
					if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_121(iVar4)))
					{
					}
					else
					{
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_121(iVar4));
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
		if (((UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, 15) || func_120(bParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_119())
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
		if (uParam1->f_65 == -1 && !func_118(uParam1->f_66))
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
						func_117(bParam0, uParam1->f_69);
					}
				}
				else
				{
					func_117(bParam0, uParam1->f_69);
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
			func_112(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!UNK_0xAFB8495D36825275(uParam1->f_66) && !UNK_0xA7082C42B8809BF2(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (UNK_0xEAE0D21A50E6C7F4(uParam1->f_77, func_121(iVar5 + 1)))
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

int func_112(bool bParam0, var uParam1, var uParam2)
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
	if (func_116(UNK_0x134B62B726CEC8E6(*bParam0), 1) && UNK_0x0ECB5CA5140957AD(*bParam0, 24) != func_115(*bParam0, ((*uParam1)[38] - 1)))
	{
		UNK_0xEE6A1776A67F70C1(*bParam0, 24, func_115(*bParam0, ((*uParam1)[38] - 1)), false);
	}
	func_114(bParam0);
	if (func_113(*bParam0))
	{
		UNK_0xD5A0214B20BCBAD8(*bParam0, 1);
		UNK_0x44A200C9B6E1CEA6(*bParam0, true);
	}
	return 1;
}

bool func_113(bool bParam0)
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

void func_114(bool bParam0)
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

int func_115(bool bParam0, int iParam1)
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

bool func_116(int iParam0, int iParam1)
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

void func_117(bool bParam0, int iParam1)
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

bool func_118(int iParam0)
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

bool func_119()
{
	return UNK_0xC146D5FBD23C6954(joaat("MPINDEPENDENCE"));
}

bool func_120(bool bParam0)
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

int func_121(int iParam0)
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

bool func_122(bool bParam0)
{
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!func_128(UNK_0xD803B885F5E47A62(), -1))
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
	if (func_124(UNK_0xD803B885F5E47A62()) == 3)
	{
		if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (func_123(bParam0) != -1)
			{
				return true;
			}
		}
	}
	return false;
}

int func_123(bool bParam0)
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

int func_124(int iParam0)
{
	if (func_127(iParam0) == 233)
	{
		return func_125(iParam0);
	}
	return -1;
}

int func_125(int iParam0)
{
	if (func_126(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

bool func_126(int iParam0, bool bParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (bParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return true;
	}
	return false;
}

int func_127(int iParam0)
{
	if (func_126(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

bool func_128(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (func_129(bParam0, 1, 1))
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

bool func_129(bool bParam0, bool bParam1, bool bParam2)
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

void func_130(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;
	vector3 vVar12;

	if (!UNK_0x437347B10A200C4B(bParam3, 0))
	{
		if (bParam7 && Local_51.f_10 == 0)
		{
			UNK_0xA47B46945FF6DE74(bParam3, 1705.039f, 3251.13f, 40.0016f, 1, 0, 0, 1);
		}
		vVar12 = { UNK_0x68F4C0EC296D3901(bParam3, true) };
		UNK_0x5CDCBCDA2C651E97(vVar12);
		UNK_0xE82754C349C7B581(vVar12, &fVar11, 0, 0);
		vVar5 = { UNK_0x68F4C0EC296D3901(bParam3, true) };
		if (bParam7)
		{
			vVar8 = { vParam0 - vParam4 };
		}
		else
		{
			vVar8 = { vParam4 - vVar5 };
		}
		iVar0 = UNK_0xE7D606C557C86100(vVar8.x, vVar8.y);
		bVar1 = (UNK_0xE7D606C557C86100(vVar8.x, vVar8.z) - 270f);
		while (bVar1 > 180f)
		{
			bVar1 = (bVar1 - 360f);
		}
		while (bVar1 < -180f)
		{
			bVar1 = (bVar1 + 360f);
		}
		if (bVar1 < -90f)
		{
			bVar1 = -(180f - UNK_0x755FF954DAE327E1(bVar1));
		}
		if (bVar1 > 90f)
		{
			bVar1 = (180f - UNK_0x755FF954DAE327E1(bVar1));
		}
		if (UNK_0x755FF954DAE327E1((vVar12.z - fVar11)) < 25f && (bVar1 > 15f || bVar1 < -15f))
		{
			vVar12.f_2 = (fVar11 + 25f);
			UNK_0xA47B46945FF6DE74(bParam3, vVar12, 1, 0, 0, 1);
		}
		UNK_0x1E9649458B15960F(bParam3, true);
		vVar2 = { UNK_0x835730A2D89F6093(bParam3, 2) };
		vVar2.x = bVar1;
		vVar2.f_2 = iVar0;
		UNK_0xC023D1C4BF532815(bParam3, vVar2, 2, 1);
		UNK_0x1E9649458B15960F(bParam3, false);
		UNK_0xD67D6A3F0D653D93(vVar12, UNK_0x08D89CE2E20AE305(bParam3), 500f, 0);
	}
}

void func_131(bool bParam0, int iParam1, bool bParam2)
{
	func_132(bParam0, iParam1, (bParam0->f_358[iParam1 /*189*/].f_11 - 1), bParam2);
}

void func_132(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;

	if (iParam2 < 0 || iParam2 > (bParam0->f_12 - 1))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > (bParam0->f_13 - 1))
	{
		return;
	}
	if (UNK_0x437347B10A200C4B(bParam0->f_358[iParam1 /*189*/].f_8, 0))
	{
		return;
	}
	if (bParam0->f_358[iParam1 /*189*/].f_22 != 0)
	{
		if (UNK_0x437347B10A200C4B(bParam0->f_358[iParam1 /*189*/].f_9, 0))
		{
			return;
		}
	}
	vVar0 = { bParam0->f_27[iParam2 + 1 /*10*/] - bParam0->f_27[iParam2 /*10*/] };
	iVar3 = UNK_0xE7D606C557C86100(vVar0.x, vVar0.y);
	fVar4 = 0f;
	if (UNK_0x7D8B2A8F9EA82DB7(bParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 0f;
	}
	else if (UNK_0x8E39AC3C76C8AA58(bParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 25f;
	}
	else if (UNK_0xC41A9202669A24C4(bParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(bParam0->f_358[iParam1 /*189*/]), bParam0->f_27[iParam2 /*10*/], iVar3, fVar4);
}

bool func_133(var uParam0, bool bParam1)
{
	if (!func_110(uParam0, bParam1) || !func_134(uParam0))
	{
		return false;
	}
	return true;
}

bool func_134(var uParam0)
{
	char cVar0[16];

	if (uParam0->f_21 == 0)
	{
		return false;
	}
	if (!UNK_0x437347B10A200C4B(uParam0->f_8, 0))
	{
		UNK_0xD458AC1C1D29C3B4(uParam0->f_8, 1000, false);
		if (!UNK_0x437347B10A200C4B(uParam0->f_9, 0))
		{
			if (!UNK_0x82CCEAB29E9451DD(uParam0->f_8, uParam0->f_9))
			{
				UNK_0xF821F915BC24D246(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			UNK_0xA47B46945FF6DE74(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!UNK_0x437347B10A200C4B(uParam0->f_9, 0))
	{
		uParam0->f_8 = UNK_0x852A19533F896693(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, 1, true);
		if (UNK_0x437347B10A200C4B(uParam0->f_8, 0))
		{
			return false;
		}
	}
	else
	{
		uParam0->f_8 = UNK_0x36F2404464202779(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, 1, true);
		if (UNK_0x437347B10A200C4B(uParam0->f_8, 0))
		{
			return false;
		}
	}
	if (uParam0->f_20 > 3)
	{
		if (!UNK_0xAF6690C489CC6203(uParam0->f_8))
		{
			UNK_0x73270B3C9CC833FD(uParam0->f_8, true, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		UNK_0x5F2AA9E2843E9403(uParam0->f_8, &cVar0);
	}
	return true;
}

bool func_135()
{
	if (!UNK_0xEAE0D21A50E6C7F4(bLocal_43, false) && !UNK_0xEAE0D21A50E6C7F4(bLocal_43, true))
	{
		SYSTEM::SETTIMERA(0);
		func_164(1, 0);
	}
	if (!UNK_0x22A8E52414415B76())
	{
		UNK_0x790015DC92C918E2();
	}
	UNK_0x38C3A68D7861DCFD(2, 199, 1);
	UNK_0x38C3A68D7861DCFD(0, 59, 1);
	UNK_0x38C3A68D7861DCFD(0, 60, 1);
	UNK_0x38C3A68D7861DCFD(0, 37, 1);
	UNK_0x38C3A68D7861DCFD(0, 25, 1);
	UNK_0x95235C19032FCE7D();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_43, true))
		{
			func_163(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || UNK_0x757EF87A33649210())
		{
			if (!UNK_0x757EF87A33649210())
			{
				if (!UNK_0xD0BB2359EC70FC37())
				{
					UNK_0x53491B90E4FD0E56(1500);
				}
			}
			else if (iLocal_44 == 0)
			{
				iLocal_44 = UNK_0x1C0640BA9A7327B3() + 1000;
				if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				}
				func_153(0, 2, 1);
				func_145(1, 1, 1, 0, 0, 0);
				func_137(1);
				UNK_0x7BBABEC524CBF883(0);
				UNK_0x86E4B20DE8E91A57(0);
				UNK_0xA37A90C62806D848(1);
				UNK_0x790015DC92C918E2();
				if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
				{
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
				}
				func_164(0, 0);
				func_136(0);
			}
			else if (UNK_0x1C0640BA9A7327B3() < iLocal_44)
			{
				return true;
			}
		}
	}
	return false;
}

void func_136(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bLocal_43, 3))
			{
				UNK_0x21387C9EECC2B220(true);
				UNK_0x5D96D8530B3D0904(&bLocal_43, 3);
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bLocal_43, 3))
		{
			UNK_0x21387C9EECC2B220(false);
			UNK_0x0674E58A79778E99(&bLocal_43, 3);
		}
	}
}

void func_137(bool bParam0)
{
	if (bParam0)
	{
		func_144();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			UNK_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_143(0))
		{
			func_138(0);
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

void func_138(int iParam0)
{
	if (func_142())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_141())
		{
			func_140(1, 1);
		}
		else
		{
			func_140(0, 0);
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
	if (!func_139())
	{
		Global_19486.f_1 = 3;
	}
}

bool func_139()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_140(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_143(0))
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

bool func_141()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_142()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

bool func_143(int iParam0)
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

void func_144()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_145(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		UNK_0x4BC328AFC301140F(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 1);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 1);
		func_152(1);
		UNK_0xC60408C24B32AAC4();
		UNK_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0x1EE04CEA36EF313B())
			{
				UNK_0x5CEB4DB888A62073(false);
			}
			if (!func_139())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_151(1, iParam3, bParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_152(0);
		UNK_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			UNK_0xF8041E6992430151();
		}
		UNK_0xA2057B8C3D410B46(UNK_0xD803B885F5E47A62(), 0);
		UNK_0xC30A9983B09988FE(UNK_0xD803B885F5E47A62(), 0);
		func_151(0, iParam3, bParam2, 0);
		if (UNK_0x8CD06866876216F2())
		{
			if (((((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_149(UNK_0xD803B885F5E47A62())) && !func_147(UNK_0xD803B885F5E47A62(), 0)) && !func_146()) && !bParam4) && !bParam5)
			{
				UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
			}
		}
		else if (((!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()) && !func_149(UNK_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			UNK_0xE121AE1BBF90E186(UNK_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_146()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1590535[UNK_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_147(bool bParam0, int iParam1)
{
	bool bVar0;

	if (bParam0 == UNK_0xD803B885F5E47A62())
	{
		bVar0 = func_148(-1, 0) == 8;
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

int func_148(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

bool func_149(bool bParam0)
{
	if (func_147(bParam0, 0))
	{
		return true;
	}
	if (func_150())
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

bool func_150()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_151(bool bParam0, int iParam1, bool bParam2, int iParam3)
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

void func_152(int iParam0)
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

void func_153(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&bLocal_43, 2);
		if (!UNK_0x8CD06866876216F2())
		{
			if (iParam1 == 1)
			{
				UNK_0x9A82EEAF6CA12AEE(0.2f);
			}
			else
			{
				UNK_0x9A82EEAF6CA12AEE(0.075f);
			}
		}
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_43, 2) || bParam2)
		{
			if (!UNK_0x8CD06866876216F2())
			{
				UNK_0x9A82EEAF6CA12AEE(1f);
			}
		}
		UNK_0x0674E58A79778E99(&bLocal_43, 2);
	}
}

void func_154(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;

	if (((UNK_0xD0BB2359EC70FC37() || UNK_0x7BCE0E6DD4A1F749()) || UNK_0x757EF87A33649210()) || UNK_0x06980BB66EBA4D95())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_161(uParam0))
	{
		return;
	}
	UNK_0xBD706C594F6DCD4A();
	UNK_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_160(uParam0->f_1, 256) || (func_160(uParam0->f_1, 8192) && UNK_0xB8E3620B82AD47D7(2)))
	{
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_CLEAR_SPACE");
		UNK_0x7C19E5E4784BD7CF(bParam1);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
		UNK_0x7C19E5E4784BD7CF(bParam5);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT_EMPTY");
		UNK_0x7E60D21B163E9D56();
		if (UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			UNK_0x1200CC973A2399C8(func_160(uParam0->f_1, 4096));
			UNK_0x7E60D21B163E9D56();
		}
		bVar5 = false;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				case 1:
					bVar4 = UNK_0x91E3F625EF57450D(2);
					break;
				case 2:
					bVar4 = !UNK_0x91E3F625EF57450D(2);
					break;
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT"))
				{
					UNK_0x3CAEA85DA607305E(bVar5);
					bVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						bVar2 = UNK_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							bVar3 = UNK_0xF59058FCB716F903(iVar0, iVar1, bVar2);
						}
						else
						{
							bVar3 = UNK_0xE32F7AC5E6DF304A(iVar0, iVar1, bVar2);
						}
						if (!UNK_0xEA6BC48857E0AC4C(bVar3))
						{
							func_159(bVar3);
						}
						bVar7++;
					}
					if (!UNK_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_158(uParam0->f_2[iVar6 /*15*/]);
					}
					if (UNK_0x0EFF6B4415DAF4A1())
					{
						if (func_160(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								UNK_0x1200CC973A2399C8(true);
								UNK_0x3CAEA85DA607305E(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								UNK_0x1200CC973A2399C8(false);
								UNK_0x3CAEA85DA607305E(-1);
							}
						}
					}
					UNK_0x7E60D21B163E9D56();
				}
			}
			iVar6++;
		}
		bVar8 = func_157(bParam4, func_157(func_160(uParam0->f_1, 32), 1f, 0f), -1f);
		UNK_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		UNK_0x7C19E5E4784BD7CF(bVar8);
		UNK_0x7E60D21B163E9D56();
		UNK_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(0f);
		UNK_0x7C19E5E4784BD7CF(80f);
		UNK_0x7E60D21B163E9D56();
		func_156(&(uParam0->f_1), 256);
		func_155(&(uParam0->f_1), 128);
	}
	UNK_0x6567AE843FADBA94(*uParam0, 255, 255, 255, false, 0);
}

void func_155(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_156(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_157(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_158(bool bParam0)
{
	UNK_0x7ACC3006A87F8B39(bParam0);
	UNK_0x779B34565F4D71B1();
}

void func_159(bool bParam0)
{
	UNK_0x045A0775396CC970(bParam0);
}

bool func_160(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_161(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (UNK_0x83D8570832F172A7(*uParam0))
		{
			func_156(&(uParam0->f_1), 1);
			return true;
		}
	}
	return false;
}

void func_162()
{
	bLocal_43 = false;
	iLocal_44 = 0;
	func_145(0, 1, 1, 0, 0, 0);
	func_137(1);
}

void func_163(int iParam0, bool bParam1)
{
	if (iParam0 == 1)
	{
		func_164(0, 0);
		UNK_0x82A772610883F395("DeathFailOut", 0, 0);
		UNK_0x5D96D8530B3D0904(&bLocal_43, true);
		func_153(1, 2, 0);
		UNK_0x4AED3E7834924DC8(2);
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_43, true) || bParam1)
		{
			UNK_0x9A1335ECD7BD117F("DeathFailOut");
			func_153(0, 2, 1);
			UNK_0x4AED3E7834924DC8(0);
		}
		UNK_0x0674E58A79778E99(&bLocal_43, true);
	}
}

void func_164(int iParam0, bool bParam1)
{
	bool bVar0;

	switch (func_165())
	{
		case 0:
			bVar0 = "DeathFailMichaelIn";
			break;
		case 1:
			bVar0 = "DeathFailFranklinIn";
			break;
		case 2:
			bVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(bLocal_43, false) || bParam1)
		{
			UNK_0x82A772610883F395(bVar0, 0, 0);
			UNK_0x5D96D8530B3D0904(&bLocal_43, false);
			func_153(1, 1, 0);
			UNK_0x4AED3E7834924DC8(1);
		}
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bLocal_43, false) || bParam1)
		{
			UNK_0x9A1335ECD7BD117F(bVar0);
			func_153(0, 1, 1);
			UNK_0x4AED3E7834924DC8(0);
		}
		UNK_0x0674E58A79778E99(&bLocal_43, false);
	}
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
		if (func_170(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_169(UNK_0x16F2683693E537C9());
			if (func_168(iVar0) && (!func_167(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_168(Global_111638.f_2358.f_539.f_4321))
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

bool func_167(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_168(int iParam0)
{
	return iParam0 < 3;
}

int func_169(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_170(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_170(int iParam0)
{
	if (func_168(iParam0))
	{
		return func_171(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_171(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_172(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			UNK_0x8BC9595FD2792B5D("DEATH_SCENE");
			UNK_0x4D7F4CC43D4D0DE3(-1, "ScreenFlash", "WastedSounds", 1);
			func_10(&(uParam0->f_1));
			func_162();
			func_177(uParam1, (0.15f * 0.075f), 0.5f);
			UNK_0x31A33F7BCB08CB80(true);
			break;
		case 1:
			if (func_135() || UNK_0x757EF87A33649210())
			{
				*uParam0 = 2;
			}
			if (!func_362(uParam0->f_4, 4))
			{
				if (UNK_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0, -1))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "Bed", "WastedSounds", 1);
					func_334(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_362(uParam0->f_4, 2))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "TextHit", "WastedSounds", 1);
					func_334(&(uParam0->f_4), 2);
				}
				func_174(uParam2, uParam1, bParam3, bParam4, bParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072 /* Float: 15f */, 0);
			}
			break;
		case 2:
			if (func_174(uParam2, uParam1, bParam3, bParam4, bParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072 /* Float: 15f */, 1))
			{
				func_164(0, 1);
				func_163(0, 1);
				func_162();
				if (*bParam5)
				{
					UNK_0x4DB69487E1A9EE2A(1);
				}
				else if (!uParam0->f_5)
				{
					func_173(0);
				}
				UNK_0x31A33F7BCB08CB80(false);
				UNK_0x65C5EBCA17A891FC(0);
				*uParam0 = 3;
			}
			break;
		case 3:
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x67E5ECB8FD7F5018(1);
				func_164(0, 1);
				func_163(0, 1);
				UNK_0x8910D3D58E0132B8("DEATH_SCENE");
				UNK_0x31A33F7BCB08CB80(false);
				return true;
			}
			break;
		case 4:
			UNK_0x31A33F7BCB08CB80(false);
			return true;
	}
	return false;
}

void func_173(bool bParam0)
{
	if ((Global_41431 == 9 || Global_41431 == 10) || Global_41431 == 5)
	{
		Global_110287 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_110287 = 0;
	}
}

bool func_174(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!UNK_0x757EF87A33649210() || UNK_0xD0BB2359EC70FC37())
			{
				UNK_0x53491B90E4FD0E56(2500);
				UNK_0xC2127C0F64D6A3B9();
			}
			if (bParam9)
			{
				UNK_0x31A33F7BCB08CB80(true);
			}
			UNK_0x9A82EEAF6CA12AEE(0.2f);
			if (func_160(iParam5, 4))
			{
				if (UNK_0xAE317D00A5A55DF6("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		case 1:
			UNK_0x7E60C62A7CE58FC8(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			UNK_0x7ACC3006A87F8B39("STRING");
			UNK_0x3A820E495A7BA3E5(6);
			UNK_0x6B012227B3921E18(bParam2);
			UNK_0x779B34565F4D71B1();
			func_158(bParam3);
			UNK_0x3CAEA85DA607305E(100);
			UNK_0x1200CC973A2399C8(true);
			UNK_0x7A8BB56B212464AC();
			if (func_160(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					UNK_0x7E60C62A7CE58FC8(*uParam0, "TRANSITION_UP");
					UNK_0x7C19E5E4784BD7CF(uParam1->f_134);
					UNK_0x7E60D21B163E9D56();
					uParam1->f_136 = 1;
				}
			}
			if (!func_160(iParam5, 1))
			{
				UNK_0x5EEBDFEE72949D59(0);
			}
			func_263(&(uParam1->f_10), 0, 1, 1, 1);
			func_262(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_262(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_160(iParam5, 4))
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_160(iParam5, 8))
			{
				switch (func_165())
				{
					case 0:
						UNK_0x82A772610883F395("MinigameEndMichael", 500, 0);
						break;
					case 1:
						UNK_0x82A772610883F395("MinigameEndFranklin", 500, 0);
						break;
					case 2:
						UNK_0x82A772610883F395("MinigameEndTrevor", 500, 0);
						break;
				}
			}
			if (!func_3(&(uParam1->f_1)))
			{
				func_363(&(uParam1->f_1));
			}
			if (func_160(iParam5, 2))
			{
				if (!func_3(&(uParam1->f_4)))
				{
					func_363(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		case 2:
			UNK_0xBD706C594F6DCD4A();
			if (func_160(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					UNK_0x7E60C62A7CE58FC8(*uParam0, "TRANSITION_UP");
					UNK_0x7C19E5E4784BD7CF(uParam1->f_134);
					UNK_0x7E60D21B163E9D56();
					uParam1->f_136 = 1;
				}
			}
			UNK_0xD9ACBBA59FD5A09E(iParam6);
			func_176(uParam0, 0, 0);
			if (!func_160(iParam5, 16) && (func_5(&(uParam1->f_1)) >= uParam1->f_135 || UNK_0x757EF87A33649210()))
			{
				func_154(&(uParam1->f_10), 1128792064 /* Float: 200f */, iParam6, bParam7, 1, 1065353216 /* Float: 1f */);
				UNK_0x5D80F91A16C40CDE();
				if (UNK_0xB9132A06AE472728(2, 201))
				{
					uParam1->f_138 = 1;
					UNK_0x4D7F4CC43D4D0DE3(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_160(iParam5, 1))
					{
						UNK_0x18B28213EC89540F(0);
					}
					func_175(&(uParam1->f_10));
					*uParam1 = 3;
					return false;
				}
				else if (UNK_0xB9132A06AE472728(2, 202))
				{
					uParam1->f_138 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_160(iParam5, 1))
					{
						UNK_0x18B28213EC89540F(0);
					}
					func_175(&(uParam1->f_10));
					*uParam1 = 3;
					return false;
				}
			}
			if (func_160(iParam5, 2))
			{
				if (func_5(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_160(iParam5, 1))
					{
						UNK_0x18B28213EC89540F(0);
					}
					func_175(&(uParam1->f_10));
					*uParam1 = 3;
					return false;
				}
			}
			break;
		case 3:
			func_176(uParam0, 0, 0);
			UNK_0x9A82EEAF6CA12AEE(1f);
			if (uParam1->f_138 || !((UNK_0x7F8A39872A07D2CE("stunt_plane_races", UNK_0xBB0808A181D4745C()) || UNK_0x7F8A39872A07D2CE("pilot_school", UNK_0xBB0808A181D4745C())) || (UNK_0x7F8A39872A07D2CE("bj", UNK_0xBB0808A181D4745C()) && UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))))
			{
				UNK_0x82E51BCA72537B6C(2500);
			}
			if (func_160(iParam5, 64) && uParam1->f_138)
			{
				UNK_0x53491B90E4FD0E56(500);
			}
			func_11(&(uParam1->f_4));
			if (bParam9)
			{
				UNK_0x31A33F7BCB08CB80(false);
			}
			*uParam1 = 4;
			break;
		case 4:
			if (func_5(&(uParam1->f_4)) <= 0.1f)
			{
				func_176(uParam0, 0, 0);
			}
			else
			{
				*bParam4 = uParam1->f_138;
				return true;
			}
			break;
	}
	return false;
}

void func_175(int iParam0)
{
	if (*iParam0 != 0)
	{
		UNK_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

int func_176(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	UNK_0x3584F71E5CA29322(14);
	if (!bParam2)
	{
		UNK_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		UNK_0x6567AE843FADBA94(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (UNK_0x06F8112AA79C53D9(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_5(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_4(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_177(var uParam0, float fParam1, float fParam2)
{
	if (func_3(&(uParam0->f_1)))
	{
		func_4(&(uParam0->f_1));
	}
	if (func_3(&(uParam0->f_4)))
	{
		func_4(&(uParam0->f_4));
	}
	func_175(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_178(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < bParam0->f_12)
	{
		func_78(bParam0, iVar0);
		iVar0++;
	}
}

void func_179(int iParam0, bool bParam1)
{
	switch (iLocal_1990)
	{
		case 0:
			func_25();
			func_196();
			func_192();
			iLocal_1990 = 1;
			break;
		case 1:
			if (func_191())
			{
				iLocal_1990 = 2;
			}
			break;
		case 2:
			func_180(iParam0);
			break;
		case 3:
			if (bParam1)
			{
				iLocal_1990 = 0;
			}
			break;
	}
}

void func_180(int iParam0)
{
	switch (Local_51.f_10)
	{
		case 3:
			func_190(iParam0);
			func_189(iParam0);
			break;
		case 0:
			func_188(iParam0);
			func_187(iParam0);
			break;
		case 1:
			func_186(iParam0);
			func_184(iParam0);
			break;
		case 2:
			func_183(iParam0);
			func_182(iParam0);
			break;
		case 4:
			func_181(iParam0);
			break;
	}
}

void func_181(int iParam0)
{
	if (iParam0 == 5)
	{
		if (!func_362(iLocal_2081, 1))
		{
			func_334(&iLocal_2081, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_362(iLocal_2081, 2))
		{
			func_334(&iLocal_2081, 2);
		}
	}
}

void func_182(int iParam0)
{
	if (iParam0 >= 4)
	{
		if (!UNK_0xC844350D5D58C99A(iLocal_2059[0]) && !func_362(iLocal_2071, 1))
		{
			iLocal_2059[0] = UNK_0x122AAB0B1D6F55AD(joaat("HAULER"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, true, true, false);
			iLocal_2059[1] = UNK_0x122AAB0B1D6F55AD(joaat("TANKER"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, true, true, false);
			UNK_0xC74DAD25331A5425(iLocal_2059[0], iLocal_2059[1], 1065353216 /* Float: 1f */);
			iLocal_2065[0] = UNK_0x852A19533F896693(iLocal_2059[0], 4, joaat("S_M_M_DOCKWORK_01"), -1, 1, true);
			func_334(&iLocal_2071, 1);
		}
		if (UNK_0x1C2E18E9C63BEB77("SPR_Fluff_01"))
		{
			if (!UNK_0x437347B10A200C4B(iLocal_2059[0], 0) && !UNK_0x437347B10A200C4B(iLocal_2065[0], 0))
			{
				if (UNK_0xD1960163A3042274(iLocal_2065[0], -235832601) == 1)
				{
				}
				else
				{
					UNK_0x1B901F542DF070CF(iLocal_2065[0], iLocal_2059[0], "SPR_Fluff_01", 786469, 0, 8, -1, UNK_0xD890711CFD5AF100(iLocal_2059[0]), 0, 1073741824 /* Float: 2f */);
				}
			}
		}
	}
}

void func_183(int iParam0)
{
	if (iParam0 == 4)
	{
		if (!func_362(iLocal_2081, 1))
		{
			func_334(&iLocal_2081, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!func_362(iLocal_2081, 2))
		{
			func_334(&iLocal_2081, 2);
		}
	}
}

void func_184(int iParam0)
{
	if (iParam0 >= 1)
	{
		if (!UNK_0xC844350D5D58C99A(iLocal_2059[0]))
		{
			if (!func_362(iLocal_2071, 1))
			{
				if (func_185(&iLocal_2053))
				{
					iLocal_2059[0] = UNK_0x122AAB0B1D6F55AD(joaat("SANCHEZ"), -2586.901f, 386.4225f, 208.0505f, 349.0836f, true, true, false);
					func_334(&iLocal_2071, 1);
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(iLocal_2059[0]))
		{
			if (!UNK_0xC844350D5D58C99A(iLocal_2065[0]))
			{
				if (!func_362(iLocal_2071, 2))
				{
					iLocal_2065[0] = UNK_0x852A19533F896693(iLocal_2059[0], 4, joaat("A_M_Y_MOTOX_01"), -1, 1, true);
					func_334(&iLocal_2071, 2);
				}
			}
		}
		if (!UNK_0xC844350D5D58C99A(iLocal_2059[0]) && !UNK_0xC844350D5D58C99A(iLocal_2065[0]))
		{
			if (!UNK_0x437347B10A200C4B(iLocal_2059[0], 0) && !UNK_0x437347B10A200C4B(iLocal_2065[0], 0))
			{
				if (!UNK_0x5A91F08DF773C39D(iLocal_2059[0], -2530.873f, 608.701f, 238.9111f, 3f, 3f, 3f, false, true, 0))
				{
					if (UNK_0xD1960163A3042274(iLocal_2065[0], -1817882002) == 1)
					{
					}
					else
					{
						UNK_0xE9362E4D600DD12A(iLocal_2065[0], iLocal_2059[0], -2530.873f, 608.701f, 238.9111f, UNK_0xD890711CFD5AF100(iLocal_2059[0]), 0, false, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!UNK_0xC844350D5D58C99A(iLocal_2059[1]))
		{
			if (!func_362(iLocal_2072, 1))
			{
				if (func_185(&iLocal_2053))
				{
					iLocal_2059[1] = UNK_0x122AAB0B1D6F55AD(joaat("SANCHEZ"), -2582.93f, 384.918f, 208.5764f, 336.8248f, true, true, false);
					func_334(&iLocal_2072, 1);
				}
			}
		}
		if (UNK_0xC844350D5D58C99A(iLocal_2059[1]))
		{
			if (!UNK_0xC844350D5D58C99A(iLocal_2065[1]))
			{
				if (!func_362(iLocal_2072, 2))
				{
					iLocal_2065[1] = UNK_0x852A19533F896693(iLocal_2059[1], 4, joaat("A_M_Y_MOTOX_01"), -1, 1, true);
					func_334(&iLocal_2072, 2);
				}
			}
		}
		if (!UNK_0xC844350D5D58C99A(iLocal_2059[1]) && !UNK_0xC844350D5D58C99A(iLocal_2065[1]))
		{
			if (!UNK_0x437347B10A200C4B(iLocal_2059[1], 0) && !UNK_0x437347B10A200C4B(iLocal_2065[1], 0))
			{
				if (!UNK_0x5A91F08DF773C39D(iLocal_2059[1], -2527.712f, 609.6833f, 239.2568f, 3f, 3f, 3f, false, true, 0))
				{
					if (UNK_0xD1960163A3042274(iLocal_2065[1], -1817882002) == 1)
					{
					}
					else
					{
						UNK_0xE9362E4D600DD12A(iLocal_2065[1], iLocal_2059[1], -2527.712f, 609.6833f, 239.2568f, UNK_0xD890711CFD5AF100(iLocal_2059[1]), 0, false, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

bool func_185(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!UNK_0xB87F6CF6E5628C67((*iParam0)[iVar0]))
			{
				if (!UNK_0xB87F6CF6E5628C67((*iParam0)[iVar0]))
				{
				}
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_186(int iParam0)
{
	if (iParam0 == 9)
	{
		if (!func_362(iLocal_2081, 1))
		{
			func_334(&iLocal_2081, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_362(iLocal_2081, 2))
		{
			func_334(&iLocal_2081, 2);
		}
	}
}

void func_187(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!UNK_0xC844350D5D58C99A(iLocal_2059[0]) && !func_362(iLocal_2071, 1))
		{
			iLocal_2059[0] = UNK_0x122AAB0B1D6F55AD(joaat("JETMAX"), -1429.102f, 2602.645f, -1.0709f, 85.2614f, true, true, false);
			iLocal_2065[0] = UNK_0x852A19533F896693(iLocal_2059[0], 4, joaat("S_M_M_DOCKWORK_01"), -1, 1, true);
			if (!UNK_0x437347B10A200C4B(iLocal_2059[0], 0) && !UNK_0x437347B10A200C4B(iLocal_2065[0], 0))
			{
				if (!UNK_0x5A91F08DF773C39D(iLocal_2059[0], -1552.281f, 2641.609f, -0.8283f, 3f, 3f, 3f, false, true, 0))
				{
					if (UNK_0xD1960163A3042274(iLocal_2065[0], -1273030092) == 1)
					{
					}
					else
					{
						UNK_0x132B85BCE016BCA0(iLocal_2065[0], iLocal_2059[0], -1552.281f, 2641.609f, -0.8283f, 4, UNK_0xD890711CFD5AF100(iLocal_2059[0]), 262144, 3f, -1f, 1);
					}
				}
			}
			func_334(&iLocal_2071, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (func_362(iLocal_2071, 1))
		{
			if (!UNK_0x437347B10A200C4B(iLocal_2065[0], 0))
			{
				UNK_0xEBA53F35D0085654(&(iLocal_2065[0]));
			}
			if (!UNK_0x437347B10A200C4B(iLocal_2059[0], 0))
			{
				UNK_0xA954465BA6FDEFE2(&(iLocal_2059[0]));
			}
		}
	}
}

void func_188(int iParam0)
{
	if (iParam0 == 7)
	{
		if (!func_362(iLocal_2081, 1))
		{
			func_334(&iLocal_2081, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!func_362(iLocal_2081, 2))
		{
			func_334(&iLocal_2081, 2);
		}
	}
}

void func_189(int iParam0)
{
	if (!func_362(iLocal_2071, 1))
	{
		if (iParam0 < 3)
		{
			if (UNK_0x3DDA6C6A285628E4(101, "SPRStuntAF"))
			{
				UNK_0x5CDCBCDA2C651E97(-943.8105f, -3173.692f, 12.9445f);
				if (!UNK_0xC844350D5D58C99A(iLocal_2059[0]))
				{
					iLocal_2059[0] = UNK_0x122AAB0B1D6F55AD(joaat("JET"), -943.8105f, -3173.692f, 12.9445f, 60.537f, true, true, false);
					UNK_0xB9FD7450C0DAB575(iLocal_2059[0], 1084227584 /* Float: 5f */);
					UNK_0x56FDC9ADE35F7DB0(iLocal_2059[0], true, true, 0);
					if (Local_51 == 0)
					{
						UNK_0x873BCADC75FF6D20(iLocal_2059[0]);
					}
					iLocal_2065[0] = UNK_0x852A19533F896693(iLocal_2059[0], 4, joaat("S_M_M_HIGHSEC_01"), -1, 1, true);
				}
				if (!UNK_0x437347B10A200C4B(iLocal_2059[0], 0))
				{
					if (UNK_0x5A91F08DF773C39D(iLocal_2059[0], -943.8105f, -3173.692f, 12.9445f, 20f, 20f, 20f, false, true, 0))
					{
						if (!UNK_0x20D6474D5F4B9FC6(iLocal_2059[0]))
						{
							UNK_0x4D3C3C0B0DE2663E(iLocal_2059[0], 101, "SPRStuntAF", 1);
						}
					}
					else if (!UNK_0x20D6474D5F4B9FC6(iLocal_2059[0]))
					{
						if (!UNK_0x437347B10A200C4B(iLocal_2065[0], 0))
						{
							if (!UNK_0xD1960163A3042274(iLocal_2065[0], -1817882002) == 1)
							{
								UNK_0xE9362E4D600DD12A(iLocal_2065[0], iLocal_2059[0], -6793.876f, -557.0385f, 781.0172f, 50f, 0, joaat("JET"), 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!UNK_0x437347B10A200C4B(iLocal_2059[0], 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(iLocal_2059[0]))
			{
				UNK_0xC55F2A0377488064(iLocal_2059[0]);
			}
			else
			{
				UNK_0xA954465BA6FDEFE2(&(iLocal_2059[0]));
				func_334(&iLocal_2071, 1);
			}
		}
	}
	else if (!UNK_0x437347B10A200C4B(iLocal_2059[0], 0))
	{
		UNK_0x5CDCBCDA2C651E97(UNK_0x68F4C0EC296D3901(iLocal_2059[0], true));
	}
}

void func_190(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!func_362(iLocal_2081, 1))
		{
			func_334(&iLocal_2081, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_362(iLocal_2081, 2))
		{
			func_334(&iLocal_2081, 2);
		}
	}
}

bool func_191()
{
	switch (Local_51.f_10)
	{
		case 3:
			if (func_185(&iLocal_2053) && UNK_0x3DDA6C6A285628E4(101, "SPRStuntAF"))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 0:
			if (func_185(&iLocal_2053))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1:
			if (func_185(&iLocal_2053))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 2:
			if (func_185(&iLocal_2053) && UNK_0x1C2E18E9C63BEB77("SPR_Fluff_01"))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 4:
			break;
	}
	return true;
}

void func_192()
{
	switch (Local_51.f_10)
	{
		case 3:
			func_194(&iLocal_2053, joaat("JET"));
			func_194(&iLocal_2053, joaat("S_M_M_HIGHSEC_01"));
			UNK_0x36187931D29E5BBE(101, "SPRStuntAF");
			break;
		case 0:
			func_194(&iLocal_2053, joaat("JETMAX"));
			func_194(&iLocal_2053, joaat("S_M_M_DOCKWORK_01"));
			break;
		case 1:
			func_194(&iLocal_2053, joaat("SANCHEZ"));
			func_194(&iLocal_2053, joaat("A_M_Y_MOTOX_01"));
			break;
		case 2:
			func_194(&iLocal_2053, joaat("HAULER"));
			func_194(&iLocal_2053, joaat("TANKER"));
			func_194(&iLocal_2053, joaat("S_M_M_DOCKWORK_01"));
			UNK_0x29398344B9E5B8A7("SPR_Fluff_01");
			break;
		case 4:
			break;
	}
	func_193(&iLocal_2053);
}

void func_193(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			UNK_0x523BCC9DC80CD82F((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_194(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if ((*iParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}

int func_195(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_196()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_362(iLocal_2081, iVar0))
		{
			func_360(&iLocal_2081, iVar0);
		}
		iVar0++;
	}
}

void func_197(var uParam0, bool bParam1)
{
	func_198(uParam0, bParam1, 0);
}

void func_198(var uParam0, bool bParam1, int iParam2)
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
		if (func_199(uParam0->f_3))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
	if (!UNK_0x2EBF5002C6B6A06C(bVar0))
	{
		if (func_199(bVar0))
		{
			UNK_0xA37A90C62806D848(1);
		}
	}
}

bool func_199(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_200(bool bParam0)
{
	float fVar0;

	if (bParam0->f_358[0 /*189*/].f_11 >= (bParam0->f_12 - 2))
	{
		fVar0 = SYSTEM::VDIST(bParam0->f_27[(bParam0->f_12 - 2) /*10*/], func_201());
		if (!UNK_0xBD054C76E6F4158B(iLocal_2303))
		{
			if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), func_201()) <= ((fVar0 * 1.5f) * (fVar0 * 1.5f)))
			{
				iLocal_2303 = UNK_0x372C0B8361DDE4D6(func_201(), bParam0->f_27[(bParam0->f_12 - 1) /*10*/] - func_201(), 2000f, 12, 127);
			}
		}
		else if (!SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), func_201()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_253();
		}
	}
}

Vector3 func_201()
{
	switch (Local_51.f_10)
	{
		case 0:
			return -2591.965f, 2483.167f, 60.8904f;
		case 1:
			return 1827.956f, 585.8948f, 287.6289f;
		case 2:
			return 991.1072f, -2389.983f, 83.3701f;
		case 3:
			return -1721.049f, -2792.948f, 75.4149f;
		case 4:
			return -578.6125f, 5436.721f, 150.1292f;
	}
	return 0f, 0f, 0f;
}

void func_202(bool bParam0)
{
	if (func_235())
	{
		if (!Local_2290)
		{
			Local_2290 = true;
			Local_2290.f_1 = 1;
		}
		else
		{
			Local_2290.f_1 = 0;
		}
	}
	else if (func_234())
	{
		if (!Local_2290.f_1 || func_233() >= 1f)
		{
			if (Local_2290)
			{
				Local_2290 = false;
			}
		}
	}
	if (func_234())
	{
		func_232();
	}
	else
	{
		func_231();
	}
	if (Local_2290)
	{
		if (!func_230(Local_2290.f_2) && !func_228(Local_2290.f_2))
		{
			func_204(&uLocal_2263, Local_2290.f_2);
		}
		else
		{
			if (UNK_0x9F4FE516EAACCFC5(Local_2290.f_6))
			{
				UNK_0x9A8DDC7C522F5BF5(Local_2290.f_6, 0);
			}
			if (func_228(Local_2290.f_2))
			{
				Local_2290.f_2 = { func_203(bParam0) };
			}
			func_197(&uLocal_2263, 0);
			Local_2290 = false;
		}
	}
	else if (UNK_0x9F4FE516EAACCFC5(Local_2290.f_6))
	{
		UNK_0x9A8DDC7C522F5BF5(Local_2290.f_6, 0);
	}
	else
	{
		if (func_228(Local_2290.f_2))
		{
			Local_2290.f_2 = { func_203(bParam0) };
		}
		func_197(&uLocal_2263, 0);
		Local_2290 = false;
	}
}

Vector3 func_203(bool bParam0)
{
	if (bParam0->f_358[0 /*189*/].f_11 < (Local_51.f_11 - 1))
	{
		return bParam0->f_27[bParam0->f_358[0 /*189*/].f_11 + 1 /*10*/];
	}
	return 0f, 0f, 0f;
}

void func_204(var uParam0, vector3 vParam1)
{
	func_205(uParam0, vParam1, 0, 0, 1, 1, 1);
}

void func_205(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		func_198(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_206(uParam0, vParam1, iParam4, iParam5, iParam6, iParam7, bParam8);
}

void func_206(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	if (uParam0->f_1 && UNK_0x8C74DE122769E1BF())
	{
		if (UNK_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	bVar0 = iParam4;
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
	if (func_199(bVar0))
	{
		func_227();
	}
	if (!UNK_0x8C74DE122769E1BF())
	{
		if (func_222(uParam0, bParam6, bParam8, 0))
		{
			func_221(uParam0, vParam1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_211(bVar0))
			{
				if ((UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0)) && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
				{
					if ((UNK_0x8E28E832BEAC3DCE(vParam1, 1f) && !UNK_0xFEBC1E4EC9E001F0()) && bParam7)
					{
						if (!func_199(bVar0))
						{
							func_303(bVar0, -1);
							uParam0->f_3 = bVar0;
							if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
							{
								func_210(1);
							}
						}
					}
				}
			}
		}
		else if (func_211(bVar0))
		{
			if (UNK_0x2EBF5002C6B6A06C(uParam0->f_3) && !UNK_0x2EBF5002C6B6A06C(bVar0))
			{
				if ((UNK_0x8E28E832BEAC3DCE(vParam1, 1f) && !UNK_0xFEBC1E4EC9E001F0()) && bParam7)
				{
					if (!func_199(bVar0))
					{
						func_303(bVar0, -1);
						uParam0->f_3 = bVar0;
						if (UNK_0x7F8A39872A07D2CE("CMN_HINT", bVar0))
						{
							func_210(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!UNK_0x2EBF5002C6B6A06C(bVar0))
		{
			if (func_199(bVar0) && UNK_0xFEBC1E4EC9E001F0())
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
					func_198(uParam0, bVar0, 1);
				}
			}
			else if (UNK_0x398B22FA3FCBDFA9(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(6) == 3 || UNK_0xA4FD7964FEE91ED8(6) == 4)
				{
					func_198(uParam0, bVar0, 1);
				}
			}
			else if (UNK_0x5EDB8AD1D9CB1AC8(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(4) == 3 || UNK_0xA4FD7964FEE91ED8(4) == 4)
				{
					func_198(uParam0, bVar0, 1);
				}
			}
			else if (UNK_0x90C4D1743A9C3CD9(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(5) == 3 || UNK_0xA4FD7964FEE91ED8(5) == 4)
				{
					func_198(uParam0, bVar0, 1);
				}
			}
			else if (UNK_0x7A649D473D0B6339(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xA4FD7964FEE91ED8(2) == 3 || UNK_0xA4FD7964FEE91ED8(2) == 4)
				{
					func_198(uParam0, bVar0, 1);
				}
			}
			else if (UNK_0xF3545351E9CBB11F() == 3 || UNK_0xF3545351E9CBB11F() == 4)
			{
				func_198(uParam0, bVar0, 1);
			}
		}
		if (!func_222(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_209(uParam0))
			{
				func_207(uParam0);
			}
		}
	}
}

void func_207(var uParam0)
{
	if (func_208(UNK_0x16F2683693E537C9()))
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

bool func_208(bool bParam0)
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

bool func_209(var uParam0)
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

int func_210(bool bParam0)
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

bool func_211(bool bParam0)
{
	if (!func_212(1, 1, 0))
	{
		if ((!UNK_0xEA6BC48857E0AC4C(bParam0) && func_199(bParam0)) || func_199("CMN_HINT"))
		{
			UNK_0xA37A90C62806D848(1);
		}
		return false;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_210(0) < 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_210(0) < 1)
			{
				return true;
			}
			break;
		case 5:
		case 15:
			if (func_210(0) < 1)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

bool func_212(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_143(0))
	{
		return false;
	}
	if (func_220())
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
	if ((func_219() || func_218(Global_4456448.f_232883)) || func_217())
	{
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			bVar1 = func_216(UNK_0x16F2683693E537C9(), 0);
			if (((UNK_0x137240CA2BADB0D2(bVar0, bVar1) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("APC") && bVar1 != -1)) || (UNK_0x134B62B726CEC8E6(bVar0) == joaat("AKULA") && bVar1 != -1)) || (((UNK_0x134B62B726CEC8E6(bVar0) == joaat("RIOT2") && bVar1 == 0) && func_215(bVar0, 10)) && UNK_0x0ECB5CA5140957AD(bVar0, 10) != -1))
			{
				return false;
			}
		}
	}
	if (Global_1686722)
	{
		return false;
	}
	if (func_213(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_213(bool bParam0)
{
	if (bParam0 != func_214())
	{
		if (func_129(bParam0, 1, 1))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && bParam0 == UNK_0xD803B885F5E47A62()) && func_129(bParam0, 1, 0))
		{
			return Global_2425662[bParam0 /*421*/].f_310.f_5 != -1;
		}
	}
	return false;
}

int func_214()
{
	return -1;
}

bool func_215(bool bParam0, int iParam1)
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

bool func_216(bool bParam0, int iParam1)
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

bool func_217()
{
	return Global_2450632.f_17;
}

bool func_218(int iParam0)
{
	return iParam0 == 51;
}

bool func_219()
{
	return Global_2450632.f_16;
}

bool func_220()
{
	return UNK_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

void func_221(var uParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	UNK_0xF3039DE1FDB4F6FD(0);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	UNK_0x98EF6C2D1F172740(vParam1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	UNK_0xDBE4EC9C88839074(UNK_0x16F2683693E537C9(), vParam1, -1, iVar2, iVar3);
	UNK_0x82A772610883F395("FocusIn", 0, 0);
	UNK_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	UNK_0x4D7F4CC43D4D0DE3(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = UNK_0x1C0640BA9A7327B3();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_222(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_226(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_225(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_225(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_226(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_209(uParam0))
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
						if (!func_226(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_225(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_225(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = UNK_0x1C0640BA9A7327B3();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_226(bParam1, bParam2, bParam3))
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
					if (!func_226(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_225(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_225(bParam1, bParam2, bParam3) || UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
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
				else if (!func_226(bParam1, bParam2, bParam3))
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
						if (func_224(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_223(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1) || func_223(bParam1, bParam2, bParam3))
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
					else if (func_224(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_209(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_212(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_227();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_223(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
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

bool func_224(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
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

bool func_225(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
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

bool func_226(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
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

void func_227()
{
	UNK_0x5D96D8530B3D0904(&Global_7357, 4);
}

bool func_228(vector3 vParam0)
{
	float fVar0;

	fVar0 = UNK_0x9C66D99E63E8E24C(UNK_0x16F2683693E537C9());
	if (SYSTEM::VDIST2(vParam0, func_229(UNK_0xD803B885F5E47A62())) < (150f + (fVar0 * fVar0)))
	{
		return true;
	}
	return false;
}

Vector3 func_229(bool bParam0)
{
	return UNK_0x68F4C0EC296D3901(UNK_0x9539D44F3E4492F6(bParam0), false);
}

bool func_230(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_231()
{
	Local_2290.f_5 = 0f;
}

void func_232()
{
	Local_2290.f_5 = (Local_2290.f_5 + UNK_0x6117725E0134737F());
}

float func_233()
{
	return Local_2290.f_5;
}

bool func_234()
{
	return UNK_0xB9132A06AE472728(0, 80);
}

bool func_235()
{
	return UNK_0x06F8112AA79C53D9(0, 80);
}

void func_236(vector3 vParam0)
{
	func_197(&uLocal_2263, 0);
	Local_2290.f_2 = { vParam0 };
}

void func_237(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_238(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_239(bool bParam0, bool bParam1, bool bParam2)
{
	UNK_0x0FB033EB6C6ED01F(0);
	switch (iLocal_1989)
	{
		case 0:
			bLocal_529 = false;
			vLocal_2255 = { func_201() };
			vLocal_2258 = { func_252() };
			fLocal_2261 = func_251();
			UNK_0xBFE31971E49FA500(0);
			UNK_0xA37A90C62806D848(1);
			UNK_0x790015DC92C918E2();
			iLocal_1989 = 1;
			break;
		case 1:
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (func_165() == 0)
				{
					UNK_0x82A772610883F395("MinigameEndMichael", 0, 0);
				}
				else if (func_165() == 1)
				{
					UNK_0x82A772610883F395("MinigameEndFranklin", 0, 0);
				}
				else if (func_165() == 2)
				{
					UNK_0x82A772610883F395("MinigameEndTrevor", 0, 0);
				}
				iLocal_2047 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_2255, vLocal_2258, fLocal_2261, 1, 2);
				UNK_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				if (bParam2)
				{
					UNK_0x91F5B0244AAE6222(iLocal_2047, "HAND_SHAKE", 0.07f);
				}
				if (UNK_0xDF1306B443CD3D15(bParam0->f_358[0 /*189*/].f_9, 0) && UNK_0xE934758D273C899A(bParam0->f_358[0 /*189*/].f_9))
				{
					UNK_0x132B85BCE016BCA0(UNK_0x16F2683693E537C9(), bParam0->f_358[0 /*189*/].f_9, vLocal_2255.x, vLocal_2255.y, (vLocal_2255.z + 15f), 4, UNK_0x9C66D99E63E8E24C(bParam0->f_358[0 /*189*/].f_9), 262144, 10f, 10f, 1);
				}
				UNK_0xC9E4A2CFEBE9BD26(iLocal_2047, UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true));
				iLocal_1989 = 2;
			}
			break;
		case 2:
			UNK_0x70D5C5F31B79F27C(iLocal_2047);
			func_250(iLocal_2047);
			func_10(&uLocal_2043);
			iLocal_1989 = 3;
			break;
		case 3:
			if (func_249(&uLocal_2043, fLocal_2262))
			{
				func_10(&uLocal_2043);
				func_250(iLocal_2047);
				iLocal_1989 = 4;
			}
			break;
		case 4:
			if (bParam1)
			{
				if (UNK_0x0A059E0DB9253280(bParam0->f_358[0 /*189*/].f_9) && UNK_0xE934758D273C899A(bParam0->f_358[0 /*189*/].f_9))
				{
					vLocal_2252 = { UNK_0x68F4C0EC296D3901(bParam0->f_358[0 /*189*/].f_9, true) };
					func_10(&uLocal_2043);
				}
				func_246(iLocal_2047, vLocal_2252);
			}
			if (func_107(&uLocal_2043) >= 1f)
			{
				iLocal_1989 = 5;
			}
			break;
		case 5:
			func_11(&uLocal_2043);
			if (UNK_0x9F4FE516EAACCFC5(iLocal_2046))
			{
				UNK_0x9A8DDC7C522F5BF5(iLocal_2046, 0);
			}
			UNK_0x82A772610883F395("MinigameTransitionIn", 0, 1);
			UNK_0x10486C0590CF176C(iLocal_2047, 0);
			vLocal_2255 = { UNK_0xD06724447386BC29(iLocal_2047) };
			vLocal_2258 = { UNK_0x17D61C69BA58F815(iLocal_2047, 2) };
			iLocal_2046 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_2255.x, vLocal_2255.y, (vLocal_2255.z + 1000f), 90f, vLocal_2258.y, vLocal_2258.z, fLocal_2261, 0, 2);
			UNK_0xF1E4C781086FABC1(iLocal_2046, iLocal_2047, 500, 1, 1);
			UNK_0x4D7F4CC43D4D0DE3(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_1989 = 6;
			break;
		case 6:
			if (!UNK_0xFA06B985B30FB0FC(iLocal_2046) && !UNK_0xFA06B985B30FB0FC(iLocal_2047))
			{
				if (bParam0->f_358[0 /*189*/].f_13 <= Local_51.f_106[Local_51.f_10])
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "MEDAL_GOLD", "HUD_AWARDS", 1);
				}
				else if (bParam0->f_358[0 /*189*/].f_13 <= (((Local_51.f_106[Local_51.f_10] - Local_51.f_112[Local_51.f_10]) / 2f) + Local_51.f_112[Local_51.f_10]))
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "MEDAL_SILVER", "HUD_AWARDS", 1);
				}
				else if (bParam0->f_358[0 /*189*/].f_13 <= Local_51.f_112[Local_51.f_10])
				{
					UNK_0x4D7F4CC43D4D0DE3(-1, "MEDAL_BRONZE", "HUD_AWARDS", 1);
				}
				else
				{
					func_245(1);
				}
				iLocal_1989 = 7;
			}
			break;
		case 7:
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
			}
			func_243(bParam0);
			func_66(&(Local_51.f_321), 1);
			func_11(&uLocal_2043);
			if (UNK_0xDF1306B443CD3D15(bParam0->f_358[0 /*189*/].f_9, 0))
			{
				bLocal_2247 = UNK_0x04DF2A8CF5EBE3B0();
				UNK_0x3E5CE368CD085FFA(bParam0->f_358[0 /*189*/].f_9, 0);
			}
			iLocal_1989 = 8;
			break;
		case 8:
			if (func_242(bParam0))
			{
				iLocal_1989 = 9;
			}
			break;
		case 9:
			UNK_0x82A772610883F395("MinigameTransitionOut", 0, 0);
			func_241(&uLocal_2048);
			func_237(1, 0);
			func_240(bParam0);
			func_16();
			func_237(0, 0);
			iLocal_1989 = 0;
			return false;
	}
	func_432(bParam0, 0);
	return true;
}

int func_240(bool bParam0)
{
	if (bParam0->f_358[0 /*189*/].f_13 <= Local_51.f_106[Local_51.f_10])
	{
		UNK_0x1E64CE678ED5F61E(&(Local_51.f_24[Local_51.f_10 /*8*/]));
		return UNK_0x14A247914AD7E547("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
	}
	else if (bParam0->f_358[0 /*189*/].f_13 <= (((Local_51.f_106[Local_51.f_10] - Local_51.f_112[Local_51.f_10]) / 2f) + Local_51.f_112[Local_51.f_10]))
	{
		UNK_0x1E64CE678ED5F61E(&(Local_51.f_24[Local_51.f_10 /*8*/]));
		return UNK_0x14A247914AD7E547("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
	}
	else if (bParam0->f_358[0 /*189*/].f_13 <= Local_51.f_112[Local_51.f_10])
	{
		UNK_0x1E64CE678ED5F61E(&(Local_51.f_24[Local_51.f_10 /*8*/]));
		return UNK_0x14A247914AD7E547("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_241(int iParam0)
{
	UNK_0xE17FDF9E3068281B(iParam0);
	*iParam0 = 0;
}

bool func_242(bool bParam0)
{
	float fVar0;

	fVar0 = 0f;
	if (!func_3(&(bParam0->f_17.f_2)))
	{
		func_11(&(bParam0->f_17.f_2));
	}
	else
	{
		fVar0 = func_5(&(bParam0->f_17.f_2));
	}
	if (!bLocal_2008)
	{
		if (fVar0 > 1f)
		{
			bLocal_2008 = true;
		}
	}
	if (!bLocal_2009)
	{
		if (fVar0 > 4.25f)
		{
			UNK_0x7E60C62A7CE58FC8(bParam0->f_17, "TRANSITION_OUT");
			UNK_0x7C19E5E4784BD7CF(0.5f);
			UNK_0x7E60D21B163E9D56();
			bLocal_2009 = true;
		}
	}
	UNK_0x6567AE843FADBA94(bParam0->f_17, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		func_4(&(bParam0->f_17.f_2));
		bLocal_2008 = false;
		bLocal_2009 = false;
		return true;
	}
	return false;
}

void func_243(bool bParam0)
{
	char* sVar0;

	sVar0 = func_244(2);
	UNK_0x7E60C62A7CE58FC8(bParam0->f_17, "RESET_MOVIE");
	UNK_0x7E60D21B163E9D56();
	UNK_0x7E60C62A7CE58FC8(bParam0->f_17, sVar0);
	UNK_0x7ACC3006A87F8B39("STRING");
	UNK_0x6B012227B3921E18("SPR_UI_PASS");
	UNK_0x779B34565F4D71B1();
	UNK_0x7ACC3006A87F8B39(&(Local_51.f_24[Local_51.f_10 /*8*/]));
	UNK_0x779B34565F4D71B1();
	UNK_0x7C19E5E4784BD7CF(100f);
	UNK_0x1200CC973A2399C8(true);
	UNK_0x7E60D21B163E9D56();
	bParam0->f_17.f_1 = 5000;
	func_4(&(bParam0->f_17.f_2));
	bLocal_2008 = false;
	bLocal_2009 = false;
}

char* func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		default:
			break;
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_245(bool bParam0)
{
	char* sVar0;

	UNK_0x9CBC55A05A07FC47(0);
	switch (func_165())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	UNK_0x3D0B5872F36FB05C(sVar0);
}

void func_246(int iParam0, vector3 vParam1)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;

	if (!UNK_0x9F4FE516EAACCFC5(iParam0))
	{
		return;
	}
	if (!UNK_0xFBB4F23D534EB790(iParam0))
	{
		return;
	}
	vVar1 = { UNK_0x17D61C69BA58F815(iParam0, 2) };
	vVar4 = { UNK_0xD06724447386BC29(iParam0) };
	vVar7 = { func_8(vVar1.x, vVar1.y, (vVar1.z + 90f)) };
	vVar10 = { vParam1 - vVar4 };
	vVar10 = { func_96(vVar10) };
	fVar13 = UNK_0x5D8ABF6396A76564((vParam1.z - vVar4.z), UNK_0x0EB28750412C3A5A(vParam1, vVar4, 0));
	fVar14 = UNK_0xE7D606C557C86100((vParam1.x - vVar4.x), (vParam1.y - vVar4.y));
	fVar14 = func_248(fVar14, -180f, 180f);
	fVar0 = func_95(func_8(fVar13, vVar1.y, vVar1.z), vVar7);
	fVar15 = (fVar13 - vVar1.x);
	if (fVar15 > 270f)
	{
		fVar15 = (fVar15 - 360f);
	}
	else if (fVar15 < -270f)
	{
		fVar15 = (fVar15 + 360f);
	}
	fVar13 = (vVar1.x + fVar15);
	if ((bLocal_2251 && fVar13 > vVar1.x) || (!bLocal_2251 && fVar13 < vVar1.x))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_2248 = (fLocal_2248 * 0.9f);
		vVar1.x = func_247(vVar1.x, fVar13, fLocal_2248);
	}
	fVar16 = (fVar14 - vVar1.z);
	if (fVar16 > 270f)
	{
		fVar16 = (fVar16 - 360f);
	}
	else if (fVar16 < -270f)
	{
		fVar16 = (fVar16 + 360f);
	}
	fVar14 = (vVar1.z + fVar16);
	if ((bLocal_2250 && (vVar1.z - fVar14) < 0f) || (!bLocal_2250 && (vVar1.z - fVar14) > 0f))
	{
		if (!bLocal_2250 && (vVar1.z - fVar14) > 0f)
		{
		}
		else if (bLocal_2250 && (vVar1.z - fVar14) < 0f)
		{
		}
		fLocal_2249 = (fLocal_2249 * 0.9f);
		vVar1.f_2 = func_247(vVar1.z, fVar14, fLocal_2249);
	}
	UNK_0x5F3CBA6EB9341C90(iParam0, vVar1, 2);
}

float func_247(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_248(float fParam0, float fParam1, float fParam2)
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

bool func_249(bool bParam0, float fParam1)
{
	if (func_2(bParam0, fParam1))
	{
		func_4(bParam0);
		return true;
	}
	return false;
}

void func_250(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	var uVar18;
	vector3 vVar21;
	vector3 vVar24;
	float fVar27;
	float fVar28;

	UNK_0x61890296D3AA030F(UNK_0x16F2683693E537C9(), &vVar0, &uVar18, &uVar18, &vVar3);
	vVar15 = { UNK_0x17D61C69BA58F815(iParam0, 2) };
	vVar12 = { UNK_0xD06724447386BC29(iParam0) };
	vVar6 = { func_8((vVar15.x + 90f), vVar15.y, vVar15.z) };
	vVar9 = { func_8(vVar15.x, vVar15.y, (vVar15.z + 90f)) };
	fLocal_2248 = 0.2f;
	fLocal_2249 = 0.5f;
	vVar21 = { UNK_0xD06724447386BC29(iParam0) - vVar3 };
	vVar24 = { vVar3 + FtoV(func_95(vVar21, vVar0)) * vVar0 };
	if (vVar24.z > vVar12.z)
	{
		bLocal_2251 = true;
	}
	else
	{
		bLocal_2251 = false;
	}
	fVar27 = func_95(vVar24, vVar6);
	fVar28 = func_95(vVar24, vVar9);
	if (fVar27 < 0f)
	{
		bLocal_2250 = true;
	}
	else
	{
		bLocal_2250 = false;
	}
}

float func_251()
{
	switch (Local_51.f_10)
	{
		case 0:
			return 46.9415f;
		case 1:
			return 37.9558f;
		case 2:
			return 48.4122f;
		case 3:
			return 35.2464f;
		case 4:
			return 42.5338f;
	}
	return 0f;
}

Vector3 func_252()
{
	switch (Local_51.f_10)
	{
		case 0:
			return -7.5758f, 0f, 148.5448f;
		case 1:
			return -1.0194f, 0.7478f, 23.0628f;
		case 2:
			return -5.3368f, 0.0006f, 158.257f;
		case 3:
			return -1.3523f, 0f, 0.0891f;
		case 4:
			return 18.1009f, -0.5992f, -103.0214f;
	}
	return 0f, 0f, 0f;
}

void func_253()
{
	UNK_0x486B4ADE317F0689();
	if (UNK_0xBD054C76E6F4158B(iLocal_2303))
	{
		UNK_0x51F8DBE54C75AE47(iLocal_2303);
	}
}

void func_254()
{
	UNK_0xC2127C0F64D6A3B9();
	func_255();
}

void func_255()
{
	Global_22211.f_134 = 1;
}

void func_256(int iParam0)
{
	if (Global_41431 == 9 || Global_41431 == 10)
	{
		Global_110288 = iParam0;
	}
	else
	{
		Global_110288 = 0;
	}
}

void func_257(bool bParam0)
{
	UNK_0xF3039DE1FDB4F6FD(!bParam0);
}

void func_258()
{
	func_259();
	UNK_0xF3039DE1FDB4F6FD(1);
}

void func_259()
{
	Local_2290 = false;
	Local_2290.f_1 = 0;
	Local_2290.f_2 = { 0f, 0f, 0f };
	Local_2290.f_6 = 0;
	Local_2290.f_5 = 0f;
}

bool func_260(bool bParam0, int iParam1, bool bParam2)
{
	UNK_0x18B60B994182620C(bParam0);
	if (iParam1 == 1)
	{
		UNK_0x6B012227B3921E18(bParam2);
	}
	return UNK_0xB165082A56EE6E7F();
}

void func_261(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_156(&(uParam0->f_1), 16);
	}
	else
	{
		func_155(&(uParam0->f_1), 16);
	}
}

int func_262(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_2[iVar1 /*15*/].f_13), false);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_263(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = UNK_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_156(&(uParam0->f_1), 32);
	}
	if (UNK_0x83D8570832F172A7(*uParam0))
	{
		func_156(&(uParam0->f_1), 1);
		if (bParam2)
		{
			UNK_0x5461A9D388F592B4(*uParam0, 1);
		}
	}
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_156(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_156(&(uParam0->f_1), 8192);
	}
}

void func_264(bool bParam0)
{
	func_265(bParam0);
	SYSTEM::SETTIMERA(0);
	func_237(1, 0);
	func_16();
}

void func_265(bool bParam0)
{
	func_302(&(bParam0->f_1871));
	func_280(&(bParam0->f_1871.f_741));
	func_266(&(bParam0->f_1871));
}

void func_266(var uParam0)
{
	func_279(&(uParam0->f_316[0 /*2*/]), 254f, 74f, 1);
	func_279(&(uParam0->f_316[1 /*2*/]), (257f + func_278(0.0047f, 1280, 1)), 127f, 1);
	func_279(&(uParam0->f_316[2 /*2*/]), (257f + func_278(0.0047f, 1280, 1)), 297f, 1);
	func_279(&(uParam0->f_316[3 /*2*/]), (257f + func_278(0.0047f, 1280, 1)), 324f, 1);
	func_279(&(uParam0->f_316[4 /*2*/]), (257f + func_278(0.0047f, 1280, 1)), 351f, 1);
	func_279(&(uParam0->f_316[5 /*2*/]), (257f + func_278(0.0047f, 1280, 1)), 378f, 1);
	func_279(&(uParam0->f_316[6 /*2*/]), (257f + func_278(0.0047f, 1280, 1)), 405f, 1);
	func_279(&(uParam0->f_316[11 /*2*/]), 257f, 297f, 1);
	func_279(&(uParam0->f_316[12 /*2*/]), 257f, 324f, 1);
	func_279(&(uParam0->f_316[13 /*2*/]), 257f, 351f, 1);
	func_279(&(uParam0->f_316[14 /*2*/]), 257f, 378f, 1);
	func_279(&(uParam0->f_316[15 /*2*/]), 257f, 405f, 1);
	func_279(&(uParam0->f_316[18 /*2*/]), 298f, 567f, 1);
	func_279(&(uParam0->f_316[17 /*2*/]), 384f, 567f, 1);
	func_279(&(uParam0->f_316[16 /*2*/]), 470f, 567f, 1);
	func_275(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	func_274(uParam0[0 /*9*/], 0, 0, 0, 255);
	func_275(uParam0[2 /*9*/], 384f, 224f, 256f, 256f, 0);
	func_274(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[3 /*9*/], 495f, 306f, 32f, 32f, 0);
	func_274(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[6 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	func_274(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[5 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	func_274(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[4 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	func_274(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_269(&(uParam0->f_420[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	func_268(&(uParam0->f_420[1 /*8*/]), 70, 70, 130, 255);
	func_269(&(uParam0->f_420[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	func_268(&(uParam0->f_420[0 /*8*/]), 255, 255, 255, 255);
	func_269(&(uParam0->f_420[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	func_267(&(uParam0->f_420[2 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[3 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[4 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[5 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[6 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[8 /*8*/]), 257f, 429f, 254f, 52f, 1);
	func_267(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	func_267(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	func_267(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	func_267(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[14 /*8*/]), 428f, 564f, 83f, 25f, 1);
	func_267(&(uParam0->f_420[14 /*8*/]), 107, 1);
	func_269(&(uParam0->f_420[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	func_267(&(uParam0->f_420[15 /*8*/]), 108, 1);
	func_269(&(uParam0->f_420[16 /*8*/]), 257f, 564f, 83f, 25f, 1);
	func_267(&(uParam0->f_420[16 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}

void func_267(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	UNK_0xA402F6C87C08815C(bParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_268(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_269(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_273(uParam0, fParam3, fParam4);
	func_270(uParam0, fParam1, fParam2, bParam5);
}

void func_270(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_272(fParam1, 1280);
	uParam0->f_1 = func_271(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

float func_271(float fParam0, int iParam1)
{
	var uVar0;

	if (iParam1 == 0)
	{
		UNK_0x8A462DAA7D1D9008(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

float func_272(float fParam0, int iParam1)
{
	var uVar0;

	if (iParam1 == 0)
	{
		UNK_0x8A462DAA7D1D9008(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_273(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_272(fParam1, 1280);
	uParam0->f_3 = func_271(fParam2, 720);
}

void func_274(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_275(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_277(fParam0, fParam3, fParam4);
	func_276(fParam0, fParam1, fParam2, bParam5);
}

void func_276(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	*fParam0 = func_272(fParam1, 1280);
	fParam0->f_1 = func_271(fParam2, 720);
	if (bParam3)
	{
		*fParam0 = (*fParam0 + (fParam0->f_2 / 2f));
		fParam0->f_1 = (fParam0->f_1 + (fParam0->f_3 / 2f));
	}
}

void func_277(float fParam0, float fParam1, float fParam2)
{
	fParam0->f_2 = func_272(fParam1, 1280);
	fParam0->f_3 = func_271(fParam2, 720);
}

float func_278(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		UNK_0x8A462DAA7D1D9008(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_279(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_272(fParam1, 1280);
	uParam0->f_1 = func_271(fParam2, 720);
	if (!bParam3)
	{
	}
}

void func_280(var uParam0)
{
	func_301(uParam0, 0);
	func_300(&(uParam0->f_11), 0);
	func_299(&(uParam0->f_66), 0);
	func_298(&(uParam0->f_77), 0);
	func_297(&(uParam0->f_33), 0);
	func_296(&(uParam0->f_44), 0);
	func_295(&(uParam0->f_55), 0);
	func_294(&(uParam0->f_143), 0);
	func_293(&(uParam0->f_22), 0);
	func_292(&(uParam0->f_154), 0);
	func_291(&(uParam0->f_88), 0, 0);
	func_290(&(uParam0->f_99), 0, 5);
	func_289(&(uParam0->f_110), 0);
	func_288(&(uParam0->f_121), 0);
	func_287(&(uParam0->f_132), 0);
	func_286(&(uParam0->f_165), 0);
	func_285(&(uParam0->f_176), 0);
	func_284(&(uParam0->f_187), 0);
	func_283(&(uParam0->f_198), 0);
	func_282(&(uParam0->f_209), 0);
	func_281(&(uParam0->f_220), 0);
}

void func_281(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0.45f;
	uParam0->f_2 = 0.45f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 29;
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.275f;
	uParam0->f_2 = 0.275f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 28;
}

void func_283(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.3375f;
	uParam0->f_2 = 0.3375f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 27;
}

void func_284(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.35f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 26;
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.325f;
	uParam0->f_2 = 0.325f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 25;
}

void func_286(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.6f;
	uParam0->f_2 = 0.6f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 24;
}

void func_287(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_288(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.5f + 0.004f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 13;
}

void func_289(var uParam0, int iParam1)
{
	*uParam0 = 5;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.628f - 0.18f) - 0.058f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 12;
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.889f - 0.01f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 10;
}

void func_291(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_292(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_293(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.383f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 2;
}

void func_294(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.368f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 22;
}

void func_295(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.485f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 5;
}

void func_296(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 4;
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.409f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 3;
}

void func_298(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.655f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 8;
}

void func_299(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.628f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 7;
}

void func_300(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.346f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 1;
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.781f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
}

void func_302(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0 /*9*/] = 0f;
		(uParam0[iVar0 /*9*/])->f_1 = 0f;
		(uParam0[iVar0 /*9*/])->f_2 = 0f;
		(uParam0[iVar0 /*9*/])->f_3 = 0f;
		(uParam0[iVar0 /*9*/])->f_4 = 0;
		(uParam0[iVar0 /*9*/])->f_5 = 0;
		(uParam0[iVar0 /*9*/])->f_6 = 0;
		(uParam0[iVar0 /*9*/])->f_7 = 0;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_303(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_304(bool bParam0)
{
	func_309();
	switch (iLocal_2302)
	{
		case 0:
			func_10(bParam0);
			func_308(&iLocal_2297, 3);
			iLocal_2302 = 1;
			break;
		case 1:
			if (func_2(bParam0, 1f))
			{
				func_305(&iLocal_2297, 1, 0, 1, 3, 1, 0, 0);
				iLocal_2302 = 2;
			}
			break;
		case 2:
			if (func_305(&iLocal_2297, 0, 0, 1, 3, 1, 0, 0))
			{
				return false;
			}
			break;
			return true;
	}
	return true;
}

bool func_305(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	var uVar14;

	if (bParam7)
	{
		func_307(&(iParam0->f_2), 1);
	}
	if (!func_3(&(iParam0->f_2)))
	{
		func_11(&(iParam0->f_2));
	}
	UNK_0xD9ACBBA59FD5A09E(1);
	UNK_0xEF45C43067063F18(*iParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		bVar0 = "3_2_1";
		bVar1 = "GO";
		bVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		bVar0 = "3_2_1";
		bVar1 = "GO";
		bVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (func_3(&(iParam0->f_2)))
		{
			if (func_7(&(iParam0->f_2)))
			{
				fVar3 = iParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_6(1) - iParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_4(&(iParam0->f_2));
					if (func_362(iParam0->f_1, 1))
					{
						func_334(&(iParam0->f_1), 8);
						UNK_0xA402F6C87C08815C(18, &bVar5, &bVar6, &bVar7, &uVar8);
						UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_MESSAGE");
						func_158("CNTDWN_GO");
						UNK_0x3CAEA85DA607305E(bVar5);
						UNK_0x3CAEA85DA607305E(bVar6);
						UNK_0x3CAEA85DA607305E(bVar7);
						UNK_0x1200CC973A2399C8(true);
						UNK_0x7E60D21B163E9D56();
						return true;
					}
					func_11(&(iParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = iParam0->f_2.f_1;
		}
		iVar4 = SYSTEM::FLOOR(fVar3);
	}
	else
	{
		iVar4 = SYSTEM::FLOOR(func_5(&(iParam0->f_2)));
	}
	bVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!func_362(iParam0->f_1, 8))
	{
		if (bVar9 >= -3 && !func_362(iParam0->f_1, 1))
		{
			func_334(&(iParam0->f_1), 1);
			UNK_0x4D7F4CC43D4D0DE3(-1, bVar0, bVar2, 1);
			func_308(iParam0, bVar9);
		}
		else if (bVar9 >= -2 && !func_362(iParam0->f_1, 2))
		{
			func_334(&(iParam0->f_1), 2);
			UNK_0x4D7F4CC43D4D0DE3(-1, bVar0, bVar2, 1);
			func_308(iParam0, bVar9);
		}
		else if (bVar9 >= -1 && !func_362(iParam0->f_1, 4))
		{
			func_334(&(iParam0->f_1), 4);
			UNK_0x4D7F4CC43D4D0DE3(-1, bVar0, bVar2, 1);
			func_308(iParam0, bVar9);
		}
		else if (bVar9 >= -1 && !func_362(iParam0->f_1, 16))
		{
			if (UNK_0x755FF954DAE327E1((func_5(&(iParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_334(&(iParam0->f_1), 16);
					UNK_0x4D7F4CC43D4D0DE3(-1, bVar1, bVar2, 1);
				}
			}
		}
		else if (bVar9 >= 0 && !func_362(iParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, bVar1, bVar2, 1);
			}
			func_334(&(iParam0->f_1), 8);
			UNK_0xA402F6C87C08815C(18, &bVar11, &bVar12, &bVar13, &uVar14);
			UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_MESSAGE");
			func_158("CNTDWN_GO");
			UNK_0x3CAEA85DA607305E(bVar11);
			UNK_0x3CAEA85DA607305E(bVar12);
			UNK_0x3CAEA85DA607305E(bVar13);
			UNK_0x1200CC973A2399C8(true);
			UNK_0x7E60D21B163E9D56();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (bVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && func_306()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			iParam0->f_1 = 0;
			func_4(&(iParam0->f_2));
		}
		return true;
	}
	return false;
}

int func_306()
{
	if (UNK_0x798A3F1296751F46())
	{
		return 0;
	}
	if (UNK_0x06F8112AA79C53D9(0, 18) || UNK_0x06F8112AA79C53D9(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_307(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		UNK_0x5D96D8530B3D0904(bParam0, 4);
	}
	else
	{
		UNK_0x0674E58A79778E99(bParam0, 4);
	}
	if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 4))
	{
	}
}

void func_308(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;

	UNK_0xA402F6C87C08815C(12, &bVar0, &bVar1, &bVar2, &uVar3);
	UNK_0x7E60C62A7CE58FC8(*iParam0, "SET_MESSAGE");
	UNK_0x3A820E495A7BA3E5(-1);
	UNK_0x7ACC3006A87F8B39("NUMBER");
	UNK_0x6D99DF8263D35CE5(UNK_0x51D1D19912234EA0(bParam1));
	UNK_0x779B34565F4D71B1();
	UNK_0x3CAEA85DA607305E(bVar0);
	UNK_0x3CAEA85DA607305E(bVar1);
	UNK_0x3CAEA85DA607305E(bVar2);
	UNK_0x1200CC973A2399C8(true);
	UNK_0x7E60D21B163E9D56();
}

void func_309()
{
	struct<6> Var0;
	var uVar6;

	uVar6 = Global_110668;
	func_310(Var0, 0, 0, 0, 0, uVar6);
}

void func_310(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;

	if (Global_76876 != 6)
	{
		if (Global_76878 == -1)
		{
			if (func_324(1, Param0))
			{
				if (Global_76879 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_29 > fVar0)
				{
					Global_76878 = UNK_0x1C0640BA9A7327B3();
					vLocal_30 = { UNK_0x96792D8393A779D7(15) };
					fLocal_29 = 0f;
				}
				else
				{
					fLocal_29 = (fLocal_29 + UNK_0x6117725E0134737F());
				}
			}
			else
			{
				fLocal_29 = 0f;
			}
		}
		else
		{
			if (!func_324(0, Param0))
			{
				Global_76878 = (UNK_0x1C0640BA9A7327B3() - 9000);
			}
			UNK_0x3584F71E5CA29322(7);
			UNK_0x3584F71E5CA29322(6);
			UNK_0x3584F71E5CA29322(8);
			UNK_0x3584F71E5CA29322(9);
			iVar1 = (UNK_0x1C0640BA9A7327B3() - Global_76878);
			if (iVar1 < 9000 && !UNK_0x757EF87A33649210())
			{
				bVar2 = 255;
				if (iVar1 < 1000)
				{
					bVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						bVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_76876)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				UNK_0xD02CE72B4B66DC29(82, 66);
				UNK_0x7BBAC160090910C3(1);
				UNK_0xEEF67251E263A87F(2);
				iVar12 = func_165();
				if (Global_76879 == 1 && Global_76877 == 62)
				{
					iVar12 = Global_111638.f_2358.f_539.f_4322;
				}
				switch (iVar12)
				{
					case 0:
						UNK_0xA402F6C87C08815C(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					case 1:
						UNK_0xA402F6C87C08815C(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					case 2:
						UNK_0xA402F6C87C08815C(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
						break;
				}
				UNK_0x7178F32F6742C936(iVar8, iVar9, iVar10, bVar2);
				UNK_0xC8CFC125861F0537();
				Var4 = { func_313(Global_76877, Global_76879, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				UNK_0x75BBE9A62B73769F(fVar6, fVar7, 0f, 0.01f);
				UNK_0xD3539A877EC25E86(0.67f, 0.67f);
				if (!UNK_0x0D71AFA59EF5104F() && !UNK_0x0DF32524CC9DB3EB())
				{
					fLocal_34 = 0.14f;
				}
				else
				{
					fLocal_34 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_312(&Var4) > fLocal_34)
					{
						if (UNK_0x2F1FB0453B36C270(15))
						{
							UNK_0x744B56EE9DE7B57F(15, vLocal_30.x, (vLocal_30.y + fLocal_33));
							Global_76881 = 1;
						}
					}
				}
				UNK_0x070005E852D4C0E9(&Var4);
				UNK_0xE0026608C37C7C41(fVar6, fVar7, 0);
				UNK_0xD59EF13BB60323B9();
				if (Global_76880 == 1)
				{
					func_311();
					fLocal_29 = 0f;
				}
			}
			else
			{
				func_311();
				fLocal_29 = 0f;
			}
		}
	}
}

void func_311()
{
	if (Global_76876 != 6)
	{
	}
	if (Global_76881)
	{
		UNK_0xA5E3ADAAA4CD5D6C(15);
		Global_76881 = 0;
		Global_22350.f_8417 = 0;
	}
	Global_76876 = 6;
	Global_76878 = -1;
	Global_76877 = -1;
}

float func_312(bool bParam0)
{
	UNK_0xBBA442527B4BB1A6(bParam0);
	return UNK_0x79E367314AFBB5CA(1);
}

struct<2> func_313(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;

	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_323(iParam0) };
			break;
		case 7:
			Var0 = { func_321(iParam0) };
			break;
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_320(iParam2) };
					break;
				case 8:
					Var0 = { func_319(iParam2) };
					break;
				case 7:
					Var0 = { func_318(iParam2) };
					break;
				case 10:
					Var0 = { func_317(iParam2) };
					break;
				case 5:
					Var0 = { func_316(iParam2) };
					break;
				case 4:
					Var0 = { func_315(iParam2) };
					break;
				default:
					StringCopy(&Var0, func_314(iVar2), 8);
					break;
			}
			break;
		default:
			break;
	}
	return Var0;
}

char* func_314(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
		case 1:
			return "MG_DART";
		case 2:
			return "MG_GOLF";
		case 3:
			return "MG_HUNT";
		case 4:
			return "MG_OFFR";
		case 5:
			return "MG_PILO";
		case 6:
			return "MG_RMPG";
		case 7:
			return "MG_SERA";
		case 8:
			return "MG_SRAC";
		case 9:
			return "MG_STRP";
		case 10:
			return "MG_STNT";
		case 11:
			return "MG_SHTR";
		case 12:
			return "MG_TAXI";
		case 13:
			return "MG_TENN";
		case 14:
			return "MG_TOWI";
		case 15:
			return "MG_TRFA";
		case 16:
			return "MG_TRFG";
		case 17:
			return "MG_TRIA";
		case 18:
			return "MG_YOGA";
		case 19:
			return "MG_CRCE";
	}
	return "INVALID!";
}

struct<2> func_315(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_316(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_317(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_318(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_319(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (UNK_0xEA6BC48857E0AC4C(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_320(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_321(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_322(iParam0) };
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

struct<2> func_322(int iParam0)
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

struct<2> func_323(int iParam0)
{
	struct<2> Var0;

	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_89532[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_111638.f_9080.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			default:
				StringConCat(&Var0, "A", 8);
				break;
		}
	}
	return Var0;
}

bool func_324(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_326(0) || Global_76891) || Global_76880 == 1) || !UNK_0x0F1CCD77290EE12F())
	{
		return false;
	}
	switch (Global_76876)
	{
		case 0:
			if (UNK_0x7F8A39872A07D2CE(&uParam1, "NONE") || UNK_0xEA6BC48857E0AC4C(&uParam1))
			{
				Global_76876 = 3;
			}
			else
			{
				Global_76876 = 1;
			}
			break;
		case 1:
			if (UNK_0x62A1F4500E8F07E0())
			{
				Global_76876 = 2;
			}
			break;
		case 2:
			if (UNK_0x22A8E52414415B76())
			{
				Global_76876 = 4;
				return true;
			}
			else if (!UNK_0x39B7A3CCD2467CAB())
			{
				Global_76876 = 3;
			}
			break;
		case 3:
			if (UNK_0x22A8E52414415B76())
			{
			}
			else
			{
				Global_76876 = 5;
				return true;
			}
			break;
		case 4:
			if (UNK_0x22A8E52414415B76())
			{
				return true;
			}
			else if (iParam0 == 1)
			{
				Global_76876 = 5;
			}
			break;
		case 5:
			if ((UNK_0x22A8E52414415B76() || func_143(0)) || func_325(1))
			{
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_325(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_326(int iParam0)
{
	if (Global_41431 == 15)
	{
		return false;
	}
	if (func_327(iParam0))
	{
		return false;
	}
	return true;
}

int func_327(int iParam0)
{
	return func_328(iParam0, Global_41431);
}

int func_328(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
			return 1;
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		case 5:
			break;
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}
	return 0;
}

void func_329(bool bParam0)
{
	char cVar0[16];
	int iVar4;

	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_51.f_10 + 1, 16);
	func_11(&(bParam0->f_3));
	bParam0->f_358[0 /*189*/].f_15 = 0f;
	iLocal_2077 = 0;
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	if (Local_51 == 0)
	{
		UNK_0x62DE699599F0417E(UNK_0xD803B885F5E47A62(), 1);
	}
	bParam0->f_1 = 1;
	func_11(&uLocal_2402);
	iVar4 = 0;
	while (iVar4 < bParam0->f_13)
	{
		func_330(&(bParam0->f_358[iVar4 /*189*/]));
		if (Local_51 != 1)
		{
			if (iVar4 != 0)
			{
				func_76(bParam0, bParam0->f_358[iVar4 /*189*/].f_8, bParam0->f_358[iVar4 /*189*/].f_9, bParam0->f_27[bParam0->f_358[iVar4 /*189*/].f_11 /*10*/], bParam0->f_27[bParam0->f_358[iVar4 /*189*/].f_11 /*10*/].f_7, iVar4);
			}
		}
		else if (bLocal_2410)
		{
			if (iVar4 > 0)
			{
				if (!UNK_0x437347B10A200C4B(bParam0->f_358[iVar4 /*189*/].f_8, 0) && !UNK_0x437347B10A200C4B(bParam0->f_358[iVar4 /*189*/].f_9, 0))
				{
					if (iVar4 == 1 && Local_51.f_10 == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					UNK_0x1B901F542DF070CF(bParam0->f_358[iVar4 /*189*/].f_8, bParam0->f_358[iVar4 /*189*/].f_9, &cVar0, 262144, 0, 8, -1, UNK_0xD890711CFD5AF100(bParam0->f_358[iVar4 /*189*/].f_9), 0, 1073741824 /* Float: 2f */);
				}
			}
		}
		else if (iVar4 != 0)
		{
			func_76(bParam0, bParam0->f_358[iVar4 /*189*/].f_8, bParam0->f_358[iVar4 /*189*/].f_9, bParam0->f_27[bParam0->f_358[iVar4 /*189*/].f_11 /*10*/], bParam0->f_27[bParam0->f_358[iVar4 /*189*/].f_11 /*10*/].f_7, iVar4);
		}
		iVar4++;
	}
	if (UNK_0xDF1306B443CD3D15(bParam0->f_358[0 /*189*/].f_9, 0))
	{
		UNK_0x3E5CE368CD085FFA(bParam0->f_358[0 /*189*/].f_9, 1);
		if (!UNK_0xEA6BC48857E0AC4C(bLocal_2247))
		{
			UNK_0xA6C13961116F9033(bLocal_2247);
			UNK_0x3CBF2C83A68C1611(bParam0->f_358[0 /*189*/].f_9, bLocal_2247);
		}
	}
}

void func_330(var uParam0)
{
	if (!UNK_0x437347B10A200C4B(uParam0->f_9, 0))
	{
		if (!UNK_0x437347B10A200C4B(uParam0->f_8, 0))
		{
			if (UNK_0x20D6474D5F4B9FC6(uParam0->f_9))
			{
				UNK_0xC55F2A0377488064(uParam0->f_9);
			}
			UNK_0x11AD11297DC58CC7(uParam0->f_8, true);
		}
	}
	uParam0->f_11 = 0;
	if (!UNK_0x437347B10A200C4B(uParam0->f_9, 0))
	{
		if (!UNK_0x7D8B2A8F9EA82DB7(uParam0->f_22))
		{
			UNK_0x56FDC9ADE35F7DB0(uParam0->f_9, true, true, 0);
		}
	}
}

int func_331()
{
	return UNK_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
}

void func_332(bool bParam0)
{
	bParam0->f_12 = bParam0->f_12;
}

void func_333(bool bParam0)
{
	int iVar0;

	if (UNK_0x93B62D155C014521(UNK_0xA30EC016B12C03E4()))
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xA30EC016B12C03E4(), false, 512);
	}
	iVar0 = 0;
	while (iVar0 < bParam0->f_13)
	{
		func_108(&(bParam0->f_358[iVar0 /*189*/]), 60f, 1);
		iVar0++;
	}
}

void func_334(int iParam0, int iParam1)
{
	func_60(iParam0, iParam1);
}

int func_335(bool bParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (bParam1 < 0 || bParam1 > 32)
	{
		return 0;
	}
	iVar3 = -1;
	if (bParam1 == (bParam0->f_12 - 1))
	{
		iVar3 = 38;
	}
	fVar4 = 1.2f;
	if (!bParam2)
	{
		fVar4 = 0.7f;
	}
	if (!func_341(&(bParam0->f_27[bParam1 /*10*/]), iVar3, fVar4, bParam1, bParam0->f_12))
	{
		return 0;
	}
	if (bParam2)
	{
		vVar5 = { bParam0->f_27[bParam1 /*10*/] };
		vVar8 = { 0f, 0f, 0f };
		if (bParam1 < (bParam0->f_12 - 1))
		{
			if (!func_73(bParam0->f_27[bParam1 /*10*/], bParam0->f_27[bParam1 + 1 /*10*/], 1056964608 /* Float: 0.5f */, 0))
			{
				vVar5 = { bParam0->f_27[bParam1 + 1 /*10*/] };
			}
		}
		if (Local_51 == 1)
		{
			if (Local_51.f_10 == 1)
			{
				if (func_362(bParam0->f_27[8 /*10*/].f_9, 4))
				{
					func_360(&(bParam0->f_27[8 /*10*/].f_9), 4);
				}
			}
		}
		if (bParam1 > 0)
		{
			vVar8 = { bParam0->f_27[(bParam1 - 1) /*10*/] };
		}
		if (!func_336(vVar8, &(bParam0->f_27[bParam1 /*10*/]), vVar5, 16f))
		{
			return 0;
		}
		if (bParam1 + 1 < bParam0->f_12)
		{
			if (bParam1 + 2 >= 33)
			{
				vVar0 = { bParam0->f_27[0 /*10*/] };
			}
			else
			{
				vVar0 = { bParam0->f_27[bParam1 + 2 /*10*/] };
			}
			if (!func_336(bParam0->f_27[bParam1 /*10*/], &(bParam0->f_27[bParam1 + 1 /*10*/]), vVar0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_336(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7)
{
	if (!func_337(vParam0, fParam3, vParam4, fParam7))
	{
		return false;
	}
	return true;
}

bool func_337(vector3 vParam0, float fParam3, vector3 vParam4, bool bParam7)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;

	vParam0 = { vParam0 };
	func_80(&(fParam3->f_6));
	if (fParam3->f_7 == 2)
	{
		iVar0 = func_339(fParam3->f_7, vParam0, *fParam3, vParam4);
		func_584(func_585(func_92()), &bVar1, &bVar2, &bVar3, &uVar4);
		fParam3->f_6 = UNK_0x1B26E47E3E30075B(iVar0, *fParam3, vParam4, bParam7, bVar1, bVar2, bVar3, func_91(*fParam3, 25, 200), 0);
	}
	else if (fParam3->f_7 == 3)
	{
		if (fParam3->f_8 == 2 || fParam3->f_8 == 3)
		{
			func_584(func_585(18), &bVar1, &bVar2, &bVar3, &uVar4);
			fParam3->f_6 = UNK_0x1B26E47E3E30075B(func_338(fParam3->f_7, fParam3->f_8), *fParam3, vParam4, bParam7, bVar1, bVar2, bVar3, func_91(*fParam3, 25, 200), 0);
		}
		else if (fParam3->f_8 == 1)
		{
			func_584(func_585(9), &bVar1, &bVar2, &bVar3, &uVar4);
			fParam3->f_6 = UNK_0x1B26E47E3E30075B(func_338(fParam3->f_7, fParam3->f_8), *fParam3, vParam4, bParam7, bVar1, bVar2, bVar3, func_91(*fParam3, 25, 200), 0);
		}
	}
	else
	{
		fParam3->f_6 = UNK_0x1B26E47E3E30075B(func_338(fParam3->f_7, fParam3->f_8), *fParam3, vParam4, bParam7, 254, 207, 12, func_91(*fParam3, 25, 200), 0);
	}
	if (fParam3->f_6 == 0)
	{
		return false;
	}
	return true;
}

int func_338(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 10;
		case 2:
			return 37;
		case 3:
			if (iParam1 == 2)
			{
				return 38;
			}
			else if (iParam1 == 3)
			{
				return 39;
			}
			else if (iParam1 == 1)
			{
				return 40;
			}
			break;
		case 4:
			return 16;
		case 5:
			return 27;
		case 6:
			return 32;
		case 7:
			return 22;
		case 8:
			return 26;
		case 9:
			return 31;
		case 10:
			return 36;
	}
	return 6;
}

int func_339(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	fVar7 = 180f;
	fVar8 = 140f;
	fVar9 = 80f;
	if (iParam0 == 0)
	{
		iVar10 = 6;
		iVar11 = 7;
		iVar12 = 8;
	}
	else if (iParam0 == 2)
	{
		iVar10 = 12;
		iVar11 = 13;
		iVar12 = 14;
	}
	else if (iParam0 == 5)
	{
		iVar10 = 27;
		iVar11 = 28;
		iVar12 = 29;
	}
	else if (iParam0 == 6)
	{
		iVar10 = 32;
		iVar11 = 33;
		iVar12 = 34;
	}
	else if (iParam0 == 7)
	{
		iVar10 = 22;
		iVar11 = 23;
		iVar12 = 24;
	}
	if (!func_340(vParam1, 0f, 0f, 0f, 0))
	{
		vVar0 = { vParam1 - vParam4 };
		vVar3 = { vParam7 - vParam4 };
		fVar6 = UNK_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar3.x, vVar3.y);
		if (fVar6 > 180f)
		{
			fVar6 = (360f - fVar6);
		}
		if (fVar6 < fVar9)
		{
			return iVar12;
		}
		else if (fVar6 < fVar8)
		{
			return iVar11;
		}
		else if (fVar6 < fVar7)
		{
			return iVar10;
		}
	}
	return iVar10;
}

bool func_340(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_341(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!func_342(&(uParam0->f_5), *uParam0, iParam1, fParam2, bParam3, bParam4, uParam0->f_8))
	{
		return false;
	}
	return true;
}

bool func_342(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	func_83(bParam0);
	*bParam0 = UNK_0x6CC513A908911CF0(vParam1);
	if (!UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		return false;
	}
	if (bParam4 != -1)
	{
		UNK_0xBC8E0A7390523199(*bParam0, bParam4);
	}
	UNK_0x516E63E474722206(*bParam0, bParam5);
	UNK_0x9D7CDDB4B55142AF(*bParam0, 4);
	if (iParam8 == 2 || iParam8 == 3)
	{
		UNK_0x61755AC17D8F538E(*bParam0, 2);
	}
	if (iParam8 == 1)
	{
		UNK_0x61755AC17D8F538E(*bParam0, 3);
	}
	if (bParam6 == (bParam7 - 1))
	{
		UNK_0x64399B11CDD5A727("GATEBLIPFIN");
		UNK_0x4FA118D51B4F2476(*bParam0);
	}
	else
	{
		if (iParam8 == 1)
		{
			UNK_0x64399B11CDD5A727("GATEBLIPINV");
		}
		else if (iParam8 == 2 || iParam8 == 3)
		{
			UNK_0x64399B11CDD5A727("GATEBLIPKNF");
		}
		else
		{
			UNK_0x64399B11CDD5A727("GATEBLIPDEF");
		}
		UNK_0x4FA118D51B4F2476(*bParam0);
	}
	return true;
}

void func_343(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 0);
}

bool func_344(bool bParam0)
{
	switch (bParam0->f_25)
	{
		case 0:
			func_137(1);
			UNK_0x0D3BE1DE0262A012("MPHUD", 0);
			Local_51.f_118 = func_357();
			switch (Local_51)
			{
				case 0:
					UNK_0x0D3BE1DE0262A012("SPRRaces", 0);
					UNK_0x0D3BE1DE0262A012("MPMedals_FEED", 0);
					break;
				case 1:
					UNK_0x0D3BE1DE0262A012("SPROffroad", 0);
					break;
				case 2:
					UNK_0x0D3BE1DE0262A012("Triathlon", 0);
					UNK_0x0D3BE1DE0262A012("MPMedals_FEED", 0);
					break;
			}
			bParam0->f_25 = 1;
			break;
		case 1:
			func_352(bParam0);
			bParam0->f_25 = 2;
			break;
		case 2:
			if (func_347(bParam0))
			{
				if (UNK_0x27117E2CDD4D67C3("MPHUD"))
				{
					if (UNK_0x83D8570832F172A7(Local_51.f_118))
					{
						switch (Local_51)
						{
							case 0:
								if (UNK_0x27117E2CDD4D67C3("SPRRaces") && UNK_0x27117E2CDD4D67C3("MPMedals_FEED"))
								{
									bParam0->f_25 = 3;
								}
								break;
							case 1:
								if (UNK_0x27117E2CDD4D67C3("SPROffroad"))
								{
									bParam0->f_25 = 3;
								}
								break;
							case 2:
								if (UNK_0x27117E2CDD4D67C3("Triathlon") && UNK_0x27117E2CDD4D67C3("MPMedals_FEED"))
								{
									bParam0->f_25 = 3;
								}
								break;
						}
					}
				}
			}
			break;
		case 3:
			UNK_0xB2AF08FECE4571EC(UNK_0xD803B885F5E47A62());
			if (Local_51.f_10 == 0 && !bParam0->f_2)
			{
			}
			else
			{
				func_345(bParam0);
			}
			bParam0->f_25 = 4;
			break;
		case 4:
			if (Local_51.f_10 == 0)
			{
				return false;
			}
			else
			{
				if (UNK_0xC844350D5D58C99A(bParam0->f_358[0 /*189*/].f_9))
				{
					UNK_0x1E9649458B15960F(bParam0->f_358[0 /*189*/].f_9, true);
				}
				if (!UNK_0xEB880D98B5988D0C())
				{
					UNK_0x5CDCBCDA2C651E97(bParam0->f_358[0 /*189*/].f_16);
					UNK_0xD67D6A3F0D653D93(bParam0->f_358[0 /*189*/].f_16, UNK_0x08D89CE2E20AE305(bParam0->f_358[0 /*189*/].f_9), 5000f, 0);
				}
				if (UNK_0x68367101660E33F0())
				{
					UNK_0x486B4ADE317F0689();
					if (UNK_0xC844350D5D58C99A(bParam0->f_358[0 /*189*/].f_9))
					{
						UNK_0x1E9649458B15960F(bParam0->f_358[0 /*189*/].f_9, false);
					}
					func_333(bParam0);
					return false;
				}
			}
			break;
		case 5:
			return false;
		case 6:
			return false;
	}
	return true;
}

int func_345(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < bParam0->f_13)
	{
		if (!func_346(bParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_346(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return false;
	}
	if (iParam1 > 0)
	{
		return func_133(&(bParam0->f_358[iParam1 /*189*/]), 1);
	}
	return func_133(&(bParam0->f_358[iParam1 /*189*/]), 0);
}

bool func_347(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < bParam0->f_13)
	{
		if (!func_348(bParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_348(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_349(&(bParam0->f_358[iParam1 /*189*/]));
}

int func_349(var uParam0)
{
	if (!func_351(uParam0) || !func_350(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_350(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return true;
	}
	return UNK_0xB87F6CF6E5628C67(uParam0->f_22);
}

bool func_351(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return false;
	}
	return UNK_0xB87F6CF6E5628C67(uParam0->f_21);
}

void func_352(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < bParam0->f_13)
	{
		func_353(bParam0, iVar0);
		iVar0++;
	}
}

void func_353(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_354(&(bParam0->f_358[iParam1 /*189*/]));
}

void func_354(var uParam0)
{
	func_356(uParam0);
	func_355(uParam0);
}

void func_355(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return;
	}
	UNK_0x523BCC9DC80CD82F(uParam0->f_22);
}

void func_356(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	UNK_0x523BCC9DC80CD82F(uParam0->f_21);
}

int func_357()
{
	return UNK_0xB01F55A0FD1CFD49("SC_LEADERBOARD");
}

bool func_358(int iParam0)
{
	if (UNK_0x0F1CCD77290EE12F())
	{
		UNK_0x53491B90E4FD0E56(iParam0);
	}
	else if (UNK_0x757EF87A33649210())
	{
		return true;
	}
	return false;
}

void func_359()
{
	if (UNK_0x9F4FE516EAACCFC5(iLocal_2046))
	{
		if (UNK_0xFBB4F23D534EB790(iLocal_2046))
		{
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			UNK_0xE3BB8E05FCEB3FBE(iLocal_2046, false);
		}
		UNK_0x9A8DDC7C522F5BF5(iLocal_2046, 0);
	}
}

void func_360(int iParam0, int iParam1)
{
	func_361(iParam0, iParam1);
}

void func_361(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_362(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_363(bool bParam0)
{
	if (!func_3(bParam0))
	{
		func_11(bParam0);
	}
}

void func_364()
{
	func_365(&uLocal_1550, 0);
}

void func_365(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_431(uParam0);
		func_370(uParam0);
		func_369(&Global_1839723);
	}
	if (Global_1835392.f_2708 != 0 || Global_1835392.f_3184)
	{
		func_367();
	}
	if (UNK_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
	{
		UNK_0x8910D3D58E0132B8("LEADERBOARD_SCENE");
	}
	if (UNK_0x58424C49F8924842())
	{
		func_366(&(Global_1840924.f_49));
	}
	Global_2537071.f_3967 = 0;
}

void func_366(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_367()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;

	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835392[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835392.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2708 = 0;
	Global_1835392.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835392.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835392.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835392.f_2754[iVar0] = 0;
		Global_1835392.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2768 = 0;
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2771[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2779 = 0;
	func_368(&(Global_1835392.f_2780));
	func_366(&(Global_1835392.f_2823));
	Global_1835392.f_2825 = -1;
	Global_1835392.f_2826 = 0;
	func_366(&(Global_1835392.f_2827));
	Global_1835392.f_2829 = 0;
	func_366(&(Global_1835392.f_2830));
	Global_1835392.f_2832 = 0;
	Global_1835392.f_2780.f_28 = 0;
	Global_1835392.f_2780.f_27 = 0;
	Global_1835392.f_3184 = 0;
}

void func_368(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_369(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;

	iVar13 = 0;
	while (iVar13 < 12)
	{
		StringCopy(uParam0[iVar13 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar13 /*100*/])->f_16), "", 64);
		(uParam0[iVar13 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_58 = 0;
		(uParam0[iVar13 /*100*/])->f_59 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			(uParam0[iVar13 /*100*/])->f_60[iVar14] = 0f;
			(uParam0[iVar13 /*100*/])->f_67[iVar14] = 0;
			iVar14++;
		}
		(uParam0[iVar13 /*100*/])->f_75 = 0;
		(uParam0[iVar13 /*100*/])->f_74 = 0;
		(uParam0[iVar13 /*100*/])->f_76 = 0;
		(uParam0[iVar13 /*100*/])->f_77 = 0;
		(uParam0[iVar13 /*100*/])->f_78 = 0;
		(uParam0[iVar13 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar13 /*100*/])->f_80), "", 16);
		iVar13++;
	}
	func_366(&(Global_1835392.f_2830));
}

void func_370(var uParam0)
{
	int iVar0;
	struct<13> Var1;

	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_366(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_371(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_366(&(Global_1835008.f_1));
	UNK_0x8EFB4731C3DCDA55(*uParam2, uParam2->f_1, -1);
}

bool func_372(var uParam0, var uParam1)
{
	if (!func_423())
	{
		return false;
	}
	if (func_417(&bLocal_525, uParam0))
	{
		if (bLocal_527 || bLocal_526)
		{
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, false, -1, 0, false, true, 0);
			if (!*uParam1)
			{
				if (bLocal_527)
				{
					if (func_3(&uLocal_522))
					{
						if (func_249(&uLocal_522, SYSTEM::TO_FLOAT(0)))
						{
							bLocal_527 = false;
							bLocal_526 = !bLocal_526;
						}
					}
					else
					{
						func_11(&uLocal_522);
					}
				}
				else
				{
					UNK_0x3584F71E5CA29322(9);
					UNK_0x3584F71E5CA29322(7);
					func_154(&(Local_51.f_119), 1128792064 /* Float: 200f */, 1, 0, 1, 1065353216 /* Float: 1f */);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_377();
		}
		return false;
	}
	if (bLocal_525)
	{
		func_376();
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
		{
			UNK_0x98868AF51859FC75(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 1);
		}
	}
	else
	{
		Local_51.f_10 = -1;
	}
	func_373();
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x98868AF51859FC75(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 1);
	}
	return true;
}

void func_373()
{
	UNK_0xA37A90C62806D848(1);
	UNK_0x11CCD0ACA866C6C5(3, 1);
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	}
	if (UNK_0xED4934AFB6EC6451("MinigameTransitionIn"))
	{
		UNK_0x9A1335ECD7BD117F("MinigameTransitionIn");
	}
	UNK_0x82A772610883F395("MinigameTransitionOut", 0, 0);
	iLocal_521 = 0;
	UNK_0x21387C9EECC2B220(false);
	func_137(0);
	func_374();
}

void func_374()
{
	Global_19671 = 0;
	func_375();
}

void func_375()
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

void func_376()
{
	switch (Global_110668)
	{
		case 0:
			Local_51.f_10 = 0;
			break;
		case 1:
			Local_51.f_10 = 1;
			break;
		case 2:
			Local_51.f_10 = 2;
			break;
		case 3:
			Local_51.f_10 = 3;
			break;
		case 4:
			Local_51.f_10 = 4;
			break;
	}
}

void func_377()
{
	UNK_0x3FC8DBCC154CA56B();
	func_378(&uLocal_563);
}

void func_378(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var14;
	int iVar16;
	struct<2> Var17;
	struct<11> Var19;
	char cVar30[16];
	char cVar34[16];
	struct<2> Var38;
	struct<11> Var40;

	if (!bLocal_562)
	{
		if (!UNK_0x0EFF6B4415DAF4A1())
		{
			UNK_0x64A90D2E671B51CB(1);
		}
	}
	UNK_0x3584F71E5CA29322(9);
	UNK_0x3584F71E5CA29322(7);
	func_154(&(Local_51.f_119), 1128792064 /* Float: 200f */, 1, 0, 1, 1065353216 /* Float: 1f */);
	func_409("Shared", "BGGradient_32x1024", uParam0[0 /*9*/], 0, 0, 1, 0);
	func_404(uParam0->f_420[0 /*8*/], 0, 0);
	func_404(uParam0->f_420[1 /*8*/], 0, 0);
	func_404(uParam0->f_420[2 /*8*/], 0, 0);
	func_404(uParam0->f_420[3 /*8*/], 0, 0);
	func_404(uParam0->f_420[4 /*8*/], 0, 0);
	func_404(uParam0->f_420[5 /*8*/], 0, 0);
	func_404(uParam0->f_420[6 /*8*/], 0, 0);
	func_404(uParam0->f_420[7 /*8*/], 0, 0);
	func_404(uParam0->f_420[8 /*8*/], 0, 0);
	func_404(uParam0->f_420[6 /*8*/], 0, 0);
	UNK_0xD9ACBBA59FD5A09E(1);
	func_403(&(uParam0->f_741.f_165));
	func_402(&(uParam0->f_316[0 /*2*/]), &(uParam0->f_741.f_165), "SPR_TITLE", 0);
	UNK_0xD9ACBBA59FD5A09E(4);
	func_400(&(uParam0->f_741.f_176));
	func_399(&(uParam0->f_741.f_176), &(uParam0->f_420[0 /*8*/]), 0f, 0f);
	func_397(&(uParam0->f_316[1 /*2*/]), &(uParam0->f_741.f_176), "SPR_CHALLENGES", 1, 0);
	func_396(&(uParam0->f_741.f_176));
	func_399(&(uParam0->f_741.f_176), &(uParam0->f_420[1 /*8*/]), 0f, 0f);
	func_397(&(uParam0->f_316[2 /*2*/]), &(uParam0->f_741.f_176), "SPR_INFO", 1, 0);
	func_396(&(uParam0->f_741.f_176));
	func_399(&(uParam0->f_741.f_176), &(uParam0->f_420[5 /*8*/]), 0f, 0f);
	func_397(&(uParam0->f_316[3 /*2*/]), &(uParam0->f_741.f_176), "SPR_AWARD_TITLE", 1, 0);
	func_396(&(uParam0->f_741.f_176));
	func_403(&(uParam0->f_741.f_198));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_404(uParam0->f_420[16 /*8*/], 0, 0);
	func_404(uParam0->f_420[17 /*8*/], 0, 0);
	func_404(uParam0->f_420[18 /*8*/], 0, 0);
	func_404(uParam0->f_420[19 /*8*/], 0, 0);
	func_404(uParam0->f_420[20 /*8*/], 0, 0);
	func_404(uParam0->f_420[21 /*8*/], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var14 = { uParam0->f_316[iVar2 /*2*/] };
			if (Global_111638.f_19038.f_6[iVar0] > 0f)
			{
				iLocal_531[iVar0] = SYSTEM::CEIL(Global_111638.f_19038.f_6[iVar0]);
			}
			else
			{
				iLocal_531[iVar0] = -1;
			}
			if (iVar0 == Global_110668)
			{
				func_267(&(uParam0->f_420[iVar1 /*8*/]), 1, 1);
				func_404(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_400(&(uParam0->f_741.f_198));
				switch (Global_111638.f_19038.f_12[iVar0 /*8*/].f_4)
				{
					case 2:
						break;
					case 1:
						if (iVar0 < 5)
						{
							if (Global_111638.f_19038.f_6[iVar0] <= 0f)
							{
								func_275(&Var5, 269f, 0f, 32f, 32f, 0);
								func_274(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_538);
								Var14 = (Var5 + fLocal_537);
								if (!bLocal_562)
								{
									func_395(&Var5, 0);
								}
								func_394(&Var5, 1);
								func_409("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_562)
								{
									func_393(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_110668)
				{
					func_400(&(uParam0->f_741.f_198));
				}
				func_396(&(uParam0->f_741.f_198));
				func_402(&Var14, &(uParam0->f_741.f_198), &(Local_51.f_24[iVar0 /*8*/]), 0);
				func_403(&(uParam0->f_741.f_198));
				func_394(uParam0[iVar3 /*9*/], 1);
				if (bVar4)
				{
					func_403(&(uParam0->f_741.f_198));
				}
				else
				{
					func_403(&(uParam0->f_741.f_198));
				}
				func_403(&(uParam0->f_741.f_198));
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && iLocal_531[iVar0] > 1)
				{
					func_394(uParam0[iVar3 /*9*/], 1);
					func_394(uParam0[9 /*9*/], 1);
					func_409("SPRRaces", "FlightStunt_Gold_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					UNK_0xFF72A133B792782E(1);
					func_402(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sGOLD", 0);
					UNK_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]) && IntToFloat(iLocal_531[iVar0]) > Local_51.f_106[iVar0])
				{
					func_394(uParam0[iVar3 /*9*/], 1);
					func_394(uParam0[9 /*9*/], 1);
					func_409("SPRRaces", "FlightStunt_Silver_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					UNK_0xFF72A133B792782E(1);
					func_402(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sSILVER", 0);
					UNK_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] && IntToFloat(iLocal_531[iVar0]) > (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]))
				{
					func_394(uParam0[iVar3 /*9*/], 1);
					func_394(uParam0[9 /*9*/], 1);
					func_409("SPRRaces", "FlightStunt_Bronze_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					UNK_0xFF72A133B792782E(1);
					func_402(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sBRONZE", 0);
					UNK_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) > Local_51.f_112[iVar0] || iLocal_531[iVar0] == -1)
				{
					func_394(uParam0[iVar3 /*9*/], 1);
					func_394(uParam0[9 /*9*/], 1);
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					UNK_0xFF72A133B792782E(1);
					func_402(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					UNK_0xFF72A133B792782E(0);
					func_409("SPRRaces", "Empty_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_392(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && !iLocal_531[iVar0] == -1)
				{
					func_394(uParam0[13 /*9*/], 1);
				}
				else
				{
					(uParam0[13 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]) && !iLocal_531[iVar0] == -1)
				{
					func_394(uParam0[12 /*9*/], 1);
				}
				else
				{
					(uParam0[12 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] && !iLocal_531[iVar0] == -1)
				{
					func_394(uParam0[11 /*9*/], 1);
				}
				else
				{
					(uParam0[11 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				func_409("SPRRaces", "FlightStunt_Bronze_128", uParam0[11 /*9*/], 0, 0, 5, 0);
				func_409("SPRRaces", "FlightStunt_Silver_128", uParam0[12 /*9*/], 0, 0, 5, 0);
				func_409("SPRRaces", "FlightStunt_Gold_128", uParam0[13 /*9*/], 0, 0, 5, 0);
				func_403(&(uParam0->f_741.f_198));
				if (Global_111638.f_19038.f_6[Global_110668] > 0f)
				{
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					UNK_0xFF72A133B792782E(1);
					func_387(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((Global_111638.f_19038.f_6[Global_110668] * 1000f)), 6, "", 0, 1);
					UNK_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
				}
				else
				{
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					UNK_0xFF72A133B792782E(1);
					func_402(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					UNK_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
				}
				func_402(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_198), "SPR_RTIME", 0);
				if (Local_51.f_18[Global_110668] > 0f)
				{
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					UNK_0xFF72A133B792782E(1);
					func_387(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((Local_51.f_18[Global_110668] * 1000f)), 6, "", 0, 1);
					UNK_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
					func_403(&(uParam0->f_741.f_198));
				}
				else
				{
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					UNK_0xFF72A133B792782E(1);
					func_397(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0, 1);
					UNK_0xFF72A133B792782E(0);
					func_396(&(uParam0->f_741.f_198));
					func_403(&(uParam0->f_741.f_198));
				}
			}
			else
			{
				func_386(&(uParam0->f_420[iVar1 /*8*/]));
				func_267(&(uParam0->f_420[iVar1 /*8*/]), 117, 1);
				func_404(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_394(uParam0[iVar3 /*9*/], 1);
				switch (Global_111638.f_19038.f_12[iVar0 /*8*/].f_4)
				{
					case 0:
						func_394(uParam0[iVar3 /*9*/], 1);
						func_403(&(uParam0->f_741.f_198));
						break;
					case 2:
						break;
					case 1:
						if (iVar0 < 5)
						{
							func_403(&(uParam0->f_741.f_198));
							if (Global_111638.f_19038.f_6[iVar0] <= 0f)
							{
								func_275(&Var5, 269f, 0f, 32f, 32f, 0);
								func_274(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_538);
								Var14 = (Var5 + fLocal_537);
								if (!bLocal_562)
								{
									func_395(&Var5, 0);
								}
								func_394(&Var5, 1);
								func_409("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_562)
								{
									func_393(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_110668)
				{
					func_400(&(uParam0->f_741.f_198));
				}
				func_396(&(uParam0->f_741.f_198));
				func_402(&Var14, &(uParam0->f_741.f_198), &(Local_51.f_24[iVar0 /*8*/]), 0);
				func_403(&(uParam0->f_741.f_198));
				func_394(uParam0[iVar3 /*9*/], 1);
			}
			if (Global_111638.f_19038.f_12[iVar0 /*8*/].f_4 == 0)
			{
				func_409("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_531[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0])
				{
					func_385(uParam0[iVar3 /*9*/]);
					func_409("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]))
				{
					func_384(uParam0[iVar3 /*9*/]);
					func_409("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0])
				{
					func_382(uParam0[iVar3 /*9*/]);
					func_409("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar16 = 0;
	if (func_381(0))
	{
		UNK_0x6FB46C25CCB7E6D5(joaat("SP0_FLYING_ABILITY"), &iVar16, -1);
	}
	else if (func_381(1))
	{
		UNK_0x6FB46C25CCB7E6D5(joaat("SP1_FLYING_ABILITY"), &iVar16, -1);
	}
	else if (func_381(2))
	{
		UNK_0x6FB46C25CCB7E6D5(joaat("SP2_FLYING_ABILITY"), &iVar16, -1);
	}
	if (iVar16 < 40)
	{
		func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[15 /*8*/]), 0.0047f, 0.0055f);
		UNK_0x4B9228CE1CF0DACA(1);
		Var17 = { uParam0->f_316[22 /*2*/] };
		Var19 = { uParam0->f_741.f_198 };
		if (!bLocal_562)
		{
			Var19.f_9 = (Var19.f_9 - 0.08f);
			func_393(&Var17, &Var19);
		}
		if (bLocal_562)
		{
			func_379(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var17, &Var19, 27f, 2f, 5, 159f);
		}
		else
		{
			func_379(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var17, &Var19, 18f, 1.55f, 5, 106f);
		}
		func_404(uParam0->f_420[14 /*8*/], 0, 0);
		func_409("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
		func_402(&(uParam0->f_316[22 /*2*/]), &(uParam0->f_741.f_198), "FLY_STAT_WARN", 0);
		func_396(&(uParam0->f_741.f_198));
	}
	StringCopy(&cVar30, "SPR_DESC_", 16);
	StringIntConCat(&cVar30, Global_110668 + 1, 16);
	func_394(uParam0[7 /*9*/], 1);
	func_409("SPRRaces", &cVar30, uParam0[7 /*9*/], 0, 0, 5, 0);
	func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[25 /*8*/]), 0.0047f, 0.0055f);
	UNK_0x4B9228CE1CF0DACA(1);
	StringCopy(&cVar34, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar34, Global_110668 + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar34, 0, 16);
	}
	Var38 = { uParam0->f_316[16 /*2*/] };
	Var40 = { uParam0->f_741.f_198 };
	if (!bLocal_562)
	{
		Var40.f_9 = (Var40.f_9 - 0.108f);
		func_393(&Var38, &Var40);
	}
	if (bLocal_562)
	{
		func_379(&(uParam0->f_420[25 /*8*/]), &cVar34, &Var38, &Var40, 27f, 2f, 5, 159f);
	}
	else
	{
		func_379(&(uParam0->f_420[25 /*8*/]), &cVar34, &Var38, &Var40, 18f, 1.55f, 5, 106f);
	}
	func_404(uParam0->f_420[25 /*8*/], 0, 0);
	func_402(&(uParam0->f_316[16 /*2*/]), &(uParam0->f_741.f_198), &cVar34, 0);
	func_396(&(uParam0->f_741.f_198));
	func_403(&(uParam0->f_741.f_198));
	func_402(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_198), "SPR_AWARDS_SUB", 0);
	func_402(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_198), "SPR_BEST", 0);
	func_400(&(uParam0->f_741.f_198));
	func_404(uParam0->f_420[22 /*8*/], 0, 0);
	func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[22 /*8*/]), 0, 0);
	func_387(&(uParam0->f_316[13 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR(Local_51.f_112[Global_110668]) * 1000, 6, "", 1, 0);
	func_396(&(uParam0->f_741.f_198));
	func_404(uParam0->f_420[23 /*8*/], 0, 0);
	func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[23 /*8*/]), 0, 0);
	func_387(&(uParam0->f_316[14 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((((Local_51.f_112[Global_110668] - Local_51.f_106[Global_110668]) / 2f) + Local_51.f_106[Global_110668])) * 1000, 6, "", 1, 0);
	func_396(&(uParam0->f_741.f_198));
	func_404(uParam0->f_420[24 /*8*/], 0, 0);
	func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[24 /*8*/]), 0, 0);
	func_387(&(uParam0->f_316[15 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR(Local_51.f_106[Global_110668]) * 1000, 6, "", 1, 0);
	func_396(&(uParam0->f_741.f_198));
	func_403(&(uParam0->f_741.f_198));
}

float func_379(var uParam0, bool bParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)
{
	int iVar0;
	int iVar1;

	func_380(uParam3, 0);
	UNK_0xA1868A78E3C3D56B(bParam1);
	iVar0 = UNK_0x5D2FD44A8C086959(*uParam2, uParam2->f_1);
	iVar1 = 720;
	if (!UNK_0x0D71AFA59EF5104F())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = func_271(((SYSTEM::TO_FLOAT(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = func_271(((fParam7 + ((SYSTEM::TO_FLOAT(iParam6) + (SYSTEM::TO_FLOAT(iVar0) * 0.5f)) * fParam4)) - (fParam5 * 0.5f)), iVar1);
	return 0f;
}

void func_380(var uParam0, bool bParam1)
{
	UNK_0x7BBAC160090910C3(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		UNK_0xF1F881BAAAFB43B1(uParam0->f_8, uParam0->f_9);
	}
	UNK_0xD3539A877EC25E86(uParam0->f_1, uParam0->f_2);
	UNK_0x7178F32F6742C936(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		case 1:
			UNK_0x5C3AC46FC4D891D1();
			UNK_0xC8CFC125861F0537();
			break;
		case 3:
			UNK_0xC8CFC125861F0537();
			break;
		case 2:
			UNK_0x5C3AC46FC4D891D1();
			break;
	}
	if (bParam1)
	{
		UNK_0xD9ACBBA59FD5A09E(4);
	}
}

bool func_381(int iParam0)
{
	func_166();
	return iParam0 == Global_111638.f_2358.f_539.f_4321;
}

void func_382(var uParam0)
{
	func_383(uParam0, 107);
}

void func_383(var uParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	UNK_0xA402F6C87C08815C(bParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_384(var uParam0)
{
	func_383(uParam0, 108);
}

void func_385(var uParam0)
{
	func_383(uParam0, 109);
}

void func_386(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 128;
}

void func_387(var uParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	bool bVar0;

	if (func_390())
	{
		func_380(uParam1, 0);
		UNK_0xFF72A133B792782E(iParam6);
		UNK_0xAAE406A7DA443B93(iParam5);
		if (func_50(bParam4))
		{
			bVar0 = "STRING";
		}
		else
		{
			bVar0 = bParam4;
		}
		UNK_0x070005E852D4C0E9(bVar0);
		UNK_0x164431059FF80580(bParam2, iParam3);
		UNK_0xE0026608C37C7C41(func_389(*uParam0), func_388(uParam0->f_1), 0);
	}
}

float func_388(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_389(float fParam0)
{
	return (fParam0 + fLocal_12);
}

bool func_390()
{
	if (func_391())
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

bool func_391()
{
	return Global_1312440;
}

void func_392(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 255;
}

void func_393(float fParam0, var uParam1)
{
	*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_8 = (((uParam1->f_8 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_9 = (((uParam1->f_9 - 0.5f) * 1.33f) + 0.5f);
}

void func_394(float fParam0, int iParam1)
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_395(float fParam0, bool bParam1)
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1.33f);
}

void func_396(var uParam0)
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_397(float fParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	bool bVar0;

	bVar0 = sParam2;
	if (!func_50(bVar0))
	{
		if (func_390())
		{
			func_380(uParam1, 0);
			UNK_0xFF72A133B792782E(iParam4);
			UNK_0xAAE406A7DA443B93(iParam3);
			func_398(func_389(*fParam0), func_388(fParam0->f_1), bVar0, 0);
		}
	}
}

void func_398(float fParam0, float fParam1, bool bParam2, int iParam3)
{
	UNK_0x070005E852D4C0E9(bParam2);
	UNK_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

void func_399(var uParam0, var uParam1, float fParam2, float fParam3)
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_400(var uParam0)
{
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_401(uParam0, 2);
}

void func_401(var uParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	UNK_0xA402F6C87C08815C(bParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_402(float fParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		UNK_0xD9ACBBA59FD5A09E(1);
	}
	func_397(fParam0, uParam1, sParam2, 0, 0);
}

void func_403(var uParam0)
{
	func_401(uParam0, 1);
}

void func_404(struct<8> Param0, int iParam8, int iParam9)
{
	struct<8> Var0;

	Var0 = { Param0 };
	switch (iParam8)
	{
		case 2:
			func_408(&Var0);
			break;
		case 1:
			func_407(&Var0);
			break;
		case 3:
			func_406(&Var0);
			break;
		case 4:
			func_405(&Var0);
			break;
	}
	if (func_390())
	{
		if (iParam9 == 1)
		{
			UNK_0xC1032CAC14DE468A(func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			UNK_0xC1032CAC14DE468A(func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_405(var uParam0)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_406(var uParam0)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_407(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_408(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_409(bool bParam0, bool bParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;

	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			func_416(&Var0);
			break;
		case 1:
			func_415(&Var0);
			break;
		case 5:
			func_414(&Var0);
			break;
		case 6:
			func_413(&Var0);
			break;
		case 7:
			func_412(&Var0);
			break;
		case 8:
			func_411(&Var0);
			break;
		case 9:
			func_410(&Var0);
			break;
	}
	if (func_390())
	{
		UNK_0xD9ACBBA59FD5A09E(iParam5);
		if (iParam3 == 1)
		{
			UNK_0x539E86AE011A8B38(bParam0, bParam1, func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			UNK_0x539E86AE011A8B38(bParam0, bParam1, func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		UNK_0xD9ACBBA59FD5A09E(4);
	}
}

void func_410(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_411(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_412(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_413(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_414(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_415(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_416(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

bool func_417(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bLocal_527 == 1)
	{
		return true;
	}
	if (bLocal_528)
	{
		return false;
	}
	if (SYSTEM::TIMERA() < 500)
	{
		return true;
	}
	if (bLocal_526)
	{
		if (UNK_0xB9132A06AE472728(2, 201))
		{
			iLocal_520 = UNK_0xD68EA767274B7444();
			UNK_0x4D7F4CC43D4D0DE3(iLocal_520, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			bLocal_527 = true;
			bLocal_528 = true;
			*bParam0 = 0;
			return true;
		}
		else if (UNK_0xB9132A06AE472728(2, 202))
		{
			iLocal_520 = UNK_0xD68EA767274B7444();
			UNK_0x4D7F4CC43D4D0DE3(iLocal_520, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			UNK_0xA37A90C62806D848(1);
			func_547(&(Local_51.f_119));
			bLocal_527 = true;
		}
		else
		{
			return true;
		}
	}
	else if (UNK_0xB9132A06AE472728(2, 202) || UNK_0xB9132A06AE472728(2, 238))
	{
		iLocal_520 = UNK_0xD68EA767274B7444();
		UNK_0x4D7F4CC43D4D0DE3(iLocal_520, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_263(&(Local_51.f_119), 0, 0, 1, 1);
		func_262(&(Local_51.f_119), "FE_HLP29", 2, 201, 1, 1, 0);
		func_262(&(Local_51.f_119), "FE_HLP31", 2, 202, 1, 1, 0);
		func_4(&uLocal_522);
		bLocal_527 = true;
		UNK_0xA37A90C62806D848(1);
		return true;
	}
	iVar0 = 0;
	if (UNK_0x0EFF6B4415DAF4A1() && bLocal_526 == 0)
	{
		if (UNK_0x9E6C8D8976DA0ECD(2))
		{
			Global_4268497 = func_421(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, 5, 255, 0, 1);
			func_420(0, Global_110668, 1);
			if (func_419())
			{
				if (Global_4268497 == Global_110668)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_520 = UNK_0xD68EA767274B7444();
					UNK_0x22293E611B2408F1(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					Global_110668 = Global_4268497;
					func_547(&(Local_51.f_119));
				}
			}
		}
	}
	if (UNK_0xB9132A06AE472728(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_111638.f_19038.f_12[Global_110668 /*8*/].f_4 == 0)
		{
			iLocal_520 = UNK_0xD68EA767274B7444();
			UNK_0x22293E611B2408F1(iLocal_520, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		}
		else
		{
			iLocal_520 = UNK_0xD68EA767274B7444();
			UNK_0x22293E611B2408F1(iLocal_520, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
			*bParam0 = 1;
			return false;
		}
	}
	if ((UNK_0xB9132A06AE472728(2, 188) || func_418(0, uParam1)) || UNK_0xBFC0798A6E3417F9(2, 241))
	{
		iVar1 = (Global_110668 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_520 = UNK_0xD68EA767274B7444();
		UNK_0x22293E611B2408F1(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_110668 = iVar1;
		func_547(&(Local_51.f_119));
	}
	if ((UNK_0xB9132A06AE472728(2, 187) || func_418(1, uParam1)) || UNK_0xBFC0798A6E3417F9(2, 242))
	{
		iVar2 = Global_110668 + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_520 = UNK_0xD68EA767274B7444();
		UNK_0x22293E611B2408F1(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_110668 = iVar2;
		func_547(&(Local_51.f_119));
	}
	return true;
}

bool func_418(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = false;
	bVar1 = UNK_0x0DED1C1B8250FA57(2, 195);
	bVar2 = UNK_0x0DED1C1B8250FA57(2, 196);
	if (UNK_0x51D1D19912234EA0(bVar1) < 28 && UNK_0x51D1D19912234EA0(bVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return false;
	}
	if (UNK_0x1C0640BA9A7327B3() < uParam1->f_1 + 250)
	{
		*uParam1 = 0;
		return false;
	}
	else
	{
		*uParam1 = 1;
	}
	if (!*uParam1)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			bVar0 = bVar2 < 100;
			break;
		case 1:
			bVar0 = bVar2 > 156;
			break;
		case 2:
			bVar0 = bVar1 < 100;
			break;
		case 3:
			bVar0 = bVar1 > 156;
			break;
	}
	if (bVar0)
	{
		uParam1->f_1 = UNK_0x1C0640BA9A7327B3();
		*uParam1 = 0;
	}
	return bVar0;
}

bool func_419()
{
	if (UNK_0x91E3F625EF57450D(2))
	{
		if (Global_4268497 > -1)
		{
			if (UNK_0xBFC0798A6E3417F9(2, 237))
			{
				return true;
			}
		}
	}
	return false;
}

int func_420(bool bParam0, var uParam1, bool bParam2)
{
	if (!UNK_0x91E3F625EF57450D(2))
	{
		return 0;
	}
	if (UNK_0x798A3F1296751F46() || UNK_0xE57E602827E07C9D())
	{
		return 0;
	}
	if (bParam2)
	{
		UNK_0x5D80F91A16C40CDE();
	}
	if (Global_4268497 == -6)
	{
		UNK_0xC74D8A1D346B9CCB(4);
		if (bParam0 && UNK_0x06F8112AA79C53D9(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268497 = -1;
			return 0;
		}
	}
	if (((Global_4268497 > -1 || Global_4268497 == -3) || Global_4268497 == -2) || UNK_0xFA0AEC0FCBF8703B())
	{
		UNK_0xC74D8A1D346B9CCB(1);
		return 0;
	}
	if (Global_4268497 == -1 && bParam0)
	{
		if (UNK_0x06F8112AA79C53D9(2, 237))
		{
			UNK_0xC74D8A1D346B9CCB(4);
			Global_4268497 = -6;
			return 1;
		}
		else
		{
			UNK_0xC74D8A1D346B9CCB(3);
			return 0;
		}
	}
	UNK_0xC74D8A1D346B9CCB(1);
	return 0;
}

int func_421(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	iVar7 = -1;
	if (!UNK_0x91E3F625EF57450D(2))
	{
		return -1;
	}
	UNK_0x38C3A68D7861DCFD(2, 200, 1);
	UNK_0x5D80F91A16C40CDE();
	if (bParam8)
	{
		if (!UNK_0x0D71AFA59EF5104F())
		{
			fParam0 = (((fParam0 - 0.5f) * 1.33f) + 0.5f);
			fParam2 = (fParam2 * 1.33f);
		}
	}
	if (bParam7)
	{
		UNK_0xD02CE72B4B66DC29(76, 84);
		UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		UNK_0xE428D1DCE17602B4(fParam0, fParam1, &fParam0, &fParam1);
		UNK_0xD59EF13BB60323B9();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = UNK_0x4F3973434662D795(2, 239);
	fVar3 = UNK_0x4F3973434662D795(2, 240);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = SYSTEM::FLOOR((fVar4 / fParam3));
		if (bParam7)
		{
			UNK_0xD02CE72B4B66DC29(76, 84);
			UNK_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
			func_422(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, bParam6);
			UNK_0xD59EF13BB60323B9();
		}
		else
		{
			func_422(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, bParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_422(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	UNK_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, bParam7, 0);
}

bool func_423()
{
	int iVar0;

	switch (iLocal_521)
	{
		case 0:
			UNK_0xA37A90C62806D848(1);
			UNK_0xD7992BEF7A9D109E("SP_SPR", 3);
			UNK_0x0D3BE1DE0262A012("SPRRaces", 0);
			UNK_0x0D3BE1DE0262A012("MPHUD", 0);
			iLocal_521 = 1;
			break;
		case 1:
			if (UNK_0x01C309A4BDFCAD82("SP_SPR", 3))
			{
				if (UNK_0x27117E2CDD4D67C3("SPRRaces"))
				{
					if (UNK_0x27117E2CDD4D67C3("MPHUD"))
					{
						iLocal_521 = 2;
					}
				}
			}
			break;
		case 2:
			UNK_0xE17FDF9E3068281B(&(Local_51.f_119));
			Local_51.f_119 = 0;
			func_547(&(Local_51.f_119));
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 512);
			}
			func_137(1);
			UNK_0x752C7D5696C0D8A0(1);
			UNK_0x71EDC33E5A423750(Local_51.f_1, 4);
			func_374();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_51.f_11)
			{
				iLocal_531[iVar0] = -1;
				iVar0++;
			}
			func_427(&uLocal_563);
			func_424();
			UNK_0x82A772610883F395("MinigameTransitionIn", 0, 1);
			iLocal_521 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

void func_424()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_111638.f_19038.f_12[iVar0 /*8*/] = { func_426(iVar0) };
		MemCopy(&(Local_51.f_24[iVar0 /*8*/]), {Global_111638.f_19038.f_12[iVar0 /*8*/]}, 8);
		Local_51.f_106[iVar0] = func_425(iVar0);
		Local_51.f_112[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_111638.f_19038.f_6[iVar0] > Local_51.f_112[iVar0] || Global_111638.f_19038.f_6[iVar0] <= 0f)
			{
				Global_111638.f_19038.f_12[iVar0 + 1 /*8*/].f_4 = 0;
			}
			else
			{
				Global_111638.f_19038.f_12[iVar0 + 1 /*8*/].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_111638.f_19038.f_12[0 /*8*/].f_4 = 1;
}

float func_425(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70f;
		case 1:
			return 75f;
		case 2:
			return 72f;
		case 3:
			return 120f;
		case 4:
			return 115f;
	}
	return -1f;
}

struct<4> func_426(int iParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BRIDGEBINGE", 16);
			break;
		case 1:
			StringCopy(&Var0, "VINEWOOD", 16);
			break;
		case 2:
			StringCopy(&Var0, "BRIDGEWORK", 16);
			break;
		case 3:
			StringCopy(&Var0, "AIRPORT", 16);
			break;
		case 4:
			StringCopy(&Var0, "ALTITUDE", 16);
			break;
	}
	return Var0;
}

void func_427(var uParam0)
{
	func_430();
	bLocal_562 = UNK_0x0D71AFA59EF5104F();
	func_302(uParam0);
	func_280(&(uParam0->f_741));
	func_428(uParam0);
}

void func_428(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	bVar0 = UNK_0x0D71AFA59EF5104F();
	func_279(&(uParam0->f_316[0 /*2*/]), 262f, (71f - func_429(0.00278f, 720, 1)), 1);
	func_279(&(uParam0->f_316[1 /*2*/]), (257f + 127f), (125f - func_429(0.00417f, 720, 1)), 1);
	func_279(&(uParam0->f_316[2 /*2*/]), (513f + 127f), (125f - func_429(0.00417f, 720, 1)), 1);
	func_279(&(uParam0->f_316[3 /*2*/]), (769f + 127f), (125f - func_429(0.00417f, 720, 1)), 1);
	func_279(&(uParam0->f_316[17 /*2*/]), (257f + func_278(0.0047f, 1280, 1)), 162f, 1);
	func_279(&(uParam0->f_316[18 /*2*/]), (257f + func_278(0.0047f, 1280, 1)), 189f, 1);
	func_279(&(uParam0->f_316[19 /*2*/]), (257f + func_278(0.0047f, 1280, 1)), 216f, 1);
	func_279(&(uParam0->f_316[20 /*2*/]), (257f + func_278(0.0047f, 1280, 1)), 243f, 1);
	func_279(&(uParam0->f_316[21 /*2*/]), (257f + func_278(0.0047f, 1280, 1)), 270f, 1);
	func_279(&(uParam0->f_316[22 /*2*/]), (257f + func_278(0.0047f, 1280, 1)), 297f, 1);
	func_279(&(uParam0->f_316[16 /*2*/]), (513f + func_278(0.0047f, 1280, 1)), (299f - func_429(0.00278f, 720, 1)), 1);
	func_279(&(uParam0->f_316[4 /*2*/]), (769f + func_278(0.0047f, 1280, 1)), 297f, 1);
	func_279(&(uParam0->f_316[5 /*2*/]), 769f, 297f, 1);
	func_279(&(uParam0->f_316[8 /*2*/]), (769f + func_278(0.0047f, 1280, 1)), 351f, 1);
	func_279(&(uParam0->f_316[9 /*2*/]), 324f, 351f, 1);
	func_279(&(uParam0->f_316[6 /*2*/]), (769f + func_278(0.0047f, 1280, 1)), (324f - func_429(0.00278f, 720, 1)), 1);
	func_279(&(uParam0->f_316[7 /*2*/]), 324f, (324f - func_429(0.00278f, 720, 1)), 1);
	func_279(&(uParam0->f_316[15 /*2*/]), 810f, 459f, 1);
	func_279(&(uParam0->f_316[14 /*2*/]), 896f, 459f, 1);
	func_279(&(uParam0->f_316[13 /*2*/]), 982f, 459f, 1);
	func_275(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	UNK_0xA402F6C87C08815C(117, &iVar1, &iVar2, &iVar3, &iVar4);
	func_274(uParam0[0 /*9*/], iVar1, iVar2, iVar3, iVar4);
	func_275(uParam0[1 /*9*/], 496f, 171f, 32f, 32f, 0);
	func_274(uParam0[1 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[2 /*9*/], 496f, 198f, 32f, 32f, 0);
	func_274(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[3 /*9*/], 496f, 225f, 32f, 32f, 0);
	func_274(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[4 /*9*/], 496f, 252f, 32f, 32f, 0);
	func_274(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[5 /*9*/], 496f, 279f, 32f, 32f, 0);
	func_274(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[6 /*9*/], (486f + func_278(0.0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_274(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[7 /*9*/], 640f, 224f, 256f, 256f, 0);
	func_274(uParam0[7 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[9 /*9*/], 896f, 223f, 128f, 128f, 0);
	func_274(uParam0[9 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[13 /*9*/], 770.5f, 374.5f, 80f, 80f, 1);
	func_274(uParam0[13 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[12 /*9*/], 856f, 374.5f, 80f, 80f, 1);
	func_274(uParam0[12 /*9*/], 255, 255, 255, 255);
	func_275(uParam0[11 /*9*/], 941.5f, 374.5f, 80f, 80f, 1);
	func_274(uParam0[11 /*9*/], 255, 255, 255, 255);
	func_269(&(uParam0->f_420[3 /*8*/]), 257f, 114f, 254f, 5f, 1);
	func_268(&(uParam0->f_420[3 /*8*/]), 70, 70, 130, 255);
	func_269(&(uParam0->f_420[4 /*8*/]), 513f, 114f, 254f, 5f, 1);
	func_268(&(uParam0->f_420[4 /*8*/]), 70, 70, 130, 255);
	func_269(&(uParam0->f_420[5 /*8*/]), 769f, 114f, 254f, 5f, 1);
	func_268(&(uParam0->f_420[5 /*8*/]), 70, 70, 130, 255);
	func_269(&(uParam0->f_420[0 /*8*/]), 257f, 119f, 254f, 26f, 1);
	func_267(&(uParam0->f_420[0 /*8*/]), 1, 1);
	func_269(&(uParam0->f_420[1 /*8*/]), 513f, 119f, 254f, 26f, 1);
	func_267(&(uParam0->f_420[1 /*8*/]), 1, 1);
	func_269(&(uParam0->f_420[2 /*8*/]), 769f, 119f, 254f, 26f, 1);
	func_267(&(uParam0->f_420[2 /*8*/]), 1, 1);
	func_269(&(uParam0->f_420[7 /*8*/]), 513f, 159f, 254f, 133f, 1);
	func_267(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[8 /*8*/]), 769f, 159f, 254f, 133f, 1);
	func_267(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[9 /*8*/]), 257f, 159f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[9 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[10 /*8*/]), 257f, 186f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[10 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[11 /*8*/]), 257f, 213f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[12 /*8*/]), 257f, 240f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[13 /*8*/]), 257f, 267f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[26 /*8*/]), 257f, 294f, 254f, 2f, 1);
	func_267(&(uParam0->f_420[26 /*8*/]), 1, 1);
	func_269(&(uParam0->f_420[14 /*8*/]), 257f, 294f, 254f, 75f, 1);
	func_267(&(uParam0->f_420[14 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[15 /*8*/]), 257f, 294f, (254f - 32f), 75f, 1);
	func_267(&(uParam0->f_420[15 /*8*/]), 1, 1);
	func_269(&(uParam0->f_420[25 /*8*/]), 513f, 294f, 254f, 133f, 1);
	func_267(&(uParam0->f_420[25 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[16 /*8*/]), 769f, 294f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[16 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[17 /*8*/]), 769f, 321f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[17 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[18 /*8*/]), 769f, 348f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[18 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[21 /*8*/]), 769f, 375f, 83f, 84f, 1);
	func_267(&(uParam0->f_420[21 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[20 /*8*/]), 854f, 375f, 84f, 84f, 1);
	func_267(&(uParam0->f_420[20 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[19 /*8*/]), 940f, 375f, 83f, 84f, 1);
	func_267(&(uParam0->f_420[19 /*8*/]), 117, 1);
	func_269(&(uParam0->f_420[22 /*8*/]), 769f, 456f, 83f, 25f, 1);
	func_267(&(uParam0->f_420[22 /*8*/]), 109, 1);
	func_269(&(uParam0->f_420[23 /*8*/]), 854f, 456f, 84f, 25f, 1);
	func_267(&(uParam0->f_420[23 /*8*/]), 108, 1);
	func_269(&(uParam0->f_420[24 /*8*/]), 940f, 456f, 83f, 25f, 1);
	func_267(&(uParam0->f_420[24 /*8*/]), 107, 1);
	if (!bVar0)
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			(*uParam0)[iVar5 /*9*/] = ((((*uParam0)[iVar5 /*9*/] - 0.5f) * 1.33f) + 0.5f);
			(uParam0[iVar5 /*9*/])->f_2 = ((uParam0[iVar5 /*9*/])->f_2 * 1.33f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 23)
		{
			uParam0->f_316[iVar5 /*2*/] = (((uParam0->f_316[iVar5 /*2*/] - 0.5f) * 1.33f) + 0.5f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 27)
		{
			uParam0->f_420[iVar5 /*8*/] = (((uParam0->f_420[iVar5 /*8*/] - 0.5f) * 1.33f) + 0.5f);
			uParam0->f_420[iVar5 /*8*/].f_2 = (uParam0->f_420[iVar5 /*8*/].f_2 * 1.33f);
			iVar5++;
		}
	}
	uParam0->f_986 = 1;
}

float func_429(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		UNK_0x8A462DAA7D1D9008(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_430()
{
	int iVar0;

	UNK_0x035C78C5D5EB800E();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838577.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_431(var uParam0)
{
	int iVar0;
	struct<35> Var1;

	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

bool func_432(bool bParam0, bool bParam1)
{
	int iVar0;

	if (UNK_0x1963B11DE70153E0())
	{
		if (!bLocal_529)
		{
			iVar0 = 0;
			if (bParam0->f_358[0 /*189*/].f_13 > 0f)
			{
				if (bParam0->f_358[0 /*189*/].f_13 <= Local_51.f_106[Local_51.f_10])
				{
					iVar0 = 1;
				}
				else if (bParam0->f_358[0 /*189*/].f_13 <= (((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]))
				{
					iVar0 = 2;
				}
				else if (bParam0->f_358[0 /*189*/].f_13 <= Local_51.f_112[Local_51.f_10])
				{
					iVar0 = 3;
				}
			}
			if (iVar0 == 0)
			{
			}
			func_460(Local_51.f_10, &(Local_51.f_65[Local_51.f_10 /*8*/]));
			if (bParam1)
			{
				func_457(Local_51.f_10, bParam0->f_358[0 /*189*/].f_13, iVar0);
				bLocal_529 = true;
				return true;
			}
			else if (func_433(Local_51.f_10, bParam0->f_358[0 /*189*/].f_13, iVar0))
			{
				bLocal_529 = true;
				return true;
			}
		}
	}
	else if (bParam1)
	{
		bLocal_529 = true;
	}
	return false;
}

bool func_433(int iParam0, float fParam1, int iParam2)
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_457(iParam0, fParam1, iParam2);
		Global_1835013.f_2 = 1;
	}
	if (func_434(&uLocal_1550))
	{
		Global_1835388 = 1;
		return true;
	}
	return false;
}

bool func_434(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	bool bVar188;

	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_456(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_455(UNK_0xD803B885F5E47A62()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_454(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_453(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = UNK_0x3E935963A5A0820F(uParam0->f_44, 0);
				bVar188 = false;
				while (bVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_452(uParam0->f_44, bVar188))
					{
						if (func_451(uParam0->f_44, 4, bVar188))
						{
							UNK_0x5D96D8530B3D0904(&(Global_1835013.f_142.f_2), bVar188);
						}
						else
						{
							UNK_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), bVar188);
						}
					}
					bVar188++;
				}
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						UNK_0xBC584396476EE48A(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_450(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							bVar188 = false;
							while (bVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_452(uParam0->f_44, bVar188))
								{
									if (func_451(uParam0->f_44, 4, bVar188))
									{
										Global_1835013.f_73.f_36[bVar188] = UNK_0x14B893B11D05C490(0, bVar188);
										if (Global_1835013.f_73.f_36[bVar188] == -1)
										{
											if (bVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[bVar188] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[bVar188] = UNK_0x1969161BAC0006D6(0, bVar188);
										if (Global_1835013.f_73.f_3[bVar188] == -1f)
										{
											if (bVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[bVar188] = 0f;
											}
										}
									}
								}
								bVar188++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					UNK_0xC4492EA0CF4852F9();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_449();
				if (Global_1835013.f_4)
				{
					if (func_448(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		case 2:
			UNK_0x56218E3881C1B187(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		case 4:
			if (UNK_0x8CD06866876216F2() && func_447())
			{
				if (func_446())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return true;
				}
			}
			else
			{
				Global_1835013 = 999;
				return true;
			}
			break;
		case 99:
			if (func_448(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				UNK_0x56218E3881C1B187(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		case 100:
			if (func_435(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_453(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						UNK_0xBC584396476EE48A(0, &Var0);
						if (UNK_0x7F8A39872A07D2CE(&(Var0.f_13), ""))
						{
							Global_968151.f_1 = -1;
						}
						else
						{
							Global_968151.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_968151.f_1 = -1;
					}
					UNK_0xC4492EA0CF4852F9();
				}
				else
				{
					Global_968151.f_1 = -1;
				}
				Global_1835013 = 999;
				func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		case 999:
			return true;
	}
	return false;
}

bool func_435(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1835013.f_211.f_36[0];
	iVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		iVar0 = iParam7;
		iVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (bParam5)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, false))
					{
						if (UNK_0xBED23E8D17964CE1(uParam2, iVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (UNK_0xDA5E71D84C8C1F25(uParam2, iVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (UNK_0x425FE0104C115EE8(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		case 1:
			if (!UNK_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		case 2:
			if (UNK_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_436(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_437(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

void func_437(var uParam0, bool bParam1, bool bParam2)
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

bool func_438()
{
	if (UNK_0x798A3F1296751F46() && !func_439())
	{
		return true;
	}
	return false;
}

bool func_439()
{
	return func_440(UNK_0xD803B885F5E47A62());
}

int func_440(int iParam0)
{
	switch (func_441(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 41:
		case 36:
		case 39:
		case 42:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_441(int iParam0)
{
	return Global_1590535[iParam0 /*876*/].f_196;
}

bool func_442()
{
	if (UNK_0xA9C9C7E04514E320() || Global_1835008)
	{
		func_443();
		return true;
	}
	return false;
}

void func_443()
{
	if (func_444(&(Global_1835008.f_1), 120000, 1))
	{
		UNK_0x8EFB4731C3DCDA55(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_366(&(Global_1835008.f_1));
	}
}

bool func_444(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_445(uParam0, bParam2, 0);
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

void func_445(var uParam0, bool bParam1, bool bParam2)
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

bool func_446()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_959568.f_8, true);
}

bool func_447()
{
	return Global_2458936.f_3;
}

bool func_448(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return true;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return true;
	}
	return false;
}

void func_449()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

bool func_450(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return UNK_0x83F946529771616E(&uParam0, 13);
}

bool func_451(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 190)
	{
		if (bParam2 == 0)
		{
			return false;
		}
	}
	if (iParam0 == 203)
	{
		if (bParam2 == 3 || bParam2 == 6)
		{
			return false;
		}
	}
	if (iParam0 == 912)
	{
		if (bParam2 == 0 || bParam2 == 3)
		{
			return false;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (bParam2 == 0 || bParam2 == 3)
		{
			return false;
		}
	}
	if (iParam0 == 791)
	{
		if (bParam2 == 4)
		{
			return false;
		}
	}
	if (iParam0 == 780)
	{
		if (bParam2 == 3)
		{
			return false;
		}
	}
	if (iParam0 == 777)
	{
		if (bParam2 == 3 || bParam2 == 7)
		{
			return false;
		}
	}
	if (iParam0 == 1200)
	{
		if (bParam2 == 4)
		{
			return false;
		}
	}
	iVar0 = UNK_0xE847F6F326D1C162(iParam0, iParam1, bParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return true;
	}
	return false;
}

bool func_452(int iParam0, bool bParam1)
{
	if (UNK_0xD3D4B12287A02195(iParam0, 4, bParam1) == 156)
	{
		return true;
	}
	switch (iParam0)
	{
		case 912:
			if (bParam1 == 5)
			{
				return true;
			}
			break;
		case 780:
			if (bParam1 == 4)
			{
				return true;
			}
			break;
		case 1200:
			if (bParam1 == 5)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_453(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

bool func_454(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (UNK_0x9555470AA3470707(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		case 1:
			if (!UNK_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		case 2:
			if (UNK_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

struct<13> func_455(bool bParam0)
{
	struct<13> Var0;

	UNK_0x379CDB376207BF68(bParam0, &Var0, 13);
	return Var0;
}

bool func_456(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return true;
	}
	return false;
}

void func_457(int iParam0, float fParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<6> Var3[3];
	struct<8> Var22[3];

	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	if (iParam2 == 1)
	{
		bVar2++;
	}
	else if (iParam2 == 2)
	{
		bVar1++;
	}
	else if (iParam2 == 3)
	{
		bVar0++;
	}
	StringCopy(&(Var22[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var22[1 /*8*/]), "Location", 32);
	StringCopy(&(Var22[2 /*8*/]), "Type", 32);
	StringCopy(&(Var3[0 /*6*/]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_01", 24);
			break;
		case 1:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_02", 24);
			break;
		case 2:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_03", 24);
			break;
		case 3:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_04", 24);
			break;
		case 4:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_05", 24);
			break;
	}
	StringCopy(&(Var3[2 /*6*/]), "StuntPlaneRace", 24);
	if (func_459(817, &Var3, &Var22, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			func_458(817, 131, -SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			func_458(817, 131, 0, 0f, 0);
		}
		func_458(817, 96, ((bVar0 * 1 + bVar1 * 2) + bVar2 * 3), 0f, 0);
		func_458(817, 2, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		func_458(817, 147, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		func_458(817, 149, 0, 0f, 0);
		func_458(817, 148, 0, 0f, 0);
		func_458(817, 109, 1, 0f, 0);
		func_458(817, 157, bVar0, 0f, 0);
		func_458(817, 158, bVar1, 0f, 0);
		func_458(817, 86, bVar2, 0f, 0);
	}
}

void func_458(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;

	if (!bParam4)
	{
		UNK_0x6106B2DBBCB1AA39(iParam1, bParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = UNK_0x3E935963A5A0820F(Global_1835013.f_142, 0);
		bVar1 = false;
		while (bVar1 < 32)
		{
			if (bVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_451(iParam0, 4, bVar1))
				{
					UNK_0x5D96D8530B3D0904(&(Global_1835013.f_142.f_2), bVar1);
				}
				else
				{
					UNK_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), bVar1);
				}
			}
			else
			{
				UNK_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), bVar1);
			}
			bVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (iParam1 == UNK_0xD3D4B12287A02195(iParam0, 4, bVar1))
		{
			bVar0 = bVar1;
			bVar1 = 32;
		}
		bVar1++;
	}
	Global_1835013.f_142.f_36[bVar0] = bParam2;
	Global_1835013.f_142.f_3[bVar0] = fParam3;
	if (bParam2 != 0)
	{
		UNK_0x5D96D8530B3D0904(&(Global_1835013.f_142.f_2), bVar0);
	}
	else if (fParam3 != 0f)
	{
		UNK_0x0674E58A79778E99(&(Global_1835013.f_142.f_2), bVar0);
	}
}

bool func_459(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;

	if (!UNK_0x58424C49F8924842())
	{
	}
	if ((!UNK_0x28B41A2A2556BCF3() && (UNK_0x8BB6DE13A9F3105E() || !UNK_0x9AE561F9BC3F06D8())) && UNK_0x393EAEC306A49C71())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (UNK_0x080E9D045AEE5605())
			{
				Var69 = { func_455(UNK_0xD803B885F5E47A62()) };
				if (UNK_0xF2EC2A39FF9E838D(&Var69))
				{
					if (UNK_0xD9DA83C40D038174(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (UNK_0x8CD06866876216F2() && Global_2458936.f_3)
			{
				UNK_0x14388B84A94BC0BD(&Var0, &(Global_1662155.f_10));
			}
			else
			{
				UNK_0x31FF86F0FD3CE715(&Var0);
			}
		}
		return true;
	}
	if (UNK_0x28B41A2A2556BCF3())
	{
	}
	if (!UNK_0x8BB6DE13A9F3105E())
	{
	}
	if (UNK_0x9AE561F9BC3F06D8())
	{
	}
	if (!UNK_0x393EAEC306A49C71())
	{
	}
	return false;
}

void func_460(int iParam0, char[4] cParam1)
{
	vector3 vVar0[24];

	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "TRIAL_01", 24);
			cParam1 = "SPTTLB_1";
			break;
		case 1:
			StringCopy(&cVar0, "TRIAL_02", 24);
			cParam1 = "SPTTLB_2";
			break;
		case 2:
			StringCopy(&cVar0, "TRIAL_03", 24);
			cParam1 = "SPTTLB_3";
			break;
		case 3:
			StringCopy(&cVar0, "TRIAL_04", 24);
			cParam1 = "SPTTLB_4";
			break;
		case 4:
			StringCopy(&cVar0, "TRIAL_05", 24);
			cParam1 = "SPTTLB_5";
			break;
	}
	func_461(&uLocal_1550, 86, &cVar0, cParam1, -1, -1, 0, 0);
}

void func_461(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	bool bVar16;
	struct<6> Var17;

	if (!UNK_0xEA6BC48857E0AC4C(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	Global_1835392.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 5;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 6;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 5;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 6;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					UNK_0x4D8EB33D0EE1D0CB(UNK_0xD803B885F5E47A62(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835392.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 4;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 0;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 0;
					Global_1835392.f_2708 = 1;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_470())
				{
					Global_1835392.f_2780.f_26 = iParam5;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			break;
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			break;
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), "CMSW", 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2710[4] = 6;
			Global_1835392.f_2708 = 5;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 6;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 6;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2710[2] = 5;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			if (UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835392.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 2;
			Global_1835392.f_2710[2] = 1;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 4;
			break;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835392.f_2780.f_9), {func_469(iParam1)}, 16);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2708 = 2;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 8;
			break;
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 0;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 1;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 2;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 0;
			Global_1835392.f_2780.f_29[3] = 0;
			break;
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 3;
			Global_1835392.f_2708 = 1;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 5;
				Global_1835392.f_2710[4] = 6;
				Global_1835392.f_2708 = 3;
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				Global_1835392.f_2780.f_28 = 6;
				Global_1835392.f_2780.f_29[0] = 5;
				Global_1835392.f_2780.f_29[1] = 11;
				Global_1835392.f_2780.f_29[2] = 4;
				Global_1835392.f_2780.f_29[3] = 5;
				Global_1835392.f_2780.f_29[4] = 5;
			}
			else if (Global_4456448.f_227 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 2;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2708 = 3;
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 2;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!UNK_0xEA6BC48857E0AC4C(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_468(Global_4456448.f_232883) || func_465(Global_4456448.f_232883))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else if (func_464(Global_4456448.f_232883))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
				}
			}
			break;
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2768), true);
			Global_1835392.f_2754[1] = -1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 11;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 3;
			Global_1835392.f_2708 = 2;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			break;
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						case 9:
							uParam0->f_44 = 966;
							break;
						case 4:
							uParam0->f_44 = 967;
							break;
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						case 2:
							uParam0->f_44 = 970;
							break;
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!UNK_0xEA6BC48857E0AC4C(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 1;
					Global_1835392.f_2708 = 4;
					UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 12;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
			}
			break;
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 4;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 17;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 4;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 2;
			Global_1835392.f_2708 = 4;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 10;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 4;
			Global_1835392.f_2710[5] = 3;
			Global_1835392.f_2708 = 6;
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 9;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			Global_1835392.f_2780.f_29[5] = 5;
			break;
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!UNK_0xEA6BC48857E0AC4C(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2708 = 1;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 1;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2709 = 6;
				Global_1835392.f_2708 = 2;
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				Global_1835392.f_2780.f_28 = 4;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 2;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 1;
				Global_1835392.f_2709 = 4;
				Global_1835392.f_2708 = 3;
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 1;
				Global_1835392.f_2780.f_29[2] = 3;
			}
			Global_1835392.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				default:
					break;
			}
			break;
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_463(iParam4)}, 8);
			Global_1835392.f_2708 = 4;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				case 9:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			Global_1835392.f_2780.f_28 = 5;
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			UNK_0x0674E58A79778E99(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 4;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 21;
			break;
	}
	bVar16 = false;
	bVar16 = false;
	while (bVar16 < Global_1835392.f_2708)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[bVar16]))
		{
			UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2770), bVar16);
		}
		bVar16++;
	}
	Global_1835392.f_2826 = func_462(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_462(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];

	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_456(iParam8))
	{
		if (bParam12)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam9, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return UNK_0x12AB0310C2281427(&cVar0);
}

struct<6> func_463(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		default:
			break;
	}
	return Var0;
}

bool func_464(int iParam0)
{
	return iParam0 == 74;
}

bool func_465(int iParam0)
{
	return (func_467(iParam0) || func_466(iParam0));
}

bool func_466(int iParam0)
{
	return iParam0 == 44;
}

bool func_467(int iParam0)
{
	return iParam0 == 45;
}

bool func_468(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_469(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

bool func_470()
{
	if (((((((((((Global_4456448.f_75705 == 1 || Global_4456448.f_75705 == 3) || Global_4456448.f_75705 == 5) || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 19) || Global_4456448.f_75705 == 8) || Global_4456448.f_75705 == 9) || Global_4456448.f_75705 == 11) || Global_4456448.f_75705 == 13) || Global_4456448.f_75705 == 21) || Global_4456448.f_75705 == 23) || Global_4456448.f_75705 == 25)
	{
		return true;
	}
	return false;
}

bool func_471(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < UNK_0xF4CCC8CB6DE7F1AE() && Global_1840924.f_2 > 0)
	{
		func_366(&Global_1840924);
		func_366(&(Global_1840924.f_49));
		*bParam0 = 0;
		Global_1840924.f_2 = 0;
		func_480(0);
	}
	Global_1840924.f_2 = UNK_0xF4CCC8CB6DE7F1AE();
	iVar1 = -1;
	if (UNK_0x33A494591F2C1975())
	{
		if (UNK_0x98DF743F0BF6732B() == 0)
		{
			iVar1 = UNK_0xFBB4B649DD3EA6F0();
		}
	}
	if ((UNK_0x33A494591F2C1975() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_478() && UNK_0x58424C49F8924842()))
	{
		if (UNK_0xACED3FBF20B322FA())
		{
			func_475(&(Global_1840924.f_3), func_477(&(Global_1840924.f_3)));
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 4))
			{
				UNK_0x5D96D8530B3D0904(bParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_473(&(Global_1840924.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, false, true, 0);
			}
			else if (iVar1 == 2)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, false, true, 0);
			}
			else if (iVar1 == 1)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, false, true, 0);
			}
			else if (iVar1 == 5)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, false, true, 0);
			}
			else if (!func_478())
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, false, true, 0);
			}
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
			{
				if (!UNK_0x06F8112AA79C53D9(2, 201))
				{
					UNK_0x5D96D8530B3D0904(bParam0, false);
				}
			}
			else if (UNK_0xB9132A06AE472728(2, 201))
			{
				func_366(&(Global_1840924.f_49));
				func_366(&Global_1840924);
				*bParam0 = 0;
				Global_1840924.f_2 = 0;
				func_480(0);
				return true;
			}
		}
	}
	else
	{
		func_475(&(Global_1840924.f_3), func_477(&(Global_1840924.f_3)));
		if ((func_472(&(Global_1840924.f_49)) && !func_444(&(Global_1840924.f_49), 2000, 1)) && !UNK_0x58424C49F8924842())
		{
			UNK_0x5D96D8530B3D0904(bParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_473(&(Global_1840924.f_3), 0);
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, 3))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, true))
			{
				UNK_0xB0A3CB46BE5B746A(0);
				UNK_0x5D96D8530B3D0904(bParam0, true);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_473(&(Global_1840924.f_3), 0);
			}
		}
		if (func_472(&Global_1840924))
		{
			if (!func_444(&Global_1840924, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!UNK_0x58424C49F8924842())
				{
					if (UNK_0x1E517F9E1F09160C())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, false, true, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, false, true, 0);
					}
					if (!UNK_0x1A72D8C9F025E5E3())
					{
						if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
						{
							if (!UNK_0x06F8112AA79C53D9(2, 201))
							{
								UNK_0x5D96D8530B3D0904(bParam0, false);
							}
						}
						else if (UNK_0xB9132A06AE472728(2, 201))
						{
							func_366(&Global_1840924);
							*bParam0 = 0;
							Global_1840924.f_2 = 0;
							func_480(0);
							return true;
						}
					}
				}
				else
				{
					func_366(&Global_1840924);
					*bParam0 = 0;
					Global_1840924.f_2 = 0;
					func_480(0);
					return true;
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(*bParam0, 3))
			{
				if (UNK_0x1E517F9E1F09160C())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, false, true, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, false, true, 0);
				}
				if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
				{
					if (!UNK_0x06F8112AA79C53D9(2, 201))
					{
						UNK_0x5D96D8530B3D0904(bParam0, false);
					}
				}
				else if (UNK_0xB9132A06AE472728(2, 201))
				{
					func_366(&(Global_1840924.f_49));
					func_366(&Global_1840924);
					*bParam0 = 0;
					Global_1840924.f_2 = 0;
					func_480(0);
					return true;
				}
			}
			else
			{
				if (UNK_0x1E517F9E1F09160C())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, false, true, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, false, true, 0);
				}
				if (!UNK_0x1A72D8C9F025E5E3())
				{
					if (!UNK_0xEAE0D21A50E6C7F4(*bParam0, false))
					{
						if (!UNK_0x06F8112AA79C53D9(2, 201))
						{
							UNK_0x5D96D8530B3D0904(bParam0, false);
						}
					}
					else if (UNK_0xB9132A06AE472728(2, 201))
					{
						func_366(&(Global_1840924.f_49));
						func_366(&Global_1840924);
						*bParam0 = 0;
						Global_1840924.f_2 = 0;
						func_480(0);
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_472(var uParam0)
{
	return uParam0->f_1;
}

void func_473(var uParam0, bool bParam1)
{
	func_474(uParam0);
	if (bParam1)
	{
		func_480(0);
	}
	uParam0->f_35 = 1;
}

void func_474(var uParam0)
{
	struct<46> Var0;

	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_475(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_476(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x6D99DF8263D35CE5(uParam0->f_33);
			UNK_0x6D99DF8263D35CE5(uParam0->f_34);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x6D99DF8263D35CE5(uParam0->f_33);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0xD06AC7C87A34A6AD(&(uParam0->f_17));
			UNK_0x6D99DF8263D35CE5(uParam0->f_33);
			UNK_0x6D99DF8263D35CE5(uParam0->f_34);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0xD06AC7C87A34A6AD(&(uParam0->f_17));
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x164431059FF80580(uParam0->f_33, 70);
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		else
		{
			UNK_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			UNK_0x9A681BEC95A1B92E(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_476(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_477(var uParam0)
{
	return uParam0->f_35;
}

bool func_478()
{
	if (func_479())
	{
		return false;
	}
	if (UNK_0xE6725CC0C55B6CA1() == 0)
	{
		return false;
	}
	return true;
}

bool func_479()
{
	return Global_2461181;
}

void func_480(bool bParam0)
{
	UNK_0xBBCE9616B024A2BF();
	if (bParam0)
	{
		UNK_0xA3B57116ADBCDF5F();
	}
}

void func_481(var uParam0, int iParam1, char[4] cParam2)
{
	func_154(&(Local_51.f_119), 1128792064 /* Float: 200f */, 1, 0, 1, 1065353216 /* Float: 1f */);
	UNK_0x3584F71E5CA29322(9);
	UNK_0x3584F71E5CA29322(7);
	func_460(iParam1, cParam2);
	func_482(uParam0, &uLocal_1550);
}

void func_482(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2[3];
	bool bVar6;
	bool bVar7;
	bool bVar8;
	char cVar9[64];
	var uVar25;
	int iVar27[3];
	bool bVar31;
	struct<13> Var32;
	var uVar45;
	vector3 vVar51[24];
	vector3 vVar57[24];
	bool bVar63;

	func_437(&(Global_1840924.f_49), 1, 0);
	UNK_0xE19C2AAC820D8ED5();
	func_543();
	func_542(0);
	UNK_0x3FC8DBCC154CA56B();
	func_540(1);
	UNK_0x3584F71E5CA29322(10);
	func_539(1);
	func_538(1);
	if (!func_439())
	{
		if (!UNK_0x562F77A7F33D2E46("LEADERBOARD_SCENE"))
		{
			UNK_0x8BC9595FD2792B5D("LEADERBOARD_SCENE");
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, 3))
	{
		*uParam0 = func_357();
		UNK_0x5D96D8530B3D0904(&(uParam1->f_42), 3);
	}
	Var32 = { func_455(UNK_0xD803B885F5E47A62()) };
	if (UNK_0x83D8570832F172A7(*uParam0))
	{
		if (((!UNK_0x999A3BFD3E9B5D2C() || !UNK_0x1963B11DE70153E0()) || (!UNK_0x8BB6DE13A9F3105E() && UNK_0x9AE561F9BC3F06D8())) || Global_1835392.f_2832 != 0)
		{
			if (!UNK_0x1963B11DE70153E0())
			{
				if (Global_1835392.f_2829 != 2)
				{
					UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
					Global_1835392.f_2829 = 2;
				}
			}
			else if (!UNK_0x8BB6DE13A9F3105E() && UNK_0x9AE561F9BC3F06D8())
			{
				if (Global_1835392.f_2829 != 3)
				{
					UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
					Global_1835392.f_2829 = 3;
				}
			}
			else if (!UNK_0x999A3BFD3E9B5D2C())
			{
				if (Global_1835392.f_2829 != 4)
				{
					UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
					Global_1835392.f_2829 = 4;
				}
			}
			else if (Global_1835392.f_2832 != 0)
			{
				if (Global_1835392.f_2829 != 5)
				{
					UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
					Global_1835392.f_2829 = 5;
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, true))
			{
				UNK_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
				UNK_0x7E60D21B163E9D56();
				func_537(*uParam0, Global_1835392.f_2780);
				if (UNK_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
				{
					if (!func_456(uParam1->f_44))
					{
						if (Global_1835392.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835392.f_2780.f_9 };
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &cVar9, Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835392.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					func_535(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
				}
				bVar31 = false;
				UNK_0x5D96D8530B3D0904(&bVar31, 4);
				func_534(*uParam0, &bVar6, bVar31, 1, 1);
				bVar31 = false;
				UNK_0x5D96D8530B3D0904(&bVar31, 5);
				func_534(*uParam0, &bVar6, bVar31, 1, 1);
				bVar31 = false;
				UNK_0x5D96D8530B3D0904(&bVar31, 6);
				func_534(*uParam0, &bVar6, bVar31, 1, 1);
				UNK_0x5D96D8530B3D0904(&(uParam1->f_42), true);
				func_533(*uParam0);
				UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
				UNK_0xA37A90C62806D848(1);
			}
			else
			{
				func_533(*uParam0);
			}
		}
		else
		{
			if (Global_1835392.f_2829 != 1)
			{
				UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
				Global_1835392.f_2829 = 1;
			}
			if (!func_505(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				UNK_0x0674E58A79778E99(&(uParam1->f_42), true);
				if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, false))
				{
					UNK_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					UNK_0x7E60D21B163E9D56();
					func_537(*uParam0, Global_1835392.f_2780);
					if (UNK_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_456(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_535(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					UNK_0x5D96D8530B3D0904(&(uParam1->f_42), false);
					UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
				}
				bVar6 = false;
				iVar0 = 0;
				if (Global_1835392.f_2825 == -1)
				{
					StringCopy(&cVar51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 4);
							func_534(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 5);
							func_534(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 6);
							func_534(*uParam0, &bVar6, bVar31, 0, 0);
						}
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 7);
						func_504(*uParam0, bVar6, bVar31, &cVar51);
						bVar6++;
						iVar0++;
					}
					Global_1835392.f_2825 = 1;
					func_366(&(Global_1835392.f_2823));
				}
				else if (func_444(&(Global_1835392.f_2823), 300, 0))
				{
					StringCopy(&cVar57, "SC_LB_DL", 24);
					StringIntConCat(&cVar57, Global_1835392.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 4);
							func_534(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 5);
							func_534(*uParam0, &bVar6, bVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							bVar31 = false;
							UNK_0x5D96D8530B3D0904(&bVar31, 6);
							func_534(*uParam0, &bVar6, bVar31, 0, 0);
						}
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 7);
						func_504(*uParam0, bVar6, bVar31, &cVar57);
						bVar6++;
						iVar0++;
					}
					Global_1835392.f_2825++;
					if (Global_1835392.f_2825 > 3)
					{
						Global_1835392.f_2825 = 0;
					}
					func_366(&(Global_1835392.f_2823));
				}
				func_533(*uParam0);
			}
			else
			{
				UNK_0x0674E58A79778E99(&(uParam1->f_42), false);
				if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, true))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					UNK_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL_SLOTS");
					UNK_0x7E60D21B163E9D56();
					func_537(*uParam0, Global_1835392.f_2780);
					if (UNK_0xEF07223F00EBE9C9(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_456(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &uVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_535(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_42, 6))
					{
						func_369(&Global_1839723);
						func_500(uParam1, &Global_1839723);
						func_499(uParam1, &Global_1839723);
					}
					bVar6 = false;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835392.f_2704[0] > 1 || (Global_1835392.f_2704[0] > 0 && Global_1835392.f_2775[0] != -1)) || (((Global_1835392.f_2704[0] > 0 && Global_1835392.f_2780.f_27) && func_456(uParam1->f_44)) && Global_1835392.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_1839723[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar27[0])
								{
									bVar31 = false;
									UNK_0x5D96D8530B3D0904(&bVar31, 4);
									func_534(*uParam0, &bVar6, bVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									bVar31 = false;
									UNK_0x5D96D8530B3D0904(&bVar31, 5);
									if ((Global_1835392.f_2704[1] < 1 && Global_1835392.f_2775[1] == -1) && !(((Global_1835392.f_2704[1] > 0 && Global_1835392.f_2780.f_27) && func_456(uParam1->f_44)) && Global_1835392.f_2775[1] != -1))
									{
										func_534(*uParam0, &bVar6, bVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_534(*uParam0, &bVar6, bVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									bVar31 = false;
									UNK_0x5D96D8530B3D0904(&bVar31, 6);
									if (!UNK_0xC2F420D189FDB329())
									{
										bVar63 = true;
									}
									else if (!UNK_0xB0D6327A81292879())
									{
										bVar63 = true;
									}
									if ((Global_1835392.f_2704[2] < 2 && Global_1835392.f_2775[2] == -1) && !(((Global_1835392.f_2704[2] > 0 && Global_1835392.f_2780.f_27) && func_456(uParam1->f_44)) && Global_1835392.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_534(*uParam0, &bVar6, bVar31, 1, 0);
									}
									else
									{
										func_534(*uParam0, &bVar6, bVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_450(Global_1839723[iVar0 /*100*/].f_32))
							{
								if (func_456(uParam1->f_44))
								{
									UNK_0x4D8EB33D0EE1D0CB(UNK_0xD803B885F5E47A62(), &uVar45);
									if (!Global_1839723[iVar0 /*100*/].f_74 && UNK_0x7F8A39872A07D2CE(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									bVar31 = false;
									if (!Global_1835392.f_2780.f_27)
									{
										if (func_498(&(Global_1839723[iVar0 /*100*/].f_32), &Var32))
										{
											UNK_0x5D96D8530B3D0904(&bVar31, true);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												UNK_0x5D96D8530B3D0904(&bVar31, 3);
											}
										}
									}
									if (func_456(uParam1->f_44))
									{
										cVar9 = { Global_1839723[iVar0 /*100*/] };
										if (!UNK_0xEA6BC48857E0AC4C(&(Global_1839723[iVar0 /*100*/].f_84)) && !UNK_0x7F8A39872A07D2CE(&(Global_1839723[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839723[iVar0 /*100*/].f_84), 64);
										}
										func_497(*uParam0, bVar6, bVar31, Global_1839723[iVar0 /*100*/].f_59, &cVar9, &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = bVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = bVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_497(*uParam0, bVar6, bVar31, Global_1839723[iVar0 /*100*/].f_59, &(Global_1839723[iVar0 /*100*/]), &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = bVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = bVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									bVar1 = false;
									while (bVar1 < Global_1835392.f_2708)
									{
										bVar8 = false;
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2770, bVar1))
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2768, bVar1))
											{
												if (Global_1835392.f_2754[bVar1] == Global_1839723[iVar0 /*100*/].f_67[bVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_491(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_67[bVar1], 0, Global_1839723[iVar0 /*100*/].f_58);
											}
											else
											{
												func_491(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_67[bVar1], Global_1839723[iVar0 /*100*/].f_74, Global_1839723[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2768, bVar1))
											{
												if (Global_1835392.f_2761[bVar1] == Global_1839723[iVar0 /*100*/].f_67[bVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_488(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_60[bVar1], 0);
											}
											else
											{
												func_488(Global_1835392.f_2780, bVar1, Global_1839723[iVar0 /*100*/].f_60[bVar1], Global_1839723[iVar0 /*100*/].f_74);
											}
										}
										bVar1++;
									}
									func_487();
									uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839723[iVar0 /*100*/].f_59 > 2)
										{
											UNK_0x5D96D8530B3D0904(&bVar31, 2);
											UNK_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_486(*uParam0, (bVar6 - 1), bVar31);
										}
									}
									bVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 4);
						func_534(*uParam0, &bVar6, bVar31, 1, 0);
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 5);
						func_534(*uParam0, &bVar6, bVar31, 1, 0);
						bVar31 = false;
						UNK_0x5D96D8530B3D0904(&bVar31, 6);
						func_534(*uParam0, &bVar6, bVar31, 1, 0);
					}
					UNK_0x5D96D8530B3D0904(&(uParam1->f_42), true);
					UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
					func_533(*uParam0);
					UNK_0xA37A90C62806D848(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835392.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							UNK_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_486(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_533(*uParam0);
					func_483(uParam0, uParam1);
				}
			}
		}
	}
}

void func_483(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;

	iVar1 = uParam1->f_246.f_1;
	if (UNK_0x91E3F625EF57450D(2))
	{
		UNK_0x5D80F91A16C40CDE();
		UNK_0x558EC149EB2BC0A2(2, 239);
		UNK_0x558EC149EB2BC0A2(2, 240);
		UNK_0x558EC149EB2BC0A2(2, 237);
		UNK_0x558EC149EB2BC0A2(2, 238);
		UNK_0x38C3A68D7861DCFD(2, 200, 1);
		if (UNK_0x7FEE810EE9E768EB(2, 241))
		{
			UNK_0x3D9702C33283E122(2, 188, 1f);
		}
		if (UNK_0x7FEE810EE9E768EB(2, 242))
		{
			UNK_0x3D9702C33283E122(2, 187, 1f);
		}
		if (UNK_0xE6CD3F2A2067C866(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					UNK_0x3D9702C33283E122(2, 217, 1f);
				}
			}
		}
	}
	if (!UNK_0x91E3F625EF57450D(2))
	{
		func_485(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_246, false))
		{
			if ((UNK_0x06F8112AA79C53D9(2, 188) || UNK_0x7FEE810EE9E768EB(2, 188)) || iVar6 < -100)
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				UNK_0x5D96D8530B3D0904(&(uParam1->f_246), false);
				func_366(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_484(uParam1, 188))
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_246), false);
		}
		if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_246, true))
		{
			if ((UNK_0x06F8112AA79C53D9(2, 187) || UNK_0x7FEE810EE9E768EB(2, 187)) || iVar6 > 100)
			{
				UNK_0x4D7F4CC43D4D0DE3(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				UNK_0x5D96D8530B3D0904(&(uParam1->f_246), true);
				func_366(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_484(uParam1, 187))
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_246), true);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_246, 3))
	{
		if ((UNK_0x06F8112AA79C53D9(2, 204) || UNK_0xD245978525608929(2, 204)) || UNK_0xBFC0798A6E3417F9(2, 237))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_246), 3);
			func_366(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_484(uParam1, 204))
	{
		UNK_0x0674E58A79778E99(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				UNK_0x0674E58A79778E99(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_486(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			UNK_0x5D96D8530B3D0904(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_486(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			UNK_0x0674E58A79778E99(&(uParam1->f_42), 2);
		}
		if (func_450(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_246, 2))
			{
				if (UNK_0x06F8112AA79C53D9(2, 217) || UNK_0xD245978525608929(2, 217))
				{
					if (!UNK_0x1A72D8C9F025E5E3())
					{
						UNK_0x4D7F4CC43D4D0DE3(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						UNK_0x5D96D8530B3D0904(&(uParam1->f_246), 2);
						UNK_0x7DA6B436D3570520(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!UNK_0x06F8112AA79C53D9(2, 217))
			{
				UNK_0x0674E58A79778E99(&(uParam1->f_246), 2);
			}
		}
	}
}

bool func_484(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam1 == 188 || iParam1 == 187)
	{
		func_485(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!UNK_0x06F8112AA79C53D9(2, iParam1) && !UNK_0x7FEE810EE9E768EB(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_444(&(uParam0->f_246.f_3), 250, 0))
		{
			return true;
		}
	}
	else if ((!UNK_0x06F8112AA79C53D9(2, iParam1) && !UNK_0x7FEE810EE9E768EB(2, iParam1)) || func_444(&(uParam0->f_246.f_3), 250, 0))
	{
		return true;
	}
	return false;
}

void func_485(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 218) * 127f));
	*iParam1 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((UNK_0x4F3973434662D795(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*iParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 218) * 127f));
			*iParam1 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((UNK_0x4B7163B4D6E4A3C2(2, 221) * 127f));
		}
	}
}

void func_486(int iParam0, bool bParam1, bool bParam2)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT_STATE");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	UNK_0x7E60D21B163E9D56();
}

void func_487()
{
	UNK_0x7E60D21B163E9D56();
}

void func_488(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, bool bParam43, bool bParam44, bool bParam45)
{
	switch (Param0.f_29[bParam43])
	{
		case 4:
			if (bParam45)
			{
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x21994591120B91F0(bParam44, 2);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 12:
			if (bParam45)
			{
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x6D99DF8263D35CE5(SYSTEM::FLOOR(bParam44));
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 18 || Param0.f_29[bParam43] == 20)
				{
					bParam44 = (bParam44 * -1f);
				}
				if (!UNK_0x8ED6EC1BDC7FE067())
				{
					if (Param0.f_29[bParam43] == 19 || Param0.f_29[bParam43] == 20)
					{
						bParam44 = func_490(bParam44);
					}
					else
					{
						bParam44 = func_489(bParam44);
					}
				}
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x21994591120B91F0(bParam44, 2);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 0:
			break;
	}
}

float func_489(bool bParam0)
{
	return (bParam0 / 0.3048f);
}

float func_490(bool bParam0)
{
	return (bParam0 / 1609.344f);
}

void func_491(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, bool bParam43, bool bParam44, bool bParam45, bool bParam46)
{
	struct<4> Var0;

	if (bParam44 == 2147483647 || bParam44 == -2147483647)
	{
		bParam45 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[bParam43])
	{
		case 5:
			if (bParam45)
			{
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x6D99DF8263D35CE5(bParam44);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 7:
			if (bParam45)
			{
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x6D99DF8263D35CE5(-bParam44);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 1:
		case 9:
		case 11:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 11 && bParam44 < 0)
				{
					bParam44 = (bParam44 * -1);
				}
				if (bParam44 >= 3600000 || bParam44 <= -3600000)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 14);
					UNK_0x779B34565F4D71B1();
				}
				else if (Param0.f_29[bParam43] == 9)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 6);
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 2055);
					UNK_0x779B34565F4D71B1();
				}
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 6:
			if (bParam45)
			{
				if (bParam44 == 2147483647)
				{
					UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
					UNK_0x779B34565F4D71B1();
				}
				else if (bParam44 >= 3600000 || bParam44 <= -3600000)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 14);
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 2055);
					UNK_0x779B34565F4D71B1();
				}
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 2:
		case 10:
			if (bParam45)
			{
				bParam44 = (bParam44 * -1);
				if (bParam44 >= 3600000 || bParam44 <= -3600000)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 14);
					UNK_0x779B34565F4D71B1();
				}
				else if (Param0.f_29[bParam43] == 10)
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 6);
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					UNK_0x7ACC3006A87F8B39("STRING");
					UNK_0x164431059FF80580(bParam44, 2055);
					UNK_0x779B34565F4D71B1();
				}
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 3:
			if (bParam46)
			{
				if (UNK_0x3FC14104C3FD24D5(bParam44))
				{
					UNK_0x7ACC3006A87F8B39("SCLB_VEH_CUST");
					UNK_0x6B012227B3921E18(UNK_0x1739BA50603D849C(bParam44));
					UNK_0x779B34565F4D71B1();
				}
				else
				{
					UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
					UNK_0x779B34565F4D71B1();
				}
			}
			else if (UNK_0x3FC14104C3FD24D5(bParam44))
			{
				UNK_0x7ACC3006A87F8B39(UNK_0x1739BA50603D849C(bParam44));
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 8:
			if (func_496(bParam44) != 0)
			{
				UNK_0x7ACC3006A87F8B39(func_493(func_496(bParam44), 0));
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam45)
			{
				if (Param0.f_29[bParam43] == 14 || Param0.f_29[bParam43] == 16)
				{
					bParam44 = (bParam44 * -1);
				}
				if (!UNK_0x8ED6EC1BDC7FE067())
				{
					if (Param0.f_29[bParam43] == 15 || Param0.f_29[bParam43] == 16)
					{
						bParam44 = SYSTEM::FLOOR(func_490(SYSTEM::TO_FLOAT(bParam44)));
					}
					else
					{
						bParam44 = SYSTEM::FLOOR(func_489(SYSTEM::TO_FLOAT(bParam44)));
					}
				}
				UNK_0x7ACC3006A87F8B39("NUMBER");
				UNK_0x6D99DF8263D35CE5(bParam44);
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 21:
			if (bParam44 > 20)
			{
				UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
				UNK_0x779B34565F4D71B1();
			}
			else
			{
				Var0 = { func_492(bParam44) };
				UNK_0x7ACC3006A87F8B39(&Var0);
				UNK_0x779B34565F4D71B1();
			}
			break;
		case 0:
			break;
	}
}

struct<4> func_492(bool bParam0)
{
	struct<4> Var0;

	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (bParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (bParam0 < 0)
	{
		bParam0 = false;
	}
	StringIntConCat(&Var0, bParam0, 16);
	return Var0;
}

char* func_493(int iParam0, bool bParam1)
{
	struct<32> Var0;

	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		case joaat("WEAPON_UNARMED"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		case joaat("WEAPON_PISTOL"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		case joaat("WEAPON_SMG"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		case joaat("WEAPON_MG"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		case joaat("WEAPON_REMOTESNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		case joaat("WEAPON_RPG"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		case joaat("WEAPON_GRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		case joaat("WEAPON_STICKYBOMB"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		case joaat("WEAPON_MOLOTOV"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		case joaat("WEAPON_STUNGUN"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		case joaat("WEAPON_PETROLCAN"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		case joaat("WEAPON_ELECTRIC_FENCE"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		case joaat("VEHICLE_WEAPON_TANK"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		case joaat("OBJECT"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		case joaat("GADGET_PARACHUTE"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		case joaat("WEAPON_KNIFE"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		case joaat("WEAPON_HAMMER"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		case joaat("WEAPON_BAT"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		case joaat("WEAPON_CROWBAR"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		case joaat("WEAPON_GOLFCLUB"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		case joaat("WEAPON_RAMMED_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		case joaat("WEAPON_BOTTLE"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		case joaat("WEAPON_GUSENBERG"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		case joaat("WEAPON_DAGGER"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		case joaat("WEAPON_FLAREGUN"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		case joaat("WEAPON_MUSKET"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		case joaat("WEAPON_FIREWORK"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		case joaat("WEAPON_PROXMINE"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		case joaat("WEAPON_HATCHET"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		case joaat("WEAPON_RAILGUN"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		case joaat("WEAPON_MACHETE"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		case joaat("WEAPON_FLASHLIGHT"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		case joaat("WEAPON_BATTLEAXE"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		case joaat("WEAPON_MINISMG"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		case joaat("WEAPON_PIPEBOMB"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		case joaat("WEAPON_POOLCUE"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		case joaat("WEAPON_WRENCH"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		case joaat("WEAPON_COUGAR"):
			return "WT_RAGE";
		case -159960575:
			return "WT_VEH_WEP";
		case joaat("WEAPON_PISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		case joaat("WEAPON_SMG_MK2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		case joaat("WEAPON_STONE_HATCHET"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		case joaat("WEAPON_RAYPISTOL"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		case joaat("WEAPON_RAYCARBINE"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		default:
			if (func_495(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_494(&(Var0.f_31));
				}
				else
				{
					return func_494(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_494(var uParam0)
{
	return uParam0;
}

int func_495(int iParam0, int iParam1)
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

int func_496(bool bParam0)
{
	if (bParam0 == 600)
	{
		return joaat("WEAPON_RAILGUN");
	}
	else if (bParam0 == 500)
	{
		return joaat("WEAPON_MINIGUN");
	}
	else if (bParam0 == 400)
	{
		return joaat("WEAPON_MG");
	}
	else if (bParam0 == 401)
	{
		return joaat("WEAPON_COMBATMG");
	}
	else if (bParam0 == 402)
	{
		return joaat("WEAPON_ASSAULTMG");
	}
	else if (bParam0 == 300)
	{
		return joaat("WEAPON_ASSAULTRIFLE");
	}
	else if (bParam0 == 301)
	{
		return joaat("WEAPON_CARBINERIFLE");
	}
	else if (bParam0 == 302)
	{
		return joaat("WEAPON_ADVANCEDRIFLE");
	}
	else if (bParam0 == 303)
	{
		return joaat("WEAPON_HEAVYRIFLE");
	}
	else if (bParam0 == 200)
	{
		return joaat("WEAPON_PUMPSHOTGUN");
	}
	else if (bParam0 == 201)
	{
		return joaat("WEAPON_SAWNOFFSHOTGUN");
	}
	else if (bParam0 == 202)
	{
		return joaat("WEAPON_ASSAULTSHOTGUN");
	}
	else if (bParam0 == 203)
	{
		return joaat("WEAPON_BULLPUPSHOTGUN");
	}
	else if (bParam0 == 100)
	{
		return joaat("WEAPON_MICROSMG");
	}
	else if (bParam0 == 101)
	{
		return joaat("WEAPON_SMG");
	}
	else if (bParam0 == 102)
	{
		return joaat("WEAPON_ASSAULTSMG");
	}
	else if (bParam0 == 0)
	{
		return joaat("WEAPON_PISTOL");
	}
	else if (bParam0 == 1)
	{
		return joaat("WEAPON_COMBATPISTOL");
	}
	else if (bParam0 == 2)
	{
		return joaat("WEAPON_APPISTOL");
	}
	else if (bParam0 == 3)
	{
		return joaat("WEAPON_PISTOL50");
	}
	return 0;
}

void func_497(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	if (bParam3 > 0)
	{
		UNK_0x7ACC3006A87F8B39("NUMBER");
		UNK_0x6D99DF8263D35CE5(bParam3);
		UNK_0x779B34565F4D71B1();
	}
	else
	{
		UNK_0x7ACC3006A87F8B39("SC_LB_EMPTY");
		UNK_0x779B34565F4D71B1();
	}
	UNK_0x045A0775396CC970(bParam4);
	UNK_0x045A0775396CC970(bParam5);
}

bool func_498(var uParam0, var uParam1)
{
	if (!func_450(*uParam0))
	{
		return false;
	}
	if (!func_450(*uParam1))
	{
		return false;
	}
	if (UNK_0x4F18738E5BDE9AC9(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

void func_499(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;

	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 5) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar77 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar77;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar77 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar77;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_500(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 5) && !UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_503(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_503(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_503(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_501(uParam1);
	}
}

void func_501(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2704[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_455(UNK_0xD803B885F5E47A62()) };
	if (UNK_0xE4F1C23C6353EC03(Global_1835392.f_2826))
	{
		iVar16 = UNK_0x9B6FABF659F515A2(Global_1835392.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_502(&Global_1839593);
				iVar2 = 0;
				UNK_0xAB008D43188476FB(Global_1835392.f_2826, iVar0, &Global_1839593);
				*(uParam0[iVar0 /*100*/]) = { Global_1839593.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839593.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839593.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839593.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839593.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839593.f_60;
				Global_1835392.f_2708 = Global_1839593.f_62;
				Global_1835392.f_2769 = Global_1839593.f_63;
				iVar2 = 0;
				if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_61, true))
				{
					iVar2 = 1;
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835392.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_61, false))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_498(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835392.f_2775[(iVar2 - 1)] = 0;
					}
				}
				bVar1 = false;
				while (bVar1 < Global_1839593.f_62)
				{
					if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_63, bVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[bVar1] = Global_1839593.f_97[bVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[bVar1] = Global_1839593.f_64[bVar1];
					}
					bVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_502(var uParam0)
{
	struct<13> Var0;
	int iVar13;

	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar13 = 0;
	while (iVar13 < 32)
	{
		uParam0->f_64[iVar13] = 0f;
		uParam0->f_97[iVar13] = 0;
		iVar13++;
	}
}

bool func_503(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;

	if (*uParam2 == 0)
	{
		if (Global_1835392[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536[iParam3 /*16*/] = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536.f_49[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_67[Global_1835392.f_2779];
			Global_1839536.f_53[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_60[Global_1835392.f_2779];
			*uParam2++;
			return true;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835392.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][Global_1835392.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return true;
		}
		else
		{
			if (Global_1835392.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_455(UNK_0xD803B885F5E47A62()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return true;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835392.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return true;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_1835392.f_2775[iParam3] + iVar0) < 12 && (Global_1835392.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return true;
			}
		}
	}
	*uParam2++;
	return false;
}

void func_504(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	UNK_0x5D96D8530B3D0904(&bParam2, 7);
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	UNK_0x7ACC3006A87F8B39(bParam3);
	UNK_0x0EF1238B8EFD4D04();
	UNK_0x7E60D21B163E9D56();
}

bool func_505(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_472(&(Global_1835392.f_2827)))
		{
			func_445(&(Global_1835392.f_2827), 1, 0);
			return false;
		}
		else if (!func_444(&(Global_1835392.f_2827), 1000, 1))
		{
			return false;
		}
	}
	if (((!UNK_0x999A3BFD3E9B5D2C() || !UNK_0x1963B11DE70153E0()) || (!UNK_0x8BB6DE13A9F3105E() && UNK_0x9AE561F9BC3F06D8())) || Global_1835392.f_2832 != 0)
	{
		UNK_0x0674E58A79778E99(&(uParam0->f_42), 4);
		return true;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 4))
	{
		func_532(uParam0);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 4);
		return false;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return true;
	}
	if (!func_530(uParam0))
	{
		return false;
	}
	if (!func_528(uParam0))
	{
		return false;
	}
	if (!func_521(uParam0))
	{
		return false;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 6))
	{
		func_369(&Global_1839723);
		func_500(uParam0, &Global_1839723);
		func_499(uParam0, &Global_1839723);
		UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 6);
	}
	if (!UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, 7))
	{
		if (!func_472(&(Global_1835392.f_2830)))
		{
			func_445(&(Global_1835392.f_2830), 1, 0);
		}
		else if (func_444(&(Global_1835392.f_2830), 30000, 1))
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 7);
		}
		if (func_518(&Global_1839723))
		{
		}
		else
		{
			return false;
		}
		if (func_515(&Global_1839723))
		{
		}
		else
		{
			return false;
		}
		if (func_509(&Global_1839723))
		{
			func_506(&Global_1839723);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 7);
			func_506(&Global_1839723);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_506(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_508(Global_1835392.f_2826);
	if (Global_1838577.f_81[iVar2] != 0)
	{
		func_507(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_502(&Global_1839593);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839593 = Global_1835392.f_2826;
			Global_1839593.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (UNK_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839593.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839593.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839593.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_450((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839593.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839593.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839593.f_62 = Global_1835392.f_2708;
			Global_1839593.f_63 = Global_1835392.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				UNK_0x5D96D8530B3D0904(&(Global_1839593.f_61), false);
			}
			else
			{
				UNK_0x0674E58A79778E99(&(Global_1839593.f_61), false);
			}
			UNK_0x5D96D8530B3D0904(&(Global_1839593.f_61), (uParam0[iVar0 /*100*/])->f_75);
			bVar1 = false;
			while (bVar1 < Global_1839593.f_62)
			{
				if (UNK_0xEAE0D21A50E6C7F4(Global_1839593.f_63, bVar1))
				{
					Global_1839593.f_97[bVar1] = (uParam0[iVar0 /*100*/])->f_67[bVar1];
				}
				else
				{
					Global_1839593.f_64[bVar1] = (uParam0[iVar0 /*100*/])->f_60[bVar1];
				}
				bVar1++;
			}
			Global_1838577.f_81[iVar2] = Global_1835392.f_2826;
			UNK_0x724501B3F806735C(&Global_1839593);
		}
		iVar0++;
	}
	Global_1838577.f_87[iVar2 /*3*/] = { func_229(UNK_0xD803B885F5E47A62()) };
}

void func_507(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1)
	{
		if (UNK_0xE4F1C23C6353EC03(Global_1838577.f_81[iParam1]))
		{
			UNK_0xCA6EE3119323E45C(Global_1838577.f_81[iParam1]);
		}
		Global_1838577.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (UNK_0xE4F1C23C6353EC03(iParam0))
		{
			UNK_0xCA6EE3119323E45C(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838577.f_81[iVar0] == iParam0)
			{
				Global_1838577.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_508(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (UNK_0xE4F1C23C6353EC03(Global_1838577.f_81[iVar0]))
		{
			iVar3 = UNK_0x4F4FEC8CCCE2C7B1(Global_1838577.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_509(var uParam0)
{
	int iVar0;
	int iVar1;

	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_513(uParam0);
			if (UNK_0x33A494591F2C1975() && !UNK_0x4DEB7B48DD0AABA4(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_450((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_512(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841022))
					{
						Global_1841022[Global_1841022.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841022.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841022.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		case 1:
			if (func_510(&((uParam0[1 /*100*/])->f_76), &(Global_1841022.f_206), &Global_1841022, &(Global_1841022.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		case 2:
			if (Global_1841022.f_206 > 12)
			{
				Global_1841022.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841022.f_206)
				{
					if (func_450((uParam0[iVar0 /*100*/])->f_32) && func_450(Global_1841022[iVar1 /*13*/]))
					{
						if (UNK_0x4F18738E5BDE9AC9(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841022[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841022.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_510(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;

	switch (*uParam0)
	{
		case 0:
			if (UNK_0x0742540F16CEE0F4())
			{
			}
			else
			{
				UNK_0x7BF88BC97F9C422A();
				UNK_0x6CEC2945A313AD9E(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		case 1:
			if (!UNK_0x0742540F16CEE0F4())
			{
				if (UNK_0x812FCD8C479A4733())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		case 2:
			iVar35 = 0;
			while (iVar35 < *uParam1)
			{
				if (UNK_0x794D5DBA715427A2(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_511(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (UNK_0x0742540F16CEE0F4())
			{
				UNK_0x47B6D760F5574870();
			}
			else
			{
				UNK_0x7BF88BC97F9C422A();
			}
			*uParam0 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

void func_511(var uParam0, char* sParam1)
{
	UNK_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

bool func_512(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_450(*(uParam1[iVar0 /*13*/])))
		{
			if (UNK_0x4F18738E5BDE9AC9(uParam0, uParam1[iVar0 /*13*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_513(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_514(&(Global_1841022[iVar0 /*13*/]));
		StringCopy(&(Global_1841022.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!UNK_0x0742540F16CEE0F4())
		{
			UNK_0x7BF88BC97F9C422A();
		}
	}
	if (UNK_0x0742540F16CEE0F4())
	{
		UNK_0x47B6D760F5574870();
	}
	Global_1841022.f_206 = 0;
}

void func_514(var uParam0)
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

bool func_515(var uParam0)
{
	int iVar0;

	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return true;
	}
	else if (UNK_0xDC30EF462887322E() || UNK_0x33A494591F2C1975())
	{
		if (!func_517(uParam0))
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_516(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return false;
			}
			iVar0++;
		}
	}
	return true;
}

bool func_516(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return true;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_450(*uParam1))
			{
				if (!UNK_0x60F025D317CE2512(uParam1))
				{
					if (UNK_0xDC30EF462887322E() || UNK_0x33A494591F2C1975())
					{
						if (UNK_0x341C9B6377CAD883(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (UNK_0xA3F916BCE430ED26())
					{
						if (UNK_0x341C9B6377CAD883(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, UNK_0xD7926DA4168DF7E1(uParam1), 64);
						if (UNK_0xBA301E03A078FA59())
						{
						}
						else if (UNK_0x33A494591F2C1975())
						{
						}
						else if (UNK_0x0EFF6B4415DAF4A1())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		case 1:
			if (!UNK_0x60F025D317CE2512(uParam1))
			{
				if (!UNK_0xE13B4B9D87E527E9())
				{
					if (UNK_0xD0FC7E8A7D86B46C())
					{
						StringCopy(sParam2, UNK_0xD7926DA4168DF7E1(uParam1), 64);
					}
					*uParam0 = 2;
					return true;
				}
			}
			else
			{
				StringCopy(sParam2, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_517(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!UNK_0xDC30EF462887322E() && !UNK_0x33A494591F2C1975())
	{
		return true;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return true;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835392.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835392.f_2833[iVar1 /*16*/]), "", 64);
				func_514(&(Global_1835392.f_3026[iVar1 /*13*/]));
				if (func_450((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835392.f_3026[Global_1835392.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835392.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835392.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = UNK_0x3F4BBF0887AB451C(&(Global_1835392.f_3026), Global_1835392.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		case 1:
			iVar0 = UNK_0x1C71EF085035D439((uParam0[0 /*100*/])->f_79, &(Global_1835392.f_2833), Global_1835392.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_450((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835392.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return false;
			}
			break;
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return true;
	}
	return false;
}

bool func_518(var uParam0)
{
	int iVar0;

	if (UNK_0xDC30EF462887322E() || UNK_0x33A494591F2C1975())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_520(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835392.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return false;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_519(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return false;
			}
			iVar0++;
		}
	}
	return true;
}

bool func_519(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;

	if (*uParam0 == 2)
	{
		return true;
	}
	else if (UNK_0xEA6BC48857E0AC4C(&uParam1))
	{
		*uParam0 = 2;
		return true;
	}
	UNK_0x4DA27762188F26CD(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_450(Var0))
			{
				if (!UNK_0x60F025D317CE2512(&Var0))
				{
					if ((UNK_0xA3F916BCE430ED26() || UNK_0xDC30EF462887322E()) || UNK_0x33A494591F2C1975())
					{
						if (UNK_0x341C9B6377CAD883(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, UNK_0xD7926DA4168DF7E1(&Var0), 64);
						if (UNK_0xBA301E03A078FA59())
						{
						}
						else if (UNK_0x33A494591F2C1975())
						{
						}
						else if (UNK_0x0EFF6B4415DAF4A1())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		case 1:
			if (!UNK_0x60F025D317CE2512(&Var0))
			{
				if (!UNK_0xE13B4B9D87E527E9())
				{
					if (UNK_0xD0FC7E8A7D86B46C())
					{
						StringCopy(sParam17, UNK_0xD7926DA4168DF7E1(&Var0), 64);
					}
					*uParam0 = 2;
					return true;
				}
			}
			else
			{
				StringCopy(sParam17, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_520(var uParam0, bool bParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];

	if (!UNK_0xDC30EF462887322E() && !UNK_0x33A494591F2C1975())
	{
		return true;
	}
	if (*uParam0 == 2)
	{
		return true;
	}
	else if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		*uParam0 = 2;
		return true;
	}
	UNK_0x4DA27762188F26CD(bParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_450(Var1[0 /*13*/]))
			{
				if (!UNK_0x60F025D317CE2512(&(Var1[0 /*13*/])))
				{
					*uParam4 = UNK_0x3F4BBF0887AB451C(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, UNK_0x6E524813889AECF8(UNK_0xE7A1FE6C75BB88BA(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		case 1:
			iVar0 = UNK_0x1C71EF085035D439(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return false;
			}
			break;
		case 2:
			*uParam4 = -1;
			return true;
	}
	return false;
}

bool func_521(var uParam0)
{
	struct<97> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	bool bVar113;
	bool bVar114;
	int iVar115;
	struct<13> Var116;

	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	bVar113 = 2;
	Var116 = { func_455(UNK_0xD803B885F5E47A62()) };
	switch ((*uParam0)[bVar113])
	{
		case 0:
			Global_1835392.f_2775[bVar113] = -1;
			Global_1835392.f_2704[bVar113] = 0;
			Global_1835013.f_374 = -1;
			if (UNK_0x080E9D045AEE5605())
			{
				if (UNK_0xF2EC2A39FF9E838D(&Var116))
				{
					if (UNK_0xD9DA83C40D038174(&(uParam0->f_7), 35, &Var116))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[bVar113] = 1;
						return false;
					}
				}
				else
				{
					(*uParam0)[bVar113] = 3;
					return true;
				}
			}
			else
			{
				(*uParam0)[bVar113] = 3;
				return true;
			}
			break;
		case 1:
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_435(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_527(), 0, 0, 0))
			{
				func_453(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_527())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								UNK_0xBC584396476EE48A(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_498(&Var0, &Var116) || func_498(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, false))
									{
										if (Global_1835013.f_211.f_36[0] >= UNK_0x14B893B11D05C490(iVar111, false))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= UNK_0x1969161BAC0006D6(iVar111, false))
									{
										iVar109 = iVar111;
									}
								}
								func_526(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						UNK_0xBC584396476EE48A(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835392.f_2704[bVar113] < 11)
							{
								if (func_527() && iVar109 == 0)
								{
									func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Var0.f_96);
									Global_1835392.f_2775[bVar113] = 0;
									Global_1835392.f_2704[bVar113]++;
								}
								if (func_527() && (func_498(&Var0, &Var116) || func_498(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_498(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835392.f_2775[bVar113] = 0;
									}
									MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = Var0.f_96;
									if (func_524(uParam0->f_44))
									{
										iVar108 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_456(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_67[iVar107] = UNK_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_60[iVar107] = UNK_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									Global_1835392.f_2704[bVar113]++;
								}
								bVar112 = true;
							}
						}
						if (!bVar112)
						{
							Global_1835392.f_2704[bVar113]++;
						}
						if (!func_527())
						{
							iVar109 = Var98.f_5;
						}
						if (iVar109 > 6)
						{
							iVar110 = (iVar109 - 6);
						}
						else if (bVar112)
						{
							iVar110 = 1;
						}
						else
						{
							iVar110 = 0;
						}
						iVar111 = iVar110;
						func_526(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							UNK_0xBC584396476EE48A(iVar111, &Var0);
							if (Global_1835392.f_2704[bVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_527() && iVar109 == iVar111)
								{
									if (!func_498(&(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Var0.f_96);
										Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
										Global_1835392.f_2704[bVar113]++;
									}
								}
								if (func_527() && (func_498(&Var0, &Var116) || func_498(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[bVar113] < 11)
								{
									if (func_450(Var0) && !func_498(&Var0, &(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_498(&Var0, &Var116))
										{
											if (Global_1835392.f_2775[bVar113] < 0)
											{
												Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
											}
										}
										MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
										Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = Var0.f_96;
										Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_74 = 1;
										if (func_524(uParam0->f_44))
										{
											iVar108 = UNK_0x14B893B11D05C490(iVar111, Global_1835392.f_2709);
											if (iVar108 == 1)
											{
												Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_67[iVar106] = UNK_0x14B893B11D05C490(iVar111, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_60[iVar106] = UNK_0x1969161BAC0006D6(iVar111, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[bVar113]++;
									}
								}
							}
							func_526(&Var0);
							iVar111++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835392.f_2775[bVar113] == -1 && func_527())
							{
								if (Global_1835392.f_2704[bVar113] >= 1)
								{
									func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
								}
								Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
								Global_1835392.f_2704[bVar113]++;
							}
							(*uParam0)[bVar113] = 3;
						}
						else
						{
							(*uParam0)[bVar113] = 2;
						}
					}
					else
					{
						if (!bVar112)
						{
							Global_1835392.f_2704[bVar113]++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[bVar113] = -1;
						(*uParam0)[bVar113] = 2;
					}
				}
				else
				{
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[bVar113] = -1;
					(*uParam0)[bVar113] = 2;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar113);
				}
			}
			break;
		case 2:
			if (Global_1835392.f_2775[bVar113] == -1)
			{
				iVar115 = 11;
			}
			else
			{
				iVar115 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_523(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_453(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							UNK_0xBC584396476EE48A(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835392[bVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[bVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835392.f_2704[bVar113] < 11 || bVar114)
							{
								if (func_527() && (func_498(&Var0, &Var116) || func_498(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835392[bVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835392[bVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835392[bVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_524(uParam0->f_44))
									{
										iVar108 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[bVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[bVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_456(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[bVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[bVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[bVar113 /*901*/][0 /*75*/].f_67[iVar107] = UNK_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[bVar113 /*901*/][0 /*75*/].f_60[iVar107] = UNK_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (Global_1835392.f_2704[bVar113] == 0)
									{
										if (bVar114)
										{
										}
										else
										{
											Global_1835392.f_2704[bVar113]++;
										}
									}
								}
								else if (Global_1835392.f_2704[bVar113] < 11)
								{
									MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
									if (func_524(uParam0->f_44))
									{
										iVar108 = UNK_0x14B893B11D05C490(iVar106, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_456(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_67[iVar107] = UNK_0x14B893B11D05C490(iVar106, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_60[iVar107] = UNK_0x1969161BAC0006D6(iVar106, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835392.f_2704[bVar113]++;
									}
								}
							}
							func_526(&Var0);
							iVar106++;
						}
					}
					UNK_0xC4492EA0CF4852F9();
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[bVar113] = 3;
				}
				else
				{
					UNK_0xC4492EA0CF4852F9();
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar113);
					Global_1835392.f_2704[bVar113] = 0;
					(*uParam0)[bVar113] = 3;
				}
				if (Global_1835392.f_2775[bVar113] == -1 && func_527())
				{
					if (Global_1835392.f_2704[bVar113] >= 1)
					{
						func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
					}
					Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
					Global_1835392.f_2704[bVar113]++;
				}
			}
			break;
		case 3:
			func_522(bVar113, Global_1835013.f_374);
			(*uParam0)[bVar113] = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

void func_522(bool bParam0, int iParam1)
{
	int iVar0;

	if ((func_527() && Global_1835392.f_2704[bParam0] > Global_1835392.f_2775[bParam0]) && Global_1835392.f_2775[bParam0] >= 0)
	{
		if (iParam1 != Global_1835392[bParam0 /*901*/][Global_1835392.f_2775[bParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835392.f_2704[bParam0])
			{
				if (iVar0 != Global_1835392.f_2775[bParam0])
				{
					if (Global_1835392[bParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835392[bParam0 /*901*/][Global_1835392.f_2775[bParam0] /*75*/].f_59)
					{
						if (Global_1835392[bParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835392[bParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_527())
		{
		}
		if (Global_1835392.f_2704[bParam0] <= Global_1835392.f_2775[bParam0])
		{
		}
		if (Global_1835392.f_2775[bParam0] < 0)
		{
		}
	}
}

bool func_523(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (UNK_0xDF496D8EA2986832(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		case 1:
			if (!UNK_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		case 2:
			if (UNK_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_524(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return true;
	}
	return false;
}

void func_525(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_456(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, UNK_0x6E524813889AECF8(UNK_0xD803B885F5E47A62()), 64);
		sParam1->f_32 = { func_455(UNK_0xD803B885F5E47A62()) };
	}
	sParam1->f_59 = iParam2;
	if (func_524(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835392.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835392.f_2708)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, Global_1835392.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835392.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835392.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_526(var uParam0)
{
	int iVar0;

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
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

bool func_527()
{
	if (Global_1835388 && Global_1835389)
	{
		return true;
	}
	return false;
}

bool func_528(var uParam0)
{
	struct<20> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	bool bVar113;
	struct<13> Var114;

	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	bVar113 = true;
	Var114 = { func_455(UNK_0xD803B885F5E47A62()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = UNK_0xB552DC43762F9C85();
			Global_1835392.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835392.f_2704[bVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_527())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_529(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_453(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var98))
					{
						if (func_527())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									UNK_0xBC584396476EE48A(iVar110, &Var0);
									if (func_456(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_498(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, false))
									{
										if (Global_1835013.f_211.f_36[0] >= UNK_0x14B893B11D05C490(iVar110, false))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= UNK_0x1969161BAC0006D6(iVar110, false))
									{
										iVar108 = iVar110;
									}
									func_526(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_527() && iVar108 == 0)
						{
							if (Global_1835392.f_2704[bVar113] < 11)
							{
								func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
								Global_1835392.f_2775[bVar113] = 0;
								Global_1835392.f_2704[bVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							UNK_0xBC584396476EE48A(0, &Var0);
							if (func_527() && (func_498(&Var0, &Var114) || func_498(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_450(Var0) && Global_1835392.f_2704[bVar113] < 11)
							{
								if (func_498(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835392.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_32 = { Var0 };
								Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_59 = 1;
								if (func_524(uParam0->f_44))
								{
									iVar111 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
									if (iVar111 == 1)
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_456(uParam0->f_44))
								{
									MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835392.f_2708)
								{
									if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_67[iVar106] = UNK_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar106]);
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[bVar113] /*75*/].f_60[iVar106] = UNK_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835392.f_2704[1]++;
							}
							else
							{
								func_526(&Var0);
								UNK_0xC4492EA0CF4852F9();
								func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835392.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835392.f_2775[bVar113] == -1 && func_527())
								{
									if (Global_1835392.f_2704[bVar113] >= 1)
									{
										func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
									}
									Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
									Global_1835392.f_2704[bVar113]++;
								}
								return false;
							}
							func_526(&Var0);
						}
						else
						{
							Global_1835392.f_2704[1] = 0;
							func_526(&Var0);
							UNK_0xC4492EA0CF4852F9();
							func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835392.f_2775[bVar113] == -1 && func_527())
							{
								if (Global_1835392.f_2704[bVar113] >= 1)
								{
									func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
								}
								Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
								Global_1835392.f_2704[bVar113]++;
							}
							(*uParam0)[1] = 1;
							return false;
						}
						if (!func_527())
						{
							iVar108 = Var98.f_5;
						}
						if (iVar108 > 6)
						{
							iVar109 = (iVar108 - 6);
						}
						else
						{
							iVar109 = 1;
						}
						iVar110 = iVar109;
						iVar110 = iVar109;
						while (iVar110 <= (Var98.f_3 - 1))
						{
							UNK_0xBC584396476EE48A(iVar110, &Var0);
							if (Global_1835392.f_2704[bVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_527() && iVar108 == iVar110)
								{
									if (!func_498(&(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Var0.f_96);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
										Global_1835392.f_2704[bVar113]++;
									}
								}
								if (func_527() && (func_498(&Var0, &Var114) || func_498(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[1] < 12)
								{
									if (func_450(Var0) && !func_498(&Var0, &(Global_1835392[bVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_498(&Var0, &Var114))
										{
											if (Global_1835392.f_2775[1] < 0)
											{
												Global_1835392.f_2775[1] = Global_1835392.f_2704[1];
											}
										}
										MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_74 = 1;
										if (func_524(uParam0->f_44))
										{
											iVar111 = UNK_0x14B893B11D05C490(iVar110, Global_1835392.f_2709);
											if (iVar111 == 1)
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_67[iVar106] = UNK_0x14B893B11D05C490(iVar110, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_60[iVar106] = UNK_0x1969161BAC0006D6(iVar110, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[1]++;
									}
								}
							}
							func_526(&Var0);
							iVar110++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835392.f_2775[bVar113] == -1 && func_527())
						{
							if (Global_1835392.f_2704[bVar113] >= 1)
							{
								func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), Global_1835392[bVar113 /*901*/][(Global_1835392.f_2704[bVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_525(uParam0, &(Global_1835392[bVar113 /*901*/][Global_1835392.f_2704[bVar113] /*75*/]), 1);
							}
							Global_1835392.f_2775[bVar113] = Global_1835392.f_2704[bVar113];
							Global_1835392.f_2704[bVar113]++;
						}
						return false;
					}
					else
					{
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), true);
						return false;
					}
				}
			}
			else
			{
				func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835392.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return false;
			}
			break;
		case 1:
			func_522(bVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_529(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		case 1:
			if (!UNK_0x8E34048B25BE0C5B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		case 2:
			if (UNK_0x4BB70B0763ADC5AC(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_530(var uParam0)
{
	struct<13> Var0;
	struct<97> Var13;
	struct<6> Var111;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	bool bVar125;
	bool bVar126;
	bool bVar127;
	int iVar128;

	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	bVar126 = false;
	Var0 = { func_455(UNK_0xD803B885F5E47A62()) };
	switch ((*uParam0)[bVar126])
	{
		case 0:
			Global_1835392.f_2775[bVar126] = -1;
			Global_1835392.f_2704[bVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_531(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_435(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_527(), 0, 0, 0))
			{
				func_453(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_527())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								UNK_0xBC584396476EE48A(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_498(&Var13, &Var0) || func_498(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (UNK_0xEAE0D21A50E6C7F4(Global_1835013.f_142.f_2, false))
									{
										if (Global_1835013.f_211.f_36[0] >= UNK_0x14B893B11D05C490(iVar124, false))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= UNK_0x1969161BAC0006D6(iVar124, false))
									{
										iVar122 = iVar124;
									}
								}
								func_526(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						UNK_0xBC584396476EE48A(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835392.f_2704[bVar126] < 11)
							{
								if (func_527() && iVar122 == 0)
								{
									func_525(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Var13.f_96);
									Global_1835392.f_2775[bVar126] = 0;
									Global_1835392.f_2704[bVar126]++;
								}
								if (func_527() && (func_498(&Var13, &Var0) || func_498(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_498(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835392.f_2775[bVar126] = 0;
									}
									MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_32 = { Var13 };
									Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_59 = Var13.f_96;
									if (func_524(uParam0->f_44))
									{
										iVar121 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
										if (iVar121 == 1)
										{
											Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_456(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835392.f_2708)
									{
										if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
										{
											Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_67[iVar119] = UNK_0x14B893B11D05C490(0, Global_1835392.f_2710[iVar119]);
										}
										else
										{
											Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_60[iVar119] = UNK_0x1969161BAC0006D6(0, Global_1835392.f_2710[iVar119]);
										}
										iVar119++;
									}
									Global_1835392.f_2704[bVar126]++;
								}
								bVar125 = true;
							}
						}
						if (!bVar125)
						{
							Global_1835392.f_2704[bVar126]++;
						}
						if (!func_527())
						{
							iVar122 = Var111.f_5;
						}
						if (iVar122 > 6)
						{
							iVar123 = (iVar122 - 6);
						}
						else if (bVar125)
						{
							iVar123 = 1;
						}
						else
						{
							iVar123 = 0;
						}
						iVar124 = iVar123;
						func_526(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							UNK_0xBC584396476EE48A(iVar124, &Var13);
							if (Global_1835392.f_2704[bVar126] < 11 && Var13.f_96 > 1)
							{
								if (func_527() && iVar122 == iVar124)
								{
									if (!func_498(&(Global_1835392[bVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_525(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Var13.f_96);
										Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
										Global_1835392.f_2704[bVar126]++;
									}
								}
								if (func_527() && (func_498(&Var13, &Var0) || func_498(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[bVar126] < 11)
								{
									if (func_450(Var13) && !func_498(&(Global_1835392[bVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_498(&Var13, &Var0))
										{
											if (Global_1835392.f_2775[bVar126] < 0)
											{
												Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
											}
										}
										MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_32 = { Var13 };
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_74 = 1;
										if (func_524(uParam0->f_44))
										{
											iVar121 = UNK_0x14B893B11D05C490(iVar124, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_67[iVar119] = UNK_0x14B893B11D05C490(iVar124, Global_1835392.f_2710[iVar119]);
											}
											else
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_60[iVar119] = UNK_0x1969161BAC0006D6(iVar124, Global_1835392.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835392.f_2704[bVar126]++;
									}
								}
							}
							func_526(&Var13);
							iVar124++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835392.f_2775[bVar126] == -1 && func_527())
							{
								if (Global_1835392.f_2704[bVar126] >= 1)
								{
									func_525(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Global_1835392[bVar126 /*901*/][(Global_1835392.f_2704[bVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_525(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), 1);
								}
								Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
								Global_1835392.f_2704[bVar126]++;
							}
							(*uParam0)[bVar126] = 2;
						}
						else
						{
							(*uParam0)[bVar126] = 1;
						}
					}
					else
					{
						if (!bVar125)
						{
							Global_1835392.f_2704[bVar126]++;
						}
						UNK_0xC4492EA0CF4852F9();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[bVar126] = -1;
						(*uParam0)[bVar126] = 1;
					}
				}
				else
				{
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[bVar126] = -1;
					(*uParam0)[bVar126] = 1;
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar126);
				}
			}
			break;
		case 1:
			if (Global_1835392.f_2775[bVar126] == -1)
			{
				iVar128 = 11;
			}
			else
			{
				iVar128 = 1;
			}
			if (func_523(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_453(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && UNK_0x54F772BC86327092(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							UNK_0xBC584396476EE48A(iVar119, &Var13);
							if (func_527() && (func_498(&Var13, &Var0) || func_498(&Var13, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar127 = false;
								if (Global_1835392[bVar126 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[bVar126 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar127 = true;
								}
								if (Global_1835392.f_2704[bVar126] < 11 || bVar127)
								{
									if (iVar119 == 0 || bVar127)
									{
										MemCopy(&(Global_1835392[bVar126 /*901*/][0 /*75*/]), {Var13.f_13}, 16);
										Global_1835392[bVar126 /*901*/][0 /*75*/].f_32 = { Var13 };
										Global_1835392[bVar126 /*901*/][0 /*75*/].f_59 = Var13.f_96;
										if (func_524(uParam0->f_44))
										{
											iVar121 = UNK_0x14B893B11D05C490(0, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[bVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[bVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[bVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[bVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[bVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = UNK_0x14B893B11D05C490(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[bVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = UNK_0x1969161BAC0006D6(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (Global_1835392.f_2704[bVar126] == 0)
										{
											if (bVar127)
											{
											}
											else
											{
												Global_1835392.f_2704[bVar126]++;
											}
										}
										else if (Global_1835392.f_2704[bVar126] == 1 && Global_1835392.f_2775[bVar126] == -1)
										{
											Global_1835392.f_2704[bVar126]++;
										}
									}
									else if (Global_1835392.f_2704[bVar126] < 11)
									{
										MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_32 = { Var13 };
										if (func_524(uParam0->f_44))
										{
											iVar121 = UNK_0x14B893B11D05C490(iVar119, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (UNK_0xEAE0D21A50E6C7F4(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_67[iVar120] = UNK_0x14B893B11D05C490(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/].f_60[iVar120] = UNK_0x1969161BAC0006D6(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (iVar119 != 0)
										{
											Global_1835392.f_2704[bVar126]++;
										}
									}
								}
							}
							func_526(&Var13);
							iVar119++;
						}
					}
					UNK_0xC4492EA0CF4852F9();
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[bVar126] = 2;
				}
				else
				{
					UNK_0x5D96D8530B3D0904(&(Global_1835392.f_2832), bVar126);
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2704[bVar126] = 0;
					(*uParam0)[bVar126] = 2;
					Global_1835392.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835392.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835392.f_2775[bVar126] == -1 && func_527())
			{
				if (Global_1835392.f_2704[bVar126] >= 1)
				{
					func_525(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), Global_1835392[bVar126 /*901*/][(Global_1835392.f_2704[bVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_525(uParam0, &(Global_1835392[bVar126 /*901*/][Global_1835392.f_2704[bVar126] /*75*/]), 1);
				}
				Global_1835392.f_2775[bVar126] = Global_1835392.f_2704[bVar126];
				Global_1835392.f_2704[bVar126]++;
			}
			break;
		case 2:
			func_522(bVar126, Global_1835013.f_374);
			(*uParam0)[bVar126] = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_531(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	int iVar0;

	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!UNK_0x7F8A39872A07D2CE(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !UNK_0x7F8A39872A07D2CE(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return false;
						}
						iVar0++;
					}
					return true;
				}
			}
		}
	}
	return false;
}

void func_532(var uParam0)
{
	int iVar0;

	if (UNK_0xE4F1C23C6353EC03(Global_1835392.f_2826))
	{
		iVar0 = UNK_0x4F4FEC8CCCE2C7B1(Global_1835392.f_2826);
		if (iVar0 < 300000)
		{
			UNK_0x5D96D8530B3D0904(&(uParam0->f_42), 5);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam0->f_42), 5);
			func_507(Global_1835392.f_2826, -1);
		}
	}
}

void func_533(int iParam0)
{
	if (UNK_0x83D8570832F172A7(iParam0))
	{
		UNK_0x6567AE843FADBA94(iParam0, 255, 255, 255, false, 0);
	}
}

void func_534(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<2> Var1;
	struct<16> Var36;
	bool bVar52;
	struct<13> Var53;
	bool bVar66;
	struct<13> Var67;
	bool bVar80;

	bVar0 = "";
	if (UNK_0xEAE0D21A50E6C7F4(bParam2, 4))
	{
		bVar0 = "SCLB_GLOBAL";
	}
	else if (UNK_0xEAE0D21A50E6C7F4(bParam2, 5))
	{
		*bParam1++;
		bVar0 = "SCLB_FRIENDS";
	}
	else if (UNK_0xEAE0D21A50E6C7F4(bParam2, 6))
	{
		*bParam1++;
		if (UNK_0x58424C49F8924842() && UNK_0x080E9D045AEE5605())
		{
			if (UNK_0x33A494591F2C1975() && !UNK_0x4DEB7B48DD0AABA4(0))
			{
				bVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_455(UNK_0xD803B885F5E47A62()) };
				if (UNK_0xF2EC2A39FF9E838D(&Var53))
				{
					UNK_0xD9DA83C40D038174(&Var1, 35, &Var53);
					if (!UNK_0xEA6BC48857E0AC4C(&(Var1.f_1)))
					{
						bVar0 = "STRING";
						Var36 = { Var1.f_1 };
						bVar52 = true;
					}
					else
					{
						bVar0 = "SCLB_CREW";
					}
				}
				else
				{
					bVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			bVar0 = "SCLB_CREW";
		}
	}
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
	UNK_0x3CAEA85DA607305E(*bParam1);
	UNK_0x3CAEA85DA607305E(bParam2);
	if (bVar52)
	{
		UNK_0x7ACC3006A87F8B39(bVar0);
		UNK_0x0D45A7AB73600CFA(&Var36);
		UNK_0x779B34565F4D71B1();
	}
	else
	{
		UNK_0x7ACC3006A87F8B39(bVar0);
		UNK_0x779B34565F4D71B1();
	}
	UNK_0x7E60D21B163E9D56();
	*bParam1++;
	if (bParam4)
	{
		bVar66 = false;
		UNK_0x5D96D8530B3D0904(&bVar66, 7);
		UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
		UNK_0x3CAEA85DA607305E(*bParam1);
		UNK_0x3CAEA85DA607305E(bVar66);
		if (!UNK_0x58424C49F8924842())
		{
			bVar0 = "SCLB_NOT_ONL";
		}
		else if (!UNK_0x999A3BFD3E9B5D2C())
		{
			bVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835392.f_2832 != 0)
		{
			bVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			bVar0 = "HUD_PERM";
		}
		UNK_0x7ACC3006A87F8B39(bVar0);
		UNK_0x0EF1238B8EFD4D04();
		UNK_0x7E60D21B163E9D56();
		*bParam1++;
	}
	else if (bParam3)
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam2, 4))
		{
			bVar0 = "SCLB_NO_GLOBAL";
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bParam2, 5))
		{
			if (UNK_0xB552DC43762F9C85() > 0)
			{
				bVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				bVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (UNK_0xEAE0D21A50E6C7F4(bParam2, 6))
		{
			if (UNK_0xC2F420D189FDB329())
			{
				if (UNK_0xB0D6327A81292879())
				{
					if (UNK_0x58424C49F8924842() && UNK_0x080E9D045AEE5605())
					{
						if (UNK_0x33A494591F2C1975() && !UNK_0x4DEB7B48DD0AABA4(0))
						{
							bVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_455(UNK_0xD803B885F5E47A62()) };
							if (UNK_0xF2EC2A39FF9E838D(&Var67))
							{
								UNK_0xD9DA83C40D038174(&Var1, 35, &Var67);
								if (!UNK_0xEA6BC48857E0AC4C(&(Var1.f_1)))
								{
									bVar0 = "SCLB_NO_CREWb";
									Var36 = { Var1.f_1 };
									bVar52 = true;
								}
								else
								{
									bVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								bVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						bVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					bVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				bVar0 = "SCLB_NO_CREWd";
			}
		}
		bVar80 = false;
		UNK_0x5D96D8530B3D0904(&bVar80, 7);
		UNK_0x7E60C62A7CE58FC8(iParam0, "SET_SLOT");
		UNK_0x3CAEA85DA607305E(*bParam1);
		UNK_0x3CAEA85DA607305E(bVar80);
		if (bVar52)
		{
			UNK_0x7ACC3006A87F8B39(bVar0);
			UNK_0x0D45A7AB73600CFA(&Var36);
			UNK_0x0EF1238B8EFD4D04();
		}
		else
		{
			UNK_0x7ACC3006A87F8B39(bVar0);
			UNK_0x0EF1238B8EFD4D04();
		}
		UNK_0x7E60D21B163E9D56();
		*bParam1++;
	}
}

void func_535(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;

	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_TITLE");
	UNK_0x7ACC3006A87F8B39(bParam1);
	UNK_0x779B34565F4D71B1();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		UNK_0x7ACC3006A87F8B39(uParam2[iVar0 /*6*/]);
		UNK_0x779B34565F4D71B1();
		iVar0++;
	}
	UNK_0x7E60D21B163E9D56();
}

void func_536(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_MULTIPLAYER_TITLE");
	UNK_0x7ACC3006A87F8B39(bParam1);
	if (!UNK_0xEA6BC48857E0AC4C(bParam2))
	{
		UNK_0x6B012227B3921E18(bParam2);
	}
	if (bParam5 == -1)
	{
		if (bParam4)
		{
			if (!UNK_0xEA6BC48857E0AC4C(bParam3))
			{
				UNK_0x0D45A7AB73600CFA(bParam3);
			}
		}
		else if (!UNK_0xEA6BC48857E0AC4C(bParam3))
		{
			UNK_0x6B012227B3921E18(bParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!UNK_0xEA6BC48857E0AC4C(bParam3))
			{
				UNK_0x0D45A7AB73600CFA(bParam3);
			}
		}
		else if (!UNK_0xEA6BC48857E0AC4C(bParam3))
		{
			UNK_0x6B012227B3921E18(bParam3);
		}
		UNK_0x6D99DF8263D35CE5(bParam5);
	}
	UNK_0x779B34565F4D71B1();
	UNK_0x7E60D21B163E9D56();
}

void func_537(int iParam0, bool bParam1)
{
	UNK_0x7E60C62A7CE58FC8(iParam0, "SET_DISPLAY_TYPE");
	UNK_0x3CAEA85DA607305E(bParam1);
	UNK_0x7E60D21B163E9D56();
}

void func_538(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_539(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_540(bool bParam0)
{
	if (bParam0)
	{
		func_543();
	}
	func_541(4, -1);
	func_541(6, -1);
	func_541(7, -1);
	func_541(3, -1);
	func_541(1, -1);
	func_541(2, -1);
	func_541(11, -1);
	func_541(13, -1);
	func_541(14, -1);
	func_541(16, -1);
}

void func_541(bool bParam0, int iParam1)
{
	UNK_0x5D96D8530B3D0904(&(Global_1377170.f_1047), bParam0);
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377170.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_542(int iParam0)
{
	if (func_142())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_143(0))
		{
			func_138(iParam0);
		}
		UNK_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_543()
{
	Global_2537071.f_4532 = 0;
}

void func_544(bool bParam0)
{
	if (bParam0)
	{
		func_263(&(Local_51.f_119), 0, 0, 1, 1);
		func_262(&(Local_51.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_262(&(Local_51.f_119), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		func_545(&(Local_51.f_119), 1);
	}
	else
	{
		func_263(&(Local_51.f_119), 0, 0, 1, 1);
		func_262(&(Local_51.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_545(&(Local_51.f_119), 1);
	}
}

void func_545(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_156(&(uParam0->f_1), 1024);
	}
	else
	{
		func_155(&(uParam0->f_1), 1024);
	}
}

bool func_546(var uParam0)
{
	if ((UNK_0xEAE0D21A50E6C7F4(uParam0->f_42, true) && Global_1835392.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return true;
	}
	return false;
}

void func_547(var uParam0)
{
	if (Global_110668 != 0 && Global_111638.f_19038.f_12[Global_110668 /*8*/].f_4 == 0)
	{
		func_263(uParam0, 0, 0, 1, 1);
		func_262(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!UNK_0x1963B11DE70153E0())
		{
			func_262(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			bLocal_530 = true;
		}
		else if (UNK_0x1963B11DE70153E0() && bLocal_529)
		{
			func_262(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			bLocal_530 = false;
		}
		else
		{
			bLocal_530 = false;
		}
	}
	else
	{
		func_263(uParam0, 0, 0, 1, 1);
		func_262(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		func_262(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!UNK_0x1963B11DE70153E0())
		{
			func_262(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			bLocal_530 = true;
		}
		else if (UNK_0x1963B11DE70153E0() && bLocal_529)
		{
			func_262(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			bLocal_530 = false;
		}
		else
		{
			bLocal_530 = false;
		}
	}
	func_545(&(Local_51.f_119), 1);
}

void func_548()
{
	func_577();
	func_430();
	func_576(&(Local_2412.f_358[0 /*189*/].f_24), 0, 0, "PilotDispatch", 0, 1);
	func_576(&uLocal_2082, 0, 0, "PilotDispatch", 0, 1);
	func_565(&Local_2412);
	func_549(&Local_2412, Local_51.f_10);
	if (UNK_0xC844350D5D58C99A(Local_2412.f_358[0 /*189*/].f_9))
	{
		UNK_0x71EDC33E5A423750(Local_2412.f_358[0 /*189*/].f_9, 4);
	}
}

void func_549(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_564(&Local_2412);
			break;
		case 1:
			func_563(&Local_2412);
			break;
		case 2:
			func_562(&Local_2412);
			func_561(&(Local_2412.f_27[2 /*10*/]), 1);
			func_561(&(Local_2412.f_27[3 /*10*/]), 1);
			break;
		case 3:
			func_560(&Local_2412);
			break;
		case 4:
			func_550(&Local_2412);
			break;
	}
}

void func_550(bool bParam0)
{
	func_565(bParam0);
	bParam0->f_12 = 32;
	func_559(&(bParam0->f_27[0 /*10*/]), 947.1314f, 4146.46f, 80.494f, 30f, 2, 0);
	func_559(&(bParam0->f_27[1 /*10*/]), 762.498f, 4589.213f, 105.5935f, 30f, 2, 0);
	func_559(&(bParam0->f_27[2 /*10*/]), 659.2919f, 4806.028f, 175.759f, 30f, 2, 0);
	func_559(&(bParam0->f_27[3 /*10*/]), 621.3849f, 5032.051f, 343.6387f, 30f, 2, 0);
	func_559(&(bParam0->f_27[4 /*10*/]), 503.8404f, 5297.335f, 508.6478f, 30f, 2, 0);
	func_559(&(bParam0->f_27[5 /*10*/]), 555.4404f, 5426.935f, 708.948f, 30f, 2, 0);
	func_559(&(bParam0->f_27[6 /*10*/]), 637.6946f, 5491.08f, 717.522f, 30f, 2, 0);
	func_559(&(bParam0->f_27[7 /*10*/]), 790.3913f, 5491.866f, 566.103f, 30f, 2, 0);
	func_559(&(bParam0->f_27[8 /*10*/]), 910.6804f, 5313.552f, 388.8567f, 30f, 2, 0);
	func_559(&(bParam0->f_27[9 /*10*/]), 1159.749f, 5183.155f, 253.1068f, 30f, 2, 0);
	func_559(&(bParam0->f_27[10 /*10*/]), 1354.13f, 4998.078f, 141.6288f, 30f, 2, 0);
	func_559(&(bParam0->f_27[11 /*10*/]), 1612.532f, 4941.23f, 61.8549f, 30f, 2, 0);
	func_559(&(bParam0->f_27[12 /*10*/]), 2200.396f, 4800.332f, 69.9321f, 30f, 3, 2);
	func_559(&(bParam0->f_27[13 /*10*/]), 2527.632f, 5144.98f, 66.763f, 30f, 3, 2);
	func_559(&(bParam0->f_27[14 /*10*/]), 2527.131f, 5275.334f, 62.3622f, 30f, 2, 0);
	func_559(&(bParam0->f_27[15 /*10*/]), 2413.345f, 5443.203f, 99.4297f, 30f, 2, 0);
	func_559(&(bParam0->f_27[16 /*10*/]), 2236.067f, 5524.246f, 108.3291f, 30f, 2, 0);
	func_559(&(bParam0->f_27[17 /*10*/]), 1944.463f, 5520.007f, 177.2808f, 30f, 2, 0);
	func_559(&(bParam0->f_27[18 /*10*/]), 1712.477f, 5624.937f, 324.9427f, 30f, 2, 0);
	func_559(&(bParam0->f_27[19 /*10*/]), 1601.158f, 5663.75f, 335.8832f, 30f, 2, 0);
	func_559(&(bParam0->f_27[20 /*10*/]), 1410.764f, 5675.836f, 425.9678f, 30f, 2, 0);
	func_559(&(bParam0->f_27[21 /*10*/]), 1225.682f, 5678.654f, 497.3169f, 30f, 2, 0);
	func_559(&(bParam0->f_27[22 /*10*/]), 1094.47f, 5664.07f, 563.0829f, 30f, 2, 0);
	func_559(&(bParam0->f_27[23 /*10*/]), 1001.427f, 5633.827f, 633.2537f, 30f, 2, 0);
	func_559(&(bParam0->f_27[24 /*10*/]), 875.5358f, 5642.667f, 682.5352f, 30f, 2, 0);
	func_559(&(bParam0->f_27[25 /*10*/]), 741.3275f, 5688.046f, 709.5683f, 30f, 2, 0);
	func_559(&(bParam0->f_27[26 /*10*/]), 487.2532f, 5654.821f, 802.0096f, 30f, 3, 1);
	func_559(&(bParam0->f_27[27 /*10*/]), 362.6602f, 5620.538f, 723.2353f, 30f, 2, 0);
	func_559(&(bParam0->f_27[28 /*10*/]), 134.4865f, 5555.637f, 520.3109f, 30f, 2, 0);
	func_559(&(bParam0->f_27[29 /*10*/]), -128.2242f, 5510.46f, 307.4505f, 30f, 2, 0);
	func_559(&(bParam0->f_27[30 /*10*/]), -397.7556f, 5438.69f, 175.4529f, 30f, 2, 0);
	func_559(&(bParam0->f_27[31 /*10*/]), -520.8975f, 5424.283f, 165.285f, 30f, 4, 0);
	bParam0->f_13 = 1;
	func_558(&(bParam0->f_358[0 /*189*/]));
	func_557(&(bParam0->f_358[0 /*189*/]), "Player");
	func_553(&(bParam0->f_358[0 /*189*/]), UNK_0x16F2683693E537C9(), Local_51.f_1);
	func_552(&(bParam0->f_358[0 /*189*/]), 1135.682f, 3700.644f, 80.494f, 22.3451f);
	func_551(&(bParam0->f_358[0 /*189*/]), 0, joaat("PLAYER_ONE"), joaat("STUNT"));
}

void func_551(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}

void func_552(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_16 = { vParam1 };
	uParam0->f_19 = fParam4;
}

void func_553(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = bParam2;
	func_554(bParam2, &(Local_51.f_243));
}

void func_554(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_556(uParam1);
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
		if (uParam1->f_65 == -1 && !func_118(uParam1->f_66))
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
		func_555(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_121(iVar0 + 1));
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

int func_555(bool bParam0, var uParam1, var uParam2)
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

void func_556(var uParam0)
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

void func_557(char* sParam0, char* sParam1)
{
	StringCopy(sParam0, sParam1, 32);
}

void func_558(var uParam0)
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_559(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
	uParam0->f_7 = iParam5;
	uParam0->f_8 = iParam6;
}

void func_560(bool bParam0)
{
	func_565(bParam0);
	bParam0->f_12 = 28;
	func_559(&(bParam0->f_27[0 /*10*/]), -1737.725f, -2720.967f, 38f, 30f, 2, 0);
	func_559(&(bParam0->f_27[1 /*10*/]), -1384.515f, -2880.773f, 38f, 30f, 2, 0);
	func_559(&(bParam0->f_27[2 /*10*/]), -1156.435f, -2957.284f, 40f, 30f, 2, 0);
	func_559(&(bParam0->f_27[3 /*10*/]), -795.3043f, -2987.754f, 60f, 30f, 2, 0);
	func_559(&(bParam0->f_27[4 /*10*/]), -429.0231f, -2969.528f, 30f, 30f, 3, 1);
	func_559(&(bParam0->f_27[5 /*10*/]), -15.5168f, -2912.484f, 60f, 30f, 2, 0);
	func_559(&(bParam0->f_27[6 /*10*/]), 656.9059f, -2798.444f, 80f, 30f, 3, 2);
	func_559(&(bParam0->f_27[7 /*10*/]), 990.7529f, -2452.092f, 70f, 30f, 2, 0);
	func_559(&(bParam0->f_27[8 /*10*/]), 1019.531f, -2182.119f, 60f, 30f, 2, 0);
	func_559(&(bParam0->f_27[9 /*10*/]), 1019.899f, -1886.15f, 60f, 30f, 2, 0);
	func_559(&(bParam0->f_27[10 /*10*/]), 944.9045f, -1488.589f, 107.7f, 30f, 2, 0);
	func_559(&(bParam0->f_27[11 /*10*/]), 698.908f, -1013.024f, 100.5f, 30f, 3, 2);
	func_559(&(bParam0->f_27[12 /*10*/]), 388.7276f, -822.8241f, 90f, 30f, 2, 0);
	func_559(&(bParam0->f_27[13 /*10*/]), 20.7016f, -653.9637f, 101.8f, 30f, 3, 2);
	func_559(&(bParam0->f_27[14 /*10*/]), -135.3874f, -670.6069f, 112f, 30f, 3, 3);
	func_559(&(bParam0->f_27[15 /*10*/]), -360.3365f, -655.137f, 90f, 30f, 2, 0);
	func_559(&(bParam0->f_27[16 /*10*/]), -700.3533f, -657.1476f, 70f, 30f, 2, 0);
	func_559(&(bParam0->f_27[17 /*10*/]), -951.5859f, -654.0262f, 68f, 30f, 3, 2);
	func_559(&(bParam0->f_27[18 /*10*/]), -1125.587f, -769.7247f, 67f, 30f, 2, 0);
	func_559(&(bParam0->f_27[19 /*10*/]), -1281.291f, -851.0229f, 82f, 30f, 3, 1);
	func_559(&(bParam0->f_27[20 /*10*/]), -1580.865f, -1009.944f, 40f, 30f, 2, 0);
	func_559(&(bParam0->f_27[21 /*10*/]), -1877.52f, -1152.927f, 30f, 30f, 2, 0);
	func_559(&(bParam0->f_27[22 /*10*/]), -2101.111f, -1330.267f, 20f, 30f, 2, 0);
	func_559(&(bParam0->f_27[23 /*10*/]), -2230.15f, -1555.89f, 10f, 30f, 3, 2);
	func_559(&(bParam0->f_27[24 /*10*/]), -2214.946f, -1978.262f, 10f, 30f, 2, 0);
	func_559(&(bParam0->f_27[25 /*10*/]), -2055.091f, -2359.626f, 20f, 30f, 2, 0);
	func_559(&(bParam0->f_27[26 /*10*/]), -1893.392f, -2559.46f, 22f, 30f, 2, 0);
	func_559(&(bParam0->f_27[27 /*10*/]), -1737.725f, -2720.967f, 83.7f, 30f, 4, 0);
	bParam0->f_13 = 1;
	func_558(&(bParam0->f_358[0 /*189*/]));
	func_557(&(bParam0->f_358[0 /*189*/]), "Player");
	func_553(&(bParam0->f_358[0 /*189*/]), UNK_0x16F2683693E537C9(), Local_51.f_1);
	func_552(&(bParam0->f_358[0 /*189*/]), -2102.16f, -2556.082f, 38f, 245.6561f);
	func_551(&(bParam0->f_358[0 /*189*/]), 0, joaat("PLAYER_ONE"), joaat("STUNT"));
}

void func_561(var uParam0, int iParam1)
{
	func_334(&(uParam0->f_9), iParam1);
}

void func_562(bool bParam0)
{
	func_565(bParam0);
	bParam0->f_12 = 21;
	func_559(&(bParam0->f_27[0 /*10*/]), 1167.2f, -2557.195f, 90f, 30f, 2, 0);
	func_559(&(bParam0->f_27[1 /*10*/]), 869.9235f, -2613.705f, 57.8325f, 30f, 2, 0);
	func_559(&(bParam0->f_27[2 /*10*/]), 652.3818f, -2651.991f, 54.935f, 30f, 2, 0);
	func_559(&(bParam0->f_27[3 /*10*/]), 249.3849f, -2579.821f, 60.1264f, 30f, 3, 2);
	func_559(&(bParam0->f_27[4 /*10*/]), -31.7179f, -2590.793f, 19.9452f, 30f, 2, 0);
	func_559(&(bParam0->f_27[5 /*10*/]), -317.409f, -2582.66f, 48.7654f, 30f, 3, 3);
	func_559(&(bParam0->f_27[6 /*10*/]), -395.6915f, -2334.057f, 39.3612f, 30f, 2, 0);
	func_559(&(bParam0->f_27[7 /*10*/]), -300.2367f, -2118.431f, 53.3728f, 30f, 2, 0);
	func_559(&(bParam0->f_27[8 /*10*/]), -157.1812f, -1967.885f, 56.4093f, 30f, 3, 2);
	func_559(&(bParam0->f_27[9 /*10*/]), -199.4688f, -1803.328f, 13.6363f, 30f, 2, 0);
	func_559(&(bParam0->f_27[10 /*10*/]), -383.5264f, -1738.067f, 60.8194f, 30f, 2, 0);
	func_559(&(bParam0->f_27[11 /*10*/]), -649.8698f, -1710.374f, 61.3036f, 30f, 2, 0);
	func_559(&(bParam0->f_27[12 /*10*/]), -861.6902f, -1857.194f, 77.0621f, 30f, 3, 2);
	func_559(&(bParam0->f_27[13 /*10*/]), -716.8034f, -2111.744f, 65.9868f, 30f, 2, 0);
	func_559(&(bParam0->f_27[14 /*10*/]), -548.7557f, -2230.616f, 97.2887f, 30f, 2, 0);
	func_559(&(bParam0->f_27[15 /*10*/]), -270.7834f, -2425.144f, 96.7744f, 30f, 3, 1);
	func_559(&(bParam0->f_27[16 /*10*/]), 5.435f, -2665.31f, 46.2903f, 30f, 2, 0);
	func_559(&(bParam0->f_27[17 /*10*/]), 299.0821f, -2834.288f, 27.0191f, 30f, 2, 0);
	func_559(&(bParam0->f_27[18 /*10*/]), 514.295f, -2880.863f, 42.0956f, 30f, 3, 2);
	func_559(&(bParam0->f_27[19 /*10*/]), 842.6024f, -2599.042f, 25.978f, 30f, 2, 0);
	func_559(&(bParam0->f_27[20 /*10*/]), 991.974f, -2468.436f, 87.493f, 30f, 4, 0);
	bParam0->f_13 = 1;
	func_558(&(bParam0->f_358[0 /*189*/]));
	func_557(&(bParam0->f_358[0 /*189*/]), "Player");
	func_553(&(bParam0->f_358[0 /*189*/]), UNK_0x16F2683693E537C9(), Local_51.f_1);
	func_552(&(bParam0->f_358[0 /*189*/]), 1788.044f, -2438.835f, 130.9346f, 100.0275f);
	func_551(&(bParam0->f_358[0 /*189*/]), 0, joaat("PLAYER_ONE"), joaat("STUNT"));
}

void func_563(bool bParam0)
{
	func_565(bParam0);
	bParam0->f_12 = 19;
	func_559(&(bParam0->f_27[0 /*10*/]), -2819.07f, -81.2779f, 76.1411f, 30f, 2, 0);
	func_559(&(bParam0->f_27[1 /*10*/]), -2737.77f, 342.665f, 175.645f, 30f, 2, 0);
	func_559(&(bParam0->f_27[2 /*10*/]), -2631.929f, 499.7495f, 210.0935f, 30f, 2, 0);
	func_559(&(bParam0->f_27[3 /*10*/]), -2438.01f, 692.3843f, 285.745f, 30f, 3, 3);
	func_559(&(bParam0->f_27[4 /*10*/]), -2039.406f, 708.7898f, 170.6556f, 30f, 2, 0);
	func_559(&(bParam0->f_27[5 /*10*/]), -1633.076f, 751.8171f, 220.188f, 30f, 2, 0);
	func_559(&(bParam0->f_27[6 /*10*/]), -1187.955f, 874.4288f, 246.4972f, 30f, 3, 1);
	func_559(&(bParam0->f_27[7 /*10*/]), -893.826f, 994.239f, 239.512f, 30f, 2, 0);
	func_559(&(bParam0->f_27[8 /*10*/]), -565.788f, 1098.308f, 349.0507f, 30f, 2, 0);
	func_559(&(bParam0->f_27[9 /*10*/]), -326.8564f, 1129.9f, 336.1296f, 30f, 2, 0);
	func_559(&(bParam0->f_27[10 /*10*/]), -155.9212f, 1149.858f, 312.2522f, 30f, 2, 0);
	func_559(&(bParam0->f_27[11 /*10*/]), 145.603f, 1162.599f, 277.7465f, 30f, 3, 1);
	func_559(&(bParam0->f_27[12 /*10*/]), 355.6647f, 1234.464f, 287.6501f, 30f, 2, 0);
	func_559(&(bParam0->f_27[13 /*10*/]), 640.85f, 1191.643f, 329.783f, 30f, 2, 0);
	func_559(&(bParam0->f_27[14 /*10*/]), 783.3697f, 1157.395f, 329.0691f, 30f, 3, 3);
	func_559(&(bParam0->f_27[15 /*10*/]), 1016.378f, 1000.386f, 252.4894f, 30f, 2, 0);
	func_559(&(bParam0->f_27[16 /*10*/]), 1243.37f, 945.084f, 150.5214f, 30f, 2, 0);
	func_559(&(bParam0->f_27[17 /*10*/]), 1494.048f, 863.8886f, 110.4097f, 30f, 2, 0);
	func_559(&(bParam0->f_27[18 /*10*/]), 1751.842f, 687.7875f, 296.787f, 30f, 4, 0);
	bParam0->f_13 = 1;
	func_558(&(bParam0->f_358[0 /*189*/]));
	func_557(&(bParam0->f_358[0 /*189*/]), "Player");
	func_553(&(bParam0->f_358[0 /*189*/]), UNK_0x16F2683693E537C9(), Local_51.f_1);
	func_552(&(bParam0->f_358[0 /*189*/]), -2818.17f, -500.178f, 76.1411f, 0f);
	func_551(&(bParam0->f_358[0 /*189*/]), 0, joaat("PLAYER_ONE"), joaat("STUNT"));
}

void func_564(bool bParam0)
{
	func_565(bParam0);
	bParam0->f_12 = 18;
	func_559(&(bParam0->f_27[0 /*10*/]), 1025.724f, 3073.133f, 70f, 30f, 2, 0);
	func_559(&(bParam0->f_27[1 /*10*/]), 847.4132f, 3025.239f, 80f, 30f, 2, 0);
	func_559(&(bParam0->f_27[2 /*10*/]), 624.897f, 2968.416f, 80f, 30f, 3, 1);
	func_559(&(bParam0->f_27[3 /*10*/]), 398.5529f, 2921.654f, 75f, 30f, 2, 0);
	func_559(&(bParam0->f_27[4 /*10*/]), 68.1f, 2896.4f, 80f, 30f, 2, 0);
	func_559(&(bParam0->f_27[5 /*10*/]), -290.7f, 2895.4f, 80f, 30f, 2, 0);
	func_559(&(bParam0->f_27[6 /*10*/]), -1033.31f, 2832.959f, 37.5f, 30f, 3, 2);
	func_559(&(bParam0->f_27[7 /*10*/]), -1195.153f, 2729.109f, 18f, 30f, 2, 0);
	func_559(&(bParam0->f_27[8 /*10*/]), -1414.6f, 2636.365f, 8.25f, 30f, 2, 0);
	func_559(&(bParam0->f_27[9 /*10*/]), -1684.856f, 2630.035f, 10f, 30f, 2, 0);
	func_559(&(bParam0->f_27[10 /*10*/]), -2024.536f, 2677.336f, 30f, 30f, 3, 1);
	func_559(&(bParam0->f_27[11 /*10*/]), -2659.106f, 2670.574f, 5.4745f, 30f, 2, 0);
	func_559(&(bParam0->f_27[12 /*10*/]), -2880.136f, 2732.084f, 21.0365f, 30f, 2, 0);
	func_559(&(bParam0->f_27[13 /*10*/]), -3200.826f, 2826.548f, 40f, 30f, 3, 2);
	func_559(&(bParam0->f_27[14 /*10*/]), -3363.374f, 2580.812f, 50f, 30f, 2, 0);
	func_559(&(bParam0->f_27[15 /*10*/]), -3242.432f, 2370.19f, 40f, 30f, 2, 0);
	func_559(&(bParam0->f_27[16 /*10*/]), -2879.09f, 2382.111f, 20f, 30f, 2, 0);
	func_559(&(bParam0->f_27[17 /*10*/]), -2650.532f, 2450.207f, 66.6f, 30f, 4, 0);
	bParam0->f_13 = 1;
	func_558(&(bParam0->f_358[0 /*189*/]));
	func_557(&(bParam0->f_358[0 /*189*/]), "Player");
	func_553(&(bParam0->f_358[0 /*189*/]), UNK_0x16F2683693E537C9(), Local_51.f_1);
	func_552(&(bParam0->f_358[0 /*189*/]), vLocal_2307, 154.8464f);
	func_551(&(bParam0->f_358[0 /*189*/]), 0, joaat("PLAYER_ONE"), joaat("STUNT"));
}

void func_565(bool bParam0)
{
	float fVar0;

	func_4(&(bParam0->f_3));
	if (Local_51.f_10 != -1)
	{
		fVar0 = func_35(Local_51.f_10);
		if (fVar0 <= 0f || fVar0 > Local_51.f_12[Local_51.f_10])
		{
			fVar0 = Local_51.f_12[Local_51.f_10];
		}
		bParam0->f_9 = fVar0;
		bParam0->f_10 = (bParam0->f_9 / 2f);
	}
	func_573(bParam0);
	bParam0->f_12 = 0;
	func_566(bParam0);
	bParam0->f_13 = 0;
}

void func_566(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < bParam0->f_13)
	{
		func_567(bParam0, iVar0);
		iVar0++;
	}
}

void func_567(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_569(&(bParam0->f_358[iParam1 /*189*/]));
	func_568(&(bParam0->f_358[iParam1 /*189*/]));
}

void func_568(char* sParam0)
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0;
	sParam0->f_9 = 0;
	sParam0->f_10 = 0;
	sParam0->f_11 = -1;
	sParam0->f_12 = 0;
	sParam0->f_13 = 0f;
	sParam0->f_14 = 0f;
	sParam0->f_15 = 0f;
	sParam0->f_23 = 13;
	sParam0->f_16 = { Local_51.f_3 };
	sParam0->f_19 = Local_51.f_6;
	sParam0->f_20 = Local_51.f_7;
	sParam0->f_21 = Local_51.f_8;
	sParam0->f_22 = Local_51.f_9;
}

void func_569(var uParam0)
{
	func_572(uParam0);
	func_571(uParam0);
	func_570(uParam0);
}

void func_570(var uParam0)
{
	if (UNK_0xC844350D5D58C99A(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_51.f_1)
		{
			if (!(UNK_0x437347B10A200C4B(uParam0->f_8, 0) || UNK_0x437347B10A200C4B(uParam0->f_9, 0)))
			{
				if (UNK_0xC42A92762C58E1B9(uParam0->f_8, uParam0->f_9, 0))
				{
					UNK_0x327AAEE25F323797(uParam0->f_8);
				}
			}
			UNK_0xA954465BA6FDEFE2(&(uParam0->f_9));
		}
	}
}

void func_571(var uParam0)
{
	if (UNK_0xC844350D5D58C99A(uParam0->f_8))
	{
		if (uParam0->f_8 != UNK_0x16F2683693E537C9())
		{
			UNK_0xEBA53F35D0085654(&(uParam0->f_8));
		}
	}
}

void func_572(var uParam0)
{
	func_83(&(uParam0->f_10));
}

void func_573(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < bParam0->f_12)
	{
		func_574(bParam0, iVar0);
		iVar0++;
	}
}

void func_574(bool bParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(bParam0->f_27[iParam1 /*10*/]));
	func_79(&(bParam0->f_27[iParam1 /*10*/]));
	func_575(&(bParam0->f_27[iParam1 /*10*/]));
}

void func_575(var uParam0)
{
	*uParam0 = { Local_51.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}

void func_576(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
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

void func_577()
{
	struct<68> Var0;

	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_578(&(Global_1835013.f_73));
	func_578(&(Global_1835013.f_142));
	func_578(&(Global_1835013.f_211));
	func_578(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_514(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_578(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_579(bool bParam0)
{
	if (bParam0)
	{
		UNK_0x67E5ECB8FD7F5018(0);
		UNK_0x65C5EBCA17A891FC(1);
		UNK_0x2C84016B4A95F6BA(0);
		func_173(1);
		Global_94002 = 1;
	}
	else
	{
		UNK_0x67E5ECB8FD7F5018(1);
		UNK_0x65C5EBCA17A891FC(0);
		UNK_0x2C84016B4A95F6BA(1);
		func_173(0);
		Global_94002 = 0;
	}
}

void func_580(int iParam0)
{
	*iParam0 = UNK_0xB01F55A0FD1CFD49("COUNTDOWN");
	UNK_0xAE317D00A5A55DF6("HUD_321_GO", 0, -1);
}

bool func_581(int iParam0)
{
	if (UNK_0x757EF87A33649210())
	{
		UNK_0x82E51BCA72537B6C(iParam0);
	}
	else if (UNK_0x0F1CCD77290EE12F())
	{
		return true;
	}
	return false;
}

void func_582()
{
	bool bVar0;

	if (!bLocal_2406)
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
				if (UNK_0xC844350D5D58C99A(bVar0) && !UNK_0x437347B10A200C4B(bVar0, 0))
				{
					if (UNK_0xE934758D273C899A(bVar0))
					{
						if (!UNK_0x757EF87A33649210())
						{
							UNK_0xC92DB9682A650680("MGSP_START");
							bLocal_2406 = true;
						}
					}
				}
			}
		}
	}
}

int func_583(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_584(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4)
{
	*bParam1 = UNK_0xDC4DD3980107166C(bParam0, 24, 31);
	*bParam2 = UNK_0xDC4DD3980107166C(bParam0, 16, 23);
	*bParam3 = UNK_0xDC4DD3980107166C(bParam0, 8, 15);
	*uParam4 = UNK_0xDC4DD3980107166C(bParam0, 0, 7);
}

bool func_585(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	UNK_0xA402F6C87C08815C(bParam0, &bVar0, &bVar1, &bVar2, &bVar3);
	return func_586(bVar0, bVar1, bVar2, bVar3);
}

var func_586(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;

	UNK_0xCA42B3469E060D13(&uVar0, 24, 31, bParam0);
	UNK_0xCA42B3469E060D13(&uVar0, 16, 23, bParam1);
	UNK_0xCA42B3469E060D13(&uVar0, 8, 15, bParam2);
	UNK_0xCA42B3469E060D13(&uVar0, 0, 7, bParam3);
	return uVar0;
}

bool func_587()
{
	if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
	{
		return false;
	}
	func_597(23, 1);
	func_596(10);
	switch (Local_2321.f_5)
	{
		case 0:
			UNK_0x34D79252800B23FF(0);
			UNK_0x8225571BCEE038F8("EXTRASUNNY", 10f);
			func_595();
			func_594(2, 0);
			func_594(1, 0);
			func_594(3, 0);
			func_594(4, 0);
			func_594(5, 0);
			func_594(6, 0);
			func_594(7, 0);
			UNK_0x679C321F8CAA2CFA(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 10f, 0);
			UNK_0x28F5E4DA506AC0CA(vLocal_5280, 600f, 0, 0, 0, 0, false, 0);
			func_588(&Local_2412, Local_51.f_10);
			UNK_0x85A7389D2B63E61A(UNK_0xD803B885F5E47A62(), 0, 0);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 512);
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) || UNK_0x81A5359F25512A04(UNK_0x16F2683693E537C9()))
			{
				Local_2321.f_5 = 2;
			}
			else
			{
				Local_2321.f_5 = 1;
			}
			break;
		case 1:
			if (func_358(1000))
			{
				Local_2321.f_5 = 2;
			}
			break;
		case 2:
			UNK_0xD7992BEF7A9D109E("SP_SPR", 3);
			UNK_0x0D3BE1DE0262A012("Shared", 0);
			while (!UNK_0x27117E2CDD4D67C3("Shared"))
			{
				SYSTEM::WAIT(0);
			}
			UNK_0xAE317D00A5A55DF6("HUD_AWARDS", 0, -1);
			Local_2321.f_5 = 3;
			break;
		case 3:
			if (UNK_0x67C1D9E5B91B2E37(3))
			{
				Local_2321.f_5 = 4;
			}
			break;
		case 4:
			Local_2321.f_5 = 5;
			func_11(&(Local_2321.f_2));
			break;
		case 5:
			if (func_2(&(Local_2321.f_2), 0.5f))
			{
				Local_2321.f_5 = 6;
			}
			break;
		case 6:
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				Local_2321.f_5 = 9;
			}
			else
			{
				Local_2321.f_5 = 7;
				func_11(&(Local_2321.f_2));
			}
			break;
		case 7:
			if (func_2(&(Local_2321.f_2), 0.5f))
			{
				Local_2321.f_5 = 8;
			}
			break;
		case 8:
			if (func_581(5000))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
				Local_2321.f_5 = 9;
			}
			break;
		case 9:
			func_4(&(Local_2321.f_2));
			return false;
		case 10:
			return false;
	}
	return true;
}

void func_588(bool bParam0, int iParam1)
{
	Local_51 = 0;
	Local_51.f_1 = 0;
	Local_51.f_2 = 2;
	Local_51.f_3 = { vLocal_2307 };
	Local_51.f_6 = 154.8464f;
	Local_51.f_7 = 4;
	Local_51.f_8 = joaat("A_M_Y_GENSTREET_01");
	Local_51.f_9 = joaat("STUNT");
	StringCopy(&(Local_51.f_24[0 /*8*/]), "AIRPORT", 32);
	Local_51.f_12[0] = 165f;
	StringCopy(&(Local_51.f_24[1 /*8*/]), "BRIDGEBINGE", 32);
	Local_51.f_12[1] = 80f;
	StringCopy(&(Local_51.f_24[2 /*8*/]), "VINEWOOD", 32);
	Local_51.f_12[2] = 165f;
	StringCopy(&(Local_51.f_24[3 /*8*/]), "BRIDGEWORK", 32);
	Local_51.f_12[3] = 165f;
	StringCopy(&(Local_51.f_24[4 /*8*/]), "ALTITUDE", 32);
	Local_51.f_12[4] = 165f;
	switch (iParam1)
	{
		case 0:
			func_593(&Local_2412);
			break;
		case 1:
			func_592(&Local_2412);
			break;
		case 2:
			func_591(&Local_2412);
			break;
		case 3:
			func_590(&Local_2412);
			break;
		case 4:
			func_589(&Local_2412);
			break;
	}
}

void func_589(bool bParam0)
{
}

void func_590(bool bParam0)
{
}

void func_591(bool bParam0)
{
}

void func_592(bool bParam0)
{
}

void func_593(bool bParam0)
{
}

void func_594(bool bParam0, int iParam1)
{
	UNK_0x5D96D8530B3D0904(&Global_30926, bParam0);
	StringCopy(&(Global_30927[bParam0 /*6*/]), UNK_0xBB0808A181D4745C(), 24);
	Global_30982[bParam0] = iParam1;
}

void func_595()
{
	Global_22211.f_5 = 1;
}

void func_596(int iParam0)
{
	func_311();
	Global_76877 = iParam0;
	Global_76876 = 0;
	Global_76879 = 3;
}

void func_597(bool bParam0, bool bParam1)
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

void func_598()
{
}

void func_599()
{
	UNK_0x3FC8DBCC154CA56B();
	func_364();
	func_430();
	func_577();
	func_597(23, 0);
	func_579(0);
	UNK_0x34D79252800B23FF(5);
	UNK_0x066C43E677C08D5C();
	func_311();
	func_238(0);
	func_256(0);
	UNK_0x96D521DDDB9AD218();
	UNK_0x38DC636F3D2D2FA8("MGSP_START");
	UNK_0x38DC636F3D2D2FA8("MGSP_FAIL");
	UNK_0x38DC636F3D2D2FA8("MGTR_COMPLETE");
	UNK_0xC92DB9682A650680("MGSP_END");
	UNK_0x8C26F31DFF77D124();
	func_607(2, 0);
	func_607(1, 0);
	func_607(3, 0);
	func_607(4, 0);
	func_607(5, 0);
	func_607(6, 0);
	func_607(7, 0);
	UNK_0x85A7389D2B63E61A(UNK_0xD803B885F5E47A62(), 1, 0);
	UNK_0xCE7D0828D683D536();
	func_605(&(Local_51.f_118));
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	UNK_0x62DE699599F0417E(UNK_0xD803B885F5E47A62(), 0);
	UNK_0x11CCD0ACA866C6C5(3, 1);
	UNK_0xF5A41F3D3B38EFE3("PilotSchool");
	func_603(&Local_2412, 1);
	UNK_0xDB8844D4B7C60440(103, "SPRTaxi");
	UNK_0xDB8844D4B7C60440(104, "SPRTaxi");
	UNK_0xA37A90C62806D848(1);
	UNK_0x790015DC92C918E2();
	func_602();
	UNK_0x8BCB70EB440DED83(1);
	UNK_0xBFE31971E49FA500(1);
	func_253();
	UNK_0xF3039DE1FDB4F6FD(1);
	func_600();
	UNK_0x10FAF14A60A0DBE1();
}

void func_600()
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
					func_601(Global_95677[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_601(int iParam0, bool bParam1)
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

void func_602()
{
	Global_22211.f_5 = 0;
}

void func_603(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_565(bParam0);
	}
	else
	{
		func_604(bParam0);
	}
	func_137(0);
	func_27(&(bParam0->f_17));
	UNK_0xA37A90C62806D848(1);
	UNK_0x790015DC92C918E2();
	if (bLocal_2405)
	{
		func_61("SPR_MOVE_FAIL", 5000, 0);
		bLocal_2405 = false;
	}
}

void func_604(bool bParam0)
{
}

void func_605(var uParam0)
{
	func_606(*uParam0);
}

void func_606(var uParam0)
{
	UNK_0xE17FDF9E3068281B(&uParam0);
}

void func_607(bool bParam0, bool bParam1)
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

