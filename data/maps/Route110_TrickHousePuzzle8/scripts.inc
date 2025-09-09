# 1 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.byte 0
# 4 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 5 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Scroll::
# 6 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	lockall
# 7 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0, Route110_TrickHousePuzzle8_EventScript_FoundScroll
# 8 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 9 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 10 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 11 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_FoundScroll::
# 12 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 1
# 13 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 14 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 15 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 16 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Vincent::
# 17 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_VINCENT, Route110_TrickHousePuzzle8_Text_VincentIntro, Route110_TrickHousePuzzle8_Text_VincentDefeat
# 18 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 20 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 21 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Keira::
# 22 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_KEIRA, Route110_TrickHousePuzzle8_Text_KeiraIntro, Route110_TrickHousePuzzle8_Text_KeiraDefeat
# 23 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_KeiraPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 25 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 26 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Leroy::
# 27 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_LEROY, Route110_TrickHousePuzzle8_Text_LeroyIntro, Route110_TrickHousePuzzle8_Text_LeroyDefeat
# 28 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 30 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 31 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened::
# 32 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "{PLAYER} escribió el código secreto\n"
# 33 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "en la puerta.\p"
# 34 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "“El MAESTRO TRETA\n"
# 35 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "es amable.”\l"
# 36 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Y…\p"
# 37 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "¡la puerta se ha abierto!$"
# 38 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 39 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_VincentIntro:
# 40 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "No hay muchos ENTRENADORES\n"
# 41 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "que hayan llegado hasta aquí…$"
# 42 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 43 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_VincentDefeat:
# 44 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Así que debes de ser muy fuerte…$"
# 45 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 46 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_VincentPostBattle:
# 47 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "¿Has vencido al CAMPEÓN de la LIGA\n"
# 48 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "POKéMON? ¡Menos lobos!$"
# 49 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 50 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_KeiraIntro:
# 51 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "¡Puedes darte con un canto en los\n"
# 52 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "dientes por luchar contra mí!$"
# 53 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 54 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_KeiraDefeat:
# 55 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "¡Esto no puede ser!\n"
# 56 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "¡Yo nunca había perdido antes!$"
# 57 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 58 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_KeiraPostBattle:
# 59 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Me has vencido de pura chorra.\n"
# 60 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Puede darte para fardar un rato…$"
# 61 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 62 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_LeroyIntro:
# 63 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Te las has apañado bien en el desafío\n"
# 64 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "de la CASA TRETA…$"
# 65 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 66 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_LeroyDefeat:
# 67 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Ya entiendo…\n"
# 68 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Posees un estilo único e inimitable…$"
# 69 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 70 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_LeroyPostBattle:
# 71 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Alguien como tú le tiene que gustar\n"
# 72 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "por fuerza al MAESTRO TRETA.$"
