# 1 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHousePuzzle2_OnResume
# 4 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle2_OnTransition
# 5 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.byte 0
# 6 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 7 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_OnResume:
# 8 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route110_TrickHousePuzzle2_EventScript_PressButton1
# 9 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, Route110_TrickHousePuzzle2_EventScript_PressButton2
# 10 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call_if_eq VAR_TEMP_3, 1, Route110_TrickHousePuzzle2_EventScript_PressButton3
# 11 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, Route110_TrickHousePuzzle2_EventScript_PressButton4
# 12 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 13 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 14 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_OnTransition:
# 15 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_1, 0
# 16 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_2, 0
# 17 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_3, 0
# 18 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_4, 0
# 19 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 20 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 21 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Scroll::
# 22 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 23 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_2_STATE, 0, Route110_TrickHousePuzzle2_EventScript_FoundScroll
# 24 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 25 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 26 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 27 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_FoundScroll::
# 28 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_2_STATE, 1
# 29 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 30 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 31 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 32 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Button1::
# 33 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 34 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_1, 1
# 35 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	playse SE_PIN
# 36 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton1
# 37 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	special DrawWholeMapView
# 38 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	releaseall
# 39 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 40 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 41 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Button2::
# 42 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 43 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_2, 1
# 44 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	playse SE_PIN
# 45 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton2
# 46 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	special DrawWholeMapView
# 47 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	releaseall
# 48 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 49 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 50 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Button3::
# 51 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 52 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_3, 1
# 53 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	playse SE_PIN
# 54 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton3
# 55 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	special DrawWholeMapView
# 56 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	releaseall
# 57 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 58 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 59 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Button4::
# 60 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 61 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 62 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	playse SE_PIN
# 63 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton4
# 64 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	special DrawWholeMapView
# 65 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	releaseall
# 66 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 67 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 68 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_PressButton1::
# 69 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 11, 12, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 70 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 1, 13, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 71 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	return
# 72 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 73 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_PressButton2::
# 74 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 0, 4, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 75 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 5, 6, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 76 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	return
# 77 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 78 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_PressButton3::
# 79 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 14, 5, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 80 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 7, 15, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 81 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	return
# 82 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 83 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_PressButton4::
# 84 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 7, 11, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 85 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 14, 12, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
# 86 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	return
# 87 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 88 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Ted::
# 89 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	trainerbattle_single TRAINER_TED, Route110_TrickHousePuzzle2_Text_TedIntro, Route110_TrickHousePuzzle2_Text_TedDefeat
# 90 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_TedPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 92 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 93 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Paul::
# 94 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	trainerbattle_single TRAINER_PAUL, Route110_TrickHousePuzzle2_Text_PaulIntro, Route110_TrickHousePuzzle2_Text_PaulDefeat
# 95 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 97 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 98 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Georgia::
# 99 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	trainerbattle_single TRAINER_GEORGIA, Route110_TrickHousePuzzle2_Text_GeorgiaIntro, Route110_TrickHousePuzzle2_Text_GeorgiaDefeat
# 100 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_GeorgiaPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	end
# 102 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 103 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened:
# 104 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "{PLAYER} escribió el código secreto\n"
# 105 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "en la puerta.\p"
# 106 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "“El MAESTRO TRETA\n"
# 107 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "es listo.”\l"
# 108 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "Y…\p"
# 109 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "¡la puerta se ha abierto!$"
# 110 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 111 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_TedIntro:
# 112 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "¿Qué interruptor cierra qué agujero?$"
# 113 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 114 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_TedDefeat:
# 115 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "Tras este combate, estoy\n"
# 116 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "todavía más liado…$"
# 117 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 118 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_TedPostBattle:
# 119 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "¿Por qué no te pones a pulsar\n"
# 120 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "interruptores y vemos qué pasa?$"
# 121 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 122 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_PaulIntro:
# 123 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "Anda, así que has aceptado tu segundo\n"
# 124 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "desafío de la CASA TRETA…$"
# 125 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 126 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_PaulDefeat:
# 127 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "¿Así que también se te dan\n"
# 128 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "bien los combates?$"
# 129 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 130 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_PaulPostBattle:
# 131 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "¡El MAESTRO TRETA preparó todos\n"
# 132 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "los trucos de esta casa él solito!$"
# 133 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 134 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_GeorgiaIntro:
# 135 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "Quiero tener mi propio GIMNASIO algún\n"
# 136 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "día, por eso aprendo a poner trampas.$"
# 137 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 138 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_GeorgiaDefeat:
# 139 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "¡Debería haber aprendido tácticas\n"
# 140 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "de combate en vez de chorradas!$"
# 141 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"

# 142 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
Route110_TrickHousePuzzle2_Text_GeorgiaPostBattle:
# 143 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "Eres fuerte, sí… ¡Quizás tú también\n"
# 144 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "llegues a ser LÍDER algún día!$"
