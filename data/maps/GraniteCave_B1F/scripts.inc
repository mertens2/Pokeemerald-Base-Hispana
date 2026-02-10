GraniteCave_B1F_MapScripts::
# 2 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCave_SetFlashLevel
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
	.byte 0


GraniteCave_B1F_SetHoleWarp::
# 8 "data/maps/GraniteCave_B1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 9 "data/maps/GraniteCave_B1F/scripts.pory"
	setholewarp MAP_GRANITE_CAVE_B2F
	end


GraniteCave_SetFlashLevel::
# 14 "data/maps/GraniteCave_B1F/scripts.pory"
	setflashlevel 1
# 15 "data/maps/GraniteCave_B1F/scripts.pory"
	call CaveHole_FixCrackedGround
	end


GraniteCave_B1F_EventScript_RedRock2::
# 20 "data/maps/GraniteCave_B1F/scripts.pory"
	goto_if_unset FLAG_RED_STONES_2, GraniteCave_B1F_EventScript_RedRock2_1
# 62 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_2
# 63 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	end

GraniteCave_B1F_EventScript_RedRock2_1:
# 21 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_0
# 22 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 16
# 23 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_1
# 24 "data/maps/GraniteCave_B1F/scripts.pory"
	closemessage
# 25 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_0x8004, 0
# 26 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_0x8005, 2
# 27 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_0x8006, 2
# 28 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_0x8007, 3
# 29 "data/maps/GraniteCave_B1F/scripts.pory"
	special ShakeCamera
# 30 "data/maps/GraniteCave_B1F/scripts.pory"
	waitstate
# 31 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 30
# 32 "data/maps/GraniteCave_B1F/scripts.pory"
	playse SE_PIN
# 33 "data/maps/GraniteCave_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 34 "data/maps/GraniteCave_B1F/scripts.pory"
	random 4
# 35 "data/maps/GraniteCave_B1F/scripts.pory"
	switch VAR_RESULT
# 36 "data/maps/GraniteCave_B1F/scripts.pory"
	case 0, GraniteCave_B1F_EventScript_RedRock2_6
# 39 "data/maps/GraniteCave_B1F/scripts.pory"
	case 1, GraniteCave_B1F_EventScript_RedRock2_7
# 42 "data/maps/GraniteCave_B1F/scripts.pory"
	case 2, GraniteCave_B1F_EventScript_RedRock2_8
# 45 "data/maps/GraniteCave_B1F/scripts.pory"
	case 3, GraniteCave_B1F_EventScript_RedRock2_9
# 48 "data/maps/GraniteCave_B1F/scripts.pory"
	case 4, GraniteCave_B1F_EventScript_RedRock2_10
# 52 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_FIRE_STONE, 1
GraniteCave_B1F_EventScript_RedRock2_4:
# 55 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 16
# 56 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_2
# 57 "data/maps/GraniteCave_B1F/scripts.pory"
	setflag FLAG_RED_STONES_2
# 58 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	end

GraniteCave_B1F_EventScript_RedRock2_6:
# 37 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_FIRE_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock2_4

GraniteCave_B1F_EventScript_RedRock2_7:
# 40 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_THUNDER_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock2_4

GraniteCave_B1F_EventScript_RedRock2_8:
# 43 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock2_4

GraniteCave_B1F_EventScript_RedRock2_9:
# 46 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_SHINY_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock2_4

GraniteCave_B1F_EventScript_RedRock2_10:
# 49 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_DAWN_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock2_4


GraniteCave_B1F_EventScript_RedRock3::
# 69 "data/maps/GraniteCave_B1F/scripts.pory"
	goto_if_unset FLAG_RED_STONES_3, GraniteCave_B1F_EventScript_RedRock3_1
# 146 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_RedRock3_Text_1
# 147 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	end

GraniteCave_B1F_EventScript_RedRock3_1:
# 70 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_0
# 71 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 16
# 72 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_1
# 73 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_0x8004, 0
# 74 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_0x8005, 2
# 75 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_0x8006, 2
# 76 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_0x8007, 3
# 77 "data/maps/GraniteCave_B1F/scripts.pory"
	special ShakeCamera
# 78 "data/maps/GraniteCave_B1F/scripts.pory"
	waitstate
# 79 "data/maps/GraniteCave_B1F/scripts.pory"
	closemessage
# 80 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 30
# 81 "data/maps/GraniteCave_B1F/scripts.pory"
	playse SE_PIN
# 82 "data/maps/GraniteCave_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 83 "data/maps/GraniteCave_B1F/scripts.pory"
	random 4
# 84 "data/maps/GraniteCave_B1F/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/GraniteCave_B1F/scripts.pory"
	case 0, GraniteCave_B1F_EventScript_RedRock3_6
# 88 "data/maps/GraniteCave_B1F/scripts.pory"
	case 1, GraniteCave_B1F_EventScript_RedRock3_7
# 91 "data/maps/GraniteCave_B1F/scripts.pory"
	case 2, GraniteCave_B1F_EventScript_RedRock3_8
# 94 "data/maps/GraniteCave_B1F/scripts.pory"
	case 3, GraniteCave_B1F_EventScript_RedRock3_9
# 97 "data/maps/GraniteCave_B1F/scripts.pory"
	case 4, GraniteCave_B1F_EventScript_RedRock3_10
# 101 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_FIRE_STONE, 1
GraniteCave_B1F_EventScript_RedRock3_4:
# 104 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 16
# 105 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_RedRock3_Text_0
# 106 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 16
# 107 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_RedRock2_Text_1
# 108 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_0x8004, 0
# 109 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_0x8005, 2
# 110 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_0x8006, 5
# 111 "data/maps/GraniteCave_B1F/scripts.pory"
	setvar VAR_0x8007, 3
# 112 "data/maps/GraniteCave_B1F/scripts.pory"
	special ShakeCamera
# 113 "data/maps/GraniteCave_B1F/scripts.pory"
	waitstate
# 114 "data/maps/GraniteCave_B1F/scripts.pory"
	closemessage
# 115 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 30
# 116 "data/maps/GraniteCave_B1F/scripts.pory"
	playse SE_PIN
# 117 "data/maps/GraniteCave_B1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 118 "data/maps/GraniteCave_B1F/scripts.pory"
	random 4
# 119 "data/maps/GraniteCave_B1F/scripts.pory"
	switch VAR_RESULT
# 120 "data/maps/GraniteCave_B1F/scripts.pory"
	case 0, GraniteCave_B1F_EventScript_RedRock3_14
# 123 "data/maps/GraniteCave_B1F/scripts.pory"
	case 1, GraniteCave_B1F_EventScript_RedRock3_15
# 126 "data/maps/GraniteCave_B1F/scripts.pory"
	case 2, GraniteCave_B1F_EventScript_RedRock3_16
# 129 "data/maps/GraniteCave_B1F/scripts.pory"
	case 3, GraniteCave_B1F_EventScript_RedRock3_17
# 132 "data/maps/GraniteCave_B1F/scripts.pory"
	case 4, GraniteCave_B1F_EventScript_RedRock3_18
# 136 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_FIRE_STONE, 1
GraniteCave_B1F_EventScript_RedRock3_12:
# 139 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 16
# 140 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_RedRock3_Text_1
# 141 "data/maps/GraniteCave_B1F/scripts.pory"
	setflag FLAG_RED_STONES_3
# 142 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	end

GraniteCave_B1F_EventScript_RedRock3_6:
# 86 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_FIRE_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_4

GraniteCave_B1F_EventScript_RedRock3_7:
# 89 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_THUNDER_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_4

GraniteCave_B1F_EventScript_RedRock3_8:
# 92 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_4

GraniteCave_B1F_EventScript_RedRock3_9:
# 95 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_SHINY_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_4

GraniteCave_B1F_EventScript_RedRock3_10:
# 98 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_DAWN_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_4

GraniteCave_B1F_EventScript_RedRock3_14:
# 121 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_FIRE_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_12

GraniteCave_B1F_EventScript_RedRock3_15:
# 124 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_THUNDER_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_12

GraniteCave_B1F_EventScript_RedRock3_16:
# 127 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_12

GraniteCave_B1F_EventScript_RedRock3_17:
# 130 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_SHINY_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_12

GraniteCave_B1F_EventScript_RedRock3_18:
# 133 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_DAWN_STONE, 1
	goto GraniteCave_B1F_EventScript_RedRock3_12


GraniteCave_B1F_EventScript_RedRock2_Text_0:
# 21 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "... ¿Oh?\n"
	.string "¡Mira, hay una piedra evolutiva aquí!$"

GraniteCave_B1F_EventScript_RedRock2_Text_1:
# 23 "data/maps/GraniteCave_B1F/scripts.pory"
	.string ".... ¡MMMMGGGGHHH!$"

GraniteCave_B1F_EventScript_RedRock2_Text_2:
# 56 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Parece que otra piedra evolutiva se\n"
	.string "está formando debajo muy\l"
	.string "lentamente...\p"
	.string "¡Habrá que volver mañana!$"

GraniteCave_B1F_EventScript_RedRock3_Text_0:
# 105 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "... Momento...\p"
	.string "¡Parece que aquí se forman dos piedras\n"
	.string "evolutivas!$"

GraniteCave_B1F_EventScript_RedRock3_Text_1:
# 140 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Parece que otras piedras evolutivas se\n"
	.string "están formando debajo muy\l"
	.string "lentamente...\p"
	.string "¡Habrá que volver mañana!$"
