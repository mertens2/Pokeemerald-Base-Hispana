LittlerootTown_MLMHouse_MapScripts::
	.byte 0


MLMHouse_EventScript_FatMan::
# 4 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED SIDE_QUEST_3
# 5 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	lockall
# 6 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	faceplayer
# 7 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	namebox Alex
# 41 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	msgbox MLMHouse_EventScript_FatMan_Text_0
# 48 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	hidenamebox
# 49 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	releaseall
	return


MLMHouse_EventScript_Daughter::
# 53 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	lockall
# 54 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	faceplayer
# 55 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	namebox Esmeralda
# 61 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	msgbox MLMHouse_EventScript_Daughter_Text_0
# 64 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	hidenamebox
# 65 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	releaseall
	return


MLMHouse_EventScript_Chimecho::
# 69 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	lockall
# 70 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	faceplayer
# 71 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	playmoncry SPECIES_CHIMECHO, CRY_MODE_NORMAL
# 72 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	releaseall
	return


MLMHouse_EventScript_FatMan_Text_0:
# 41 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	.string "¡Hola, {PLAYER}! How's the moving\n"
	.string "going?\p"
	.string "It's good to have you parents back in\n"
	.string "Hoenn.\p"
	.string "We used to be friends, them, my husband\n"
	.string "and I. We all had so much fun…$"

MLMHouse_EventScript_Daughter_Text_0:
# 61 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	.string "¡Hola! ¡Encantada!\p"
	.string "Have you met my dads' Chimecho? They've\n"
	.string "had them since they were kids!\p"
	.string "I wonder… Why do both have one?\l"
	.string "Maybe… It was a love confession!\l"
	.string "Or maybe a loyalty promise?\p"
	.string "AH, I'M SO INTRIGUED!$"
