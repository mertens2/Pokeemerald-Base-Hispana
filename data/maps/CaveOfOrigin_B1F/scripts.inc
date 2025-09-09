# 1 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 2 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_MapScripts::
# 3 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.byte 0
# 4 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 5 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_Wallace::
# 6 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 7 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	faceplayer
# 8 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT
# 9 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 10 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 11 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 12 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 60
# 13 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_PIN
# 14 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_ExclamationMark
# 15 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_Delay48
# 17 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 30
# 19 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_FacePlayer
# 20 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_WhereIsRayquaza
# 22 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 23 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 24 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 25 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza::
# 26 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	multichoice 0, 0, MULTI_WHERES_RAYQUAZA, FALSE
# 27 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 0, CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin
# 29 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 1, CaveOfOrigin_B1F_EventScript_AtMtPyre
# 30 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 2, CaveOfOrigin_B1F_EventScript_AtSkyPillar
# 31 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 3, CaveOfOrigin_B1F_EventScript_DontRemember
# 32 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_DontRemember
# 33 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 34 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 35 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin::
# 36 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
# 37 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 38 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 39 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 40 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtMtPyre::
# 41 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
# 42 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 43 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 44 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 45 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_DontRemember::
# 46 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_CantYouRememberSomehow
# 47 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 48 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 49 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 50 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtSkyPillar::
# 51 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WellHeadToSkyPillar, MSGBOX_DEFAULT
# 52 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 53 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 54 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 55 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
# 56 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
# 57 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject LOCALID_CAVE_OF_ORIGIN_WALLACE
# 58 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
# 59 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 60 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
# 61 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 62 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 63 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WallaceStory:
# 64 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Ah, así que eres {PLAYER}{KUN}.\n"
# 65 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "He oído hablar mucho de ti.\p"
# 66 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Me llamo PLUBIO.\p"
# 67 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Era el LÍDER del GIMNASIO\n"
# 68 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "de ARRECÍPOLIS, pero ocurrió algo.\p"
# 69 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Así que pedí a mi mentor, GALANO,\n"
# 70 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "que se ocupara del GIMNASIO.\p"
# 71 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Verás…\n"
# 72 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Resulta que…\p"
# 73 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "GROUDON y KYOGRE, los dos POKéMON\n"
# 74 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "que están haciendo estragos aquí,\l"
# 75 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "son dos POKéMON muy antiguos.\p"
# 76 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Pero no son los únicos…\p"
# 77 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Hay alguno más en algún lugar.\p"
# 78 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Existe un tercer POKéMON\n"
# 79 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "antiquísimo llamado RAYQUAZA.\p"
# 80 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Se cuenta que fue RAYQUAZA\n"
# 81 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "quien calmó a estos combatientes\l"
# 82 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "en un pasado ya muy lejano.\p"
# 83 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Pero ni siquiera yo sé dónde\n"
# 84 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "podemos encontrar a RAYQUAZA…$"
# 85 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 86 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WhereIsRayquaza:
# 87 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "PLUBIO: {PLAYER}{KUN}, ¿es posible que tú\n"
# 88 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "sepas dónde encontrar a RAYQUAZA?\p"
# 89 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Si es así, dímelo, por favor.$"
# 90 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 91 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin:
# 92 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "PLUBIO: ¿En la CUEVA ANCESTRAL?\p"
# 93 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "¡Pero si eso está aquí mismo!\n"
# 94 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "¡No me basta con eso!\p"
# 95 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Lo que necesito es que me digas dónde\n"
# 96 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "está RAYQUAZA ahora mismo.$"
# 97 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 98 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat:
# 99 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "PLUBIO: ¿En el MONTE PÍRICO?\p"
# 100 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Pero, cuando me encontré con la\n"
# 101 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "anciana allí, no hizo mención a eso.\p"
# 102 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Dudo mucho que la anciana\n"
# 103 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "intentara ocultarme algo así…\p"
# 104 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, ¿podrías pensarlo\n"
# 105 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "con más detenimiento?$"
# 106 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 107 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_CantYouRememberSomehow:
# 108 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "PLUBIO: ¿Qué? ¿No te acuerdas?\n"
# 109 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Pues eso es un problema…\p"
# 110 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "¿No te acuerdas ni un poquito?$"
# 111 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 112 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WellHeadToSkyPillar:
# 113 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "PLUBIO: ¿En el PILAR CELESTE?\p"
# 114 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "¡Sí, eso es!\n"
# 115 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "¡Tiene que estar allí!\p"
# 116 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}, no hay tiempo que perder.\n"
# 117 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "¡Vamos al PILAR CELESTE enseguida!$"
