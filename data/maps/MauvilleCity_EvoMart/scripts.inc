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
	checkitem ITEM_RED_SHARD, 5
# 0 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_5
MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_4:
	checkitem ITEM_BLUE_SHARD, 5
# 0 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_8
MauvilleCity_EvoMart_Scripts_UltimateMoveTutor_7:
	checkitem ITEM_GREEN_SHARD, 5
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


MauvilleCity_EvoMart_Scripts_TeachSignatureMove::
# 85 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_TutorSelectMon, MSGBOX_DEFAULT
# 86 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	fadescreen FADE_TO_BLACK
# 87 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	special ChooseMonForSignatureMove
# 88 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	waitstate
# 89 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MauvilleCity_EvoMart_Scripts_TutorCancel
# 90 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	special IsSelectedMonEgg
# 91 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_EvoMart_Scripts_TeachSignatureMove_2
MauvilleCity_EvoMart_Scripts_TeachSignatureMove_1:
# 94 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq MauvilleCity_EvoMart_Scripts_TeachSignatureMove_5
MauvilleCity_EvoMart_Scripts_TeachSignatureMove_4:
	return

MauvilleCity_EvoMart_Scripts_TeachSignatureMove_2:
# 92 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_TutorCancel
	goto MauvilleCity_EvoMart_Scripts_TeachSignatureMove_1

MauvilleCity_EvoMart_Scripts_TeachSignatureMove_5:
# 95 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_TutorCancel
	goto MauvilleCity_EvoMart_Scripts_TeachSignatureMove_4


MauvilleCity_EvoMart_Scripts_TutorCancel::
# 101 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	clearflag FLAG_TEACH_SIGNATURE_MOVES
# 102 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_DeclineTutor
# 103 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	closemessage
# 104 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	releaseall
	end


MauvilleCity_EvoMart_Scripts_SignatureMoveTutor::
# 109 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	faceplayer
# 110 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_SignatureMoveTutor, MSGBOX_YESNO
# 111 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_1
# 128 "data/maps/MauvilleCity_EvoMart/scripts.pory"
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
# 125 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_TutorCancel
	return

MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_5:
# 114 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_TEMP_1, ITEM_RED_SHARD
# 115 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_4

MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_8:
# 118 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_TEMP_1, ITEM_BLUE_SHARD
# 119 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_7

MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_11:
# 122 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_TEMP_1, ITEM_GREEN_SHARD
# 123 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon
	goto MauvilleCity_EvoMart_Scripts_SignatureMoveTutor_10


MauvilleCity_EvoMart_Scripts_PledgeMoveTutor::
# 133 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	faceplayer
# 134 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_PledgeMoveTutor, MSGBOX_YESNO
# 135 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_1
# 152 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_TutorCancel
	return

MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_1:
	checkitem ITEM_RED_SHARD, 2
# 0 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_5
MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_4:
	checkitem ITEM_BLUE_SHARD, 2
# 0 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_8
MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_7:
	checkitem ITEM_GREEN_SHARD, 2
# 0 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_11
MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_10:
# 149 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_TutorCancel
	return

MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_5:
# 138 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_TEMP_1, ITEM_RED_SHARD
# 139 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon
	goto MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_4

MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_8:
# 142 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_TEMP_1, ITEM_BLUE_SHARD
# 143 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon
	goto MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_7

MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_11:
# 146 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_TEMP_1, ITEM_GREEN_SHARD
# 147 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon
	goto MauvilleCity_EvoMart_Scripts_PledgeMoveTutor_10


MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon::
# 157 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_SelectMoveTutor
# 158 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_Text_0, MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_Text_1, MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_Text_2
# 159 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	switch VAR_RESULT
# 161 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	case 0, MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_3
# 164 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	case 1, MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_4
# 167 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	case 2, MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_5
MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_1:
# 171 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	call MauvilleCity_EvoMart_Scripts_TeachMove
# 172 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	removeitem VAR_TEMP_1, 2
# 173 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	closemessage
	end

MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_3:
# 162 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_PLEDGE
	goto MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_1

MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_4:
# 165 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PLEDGE
	goto MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_1

MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_5:
# 168 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	setvar VAR_0x8005, MOVE_WATER_PLEDGE
	goto MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_1


MauvilleCity_EvoMart_Scripts_SignatureMoveTutorSelectMon::
# 178 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	call MauvilleCity_EvoMart_Scripts_TeachSignatureMove
# 179 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	special TeachSignatureMove
# 180 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	removeitem VAR_TEMP_1, 5
# 181 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	closemessage
# 182 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	clearflag FLAG_TEACH_SIGNATURE_MOVES
	end


MauvilleCity_EvoMart_Scripts_EggMoveTutor::
# 187 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_EggMoveTutor, MSGBOX_YESNO
# 188 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_EvoMart_Scripts_EggMoveTutor_2
# 207 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_TutorCancel
MauvilleCity_EvoMart_Scripts_EggMoveTutor_1:
# 209 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	releaseall
	end

MauvilleCity_EvoMart_Scripts_EggMoveTutor_2:
	checkitem ITEM_GREEN_SHARD, 10
# 0 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_EvoMart_Scripts_EggMoveTutor_6
MauvilleCity_EvoMart_Scripts_EggMoveTutor_5:
# 193 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	fadescreen FADE_TO_BLACK
# 194 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	special ChooseMonForEggMove
# 195 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	waitstate
# 196 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MauvilleCity_EvoMart_Scripts_TutorCancel
# 197 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	special IsSelectedMonEgg
# 198 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_EvoMart_Scripts_EggMoveTutor_9
MauvilleCity_EvoMart_Scripts_EggMoveTutor_8:
# 201 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq MauvilleCity_EvoMart_Scripts_EggMoveTutor_12
MauvilleCity_EvoMart_Scripts_EggMoveTutor_11:
# 204 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	special TeachEggMove
	goto MauvilleCity_EvoMart_Scripts_EggMoveTutor_1

MauvilleCity_EvoMart_Scripts_EggMoveTutor_6:
# 190 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	msgbox MauvilleCity_EvoMart_Text_EggMoveTutorNotEnough
# 191 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_TutorCancel
	goto MauvilleCity_EvoMart_Scripts_EggMoveTutor_5

MauvilleCity_EvoMart_Scripts_EggMoveTutor_9:
# 199 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_TutorCancel
	goto MauvilleCity_EvoMart_Scripts_EggMoveTutor_8

MauvilleCity_EvoMart_Scripts_EggMoveTutor_12:
# 202 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	goto MauvilleCity_EvoMart_Scripts_TutorCancel
	goto MauvilleCity_EvoMart_Scripts_EggMoveTutor_11


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

MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_Text_0:
# 158 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	.string "Voto Planta$"

MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_Text_1:
# 158 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	.string "Voto Fuego$"

MauvilleCity_EvoMart_Scripts_PledgeMoveTutorSelectMon_Text_2:
# 158 "data/maps/MauvilleCity_EvoMart/scripts.pory"
	.string "Voto Agua$"
