# 1 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_MapScripts::
# 3 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt3::
# 6 "data/maps/SeafloorCavern_Room4/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, SeafloorCavern_Room4_Text_Grunt3Intro, SeafloorCavern_Room4_Text_Grunt3Defeat
# 7 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox SeafloorCavern_Room4_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SeafloorCavern_Room4/scripts.pory"
	end
# 9 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 10 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt4::
# 11 "data/maps/SeafloorCavern_Room4/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, SeafloorCavern_Room4_Text_Grunt4Intro, SeafloorCavern_Room4_Text_Grunt4Defeat
# 12 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/SeafloorCavern_Room4/scripts.pory"
	end
# 14 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 15 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3Intro:
# 16 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "¿Quién eres?\n"
# 17 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "¿De dónde vienes?$"
# 18 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 19 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3Defeat:
# 20 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "¿He perdido?$"
# 21 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 22 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3PostBattle:
# 23 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "¡No consigo salir de aquí!\p"
# 24 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Me estoy empezando a poner nervioso…$"
# 25 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 26 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4Intro:
# 27 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "¿Quién eres?\n"
# 28 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "¿Adónde te crees que vas?$"
# 29 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 30 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4Defeat:
# 31 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "¡Me has ganado!$"
# 32 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 33 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4PostBattle:
# 34 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "¡Mi colega se olvidó el mapa\n"
# 35 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "en ese submarino!\p"
# 36 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "¡Hay que ser inútil!$"
