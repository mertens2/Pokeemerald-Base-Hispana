# 1 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 2 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_MapScripts::
# 3 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.byte 0
# 4 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 5 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victor::
# 6 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 7 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 8 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICTOR
# 9 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
# 10 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 11 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 12 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 13 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria::
# 14 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 15 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 16 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICTORIA
# 17 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace
# 18 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
# 19 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 20 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MACHO_BRACE
# 22 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 23 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 24 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace::
# 26 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 27 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 32 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 33 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VIVI
# 34 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 35 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICKY
# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	release
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Nunca antes había visto a nadie que\n"
# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "usara los POKéMON con tanto arte.\p"
# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "No te ofendas, pero mi hijo es\n"
# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "más fuerte que tú.\p"
# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Ha participado incluso en el desafío\n"
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "de la LIGA POKéMON. Que lo sepas…$"
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace:
# 69 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Usamos VESTIDURA para que nuestros\n"
# 70 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "POKéMON mejoren aún más durante\l"
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "el entrenamiento.\p"
# 72 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Ya que has vencido a toda la familia, no\n"
# 73 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "creo que la necesites, pero me gustaría\l"
# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "darte nuestra VESTIDURA igualmente.$"
# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
# 77 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Cuando se trata de combates POKéMON,\n"
# 78 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "tendemos a tomárnoslo muy en serio…$"
# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
# 81 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mamá es más fuerte que papá.\p"
# 82 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Yo soy más fuerte que mamá.\p"
# 83 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "¡Y la abuelita es más fuerte que yo!\p"
# 84 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Pero mi hermano mayor es aún\n"
# 85 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "más fuerte que la abuelita.$"
# 86 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 87 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
# 88 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "No cabe duda de que eres fuerte.\p"
# 89 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Pero, si tuvieras que luchar contra mi\n"
# 90 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "nieto, llorarías pidiendo clemencia.\p"
# 91 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Es mucho más fuerte que cualquier\n"
# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "otro ENTRENADOR que conozcamos.\p"
# 93 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Ahora debe de estar enfrentándose al\n"
# 94 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "CAMPEÓN de la LIGA POKéMON…\p"
# 95 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Conociendo a mi nieto…, ¡puede que\n"
# 96 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "ya sea el nuevo CAMPEÓN y todo!$"
# 97 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 98 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
# 99 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mi nieto debe de estar enfrentándose\n"
# 100 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "al CAMPEÓN de la LIGA POKéMON…\p"
# 101 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Conociendo a mi nieto…, ¡puede que\n"
# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "ya sea el nuevo CAMPEÓN y todo!$"
