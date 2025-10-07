# 722 "data/maps/PetalburgCity_Gym/scripts.pory"

# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_NORMAN, 1
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLY, 10
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLYS_DAD, 11
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_SPECIAL_NORMAN, 12
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_SPECIAL_PLAYER, 13
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"

# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"

# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"

# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"

# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"

# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_SPECIAL_NORMAN
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_SPECIAL_PLAYER
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkplayergender
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, MALE
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_SetSpecialM
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ne PetalburgCity_Gym_EventScript_SetSpecialF
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"

# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 5, 108
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"

# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"

# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"

# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"

# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"

# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"

# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"

# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SeriousTalk::
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	special SpawnCameraObject
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PetalburgCity_Gym_EventScript_PlayerOutWay
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, PetalburgCity_Gym_Movement_NormanSit
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_Gym_Movement_NormanSit
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceSlowDown
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 8
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_SetInvisible
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_NORMAN
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_SPECIAL_NORMAN
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, PetalburgCity_Gym_Movement_SeriousTalk_NormanAnimation1
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PetalburgCity_Gym_EventScript_PlayerGoLeft
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PetalburgCity_Gym_EventScript_PlayerGoRight
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PetalburgCity_Gym_EventScript_PlayerGoLeft
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PetalburgCity_Gym_EventScript_PlayerGoLeft
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_SeriousTalk_PlayerPrepare
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceSlowDown
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 8
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_SetInvisible
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_SPECIAL_PLAYER
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, Common_Movement_FaceRight
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	namebox Norman
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_0
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, Common_Movement_FaceUp
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_PLAYER, Common_Movement_FaceUp
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_1
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, Common_Movement_FaceDown
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_2
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, Common_Movement_FaceRight
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_3
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, Common_Movement_FaceUp
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_4
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, PetalburgCity_Gym_Movement_SeriousTalk_NormanAnimation2Right
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_PLAYER, Common_Movement_FaceLeft
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_5
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidenamebox
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_PLAYER, Common_Movement_FaceUp
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, PetalburgCity_Gym_Movement_SeriousTalk_NormanAnimation2Right
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 24
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, Common_Movement_FaceLeft
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	namebox Norman
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_6
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, Common_Movement_FaceUp
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_7
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, Common_Movement_FaceRight
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_8
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidenamebox
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, Common_Movement_FaceUp
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_PLAYER, Common_Movement_FaceLeft
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 24
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, Common_Movement_FaceLeft
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 24
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, PetalburgCity_Gym_Movement_SeriousTalk_NormanAnimation2Left
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_PLAYER, Common_Movement_QuestionMark
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 16
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, Common_Movement_FaceRight
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	namebox Norman
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_9
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, Common_Movement_FaceLeft
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_10
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_SPECIAL_NORMAN, Common_Movement_FaceRight
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_11
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidenamebox
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_SPECIAL_NORMAN
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_NORMAN
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_12
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidenamebox
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_SPECIAL_PLAYER
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_SetVisible
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_SeriousTalk_Text_13
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitse
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_MOVE_RELEARNER_UPGRADE
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"

# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_PlayerGoLeft::
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerGoLeft
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_Gym_Movement_PlayerGoLeft
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"

# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_PlayerGoRight::
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerGoRight
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_Gym_Movement_PlayerGoRight
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"

# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_PlayerOutWay::
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerOutWay
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"

# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerGoRight:
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"

# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerGoLeft:
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"

# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerOutWay:
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_left
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"

# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_NormanSit:
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_slow_down
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"

# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpecialM::
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_BRENDAN_SPECIAL
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"

# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpecialF::
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_MAY_SPECIAL
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"

# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_SeriousTalk_PlayerPrepare:
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"

# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_SeriousTalk_NormanAnimation1:
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_slow_down
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_slow_down
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_slow_down
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_slow_down
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_slow_down
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_slow_down
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_down
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"

# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_SeriousTalk_NormanAnimation2Right:
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_slow_right
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_slow_right
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_slow_right
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_right
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_right
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_SeriousTalk_NormanAnimation2Left:
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_slow_left
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_slow_left
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_slow_left
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_left
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	face_left
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
	namebox Norman
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	namebox Wally
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidenamebox
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	namebox Norman
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidenamebox
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	namebox Norman
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidenamebox
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
	namebox Unknown
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
	namebox Norman
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	namebox Wally
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	namebox Norman
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidenamebox
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	namebox Norman
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
	namebox Wally
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidenamebox
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_ROUTE102, 0, 9
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidenamebox
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidenamebox
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidenamebox
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger2, MSGBOX_DEFAULT
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	hidenamebox
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_TM42
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_GiveFacade2
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SeriousTalk
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLYS_DAD
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM42
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 10
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 1618 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 1620 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1625 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1627 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 1628 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1629 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 1630 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 1631 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1632 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1633 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1634 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1635 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 1636 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1637 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 1638 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 1640 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1644 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1645 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 1646 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1647 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 1648 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 1649 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 1651 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1653 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1654 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1655 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1657 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 1658 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1659 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 1660 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 1661 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1662 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1663 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1664 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1665 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 1666 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1667 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 1668 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 1670 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 1671 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1672 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1673 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1674 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1675 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 1676 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1677 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 1678 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1679 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 1680 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 1681 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1682 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1683 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1684 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1685 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 1686 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1687 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 1689 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 1690 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 1691 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1692 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1693 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1694 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1695 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 1696 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 1697 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 1698 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 1699 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1700 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1701 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 1702 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1703 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 1704 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1705 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1706 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1707 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1708 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 1709 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 1710 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1711 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1712 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 1713 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 1714 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 1716 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1717 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1718 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 1719 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1720 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 1721 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1722 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1723 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1724 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1725 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 1726 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 1727 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1728 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1729 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 1730 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 1731 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 1732 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 1733 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1734 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1735 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 1736 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1737 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 1738 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1739 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1740 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1741 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1742 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 1743 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 1744 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1745 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1746 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 1747 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 1748 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 1749 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 1750 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1751 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1752 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 1753 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1754 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 1755 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1756 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1757 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1758 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1759 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 1760 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 1761 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1762 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1763 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 1764 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 1765 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 1766 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 1767 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1768 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1769 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 1770 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1771 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 1772 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1773 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1774 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1775 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1776 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 1777 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 1778 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1779 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1780 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 1781 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 1782 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 1783 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 1784 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1785 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1786 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 1787 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1788 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 1789 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1790 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1791 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1792 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1793 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 1794 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 1795 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1796 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1797 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 1798 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 1799 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 1800 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1801 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1802 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1803 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 1804 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1805 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1806 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1807 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1808 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1809 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1810 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 1811 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 1812 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1813 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1814 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 1815 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 1816 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 1817 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1818 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1819 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1820 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1821 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1822 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1823 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1824 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1825 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1826 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1827 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1828 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1829 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1830 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1831 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1832 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1833 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1834 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1835 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1836 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1837 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1838 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1839 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1840 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1841 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1842 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1843 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1844 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1845 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1846 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1847 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1848 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1849 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1850 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1851 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1852 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1853 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1854 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1855 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1856 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1857 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1858 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1859 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1860 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1861 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1862 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1863 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1864 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1865 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1866 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1867 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1868 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1869 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1870 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1871 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1872 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1873 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1874 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1875 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1876 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1877 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1878 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1879 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1880 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1881 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1882 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1883 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1884 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1885 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1886 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1887 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1888 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1889 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1890 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1891 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1892 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1893 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1894 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1895 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1896 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1897 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1898 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1899 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1900 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1901 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1902 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1903 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1904 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1905 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1906 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1907 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1908 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1909 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1910 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1911 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1912 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1913 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1914 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1915 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1916 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1917 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1918 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1919 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1920 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1921 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1922 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1923 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1924 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1925 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1926 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1927 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1928 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1929 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1930 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1931 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1932 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1933 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1934 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1935 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1936 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1937 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1938 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1939 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1940 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1941 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1942 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1943 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1944 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1945 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1946 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1947 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1948 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1949 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1950 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1951 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1952 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1953 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1954 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1955 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1956 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1957 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1958 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1959 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1960 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1961 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1962 "data/maps/PetalburgCity_Gym/scripts.pory"
	end

PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon::
# 1 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Ah, {PLAYER}, hola, hij{OA}!\p"
	.string "¿Ya terminaron con la mudanza? Yo aún\n"
	.string "tengo algunas cosas que resolver en\l"
	.string "el Gimnasio.\p"
	.string "¡Oh! ¿Un Pokémon? ¡Me llena de orgullo\n"
	.string "verte, ya tod{OA} grande, y\l"
	.string "convirtiéndote en un{A} Entrenador{A}!$"

PetalburgCity_Gym_Text_WallyIdLikeAPokemon::
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "E-em... -COF, COF-\p"
	.string "¿P-podría darme un Pokémon, señor?$"

PetalburgCity_Gym_Text_DadOhYoureWallyRight::
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, debes ser Wally, ¿No?$"

PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon::
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "S-sí, señor. Voy a quedarme con mi\n"
	.string "familia aquí en Petalburg y quería\l"
	.string "intentar atrapar un Pokémon-\p"
	.string "S-si no es mucha molestia, claro...$"

PetalburgCity_Gym_Text_DadHmISee::
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡No, ninguno, no te preocupes!$"

PetalburgCity_Gym_Text_DadPlayerGoWithWally::
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "… Bien, {PLAYER}, ¿Preparad{OA}?\p"
	.string "Hazle caso a tu padre y ve a ayudar a\n"
	.string "Wally a atrapar un Pokémon…\p"
	.string "Dudo que tenga problemas, pero mejor\n"
	.string "prevenir que lamentar.$"

PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon::
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ten, Wally. Te prestaré una de mis\n"
	.string "criaturas.$"

PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall::
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Muchas gracias, señor!$"

PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall2::
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Y además, toma unas cuantas Pokéball,\n"
	.string "para que puedas atraparte algunos\l"
	.string "bichos por tu cuenta luego.$"

PetalburgCity_Gym_Text_WallyOhWowThankYou::
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Ahhh! ¡M-muchísimas -COF- gracias!$"

PetalburgCity_Gym_Text_WouldYouReallyComeWithMe::
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, ¿En serio me ayudarás?$"

PetalburgCity_Gym_Text_DadSoDidItWorkOut::
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Entonces?$"

PetalburgCity_Gym_Text_WallyThankYouBye::
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡T-todo salió b-bien, señor!\p"
	.string "¡{PLAYER} estuvo cuidándome y -COF\n"
	.string "COF- n-no había tosido nada mientras\l"
	.string "estuve ahí! ¡Muchísimas gracias!$"

PetalburgCity_Gym_Text_DadGoCollectBadges::
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bueno, {PLAYER}, déjame contarte\n"
	.string "algo.\p"
	.string "Tienes una increíble capacidad para\n"
	.string "aprender cuando se trata de Pokémon,\l"
	.string "y espero que logres aprovechar ese\l"
	.string "{COLOR BLUE}talento{COLOR DARK_GRAY} tuyo.\p"
	.string "Mi gimnasio es más avanzado, por lo que\n"
	.string "tendrás que derrotar otros 4\l"
	.string "gimnasios antes de enfrentarte a mí.\p"
	.string "¡Suerte, hij{OA}!$"

PetalburgCity_Gym_Text_NormanGoToRustboro::
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Y? No tengo toda la vida para\n"
	.string "esperarte. Ve a Ciudad Rustoboro y\l"
	.string "gana la medalla de ahí, ¿okay?\p"
	.string "Recuerda que necesitas 4 medallas para\n"
	.string "enfrentarte a mí.$"

PetalburgCity_Gym_Text_NormanGoToDewford::
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, veo que le has ganado a la\n"
	.string "Líder de Gimnasio de tipo Roca,\l"
	.string "Roxxane, incluso con su regla de sólo\l"
	.string "permitir tres Pokémon. ¡Excelente,\l"
	.string "sigue así!\p"
	.string "Tu siguiente reto está cruzando el mar,\n"
	.string "en Ciudad Dewford.$"

PetalburgCity_Gym_Text_YouHaveGottenStronger2::
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Perfecto, entonces, ya posees\n"
	.string "tres medallas… ¡Tan sólo te falta una\l"
	.string "para poder enfrentarte a mí!$"

PetalburgCity_Gym_Text_YouHaveGottenStronger::
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Si me ves, es porque algo falló.\n"
	.string "Avisa al creador del hack de\l"
	.string "este error para que pueda\l"
	.string "solucionarlo.$"

PetalburgCity_Gym_Text_NormanIntro::
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm…\n"
	.string "So, you did get four GYM BADGES.\p"
	.string "Fine, as I promised, we will have\n"
	.string "a POKéMON battle.\p"
	.string "{PLAYER}…\p"
	.string "I'm so happy that I can have\n"
	.string "a real battle with my own child.\p"
	.string "But, a battle is a battle!\p"
	.string "I will do everything in my power as\n"
	.string "a GYM LEADER to win.\p"
	.string "{PLAYER}, you'd better give it your\n"
	.string "best shot, too!$"

PetalburgCity_Gym_Text_NormanDefeat::
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
	.string "I… I can't…\p"
	.string "I can't believe it. {PLAYER}…\p"
	.string "I lost to {PLAYER}?\p"
	.string "But, rules are rules!\n"
	.string "Here, take this.$"

PetalburgCity_Gym_Text_ReceivedBalanceBadge::
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the BALANCE BADGE\n"
	.string "from DAD!$"

PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis::
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: With that BADGE, the DEFENSE\n"
	.string "of all your POKéMON will increase.\p"
	.string "POKéMON that know the HM move SURF\n"
	.string "will be able to travel over water.\p"
	.string "This is my gift to you. {PLAYER}, I'm\n"
	.string "sure you can use it correctly.$"

PetalburgCity_Gym_Text_ExplainFacade::
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: TM42 contains FACADE.\p"
	.string "It doubles the power of moves if\n"
	.string "the POKéMON is poisoned, paralyzed,\l"
	.string "or burned.\p"
	.string "It might be able to turn a bad\n"
	.string "situation into an advantage.$"

PetalburgCity_Gym_Text_DadHappyAndSad::
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: As the GYM LEADER, I can't\n"
	.string "express how upset I am…\p"
	.string "But as a father, it makes me both\n"
	.string "happy and a little sad. It's odd…$"

PetalburgCity_Gym_Text_PleaseComeWithMe::
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
	.string "Please come with me.\n"
	.string "I have something I want you to have.$"

PetalburgCity_Gym_Text_LetMeBorrowPlayer::
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN, you don't mind, do you?\p"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
	.string "a minute or two.$"

PetalburgCity_Gym_Text_DadGoingToKeepTraining::
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you should go visit\n"
	.string "your mother every so often.\p"
	.string "I'm going to stay here and redouble\n"
	.string "my training.\p"
	.string "It would bother me as a TRAINER to\n"
	.string "not avenge my loss to you, {PLAYER}!$"

PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough::
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, how are things going?\p"
	.string "The world of POKéMON is deep.\p"
	.string "I honestly think that no amount of\n"
	.string "training would ever be enough.$"

PetalburgCity_Gym_Text_GymGuideAdvice::
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "The doors in this GYM open when you\n"
	.string "beat the awaiting TRAINERS.\p"
	.string "Whoops! The doors in this room are\n"
	.string "already open, so don't attack me!\p"
	.string "The TRAINERS of PETALBURG GYM\n"
	.string "use all kinds of items.\p"
	.string "The door at the left leads to\n"
	.string "the SPEED ROOM.\p"
	.string "The door at the right leads to\n"
	.string "the ACCURACY ROOM.\p"
	.string "The room's name will be on\n"
	.string "the door, so choose carefully.\p"
	.string "Once you've chosen the door…\n"
	.string "Well, hey, go for it!$"

PetalburgCity_Gym_Text_GymGuidePostVictory::
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
	.string "your own father!\p"
	.string "Like, whoa!\n"
	.string "What a stunning turn of events!$"

PetalburgCity_Gym_Text_RandallIntro::
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
	.string "opponent…\p"
	.string "Just that alone puts me at a great\n"
	.string "advantage, don't you agree?$"

PetalburgCity_Gym_Text_RandallDefeat::
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"

PetalburgCity_Gym_Text_RandallPostBattle::
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
	.string "challenge awaits you.\p"
	.string "At the left is the CONFUSION ROOM.\p"
	.string "The right door leads to the DEFENSE\n"
	.string "ROOM.$"

PetalburgCity_Gym_Text_RandallPostBadge::
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
	.string "may lose to, you never shirk from\l"
	.string "training yourself and your POKéMON.\p"
	.string "That's what I think being a\n"
	.string "GYM LEADER is all about.$"

PetalburgCity_Gym_Text_ParkerIntro::
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
	.string "Let me see how well bonded you are\n"
	.string "with your POKéMON!$"

PetalburgCity_Gym_Text_ParkerDefeat::
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
	.string "You share a strong bond together.$"

PetalburgCity_Gym_Text_ParkerPostBattle::
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
	.string "Can you withstand brute force?$"

PetalburgCity_Gym_Text_ParkerPostBadge::
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
	.string "training has become a lot tougher.$"

PetalburgCity_Gym_Text_GeorgeIntro::
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
	.string "win, your opponent restores HP…\p"
	.string "Can you just imagine how awful that\n"
	.string "must feel?\p"
	.string "I'll show you exactly how awful it\n"
	.string "feels!$"

PetalburgCity_Gym_Text_GeorgeDefeat::
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
	.string "What ATTACK power…$"

PetalburgCity_Gym_Text_GeorgePostBattle::
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
	.string "our LEADER's kid.\p"
	.string "No, wait! A TRAINER's abilities are\n"
	.string "earned only through effort.\p"
	.string "I lost because my own efforts\n"
	.string "weren't enough.\p"
	.string "Go on! The ONE-HIT KO ROOM is next.$"

PetalburgCity_Gym_Text_GeorgePostBadge::
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
	.string "One day, I'll become a LEADER.$"

PetalburgCity_Gym_Text_BerkeIntro::
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
	.string "because you're our LEADER's kid.\p"
	.string "I'll show you how horrid it is for\n"
	.string "a POKéMON to take a critical hit!$"

PetalburgCity_Gym_Text_BerkeDefeat::
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
	.string "You're the real deal.$"

PetalburgCity_Gym_Text_BerkePostBattle::
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
	.string "He's a TRAINER worth my respect.\p"
	.string "And, I sense the same glow coming\n"
	.string "from you as your father.\p"
	.string "I hope that you'll stage a terrific\n"
	.string "battle with your father!$"

PetalburgCity_Gym_Text_BerkePostBadge::
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the LEADER,\n"
	.string "the TRAINERS of PETALBURG CITY have\l"
	.string "become a lot tougher.$"

PetalburgCity_Gym_Text_MaryIntro::
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
	.string "This is the ACCURACY ROOM.\p"
	.string "It's pretty nasty when every attack\n"
	.string "lands without fail.$"

PetalburgCity_Gym_Text_MaryDefeat::
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"

PetalburgCity_Gym_Text_MaryPostBattle::
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
	.string "TRAINERS waiting for you.\p"
	.string "The left is the DEFENSE ROOM, and\n"
	.string "the right is the RECOVERY ROOM.\p"
	.string "Your POKéMON's ATTACK power will be\n"
	.string "on trial either way.$"

PetalburgCity_Gym_Text_MaryPostBadge::
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
	.string "achieve as TRAINERS?\p"
	.string "We're striving to become soul mates\n"
	.string "with our POKéMON.$"

PetalburgCity_Gym_Text_AlexiaIntro::
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
	.string "reckless I can be in attack.$"

PetalburgCity_Gym_Text_AlexiaDefeat::
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"

PetalburgCity_Gym_Text_AlexiaPostBattle::
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
	.string "lesson here.\p"
	.string "Now, go on! The left door goes to\n"
	.string "the STRENGTH ROOM.\p"
	.string "The right door opens to\n"
	.string "the ONE-HIT KO ROOM.\p"
	.string "Both of them have TRAINERS who are\n"
	.string "skilled at offense.$"

PetalburgCity_Gym_Text_AlexiaPostBadge::
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"

PetalburgCity_Gym_Text_JodyIntro::
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
	.string "and beat you.\p"
	.string "Even if you happen to be the\n"
	.string "LEADER's kid!$"

PetalburgCity_Gym_Text_JodyDefeat::
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"

PetalburgCity_Gym_Text_JodyPostBattle::
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your POKéMON…\n"
	.string "It's like your father's style.\p"
	.string "Go on through! The GYM LEADER, your\n"
	.string "father, is waiting!$"

PetalburgCity_Gym_Text_JodyPostBadge::
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your POKéMON\n"
	.string "stronger.\p"
	.string "But what decides the winner?\p"
	.string "Why, it's the feelings TRAINERS have\n"
	.string "for their POKéMON.$"

PetalburgCity_Gym_Text_DoorAppearsLocked::
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
	.string "right now…$"

PetalburgCity_Gym_Text_EnterSpeedRoom::
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterAccuracyRoom::
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterConfusionRoom::
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterDefenseRoom::
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterRecoveryRoom::
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterStrengthRoom::
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterOHKORoom::
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterGymLeadersRoom::
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
	.string "“See for yourself what POKéMON await\n"
	.string "you!” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_GymStatue::
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"

PetalburgCity_Gym_Text_GymStatueCertified::
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
	.string "NORMAN'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

PetalburgCity_Gym_Text_NormanPreRematch::
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
	.string "I had a feeling that you would come.\p"
	.string "I would never refuse to accept\n"
	.string "a challenge from you.\p"
	.string "You do understand, don't you?\p"
	.string "Inside a GYM, it doesn't matter that\n"
	.string "we are a parent and child.\p"
	.string "…No, because we are parent and child,\n"
	.string "we owe it to each other to do the best\l"
	.string "we can. Isn't that right, {PLAYER}?$"

PetalburgCity_Gym_Text_NormanRematchDefeat::
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
	.string "Maybe that was going too hard…$"

PetalburgCity_Gym_Text_NormanPostRematch::
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
	.string "What is your dream?\p"
	.string "My dream…\n"
	.string "Hahaha…\l"
	.string "It has already come true, actually.$"

PetalburgCity_Gym_Text_NormanRematchNeedTwoMons::
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
	.string "I had a feeling that you would come.\p"
	.string "I would never refuse to accept\n"
	.string "a challenge from you.\p"
	.string "You do understand, don't you?\p"
	.string "Inside a GYM, it doesn't matter that\n"
	.string "we are a parent and child.\p"
	.string "Hm? Wait a second, {PLAYER}.\p"
	.string "Do you only have one POKéMON that is\n"
	.string "capable of battle?\p"
	.string "Sorry, but you'll have to come back\n"
	.string "with at least two POKéMON.$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_0::
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sabes, {PLAYER}, no soy exactamente\n"
	.string "un buen padre, ni un buen marido,\l"
	.string "tampoco.\p"
	.string "No paso casi nada de tiempo contigo o\n"
	.string "con tu Mamá como debería, pero, creéme,\l"
	.string "hago lo mejor que puedo.\p"
	.string "He estado tan estresado últimamente,\n"
	.string "tan ocupado con cosas que me\l"
	.string "encantaría poder discutir contigo, que\l"
	.string "no me he dado cuenta hasta que vi lo\l"
	.string "mucho que a {RIVAL} le afecta no\l"
	.string "ver a su padre casi nunca...$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_1::
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sólo prométeme, que cuando llegue el\n"
	.string "momento de que sepas porqué, me\l"
	.string "perdones.$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_2::
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Será difícil, pero intentaré lo más que\n"
	.string "pueda pasar algo más de tiempo\l"
	.string "contigo, a lo mejor pueda ir a verte en\l"
	.string "el camino.$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_3::
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pero, ¿sabes?\p"
	.string "Estoy muy orgulloso de ti, {PLAYER}.\p"
	.string "Mira lo lejos que has llegado en tan\n"
	.string "poco tiempo. Mira lo mucho que tú y tus\l"
	.string "Pokémon han crecido.$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_4::
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Puede que no lo demuestre, pero en\n"
	.string "serio, en serio es un honor ser el padre\l"
	.string "de un{A} jovencit{OA} tan poderos{OA} como tú,\l"
	.string "{PLAYER}.$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_5::
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sabes tanto de Pokémon, que incluso si\n"
	.string "no llegases a ganar la Liga Pokémon,\l"
	.string "aún podrías tener un trabajo como\l"
	.string "Recuerda-Movimientos.\p"
	.string "¡No creas que no noté que puedes\n"
	.string "ayudar a tus Pokémon a recordar\l"
	.string "movimientos que habían olvidado!\p"
	.string "Eso habla mucho de tu talento, y de tu\n"
	.string "conocimiento, pero, por sobre todo,\l"
	.string "habla de lo mucho que te esfuerzas por\l"
	.string "mejorar.$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_6::
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Es algo que casi nadie puede hacer, e\n"
	.string "incluso después de tantos años de\l"
	.string "experiencia, ni yo aprendí como.\l"
	.string "Y desde que el anterior\l"
	.string "Recueda-Movimientos falleció, ya no\l"
	.string "hay alguien que ayude a los\l"
	.string "Entrenadores de ese modo.$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_7::
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sólo...\p"
	.string "No cobres con Escamas Corazón... Ya no\n"
	.string "son aceptadas como medio de pago...$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_8::
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pero también debes saber, que {COLOR BLUE}siempre\n"
	.string "podemos aprender nuevas cosas{COLOR DARK_GRAY}, y ser\l"
	.string "más fuertes de lo que jamás pensamos.\p"
	.string "Por ejemplo, entrenar tan duramente\n"
	.string "con mi Slaking lo llevó a aprender\l"
	.string "{COLOR RED}Intercambio{COLOR DARK_GRAY}, después de tanto\l"
	.string "intentar sobrepasar su Habilidad\l"
	.string "desventajosa...\p"
	.string "Yo creo, que si te sigues esforzando,\n"
	.string "llegarás incluso a ser un Tutor de\l"
	.string "Movimientos.$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_9::
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hace poco compré este nuevo libro, y\n"
	.string "pensaba dártelo en tu cumpleaños, pero\l"
	.string "supongo que es mejor dártelo ahora.\p"
	.string "Habla de la Crianza Pokémon, algo que\n"
	.string "seguro ya conoces, pero también, va en\l"
	.string "mucha profundidad sobre nuevos\l"
	.string "descubrimientos sobre Movimientos\l"
	.string "Pokémon. Específicamente, sobre\l"
	.string "{COLOR BLUE}Movimientos de Nivel 1{COLOR DARK_GRAY}.\p"
	.string "Hace tiempo, se creía que los Pokémon\n"
	.string "de Nivel 1 sabían Movimientos que\l"
	.string "tenían desde que eran un Huevo, pero\l"
	.string "hasta hace poco se descubrió que la\l"
	.string "familia de los Recuerda-Movimientos\l"
	.string "tenía una técnica secreta para ayudar\l"
	.string "a los Pokémon a aprender Movimientos\l"
	.string "especiales: {COLOR BLUE}Esos son lo que ahora\l"
	.string "conocemos como Movimientos de Nivel 1{COLOR DARK_GRAY}.$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_10::
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "En total honestidad, no lo entiendo\n"
	.string "mucho.$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_11::
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pero sé que a tí te encantará tenerlo.\n"
	.string "Consíderalo un regalo de compensación\l"
	.string "por lo poco que estuve con tu Mamá y\l"
	.string "contigo desde que nos mudamos.$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_12::
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Bueno!\n"
	.string "¡Suficiente charla por hoy!\p"
	.string "Espero te haya servido de algo.\p"
	.string "Y, de nuevo, perdóname.$"

PetalburgCity_Gym_EventScript_SeriousTalk_Text_13::
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Ahora puedes ayudar a tus Pokémon a\n"
	.string "recordar Movimientos de Nivel 1!$"
