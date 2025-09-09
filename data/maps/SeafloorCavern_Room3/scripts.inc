# 1 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_MapScripts::
# 3 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_EventScript_Shelly::
# 6 "data/maps/SeafloorCavern_Room3/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Room3_Text_ShellyIntro, SeafloorCavern_Room3_Text_ShellyDefeat
# 7 "data/maps/SeafloorCavern_Room3/scripts.pory"
	msgbox SeafloorCavern_Room3_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SeafloorCavern_Room3/scripts.pory"
	end
# 9 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 10 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_EventScript_Grunt5::
# 11 "data/maps/SeafloorCavern_Room3/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_5, SeafloorCavern_Room3_Text_Grunt5Intro, SeafloorCavern_Room3_Text_Grunt5Defeat
# 12 "data/maps/SeafloorCavern_Room3/scripts.pory"
	msgbox SeafloorCavern_Room3_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/SeafloorCavern_Room3/scripts.pory"
	end
# 14 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 15 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_ShellyIntro:
# 16 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "¡Ja, ja, ja, ja!\p"
# 17 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "¿Cómo has podido llegar hasta aquí\n"
# 18 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "sin un submarino?\l"
# 19 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "¡Estoy impresionada!\p"
# 20 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "¡Pero ya has cotilleado bastante!\p"
# 21 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "¡Y quiero tomarme la revancha por lo que\n"
# 22 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "pasó en el INSTITUTO METEOROLÓGICO!\p"
# 23 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "¡Te voy a dar una buena tunda!\n"
# 24 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "¡Ya te puedes ir preparando!$"
# 25 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 26 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_ShellyDefeat:
# 27 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Ja, ja, ja, ja…\p"
# 28 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Ay…$"
# 29 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 30 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_ShellyPostBattle:
# 31 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "¡Ja, ja, ja, ja!\n"
# 32 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "¡Qué fuerte eres!\p"
# 33 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Lástima que no seas miembro\n"
# 34 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "del EQUIPO AQUA.\p"
# 35 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Podrías haber disfrutado\n"
# 36 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "del maravilloso mundo que el JEFE\l"
# 37 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "nos ha prometido…$"
# 38 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 39 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_Grunt5Intro:
# 40 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Para hacer realidad nuestros sueños,\n"
# 41 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "necesitamos el poder de los POKéMON.\p"
# 42 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "¡Pero siempre hay algún entrometido\n"
# 43 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "que usa el poder de los POKéMON\l"
# 44 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "para darnos la lata, incluso aquí!\p"
# 45 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "¡La vida podría ser mucho más\n"
# 46 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "fácil sin plastas como tú!$"
# 47 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 48 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_Grunt5Defeat:
# 49 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "¡Argh!$"
# 50 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 51 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_Grunt5PostBattle:
# 52 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Mira, nosotros no nos cuestionamos\n"
# 53 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "las razones del mandamás.\p"
# 54 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Pero aquí estás tú, mequetrefe,\n"
# 55 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "buscando pelea con el JEFE.\p"
# 56 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Va a resultar…\n"
# 57 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "que tienes agallas…$"
