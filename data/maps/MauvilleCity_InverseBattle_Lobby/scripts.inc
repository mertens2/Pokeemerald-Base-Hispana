MauvilleCity_InverseBattle_Lobby_MapScripts::
# 2 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleCity_InverseBattle_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MauvilleCity_InverseBattle_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	map_script_2 VAR_INVERSE_BATTLE_TYPE, 1, MauvilleCity_InverseBattle_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

MauvilleCity_InverseBattle_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	lock
# 5 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	call MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle
# 6 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 7 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	release
# 8 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 9 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	warp MAP_MAUVILLE_CITY_INVERSE_BATTLE, 9, 8
	return


MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle::
# 16 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 17 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	waitmovement 0
# 18 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_0
# 19 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 20 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	waitmovement 0
# 21 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	setvar VAR_INVERSE_BATTLE_TYPE, 0
# 22 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	addvar VAR_INVERSE_BATTLE_FOE, 1
MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_2:
# 23 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	compare VAR_0x8000, VAR_INVERSE_BATTLE_FOE
	goto_if_eq MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_3
# 23 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	compare VAR_0x8001, VAR_INVERSE_BATTLE_FOE
	goto_if_eq MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_3
# 23 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	compare VAR_0x8002, VAR_INVERSE_BATTLE_FOE
	goto_if_eq MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_3
# 29 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_eq MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_10
# 33 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	compare VAR_0x8001, 0
	goto_if_eq MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_21
# 37 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	copyvar VAR_0x8002, VAR_INVERSE_BATTLE_FOE
MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_9:
# 41 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	switch VAR_INVERSE_BATTLE_FOE
# 42 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_15
# 47 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_16
# 52 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_17
# 57 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 4, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_18
# 62 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 5, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_19
# 67 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 6, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_20
MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_13:
	return

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_3:
# 24 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	random 5
# 25 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	copyvar VAR_INVERSE_BATTLE_FOE, VAR_RESULT
# 26 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	addvar VAR_INVERSE_BATTLE_FOE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_2

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_10:
# 30 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	copyvar VAR_0x8000, VAR_INVERSE_BATTLE_FOE
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_9

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_15:
# 43 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_VALERIE_1
# 44 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, 2, TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 45 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_VALERIE_1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_13

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_16:
# 48 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_CINDY_2
# 49 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, 2, TRAINER_CINDY_2, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_1, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_2, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 50 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_CINDY_2
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_13

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_17:
# 53 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_GRUNT_SPACE_CENTER_2
# 54 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, 2, TRAINER_GRUNT_SPACE_CENTER_2, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_3, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_4, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 55 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_GRUNT_SPACE_CENTER_2
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_13

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_18:
# 58 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ROSE_1
# 59 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, 2, TRAINER_ROSE_1, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_5, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_6, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 60 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ROSE_1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_13

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_19:
# 63 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_DALTON_1
# 64 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, 2, TRAINER_DALTON_1, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_7, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_8, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 65 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_DALTON_1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_13

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_20:
# 68 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_DEREK
# 69 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, 2, TRAINER_DEREK, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_9, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_10, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 70 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_DEREK
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_13

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_21:
# 34 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	copyvar VAR_0x8001, VAR_INVERSE_BATTLE_FOE
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_9


MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle::
# 77 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	addvar VAR_WINNING_STREAK, 1
# 78 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	compare VAR_WINNING_STREAK, 4
	goto_if_ge MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_2
# 152 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	clearflag B_FLAG_INVERSE_BATTLE
# 153 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	random 4
# 154 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 155 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	waitmovement 0
# 156 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_15
# 157 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	switch VAR_RESULT
# 159 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_6
# 162 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_7
# 165 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_8
# 168 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_9
MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_4:
# 173 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	compare VAR_WINNING_STREAK, 3
	goto_if_ge MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_17
# 185 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_20, MSGBOX_YESNO
# 186 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_36
MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_16:
# 192 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_21
# 193 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	closemessage
# 194 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	delay 16
# 195 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	setvar VAR_WINNING_STREAK, 0
# 196 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 197 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	warp MAP_MAUVILLE_CITY_INVERSE_BATTLE, 9, 8
	end

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_2:
# 79 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 80 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	waitmovement 0
# 81 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_0
# 82 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_BLUE_SHARD, 5
# 83 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_YELLOW_SHARD, 5
# 84 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_GREEN_SHARD, 5
# 85 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_RED_SHARD, 5
# 86 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	setvar VAR_0x8000, 0
# 87 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	setvar VAR_0x8001, 0
# 88 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	setvar VAR_0x8002, 0
# 89 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_1
# 90 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	random 5
# 91 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_12
# 96 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_13
# 99 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_14
# 121 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_15
MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_10:
# 144 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_14
# 145 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	closemessage
# 146 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	delay 16
# 147 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	setvar VAR_WINNING_STREAK, 0
# 148 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 149 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	warp MAP_MAUVILLE_CITY_INVERSE_BATTLE, 9, 8
	end

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_6:
# 160 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_RED_SHARD, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_4

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_7:
# 163 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_BLUE_SHARD, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_4

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_8:
# 166 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_GREEN_SHARD, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_4

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_9:
# 169 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_YELLOW_SHARD, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_4

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_12:
# 94 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 2
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_10

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_13:
# 97 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_SACRED_ASH, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_10

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_14:
# 100 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_2
# 101 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_3, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_4, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_5, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_6, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_7
# 102 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	switch VAR_RESULT
# 103 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_22
# 106 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_23
# 109 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_24
# 112 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_25
# 115 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 4, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_26
MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_20:
# 119 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_8
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_10

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_15:
# 122 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_2
# 123 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_9, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_10, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_11, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_12, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_13
# 124 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	switch VAR_RESULT
# 125 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_29
# 128 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_30
# 131 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_31
# 134 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_32
# 137 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 4, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_33
MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_27:
# 141 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_8
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_10

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_17:
# 174 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_16
# 175 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	dynmultichoice 25, 5, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_17, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_18
# 176 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_34
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_16

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_22:
# 104 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_FIRE_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_20

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_23:
# 107 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_20

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_24:
# 110 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_THUNDER_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_20

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_25:
# 113 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_LEAF_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_20

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_26:
# 116 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_MOON_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_20

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_29:
# 126 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_27

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_30:
# 129 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_DAWN_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_27

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_31:
# 132 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_SHINY_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_27

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_32:
# 135 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_DUSK_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_27

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_33:
# 138 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_ICE_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_27

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_34:
# 177 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_19
# 178 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 179 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	random 6
# 180 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	copyvar VAR_INVERSE_BATTLE_FOE, VAR_RESULT
# 181 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	call MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_16

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_36:
# 187 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	random 6
# 188 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	copyvar VAR_INVERSE_BATTLE_FOE, VAR_RESULT
# 189 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	call MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_16


MauvilleCity_InverseBattle_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 6 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Algo malo pasó.$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_0:
# 18 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "La batalla emperzará.$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_1:
# 49 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Mi estrategia te paralizará!$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_2:
# 49 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Ah, pues nada.$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_3:
# 54 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¿Qué? ¡Tengo hobbies!$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_4:
# 54 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Soy terrible en mis\nhobbies…$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_5:
# 59 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Estoy aquí para redimirme!$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_6:
# 59 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "La redención…\nNo la merezco…$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_7:
# 64 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Aplaudan fuerte, gente bonita!$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_8:
# 64 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Aplausos fuertes para\nnuestr{OA} ganador{A}!\p¡Vamo', vamo', vamo'!$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_9:
# 69 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Bichos… ¡Aprenderás a temerles!$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_10:
# 69 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Bichos… ¡Aprendí a fallarles!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_0:
# 81 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Ganaste el torneo!\p"
	.string "¡Quedaste en primer lugar!\p"
	.string "¡Tienes derecho a un paquete completo\n"
	.string "de Partes!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_1:
# 89 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Y eso no es todo!\p"
	.string "Un segundo premio te espera… ¿Qué\n"
	.string "será…?$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_2:
# 100 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Estás de suerte! ¡Puedes elegir tu\n"
	.string "recompensa de esta lista!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_3:
# 101 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Fuego$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_4:
# 101 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Agua$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_5:
# 101 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Trueno$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_6:
# 101 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Hoja$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_7:
# 101 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Lunar$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_8:
# 119 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Espero disfrute su elección! ¡No hay\n"
	.string "cambios!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_9:
# 123 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Solar$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_10:
# 123 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Alba$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_11:
# 123 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Día$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_12:
# 123 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Noche$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_13:
# 123 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Hielo$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_14:
# 144 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Vuelve pronto a participar!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_15:
# 156 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Aquí tienes, por ganar!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_16:
# 174 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "La final… Aquí se decidirá todo…\p"
	.string "¿A menos que te quieras rendir?$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_17:
# 175 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Seguir con todo!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_18:
# 175 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Retirarse con cobardía!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_19:
# 177 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Déjame curar a tus Pokémon para la\n"
	.string "final!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_20:
# 185 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¿Quieres seguir?$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_21:
# 192 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡No te preocupes!\n"
	.string "¡Vuelve pronto a participar!$"
