# 1 "data/maps/FortreeCity_House5/scripts.pory"

# 2 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_MapScripts::
# 3 "data/maps/FortreeCity_House5/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House5/scripts.pory"

# 5 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_EventScript_PokefanF::
# 6 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_Text_TreeHousesAreGreat, MSGBOX_NPC
# 7 "data/maps/FortreeCity_House5/scripts.pory"
	end
# 8 "data/maps/FortreeCity_House5/scripts.pory"

# 9 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_EventScript_Man::
# 10 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_Text_AdaptedToNature, MSGBOX_NPC
# 11 "data/maps/FortreeCity_House5/scripts.pory"
	end
# 12 "data/maps/FortreeCity_House5/scripts.pory"

# 13 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_EventScript_Zigzagoon::
# 14 "data/maps/FortreeCity_House5/scripts.pory"
	lock
# 15 "data/maps/FortreeCity_House5/scripts.pory"
	faceplayer
# 16 "data/maps/FortreeCity_House5/scripts.pory"
	waitse
# 17 "data/maps/FortreeCity_House5/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 18 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_Text_Zigzagoon, MSGBOX_DEFAULT
# 19 "data/maps/FortreeCity_House5/scripts.pory"
	waitmoncry
# 20 "data/maps/FortreeCity_House5/scripts.pory"
	release
# 21 "data/maps/FortreeCity_House5/scripts.pory"
	end
# 22 "data/maps/FortreeCity_House5/scripts.pory"

# 23 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_Text_TreeHousesAreGreat:
# 24 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Las casas de ARBORADA son geniales.\p"
# 25 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Éste es el mejor pueblo para vivir con\n"
# 26 "data/maps/FortreeCity_House5/scripts.pory"
	.string "los POKéMON…, ¡encima de un árbol!$"
# 27 "data/maps/FortreeCity_House5/scripts.pory"

# 28 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_Text_AdaptedToNature:
# 29 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Los POKéMON y la gente han tenido\n"
# 30 "data/maps/FortreeCity_House5/scripts.pory"
	.string "que adaptarse para sobrevivir.\p"
# 31 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Es normal, ¡la naturaleza\n"
# 32 "data/maps/FortreeCity_House5/scripts.pory"
	.string "no va a adaptarse a nosotros!$"
# 33 "data/maps/FortreeCity_House5/scripts.pory"

# 34 "data/maps/FortreeCity_House5/scripts.pory"
FortreeCity_House5_Text_Zigzagoon:
# 35 "data/maps/FortreeCity_House5/scripts.pory"
	.string "ZIGZAGOON: ¡Gungún!$"
