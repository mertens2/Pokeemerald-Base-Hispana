LavaridgeTown_House_3_MapScripts::
	.byte 0


LavaridgeTown_House_3_EventScript_Skitty::
# 4 "data/maps/LavaridgeTown_House_3/scripts.pory"
	moncryscript SPECIES_SKITTY, LavaridgeTown_House_3_EventScript_Skitty_Text_0
	return


LavaridgeTown_House_3_EventScript_Delcatty::
# 8 "data/maps/LavaridgeTown_House_3/scripts.pory"
	moncryscript SPECIES_DELCATTY, LavaridgeTown_House_3_EventScript_Delcatty_Text_0
	return


LavaridgeTown_House_3_EventScript_Purrloin::
# 12 "data/maps/LavaridgeTown_House_3/scripts.pory"
	moncryscript SPECIES_PURRLOIN, LavaridgeTown_House_3_EventScript_Purrloin_Text_0
	return


LavaridgeTown_House_3_EventScript_Wife1::
# 16 "data/maps/LavaridgeTown_House_3/scripts.pory"
	faceplayer
# 17 "data/maps/LavaridgeTown_House_3/scripts.pory"
	lockall
# 18 "data/maps/LavaridgeTown_House_3/scripts.pory"
	msgbox LavaridgeTown_House_3_Text_Wife1
# 19 "data/maps/LavaridgeTown_House_3/scripts.pory"
	releaseall
	return


LavaridgeTown_House_3_EventScript_Wife2::
# 23 "data/maps/LavaridgeTown_House_3/scripts.pory"
	faceplayer
# 24 "data/maps/LavaridgeTown_House_3/scripts.pory"
	lockall
# 25 "data/maps/LavaridgeTown_House_3/scripts.pory"
	msgbox LavaridgeTown_House_3_Text_Wife2
# 26 "data/maps/LavaridgeTown_House_3/scripts.pory"
	releaseall
	return


LavaridgeTown_House_3_EventScript_Skitty_Text_0:
# 4 "data/maps/LavaridgeTown_House_3/scripts.pory"
	.string "¡Skiiiiii!$"

LavaridgeTown_House_3_EventScript_Delcatty_Text_0:
# 8 "data/maps/LavaridgeTown_House_3/scripts.pory"
	.string "¡Catty, catty!$"

LavaridgeTown_House_3_EventScript_Purrloin_Text_0:
# 12 "data/maps/LavaridgeTown_House_3/scripts.pory"
	.string "¡Puurrrrrr!$"
