GraniteCave_B2F_MapScripts::
# 2 "data/maps/GraniteCave_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCave_SetFlashLevel
	.byte 0


GraniteCave_B2F_EventScript_BlueRock2::
# 6 "data/maps/GraniteCave_B2F/scripts.pory"
	goto_if_unset FLAG_BLUE_STONES_2, GraniteCave_B2F_EventScript_BlueRock2_1
# 48 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_2
# 49 "data/maps/GraniteCave_B2F/scripts.pory"
	release
	end

GraniteCave_B2F_EventScript_BlueRock2_1:
# 7 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_0
# 8 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 16
# 9 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_1
# 10 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8004, 0
# 11 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8005, 2
# 12 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8006, 2
# 13 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8007, 3
# 14 "data/maps/GraniteCave_B2F/scripts.pory"
	special ShakeCamera
# 15 "data/maps/GraniteCave_B2F/scripts.pory"
	waitstate
# 16 "data/maps/GraniteCave_B2F/scripts.pory"
	closemessage
# 17 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 30
# 18 "data/maps/GraniteCave_B2F/scripts.pory"
	playse SE_PIN
# 19 "data/maps/GraniteCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 20 "data/maps/GraniteCave_B2F/scripts.pory"
	random 4
# 21 "data/maps/GraniteCave_B2F/scripts.pory"
	switch VAR_RESULT
# 22 "data/maps/GraniteCave_B2F/scripts.pory"
	case 0, GraniteCave_B2F_EventScript_BlueRock2_6
# 25 "data/maps/GraniteCave_B2F/scripts.pory"
	case 1, GraniteCave_B2F_EventScript_BlueRock2_7
# 28 "data/maps/GraniteCave_B2F/scripts.pory"
	case 2, GraniteCave_B2F_EventScript_BlueRock2_8
# 31 "data/maps/GraniteCave_B2F/scripts.pory"
	case 3, GraniteCave_B2F_EventScript_BlueRock2_9
# 34 "data/maps/GraniteCave_B2F/scripts.pory"
	case 4, GraniteCave_B2F_EventScript_BlueRock2_10
# 38 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
GraniteCave_B2F_EventScript_BlueRock2_4:
# 41 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 16
# 42 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_2
# 43 "data/maps/GraniteCave_B2F/scripts.pory"
	setflag FLAG_BLUE_STONES_2
# 44 "data/maps/GraniteCave_B2F/scripts.pory"
	release
	end

GraniteCave_B2F_EventScript_BlueRock2_6:
# 23 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock2_4

GraniteCave_B2F_EventScript_BlueRock2_7:
# 26 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_LEAF_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock2_4

GraniteCave_B2F_EventScript_BlueRock2_8:
# 29 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_MOON_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock2_4

GraniteCave_B2F_EventScript_BlueRock2_9:
# 32 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_DUSK_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock2_4

GraniteCave_B2F_EventScript_BlueRock2_10:
# 35 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_ICE_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock2_4


GraniteCave_B2F_EventScript_BlueRock3::
# 55 "data/maps/GraniteCave_B2F/scripts.pory"
	goto_if_unset FLAG_BLUE_STONES_3, GraniteCave_B2F_EventScript_BlueRock3_1
# 132 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock3_Text_1
# 133 "data/maps/GraniteCave_B2F/scripts.pory"
	release
	end

GraniteCave_B2F_EventScript_BlueRock3_1:
# 56 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_0
# 57 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 16
# 58 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_1
# 59 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8004, 0
# 60 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8005, 2
# 61 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8006, 2
# 62 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8007, 3
# 63 "data/maps/GraniteCave_B2F/scripts.pory"
	special ShakeCamera
# 64 "data/maps/GraniteCave_B2F/scripts.pory"
	waitstate
# 65 "data/maps/GraniteCave_B2F/scripts.pory"
	closemessage
# 66 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 30
# 67 "data/maps/GraniteCave_B2F/scripts.pory"
	playse SE_PIN
# 68 "data/maps/GraniteCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 69 "data/maps/GraniteCave_B2F/scripts.pory"
	random 4
# 70 "data/maps/GraniteCave_B2F/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/GraniteCave_B2F/scripts.pory"
	case 0, GraniteCave_B2F_EventScript_BlueRock3_6
# 74 "data/maps/GraniteCave_B2F/scripts.pory"
	case 1, GraniteCave_B2F_EventScript_BlueRock3_7
# 77 "data/maps/GraniteCave_B2F/scripts.pory"
	case 2, GraniteCave_B2F_EventScript_BlueRock3_8
# 80 "data/maps/GraniteCave_B2F/scripts.pory"
	case 3, GraniteCave_B2F_EventScript_BlueRock3_9
# 83 "data/maps/GraniteCave_B2F/scripts.pory"
	case 4, GraniteCave_B2F_EventScript_BlueRock3_10
# 87 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
GraniteCave_B2F_EventScript_BlueRock3_4:
# 90 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 16
# 91 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock3_Text_0
# 92 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 16
# 93 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_1
# 94 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8004, 0
# 95 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8005, 2
# 96 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8006, 5
# 97 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8007, 3
# 98 "data/maps/GraniteCave_B2F/scripts.pory"
	special ShakeCamera
# 99 "data/maps/GraniteCave_B2F/scripts.pory"
	waitstate
# 100 "data/maps/GraniteCave_B2F/scripts.pory"
	closemessage
# 101 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 30
# 102 "data/maps/GraniteCave_B2F/scripts.pory"
	playse SE_PIN
# 103 "data/maps/GraniteCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 104 "data/maps/GraniteCave_B2F/scripts.pory"
	random 4
# 105 "data/maps/GraniteCave_B2F/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/GraniteCave_B2F/scripts.pory"
	case 0, GraniteCave_B2F_EventScript_BlueRock3_14
# 109 "data/maps/GraniteCave_B2F/scripts.pory"
	case 1, GraniteCave_B2F_EventScript_BlueRock3_15
# 112 "data/maps/GraniteCave_B2F/scripts.pory"
	case 2, GraniteCave_B2F_EventScript_BlueRock3_16
# 115 "data/maps/GraniteCave_B2F/scripts.pory"
	case 3, GraniteCave_B2F_EventScript_BlueRock3_17
# 118 "data/maps/GraniteCave_B2F/scripts.pory"
	case 4, GraniteCave_B2F_EventScript_BlueRock3_18
# 122 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
GraniteCave_B2F_EventScript_BlueRock3_12:
# 125 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 16
# 126 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock3_Text_1
# 127 "data/maps/GraniteCave_B2F/scripts.pory"
	setflag FLAG_BLUE_STONES_3
# 128 "data/maps/GraniteCave_B2F/scripts.pory"
	release
	end

GraniteCave_B2F_EventScript_BlueRock3_6:
# 72 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_4

GraniteCave_B2F_EventScript_BlueRock3_7:
# 75 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_LEAF_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_4

GraniteCave_B2F_EventScript_BlueRock3_8:
# 78 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_MOON_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_4

GraniteCave_B2F_EventScript_BlueRock3_9:
# 81 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_DUSK_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_4

GraniteCave_B2F_EventScript_BlueRock3_10:
# 84 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_ICE_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_4

GraniteCave_B2F_EventScript_BlueRock3_14:
# 107 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_12

GraniteCave_B2F_EventScript_BlueRock3_15:
# 110 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_LEAF_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_12

GraniteCave_B2F_EventScript_BlueRock3_16:
# 113 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_MOON_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_12

GraniteCave_B2F_EventScript_BlueRock3_17:
# 116 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_DUSK_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_12

GraniteCave_B2F_EventScript_BlueRock3_18:
# 119 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_ICE_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock3_12


GraniteCave_B2F_EventScript_BlueRock4::
# 139 "data/maps/GraniteCave_B2F/scripts.pory"
	goto_if_unset FLAG_BLUE_STONES_4, GraniteCave_B2F_EventScript_BlueRock4_1
# 216 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock3_Text_1
# 217 "data/maps/GraniteCave_B2F/scripts.pory"
	release
	end

GraniteCave_B2F_EventScript_BlueRock4_1:
# 140 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_0
# 141 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 16
# 142 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_1
# 143 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8004, 0
# 144 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8005, 2
# 145 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8006, 2
# 146 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8007, 3
# 147 "data/maps/GraniteCave_B2F/scripts.pory"
	special ShakeCamera
# 148 "data/maps/GraniteCave_B2F/scripts.pory"
	waitstate
# 149 "data/maps/GraniteCave_B2F/scripts.pory"
	closemessage
# 150 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 30
# 151 "data/maps/GraniteCave_B2F/scripts.pory"
	playse SE_PIN
# 152 "data/maps/GraniteCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 153 "data/maps/GraniteCave_B2F/scripts.pory"
	random 4
# 154 "data/maps/GraniteCave_B2F/scripts.pory"
	switch VAR_RESULT
# 155 "data/maps/GraniteCave_B2F/scripts.pory"
	case 0, GraniteCave_B2F_EventScript_BlueRock4_6
# 158 "data/maps/GraniteCave_B2F/scripts.pory"
	case 1, GraniteCave_B2F_EventScript_BlueRock4_7
# 161 "data/maps/GraniteCave_B2F/scripts.pory"
	case 2, GraniteCave_B2F_EventScript_BlueRock4_8
# 164 "data/maps/GraniteCave_B2F/scripts.pory"
	case 3, GraniteCave_B2F_EventScript_BlueRock4_9
# 167 "data/maps/GraniteCave_B2F/scripts.pory"
	case 4, GraniteCave_B2F_EventScript_BlueRock4_10
# 171 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
GraniteCave_B2F_EventScript_BlueRock4_4:
# 174 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 16
# 175 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock3_Text_0
# 176 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 16
# 177 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock2_Text_1
# 178 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8004, 0
# 179 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8005, 2
# 180 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8006, 5
# 181 "data/maps/GraniteCave_B2F/scripts.pory"
	setvar VAR_0x8007, 3
# 182 "data/maps/GraniteCave_B2F/scripts.pory"
	special ShakeCamera
# 183 "data/maps/GraniteCave_B2F/scripts.pory"
	waitstate
# 184 "data/maps/GraniteCave_B2F/scripts.pory"
	closemessage
# 185 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 30
# 186 "data/maps/GraniteCave_B2F/scripts.pory"
	playse SE_PIN
# 187 "data/maps/GraniteCave_B2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 188 "data/maps/GraniteCave_B2F/scripts.pory"
	random 4
# 189 "data/maps/GraniteCave_B2F/scripts.pory"
	switch VAR_RESULT
# 190 "data/maps/GraniteCave_B2F/scripts.pory"
	case 0, GraniteCave_B2F_EventScript_BlueRock4_14
# 193 "data/maps/GraniteCave_B2F/scripts.pory"
	case 1, GraniteCave_B2F_EventScript_BlueRock4_15
# 196 "data/maps/GraniteCave_B2F/scripts.pory"
	case 2, GraniteCave_B2F_EventScript_BlueRock4_16
# 199 "data/maps/GraniteCave_B2F/scripts.pory"
	case 3, GraniteCave_B2F_EventScript_BlueRock4_17
# 202 "data/maps/GraniteCave_B2F/scripts.pory"
	case 4, GraniteCave_B2F_EventScript_BlueRock4_18
# 206 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
GraniteCave_B2F_EventScript_BlueRock4_12:
# 209 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 16
# 210 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_EventScript_BlueRock3_Text_1
# 211 "data/maps/GraniteCave_B2F/scripts.pory"
	setflag FLAG_BLUE_STONES_4
# 212 "data/maps/GraniteCave_B2F/scripts.pory"
	release
	end

GraniteCave_B2F_EventScript_BlueRock4_6:
# 156 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_4

GraniteCave_B2F_EventScript_BlueRock4_7:
# 159 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_LEAF_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_4

GraniteCave_B2F_EventScript_BlueRock4_8:
# 162 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_MOON_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_4

GraniteCave_B2F_EventScript_BlueRock4_9:
# 165 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_DUSK_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_4

GraniteCave_B2F_EventScript_BlueRock4_10:
# 168 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_ICE_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_4

GraniteCave_B2F_EventScript_BlueRock4_14:
# 191 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_12

GraniteCave_B2F_EventScript_BlueRock4_15:
# 194 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_LEAF_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_12

GraniteCave_B2F_EventScript_BlueRock4_16:
# 197 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_MOON_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_12

GraniteCave_B2F_EventScript_BlueRock4_17:
# 200 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_DUSK_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_12

GraniteCave_B2F_EventScript_BlueRock4_18:
# 203 "data/maps/GraniteCave_B2F/scripts.pory"
	giveitem ITEM_ICE_STONE, 1
	goto GraniteCave_B2F_EventScript_BlueRock4_12


GraniteCave_B2F_EventScript_BlueRock2_Text_0:
# 7 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "... ¿Oh?\n"
	.string "¡Mira, hay una piedra evolutiva aquí!$"

GraniteCave_B2F_EventScript_BlueRock2_Text_1:
# 9 "data/maps/GraniteCave_B2F/scripts.pory"
	.string ".... ¡MMMMGGGGHHH!$"

GraniteCave_B2F_EventScript_BlueRock2_Text_2:
# 42 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Parece que otra piedra evolutiva se\n"
	.string "está formando debajo muy\l"
	.string "lentamente...\p"
	.string "¡Habrá que volver mañana!$"

GraniteCave_B2F_EventScript_BlueRock3_Text_0:
# 91 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "... Momento...\p"
	.string "¡Parece que aquí se forman dos piedras\n"
	.string "evolutivas!$"

GraniteCave_B2F_EventScript_BlueRock3_Text_1:
# 126 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Parece que otras piedras evolutivas se\n"
	.string "están formando debajo muy\l"
	.string "lentamente...\p"
	.string "¡Habrá que volver mañana!$"
