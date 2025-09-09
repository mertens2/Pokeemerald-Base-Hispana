# 1 "data/maps/LavaridgeTown_House/scripts.pory"

# 2 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_MapScripts::
# 3 "data/maps/LavaridgeTown_House/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_House/scripts.pory"

# 5 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_EventScript_OldMan::
# 6 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_Text_WifeWarmingEggInHotSprings, MSGBOX_NPC
# 7 "data/maps/LavaridgeTown_House/scripts.pory"
	end
# 8 "data/maps/LavaridgeTown_House/scripts.pory"

# 9 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_EventScript_Zigzagoon::
# 10 "data/maps/LavaridgeTown_House/scripts.pory"
	lock
# 11 "data/maps/LavaridgeTown_House/scripts.pory"
	faceplayer
# 12 "data/maps/LavaridgeTown_House/scripts.pory"
	waitse
# 13 "data/maps/LavaridgeTown_House/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 14 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_Text_Zigzagoon, MSGBOX_DEFAULT
# 15 "data/maps/LavaridgeTown_House/scripts.pory"
	waitmoncry
# 16 "data/maps/LavaridgeTown_House/scripts.pory"
	release
# 17 "data/maps/LavaridgeTown_House/scripts.pory"
	end
# 18 "data/maps/LavaridgeTown_House/scripts.pory"

# 19 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_Text_WifeWarmingEggInHotSprings:
# 20 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "Mi mujer está calentando un HUEVO\n"
# 21 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "en los baños termales. Eso me ha dicho.\p"
# 22 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "Resulta que dejó a dos POKéMON en la\n"
# 23 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "GUARDERÍA… ¡y apareció ese HUEVO!$"
# 24 "data/maps/LavaridgeTown_House/scripts.pory"

# 25 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_Text_Zigzagoon:
# 26 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "ZIGZAGOON: ¡Zigzaaaa!$"
