# 1 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.byte 0
# 4 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 5 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Scroll::
# 6 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	lockall
# 7 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_4_STATE, 0, Route110_TrickHousePuzzle4_EventScript_FoundScroll
# 8 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 9 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 10 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 11 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_FoundScroll::
# 12 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_4_STATE, 1
# 13 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 14 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 15 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 16 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Cora::
# 17 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	trainerbattle_single TRAINER_CORA, Route110_TrickHousePuzzle4_Text_CoraIntro, Route110_TrickHousePuzzle4_Text_CoraDefeat
# 18 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_CoraPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 20 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 21 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Yuji::
# 22 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	trainerbattle_single TRAINER_YUJI, Route110_TrickHousePuzzle4_Text_YujiIntro, Route110_TrickHousePuzzle4_Text_YujiDefeat
# 23 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 25 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 26 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Paula::
# 27 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	trainerbattle_single TRAINER_PAULA, Route110_TrickHousePuzzle4_Text_PaulaIntro, Route110_TrickHousePuzzle4_Text_PaulaDefeat
# 28 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_PaulaPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 30 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 31 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened:
# 32 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "{PLAYER} escribió el código secreto\n"
# 33 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "en la puerta.\p"
# 34 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "“El MAESTRO TRETA\n"
# 35 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "es guay.”\l"
# 36 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Y…\p"
# 37 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "¡la puerta se ha abierto!$"
# 38 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 39 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_CoraIntro:
# 40 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Me duele la cabeza de pensar…\n"
# 41 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "¡Luchar cuesta menos trabajo!$"
# 42 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 43 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_CoraDefeat:
# 44 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Me da igual haber perdido…\n"
# 45 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "¡Luchar sigue siendo lo mejor!$"
# 46 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 47 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_CoraPostBattle:
# 48 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "¡Por supuesto! Yo iría a cualquier sitio\n"
# 49 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "donde hubiera un ENTRENADOR.$"
# 50 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 51 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_YujiIntro:
# 52 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "¡Eh, tú! ¿Ves estas rocas tan gordas?\n"
# 53 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "¡Pues yo las muevo con el dedo meñique!$"
# 54 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 55 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_YujiDefeat:
# 56 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Puedo mover rocas, pero no\n"
# 57 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "puedo resolver acertijos…$"
# 58 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 59 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_YujiPostBattle:
# 60 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "No basta con ser musculoso,\n"
# 61 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "¡también hay que ser ingenioso!$"
# 62 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 63 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_PaulaIntro:
# 64 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "La CASA TRETA es cada vez más\n"
# 65 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "traicionera, ¿no te parece?$"
# 66 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 67 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_PaulaDefeat:
# 68 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "¡Ayyyy!$"
# 69 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 70 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_PaulaPostBattle:
# 71 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Yo creo que nadie ha logrado\n"
# 72 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "llegar hasta el final…$"
