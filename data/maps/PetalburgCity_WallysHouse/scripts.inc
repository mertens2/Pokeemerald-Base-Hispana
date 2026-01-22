# 1 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
.set LOCALID_WALLYS_DAD, 1
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 4 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_MapScripts::
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_OnFrame
# 6 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
# 7 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 9 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnWarp:
# 10 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 12 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 13 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
# 14 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 15 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_WALLYS_DAD, DIR_WEST
# 16 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 18 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnFrame:
# 19 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveHM03Surf
# 20 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 21 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_GiveHM03Surf::
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lockall
# 24 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setspeaker PapaWally
# 25 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
# 26 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	
# 27 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_HM03
# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setspeaker PapaWally
# 29 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	
# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	releaseall
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad::
# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_HIDE_WALLY_DEWFORD_TOWN, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInDewford
# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	checkitem ITEM_HM03
# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_WallysHouse_EventScript_ReceievedHM03Surf
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_PlayedWithWally
# 43 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setspeaker PapaWally
# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	
# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 49 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInDewford::
# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setspeaker PapaWally
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyCantGoDewford, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	
# 54 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 55 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceievedHM03Surf::
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setspeaker PapaWally
# 59 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
# 60 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	
# 61 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 62 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
# 65 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setspeaker PapaWally
# 66 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
# 67 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	
# 68 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setspeaker PapaWally
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	
# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 76 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 78 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom::
# 79 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_HIDE_WALLY_DEWFORD_TOWN, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInDewfordMom
# 82 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	checkitem ITEM_HM03
# 83 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_WallysHouse_EventScript_ReceivedHM03Surf
# 84 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setspeaker MamaWally
# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
# 86 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	
# 87 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 88 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 89 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 90 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInDewfordMom::
# 91 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setspeaker MamaWally
# 92 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyCanDoAnything, MSGBOX_DEFAULT
# 93 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	
# 94 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 95 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 96 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 97 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceivedHM03Surf::
# 98 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setspeaker MamaWally
# 99 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
# 100 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	
# 101 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 102 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 103 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 104 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 105 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyCanDoAnything:
# 106 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Entonces… Tenía razón. Wally pudo\n"
# 107 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "ganarle a Brawly.\p"
# 108 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Junto con sus Pokémon, seguro fue\n"
# 109 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "tarea fácil para él, pero al mismo\l"
# 110 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "tiempo, estoy preocupada por su asma…\p"
# 111 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Quisás… Estar con los Pokémon pueda\n"
# 112 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "hacer mejorar su condición…\l"
# 113 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Quiero que lo sigas cuidando, que le\l"
# 114 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "sigas ayudando, y que lo sigas\l"
# 115 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "alentando a que siga sus sueños.$"
# 116 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 117 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyCantGoDewford:
# 118 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "¿Pueblo Dewford?\p"
# 119 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Pues sí, quizá fue a comprar algo con la\n"
# 120 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "familia, aunque raro se me hace que no\l"
# 121 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "dijeran nada. Supongo que su condición\l"
# 122 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "está tan mejorada que viajar en barco\l"
# 123 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "no hizo que se desmayara.\p"
# 124 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Pero, ¿Batalla de Gimnasio?\n"
# 125 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Nah, Wally no puede mantenerse en pie\l"
# 126 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "durante un Combate Pokémon.$"
# 127 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 128 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
# 129 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Eres…\n"
# 130 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ah, debes ser {PLAYER}, ¿no?\p"
# 131 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Pues debo agradecerte, porque Wally se\n"
# 132 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "ha encariñado mucho contigo, ¡Se\l"
# 133 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "emociona tanto al hablar de ti, ja ja!\l"
# 134 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Deberías ver el brillo en sus ojitos\l"
# 135 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "cuando te menciona alguien de la\l"
# 136 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "familia. Eres realmente especial en su\l"
# 137 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "vida, {PLAYER}, por favor, cuídalo\l"
# 138 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "mucho, ¿Sí?\p"
# 139 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Él siempre está enfermo, tosiendo\n"
# 140 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "mucho, y no ayuda que su asma empeore\l"
# 141 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "en lugares que no tienen el aire tan\l"
# 142 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "limpio, como aquí. Por eso, lo hemos\l"
# 143 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "enviado a Verdanturf, donde el aire\l"
# 144 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "limpio lo ayuda a respirar mejor…\p"
# 145 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "{PLAYER}…\n"
# 146 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Le importas muchísimo a Wally, así que,\l"
# 147 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "cuídate mucho, ¿Sí?\l"
# 148 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "No podría soportar que les pasara algo\l"
# 149 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "a alguno de los dos…$"
# 150 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 151 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 152 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
# 153 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "¿Cómo estará Wally…?\n"
# 154 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Espero que esté tomando sus pastillas\l"
# 155 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "y usando regularmente su inhalador…$"
# 156 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 157 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 158 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
# 159 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "¡{PLAYER}! Disculpa por haberte\n"
# 160 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "traído acá de esa forma, pero tengo\l"
# 161 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "que agradecerte por haber ayudado a\l"
# 162 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally.\p"
# 163 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Desde que tiene un Pokémon, ha estado\n"
# 164 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "actuando mucho más energético… Mucho\l"
# 165 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "más saludable…\p"
# 166 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Gracias también por sacarle ese sueño\n"
# 167 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "estúpido de batallar con Pokémon, él\l"
# 168 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "sabe que no puede por su asma y sus\l"
# 169 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "enfermedades constantes…\p"
# 170 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "No, disculpa, no es un sueño estúpido,\n"
# 171 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "{PLAYER}, amaría verlo feliz siendo\l"
# 172 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "un Entrenador, pero ese sueño no es\l"
# 173 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "muy realista, ¿No te parece?\p"
# 174 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Pero bueno, ¡Toma esto!$"
# 175 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 176 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
# 177 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Creo que ya sabes lo que hace, ¿No?$"
# 178 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	
# 179 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
# 180 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally viene a visitarnos, y estoy\n"
# 181 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "emocionado por eso.\p"
# 182 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Extraño a mi hijo demasiado, verlo\n"
# 183 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "emocionarse por sus intereses, como\l"
# 184 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "los Pokémon, el aprendizaje, pero\l"
# 185 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "también tú, {PLAYER}, ¡No puedo\l"
# 186 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "esperar a verlo otra vez!$"
# 187 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 188 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
# 189 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "¿Cómo? ¿Que viste a Wally en la Ciudad\n"
# 190 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Evergrande?\p"
# 191 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Que broma tan mala, {PLAYER}, Wally\n"
# 192 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "sigue tranqui en la casa de sus\l"
# 193 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "familiares en Verdanturf. Ni a\l"
# 194 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "visitarnos vino.$"
# 195 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 196 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
# 197 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally estaba TAN, TAN contento cuando\n"
# 198 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "nos dijo que est{EA} increíble y asombros{OA}\l"
# 199 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "chic{OA} le ayudó a capturar un Pokémon…\p"
# 200 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "No le había visto así de contento en\n"
# 201 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "muchísimo tiempo…\l"
# 202 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Creo que realmente te aprecia,\l"
# 203 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "{PLAYER}.$"
# 204 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 205 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
# 206 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "No le digas a mi esposo, pero… Wally se\n"
# 207 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "fue de Verdanturf hace un tiempo… Y\l"
# 208 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "quería pedirte que POR FAVOR, lo cuides\l"
# 209 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "mucho. Wally es muy frágil, y no podría\l"
# 210 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "soportar que algo le pasara…\l"
# 211 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Así que quería que lo acompañes en\l"
# 212 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "esta aventura suya, para guiarle y\l"
# 213 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "apoyarle cuando te necesite, para que\l"
# 214 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "vea que si alguien que él quiere tanto\l"
# 215 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "confía en él, podrá comenzar a confiar\l"
# 216 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "en sus propias capacidades también…$"
