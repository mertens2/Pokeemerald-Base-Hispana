LavaridgeTown_House_2_MapScripts::
	.byte 0


LavaridgeTown_House_2_EventScript_FlanneryGrandma::
# 5 "data/maps/LavaridgeTown_House_2/scripts.pory"
	lockall
# 6 "data/maps/LavaridgeTown_House_2/scripts.pory"
	faceplayer
# 7 "data/maps/LavaridgeTown_House_2/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, LavaridgeTown_House_2_EventScript_FlanneryGrandma_2
# 10 "data/maps/LavaridgeTown_House_2/scripts.pory"
	goto_if_unset FLAG_HIDE_WALLY_LAVARIDGE, LavaridgeTown_House_2_EventScript_FlanneryGrandma_3
# 14 "data/maps/LavaridgeTown_House_2/scripts.pory"
	msgbox LavaridgeTown_House_2_Text_FlanneryGrandmaProud
LavaridgeTown_House_2_EventScript_FlanneryGrandma_1:
# 16 "data/maps/LavaridgeTown_House_2/scripts.pory"
	releaseall
	return

LavaridgeTown_House_2_EventScript_FlanneryGrandma_2:
# 8 "data/maps/LavaridgeTown_House_2/scripts.pory"
	msgbox LavaridgeTown_House_2_Text_FlanneryGrandma
	goto LavaridgeTown_House_2_EventScript_FlanneryGrandma_1

LavaridgeTown_House_2_EventScript_FlanneryGrandma_3:
# 11 "data/maps/LavaridgeTown_House_2/scripts.pory"
	msgbox LavaridgeTown_House_2_Text_FlanneryGrandmaRelieved
	goto LavaridgeTown_House_2_EventScript_FlanneryGrandma_1


LavaridgeTown_House_2_EventScript_FlanneryBrother::
# 21 "data/maps/LavaridgeTown_House_2/scripts.pory"
	lockall
# 22 "data/maps/LavaridgeTown_House_2/scripts.pory"
	faceplayer
# 23 "data/maps/LavaridgeTown_House_2/scripts.pory"
	goto_if_set FLAG_HIDE_WALLY_LAVARIDGE, LavaridgeTown_House_2_EventScript_FlanneryBrother_2
# 27 "data/maps/LavaridgeTown_House_2/scripts.pory"
	msgbox LavaridgeTown_House_2_Text_FlanneryBrother
LavaridgeTown_House_2_EventScript_FlanneryBrother_1:
# 29 "data/maps/LavaridgeTown_House_2/scripts.pory"
	releaseall
	return

LavaridgeTown_House_2_EventScript_FlanneryBrother_2:
# 24 "data/maps/LavaridgeTown_House_2/scripts.pory"
	msgbox LavaridgeTown_House_2_Text_FlanneryBrotherPostWally
	goto LavaridgeTown_House_2_EventScript_FlanneryBrother_1

