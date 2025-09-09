# 1 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
# 9 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_SOOTOPOLIS_NURSE
# 13 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 21 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 22 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 23 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
# 24 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge, MSGBOX_DEFAULT
# 25 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 26 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries::
# 29 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn, MSGBOX_DEFAULT
# 30 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 31 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_Woman::
# 34 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	lock
# 35 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 36 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 37 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
# 38 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends, MSGBOX_DEFAULT
# 39 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 40 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 41 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries::
# 43 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	msgbox SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon, MSGBOX_DEFAULT
# 44 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	release
# 45 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	end
# 46 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 47 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn:
# 48 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Dicen que PLUBIO es el mejor\n"
# 49 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "ENTRENADOR de HOENN.\p"
# 50 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "El GIMNASIO de este lugar está\n"
# 51 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "dirigido por el maestro de PLUBIO.\p"
# 52 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Pero los del ALTO MANDO… son aún\n"
# 53 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "más fuertes que el mentor de PLUBIO.\p"
# 54 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "No me lo puedo ni imaginar…$"
# 55 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 56 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge:
# 57 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Todo el mundo se ha escondido\n"
# 58 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "en su casa y no quiere salir.\p"
# 59 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Yo desde luego no tengo ninguna\n"
# 60 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "intención de aventurarme ahí fuera.$"
# 61 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon:
# 63 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Pase lo que pase, yo siempre seré\n"
# 64 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "amiga de los POKéMON.\p"
# 65 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "¡Es que me divierto tanto con ellos!$"
# 66 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"

# 67 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends:
# 68 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Los POKéMON son nuestros amigos, ¿no?\p"
# 69 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "Entonces, ¿a qué viene un\n"
# 70 "data/maps/SootopolisCity_PokemonCenter_1F/scripts.pory"
	.string "comportamiento tan salvaje?$"
