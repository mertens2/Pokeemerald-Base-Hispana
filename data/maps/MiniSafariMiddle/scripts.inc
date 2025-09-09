# 1 "data/maps/MiniSafariMiddle/scripts.pory"

# 2 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_MapScripts::
# 3 "data/maps/MiniSafariMiddle/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MiniSafariMiddle_OnFrame
# 4 "data/maps/MiniSafariMiddle/scripts.pory"
	.byte 0
# 5 "data/maps/MiniSafariMiddle/scripts.pory"

# 6 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_OnFrame:
# 7 "data/maps/MiniSafariMiddle/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 1, MiniSafariMiddle_EventScript_ExitSafariZone
# 8 "data/maps/MiniSafariMiddle/scripts.pory"
	.2byte 0
# 9 "data/maps/MiniSafariMiddle/scripts.pory"

# 10 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_EventScript_ExitSafariZone::
# 11 "data/maps/MiniSafariMiddle/scripts.pory"
	lockall
# 12 "data/maps/MiniSafariMiddle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MiniSafariMiddle_Movement_ExitSafariZone
# 13 "data/maps/MiniSafariMiddle/scripts.pory"
	waitmovement 0
# 14 "data/maps/MiniSafariMiddle/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 15 "data/maps/MiniSafariMiddle/scripts.pory"
	releaseall
# 16 "data/maps/MiniSafariMiddle/scripts.pory"
	end
# 17 "data/maps/MiniSafariMiddle/scripts.pory"

# 18 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_Movement_ExitSafariZone:
# 19 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_up
# 20 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_right
# 21 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_right
# 22 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_right
# 23 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_right
# 24 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_right
# 25 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_right
# 26 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_right
# 27 "data/maps/MiniSafariMiddle/scripts.pory"
	step_end
# 28 "data/maps/MiniSafariMiddle/scripts.pory"

# 29 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_EventScript_WelcomeAttendant::
# 30 "data/maps/MiniSafariMiddle/scripts.pory"
	msgbox MiniSafariMiddle_Text_WelcomeToSafariZone, MSGBOX_NPC
# 31 "data/maps/MiniSafariMiddle/scripts.pory"
	end
# 32 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_Text_WelcomeToSafariZone::
# 33 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "¡Bienvenid{OA} al Mini-Safari!\p"
# 34 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "Recientemente hemos abierto este\n"
# 35 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "establecimiento para ayudar a los\l"
# 36 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "Entrenadores a obtener Pokémon raros\l"
# 37 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "de forma más accesible. Solíamos solo\l"
# 38 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "tener un local en la Ruta 121, pero era\l"
# 39 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "un lugar difícil de acceder.\p"
# 40 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "Este lugar será más pequeño que la Zona\n"
# 41 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "Safari, ¡Pero aún podrás ver Pokémon\l"
# 42 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "que no verás en ningún otro lugar!\p"
# 43 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "¡Espero que lo disfrutes!$"
# 44 "data/maps/MiniSafariMiddle/scripts.pory"

# 45 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_EventScript_InfoAttendant::
# 46 "data/maps/MiniSafariMiddle/scripts.pory"
	lock
# 47 "data/maps/MiniSafariMiddle/scripts.pory"
	faceplayer
# 48 "data/maps/MiniSafariMiddle/scripts.pory"
	msgbox MiniSafariMiddle_Text_WelcomeFirstTime, MSGBOX_YESNO
# 49 "data/maps/MiniSafariMiddle/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MiniSafariMiddle_EventScript_FirstTimeInfo
# 50 "data/maps/MiniSafariMiddle/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ComeInAndEnjoy, MSGBOX_DEFAULT
# 51 "data/maps/MiniSafariMiddle/scripts.pory"
	release
# 52 "data/maps/MiniSafariMiddle/scripts.pory"
	end
# 53 "data/maps/MiniSafariMiddle/scripts.pory"

# 54 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_EventScript_FirstTimeInfo::
# 55 "data/maps/MiniSafariMiddle/scripts.pory"
	msgbox MiniSafariMiddle_Text_FirstTimeInfo, MSGBOX_DEFAULT
# 56 "data/maps/MiniSafariMiddle/scripts.pory"
	release
# 57 "data/maps/MiniSafariMiddle/scripts.pory"
	end
# 58 "data/maps/MiniSafariMiddle/scripts.pory"

# 59 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_EventScript_EntranceCounterTrigger::
# 60 "data/maps/MiniSafariMiddle/scripts.pory"
	lockall
# 61 "data/maps/MiniSafariMiddle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 62 "data/maps/MiniSafariMiddle/scripts.pory"
	waitmovement 0
# 63 "data/maps/MiniSafariMiddle/scripts.pory"
	showmoneybox 0, 0
# 64 "data/maps/MiniSafariMiddle/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
# 65 "data/maps/MiniSafariMiddle/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MiniSafariMiddle_EventScript_TryEnterSafariZone
# 66 "data/maps/MiniSafariMiddle/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
# 67 "data/maps/MiniSafariMiddle/scripts.pory"
	goto MiniSafariMiddle_EventScript_MovePlayerBackFromCounter
# 68 "data/maps/MiniSafariMiddle/scripts.pory"
	end
# 69 "data/maps/MiniSafariMiddle/scripts.pory"

# 70 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_EventScript_TryEnterSafariZone::
# 71 "data/maps/MiniSafariMiddle/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE
# 72 "data/maps/MiniSafariMiddle/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MiniSafariMiddle_EventScript_NoPokeblockCase
# 73 "data/maps/MiniSafariMiddle/scripts.pory"
	call MiniSafariMiddle_EventScript_CheckHasRoomForPokemon
# 74 "data/maps/MiniSafariMiddle/scripts.pory"
	checkmoney 500
# 75 "data/maps/MiniSafariMiddle/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MiniSafariMiddle_EventScript_NotEnoughMoney
# 76 "data/maps/MiniSafariMiddle/scripts.pory"
	playse SE_SHOP
# 77 "data/maps/MiniSafariMiddle/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ThatWillBe500Please, MSGBOX_DEFAULT
# 78 "data/maps/MiniSafariMiddle/scripts.pory"
	removemoney 500
# 79 "data/maps/MiniSafariMiddle/scripts.pory"
	updatemoneybox
# 80 "data/maps/MiniSafariMiddle/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls, MSGBOX_DEFAULT
# 81 "data/maps/MiniSafariMiddle/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 82 "data/maps/MiniSafariMiddle/scripts.pory"
	message Route121_SafariZoneEntrance_Text_Received30SafariBalls
# 83 "data/maps/MiniSafariMiddle/scripts.pory"
	waitfanfare
# 84 "data/maps/MiniSafariMiddle/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 85 "data/maps/MiniSafariMiddle/scripts.pory"
	closemessage
# 86 "data/maps/MiniSafariMiddle/scripts.pory"
	hidemoneybox
# 87 "data/maps/MiniSafariMiddle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MiniSafariMiddle_Movement_EnterSafariZone
# 88 "data/maps/MiniSafariMiddle/scripts.pory"
	waitmovement 0
# 89 "data/maps/MiniSafariMiddle/scripts.pory"
	special EnterSafariMode
# 90 "data/maps/MiniSafariMiddle/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 2
# 91 "data/maps/MiniSafariMiddle/scripts.pory"
	clearflag FLAG_GOOD_LUCK_SAFARI_ZONE
# 92 "data/maps/MiniSafariMiddle/scripts.pory"
	warp MAP_NEW_MAP1, 45, 34
# 93 "data/maps/MiniSafariMiddle/scripts.pory"
	waitstate
# 94 "data/maps/MiniSafariMiddle/scripts.pory"
	end
# 95 "data/maps/MiniSafariMiddle/scripts.pory"

# 96 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_EventScript_CheckHasRoomForPokemon::
# 97 "data/maps/MiniSafariMiddle/scripts.pory"
	getpartysize
# 98 "data/maps/MiniSafariMiddle/scripts.pory"
	goto_if_ne VAR_RESULT, PARTY_SIZE, MiniSafariMiddle_EventScript_HasRoomForPokemon
# 99 "data/maps/MiniSafariMiddle/scripts.pory"
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
# 100 "data/maps/MiniSafariMiddle/scripts.pory"
	goto_if_eq VAR_RESULT, 1, MiniSafariMiddle_EventScript_HasRoomForPokemon
# 101 "data/maps/MiniSafariMiddle/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull, MSGBOX_DEFAULT
# 102 "data/maps/MiniSafariMiddle/scripts.pory"
	goto MiniSafariMiddle_EventScript_MovePlayerBackFromCounter
# 103 "data/maps/MiniSafariMiddle/scripts.pory"
	end
# 104 "data/maps/MiniSafariMiddle/scripts.pory"

# 105 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_EventScript_HasRoomForPokemon::
# 106 "data/maps/MiniSafariMiddle/scripts.pory"
	return
# 107 "data/maps/MiniSafariMiddle/scripts.pory"

# 108 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_EventScript_NoPokeblockCase::
# 109 "data/maps/MiniSafariMiddle/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase, MSGBOX_DEFAULT
# 110 "data/maps/MiniSafariMiddle/scripts.pory"
	goto MiniSafariMiddle_EventScript_MovePlayerBackFromCounter
# 111 "data/maps/MiniSafariMiddle/scripts.pory"
	end
# 112 "data/maps/MiniSafariMiddle/scripts.pory"

# 113 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_EventScript_NotEnoughMoney::
# 114 "data/maps/MiniSafariMiddle/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 115 "data/maps/MiniSafariMiddle/scripts.pory"
	goto MiniSafariMiddle_EventScript_MovePlayerBackFromCounter
# 116 "data/maps/MiniSafariMiddle/scripts.pory"
	end
# 117 "data/maps/MiniSafariMiddle/scripts.pory"

# 118 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_EventScript_MovePlayerBackFromCounter::
# 119 "data/maps/MiniSafariMiddle/scripts.pory"
	closemessage
# 120 "data/maps/MiniSafariMiddle/scripts.pory"
	hidemoneybox
# 121 "data/maps/MiniSafariMiddle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MiniSafariMiddle_Movement_BackAwayFromCounter
# 122 "data/maps/MiniSafariMiddle/scripts.pory"
	waitmovement 0
# 123 "data/maps/MiniSafariMiddle/scripts.pory"
	releaseall
# 124 "data/maps/MiniSafariMiddle/scripts.pory"
	end
# 125 "data/maps/MiniSafariMiddle/scripts.pory"

# 126 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_Movement_BackAwayFromCounter:
# 127 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_right
# 128 "data/maps/MiniSafariMiddle/scripts.pory"
	step_end
# 129 "data/maps/MiniSafariMiddle/scripts.pory"

# 130 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_Movement_EnterSafariZone:
# 131 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_left
# 132 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_left
# 133 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_left
# 134 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_left
# 135 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_left
# 136 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_left
# 137 "data/maps/MiniSafariMiddle/scripts.pory"
	walk_down
# 138 "data/maps/MiniSafariMiddle/scripts.pory"
	delay_16
# 139 "data/maps/MiniSafariMiddle/scripts.pory"
	step_end
# 140 "data/maps/MiniSafariMiddle/scripts.pory"

# 141 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_EventScript_TrainerTipSign::
# 142 "data/maps/MiniSafariMiddle/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_TrainerTip, MSGBOX_SIGN
# 143 "data/maps/MiniSafariMiddle/scripts.pory"
	end
# 144 "data/maps/MiniSafariMiddle/scripts.pory"

# 145 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_Text_WelcomeFirstTime::
# 146 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "¡Bienvenid{OA} al Mini-Safari!\p"
# 147 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "¿Necesitas que te explique el juego?$"
# 148 "data/maps/MiniSafariMiddle/scripts.pory"

# 149 "data/maps/MiniSafariMiddle/scripts.pory"
MiniSafariMiddle_Text_FirstTimeInfo::
# 150 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "El juego del Mini-Safari es una\n"
# 151 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "actividad de {COLOR RED}Captura de Pokémon raros{COLOR DARK_GRAY}\l"
# 152 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "que vienen de otras regiones.\p"
# 153 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "Al comensar, se te dan 30 Safari Balls y\n"
# 154 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "el juego acaba cuando se te terminan, o\l"
# 155 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "das 500 pasos.\p"
# 156 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "Además, necesitarás un {COLOR RED}Tubo {POKEBLOCK}s\n"
# 157 "data/maps/MiniSafariMiddle/scripts.pory"
	.string "{COLOR DARK_GRAY}para jugar.$"
