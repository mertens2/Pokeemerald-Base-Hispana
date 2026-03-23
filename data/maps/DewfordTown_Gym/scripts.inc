DewfordTown_Gym_EventScript_Brawly::
# 2 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly_2
DewfordTown_Gym_EventScript_Brawly_1:
# 7 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_STARTED_BOSS
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	special SavePlayerParty
# 9 "data/maps/DewfordTown_Gym/scripts.pory"
	special HealPlayerParty
# 10 "data/maps/DewfordTown_Gym/scripts.pory"
	deletepokemon 1
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, DewfordTown_Gym_EventScript_Brawly_15
DewfordTown_Gym_EventScript_Brawly_10:
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, DewfordTown_Gym_EventScript_Brawly_9
DewfordTown_Gym_EventScript_Brawly_8:
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, DewfordTown_Gym_EventScript_Brawly_12
DewfordTown_Gym_EventScript_Brawly_7:
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_2, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
DewfordTown_Gym_EventScript_Brawly_4:
	checkitem ITEM_TM08
# 0 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_19
DewfordTown_Gym_EventScript_Brawly_18:
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end

DewfordTown_Gym_EventScript_Brawly_2:
# 5 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_Brawly_Rematch
	goto DewfordTown_Gym_EventScript_Brawly_1

DewfordTown_Gym_EventScript_Brawly_5:
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_4, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	goto DewfordTown_Gym_EventScript_Brawly_4

DewfordTown_Gym_EventScript_Brawly_6:
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_GYM_3, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	goto DewfordTown_Gym_EventScript_Brawly_4

DewfordTown_Gym_EventScript_Brawly_9:
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, DewfordTown_Gym_EventScript_Brawly_6
	goto DewfordTown_Gym_EventScript_Brawly_8

DewfordTown_Gym_EventScript_Brawly_12:
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, DewfordTown_Gym_EventScript_Brawly_6
	goto DewfordTown_Gym_EventScript_Brawly_7

DewfordTown_Gym_EventScript_Brawly_15:
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, DewfordTown_Gym_EventScript_Brawly_5
	goto DewfordTown_Gym_EventScript_Brawly_10

DewfordTown_Gym_EventScript_Brawly_19:
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GiveBulkUp2
	goto DewfordTown_Gym_EventScript_Brawly_18


# 428 "data/maps/DewfordTown_Gym/scripts.pory"

# 429 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_GUIDE, 5
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 433 "data/maps/DewfordTown_Gym/scripts.pory"

# 434 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 435 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 437 "data/maps/DewfordTown_Gym/scripts.pory"

# 438 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 442 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
# 443 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
# 446 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 447 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 449 "data/maps/DewfordTown_Gym/scripts.pory"

# 450 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuideTrigger::
# 451 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_0, 1
# 452 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_GymGuideTriggerEnd
# 453 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_PIN
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_GUIDE, Common_Movement_ExclamationMark
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 458 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymGuide2
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 461 "data/maps/DewfordTown_Gym/scripts.pory"

# 462 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuideTriggerEnd::
# 463 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 464 "data/maps/DewfordTown_Gym/scripts.pory"

# 465 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 467 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 468 "data/maps/DewfordTown_Gym/scripts.pory"

# 469 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 470 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 471 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 472 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 473 "data/maps/DewfordTown_Gym/scripts.pory"

# 474 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 475 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 476 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 477 "data/maps/DewfordTown_Gym/scripts.pory"

# 478 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 479 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 480 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 481 "data/maps/DewfordTown_Gym/scripts.pory"

# 482 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 483 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 484 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 485 "data/maps/DewfordTown_Gym/scripts.pory"

# 486 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 487 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 488 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 489 "data/maps/DewfordTown_Gym/scripts.pory"

# 490 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 491 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 492 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 493 "data/maps/DewfordTown_Gym/scripts.pory"

# 494 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 495 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 496 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 497 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 498 "data/maps/DewfordTown_Gym/scripts.pory"

# 499 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 500 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 501 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 502 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 503 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 504 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 505 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 506 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 507 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 508 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 509 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 510 "data/maps/DewfordTown_Gym/scripts.pory"

# 511 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 512 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 513 "data/maps/DewfordTown_Gym/scripts.pory"

# 514 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 515 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 516 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 517 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 518 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 519 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 520 "data/maps/DewfordTown_Gym/scripts.pory"

# 521 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 522 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 523 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 524 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 525 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 526 "data/maps/DewfordTown_Gym/scripts.pory"

# 527 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 528 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 529 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 530 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 531 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 532 "data/maps/DewfordTown_Gym/scripts.pory"

# 533 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 534 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 535 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 536 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 537 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 538 "data/maps/DewfordTown_Gym/scripts.pory"

# 539 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 540 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 541 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 542 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 543 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 544 "data/maps/DewfordTown_Gym/scripts.pory"

# 545 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 546 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 547 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 548 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 549 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 550 "data/maps/DewfordTown_Gym/scripts.pory"

# 551 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 552 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 553 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 554 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 555 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 556 "data/maps/DewfordTown_Gym/scripts.pory"

# 557 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 558 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 559 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 560 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 561 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 562 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 563 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 564 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 565 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 566 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 567 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 568 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 569 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 570 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 571 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 572 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 573 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 574 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 575 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 576 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 577 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 578 "data/maps/DewfordTown_Gym/scripts.pory"

# 579 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_Rematch::
# 580 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 581 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_Brawly_Rematch_2
# 582 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_BRAWLY_REMATCH
# 583 "data/maps/DewfordTown_Gym/scripts.pory"
	case 0, DewfordTown_Gym_EventScript_Brawly_Rematch_2
# 584 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Brawly_Rematch_3
# 585 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Brawly_Rematch_4
# 586 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Brawly_Rematch_5
# 587 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Brawly_Rematch_6
# 588 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 589 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_BRAWLY_REMATCH, 1
# 590 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 591 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 592 "data/maps/DewfordTown_Gym/scripts.pory"

# 593 "data/maps/DewfordTown_Gym/scripts.pory"

# 594 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_Rematch_2:
# 595 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 596 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 597 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 598 "data/maps/DewfordTown_Gym/scripts.pory"

# 599 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_Rematch_3:
# 600 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_STARTED_BOSS
# 601 "data/maps/DewfordTown_Gym/scripts.pory"
	special SavePlayerParty
# 602 "data/maps/DewfordTown_Gym/scripts.pory"
	deletepokemon 4
# 603 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_double TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyIntro2, DewfordTown_Gym_Text_BrawlyDefeat2, DewfordTown_Gym_EventScript_BrawlyNotEnough , DewfordTown_Gym_EventScript_BrawlyDefeated2
# 604 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_Brawly_Rematch_2
# 605 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 606 "data/maps/DewfordTown_Gym/scripts.pory"

# 607 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_Rematch_4:
# 608 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_STARTED_BOSS
# 609 "data/maps/DewfordTown_Gym/scripts.pory"
	special SavePlayerParty
# 610 "data/maps/DewfordTown_Gym/scripts.pory"
	deletepokemon 2
# 611 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_double TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyIntro3, DewfordTown_Gym_Text_BrawlyDefeat2, DewfordTown_Gym_EventScript_BrawlyNotEnough, DewfordTown_Gym_EventScript_BrawlyDefeated2
# 612 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_Brawly_Rematch_2
# 613 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 614 "data/maps/DewfordTown_Gym/scripts.pory"

# 615 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_Rematch_5:
# 616 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_STARTED_BOSS
# 617 "data/maps/DewfordTown_Gym/scripts.pory"
	special SavePlayerParty
# 618 "data/maps/DewfordTown_Gym/scripts.pory"
	deletepokemon 4
# 619 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_double TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyIntro4, DewfordTown_Gym_Text_BrawlyDefeat2, DewfordTown_Gym_EventScript_BrawlyNotEnough, DewfordTown_Gym_EventScript_BrawlyDefeated31
# 620 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_Brawly_Rematch_2
# 621 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 622 "data/maps/DewfordTown_Gym/scripts.pory"

# 623 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_Rematch_6:
# 624 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_STARTED_BOSS
# 625 "data/maps/DewfordTown_Gym/scripts.pory"
	special SavePlayerParty
# 626 "data/maps/DewfordTown_Gym/scripts.pory"
	deletepokemon 4
# 627 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_double TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyIntro5, DewfordTown_Gym_Text_BrawlyDefeat2, DewfordTown_Gym_EventScript_BrawlyNotEnough, DewfordTown_Gym_EventScript_BrawlyDefeated3
# 628 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_Brawly_Rematch_2
# 629 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 630 "data/maps/DewfordTown_Gym/scripts.pory"

# 631 "data/maps/DewfordTown_Gym/scripts.pory"

# 632 "data/maps/DewfordTown_Gym/scripts.pory"

# 633 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated2::
# 634 "data/maps/DewfordTown_Gym/scripts.pory"
	savepartofteam
# 635 "data/maps/DewfordTown_Gym/scripts.pory"
	special LoadPlayerParty
# 636 "data/maps/DewfordTown_Gym/scripts.pory"
	loadpartofteam
# 637 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_BRAWLY_REMATCH, 1
# 638 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_DEFEATED_DEWFORD_GYM
# 639 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_STARTED_BOSS
# 640 "data/maps/DewfordTown_Gym/scripts.pory"
	message RecoveredPokemon
# 641 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 642 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 32
# 643 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle2
# 644 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM93
# 645 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 646 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 647 "data/maps/DewfordTown_Gym/scripts.pory"

# 648 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated3::
# 649 "data/maps/DewfordTown_Gym/scripts.pory"
	savepartofteam
# 650 "data/maps/DewfordTown_Gym/scripts.pory"
	special LoadPlayerParty
# 651 "data/maps/DewfordTown_Gym/scripts.pory"
	loadpartofteam
# 652 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_BRAWLY_REMATCH, 1
# 653 "data/maps/DewfordTown_Gym/scripts.pory"
	message RecoveredPokemon
# 654 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 655 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 32
# 656 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_DEFEATED_DEWFORD_GYM
# 657 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_STARTED_BOSS
# 658 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle3
# 659 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM60
# 660 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 661 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 662 "data/maps/DewfordTown_Gym/scripts.pory"

# 663 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated31::
# 664 "data/maps/DewfordTown_Gym/scripts.pory"
	savepartofteam
# 665 "data/maps/DewfordTown_Gym/scripts.pory"
	special LoadPlayerParty
# 666 "data/maps/DewfordTown_Gym/scripts.pory"
	loadpartofteam
# 667 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_BRAWLY_REMATCH, 10
# 668 "data/maps/DewfordTown_Gym/scripts.pory"
	message RecoveredPokemon
# 669 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 670 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 32
# 671 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_DEFEATED_DEWFORD_GYM
# 672 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_STARTED_BOSS
# 673 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle3
# 674 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM60
# 675 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 676 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 677 "data/maps/DewfordTown_Gym/scripts.pory"

# 678 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated4::
# 679 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_BRAWLY_REMATCH, 10
# 680 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_DEFEATED_DEWFORD_GYM
# 681 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_STARTED_BOSS
# 682 "data/maps/DewfordTown_Gym/scripts.pory"
	message RecoveredItems
# 683 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 684 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 685 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 64
# 686 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle4
# 687 "data/maps/DewfordTown_Gym/scripts.pory"
	special ShowBattlePointsWindow
# 688 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 64
# 689 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8004, 2000
# 690 "data/maps/DewfordTown_Gym/scripts.pory"
	special GiveFrontierBattlePoints
# 691 "data/maps/DewfordTown_Gym/scripts.pory"
	special UpdateBattlePointsWindow
# 692 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SHOP
# 693 "data/maps/DewfordTown_Gym/scripts.pory"
	waitse
# 694 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 120
# 695 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle5
# 696 "data/maps/DewfordTown_Gym/scripts.pory"
	special CloseBattlePointsWindow
# 697 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 698 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 699 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 700 "data/maps/DewfordTown_Gym/scripts.pory"

# 701 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyNotEnough::
# 702 "data/maps/DewfordTown_Gym/scripts.pory"
	savepartofteam
# 703 "data/maps/DewfordTown_Gym/scripts.pory"
	special LoadPlayerParty
# 704 "data/maps/DewfordTown_Gym/scripts.pory"
	loadpartofteam
# 705 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_DEFEATED_DEWFORD_GYM
# 706 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_STARTED_BOSS
# 707 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 708 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 709 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 710 "data/maps/DewfordTown_Gym/scripts.pory"

# 711 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 712 "data/maps/DewfordTown_Gym/scripts.pory"
	savepartofteam
# 713 "data/maps/DewfordTown_Gym/scripts.pory"
	special LoadPlayerParty
# 714 "data/maps/DewfordTown_Gym/scripts.pory"
	loadpartofteam
# 715 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_STARTED_BOSS
# 716 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 717 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 718 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 719 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 720 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 721 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 722 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 723 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 724 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 725 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 726 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 727 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 728 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 729 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 730 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 731 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 732 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 733 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 734 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 735 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 736 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 737 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 738 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 739 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 740 "data/maps/DewfordTown_Gym/scripts.pory"

# 741 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 742 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM08
# 743 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 744 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 745 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 746 "data/maps/DewfordTown_Gym/scripts.pory"

# 747 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 748 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM08
# 749 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 750 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 751 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 752 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 753 "data/maps/DewfordTown_Gym/scripts.pory"

# 754 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 755 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 756 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 757 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 758 "data/maps/DewfordTown_Gym/scripts.pory"

# 759 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 760 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 761 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 762 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 763 "data/maps/DewfordTown_Gym/scripts.pory"

# 764 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 765 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 766 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 767 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 768 "data/maps/DewfordTown_Gym/scripts.pory"

# 769 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 770 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 771 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 772 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 773 "data/maps/DewfordTown_Gym/scripts.pory"

# 774 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 775 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 776 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 777 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 778 "data/maps/DewfordTown_Gym/scripts.pory"

# 779 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 780 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 781 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 782 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 783 "data/maps/DewfordTown_Gym/scripts.pory"

# 784 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 785 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 786 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 787 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 788 "data/maps/DewfordTown_Gym/scripts.pory"

# 789 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 790 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 791 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 792 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 793 "data/maps/DewfordTown_Gym/scripts.pory"

# 794 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 795 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 796 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 797 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 798 "data/maps/DewfordTown_Gym/scripts.pory"

# 799 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 800 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 801 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 802 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 803 "data/maps/DewfordTown_Gym/scripts.pory"

# 804 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 805 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 806 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 807 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 808 "data/maps/DewfordTown_Gym/scripts.pory"

# 809 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 810 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 811 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 812 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 813 "data/maps/DewfordTown_Gym/scripts.pory"

# 814 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 815 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 816 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 817 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 818 "data/maps/DewfordTown_Gym/scripts.pory"

# 819 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 820 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 821 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 822 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide2::
# 823 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 824 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 825 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 826 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 827 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 828 "data/maps/DewfordTown_Gym/scripts.pory"

# 829 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 830 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 831 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 832 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 833 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 834 "data/maps/DewfordTown_Gym/scripts.pory"

# 835 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 836 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 837 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 838 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 839 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 840 "data/maps/DewfordTown_Gym/scripts.pory"

# 841 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 842 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 843 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 844 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 845 "data/maps/DewfordTown_Gym/scripts.pory"

# 846 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 847 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 848 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 849 "data/maps/DewfordTown_Gym/scripts.pory"
	end

DewfordTown_Gym_Text_GymGuideAdvice::
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Hola, Jóven Promesa!\p"
	.string "La única regla en este Gimnasio es\n"
	.string "simple:\p"
	.string "{COLOR BLUE}Derrota al Líder del Gimnasio usando\n"
	.string "sólo el primer Pokémon de tu Equipo{COLOR DARK_GRAY}.\p"
	.string "No hay otra restricción, se te permite\n"
	.string "usar cuantos objetos quieras.\p"
	.string "Incluso, ¡Curaré a tus Pokémon ahora\n"
	.string "para que no te preocupes por eso!$"

DewfordTown_Gym_Text_GymGuidePostVictory::
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Buena suerte, Joven Promesa!$"

DewfordTown_Gym_Text_TakaoIntro::
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Poder, poder, poder!\n"
	.string "¡Poder es querer!$"

DewfordTown_Gym_Text_TakaoDefeat::
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh…$"

DewfordTown_Gym_Text_TakaoPostBattle::
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Tu poder es mayor que el mío!\n"
	.string "No me sorprende, honestamente.$"

DewfordTown_Gym_Text_JocelynIntro::
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Terminemos con esto.$"

DewfordTown_Gym_Text_JocelynDefeat::
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ah, bien.$"

DewfordTown_Gym_Text_JocelynPostBattle::
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Un día, seré la Campeona,\n"
	.string "espera y verás.$"

DewfordTown_Gym_Text_LauraIntro::
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡No es mi culpa si te\n"
	.string "hago llorar!$"

DewfordTown_Gym_Text_LauraDefeat::
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡BUAAAHHHH!$"

DewfordTown_Gym_Text_LauraPostBattle::
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Me da miedo la oscuridad…$"

DewfordTown_Gym_Text_LilithIntro::
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¿Eres un fantasma?$"

DewfordTown_Gym_Text_LilithDefeat::
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡No quiero ni ver tu\n"
	.string "espantosa cara!$"

DewfordTown_Gym_Text_LilithPostBattle::
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Espero que tengas un\n"
	.string "accidente fatal!$"

DewfordTown_Gym_Text_BrendenIntro::
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Te mostaré el poder que tienen\n"
	.string "los hombres que se enfrentan\l"
	.string "al océano a diario!$"

DewfordTown_Gym_Text_BrendenDefeat::
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Interesante. Tu poder\n"
	.string "podrá derrotar a Brawly.$"

DewfordTown_Gym_Text_BrendenPostBattle::
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Y yo que creía que después de…\n"
	.string "Em… Aguantar a Brawly tantas veces…\p"
	.string "¡Mi cuerpo no podría sentir\n"
	.string "dolor o cansarse!\p"
	.string "¡Estoy tan cansado y adolorido por\n"
	.string "esa derrota aplastante!$"

DewfordTown_Gym_Text_CristianIntro::
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Si quieres pasar tendrás que\n"
	.string "derrotarme a mí!$"

DewfordTown_Gym_Text_CristianDefeat::
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¿Ya perdí?$"

DewfordTown_Gym_Text_CristianPostBattle::
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Debería hacerle caso a Brawly\n"
	.string "de no confiarme de más.$"

DewfordTown_Gym_Text_BrawlyIntro::
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Soy Brawly!\n"
	.string "¡El Líder surfista de Dewford!\p"
	.string "En estos lares, cientos de olas\n"
	.string "han fortalecido mi cuerpo y mente,\l"
	.string "¡Hasta niveles inimaginables!\p"
	.string "Así que si quieres vencerme, ¡Tendrás\n"
	.string "que vencerme usando sólo a tu\l"
	.string "compañero más querido,\l"
	.string "igual que Makuhita y yo en las olas!$"

DewfordTown_Gym_Text_BrawlyDefeat::
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Yeah! ¡No me esperaba un poder\n"
	.string "de salpicadura tan abrumador!\p"
	.string "¡Let's go!\p"
	.string "¡Mereces esta Medalla!$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge::
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} recibió la Medalla Puño.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis::
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "La Medalla Puño te permitirá entrenar\n"
	.string "a Pokémon de hasta nivel 30.\p"
	.string "Además, déjame darte esta MT.$"

DewfordTown_Gym_Text_ExplainBulkUp::
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Esa MT contiene el movimiento\n"
	.string "Corpulencia, que sube Ataque y\l"
	.string "Defensa.\p"
	.string "… … … … … …$"

DewfordTown_Gym_Text_RegisteredBrawly::
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Brawly se registró en el PokéNav!$"

DewfordTown_Gym_Text_BrawlyPostBattle::
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Puedo verte convirtiéndote\n"
	.string "en lo más grande!\p"
	.string "¡No habrá ola que no puedas montar!$"

DewfordTown_Gym_Text_GymStatue::
# 344 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "GIMNASIO DEL PUEBLO DEWFORD\p"
	.string "Entrenadores reconocidos:\n"
	.string "Leaf\l"
	.string "{RIVAL}$"

DewfordTown_Gym_Text_GymStatueCertified::
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "GIMNASIO DEL PUEBLO DEWFORD\p"
	.string "Entrenadores reconocidos:\n"
	.string "Leaf\l"
	.string "{RIVAL}\l"
	.string "{PLAYER}$"

DewfordTown_Gym_Text_BrawlyPreRematch::
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Una nueva era de olas se avecina,\n"
	.string "¡Hora de demostrarme qué\n"
	.string "tan buen{A} surfista eres!$"

DewfordTown_Gym_Text_BrawlyRematchDefeat::
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Hell yeah!\n"
	.string "¡Sigues mejorando!$"

DewfordTown_Gym_Text_BrawlyPostRematch::
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Las batallas son complicadas,\n"
	.string "y profundas, ¡Tanto como el mar!\p"
	.string "¡Amaría ver el fondo del océano\n"
	.string "y entender a los Pokémon de allí!$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons::
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Una ola se lleva la arena, pero,\n"
	.string "al final, siempre vuelve a la orilla.\p"
	.string "Una realidad que el mar me enseñó,\n"
	.string "pero una batalla 2vs1 es injusta,\l"
	.string "¡Vuelve con dos compañeros,\l"
	.string "y surfearemos juntos el mar\l"
	.string "de la vida, yeah!$"

DewfordTown_Gym_Text_BrawlyIntro2::
# 384 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Hell yes!\n"
	.string "¡He estado entrenando\l"
	.string "arduamente para este momento!\p"
	.string "¡Luchemos 4vs4!\p"
	.string "¡Ahora presenciarás el poder\n"
	.string "abrumador del Líder surfista!$"

DewfordTown_Gym_Text_BrawlyIntro3::
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Hell yes!\n"
	.string "¡He ido al fondo del océano,\l"
	.string "a prepararme para este momento!\p"
	.string "¡Two versus Four, let's go!\p"
	.string "¡Ahora presenciarás el poder abrumador\n"
	.string "de quien ha visto el océano!$"

DewfordTown_Gym_Text_BrawlyIntro4::
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Wooohhh!\n"
	.string "¡Let's go, bro, four versus six!\p"
	.string "¡Luchemos con el poder abismal\n"
	.string "que mi cuerpo posee!$"

DewfordTown_Gym_Text_BrawlyIntro5::
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Wooohhh!\n"
	.string "¡Luchar junto a tí sigue\l"
	.string "siendo el mejor entrenamiento\l"
	.string "que haya tenido!\p"
	.string "¡La fuerza de mis Pokémon\n"
	.string "te hará naufragar!$"

DewfordTown_Gym_Text_BrawlyIntro6::
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Fuck yeah!\p"
	.string "¡Arrasemos con todo lo\n"
	.string "que exista con una ola\l"
	.string "abismal de poder Tipo Lucha!\p"
	.string "¡Batallemos, seis contra seis,\n"
	.string "sin objetos, nada!\p"
	.string "¡Verás el tsunami que causa mi poder!$"

DewfordTown_Gym_Text_BrawlyDefeat2::
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Aún después de tan duro\n"
	.string "entrenamiento, mi poder sigue sin\l"
	.string "compararse al tuyo!$"

DewfordTown_Gym_Text_BrawlyDefeat3::
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Yeah!\n"
	.string "¡Fuck yeah!\p"
	.string "¡Tal poder me ha empapado!\n"
	.string "¡Luchar contigo es lo mejor!$"

DewfordTown_Gym_Text_BrawlyPostBattle2::
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Tu poder no parece tener límites,\n"
	.string "amig{OA}, eres increíble!\l"
	.string "¡Aquí algo para que me recuerdes!\p"
	.string "¡Para la próxima no me contendré!$"

DewfordTown_Gym_Text_BrawlyPostBattle3::
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Incluso con tales limitaciones,\n"
	.string "me ganaste de nuevo!\p"
	.string "¡You rock, dude, you really do!\n"
	.string "¡Por eso, aquí tienes esto!$"

DewfordTown_Gym_Text_BrawlyPostBattle4::
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Nunca he tenido tal batalla!\p"
	.string "¡You fucking rule, dude!\n"
	.string "Déjame darte algo a cambio de\l"
	.string "tal batalla.$"

DewfordTown_Gym_Text_BrawlyPostBattle5::
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Son puntos de batalla!\p"
	.string "¡Cámbialos por genialidades en\n"
	.string "el Frente Batalla.\p"
	.string "¡Ojalá nos veamos de nuevo!$"
