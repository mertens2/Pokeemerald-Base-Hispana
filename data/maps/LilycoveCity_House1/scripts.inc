# 1 "data/maps/LilycoveCity_House1/scripts.pory"

# 2 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_MapScripts::
# 3 "data/maps/LilycoveCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_House1/scripts.pory"

# 5 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_EventScript_ExpertM::
# 6 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_Text_PokemonPartnersNotTools, MSGBOX_NPC
# 7 "data/maps/LilycoveCity_House1/scripts.pory"
	end
# 8 "data/maps/LilycoveCity_House1/scripts.pory"

# 9 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_EventScript_Kecleon::
# 10 "data/maps/LilycoveCity_House1/scripts.pory"
	lock
# 11 "data/maps/LilycoveCity_House1/scripts.pory"
	faceplayer
# 12 "data/maps/LilycoveCity_House1/scripts.pory"
	waitse
# 13 "data/maps/LilycoveCity_House1/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 14 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_Text_Kecleon, MSGBOX_DEFAULT
# 15 "data/maps/LilycoveCity_House1/scripts.pory"
	waitmoncry
# 16 "data/maps/LilycoveCity_House1/scripts.pory"
	release
# 17 "data/maps/LilycoveCity_House1/scripts.pory"
	end
# 18 "data/maps/LilycoveCity_House1/scripts.pory"

# 19 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_Text_PokemonPartnersNotTools:
# 20 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "Los POKéMON son amigos de la gente,\n"
# 21 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "no sus esclavos o algo así.\p"
# 22 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "Por desgracia parece que hay gente\n"
# 23 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "que es incapaz de entender esto…$"
# 24 "data/maps/LilycoveCity_House1/scripts.pory"

# 25 "data/maps/LilycoveCity_House1/scripts.pory"
LilycoveCity_House1_Text_Kecleon:
# 26 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "KECLEON: ¿Kecle?$"
