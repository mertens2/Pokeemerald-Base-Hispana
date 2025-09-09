# 1 "data/maps/MagmaHideout_1F/scripts.pory"

# 2 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_MapScripts::
# 3 "data/maps/MagmaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_1F_OnTransition
# 4 "data/maps/MagmaHideout_1F/scripts.pory"
	.byte 0
# 5 "data/maps/MagmaHideout_1F/scripts.pory"

# 6 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_OnTransition:
# 7 "data/maps/MagmaHideout_1F/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 8 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 9 "data/maps/MagmaHideout_1F/scripts.pory"

# 10 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1::
# 11 "data/maps/MagmaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, MagmaHideout_1F_Text_Grunt1Intro, MagmaHideout_1F_Text_Grunt1Defeat
# 12 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 14 "data/maps/MagmaHideout_1F/scripts.pory"

# 15 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt2::
# 16 "data/maps/MagmaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, MagmaHideout_1F_Text_Grunt2Intro, MagmaHideout_1F_Text_Grunt2Defeat
# 17 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 19 "data/maps/MagmaHideout_1F/scripts.pory"

# 20 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Intro:
# 21 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Cuando el EQUIPO MAGMA pasa lista,\n"
# 22 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "asignan las tareas más importantes\l"
# 23 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "a los que llegan primero.\p"
# 24 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Por eso estoy pringando aquí,\n"
# 25 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "¡porque siempre llego tarde!$"
# 26 "data/maps/MagmaHideout_1F/scripts.pory"

# 27 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Defeat:
# 28 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "¡También llego tarde a las sesiones\n"
# 29 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "de entrenamiento!\p"
# 30 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Odio tener que reconocerlo,\n"
# 31 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "pero no valgo para gran cosa…$"
# 32 "data/maps/MagmaHideout_1F/scripts.pory"

# 33 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1PostBattle:
# 34 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Bueno, voy a intentar esforzarme\n"
# 35 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "más de ahora en adelante…$"
# 36 "data/maps/MagmaHideout_1F/scripts.pory"

# 37 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Intro:
# 38 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Nuestro líder nos dijo que caváramos\n"
# 39 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "en el MONTE CENIZO, y eso hicimos.\p"
# 40 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Cavando, cavando, nos encontramos\n"
# 41 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "con algo absolutamente alucinante.\p"
# 42 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "¿Que qué era?\p"
# 43 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "¡Jua, jua, jua!\n"
# 44 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "¡Te lo diré si me ganas!$"
# 45 "data/maps/MagmaHideout_1F/scripts.pory"

# 46 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Defeat:
# 47 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "¡Aaaargh!\n"
# 48 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "¡Me has ganado!$"
# 49 "data/maps/MagmaHideout_1F/scripts.pory"

# 50 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2PostBattle:
# 51 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Pues pensándolo bien, no te lo voy a\n"
# 52 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "decir. Ya lo verás con tus propios ojos.\p"
# 53 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "No querrás que te fastidie la sorpresa,\n"
# 54 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "¿no?$"
