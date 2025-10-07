# 401 "data/maps/DewfordTown_Gym/scripts.pory"

# 402 "data/maps/DewfordTown_Gym/scripts.pory"
.set LOCALID_GUIDE, 5
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 406 "data/maps/DewfordTown_Gym/scripts.pory"

# 407 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 410 "data/maps/DewfordTown_Gym/scripts.pory"

# 411 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 414 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 415 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 420 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 422 "data/maps/DewfordTown_Gym/scripts.pory"

# 423 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuideTrigger::
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_0, 1
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_GymGuideTriggerEnd
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_PIN
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement LOCALID_GUIDE, Common_Movement_ExclamationMark
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 430 "data/maps/DewfordTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 431 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmovement 0
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymGuide2
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 434 "data/maps/DewfordTown_Gym/scripts.pory"

# 435 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuideTriggerEnd::
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 437 "data/maps/DewfordTown_Gym/scripts.pory"

# 438 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 441 "data/maps/DewfordTown_Gym/scripts.pory"

# 442 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 443 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 446 "data/maps/DewfordTown_Gym/scripts.pory"

# 447 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 450 "data/maps/DewfordTown_Gym/scripts.pory"

# 451 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 452 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 453 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 454 "data/maps/DewfordTown_Gym/scripts.pory"

# 455 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 456 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 458 "data/maps/DewfordTown_Gym/scripts.pory"

# 459 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 462 "data/maps/DewfordTown_Gym/scripts.pory"

# 463 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 464 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 465 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 466 "data/maps/DewfordTown_Gym/scripts.pory"

# 467 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 468 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 469 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 470 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 471 "data/maps/DewfordTown_Gym/scripts.pory"

# 472 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 473 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 474 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 475 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 476 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 477 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 478 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 479 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 480 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 481 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 482 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 483 "data/maps/DewfordTown_Gym/scripts.pory"

# 484 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 485 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 486 "data/maps/DewfordTown_Gym/scripts.pory"

# 487 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 488 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 489 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 490 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 491 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 492 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 493 "data/maps/DewfordTown_Gym/scripts.pory"

# 494 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 495 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 496 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 497 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 498 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 499 "data/maps/DewfordTown_Gym/scripts.pory"

# 500 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 501 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 502 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 503 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 504 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 505 "data/maps/DewfordTown_Gym/scripts.pory"

# 506 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 507 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 508 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 509 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 510 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 511 "data/maps/DewfordTown_Gym/scripts.pory"

# 512 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 513 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 514 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 515 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 516 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 517 "data/maps/DewfordTown_Gym/scripts.pory"

# 518 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 519 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 520 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 521 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 522 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 523 "data/maps/DewfordTown_Gym/scripts.pory"

# 524 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 525 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 526 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 527 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 528 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 529 "data/maps/DewfordTown_Gym/scripts.pory"

# 530 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 531 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 532 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 533 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 534 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 535 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 536 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 537 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 538 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 539 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 540 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 541 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 542 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 543 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 544 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 545 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 546 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 547 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 548 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 549 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 550 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 551 "data/maps/DewfordTown_Gym/scripts.pory"

# 552 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 553 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 554 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 555 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly_Rematch
# 556 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_STARTED_BOSS
# 557 "data/maps/DewfordTown_Gym/scripts.pory"
	special SavePlayerParty
# 558 "data/maps/DewfordTown_Gym/scripts.pory"
	special HealPlayerParty
# 559 "data/maps/DewfordTown_Gym/scripts.pory"
	deletepokemon 1
# 560 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 561 "data/maps/DewfordTown_Gym/scripts.pory"
	checkitem ITEM_TM08
# 562 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_Gym_EventScript_GiveBulkUp2
# 563 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 564 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 565 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 566 "data/maps/DewfordTown_Gym/scripts.pory"

# 567 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_Rematch::
# 568 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 569 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_Brawly_Rematch_2
# 570 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_BRAWLY_REMATCH
# 571 "data/maps/DewfordTown_Gym/scripts.pory"
	case 0, DewfordTown_Gym_EventScript_Brawly_Rematch_2
# 572 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Brawly_Rematch_3
# 573 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Brawly_Rematch_4
# 574 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Brawly_Rematch_5
# 575 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Brawly_Rematch_6
# 576 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 577 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_BRAWLY_REMATCH, 1
# 578 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 579 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 580 "data/maps/DewfordTown_Gym/scripts.pory"

# 581 "data/maps/DewfordTown_Gym/scripts.pory"

# 582 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_Rematch_2:
# 583 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 584 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 585 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 586 "data/maps/DewfordTown_Gym/scripts.pory"

# 587 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_Rematch_3:
# 588 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_STARTED_BOSS
# 589 "data/maps/DewfordTown_Gym/scripts.pory"
	special SavePlayerParty
# 590 "data/maps/DewfordTown_Gym/scripts.pory"
	deletepokemon 4
# 591 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_double TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyIntro2, DewfordTown_Gym_Text_BrawlyDefeat2, DewfordTown_Gym_EventScript_BrawlyNotEnough , DewfordTown_Gym_EventScript_BrawlyDefeated2
# 592 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_Brawly_Rematch_2
# 593 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 594 "data/maps/DewfordTown_Gym/scripts.pory"

# 595 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_Rematch_4:
# 596 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_STARTED_BOSS
# 597 "data/maps/DewfordTown_Gym/scripts.pory"
	special SavePlayerParty
# 598 "data/maps/DewfordTown_Gym/scripts.pory"
	deletepokemon 2
# 599 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_double TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyIntro3, DewfordTown_Gym_Text_BrawlyDefeat2, DewfordTown_Gym_EventScript_BrawlyNotEnough, DewfordTown_Gym_EventScript_BrawlyDefeated2
# 600 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_Brawly_Rematch_2
# 601 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 602 "data/maps/DewfordTown_Gym/scripts.pory"

# 603 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_Rematch_5:
# 604 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_STARTED_BOSS
# 605 "data/maps/DewfordTown_Gym/scripts.pory"
	special SavePlayerParty
# 606 "data/maps/DewfordTown_Gym/scripts.pory"
	deletepokemon 4
# 607 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_double TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyIntro4, DewfordTown_Gym_Text_BrawlyDefeat2, DewfordTown_Gym_EventScript_BrawlyNotEnough, DewfordTown_Gym_EventScript_BrawlyDefeated31
# 608 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_Brawly_Rematch_2
# 609 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 610 "data/maps/DewfordTown_Gym/scripts.pory"

# 611 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly_Rematch_6:
# 612 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_STARTED_BOSS
# 613 "data/maps/DewfordTown_Gym/scripts.pory"
	special SavePlayerParty
# 614 "data/maps/DewfordTown_Gym/scripts.pory"
	deletepokemon 4
# 615 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_double TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyIntro5, DewfordTown_Gym_Text_BrawlyDefeat2, DewfordTown_Gym_EventScript_BrawlyNotEnough, DewfordTown_Gym_EventScript_BrawlyDefeated3
# 616 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_Brawly_Rematch_2
# 617 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 618 "data/maps/DewfordTown_Gym/scripts.pory"

# 619 "data/maps/DewfordTown_Gym/scripts.pory"

# 620 "data/maps/DewfordTown_Gym/scripts.pory"

# 621 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated2::
# 622 "data/maps/DewfordTown_Gym/scripts.pory"
	savepartofteam
# 623 "data/maps/DewfordTown_Gym/scripts.pory"
	special LoadPlayerParty
# 624 "data/maps/DewfordTown_Gym/scripts.pory"
	loadpartofteam
# 625 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_BRAWLY_REMATCH, 1
# 626 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_DEFEATED_DEWFORD_GYM
# 627 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_STARTED_BOSS
# 628 "data/maps/DewfordTown_Gym/scripts.pory"
	message RecoveredPokemon
# 629 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 630 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 32
# 631 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle2
# 632 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM93
# 633 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 634 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 635 "data/maps/DewfordTown_Gym/scripts.pory"

# 636 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated3::
# 637 "data/maps/DewfordTown_Gym/scripts.pory"
	savepartofteam
# 638 "data/maps/DewfordTown_Gym/scripts.pory"
	special LoadPlayerParty
# 639 "data/maps/DewfordTown_Gym/scripts.pory"
	loadpartofteam
# 640 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_BRAWLY_REMATCH, 1
# 641 "data/maps/DewfordTown_Gym/scripts.pory"
	message RecoveredPokemon
# 642 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 643 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 32
# 644 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_DEFEATED_DEWFORD_GYM
# 645 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_STARTED_BOSS
# 646 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle3
# 647 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM60
# 648 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 649 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 650 "data/maps/DewfordTown_Gym/scripts.pory"

# 651 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated31::
# 652 "data/maps/DewfordTown_Gym/scripts.pory"
	savepartofteam
# 653 "data/maps/DewfordTown_Gym/scripts.pory"
	special LoadPlayerParty
# 654 "data/maps/DewfordTown_Gym/scripts.pory"
	loadpartofteam
# 655 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_BRAWLY_REMATCH, 10
# 656 "data/maps/DewfordTown_Gym/scripts.pory"
	message RecoveredPokemon
# 657 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 658 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 32
# 659 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_DEFEATED_DEWFORD_GYM
# 660 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_STARTED_BOSS
# 661 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle3
# 662 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM60
# 663 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 664 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 665 "data/maps/DewfordTown_Gym/scripts.pory"

# 666 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated4::
# 667 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_BRAWLY_REMATCH, 10
# 668 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_DEFEATED_DEWFORD_GYM
# 669 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_STARTED_BOSS
# 670 "data/maps/DewfordTown_Gym/scripts.pory"
	message RecoveredItems
# 671 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 672 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 673 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 64
# 674 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle4
# 675 "data/maps/DewfordTown_Gym/scripts.pory"
	special ShowBattlePointsWindow
# 676 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 64
# 677 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8004, 2000
# 678 "data/maps/DewfordTown_Gym/scripts.pory"
	special GiveFrontierBattlePoints
# 679 "data/maps/DewfordTown_Gym/scripts.pory"
	special UpdateBattlePointsWindow
# 680 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SHOP
# 681 "data/maps/DewfordTown_Gym/scripts.pory"
	waitse
# 682 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 120
# 683 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle5
# 684 "data/maps/DewfordTown_Gym/scripts.pory"
	special CloseBattlePointsWindow
# 685 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 686 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 687 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 688 "data/maps/DewfordTown_Gym/scripts.pory"

# 689 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyNotEnough::
# 690 "data/maps/DewfordTown_Gym/scripts.pory"
	savepartofteam
# 691 "data/maps/DewfordTown_Gym/scripts.pory"
	special LoadPlayerParty
# 692 "data/maps/DewfordTown_Gym/scripts.pory"
	loadpartofteam
# 693 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_DEFEATED_DEWFORD_GYM
# 694 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_STARTED_BOSS
# 695 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 696 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 697 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 698 "data/maps/DewfordTown_Gym/scripts.pory"

# 699 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 700 "data/maps/DewfordTown_Gym/scripts.pory"
	savepartofteam
# 701 "data/maps/DewfordTown_Gym/scripts.pory"
	special LoadPlayerParty
# 702 "data/maps/DewfordTown_Gym/scripts.pory"
	loadpartofteam
# 703 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_STARTED_BOSS
# 704 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 705 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 706 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 707 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 708 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 709 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 710 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 711 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 712 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 713 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 714 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 715 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 716 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 717 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 718 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 719 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 720 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 721 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 722 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 723 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 724 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 725 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 726 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 727 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 728 "data/maps/DewfordTown_Gym/scripts.pory"

# 729 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 730 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM08
# 731 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 732 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 733 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 734 "data/maps/DewfordTown_Gym/scripts.pory"

# 735 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 736 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM08
# 737 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 738 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 739 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 740 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 741 "data/maps/DewfordTown_Gym/scripts.pory"

# 742 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 743 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 744 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 745 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 746 "data/maps/DewfordTown_Gym/scripts.pory"

# 747 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 748 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 749 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 750 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 751 "data/maps/DewfordTown_Gym/scripts.pory"

# 752 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 753 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 754 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 755 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 756 "data/maps/DewfordTown_Gym/scripts.pory"

# 757 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 758 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 759 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 760 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 761 "data/maps/DewfordTown_Gym/scripts.pory"

# 762 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 763 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 764 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 765 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 766 "data/maps/DewfordTown_Gym/scripts.pory"

# 767 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 768 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 769 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 770 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 771 "data/maps/DewfordTown_Gym/scripts.pory"

# 772 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 773 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 774 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 775 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 776 "data/maps/DewfordTown_Gym/scripts.pory"

# 777 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 778 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 779 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 780 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 781 "data/maps/DewfordTown_Gym/scripts.pory"

# 782 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 783 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 784 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 785 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 786 "data/maps/DewfordTown_Gym/scripts.pory"

# 787 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 788 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 789 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 790 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 791 "data/maps/DewfordTown_Gym/scripts.pory"

# 792 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 793 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 794 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 795 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 796 "data/maps/DewfordTown_Gym/scripts.pory"

# 797 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 798 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 799 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 800 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 801 "data/maps/DewfordTown_Gym/scripts.pory"

# 802 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 803 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 804 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 805 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 806 "data/maps/DewfordTown_Gym/scripts.pory"

# 807 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 808 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 809 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 810 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide2::
# 811 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 812 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 813 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 814 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 815 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 816 "data/maps/DewfordTown_Gym/scripts.pory"

# 817 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 818 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 819 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 820 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 821 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 822 "data/maps/DewfordTown_Gym/scripts.pory"

# 823 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 824 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 825 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 826 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 827 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 828 "data/maps/DewfordTown_Gym/scripts.pory"

# 829 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 830 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 831 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 832 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 833 "data/maps/DewfordTown_Gym/scripts.pory"

# 834 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 835 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 836 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 837 "data/maps/DewfordTown_Gym/scripts.pory"
	end

DewfordTown_Gym_Text_GymGuideAdvice::
# 1 "data/maps/DewfordTown_Gym/scripts.pory"
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
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Buena suerte, Joven Promesa!$"

DewfordTown_Gym_Text_TakaoIntro::
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Poder, poder, poder!\n"
	.string "¡Poder es querer!$"

DewfordTown_Gym_Text_TakaoDefeat::
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh…$"

DewfordTown_Gym_Text_TakaoPostBattle::
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Tu poder es mayor que el mío!\n"
	.string "No me sorprende, honestamente.$"

DewfordTown_Gym_Text_JocelynIntro::
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Terminemos con esto.$"

DewfordTown_Gym_Text_JocelynDefeat::
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ah, bien.$"

DewfordTown_Gym_Text_JocelynPostBattle::
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Un día, seré la Campeona,\n"
	.string "espera y verás.$"

DewfordTown_Gym_Text_LauraIntro::
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡No es mi culpa si te\n"
	.string "hago llorar!$"

DewfordTown_Gym_Text_LauraDefeat::
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡BUAAAHHHH!$"

DewfordTown_Gym_Text_LauraPostBattle::
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Me da miedo la oscuridad…$"

DewfordTown_Gym_Text_LilithIntro::
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¿Eres un fantasma?$"

DewfordTown_Gym_Text_LilithDefeat::
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡No quiero ni ver tu\n"
	.string "espantosa cara!$"

DewfordTown_Gym_Text_LilithPostBattle::
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Espero que tengas un\n"
	.string "accidente fatal!$"

DewfordTown_Gym_Text_BrendenIntro::
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Te mostaré el poder que tienen\n"
	.string "los hombres que se enfrentan\l"
	.string "al océano a diario!$"

DewfordTown_Gym_Text_BrendenDefeat::
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Interesante. Tu poder\n"
	.string "podrá derrotar a Brawly.$"

DewfordTown_Gym_Text_BrendenPostBattle::
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Y yo que creía que después de…\n"
	.string "Em… Aguantar a Brawly tantas veces…\p"
	.string "¡Mi cuerpo no podría sentir\n"
	.string "dolor o cansarse!\p"
	.string "¡Estoy tan cansado y adolorido por\n"
	.string "esa derrota aplastante!$"

DewfordTown_Gym_Text_CristianIntro::
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Si quieres pasar tendrás que\n"
	.string "derrotarme a mí!$"

DewfordTown_Gym_Text_CristianDefeat::
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¿Ya perdí?$"

DewfordTown_Gym_Text_CristianPostBattle::
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Debería hacerle caso a Brawly\n"
	.string "de no confiarme de más.$"

DewfordTown_Gym_Text_BrawlyIntro::
# 220 "data/maps/DewfordTown_Gym/scripts.pory"
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
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Yeah! ¡No me esperaba un poder\n"
	.string "de salpicadura tan abrumador!\p"
	.string "¡Let's go!\p"
	.string "¡Mereces esta Medalla!$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge::
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} recibió la Medalla Puño.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis::
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "La Medalla Puño te permitirá entrenar\n"
	.string "a Pokémon de hasta nivel 30.\p"
	.string "Además, déjame darte esta MT.$"

DewfordTown_Gym_Text_ExplainBulkUp::
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Esa MT contiene el movimiento\n"
	.string "Corpulencia, que sube Ataque y\l"
	.string "Defensa.\p"
	.string "… … … … … …$"

DewfordTown_Gym_Text_RegisteredBrawly::
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Brawly se registró en el PokéNav!$"

DewfordTown_Gym_Text_BrawlyPostBattle::
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Puedo verte convirtiéndote\n"
	.string "en lo más grande!\p"
	.string "¡No habrá ola que no puedas montar!$"

DewfordTown_Gym_Text_GymStatue::
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "GIMNASIO DEL PUEBLO DEWFORD\p"
	.string "Entrenadores reconocidos:\n"
	.string "Leaf\l"
	.string "{RIVAL}$"

DewfordTown_Gym_Text_GymStatueCertified::
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "GIMNASIO DEL PUEBLO DEWFORD\p"
	.string "Entrenadores reconocidos:\n"
	.string "Leaf\l"
	.string "{RIVAL}\l"
	.string "{PLAYER}$"

DewfordTown_Gym_Text_BrawlyPreRematch::
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Una nueva era de olas se avecina,\n"
	.string "¡Hora de demostrarme qué\n"
	.string "tan buen{A} surfista eres!$"

DewfordTown_Gym_Text_BrawlyRematchDefeat::
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Hell yeah!\n"
	.string "¡Sigues mejorando!$"

DewfordTown_Gym_Text_BrawlyPostRematch::
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Las batallas son complicadas,\n"
	.string "y profundas, ¡Tanto como el mar!\p"
	.string "¡Amaría ver el fondo del océano\n"
	.string "y entender a los Pokémon de allí!$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons::
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Una ola se lleva la arena, pero,\n"
	.string "al final, siempre vuelve a la orilla.\p"
	.string "Una realidad que el mar me enseñó,\n"
	.string "pero una batalla 2vs1 es injusta,\l"
	.string "¡Vuelve con dos compañeros,\l"
	.string "y surfearemos juntos el mar\l"
	.string "de la vida, yeah!$"

DewfordTown_Gym_Text_BrawlyIntro2::
# 357 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Hell yes!\n"
	.string "¡He estado entrenando\l"
	.string "arduamente para este momento!\p"
	.string "¡Luchemos 4vs4!\p"
	.string "¡Ahora presenciarás el poder\n"
	.string "abrumador del Líder surfista!$"

DewfordTown_Gym_Text_BrawlyIntro3::
# 361 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Hell yes!\n"
	.string "¡He ido al fondo del océano,\l"
	.string "a prepararme para este momento!\p"
	.string "¡Two versus Four, let's go!\p"
	.string "¡Ahora presenciarás el poder abrumador\n"
	.string "de quien ha visto el océano!$"

DewfordTown_Gym_Text_BrawlyIntro4::
# 365 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Wooohhh!\n"
	.string "¡Let's go, bro, four versus six!\p"
	.string "¡Luchemos con el poder abismal\n"
	.string "que mi cuerpo posee!$"

DewfordTown_Gym_Text_BrawlyIntro5::
# 369 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Wooohhh!\n"
	.string "¡Luchar junto a tí sigue\l"
	.string "siendo el mejor entrenamiento\l"
	.string "que haya tenido!\p"
	.string "¡La fuerza de mis Pokémon\n"
	.string "te hará naufragar!$"

DewfordTown_Gym_Text_BrawlyIntro6::
# 373 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Fuck yeah!\p"
	.string "¡Arrasemos con todo lo\n"
	.string "que exista con una ola\l"
	.string "abismal de poder Tipo Lucha!\p"
	.string "¡Batallemos, seis contra seis,\n"
	.string "sin objetos, nada!\p"
	.string "¡Verás el tsunami que causa mi poder!$"

DewfordTown_Gym_Text_BrawlyDefeat2::
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Aún después de tan duro\n"
	.string "entrenamiento, mi poder sigue sin\l"
	.string "compararse al tuyo!$"

DewfordTown_Gym_Text_BrawlyDefeat3::
# 381 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Yeah!\n"
	.string "¡Fuck yeah!\p"
	.string "¡Tal poder me ha empapado!\n"
	.string "¡Luchar contigo es lo mejor!$"

DewfordTown_Gym_Text_BrawlyPostBattle2::
# 385 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Tu poder no parece tener límites,\n"
	.string "amig{OA}, eres increíble!\l"
	.string "¡Aquí algo para que me recuerdes!\p"
	.string "¡Para la próxima no me contendré!$"

DewfordTown_Gym_Text_BrawlyPostBattle3::
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Incluso con tales limitaciones,\n"
	.string "me ganaste de nuevo!\p"
	.string "¡You rock, dude, you really do!\n"
	.string "¡Por eso, aquí tienes esto!$"

DewfordTown_Gym_Text_BrawlyPostBattle4::
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Nunca he tenido tal batalla!\p"
	.string "¡You fucking rule, dude!\n"
	.string "Déjame darte algo a cambio de\l"
	.string "tal batalla.$"

DewfordTown_Gym_Text_BrawlyPostBattle5::
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "¡Son puntos de batalla!\p"
	.string "¡Cámbialos por genialidades en\n"
	.string "el Frente Batalla.\p"
	.string "¡Ojalá nos veamos de nuevo!$"
