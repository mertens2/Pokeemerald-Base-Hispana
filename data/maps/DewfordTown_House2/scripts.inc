# 1 "data/maps/DewfordTown_House2/scripts.pory"

# 2 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_MapScripts::
# 3 "data/maps/DewfordTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_House2/scripts.pory"

# 5 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Man::
# 6 "data/maps/DewfordTown_House2/scripts.pory"
	lock
# 7 "data/maps/DewfordTown_House2/scripts.pory"
	faceplayer
# 8 "data/maps/DewfordTown_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_SILK_SCARF, DewfordTown_House2_EventScript_ExplainSilkScarf
# 9 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_WantYouToHaveSilkScarf, MSGBOX_DEFAULT
# 10 "data/maps/DewfordTown_House2/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 11 "data/maps/DewfordTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_House2_EventScript_NoRoomForScarf
# 12 "data/maps/DewfordTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_SILK_SCARF
# 13 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 14 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 15 "data/maps/DewfordTown_House2/scripts.pory"

# 16 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_NoRoomForScarf::
# 17 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_NoRoom, MSGBOX_DEFAULT
# 18 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 19 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 20 "data/maps/DewfordTown_House2/scripts.pory"

# 21 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_ExplainSilkScarf::
# 22 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_ExplainSilkScarf, MSGBOX_DEFAULT
# 23 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 24 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 25 "data/maps/DewfordTown_House2/scripts.pory"

# 26 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Boy::
# 27 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_BrawlySoCool, MSGBOX_NPC
# 28 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 29 "data/maps/DewfordTown_House2/scripts.pory"

# 30 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_WantYouToHaveSilkScarf:
# 31 "data/maps/DewfordTown_House2/scripts.pory"
	.string "¡Recrea la vista en esto!\p"
# 32 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Es un PAÑUELO de SEDA.\n"
# 33 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Es lo último de lo último.\l"
# 34 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Una preciosidad.\p"
# 35 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Ajá, ya veo que te gusta…\n"
# 36 "data/maps/DewfordTown_House2/scripts.pory"
	.string "¡Te brillan los ojos y todo!\p"
# 37 "data/maps/DewfordTown_House2/scripts.pory"
	.string "¡Me has caído bien!\n"
# 38 "data/maps/DewfordTown_House2/scripts.pory"
	.string "¡Toma, te lo voy a dar!$"
# 39 "data/maps/DewfordTown_House2/scripts.pory"

# 40 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_NoRoom:
# 41 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Anda, ¿no tienes sitio?\p"
# 42 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Escúchame bien: todo el mundo tendría\n"
# 43 "data/maps/DewfordTown_House2/scripts.pory"
	.string "que tener un PAÑUELO como éste.\l"
# 44 "data/maps/DewfordTown_House2/scripts.pory"
	.string "¡Yo daría lo que fuera por tenerlo!$"
# 45 "data/maps/DewfordTown_House2/scripts.pory"

# 46 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_ExplainSilkScarf:
# 47 "data/maps/DewfordTown_House2/scripts.pory"
	.string "El PAÑUELO de SEDA aumenta la potencia\n"
# 48 "data/maps/DewfordTown_House2/scripts.pory"
	.string "de los movimientos de tipo NORMAL.\p"
# 49 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Es un PAÑUELO maravilloso que sienta\n"
# 50 "data/maps/DewfordTown_House2/scripts.pory"
	.string "de miedo a casi cualquier POKéMON.$"
# 51 "data/maps/DewfordTown_House2/scripts.pory"

# 52 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_BrawlySoCool:
# 53 "data/maps/DewfordTown_House2/scripts.pory"
	.string "¡Guau! ¿Has cruzado todo el mar\n"
# 54 "data/maps/DewfordTown_House2/scripts.pory"
	.string "para venir a AZULIZA?\p"
# 55 "data/maps/DewfordTown_House2/scripts.pory"
	.string "¿Has venido aquí porque has oído\n"
# 56 "data/maps/DewfordTown_House2/scripts.pory"
	.string "hablar de MARCIAL?\p"
# 57 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Es tan guay…\n"
# 58 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Todos lo veneran.$"
