# 1 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle1_OnLoad
# 4 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.byte 0
# 5 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 6 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_OnLoad:
# 7 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2, Route110_TrickHousePuzzle1_EventScript_OpenDoor
# 8 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 9 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 10 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_OpenDoor::
# 11 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 12 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 13 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 14 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Scroll::
# 15 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	lockall
# 16 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0, Route110_TrickHousePuzzle1_EventScript_FoundScroll
# 17 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 18 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 19 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 20 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_FoundScroll::
# 21 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 1
# 22 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 23 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 24 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 25 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Sally::
# 26 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_SALLY, Route110_TrickHousePuzzle1_Text_SallyIntro, Route110_TrickHousePuzzle1_Text_SallyDefeat
# 27 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 29 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 30 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Eddie::
# 31 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_EDDIE, Route110_TrickHousePuzzle1_Text_EddieIntro, Route110_TrickHousePuzzle1_Text_EddieDefeat
# 32 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_EddiePostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 34 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 35 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Robin::
# 36 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_ROBIN, Route110_TrickHousePuzzle1_Text_RobinIntro, Route110_TrickHousePuzzle1_Text_RobinDefeat
# 37 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_RobinPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 39 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 40 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened::
# 41 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "{PLAYER} escribió el código secreto\n"
# 42 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "en la puerta.\p"
# 43 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "“El MAESTRO TRETA\n"
# 44 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "es fabuloso.”\l"
# 45 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Y…\p"
# 46 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "¡la puerta se ha abierto!$"
# 47 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 48 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_SallyIntro:
# 49 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Me voy a hacer con la victoria gracias\n"
# 50 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "al movimiento que acabo de aprender.$"
# 51 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 52 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_SallyDefeat:
# 53 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Vaya, contigo no funciona…$"
# 54 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 55 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_SallyPostBattle:
# 56 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Este nuevo movimiento es estupendo.\n"
# 57 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "¡No me canso de usarlo!$"
# 58 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 59 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_EddieIntro:
# 60 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "He llegado hasta esta casa tan\n"
# 61 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "rara sin querer…$"
# 62 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 63 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_EddieDefeat:
# 64 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Y encima voy y pierdo…$"
# 65 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 66 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_EddiePostBattle:
# 67 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Me he perdido, he perdido luchando\n"
# 68 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "y ahora… ¡no sé ni cómo volver a casa!$"
# 69 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 70 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_RobinIntro:
# 71 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "¿Pero quién es ese MAESTRO TRETA?$"
# 72 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 73 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_RobinDefeat:
# 74 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "¡Has vencido porque estaba sumida\n"
# 75 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "en mis pensamientos, que conste!$"
# 76 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 77 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_RobinPostBattle:
# 78 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "¡Qué fuerte eres!\n"
# 79 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "¿De dónde sales?$"
