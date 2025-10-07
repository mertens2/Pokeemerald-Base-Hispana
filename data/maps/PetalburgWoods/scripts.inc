PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText::
# 3 "data/maps/PetalburgWoods/scripts.pory"
	namebox Aqua
# 4 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_EVIL_TEAM_SIDE, 3
	goto_if_lt PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText_2
# 15 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve
# 16 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
	return

PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText_2:
# 7 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText_Text_0
	return


PetalburgWoods_EventScript_GetInvolved::
# 21 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 22 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 25 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_0, MSGBOX_YESNO
# 31 "data/maps/PetalburgWoods/scripts.pory"
	namebox Aqua
# 32 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgWoods_EventScript_GetInvolved_2
# 37 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_EVIL_TEAM_SIDE, 2
# 40 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_1
# 41 "data/maps/PetalburgWoods/scripts.pory"
	namebox EmpleadoDevon
# 42 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_2
# 43 "data/maps/PetalburgWoods/scripts.pory"
	namebox Player
# 44 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_3
# 54 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 55 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 56 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 57 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 58 "data/maps/PetalburgWoods/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 59 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 60 "data/maps/PetalburgWoods/scripts.pory"
	namebox Aqua
# 63 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_4
PetalburgWoods_EventScript_GetInvolved_1:
	return

PetalburgWoods_EventScript_GetInvolved_2:
# 33 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_EVIL_TEAM_SIDE, 3
# 34 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua
	goto PetalburgWoods_EventScript_GetInvolved_1


# 337 "data/maps/PetalburgWoods/scripts.pory"

# 338 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 339 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 340 "data/maps/PetalburgWoods/scripts.pory"

# 341 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 343 "data/maps/PetalburgWoods/scripts.pory"

# 344 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 345 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 346 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 347 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 348 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 349 "data/maps/PetalburgWoods/scripts.pory"
	namebox Unknown
# 350 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 351 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 352 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 353 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 354 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 355 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 356 "data/maps/PetalburgWoods/scripts.pory"
	namebox Unknown
# 357 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 358 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 359 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 360 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 361 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 362 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 363 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 364 "data/maps/PetalburgWoods/scripts.pory"
	namebox Unknown
# 365 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 366 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 367 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 368 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 369 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 370 "data/maps/PetalburgWoods/scripts.pory"
	namebox EmpleadoDevon
# 371 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 372 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 373 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 374 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 375 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 376 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_GetInvolved
# 377 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 378 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 379 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 380 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 381 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 382 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 383 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 384 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 385 "data/maps/PetalburgWoods/scripts.pory"
	end
# 386 "data/maps/PetalburgWoods/scripts.pory"

# 387 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherCenter::
# 388 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 389 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 390 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerCenter
# 391 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 392 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 393 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 394 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 395 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 396 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 397 "data/maps/PetalburgWoods/scripts.pory"
	namebox Unknown
# 398 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 399 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 400 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherCenter
# 401 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 402 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 403 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 404 "data/maps/PetalburgWoods/scripts.pory"
	namebox Unknown
# 405 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 406 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 407 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 408 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerCenter
# 409 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 410 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 411 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 412 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 413 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 414 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_GetInvolved
# 415 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 416 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 417 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 418 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 419 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 420 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 421 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 422 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 423 "data/maps/PetalburgWoods/scripts.pory"
	end
# 424 "data/maps/PetalburgWoods/scripts.pory"

# 425 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 426 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 427 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 428 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 429 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 430 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 431 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 432 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 433 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 434 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 435 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 436 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 437 "data/maps/PetalburgWoods/scripts.pory"
	namebox Unknown
# 438 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 439 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 440 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 441 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 442 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 443 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 444 "data/maps/PetalburgWoods/scripts.pory"
	namebox Unknown
# 445 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 446 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 447 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 448 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 449 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 450 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 451 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 452 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 453 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 454 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_GetInvolved
# 455 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 456 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 457 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 458 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 459 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 460 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 461 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 462 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 463 "data/maps/PetalburgWoods/scripts.pory"
	end
# 464 "data/maps/PetalburgWoods/scripts.pory"

# 465 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 466 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 467 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 468 "data/maps/PetalburgWoods/scripts.pory"
	namebox Unknown
# 469 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 470 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 471 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 472 "data/maps/PetalburgWoods/scripts.pory"
	return
# 473 "data/maps/PetalburgWoods/scripts.pory"

# 474 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 475 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText
# 476 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 477 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 478 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 479 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 480 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 481 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 482 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 483 "data/maps/PetalburgWoods/scripts.pory"
	namebox EmpleadoDevon
# 484 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 485 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 486 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 487 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 488 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 489 "data/maps/PetalburgWoods/scripts.pory"
	end
# 490 "data/maps/PetalburgWoods/scripts.pory"

# 491 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 492 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 493 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 494 "data/maps/PetalburgWoods/scripts.pory"
	end
# 495 "data/maps/PetalburgWoods/scripts.pory"

# 496 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 497 "data/maps/PetalburgWoods/scripts.pory"
	namebox EmpleadoDevon
# 498 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 499 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 500 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 501 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 502 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 503 "data/maps/PetalburgWoods/scripts.pory"
	namebox EmpleadoDevon
# 504 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 505 "data/maps/PetalburgWoods/scripts.pory"
	hidenamebox
# 506 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 507 "data/maps/PetalburgWoods/scripts.pory"
	return
# 508 "data/maps/PetalburgWoods/scripts.pory"

# 509 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 510 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 511 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 512 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 513 "data/maps/PetalburgWoods/scripts.pory"
	end
# 514 "data/maps/PetalburgWoods/scripts.pory"

# 515 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 516 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 517 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 518 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 519 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 520 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 521 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 522 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 523 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 524 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 525 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 526 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 527 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 528 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 529 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 530 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 531 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 532 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 533 "data/maps/PetalburgWoods/scripts.pory"

# 534 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 535 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 536 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 537 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 538 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 539 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 540 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 541 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 542 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 543 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 544 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 545 "data/maps/PetalburgWoods/scripts.pory"

# 546 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 547 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 548 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 549 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 550 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 551 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 552 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 553 "data/maps/PetalburgWoods/scripts.pory"

# 554 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 555 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 556 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 557 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 559 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 560 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 561 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerCenter:
# 562 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 563 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 564 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 565 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 566 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 567 "data/maps/PetalburgWoods/scripts.pory"

# 568 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 569 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 570 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 571 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 572 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 573 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 574 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 575 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 576 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 577 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 578 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 579 "data/maps/PetalburgWoods/scripts.pory"

# 580 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 581 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 582 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 583 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_left
# 584 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 585 "data/maps/PetalburgWoods/scripts.pory"

# 586 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 587 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 588 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 589 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 590 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 591 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_left
# 592 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 593 "data/maps/PetalburgWoods/scripts.pory"

# 594 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerCenter:
# 595 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 596 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 597 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 598 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 599 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_left
# 600 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 601 "data/maps/PetalburgWoods/scripts.pory"

# 602 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 603 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 604 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 605 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 606 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 607 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_left
# 608 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 609 "data/maps/PetalburgWoods/scripts.pory"

# 610 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 611 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 612 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 613 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 614 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 615 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 616 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 617 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 618 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 619 "data/maps/PetalburgWoods/scripts.pory"

# 620 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 621 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 622 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 623 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 624 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 625 "data/maps/PetalburgWoods/scripts.pory"

# 626 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 627 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 628 "data/maps/PetalburgWoods/scripts.pory"
	walk_left
# 629 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 630 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 631 "data/maps/PetalburgWoods/scripts.pory"

# 632 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 633 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 634 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 635 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 636 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 637 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 638 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 639 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 640 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 641 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 642 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 643 "data/maps/PetalburgWoods/scripts.pory"

# 644 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 645 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 646 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 647 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 648 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 649 "data/maps/PetalburgWoods/scripts.pory"

# 650 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherCenter:
# 651 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 652 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 653 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 654 "data/maps/PetalburgWoods/scripts.pory"

# 655 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 656 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 657 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 658 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 659 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 660 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 661 "data/maps/PetalburgWoods/scripts.pory"

# 662 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 663 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 664 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 665 "data/maps/PetalburgWoods/scripts.pory"

# 666 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 667 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 668 "data/maps/PetalburgWoods/scripts.pory"
	end
# 669 "data/maps/PetalburgWoods/scripts.pory"

# 670 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 671 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 672 "data/maps/PetalburgWoods/scripts.pory"
	end
# 673 "data/maps/PetalburgWoods/scripts.pory"

# 674 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 675 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 676 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 677 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 678 "data/maps/PetalburgWoods/scripts.pory"
	pokemart PetalburgWoods_SpecialMart
# 679 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 680 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 681 "data/maps/PetalburgWoods/scripts.pory"
	end
# 682 "data/maps/PetalburgWoods/scripts.pory"

# 683 "data/maps/PetalburgWoods/scripts.pory"
.align 2
# 684 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_SpecialMart:
# 685 "data/maps/PetalburgWoods/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 686 "data/maps/PetalburgWoods/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 687 "data/maps/PetalburgWoods/scripts.pory"
	.2byte ITEM_CHARCOAL
# 688 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_BLACK_BELT
# 689 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_HARD_STONE
# 690 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_DRAGON_FANG
# 691 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SILK_SCARF
# 692 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_MAGNET
# 693 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_NEVER_MELT_ICE
# 694 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_POISON_BARB
# 695 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SHARP_BEAK
# 696 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SOFT_SAND
# 697 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_TWISTED_SPOON
# 698 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SILVER_POWDER
# 699 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SPELL_TAG
# 700 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_BLACK_GLASSES
# 701 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_METAL_COAT
# 702 "data/maps/PetalburgWoods/scripts.pory"
	.2byte ITEM_NONE
# 703 "data/maps/PetalburgWoods/scripts.pory"
	release
# 704 "data/maps/PetalburgWoods/scripts.pory"
	end
# 705 "data/maps/PetalburgWoods/scripts.pory"

# 706 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 707 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 708 "data/maps/PetalburgWoods/scripts.pory"
	release
# 709 "data/maps/PetalburgWoods/scripts.pory"
	end
# 710 "data/maps/PetalburgWoods/scripts.pory"

# 711 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 712 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 713 "data/maps/PetalburgWoods/scripts.pory"
	end
# 714 "data/maps/PetalburgWoods/scripts.pory"

# 715 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 716 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 717 "data/maps/PetalburgWoods/scripts.pory"
	end
# 718 "data/maps/PetalburgWoods/scripts.pory"

# 719 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 720 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 721 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 722 "data/maps/PetalburgWoods/scripts.pory"
	end
# 723 "data/maps/PetalburgWoods/scripts.pory"

# 724 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 725 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 726 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 727 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 728 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 729 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 730 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 731 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 732 "data/maps/PetalburgWoods/scripts.pory"
	release
# 733 "data/maps/PetalburgWoods/scripts.pory"
	end
# 734 "data/maps/PetalburgWoods/scripts.pory"

# 735 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 736 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 737 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 738 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 739 "data/maps/PetalburgWoods/scripts.pory"
	release
# 740 "data/maps/PetalburgWoods/scripts.pory"
	end
# 741 "data/maps/PetalburgWoods/scripts.pory"

# 742 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 743 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 744 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 745 "data/maps/PetalburgWoods/scripts.pory"
	release
# 746 "data/maps/PetalburgWoods/scripts.pory"
	end
# 747 "data/maps/PetalburgWoods/scripts.pory"

# 748 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 749 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 750 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 751 "data/maps/PetalburgWoods/scripts.pory"
	release
# 752 "data/maps/PetalburgWoods/scripts.pory"
	end
# 753 "data/maps/PetalburgWoods/scripts.pory"

# 754 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 755 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 756 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 757 "data/maps/PetalburgWoods/scripts.pory"
	release
# 758 "data/maps/PetalburgWoods/scripts.pory"
	end
# 759 "data/maps/PetalburgWoods/scripts.pory"

# 760 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 761 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 762 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 763 "data/maps/PetalburgWoods/scripts.pory"
	end

PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText_Text_0:
# 7 "data/maps/PetalburgWoods/scripts.pory"
	.string "Con alguien tan fuerte como tú,\n"
	.string "¡Seríamos diez veces más imparables!\p"
	.string "Espero que recapacites... Tienes tiempo,\n"
	.string "aún hay cosas por hacer en Rustboro…$"

PetalburgWoods_EventScript_GetInvolved_Text_0:
# 25 "data/maps/PetalburgWoods/scripts.pory"
	.string "¿Quieres involucrarte?$"

PetalburgWoods_EventScript_GetInvolved_Text_1:
# 40 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Jojojo!\p"
	.string "¡Parece que nadie va a ayudarte\n"
	.string "después de todo!$"

PetalburgWoods_EventScript_GetInvolved_Text_2:
# 42 "data/maps/PetalburgWoods/scripts.pory"
	.string "¿¡PERO QÚE HACES!?\p"
	.string "¡ESTO ES IMPORTANTE!\p"
	.string "¡ATACA, ATACA, ATACA!$"

PetalburgWoods_EventScript_GetInvolved_Text_3:
# 44 "data/maps/PetalburgWoods/scripts.pory"
	.string "{COLOR BLUE}(Parece que no me queda de otra, este\n"
	.string "loco no me dejará ignorarlo...)\p"
	.string "(Pero... Tampoco parece que el Recluta\n"
	.string "se olvidará de esto.){COLOR DARK_GRAY}$"

PetalburgWoods_EventScript_GetInvolved_Text_4:
# 63 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Pero decídete, niñ{OA}!\p"
	.string "¿Estás con nosotros o no?\p"
	.string "¡Quizá una golpiza te haga decidirte!$"

PetalburgWoods_Text_NotAOneToBeFound::
# 73 "data/maps/PetalburgWoods/scripts.pory"
	.string "No encuentro ni uno...$"

PetalburgWoods_Text_HaveYouSeenShroomish::
# 84 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Hola! ¿Has visto al Pokémon\n"
	.string "“Shroomish” por aquí?\p"
	.string "¡Amo a ese Pokémon!\n"
	.string "¡Oh, y escuché que “Morellul” suele\l"
	.string "aparecer de noche!$"

PetalburgWoods_Text_IWasGoingToAmbushYou::
# 98 "data/maps/PetalburgWoods/scripts.pory"
	.string "¿Porqué estás escapando de mí?\n"
	.string "¡Ya dame los {COLOR BLUE}Planos{COLOR DARK_GRAY} y déjame terminar\l"
	.string "esta misión!$"

PetalburgWoods_Text_HandOverThosePapers::
# 113 "data/maps/PetalburgWoods/scripts.pory"
	.string "¿Así que es eso, eh?\n"
	.string "¿La Gran Corporación Devon se\l"
	.string "arrepintió?\p"
	.string "¡No me importa, ya dame esos Planos!$"

PetalburgWoods_Text_YouHaveToHelpMe::
# 129 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡AAAAAAHHHHH!\p"
	.string "¡SIRVE DE ALGO Y AYÚDAME!$"

PetalburgWoods_Text_NoOneCrossesTeamAqua::
# 143 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ojojojojo, ¿Así que vas a protegerlo,\n"
	.string "no? ¡Pues contra el poderoso {COLOR LIGHT_BLUE}{SHADOW BLUE}Equipo\l"
	.string "Aqua{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} no podrás!$"

PetalburgWoods_Text_YoureKiddingMe::
# 157 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡I-imposible!\n"
	.string "¡Sí que pudiste!$"

PetalburgWoods_Text_YouveGotSomeNerve::
# 171 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡ARGH!\p"
	.string "¡Eres un{A} estúpid{OA} por meterte con el\n"
	.string "grandioso Equipo Aqua!\p"
	.string "Pero no importa, después de todo, no es\n"
	.string "lo único que el Equipo Aqua necesita\l"
	.string "de Rustboro………$"

PetalburgWoods_Text_ThatWasAwfullyClose::
# 187 "data/maps/PetalburgWoods/scripts.pory"
	.string "Fiu…\n"
	.string "Eso estuvo demasiado cerca…\l"
	.string "¡Pero bueno, gracias de todas formas!\p"
	.string "¡Ten esto!$"

PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro::
# 203 "data/maps/PetalburgWoods/scripts.pory"
	.string "…………………………………$"

PetalburgWoods_Text_ICantBeWastingTime::
# 207 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡UN MONENTO, YA SÉ LO QUE QUIEREN!\p"
	.string "¡DEBO CUIDARLAS O SERÁN ROBADAS!$"

PetalburgWoods_Text_YoureLoadedWithItems::
# 220 "data/maps/PetalburgWoods/scripts.pory"
	.string "De alguna forma no tienes espacio.$"

PetalburgWoods_Text_GoBugPokemonTeam::
# 224 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡AL ESCONDERME EN EL ARBOL,\n"
	.string "PUDE ATRAPAR MUCHOS BICHOS!\p"
	.string "¡GO, GO, GO!\n"
	.string "¡MI MONOTYPE BICHO!$"

PetalburgWoods_Text_ICouldntWin::
# 231 "data/maps/PetalburgWoods/scripts.pory"
	.string "Incluso con tantos,\n"
	.string "no pude ganar…$"

PetalburgWoods_Text_ImOutOfPokeBalls::
# 236 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokéballs. Necesito.$"

PetalburgWoods_Text_InstantlyPopularWithBugPokemon::
# 240 "data/maps/PetalburgWoods/scripts.pory"
	.string "Si llevas tus Pokémon al colegio,\n"
	.string "¡Te harás muy popular!$"

PetalburgWoods_Text_CantBePopularIfILose::
# 245 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pero si pierdo me odiarán.$"

PetalburgWoods_Text_PeopleRespectYou::
# 249 "data/maps/PetalburgWoods/scripts.pory"
	.string "Si tienes un tipo Bicho grande,\n"
	.string "la gente se interesará en ti.\p"
	.string "Al menos eso dijo mi papá.$"

PetalburgWoods_Text_IWantRematch1::
# 255 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡QUIERO LA REVANCHA!\p"
	.string "¡TE DIRÉ CUANDO HAYAN CRECIDO!$"

PetalburgWoods_Text_IWantRematch2::
# 260 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡QUIERO LA REVANCHA!\p"
	.string "¡TE DIRÉ CUANDO HAYAN CRECIDO!$"

PetalburgWoods_Text_MyPokemonHaveGrown::
# 265 "data/maps/PetalburgWoods/scripts.pory"
	.string "Mis Bichos ahora son grandes.\n"
	.string "Todo-digo todas me amarán.$"

PetalburgWoods_Text_CantBePopularIfLose::
# 270 "data/maps/PetalburgWoods/scripts.pory"
	.string "Mis bichos no fueron lo\n"
	.string "suficientemente fuertes para\l"
	.string "impresionarte.$"

PetalburgWoods_Text_IveBeenTrainingHard::
# 276 "data/maps/PetalburgWoods/scripts.pory"
	.string "Los Pokémon fuertes impresionan\n"
	.string "a los-las chicas, ¿no?\l"
	.string "Entrené mucho para eso.$"

PetalburgWoods_Text_StayOutOfTallGrass::
# 282 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Che, vos!\n"
	.string "¿Están bien tus Pokes?\p"
	.string "Si no es asi, esquivá el pasto.$"

PetalburgWoods_Text_HiddenItemsExplanation::
# 288 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aveces, hay Pokémon raros\n"
	.string "que aparecen al {COLOR RED}encadenar{COLOR DARK_GRAY}\l"
	.string "Pokemon salvajes.\p"
	.string "Por ejemplo, estoy buscando un Phantum.$"

PetalburgWoods_Text_TryUsingThisItem::
# 295 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Ah, genial!\n"
	.string "¡Es la {COLOR GREEN}Medalla de Rustboro{COLOR DARK_GRAY}!\p"
	.string "¡Esta es una tienda especial!$"

PetalburgWoods_Text_MiracleSeedExplanation::
# 301 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Vuelva pronto!$"

PetalburgWoods_Text_TrainerTipsExperience::
# 305 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡PISTAS PARA ENTRENADORES!\p"
	.string "¡No subestimes el poder de los Pokémon\n"
	.string "de Tipo Bicho!\p"
	.string "¡Algunos pueden ponerte en un aprieto,\n"
	.string "sobretodo si usas un Tipo Hada!\p"
	.string "¡No olvides que también son inmunes a la\n"
	.string "confusión!$"

PetalburgWoods_Text_TrainerTipsPP::
# 323 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡PISTAS PARA ENTRENADORES!\p"
	.string "Los Pokémon a la noche son de más alto\n"
	.string "nivel.\p"
	.string "Si buscas agregar algo a tu Equipo a\n"
	.string "último momento, ¡Busca de noche!$"
