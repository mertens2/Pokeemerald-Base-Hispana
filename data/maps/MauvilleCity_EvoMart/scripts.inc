MauvilleCity_EvoMart_MapScripts::
	.byte 0


MauvilleCity_EvoMart_Scripts_Azurill::
# 5 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	faceplayer
# 6 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Scripts_Azurill_Text_0
# 7 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	closemessage
# 8 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	releaseall
	return


MauvilleCity_EvoMart_Scripts_AzurillGirl::
# 12 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	faceplayer
# 13 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_AzurillGirl
# 14 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	closemessage
# 15 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	releaseall
	return


MauvilleCity_EvoMart_Scripts_HereToBuy::
# 19 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	faceplayer
# 20 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_HereToBuy
# 21 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	closemessage
# 22 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	releaseall
	return


MauvilleCity_EvoMart_Scripts_UltimateMoveTutor::
# 26 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	faceplayer
# 27 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_UltimateMoveTutor, MSGBOX_YESNO
# 28 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_1
# 44 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_TutorCancel
	return

MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_1:
	checkitem ITEM_RED_SHARD
# 0 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_5
MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_4:
	checkitem ITEM_BLUE_SHARD
# 0 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_8
MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_7:
	checkitem ITEM_GREEN_SHARD
# 0 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_10
	return

MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_5:
# 31 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_TEMP_1, ITEM_RED_SHARD
# 32 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove
	goto MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_4

MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_8:
# 35 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_TEMP_1, ITEM_BLUE_SHARD
# 36 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove
	goto MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_7

MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_10:
# 39 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_TEMP_1, ITEM_GREEN_SHARD
# 40 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove
	return


MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove::
# 49 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_SelectMoveTutor
# 50 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_0, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_1, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_2, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_3, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_4
# 51 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	switch VAR_RESULT
# 53 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	case 0, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_3
# 56 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	case 1, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_4
# 59 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	case 2, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_5
# 62 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	case 3, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_6
# 65 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	case 4, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_7
MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_1:
# 69 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	call MauvilleCity_EvoMart_Scripts_TeachMove
# 70 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	removeitem VAR_TEMP_1, 1
# 71 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	closemessage
	end

MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_3:
# 54 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
	goto MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_1

MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_4:
# 57 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAST_BURN
	goto MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_1

MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_5:
# 60 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
	goto MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_1

MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_6:
# 63 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_0x8005, MOVE_OUTRAGE
	goto MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_1

MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_7:
# 66 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_0x8005, MOVE_MISTY_EXPLOSION
	goto MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_1


MauvilleCity_EvoMart_Scripts_TeachMove::
# 76 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_TutorSelectMon, MSGBOX_DEFAULT
# 77 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	special ChooseMonForMoveTutor
# 79 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	waitstate
# 80 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_EvoMart_Scripts_TutorCancel
	return


MauvilleCity_EvoMart_Scripts_TutorCancel::
# 85 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_DeclineTutor
# 86 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	closemessage
# 87 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	releaseall
	end


MauvilleCity_EvoMart_Scripts_SignatureMoveTutor::
# 92 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	faceplayer
# 93 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_SignatureMoveTutor, MSGBOX_YESNO
# 94 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_1
# 111 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_TutorCancel
	return

MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_1:
	checkitem ITEM_RED_SHARD, 5
# 0 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_5
MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_4:
	checkitem ITEM_BLUE_SHARD, 5
# 0 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_8
MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_7:
	checkitem ITEM_GREEN_SHARD, 5
# 0 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_11
MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_10:
# 108 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_TutorCancel
	return

MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_5:
# 97 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_TEMP_1, ITEM_RED_SHARD
# 98 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_4

MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_8:
# 101 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_TEMP_1, ITEM_BLUE_SHARD
# 102 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_7

MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_11:
# 105 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_TEMP_1, ITEM_GREEN_SHARD
# 106 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_10


MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon::
# 116 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_SelectMoveTutor
# 117 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_0, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_1, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_2, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_3, MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_4
# 118 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	switch VAR_RESULT
# 120 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	case 0, MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_3
# 123 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	case 1, MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_4
# 126 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	case 2, MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_5
# 129 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	case 3, MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_6
# 132 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	case 4, MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_7
MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_1:
# 136 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	call MauvilleCity_EvoMart_Scripts_TeachMove
# 137 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	removeitem VAR_TEMP_1, 5
# 138 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	closemessage
	end

MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_3:
# 121 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_1

MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_4:
# 124 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAST_BURN
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_1

MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_5:
# 127 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_1

MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_6:
# 130 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_0x8005, MOVE_OUTRAGE
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_1

MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_7:
# 133 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_0x8005, MOVE_MISTY_EXPLOSION
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon_1


MauvilleCity_EvoMart_Scripts_Azurill_Text_0:
# 6 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	.string "Uuuuu…$"

MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_0:
# 50 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	.string "Planta Feroz$"

MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_1:
# 50 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	.string "Anillo de Fuego$"

MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_2:
# 50 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	.string "Hidrocañón$"

MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_3:
# 50 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	.string "Enfado$"

MauvilleCity_EvoMart_Scripts_UltimateMoveTutorSelectMove_Text_4:
# 50 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	.string "Bruma Explosiva$"
