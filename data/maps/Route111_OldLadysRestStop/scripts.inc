# 1 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 2 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_MapScripts::
# 3 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OldLadysRestStop_OnTransition
# 4 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.byte 0
# 5 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 6 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_OnTransition:
# 7 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	setflag FLAG_LANDMARK_OLD_LADY_REST_SHOP
# 8 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 9 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 10 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_OldLady::
# 11 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	lock
# 12 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	faceplayer
# 13 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_RestUpHere, MSGBOX_YESNO
# 14 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_OldLadysRestStop_EventScript_Rest
# 15 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route111_OldLadysRestStop_EventScript_DeclineRest
# 16 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 17 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 18 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_Rest::
# 19 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_TakeYourTimeRestUp, MSGBOX_DEFAULT
# 20 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	closemessage
# 21 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 22 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest, MSGBOX_YESNO
# 23 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_OldLadysRestStop_EventScript_Rest
# 24 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route111_OldLadysRestStop_EventScript_DeclineRest
# 25 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 26 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 27 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_DeclineRest::
# 28 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_DontNeedToBeShy, MSGBOX_DEFAULT
# 29 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	release
# 30 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 31 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 32 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_RestUpHere:
# 33 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Ay, ay, ay…\n"
# 34 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Tus POKéMON parecen agotados…\p"
# 35 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "¿Por qué no descansas aquí?\n"
# 36 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Es lo mejor que puedes hacer, en serio.$"
# 37 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 38 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_TakeYourTimeRestUp:
# 39 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Exacto.\n"
# 40 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Tómate tu tiempo y descansa.$"
# 41 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 42 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest:
# 43 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Ay, ay, ay…\n"
# 44 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Tus POKéMON siguen hechos polvo…\p"
# 45 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "¿Por qué no vuelves a descansar aquí?\n"
# 46 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Es lo mejor que puedes hacer, en serio.$"
# 47 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 48 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_DontNeedToBeShy:
# 49 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "¿Seguro?\n"
# 50 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Yo que tú me lo pensaría dos veces…$"
