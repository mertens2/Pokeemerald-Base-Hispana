# 1 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 2 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_MapScripts::
# 3 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
# 6 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 7 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 9 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_TEMP_1, FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
# 10 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 11 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 21 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Soy el TUTOR de MOVIMIENTOS.\p"
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Me sé todos los movimientos que\n"
# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "aprenden los POKéMON. Todos, toditos,\l"
# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "todos. Y además los puedo enseñar.\p"
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Si quieres, puedo enseñar a uno\n"
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "de tus POKéMON un movimiento.\p"
# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Lo haré por una insignificante ESCAMA\n"
# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "CORAZÓN. Es que las colecciono.$"
# 69 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "¡Sí! ¡Ésa es! ¡Una auténtica ESCAMA\n"
# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "CORAZÓN! ¡Una de las de verdad!\p"
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "A ver que lo adivine, ¿quieres que\n"
# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "enseñe un movimiento a tu POKéMON?$"
# 75 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "¿Qué POKéMON quieres que lo aprenda?$"
# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "¿Qué movimiento quieres que aprenda?$"
# 81 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 82 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
# 83 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Perdona…\p"
# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Parece que no puedo enseñar ningún\n"
# 85 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "movimiento a ese POKéMON…$"
# 86 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 87 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
# 88 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} entregó una ESCAMA CORAZÓN\n"
# 89 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "a cambio de la lección.$"
# 90 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 91 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Si tu POKéMON necesita aprender\n"
# 93 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "un movimiento, vuelve con una ESCAMA\l"
# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "CORAZÓN.$"
# 95 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
# 97 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "¿Eh? No puedo enseñar absolutamente\n"
# 98 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "ningún movimiento a un HUEVO…$"
