# 1 "data/maps/GraniteCave_1F/scripts.pory"

# 2 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_MapScripts::
# 3 "data/maps/GraniteCave_1F/scripts.pory"
	.byte 0
# 4 "data/maps/GraniteCave_1F/scripts.pory"

# 5 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_Hiker::
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 7 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 8 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_HM_FLASH
# 11 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 13 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 15 "data/maps/GraniteCave_1F/scripts.pory"

# 16 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash::
# 17 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 18 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 19 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 20 "data/maps/GraniteCave_1F/scripts.pory"

# 21 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
# 22 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Oye, tú.\n"
# 23 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Aquí dentro está muy oscuro.\l"
# 24 "data/maps/GraniteCave_1F/scripts.pory"
	.string "No va a ser fácil explorar esto.\p"
# 25 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Ese tipo que vino antes…\n"
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	.string "MÁXIMO se llamaba…\p"
# 27 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Él sabía cómo usar DESTELLO, así\n"
# 28 "data/maps/GraniteCave_1F/scripts.pory"
	.string "que no ha debido de tener problemas…\p"
# 29 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Pero nosotros, los MONTAÑEROS,\n"
# 30 "data/maps/GraniteCave_1F/scripts.pory"
	.string "estamos siempre dispuestos a echar\l"
# 31 "data/maps/GraniteCave_1F/scripts.pory"
	.string "una mano… ¡o dos!\p"
# 32 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Así que toma, es para ti.$"
# 33 "data/maps/GraniteCave_1F/scripts.pory"

# 34 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_ExplainFlash:
# 35 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Enseña el movimiento de MO DESTELLO\n"
# 36 "data/maps/GraniteCave_1F/scripts.pory"
	.string "a un POKéMON y úsalo.\p"
# 37 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Podrás alumbrar incluso las cuevas\n"
# 38 "data/maps/GraniteCave_1F/scripts.pory"
	.string "oscuras como boca de lobo.\p"
# 39 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Pero, para usarlo, necesitas la MEDALLA\n"
# 40 "data/maps/GraniteCave_1F/scripts.pory"
	.string "del GIMNASIO de AZULIZA.$"
