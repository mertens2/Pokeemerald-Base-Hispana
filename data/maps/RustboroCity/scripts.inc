# 379 "data/maps/RustboroCity/scripts.pory"

# 380 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 381 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 382 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 383 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 384 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 385 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 386 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_WALLY, 17
# 387 "data/maps/RustboroCity/scripts.pory"

# 388 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 389 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 390 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 391 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 392 "data/maps/RustboroCity/scripts.pory"

# 393 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 394 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 395 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 396 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 397 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 398 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 399 "data/maps/RustboroCity/scripts.pory"
	end
# 400 "data/maps/RustboroCity/scripts.pory"

# 401 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 402 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 403 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 404 "data/maps/RustboroCity/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, RustboroCity_EventScript_End
# 405 "data/maps/RustboroCity/scripts.pory"
	end
# 406 "data/maps/RustboroCity/scripts.pory"

# 407 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_End:
# 408 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_WALLY_RUSTBORO
# 409 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_WALLY
# 410 "data/maps/RustboroCity/scripts.pory"
	end
# 411 "data/maps/RustboroCity/scripts.pory"

# 412 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 413 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 414 "data/maps/RustboroCity/scripts.pory"
	end
# 415 "data/maps/RustboroCity/scripts.pory"

# 416 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 417 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 418 "data/maps/RustboroCity/scripts.pory"
	return
# 419 "data/maps/RustboroCity/scripts.pory"

# 420 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 421 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 422 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 423 "data/maps/RustboroCity/scripts.pory"

# 424 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 425 "data/maps/RustboroCity/scripts.pory"
	lockall
# 426 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 427 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 428 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 429 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 430 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 431 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 432 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 433 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 434 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 435 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 436 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 437 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 438 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 439 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 440 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 441 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 442 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 443 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 444 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 445 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 446 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 447 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 448 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 449 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 450 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 451 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 452 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 453 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 454 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 455 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 456 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 457 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 458 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 459 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 460 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 461 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 462 "data/maps/RustboroCity/scripts.pory"

# 463 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 464 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 465 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 466 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 467 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 468 "data/maps/RustboroCity/scripts.pory"

# 469 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 470 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 471 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 472 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 473 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 474 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 475 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 476 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 477 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 478 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 479 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 480 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 481 "data/maps/RustboroCity/scripts.pory"
	end
# 482 "data/maps/RustboroCity/scripts.pory"

# 483 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Wally::
# 484 "data/maps/RustboroCity/scripts.pory"
	lock
# 485 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 486 "data/maps/RustboroCity/scripts.pory"
	namebox Wally
# 487 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WallyPokeCenter
# 488 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 489 "data/maps/RustboroCity/scripts.pory"
	hidenamebox
# 490 "data/maps/RustboroCity/scripts.pory"
	specialvar VAR_0x8004, GetPlayerFacingDirection
# 491 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8004, DIR_SOUTH, RustboroCity_EventScript_MovePlayerOutTheWay
# 492 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_WALLY, RustboroCity_Movement_WallyEnterCenter
# 493 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 494 "data/maps/RustboroCity/scripts.pory"
	opendoor 16, 45
# 495 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 496 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_WALLY, RustboroCity_Movement_WallyEnterCenter2
# 497 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 498 "data/maps/RustboroCity/scripts.pory"
	delay 40
# 499 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_WALLY, RustboroCity_Movement_WallyOutCenter
# 500 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 501 "data/maps/RustboroCity/scripts.pory"
	closedoor 16, 45
# 502 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 503 "data/maps/RustboroCity/scripts.pory"
	namebox Wally
# 504 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WallyPrepared
# 505 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 506 "data/maps/RustboroCity/scripts.pory"
	hidenamebox
# 507 "data/maps/RustboroCity/scripts.pory"
	specialvar VAR_0x8004, GetPlayerFacingDirection
# 508 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8004, DIR_WEST, RustboroCity_EventScript_MovePlayerEast
# 509 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8004, DIR_EAST, RustboroCity_EventScript_MovePlayerWest
# 510 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_WALLY, RustboroCity_Movement_WallyGoToGym1
# 511 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_0x8004, DIR_WEST, RustboroCity_EventScript_MovePlayerEast2
# 512 "data/maps/RustboroCity/scripts.pory"
	delay 8
# 513 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerGoToGym
# 514 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 515 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_Wally2
# 516 "data/maps/RustboroCity/scripts.pory"

# 517 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MovePlayerEast2::
# 518 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerGoToGym2
# 519 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 520 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_Wally2
# 521 "data/maps/RustboroCity/scripts.pory"

# 522 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Wally2::
# 523 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 524 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 525 "data/maps/RustboroCity/scripts.pory"
	namebox Wally
# 526 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WallyReady
# 527 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 528 "data/maps/RustboroCity/scripts.pory"
	hidenamebox
# 529 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_WALLY, RustboroCity_Movement_WallyEnterGym
# 530 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/RustboroCity/scripts.pory"
	opendoor 27, 19
# 532 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 533 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_WALLY, RustboroCity_Movement_WallyEnterGym2
# 534 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/RustboroCity/scripts.pory"
	delay 16
# 536 "data/maps/RustboroCity/scripts.pory"
	closedoor 27, 19
# 537 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 538 "data/maps/RustboroCity/scripts.pory"
	delay 16
# 539 "data/maps/RustboroCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 540 "data/maps/RustboroCity/scripts.pory"
	delay 24
# 541 "data/maps/RustboroCity/scripts.pory"
	namebox Wally
# 542 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WallyBattle
# 543 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 544 "data/maps/RustboroCity/scripts.pory"
	hidenamebox
# 545 "data/maps/RustboroCity/scripts.pory"
	delay 16
# 546 "data/maps/RustboroCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 547 "data/maps/RustboroCity/scripts.pory"
	delay 16
# 548 "data/maps/RustboroCity/scripts.pory"
	opendoor 27, 19
# 549 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 550 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 551 "data/maps/RustboroCity/scripts.pory"
	namebox Wally
# 552 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WallySilence
# 553 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 554 "data/maps/RustboroCity/scripts.pory"
	hidenamebox
# 555 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_WALLY, RustboroCity_Movement_WallyOutGym
# 556 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 557 "data/maps/RustboroCity/scripts.pory"
	closedoor 27, 19
# 558 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 559 "data/maps/RustboroCity/scripts.pory"
	namebox Wally
# 560 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WallySilence2
# 561 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 562 "data/maps/RustboroCity/scripts.pory"
	hidenamebox
# 563 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FaceAwayPlayer
# 564 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 565 "data/maps/RustboroCity/scripts.pory"
	delay 40
# 566 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 567 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/RustboroCity/scripts.pory"
	namebox Wally
# 569 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WallyExcited
# 570 "data/maps/RustboroCity/scripts.pory"
	hidenamebox
# 571 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 572 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE111_STATE, 3
# 573 "data/maps/RustboroCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 574 "data/maps/RustboroCity/scripts.pory"
	delay 24
# 575 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_WALLY
# 576 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_WALLY_RUSTBORO
# 577 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_WALLY_111
# 578 "data/maps/RustboroCity/scripts.pory"
	delay 8
# 579 "data/maps/RustboroCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 580 "data/maps/RustboroCity/scripts.pory"
	delay 16
# 581 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 582 "data/maps/RustboroCity/scripts.pory"
	end
# 583 "data/maps/RustboroCity/scripts.pory"

# 584 "data/maps/RustboroCity/scripts.pory"

# 585 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MovePlayerOutTheWay::
# 586 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_MovePlayerOutTheWay
# 587 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 588 "data/maps/RustboroCity/scripts.pory"
	return
# 589 "data/maps/RustboroCity/scripts.pory"

# 590 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MovePlayerEast:
# 591 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_MovePlayerEast
# 592 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 593 "data/maps/RustboroCity/scripts.pory"
	return
# 594 "data/maps/RustboroCity/scripts.pory"

# 595 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MovePlayerWest:
# 596 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_MovePlayerWest
# 597 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 598 "data/maps/RustboroCity/scripts.pory"
	return
# 599 "data/maps/RustboroCity/scripts.pory"

# 600 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_MovePlayerEast:
# 601 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 602 "data/maps/RustboroCity/scripts.pory"
	face_up
# 603 "data/maps/RustboroCity/scripts.pory"
	step_end
# 604 "data/maps/RustboroCity/scripts.pory"

# 605 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_MovePlayerWest:
# 606 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 607 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 608 "data/maps/RustboroCity/scripts.pory"
	step_end
# 609 "data/maps/RustboroCity/scripts.pory"

# 610 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_MovePlayerOutTheWay:
# 611 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 612 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 613 "data/maps/RustboroCity/scripts.pory"
	face_left
# 614 "data/maps/RustboroCity/scripts.pory"
	step_end
# 615 "data/maps/RustboroCity/scripts.pory"
	
# 616 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_WallyGoToGym1:
# 617 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 618 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 619 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 620 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 621 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 622 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 623 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 624 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 625 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 626 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 627 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 628 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 629 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 630 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 631 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 632 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 633 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 634 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 635 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 636 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 637 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 638 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 639 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 640 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 641 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 642 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 643 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 644 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 645 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 646 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 647 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 648 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 649 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 650 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 651 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 652 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 653 "data/maps/RustboroCity/scripts.pory"
	step_end
# 654 "data/maps/RustboroCity/scripts.pory"

# 655 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerGoToGym:
# 656 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 657 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 658 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 659 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 660 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 661 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 662 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 663 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 664 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 665 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 666 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 667 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 668 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 669 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 670 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 671 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 672 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 673 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 674 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 675 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 676 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 677 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 678 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 679 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 680 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 681 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 682 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 683 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 684 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 685 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 686 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 687 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 688 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 689 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 690 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 691 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 692 "data/maps/RustboroCity/scripts.pory"
	step_end
# 693 "data/maps/RustboroCity/scripts.pory"

# 694 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerGoToGym2:
# 695 "data/maps/RustboroCity/scripts.pory"
	face_up
# 696 "data/maps/RustboroCity/scripts.pory"
	delay_8
# 697 "data/maps/RustboroCity/scripts.pory"
	face_right
# 698 "data/maps/RustboroCity/scripts.pory"
	delay_8
# 699 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 700 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 701 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 702 "data/maps/RustboroCity/scripts.pory"
	face_up
# 703 "data/maps/RustboroCity/scripts.pory"
	delay_8
# 704 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 705 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 706 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 707 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 708 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 709 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 710 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 711 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 712 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 713 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 714 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 715 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 716 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 717 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 718 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 719 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 720 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 721 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 722 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 723 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 724 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 725 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 726 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 727 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 728 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 729 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 730 "data/maps/RustboroCity/scripts.pory"
	face_right
# 731 "data/maps/RustboroCity/scripts.pory"
	delay_8
# 732 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 733 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 734 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 735 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 736 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 737 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 738 "data/maps/RustboroCity/scripts.pory"
	step_end
# 739 "data/maps/RustboroCity/scripts.pory"

# 740 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_WallyEnterCenter:
# 741 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 742 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_up
# 743 "data/maps/RustboroCity/scripts.pory"
	step_end
# 744 "data/maps/RustboroCity/scripts.pory"

# 745 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_WallyEnterCenter2:
# 746 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 747 "data/maps/RustboroCity/scripts.pory"
	set_invisible
# 748 "data/maps/RustboroCity/scripts.pory"
	step_end
# 749 "data/maps/RustboroCity/scripts.pory"

# 750 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_WallyOutCenter:
# 751 "data/maps/RustboroCity/scripts.pory"
	set_visible
# 752 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 753 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 754 "data/maps/RustboroCity/scripts.pory"
	face_player
# 755 "data/maps/RustboroCity/scripts.pory"
	step_end
# 756 "data/maps/RustboroCity/scripts.pory"

# 757 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 758 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 759 "data/maps/RustboroCity/scripts.pory"
	step_end
# 760 "data/maps/RustboroCity/scripts.pory"

# 761 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 762 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 763 "data/maps/RustboroCity/scripts.pory"
	step_end
# 764 "data/maps/RustboroCity/scripts.pory"

# 765 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 766 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 767 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 768 "data/maps/RustboroCity/scripts.pory"
	step_end
# 769 "data/maps/RustboroCity/scripts.pory"

# 770 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 771 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 772 "data/maps/RustboroCity/scripts.pory"
	step_end
# 773 "data/maps/RustboroCity/scripts.pory"

# 774 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_WallyEnterGym:
# 775 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 776 "data/maps/RustboroCity/scripts.pory"
	delay_8
# 777 "data/maps/RustboroCity/scripts.pory"
	face_player
# 778 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 779 "data/maps/RustboroCity/scripts.pory"
	face_up
# 780 "data/maps/RustboroCity/scripts.pory"
	delay_8
# 781 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 782 "data/maps/RustboroCity/scripts.pory"
	step_end
# 783 "data/maps/RustboroCity/scripts.pory"
	
# 784 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_WallyEnterGym2:
# 785 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 786 "data/maps/RustboroCity/scripts.pory"
	set_invisible
# 787 "data/maps/RustboroCity/scripts.pory"
	step_end
# 788 "data/maps/RustboroCity/scripts.pory"

# 789 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_WallyOutGym:
# 790 "data/maps/RustboroCity/scripts.pory"
	set_visible
# 791 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 792 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 793 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 794 "data/maps/RustboroCity/scripts.pory"
	delay_8
# 795 "data/maps/RustboroCity/scripts.pory"
	face_player
# 796 "data/maps/RustboroCity/scripts.pory"
	delay_8
# 797 "data/maps/RustboroCity/scripts.pory"
	step_end
# 798 "data/maps/RustboroCity/scripts.pory"

# 799 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 800 "data/maps/RustboroCity/scripts.pory"
	lock
# 801 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 802 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 803 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 804 "data/maps/RustboroCity/scripts.pory"
	release
# 805 "data/maps/RustboroCity/scripts.pory"
	end
# 806 "data/maps/RustboroCity/scripts.pory"

# 807 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 808 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 809 "data/maps/RustboroCity/scripts.pory"
	release
# 810 "data/maps/RustboroCity/scripts.pory"
	end
# 811 "data/maps/RustboroCity/scripts.pory"

# 812 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 813 "data/maps/RustboroCity/scripts.pory"
	lock
# 814 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 815 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 816 "data/maps/RustboroCity/scripts.pory"
	release
# 817 "data/maps/RustboroCity/scripts.pory"
	end
# 818 "data/maps/RustboroCity/scripts.pory"

# 819 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 820 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 821 "data/maps/RustboroCity/scripts.pory"
	end
# 822 "data/maps/RustboroCity/scripts.pory"

# 823 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 824 "data/maps/RustboroCity/scripts.pory"
	lock
# 825 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 826 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 827 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 828 "data/maps/RustboroCity/scripts.pory"
	release
# 829 "data/maps/RustboroCity/scripts.pory"
	end
# 830 "data/maps/RustboroCity/scripts.pory"

# 831 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 832 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 833 "data/maps/RustboroCity/scripts.pory"
	release
# 834 "data/maps/RustboroCity/scripts.pory"
	end
# 835 "data/maps/RustboroCity/scripts.pory"

# 836 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 837 "data/maps/RustboroCity/scripts.pory"
	lock
# 838 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 839 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 840 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 841 "data/maps/RustboroCity/scripts.pory"
	release
# 842 "data/maps/RustboroCity/scripts.pory"
	end
# 843 "data/maps/RustboroCity/scripts.pory"

# 844 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 845 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 846 "data/maps/RustboroCity/scripts.pory"
	release
# 847 "data/maps/RustboroCity/scripts.pory"
	end
# 848 "data/maps/RustboroCity/scripts.pory"

# 849 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 850 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 851 "data/maps/RustboroCity/scripts.pory"
	end
# 852 "data/maps/RustboroCity/scripts.pory"

# 853 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 854 "data/maps/RustboroCity/scripts.pory"
	checkitem ITEM_TM70
# 855 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_EventScript_NinjaBoy2
# 856 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 857 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_TM70
# 858 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_NinjaSubstitueAtSchool, MSGBOX_SIGN
# 859 "data/maps/RustboroCity/scripts.pory"
	end
# 860 "data/maps/RustboroCity/scripts.pory"

# 861 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy2::
# 862 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_NinjaLeaveMeAlone, MSGBOX_SIGN
# 863 "data/maps/RustboroCity/scripts.pory"
	release
# 864 "data/maps/RustboroCity/scripts.pory"
	end
# 865 "data/maps/RustboroCity/scripts.pory"

# 866 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 867 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 868 "data/maps/RustboroCity/scripts.pory"
	end
# 869 "data/maps/RustboroCity/scripts.pory"

# 870 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 871 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 872 "data/maps/RustboroCity/scripts.pory"
	end
# 873 "data/maps/RustboroCity/scripts.pory"

# 874 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 875 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 876 "data/maps/RustboroCity/scripts.pory"
	end
# 877 "data/maps/RustboroCity/scripts.pory"

# 878 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 879 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 880 "data/maps/RustboroCity/scripts.pory"
	end
# 881 "data/maps/RustboroCity/scripts.pory"

# 882 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 883 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 884 "data/maps/RustboroCity/scripts.pory"
	end
# 885 "data/maps/RustboroCity/scripts.pory"

# 886 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 887 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 888 "data/maps/RustboroCity/scripts.pory"
	end
# 889 "data/maps/RustboroCity/scripts.pory"

# 890 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 891 "data/maps/RustboroCity/scripts.pory"
	lock
# 892 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 893 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 894 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 895 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 896 "data/maps/RustboroCity/scripts.pory"
	release
# 897 "data/maps/RustboroCity/scripts.pory"
	end
# 898 "data/maps/RustboroCity/scripts.pory"

# 899 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoyNo::
# 900 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_LittleBoyNo, MSGBOX_DEFAULT
# 901 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 902 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 903 "data/maps/RustboroCity/scripts.pory"
	release
# 904 "data/maps/RustboroCity/scripts.pory"
	end
# 905 "data/maps/RustboroCity/scripts.pory"
	
# 906 "data/maps/RustboroCity/scripts.pory"
 
# 907 "data/maps/RustboroCity/scripts.pory"

# 908 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 909 "data/maps/RustboroCity/scripts.pory"
	lock
# 910 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 911 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 912 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 913 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 914 "data/maps/RustboroCity/scripts.pory"
	release
# 915 "data/maps/RustboroCity/scripts.pory"
	end
# 916 "data/maps/RustboroCity/scripts.pory"

# 917 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 918 "data/maps/RustboroCity/scripts.pory"
	lock
# 919 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 920 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 921 "data/maps/RustboroCity/scripts.pory"
	release
# 922 "data/maps/RustboroCity/scripts.pory"
	end
# 923 "data/maps/RustboroCity/scripts.pory"

# 924 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 925 "data/maps/RustboroCity/scripts.pory"
	lockall
# 926 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 927 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 928 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 929 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 930 "data/maps/RustboroCity/scripts.pory"
	end
# 931 "data/maps/RustboroCity/scripts.pory"

# 932 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 933 "data/maps/RustboroCity/scripts.pory"
	lockall
# 934 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 935 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 936 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 937 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 938 "data/maps/RustboroCity/scripts.pory"
	end
# 939 "data/maps/RustboroCity/scripts.pory"

# 940 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 941 "data/maps/RustboroCity/scripts.pory"
	lockall
# 942 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 943 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 944 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 945 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 946 "data/maps/RustboroCity/scripts.pory"
	end
# 947 "data/maps/RustboroCity/scripts.pory"

# 948 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 949 "data/maps/RustboroCity/scripts.pory"
	lockall
# 950 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 951 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 952 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 953 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 954 "data/maps/RustboroCity/scripts.pory"
	end
# 955 "data/maps/RustboroCity/scripts.pory"

# 956 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 957 "data/maps/RustboroCity/scripts.pory"
	lockall
# 958 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 959 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 960 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 961 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 962 "data/maps/RustboroCity/scripts.pory"
	end
# 963 "data/maps/RustboroCity/scripts.pory"

# 964 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 965 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 966 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 967 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 968 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 969 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 970 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 971 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0 
# 972 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 973 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 974 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 975 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 976 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 977 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 978 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 979 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 980 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 981 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 982 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 983 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 984 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 985 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 986 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 987 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 988 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 989 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 990 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 991 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 992 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 993 "data/maps/RustboroCity/scripts.pory"
	end
# 994 "data/maps/RustboroCity/scripts.pory"

# 995 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 996 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 997 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 998 "data/maps/RustboroCity/scripts.pory"
	return
# 999 "data/maps/RustboroCity/scripts.pory"

# 1000 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 1001 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 1002 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 1003 "data/maps/RustboroCity/scripts.pory"
	return
# 1004 "data/maps/RustboroCity/scripts.pory"

# 1005 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 1006 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 1007 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 1008 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1009 "data/maps/RustboroCity/scripts.pory"
	return
# 1010 "data/maps/RustboroCity/scripts.pory"

# 1011 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 1012 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 1013 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 1014 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1015 "data/maps/RustboroCity/scripts.pory"
	return
# 1016 "data/maps/RustboroCity/scripts.pory"

# 1017 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 1018 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 1019 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 1020 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1021 "data/maps/RustboroCity/scripts.pory"
	return
# 1022 "data/maps/RustboroCity/scripts.pory"

# 1023 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 1024 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 1025 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 1026 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1027 "data/maps/RustboroCity/scripts.pory"
	return
# 1028 "data/maps/RustboroCity/scripts.pory"

# 1029 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 1030 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 1031 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 1032 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1033 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1034 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1035 "data/maps/RustboroCity/scripts.pory"
	return
# 1036 "data/maps/RustboroCity/scripts.pory"

# 1037 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 1038 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 1039 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 1040 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 1041 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1042 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1043 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1044 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1045 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1046 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1047 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1048 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1049 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1050 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1051 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1052 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1053 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1054 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1055 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1056 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1057 "data/maps/RustboroCity/scripts.pory"

# 1058 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 1059 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 1060 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 1061 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1062 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1063 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1064 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1065 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1066 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1067 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1068 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1069 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1070 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1071 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1072 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1073 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1074 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1075 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1076 "data/maps/RustboroCity/scripts.pory"

# 1077 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 1078 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1079 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1080 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1081 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1082 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1083 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1084 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 1085 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1086 "data/maps/RustboroCity/scripts.pory"

# 1087 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 1088 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1089 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1090 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1091 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1092 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1093 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1094 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1095 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1096 "data/maps/RustboroCity/scripts.pory"

# 1097 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 1098 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 1099 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1100 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1101 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1102 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1103 "data/maps/RustboroCity/scripts.pory"

# 1104 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 1105 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 1106 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1107 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1108 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1109 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1110 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1111 "data/maps/RustboroCity/scripts.pory"

# 1112 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 1113 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 1114 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1115 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1116 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1117 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1118 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1119 "data/maps/RustboroCity/scripts.pory"

# 1120 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 1121 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 1122 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1123 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1124 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1125 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1126 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1127 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1128 "data/maps/RustboroCity/scripts.pory"

# 1129 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 1130 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 1131 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1132 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1133 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1134 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1135 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1136 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1137 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 1138 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1139 "data/maps/RustboroCity/scripts.pory"

# 1140 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 1141 "data/maps/RustboroCity/scripts.pory"
	lock
# 1142 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 1143 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 1144 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 1145 "data/maps/RustboroCity/scripts.pory"
	release
# 1146 "data/maps/RustboroCity/scripts.pory"
	end
# 1147 "data/maps/RustboroCity/scripts.pory"

# 1148 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 1149 "data/maps/RustboroCity/scripts.pory"
	waitse
# 1150 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 1151 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 1152 "data/maps/RustboroCity/scripts.pory"
	end
# 1153 "data/maps/RustboroCity/scripts.pory"

# 1154 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 1155 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1156 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1157 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 1158 "data/maps/RustboroCity/scripts.pory"
	end
# 1159 "data/maps/RustboroCity/scripts.pory"

# 1160 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 1161 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1162 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1163 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 1164 "data/maps/RustboroCity/scripts.pory"
	end
# 1165 "data/maps/RustboroCity/scripts.pory"

# 1166 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 1167 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1168 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 1169 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 1170 "data/maps/RustboroCity/scripts.pory"
	end
# 1171 "data/maps/RustboroCity/scripts.pory"

# 1172 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 1173 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1174 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 1175 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 1176 "data/maps/RustboroCity/scripts.pory"
	end
# 1177 "data/maps/RustboroCity/scripts.pory"

# 1178 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 1179 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 1180 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 1181 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 1182 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 1183 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 1184 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 1185 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 1186 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 1187 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1188 "data/maps/RustboroCity/scripts.pory"
	end
# 1189 "data/maps/RustboroCity/scripts.pory"

# 1190 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 1191 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 1192 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 1193 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1194 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1195 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1196 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1197 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1198 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1199 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1200 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1201 "data/maps/RustboroCity/scripts.pory"
	return
# 1202 "data/maps/RustboroCity/scripts.pory"

# 1203 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 1204 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 1205 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1206 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1207 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1208 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1209 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1210 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1211 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 1212 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1213 "data/maps/RustboroCity/scripts.pory"
	return
# 1214 "data/maps/RustboroCity/scripts.pory"

# 1215 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 1216 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 1217 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1218 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1219 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1220 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1221 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1222 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1223 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1224 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1225 "data/maps/RustboroCity/scripts.pory"
	return
# 1226 "data/maps/RustboroCity/scripts.pory"

# 1227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 1228 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 1229 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1230 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1231 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1232 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1233 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1234 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1235 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 1236 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1237 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1238 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1239 "data/maps/RustboroCity/scripts.pory"
	return
# 1240 "data/maps/RustboroCity/scripts.pory"

# 1241 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 1242 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1243 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1244 "data/maps/RustboroCity/scripts.pory"

# 1245 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 1246 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1247 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1248 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 1249 "data/maps/RustboroCity/scripts.pory"
	end
# 1250 "data/maps/RustboroCity/scripts.pory"

# 1251 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 1252 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1253 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1254 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 1255 "data/maps/RustboroCity/scripts.pory"
	end
# 1256 "data/maps/RustboroCity/scripts.pory"

# 1257 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 1258 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1259 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 1260 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 1261 "data/maps/RustboroCity/scripts.pory"
	end
# 1262 "data/maps/RustboroCity/scripts.pory"

# 1263 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 1264 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1265 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 1266 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 1267 "data/maps/RustboroCity/scripts.pory"
	end
# 1268 "data/maps/RustboroCity/scripts.pory"

# 1269 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 1270 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 1271 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 1272 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 1273 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 1274 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 1275 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 1276 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL, 5
# 1277 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_NET_BALL, 5
# 1278 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 1279 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 1280 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1281 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 1282 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 1283 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 1284 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1285 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 1286 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 1287 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1288 "data/maps/RustboroCity/scripts.pory"
	end
# 1289 "data/maps/RustboroCity/scripts.pory"

# 1290 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 1291 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 1292 "data/maps/RustboroCity/scripts.pory"
	return
# 1293 "data/maps/RustboroCity/scripts.pory"

# 1294 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 1295 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 1296 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1297 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1298 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1299 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1300 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1301 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1302 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1303 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1304 "data/maps/RustboroCity/scripts.pory"
	return
# 1305 "data/maps/RustboroCity/scripts.pory"

# 1306 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 1307 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 1308 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1309 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1310 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1311 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1312 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1313 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1314 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 1315 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1316 "data/maps/RustboroCity/scripts.pory"
	return
# 1317 "data/maps/RustboroCity/scripts.pory"

# 1318 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 1319 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 1320 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1321 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1322 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1323 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1324 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1325 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1326 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1327 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1328 "data/maps/RustboroCity/scripts.pory"
	return
# 1329 "data/maps/RustboroCity/scripts.pory"

# 1330 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 1331 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 1332 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1333 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1334 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1335 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1336 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1337 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1338 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 1339 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1340 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1341 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1342 "data/maps/RustboroCity/scripts.pory"
	return
# 1343 "data/maps/RustboroCity/scripts.pory"

# 1344 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 1345 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 1346 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1347 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1348 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1349 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1350 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1351 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1352 "data/maps/RustboroCity/scripts.pory"
	return
# 1353 "data/maps/RustboroCity/scripts.pory"

# 1354 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 1355 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1356 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 1357 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 1358 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1359 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1360 "data/maps/RustboroCity/scripts.pory"

# 1361 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 1362 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 1363 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 1364 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 1365 "data/maps/RustboroCity/scripts.pory"
	return
# 1366 "data/maps/RustboroCity/scripts.pory"

# 1367 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 1368 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 1369 "data/maps/RustboroCity/scripts.pory"
	return
# 1370 "data/maps/RustboroCity/scripts.pory"

# 1371 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 1372 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 1373 "data/maps/RustboroCity/scripts.pory"
	return
# 1374 "data/maps/RustboroCity/scripts.pory"

# 1375 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 1376 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1377 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1378 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1379 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1380 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1381 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1382 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1383 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1384 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1385 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 1386 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1387 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1388 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1389 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1390 "data/maps/RustboroCity/scripts.pory"

# 1391 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 1392 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1393 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1394 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1395 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1396 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1397 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1398 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1399 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1400 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1401 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 1402 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1403 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1404 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1405 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1406 "data/maps/RustboroCity/scripts.pory"

# 1407 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 1408 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1409 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1410 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1411 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1412 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1413 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1414 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1415 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1416 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1417 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 1418 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1419 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1420 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1421 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1422 "data/maps/RustboroCity/scripts.pory"

# 1423 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 1424 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1425 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1426 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1427 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1428 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1429 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1430 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1431 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1432 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1433 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 1434 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1435 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1436 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1437 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1438 "data/maps/RustboroCity/scripts.pory"

# 1439 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 1440 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1441 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1442 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1443 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1444 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1445 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1446 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1447 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1448 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1449 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 1450 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1451 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1452 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1453 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1454 "data/maps/RustboroCity/scripts.pory"

# 1455 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 1456 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1457 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1458 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1459 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1460 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1461 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1462 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1463 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1464 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1465 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 1466 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1467 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1468 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1469 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1470 "data/maps/RustboroCity/scripts.pory"

# 1471 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 1472 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1473 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1474 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1475 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1476 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1477 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1478 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1479 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1480 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1481 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 1482 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1483 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1484 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1485 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1486 "data/maps/RustboroCity/scripts.pory"

# 1487 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 1488 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1489 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1490 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1491 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1492 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1493 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1494 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1495 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1496 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1497 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 1498 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1499 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1500 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1501 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1502 "data/maps/RustboroCity/scripts.pory"

# 1503 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 1504 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 1505 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 1506 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 1507 "data/maps/RustboroCity/scripts.pory"
	end
# 1508 "data/maps/RustboroCity/scripts.pory"

# 1509 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 1510 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 1511 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 1512 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 1513 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 1514 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1515 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1516 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 1517 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1518 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1519 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 1520 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMay
# 1521 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1522 "data/maps/RustboroCity/scripts.pory"
	end
# 1523 "data/maps/RustboroCity/scripts.pory"

# 1524 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 1525 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 1526 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_DEFAULT
# 1527 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMay
# 1528 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1529 "data/maps/RustboroCity/scripts.pory"
	end
# 1530 "data/maps/RustboroCity/scripts.pory"

# 1531 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 1532 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 1533 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 1534 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 1535 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 1536 "data/maps/RustboroCity/scripts.pory"
	end
# 1537 "data/maps/RustboroCity/scripts.pory"

# 1538 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 1539 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_SYS_DEXNAV_GET, RustboroCity_EventScript_MayBrineyNoHint
# 1540 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1541 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 1542 "data/maps/RustboroCity/scripts.pory"
	message RustboroCity_Text_DexNav
# 1543 "data/maps/RustboroCity/scripts.pory"
	waitmessage
# 1544 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 1545 "data/maps/RustboroCity/scripts.pory"
	setcaughtmon SPECIES_POOCHYENA
# 1546 "data/maps/RustboroCity/scripts.pory"
	setcaughtmon SPECIES_WURMPLE
# 1547 "data/maps/RustboroCity/scripts.pory"
	setcaughtmon SPECIES_ZIGZAGOON
# 1548 "data/maps/RustboroCity/scripts.pory"
	setcaughtmon SPECIES_CATERPIE
# 1549 "data/maps/RustboroCity/scripts.pory"
	setcaughtmon SPECIES_SHROOMISH
# 1550 "data/maps/RustboroCity/scripts.pory"
	setcaughtmon SPECIES_HAPPINY
# 1551 "data/maps/RustboroCity/scripts.pory"
	setcaughtmon SPECIES_AUDINO
# 1552 "data/maps/RustboroCity/scripts.pory"
	setcaughtmon SPECIES_TREECKO
# 1553 "data/maps/RustboroCity/scripts.pory"
	setcaughtmon SPECIES_MUDKIP
# 1554 "data/maps/RustboroCity/scripts.pory"
	setcaughtmon SPECIES_TORCHIC
# 1555 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 1556 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1557 "data/maps/RustboroCity/scripts.pory"
	end
# 1558 "data/maps/RustboroCity/scripts.pory"

# 1559 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyNoHint::
# 1560 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayNoMrBrineyHint, MSGBOX_DEFAULT
# 1561 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 1562 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1563 "data/maps/RustboroCity/scripts.pory"
	end
# 1564 "data/maps/RustboroCity/scripts.pory"

# 1565 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 1566 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 1567 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 1568 "data/maps/RustboroCity/scripts.pory"
	return
# 1569 "data/maps/RustboroCity/scripts.pory"

# 1570 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 1571 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 1572 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1573 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1574 "data/maps/RustboroCity/scripts.pory"
	end
# 1575 "data/maps/RustboroCity/scripts.pory"

# 1576 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 1577 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 1578 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1579 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1580 "data/maps/RustboroCity/scripts.pory"
	end
# 1581 "data/maps/RustboroCity/scripts.pory"

# 1582 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 1583 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 1584 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1585 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1586 "data/maps/RustboroCity/scripts.pory"
	end
# 1587 "data/maps/RustboroCity/scripts.pory"

# 1588 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 1589 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 1590 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 1591 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 1592 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 1593 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1594 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 1595 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1596 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1597 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendan
# 1598 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 1599 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1600 "data/maps/RustboroCity/scripts.pory"
	end
# 1601 "data/maps/RustboroCity/scripts.pory"

# 1602 "data/maps/RustboroCity/scripts.pory"

# 1603 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 1604 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_DEFAULT
# 1605 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 1606 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 1607 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 1608 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 1609 "data/maps/RustboroCity/scripts.pory"
	end
# 1610 "data/maps/RustboroCity/scripts.pory"

# 1611 "data/maps/RustboroCity/scripts.pory"

# 1612 "data/maps/RustboroCity/scripts.pory"

# 1613 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 1614 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 1615 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1616 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1617 "data/maps/RustboroCity/scripts.pory"
	end
# 1618 "data/maps/RustboroCity/scripts.pory"

# 1619 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 1620 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 1621 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1622 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1623 "data/maps/RustboroCity/scripts.pory"
	end
# 1624 "data/maps/RustboroCity/scripts.pory"

# 1625 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 1626 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 1627 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1628 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1629 "data/maps/RustboroCity/scripts.pory"
	end
# 1630 "data/maps/RustboroCity/scripts.pory"

# 1631 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 1632 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1633 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1634 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1635 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1636 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1637 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1638 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1639 "data/maps/RustboroCity/scripts.pory"

# 1640 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 1641 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1642 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1643 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1644 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1645 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1646 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1647 "data/maps/RustboroCity/scripts.pory"

# 1648 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1649 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1650 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1651 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1652 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1653 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1654 "data/maps/RustboroCity/scripts.pory"

# 1655 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1656 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1657 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1658 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1659 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1660 "data/maps/RustboroCity/scripts.pory"

# 1661 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1662 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1663 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1664 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1665 "data/maps/RustboroCity/scripts.pory"

# 1666 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1667 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1668 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1669 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1670 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1671 "data/maps/RustboroCity/scripts.pory"

# 1672 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1673 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1674 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1675 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1676 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1677 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1678 "data/maps/RustboroCity/scripts.pory"

# 1679 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1680 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1681 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1682 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1683 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1684 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1685 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1686 "data/maps/RustboroCity/scripts.pory"

# 1687 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1688 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1689 "data/maps/RustboroCity/scripts.pory"
	end

RustboroCity_Text_WallyPokeCenter::
# 1 "data/maps/RustboroCity/scripts.pory"
	.string "¡Ah, hola {PLAYER}!\n"
	.string "Estoy acá para comprar Pociones y\l"
	.string "cosas así. Quiero enfrentarme al\l"
	.string "siguiente Gimnasio, pero no sé si\l"
	.string "podré\l"
	.string "sin Objetos Curativos...\p"
	.string "He atrapado un Roselia, ¡Así que tendré\n"
	.string "algo de ventaja de tipos aquí\l"
	.string "también!\p"
	.string "Bueno, {PLAYER} te veo cuando\n"
	.string "termine mis compras.$"

RustboroCity_Text_LittleBoyNo::
# 13 "data/maps/RustboroCity/scripts.pory"
	.string "No tienes tipos Normal.$"

RustboroCity_Text_WallyPrepared::
# 17 "data/maps/RustboroCity/scripts.pory"
	.string "¡Ahora ya estoy listo! Acompáñame,\n"
	.string "{PLAYER}, así tendré a alguien\l"
	.string "apoyándome y podré tener más\l"
	.string "confianza.$"

RustboroCity_Text_WeShortenItToDevon::
# 25 "data/maps/RustboroCity/scripts.pory"
	.string "La {COLOR BLUE}Corporación Devon{COLOR DARK_GRAY}, o simplemente\n"
	.string "Devon,\n"
	.string "es una compañía que hace toda clase\l"
	.string "de cosas.\p"
	.string "¡La necesitamos para nuestra\n"
	.string "subsistencia!$"

RustboroCity_Text_SneakyLookingManWentAroundCorner::
# 31 "data/maps/RustboroCity/scripts.pory"
	.string "¿Un hombre sospechoso?\n"
	.string "Ahora que lo mencionas, sí,\l"
	.string "vi a un hombre disfrazado por aquí…$"

RustboroCity_Text_HaveYouChallengedGym::
# 37 "data/maps/RustboroCity/scripts.pory"
	.string "Las personas no respetan mucho a\n"
	.string "quienes no tienen medallas de\l"
	.string "Gimnasio.\p"
	.string "Quienes sí las tienen, sin\n"
	.string "embargo, se convierten en mini\l"
	.string "celebridades en su ciudad.\p"
	.string "Yo no puedo conseguir ninguna ni con\n"
	.string "{COLOR GREEN}Pokémon Tipo Planta{COLOR DARK_GRAY}.$"

RustboroCity_Text_HeyThatsRustborosGymBadge::
# 47 "data/maps/RustboroCity/scripts.pory"
	.string "¡Ey, es la {COLOR GREEN}Medalla de Rustboro{COLOR DARK_GRAY}!\n"
	.string "En mi opinión, es la mejor.$"

RustboroCity_Text_YoureNewAroundHere::
# 52 "data/maps/RustboroCity/scripts.pory"
	.string "¿Oh? ¿Eres nuev{OA} por aquí?\n"
	.string "¿Acaso te transfirieron al colegio?$"

RustboroCity_Text_GymLeaderIsntEasyWithFire::
# 57 "data/maps/RustboroCity/scripts.pory"
	.string "La Líder del Gimnasio, {COLOR RED}Roxxane{COLOR DARK_GRAY},\n"
	.string "tiene más o menos mi edad, 17 años,\l"
	.string "y sin embargo, ¡Ella es mucho más\l"
	.string "bonita\l"
	.string "y fuerte que yo!\p"
	.string "¡Qué envidia!$"

RustboroCity_Text_MrBrineyWalksInTheTunnel::
# 65 "data/maps/RustboroCity/scripts.pory"
	.string "Desde que dejó a su mujer,\n"
	.string "el Señor Briney vive en una cabañita\l"
	.string "cerca del mar.\p"
	.string "Aunque lo he escuchado decir que ahora\n"
	.string "es mucho más feliz.\p"
	.string "Supongo que el romance no es para\n"
	.string "todos.$"

RustboroCity_Text_MrBrineyLovesPeeko::
# 72 "data/maps/RustboroCity/scripts.pory"
	.string "El Señor Briney vive con su mascota,\n"
	.string "Peeko.\p"
	.string "Me contó que lo tiene desde que era un\n"
	.string "huevo, y que aunque ya hayan pasado\l"
	.string "años, no sabe combatir.\p"
	.string "Es un alivio, pues él está muy grande ya\n"
	.string "para emociones fuertes…$"

RustboroCity_Text_WowYouHavePokemon::
# 79 "data/maps/RustboroCity/scripts.pory"
	.string "¡Wow! ¡Tú tamdién tienes Pokémon!\n"
	.string "Cuando sea gdande, sedé un\l"
	.string "Entdenadod podedosisímo!$"

RustboroCity_Text_CatchRarePokemonIfIGoToSchool::
# 84 "data/maps/RustboroCity/scripts.pory"
	.string "¡Ah, me encontraste!\n"
	.string "¡Toma esto y déjame solo!$"

RustboroCity_Text_NinjaSubstitueAtSchool::
# 88 "data/maps/RustboroCity/scripts.pory"
	.string "Puedes usarla como yo para saltarte\n"
	.string "clases, dejando un sustituto ahí.$"

RustboroCity_Text_NinjaLeaveMeAlone::
# 92 "data/maps/RustboroCity/scripts.pory"
	.string "Ahora déjame solo.$"

RustboroCity_Text_PokemonCanChangeLookFromExp::
# 97 "data/maps/RustboroCity/scripts.pory"
	.string "La evolución es un misterio.\n"
	.string "Aunque se sabe que produce mucha,\l"
	.string "pero que mucha energía.$"

RustboroCity_Text_PokemonChangeShape::
# 103 "data/maps/RustboroCity/scripts.pory"
	.string "Si alguien usara la energia evolutiva\n"
	.string "para cosas malas, ¡Lo mataría!$"

RustboroCity_Text_TradePokemonGrowFast::
# 108 "data/maps/RustboroCity/scripts.pory"
	.string "Los Pokémon te podrían desobedecer\n"
	.string "pasado cierto nivel, pero te\l"
	.string "respetarán al ganar medallas…$"

RustboroCity_Text_OutOfTheWay::
# 112 "data/maps/RustboroCity/scripts.pory"
	.string "¡FUERA!\n"
	.string "¡LARGO DE AQUÍ!$"

RustboroCity_Text_WaitDontTakeMyGoods::
# 127 "data/maps/RustboroCity/scripts.pory"
	.string "¡NOOO! ¡POR FAVOOOORRR!\p"
	.string "¡NO SE LLEVEN ESAS PARTES!$"

RustboroCity_Text_HelpMeIWasRobbed::
# 141 "data/maps/RustboroCity/scripts.pory"
	.string "¡E-eres tú!\p"
	.string "¡Ayúdame, me han robado!\n"
	.string "¡Se han robado las {COLOR BLUE}Partes{COLOR DARK_GRAY}!\p"
	.string "Si no las re-recupero…$"

RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel::
# 158 "data/maps/RustboroCity/scripts.pory"
	.string "¿El ladrón?\n"
	.string "Se fue hacia el Túnel.$"

RustboroCity_Text_YouGotItThankYou::
# 169 "data/maps/RustboroCity/scripts.pory"
	.string "¡Ah, por Arceus, las recuperaste!\p"
	.string "Ten esto como agradecimiento.$"

RustboroCity_Text_YoureLoadedWithItems::
# 180 "data/maps/RustboroCity/scripts.pory"
	.string "Ah, ok.$"

RustboroCity_Text_PleaseComeWithMe::
# 184 "data/maps/RustboroCity/scripts.pory"
	.string "¡Sígueme!$"

RustboroCity_Text_MayHiLetsRegister::
# 195 "data/maps/RustboroCity/scripts.pory"
	.string "Ah, hola {PLAYER}.\p"
	.string "¿Te regalaron el PokéNav por tu\n"
	.string "fuerza?\p"
	.string "Yo... Tuve que comprarlo...\p"
	.string "Pero... Eh... Tengamos otra batalla, si me\n"
	.string "ganas, combinaré los datos de tu\l"
	.string "Pokédex y la mía, para ayudarnos en la\l"
	.string "investigación.$"

RustboroCity_Text_MayPassedBrineyWantToBattle::
# 208 "data/maps/RustboroCity/scripts.pory"
	.string "¡Prepárate!$"

RustboroCity_Text_MayDefeat::
# 219 "data/maps/RustboroCity/scripts.pory"
	.string "Aún no puedo derrotarte…\p"
	.string "Aún con todos estos datos, Papá no…$"

RustboroCity_Text_DexNav::
# 230 "data/maps/RustboroCity/scripts.pory"
	.string "¡{RIVAL} desbloqueó tu DexNav!$"

RustboroCity_Text_MayMrBrineyHint::
# 242 "data/maps/RustboroCity/scripts.pory"
	.string "Eso no lo tenías, ¿No?\p"
	.string "Es el {COLOR BLUE}DexNav{COLOR DARK_GRAY}.\n"
	.string "Con él, podrás {COLOR BLUE}Encadenar Pokémon{COLOR DARK_GRAY}.\p"
	.string "Pues bueno, terminemos esto.\p"
	.string "………………………………………………\n"
	.string "………………………………………………\l"
	.string "………………………………………………\p"
	.string "Listo, te he añadido a los Pokémon que\n"
	.string "tengo yo.\p"
	.string "Ah, sí, el Señor Briney me dijo que te\n"
	.string "está esperando en la Ruta 104.$"

RustboroCity_Text_MayNoMrBrineyHint::
# 264 "data/maps/RustboroCity/scripts.pory"
	.string "El Señor Briney me dijo que te está\n"
	.string "esperando en la Ruta 104.$"

RustboroCity_Text_TunnelNearingCompletion::
# 276 "data/maps/RustboroCity/scripts.pory"
	.string "“¡Ahorra tiempo son este\n"
	.string "magnífico túnel!”\l"
	.string "Eso dice en el cartel,\l"
	.string "pero tiene una gran “X” en medio…$"

RustboroCity_Text_DevonCorpSign::
# 283 "data/maps/RustboroCity/scripts.pory"
	.string "CORPORACIÓN DEVON\p"
	.string "“Por todas tus necesidades,\n"
	.string "hacemos una máquina.”$"

RustboroCity_Text_GymSign::
# 289 "data/maps/RustboroCity/scripts.pory"
	.string "Gimnasio Pokémon Rustboro\n"
	.string "Líder: Roxxane\l"
	.string "“La chica que ama las rocas.”$"

RustboroCity_Text_CitySign::
# 295 "data/maps/RustboroCity/scripts.pory"
	.string "CIUDAD RUSTBORO\p"
	.string "“La ciudad que integra\n"
	.string "ciencia y naturaleza.”$"

RustboroCity_Text_TrainersSchoolSign::
# 301 "data/maps/RustboroCity/scripts.pory"
	.string "ESCUELA POKÉMON$"

RustboroCity_Text_CuttersHouse::
# 305 "data/maps/RustboroCity/scripts.pory"
	.string "Casa del Cortador$"

RustboroCity_Text_DevelopedNewPokenavFeature::
# 309 "data/maps/RustboroCity/scripts.pory"
	.string "Ey, ¡tú!\n"
	.string "El Presidente quería darte las\l"
	.string "gracias con esto.$"

RustboroCity_Text_AddedMatchCallPleaseCallMrStone::
# 315 "data/maps/RustboroCity/scripts.pory"
	.string "¡Listo!\n"
	.string "Ahora podrás llamar personas con\l"
	.string "tu PokéNav!$"

RustboroCity_Text_PleaseSelectPokenav::
# 321 "data/maps/RustboroCity/scripts.pory"
	.string "Elije el POKéNAV.$"

RustboroCity_Text_IdBetterGetBackToWork::
# 325 "data/maps/RustboroCity/scripts.pory"
	.string "Tengo que volver a trabajar.\n"
	.string "¡Hasta pronto, {PLAYER}!$"

RustboroCity_Text_YouCanHave2On2Battle::
# 330 "data/maps/RustboroCity/scripts.pory"
	.string "¡Ten cuidado!\n"
	.string "¡Recientemente se ha descubierto\l"
	.string "que los movimientos de tipo Bicho\l"
	.string "causan\l"
	.string "daño súper efectivo contra las\l"
	.string "Hadas!\p"
	.string "Además de eso, el cambio climático han\n"
	.string "hecho a los tipo Hielo\l"
	.string "resistentes a otros tipos.$"

RustboroCity_Text_WallyReady::
# 340 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}… ¡Deséame suerte!$"

RustboroCity_Text_WallyBattle::
# 344 "data/maps/RustboroCity/scripts.pory"
	.string "Muy bien, yo puedo con esto.$"

RustboroCity_Text_WallySilence::
# 348 "data/maps/RustboroCity/scripts.pory"
	.string "…$"

RustboroCity_Text_WallySilence2::
# 352 "data/maps/RustboroCity/scripts.pory"
	.string "………\n"
	.string "………\l"
	.string "………\p"
	.string "¡Eso fue -COF, COF- increíble!\n"
	.string "-COF, COF, COF-\p"
	.string "¡{PLAYER}!\n"
	.string "¡Vencí a todos sus Pokémon\l"
	.string "sólamente usando a Roselia!$"

RustboroCity_Text_WallyExcited::
# 356 "data/maps/RustboroCity/scripts.pory"
	.string "¡Muchísimas gracias, -COF, COF-\n"
	.string "{PLAYER}, por estar acá conmigo!\l"
	.string "-COF-\p"
	.string "En serio no podría estarte más\n"
	.string "agradecido...\p"
	.string "Desde que inicié este viaje, tuve\n"
	.string "muchas dudas sobre lo que pasaría.\l"
	.string "¿Qué clase de personas conocería?\l"
	.string "¿Qué clase de Pokémon? ¿Podría estar\l"
	.string "listo para enfrentarme a problemas?\p"
	.string "Cuando comencé, las respuestas\n"
	.string "parecían ser “A nadie,” “A ninguno,” y\l"
	.string "“Ni en tus sueños.”\p"
	.string "Pero, gracias a tu apoyo, y a mi\n"
	.string "determinación, ¡Parece que estoy\l"
	.string "siendo capaz de mejorar!\p"
	.string "En serio, muchas, muchísimas gracias,\n"
	.string "{PLAYER}.\n"
	.string "¡La próxima vez que nos veamos,\l"
	.string "causaré\l"
	.string "una Tormenta de Arena por donde vaya!$"
