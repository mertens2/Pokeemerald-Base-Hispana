OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer::
# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lockall
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_0
OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_2:
	checkitem ITEM_PEARL
# 0 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_3
OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_1:
OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_6:
	checkitem ITEM_BIG_PEARL
# 0 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_7
OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_5:
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return

OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_3:
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_1, MSGBOX_YESNO
# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_9
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_4
	goto OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_1

OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_7:
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_5, MSGBOX_YESNO
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_12
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_4
	goto OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_5

OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_9:
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_PEARL, 1
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	addmoney 4000
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_2
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_3
	goto OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_2

OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_12:
# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_BIG_PEARL, 1
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	addmoney 16000
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_6
# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_3
	goto OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_6


# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition:
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_OLDALE_NURSE
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 63 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 64 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 65 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 67 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 68 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 72 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 75 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 76 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 77 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ese PC de la esquina es para el uso\n"
# 81 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "de cualquier ENTRENADOR POKéMON.\p"
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Eso quiere decir que tú también\n"
# 83 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "lo puedes usar, claro.$"
# 84 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 85 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "¡Los CENTROS POKéMON son guays!\p"
# 87 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Puedes usar sus servicios todas\n"
# 88 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "las veces que quieras y siempre\l"
# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "es gratis. ¡Es una pasada!$"
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 92 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Empezaron a construir el CLUB del CABLE\n"
# 93 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON del primer piso hace poco.\p"
# 94 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Y cualquiera sabe cuándo\n"
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "acabarán las obras…$"
# 96 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 98 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Acabaron de construir el CLUB del CABLE\n"
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "POKéMON del primer piso hace poco.\p"
# 100 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "¡Vengo de intercambiar un POKéMON!$"

OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_0:
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "¡Hola, ¿cómo estás?!\p"
	.string "¡Soy un Coleccionista, y me encanta\n"
	.string "coleccionar {COLOR RED}Perlas{COLOR DARK_GRAY}!\p"
	.string "Sin embargo, no me gustan los Collares\n"
	.string "de Perla.$"

OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_1:
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "¡Ah, veo que tienes una {COLOR RED}Perla{COLOR DARK_GRAY}!\p"
	.string "¿Te gustaría vendérmela por {COLOR RED}¥4.000{COLOR DARK_GRAY}?$"

OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_2:
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Le has vendido una {COLOR RED}Perla{COLOR DARK_GRAY} al Coleccionista.$"

OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_3:
# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "¡Muchas gracias!\p"
	.string "¡Ah, qué emoción! ¡Ojalá vuelvas pronto!$"

OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_4:
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Oh… Está bien, no pasa nada…$"

OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_5:
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "¡Ah, veo que tienes una {COLOR RED}Perla Grande{COLOR DARK_GRAY}!\p"
	.string "¿Te gustaría vendérmela por {COLOR RED}¥16.000{COLOR DARK_GRAY}?$"

OldaleTown_PokemonCenter_1F_EventScript_PearlBuyer_Text_6:
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Le has vendido una {COLOR RED}Perla Grande{COLOR DARK_GRAY} al Coleccionista.$"
