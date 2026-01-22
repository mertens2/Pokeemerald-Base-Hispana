PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText::
# 3 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker Aqua
# 4 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_EVIL_TEAM_SIDE, 3
	goto_if_lt PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText_2
# 15 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve
	return

PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText_2:
# 7 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText_Text_0
	return


PetalburgWoods_EventScript_GetInvolved::
# 21 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 25 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_0, MSGBOX_YESNO
# 31 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker Aqua
# 32 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgWoods_EventScript_GetInvolved_2
# 37 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_EVIL_TEAM_SIDE, 2
# 40 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_1
# 41 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker EmpleadoDevon
# 42 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_2
# 43 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker Player
# 44 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_GetInvolved_Text_3
# 54 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 56 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 57 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 58 "data/maps/PetalburgWoods/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 59 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 60 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker Aqua
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

# 339 "data/maps/PetalburgWoods/scripts.pory"

# 340 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 342 "data/maps/PetalburgWoods/scripts.pory"

# 343 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 344 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 345 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 346 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 347 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 348 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker Unknown
# 349 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 350 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 351 "data/maps/PetalburgWoods/scripts.pory"
	
# 352 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 353 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 354 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 355 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker Unknown
# 356 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 357 "data/maps/PetalburgWoods/scripts.pory"
	
# 358 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 359 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 360 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 361 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 362 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 363 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker Unknown
# 364 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 365 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 366 "data/maps/PetalburgWoods/scripts.pory"
	
# 367 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 368 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 369 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker EmpleadoDevon
# 370 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 371 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 372 "data/maps/PetalburgWoods/scripts.pory"
	
# 373 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 374 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 375 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_GetInvolved
# 376 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 377 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 378 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 379 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 380 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 381 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 382 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 383 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 384 "data/maps/PetalburgWoods/scripts.pory"
	end
# 385 "data/maps/PetalburgWoods/scripts.pory"

# 386 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherCenter::
# 387 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 388 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 389 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerCenter
# 390 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 391 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 392 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 393 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 394 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 395 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 396 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker Unknown
# 397 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 398 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 399 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherCenter
# 400 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 401 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 402 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 403 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker Unknown
# 404 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 405 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 406 "data/maps/PetalburgWoods/scripts.pory"
	
# 407 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerCenter
# 408 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 409 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 410 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 411 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 412 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 413 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_GetInvolved
# 414 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 415 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 416 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 417 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 418 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 419 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 420 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 421 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 422 "data/maps/PetalburgWoods/scripts.pory"
	end
# 423 "data/maps/PetalburgWoods/scripts.pory"

# 424 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 425 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 426 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 427 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 428 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 429 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 430 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 431 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 432 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 433 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 434 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 435 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 436 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker Unknown
# 437 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 438 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 439 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 440 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 441 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 442 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 443 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker Unknown
# 444 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 445 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 446 "data/maps/PetalburgWoods/scripts.pory"
	
# 447 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 448 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 449 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 450 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 451 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 452 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 453 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_GetInvolved
# 454 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 455 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 456 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 457 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 458 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 459 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 460 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 461 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 462 "data/maps/PetalburgWoods/scripts.pory"
	end
# 463 "data/maps/PetalburgWoods/scripts.pory"

# 464 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 465 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 466 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 467 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker Unknown
# 468 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 469 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 470 "data/maps/PetalburgWoods/scripts.pory"
	
# 471 "data/maps/PetalburgWoods/scripts.pory"
	return
# 472 "data/maps/PetalburgWoods/scripts.pory"

# 473 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 474 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattleGruntText
# 475 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 476 "data/maps/PetalburgWoods/scripts.pory"
	
# 477 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 478 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 479 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 480 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 481 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 482 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker EmpleadoDevon
# 483 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 484 "data/maps/PetalburgWoods/scripts.pory"
	
# 485 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 486 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 487 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 488 "data/maps/PetalburgWoods/scripts.pory"
	end
# 489 "data/maps/PetalburgWoods/scripts.pory"

# 490 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 491 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 492 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 493 "data/maps/PetalburgWoods/scripts.pory"
	end
# 494 "data/maps/PetalburgWoods/scripts.pory"

# 495 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 496 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker EmpleadoDevon
# 497 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 498 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 499 "data/maps/PetalburgWoods/scripts.pory"
	
# 500 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 501 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 502 "data/maps/PetalburgWoods/scripts.pory"
	setspeaker EmpleadoDevon
# 503 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 504 "data/maps/PetalburgWoods/scripts.pory"
	
# 505 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 506 "data/maps/PetalburgWoods/scripts.pory"
	return
# 507 "data/maps/PetalburgWoods/scripts.pory"

# 508 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 509 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 510 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 511 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 512 "data/maps/PetalburgWoods/scripts.pory"
	end
# 513 "data/maps/PetalburgWoods/scripts.pory"

# 514 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 515 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 516 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 517 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 518 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 519 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 520 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 521 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 522 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 523 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 524 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 525 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 526 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 527 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 528 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 529 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 530 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 531 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 532 "data/maps/PetalburgWoods/scripts.pory"

# 533 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 534 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 535 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
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
	step_end
# 544 "data/maps/PetalburgWoods/scripts.pory"

# 545 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 546 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 547 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 548 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 549 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 550 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 551 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 552 "data/maps/PetalburgWoods/scripts.pory"

# 553 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 554 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 555 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 556 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 557 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 559 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 560 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerCenter:
# 561 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 562 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 563 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 564 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 565 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 566 "data/maps/PetalburgWoods/scripts.pory"

# 567 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 568 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 569 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
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
	step_end
# 578 "data/maps/PetalburgWoods/scripts.pory"

# 579 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 580 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 581 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 582 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_left
# 583 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 584 "data/maps/PetalburgWoods/scripts.pory"

# 585 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 586 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 587 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 588 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 589 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 590 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_left
# 591 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 592 "data/maps/PetalburgWoods/scripts.pory"

# 593 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerCenter:
# 594 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 595 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 596 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 597 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 598 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_left
# 599 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 600 "data/maps/PetalburgWoods/scripts.pory"

# 601 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 602 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 603 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 604 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 605 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 606 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_left
# 607 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 608 "data/maps/PetalburgWoods/scripts.pory"

# 609 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 610 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 611 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 612 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 613 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 614 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 615 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 616 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 617 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 618 "data/maps/PetalburgWoods/scripts.pory"

# 619 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 620 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 621 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 622 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 623 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 624 "data/maps/PetalburgWoods/scripts.pory"

# 625 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 626 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 627 "data/maps/PetalburgWoods/scripts.pory"
	walk_left
# 628 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 629 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 630 "data/maps/PetalburgWoods/scripts.pory"

# 631 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 632 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
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
	delay_16
# 640 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 641 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 642 "data/maps/PetalburgWoods/scripts.pory"

# 643 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 644 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 645 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 646 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 647 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 648 "data/maps/PetalburgWoods/scripts.pory"

# 649 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherCenter:
# 650 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 651 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 652 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 653 "data/maps/PetalburgWoods/scripts.pory"

# 654 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 655 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 656 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 657 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 658 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 659 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 660 "data/maps/PetalburgWoods/scripts.pory"

# 661 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 662 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 663 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 664 "data/maps/PetalburgWoods/scripts.pory"

# 665 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 666 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 667 "data/maps/PetalburgWoods/scripts.pory"
	end
# 668 "data/maps/PetalburgWoods/scripts.pory"

# 669 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 670 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 671 "data/maps/PetalburgWoods/scripts.pory"
	end
# 672 "data/maps/PetalburgWoods/scripts.pory"

# 673 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 674 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 675 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 676 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 677 "data/maps/PetalburgWoods/scripts.pory"
	pokemart PetalburgWoods_SpecialMart
# 678 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 679 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 680 "data/maps/PetalburgWoods/scripts.pory"
	end
# 681 "data/maps/PetalburgWoods/scripts.pory"

# 682 "data/maps/PetalburgWoods/scripts.pory"
.align 2
# 683 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_SpecialMart:
# 684 "data/maps/PetalburgWoods/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 685 "data/maps/PetalburgWoods/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 686 "data/maps/PetalburgWoods/scripts.pory"
	.2byte ITEM_CHARCOAL
# 687 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_BLACK_BELT
# 688 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_HARD_STONE
# 689 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_DRAGON_FANG
# 690 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SILK_SCARF
# 691 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_MAGNET
# 692 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_NEVER_MELT_ICE
# 693 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_POISON_BARB
# 694 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SHARP_BEAK
# 695 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SOFT_SAND
# 696 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_TWISTED_SPOON
# 697 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SILVER_POWDER
# 698 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_SPELL_TAG
# 699 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_BLACK_GLASSES
# 700 "data/maps/PetalburgWoods/scripts.pory"
    .2byte ITEM_METAL_COAT
# 701 "data/maps/PetalburgWoods/scripts.pory"
	.2byte ITEM_NONE
# 702 "data/maps/PetalburgWoods/scripts.pory"
	release
# 703 "data/maps/PetalburgWoods/scripts.pory"
	end
# 704 "data/maps/PetalburgWoods/scripts.pory"

# 705 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 706 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 707 "data/maps/PetalburgWoods/scripts.pory"
	release
# 708 "data/maps/PetalburgWoods/scripts.pory"
	end
# 709 "data/maps/PetalburgWoods/scripts.pory"

# 710 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 711 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 712 "data/maps/PetalburgWoods/scripts.pory"
	end
# 713 "data/maps/PetalburgWoods/scripts.pory"

# 714 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 715 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 716 "data/maps/PetalburgWoods/scripts.pory"
	end
# 717 "data/maps/PetalburgWoods/scripts.pory"

# 718 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 719 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 720 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 721 "data/maps/PetalburgWoods/scripts.pory"
	end
# 722 "data/maps/PetalburgWoods/scripts.pory"

# 723 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 724 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 725 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 726 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 727 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 728 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 729 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 730 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 731 "data/maps/PetalburgWoods/scripts.pory"
	release
# 732 "data/maps/PetalburgWoods/scripts.pory"
	end
# 733 "data/maps/PetalburgWoods/scripts.pory"

# 734 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 735 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 736 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 737 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 738 "data/maps/PetalburgWoods/scripts.pory"
	release
# 739 "data/maps/PetalburgWoods/scripts.pory"
	end
# 740 "data/maps/PetalburgWoods/scripts.pory"

# 741 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 742 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 743 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 744 "data/maps/PetalburgWoods/scripts.pory"
	release
# 745 "data/maps/PetalburgWoods/scripts.pory"
	end
# 746 "data/maps/PetalburgWoods/scripts.pory"

# 747 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 748 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 749 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 750 "data/maps/PetalburgWoods/scripts.pory"
	release
# 751 "data/maps/PetalburgWoods/scripts.pory"
	end
# 752 "data/maps/PetalburgWoods/scripts.pory"

# 753 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 754 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 755 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 756 "data/maps/PetalburgWoods/scripts.pory"
	release
# 757 "data/maps/PetalburgWoods/scripts.pory"
	end
# 758 "data/maps/PetalburgWoods/scripts.pory"

# 759 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 760 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 761 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 762 "data/maps/PetalburgWoods/scripts.pory"
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
