# 1 "data/maps/LilycoveCity_House3/scripts.pory"

# 2 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_MapScripts::
# 3 "data/maps/LilycoveCity_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_House3_OnTransition
# 4 "data/maps/LilycoveCity_House3/scripts.pory"
	.byte 0
# 5 "data/maps/LilycoveCity_House3/scripts.pory"

# 6 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_OnTransition:
# 7 "data/maps/LilycoveCity_House3/scripts.pory"
	random 4
# 8 "data/maps/LilycoveCity_House3/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 9 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 10 "data/maps/LilycoveCity_House3/scripts.pory"

# 11 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_PokefanF::
# 12 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 13 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 14 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks, MSGBOX_YESNO
# 15 "data/maps/LilycoveCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_House3_EventScript_DeclinePokeblockLearn
# 16 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_ExplainPokeblocks, MSGBOX_DEFAULT
# 17 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 18 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 19 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 20 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 21 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 22 "data/maps/LilycoveCity_House3/scripts.pory"

# 23 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_DeclinePokeblockLearn::
# 24 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_OhAreYouSure, MSGBOX_DEFAULT
# 25 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 26 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 27 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 28 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 29 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 30 "data/maps/LilycoveCity_House3/scripts.pory"

# 31 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_Man::
# 32 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 33 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 34 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_HappyToHaveQuadruplets, MSGBOX_DEFAULT
# 35 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 36 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 37 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 38 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 39 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 40 "data/maps/LilycoveCity_House3/scripts.pory"

# 41 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid1::
# 42 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 43 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 44 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 45 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 46 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 47 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 48 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 49 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 50 "data/maps/LilycoveCity_House3/scripts.pory"

# 51 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid2::
# 52 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 53 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 54 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 55 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 56 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 57 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 58 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 59 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 60 "data/maps/LilycoveCity_House3/scripts.pory"

# 61 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid3::
# 62 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 63 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 64 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 65 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 66 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 67 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 68 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 69 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 70 "data/maps/LilycoveCity_House3/scripts.pory"

# 71 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid4::
# 72 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 73 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 74 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 75 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 76 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 77 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 78 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 79 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 80 "data/maps/LilycoveCity_House3/scripts.pory"

# 81 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereDoingMultiBattle::
# 82 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToWinMultiBattles, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 84 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 85 "data/maps/LilycoveCity_House3/scripts.pory"

# 86 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereMixingRecords::
# 87 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LikeMixingAtRecordCorner, MSGBOX_DEFAULT
# 88 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 89 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 90 "data/maps/LilycoveCity_House3/scripts.pory"

# 91 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereBlendingBerries::
# 92 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender, MSGBOX_DEFAULT
# 93 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 94 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 95 "data/maps/LilycoveCity_House3/scripts.pory"

# 96 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereDoingContest::
# 97 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToEnterContest, MSGBOX_DEFAULT
# 98 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 99 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 100 "data/maps/LilycoveCity_House3/scripts.pory"

# 101 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks:
# 102 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "¡Ahí va! ¿Estás viajando sin compañía?\n"
# 103 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "¡Si eres muy joven! ¡Qué valiente eres!\p"
# 104 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Seguro que mis hijos podrían aprender\n"
# 105 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "un par de cosas de ti.\p"
# 106 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Yo soy la MAESTRA de los {POKEBLOCK}S.\p"
# 107 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Si me pongo un poco en serio, vaya,\n"
# 108 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "hago unos {POKEBLOCK}S increíbles.\p"
# 109 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "¿Te apetece aprender un par\n"
# 110 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "de cosas de mí?$"
# 111 "data/maps/LilycoveCity_House3/scripts.pory"

# 112 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_OhAreYouSure:
# 113 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "¿Seguro? ¿De verdad?\p"
# 114 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "¡A veces también hay que pedir\n"
# 115 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "ayuda a los demás, sabes!$"
# 116 "data/maps/LilycoveCity_House3/scripts.pory"

# 117 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_ExplainPokeblocks:
# 118 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "¡Muy bien! ¡Se ve que piensas!\n"
# 119 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Esto va a ser un poco largo,\l"
# 120 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "así que escucha.\p"
# 121 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "¡Atención, allá voy!\p"
# 122 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Si te fijas, verás que los {POKEBLOCK}S\n"
# 123 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "están clasificados según su masa.\p"
# 124 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Cuanta menos masa tengan,\n"
# 125 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "mejor es el resultado. ¡No lo olvides!\p"
# 126 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Un buen {POKEBLOCK} tiene poca\n"
# 127 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "masa y mucha eficacia.\p"
# 128 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Un POKéMON puede comer más\n"
# 129 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "{POKEBLOCK}S buenos que {POKEBLOCK}S\l"
# 130 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "normales.\p"
# 131 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Y esto es muy importante…\p"
# 132 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Si quieres que tus {POKEBLOCK}S sean\n"
# 133 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "suaves, usa diferentes tipos de BAYA.\p"
# 134 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Recuerda que el tipo de BAYA influye\n"
# 135 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "en la suavidad de los {POKEBLOCK}S.\p"
# 136 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Y otra cosa más…\p"
# 137 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Cuanta más gente mezcle BAYAS,\n"
# 138 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "más suaves serán los {POKEBLOCK}S.\p"
# 139 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Por eso debes hablar con la gente\n"
# 140 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "y hacer {POKEBLOCK}S juntos.\p"
# 141 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Eso es todo lo que necesitas saber\n"
# 142 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "para hacer buenos {POKEBLOCK}S.\p"
# 143 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Si todos tuvieran POKéMON cariñosos,\n"
# 144 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "{POKEBLOCK}S suaves y muchos amigos,\l"
# 145 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "el mundo sería un lugar mejor.\p"
# 146 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "¡Ánimo y no te rindas!$"
# 147 "data/maps/LilycoveCity_House3/scripts.pory"

# 148 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_HappyToHaveQuadruplets:
# 149 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Cuando mi mujer tuvo cuatrillizos,\n"
# 150 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "casi me dio un ataque…\p"
# 151 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Pero ahora, cuando los veo jugar\n"
# 152 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "juntos, me siento tan feliz…$"
# 153 "data/maps/LilycoveCity_House3/scripts.pory"

# 154 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_GoingToWinMultiBattles:
# 155 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Estamos entablando COMBATES\n"
# 156 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "MÚLTIPLES y sé que voy a ganar.$"
# 157 "data/maps/LilycoveCity_House3/scripts.pory"

# 158 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_LikeMixingAtRecordCorner:
# 159 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Nos encanta mezclar cosas\n"
# 160 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "en el CENTRO de RÉCORDS.\p"
# 161 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Pero ¿qué se mezcla allí?$"
# 162 "data/maps/LilycoveCity_House3/scripts.pory"

# 163 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender:
# 164 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Vamos a hacer {POKEBLOCK}S buenísimos\n"
# 165 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "con una LICUABAYAS.$"
# 166 "data/maps/LilycoveCity_House3/scripts.pory"

# 167 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_GoingToEnterContest:
# 168 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Quiero poder fardar de POKéMON, por\n"
# 169 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "eso vamos a apuntarnos a un CONCURSO.$"
