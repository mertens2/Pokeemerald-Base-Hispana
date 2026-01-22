# 300 "data/maps/RustboroCity_Gym/scripts.pory"

# 301 "data/maps/RustboroCity_Gym/scripts.pory"
.set LOCALID_HINT_GUY, 4
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 304 "data/maps/RustboroCity_Gym/scripts.pory"

# 305 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 306 "data/maps/RustboroCity_Gym/scripts.pory"
	setspeaker Roxanne
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 309 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 310 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 311 "data/maps/RustboroCity_Gym/scripts.pory"
	checkitem ITEM_TM39
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Gym_EventScript_GiveRockTomb
# 313 "data/maps/RustboroCity_Gym/scripts.pory"
	setspeaker Roxanne
# 314 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 318 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Nada::
# 319 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_TEMP_1
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 322 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Clear_Down::
# 323 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
# 324 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 325 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkDown
# 326 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 327 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 329 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Clear_Left::
# 330 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
# 331 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 332 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkLeft
# 333 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 334 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 335 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 336 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Clear_Right::
# 337 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_TEMP_1
# 338 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 339 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkRight1
# 340 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 341 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 342 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 343 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Up1::
# 344 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_1, RustboroCity_Gym_Trigger_Clear_Down
# 345 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLED_PC
# 346 "data/maps/RustboroCity_Gym/scripts.pory"
	getpartysize
# 347 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_lt VAR_RESULT, 4, RustboroCity_Gym_Trigger_Nada
# 348 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 350 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_FaceUp
# 351 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_ExclamationMark
# 352 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 353 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_WaitYouCant
# 354 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 355 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 356 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 357 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 358 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 359 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkDown
# 360 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 361 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 362 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 363 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 364 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymGuide2
# 365 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 366 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 367 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_PlayerWalkDown:
# 368 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_down
# 369 "data/maps/RustboroCity_Gym/scripts.pory"
	step_end
# 370 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_PlayerWalkRight:
# 371 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 372 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 373 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 374 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 375 "data/maps/RustboroCity_Gym/scripts.pory"
	step_end
# 376 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_PlayerWalkRight1:
# 377 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_right
# 378 "data/maps/RustboroCity_Gym/scripts.pory"
	step_end
# 379 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_PlayerWalkLeft:
# 380 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_left
# 381 "data/maps/RustboroCity_Gym/scripts.pory"
	step_end
# 382 "data/maps/RustboroCity_Gym/scripts.pory"

# 383 "data/maps/RustboroCity_Gym/scripts.pory"

# 384 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Left::
# 385 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_1, RustboroCity_Gym_Trigger_Clear_Right
# 386 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLED_PC
# 387 "data/maps/RustboroCity_Gym/scripts.pory"
	getpartysize
# 388 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_lt VAR_RESULT, 4, RustboroCity_Gym_Trigger_Nada
# 389 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 390 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_FaceLeft
# 391 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 392 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 393 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_ExclamationMark
# 394 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 395 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_WaitYouCant
# 396 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 397 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 398 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 399 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 400 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 401 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkRight
# 402 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 403 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 404 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 405 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 406 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymGuide2
# 407 "data/maps/RustboroCity_Gym/scripts.pory"
	end 
# 408 "data/maps/RustboroCity_Gym/scripts.pory"

# 409 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Trigger_Right::
# 410 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_TEMP_1, RustboroCity_Gym_Trigger_Clear_Left
# 411 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLED_PC
# 412 "data/maps/RustboroCity_Gym/scripts.pory"
	getpartysize
# 413 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_lt VAR_RESULT, 4, RustboroCity_Gym_Trigger_Nada
# 414 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 415 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_FaceRight
# 416 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 417 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 418 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_ExclamationMark
# 419 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 420 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_WaitYouCant
# 421 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 422 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 423 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 424 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 425 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 426 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Gym_PlayerWalkLeft
# 427 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 428 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 429 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 430 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 431 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymGuide2
# 432 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 433 "data/maps/RustboroCity_Gym/scripts.pory"

# 434 "data/maps/RustboroCity_Gym/scripts.pory"

# 435 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 436 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLED_PC
# 437 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 438 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 439 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 440 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 441 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 442 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 443 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 444 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 445 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 446 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 447 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 448 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 449 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 450 "data/maps/RustboroCity_Gym/scripts.pory"

# 451 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 452 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM39
# 453 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 454 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 455 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 456 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 457 "data/maps/RustboroCity_Gym/scripts.pory"

# 458 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 459 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 460 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 461 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 462 "data/maps/RustboroCity_Gym/scripts.pory"

# 463 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 464 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 465 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 466 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 467 "data/maps/RustboroCity_Gym/scripts.pory"

# 468 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 469 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 470 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 471 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 472 "data/maps/RustboroCity_Gym/scripts.pory"

# 473 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 474 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 475 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 476 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 477 "data/maps/RustboroCity_Gym/scripts.pory"

# 478 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 479 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 480 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 481 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide2::
# 482 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 483 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_ForThisGym
# 484 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_HINT_GUY, Common_Movement_FaceOriginalDirection
# 485 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 486 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 487 "data/maps/RustboroCity_Gym/scripts.pory"

# 488 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 489 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 490 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 491 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 492 "data/maps/RustboroCity_Gym/scripts.pory"

# 493 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 494 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 495 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 496 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 497 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 498 "data/maps/RustboroCity_Gym/scripts.pory"

# 499 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 500 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 501 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 502 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 503 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 504 "data/maps/RustboroCity_Gym/scripts.pory"

# 505 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 506 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 507 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 508 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 509 "data/maps/RustboroCity_Gym/scripts.pory"

# 510 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 511 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 512 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 513 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 514 "data/maps/RustboroCity_Gym/scripts.pory"

# 515 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 516 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 517 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 518 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 519 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 520 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 521 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 522 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 523 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 524 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 525 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 526 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 527 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 528 "data/maps/RustboroCity_Gym/scripts.pory"
	end

RustboroCity_Gym_Text_RoxannePreRematch::
# 2 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat::
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostRematch::
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
	.string "when it comes to battling POKéMON.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons::
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become…\p"
	.string "Oh, no…\n"
	.string "You only have one POKéMON with you?\p"
	.string "Please return with at least one more\n"
	.string "POKéMON.$"

RustboroCity_Gym_WaitYouCant::
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Alto! ¡No puedes pasar así!$"

RustboroCity_Gym_ForThisGym::
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "En este Gimnasio, está prohibido llevar\n"
	.string "más de 3 Pokémon.\p"
	.string "Además, no podrás usar el {COLOR RED}Sistema de\n"
	.string "Almacenamiento Portátil{COLOR DARK_GRAY} dentro del\l"
	.string "Gimnasio.\p"
	.string "¡Pero cada Gimnasio es diferente!$"

RustboroCity_Gym_Text_GymGuidePostVictory::
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Esa batalla fue increíble!$"

RustboroCity_Gym_Text_JoshIntro::
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Te mostraré un gran poder!$"

RustboroCity_Gym_Text_JoshDefeat::
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "…$"

RustboroCity_Gym_Text_JoshPostBattle::
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Aún me falta mucho!$"

RustboroCity_Gym_Text_TommyIntro::
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Si no me puedes vencer,\n"
	.string "¡Olvídate de ganarle a Roxanne!$"

RustboroCity_Gym_Text_TommyDefeat::
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Wow! ¡Tienes potencial!$"

RustboroCity_Gym_Text_TommyPostBattle::
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne sobrepasa mi poder por\n"
	.string "kilómetros.\p"
	.string "¡Mejor ten cuidado!$"

RustboroCity_Gym_Text_MarcIntro::
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¿Sabías qué?\p"
	.string "¡Usar Camuflaje en este Gimnasio te\n"
	.string "convierte en Tipo Roca!$"

RustboroCity_Gym_Text_MarcDefeat::
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¿Sabías qué?\n"
	.string "¡Ahora tendré que limpiar la casa sin\l"
	.string "ayuda de mi mujer!$"

RustboroCity_Gym_Text_MarcPostBattle::
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡No tuve que apostar hacer quehaceres\n"
	.string "con mi mujer si mantenía una racha!$"

RustboroCity_Gym_Text_RoxanneIntro::
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Hola, soy Roxanne, la {COLOR RED}Líder del\n"
	.string "Gimnasio{COLOR DARK_GRAY} de esta ciudad.\l"
	.string "Prepárate...\p"
	.string "¡Vas a enfrentarte ahora, a la chica\n"
	.string "prodigio de Ciudad Rustboro!$"

RustboroCity_Gym_Text_RoxanneDefeat::
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Así que…\n"
	.string "Perdí…\p"
	.string "Ni años de estudio de los combates\n"
	.string "pude ganarte.\p"
	.string "¡Acepto mi derrota humildemente!\n"
	.string "¡Eres increíble, {PLAYER}!$"

RustboroCity_Gym_Text_ReceivedStoneBadge::
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} recibió la\n"
	.string "{COLOR RED}Medalla Piedra{COLOR DARK_GRAY} de Roxanne.$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis::
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Esa es una Medalla de Gimnasio,\n"
	.string "aunque seguro ya las conoces.\p"
	.string "Por favor, toma esto como premio.$"

RustboroCity_Gym_Text_ExplainRockTomb::
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Es la {COLOR BLUE}Máquina Técnica 39{COLOR DARK_GRAY}, Antiaéreo!\n"
	.string "Antiaéreo es un movimiento tipo Roca\l"
	.string "que causa que el rival {COLOR BLUE}pierda el tipo\l"
	.string "Volador hasta que sea reemplazado{COLOR DARK_GRAY}.\p"
	.string "¡Recuerda que las MTs no se gastan!$"

RustboroCity_Gym_Text_RoxannePostBattle::
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Te recomendaría visitar otros\n"
	.string "Gimnasios, y ganar.\p"
	.string "Con tu poder, lograrás todo.$"

RustboroCity_Gym_Text_GymStatue::
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gimnasio Pokémon Rustboro\p"
	.string "Vencedores del Gimnasio:\n"
	.string "{RIVAL}\n"
	.string "Leaf$"

RustboroCity_Gym_Text_GymStatueCertified::
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gimnasio Pokémon Rustboro\p"
	.string "Vencedores del Gimnasio:\n"
	.string "{RIVAL}\n"
	.string "Leaf\l"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_RoxanneRegisterCall::
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … ¡BIP!\p"
	.string "Ah, hola, ¿{PLAYER}?\n"
	.string "Soy Roxanne, del Gimnasio Rustboro.\p"
	.string "Escuché de Brawly que eres más\n"
	.string "fuerte.\p"
	.string "Te prometo que mejoraré mi Gimnasio,\n"
	.string "para que puedas volver a enfrentame.\p"
	.string "¡Espero te emocione como a mí!\p"
	.string "… … … … … …\n"
	.string "… … … … … ¡Click!$"

RustboroCity_Gym_Text_RegisteredRoxanne::
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne registrada.$"
