PlayersHouse_1F_EventScript_WatchGymBroadcast::
# 3 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 4 "data/scripts/players_house.pory"
	waitmovement 0
# 5 "data/scripts/players_house.pory"
	namebox Entrevistador
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
	namebox Mama
# 33 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_StarterSet_TellProfessor
# 34 "data/scripts/players_house.pory"
	closemessage
# 35 "data/scripts/players_house.pory"
	hidenamebox
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
# 230 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 231 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 232 "data/scripts/players_house.pory"
	applymovement 7, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer
# 233 "data/scripts/players_house.pory"
	waitmovement 0
# 234 "data/scripts/players_house.pory"
	namebox Rival
# 235 "data/scripts/players_house.pory"
	call RivalsHouse_1F_Text_MayWhoAreYou_Translated
# 236 "data/scripts/players_house.pory"
	closemessage
# 237 "data/scripts/players_house.pory"
	hidenamebox
# 238 "data/scripts/players_house.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs
# 239 "data/scripts/players_house.pory"
	playse SE_EXIT
# 240 "data/scripts/players_house.pory"
	removeobject 7
# 241 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 242 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 243 "data/scripts/players_house.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
EventScript_MeetRival_1:
# 245 "data/scripts/players_house.pory"
	delay 30
# 246 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 247 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 248 "data/scripts/players_house.pory"
	savebgm MUS_DUMMY
# 249 "data/scripts/players_house.pory"
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
	namebox Rival
# 219 "data/scripts/players_house.pory"
	call RivalsHouse_1F_Text_MayWhoAreYou_Translated
# 220 "data/scripts/players_house.pory"
	closemessage
# 221 "data/scripts/players_house.pory"
	hidenamebox
# 222 "data/scripts/players_house.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs
# 223 "data/scripts/players_house.pory"
	playse SE_EXIT
# 224 "data/scripts/players_house.pory"
	removeobject 7
# 225 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 226 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 227 "data/scripts/players_house.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	goto EventScript_MeetRival_1


RivalsHouse_1F_Text_MayWhoAreYou_Translated::
# 255 "data/scripts/players_house.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou_Translated_Text_0
	return


PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation::
# 274 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_0
# 275 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 276 "data/scripts/players_house.pory"
	waitmovement 0
# 277 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8005, MALE, PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale
# 278 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8005, FEMALE, PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale
# 279 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_1
# 290 "data/scripts/players_house.pory"
	closemessage
# 291 "data/scripts/players_house.pory"
	hidenamebox
# 292 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
# 293 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerWalkIn
# 294 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 295 "data/scripts/players_house.pory"
	waitmovement 0
	return


PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated::
# 302 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated_Text_0
# 308 "data/scripts/players_house.pory"
	closemessage
# 309 "data/scripts/players_house.pory"
	hidenamebox
# 310 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 311 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MovePlayerAwayFromDoor
# 312 "data/scripts/players_house.pory"
	waitmovement 0
	return


PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom::
# 319 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom_Text_0
	return


PlayersHouse_1F_EventScript_MaybeDadWillBeOn::
# 331 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_MaybeDadWillBeOn_Text_0
	return


PlayersHouse_1F_EventScript_ItsOverWeMissedHim::
# 343 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_ItsOverWeMissedHim_Text_0
	return


PlayersHouse_1F_EventScript_StarterSet_TellProfessor::
# 355 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_StarterSet_TellProfessor_Text_0
	return


PlayersHouse_1F_EventScript_StarterWantHardest::
# 367 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_StarterWantHardest_Text_0, MSGBOX_YESNO
# 373 "data/scripts/players_house.pory"
	compare VAR_RESULT, 1
# 374 "data/scripts/players_house.pory"
	goto_if_eq PlayersHouse_1F_EventScript_StarterChoseHardest
# 375 "data/scripts/players_house.pory"
	namebox Mama
# 378 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_EventScript_StarterWantHardest_Text_1
# 384 "data/scripts/players_house.pory"
	hidenamebox
# 385 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_StarterSet
	return


# 390 "data/scripts/players_house.pory"

# 391 "data/scripts/players_house.pory"
@ Local IDs are the same for both players houses
# 392 "data/scripts/players_house.pory"
.set LOCALID_MOM, 1
# 393 "data/scripts/players_house.pory"
.set LOCALID_DAD, 5
# 394 "data/scripts/players_house.pory"
.set LOCALID_MOM_2F, 14
# 395 "data/scripts/players_house.pory"

# 396 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet::
# 397 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
# 398 "data/scripts/players_house.pory"
	return
# 399 "data/scripts/players_house.pory"

# 400 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_EnterHouseMovingIn::
# 401 "data/scripts/players_house.pory"
	namebox Mama
# 402 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation
# 403 "data/scripts/players_house.pory"
	releaseall
# 404 "data/scripts/players_house.pory"
	end
# 405 "data/scripts/players_house.pory"

# 406 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale::
# 407 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 408 "data/scripts/players_house.pory"
	waitmovement 0
# 409 "data/scripts/players_house.pory"
	return
# 410 "data/scripts/players_house.pory"

# 411 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale::
# 412 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 413 "data/scripts/players_house.pory"
	waitmovement 0
# 414 "data/scripts/players_house.pory"
	return
# 415 "data/scripts/players_house.pory"

# 416 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerWalkIn:
# 417 "data/scripts/players_house.pory"
	walk_up
# 418 "data/scripts/players_house.pory"
	step_end
# 419 "data/scripts/players_house.pory"

# 420 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomGoSeeRoom::
# 421 "data/scripts/players_house.pory"
	namebox Mama	
# 422 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated
# 423 "data/scripts/players_house.pory"
	releaseall
# 424 "data/scripts/players_house.pory"
	end
# 425 "data/scripts/players_house.pory"

# 426 "data/scripts/players_house.pory"
LittlerootTown_BrendansHouse_2F_EventScript_WallClock::
# 427 "data/scripts/players_house.pory"
	lockall
# 428 "data/scripts/players_house.pory"
	setvar VAR_0x8004, MALE
# 429 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
# 430 "data/scripts/players_house.pory"
	end
# 431 "data/scripts/players_house.pory"

# 432 "data/scripts/players_house.pory"
LittlerootTown_MaysHouse_2F_EventScript_WallClock::
# 433 "data/scripts/players_house.pory"
	lockall
# 434 "data/scripts/players_house.pory"
	setvar VAR_0x8004, FEMALE
# 435 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
# 436 "data/scripts/players_house.pory"
	end
# 437 "data/scripts/players_house.pory"

# 438 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_WallClock::
# 439 "data/scripts/players_house.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, PlayersHouse_2F_EventScript_CheckWallClock
# 440 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_ChoseClock
# 441 "data/scripts/players_house.pory"
	end
# 442 "data/scripts/players_house.pory"

# 443 "data/scripts/players_house.pory"
PlayersHouse_1F_Text_ChooseTimeThing:
# 444 "data/scripts/players_house.pory"
	.string "¡AVISO! LEE ESTO CON ATENCIÓN.\n"
# 445 "data/scripts/players_house.pory"
	.string "POR FAVOR, SELECCIONAR SI DESEA\l"
# 446 "data/scripts/players_house.pory"
	.string "CONTINUAR USANDO EL RELOJ DEL\l"
# 447 "data/scripts/players_house.pory"
	.string "JUEGO, O EL RELOJ REAL DE SU\l"
# 448 "data/scripts/players_house.pory"
	.string "DISPOSITIVO.\p"
# 449 "data/scripts/players_house.pory"
	.string "Tenga en cuenta que esta\n"
# 450 "data/scripts/players_house.pory"
	.string "acción no se puede cambiar.$"
# 451 "data/scripts/players_house.pory"
	
# 452 "data/scripts/players_house.pory"
PlayersHouse_1F_Text_ChooseClock:
# 453 "data/scripts/players_house.pory"
	.string "¿Está segur{OA} que quiere\n"
# 454 "data/scripts/players_house.pory"
	.string "usar el reloj falso del\l"
# 455 "data/scripts/players_house.pory"
	.string "juego?$"
# 456 "data/scripts/players_house.pory"
PlayersHouse_1F_Text_ChooseRTC:
# 457 "data/scripts/players_house.pory"
	.string "¿Está segur{OA} que quiere\n"
# 458 "data/scripts/players_house.pory"
	.string "usar el reloj real de\l"
# 459 "data/scripts/players_house.pory"
	.string "su dispositivo?$"
# 460 "data/scripts/players_house.pory"

# 461 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_ChoseClock::
# 462 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 463 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 464 "data/scripts/players_house.pory"
	delay 30
# 465 "data/scripts/players_house.pory"
	setflag FLAG_SET_WALL_CLOCK
# 466 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 467 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 468 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 469 "data/scripts/players_house.pory"
	checkplayergender
# 470 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_2F_EventScript_MomComesUpstairsMale
# 471 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_2F_EventScript_MomComesUpstairsFemale
# 472 "data/scripts/players_house.pory"
	playse SE_EXIT
# 473 "data/scripts/players_house.pory"
	removeobject VAR_0x8008
# 474 "data/scripts/players_house.pory"
	releaseall
# 475 "data/scripts/players_house.pory"
	end
# 476 "data/scripts/players_house.pory"

# 477 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_ChoseRTC::
# 478 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ChooseRTC, MSGBOX_YESNO
# 479 "data/scripts/players_house.pory"
	compare VAR_RESULT, 1
# 480 "data/scripts/players_house.pory"
	goto_if_ne PlayersHouse_2F_EventScript_WallClock
# 481 "data/scripts/players_house.pory"
	closemessage
# 482 "data/scripts/players_house.pory"
	delay 30
# 483 "data/scripts/players_house.pory"
	setflag FLAG_SET_WALL_CLOCK
# 484 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 485 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 486 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 487 "data/scripts/players_house.pory"
	checkplayergender
# 488 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_2F_EventScript_MomComesUpstairsMale
# 489 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_2F_EventScript_MomComesUpstairsFemale
# 490 "data/scripts/players_house.pory"
	playse SE_EXIT
# 491 "data/scripts/players_house.pory"
	removeobject VAR_0x8008
# 492 "data/scripts/players_house.pory"
	releaseall
# 493 "data/scripts/players_house.pory"
	end
# 494 "data/scripts/players_house.pory"

# 495 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_MomComesUpstairsMale::
# 496 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_MOM_2F
# 497 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 498 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersMale
# 499 "data/scripts/players_house.pory"
	waitmovement 0
# 500 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 501 "data/scripts/players_house.pory"
	waitmovement 0
# 502 "data/scripts/players_house.pory"
	namebox Mama
# 503 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom
# 504 "data/scripts/players_house.pory"
	closemessage
# 505 "data/scripts/players_house.pory"
	hidenamebox
# 506 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsMale
# 507 "data/scripts/players_house.pory"
	waitmovement 0
# 508 "data/scripts/players_house.pory"
	return
# 509 "data/scripts/players_house.pory"

# 510 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_MomComesUpstairsFemale::
# 511 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_MOM_2F
# 512 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 513 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersFemale
# 514 "data/scripts/players_house.pory"
	waitmovement 0
# 515 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 516 "data/scripts/players_house.pory"
	waitmovement 0
# 517 "data/scripts/players_house.pory"
	namebox Mama
# 518 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom
# 519 "data/scripts/players_house.pory"
	closemessage
# 520 "data/scripts/players_house.pory"
	hidenamebox
# 521 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsFemale
# 522 "data/scripts/players_house.pory"
	waitmovement 0
# 523 "data/scripts/players_house.pory"
	return
# 524 "data/scripts/players_house.pory"

# 525 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_CheckWallClock::
# 526 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 527 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 528 "data/scripts/players_house.pory"
	special Special_ViewWallClock
# 529 "data/scripts/players_house.pory"
	waitstate
# 530 "data/scripts/players_house.pory"
	releaseall
# 531 "data/scripts/players_house.pory"
	end
# 532 "data/scripts/players_house.pory"

# 533 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_SetWallClock::
# 534 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 535 "data/scripts/players_house.pory"
	special SetHourMinutes
# 536 "data/scripts/players_house.pory"
	special StartWallClock
# 537 "data/scripts/players_house.pory"
	waitstate
# 538 "data/scripts/players_house.pory"
	return
# 539 "data/scripts/players_house.pory"

# 540 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomEntersMale:
# 541 "data/scripts/players_house.pory"
	delay_8
# 542 "data/scripts/players_house.pory"
	walk_down
# 543 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 544 "data/scripts/players_house.pory"
	delay_16
# 545 "data/scripts/players_house.pory"
	delay_8
# 546 "data/scripts/players_house.pory"
	walk_left
# 547 "data/scripts/players_house.pory"
	step_end
# 548 "data/scripts/players_house.pory"

# 549 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomExitsMale:
# 550 "data/scripts/players_house.pory"
	walk_right
# 551 "data/scripts/players_house.pory"
	walk_up
# 552 "data/scripts/players_house.pory"
	delay_8
# 553 "data/scripts/players_house.pory"
	step_end
# 554 "data/scripts/players_house.pory"

# 555 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomEntersFemale:
# 556 "data/scripts/players_house.pory"
	delay_8
# 557 "data/scripts/players_house.pory"
	walk_down
# 558 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 559 "data/scripts/players_house.pory"
	delay_16
# 560 "data/scripts/players_house.pory"
	delay_8
# 561 "data/scripts/players_house.pory"
	walk_right
# 562 "data/scripts/players_house.pory"
	step_end
# 563 "data/scripts/players_house.pory"

# 564 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomExitsFemale:
# 565 "data/scripts/players_house.pory"
	walk_left
# 566 "data/scripts/players_house.pory"
	walk_up
# 567 "data/scripts/players_house.pory"
	delay_8
# 568 "data/scripts/players_house.pory"
	step_end
# 569 "data/scripts/players_house.pory"

# 570 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetWatchedBroadcast::
# 571 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 572 "data/scripts/players_house.pory"
	releaseall
# 573 "data/scripts/players_house.pory"
	end
# 574 "data/scripts/players_house.pory"

# 575 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportMale::
# 576 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterRight
# 577 "data/scripts/players_house.pory"
	waitmovement 0
# 578 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 579 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymMale
# 580 "data/scripts/players_house.pory"
	waitmovement 0
# 581 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 582 "data/scripts/players_house.pory"
	namebox Mama
# 583 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MaybeDadWillBeOn
# 584 "data/scripts/players_house.pory"
	closemessage
# 585 "data/scripts/players_house.pory"
	hidenamebox
# 586 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale
# 587 "data/scripts/players_house.pory"
	waitmovement 0
# 588 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVMale
# 589 "data/scripts/players_house.pory"
	waitmovement 0
# 590 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 591 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 592 "data/scripts/players_house.pory"
	waitmovement 0
# 593 "data/scripts/players_house.pory"
	namebox Mama
# 594 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_ItsOverWeMissedHim
# 595 "data/scripts/players_house.pory"
	hidenamebox
# 596 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_StarterSet
# 597 "data/scripts/players_house.pory"
	hidenamebox
# 598 "data/scripts/players_house.pory"
	closemessage
# 599 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 600 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatMale
# 601 "data/scripts/players_house.pory"
	waitmovement 0
# 602 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
# 603 "data/scripts/players_house.pory"
	end
# 604 "data/scripts/players_house.pory"

# 605 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportFemale::
# 606 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterLeft
# 607 "data/scripts/players_house.pory"
	waitmovement 0
# 608 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 609 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale
# 610 "data/scripts/players_house.pory"
	waitmovement 0
# 611 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 612 "data/scripts/players_house.pory"
	namebox Mama
# 613 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MaybeDadWillBeOn
# 614 "data/scripts/players_house.pory"
	closemessage
# 615 "data/scripts/players_house.pory"
	hidenamebox
# 616 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale
# 617 "data/scripts/players_house.pory"
	waitmovement 0
# 618 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVFemale
# 619 "data/scripts/players_house.pory"
	waitmovement 0
# 620 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 621 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 622 "data/scripts/players_house.pory"
	waitmovement 0
# 623 "data/scripts/players_house.pory"
	namebox Mama
# 624 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_ItsOverWeMissedHim
# 625 "data/scripts/players_house.pory"
	hidenamebox
# 626 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_StarterSet
# 627 "data/scripts/players_house.pory"
	hidenamebox
# 628 "data/scripts/players_house.pory"
	closemessage
# 629 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 630 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatFemale
# 631 "data/scripts/players_house.pory"
	waitmovement 0
# 632 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
# 633 "data/scripts/players_house.pory"
	end
# 634 "data/scripts/players_house.pory"

# 635 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticeGymBroadcast::
# 636 "data/scripts/players_house.pory"
	playse SE_PIN
# 637 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_ExclamationMark
# 638 "data/scripts/players_house.pory"
	waitmovement 0
# 639 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_Delay48
# 640 "data/scripts/players_house.pory"
	waitmovement 0
# 641 "data/scripts/players_house.pory"
	namebox Mama
# 642 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_OhComeQuickly, MSGBOX_DEFAULT
# 643 "data/scripts/players_house.pory"
	closemessage
# 644 "data/scripts/players_house.pory"
	hidenamebox
# 645 "data/scripts/players_house.pory"
	return
# 646 "data/scripts/players_house.pory"

# 647 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadMale:
# 648 "data/scripts/players_house.pory"
	walk_up
# 649 "data/scripts/players_house.pory"
	walk_right
# 650 "data/scripts/players_house.pory"
	walk_right
# 651 "data/scripts/players_house.pory"
	walk_right
# 652 "data/scripts/players_house.pory"
	walk_right
# 653 "data/scripts/players_house.pory"
	walk_down
# 654 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 655 "data/scripts/players_house.pory"
	step_end
# 656 "data/scripts/players_house.pory"

# 657 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadFemale:
# 658 "data/scripts/players_house.pory"
	walk_up
# 659 "data/scripts/players_house.pory"
	walk_left
# 660 "data/scripts/players_house.pory"
	walk_left
# 661 "data/scripts/players_house.pory"
	walk_left
# 662 "data/scripts/players_house.pory"
	walk_left
# 663 "data/scripts/players_house.pory"
	walk_down
# 664 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 665 "data/scripts/players_house.pory"
	step_end
# 666 "data/scripts/players_house.pory"

# 667 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerMale:
# 668 "data/scripts/players_house.pory"
	walk_right
# 669 "data/scripts/players_house.pory"
	step_end
# 670 "data/scripts/players_house.pory"

# 671 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerFemale:
# 672 "data/scripts/players_house.pory"
	walk_left
# 673 "data/scripts/players_house.pory"
	step_end
# 674 "data/scripts/players_house.pory"

# 675 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale:
# 676 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 677 "data/scripts/players_house.pory"
	delay_16
# 678 "data/scripts/players_house.pory"
	delay_16
# 679 "data/scripts/players_house.pory"
	delay_16
# 680 "data/scripts/players_house.pory"
	delay_16
# 681 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 682 "data/scripts/players_house.pory"
	delay_16
# 683 "data/scripts/players_house.pory"
	delay_16
# 684 "data/scripts/players_house.pory"
	step_end
# 685 "data/scripts/players_house.pory"

# 686 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale:
# 687 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 688 "data/scripts/players_house.pory"
	delay_16
# 689 "data/scripts/players_house.pory"
	delay_16
# 690 "data/scripts/players_house.pory"
	delay_16
# 691 "data/scripts/players_house.pory"
	delay_16
# 692 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 693 "data/scripts/players_house.pory"
	delay_16
# 694 "data/scripts/players_house.pory"
	delay_16
# 695 "data/scripts/players_house.pory"
	step_end
# 696 "data/scripts/players_house.pory"

# 697 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale:
# 698 "data/scripts/players_house.pory"
	walk_up
# 699 "data/scripts/players_house.pory"
	walk_left
# 700 "data/scripts/players_house.pory"
	walk_left
# 701 "data/scripts/players_house.pory"
	step_end
# 702 "data/scripts/players_house.pory"

# 703 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale:
# 704 "data/scripts/players_house.pory"
	walk_up
# 705 "data/scripts/players_house.pory"
	walk_right
# 706 "data/scripts/players_house.pory"
	walk_right
# 707 "data/scripts/players_house.pory"
	step_end
# 708 "data/scripts/players_house.pory"

# 709 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale:
# 710 "data/scripts/players_house.pory"
	walk_left
# 711 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 712 "data/scripts/players_house.pory"
	step_end
# 713 "data/scripts/players_house.pory"

# 714 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale:
# 715 "data/scripts/players_house.pory"
	walk_right
# 716 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 717 "data/scripts/players_house.pory"
	step_end
# 718 "data/scripts/players_house.pory"

# 719 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatMale:
# 720 "data/scripts/players_house.pory"
	walk_left
# 721 "data/scripts/players_house.pory"
	walk_down
# 722 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 723 "data/scripts/players_house.pory"
	step_end
# 724 "data/scripts/players_house.pory"

# 725 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatFemale:
# 726 "data/scripts/players_house.pory"
	walk_right
# 727 "data/scripts/players_house.pory"
	walk_down
# 728 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 729 "data/scripts/players_house.pory"
	step_end
# 730 "data/scripts/players_house.pory"

# 731 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Mom::
# 732 "data/scripts/players_house.pory"
	lock
# 733 "data/scripts/players_house.pory"
	faceplayer
# 734 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, PlayersHouse_1F_EventScript_DontPushYourselfTooHard
# 735 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, PlayersHouse_1F_EventScript_DontPushYourselfTooHard
# 736 "data/scripts/players_house.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PlayersHouse_1F_EventScript_TryRegisterMom
# 737 "data/scripts/players_house.pory"
	goto_if_set FLAG_RESCUED_BIRCH, PlayersHouse_1F_EventScript_MomHealsParty
# 738 "data/scripts/players_house.pory"
	goto_if_eq VAR_TEMP_1, 1, PlayersHouse_1F_EventScript_SeeYouHoney
# 739 "data/scripts/players_house.pory"
	goto_if_eq VAR_LITTLEROOT_INTRO_STATE, 7, PlayersHouse_1F_EventScript_DidYouMeetProfBirch
# 740 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
# 741 "data/scripts/players_house.pory"
	release
# 742 "data/scripts/players_house.pory"
	end
# 743 "data/scripts/players_house.pory"

# 744 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DontPushYourselfTooHard::
# 745 "data/scripts/players_house.pory"
	namebox Mama
# 746 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 747 "data/scripts/players_house.pory"
	hidenamebox
# 748 "data/scripts/players_house.pory"
	release
# 749 "data/scripts/players_house.pory"
	end
# 750 "data/scripts/players_house.pory"

# 751 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryRegisterMom::
# 752 "data/scripts/players_house.pory"
	goto_if_set FLAG_ENABLE_MOM_MATCH_CALL, PlayersHouse_1F_EventScript_CheckGiveAmuletCoin
# 753 "data/scripts/players_house.pory"
	namebox Mama
# 754 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatAPokenav, MSGBOX_DEFAULT
# 755 "data/scripts/players_house.pory"
	closemessage
# 756 "data/scripts/players_house.pory"
	hidenamebox
# 757 "data/scripts/players_house.pory"
	delay 30
# 758 "data/scripts/players_house.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 759 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_RegisteredMom, MSGBOX_DEFAULT
# 760 "data/scripts/players_house.pory"
	waitfanfare
# 761 "data/scripts/players_house.pory"
	closemessage
# 762 "data/scripts/players_house.pory"
	delay 30
# 763 "data/scripts/players_house.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
# 764 "data/scripts/players_house.pory"
	release
# 765 "data/scripts/players_house.pory"
	end
# 766 "data/scripts/players_house.pory"

# 767 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_CheckGiveAmuletCoin::
# 768 "data/scripts/players_house.pory"
	goto_if_set FLAG_BADGE05_GET, PlayersHouse_1F_EventScript_TryGiveAmuletCoin
# 769 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
# 770 "data/scripts/players_house.pory"

# 771 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryGiveAmuletCoin::
# 772 "data/scripts/players_house.pory"
	goto_if_set FLAG_RECEIVED_AMULET_COIN, PlayersHouse_1F_EventScript_MomHealsParty
# 773 "data/scripts/players_house.pory"
	namebox Mama
# 774 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom, MSGBOX_DEFAULT
# 775 "data/scripts/players_house.pory"
	hidenamebox
# 776 "data/scripts/players_house.pory"
	giveitem ITEM_AMULET_COIN, 6
# 777 "data/scripts/players_house.pory"
	giveitem ITEM_CHERISH_BALL, 20
# 778 "data/scripts/players_house.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 779 "data/scripts/players_house.pory"
	namebox Mama
# 780 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 781 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_AMULET_COIN
# 782 "data/scripts/players_house.pory"
	hidenamebox
# 783 "data/scripts/players_house.pory"
	release
# 784 "data/scripts/players_house.pory"
	end
# 785 "data/scripts/players_house.pory"

# 786 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomHealsParty::
# 787 "data/scripts/players_house.pory"
	namebox Mama
# 788 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_YouShouldRestABit, MSGBOX_DEFAULT
# 789 "data/scripts/players_house.pory"
	hidenamebox
# 790 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_HealParty
# 791 "data/scripts/players_house.pory"
	end
# 792 "data/scripts/players_house.pory"

# 793 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SeeYouHoney::
# 794 "data/scripts/players_house.pory"
	namebox Mama
# 795 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_SeeYouHoney, MSGBOX_DEFAULT
# 796 "data/scripts/players_house.pory"
	hidenamebox
# 797 "data/scripts/players_house.pory"
	release
# 798 "data/scripts/players_house.pory"
	end
# 799 "data/scripts/players_house.pory"

# 800 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_HealParty::
# 801 "data/scripts/players_house.pory"
	closemessage
# 802 "data/scripts/players_house.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 803 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 804 "data/scripts/players_house.pory"
	namebox Mama
# 805 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TakeCareHoney, MSGBOX_DEFAULT
# 806 "data/scripts/players_house.pory"
	hidenamebox
# 807 "data/scripts/players_house.pory"
	release
# 808 "data/scripts/players_house.pory"
	end
# 809 "data/scripts/players_house.pory"

# 810 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DidYouMeetProfBirch::
# 811 "data/scripts/players_house.pory"
	namebox Mama
# 812 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DidYouMeetProfBirch, MSGBOX_DEFAULT
# 813 "data/scripts/players_house.pory"
	hidenamebox
# 814 "data/scripts/players_house.pory"
	release
# 815 "data/scripts/players_house.pory"
	end
# 816 "data/scripts/players_house.pory"

# 817 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Vigoroth1::
# 818 "data/scripts/players_house.pory"
	lock
# 819 "data/scripts/players_house.pory"
	faceplayer
# 820 "data/scripts/players_house.pory"
	waitse
# 821 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 822 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth1, MSGBOX_DEFAULT
# 823 "data/scripts/players_house.pory"
	waitmoncry
# 824 "data/scripts/players_house.pory"
	release
# 825 "data/scripts/players_house.pory"
	end
# 826 "data/scripts/players_house.pory"

# 827 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Vigoroth2::
# 828 "data/scripts/players_house.pory"
	lock
# 829 "data/scripts/players_house.pory"
	faceplayer
# 830 "data/scripts/players_house.pory"
	waitse
# 831 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 832 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth2, MSGBOX_DEFAULT
# 833 "data/scripts/players_house.pory"
	waitmoncry
# 834 "data/scripts/players_house.pory"
	release
# 835 "data/scripts/players_house.pory"
	end
# 836 "data/scripts/players_house.pory"

# 837 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymMale:
# 838 "data/scripts/players_house.pory"
	player_run_down
# 839 "data/scripts/players_house.pory"
	player_run_down
# 840 "data/scripts/players_house.pory"
	player_run_left
# 841 "data/scripts/players_house.pory"
	player_run_left
# 842 "data/scripts/players_house.pory"
	player_run_left
# 843 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 844 "data/scripts/players_house.pory"
	step_end
# 845 "data/scripts/players_house.pory"

# 846 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVMale:
# 847 "data/scripts/players_house.pory"
	walk_faster_left
# 848 "data/scripts/players_house.pory"
	step_end
# 849 "data/scripts/players_house.pory"

# 850 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale:
# 851 "data/scripts/players_house.pory"
	player_run_down
# 852 "data/scripts/players_house.pory"
	player_run_down
# 853 "data/scripts/players_house.pory"
	player_run_right
# 854 "data/scripts/players_house.pory"
	player_run_right
# 855 "data/scripts/players_house.pory"
	player_run_right
# 856 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 857 "data/scripts/players_house.pory"
	step_end
# 858 "data/scripts/players_house.pory"

# 859 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVFemale:
# 860 "data/scripts/players_house.pory"
	walk_faster_right
# 861 "data/scripts/players_house.pory"
	step_end
# 862 "data/scripts/players_house.pory"

# 863 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MovePlayerAwayFromDoor:
# 864 "data/scripts/players_house.pory"
	walk_up
# 865 "data/scripts/players_house.pory"
	step_end
# 866 "data/scripts/players_house.pory"

# 867 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV::
# 868 "data/scripts/players_house.pory"
	lockall
# 869 "data/scripts/players_house.pory"
	checkplayergender
# 870 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale
# 871 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale
# 872 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerEnterRoomMale
# 873 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerEnterRoomFemale
# 874 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_FacePlayer
# 875 "data/scripts/players_house.pory"
	waitmovement 0
# 876 "data/scripts/players_house.pory"
	playse SE_PIN
# 877 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_ExclamationMark
# 878 "data/scripts/players_house.pory"
	waitmovement 0
# 879 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_Delay48
# 880 "data/scripts/players_house.pory"
	waitmovement 0
# 881 "data/scripts/players_house.pory"
	delay 20
# 882 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadApproachPlayerMale
# 883 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadApproachPlayerFemale
# 884 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TicketFromBrineyCameForYou, MSGBOX_DEFAULT
# 885 "data/scripts/players_house.pory"
	giveitem ITEM_SS_TICKET
# 886 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_PortsInSlateportLilycove, MSGBOX_DEFAULT
# 887 "data/scripts/players_house.pory"
	closemessage
# 888 "data/scripts/players_house.pory"
	delay 20
# 889 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachDadMale
# 890 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachDadFemale
# 891 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_BetterGetBackToGym, MSGBOX_DEFAULT
# 892 "data/scripts/players_house.pory"
	closemessage
# 893 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadExitsMale
# 894 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadExitsFemale
# 895 "data/scripts/players_house.pory"
	playse SE_DOOR
# 896 "data/scripts/players_house.pory"
	removeobject VAR_0x8009
# 897 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 898 "data/scripts/players_house.pory"
	delay 30
# 899 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerMale
# 900 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerFemale
# 901 "data/scripts/players_house.pory"
	delay 20
# 902 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DadShouldStayLonger, MSGBOX_DEFAULT
# 903 "data/scripts/players_house.pory"
	closemessage
# 904 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 905 "data/scripts/players_house.pory"
	special TurnOnTVScreen
# 906 "data/scripts/players_house.pory"
	delay 60
# 907 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale
# 908 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale
# 909 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatABreakingStory, MSGBOX_DEFAULT
# 910 "data/scripts/players_house.pory"
	closemessage
# 911 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale
# 912 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale
# 913 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_LatiEmergencyNewsFlash, MSGBOX_DEFAULT
# 914 "data/scripts/players_house.pory"
	closemessage
# 915 "data/scripts/players_house.pory"
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
# 916 "data/scripts/players_house.pory"
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
# 917 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 918 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale
# 919 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale
# 920 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_WhatColorDidTheySay, MSGBOX_DEFAULT
# 921 "data/scripts/players_house.pory"
	multichoice 22, 8, MULTI_TV_LATI, TRUE
# 922 "data/scripts/players_house.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 923 "data/scripts/players_house.pory"
	special InitRoamer
# 924 "data/scripts/players_house.pory"
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
# 925 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_StillUnknownPokemon, MSGBOX_DEFAULT
# 926 "data/scripts/players_house.pory"
	closemessage
# 927 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
# 928 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
# 929 "data/scripts/players_house.pory"
	releaseall
# 930 "data/scripts/players_house.pory"
	end
# 931 "data/scripts/players_house.pory"

# 932 "data/scripts/players_house.pory"
@ Never called.
# 933 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_AirLatiBroadcast::
# 934 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 935 "data/scripts/players_house.pory"
	return
# 936 "data/scripts/players_house.pory"

# 937 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale::
# 938 "data/scripts/players_house.pory"
	setvar VAR_0x8008, MALE
# 939 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_DAD
# 940 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_MOM
# 941 "data/scripts/players_house.pory"
	return
# 942 "data/scripts/players_house.pory"

# 943 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale::
# 944 "data/scripts/players_house.pory"
	setvar VAR_0x8008, FEMALE
# 945 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_DAD
# 946 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_MOM
# 947 "data/scripts/players_house.pory"
	return
# 948 "data/scripts/players_house.pory"

# 949 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerMale::
# 950 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerMale
# 951 "data/scripts/players_house.pory"
	waitmovement 0
# 952 "data/scripts/players_house.pory"
	return
# 953 "data/scripts/players_house.pory"

# 954 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerFemale::
# 955 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerFemale
# 956 "data/scripts/players_house.pory"
	waitmovement 0
# 957 "data/scripts/players_house.pory"
	return
# 958 "data/scripts/players_house.pory"

# 959 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadMale::
# 960 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadMale
# 961 "data/scripts/players_house.pory"
	waitmovement 0
# 962 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomMale
# 963 "data/scripts/players_house.pory"
	waitmovement 0
# 964 "data/scripts/players_house.pory"
	return
# 965 "data/scripts/players_house.pory"

# 966 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadFemale::
# 967 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadFemale
# 968 "data/scripts/players_house.pory"
	waitmovement 0
# 969 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomFemale
# 970 "data/scripts/players_house.pory"
	waitmovement 0
# 971 "data/scripts/players_house.pory"
	return
# 972 "data/scripts/players_house.pory"

# 973 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsMale::
# 974 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 975 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 976 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsMale
# 977 "data/scripts/players_house.pory"
	waitmovement 0
# 978 "data/scripts/players_house.pory"
	return
# 979 "data/scripts/players_house.pory"

# 980 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsFemale::
# 981 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 982 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 983 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsFemale
# 984 "data/scripts/players_house.pory"
	waitmovement 0
# 985 "data/scripts/players_house.pory"
	return
# 986 "data/scripts/players_house.pory"

# 987 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomMale::
# 988 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomMale
# 989 "data/scripts/players_house.pory"
	waitmovement 0
# 990 "data/scripts/players_house.pory"
	return
# 991 "data/scripts/players_house.pory"

# 992 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomFemale::
# 993 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomFemale
# 994 "data/scripts/players_house.pory"
	waitmovement 0
# 995 "data/scripts/players_house.pory"
	return
# 996 "data/scripts/players_house.pory"

# 997 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale::
# 998 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale
# 999 "data/scripts/players_house.pory"
	waitmovement 0
# 1000 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterLeft
# 1001 "data/scripts/players_house.pory"
	waitmovement 0
# 1002 "data/scripts/players_house.pory"
	return
# 1003 "data/scripts/players_house.pory"

# 1004 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale::
# 1005 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale
# 1006 "data/scripts/players_house.pory"
	waitmovement 0
# 1007 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterRight
# 1008 "data/scripts/players_house.pory"
	waitmovement 0
# 1009 "data/scripts/players_house.pory"
	return
# 1010 "data/scripts/players_house.pory"

# 1011 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerMale::
# 1012 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerMale
# 1013 "data/scripts/players_house.pory"
	waitmovement 0
# 1014 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1015 "data/scripts/players_house.pory"
	waitmovement 0
# 1016 "data/scripts/players_house.pory"
	return
# 1017 "data/scripts/players_house.pory"

# 1018 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerFemale::
# 1019 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerFemale
# 1020 "data/scripts/players_house.pory"
	waitmovement 0
# 1021 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1022 "data/scripts/players_house.pory"
	waitmovement 0
# 1023 "data/scripts/players_house.pory"
	return
# 1024 "data/scripts/players_house.pory"

# 1025 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale::
# 1026 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale
# 1027 "data/scripts/players_house.pory"
	waitmovement 0
# 1028 "data/scripts/players_house.pory"
	return
# 1029 "data/scripts/players_house.pory"

# 1030 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale::
# 1031 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale
# 1032 "data/scripts/players_house.pory"
	waitmovement 0
# 1033 "data/scripts/players_house.pory"
	return
# 1034 "data/scripts/players_house.pory"

# 1035 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale::
# 1036 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale
# 1037 "data/scripts/players_house.pory"
	waitmovement 0
# 1038 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1039 "data/scripts/players_house.pory"
	waitmovement 0
# 1040 "data/scripts/players_house.pory"
	return
# 1041 "data/scripts/players_house.pory"

# 1042 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale::
# 1043 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale
# 1044 "data/scripts/players_house.pory"
	waitmovement 0
# 1045 "data/scripts/players_house.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1046 "data/scripts/players_house.pory"
	waitmovement 0
# 1047 "data/scripts/players_house.pory"
	return
# 1048 "data/scripts/players_house.pory"

# 1049 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerMale:
# 1050 "data/scripts/players_house.pory"
	walk_right
# 1051 "data/scripts/players_house.pory"
	walk_right
# 1052 "data/scripts/players_house.pory"
	step_end
# 1053 "data/scripts/players_house.pory"

# 1054 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerFemale:
# 1055 "data/scripts/players_house.pory"
	walk_left
# 1056 "data/scripts/players_house.pory"
	walk_left
# 1057 "data/scripts/players_house.pory"
	step_end
# 1058 "data/scripts/players_house.pory"

# 1059 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomMale:
# 1060 "data/scripts/players_house.pory"
	face_left
# 1061 "data/scripts/players_house.pory"
	step_end
# 1062 "data/scripts/players_house.pory"

# 1063 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomFemale:
# 1064 "data/scripts/players_house.pory"
	face_right
# 1065 "data/scripts/players_house.pory"
	step_end
# 1066 "data/scripts/players_house.pory"

# 1067 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsMale:
# 1068 "data/scripts/players_house.pory"
	walk_down
# 1069 "data/scripts/players_house.pory"
	walk_right
# 1070 "data/scripts/players_house.pory"
	walk_down
# 1071 "data/scripts/players_house.pory"
	delay_8
# 1072 "data/scripts/players_house.pory"
	step_end
# 1073 "data/scripts/players_house.pory"

# 1074 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsFemale:
# 1075 "data/scripts/players_house.pory"
	walk_down
# 1076 "data/scripts/players_house.pory"
	walk_left
# 1077 "data/scripts/players_house.pory"
	walk_down
# 1078 "data/scripts/players_house.pory"
	delay_8
# 1079 "data/scripts/players_house.pory"
	step_end
# 1080 "data/scripts/players_house.pory"

# 1081 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomMale:
# 1082 "data/scripts/players_house.pory"
	delay_16
# 1083 "data/scripts/players_house.pory"
	walk_down
# 1084 "data/scripts/players_house.pory"
	walk_down
# 1085 "data/scripts/players_house.pory"
	walk_down
# 1086 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 1087 "data/scripts/players_house.pory"
	step_end
# 1088 "data/scripts/players_house.pory"

# 1089 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit:
# 1090 "data/scripts/players_house.pory"
	delay_8
# 1091 "data/scripts/players_house.pory"
	delay_16
# 1092 "data/scripts/players_house.pory"
	delay_16
# 1093 "data/scripts/players_house.pory"
	walk_in_place_faster_down
# 1094 "data/scripts/players_house.pory"
	step_end
# 1095 "data/scripts/players_house.pory"

# 1096 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomFemale:
# 1097 "data/scripts/players_house.pory"
	delay_16
# 1098 "data/scripts/players_house.pory"
	walk_down
# 1099 "data/scripts/players_house.pory"
	walk_down
# 1100 "data/scripts/players_house.pory"
	walk_down
# 1101 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 1102 "data/scripts/players_house.pory"
	step_end
# 1103 "data/scripts/players_house.pory"

# 1104 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale:
# 1105 "data/scripts/players_house.pory"
	walk_up
# 1106 "data/scripts/players_house.pory"
	walk_left
# 1107 "data/scripts/players_house.pory"
	walk_left
# 1108 "data/scripts/players_house.pory"
	walk_left
# 1109 "data/scripts/players_house.pory"
	walk_left
# 1110 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 1111 "data/scripts/players_house.pory"
	step_end
# 1112 "data/scripts/players_house.pory"

# 1113 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale:
# 1114 "data/scripts/players_house.pory"
	walk_up
# 1115 "data/scripts/players_house.pory"
	walk_right
# 1116 "data/scripts/players_house.pory"
	walk_right
# 1117 "data/scripts/players_house.pory"
	walk_right
# 1118 "data/scripts/players_house.pory"
	walk_right
# 1119 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 1120 "data/scripts/players_house.pory"
	step_end
# 1121 "data/scripts/players_house.pory"

# 1122 "data/scripts/players_house.pory"
EventScript_RunningShoesManual::
# 1123 "data/scripts/players_house.pory"
	lockall
# 1124 "data/scripts/players_house.pory"
	call EventScript_RunningShoesManualTranslated
# 1125 "data/scripts/players_house.pory"
	releaseall
# 1126 "data/scripts/players_house.pory"
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
# 255 "data/scripts/players_house.pory"
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
# 274 "data/scripts/players_house.pory"
	.string "¿No es linda la casa?$"

PlayersHouse_1F_EventScript_EnterHouseMovingInTranslation_Text_1:
# 279 "data/scripts/players_house.pory"
	.string "Mientras Pokémon Movers termina de\n"
	.string "acomodar, ¿Porqué no pones en marcha\l"
	.string "el reloj que te compró Papá?$"

PlayersHouse_1F_EventScript_MomGoSeeRoomTranslated_Text_0:
# 302 "data/scripts/players_house.pory"
	.string "Haz lo que te digo.$"

PlayersHouse_2F_EventScript_HowDoYouLikeYourRoom_Text_0:
# 319 "data/scripts/players_house.pory"
	.string "¿Te gusta tu cuarto nuevo?\n"
	.string "No olvides tu Poción en la PC.$"

PlayersHouse_1F_EventScript_MaybeDadWillBeOn_Text_0:
# 331 "data/scripts/players_house.pory"
	.string "¡Ven, rápido, Papá está en la tele!$"

PlayersHouse_1F_EventScript_ItsOverWeMissedHim_Text_0:
# 343 "data/scripts/players_house.pory"
	.string "Terminó...\p"
	.string "Pues bueno, el Profesor me dijo que te\n"
	.string "preguntara algo.\p"
	.string "¿Cuál región tiene tus Iniciales\n"
	.string "favoritos?$"

PlayersHouse_1F_EventScript_StarterSet_TellProfessor_Text_0:
# 355 "data/scripts/players_house.pory"
	.string "Está bien. Se lo diré cuanto antes\n"
	.string "púeda.$"

PlayersHouse_1F_EventScript_StarterWantHardest_Text_0:
# 367 "data/scripts/players_house.pory"
	.string "¿Entonces quieres a los más difíciles\n"
	.string "de entrenar?$"

PlayersHouse_1F_EventScript_StarterWantHardest_Text_1:
# 378 "data/scripts/players_house.pory"
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
