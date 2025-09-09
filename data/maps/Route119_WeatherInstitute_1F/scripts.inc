# 1 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_MapScripts::
# 3 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
# 4 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.byte 0
# 5 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 6 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_OnTransition:
# 7 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos
# 8 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 9 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 10 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos::
# 11 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_LITTLE_BOY, 0, 5
# 12 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_LITTLE_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 13 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 14 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 15 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoy::
# 16 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 17 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 18 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 19 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere
# 20 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WowYoureStrong, MSGBOX_DEFAULT
# 21 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 22 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 23 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 24 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere::
# 25 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs, MSGBOX_DEFAULT
# 26 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 27 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 28 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 29 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1::
# 30 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 31 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 32 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_StudyingRain
# 33 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 34 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 35 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 36 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_1F_EventScript_StudyingRain  @ Both defeated
# 37 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather, MSGBOX_DEFAULT
# 38 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 39 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 40 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 41 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated::
# 42 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	addvar VAR_0x8004, 1
# 43 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 44 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 45 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_StudyingRain::
# 46 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_ProfStudyingRain, MSGBOX_DEFAULT
# 47 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 48 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 49 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 50 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker2::
# 51 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
# 52 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 53 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 54 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Bed::
# 55 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lockall
# 56 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
# 57 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 58 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 59 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	releaseall
# 60 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 61 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 62 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt1::
# 63 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
# 64 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 66 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 67 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt4::
# 68 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
# 69 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 71 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 72 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Intro:
# 73 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "El JEFE está interesado en la\n"
# 74 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "investigación que están realizando\l"
# 75 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "aquí, por eso nos ha enviado.\p"
# 76 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "¡Quítate de en medio!$"
# 77 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 78 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Defeat:
# 79 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "No me lo creo…\n"
# 80 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Me has vencido, mequetrefe…$"
# 81 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 82 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1PostBattle:
# 83 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "No hay nada que nuestro\n"
# 84 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "JEFE no sepa…\p"
# 85 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Pero yo sólo soy un SOLDADO. ¿Cómo\n"
# 86 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "voy a saber lo que tiene en mente?$"
# 87 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 88 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Intro:
# 89 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "¿Eh?\n"
# 90 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "¿Qué haces tú aquí?$"
# 91 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 92 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Defeat:
# 93 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "¿Yo?\n"
# 94 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "¿He perdido? ¡¿Yo?!$"
# 95 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 96 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4PostBattle:
# 97 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Oh, no…\n"
# 98 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Qué bronca me va a caer…\p"
# 99 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Creo que voy a echarme una siesta\n"
# 100 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "para olvidar todo esto…$"
# 101 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 102 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs:
# 103 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "¡Mientras dormía, alguien se coló\n"
# 104 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "arriba!$"
# 105 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 106 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WowYoureStrong:
# 107 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "¡Guau, qué fuerte eres!\p"
# 108 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "¡Ojalá pudiera ser un ENTRENADOR\n"
# 109 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "POKéMON tan bueno como tú!$"
# 110 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 111 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_ProfStudyingRain:
# 112 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Al PROFESOR le encanta la lluvia.\n"
# 113 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Eso es un hecho.\p"
# 114 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Pero si sigue lloviendo así, tendremos\n"
# 115 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "problemas. Eso también es un hecho.\p"
# 116 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Por eso el PROFESOR está estudiando\n"
# 117 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "cómo hacer buen uso de esta lluvia.$"
# 118 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 119 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather:
# 120 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "En el primer piso del INSTITUTO\n"
# 121 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "estudiamos los fenómenos atmosféricos\l"
# 122 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "de la región de HOENN.\p"
# 123 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Últimamente, estamos detectando casos\n"
# 124 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "aislados de sequía e inundaciones…$"
# 125 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 126 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo:
# 127 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "¡Hola!\n"
# 128 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "¡Nos has salvado!\p"
# 129 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Lo que no logro entender es lo que\n"
# 130 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "pretenden los del EQUIPO AQUA…$"
# 131 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 132 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_TakeRestInBed:
# 133 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Mira, una cama…\n"
# 134 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "¡A descansar!$"
