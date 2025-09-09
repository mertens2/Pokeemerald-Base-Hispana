# 1 "data/maps/SootopolisCity_House4/scripts.pory"

# 2 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_MapScripts::
# 3 "data/maps/SootopolisCity_House4/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House4/scripts.pory"

# 5 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_EventScript_Man::
# 6 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_AncientTreasuresWaitingInSea, MSGBOX_NPC
# 7 "data/maps/SootopolisCity_House4/scripts.pory"
	end
# 8 "data/maps/SootopolisCity_House4/scripts.pory"

# 9 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_EventScript_Woman::
# 10 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_StrollUnderwaterWithPokemon, MSGBOX_NPC
# 11 "data/maps/SootopolisCity_House4/scripts.pory"
	end
# 12 "data/maps/SootopolisCity_House4/scripts.pory"

# 13 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_EventScript_Azumarill::
# 14 "data/maps/SootopolisCity_House4/scripts.pory"
	lock
# 15 "data/maps/SootopolisCity_House4/scripts.pory"
	faceplayer
# 16 "data/maps/SootopolisCity_House4/scripts.pory"
	waitse
# 17 "data/maps/SootopolisCity_House4/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 18 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_Azumarill, MSGBOX_DEFAULT
# 19 "data/maps/SootopolisCity_House4/scripts.pory"
	waitmoncry
# 20 "data/maps/SootopolisCity_House4/scripts.pory"
	release
# 21 "data/maps/SootopolisCity_House4/scripts.pory"
	end
# 22 "data/maps/SootopolisCity_House4/scripts.pory"

# 23 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_Text_AncientTreasuresWaitingInSea:
# 24 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Escúchame bien si quieres aprender\n"
# 25 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "algo muy interesante.\p"
# 26 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Dicen que hay unas antiguas ruinas\n"
# 27 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "cerca de aquí, en el mar.\p"
# 28 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Es posible que alberguen tesoros\n"
# 29 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "que sólo esperan a ser descubiertos.$"
# 30 "data/maps/SootopolisCity_House4/scripts.pory"

# 31 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_Text_StrollUnderwaterWithPokemon:
# 32 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Fabulosos tesoros submarinos…\p"
# 33 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Qué bonito sería que existieran\n"
# 34 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "de verdad, pero, aunque no fuera así,\l"
# 35 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "me gustaría poder dar un paseo bajo\l"
# 36 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "el agua en compañía de mi POKéMON.$"
# 37 "data/maps/SootopolisCity_House4/scripts.pory"

# 38 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_Text_Azumarill:
# 39 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "AZUMARILL: ¡Mariiiii!$"
