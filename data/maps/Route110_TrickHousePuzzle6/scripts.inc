# 1 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle6_OnTransition
# 4 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHousePuzzle6_OnWarp
# 5 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.byte 0
# 6 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 7 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_OnTransition:
# 8 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	special RotatingGate_InitPuzzle
# 9 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 10 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 11 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_OnWarp:
# 12 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, Route110_TrickHousePuzzle6_EventScript_InitPuzzle
# 13 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.2byte 0
# 14 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 15 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_5
# 16 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_InitPuzzle::
# 17 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 18 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 19 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 20 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Scroll::
# 21 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	lockall
# 22 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0, Route110_TrickHousePuzzle6_EventScript_FoundScroll
# 23 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 24 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 25 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 26 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_FoundScroll::
# 27 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 1
# 28 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 29 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 30 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 31 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Sophia::
# 32 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	trainerbattle_single TRAINER_SOPHIA, Route110_TrickHousePuzzle6_Text_SophiaIntro, Route110_TrickHousePuzzle6_Text_SophiaDefeat
# 33 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_SophiaPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 35 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 36 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Benny::
# 37 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	trainerbattle_single TRAINER_BENNY, Route110_TrickHousePuzzle6_Text_BennyIntro, Route110_TrickHousePuzzle6_Text_BennyDefeat
# 38 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_BennyPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 40 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 41 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Sebastian::
# 42 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	trainerbattle_single TRAINER_SEBASTIAN, Route110_TrickHousePuzzle6_Text_SebastianIntro, Route110_TrickHousePuzzle6_Text_SebastianDefeat
# 43 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_SebastianPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	end
# 45 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 46 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened:
# 47 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "{PLAYER} escribió el código secreto\n"
# 48 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "en la puerta.\p"
# 49 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "“El MAESTRO TRETA\n"
# 50 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "es mi inspiración.”\l"
# 51 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Y…\p"
# 52 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "¡la puerta se ha abierto!$"
# 53 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 54 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_SophiaIntro:
# 55 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Cuando oí que había una casa rara\n"
# 56 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "por aquí, vine a ver cómo era.$"
# 57 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 58 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_SophiaDefeat:
# 59 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "¡Y me encontré con alguien\n"
# 60 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "que me ha dado una paliza!$"
# 61 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 62 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_SophiaPostBattle:
# 63 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Me lo paso de miedo cotilleando\n"
# 64 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "por la casa.\p"
# 65 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "¡Es un reto que no dudo en repetir!$"
# 66 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 67 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_BennyIntro:
# 68 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Quizás pueda conseguir que mi POKéMON\n"
# 69 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "PÁJARO sobrevuele el muro…$"
# 70 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 71 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_BennyDefeat:
# 72 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "¡Aaaaah! ¡La pifié!$"
# 73 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 74 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_BennyPostBattle:
# 75 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Ejem, ejem… Creo que he perdido\n"
# 76 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "porque he intentado hacer trampa…$"
# 77 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 78 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_SebastianIntro:
# 79 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Estas puertas giratorias me están\n"
# 80 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "revolviendo el estómago…$"
# 81 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 82 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_SebastianDefeat:
# 83 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Todo gira y gira y gira…\n"
# 84 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Ay, ay, ay, no puedo más…$"
# 85 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"

# 86 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
Route110_TrickHousePuzzle6_Text_SebastianPostBattle:
# 87 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "No entiendo, a ti no te da ni fu ni fa…\n"
# 88 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "¿O estás poniendo cara de póquer?$"
