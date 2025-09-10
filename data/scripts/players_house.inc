EventScript_RunningShoesManualTranslated::
# 144 "data/scripts/players_house.pory"
	msgbox EventScript_RunningShoesManualTranslated_Text_0, MSGBOX_YESNO
# 147 "data/scripts/players_house.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_RunningShoesManualTranslated_2
EventScript_RunningShoesManualTranslated_1:
# 156 "data/scripts/players_house.pory"
	msgbox EventScript_RunningShoesManualTranslated_Text_3
# 159 "data/scripts/players_house.pory"
	releaseall
	end

EventScript_RunningShoesManualTranslated_2:
# 148 "data/scripts/players_house.pory"
	msgbox EventScript_RunningShoesManualTranslated_Text_1, MSGBOX_YESNO
# 149 "data/scripts/players_house.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_RunningShoesManualTranslated_4
	goto EventScript_RunningShoesManualTranslated_1

EventScript_RunningShoesManualTranslated_4:
# 150 "data/scripts/players_house.pory"
	msgbox EventScript_RunningShoesManualTranslated_Text_2
# 151 "data/scripts/players_house.pory"
	releaseall
	end


EventScript_YoureNewNeighbor_Translated::
# 165 "data/scripts/players_house.pory"
	bufferstring STR_VAR_1, EventScript_YoureNewNeighbor_Translated_Text_0
# 166 "data/scripts/players_house.pory"
	bufferstring STR_VAR_2, EventScript_YoureNewNeighbor_Translated_Text_1
# 167 "data/scripts/players_house.pory"
	bufferstring STR_VAR_3, EventScript_YoureNewNeighbor_Translated_Text_2
# 173 "data/scripts/players_house.pory"
	msgbox EventScript_YoureNewNeighbor_Translated_Text_3
# 176 "data/scripts/players_house.pory"
	call EventScript_MeetRival
	return


EventScript_MeetRival::
# 181 "data/scripts/players_house.pory"
	playse SE_EXIT
# 182 "data/scripts/players_house.pory"
	delay 10
# 183 "data/scripts/players_house.pory"
	addobject 7
# 184 "data/scripts/players_house.pory"
	delay 30
# 185 "data/scripts/players_house.pory"
	playse SE_PIN
# 186 "data/scripts/players_house.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 187 "data/scripts/players_house.pory"
	waitmovement 0
# 188 "data/scripts/players_house.pory"
	applymovement 7, Common_Movement_FacePlayer
# 189 "data/scripts/players_house.pory"
	checkplayergender
# 190 "data/scripts/players_house.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq EventScript_MeetRival_2
# 207 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 208 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 209 "data/scripts/players_house.pory"
	applymovement 7, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer
# 210 "data/scripts/players_house.pory"
	waitmovement 0
# 211 "data/scripts/players_house.pory"
	namebox Rival
# 212 "data/scripts/players_house.pory"
	call RivalsHouse_1F_Text_MayWhoAreYou_Translated
# 213 "data/scripts/players_house.pory"
	closemessage
# 214 "data/scripts/players_house.pory"
	hidenamebox
# 215 "data/scripts/players_house.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs
# 216 "data/scripts/players_house.pory"
	playse SE_EXIT
# 217 "data/scripts/players_house.pory"
	removeobject 7
# 218 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 219 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 220 "data/scripts/players_house.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
EventScript_MeetRival_1:
# 222 "data/scripts/players_house.pory"
	delay 30
# 223 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 224 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 225 "data/scripts/players_house.pory"
	savebgm MUS_DUMMY
# 226 "data/scripts/players_house.pory"
	fadedefaultbgm
	return

EventScript_MeetRival_2:
# 191 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 192 "data/scripts/players_house.pory"
	waitmovement 0
# 193 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 194 "data/scripts/players_house.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer
# 195 "data/scripts/players_house.pory"
	namebox Rival
# 196 "data/scripts/players_house.pory"
	call RivalsHouse_1F_Text_MayWhoAreYou_Translated
# 197 "data/scripts/players_house.pory"
	closemessage
# 198 "data/scripts/players_house.pory"
	hidenamebox
# 199 "data/scripts/players_house.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs
# 200 "data/scripts/players_house.pory"
	playse SE_EXIT
# 201 "data/scripts/players_house.pory"
	removeobject 7
# 202 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 203 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 204 "data/scripts/players_house.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	goto EventScript_MeetRival_1


RivalsHouse_1F_Text_MayWhoAreYou_Translated::
# 239 "data/scripts/players_house.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou_Translated_Text_0
	return


PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation::
# 259 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_0
# 260 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 261 "data/scripts/players_house.pory"
	waitmovement 0
# 262 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8005, MALE, PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale
# 263 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8005, FEMALE, PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale
# 264 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_1
# 267 "data/scripts/players_house.pory"
	closemessage
# 268 "data/scripts/players_house.pory"
	hidenamebox
# 269 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
# 270 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerWalkIn
# 271 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 272 "data/scripts/players_house.pory"
	waitmovement 0
	return


PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated::
# 282 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated_Text_0
# 285 "data/scripts/players_house.pory"
	closemessage
# 286 "data/scripts/players_house.pory"
	hidenamebox
# 287 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 288 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MovePlayerAwayFromDoor
# 289 "data/scripts/players_house.pory"
	waitmovement 0
	return


PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom::
# 299 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom_Text_0
	return


PlayersHouse_1F_EventScript_MaybeDadWillBeOn::
# 311 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MaybeDadWillBeOn_Text_0
	return


PlayersHouse_1F_EventScript_ItsOverWeMissedHim::
# 323 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_ItsOverWeMissedHim_Text_0
	return


PlayersHouse_1F_EventScript_StarterSet_Translated_11::
# 335 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_StarterSet_Translated_11_Text_0
	return


PlayersHouse_1F_EventScript_StarterSet_13::
# 347 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_StarterSet_13_Text_0, MSGBOX_YESNO
# 350 "data/scripts/players_house.pory"
	compare VAR_RESULT, 1
# 351 "data/scripts/players_house.pory"
	goto_if_eq PlayersHouse_1F_EventScript_StarterSet_15
# 352 "data/scripts/players_house.pory"
	namebox Mama
# 358 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_StarterSet_13_Text_1
# 361 "data/scripts/players_house.pory"
	hidenamebox
# 362 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSet_2
	return


# 367 "data/scripts/players_house.pory"

# 368 "data/scripts/players_house.pory"
@ Local IDs are the same for both players houses
# 369 "data/scripts/players_house.pory"
.set LOCALID_MOM, 1
# 370 "data/scripts/players_house.pory"
.set LOCALID_DAD, 5
# 371 "data/scripts/players_house.pory"
.set LOCALID_MOM_2F, 14
# 372 "data/scripts/players_house.pory"

# 373 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet::
# 374 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
# 375 "data/scripts/players_house.pory"
	return
# 376 "data/scripts/players_house.pory"

# 377 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_EnterHouseMovingIn::
# 378 "data/scripts/players_house.pory"
	namebox Mama
# 379 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation
# 380 "data/scripts/players_house.pory"
	releaseall
# 381 "data/scripts/players_house.pory"
	end
# 382 "data/scripts/players_house.pory"

# 383 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale::
# 384 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 385 "data/scripts/players_house.pory"
	waitmovement 0
# 386 "data/scripts/players_house.pory"
	return
# 387 "data/scripts/players_house.pory"

# 388 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale::
# 389 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 390 "data/scripts/players_house.pory"
	waitmovement 0
# 391 "data/scripts/players_house.pory"
	return
# 392 "data/scripts/players_house.pory"

# 393 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerWalkIn:
# 394 "data/scripts/players_house.pory"
	walk_up
# 395 "data/scripts/players_house.pory"
	step_end
# 396 "data/scripts/players_house.pory"

# 397 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomGoSeeRoom::
# 398 "data/scripts/players_house.pory"
	namebox Mama	
# 399 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated
# 400 "data/scripts/players_house.pory"
	releaseall
# 401 "data/scripts/players_house.pory"
	end
# 402 "data/scripts/players_house.pory"

# 403 "data/scripts/players_house.pory"
LittlerootTown_BrendansHouse_2F_EventScript_WallClock::
# 404 "data/scripts/players_house.pory"
	lockall
# 405 "data/scripts/players_house.pory"
	setvar VAR_0x8004, MALE
# 406 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
# 407 "data/scripts/players_house.pory"
	end
# 408 "data/scripts/players_house.pory"

# 409 "data/scripts/players_house.pory"
LittlerootTown_MaysHouse_2F_EventScript_WallClock::
# 410 "data/scripts/players_house.pory"
	lockall
# 411 "data/scripts/players_house.pory"
	setvar VAR_0x8004, FEMALE
# 412 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
# 413 "data/scripts/players_house.pory"
	end
# 414 "data/scripts/players_house.pory"

# 415 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_WallClock::
# 416 "data/scripts/players_house.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, PlayersHouse_2F_EventScript_CheckWallClock
# 417 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_ChoseClock
# 418 "data/scripts/players_house.pory"
	end
# 419 "data/scripts/players_house.pory"
PlayersHouse_1F_Text_ChooseTimeThing:
# 420 "data/scripts/players_house.pory"
	.string "¡AVISO! LEE ESTO CON ATENCIÓN.\n"
# 421 "data/scripts/players_house.pory"
	.string "POR FAVOR, SELECCIONAR SI DESEA\l"
# 422 "data/scripts/players_house.pory"
	.string "CONTINUAR USANDO EL RELOJ DEL\l"
# 423 "data/scripts/players_house.pory"
	.string "JUEGO, O EL RELOJ REAL DE SU\l"
# 424 "data/scripts/players_house.pory"
	.string "DISPOSITIVO.\p"
# 425 "data/scripts/players_house.pory"
	.string "Tenga en cuenta que esta\n"
# 426 "data/scripts/players_house.pory"
	.string "acción no se puede cambiar.$"
# 427 "data/scripts/players_house.pory"
	
# 428 "data/scripts/players_house.pory"
PlayersHouse_1F_Text_ChooseClock:
# 429 "data/scripts/players_house.pory"
	.string "¿Está segur{OA} que quiere\n"
# 430 "data/scripts/players_house.pory"
	.string "usar el reloj falso del\l"
# 431 "data/scripts/players_house.pory"
	.string "juego?$"
# 432 "data/scripts/players_house.pory"
PlayersHouse_1F_Text_ChooseRTC:
# 433 "data/scripts/players_house.pory"
	.string "¿Está segur{OA} que quiere\n"
# 434 "data/scripts/players_house.pory"
	.string "usar el reloj real de\l"
# 435 "data/scripts/players_house.pory"
	.string "su dispositivo?$"
# 436 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_ChoseClock::
# 437 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 438 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 439 "data/scripts/players_house.pory"
	delay 30
# 440 "data/scripts/players_house.pory"
	setflag FLAG_SET_WALL_CLOCK
# 441 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 442 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 443 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 444 "data/scripts/players_house.pory"
	checkplayergender
# 445 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_2F_EventScript_MomComesUpstairsMale
# 446 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_2F_EventScript_MomComesUpstairsFemale
# 447 "data/scripts/players_house.pory"
	playse SE_EXIT
# 448 "data/scripts/players_house.pory"
	removeobject VAR_0x8008
# 449 "data/scripts/players_house.pory"
	releaseall
# 450 "data/scripts/players_house.pory"
	end
# 451 "data/scripts/players_house.pory"

# 452 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_ChoseRTC::
# 453 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ChooseRTC, MSGBOX_YESNO
# 454 "data/scripts/players_house.pory"
	compare VAR_RESULT, 1
# 455 "data/scripts/players_house.pory"
	goto_if_ne PlayersHouse_2F_EventScript_WallClock
# 456 "data/scripts/players_house.pory"
	closemessage
# 457 "data/scripts/players_house.pory"
	delay 30
# 458 "data/scripts/players_house.pory"
	setflag FLAG_SET_WALL_CLOCK
# 459 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 460 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 461 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 462 "data/scripts/players_house.pory"
	checkplayergender
# 463 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_2F_EventScript_MomComesUpstairsMale
# 464 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_2F_EventScript_MomComesUpstairsFemale
# 465 "data/scripts/players_house.pory"
	playse SE_EXIT
# 466 "data/scripts/players_house.pory"
	removeobject VAR_0x8008
# 467 "data/scripts/players_house.pory"
	releaseall
# 468 "data/scripts/players_house.pory"
	end
# 469 "data/scripts/players_house.pory"

# 470 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_MomComesUpstairsMale::
# 471 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_MOM_2F
# 472 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 473 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersMale
# 474 "data/scripts/players_house.pory"
	waitmovement 0
# 475 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 476 "data/scripts/players_house.pory"
	waitmovement 0
# 477 "data/scripts/players_house.pory"
	namebox Mama
# 478 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom
# 479 "data/scripts/players_house.pory"
	closemessage
# 480 "data/scripts/players_house.pory"
	hidenamebox
# 481 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsMale
# 482 "data/scripts/players_house.pory"
	waitmovement 0
# 483 "data/scripts/players_house.pory"
	return
# 484 "data/scripts/players_house.pory"

# 485 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_MomComesUpstairsFemale::
# 486 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_MOM_2F
# 487 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 488 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersFemale
# 489 "data/scripts/players_house.pory"
	waitmovement 0
# 490 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 491 "data/scripts/players_house.pory"
	waitmovement 0
# 492 "data/scripts/players_house.pory"
	namebox Mama
# 493 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom
# 494 "data/scripts/players_house.pory"
	closemessage
# 495 "data/scripts/players_house.pory"
	hidenamebox
# 496 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsFemale
# 497 "data/scripts/players_house.pory"
	waitmovement 0
# 498 "data/scripts/players_house.pory"
	return
# 499 "data/scripts/players_house.pory"

# 500 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_CheckWallClock::
# 501 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 502 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 503 "data/scripts/players_house.pory"
	special Special_ViewWallClock
# 504 "data/scripts/players_house.pory"
	waitstate
# 505 "data/scripts/players_house.pory"
	releaseall
# 506 "data/scripts/players_house.pory"
	end
# 507 "data/scripts/players_house.pory"

# 508 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_SetWallClock::
# 509 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 510 "data/scripts/players_house.pory"
	special SetHourMinutes
# 511 "data/scripts/players_house.pory"
	special StartWallClock
# 512 "data/scripts/players_house.pory"
	waitstate
# 513 "data/scripts/players_house.pory"
	return
# 514 "data/scripts/players_house.pory"

# 515 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomEntersMale:
# 516 "data/scripts/players_house.pory"
	delay_8
# 517 "data/scripts/players_house.pory"
	walk_down
# 518 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 519 "data/scripts/players_house.pory"
	delay_16
# 520 "data/scripts/players_house.pory"
	delay_8
# 521 "data/scripts/players_house.pory"
	walk_left
# 522 "data/scripts/players_house.pory"
	step_end
# 523 "data/scripts/players_house.pory"

# 524 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomExitsMale:
# 525 "data/scripts/players_house.pory"
	walk_right
# 526 "data/scripts/players_house.pory"
	walk_up
# 527 "data/scripts/players_house.pory"
	delay_8
# 528 "data/scripts/players_house.pory"
	step_end
# 529 "data/scripts/players_house.pory"

# 530 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomEntersFemale:
# 531 "data/scripts/players_house.pory"
	delay_8
# 532 "data/scripts/players_house.pory"
	walk_down
# 533 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 534 "data/scripts/players_house.pory"
	delay_16
# 535 "data/scripts/players_house.pory"
	delay_8
# 536 "data/scripts/players_house.pory"
	walk_right
# 537 "data/scripts/players_house.pory"
	step_end
# 538 "data/scripts/players_house.pory"

# 539 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomExitsFemale:
# 540 "data/scripts/players_house.pory"
	walk_left
# 541 "data/scripts/players_house.pory"
	walk_up
# 542 "data/scripts/players_house.pory"
	delay_8
# 543 "data/scripts/players_house.pory"
	step_end
# 544 "data/scripts/players_house.pory"

# 545 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetWatchedBroadcast::
# 546 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 547 "data/scripts/players_house.pory"
	releaseall
# 548 "data/scripts/players_house.pory"
	end
# 549 "data/scripts/players_house.pory"

# 550 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportMale::
# 551 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterRight
# 552 "data/scripts/players_house.pory"
	waitmovement 0
# 553 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 554 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymMale
# 555 "data/scripts/players_house.pory"
	waitmovement 0
# 556 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 557 "data/scripts/players_house.pory"
	namebox Mama
# 558 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MaybeDadWillBeOn
# 559 "data/scripts/players_house.pory"
	closemessage
# 560 "data/scripts/players_house.pory"
	hidenamebox
# 561 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale
# 562 "data/scripts/players_house.pory"
	waitmovement 0
# 563 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVMale
# 564 "data/scripts/players_house.pory"
	waitmovement 0
# 565 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 566 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 567 "data/scripts/players_house.pory"
	waitmovement 0
# 568 "data/scripts/players_house.pory"
	namebox Mama
# 569 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_ItsOverWeMissedHim
# 570 "data/scripts/players_house.pory"
	hidenamebox
# 571 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_StarterSet
# 572 "data/scripts/players_house.pory"
	hidenamebox
# 573 "data/scripts/players_house.pory"
	closemessage
# 574 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 575 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatMale
# 576 "data/scripts/players_house.pory"
	waitmovement 0
# 577 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
# 578 "data/scripts/players_house.pory"
	end
# 579 "data/scripts/players_house.pory"

# 580 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportFemale::
# 581 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterLeft
# 582 "data/scripts/players_house.pory"
	waitmovement 0
# 583 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 584 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale
# 585 "data/scripts/players_house.pory"
	waitmovement 0
# 586 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 587 "data/scripts/players_house.pory"
	namebox Mama
# 588 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MaybeDadWillBeOn
# 589 "data/scripts/players_house.pory"
	closemessage
# 590 "data/scripts/players_house.pory"
	hidenamebox
# 591 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale
# 592 "data/scripts/players_house.pory"
	waitmovement 0
# 593 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVFemale
# 594 "data/scripts/players_house.pory"
	waitmovement 0
# 595 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 596 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 597 "data/scripts/players_house.pory"
	waitmovement 0
# 598 "data/scripts/players_house.pory"
	namebox Mama
# 599 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_ItsOverWeMissedHim
# 600 "data/scripts/players_house.pory"
	hidenamebox
# 601 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_StarterSet
# 602 "data/scripts/players_house.pory"
	hidenamebox
# 603 "data/scripts/players_house.pory"
	closemessage
# 604 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 605 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatFemale
# 606 "data/scripts/players_house.pory"
	waitmovement 0
# 607 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
# 608 "data/scripts/players_house.pory"
	end
# 609 "data/scripts/players_house.pory"

# 610 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticeGymBroadcast::
# 611 "data/scripts/players_house.pory"
	playse SE_PIN
# 612 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_ExclamationMark
# 613 "data/scripts/players_house.pory"
	waitmovement 0
# 614 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_Delay48
# 615 "data/scripts/players_house.pory"
	waitmovement 0
# 616 "data/scripts/players_house.pory"
	namebox Mama
# 617 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_OhComeQuickly, MSGBOX_DEFAULT
# 618 "data/scripts/players_house.pory"
	closemessage
# 619 "data/scripts/players_house.pory"
	hidenamebox
# 620 "data/scripts/players_house.pory"
	return
# 621 "data/scripts/players_house.pory"

# 622 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_WatchGymBroadcast::
# 623 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 624 "data/scripts/players_house.pory"
	waitmovement 0
# 625 "data/scripts/players_house.pory"
	namebox Entrevistador
# 626 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ReportFromPetalburgGym, MSGBOX_DEFAULT
# 627 "data/scripts/players_house.pory"
	fadedefaultbgm
# 628 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 629 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_HOME
# 630 "data/scripts/players_house.pory"
	delay 35
# 631 "data/scripts/players_house.pory"
	return
# 632 "data/scripts/players_house.pory"

# 633 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet::
# 634 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_2:
# 635 "data/scripts/players_house.pory"
	dynmultichoice 25, 4, TRUE, 4, 2, DYN_MULTICHOICE_CB_NONE, PlayersHouse_1F_EventScript_StarterSet_Text_0, PlayersHouse_1F_EventScript_StarterSet_Text_1, PlayersHouse_1F_EventScript_StarterSet_Text_2, PlayersHouse_1F_EventScript_StarterSet_Text_3, PlayersHouse_1F_EventScript_StarterSet_Text_4, PlayersHouse_1F_EventScript_StarterSet_Text_5, PlayersHouse_1F_EventScript_StarterSet_Text_6, PlayersHouse_1F_EventScript_StarterSet_Text_7, PlayersHouse_1F_EventScript_StarterSet_Text_8
# 636 "data/scripts/players_house.pory"
	switch VAR_RESULT
# 637 "data/scripts/players_house.pory"
	case 0, PlayersHouse_1F_EventScript_StarterSet_5
# 638 "data/scripts/players_house.pory"
	case 1, PlayersHouse_1F_EventScript_StarterSet_6
# 639 "data/scripts/players_house.pory"
	case 2, PlayersHouse_1F_EventScript_StarterSet_7
# 640 "data/scripts/players_house.pory"
	case 3, PlayersHouse_1F_EventScript_StarterSet_8
# 641 "data/scripts/players_house.pory"
	case 4, PlayersHouse_1F_EventScript_StarterSet_9
# 642 "data/scripts/players_house.pory"
	case 5, PlayersHouse_1F_EventScript_StarterSet_10
# 643 "data/scripts/players_house.pory"
	case 6, PlayersHouse_1F_EventScript_StarterSet_11
# 644 "data/scripts/players_house.pory"
	case 7, PlayersHouse_1F_EventScript_StarterSet_12
# 645 "data/scripts/players_house.pory"
	case 8, PlayersHouse_1F_EventScript_StarterSet_13
# 646 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSetEnd::
# 647 "data/scripts/players_house.pory"
	namebox Mama
# 648 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_StarterSet_Translated_11
# 649 "data/scripts/players_house.pory"
	closemessage
# 650 "data/scripts/players_house.pory"
	hidenamebox
# 651 "data/scripts/players_house.pory"
	return
# 652 "data/scripts/players_house.pory"

# 653 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_5:
# 654 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 1
# 655 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 656 "data/scripts/players_house.pory"

# 657 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_6:
# 658 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 2
# 659 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 660 "data/scripts/players_house.pory"

# 661 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_7:
# 662 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 3
# 663 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 664 "data/scripts/players_house.pory"

# 665 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_8:
# 666 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 4
# 667 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 668 "data/scripts/players_house.pory"

# 669 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_9:
# 670 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 5
# 671 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 672 "data/scripts/players_house.pory"

# 673 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_10:
# 674 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 6
# 675 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 676 "data/scripts/players_house.pory"

# 677 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_11:
# 678 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 7
# 679 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 680 "data/scripts/players_house.pory"

# 681 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_12:
# 682 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 8
# 683 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 684 "data/scripts/players_house.pory"

# 685 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_15:
# 686 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 9
# 687 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
# 688 "data/scripts/players_house.pory"

# 689 "data/scripts/players_house.pory"

# 690 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_0:
# 691 "data/scripts/players_house.pory"
	.string "Kanto$"
# 692 "data/scripts/players_house.pory"

# 693 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_1:
# 694 "data/scripts/players_house.pory"
	.string "Johto$"
# 695 "data/scripts/players_house.pory"

# 696 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_2:
# 697 "data/scripts/players_house.pory"
	.string "Hoenn$"
# 698 "data/scripts/players_house.pory"

# 699 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_3:
# 700 "data/scripts/players_house.pory"
	.string "Sinnoh$"
# 701 "data/scripts/players_house.pory"

# 702 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_4:
# 703 "data/scripts/players_house.pory"
	.string "Unova$"
# 704 "data/scripts/players_house.pory"

# 705 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_5:
# 706 "data/scripts/players_house.pory"
	.string "Kalos$"
# 707 "data/scripts/players_house.pory"

# 708 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_6:
# 709 "data/scripts/players_house.pory"
	.string "Alola$"
# 710 "data/scripts/players_house.pory"

# 711 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_StarterSet_Text_7:
# 712 "data/scripts/players_house.pory"
	.string "Galar$"
# 713 "data/scripts/players_house.pory"

# 714 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadMale:
# 715 "data/scripts/players_house.pory"
	walk_up
# 716 "data/scripts/players_house.pory"
	walk_right
# 717 "data/scripts/players_house.pory"
	walk_right
# 718 "data/scripts/players_house.pory"
	walk_right
# 719 "data/scripts/players_house.pory"
	walk_right
# 720 "data/scripts/players_house.pory"
	walk_down
# 721 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 722 "data/scripts/players_house.pory"
	step_end
# 723 "data/scripts/players_house.pory"

# 724 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadFemale:
# 725 "data/scripts/players_house.pory"
	walk_up
# 726 "data/scripts/players_house.pory"
	walk_left
# 727 "data/scripts/players_house.pory"
	walk_left
# 728 "data/scripts/players_house.pory"
	walk_left
# 729 "data/scripts/players_house.pory"
	walk_left
# 730 "data/scripts/players_house.pory"
	walk_down
# 731 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 732 "data/scripts/players_house.pory"
	step_end
# 733 "data/scripts/players_house.pory"

# 734 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerMale:
# 735 "data/scripts/players_house.pory"
	walk_right
# 736 "data/scripts/players_house.pory"
	step_end
# 737 "data/scripts/players_house.pory"

# 738 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerFemale:
# 739 "data/scripts/players_house.pory"
	walk_left
# 740 "data/scripts/players_house.pory"
	step_end
# 741 "data/scripts/players_house.pory"

# 742 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale:
# 743 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 744 "data/scripts/players_house.pory"
	delay_16
# 745 "data/scripts/players_house.pory"
	delay_16
# 746 "data/scripts/players_house.pory"
	delay_16
# 747 "data/scripts/players_house.pory"
	delay_16
# 748 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 749 "data/scripts/players_house.pory"
	delay_16
# 750 "data/scripts/players_house.pory"
	delay_16
# 751 "data/scripts/players_house.pory"
	step_end
# 752 "data/scripts/players_house.pory"

# 753 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale:
# 754 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 755 "data/scripts/players_house.pory"
	delay_16
# 756 "data/scripts/players_house.pory"
	delay_16
# 757 "data/scripts/players_house.pory"
	delay_16
# 758 "data/scripts/players_house.pory"
	delay_16
# 759 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 760 "data/scripts/players_house.pory"
	delay_16
# 761 "data/scripts/players_house.pory"
	delay_16
# 762 "data/scripts/players_house.pory"
	step_end
# 763 "data/scripts/players_house.pory"

# 764 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale:
# 765 "data/scripts/players_house.pory"
	walk_up
# 766 "data/scripts/players_house.pory"
	walk_left
# 767 "data/scripts/players_house.pory"
	walk_left
# 768 "data/scripts/players_house.pory"
	step_end
# 769 "data/scripts/players_house.pory"

# 770 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale:
# 771 "data/scripts/players_house.pory"
	walk_up
# 772 "data/scripts/players_house.pory"
	walk_right
# 773 "data/scripts/players_house.pory"
	walk_right
# 774 "data/scripts/players_house.pory"
	step_end
# 775 "data/scripts/players_house.pory"

# 776 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale:
# 777 "data/scripts/players_house.pory"
	walk_left
# 778 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 779 "data/scripts/players_house.pory"
	step_end
# 780 "data/scripts/players_house.pory"

# 781 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale:
# 782 "data/scripts/players_house.pory"
	walk_right
# 783 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 784 "data/scripts/players_house.pory"
	step_end
# 785 "data/scripts/players_house.pory"

# 786 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatMale:
# 787 "data/scripts/players_house.pory"
	walk_left
# 788 "data/scripts/players_house.pory"
	walk_down
# 789 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 790 "data/scripts/players_house.pory"
	step_end
# 791 "data/scripts/players_house.pory"

# 792 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatFemale:
# 793 "data/scripts/players_house.pory"
	walk_right
# 794 "data/scripts/players_house.pory"
	walk_down
# 795 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 796 "data/scripts/players_house.pory"
	step_end
# 797 "data/scripts/players_house.pory"

# 798 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Mom::
# 799 "data/scripts/players_house.pory"
	lock
# 800 "data/scripts/players_house.pory"
	faceplayer
# 801 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, PlayersHouse_1F_EventScript_DontPushYourselfTooHard
# 802 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, PlayersHouse_1F_EventScript_DontPushYourselfTooHard
# 803 "data/scripts/players_house.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PlayersHouse_1F_EventScript_TryRegisterMom
# 804 "data/scripts/players_house.pory"
	goto_if_set FLAG_RESCUED_BIRCH, PlayersHouse_1F_EventScript_MomHealsParty
# 805 "data/scripts/players_house.pory"
	goto_if_eq VAR_TEMP_1, 1, PlayersHouse_1F_EventScript_SeeYouHoney
# 806 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 7, PlayersHouse_1F_EventScript_DidYouMeetProfBirch
# 807 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
# 808 "data/scripts/players_house.pory"
	release
# 809 "data/scripts/players_house.pory"
	end
# 810 "data/scripts/players_house.pory"

# 811 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DontPushYourselfTooHard::
# 812 "data/scripts/players_house.pory"
	namebox Mama
# 813 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 814 "data/scripts/players_house.pory"
	hidenamebox
# 815 "data/scripts/players_house.pory"
	release
# 816 "data/scripts/players_house.pory"
	end
# 817 "data/scripts/players_house.pory"

# 818 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryRegisterMom::
# 819 "data/scripts/players_house.pory"
	goto_if_set FLAG_ENABLE_MOM_MATCH_CALL, PlayersHouse_1F_EventScript_CheckGiveAmuletCoin
# 820 "data/scripts/players_house.pory"
	namebox Mama
# 821 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatAPokenav, MSGBOX_DEFAULT
# 822 "data/scripts/players_house.pory"
	closemessage
# 823 "data/scripts/players_house.pory"
	hidenamebox
# 824 "data/scripts/players_house.pory"
	delay 30
# 825 "data/scripts/players_house.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 826 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_RegisteredMom, MSGBOX_DEFAULT
# 827 "data/scripts/players_house.pory"
	waitfanfare
# 828 "data/scripts/players_house.pory"
	closemessage
# 829 "data/scripts/players_house.pory"
	delay 30
# 830 "data/scripts/players_house.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
# 831 "data/scripts/players_house.pory"
	release
# 832 "data/scripts/players_house.pory"
	end
# 833 "data/scripts/players_house.pory"

# 834 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_CheckGiveAmuletCoin::
# 835 "data/scripts/players_house.pory"
	goto_if_set FLAG_BADGE05_GET, PlayersHouse_1F_EventScript_TryGiveAmuletCoin
# 836 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
# 837 "data/scripts/players_house.pory"

# 838 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryGiveAmuletCoin::
# 839 "data/scripts/players_house.pory"
	goto_if_set FLAG_RECEIVED_AMULET_COIN, PlayersHouse_1F_EventScript_MomHealsParty
# 840 "data/scripts/players_house.pory"
	namebox Mama
# 841 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom, MSGBOX_DEFAULT
# 842 "data/scripts/players_house.pory"
	hidenamebox
# 843 "data/scripts/players_house.pory"
	giveitem ITEM_AMULET_COIN, 6
# 844 "data/scripts/players_house.pory"
	giveitem ITEM_CHERISH_BALL, 20
# 845 "data/scripts/players_house.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 846 "data/scripts/players_house.pory"
	namebox Mama
# 847 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 848 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_AMULET_COIN
# 849 "data/scripts/players_house.pory"
	hidenamebox
# 850 "data/scripts/players_house.pory"
	release
# 851 "data/scripts/players_house.pory"
	end
# 852 "data/scripts/players_house.pory"

# 853 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomHealsParty::
# 854 "data/scripts/players_house.pory"
	namebox Mama
# 855 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_YouShouldRestABit, MSGBOX_DEFAULT
# 856 "data/scripts/players_house.pory"
	hidenamebox
# 857 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_HealParty
# 858 "data/scripts/players_house.pory"
	end
# 859 "data/scripts/players_house.pory"

# 860 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SeeYouHoney::
# 861 "data/scripts/players_house.pory"
	namebox Mama
# 862 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_SeeYouHoney, MSGBOX_DEFAULT
# 863 "data/scripts/players_house.pory"
	hidenamebox
# 864 "data/scripts/players_house.pory"
	release
# 865 "data/scripts/players_house.pory"
	end
# 866 "data/scripts/players_house.pory"

# 867 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_HealParty::
# 868 "data/scripts/players_house.pory"
	closemessage
# 869 "data/scripts/players_house.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 870 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 871 "data/scripts/players_house.pory"
	namebox Mama
# 872 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TakeCareHoney, MSGBOX_DEFAULT
# 873 "data/scripts/players_house.pory"
	hidenamebox
# 874 "data/scripts/players_house.pory"
	release
# 875 "data/scripts/players_house.pory"
	end
# 876 "data/scripts/players_house.pory"

# 877 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DidYouMeetProfBirch::
# 878 "data/scripts/players_house.pory"
	namebox Mama
# 879 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DidYouMeetProfBirch, MSGBOX_DEFAULT
# 880 "data/scripts/players_house.pory"
	hidenamebox
# 881 "data/scripts/players_house.pory"
	release
# 882 "data/scripts/players_house.pory"
	end
# 883 "data/scripts/players_house.pory"

# 884 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Vigoroth1::
# 885 "data/scripts/players_house.pory"
	lock
# 886 "data/scripts/players_house.pory"
	faceplayer
# 887 "data/scripts/players_house.pory"
	waitse
# 888 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 889 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth1, MSGBOX_DEFAULT
# 890 "data/scripts/players_house.pory"
	waitmoncry
# 891 "data/scripts/players_house.pory"
	release
# 892 "data/scripts/players_house.pory"
	end
# 893 "data/scripts/players_house.pory"

# 894 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Vigoroth2::
# 895 "data/scripts/players_house.pory"
	lock
# 896 "data/scripts/players_house.pory"
	faceplayer
# 897 "data/scripts/players_house.pory"
	waitse
# 898 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 899 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth2, MSGBOX_DEFAULT
# 900 "data/scripts/players_house.pory"
	waitmoncry
# 901 "data/scripts/players_house.pory"
	release
# 902 "data/scripts/players_house.pory"
	end
# 903 "data/scripts/players_house.pory"

# 904 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymMale:
# 905 "data/scripts/players_house.pory"
	walk_down
# 906 "data/scripts/players_house.pory"
	walk_down
# 907 "data/scripts/players_house.pory"
	walk_left
# 908 "data/scripts/players_house.pory"
	walk_left
# 909 "data/scripts/players_house.pory"
	walk_left
# 910 "data/scripts/players_house.pory"
	step_end
# 911 "data/scripts/players_house.pory"

# 912 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVMale:
# 913 "data/scripts/players_house.pory"
	walk_left
# 914 "data/scripts/players_house.pory"
	step_end
# 915 "data/scripts/players_house.pory"

# 916 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale:
# 917 "data/scripts/players_house.pory"
	walk_down
# 918 "data/scripts/players_house.pory"
	walk_down
# 919 "data/scripts/players_house.pory"
	walk_right
# 920 "data/scripts/players_house.pory"
	walk_right
# 921 "data/scripts/players_house.pory"
	walk_right
# 922 "data/scripts/players_house.pory"
	step_end
# 923 "data/scripts/players_house.pory"

# 924 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVFemale:
# 925 "data/scripts/players_house.pory"
	walk_right
# 926 "data/scripts/players_house.pory"
	step_end
# 927 "data/scripts/players_house.pory"

# 928 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MovePlayerAwayFromDoor:
# 929 "data/scripts/players_house.pory"
	walk_up
# 930 "data/scripts/players_house.pory"
	step_end
# 931 "data/scripts/players_house.pory"

# 932 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV::
# 933 "data/scripts/players_house.pory"
	lockall
# 934 "data/scripts/players_house.pory"
	checkplayergender
# 935 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale
# 936 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale
# 937 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerEnterRoomMale
# 938 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerEnterRoomFemale
# 939 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_FacePlayer
# 940 "data/scripts/players_house.pory"
	waitmovement 0
# 941 "data/scripts/players_house.pory"
	playse SE_PIN
# 942 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_ExclamationMark
# 943 "data/scripts/players_house.pory"
	waitmovement 0
# 944 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_Delay48
# 945 "data/scripts/players_house.pory"
	waitmovement 0
# 946 "data/scripts/players_house.pory"
	delay 20
# 947 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadApproachPlayerMale
# 948 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadApproachPlayerFemale
# 949 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TicketFromBrineyCameForYou, MSGBOX_DEFAULT
# 950 "data/scripts/players_house.pory"
	giveitem ITEM_SS_TICKET
# 951 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_PortsInSlateportLilycove, MSGBOX_DEFAULT
# 952 "data/scripts/players_house.pory"
	closemessage
# 953 "data/scripts/players_house.pory"
	delay 20
# 954 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachDadMale
# 955 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachDadFemale
# 956 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_BetterGetBackToGym, MSGBOX_DEFAULT
# 957 "data/scripts/players_house.pory"
	closemessage
# 958 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadExitsMale
# 959 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadExitsFemale
# 960 "data/scripts/players_house.pory"
	playse SE_DOOR
# 961 "data/scripts/players_house.pory"
	removeobject VAR_0x8009
# 962 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 963 "data/scripts/players_house.pory"
	delay 30
# 964 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerMale
# 965 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerFemale
# 966 "data/scripts/players_house.pory"
	delay 20
# 967 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DadShouldStayLonger, MSGBOX_DEFAULT
# 968 "data/scripts/players_house.pory"
	closemessage
# 969 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 970 "data/scripts/players_house.pory"
	special TurnOnTVScreen
# 971 "data/scripts/players_house.pory"
	delay 60
# 972 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale
# 973 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale
# 974 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatABreakingStory, MSGBOX_DEFAULT
# 975 "data/scripts/players_house.pory"
	closemessage
# 976 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale
# 977 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale
# 978 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_LatiEmergencyNewsFlash, MSGBOX_DEFAULT
# 979 "data/scripts/players_house.pory"
	closemessage
# 980 "data/scripts/players_house.pory"
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
# 981 "data/scripts/players_house.pory"
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
# 982 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 983 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale
# 984 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale
# 985 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_WhatColorDidTheySay, MSGBOX_DEFAULT
# 986 "data/scripts/players_house.pory"
	multichoice 22, 8, MULTI_TV_LATI, TRUE
# 987 "data/scripts/players_house.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 988 "data/scripts/players_house.pory"
	special InitRoamer
# 989 "data/scripts/players_house.pory"
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
# 990 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_StillUnknownPokemon, MSGBOX_DEFAULT
# 991 "data/scripts/players_house.pory"
	closemessage
# 992 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
# 993 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
# 994 "data/scripts/players_house.pory"
	releaseall
# 995 "data/scripts/players_house.pory"
	end
# 996 "data/scripts/players_house.pory"

# 997 "data/scripts/players_house.pory"
@ Never called.
# 998 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_AirLatiBroadcast::
# 999 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 1000 "data/scripts/players_house.pory"
	return
# 1001 "data/scripts/players_house.pory"

# 1002 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale::
# 1003 "data/scripts/players_house.pory"
	setvar VAR_0x8008, MALE
# 1004 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_DAD
# 1005 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_MOM
# 1006 "data/scripts/players_house.pory"
	return
# 1007 "data/scripts/players_house.pory"

# 1008 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale::
# 1009 "data/scripts/players_house.pory"
	setvar VAR_0x8008, FEMALE
# 1010 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_DAD
# 1011 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_MOM
# 1012 "data/scripts/players_house.pory"
	return
# 1013 "data/scripts/players_house.pory"

# 1014 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerMale::
# 1015 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerMale
# 1016 "data/scripts/players_house.pory"
	waitmovement 0
# 1017 "data/scripts/players_house.pory"
	return
# 1018 "data/scripts/players_house.pory"

# 1019 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerFemale::
# 1020 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerFemale
# 1021 "data/scripts/players_house.pory"
	waitmovement 0
# 1022 "data/scripts/players_house.pory"
	return
# 1023 "data/scripts/players_house.pory"

# 1024 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadMale::
# 1025 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadMale
# 1026 "data/scripts/players_house.pory"
	waitmovement 0
# 1027 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomMale
# 1028 "data/scripts/players_house.pory"
	waitmovement 0
# 1029 "data/scripts/players_house.pory"
	return
# 1030 "data/scripts/players_house.pory"

# 1031 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadFemale::
# 1032 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadFemale
# 1033 "data/scripts/players_house.pory"
	waitmovement 0
# 1034 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomFemale
# 1035 "data/scripts/players_house.pory"
	waitmovement 0
# 1036 "data/scripts/players_house.pory"
	return
# 1037 "data/scripts/players_house.pory"

# 1038 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsMale::
# 1039 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 1040 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 1041 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsMale
# 1042 "data/scripts/players_house.pory"
	waitmovement 0
# 1043 "data/scripts/players_house.pory"
	return
# 1044 "data/scripts/players_house.pory"

# 1045 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsFemale::
# 1046 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 1047 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 1048 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsFemale
# 1049 "data/scripts/players_house.pory"
	waitmovement 0
# 1050 "data/scripts/players_house.pory"
	return
# 1051 "data/scripts/players_house.pory"

# 1052 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomMale::
# 1053 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomMale
# 1054 "data/scripts/players_house.pory"
	waitmovement 0
# 1055 "data/scripts/players_house.pory"
	return
# 1056 "data/scripts/players_house.pory"

# 1057 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomFemale::
# 1058 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomFemale
# 1059 "data/scripts/players_house.pory"
	waitmovement 0
# 1060 "data/scripts/players_house.pory"
	return
# 1061 "data/scripts/players_house.pory"

# 1062 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale::
# 1063 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale
# 1064 "data/scripts/players_house.pory"
	waitmovement 0
# 1065 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterLeft
# 1066 "data/scripts/players_house.pory"
	waitmovement 0
# 1067 "data/scripts/players_house.pory"
	return
# 1068 "data/scripts/players_house.pory"

# 1069 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale::
# 1070 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale
# 1071 "data/scripts/players_house.pory"
	waitmovement 0
# 1072 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterRight
# 1073 "data/scripts/players_house.pory"
	waitmovement 0
# 1074 "data/scripts/players_house.pory"
	return
# 1075 "data/scripts/players_house.pory"

# 1076 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerMale::
# 1077 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerMale
# 1078 "data/scripts/players_house.pory"
	waitmovement 0
# 1079 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1080 "data/scripts/players_house.pory"
	waitmovement 0
# 1081 "data/scripts/players_house.pory"
	return
# 1082 "data/scripts/players_house.pory"

# 1083 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerFemale::
# 1084 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerFemale
# 1085 "data/scripts/players_house.pory"
	waitmovement 0
# 1086 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1087 "data/scripts/players_house.pory"
	waitmovement 0
# 1088 "data/scripts/players_house.pory"
	return
# 1089 "data/scripts/players_house.pory"

# 1090 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale::
# 1091 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale
# 1092 "data/scripts/players_house.pory"
	waitmovement 0
# 1093 "data/scripts/players_house.pory"
	return
# 1094 "data/scripts/players_house.pory"

# 1095 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale::
# 1096 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale
# 1097 "data/scripts/players_house.pory"
	waitmovement 0
# 1098 "data/scripts/players_house.pory"
	return
# 1099 "data/scripts/players_house.pory"

# 1100 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale::
# 1101 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale
# 1102 "data/scripts/players_house.pory"
	waitmovement 0
# 1103 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1104 "data/scripts/players_house.pory"
	waitmovement 0
# 1105 "data/scripts/players_house.pory"
	return
# 1106 "data/scripts/players_house.pory"

# 1107 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale::
# 1108 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale
# 1109 "data/scripts/players_house.pory"
	waitmovement 0
# 1110 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1111 "data/scripts/players_house.pory"
	waitmovement 0
# 1112 "data/scripts/players_house.pory"
	return
# 1113 "data/scripts/players_house.pory"

# 1114 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerMale:
# 1115 "data/scripts/players_house.pory"
	walk_right
# 1116 "data/scripts/players_house.pory"
	walk_right
# 1117 "data/scripts/players_house.pory"
	step_end
# 1118 "data/scripts/players_house.pory"

# 1119 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerFemale:
# 1120 "data/scripts/players_house.pory"
	walk_left
# 1121 "data/scripts/players_house.pory"
	walk_left
# 1122 "data/scripts/players_house.pory"
	step_end
# 1123 "data/scripts/players_house.pory"

# 1124 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomMale:
# 1125 "data/scripts/players_house.pory"
	face_left
# 1126 "data/scripts/players_house.pory"
	step_end
# 1127 "data/scripts/players_house.pory"

# 1128 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomFemale:
# 1129 "data/scripts/players_house.pory"
	face_right
# 1130 "data/scripts/players_house.pory"
	step_end
# 1131 "data/scripts/players_house.pory"

# 1132 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsMale:
# 1133 "data/scripts/players_house.pory"
	walk_down
# 1134 "data/scripts/players_house.pory"
	walk_right
# 1135 "data/scripts/players_house.pory"
	walk_down
# 1136 "data/scripts/players_house.pory"
	delay_8
# 1137 "data/scripts/players_house.pory"
	step_end
# 1138 "data/scripts/players_house.pory"

# 1139 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsFemale:
# 1140 "data/scripts/players_house.pory"
	walk_down
# 1141 "data/scripts/players_house.pory"
	walk_left
# 1142 "data/scripts/players_house.pory"
	walk_down
# 1143 "data/scripts/players_house.pory"
	delay_8
# 1144 "data/scripts/players_house.pory"
	step_end
# 1145 "data/scripts/players_house.pory"

# 1146 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomMale:
# 1147 "data/scripts/players_house.pory"
	delay_16
# 1148 "data/scripts/players_house.pory"
	walk_down
# 1149 "data/scripts/players_house.pory"
	walk_down
# 1150 "data/scripts/players_house.pory"
	walk_down
# 1151 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 1152 "data/scripts/players_house.pory"
	step_end
# 1153 "data/scripts/players_house.pory"

# 1154 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit:
# 1155 "data/scripts/players_house.pory"
	delay_8
# 1156 "data/scripts/players_house.pory"
	delay_16
# 1157 "data/scripts/players_house.pory"
	delay_16
# 1158 "data/scripts/players_house.pory"
	walk_in_place_faster_down
# 1159 "data/scripts/players_house.pory"
	step_end
# 1160 "data/scripts/players_house.pory"

# 1161 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomFemale:
# 1162 "data/scripts/players_house.pory"
	delay_16
# 1163 "data/scripts/players_house.pory"
	walk_down
# 1164 "data/scripts/players_house.pory"
	walk_down
# 1165 "data/scripts/players_house.pory"
	walk_down
# 1166 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 1167 "data/scripts/players_house.pory"
	step_end
# 1168 "data/scripts/players_house.pory"

# 1169 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale:
# 1170 "data/scripts/players_house.pory"
	walk_up
# 1171 "data/scripts/players_house.pory"
	walk_left
# 1172 "data/scripts/players_house.pory"
	walk_left
# 1173 "data/scripts/players_house.pory"
	walk_left
# 1174 "data/scripts/players_house.pory"
	walk_left
# 1175 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 1176 "data/scripts/players_house.pory"
	step_end
# 1177 "data/scripts/players_house.pory"

# 1178 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale:
# 1179 "data/scripts/players_house.pory"
	walk_up
# 1180 "data/scripts/players_house.pory"
	walk_right
# 1181 "data/scripts/players_house.pory"
	walk_right
# 1182 "data/scripts/players_house.pory"
	walk_right
# 1183 "data/scripts/players_house.pory"
	walk_right
# 1184 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 1185 "data/scripts/players_house.pory"
	step_end
# 1186 "data/scripts/players_house.pory"

# 1187 "data/scripts/players_house.pory"
EventScript_RunningShoesManual::
# 1188 "data/scripts/players_house.pory"
	lockall
# 1189 "data/scripts/players_house.pory"
	call EventScript_RunningShoesManualTranslated
# 1190 "data/scripts/players_house.pory"
	releaseall
# 1191 "data/scripts/players_house.pory"
	end

EventScript_RunningShoesManualTranslated_Text_0:
# 144 "data/scripts/players_house.pory"
	.string "A Trainer's Guide!\n"
	.string "“First Tip: In each Pokémon Center,\l"
	.string "there's Self-Trading machines! And\l"
	.string "you might find special people, too!\p"
	.string "Interact with everything and\n"
	.string "everyone!”\p"
	.string "Keep reading?$"

EventScript_RunningShoesManualTranslated_Text_1:
# 148 "data/scripts/players_house.pory"
	.string "“Second Tip: You can nickname any\n"
	.string "Pokémon from the Party Menu, but you\l"
	.string "can also Remind it some Moves.”\p"
	.string "Keep reading?$"

EventScript_RunningShoesManualTranslated_Text_2:
# 150 "data/scripts/players_house.pory"
	.string "“Third Tip: You can Run Away from a Wild\n"
	.string "encounter by pressing R, and throw a\l"
	.string "Ball with L!\p"
	.string "That's the last useful tip.$"

EventScript_RunningShoesManualTranslated_Text_3:
# 156 "data/scripts/players_house.pory"
	.string "Too much reading for a day.$"

EventScript_YoureNewNeighbor_Translated_Text_0:
# 165 "data/scripts/players_house.pory"
	.string "chico$"

EventScript_YoureNewNeighbor_Translated_Text_1:
# 166 "data/scripts/players_house.pory"
	.string "chica$"

EventScript_YoureNewNeighbor_Translated_Text_2:
# 167 "data/scripts/players_house.pory"
	.string "chique$"

EventScript_YoureNewNeighbor_Translated_Text_3:
# 173 "data/scripts/players_house.pory"
	.string "AH! WHO ARE YOU!?\p"
	.string "Ah, you're the new kid, right?$"

RivalsHouse_1F_Text_MayWhoAreYou_Translated_Text_0:
# 239 "data/scripts/players_house.pory"
	.string "Oh, you're… {PLAYER}, What're you\n"
	.string "doing in my house?\p"
	.string "… … … … … … … … … … … …\p"
	.string "Mhhh… Dad told me you'd come,\n"
	.string "{PLAYER}, and told me to be friends!\p"
	.string "But we just met. Ridiculous, right?\p"
	.string "I don't have time anyway, {PLAYER},\n"
	.string "hope you understand.$"

PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_0:
# 259 "data/scripts/players_house.pory"
	.string "Isn't this house cute?$"

PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_1:
# 264 "data/scripts/players_house.pory"
	.string "While Pokémon Movers finishes setting\n"
	.string "up the house, why don't you go set up\l"
	.string "the clock Dad bought for you?$"

PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated_Text_0:
# 282 "data/scripts/players_house.pory"
	.string "Go set up the clock.$"

PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom_Text_0:
# 299 "data/scripts/players_house.pory"
	.string "Do you like your new room?\n"
	.string "Don't forget your Potion in the PC.$"

PlayersHouse_1F_EventScript_MaybeDadWillBeOn_Text_0:
# 311 "data/scripts/players_house.pory"
	.string "Come, quick! Dad's on TV!$"

PlayersHouse_1F_EventScript_ItsOverWeMissedHim_Text_0:
# 323 "data/scripts/players_house.pory"
	.string "It's over...\p"
	.string "Well, Professor told me to ask you...\p"
	.string "Which region has your favorite\n"
	.string "Starters?$"

PlayersHouse_1F_EventScript_StarterSet_Translated_11_Text_0:
# 335 "data/scripts/players_house.pory"
	.string "OK, I'll let him know soon.$"

PlayersHouse_1F_EventScript_StarterSet_13_Text_0:
# 347 "data/scripts/players_house.pory"
	.string "So you want the ones hardest to train?$"

PlayersHouse_1F_EventScript_StarterSet_13_Text_1:
# 358 "data/scripts/players_house.pory"
	.string "Which region has your fave Starters?$"

PlayersHouse_1F_Text_YouShouldRestABit::
# 1 "data/scripts/players_house.pory"
	.string "How's everything going, sweetie?\n"
	.string "You seem tired.\p"
	.string "Take a break and eat something, my\n"
	.string "baby.$"

PlayersHouse_1F_Text_TakeCareHoney::
# 16 "data/scripts/players_house.pory"
	.string "Take care!$"

PlayersHouse_1F_Text_IsntItNiceInHere::
# 27 "data/scripts/players_house.pory"
	.string "What a nice house.$"

PlayersHouse_1F_Text_MoversPokemonGoSetClock::
# 38 "data/scripts/players_house.pory"
	.string "Pokémon Movers does ALL THE\n"
	.string "CLEANING.\p"
	.string "Now, go set up the clock Dad bought you.$"

PlayersHouse_1F_Text_ArentYouInterestedInRoom::
# 49 "data/scripts/players_house.pory"
	.string "Didn't I tell you to do something?$"

PlayersHouse_1F_Text_GoSetTheClock::
# 61 "data/scripts/players_house.pory"
	.string "{PLAYER}.\p"
	.string "You're not leaving that room until the\n"
	.string "clock is set up.$"

PlayersHouse_1F_Text_OhComeQuickly::
# 75 "data/scripts/players_house.pory"
	.string "{PLAYER}, {PLAYER}!\n"
	.string "LOOK!$"

PlayersHouse_1F_Text_MaybeDadWillBeOn::
# 89 "data/scripts/players_house.pory"
	.string "IT'S AN INTERVIEW AT PETALBURG GYM!$"

PlayersHouse_1F_Text_ReportFromPetalburgGym::
# 100 "data/scripts/players_house.pory"
	.string "And well, although blushing, that was\n"
	.string "Norman, our great Gym Leader!\p"
	.string "Now we'll interview Devon's latest\n"
	.string "donator, Mr. -BZZT-$"

PlayersHouse_1F_EventScript_StarterSet_Text_8::
# 115 "data/scripts/players_house.pory"
	.string "None of these$"
