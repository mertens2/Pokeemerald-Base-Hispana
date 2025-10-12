Route117_EventScript_DaycareMan::
	lock
	faceplayer
	special GetDaycareMonNicknames
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, Route117_EventScript_DaycareEggWaiting
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route117_EventScript_CheckOnOneMon
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, Route117_EventScript_CheckOnTwoMons
	msgbox Route117_Text_SeeWifeIfYoudLikeMeToRaiseMon, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_DaycareEggWaiting::
	msgbox Route117_Text_DoYouWantEgg, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_EventScript_DaycareAcceptEgg
	msgbox Route117_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_EventScript_DaycareAcceptEgg
	msgbox Route117_Text_IllKeepIt, MSGBOX_DEFAULT
	clearflag FLAG_PENDING_DAYCARE_EGG
	special RejectEggFromDayCare
	release
	end

Route117_EventScript_DaycareAcceptEgg::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_ne VAR_RESULT, PARTY_SIZE, Route117_EventScript_DaycareReceiveEgg
	msgbox Route117_Text_YouHaveNoRoomForIt, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_DaycareReceiveEgg::
	message Route117_Text_ReceivedEgg
	playfanfare MUS_LEVEL_UP
	waitfanfare
	waitbuttonpress
	msgbox Route117_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
	special GiveEggFromDaycare
	clearflag FLAG_PENDING_DAYCARE_EGG
	release
	end

Route117_EventScript_CheckMonReceivedMail::
	specialvar VAR_RESULT, CheckDaycareMonReceivedMail
	call_if_eq VAR_RESULT, 1, Route117_EventScript_MonReceivedMail
	return

Route117_EventScript_MonReceivedMail::
	msgbox Route117_Text_FriendlyWithOtherTrainersMon, MSGBOX_DEFAULT
	return

Route117_EventScript_CheckOnOneMon::
	special GetDaycareMonNicknames
	msgbox Route117_Text_YourMonIsDoingFine, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Route117_EventScript_CheckMonReceivedMail
	release
	end

Route117_EventScript_CheckOnTwoMons::
	special GetDaycareMonNicknames
	msgbox Route117_Text_YourMonsAreDoingFine, MSGBOX_DEFAULT
	special SetDaycareCompatibilityString
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	setvar VAR_0x8004, 0
	call Route117_EventScript_CheckMonReceivedMail
	setvar VAR_0x8004, 1
	call Route117_EventScript_CheckMonReceivedMail
	release
	end

Route117_PokemonDayCare_EventScript_DaycareWoman::
	lock
	faceplayer
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, Route117_PokemonDayCare_EventScript_EggWaiting
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route117_PokemonDayCare_EventScript_OneMonInDaycare
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, Route117_PokemonDayCare_EventScript_TwoMonsInDaycare
	msgbox Route117_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_GiveMonToRaise
	msgbox Route117_PokemonDayCare_Text_FineThenComeAgain, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_GiveMonToRaise::
	specialvar VAR_RESULT, CountPartyNonEggMons
	goto_if_eq VAR_RESULT, 1, Route117_PokemonDayCare_EventScript_OnlyOneMon
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	goto_if_eq VAR_RESULT, 2, Route117_PokemonDayCare_EventScript_OnlyTwoAliveMons
	msgbox Route117_PokemonDayCare_Text_WhichMonShouldWeRaise, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseSendDaycareMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Route117_PokemonDayCare_EventScript_ComeAgain
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
	goto_if_eq VAR_RESULT, 0, Route117_PokemonDayCare_EventScript_OnlyOneAliveMon
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
	waitse
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
	msgbox Route117_PokemonDayCare_Text_WellRaiseYourMon, MSGBOX_DEFAULT
	waitmoncry
	special StoreSelectedPokemonInDaycare
	callnative UpdateFollowingPokemon
	incrementgamestat GAME_STAT_USED_DAYCARE
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route117_PokemonDayCare_EventScript_CanRaiseOneMore
	release
	end

Route117_PokemonDayCare_EventScript_ComeAgain::
	msgbox Route117_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_CanRaiseOneMore::
	msgbox Route117_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_GiveMonToRaise
	goto Route117_PokemonDayCare_EventScript_ComeAgain
	end

Route117_PokemonDayCare_EventScript_OnlyOneMon::
	msgbox Route117_PokemonDayCare_Text_YouHaveJustOneMon, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_OnlyOneAliveMon::
	msgbox Route117_PokemonDayCare_Text_WhatWillYouBattleWith, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_OnlyTwoAliveMons::
	msgbox Route117_PokemonDayCare_Text_YoullBeLeftWithJustOne, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_EggWaiting::
	msgbox Route117_PokemonDayCare_Text_HusbandWasLookingForYou, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_YourMonHasGrownXLevels::
	msgbox Route117_PokemonDayCare_Text_YourMonHasGrownXLevels, MSGBOX_DEFAULT
	return

Route117_PokemonDayCare_EventScript_DisplayLevelsGained::
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
	call_if_ne VAR_RESULT, 0, Route117_PokemonDayCare_EventScript_YourMonHasGrownXLevels
	return

Route117_PokemonDayCare_EventScript_OneMonInDaycare::
	msgbox Route117_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Route117_PokemonDayCare_EventScript_DisplayLevelsGained
	msgbox Route117_PokemonDayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_GiveMonToRaise
	msgbox Route117_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_TryRetrieveMon
	goto Route117_PokemonDayCare_EventScript_ComeAgain
	end

Route117_PokemonDayCare_EventScript_TryRetrieveMon::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_eq VAR_RESULT, PARTY_SIZE, Route117_PokemonDayCare_EventScript_NoRoom
	specialvar VAR_RESULT, GetDaycareState
	setvar VAR_0x8004, 0
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route117_PokemonDayCare_EventScript_CostPrompt
	special ShowDaycareLevelMenu
	waitstate
	copyvar VAR_0x8004, VAR_RESULT
	goto_if_eq VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU, Route117_PokemonDayCare_EventScript_ComeAgain
	goto Route117_PokemonDayCare_EventScript_CostPrompt
	end

Route117_PokemonDayCare_EventScript_CostPrompt::
	special GetDaycareCost
	msgbox Route117_PokemonDayCare_Text_ItWillCostX, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_CheckEnoughMoney
	goto Route117_PokemonDayCare_EventScript_ComeAgain
	end

Route117_PokemonDayCare_EventScript_CheckEnoughMoney::
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
	goto_if_eq VAR_RESULT, 1, Route117_PokemonDayCare_EventScript_RetrieveMon
	msgbox Route117_PokemonDayCare_Text_NotEnoughMoney, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_RetrieveMon::
	applymovement LOCALID_DAYCARE_LADY, Route117_PokemonDayCare_Movement_RetrieveDaycareMon
	waitmovement 0
	specialvar VAR_RESULT, TakePokemonFromDaycare
	special SubtractMoneyFromVar0x8005
	playse SE_SHOP
	msgbox Route117_PokemonDayCare_Text_HeresYourMon, MSGBOX_DEFAULT
	waitse
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
	msgbox Route117_PokemonDayCare_Text_TookBackMon, MSGBOX_DEFAULT
	waitmoncry
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route117_PokemonDayCare_EventScript_AskRetrieveOtherMon
	goto Route117_PokemonDayCare_EventScript_ComeAgain
	end

Route117_PokemonDayCare_EventScript_AskRetrieveOtherMon::
	msgbox Route117_PokemonDayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_TryRetrieveMon
	goto Route117_PokemonDayCare_EventScript_ComeAgain
	end

Route117_PokemonDayCare_EventScript_NoRoom::
	msgbox Route117_PokemonDayCare_Text_YourTeamIsFull, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_Movement_RetrieveDaycareMon:
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	face_up
	walk_slow_up
	set_invisible
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	set_visible
	walk_slow_down
	step_end

@ Unused. Possibly a commented script, or a typo end added to the above Movement script
Route117_PokemonDayCare_EventScript_UnusedEnd::
	end

Route117_PokemonDayCare_EventScript_TwoMonsInDaycare::
	msgbox Route117_PokemonDayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Route117_PokemonDayCare_EventScript_DisplayLevelsGained
	setvar VAR_0x8004, 1
	call Route117_PokemonDayCare_EventScript_DisplayLevelsGained
	msgbox Route117_PokemonDayCare_Text_TakeYourMonBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_PokemonDayCare_EventScript_TryRetrieveMon
	msgbox Route117_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
	release
	end

@ Unused
Route117_PokemonDayCare_EventScript_UnusedRetrieveMon::
	special ShowDaycareLevelMenu
	waitstate
	goto_if_eq VAR_RESULT, 2, Route117_PokemonDayCare_EventScript_ComeAgain
	copyvar VAR_0x8004, VAR_RESULT
	specialvar VAR_RESULT, TakePokemonFromDaycare
	msgbox Route117_PokemonDayCare_Text_HeresYourMon, MSGBOX_DEFAULT
	msgbox Route117_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
	release
	end

EventScript_EggHatch::
	lockall
	msgbox Text_EggHatchHuh, MSGBOX_DEFAULT
	special EggHatch
	waitstate
	releaseall
	end

@ WIP
DayCare_EventScript_EVTrainingMan::
	lockall
	faceplayer
	goto_if_unset FLAG_TALKED_EVMAN, DayCare_EventScript_EVTrainingMan_2
	goto_if_unset FLAG_TALKED_TRAININGMAN, DayCare_EventScript_EVTrainingMan_14
	msgbox DayCare_EventScript_EVTrainingMan_Text_1
DayCare_EventScript_EVTrainingMan_1:
	setflag  FLAG_TALKED_TRAININGMAN
	dynmultichoice 15, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DayCare_EventScript_EVTrainingMan_Text_3, DayCare_EventScript_EVTrainingMan_Text_4, DayCare_EventScript_EVTrainingMan_Text_5, DayCare_EventScript_EVTrainingMan_Text_6
	switch VAR_RESULT
	case 0, DayCare_EventScript_EVTrainingMan_7
	case 1, DayCare_EventScript_EVTrainingMan_8
	case 2, DayCare_EventScript_EVTrainingMan_9
	msgbox DayCare_EventScript_EVTrainingMan_Text_16
	releaseall
	end
DayCare_EventScript_EVTrainingMan_5:
	releaseall
	end

DayCare_EventScript_EVTrainingMan_2:
	goto_if_unset FLAG_TALKED_TRAININGMAN, DayCare_EventScript_EVTrainingMan_11
	msgbox DayCare_EventScript_EVTrainingMan_Text_1
	goto DayCare_EventScript_EVTrainingMan_1

DayCare_EventScript_EVTrainingMan_7:
	msgbox DayCare_EventScript_EVTrainingMan_Text_7
	dynmultipush DayCare_EventScript_EVTrainingMan_Text_8, 0
	goto_if_set FLAG_BADGE03_GET, DayCare_EventScript_EVTrainingMan_18
DayCare_EventScript_EVTrainingMan_17:
	goto_if_set FLAG_BADGE04_GET, DayCare_EventScript_EVTrainingMan_29
DayCare_EventScript_EVTrainingMan_28:
	goto_if_set FLAG_BADGE05_GET, DayCare_EventScript_EVTrainingMan_46
DayCare_EventScript_EVTrainingMan_45:
	goto_if_set FLAG_BADGE06_GET, DayCare_EventScript_EVTrainingMan_55
DayCare_EventScript_EVTrainingMan_54:
	goto_if_set FLAG_BADGE07_GET, DayCare_EventScript_EVTrainingMan_61
DayCare_EventScript_EVTrainingMan_60:
	goto_if_set FLAG_BADGE08_GET, DayCare_EventScript_EVTrainingMan_69
DayCare_EventScript_EVTrainingMan_68:
	goto_if_set FLAG_SYS_GAME_CLEAR, DayCare_EventScript_EVTrainingMan_84
DayCare_EventScript_EVTrainingMan_83:
	dynmultistack 25, 4, FALSE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 0, DayCare_EventScript_EVTrainingMan_88
	case 1, DayCare_EventScript_EVTrainingMan_89
	case 2, DayCare_EventScript_EVTrainingMan_90
	case 3, DayCare_EventScript_EVTrainingMan_91
	case 4, DayCare_EventScript_EVTrainingMan_92
	case 5, DayCare_EventScript_EVTrainingMan_93
	case 6, DayCare_EventScript_EVTrainingMan_94
	case 7, DayCare_EventScript_EVTrainingMan_95
	msgbox DayCare_EventScript_EVTrainingMan_Text_16
	releaseall
	end
DayCare_EventScript_EVTrainingMan_86:
	trainerbattle_no_intro TRAINER_JERRY_1, Route116_Text_JerryDefeat
	msgbox DayCare_EventScript_EVTrainingMan_Text_17
	setvar  VAR_LEVEL_FOR_TRAINING, 0
	goto DayCare_EventScript_EVTrainingMan_5

DayCare_EventScript_EVTrainingMan_8:
	msgbox DayCare_EventScript_EVTrainingMan_Text_18
	goto_if_unset FLAG_GOTTEN_EV_TRAINING, DayCare_EventScript_EVTrainingMan_22
DayCare_EventScript_EVTrainingMan_20:
	msgbox DayCare_EventScript_EVTrainingMan_Text_23
	dynmultichoice 20, 4, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, DayCare_EventScript_EVTrainingMan_Text_HP, DayCare_EventScript_EVTrainingMan_Text_25, DayCare_EventScript_EVTrainingMan_Text_26, DayCare_EventScript_EVTrainingMan_Text_27, DayCare_EventScript_EVTrainingMan_Text_28, DayCare_EventScript_EVTrainingMan_Text_29, DayCare_EventScript_EVTrainingMan_Text_6
	setvar  VAR_LEVEL_FOR_TRAINING, 2
	switch VAR_RESULT
	case 0, DayCare_EventScript_EVTrainingMan_33
	case 1, DayCare_EventScript_EVTrainingMan_34
	case 2, DayCare_EventScript_EVTrainingMan_35
	case 3, DayCare_EventScript_EVTrainingMan_36
	case 4, DayCare_EventScript_EVTrainingMan_37
	case 5, DayCare_EventScript_EVTrainingMan_38
	msgbox DayCare_EventScript_EVTrainingMan_Text_16
	releaseall
	end
DayCare_EventScript_EVTrainingMan_31:
	setvar  VAR_LEVEL_FOR_TRAINING, 0
	msgbox DayCare_EventScript_EVTrainingMan_Text_17
	goto DayCare_EventScript_EVTrainingMan_5

DayCare_EventScript_EVTrainingMan_9:
	msgbox DayCare_EventScript_EVTrainingMan_Text_30
	dynmultichoice 17, 4, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, DayCare_EventScript_EVTrainingMan_Text_31, DayCare_EventScript_EVTrainingMan_Text_32, DayCare_EventScript_EVTrainingMan_Text_33, DayCare_EventScript_EVTrainingMan_Text_34, DayCare_EventScript_EVTrainingMan_Text_35, DayCare_EventScript_EVTrainingMan_Text_36, DayCare_EventScript_EVTrainingMan_Text_37, DayCare_EventScript_EVTrainingMan_Text_38, DayCare_EventScript_EVTrainingMan_Text_39, DayCare_EventScript_EVTrainingMan_Text_40, DayCare_EventScript_EVTrainingMan_Text_41, DayCare_EventScript_EVTrainingMan_Text_42, DayCare_EventScript_EVTrainingMan_Text_43, DayCare_EventScript_EVTrainingMan_Text_44, DayCare_EventScript_EVTrainingMan_Text_45, DayCare_EventScript_EVTrainingMan_Text_46, DayCare_EventScript_EVTrainingMan_Text_47, DayCare_EventScript_EVTrainingMan_Text_6
	switch VAR_RESULT
	case 0, DayCare_Fighting
	case 1, DayCare_Flying
	case 2, DayCare_Poison
	case 3, DayCare_Ground
	case 4, DayCare_Rock
	case 5, DayCare_Bug
	case 6, DayCare_Ghost
	case 7, DayCare_Steel
	case 8, DayCare_Fire
	case 9, DayCare_Water
	case 10, DayCare_Grass
	case 11, DayCare_Electric
	case 12, DayCare_Psychic
	case 13, DayCare_Ice
	case 14, DayCare_Dragon
	case 15, DayCare_Dark
	case 16, DayCare_Fairy
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_EventScript_EVTrainingMan_9_1:
	compare VAR_RESULT 17
	goto_if_ge DayCare_EventScript_EVTrainingMan_26
	msgbox DayCare_EventScript_EVTrainingMan_Text_48
	closemessage
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq DayCare_EventScript_EVTrainingMan_43
	special IsSelectedMonEgg
	compare VAR_RESULT, 0
	goto_if_ne DayCare_EventScript_EVTrainingMan_52
	showmoneybox 0, 0
	msgbox DayCare_EventScript_EVTrainingMan_Text_50
	dynmultichoice 16, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DayCare_EventScript_EVTrainingMan_Text_Light, DayCare_EventScript_EVTrainingMan_Text_Medium, DayCare_EventScript_EVTrainingMan_Text_Extreme, DayCare_EventScript_EVTrainingMan_Text_6
	compare VAR_RESULT, 3
	goto_if_ge DayCare_EventScript_EVTrainingMan_58
	switch VAR_RESULT
	case 0, DayCare_EventScript_EVTrainingMan_65
	case 1, DayCare_EventScript_EVTrainingMan_66
	case 2, DayCare_EventScript_EVTrainingMan_67
DayCare_EventScript_EVTrainingMan_63:
	playfanfare MUS_OBTAIN_TMHM
	waitfanfare
	msgbox DayCare_EventScript_EVTrainingMan_Text_55
	hidemoneybox
	goto DayCare_EventScript_EVTrainingMan_5

DayCare_Fighting:
	setvar  VAR_0x8006, TYPE_FIGHTING
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Flying:
	setvar  VAR_0x8006, TYPE_FLYING
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Poison:
	setvar  VAR_0x8006, TYPE_POISON
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Ground:
	setvar  VAR_0x8006, TYPE_GROUND
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Rock:
	setvar  VAR_0x8006, TYPE_ROCK
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Bug:
	setvar  VAR_0x8006, TYPE_BUG
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Ghost:
	setvar  VAR_0x8006, TYPE_GHOST
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Steel:
	setvar  VAR_0x8006, TYPE_STEEL
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Fire:
	setvar  VAR_0x8006, TYPE_FIRE
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Water:
	setvar  VAR_0x8006, TYPE_WATER
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Grass:
	setvar  VAR_0x8006, TYPE_GRASS
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Electric:
	setvar  VAR_0x8006, TYPE_ELECTRIC
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Psychic:
	setvar  VAR_0x8006, TYPE_PSYCHIC
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Ice:
	setvar  VAR_0x8006, TYPE_ICE
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Dragon:
	setvar  VAR_0x8006, TYPE_DRAGON
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Dark:
	setvar  VAR_0x8006, TYPE_DARK
	goto DayCare_EventScript_EVTrainingMan_9_1
DayCare_Fairy:
	setvar  VAR_0x8006, TYPE_FAIRY
	goto DayCare_EventScript_EVTrainingMan_9_1


DayCare_EventScript_EVTrainingMan_11:
	msgbox DayCare_EventScript_EVTrainingMan_Text_0
	goto DayCare_EventScript_EVTrainingMan_1

DayCare_EventScript_EVTrainingMan_14:
	msgbox DayCare_EventScript_EVTrainingMan_Text_2
	goto DayCare_EventScript_EVTrainingMan_1

DayCare_EventScript_EVTrainingMan_18:
	dynmultipush DayCare_EventScript_EVTrainingMan_Text_9, 1
	goto DayCare_EventScript_EVTrainingMan_17

DayCare_EventScript_EVTrainingMan_21:
	showmoneybox 0,0 
	msgbox DayCare_EventScript_EVTrainingMan_Text_19, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq DayCare_EventScript_EVTrainingMan_40
	hidemoneybox
	goto DayCare_EventScript_EVTrainingMan_20

DayCare_EventScript_EVTrainingMan_22:
	goto_if_set FLAG_BADGE05_GET, DayCare_EventScript_EVTrainingMan_21
	goto DayCare_EventScript_EVTrainingMan_20

DayCare_EventScript_EVTrainingMan_26:
	msgbox DayCare_EventScript_EVTrainingMan_Text_16
	releaseall
	end

DayCare_EventScript_EVTrainingMan_29:
	dynmultipush DayCare_EventScript_EVTrainingMan_Text_10, 2
	goto DayCare_EventScript_EVTrainingMan_28

DayCare_EventScript_EVTrainingMan_33:
	trainerbattle_no_intro TRAINER_JERRY_1, Route116_Text_JerryDefeat
	goto DayCare_EventScript_EVTrainingMan_31

DayCare_EventScript_EVTrainingMan_34:
	trainerbattle_no_intro TRAINER_JERRY_2, Route116_Text_JerryDefeat
	goto DayCare_EventScript_EVTrainingMan_31
		
DayCare_EventScript_EVTrainingMan_35:
	trainerbattle_no_intro TRAINER_JERRY_3, Route116_Text_JerryDefeat
	goto DayCare_EventScript_EVTrainingMan_31

DayCare_EventScript_EVTrainingMan_36:
	trainerbattle_no_intro TRAINER_JERRY_4, Route116_Text_JerryDefeat
	goto DayCare_EventScript_EVTrainingMan_31

DayCare_EventScript_EVTrainingMan_37:
	trainerbattle_no_intro TRAINER_JERRY_5, Route116_Text_JerryDefeat
	goto DayCare_EventScript_EVTrainingMan_31

DayCare_EventScript_EVTrainingMan_38:
	trainerbattle_no_intro TRAINER_ANDREA, Route116_Text_JerryDefeat
	goto DayCare_EventScript_EVTrainingMan_31

DayCare_EventScript_EVTrainingMan_40:
	checkmoney 10000
	compare VAR_RESULT, 0
	goto_if_eq DayCare_EventScript_EVTrainingMan_49
	removemoney 10000
	updatemoneybox
	msgbox DayCare_EventScript_EVTrainingMan_Text_21
	hidemoneybox
	giveitem ITEM_POWER_WEIGHT, 1
	giveitem ITEM_POWER_BRACER, 1
	giveitem ITEM_POWER_BELT, 1
	giveitem ITEM_POWER_LENS, 1
	giveitem ITEM_POWER_BAND, 1
	giveitem ITEM_POWER_ANKLET, 1
	msgbox DayCare_EventScript_EVTrainingMan_Text_22
	setflag FLAG_GOTTEN_EV_TRAINING
	goto DayCare_EventScript_EVTrainingMan_20

DayCare_EventScript_EVTrainingMan_43:
	msgbox DayCare_EventScript_EVTrainingMan_Text_16
	releaseall
	end

DayCare_EventScript_EVTrainingMan_46:
	dynmultipush DayCare_EventScript_EVTrainingMan_Text_11, 3
	goto DayCare_EventScript_EVTrainingMan_45

DayCare_EventScript_EVTrainingMan_49:
	hidemoneybox
	msgbox DayCare_EventScript_EVTrainingMan_Text_20
	releaseall
	end

DayCare_EventScript_EVTrainingMan_52:
	msgbox DayCare_EventScript_EVTrainingMan_Text_49
	hidemoneybox
	releaseall
	end

DayCare_EventScript_EVTrainingMan_55:
	dynmultipush DayCare_EventScript_EVTrainingMan_Text_12, 4
	goto DayCare_EventScript_EVTrainingMan_54

DayCare_EventScript_EVTrainingMan_58:
	msgbox DayCare_EventScript_EVTrainingMan_Text_16
	hidemoneybox
	releaseall
	end

DayCare_EventScript_EVTrainingMan_61:
	dynmultipush DayCare_EventScript_EVTrainingMan_Text_13, 5
	goto DayCare_EventScript_EVTrainingMan_60

DayCare_EventScript_EVTrainingMan_65:
	checkmoney 1500
	compare VAR_RESULT, 0
	goto_if_eq DayCare_EventScript_EVTrainingMan_49
	removemoney 1500
	updatemoneybox
	msgbox DayCare_EventScript_EVTrainingMan_Text_54
	hidemoneybox
	special RyuSetIvsBad
	goto DayCare_EventScript_EVTrainingMan_63

DayCare_EventScript_EVTrainingMan_66:
	checkmoney 15000
	compare VAR_RESULT, 0
	goto_if_eq DayCare_EventScript_EVTrainingMan_49
	removemoney 15000
	updatemoneybox
	msgbox DayCare_EventScript_EVTrainingMan_Text_54
	hidemoneybox
	special RyuSetIvsMedium
	goto DayCare_EventScript_EVTrainingMan_63

DayCare_EventScript_EVTrainingMan_67:
	checkmoney 30000
	compare VAR_RESULT, 0
	goto_if_eq DayCare_EventScript_EVTrainingMan_49
	removemoney 30000
	updatemoneybox
	msgbox DayCare_EventScript_EVTrainingMan_Text_54
	hidemoneybox
	special RyuSetIvsPerfect
	goto DayCare_EventScript_EVTrainingMan_63

DayCare_EventScript_EVTrainingMan_69:
	dynmultipush DayCare_EventScript_EVTrainingMan_Text_14, 6
	goto DayCare_EventScript_EVTrainingMan_68

DayCare_EventScript_EVTrainingMan_72:
	msgbox DayCare_EventScript_EVTrainingMan_Text_20
	release
	end

DayCare_EventScript_EVTrainingMan_84:
	dynmultipush DayCare_EventScript_EVTrainingMan_Text_15, 7
	goto DayCare_EventScript_EVTrainingMan_83

DayCare_EventScript_EVTrainingMan_88:
	setvar  VAR_LEVEL_FOR_TRAINING, 20
	goto DayCare_EventScript_EVTrainingMan_86

DayCare_EventScript_EVTrainingMan_89:
	setvar  VAR_LEVEL_FOR_TRAINING, 25
	goto DayCare_EventScript_EVTrainingMan_86

DayCare_EventScript_EVTrainingMan_90:
	setvar  VAR_LEVEL_FOR_TRAINING, 35
	goto DayCare_EventScript_EVTrainingMan_86

DayCare_EventScript_EVTrainingMan_91:
	setvar  VAR_LEVEL_FOR_TRAINING, 40
	goto DayCare_EventScript_EVTrainingMan_86

DayCare_EventScript_EVTrainingMan_92:
	setvar  VAR_LEVEL_FOR_TRAINING, 45
	goto DayCare_EventScript_EVTrainingMan_86

DayCare_EventScript_EVTrainingMan_93:
	setvar  VAR_LEVEL_FOR_TRAINING, 60
	goto DayCare_EventScript_EVTrainingMan_86

DayCare_EventScript_EVTrainingMan_94:
	setvar  VAR_LEVEL_FOR_TRAINING, 75
	goto DayCare_EventScript_EVTrainingMan_86

DayCare_EventScript_EVTrainingMan_95:
	setvar  VAR_LEVEL_FOR_TRAINING, 95
	goto DayCare_EventScript_EVTrainingMan_86


DayCare_EventScript_EVTrainingMan_Text_0:
	.string "… … …\n"
	.string "Ah… Hola, soy el Entrenador de\l"
	.string "Estadísticas. Mi esposo y yo\l"
	.string "construimos esto para ayudar a\l"
	.string "entrenar a los Pokémon. ¿Quieres\l"
	.string "entrenar?$"

DayCare_EventScript_EVTrainingMan_Text_1:
	.string "… … …\n"
	.string "Ah… Hola, soy el Entrenador de\l"
	.string "Estadísticas. ¿Quieres entrenar?$"

DayCare_EventScript_EVTrainingMan_Text_2:
	.string "…Lo sé, mi esposo habla mucho, pero amo\n"
	.string "escuchar su voz…\p"
	.string "Ah, perdón. Soy el Entrenador de\n"
	.string "Estadísticas. ¿Quieres algo?$"

DayCare_EventScript_EVTrainingMan_Text_3:
	.string "Entrenar EXP$"

DayCare_EventScript_EVTrainingMan_Text_4:
	.string "Entrenar EVs$"

DayCare_EventScript_EVTrainingMan_Text_5:
	.string "Perfeccionar IVs$"

DayCare_EventScript_EVTrainingMan_Text_6:
	.string "Nada, disculpe$"

DayCare_EventScript_EVTrainingMan_Text_7:
	.string "…Entonces EXP.\n…Recuerda… Que podrás entrenar más\lmientras más Medallas poseas…\p¿Hasta qué nivel quieres entrenar?$"

DayCare_EventScript_EVTrainingMan_Text_8:
	.string "25$"

DayCare_EventScript_EVTrainingMan_Text_9:
	.string "30$"

DayCare_EventScript_EVTrainingMan_Text_10:
	.string "40$"

DayCare_EventScript_EVTrainingMan_Text_11:
	.string "45$"

DayCare_EventScript_EVTrainingMan_Text_12:
	.string "50$"

DayCare_EventScript_EVTrainingMan_Text_13:
	.string "65$"

DayCare_EventScript_EVTrainingMan_Text_14:
	.string "80$"

DayCare_EventScript_EVTrainingMan_Text_15:
	.string "100$"

DayCare_EventScript_EVTrainingMan_Text_16:
	.string "… … …\n"
	.string "…Ah, vuelva pronto.$"

DayCare_EventScript_EVTrainingMan_Text_17:
	.string "…Eso fue divertido. Vuelve pronto.$"

DayCare_EventScript_EVTrainingMan_Text_18:
	.string "…Entonces EVs.\nDéjame preparame…$"

DayCare_EventScript_EVTrainingMan_Text_19:
	.string "¡…Oh!\n"
	.string "Tenemos un paquete de Objetos para\l"
	.string "Entrenamiento de EVs en oferta.\p"
	.string "Duplican la ganancia de EVs en cada\n"
	.string "batalla.\p"
	.string "Solamente salen 10.000… En una Tienda\n"
	.string "te saldría más de 15.000… ¿…Te\l"
	.string "interesan?$"

DayCare_EventScript_EVTrainingMan_Text_20:
	.string "Eh… Lo… Lo siento, pero…\p"
	.string "No tienes suficiente dinero…\p"
	.string "Disculpa…$"

DayCare_EventScript_EVTrainingMan_Text_21:
	.string "Muchísimas gracias…\n"
	.string "…Eh, tomará un tiempo, son varios…\l"
	.string "… … …$"

DayCare_EventScript_EVTrainingMan_Text_22:
	.string "… …\n"
	.string "Espero que los disfrutes…$"

DayCare_EventScript_EVTrainingMan_Text_23:
	.string "¿Qué Estadística quieres mejorar?$"

DayCare_EventScript_EVTrainingMan_Text_HP:
	.string "PS$"

DayCare_EventScript_EVTrainingMan_Text_25:
	.string "Ataque$"

DayCare_EventScript_EVTrainingMan_Text_26:
	.string "Defensa$"

DayCare_EventScript_EVTrainingMan_Text_27:
	.string "Velocidad$"

DayCare_EventScript_EVTrainingMan_Text_28:
	.string "Ataque Especial$"

DayCare_EventScript_EVTrainingMan_Text_29:
	.string "Defensa Especial$"

DayCare_EventScript_EVTrainingMan_Text_30:
	.string "…Entonces IVs.\nEso costará un poco, lo siento…\pPuedo ayudar a tu Pokémon a dominar\nsu Poder Oculto…\l… … …\p¿…Cuál tipo de entrenamiento quieres?$"

DayCare_EventScript_EVTrainingMan_Text_31:
	.string "Lucha$"

DayCare_EventScript_EVTrainingMan_Text_32:
	.string "Volador$"

DayCare_EventScript_EVTrainingMan_Text_33:
	.string "Veneno$"

DayCare_EventScript_EVTrainingMan_Text_34:
	.string "Tierra$"

DayCare_EventScript_EVTrainingMan_Text_35:
	.string "Roca$"

DayCare_EventScript_EVTrainingMan_Text_36:
	.string "Bicho$"

DayCare_EventScript_EVTrainingMan_Text_37:
	.string "Fantasma$"

DayCare_EventScript_EVTrainingMan_Text_38:
	.string "Acero$"

DayCare_EventScript_EVTrainingMan_Text_39:
	.string "Fuego$"

DayCare_EventScript_EVTrainingMan_Text_40:
	.string "Agua$"

DayCare_EventScript_EVTrainingMan_Text_41:
	.string "Planta$"

DayCare_EventScript_EVTrainingMan_Text_42:
	.string "Eléctrico$"

DayCare_EventScript_EVTrainingMan_Text_43:
	.string "Psíquico$"

DayCare_EventScript_EVTrainingMan_Text_44:
	.string "Hielo$"

DayCare_EventScript_EVTrainingMan_Text_45:
	.string "Dragón$"

DayCare_EventScript_EVTrainingMan_Text_46:
	.string "Siniestro$"

DayCare_EventScript_EVTrainingMan_Text_47:
	.string "Hada$"

DayCare_EventScript_EVTrainingMan_Text_48:
	.string "… … …\n"
	.string "¿…Qué Pokémon desea entrenar?$"

DayCare_EventScript_EVTrainingMan_Text_49:
	.string "…Ah, lo siento…\p"
	.string "Un Huevo no puede entrenar…$"

DayCare_EventScript_EVTrainingMan_Text_50:
	.string "…Entiendo.\n"
	.string "Tenemos 3 niveles… Ligero, Medio y\l"
	.string "Extremo…\p"
	.string "Cada uno tiene un precio distinto…\n"
	.string "¿Cuál quieres?$"

DayCare_EventScript_EVTrainingMan_Text_Light:
	.string "Ligero - 1.500$"

DayCare_EventScript_EVTrainingMan_Text_Medium:
	.string "Medio - 15.000$"

DayCare_EventScript_EVTrainingMan_Text_Extreme:
	.string "Extremo - 30.000$"

DayCare_EventScript_EVTrainingMan_Text_54:
	.string "Muchísimas gracias…\n"
	.string "Ahora… Ayudaré a tu Pokémon a dominar\l"
	.string "Poder Oculto…\p"
	.string "… … …$"

DayCare_EventScript_EVTrainingMan_Text_55:
	.string "Terminé…\n"
	.string "Je, tu Pokémon está emocionadísimo por\l"
	.string "probar Poder Oculto ahora…\p"
	.string "… … …\p"
	.string "…Vuelve pronto.$"


DayCare_EventScript_EVBerriesMan::
	lockall
	faceplayer
	goto_if_unset FLAG_TALKED_EVMAN, DayCare_EventScript_EVBerriesMan_2
	msgbox DayCare_EventScript_EVBerriesMan_Text_1
DayCare_EventScript_EVBerriesMan_1:
	setflag FLAG_TALKED_EVMAN
	dynmultichoice 17, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DayCare_EventScript_EVBerriesMan_Text_2, DayCare_EventScript_EVBerriesMan_Text_3, DayCare_EventScript_EVBerriesMan_Text_4
	switch VAR_RESULT
	case 0, DayCare_EventScript_EVBerriesMan_7
	case 1, DayCare_EventScript_EVBerriesMan_8
	msgbox DayCare_EventScript_EVBerriesMan_Text_13
DayCare_EventScript_EVBerriesMan_5:
	releaseall
	end

DayCare_EventScript_EVBerriesMan_2:
	msgbox DayCare_EventScript_EVBerriesMan_Text_0
	goto DayCare_EventScript_EVBerriesMan_1

DayCare_EventScript_EVBerriesMan_7:
	msgbox DayCare_EventScript_EVBerriesMan_Text_5
	dynmultichoice 17, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DayCare_EventScript_EVBerriesMan_Text_6, DayCare_EventScript_EVBerriesMan_Text_7, DayCare_EventScript_EVBerriesMan_Text_4
	switch VAR_RESULT
	case 0, DayCare_EventScript_EVBerriesMan_12
	case 1, DayCare_EventScript_EVBerriesMan_13
	msgbox DayCare_EventScript_EVBerriesMan_Text_13
DayCare_EventScript_EVBerriesMan_10:
	goto DayCare_EventScript_EVBerriesMan_5

DayCare_EventScript_EVBerriesMan_8:
	msgbox DayCare_EventScript_EVBerriesMan_Text_14
	dynmultichoice 15, 6, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DayCare_EventScript_EVBerriesMan_Text_15, DayCare_EventScript_EVBerriesMan_Text_16, DayCare_EventScript_EVBerriesMan_Text_4
	switch VAR_RESULT
	case 0, DayCare_EventScript_EVBerriesMan_16
	case 1, DayCare_EventScript_EVBerriesMan_17
	msgbox DayCare_EventScript_EVBerriesMan_Text_13
	goto DayCare_EventScript_EVBerriesMan_5

DayCare_EventScript_EVBerriesMan_12:
	msgbox DayCare_EventScript_EVBerriesMan_Text_8
	special IsSelectedMonEgg
	compare VAR_RESULT, FALSE
	goto_if_eq DayCare_EventScript_EVBerriesMan_20
	msgbox DayCare_EventScript_EVBerriesMan_Text_10
DayCare_EventScript_EVBerriesMan_19:
	goto DayCare_EventScript_EVBerriesMan_10

DayCare_EventScript_EVBerriesMan_13:
	msgbox DayCare_EventScript_EVBerriesMan_Text_11
	special IsSelectedMonEgg
	compare VAR_RESULT, FALSE
	goto_if_eq DayCare_EventScript_EVBerriesMan_24
	msgbox DayCare_EventScript_EVBerriesMan_Text_12
DayCare_EventScript_EVBerriesMan_23:
	goto DayCare_EventScript_EVBerriesMan_10

DayCare_EventScript_EVBerriesMan_16:
	msgbox DayCare_EventScript_EVBerriesMan_Text_17
	showmoneybox 0, 0
	dynmultichoice 25, 8, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DayCare_EventScript_EVBerriesMan_Text_18, DayCare_EventScript_EVBerriesMan_Text_19
	compare VAR_RESULT, 0
	goto_if_eq DayCare_EventScript_EVBerriesMan_28
	msgbox DayCare_EventScript_EVBerriesMan_Text_21
DayCare_EventScript_EVBerriesMan_27:
	goto DayCare_EventScript_EVBerriesMan_5

DayCare_EventScript_EVBerriesMan_17:
	msgbox DayCare_EventScript_EVBerriesMan_Text_24
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq DayCare_EventScript_EVBerriesMan_32
	special IsSelectedMonEgg
	compare VAR_RESULT, FALSE
	goto_if_eq DayCare_EventScript_EVBerriesMan_38
	msgbox DayCare_EventScript_EVBerriesMan_Text_10
DayCare_EventScript_EVBerriesMan_31:
	goto DayCare_EventScript_EVBerriesMan_5

DayCare_EventScript_EVBerriesMan_20:
	call CheckEVs
	goto DayCare_EventScript_EVBerriesMan_19

DayCare_EventScript_EVBerriesMan_24:
	call CheckIVs
	goto DayCare_EventScript_EVBerriesMan_23

DayCare_EventScript_EVBerriesMan_28:
	checkmoney 10000
	compare VAR_RESULT, FALSE
	goto_if_eq DayCare_EventScript_EVBerriesMan_35
	msgbox DayCare_EventScript_EVBerriesMan_Text_22
	removemoney 10000
	updatemoneybox
	giveitem ITEM_POMEG_BERRY, 30
	giveitem ITEM_KELPSY_BERRY, 30
	giveitem ITEM_QUALOT_BERRY, 30
	giveitem ITEM_HONDEW_BERRY, 30
	giveitem ITEM_GREPA_BERRY, 30
	giveitem ITEM_TAMATO_BERRY, 30
	msgbox DayCare_EventScript_EVBerriesMan_Text_23
	hidemoneybox
	goto DayCare_EventScript_EVBerriesMan_27

DayCare_EventScript_EVBerriesMan_32:
	msgbox DayCare_EventScript_EVBerriesMan_Text_21
	goto DayCare_EventScript_EVBerriesMan_31

DayCare_EventScript_EVBerriesMan_35:
	msgbox DayCare_EventScript_EVBerriesMan_Text_20
	msgbox DayCare_EventScript_EVBerriesMan_Text_21
	goto DayCare_EventScript_EVBerriesMan_27

DayCare_EventScript_EVBerriesMan_38:
	msgbox DayCare_EventScript_EVBerriesMan_Text_25
	special RyuResetEvs
	playfanfare MUS_LEVEL_UP
	waitfanfare
	msgbox DayCare_EventScript_EVBerriesMan_Text_26
	goto DayCare_EventScript_EVBerriesMan_31


DayCare_EventScript_EVBerriesMan_Text_0:
	.string "¡Hola, soy el Ranger de las\n"
	.string "Estadísticas!\p"
	.string "Me gano la vida ayudando a\n"
	.string "Entrenadores a conocer y facilitar la\l"
	.string "mejora de Estadísticas de sus\l"
	.string "Pokémon.\p"
	.string "Recientemente mi marido y yo\n"
	.string "construimos este lugar y lo cuidamos\l"
	.string "junto con la Pareja de la Guardería.\p"
	.string "¿Necesitabas algo?$"

DayCare_EventScript_EVBerriesMan_Text_1:
	.string "¡Hola, soy el Ranger de las\n"
	.string "Estadísticas!\p"
	.string "¡Mi esposo y yo estamos para ayudarte!\p"
	.string "¿Necesitabas algo?$"

DayCare_EventScript_EVBerriesMan_Text_2:
	.string "Ver EVs/IVs$"

DayCare_EventScript_EVBerriesMan_Text_3:
	.string "Reducir EVs$"

DayCare_EventScript_EVBerriesMan_Text_4:
	.string "Nada, disculpe$"

DayCare_EventScript_EVBerriesMan_Text_5:
	.string "¿Qué deseas ver?$"

DayCare_EventScript_EVBerriesMan_Text_6:
	.string "Ver EVs$"

DayCare_EventScript_EVBerriesMan_Text_7:
	.string "Ver IVs$"

DayCare_EventScript_EVBerriesMan_Text_8:
	.string "¡Perfecto! ¡Selecciona un Pokémon de tu\n"
	.string "Equipo y podremos ver sus EVs!$"

DayCare_EventScript_EVBerriesMan_Text_10:
	.string "Oh, lo siento, pero un Huevo no gana EVs.$"

DayCare_EventScript_EVBerriesMan_Text_11:
	.string "¡Perfecto! ¡Seleccione un Pokémon de su\n"
	.string "Equipo y podremos ver sus IVs!$"

DayCare_EventScript_EVBerriesMan_Text_12:
	.string "Oh, lo siento, pero, aunque los IVs sean\n"
	.string "de nacimiento, no tengo manera de\l"
	.string "analizar a un Huevo.$"

DayCare_EventScript_EVBerriesMan_Text_13:
	.string "¡No te preocupes, esperamos que vuelva\n"
	.string "pronto!$"

DayCare_EventScript_EVBerriesMan_Text_14:
	.string "Comprendo, y dime, ¿Cómo quieres\n"
	.string "reducir los EVs de tu Pokémon?$"

DayCare_EventScript_EVBerriesMan_Text_15:
	.string "Bayas Reductoras$"

DayCare_EventScript_EVBerriesMan_Text_16:
	.string "Todos a 0$"

DayCare_EventScript_EVBerriesMan_Text_17:
	.string "¡Ah, mis famosas Bayas Reductoras!\n"
	.string "Ellas pueden ayudarte a controlar mejor\l"
	.string "los EVs de tus Pokémon.\p"
	.string "Cada lote vale 10.000, e incluye 30 de\n"
	.string "cada Baya Reductora. ¡No podrás\l"
	.string "encontrar estas Bayas en ninguna otra\l"
	.string "parte de Hoenn!\p"
	.string "¿Te interesan?$"

DayCare_EventScript_EVBerriesMan_Text_18:
	.string "Sí$"

DayCare_EventScript_EVBerriesMan_Text_19:
	.string "No$"

DayCare_EventScript_EVBerriesMan_Text_20:
	.string "Oh, lo siento, pero no tienes suficiente\n"
	.string "dinero… ¡No te preocupes, que nos pasa\l"
	.string "a todos!$"

DayCare_EventScript_EVBerriesMan_Text_21:
	.string "¡Esperamos que vuelva pronto!$"

DayCare_EventScript_EVBerriesMan_Text_22:
	.string "Ahora, por favor, espere, que son\n"
	.string "varias… ¡Pero le encantarán!$"

DayCare_EventScript_EVBerriesMan_Text_23:
	.string "¡Vuelva pronto!$"

DayCare_EventScript_EVBerriesMan_Text_24:
	.string "No te preocupes, ¡A todos nos ha\n"
	.string "pasado! ¡No hemos planeado nuestro\l"
	.string "entrenamiento, y cuando nos damos\l"
	.string "cuenta, tenemos tantos EVs inútiles!\p"
	.string "¿Qué Pokémon quieres que tenga sus EVs\l"
	.string "reducidos a 0?$"

DayCare_EventScript_EVBerriesMan_Text_25:
	.string "Muy bien… Veamos…\n"
	.string "… … …\l"
	.string "… … …\p"
	.string "Y… … …\n"
	.string "… … …\l"
	.string "… … …$"

DayCare_EventScript_EVBerriesMan_Text_26:
	.string "¡Listo! Tu Pokémon está\nemocionadísimo por Entrenar\lnuevamente.$"

Route117_Text_SeeWifeIfYoudLikeMeToRaiseMon:
	.string "Soy el ENCARGADO de la GUARDERÍA.\p"
	.string "Ayudo a los ENTRENADORES a cuidar\n"
	.string "de sus preciosos POKéMON.\p"
	.string "Si quieres que me encargue del tuyo,\n"
	.string "ve a hablar con mi mujer.$"

Route117_Text_DoYouWantEgg:
	.string "¡Ah, eres tú!\p"
	.string "¡Hemos cuidado de tu POKéMON y vaya\n"
	.string "sorpresa que nos hemos llevado!\p"
	.string "¡Tu POKéMON ha tenido un HUEVO!\p"
	.string "No sabemos cómo ha sucedido,\n"
	.string "pero es de tu POKéMON, seguro.\p"
	.string "¿Lo quieres?$"

Route117_Text_YourMonIsDoingFine:
	.string "¡Ah, eres tú! Me alegro de verte.\n"
	.string "Tu {STR_VAR_1} está estupendamente.$"

Route117_Text_IllKeepIt:
	.string "Muy bien, entonces me seguiré\n"
	.string "ocupando de él. ¡Gracias!$"

Route117_Text_YouHaveNoRoomForIt:
	.string "No tienes sitio para él…\n"
	.string "Vuelve cuando lo tengas.$"

Route117_Text_ReceivedEgg:
	.string "{PLAYER} recibió el HUEVO del\n"
	.string "ENCARGADO de la GUARDERÍA.$"

Route117_Text_TakeGoodCareOfIt:
	.string "Cuídalo bien.$"

Route117_Text_FriendlyWithOtherTrainersMon:
	.string "Por cierto, con respecto a tu\n"
	.string "{STR_VAR_1}, parece que se ha hecho\l"
	.string "amigo del {STR_VAR_3} de {STR_VAR_2}.\p"
	.string "Es incluso posible que haya\n"
	.string "recibido una CARTA.$"

@ Unused
Route117_Text_SeeWifeIfYouWantToPickUpMon:
	.string "If you want to pick up your POKéMON,\n"
	.string "have a word with my wife.$"

Route117_Text_YourMonsAreDoingFine:
	.string "¡Ah, eres tú! Tu {STR_VAR_1} y el\n"
	.string "{STR_VAR_2} están muy bien.$"

Route117_Text_IWillKeepDoYouWantIt:
	.string "Yo me lo quedaría.\n"
	.string "Pero imagino que lo quieres.$"

Route117_PokemonDayCare_Text_WouldYouLikeUsToRaiseAMon:
	.string "Soy la ENCARGADA de la GUARDERÍA.\p"
	.string "Podemos ocuparnos de tus POKéMON.\p"
	.string "¿Quieres que cuidemos de alguno?$"

Route117_PokemonDayCare_Text_WhichMonShouldWeRaise:
	.string "¿Qué POKéMON quieres que cuidemos?$"

Route117_PokemonDayCare_Text_WellRaiseYourMon:
	.string "Estupendo, nos ocuparemos de tu\n"
	.string "{STR_VAR_1} cuanto sea necesario.\p"
	.string "Vuelve cuando quieras.$"

Route117_PokemonDayCare_Text_WeCanRaiseOneMore:
	.string "Podemos cuidar a dos de tus POKéMON.\n"
	.string "¿Quieres que cuidemos de otro más?$"

Route117_PokemonDayCare_Text_HusbandWasLookingForYou:
	.string "Mi marido te estaba buscando.$"

Route117_PokemonDayCare_Text_FineThenComeAgain:
	.string "Muy bien.\n"
	.string "Vuelve cuando quieras.$"

Route117_PokemonDayCare_Text_NotEnoughMoney:
	.string "No tienes bastante dinero.$"

Route117_PokemonDayCare_Text_TakeOtherOneBackToo:
	.string "¿Quieres llevarte el otro también?$"

Route117_PokemonDayCare_Text_ComeAgain:
	.string "Muy bien.\n"
	.string "Vuelve cuando quieras.$"

Route117_PokemonDayCare_Text_GoodToSeeYou:
	.string "¡Ah, eres tú! Me alegro de verte.\n"
	.string "Y tú te alegrarás de saber esto…$"

Route117_PokemonDayCare_Text_YourMonHasGrownXLevels:
	.string "Tu {STR_VAR_1} ha crecido\n"
	.string "estos niveles: ¡{STR_VAR_2}!$"

Route117_PokemonDayCare_Text_YourTeamIsFull:
	.string "Tu equipo POKéMON está lleno.\n"
	.string "Haz un hueco y vuelve a verme.$"

@ Unused
Route117_PokemonDayCare_Text_TakeBackWhichMon:
	.string "Which POKéMON will you take back?$"

Route117_PokemonDayCare_Text_ItWillCostX:
	.string "Si quieres llevarte a tu {STR_VAR_1},\n"
	.string "tendrás que pagar {STR_VAR_2}¥.$"

Route117_PokemonDayCare_Text_HeresYourMon:
	.string "¡Perfecto!\n"
	.string "Aquí tienes a tu POKéMON.$"

Route117_PokemonDayCare_Text_TookBackMon:
	.string "{PLAYER} recogió a {STR_VAR_1} de\n"
	.string "la GUARDERÍA POKéMON.$"

Route117_PokemonDayCare_Text_YouHaveJustOneMon:
	.string "Anda, pero si sólo tienes un POKéMON…\p"
	.string "Vuelve cuando tengas alguno más.$"

Route117_PokemonDayCare_Text_TakeYourMonBack:
	.string "¿Quieres recoger un POKéMON?$"

Route117_PokemonDayCare_Text_WhatWillYouBattleWith:
	.string "Si me dejas ese POKéMON,\n"
	.string "no podrás entablar combates.\p"
	.string "Vuelve en otra ocasión.$"

Text_EggHatchHuh:
	.string "¿Y esto?$"

Route117_PokemonDayCare_Text_YoullBeLeftWithJustOne:
	.string "¿Eh?\n"
	.string "A ver, a ver.\p"
	.string "Si me dejas ese POKéMON aquí, \n"
	.string "sólo te quedarás con uno en forma.\p"
	.string "Será mejor que atrapes alguno más,\n"
	.string "vamos, digo yo.$"
