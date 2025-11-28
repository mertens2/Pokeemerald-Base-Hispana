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
	return


MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle::
# 14 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 15 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	waitmovement 0
# 16 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_0
# 17 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 18 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	waitmovement 0
# 19 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	setvar VAR_INVERSE_BATTLE_TYPE, 0
# 20 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	switch VAR_INVERSE_BATTLE_FOE
# 21 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_3
# 25 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_4
# 29 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_5
# 33 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_6
# 37 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 4, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_7
# 42 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_GRUNT_SPACE_CENTER_2
# 43 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_2, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_3, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_4, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle
MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_1:
	return

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_3:
# 22 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_VALERIE_1
# 23 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_1

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_4:
# 26 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_CINDY_2
# 27 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	trainerbattle_single TRAINER_CINDY_2, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_1, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_2, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_1

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_5:
# 30 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_GRUNT_SPACE_CENTER_2
# 31 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_2, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_3, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_4, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_1

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_6:
# 34 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_VALERIE_1
# 35 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_1

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_7:
# 38 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	cleartrainerflag TRAINER_CINDY_2
# 39 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	trainerbattle_single TRAINER_CINDY_2, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_1, MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_2, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle
	goto MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_1


MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle::
# 50 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	addvar VAR_WINNING_STREAK, 1
# 51 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	compare VAR_WINNING_STREAK, 3
	goto_if_ge MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_2
MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_1:
# 115 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	clearflag B_FLAG_INVERSE_BATTLE
# 116 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	random 4
# 117 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 118 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	waitmovement 0
# 119 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_14
# 120 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	switch VAR_RESULT
# 122 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_6
# 125 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_7
# 128 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_8
# 131 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_9
MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_4:
# 136 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_15, MSGBOX_YESNO
# 137 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_17
MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_16:
# 142 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	warp MAP_MAUVILLE_CITY_INVERSE_BATTLE, 9, 8
	end

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_2:
# 52 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 53 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	waitmovement 0
# 54 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_0
# 55 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	random 4
# 56 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	switch VAR_RESULT
# 58 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_12
# 61 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_13
# 64 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_14
# 86 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_15
MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_10:
# 109 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_13
# 110 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	closemessage
# 111 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	delay 16
# 112 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	setvar VAR_WINNING_STREAK, 0
# 113 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	warp MAP_MAUVILLE_CITY_INVERSE_BATTLE, 9, 8
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_1

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_6:
# 123 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_RED_SHARD, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_4

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_7:
# 126 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_BLUE_SHARD, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_4

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_8:
# 129 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_GREEN_SHARD, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_4

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_9:
# 132 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_YELLOW_SHARD, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_4

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_12:
# 59 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 5
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_10

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_13:
# 62 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_SACRED_ASH, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_10

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_14:
# 65 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_1
# 66 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_2, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_3, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_4, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_5, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_6
# 67 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	switch VAR_RESULT
# 68 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_21
# 71 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_22
# 74 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_23
# 77 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_24
# 80 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 4, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_25
MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_19:
# 84 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_7
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_10

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_15:
# 87 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_1
# 88 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_8, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_9, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_10, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_11, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_12
# 89 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_28
# 93 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_29
# 96 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_30
# 99 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_31
# 102 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	case 4, MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_32
MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_26:
# 106 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_7
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_10

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_17:
# 138 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	random 6
# 139 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	copyvar VAR_INVERSE_BATTLE_FOE, VAR_RESULT
# 140 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	call MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_16

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_21:
# 69 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_FIRE_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_19

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_22:
# 72 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_19

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_23:
# 75 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_THUNDER_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_19

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_24:
# 78 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_LEAF_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_19

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_25:
# 81 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_MOON_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_19

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_28:
# 91 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_26

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_29:
# 94 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_DAWN_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_26

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_30:
# 97 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_SHINY_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_26

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_31:
# 100 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_DUSK_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_26

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_32:
# 103 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	giveitem ITEM_ICE_STONE, 1
	goto MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_26


MauvilleCity_InverseBattle_Lobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 6 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Algo malo pasó.$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_0:
# 16 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "La batalla emperzará.$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_1:
# 27 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Mi estrategia te paralizará!$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_2:
# 27 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Ah, pues nada.$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_3:
# 31 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¿Qué? ¡Tengo hobbies!$"

MauvilleCity_InverseBattle_Lobby_Scripts_StartBattle_Text_4:
# 31 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Soy terrible en mis\nhobbies…$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_0:
# 54 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Ganaste el torneo!\p"
	.string "¡Quedaste en primer lugar!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_1:
# 65 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Estás de suerte! ¡Puedes elegir tu\n"
	.string "recompensa de esta lista!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_2:
# 66 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Fuego$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_3:
# 66 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Agua$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_4:
# 66 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Trueno$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_5:
# 66 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Hoja$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_6:
# 66 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Lunar$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_7:
# 84 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Espero disfrute su elección! ¡No hay\n"
	.string "cambios!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_8:
# 88 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Solar$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_9:
# 88 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Alba$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_10:
# 88 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Día$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_11:
# 88 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Noche$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_12:
# 88 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "Piedra Hielo$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_13:
# 109 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Vuelve pronto a participar!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_14:
# 119 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¡Aquí tienes, por ganar!$"

MauvilleCity_InverseBattle_Lobby_Scripts_EndBattle_Text_15:
# 136 "data/maps/MauvilleCity_InverseBattle_Lobby/scripts.pory"
	.string "¿Quieres seguir?$"
