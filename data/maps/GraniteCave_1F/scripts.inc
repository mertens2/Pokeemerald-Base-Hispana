GraniteCave_1F_MapScripts::
	.byte 0


GraniteCave_1F_EventScript_BlueRock1::
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_unset FLAG_BLUE_STONES_1, GraniteCave_1F_EventScript_BlueRock1_1
# 70 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_BlueRock1_Text_2
# 76 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end

GraniteCave_1F_EventScript_BlueRock1_1:
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_BlueRock1_Text_0
# 13 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_BlueRock1_Text_1
# 22 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 23 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_0x8005, 2
# 24 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 25 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	special ShakeCamera
# 27 "data/maps/GraniteCave_1F/scripts.pory"
	waitstate
# 28 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 29 "data/maps/GraniteCave_1F/scripts.pory"
	delay 30
# 30 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_PIN
# 31 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 32 "data/maps/GraniteCave_1F/scripts.pory"
	random 4
# 33 "data/maps/GraniteCave_1F/scripts.pory"
	switch VAR_RESULT
# 34 "data/maps/GraniteCave_1F/scripts.pory"
	case 0, GraniteCave_1F_EventScript_BlueRock1_6
# 37 "data/maps/GraniteCave_1F/scripts.pory"
	case 1, GraniteCave_1F_EventScript_BlueRock1_7
# 40 "data/maps/GraniteCave_1F/scripts.pory"
	case 2, GraniteCave_1F_EventScript_BlueRock1_8
# 43 "data/maps/GraniteCave_1F/scripts.pory"
	case 3, GraniteCave_1F_EventScript_BlueRock1_9
# 46 "data/maps/GraniteCave_1F/scripts.pory"
	case 4, GraniteCave_1F_EventScript_BlueRock1_10
# 50 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
GraniteCave_1F_EventScript_BlueRock1_4:
# 53 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 56 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_BlueRock1_Text_2
# 63 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_BLUE_STONES_1
# 64 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end

GraniteCave_1F_EventScript_BlueRock1_6:
# 35 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
	goto GraniteCave_1F_EventScript_BlueRock1_4

GraniteCave_1F_EventScript_BlueRock1_7:
# 38 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_LEAF_STONE, 1
	goto GraniteCave_1F_EventScript_BlueRock1_4

GraniteCave_1F_EventScript_BlueRock1_8:
# 41 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_MOON_STONE, 1
	goto GraniteCave_1F_EventScript_BlueRock1_4

GraniteCave_1F_EventScript_BlueRock1_9:
# 44 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_DUSK_STONE, 1
	goto GraniteCave_1F_EventScript_BlueRock1_4

GraniteCave_1F_EventScript_BlueRock1_10:
# 47 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_ICE_STONE, 1
	goto GraniteCave_1F_EventScript_BlueRock1_4


GraniteCave_1F_EventScript_RedRock1::
# 82 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_unset FLAG_RED_STONES_1, GraniteCave_1F_EventScript_RedRock1_1
# 142 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_BlueRock1_Text_2
# 148 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end

GraniteCave_1F_EventScript_RedRock1_1:
# 85 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_BlueRock1_Text_0
# 86 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 87 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_BlueRock1_Text_1
# 95 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 96 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_0x8005, 2
# 97 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_0x8006, 2
# 98 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_0x8007, 3
# 99 "data/maps/GraniteCave_1F/scripts.pory"
	special ShakeCamera
# 100 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 101 "data/maps/GraniteCave_1F/scripts.pory"
	waitstate
# 102 "data/maps/GraniteCave_1F/scripts.pory"
	delay 30
# 103 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_PIN
# 104 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 105 "data/maps/GraniteCave_1F/scripts.pory"
	random 4
# 106 "data/maps/GraniteCave_1F/scripts.pory"
	switch VAR_RESULT
# 107 "data/maps/GraniteCave_1F/scripts.pory"
	case 0, GraniteCave_1F_EventScript_RedRock1_6
# 110 "data/maps/GraniteCave_1F/scripts.pory"
	case 1, GraniteCave_1F_EventScript_RedRock1_7
# 113 "data/maps/GraniteCave_1F/scripts.pory"
	case 2, GraniteCave_1F_EventScript_RedRock1_8
# 116 "data/maps/GraniteCave_1F/scripts.pory"
	case 3, GraniteCave_1F_EventScript_RedRock1_9
# 119 "data/maps/GraniteCave_1F/scripts.pory"
	case 4, GraniteCave_1F_EventScript_RedRock1_10
# 123 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_FIRE_STONE, 1
GraniteCave_1F_EventScript_RedRock1_4:
# 126 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 129 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_BlueRock1_Text_2
# 135 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RED_STONES_1
# 136 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end

GraniteCave_1F_EventScript_RedRock1_6:
# 108 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_FIRE_STONE, 1
	goto GraniteCave_1F_EventScript_RedRock1_4

GraniteCave_1F_EventScript_RedRock1_7:
# 111 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_THUNDER_STONE, 1
	goto GraniteCave_1F_EventScript_RedRock1_4

GraniteCave_1F_EventScript_RedRock1_8:
# 114 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
	goto GraniteCave_1F_EventScript_RedRock1_4

GraniteCave_1F_EventScript_RedRock1_9:
# 117 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_SHINY_STONE, 1
	goto GraniteCave_1F_EventScript_RedRock1_4

GraniteCave_1F_EventScript_RedRock1_10:
# 120 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_DAWN_STONE, 1
	goto GraniteCave_1F_EventScript_RedRock1_4


GraniteCave_1F_EventScript_Hiker::
# 154 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 155 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 156 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Hiker_Text_0
# 158 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end


GraniteCave_1F_Trigger_Top::
# 163 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 5
# 164 "data/maps/GraniteCave_1F/scripts.pory"
	goto GraniteCave_1F_EventScript_Grunts
	return


GraniteCave_1F_Trigger_Middle::
# 168 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 6
# 169 "data/maps/GraniteCave_1F/scripts.pory"
	goto GraniteCave_1F_EventScript_Grunts
	return


GraniteCave_1F_Trigger_Bottom::
# 173 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 7
# 174 "data/maps/GraniteCave_1F/scripts.pory"
	goto GraniteCave_1F_EventScript_Grunts
	return


GraniteCave_1F_EventScript_Grunts::
# 178 "data/maps/GraniteCave_1F/scripts.pory"
	lockall
# 179 "data/maps/GraniteCave_1F/scripts.pory"
	special SpawnCameraObject
# 180 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 181 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 182 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 185 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_0
# 187 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 188 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 189 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 190 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 191 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_1
# 193 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 194 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 195 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 196 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 197 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_2
# 199 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 200 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 201 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 202 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 203 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_3
# 229 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 230 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_PIN
# 231 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 232 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 233 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 234 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 235 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 236 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 237 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 238 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 239 "data/maps/GraniteCave_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 240 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 243 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_4
# 245 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 246 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 247 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_5
# 249 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 250 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_PIN
# 251 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 252 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 253 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Player
# 254 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_6
# 273 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 274 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_1F_Movement_PlayerEscapes
# 275 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, GraniteCave_1F_Movement_Grunt2_BlockExit_Top
# 276 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, GraniteCave_1F_Movement_Grunt1_BlockExit_Top
# 277 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, GraniteCave_1F_Movement_Grunt3_BlockExit_Top
# 278 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 279 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 280 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_PIN
# 281 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 282 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 283 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 284 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 285 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 288 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_7
# 295 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 296 "data/maps/GraniteCave_1F/scripts.pory"
	switch VAR_DEWFORD_TOWN_STATE
# 297 "data/maps/GraniteCave_1F/scripts.pory"
	case 5, GraniteCave_1F_EventScript_Grunts_3
# 299 "data/maps/GraniteCave_1F/scripts.pory"
	case 6, GraniteCave_1F_EventScript_Grunts_4
# 301 "data/maps/GraniteCave_1F/scripts.pory"
	case 7, GraniteCave_1F_EventScript_Grunts_5
# 304 "data/maps/GraniteCave_1F/scripts.pory"
	call GraniteCave_1F_EventScript_PlayerNoWayOut1
GraniteCave_1F_EventScript_Grunts_1:
# 306 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 1
# 307 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Player
# 310 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_8
# 312 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 313 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 314 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_9
# 325 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 326 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, GraniteCave_1F_Grunt1_Attack_Top
# 327 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, GraniteCave_1F_Grunt23_Attack_Top
# 328 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, GraniteCave_1F_Grunt23_Attack_Top
# 329 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 330 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 331 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 332 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 333 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 334 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 335 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 336 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 337 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 338 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 339 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 342 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_10
# 350 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 351 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 352 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 353 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 354 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_Grunt1_Intro
# 355 "data/maps/GraniteCave_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDRES_2, GraniteCave_1F_Text_Grunt1_Defeat
# 356 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 357 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_PIN
# 358 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 359 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 360 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 363 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_11
# 370 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 371 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 372 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 373 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 374 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 375 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_Grunt2_Intro
# 376 "data/maps/GraniteCave_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDRES_3, GraniteCave_1F_Text_Grunt2_Defeat
# 377 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_PIN
# 378 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 379 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 380 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 383 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_12
# 390 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 391 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 392 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 393 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 394 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 395 "data/maps/GraniteCave_1F/scripts.pory"
	delay 12
# 396 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 397 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_Grunt3_Intro
# 398 "data/maps/GraniteCave_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDRES_4, GraniteCave_1F_Text_Grunt3_Defeat
# 399 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_PIN
# 400 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 401 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 402 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 405 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_13
# 412 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 413 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 414 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceAwayPlayer
# 415 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, Common_Movement_FaceAwayPlayer
# 416 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, Common_Movement_FaceAwayPlayer
# 417 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 418 "data/maps/GraniteCave_1F/scripts.pory"
	delay 24
# 419 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 422 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_14
# 429 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 430 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 431 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 432 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 433 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 434 "data/maps/GraniteCave_1F/scripts.pory"
	delay 24
# 435 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 438 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_15
# 445 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 446 "data/maps/GraniteCave_1F/scripts.pory"
	delay 8
# 447 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 448 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 449 "data/maps/GraniteCave_1F/scripts.pory"
	delay 8
# 450 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 451 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 452 "data/maps/GraniteCave_1F/scripts.pory"
	delay 8
# 453 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 454 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 455 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Unknown
# 458 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_16
# 464 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_PIN
# 465 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 466 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 467 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 468 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 469 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 470 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 471 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 472 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 473 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 474 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 475 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 477 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 480 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_17
# 487 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 488 "data/maps/GraniteCave_1F/scripts.pory"
	delay 20
# 489 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GraniteCave_1F_Movement_CameraDown
# 490 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 491 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_DOOR
# 492 "data/maps/GraniteCave_1F/scripts.pory"
	addobject 6
# 493 "data/maps/GraniteCave_1F/scripts.pory"
	setobjectxy 6, 37, 12
# 494 "data/maps/GraniteCave_1F/scripts.pory"
	delay 48
# 495 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Brawly
# 498 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_18
# 505 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 506 "data/maps/GraniteCave_1F/scripts.pory"
	delay 20
# 507 "data/maps/GraniteCave_1F/scripts.pory"
	savebgm MUS_DUMMY
# 508 "data/maps/GraniteCave_1F/scripts.pory"
	fadedefaultbgm
# 509 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 510 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 511 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 514 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_19
# 516 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 517 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 518 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 519 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 520 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 521 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_20
# 535 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 536 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 537 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 538 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 539 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 542 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_21
# 544 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 545 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Brawly
# 546 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_22
# 557 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 558 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GraniteCave_1F_Movement_BrawlyUp2
# 559 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 6, GraniteCave_1F_Movement_BrawlyUp2
# 560 "data/maps/GraniteCave_1F/scripts.pory"
	delay 20
# 561 "data/maps/GraniteCave_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 562 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 563 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 564 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Brawly
# 567 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_23
# 569 "data/maps/GraniteCave_1F/scripts.pory"
	playmoncry SPECIES_HARIYAMA, CRY_MODE_NORMAL
# 570 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_24
# 579 "data/maps/GraniteCave_1F/scripts.pory"
	waitmoncry
# 580 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 581 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 582 "data/maps/GraniteCave_1F/scripts.pory"
	waitse
# 583 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GraniteCave_1F_Movement_BrawlyDown2
# 584 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 6, GraniteCave_1F_Movement_BrawlyDown2
# 585 "data/maps/GraniteCave_1F/scripts.pory"
	delay 20
# 586 "data/maps/GraniteCave_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 587 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 588 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 589 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_PIN
# 590 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 591 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 592 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 593 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 594 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 597 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_25
# 599 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 600 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 601 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Brawly
# 602 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_26
# 615 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 616 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 617 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 620 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_27
# 622 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 623 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Brawly
# 624 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_28
# 626 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 627 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 628 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Aqua
# 629 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_29
# 646 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 647 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 6, GraniteCave_1F_Movement_BrawlyMove
# 648 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, GraniteCave_1F_Movement_Grunt1_Escape
# 649 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, GraniteCave_1F_Movement_Grunt2_Escape
# 650 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, GraniteCave_1F_Movement_Grunt3_Escape
# 651 "data/maps/GraniteCave_1F/scripts.pory"
	delay 28
# 652 "data/maps/GraniteCave_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 653 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 654 "data/maps/GraniteCave_1F/scripts.pory"
	setobjectxy 3, 9, 9
# 655 "data/maps/GraniteCave_1F/scripts.pory"
	setobjectxy 4, 9, 10
# 656 "data/maps/GraniteCave_1F/scripts.pory"
	setobjectxy 5, 9, 11
# 657 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_DOOR
# 658 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 659 "data/maps/GraniteCave_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 660 "data/maps/GraniteCave_1F/scripts.pory"
	delay 20
# 661 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Brawly
# 664 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_30
# 671 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 672 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 673 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 674 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 675 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GraniteCave_1F_Movement_BrawlyWalkPlayer
# 676 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 6, GraniteCave_1F_Movement_BrawlyWalkPlayer
# 677 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 678 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Brawly
# 681 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_31
# 683 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 684 "data/maps/GraniteCave_1F/scripts.pory"
	delay 8
# 685 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Brawly
# 686 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_32
# 699 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 700 "data/maps/GraniteCave_1F/scripts.pory"
	delay 16
# 701 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 6, Common_Movement_FaceAwayPlayer
# 702 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 703 "data/maps/GraniteCave_1F/scripts.pory"
	delay 32
# 704 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 705 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 706 "data/maps/GraniteCave_1F/scripts.pory"
	setspeaker Brawly
# 709 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Grunts_Text_33
# 716 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 717 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 6, GraniteCave_1F_Movement_BrawlyOut
# 718 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 719 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 3
# 720 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 4
# 721 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 5
# 722 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 6
# 723 "data/maps/GraniteCave_1F/scripts.pory"
	playse SE_DOOR
# 724 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_GRANITE_GRUNTS
# 725 "data/maps/GraniteCave_1F/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 2
# 726 "data/maps/GraniteCave_1F/scripts.pory"
	special RemoveCameraObject
# 727 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end

GraniteCave_1F_EventScript_Grunts_3:
# 298 "data/maps/GraniteCave_1F/scripts.pory"
	call GraniteCave_1F_EventScript_PlayerNoWayOut1
	goto GraniteCave_1F_EventScript_Grunts_1

GraniteCave_1F_EventScript_Grunts_4:
# 300 "data/maps/GraniteCave_1F/scripts.pory"
	call GraniteCave_1F_EventScript_PlayerNoWayOut2
	goto GraniteCave_1F_EventScript_Grunts_1

GraniteCave_1F_EventScript_Grunts_5:
# 302 "data/maps/GraniteCave_1F/scripts.pory"
	call GraniteCave_1F_EventScript_PlayerNoWayOut3
	goto GraniteCave_1F_EventScript_Grunts_1


GraniteCave_1F_EventScript_PlayerNoWayOut1::
# 732 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_1F_Movement_PlayerNoWayOut
# 733 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
	return


GraniteCave_1F_EventScript_PlayerNoWayOut2::
# 736 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_1F_Movement_PlayerNoWayOut2
# 737 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
	return


GraniteCave_1F_EventScript_PlayerNoWayOut3::
# 740 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_1F_Movement_PlayerNoWayOut3
# 741 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
	return


# 744 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_BrawlyOut:
# 745 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
# 745 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
# 745 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
	step_end

# 747 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_BrawlyWalkPlayer:
# 748 "data/maps/GraniteCave_1F/scripts.pory"
	walk_right
# 748 "data/maps/GraniteCave_1F/scripts.pory"
	walk_right
# 749 "data/maps/GraniteCave_1F/scripts.pory"
	walk_up
# 749 "data/maps/GraniteCave_1F/scripts.pory"
	walk_up
# 749 "data/maps/GraniteCave_1F/scripts.pory"
	walk_up
	step_end

# 752 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_BrawlyMove:
# 753 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 753 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 754 "data/maps/GraniteCave_1F/scripts.pory"
	face_right
	step_end

# 757 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_BrawlyUp2:
# 758 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_up
# 758 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_up
	step_end

# 761 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_Grunt1_Escape:
# 762 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
# 762 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
	step_end

# 765 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_Grunt2_Escape:
# 766 "data/maps/GraniteCave_1F/scripts.pory"
	delay_8
# 767 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
# 768 "data/maps/GraniteCave_1F/scripts.pory"
	walk_left
# 769 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
	step_end

# 773 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_Grunt3_Escape:
# 774 "data/maps/GraniteCave_1F/scripts.pory"
	delay_16
# 775 "data/maps/GraniteCave_1F/scripts.pory"
	delay_16
# 776 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
# 777 "data/maps/GraniteCave_1F/scripts.pory"
	walk_right
# 778 "data/maps/GraniteCave_1F/scripts.pory"
	walk_down
	step_end

# 782 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_BrawlyDown2:
# 783 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_down
# 783 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_down
# 784 "data/maps/GraniteCave_1F/scripts.pory"
	delay_16
# 785 "data/maps/GraniteCave_1F/scripts.pory"
	delay_8
# 786 "data/maps/GraniteCave_1F/scripts.pory"
	walk_in_place_slow_up
	step_end

# 853 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_PlayerEscapes:
# 854 "data/maps/GraniteCave_1F/scripts.pory"
	lock_facing_direction
# 855 "data/maps/GraniteCave_1F/scripts.pory"
	walk_right
# 856 "data/maps/GraniteCave_1F/scripts.pory"
	unlock_facing_direction
# 857 "data/maps/GraniteCave_1F/scripts.pory"
	player_run_left
# 857 "data/maps/GraniteCave_1F/scripts.pory"
	player_run_left
# 858 "data/maps/GraniteCave_1F/scripts.pory"
	player_run_down
	step_end

# 861 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_PlayerBacksDown:
# 862 "data/maps/GraniteCave_1F/scripts.pory"
	lock_facing_direction
# 863 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_up
	step_end

# 866 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_PlayerNoWayOut:
# 867 "data/maps/GraniteCave_1F/scripts.pory"
	lock_facing_direction
# 868 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_up
# 869 "data/maps/GraniteCave_1F/scripts.pory"
	walk_in_place_slow_up
# 870 "data/maps/GraniteCave_1F/scripts.pory"
	delay_16
# 871 "data/maps/GraniteCave_1F/scripts.pory"
	walk_in_place_slow_down
	step_end

# 874 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_PlayerNoWayOut2:
# 875 "data/maps/GraniteCave_1F/scripts.pory"
	lock_facing_direction
# 876 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_up
# 876 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_up
# 877 "data/maps/GraniteCave_1F/scripts.pory"
	walk_in_place_slow_down
# 878 "data/maps/GraniteCave_1F/scripts.pory"
	walk_in_place_slow_up
# 879 "data/maps/GraniteCave_1F/scripts.pory"
	delay_16
# 880 "data/maps/GraniteCave_1F/scripts.pory"
	walk_in_place_slow_down
	step_end

# 883 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_PlayerNoWayOut3:
# 884 "data/maps/GraniteCave_1F/scripts.pory"
	lock_facing_direction
# 885 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_up
# 885 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_up
# 885 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_up
# 886 "data/maps/GraniteCave_1F/scripts.pory"
	walk_in_place_slow_down
# 887 "data/maps/GraniteCave_1F/scripts.pory"
	walk_in_place_slow_up
# 888 "data/maps/GraniteCave_1F/scripts.pory"
	delay_16
# 889 "data/maps/GraniteCave_1F/scripts.pory"
	walk_in_place_slow_down
	step_end

# 892 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Grunt1_Attack_Top:
# 893 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_up
# 893 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_up
# 893 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_up
	step_end

# 896 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Grunt23_Attack_Top:
# 897 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_up
# 897 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_up
# 897 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_up
# 897 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_up
# 898 "data/maps/GraniteCave_1F/scripts.pory"
	face_player
	step_end

# 901 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_Grunt2_BlockExit_Top:
# 902 "data/maps/GraniteCave_1F/scripts.pory"
	delay_16
# 903 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_down
# 904 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 905 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_down
# 906 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 906 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 906 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 906 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 906 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 907 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_down
# 907 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_down
# 908 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 909 "data/maps/GraniteCave_1F/scripts.pory"
	face_up
	step_end

# 912 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_CameraDown:
# 913 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_down
# 913 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_down
# 913 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_down
# 913 "data/maps/GraniteCave_1F/scripts.pory"
	walk_slow_down
	step_end

# 916 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_Grunt1_BlockExit_Top:
# 917 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_down
# 917 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_down
# 917 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_down
# 918 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 918 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 918 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 918 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 918 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 919 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_down
# 919 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_down
# 920 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 920 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 921 "data/maps/GraniteCave_1F/scripts.pory"
	face_up
	step_end

# 924 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_Grunt3_BlockExit_Top:
# 925 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_down
# 926 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 926 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 926 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 926 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 926 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 927 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_down
# 927 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_down
# 928 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 928 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 928 "data/maps/GraniteCave_1F/scripts.pory"
	walk_faster_right
# 929 "data/maps/GraniteCave_1F/scripts.pory"
	face_up
	step_end

GraniteCave_1F_EventScript_BlueRock1_Text_0:
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	.string "... ¿Oh?\n"
	.string "¡Mira, hay una piedra evolutiva aquí!$"

GraniteCave_1F_EventScript_BlueRock1_Text_1:
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	.string ".... ¡MMMMGGGGHHH!$"

GraniteCave_1F_EventScript_BlueRock1_Text_2:
# 56 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Parece que otra piedra evolutiva se\n"
	.string "está formando debajo muy\l"
	.string "lentamente...\p"
	.string "¡Habrá que volver mañana!$"

GraniteCave_1F_EventScript_Hiker_Text_0:
# 156 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Este lugar ha cambiado mucho con el\n"
	.string "tiempo, por ejemplo, {COLOR BLUE}ahora el fondo de\l"
	.string "la cueva es más claro{COLOR DARK_GRAY}, y también se\l"
	.string "formaron unas {COLOR RED}Rocas Rojas{COLOR DARK_GRAY} y {COLOR BLUE}Rocas\l"
	.string "Azules{COLOR DARK_GRAY}, ¡Que forman {COLOR BLUE}Piedras\l"
	.string "Evolutivas diariamente!{COLOR DARK_GRAY}$"

GraniteCave_1F_EventScript_Grunts_Text_0:
# 185 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¿Entendieron?\p"
	.string "Entramos, buscamos las {COLOR BLUE}Piedras\n"
	.string "Evolutivas{COLOR DARK_GRAY}, y nos vamos.$"

GraniteCave_1F_EventScript_Grunts_Text_1:
# 191 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¿Pero para qué queremos las piedras?$"

GraniteCave_1F_EventScript_Grunts_Text_2:
# 197 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Ay, si eres tarada, ¡Para extraer y usar\n"
	.string "su {COLOR BLUE}Energía Evolutiva{COLOR DARK_GRAY} como radar,\l"
	.string "claro está!$"

GraniteCave_1F_EventScript_Grunts_Text_3:
# 203 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡Ay, bueno, pero no te enojes!$"

GraniteCave_1F_EventScript_Grunts_Text_4:
# 243 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡Ay, chicas, tenemos visitas!$"

GraniteCave_1F_EventScript_Grunts_Text_5:
# 247 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¿Qué quiere {ELLA} idiota el día de hoy?\p"
	.string "Podemos ofrecerle una amordaza o un\n"
	.string "cascote en el medio de la frente.$"

GraniteCave_1F_EventScript_Grunts_Text_6:
# 254 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}(¡Mejor me voy!)$"

GraniteCave_1F_EventScript_Grunts_Text_7:
# 288 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¿A dónde crees que vas?$"

GraniteCave_1F_EventScript_Grunts_Text_8:
# 310 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}(D-demonios...)$"

GraniteCave_1F_EventScript_Grunts_Text_9:
# 314 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Ahora, ni amordaza ni cascote en la\n"
	.string "frente, ¡Ahora enfrentarás el poder\l"
	.string "del {COLOR BLUE}Equipo Aqua{COLOR DARK_GRAY}!$"

GraniteCave_1F_EventScript_Grunts_Text_10:
# 342 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡Te arrepentirás!$"

GraniteCave_1F_EventScript_Grunts_Text_11:
# 363 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¿¡C-cómo!?$"

GraniteCave_1F_EventScript_Grunts_Text_12:
# 383 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡No puede ser!$"

GraniteCave_1F_EventScript_Grunts_Text_13:
# 405 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¿A mí también?\p"
	.string "¡Imposible!$"

GraniteCave_1F_EventScript_Grunts_Text_14:
# 422 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡No nos dejas otra opción!$"

GraniteCave_1F_EventScript_Grunts_Text_15:
# 438 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡Te seguiremos atacando, con nuestros\n"
	.string "Pokémon más débiles, hasta que tú\l"
	.string "seas quien se debilite!$"

GraniteCave_1F_EventScript_Grunts_Text_16:
# 458 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡BASTA!$"

GraniteCave_1F_EventScript_Grunts_Text_17:
# 480 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡¿Quién se atreve a interrumpirnos?!$"

GraniteCave_1F_EventScript_Grunts_Text_18:
# 498 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Les dije, basta.$"

GraniteCave_1F_EventScript_Grunts_Text_19:
# 514 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡E-e-e-es Brawly, el {COLOR BLUE}Líder del Gimnasio{COLOR DARK_GRAY}!$"

GraniteCave_1F_EventScript_Grunts_Text_20:
# 521 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¿Y-y-y él qué hace aquí?\p"
	.string "Creí que los Líderes de Gimnasio no\n"
	.string "salían...$"

GraniteCave_1F_EventScript_Grunts_Text_21:
# 542 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡N-no importa qué haga aquí, lo\n"
	.string "derrotaremos!$"

GraniteCave_1F_EventScript_Grunts_Text_22:
# 546 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Parece que no van a retirarse, ¿Will\n"
	.string "ya?\p"
	.string "¡Entonces tendré que obligarlas!$"

GraniteCave_1F_EventScript_Grunts_Text_23:
# 567 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡Hariyama, usa Tambor, y luego Machada!$"

GraniteCave_1F_EventScript_Grunts_Text_24:
# 570 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡HHYYAAAA!$"

GraniteCave_1F_EventScript_Grunts_Text_25:
# 597 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡N-N-NO!\n"
	.string "¡Nuestras reservas!\p"
	.string "¡Acabó con 12 Pokémon de un sólo\n"
	.string "movimiento!$"

GraniteCave_1F_EventScript_Grunts_Text_26:
# 602 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡What a waste!\n"
	.string "Ni siquiera necesitaba usar Tambor.\l"
	.string "Bueno, ladies, si me hacen el honor de\l"
	.string "no volver a verlas en este Pueblo, se\l"
	.string "los agradecería enormemente.$"

GraniteCave_1F_EventScript_Grunts_Text_27:
# 620 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡M-maldita sea!\p"
	.string "¡Esto no es lo último que verán de\n"
	.string "nosotras!$"

GraniteCave_1F_EventScript_Grunts_Text_28:
# 624 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Ah, ¿Quieren más?\p"
	.string "No sabía que disfrutaban tanto la\n"
	.string "humillación, deberían ver a un\l"
	.string "psicólogo por eso, el masoquismo no\l"
	.string "les hará nada bien.$"

GraniteCave_1F_EventScript_Grunts_Text_29:
# 629 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡M-maldito!$"

GraniteCave_1F_EventScript_Grunts_Text_30:
# 664 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡Ah, mantenerme todo serio e\n"
	.string "intimidante es complicado!$"

GraniteCave_1F_EventScript_Grunts_Text_31:
# 681 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¿Estás bien, amig{OA}?\n"
	.string "¿Esas locas no te hicieron nada, no?$"

GraniteCave_1F_EventScript_Grunts_Text_32:
# 686 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡Hell yeah, llegué justo a tiempo!\p"
	.string "Aunque, estoy seguro que las habrías\n"
	.string "derrotado si no jugaban sucio.\p"
	.string "Después de todo, tú solit{OA} derrotaste a\n"
	.string "sus Pokémon fuertes, ¿Me equivoco?$"

GraniteCave_1F_EventScript_Grunts_Text_33:
# 709 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Anyway, ¡Te estaré esperando en el\n"
	.string "Gimnasio, dude!\p"
	.string "¡No puedo esperar a batallar contra tí!$"

GraniteCave_1F_Text_Grunt1_Intro::
# 790 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡Vas a caer!$"

GraniteCave_1F_Text_Grunt2_Intro::
# 802 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡Pues yo no me dejaré ganar!$"

GraniteCave_1F_Text_Grunt3_Intro::
# 814 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡Inúitles!\n¡Ya verás!$"

GraniteCave_1F_Text_Grunt1_Defeat::
# 826 "data/maps/GraniteCave_1F/scripts.pory"
	.string "!?$"

GraniteCave_1F_Text_Grunt2_Defeat::
# 831 "data/maps/GraniteCave_1F/scripts.pory"
	.string "¡Imposible!\n¡También fui derrotada!$"

GraniteCave_1F_Text_Grunt3_Defeat::
# 842 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Entendería que derrotes a esas\ndos tontas, ¿¡Pero a mí!?$"
