# 1 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_MapScripts::
# 3 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt1::
# 6 "data/maps/SeafloorCavern_Room1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, SeafloorCavern_Room1_Text_Grunt1Intro, SeafloorCavern_Room1_Text_Grunt1Defeat
# 7 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 9 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 10 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt2::
# 11 "data/maps/SeafloorCavern_Room1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, SeafloorCavern_Room1_Text_Grunt2Intro, SeafloorCavern_Room1_Text_Grunt2Defeat
# 12 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 14 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 15 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Intro:
# 16 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "¡No queremos enanos por aquí!\n"
# 17 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "¡Vete a casita con mamá!$"
# 18 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 19 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Defeat:
# 20 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Aaaah, quiero irme a casa…$"
# 21 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 22 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1PostBattle:
# 23 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Quiero que me asciendan para poder\n"
# 24 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "mandar a los SOLDADOS…$"
# 25 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 26 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2Intro:
# 27 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Ese submarino es enanísimo…\n"
# 28 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Me duele todo de estar ahí encogido…$"
# 29 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 30 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2Defeat:
# 31 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "¡Me duele aún más perder!$"
# 32 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 33 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2PostBattle:
# 34 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Ese submarino que robamos\n"
# 35 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "es lo peor: ¡no se cabe dentro!$"
