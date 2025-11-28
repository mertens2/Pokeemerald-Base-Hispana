MauvilleCity_Inside_MapScripts::
	.byte 0


MauvilleCity_Inside_Scripts_OldMan::
# 5 "data/maps/MauvilleCity_Inside/scripts.pory"
	lockall
# 6 "data/maps/MauvilleCity_Inside/scripts.pory"
	faceplayer
	checkitem ITEM_TM51
# 0 "data/maps/MauvilleCity_Inside/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_Inside_Scripts_OldMan_2
# 22 "data/maps/MauvilleCity_Inside/scripts.pory"
	msgbox MauvilleCity_Inside_Text_OldManExplainTMRound
MauvilleCity_Inside_Scripts_OldMan_1:
# 24 "data/maps/MauvilleCity_Inside/scripts.pory"
	closemessage
# 25 "data/maps/MauvilleCity_Inside/scripts.pory"
	releaseall
	return

MauvilleCity_Inside_Scripts_OldMan_2:
	setgetobjectflags VAR_LAST_TALKED, 2, TRUE, GET_EVENT_FLAG
# 0 "data/maps/MauvilleCity_Inside/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_Inside_Scripts_OldMan_5
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, GET_EVENT_FLAG
# 0 "data/maps/MauvilleCity_Inside/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_Inside_Scripts_OldMan_6
# 17 "data/maps/MauvilleCity_Inside/scripts.pory"
	msgbox MauvilleCity_Inside_Text_OldMan1
# 18 "data/maps/MauvilleCity_Inside/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, SET_EVENT_FLAG
	goto MauvilleCity_Inside_Scripts_OldMan_1

MauvilleCity_Inside_Scripts_OldMan_5:
# 9 "data/maps/MauvilleCity_Inside/scripts.pory"
	msgbox MauvilleCity_Inside_Text_OldMan3
# 10 "data/maps/MauvilleCity_Inside/scripts.pory"
	giveitem ITEM_TM51
	goto MauvilleCity_Inside_Scripts_OldMan_1

MauvilleCity_Inside_Scripts_OldMan_6:
# 13 "data/maps/MauvilleCity_Inside/scripts.pory"
	msgbox MauvilleCity_Inside_Text_OldMan2
# 14 "data/maps/MauvilleCity_Inside/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 2, TRUE, SET_EVENT_FLAG
	goto MauvilleCity_Inside_Scripts_OldMan_1


MauvilleCity_Inside_Scripts_OldWoman::
# 29 "data/maps/MauvilleCity_Inside/scripts.pory"
	lockall
# 30 "data/maps/MauvilleCity_Inside/scripts.pory"
	faceplayer
# 31 "data/maps/MauvilleCity_Inside/scripts.pory"
	msgbox MauvilleCity_Inside_Text_OldWoman
# 32 "data/maps/MauvilleCity_Inside/scripts.pory"
	closemessage
# 33 "data/maps/MauvilleCity_Inside/scripts.pory"
	releaseall
	return


MauvilleCity_Inside_Scripts_Guitarist::
# 37 "data/maps/MauvilleCity_Inside/scripts.pory"
	lockall
# 38 "data/maps/MauvilleCity_Inside/scripts.pory"
	faceplayer
# 39 "data/maps/MauvilleCity_Inside/scripts.pory"
	msgbox MauvilleCity_Inside_Text_Guitarist
# 40 "data/maps/MauvilleCity_Inside/scripts.pory"
	closemessage
# 41 "data/maps/MauvilleCity_Inside/scripts.pory"
	releaseall
	return


MauvilleCity_Inside_Scripts_AromaLady::
# 45 "data/maps/MauvilleCity_Inside/scripts.pory"
	lockall
# 46 "data/maps/MauvilleCity_Inside/scripts.pory"
	faceplayer
# 47 "data/maps/MauvilleCity_Inside/scripts.pory"
	msgbox MauvilleCity_Inside_Text_AromaLady
# 48 "data/maps/MauvilleCity_Inside/scripts.pory"
	closemessage
# 49 "data/maps/MauvilleCity_Inside/scripts.pory"
	releaseall
	return


MauvilleCity_Inside_Scripts_BlackBelt::
# 53 "data/maps/MauvilleCity_Inside/scripts.pory"
	lockall
# 54 "data/maps/MauvilleCity_Inside/scripts.pory"
	faceplayer
# 55 "data/maps/MauvilleCity_Inside/scripts.pory"
	msgbox MauvilleCity_Inside_Text_BlackBelt
# 56 "data/maps/MauvilleCity_Inside/scripts.pory"
	closemessage
# 57 "data/maps/MauvilleCity_Inside/scripts.pory"
	releaseall
	return


MauvilleCity_Inside_Scripts_Sawk::
# 61 "data/maps/MauvilleCity_Inside/scripts.pory"
	lockall
# 62 "data/maps/MauvilleCity_Inside/scripts.pory"
	faceplayer
# 63 "data/maps/MauvilleCity_Inside/scripts.pory"
	playmoncry SPECIES_SAWK, CRY_MODE_NORMAL
# 64 "data/maps/MauvilleCity_Inside/scripts.pory"
	msgbox MauvilleCity_Inside_Text_Sawk
# 65 "data/maps/MauvilleCity_Inside/scripts.pory"
	waitmoncry
# 66 "data/maps/MauvilleCity_Inside/scripts.pory"
	closemessage
# 67 "data/maps/MauvilleCity_Inside/scripts.pory"
	releaseall
	return

