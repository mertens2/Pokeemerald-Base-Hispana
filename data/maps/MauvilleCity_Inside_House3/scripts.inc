MauvilleCity_Inside_House3_MapScripts::
	.byte 0


MauvilleCity_Inside_House3_Scripts_Mom1::
# 5 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	lockall
# 6 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	faceplayer
# 7 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_Mom1
# 8 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	closemessage
# 9 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	releaseall
	return


MauvilleCity_Inside_House3_Scripts_Mom2::
# 13 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	lockall
# 14 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	faceplayer
# 15 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_Mom2
# 18 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	dynmultichoice 25, 6, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_Inside_House3_Scripts_Mom2_Text_0, MauvilleCity_Inside_House3_Scripts_Mom2_Text_1
# 24 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_Inside_House3_Scripts_Mom2_2
# 33 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	applymovement LOCALID_MAUVILLE_HOUSE_3_MOM_2, Common_Movement_QuestionMark
# 34 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	waitmovement 0
# 35 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_Mom2_No
MauvilleCity_Inside_House3_Scripts_Mom2_1:
# 37 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	applymovement LOCALID_MAUVILLE_HOUSE_3_MOM_1, Common_Movement_WalkInPlaceLeft
# 38 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_Mom1_Darling
# 39 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	waitmovement 0
# 40 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	closemessage
# 41 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	releaseall
	return

MauvilleCity_Inside_House3_Scripts_Mom2_2:
# 26 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	closemessage
# 27 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	playse SE_PIN
# 28 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	applymovement LOCALID_MAUVILLE_HOUSE_3_MOM_2, Common_Movement_ExclamationMark
# 29 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	waitmovement 0
# 30 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_Mom2_Yes
	goto MauvilleCity_Inside_House3_Scripts_Mom2_1


MauvilleCity_Inside_House3_Scripts_Girl::
# 45 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	lockall
# 46 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	faceplayer
# 47 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_Girl
# 48 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	closemessage
# 49 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	releaseall
	return


MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy::
# 53 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	lockall
# 54 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	faceplayer
# 55 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	goto_if_set FLAG_GOTTEN_POKEMON_FROM_HYPERFIXATED_BOY, MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_2
	setgetobjectflags VAR_LAST_TALKED, 4, TRUE, GET_EVENT_FLAG
# 0 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_3
	setgetobjectflags VAR_LAST_TALKED, 3, TRUE, GET_EVENT_FLAG
# 0 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_4
	setgetobjectflags VAR_LAST_TALKED, 2, TRUE, GET_EVENT_FLAG
# 0 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_5
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, GET_EVENT_FLAG
# 0 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_6
# 108 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_HyperfixatedBoy
# 109 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, SET_EVENT_FLAG
MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_1:
# 111 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	closemessage
# 112 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	releaseall
	return

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_2:
# 56 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_HyperfixatedBoy_Thanks
	goto MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_1

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_3:
# 59 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	random 15
# 60 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_HyperfixatedBoy_Congrats
# 61 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	dynmultichoice 25, 5, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_Text_0, MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_Text_1, MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_Text_2
# 62 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	compare VAR_0x800A, 0
	goto_if_eq MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_14
# 77 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	case 0, MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_22
# 82 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	case 1, MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_23
# 85 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	case 2, MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_24
MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_13:
# 90 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	setflag FLAG_GOTTEN_POKEMON_FROM_HYPERFIXATED_BOY
	goto MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_1

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_4:
# 93 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_HyperfixatedBoy_ColonysAid
# 94 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_HyperfixatedBoy_RewardTalkAgain
# 95 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 4, TRUE, SET_EVENT_FLAG
	goto MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_1

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_5:
# 98 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_HyperfixatedBoy_FutureVision
# 99 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_HyperfixatedBoy_OneMore
# 100 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 3, TRUE, SET_EVENT_FLAG
	goto MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_1

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_6:
# 103 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_HyperfixatedBoy_GiftGiver
# 104 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	msgbox MauvilleCity_Inside_House3_Text_HyperfixatedBoy_StillMore
# 105 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 2, TRUE, SET_EVENT_FLAG
	goto MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_1

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_14:
# 63 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	switch VAR_RESULT
# 65 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	case 0, MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_18
# 68 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	case 1, MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_19
# 71 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	case 2, MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_20
	goto MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_13

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_18:
# 66 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	givemon SPECIES_DELIBIRD, 20, ITEM_NONE, ITEM_FAST_BALL, NATURE_JOLLY, 0, 0, 0, 0, 0, 0, 0, 1, 7, 7, 7, 7, 7, 7, MOVE_PRESENT, MOVE_NATURAL_GIFT, MOVE_FLING, MOVE_BELCH, TRUE
	goto MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_13

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_19:
# 69 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	givemon SPECIES_GOTHITA, 20, ITEM_SMOKE_BALL, ITEM_DREAM_BALL, NATURE_TIMID, 0, 1, 0, 0, 0, 0, 0, 1, 7, 7, 7, 7, 7, 7, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_RECOVER, TRUE
	goto MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_13

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_20:
# 72 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	givemon SPECIES_DURANT, 20, ITEM_SITRUS_BERRY, ITEM_DUSK_BALL, NATURE_BRAVE, 0, 1, 63, 0, 0, 0, 0, 1, 7, 7, 7, 7, 7, 7, MOVE_SHIFT_GEAR, MOVE_BUG_BITE, MOVE_IRON_HEAD, MOVE_ICE_FANG, TRUE
	goto MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_13

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_22:
# 80 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	givemon SPECIES_DELIBIRD, 20, ITEM_NONE, ITEM_FAST_BALL, NATURE_JOLLY, 0, 0, 0, 0, 0, 0, 0, 1, 7, 7, 7, 7, 7, 7, MOVE_PRESENT, MOVE_NATURAL_GIFT, MOVE_FLING, MOVE_BELCH, FALSE
	goto MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_13

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_23:
# 83 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	givemon SPECIES_GOTHITA, 15, ITEM_SMOKE_BALL, ITEM_DREAM_BALL, NATURE_TIMID, 0, 1, 0, 0, 0, 0, 0, 1, 7, 7, 7, 7, 7, 7, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_RECOVER, FALSE
	goto MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_13

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_24:
# 86 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	givemon SPECIES_DURANT, 20, ITEM_SITRUS_BERRY, ITEM_DUSK_BALL, NATURE_BRAVE, 0, 1, 63, 0, 0, 0, 0, 1, 7, 7, 7, 7, 7, 7, MOVE_SHIFT_GEAR, MOVE_BUG_BITE, MOVE_IRON_HEAD, MOVE_ICE_FANG, FALSE
	goto MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_13


MauvilleCity_Inside_House3_Scripts_Mom2_Text_0:
# 18 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	.string "Asentir incómodamente$"

MauvilleCity_Inside_House3_Scripts_Mom2_Text_1:
# 18 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	.string "Dar un “NO” rotundo$"

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_Text_0:
# 61 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	.string "Delibird$"

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_Text_1:
# 61 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	.string "Gothita$"

MauvilleCity_Inside_House3_Scripts_HyperfixatedBoy_Text_2:
# 61 "data/maps/MauvilleCity_Inside_House3/scripts.pory"
	.string "Durant$"
