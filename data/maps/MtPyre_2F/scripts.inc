# 1 "data/maps/MtPyre_2F/scripts.pory"

# 2 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_MapScripts::
# 3 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 5 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtPyre_2F_SetHoleWarp
# 6 "data/maps/MtPyre_2F/scripts.pory"
	.byte 0
# 7 "data/maps/MtPyre_2F/scripts.pory"

# 8 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_SetHoleWarp:
# 9 "data/maps/MtPyre_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 10 "data/maps/MtPyre_2F/scripts.pory"
	setholewarp MAP_MT_PYRE_1F
# 11 "data/maps/MtPyre_2F/scripts.pory"
	end
# 12 "data/maps/MtPyre_2F/scripts.pory"

# 13 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Woman::
# 14 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MemoriesOfSkitty, MSGBOX_NPC
# 15 "data/maps/MtPyre_2F/scripts.pory"
	end
# 16 "data/maps/MtPyre_2F/scripts.pory"

# 17 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_PokefanM::
# 18 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_TumbledFromFloorAbove, MSGBOX_NPC
# 19 "data/maps/MtPyre_2F/scripts.pory"
	end
# 20 "data/maps/MtPyre_2F/scripts.pory"

# 21 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Mark::
# 22 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_MARK, MtPyre_2F_Text_MarkIntro, MtPyre_2F_Text_MarkDefeat
# 23 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/MtPyre_2F/scripts.pory"
	end
# 25 "data/maps/MtPyre_2F/scripts.pory"

# 26 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Luke::
# 27 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_LukeIntro, MtPyre_2F_Text_LukeDefeat, MtPyre_2F_Text_LukeNotEnoughMons
# 28 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_LukePostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/MtPyre_2F/scripts.pory"
	end
# 30 "data/maps/MtPyre_2F/scripts.pory"

# 31 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Dez::
# 32 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_DezIntro, MtPyre_2F_Text_DezDefeat, MtPyre_2F_Text_DezNotEnoughMons
# 33 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_DezPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/MtPyre_2F/scripts.pory"
	end
# 35 "data/maps/MtPyre_2F/scripts.pory"

# 36 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Leah::
# 37 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_LEAH, MtPyre_2F_Text_LeahIntro, MtPyre_2F_Text_LeahDefeat
# 38 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/MtPyre_2F/scripts.pory"
	end
# 40 "data/maps/MtPyre_2F/scripts.pory"

# 41 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Zander::
# 42 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, MtPyre_2F_Text_ZanderIntro, MtPyre_2F_Text_ZanderDefeat
# 43 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_ZanderPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/MtPyre_2F/scripts.pory"
	end
# 45 "data/maps/MtPyre_2F/scripts.pory"

# 46 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MemoriesOfSkitty:
# 47 "data/maps/MtPyre_2F/scripts.pory"
	.string "Cómo recuerdo a mi querido SKITTY…\n"
# 48 "data/maps/MtPyre_2F/scripts.pory"
	.string "Es que se me saltan las lágrimas…$"
# 49 "data/maps/MtPyre_2F/scripts.pory"

# 50 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_TumbledFromFloorAbove:
# 51 "data/maps/MtPyre_2F/scripts.pory"
	.string "Huy, huy… Este sitio está más\n"
# 52 "data/maps/MtPyre_2F/scripts.pory"
	.string "agujereado que un queso gruyer.\p"
# 53 "data/maps/MtPyre_2F/scripts.pory"
	.string "No me di cuenta antes y me caí desde\n"
# 54 "data/maps/MtPyre_2F/scripts.pory"
	.string "el piso de arriba.$"
# 55 "data/maps/MtPyre_2F/scripts.pory"

# 56 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkIntro:
# 57 "data/maps/MtPyre_2F/scripts.pory"
	.string "¡Eh! ¿Buscas POKéMON?\n"
# 58 "data/maps/MtPyre_2F/scripts.pory"
	.string "¡Me has estado siguiendo!\l"
# 59 "data/maps/MtPyre_2F/scripts.pory"
	.string "¡Eso no se hace!$"
# 60 "data/maps/MtPyre_2F/scripts.pory"

# 61 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkDefeat:
# 62 "data/maps/MtPyre_2F/scripts.pory"
	.string "¡Vale, vale, lo he entendido!\n"
# 63 "data/maps/MtPyre_2F/scripts.pory"
	.string "¡No me estabas siguiendo, perdón!$"
# 64 "data/maps/MtPyre_2F/scripts.pory"

# 65 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkPostBattle:
# 66 "data/maps/MtPyre_2F/scripts.pory"
	.string "Aquí no hay ni un alma, así que pensé\n"
# 67 "data/maps/MtPyre_2F/scripts.pory"
	.string "que encontraría POKéMON raros…$"
# 68 "data/maps/MtPyre_2F/scripts.pory"

# 69 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeIntro:
# 70 "data/maps/MtPyre_2F/scripts.pory"
	.string "LEO: Mi chica me ha lanzado un reto.\p"
# 71 "data/maps/MtPyre_2F/scripts.pory"
	.string "Je, je, je… Tengo que demostrarle\n"
# 72 "data/maps/MtPyre_2F/scripts.pory"
	.string "lo fuerte que soy derrotándote.\p"
# 73 "data/maps/MtPyre_2F/scripts.pory"
	.string "¡Esto está hecho! La voy a dejar\n"
# 74 "data/maps/MtPyre_2F/scripts.pory"
	.string "impresionada.$"
# 75 "data/maps/MtPyre_2F/scripts.pory"

# 76 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeDefeat:
# 77 "data/maps/MtPyre_2F/scripts.pory"
	.string "LEO: Ejem, ejem…$"
# 78 "data/maps/MtPyre_2F/scripts.pory"

# 79 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukePostBattle:
# 80 "data/maps/MtPyre_2F/scripts.pory"
	.string "LEO: Vale, he perdido, pero da igual.\n"
# 81 "data/maps/MtPyre_2F/scripts.pory"
	.string "Tengo muchas otras cualidades…\l"
# 82 "data/maps/MtPyre_2F/scripts.pory"
	.string "¡Y pronto seré más fuerte que tú!$"
# 83 "data/maps/MtPyre_2F/scripts.pory"

# 84 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeNotEnoughMons:
# 85 "data/maps/MtPyre_2F/scripts.pory"
	.string "LEO: Si quieres enfrentarte a mí,\n"
# 86 "data/maps/MtPyre_2F/scripts.pory"
	.string "trae más POKéMON.\p"
# 87 "data/maps/MtPyre_2F/scripts.pory"
	.string "¡Si no lo haces, no podré fardar\n"
# 88 "data/maps/MtPyre_2F/scripts.pory"
	.string "un poco delante de mi chica!$"
# 89 "data/maps/MtPyre_2F/scripts.pory"

# 90 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezIntro:
# 91 "data/maps/MtPyre_2F/scripts.pory"
	.string "DULCE: Le he lanzado un desafío.\p"
# 92 "data/maps/MtPyre_2F/scripts.pory"
	.string "Quizás no debería ponerle a prueba,\n"
# 93 "data/maps/MtPyre_2F/scripts.pory"
	.string "pero me gusta verle en acción.\p"
# 94 "data/maps/MtPyre_2F/scripts.pory"
	.string "Es que ni me preocupo, ¡mi chico\n"
# 95 "data/maps/MtPyre_2F/scripts.pory"
	.string "se encarga de ti en un santiamén!$"
# 96 "data/maps/MtPyre_2F/scripts.pory"

# 97 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezDefeat:
# 98 "data/maps/MtPyre_2F/scripts.pory"
	.string "DULCE: Pues qué decepción…$"
# 99 "data/maps/MtPyre_2F/scripts.pory"

# 100 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezPostBattle:
# 101 "data/maps/MtPyre_2F/scripts.pory"
	.string "DULCE: Qué más da ganar o perder…\n"
# 102 "data/maps/MtPyre_2F/scripts.pory"
	.string "Lo importante es quererse mucho.$"
# 103 "data/maps/MtPyre_2F/scripts.pory"

# 104 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezNotEnoughMons:
# 105 "data/maps/MtPyre_2F/scripts.pory"
	.string "DULCE: Si quieres desafiarnos, tendrás\n"
# 106 "data/maps/MtPyre_2F/scripts.pory"
	.string "que traer al menos dos POKéMON.\p"
# 107 "data/maps/MtPyre_2F/scripts.pory"
	.string "Con lo fuerte que es mi chico,\n"
# 108 "data/maps/MtPyre_2F/scripts.pory"
	.string "un POKéMON no basta.$"
# 109 "data/maps/MtPyre_2F/scripts.pory"

# 110 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahIntro:
# 111 "data/maps/MtPyre_2F/scripts.pory"
	.string "Es la primera vez que te veo…\n"
# 112 "data/maps/MtPyre_2F/scripts.pory"
	.string "¡Vete antes de que lo lamentes!$"
# 113 "data/maps/MtPyre_2F/scripts.pory"

# 114 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahDefeat:
# 115 "data/maps/MtPyre_2F/scripts.pory"
	.string "Mmmm…\n"
# 116 "data/maps/MtPyre_2F/scripts.pory"
	.string "Resistes lo que te echen.$"
# 117 "data/maps/MtPyre_2F/scripts.pory"

# 118 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahPostBattle:
# 119 "data/maps/MtPyre_2F/scripts.pory"
	.string "En mi familia abundan los ENTRENADORES\n"
# 120 "data/maps/MtPyre_2F/scripts.pory"
	.string "desde tiempos ancestrales…\p"
# 121 "data/maps/MtPyre_2F/scripts.pory"
	.string "Proteger esta montaña es mi deber…$"
# 122 "data/maps/MtPyre_2F/scripts.pory"

# 123 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderIntro:
# 124 "data/maps/MtPyre_2F/scripts.pory"
	.string "¡Kiaaaaa!\n"
# 125 "data/maps/MtPyre_2F/scripts.pory"
	.string "¡Menudo susto me has dado!$"
# 126 "data/maps/MtPyre_2F/scripts.pory"

# 127 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderDefeat:
# 128 "data/maps/MtPyre_2F/scripts.pory"
	.string "¡Nooooo!\n"
# 129 "data/maps/MtPyre_2F/scripts.pory"
	.string "¡Los nervios han podido conmigo!$"
# 130 "data/maps/MtPyre_2F/scripts.pory"

# 131 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderPostBattle:
# 132 "data/maps/MtPyre_2F/scripts.pory"
	.string "Me echo a temblar cada vez que\n"
# 133 "data/maps/MtPyre_2F/scripts.pory"
	.string "veo algo moviéndose…\p"
# 134 "data/maps/MtPyre_2F/scripts.pory"
	.string "No debería entrenarme en este lugar…$"
