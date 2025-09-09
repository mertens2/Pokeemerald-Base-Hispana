# 1 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 2 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_MapScripts::
# 3 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 5 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_Clerk::
# 6 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_Mart_Pokemart
# 11 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
# 13 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 15 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Pokemart:
# 17 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 19 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 23 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 24 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 25 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 26 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 28 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_ExpertM::
# 29 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_XSpeedFirstStrike, MSGBOX_NPC
# 30 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 31 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 32 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_OldWoman::
# 33 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney, MSGBOX_NPC
# 34 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 35 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 36 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_XSpeedFirstStrike:
# 37 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Usa VELOCIDAD X para aumentar la\n"
# 38 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "VELOCIDAD de tus POKéMON en combate.\p"
# 39 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Así podrán asestar el primer golpe.\n"
# 40 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "¡Es una gran ventaja!$"
# 41 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 42 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney:
# 43 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "En la cima del MONTE CENIZO puedes\n"
# 44 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "comprar una especialidad local.\p"
# 45 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Dásela a un POKéMON: ¡se pondrá\n"
# 46 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "loco de contento!$"
