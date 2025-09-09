# 1 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_MapScripts::
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_OnFrame
# 4 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.byte 0
# 6 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 7 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnWarp:
# 8 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
# 9 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 10 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
# 12 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 13 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_WALLYS_HOUSE_WALLYS_DAD, DIR_WEST
# 14 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 15 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 16 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnFrame:
# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveHMSurf
# 18 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 19 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 20 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_GiveHMSurf::
# 21 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lockall
# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_HM_SURF
# 24 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 25 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
# 26 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 27 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	releaseall
# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 29 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 30 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad::
# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf
# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_PlayedWithWally
# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf::
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
# 43 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 49 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 54 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 55 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom::
# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 59 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf
# 60 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
# 61 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 62 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf::
# 65 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
# 66 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 67 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 68 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Tú eres…\n"
# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Sí, tú eres {PLAYER}{KUN}, ¿verdad?\p"
# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Gracias por jugar con BLASCO\n"
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "hace un rato.\p"
# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "El pobrecito siempre ha sido\n"
# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "un chico enfermizo.\p"
# 76 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Lo hemos enviado con unos parientes\n"
# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "que viven en PUEBLO VERDEGAL.\p"
# 78 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Allí el aire está mucho más limpio\n"
# 79 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "y es más sano que aquí.\p"
# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "¿Cómo? ¿Que dónde está BLASCO?\n"
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "¡Ya se ha ido!\p"
# 82 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Me pregunto dónde estará\n"
# 83 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "en estos momentos…$"
# 84 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
# 86 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Me pregunto cómo le irá a BLASCO…$"
# 87 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 88 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
# 89 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "¡Hola, {PLAYER}{KUN}! Espero que no\n"
# 90 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "te moleste haber venido hasta aquí.\p"
# 91 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Nuestro BLASCO se ha curado\n"
# 92 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "del todo mientras estaba\l"
# 93 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "en PUEBLO VERDEGAL.\p"
# 94 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "¡Y todo gracias a ti!\p"
# 95 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Cuando BLASCO se fue, le ayudaste\n"
# 96 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "a atrapar un POKéMON, ¿verdad?\p"
# 97 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Creo que eso le hizo muy feliz.\p"
# 98 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Y también me hizo muy feliz\n"
# 99 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "a mí, su padre.\p"
# 100 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Es estupendo que BLASCO\n"
# 101 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "tenga amigos tan buenos como tú.\p"
# 102 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Estoy tan contento que quiero\n"
# 103 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "darte esto como agradecimiento.$"
# 104 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 105 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
# 106 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Si tu POKéMON puede hacer SURF,\n"
# 107 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "podrás ir a cantidad de sitios.$"
# 108 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 109 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
# 110 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "BLASCO pronto volverá a casa.\n"
# 111 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Qué ganas tengo…$"
# 112 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 113 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
# 114 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "¿Ah, sí? ¿Te has encontrado con\n"
# 115 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "BLASCO en CIUDAD COLOSALIA?\p"
# 116 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Venga, {PLAYER}{KUN}, no digas\n"
# 117 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "tonterías.\p"
# 118 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Puede que esté más fuerte que\n"
# 119 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "antes, pero no puede haber ido\l"
# 120 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "tan lejos él solo…$"
# 121 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 122 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
# 123 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "BLASCO estaba contentísimo\n"
# 124 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "cuando nos dijo que había atrapado\l"
# 125 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "un POKéMON.\p"
# 126 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Hacía siglos que no lo había visto\n"
# 127 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "sonreír así…$"
# 128 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 129 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
# 130 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Quiero contarte algo, pero no\n"
# 131 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "se lo digas a mi marido…\p"
# 132 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "BLASCO se fue de PUEBLO VERDEGAL\n"
# 133 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "sin decir nada a nadie.\p"
# 134 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "BLASCO es débil, pero tiene una gran\n"
# 135 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "fuerza de voluntad.\p"
# 136 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Estoy convencida de que volverá\n"
# 137 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "muy pronto hecho un hombretón.$"
