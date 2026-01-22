LittlerootTown_MLMHouse_MapScripts::
	.byte 0


MLMHouse_EventScript_FatMan::
# 4 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	questmenu QUEST_MENU_CHECK_UNLOCKED SIDE_QUEST_3
# 5 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	lockall
# 6 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	faceplayer
# 7 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	setspeaker Alex
# 38 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	msgbox MLMHouse_EventScript_FatMan_Text_0
# 49 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	releaseall
	return


MLMHouse_EventScript_Daughter::
# 53 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	lockall
# 54 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	faceplayer
# 55 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	setspeaker Esmeralda
# 58 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	msgbox MLMHouse_EventScript_Daughter_Text_0
# 65 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	releaseall
	return


MLMHouse_EventScript_Chimecho::
# 69 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	lockall
# 70 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	faceplayer
# 71 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	playmoncry SPECIES_CHIMECHO, CRY_MODE_NORMAL
# 72 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	releaseall
	return


MLMHouse_EventScript_FatMan_Text_0:
# 38 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	.string "¡Hola, {PLAYER}! ¿Cómo está todo el\n"
	.string "tema de la mudanza?\p"
	.string "Es bueno ver a tus padres en Hoenn otra\n"
	.string "vez.\p"
	.string "Mi marido, ellos, y yo éramos los mejores\n"
	.string "amigos. Nos divertíamos tanto…$"

MLMHouse_EventScript_Daughter_Text_0:
# 58 "data/maps/LittlerootTown_MLMHouse/scripts.pory"
	.string "¡Hola! ¡Encantada!\p"
	.string "¿Ya has conocido a los Chimecho de mis\n"
	.string "papás? ¡Los han tenido desde que\l"
	.string "eran Chingling!\p"
	.string "Me pregunto… ¿Porqué ambos tienen\n"
	.string "uno?\l"
	.string "Quizás… ¡Fue una declaración de amor!\l"
	.string "¿O quizás de lealtad?\p"
	.string "¡AH, ME INTRIGA LA RESPUESTA!$"
