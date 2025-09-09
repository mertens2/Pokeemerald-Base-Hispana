# 1 "data/maps/AquaHideout_1F/scripts.pory"

# 2 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_MapScripts::
# 3 "data/maps/AquaHideout_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AquaHideout_1F/scripts.pory"

# 5 "data/maps/AquaHideout_1F/scripts.pory"
@ The below two entrance guards give hints about what to do to progress the story
# 6 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
# 7 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 8 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 9 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint1
# 10 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint1
# 11 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
# 12 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 13 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 14 "data/maps/AquaHideout_1F/scripts.pory"

# 15 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint1::
# 16 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
# 17 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 18 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 19 "data/maps/AquaHideout_1F/scripts.pory"

# 20 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint1::
# 21 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
# 22 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 23 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 24 "data/maps/AquaHideout_1F/scripts.pory"

# 25 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
# 26 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 27 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 28 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint2
# 29 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint2
# 30 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
# 31 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 32 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 33 "data/maps/AquaHideout_1F/scripts.pory"

# 34 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint2::
# 35 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
# 36 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 37 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 38 "data/maps/AquaHideout_1F/scripts.pory"

# 39 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint2::
# 40 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
# 41 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 42 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 43 "data/maps/AquaHideout_1F/scripts.pory"

# 44 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1::
# 45 "data/maps/AquaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
# 46 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 48 "data/maps/AquaHideout_1F/scripts.pory"

# 49 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1Defeated::
# 50 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
# 51 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 52 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 53 "data/maps/AquaHideout_1F/scripts.pory"

# 54 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_OurBossIsSnatchingSomething:
# 55 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Qué haces aquí? ¿Por qué vienes\n"
# 56 "data/maps/AquaHideout_1F/scripts.pory"
	.string "a dar la lata al EQUIPO AQUA?\p"
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Nuestro JEFE no está aquí!\n"
# 58 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Ha ido a birlar algo muy importante!\p"
# 59 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Qué?\n"
# 60 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Que adónde ha ido?\p"
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Jua, jua, jua! ¿Pero tú crees que te\n"
# 62 "data/maps/AquaHideout_1F/scripts.pory"
	.string "diría algo tan sumamente importante?$"
# 63 "data/maps/AquaHideout_1F/scripts.pory"

# 64 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
# 65 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Cómo? ¿Qué?\n"
# 66 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Eres un secuaz del EQUIPO MAGMA?\p"
# 67 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Me han dicho que el EQUIPO MAGMA\n"
# 68 "data/maps/AquaHideout_1F/scripts.pory"
	.string "está intentado despertar a un POKéMON\l"
# 69 "data/maps/AquaHideout_1F/scripts.pory"
	.string "impresionante en su GUARIDA.\p"
# 70 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Pero ¿dónde estará su GUARIDA?$"
# 71 "data/maps/AquaHideout_1F/scripts.pory"

# 72 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossWentToJackASubmarine:
# 73 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Qué haces aquí? ¿Por qué vienes\n"
# 74 "data/maps/AquaHideout_1F/scripts.pory"
	.string "a dar la lata al EQUIPO AQUA?\p"
# 75 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Nuestro JEFE no está aquí!\n"
# 76 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Ha ido a mangar un submarino!\p"
# 77 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Qué?\n"
# 78 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Que adónde ha ido?\p"
# 79 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Jua, jua, jua! ¿Pero tú crees que te\n"
# 80 "data/maps/AquaHideout_1F/scripts.pory"
	.string "diría algo tan sumamente importante?$"
# 81 "data/maps/AquaHideout_1F/scripts.pory"

# 82 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsOnRoute122:
# 83 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Qué haces aquí? ¿Por qué vienes\n"
# 84 "data/maps/AquaHideout_1F/scripts.pory"
	.string "a dar la lata al EQUIPO AQUA?\p"
# 85 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Nuestro JEFE no está aquí! ¡Está en\n"
# 86 "data/maps/AquaHideout_1F/scripts.pory"
	.string "la RUTA 122, de camino al MONTE PÍRICO!\p"
# 87 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Qué?\n"
# 88 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Que por qué se ha ido?\p"
# 89 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Jua, jua, jua! ¿Pero tú crees que te\n"
# 90 "data/maps/AquaHideout_1F/scripts.pory"
	.string "diría algo tan sumamente importante?$"
# 91 "data/maps/AquaHideout_1F/scripts.pory"

# 92 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TeamMagmaAtMtChimney:
# 93 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Cómo? ¿Qué?\n"
# 94 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Eres un secuaz del EQUIPO MAGMA?\p"
# 95 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Me han dicho que el EQUIPO MAGMA\n"
# 96 "data/maps/AquaHideout_1F/scripts.pory"
	.string "anda detrás de un POKéMON,\l"
# 97 "data/maps/AquaHideout_1F/scripts.pory"
	.string "allá por el MONTE CENIZO.\p"
# 98 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Pero ¿cómo será ese POKéMON?$"
# 99 "data/maps/AquaHideout_1F/scripts.pory"

# 100 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsInSlateportCity:
# 101 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Qué haces aquí? ¿Por qué vienes\n"
# 102 "data/maps/AquaHideout_1F/scripts.pory"
	.string "a dar la lata al EQUIPO AQUA?\p"
# 103 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Nuestro JEFE no está aquí!\n"
# 104 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Está de camino a CIUDAD PORTUAL!\p"
# 105 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Qué?\n"
# 106 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¿Que por qué se ha ido?\p"
# 107 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Jua, jua, jua! ¿Pero tú crees que te\n"
# 108 "data/maps/AquaHideout_1F/scripts.pory"
	.string "diría algo tan sumamente importante?$"
# 109 "data/maps/AquaHideout_1F/scripts.pory"

# 110 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Intro:
# 111 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡Personaje sospechoso a la vista!$"
# 112 "data/maps/AquaHideout_1F/scripts.pory"

# 113 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Defeat:
# 114 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Brrr…\n"
# 115 "data/maps/AquaHideout_1F/scripts.pory"
	.string "¡He perdido!$"
# 116 "data/maps/AquaHideout_1F/scripts.pory"

# 117 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1PostBattle:
# 118 "data/maps/AquaHideout_1F/scripts.pory"
	.string "El EQUIPO no estará satisfecho,\n"
# 119 "data/maps/AquaHideout_1F/scripts.pory"
	.string "pero yo he hecho lo que he podido…$"
