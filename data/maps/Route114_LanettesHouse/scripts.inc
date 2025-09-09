# 1 "data/maps/Route114_LanettesHouse/scripts.pory"

# 2 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_MapScripts::
# 3 "data/maps/Route114_LanettesHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_LanettesHouse_OnTransition
# 4 "data/maps/Route114_LanettesHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route114_LanettesHouse/scripts.pory"

# 6 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_OnTransition:
# 7 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_LANDMARK_LANETTES_HOUSE
# 8 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 9 "data/maps/Route114_LanettesHouse/scripts.pory"

# 10 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Lanette::
# 11 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 12 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOLL_LANETTE, Route114_LanettesHouse_EventScript_OfferAdvice
# 14 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 15 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EverythingClutteredKeepThis, MSGBOX_DEFAULT
# 16 "data/maps/Route114_LanettesHouse/scripts.pory"
	givedecoration DECOR_LOTAD_DOLL
# 17 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowNoRoomForDecor
# 18 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_RECEIVED_DOLL_LANETTE
# 19 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
# 20 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 21 "data/maps/Route114_LanettesHouse/scripts.pory"

# 22 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_OfferAdvice::
# 23 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_OrganizeYourBoxes, MSGBOX_DEFAULT
# 24 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
# 25 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 26 "data/maps/Route114_LanettesHouse/scripts.pory"

# 27 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Notebook::
# 28 "data/maps/Route114_LanettesHouse/scripts.pory"
	lockall
# 29 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage1, MSGBOX_YESNO
# 30 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage2
# 31 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ClosedTheNotebook, MSGBOX_DEFAULT
# 32 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 33 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 34 "data/maps/Route114_LanettesHouse/scripts.pory"

# 35 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage2::
# 36 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage2, MSGBOX_YESNO
# 37 "data/maps/Route114_LanettesHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage3
# 38 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 39 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 40 "data/maps/Route114_LanettesHouse/scripts.pory"

# 41 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage3::
# 42 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage3, MSGBOX_DEFAULT
# 43 "data/maps/Route114_LanettesHouse/scripts.pory"
	return
# 44 "data/maps/Route114_LanettesHouse/scripts.pory"

# 45 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_PC::
# 46 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EmailFromBill, MSGBOX_SIGN
# 47 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 48 "data/maps/Route114_LanettesHouse/scripts.pory"

# 49 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EverythingClutteredKeepThis:
# 50 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "AREDIA: ¡Anda! ¡{PLAYER}{KUN}!\p"
# 51 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Perdona el desorden, es que estoy\n"
# 52 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "en medio de una investigación vital\l"
# 53 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "y no tengo tiempo para nada…\p"
# 54 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Qué vergüenza… No le digas a nadie\n"
# 55 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "lo desastre que soy. Mira, te daré\l"
# 56 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "esto en agradecimiento…$"
# 57 "data/maps/Route114_LanettesHouse/scripts.pory"

# 58 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_OrganizeYourBoxes:
# 59 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "¿Quieres algún consejo sobre el Sistema\n"
# 60 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "de Almacenamiento de POKéMON?\p"
# 61 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Ahí va: organiza las CAJAS para que\n"
# 62 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "puedas encontrar rápido cada POKéMON.$"
# 63 "data/maps/Route114_LanettesHouse/scripts.pory"

# 64 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage1:
# 65 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Son notas de investigación de AREDIA.\n"
# 66 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Contienen información sobre las CAJAS.\p"
# 67 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“Diseñar las CAJAS para que\n"
# 68 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "alberguen 30 POKéMON cada una.\p"
# 69 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Todo ENTRENADOR debería poder\n"
# 70 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "almacenar 420 POKéMON en el PC.”\p"
# 71 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "¿Sigo leyendo?$"
# 72 "data/maps/Route114_LanettesHouse/scripts.pory"

# 73 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage2:
# 74 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“Añadir un sistema de marcado que\n"
# 75 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "facilite la organización de los POKéMON.\p"
# 76 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Hacer posible el cambio de nombres y\n"
# 77 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "diseños de papel pintado de las CAJAS\l"
# 78 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "para agradar a los POKéMON guardados.”\p"
# 79 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "¿Sigo leyendo?$"
# 80 "data/maps/Route114_LanettesHouse/scripts.pory"

# 81 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage3:
# 82 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“Cuando se guarde un POKéMON,\n"
# 83 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "irá a la última CAJA inspeccionada.\p"
# 84 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Si ésta está llena, el POKéMON se\n"
# 85 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "almacenará en la siguiente CAJA.\p"
# 86 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Es decir, al examinar una CAJA, ésta\n"
# 87 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "pasará a ser la CAJA predeterminada\l"
# 88 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "a la que se envíen los POKéMON.”$"
# 89 "data/maps/Route114_LanettesHouse/scripts.pory"

# 90 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ClosedTheNotebook:
# 91 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{PLAYER} cerró el cuaderno.$"
# 92 "data/maps/Route114_LanettesHouse/scripts.pory"

# 93 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EmailFromBill:
# 94 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Alguien ha enviado un correo\n"
# 95 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "electrónico al PC…\p"
# 96 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“¡Hola!\p"
# 97 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Tu Sistema de Almacenamiento\n"
# 98 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "parece mucho mejor que el mío.\p"
# 99 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Tiene un montón de características que\n"
# 100 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "lo hacen más útil y divertido de usar.\p"
# 101 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Me enorgullece ser parte del equipo\n"
# 102 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "que ha desarrollado este sistema.\p"
# 103 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Espero que tu trabajo mejore aún más\n"
# 104 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "los Sistemas de Almacenamiento.\p"
# 105 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Un abrazo,\p"
# 106 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "BILL”$"
