MauvilleCity_AlolanBattle_Lobby_MapScripts::
# 2 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleCity_AlolanBattle_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MauvilleCity_AlolanBattle_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	map_script_2 VAR_INVERSE_BATTLE_TYPE, 1, MauvilleCity_AlolanBattle_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

MauvilleCity_AlolanBattle_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	lock
# 5 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	copyvar VAR_TEMP_1, VAR_OBJ_GFX_ID_0
# 6 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	addvar VAR_OBJ_GFX_ID_0, 1
# 7 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	call MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle
# 8 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 9 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	release
# 10 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 11 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	warp MAP_MAUVILLE_CITY_ALOLAN_BATTLE, 9, 7
	return


MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle::
# 18 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 19 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	waitmovement 0
# 20 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_0
# 21 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 22 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	waitmovement 0
# 23 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	addvar VAR_INVERSE_BATTLE_FOE, 1
MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_2:
# 24 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_TOURNAMENT_OPPONENT_1, VAR_INVERSE_BATTLE_FOE
	goto_if_eq MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_3
# 24 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_TOURNAMENT_OPPONENT_2, VAR_INVERSE_BATTLE_FOE
	goto_if_eq MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_3
# 28 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	addvar VAR_INVERSE_BATTLE_FOE, 1
# 29 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_TOURNAMENT_OPPONENT_1, 0
	goto_if_eq MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_8
# 32 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_TOURNAMENT_OPPONENT_2, 0
	goto_if_eq MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_9
MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_7:
# 35 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_WINNING_STREAK, 2
	goto_if_lt MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_13
# 60 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	random 3
# 61 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	addvar VAR_RESULT, 1
# 62 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	case 1, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_22
# 68 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	case 2, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_23
# 73 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	case 3, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_24
# 79 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_TRIATHLETE
# 80 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, 2, TRAINER_ALOLAN_TRIATHLETE, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_11, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_12, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle, 2, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 81 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_TRIATHLETE
MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_12:
	return

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_3:
# 25 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	random 3
# 26 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	copyvar VAR_INVERSE_BATTLE_FOE, VAR_RESULT
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_2

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_8:
# 30 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	copyvar VAR_TOURNAMENT_OPPONENT_1, VAR_INVERSE_BATTLE_FOE
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_7

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_9:
# 33 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	copyvar VAR_TOURNAMENT_OPPONENT_2, VAR_INVERSE_BATTLE_FOE
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_7

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_13:
# 36 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	switch VAR_INVERSE_BATTLE_FOE
# 37 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	case 1, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_17
# 42 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	case 2, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_18
# 47 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	case 3, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_19
# 53 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_BACKPACKER
# 54 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, 2, TRAINER_ALOLAN_BACKPACKER, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_5, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_6, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle, 2, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 55 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_BACKPACKER
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_12

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_17:
# 38 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_FISHERMAN
# 39 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, 2, TRAINER_ALOLAN_FISHERMAN, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_1, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_2, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle, 2, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 40 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_FISHERMAN
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_12

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_18:
# 43 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_BEAUTY
# 44 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, 2, TRAINER_ALOLAN_BEAUTY, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_3, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_4, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle, 2, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 45 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_BEAUTY
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_12

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_19:
# 48 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_BACKPACKER
# 49 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, 2, TRAINER_ALOLAN_BACKPACKER, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_5, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_6, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle, 2, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 50 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_BACKPACKER
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_12

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_22:
# 64 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_BREEDER
# 65 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, 2, TRAINER_ALOLAN_BREEDER, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_7, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_8, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle, 2, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 66 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_BREEDER
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_12

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_23:
# 69 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_BLACK_BELT
# 70 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, 2, TRAINER_ALOLAN_BLACK_BELT, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_9, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_10, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle, 2, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 71 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_BLACK_BELT
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_12

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_24:
# 74 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_TRIATHLETE
# 75 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	trainerbattle TRAINER_BATTLE_DOUBLE, 2, TRAINER_ALOLAN_TRIATHLETE, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_11, MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_12, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle, 2, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 76 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_ALOLAN_TRIATHLETE
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_12


MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal::
# 89 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	setvar VAR_TEMP_1, 0
# 90 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	setvar VAR_TEMP_2, 0
MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal_3:
# 92 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	random 18
# 93 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 94 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	addvar VAR_TEMP_1, 357
# 95 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	addvar VAR_TEMP_2, 1
	checkitem VAR_TEMP_1
# 0 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal_4
MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal_1:
# 97 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_TEMP_2, 18
	goto_if_ne MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal_8
# 101 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal_Text_0
# 103 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	giveitem ITEM_BLUE_SHARD, 1
# 104 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	giveitem ITEM_GREEN_SHARD, 1
# 105 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	giveitem ITEM_RED_SHARD, 1
# 106 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	giveitem ITEM_YELLOW_SHARD, 1
MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal_7:
# 108 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	setvar VAR_TEMP_1, 0
# 109 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	setvar VAR_TEMP_2, 0
	return

MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal_4:
# 96 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_TEMP_2, 18
	goto_if_ne MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal_3
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal_1

MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal_8:
# 98 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	giveitem VAR_TEMP_1, 1
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal_7


MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing::
# 113 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_ALOLAN_STREAK, 5
	goto_if_ge MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_4
MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_3:
# 121 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	goto_if_unset FLAG_RECIEVED_Z_RING, MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_2
	return

MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_1:
# 114 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_Text_0
# 115 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	setflag FLAG_RECIEVED_Z_RING
# 116 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	closemessage
# 117 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 118 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_Text_1
# 119 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	waitfanfare
	return

MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_2:
# 122 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_Text_2
# 123 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	removeitem ITEM_Z_POWER_RING, 1
# 124 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	closemessage
# 125 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_Text_3
	return

MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_4:
# 113 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	goto_if_unset FLAG_RECIEVED_Z_RING, MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_1
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_3


MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle::
# 130 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	addvar VAR_WINNING_STREAK, 1
# 131 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_WINNING_STREAK, 2
	goto_if_gt MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_2
# 149 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	random 4
# 150 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 151 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	waitmovement 0
# 152 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_2
# 154 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	switch VAR_RESULT
# 156 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	case 0, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_6
# 159 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	case 1, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_7
# 162 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	case 2, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_8
# 165 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	case 3, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_9
MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_4:
# 170 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	random 2
# 171 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_11
MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_10:
# 175 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_WINNING_STREAK, 1
	goto_if_gt MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_14
# 185 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_8, MSGBOX_YESNO
# 186 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_19
MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_13:
# 192 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	setvar VAR_WINNING_STREAK, 0
# 193 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	call MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing
# 194 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_10
# 195 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	closemessage
# 196 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	delay 16
# 197 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 198 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	warp MAP_MAUVILLE_CITY_ALOLAN_BATTLE, 9, 7
	end

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_2:
# 132 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	addvar VAR_ALOLAN_STREAK, 1
# 133 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 134 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	waitmovement 0
# 135 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_0
# 136 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	call MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal
# 137 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	setvar VAR_TOURNAMENT_OPPONENT_1, 0
# 138 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	setvar VAR_TOURNAMENT_OPPONENT_2, 0
# 139 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	setvar VAR_TOURNAMENT_OPPONENT_3, 0
# 140 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	call MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing
# 141 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_1
# 142 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	closemessage
# 143 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	delay 16
# 144 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	setvar VAR_WINNING_STREAK, 0
# 145 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 146 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	warp MAP_MAUVILLE_CITY_ALOLAN_BATTLE, 9, 7
	end

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_6:
# 157 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	giveitem ITEM_RED_SHARD, 2
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_4

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_7:
# 160 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	giveitem ITEM_BLUE_SHARD, 2
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_4

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_8:
# 163 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	giveitem ITEM_GREEN_SHARD, 2
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_4

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_9:
# 166 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	giveitem ITEM_YELLOW_SHARD, 2
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_4

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_11:
# 172 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_3
# 173 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	call MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_10

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_14:
# 176 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_4
# 177 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	dynmultichoice 25, 5, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_5, MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_6
# 178 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_17
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_13

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_17:
# 179 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_7
# 180 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 181 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	call MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_13

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_19:
# 187 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_9
# 188 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 189 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	call MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle
	goto MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_13


MauvilleCity_AlolanBattle_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 8 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "Algo malo pasó.$"

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_0:
# 20 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "La batalla emperzará.$"

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_1:
# 39 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Por mi niña, Lana!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_2:
# 39 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "Perdóname, Lana…\nTu viejo no ganó…$"

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_3:
# 44 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡La belleza ante todo!\n¡Mírame, Monh!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_4:
# 44 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "No debo sobreactuar,\n¡Preservará mi belleza!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_5:
# 49 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Así me convertiré en\nel mejor bailarín!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_6:
# 49 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "Nada que ver tuvo esto\ncon mis dotes de baile…$"

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_7:
# 65 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Las Enfermeras somos de temer!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_8:
# 65 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "Interesante…$"

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_9:
# 70 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Con todo!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_10:
# 70 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "La fuerza de la\njuventud me asombra.$"

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_11:
# 75 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Hoyo en uno!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_StartBattle_Text_12:
# 75 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "Nadie jamás había\nfallado tanto como yo…$"

MauvilleCity_AlolanBattle_Lobby_Scripts_TryGiveZCrystal_Text_0:
# 101 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Oh, lo lamento! ¡Parece que ya tienes\n"
	.string "todos los Cristales Z que podemos\l"
	.string "ofrecer!\p"
	.string "Puedes quedarte con un set de Partes\n"
	.string "como compensación.$"

MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_Text_0:
# 114 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Y eso no es todo!\p"
	.string "¡Por mantener una racha perfecta de 5\n"
	.string "torneos, puedes quedarte tu\l"
	.string "Súperpulsera Z!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_Text_1:
# 118 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Felicidades!\p"
	.string "¡Esa Súperpulsera Z al fin es tuya!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_Text_2:
# 122 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "Por favor, devuelve la Súperpulsera Z.$"

MauvilleCity_AlolanBattle_Lobby_Scripts_ShouldKeepZRing_Text_3:
# 125 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "La Súperpulsera Z prestada ha vuelto a\n"
	.string "las manos de su dueño.$"

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_0:
# 135 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Ganaste el torneo!\p"
	.string "¡Quedaste en primer lugar!\p"
	.string "¡Tienes derecho a un Cristal Z!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_1:
# 141 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Vuelve pronto a participar!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_2:
# 152 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Aquí tienes, por ganar!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_3:
# 172 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Oh, qué suerte tienes!\p"
	.string "¡También consigues un Cristal Z\n"
	.string "adelantado!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_4:
# 176 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "La final… Aquí se decidirá todo…\p"
	.string "¿A menos que te quieras rendir?$"

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_5:
# 177 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Seguir con todo!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_6:
# 177 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Retirarse con cobardía!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_7:
# 179 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Déjame curar a tus Pokémon para la\n"
	.string "final!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_8:
# 185 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¿Quieres seguir?$"

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_9:
# 187 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡Déjame curar a tus Pokémon!$"

MauvilleCity_AlolanBattle_Lobby_Scripts_EndBattle_Text_10:
# 194 "data/maps/MauvilleCity_AlolanBattle_Lobby/scripts.pory"
	.string "¡No te preocupes!\n"
	.string "¡Vuelve pronto a participar!$"
