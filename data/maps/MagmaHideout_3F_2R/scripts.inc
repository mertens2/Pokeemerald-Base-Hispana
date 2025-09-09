# 1 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 2 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_MapScripts::
# 3 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 5 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_EventScript_Grunt10::
# 6 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_10, MagmaHideout_3F_2R_Text_Grunt10Intro, MagmaHideout_3F_2R_Text_Grunt10Defeat
# 7 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_Text_Grunt10PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	end
# 9 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 10 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10Intro:
# 11 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Comprendo las razones del JEFE,\n"
# 12 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "pero ¿sabes una cosa?\p"
# 13 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Esto de desenterrar POKéMON antiguos\n"
# 14 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "y birlarle un METEORITO\l"
# 15 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "a un pobre inocente…\p"
# 16 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "No sé yo, igual estamos yendo\n"
# 17 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "demasiado lejos. ¿Tú qué crees?$"
# 18 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 19 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10Defeat:
# 20 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Sí, me parece que estamos haciendo\n"
# 21 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "algo mal.$"
# 22 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 23 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10PostBattle:
# 24 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Esta derrota me ha aclarado las ideas.\p"
# 25 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "La próxima vez que vea al JEFE, le voy\n"
# 26 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "a pedir explicaciones sobre todo esto.$"
