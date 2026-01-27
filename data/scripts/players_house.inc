PlayersHouse_1F_EventScript_WatchGymBroadcast::
# 3 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 4 "data/scripts/players_house.pory"
	waitmovement 0
# 5 "data/scripts/players_house.pory"
	setspeaker Entrevistador
# 6 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ReportFromPetalburgGym, MSGBOX_DEFAULT
# 7 "data/scripts/players_house.pory"
	fadedefaultbgm
# 8 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 9 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_HOME
# 10 "data/scripts/players_house.pory"
	delay 35
	return


PlayersHouse_1F_EventScript_StarterSet::
# 17 "data/scripts/players_house.pory"
	dynmultichoice 25, 4, TRUE, 4, 2, DYN_MULTICHOICE_CB_NONE, PlayersHouse_1F_EventScript_StarterSet_Text_0, PlayersHouse_1F_EventScript_StarterSet_Text_1, PlayersHouse_1F_EventScript_StarterSet_Text_2, PlayersHouse_1F_EventScript_StarterSet_Text_3, PlayersHouse_1F_EventScript_StarterSet_Text_4, PlayersHouse_1F_EventScript_StarterSet_Text_5, PlayersHouse_1F_EventScript_StarterSet_Text_6, PlayersHouse_1F_EventScript_StarterSet_Text_7, PlayersHouse_1F_EventScript_StarterSet_Text_8
# 23 "data/scripts/players_house.pory"
	addvar VAR_RESULT, 1
# 24 "data/scripts/players_house.pory"
	compare VAR_RESULT, 9
	goto_if_eq PlayersHouse_1F_EventScript_StarterSet_2
PlayersHouse_1F_EventScript_StarterSet_1:
# 27 "data/scripts/players_house.pory"
	copyvar VAR_STARTER_REGION, VAR_RESULT
# 28 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
	return

PlayersHouse_1F_EventScript_StarterSet_2:
# 25 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterWantHardest
	goto PlayersHouse_1F_EventScript_StarterSet_1


PlayersHouse_1F_EventScript_StarterSetEnd::
# 32 "data/scripts/players_house.pory"
	setspeaker Mama
# 33 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_StarterSet_TellProfessor
# 34 "data/scripts/players_house.pory"
	closemessage
	return


PlayersHouse_1F_EventScript_StarterChoseHardest::
# 41 "data/scripts/players_house.pory"
	setvar VAR_STARTER_REGION, 9
# 42 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSetEnd
	return


EventScript_RunningShoesManualTranslated::
# 152 "data/scripts/players_house.pory"
	msgbox EventScript_RunningShoesManualTranslated_Text_0, MSGBOX_YESNO
# 155 "data/scripts/players_house.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_RunningShoesManualTranslated_2
EventScript_RunningShoesManualTranslated_1:
# 164 "data/scripts/players_house.pory"
	msgbox EventScript_RunningShoesManualTranslated_Text_3
# 182 "data/scripts/players_house.pory"
	releaseall
	end

EventScript_RunningShoesManualTranslated_2:
# 156 "data/scripts/players_house.pory"
	msgbox EventScript_RunningShoesManualTranslated_Text_1, MSGBOX_YESNO
# 157 "data/scripts/players_house.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_RunningShoesManualTranslated_4
	goto EventScript_RunningShoesManualTranslated_1

EventScript_RunningShoesManualTranslated_4:
# 158 "data/scripts/players_house.pory"
	msgbox EventScript_RunningShoesManualTranslated_Text_2
# 159 "data/scripts/players_house.pory"
	releaseall
	end


EventScript_YoureNewNeighbor_Translated::
# 188 "data/scripts/players_house.pory"
	bufferstring STR_VAR_1, EventScript_YoureNewNeighbor_Translated_Text_0
# 189 "data/scripts/players_house.pory"
	bufferstring STR_VAR_2, EventScript_YoureNewNeighbor_Translated_Text_1
# 190 "data/scripts/players_house.pory"
	bufferstring STR_VAR_3, EventScript_YoureNewNeighbor_Translated_Text_2
# 193 "data/scripts/players_house.pory"
	msgbox EventScript_YoureNewNeighbor_Translated_Text_3
# 199 "data/scripts/players_house.pory"
	call EventScript_MeetRival
	return


EventScript_MeetRival::
# 204 "data/scripts/players_house.pory"
	playse SE_EXIT
# 205 "data/scripts/players_house.pory"
	delay 10
# 206 "data/scripts/players_house.pory"
	addobject 7
# 207 "data/scripts/players_house.pory"
	delay 30
# 208 "data/scripts/players_house.pory"
	playse SE_PIN
# 209 "data/scripts/players_house.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 210 "data/scripts/players_house.pory"
	waitmovement 0
# 211 "data/scripts/players_house.pory"
	applymovement 7, Common_Movement_FacePlayer
# 212 "data/scripts/players_house.pory"
	checkplayergender
# 213 "data/scripts/players_house.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq EventScript_MeetRival_2
# 231 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 232 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 233 "data/scripts/players_house.pory"
	applymovement 7, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer
# 234 "data/scripts/players_house.pory"
	waitmovement 0
# 235 "data/scripts/players_house.pory"
	setspeaker Rival
# 236 "data/scripts/players_house.pory"
	call RivalsHouse_1F_Text_MayWhoAreYou_Translated
# 237 "data/scripts/players_house.pory"
	closemessage
# 238 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 239 "data/scripts/players_house.pory"
	waitmovement 0
# 240 "data/scripts/players_house.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs
# 241 "data/scripts/players_house.pory"
	playse SE_EXIT
# 242 "data/scripts/players_house.pory"
	removeobject 7
# 243 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 244 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 245 "data/scripts/players_house.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
EventScript_MeetRival_1:
# 247 "data/scripts/players_house.pory"
	delay 30
# 248 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 249 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 250 "data/scripts/players_house.pory"
	savebgm MUS_DUMMY
# 251 "data/scripts/players_house.pory"
	fadedefaultbgm
	return

EventScript_MeetRival_2:
# 214 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 215 "data/scripts/players_house.pory"
	waitmovement 0
# 216 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 217 "data/scripts/players_house.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer
# 218 "data/scripts/players_house.pory"
	setspeaker Rival
# 219 "data/scripts/players_house.pory"
	call RivalsHouse_1F_Text_MayWhoAreYou_Translated
# 220 "data/scripts/players_house.pory"
	closemessage
# 221 "data/scripts/players_house.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs
# 222 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 223 "data/scripts/players_house.pory"
	waitmovement 0
# 224 "data/scripts/players_house.pory"
	playse SE_EXIT
# 225 "data/scripts/players_house.pory"
	removeobject 7
# 226 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 227 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 228 "data/scripts/players_house.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	goto EventScript_MeetRival_1


RivalsHouse_1F_Text_MayWhoAreYou_Translated::
# 257 "data/scripts/players_house.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou_Translated_Text_0
	return


PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation::
# 276 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_0
# 277 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 278 "data/scripts/players_house.pory"
	waitmovement 0
# 279 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8005, MALE, PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale
# 280 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8005, FEMALE, PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale
# 281 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_1
# 292 "data/scripts/players_house.pory"
	closemessage
# 294 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
# 295 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerWalkIn
# 296 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 297 "data/scripts/players_house.pory"
	waitmovement 0
	return


PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated::
# 304 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated_Text_0
# 310 "data/scripts/players_house.pory"
	closemessage
# 312 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 313 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MovePlayerAwayFromDoor
# 314 "data/scripts/players_house.pory"
	waitmovement 0
	return


PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom::
# 321 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom_Text_0
	return


PlayersHouse_1F_EventScript_MaybeDadWillBeOn::
# 333 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MaybeDadWillBeOn_Text_0
	return


PlayersHouse_1F_EventScript_ItsOverWeMissedHim::
# 345 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_ItsOverWeMissedHim_Text_0
	return


PlayersHouse_1F_EventScript_StarterSet_TellProfessor::
# 357 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_StarterSet_TellProfessor_Text_0
	return


PlayersHouse_1F_EventScript_StarterWantHardest::
# 369 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_StarterWantHardest_Text_0, MSGBOX_YESNO
# 375 "data/scripts/players_house.pory"
	compare VAR_RESULT, 1
# 376 "data/scripts/players_house.pory"
	goto_if_eq PlayersHouse_1F_EventScript_StarterChoseHardest
# 377 "data/scripts/players_house.pory"
	setspeaker Mama
# 380 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_StarterWantHardest_Text_1
# 387 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSet
	return


# 392 "data/scripts/players_house.pory"

# 393 "data/scripts/players_house.pory"
@ Local IDs are the same for both players houses
# 394 "data/scripts/players_house.pory"
.set LOCALID_MOM, 1
# 395 "data/scripts/players_house.pory"
.set LOCALID_DAD, 5
# 396 "data/scripts/players_house.pory"
.set LOCALID_MOM_2F, 14
# 397 "data/scripts/players_house.pory"

# 398 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet::
# 399 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
# 400 "data/scripts/players_house.pory"
	return
# 401 "data/scripts/players_house.pory"

# 402 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_EnterHouseMovingIn::
# 403 "data/scripts/players_house.pory"
	setspeaker Mama
# 404 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation
# 405 "data/scripts/players_house.pory"
	releaseall
# 406 "data/scripts/players_house.pory"
	end
# 407 "data/scripts/players_house.pory"

# 408 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale::
# 409 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 410 "data/scripts/players_house.pory"
	waitmovement 0
# 411 "data/scripts/players_house.pory"
	return
# 412 "data/scripts/players_house.pory"

# 413 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale::
# 414 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 415 "data/scripts/players_house.pory"
	waitmovement 0
# 416 "data/scripts/players_house.pory"
	return
# 417 "data/scripts/players_house.pory"

# 418 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerWalkIn:
# 419 "data/scripts/players_house.pory"
	walk_up
# 420 "data/scripts/players_house.pory"
	step_end
# 421 "data/scripts/players_house.pory"

# 422 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomGoSeeRoom::
# 423 "data/scripts/players_house.pory"
	setspeaker Mama	
# 424 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated
# 425 "data/scripts/players_house.pory"
	releaseall
# 426 "data/scripts/players_house.pory"
	end
# 427 "data/scripts/players_house.pory"

# 428 "data/scripts/players_house.pory"
LittlerootTown_BrendansHouse_2F_EventScript_WallClock::
# 429 "data/scripts/players_house.pory"
	lockall
# 430 "data/scripts/players_house.pory"
	setvar VAR_0x8004, MALE
# 431 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
# 432 "data/scripts/players_house.pory"
	end
# 433 "data/scripts/players_house.pory"

# 434 "data/scripts/players_house.pory"
LittlerootTown_MaysHouse_2F_EventScript_WallClock::
# 435 "data/scripts/players_house.pory"
	lockall
# 436 "data/scripts/players_house.pory"
	setvar VAR_0x8004, FEMALE
# 437 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
# 438 "data/scripts/players_house.pory"
	end
# 439 "data/scripts/players_house.pory"

# 440 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_WallClock::
# 441 "data/scripts/players_house.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, PlayersHouse_2F_EventScript_CheckWallClock
# 442 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_ChoseClock
# 443 "data/scripts/players_house.pory"
	end
# 444 "data/scripts/players_house.pory"

# 445 "data/scripts/players_house.pory"
PlayersHouse_1F_Text_ChooseTimeThing:
# 446 "data/scripts/players_house.pory"
	.string "¡AVISO! LEE ESTO CON ATENCIÓN.\n"
# 447 "data/scripts/players_house.pory"
	.string "POR FAVOR, SELECCIONAR SI DESEA\l"
# 448 "data/scripts/players_house.pory"
	.string "CONTINUAR USANDO EL RELOJ DEL\l"
# 449 "data/scripts/players_house.pory"
	.string "JUEGO, O EL RELOJ REAL DE SU\l"
# 450 "data/scripts/players_house.pory"
	.string "DISPOSITIVO.\p"
# 451 "data/scripts/players_house.pory"
	.string "Tenga en cuenta que esta\n"
# 452 "data/scripts/players_house.pory"
	.string "acción no se puede cambiar.$"
# 453 "data/scripts/players_house.pory"
	
# 454 "data/scripts/players_house.pory"
PlayersHouse_1F_Text_ChooseClock:
# 455 "data/scripts/players_house.pory"
	.string "¿Está segur{OA} que quiere\n"
# 456 "data/scripts/players_house.pory"
	.string "usar el reloj falso del\l"
# 457 "data/scripts/players_house.pory"
	.string "juego?$"
# 458 "data/scripts/players_house.pory"
PlayersHouse_1F_Text_ChooseRTC:
# 459 "data/scripts/players_house.pory"
	.string "¿Está segur{OA} que quiere\n"
# 460 "data/scripts/players_house.pory"
	.string "usar el reloj real de\l"
# 461 "data/scripts/players_house.pory"
	.string "su dispositivo?$"
# 462 "data/scripts/players_house.pory"

# 463 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_ChoseClock::
# 464 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 465 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 466 "data/scripts/players_house.pory"
	delay 30
# 467 "data/scripts/players_house.pory"
	setflag FLAG_SET_WALL_CLOCK
# 468 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 469 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 470 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 471 "data/scripts/players_house.pory"
	checkplayergender
# 472 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_2F_EventScript_MomComesUpstairsMale
# 473 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_2F_EventScript_MomComesUpstairsFemale
# 474 "data/scripts/players_house.pory"
	playse SE_EXIT
# 475 "data/scripts/players_house.pory"
	removeobject VAR_0x8008
# 476 "data/scripts/players_house.pory"
	releaseall
# 477 "data/scripts/players_house.pory"
	end
# 478 "data/scripts/players_house.pory"

# 479 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_ChoseRTC::
# 480 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ChooseRTC, MSGBOX_YESNO
# 481 "data/scripts/players_house.pory"
	compare VAR_RESULT, 1
# 482 "data/scripts/players_house.pory"
	goto_if_ne PlayersHouse_2F_EventScript_WallClock
# 483 "data/scripts/players_house.pory"
	closemessage
# 484 "data/scripts/players_house.pory"
	delay 30
# 485 "data/scripts/players_house.pory"
	setflag FLAG_SET_WALL_CLOCK
# 486 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 487 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 488 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 489 "data/scripts/players_house.pory"
	checkplayergender
# 490 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_2F_EventScript_MomComesUpstairsMale
# 491 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_2F_EventScript_MomComesUpstairsFemale
# 492 "data/scripts/players_house.pory"
	playse SE_EXIT
# 493 "data/scripts/players_house.pory"
	removeobject VAR_0x8008
# 494 "data/scripts/players_house.pory"
	releaseall
# 495 "data/scripts/players_house.pory"
	end
# 496 "data/scripts/players_house.pory"

# 497 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_MomComesUpstairsMale::
# 498 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_MOM_2F
# 499 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 500 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersMale
# 501 "data/scripts/players_house.pory"
	waitmovement 0
# 502 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 503 "data/scripts/players_house.pory"
	waitmovement 0
# 504 "data/scripts/players_house.pory"
	setspeaker Mama
# 505 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom
# 506 "data/scripts/players_house.pory"
	closemessage
# 507 "data/scripts/players_house.pory"
	
# 508 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsMale
# 509 "data/scripts/players_house.pory"
	waitmovement 0
# 510 "data/scripts/players_house.pory"
	return
# 511 "data/scripts/players_house.pory"

# 512 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_MomComesUpstairsFemale::
# 513 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_MOM_2F
# 514 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 515 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersFemale
# 516 "data/scripts/players_house.pory"
	waitmovement 0
# 517 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 518 "data/scripts/players_house.pory"
	waitmovement 0
# 519 "data/scripts/players_house.pory"
	setspeaker Mama
# 520 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom
# 521 "data/scripts/players_house.pory"
	closemessage
# 522 "data/scripts/players_house.pory"
	
# 523 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsFemale
# 524 "data/scripts/players_house.pory"
	waitmovement 0
# 525 "data/scripts/players_house.pory"
	return
# 526 "data/scripts/players_house.pory"

# 527 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_CheckWallClock::
# 528 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 529 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 530 "data/scripts/players_house.pory"
	special Special_ViewWallClock
# 531 "data/scripts/players_house.pory"
	waitstate
# 532 "data/scripts/players_house.pory"
	releaseall
# 533 "data/scripts/players_house.pory"
	end
# 534 "data/scripts/players_house.pory"

# 535 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_SetWallClock::
# 536 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 537 "data/scripts/players_house.pory"
	special SetHourMinutes
# 538 "data/scripts/players_house.pory"
	special StartWallClock
# 539 "data/scripts/players_house.pory"
	waitstate
# 540 "data/scripts/players_house.pory"
	return
# 541 "data/scripts/players_house.pory"

# 542 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomEntersMale:
# 543 "data/scripts/players_house.pory"
	delay_8
# 544 "data/scripts/players_house.pory"
	walk_down
# 545 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 546 "data/scripts/players_house.pory"
	delay_16
# 547 "data/scripts/players_house.pory"
	delay_8
# 548 "data/scripts/players_house.pory"
	walk_left
# 549 "data/scripts/players_house.pory"
	step_end
# 550 "data/scripts/players_house.pory"

# 551 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomExitsMale:
# 552 "data/scripts/players_house.pory"
	walk_right
# 553 "data/scripts/players_house.pory"
	walk_up
# 554 "data/scripts/players_house.pory"
	delay_8
# 555 "data/scripts/players_house.pory"
	step_end
# 556 "data/scripts/players_house.pory"

# 557 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomEntersFemale:
# 558 "data/scripts/players_house.pory"
	delay_8
# 559 "data/scripts/players_house.pory"
	walk_down
# 560 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 561 "data/scripts/players_house.pory"
	delay_16
# 562 "data/scripts/players_house.pory"
	delay_8
# 563 "data/scripts/players_house.pory"
	walk_right
# 564 "data/scripts/players_house.pory"
	step_end
# 565 "data/scripts/players_house.pory"

# 566 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomExitsFemale:
# 567 "data/scripts/players_house.pory"
	walk_left
# 568 "data/scripts/players_house.pory"
	walk_up
# 569 "data/scripts/players_house.pory"
	delay_8
# 570 "data/scripts/players_house.pory"
	step_end
# 571 "data/scripts/players_house.pory"

# 572 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetWatchedBroadcast::
# 573 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 574 "data/scripts/players_house.pory"
	releaseall
# 575 "data/scripts/players_house.pory"
	end
# 576 "data/scripts/players_house.pory"

# 577 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportMale::
# 578 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterRight
# 579 "data/scripts/players_house.pory"
	waitmovement 0
# 580 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 581 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymMale
# 582 "data/scripts/players_house.pory"
	waitmovement 0
# 583 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 584 "data/scripts/players_house.pory"
	setspeaker Mama
# 585 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MaybeDadWillBeOn
# 586 "data/scripts/players_house.pory"
	closemessage
# 587 "data/scripts/players_house.pory"
	
# 588 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale
# 589 "data/scripts/players_house.pory"
	waitmovement 0
# 590 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVMale
# 591 "data/scripts/players_house.pory"
	waitmovement 0
# 592 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 593 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 594 "data/scripts/players_house.pory"
	waitmovement 0
# 595 "data/scripts/players_house.pory"
	setspeaker Mama
# 596 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_ItsOverWeMissedHim
# 597 "data/scripts/players_house.pory"
	
# 598 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_StarterSet
# 599 "data/scripts/players_house.pory"
	
# 600 "data/scripts/players_house.pory"
	closemessage
# 601 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 602 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatMale
# 603 "data/scripts/players_house.pory"
	waitmovement 0
# 604 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
# 605 "data/scripts/players_house.pory"
	end
# 606 "data/scripts/players_house.pory"

# 607 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportFemale::
# 608 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterLeft
# 609 "data/scripts/players_house.pory"
	waitmovement 0
# 610 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 611 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale
# 612 "data/scripts/players_house.pory"
	waitmovement 0
# 613 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 614 "data/scripts/players_house.pory"
	setspeaker Mama
# 615 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MaybeDadWillBeOn
# 616 "data/scripts/players_house.pory"
	closemessage
# 617 "data/scripts/players_house.pory"
	
# 618 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale
# 619 "data/scripts/players_house.pory"
	waitmovement 0
# 620 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVFemale
# 621 "data/scripts/players_house.pory"
	waitmovement 0
# 622 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 623 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 624 "data/scripts/players_house.pory"
	waitmovement 0
# 625 "data/scripts/players_house.pory"
	setspeaker Mama
# 626 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_ItsOverWeMissedHim
# 627 "data/scripts/players_house.pory"
	
# 628 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_StarterSet
# 629 "data/scripts/players_house.pory"
	
# 630 "data/scripts/players_house.pory"
	closemessage
# 631 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 632 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatFemale
# 633 "data/scripts/players_house.pory"
	waitmovement 0
# 634 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
# 635 "data/scripts/players_house.pory"
	end
# 636 "data/scripts/players_house.pory"

# 637 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticeGymBroadcast::
# 638 "data/scripts/players_house.pory"
	playse SE_PIN
# 639 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_ExclamationMark
# 640 "data/scripts/players_house.pory"
	waitmovement 0
# 641 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_Delay48
# 642 "data/scripts/players_house.pory"
	waitmovement 0
# 643 "data/scripts/players_house.pory"
	setspeaker Mama
# 644 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_OhComeQuickly, MSGBOX_DEFAULT
# 645 "data/scripts/players_house.pory"
	closemessage
# 646 "data/scripts/players_house.pory"
	
# 647 "data/scripts/players_house.pory"
	return
# 648 "data/scripts/players_house.pory"

# 649 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadMale:
# 650 "data/scripts/players_house.pory"
	walk_up
# 651 "data/scripts/players_house.pory"
	walk_right
# 652 "data/scripts/players_house.pory"
	walk_right
# 653 "data/scripts/players_house.pory"
	walk_right
# 654 "data/scripts/players_house.pory"
	walk_right
# 655 "data/scripts/players_house.pory"
	walk_down
# 656 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 657 "data/scripts/players_house.pory"
	step_end
# 658 "data/scripts/players_house.pory"

# 659 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadFemale:
# 660 "data/scripts/players_house.pory"
	walk_up
# 661 "data/scripts/players_house.pory"
	walk_left
# 662 "data/scripts/players_house.pory"
	walk_left
# 663 "data/scripts/players_house.pory"
	walk_left
# 664 "data/scripts/players_house.pory"
	walk_left
# 665 "data/scripts/players_house.pory"
	walk_down
# 666 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 667 "data/scripts/players_house.pory"
	step_end
# 668 "data/scripts/players_house.pory"

# 669 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerMale:
# 670 "data/scripts/players_house.pory"
	walk_right
# 671 "data/scripts/players_house.pory"
	step_end
# 672 "data/scripts/players_house.pory"

# 673 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerFemale:
# 674 "data/scripts/players_house.pory"
	walk_left
# 675 "data/scripts/players_house.pory"
	step_end
# 676 "data/scripts/players_house.pory"

# 677 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale:
# 678 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 679 "data/scripts/players_house.pory"
	delay_16
# 680 "data/scripts/players_house.pory"
	delay_16
# 681 "data/scripts/players_house.pory"
	delay_16
# 682 "data/scripts/players_house.pory"
	delay_16
# 683 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 684 "data/scripts/players_house.pory"
	delay_16
# 685 "data/scripts/players_house.pory"
	delay_16
# 686 "data/scripts/players_house.pory"
	step_end
# 687 "data/scripts/players_house.pory"

# 688 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale:
# 689 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 690 "data/scripts/players_house.pory"
	delay_16
# 691 "data/scripts/players_house.pory"
	delay_16
# 692 "data/scripts/players_house.pory"
	delay_16
# 693 "data/scripts/players_house.pory"
	delay_16
# 694 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 695 "data/scripts/players_house.pory"
	delay_16
# 696 "data/scripts/players_house.pory"
	delay_16
# 697 "data/scripts/players_house.pory"
	step_end
# 698 "data/scripts/players_house.pory"

# 699 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale:
# 700 "data/scripts/players_house.pory"
	walk_up
# 701 "data/scripts/players_house.pory"
	walk_left
# 702 "data/scripts/players_house.pory"
	walk_left
# 703 "data/scripts/players_house.pory"
	step_end
# 704 "data/scripts/players_house.pory"

# 705 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale:
# 706 "data/scripts/players_house.pory"
	walk_up
# 707 "data/scripts/players_house.pory"
	walk_right
# 708 "data/scripts/players_house.pory"
	walk_right
# 709 "data/scripts/players_house.pory"
	step_end
# 710 "data/scripts/players_house.pory"

# 711 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale:
# 712 "data/scripts/players_house.pory"
	walk_left
# 713 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 714 "data/scripts/players_house.pory"
	step_end
# 715 "data/scripts/players_house.pory"

# 716 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale:
# 717 "data/scripts/players_house.pory"
	walk_right
# 718 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 719 "data/scripts/players_house.pory"
	step_end
# 720 "data/scripts/players_house.pory"

# 721 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatMale:
# 722 "data/scripts/players_house.pory"
	walk_right
# 723 "data/scripts/players_house.pory"
	walk_down
# 724 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 725 "data/scripts/players_house.pory"
	step_end
# 726 "data/scripts/players_house.pory"

# 727 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatFemale:
# 728 "data/scripts/players_house.pory"
	walk_left
# 729 "data/scripts/players_house.pory"
	walk_down
# 730 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 731 "data/scripts/players_house.pory"
	step_end
# 732 "data/scripts/players_house.pory"

# 733 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Mom::
# 734 "data/scripts/players_house.pory"
	lock
# 735 "data/scripts/players_house.pory"
	faceplayer
# 736 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, PlayersHouse_1F_EventScript_DontPushYourselfTooHard
# 737 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, PlayersHouse_1F_EventScript_DontPushYourselfTooHard
# 738 "data/scripts/players_house.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PlayersHouse_1F_EventScript_TryRegisterMom
# 739 "data/scripts/players_house.pory"
	goto_if_set FLAG_RESCUED_BIRCH, PlayersHouse_1F_EventScript_MomHealsParty
# 740 "data/scripts/players_house.pory"
	goto_if_eq VAR_TEMP_1, 1, PlayersHouse_1F_EventScript_SeeYouHoney
# 741 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 7, PlayersHouse_1F_EventScript_DidYouMeetProfBirch
# 742 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
# 743 "data/scripts/players_house.pory"
	release
# 744 "data/scripts/players_house.pory"
	end
# 745 "data/scripts/players_house.pory"

# 746 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DontPushYourselfTooHard::
# 747 "data/scripts/players_house.pory"
	setspeaker Mama
# 748 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 749 "data/scripts/players_house.pory"
	
# 750 "data/scripts/players_house.pory"
	release
# 751 "data/scripts/players_house.pory"
	end
# 752 "data/scripts/players_house.pory"

# 753 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryRegisterMom::
# 754 "data/scripts/players_house.pory"
	goto_if_set FLAG_ENABLE_MOM_MATCH_CALL, PlayersHouse_1F_EventScript_CheckGiveAmuletCoin
# 755 "data/scripts/players_house.pory"
	setspeaker Mama
# 756 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatAPokenav, MSGBOX_DEFAULT
# 757 "data/scripts/players_house.pory"
	closemessage
# 758 "data/scripts/players_house.pory"
	
# 759 "data/scripts/players_house.pory"
	delay 30
# 760 "data/scripts/players_house.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 761 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_RegisteredMom, MSGBOX_DEFAULT
# 762 "data/scripts/players_house.pory"
	waitfanfare
# 763 "data/scripts/players_house.pory"
	closemessage
# 764 "data/scripts/players_house.pory"
	delay 30
# 765 "data/scripts/players_house.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
# 766 "data/scripts/players_house.pory"
	release
# 767 "data/scripts/players_house.pory"
	end
# 768 "data/scripts/players_house.pory"

# 769 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_CheckGiveAmuletCoin::
# 770 "data/scripts/players_house.pory"
	goto_if_set FLAG_BADGE05_GET, PlayersHouse_1F_EventScript_TryGiveAmuletCoin
# 771 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
# 772 "data/scripts/players_house.pory"

# 773 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryGiveAmuletCoin::
# 774 "data/scripts/players_house.pory"
	goto_if_set FLAG_RECEIVED_AMULET_COIN, PlayersHouse_1F_EventScript_MomHealsParty
# 775 "data/scripts/players_house.pory"
	setspeaker Mama
# 776 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom, MSGBOX_DEFAULT
# 777 "data/scripts/players_house.pory"
	
# 778 "data/scripts/players_house.pory"
	giveitem ITEM_AMULET_COIN, 6
# 779 "data/scripts/players_house.pory"
	giveitem ITEM_CHERISH_BALL, 20
# 780 "data/scripts/players_house.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 781 "data/scripts/players_house.pory"
	setspeaker Mama
# 782 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 783 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_AMULET_COIN
# 784 "data/scripts/players_house.pory"
	
# 785 "data/scripts/players_house.pory"
	release
# 786 "data/scripts/players_house.pory"
	end
# 787 "data/scripts/players_house.pory"

# 788 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomHealsParty::
# 789 "data/scripts/players_house.pory"
	setspeaker Mama
# 790 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_YouShouldRestABit, MSGBOX_DEFAULT
# 791 "data/scripts/players_house.pory"
	
# 792 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_HealParty
# 793 "data/scripts/players_house.pory"
	end
# 794 "data/scripts/players_house.pory"

# 795 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SeeYouHoney::
# 796 "data/scripts/players_house.pory"
	setspeaker Mama
# 797 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_SeeYouHoney, MSGBOX_DEFAULT
# 798 "data/scripts/players_house.pory"
	
# 799 "data/scripts/players_house.pory"
	release
# 800 "data/scripts/players_house.pory"
	end
# 801 "data/scripts/players_house.pory"

# 802 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_HealParty::
# 803 "data/scripts/players_house.pory"
	closemessage
# 804 "data/scripts/players_house.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 805 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 806 "data/scripts/players_house.pory"
	setspeaker Mama
# 807 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TakeCareHoney, MSGBOX_DEFAULT
# 808 "data/scripts/players_house.pory"
	
# 809 "data/scripts/players_house.pory"
	release
# 810 "data/scripts/players_house.pory"
	end
# 811 "data/scripts/players_house.pory"

# 812 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DidYouMeetProfBirch::
# 813 "data/scripts/players_house.pory"
	setspeaker Mama
# 814 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DidYouMeetProfBirch, MSGBOX_DEFAULT
# 815 "data/scripts/players_house.pory"
	
# 816 "data/scripts/players_house.pory"
	release
# 817 "data/scripts/players_house.pory"
	end
# 818 "data/scripts/players_house.pory"

# 819 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Vigoroth1::
# 820 "data/scripts/players_house.pory"
	lock
# 821 "data/scripts/players_house.pory"
	faceplayer
# 822 "data/scripts/players_house.pory"
	waitse
# 823 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 824 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth1, MSGBOX_DEFAULT
# 825 "data/scripts/players_house.pory"
	waitmoncry
# 826 "data/scripts/players_house.pory"
	release
# 827 "data/scripts/players_house.pory"
	end
# 828 "data/scripts/players_house.pory"

# 829 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Vigoroth2::
# 830 "data/scripts/players_house.pory"
	lock
# 831 "data/scripts/players_house.pory"
	faceplayer
# 832 "data/scripts/players_house.pory"
	waitse
# 833 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 834 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth2, MSGBOX_DEFAULT
# 835 "data/scripts/players_house.pory"
	waitmoncry
# 836 "data/scripts/players_house.pory"
	release
# 837 "data/scripts/players_house.pory"
	end
# 838 "data/scripts/players_house.pory"

# 839 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymMale:
# 840 "data/scripts/players_house.pory"
	player_run_down
# 841 "data/scripts/players_house.pory"
	player_run_down
# 842 "data/scripts/players_house.pory"
	player_run_left
# 843 "data/scripts/players_house.pory"
	player_run_left
# 844 "data/scripts/players_house.pory"
	player_run_left
# 845 "data/scripts/players_house.pory"
	player_run_left
# 846 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 847 "data/scripts/players_house.pory"
	step_end
# 848 "data/scripts/players_house.pory"

# 849 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVMale:
# 850 "data/scripts/players_house.pory"
	walk_faster_left
# 851 "data/scripts/players_house.pory"
	step_end
# 852 "data/scripts/players_house.pory"

# 853 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale:
# 854 "data/scripts/players_house.pory"
	player_run_down
# 855 "data/scripts/players_house.pory"
	player_run_down
# 856 "data/scripts/players_house.pory"
	player_run_right
# 857 "data/scripts/players_house.pory"
	player_run_right
# 858 "data/scripts/players_house.pory"
	player_run_right
# 859 "data/scripts/players_house.pory"
	player_run_right
# 860 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 861 "data/scripts/players_house.pory"
	step_end
# 862 "data/scripts/players_house.pory"

# 863 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVFemale:
# 864 "data/scripts/players_house.pory"
	walk_faster_right
# 865 "data/scripts/players_house.pory"
	step_end
# 866 "data/scripts/players_house.pory"

# 867 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MovePlayerAwayFromDoor:
# 868 "data/scripts/players_house.pory"
	walk_up
# 869 "data/scripts/players_house.pory"
	step_end
# 870 "data/scripts/players_house.pory"

# 871 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV::
# 872 "data/scripts/players_house.pory"
	lockall
# 873 "data/scripts/players_house.pory"
	checkplayergender
# 874 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale
# 875 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale
# 876 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerEnterRoomMale
# 877 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerEnterRoomFemale
# 878 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_FacePlayer
# 879 "data/scripts/players_house.pory"
	waitmovement 0
# 880 "data/scripts/players_house.pory"
	playse SE_PIN
# 881 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_ExclamationMark
# 882 "data/scripts/players_house.pory"
	waitmovement 0
# 883 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_Delay48
# 884 "data/scripts/players_house.pory"
	waitmovement 0
# 885 "data/scripts/players_house.pory"
	delay 20
# 886 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadApproachPlayerMale
# 887 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadApproachPlayerFemale
# 888 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TicketFromBrineyCameForYou, MSGBOX_DEFAULT
# 889 "data/scripts/players_house.pory"
	giveitem ITEM_SS_TICKET
# 890 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_PortsInSlateportLilycove, MSGBOX_DEFAULT
# 891 "data/scripts/players_house.pory"
	closemessage
# 892 "data/scripts/players_house.pory"
	delay 20
# 893 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachDadMale
# 894 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachDadFemale
# 895 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_BetterGetBackToGym, MSGBOX_DEFAULT
# 896 "data/scripts/players_house.pory"
	closemessage
# 897 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadExitsMale
# 898 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadExitsFemale
# 899 "data/scripts/players_house.pory"
	playse SE_DOOR
# 900 "data/scripts/players_house.pory"
	removeobject VAR_0x8009
# 901 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 902 "data/scripts/players_house.pory"
	delay 30
# 903 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerMale
# 904 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerFemale
# 905 "data/scripts/players_house.pory"
	delay 20
# 906 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DadShouldStayLonger, MSGBOX_DEFAULT
# 907 "data/scripts/players_house.pory"
	closemessage
# 908 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 909 "data/scripts/players_house.pory"
	special TurnOnTVScreen
# 910 "data/scripts/players_house.pory"
	delay 60
# 911 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale
# 912 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale
# 913 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatABreakingStory, MSGBOX_DEFAULT
# 914 "data/scripts/players_house.pory"
	closemessage
# 915 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale
# 916 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale
# 917 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_LatiEmergencyNewsFlash, MSGBOX_DEFAULT
# 918 "data/scripts/players_house.pory"
	closemessage
# 919 "data/scripts/players_house.pory"
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
# 920 "data/scripts/players_house.pory"
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
# 921 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 922 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale
# 923 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale
# 924 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_WhatColorDidTheySay, MSGBOX_DEFAULT
# 925 "data/scripts/players_house.pory"
	multichoice 22, 8, MULTI_TV_LATI, TRUE
# 926 "data/scripts/players_house.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 927 "data/scripts/players_house.pory"
	special InitRoamer
# 928 "data/scripts/players_house.pory"
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
# 929 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_StillUnknownPokemon, MSGBOX_DEFAULT
# 930 "data/scripts/players_house.pory"
	closemessage
# 931 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
# 932 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
# 933 "data/scripts/players_house.pory"
	releaseall
# 934 "data/scripts/players_house.pory"
	end
# 935 "data/scripts/players_house.pory"

# 936 "data/scripts/players_house.pory"
@ Never called.
# 937 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_AirLatiBroadcast::
# 938 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 939 "data/scripts/players_house.pory"
	return
# 940 "data/scripts/players_house.pory"

# 941 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale::
# 942 "data/scripts/players_house.pory"
	setvar VAR_0x8008, MALE
# 943 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_DAD
# 944 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_MOM
# 945 "data/scripts/players_house.pory"
	return
# 946 "data/scripts/players_house.pory"

# 947 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale::
# 948 "data/scripts/players_house.pory"
	setvar VAR_0x8008, FEMALE
# 949 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_DAD
# 950 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_MOM
# 951 "data/scripts/players_house.pory"
	return
# 952 "data/scripts/players_house.pory"

# 953 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerMale::
# 954 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerMale
# 955 "data/scripts/players_house.pory"
	waitmovement 0
# 956 "data/scripts/players_house.pory"
	return
# 957 "data/scripts/players_house.pory"

# 958 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerFemale::
# 959 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerFemale
# 960 "data/scripts/players_house.pory"
	waitmovement 0
# 961 "data/scripts/players_house.pory"
	return
# 962 "data/scripts/players_house.pory"

# 963 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadMale::
# 964 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadMale
# 965 "data/scripts/players_house.pory"
	waitmovement 0
# 966 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomMale
# 967 "data/scripts/players_house.pory"
	waitmovement 0
# 968 "data/scripts/players_house.pory"
	return
# 969 "data/scripts/players_house.pory"

# 970 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadFemale::
# 971 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadFemale
# 972 "data/scripts/players_house.pory"
	waitmovement 0
# 973 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomFemale
# 974 "data/scripts/players_house.pory"
	waitmovement 0
# 975 "data/scripts/players_house.pory"
	return
# 976 "data/scripts/players_house.pory"

# 977 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsMale::
# 978 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 979 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 980 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsMale
# 981 "data/scripts/players_house.pory"
	waitmovement 0
# 982 "data/scripts/players_house.pory"
	return
# 983 "data/scripts/players_house.pory"

# 984 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsFemale::
# 985 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 986 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 987 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsFemale
# 988 "data/scripts/players_house.pory"
	waitmovement 0
# 989 "data/scripts/players_house.pory"
	return
# 990 "data/scripts/players_house.pory"

# 991 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomMale::
# 992 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomMale
# 993 "data/scripts/players_house.pory"
	waitmovement 0
# 994 "data/scripts/players_house.pory"
	return
# 995 "data/scripts/players_house.pory"

# 996 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomFemale::
# 997 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomFemale
# 998 "data/scripts/players_house.pory"
	waitmovement 0
# 999 "data/scripts/players_house.pory"
	return
# 1000 "data/scripts/players_house.pory"

# 1001 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale::
# 1002 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale
# 1003 "data/scripts/players_house.pory"
	waitmovement 0
# 1004 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterLeft
# 1005 "data/scripts/players_house.pory"
	waitmovement 0
# 1006 "data/scripts/players_house.pory"
	return
# 1007 "data/scripts/players_house.pory"

# 1008 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale::
# 1009 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale
# 1010 "data/scripts/players_house.pory"
	waitmovement 0
# 1011 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterRight
# 1012 "data/scripts/players_house.pory"
	waitmovement 0
# 1013 "data/scripts/players_house.pory"
	return
# 1014 "data/scripts/players_house.pory"

# 1015 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerMale::
# 1016 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerMale
# 1017 "data/scripts/players_house.pory"
	waitmovement 0
# 1018 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1019 "data/scripts/players_house.pory"
	waitmovement 0
# 1020 "data/scripts/players_house.pory"
	return
# 1021 "data/scripts/players_house.pory"

# 1022 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerFemale::
# 1023 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerFemale
# 1024 "data/scripts/players_house.pory"
	waitmovement 0
# 1025 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1026 "data/scripts/players_house.pory"
	waitmovement 0
# 1027 "data/scripts/players_house.pory"
	return
# 1028 "data/scripts/players_house.pory"

# 1029 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale::
# 1030 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale
# 1031 "data/scripts/players_house.pory"
	waitmovement 0
# 1032 "data/scripts/players_house.pory"
	return
# 1033 "data/scripts/players_house.pory"

# 1034 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale::
# 1035 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale
# 1036 "data/scripts/players_house.pory"
	waitmovement 0
# 1037 "data/scripts/players_house.pory"
	return
# 1038 "data/scripts/players_house.pory"

# 1039 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale::
# 1040 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale
# 1041 "data/scripts/players_house.pory"
	waitmovement 0
# 1042 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1043 "data/scripts/players_house.pory"
	waitmovement 0
# 1044 "data/scripts/players_house.pory"
	return
# 1045 "data/scripts/players_house.pory"

# 1046 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale::
# 1047 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale
# 1048 "data/scripts/players_house.pory"
	waitmovement 0
# 1049 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1050 "data/scripts/players_house.pory"
	waitmovement 0
# 1051 "data/scripts/players_house.pory"
	return
# 1052 "data/scripts/players_house.pory"

# 1053 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerMale:
# 1054 "data/scripts/players_house.pory"
	walk_right
# 1055 "data/scripts/players_house.pory"
	walk_right
# 1056 "data/scripts/players_house.pory"
	step_end
# 1057 "data/scripts/players_house.pory"

# 1058 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerFemale:
# 1059 "data/scripts/players_house.pory"
	walk_left
# 1060 "data/scripts/players_house.pory"
	walk_left
# 1061 "data/scripts/players_house.pory"
	step_end
# 1062 "data/scripts/players_house.pory"

# 1063 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomMale:
# 1064 "data/scripts/players_house.pory"
	face_left
# 1065 "data/scripts/players_house.pory"
	step_end
# 1066 "data/scripts/players_house.pory"

# 1067 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomFemale:
# 1068 "data/scripts/players_house.pory"
	face_right
# 1069 "data/scripts/players_house.pory"
	step_end
# 1070 "data/scripts/players_house.pory"

# 1071 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsMale:
# 1072 "data/scripts/players_house.pory"
	walk_down
# 1073 "data/scripts/players_house.pory"
	walk_right
# 1074 "data/scripts/players_house.pory"
	walk_down
# 1075 "data/scripts/players_house.pory"
	delay_8
# 1076 "data/scripts/players_house.pory"
	step_end
# 1077 "data/scripts/players_house.pory"

# 1078 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsFemale:
# 1079 "data/scripts/players_house.pory"
	walk_down
# 1080 "data/scripts/players_house.pory"
	walk_left
# 1081 "data/scripts/players_house.pory"
	walk_down
# 1082 "data/scripts/players_house.pory"
	delay_8
# 1083 "data/scripts/players_house.pory"
	step_end
# 1084 "data/scripts/players_house.pory"

# 1085 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomMale:
# 1086 "data/scripts/players_house.pory"
	delay_16
# 1087 "data/scripts/players_house.pory"
	walk_down
# 1088 "data/scripts/players_house.pory"
	walk_down
# 1089 "data/scripts/players_house.pory"
	walk_down
# 1090 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 1091 "data/scripts/players_house.pory"
	step_end
# 1092 "data/scripts/players_house.pory"

# 1093 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit:
# 1094 "data/scripts/players_house.pory"
	delay_8
# 1095 "data/scripts/players_house.pory"
	delay_16
# 1096 "data/scripts/players_house.pory"
	delay_16
# 1097 "data/scripts/players_house.pory"
	walk_in_place_faster_down
# 1098 "data/scripts/players_house.pory"
	step_end
# 1099 "data/scripts/players_house.pory"

# 1100 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomFemale:
# 1101 "data/scripts/players_house.pory"
	delay_16
# 1102 "data/scripts/players_house.pory"
	walk_down
# 1103 "data/scripts/players_house.pory"
	walk_down
# 1104 "data/scripts/players_house.pory"
	walk_down
# 1105 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 1106 "data/scripts/players_house.pory"
	step_end
# 1107 "data/scripts/players_house.pory"

# 1108 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale:
# 1109 "data/scripts/players_house.pory"
	walk_up
# 1110 "data/scripts/players_house.pory"
	walk_left
# 1111 "data/scripts/players_house.pory"
	walk_left
# 1112 "data/scripts/players_house.pory"
	walk_left
# 1113 "data/scripts/players_house.pory"
	walk_left
# 1114 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 1115 "data/scripts/players_house.pory"
	step_end
# 1116 "data/scripts/players_house.pory"

# 1117 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale:
# 1118 "data/scripts/players_house.pory"
	walk_up
# 1119 "data/scripts/players_house.pory"
	walk_right
# 1120 "data/scripts/players_house.pory"
	walk_right
# 1121 "data/scripts/players_house.pory"
	walk_right
# 1122 "data/scripts/players_house.pory"
	walk_right
# 1123 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 1124 "data/scripts/players_house.pory"
	step_end
# 1125 "data/scripts/players_house.pory"

# 1126 "data/scripts/players_house.pory"
EventScript_RunningShoesManual::
# 1127 "data/scripts/players_house.pory"
	lockall
# 1128 "data/scripts/players_house.pory"
	call EventScript_RunningShoesManualTranslated
# 1129 "data/scripts/players_house.pory"
	releaseall
# 1130 "data/scripts/players_house.pory"
	end

PlayersHouse_1F_EventScript_StarterSet_Text_0:
# 17 "data/scripts/players_house.pory"
	.string "Kanto$"

PlayersHouse_1F_EventScript_StarterSet_Text_1:
# 17 "data/scripts/players_house.pory"
	.string "Johto$"

PlayersHouse_1F_EventScript_StarterSet_Text_2:
# 17 "data/scripts/players_house.pory"
	.string "Hoenn$"

PlayersHouse_1F_EventScript_StarterSet_Text_3:
# 17 "data/scripts/players_house.pory"
	.string "Sinnoh$"

PlayersHouse_1F_EventScript_StarterSet_Text_4:
# 17 "data/scripts/players_house.pory"
	.string "Unova$"

PlayersHouse_1F_EventScript_StarterSet_Text_5:
# 17 "data/scripts/players_house.pory"
	.string "Kalos$"

PlayersHouse_1F_EventScript_StarterSet_Text_6:
# 17 "data/scripts/players_house.pory"
	.string "Alola$"

PlayersHouse_1F_EventScript_StarterSet_Text_7:
# 17 "data/scripts/players_house.pory"
	.string "Galar$"

PlayersHouse_1F_EventScript_StarterSet_Text_8:
# 17 "data/scripts/players_house.pory"
	.string "Ninguno$"

EventScript_RunningShoesManualTranslated_Text_0:
# 152 "data/scripts/players_house.pory"
	.string "¡Es una Guía para Entrenadores!\n"
	.string "“Consejo 1: En cada Centro Pokémon,\l"
	.string "hay Máquinas Especiales, ¡Y quizá\l"
	.string "alguien especial también!\p"
	.string "¡Habla con todos, interactúa con\n"
	.string "todo!”\p"
	.string "¿Seguir leyendo?$"

EventScript_RunningShoesManualTranslated_Text_1:
# 156 "data/scripts/players_house.pory"
	.string "“Consejo 2: Cada Pokémon puede ser\n"
	.string "renombrado desde el menú, y también,\l"
	.string "puedes recordarle Movimientos.”\p"
	.string "¿Seguir leyendo?$"

EventScript_RunningShoesManualTranslated_Text_2:
# 158 "data/scripts/players_house.pory"
	.string "“Consejo 3: Puedes escapar de un\n"
	.string "Pokémon tocando R, y lanzar una\l"
	.string "PokéBall con L.”\p"
	.string "Ese es el último consejo útil.$"

EventScript_RunningShoesManualTranslated_Text_3:
# 164 "data/scripts/players_house.pory"
	.string "Mucho leer por hoy.$"

EventScript_YoureNewNeighbor_Translated_Text_0:
# 188 "data/scripts/players_house.pory"
	.string "chico$"

EventScript_YoureNewNeighbor_Translated_Text_1:
# 189 "data/scripts/players_house.pory"
	.string "chica$"

EventScript_YoureNewNeighbor_Translated_Text_2:
# 190 "data/scripts/players_house.pory"
	.string "chique$"

EventScript_YoureNewNeighbor_Translated_Text_3:
# 193 "data/scripts/players_house.pory"
	.string "¡AH! ¿¡QUIÉN ERES!?\p"
	.string "Ah, tú eres {ELLA} {GENDER} nuev{OA}, ¿no?$"

RivalsHouse_1F_Text_MayWhoAreYou_Translated_Text_0:
# 257 "data/scripts/players_house.pory"
	.string "Oh, tú eres… {PLAYER}, ¿Qué haces en\n"
	.string "mi casa?\p"
	.string "… … … … … … … … … … … …\p"
	.string "Mhhh… Mi papá dijo que vendrías,\n"
	.string "{PLAYER}, ¡Y que seamos amigos!\p"
	.string "Pero recién nos conocimos hoy,\n"
	.string "¿Verdad?\p"
	.string "No tengo mucho tiempo de todas formas,\n"
	.string "{PLAYER}, espero lo entiendas.$"

PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_0:
# 276 "data/scripts/players_house.pory"
	.string "¿No es linda la casa?$"

PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_1:
# 281 "data/scripts/players_house.pory"
	.string "Mientras Pokémon Movers termina de\n"
	.string "acomodar, ¿Porqué no pones en marcha\l"
	.string "el reloj que te compró Papá?$"

PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated_Text_0:
# 304 "data/scripts/players_house.pory"
	.string "Haz lo que te digo.$"

PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom_Text_0:
# 321 "data/scripts/players_house.pory"
	.string "¿Te gusta tu cuarto nuevo?\n"
	.string "No olvides tu Poción en la PC.$"

PlayersHouse_1F_EventScript_MaybeDadWillBeOn_Text_0:
# 333 "data/scripts/players_house.pory"
	.string "¡Ven, rápido, Papá está en la tele!$"

PlayersHouse_1F_EventScript_ItsOverWeMissedHim_Text_0:
# 345 "data/scripts/players_house.pory"
	.string "Terminó...\p"
	.string "Pues bueno, el Profesor me dijo que te\n"
	.string "preguntara algo.\p"
	.string "¿Cuál región tiene tus Iniciales\n"
	.string "favoritos?$"

PlayersHouse_1F_EventScript_StarterSet_TellProfessor_Text_0:
# 357 "data/scripts/players_house.pory"
	.string "Está bien. Se lo diré cuanto antes\n"
	.string "púeda.$"

PlayersHouse_1F_EventScript_StarterWantHardest_Text_0:
# 369 "data/scripts/players_house.pory"
	.string "¿Entonces quieres a los más difíciles\n"
	.string "de entrenar?$"

PlayersHouse_1F_EventScript_StarterWantHardest_Text_1:
# 380 "data/scripts/players_house.pory"
	.string "¿Qué región tiene tus Iniciales\n"
	.string "favoritos?$"

PlayersHouse_1F_Text_YouShouldRestABit::
# 46 "data/scripts/players_house.pory"
	.string "¿Cómo va todo, amor?\n"
	.string "Te ves cansad{OA}.\p"
	.string "Descansa un rato, mi vida.$"

PlayersHouse_1F_Text_TakeCareHoney::
# 61 "data/scripts/players_house.pory"
	.string "¡Cuídate mucho!$"

PlayersHouse_1F_Text_IsntItNiceInHere::
# 72 "data/scripts/players_house.pory"
	.string "Qué linda casa.$"

PlayersHouse_1F_Text_MoversPokemonGoSetClock::
# 83 "data/scripts/players_house.pory"
	.string "Pokémon Movers hacen todo el trabajo, Y\n"
	.string "LIMPIAN.\p"
	.string "Ahora, ve a ajustar el reloj que te\n"
	.string "compró Papá.$"

PlayersHouse_1F_Text_ArentYouInterestedInRoom::
# 94 "data/scripts/players_house.pory"
	.string "Te dije que hicieras algo, ¿no?$"

PlayersHouse_1F_Text_GoSetTheClock::
# 106 "data/scripts/players_house.pory"
	.string "{PLAYER}.\p"
	.string "No te vas hasta que ajustes ese reloj.$"

PlayersHouse_1F_Text_OhComeQuickly::
# 120 "data/scripts/players_house.pory"
	.string "¡{PLAYER}, {PLAYER}!\n"
	.string "¡MIRA!$"

PlayersHouse_1F_Text_ReportFromPetalburgGym::
# 134 "data/scripts/players_house.pory"
	.string "¡Y bueno, aunque nervioso, ese fue\n"
	.string "Norman, el gran Líder de Gimnasio!\p"
	.string "Ahora seguiremos con nuestra\n"
	.string "entrevista al nuevo donador de Devon,\l"
	.string "el señor -BZZT-$"
