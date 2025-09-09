# 1 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerLobby_OnResume
# 4 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerLobby_OnTransition
# 5 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerLobby_OnFrame
# 6 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerLobby_OnWarp
# 7 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnResume:
# 10 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TryHideBattleTowerReporter
# 11 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 12 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnTransition:
# 14 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_ShowOrHideReporter
# 15 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	apprentice_shouldcheckgone
# 16 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, BattleFrontier_BattleTowerLobby_EventScript_ShowApprentice  @ VAR_0x8004 always TRUE here
# 17 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_set FLAG_DAILY_APPRENTICE_LEAVES, BattleFrontier_BattleTowerLobby_EventScript_HideApprentice
# 18 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowApprentice::
# 19 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_HIDE_APPRENTICE
# 20 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	apprentice_setgfx
# 21 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndShowOrHideApprentice::
# 22 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 23 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 24 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_HideApprentice::
# 25 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setflag FLAG_HIDE_APPRENTICE
# 26 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndShowOrHideApprentice
# 27 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 28 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnWarp:
# 29 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerLobby_EventScript_PlayerFaceNorth
# 30 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.2byte 0
# 31 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 32 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_PlayerFaceNorth::
# 33 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 34 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 35 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 36 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 37 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnFrame:
# 38 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleTowerLobby_EventScript_GetChallengeStatus
# 39 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleTowerLobby_EventScript_QuitWithoutSaving
# 40 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge
# 41 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleTowerLobby_EventScript_WonChallenge
# 42 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleTowerLobby_EventScript_LostChallenge
# 43 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.2byte 0
# 44 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 45 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetChallengeStatus::
# 46 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_getstatus
# 47 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 48 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 49 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_QuitWithoutSaving::
# 50 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 51 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 52 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 53 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 54 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK, 0
# 55 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, FALSE
# 56 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 57 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 58 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 59 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 60 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 61 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WonChallenge::
# 62 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 63 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 64 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_isbrain
# 65 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_DefeatedMaiden
# 66 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven
# 67 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 68 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons
# 69 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 70 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_DefeatedMaiden::
# 71 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden, MSGBOX_DEFAULT
# 72 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons::
# 73 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_giveribbons
# 74 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints
# 75 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons
# 76 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 77 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitfanfare
# 79 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons, MSGBOX_DEFAULT
# 80 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints::
# 81 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints, MSGBOX_DEFAULT
# 82 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_givepoints
# 83 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 84 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle
# 85 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 86 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_RESULT, 49, BattleFrontier_BattleTowerLobby_EventScript_LookForwardToChallenge
# 87 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer, MSGBOX_DEFAULT
# 88 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LookForwardToChallenge::
# 89 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 90 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 91 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 92 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 93 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 94 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 95 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 96 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostChallenge::
# 97 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak
# 98 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak
# 99 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LostThanksForPlaying
# 101 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak::
# 102 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, FALSE
# 103 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostThanksForPlaying::
# 104 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 106 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying
# 107 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 108 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle
# 109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 111 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 112 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 113 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 114 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 115 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 116 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle::
# 117 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved
# 118 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkairshow
# 120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 121 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special HealPlayerParty
# 122 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save 0
# 123 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 124 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 127 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_RecordLastMatch
# 128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 130 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 132 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_EventScript_SaveBattle
# 133 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 134 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 135 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_SaveBattle::
# 136 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_savebattle
# 137 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_EventScript_BattleSaveFailed
# 138 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 139 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass, MSGBOX_DEFAULT
# 140 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 141 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 142 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_BattleSaveFailed::
# 143 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved, MSGBOX_DEFAULT
# 144 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle::
# 145 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 147 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_GetCantRecordBattle::
# 148 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_RECORD_DISABLED
# 149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge::
# 152 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 153 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 154 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_SetBravoTrainerOn
# 155 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou
# 156 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 157 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved
# 158 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 159 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 160 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 161 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 166 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetBravoTrainerOn::
# 167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, TRUE
# 168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 169 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 170 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SinglesAttendant::
# 171 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle, MSGBOX_DEFAULT
# 176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge::
# 177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge
# 178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 179 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 180 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge
# 182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainSinglesChallenge
# 183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 184 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge::
# 187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 190 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 193 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 195 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 196 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 197 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 198 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 209 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge
# 210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 211 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 212 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge::
# 213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 215 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 216 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 217 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 218 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 225 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, TRUE
# 226 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 227 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainSinglesChallenge::
# 230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge
# 232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_DoublesAttendant::
# 235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 237 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 238 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
# 240 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge::
# 241 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge
# 242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 243 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge
# 246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainDoublesChallenge
# 247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 249 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 250 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge::
# 251 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 252 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 261 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons, MSGBOX_DEFAULT
# 262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge
# 274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 276 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge::
# 277 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 278 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 280 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 282 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 283 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 284 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 285 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 286 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 287 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 289 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainDoublesChallenge::
# 294 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 295 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge
# 296 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 297 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_MultisAttendant::
# 299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 302 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
# 303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle, MSGBOX_DEFAULT
# 305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge::
# 306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge
# 307 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 308 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 310 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge
# 311 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainMultisChallenge
# 312 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 313 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 314 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 315 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge::
# 316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 321 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 322 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 323 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 325 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons, MSGBOX_DEFAULT
# 327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 336 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge
# 339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge::
# 342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 346 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 349 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 350 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 353 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 354 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 356 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 358 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainMultisChallenge::
# 359 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge, MSGBOX_DEFAULT
# 360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge
# 361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 363 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LinkMultisAttendant::
# 364 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 365 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 366 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle, MSGBOX_DEFAULT
# 369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge::
# 370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge
# 371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 374 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge
# 375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainLinkMultisChallenge
# 376 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 377 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 378 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 379 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge::
# 380 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 381 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 382 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 384 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 387 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2, MSGBOX_DEFAULT
# 391 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 394 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 395 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 396 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 397 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 399 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 400 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 401 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 402 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge
# 403 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 404 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 405 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge::
# 406 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 407 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 408 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 409 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 410 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 411 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 412 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 413 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 414 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ The command tower_save ultimately calls TrySavingData(SAVE_LINK), which writes data in SaveBlock1 and SaveBlock2
# 415 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ to the flash, but not data in PokemonStorage. The SaveGame script that follows asks the player to do a full save,
# 416 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ which they can opt out of. As a result the player can save their party and quit without having saved the PC.
# 417 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ This allows players to clone pokemon and their held items by withdrawing them (or erase them by despositing).
# 418 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#ifndef BUGFIX
# 419 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save 0
# 420 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#endif
# 421 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 422 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 423 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 424 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ GAME_STAT_ENTERED_BATTLE_TOWER should not be incremented here, for two reasons:
# 425 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ 1. It is incremented again in BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful or BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 426 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ 2. If the player tries to connect, but fails, the counter will still be incremented even if the player never enters the tower.
# 427 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#ifndef BUGFIX
# 428 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 429 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#endif
# 430 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	specialvar VAR_RESULT, IsWirelessAdapterConnected
# 431 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink
# 432 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink
# 433 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 434 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 435 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan::
# 436 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 437 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 438 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower
# 439 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 440 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 4, MULTI_BATTLE_TOWER_FEELINGS, FALSE
# 441 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 442 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_FeelingsBattleNow
# 443 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_FeelingsIWon
# 444 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_FeelingsILost
# 445 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell
# 446 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell
# 447 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 448 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 449 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 450 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsBattleNow::
# 451 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin, MSGBOX_DEFAULT
# 452 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_START
# 453 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 454 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 455 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 456 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 457 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 458 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 459 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsIWon::
# 460 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon, MSGBOX_DEFAULT
# 461 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_WON
# 462 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 463 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 464 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 465 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 466 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 467 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 468 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsILost::
# 469 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost, MSGBOX_DEFAULT
# 470 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_LOST
# 471 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 472 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 473 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 474 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 475 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 476 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 477 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell::
# 478 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt, MSGBOX_DEFAULT
# 479 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 480 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 481 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 482 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings::
# 483 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CanceledEasyChat
# 484 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattleTowerLobby_EventScript_SubmittedFeelings
# 485 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 486 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 487 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CanceledEasyChat::
# 488 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChangedYourMind, MSGBOX_DEFAULT
# 489 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 490 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 491 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 492 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SubmittedFeelings::
# 493 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel, MSGBOX_DEFAULT
# 494 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 495 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 496 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 497 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_Woman::
# 498 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded, MSGBOX_NPC
# 499 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 500 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 501 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_Boy::
# 502 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins, MSGBOX_NPC
# 503 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 504 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 505 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowSinglesResults::
# 506 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 507 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_SINGLES
# 508 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 509 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 510 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 511 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 512 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 513 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowDoublesResults::
# 514 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 515 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_DOUBLES
# 516 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 517 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 518 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 519 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 520 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 521 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowMultisResults::
# 522 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 523 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_MULTIS
# 524 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 525 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 526 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 527 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 528 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 529 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowLinkMultisResults::
# 530 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 531 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_LINK_MULTIS
# 532 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 533 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 534 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 535 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 536 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 537 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons::
# 538 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 539 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50
# 540 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen
# 541 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 542 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50::
# 543 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 544 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Singles
# 545 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Doubles
# 546 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis, MSGBOX_DEFAULT
# 547 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 548 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 549 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 550 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Singles::
# 551 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles, MSGBOX_DEFAULT
# 552 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 553 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 554 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 555 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Doubles::
# 556 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles, MSGBOX_DEFAULT
# 557 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 558 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 559 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 560 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen::
# 561 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 562 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenSingles
# 563 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenDoubles
# 564 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis, MSGBOX_DEFAULT
# 565 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 566 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 567 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 568 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenSingles::
# 569 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles, MSGBOX_DEFAULT
# 570 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 571 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 572 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 573 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenDoubles::
# 574 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles, MSGBOX_DEFAULT
# 575 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 576 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 577 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 578 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed::
# 579 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS  @ No status provided, so it relies on VAR_0x8006 being 0 already
# 580 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 581 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 582 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 583 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge::
# 584 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 585 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 586 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge::
# 587 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 588 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 589 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge::
# 590 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 591 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 592 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 593 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EnterElevator::
# 594 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 595 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_PARTY_ORDER
# 596 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetPartySize
# 597 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CallFrontierUtilFunc
# 598 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 599 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad::
# 600 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_loadlinkopponents
# 601 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 1
# 602 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_RESULT, 6, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad
# 603 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom
# 604 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CANCEL_BATTLE_ROOM_CHALLENGE
# 605 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 1, 6
# 606 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 607 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 609 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom::
# 611 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_BufferModeText
# 612 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_ShowYouToLinkMultiBattleRoom
# 613 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom, MSGBOX_DEFAULT
# 614 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WalkToElevator
# 615 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 616 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowYouToLinkMultiBattleRoom::
# 617 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	messageautoscroll BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom
# 618 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 619 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 48
# 620 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WalkToElevator::
# 621 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 622 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo
# 623 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord
# 624 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_Movement_WalkToElevator
# 625 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerLobby_Movement_WalkToElevator
# 626 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 627 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	opendoor VAR_0x8004, 1
# 628 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 629 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_Movement_AttendantEnterElevator
# 630 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerLobby_Movement_PlayerEnterElevator
# 631 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 632 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closedoor VAR_0x8004, 1
# 633 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 634 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 635 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 636 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_WalkToElevator:
# 637 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 638 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 639 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 640 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 641 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 642 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_AttendantEnterElevator:
# 643 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 644 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 645 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 646 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 647 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_PlayerEnterElevator:
# 648 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 649 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 650 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 651 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 652 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 653 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 654 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_UnusedEnterElevator:
# 655 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 656 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 657 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 658 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 659 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 660 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 661 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 662 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 663 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferModeText::
# 664 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_BufferTextSingle
# 665 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_BufferTextDouble
# 666 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_BufferTextMulti
# 667 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_BufferTextLinkMulti
# 668 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 669 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 670 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextSingle::
# 671 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
# 672 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 673 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 674 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextDouble::
# 675 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
# 676 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 677 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 678 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextMulti::
# 679 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
# 680 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 681 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 682 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextLinkMulti::
# 683 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
# 684 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 685 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 686 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo::
# 687 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_TalkedToSinglesAttendant
# 688 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_TalkedToDoublesAttendant
# 689 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_TalkedToMultisAttendant
# 690 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_TalkedToLinkMultisAttendant
# 691 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 692 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 693 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToSinglesAttendant::
# 694 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_SINGLES
# 695 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 696 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 697 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToDoublesAttendant::
# 698 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_DOUBLES
# 699 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 700 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 701 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToMultisAttendant::
# 702 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_MULTIS
# 703 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 704 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 705 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToLinkMultisAttendant::
# 706 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_LINK_MULTIS
# 707 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 708 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 709 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord::
# 710 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordSingles
# 711 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordDoubles
# 712 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordMultis
# 713 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordLinkMultis
# 714 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 715 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 716 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordSingles::
# 717 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 6
# 718 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 719 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 720 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordDoubles::
# 721 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 10
# 722 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 723 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 724 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordMultis::
# 725 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 14
# 726 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 727 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 728 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordLinkMultis::
# 729 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 18
# 730 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 731 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 732 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetPartySize::
# 733 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_GetSinglesPartySize
# 734 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_GetDoublesPartySize
# 735 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetMultisPartySize
# 736 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetLinkMultisPartySize
# 737 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 738 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 739 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetSinglesPartySize::
# 740 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 741 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 742 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 743 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoublesPartySize::
# 744 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 745 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 746 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 747 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetMultisPartySize::
# 748 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 749 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 750 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 751 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetLinkMultisPartySize::
# 752 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 753 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 754 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 755 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_GetLvlMode::
# 756 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 757 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 758 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 759 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink::
# 760 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, USING_BATTLE_TOWER
# 761 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message gText_PleaseWaitForLink
# 762 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 763 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, 0
# 764 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TryBattleLinkup
# 765 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 766 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful
# 767 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SOMEONE_NOT_READY, CableClub_EventScript_AbortLinkSomeoneNotReady
# 768 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_DIFF_SELECTIONS, BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections
# 769 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS, BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers
# 770 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 771 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_CONNECTION_ERROR, CableClub_EventScript_AbortLinkConnectionError
# 772 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 773 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 774 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 775 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections::
# 776 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 777 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8005, 3, BattleFrontier_BattleTowerLobby_EventScript_FriendDifferentSelection
# 778 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox Text_PlayersMadeDifferentSelections, MSGBOX_DEFAULT
# 779 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 780 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 781 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 782 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendDifferentSelection::
# 783 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
# 784 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
# 785 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 786 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 787 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 788 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers::
# 789 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers, MSGBOX_DEFAULT
# 790 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 791 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox CableClub_Text_IncorrectNumberOfParticipants, MSGBOX_DEFAULT
# 792 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 793 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 794 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 795 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLink::
# 796 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 797 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_0x8005, 0, BattleFrontier_BattleTowerLobby_EventScript_FriendChoseDifferentLvlMode
# 798 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_0x8005, 1, BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMon
# 799 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_0x8005, 2, BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMons
# 800 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
# 801 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 802 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 803 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 804 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendChoseDifferentLvlMode::
# 805 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
# 806 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 807 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 808 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMon::
# 809 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon, MSGBOX_DEFAULT
# 810 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 811 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 812 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMons::
# 813 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons, MSGBOX_DEFAULT
# 814 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 815 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 816 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful::
# 817 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 818 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 819 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 820 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 821 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 822 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 823 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 824 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 825 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 826 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TrySetBattleTowerLinkType
# 827 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 828 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 829 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 830 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainLinkMultisChallenge::
# 831 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge, MSGBOX_DEFAULT
# 832 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge
# 833 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 834 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 835 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink::
# 836 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_BATTLE_TOWER
# 837 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 838 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 839 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 840 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader::
# 841 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message CableClub_Text_ChooseGroupLeaderOfTwo
# 842 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 843 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 6, MULTI_LINK_LEADER, FALSE
# 844 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 845 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
# 846 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
# 847 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 848 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 849 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 850 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 851 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader::
# 852 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryBecomeLinkLeader
# 853 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 854 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 855 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
# 856 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 857 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 858 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 859 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 860 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup::
# 861 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryJoinLinkGroup
# 862 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 863 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 864 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
# 865 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 866 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 867 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 868 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 869 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful::
# 870 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 871 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 872 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 873 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 874 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 875 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 876 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 877 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 878 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 879 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 880 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 881 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 882 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesBoard::
# 883 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 884 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 885 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 886 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 887 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 888 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard::
# 889 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading
# 890 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 891 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_TOWER_RULES, FALSE
# 892 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 893 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_RulesTower
# 894 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_RulesMons
# 895 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_RulesSalon
# 896 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_RulesMultiLink
# 897 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 4, BattleFrontier_BattleTowerLobby_EventScript_ExitRules
# 898 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_ExitRules
# 899 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 900 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 901 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesTower::
# 902 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules, MSGBOX_DEFAULT
# 903 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 904 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 905 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 906 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesMons::
# 907 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
# 908 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 909 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 910 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 911 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesSalon::
# 912 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules, MSGBOX_DEFAULT
# 913 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 914 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 915 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 916 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesMultiLink::
# 917 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules, MSGBOX_DEFAULT
# 918 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 919 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 920 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 921 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExitRules::
# 922 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 923 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 924 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 925 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 926 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DirectYouToBattleRoom:
# 927 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I’ll direct you to your BATTLE ROOM now.$"
# 928 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 929 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting:
# 930 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Huy, qué pena…\p"
# 931 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Se te olvidó guardar la partida antes\n"
# 932 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de abandonar el desafío…\p"
# 933 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eso quiere decir que, ejem, se te ha\n"
# 934 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "descalificado por el momento…$"
# 935 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 936 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven:
# 937 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Enhorabuena!\n"
# 938 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Has derrotado a los siete\l"
# 939 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ENTRENADORES!\p"
# 940 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 941 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 942 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 943 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_EarnedFabulousPrize:
# 944 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "For beating seven TRAINERS in a row,\n"
# 945 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you have earned this fabulous prize!\p"
# 946 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 947 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 948 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ReceivedPrize:
# 949 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} recibió el premio\n"
# 950 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 951 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 952 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 953 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_BagFullMakeRoom:
# 954 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Oh, your BAG appears to be full.\p"
# 955 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please make room in your BAG, then come\n"
# 956 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "see me.$"
# 957 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 958 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying:
# 959 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Gracias por participar!\p"
# 960 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 961 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 962 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved:
# 963 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Vamos a guardar tu récord.\n"
# 964 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Espera unos instantes.$"
# 965 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 966 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou:
# 967 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Te estábamos esperando!\p"
# 968 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 969 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 970 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved:
# 971 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Antes de entrar en una SALA BATALLA,\n"
# 972 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "hay que guardar la partida.\l"
# 973 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Espera unos instantes.$"
# 974 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 975 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer:
# 976 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Estás a punto de enfrentarte \n"
# 977 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "al ENTRENADOR número 50. \p"
# 978 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "A partir de ahora, cada vez que venzas \n"
# 979 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "a siete ENTRENADORES seguidos\l"
# 980 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "utilizando POKéMON diferentes, éstos\l"
# 981 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "recibirán una CINTA conmemorativa.\p"
# 982 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Buena suerte!$"
# 983 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 984 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons:
# 985 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Aquí tienes algunas CINTAS por haber\n"
# 986 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "vencido a siete duros ENTRENADORES\l"
# 987 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "uno tras otro.\p"
# 988 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡{PLAYER} recibió unas CINTAS!$"
# 989 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 990 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons:
# 991 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} les puso las CINTAS\n"
# 992 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "a los POKéMON participantes.$"
# 993 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 994 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower:
# 995 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¿Tienes un segundo?\n"
# 996 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Quería hacerte una pregunta.\p"
# 997 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Cuando disputas un combate aquí,\n"
# 998 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "en la TORRE BATALLA…,\p"
# 999 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¿en qué momento del combate\n"
# 1000 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "te gustaría gritar algo muy alto?$"
# 1001 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1002 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin:
# 1003 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ya, ¿y qué te gustaría gritar\n"
# 1004 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "al empezar un combate?$"
# 1005 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1006 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon:
# 1007 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ya, ¿y qué te gustaría gritar\n"
# 1008 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "después de ganar un combate?$"
# 1009 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1010 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost:
# 1011 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ya, ¿y qué te gustaría gritar\n"
# 1012 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "después de perder un combate?$"
# 1013 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1014 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt:
# 1015 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ah, ¿así que no piensas mucho en eso?…\n"
# 1016 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pues me parece muy bien.$"
# 1017 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1018 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChangedYourMind:
# 1019 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¿Eh? ¿Has cambiado de opinión?\n"
# 1020 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pues vaya veleta…$"
# 1021 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1022 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel:
# 1023 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ajá, ¿así te sientes?\n"
# 1024 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Muy original.\p"
# 1025 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Gracias!$"
# 1026 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1027 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded:
# 1028 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Aquí guardan el número de combates\n"
# 1029 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "seguidos que ganas.\p"
# 1030 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Espero no perder y hacer el ridículo!$"
# 1031 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1032 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins:
# 1033 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Una vez dentro de la TORRE BATALLA, no\n"
# 1034 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "puedes salir hasta que venzas a siete\l"
# 1035 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ENTRENADORES seguidos o pierdas.\p"
# 1036 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Asegúrate de que puedes aceptar\n"
# 1037 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "un desafío de estas dimensiones!$"
# 1038 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1039 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1040 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction:
# 1041 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER\n"
# 1042 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "DOUBLE BATTLE CORNER!\p"
# 1043 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Unfortunately, the BATTLE ROOMS\n"
# 1044 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are still under construction.\p"
# 1045 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come back when the work\n"
# 1046 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is completed.$"
# 1047 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1048 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1049 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction:
# 1050 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER\n"
# 1051 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "MULTI BATTLE CORNER!\p"
# 1052 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Unfortunately, the BATTLE ROOMS\n"
# 1053 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are still under construction.\p"
# 1054 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come back when the work\n"
# 1055 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is completed.$"
# 1056 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1057 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge:
# 1058 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Esperamos que vuelvas\n"
# 1059 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "pronto por aquí.$"
# 1060 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1061 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WhichLevelMode:
# 1062 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "La SALA BATALLA dispone de dos niveles,\n"
# 1063 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "el nivel 50 y el nivel libre. ¿Cuál eliges?$"
# 1064 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1065 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1066 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectMons:
# 1067 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please select the POKéMON you wish\n"
# 1068 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.$"
# 1069 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1070 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering:
# 1071 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Antes de entrar en una SALA BATALLA,\n"
# 1072 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "debes guardar la partida.\l"
# 1073 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¿Estás de acuerdo?$"
# 1074 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1075 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom:
# 1076 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Vamos a la SALA\n"
# 1077 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATALLA {STR_VAR_1}.$"
# 1078 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1079 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RecordLastMatch:
# 1080 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¿Quieres que tu último combate\n"
# 1081 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "en la TORRE BATALLA sea grabado\l"
# 1082 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "en tu PASE del FRENTE?$"
# 1083 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1084 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1085 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50:
# 1086 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1087 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don’t have {STR_VAR_2} eligible POKéMON.\p"
# 1088 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have {STR_VAR_2} different POKéMON\n"
# 1089 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 1090 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1091 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1092 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 1093 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1094 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1095 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1096 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpen:
# 1097 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1098 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don’t have {STR_VAR_2} eligible POKéMON.\p"
# 1099 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have {STR_VAR_2} different POKéMON\n"
# 1100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.\p"
# 1101 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1102 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1103 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 1104 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1106 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles:
# 1107 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Huy, qué pena…\p"
# 1108 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "No tienes tres POKéMON que puedan\n"
# 1109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "participar en este desafío.\p"
# 1110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Necesitas tres POKéMON diferentes\n"
# 1111 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de nivel 50 o inferior.\p"
# 1112 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Además, deben sostener distintos\n"
# 1113 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "tipos de objeto.\p"
# 1114 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
# 1115 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Vuelve cuando cumplas las condiciones\n"
# 1116 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "para aceptar el desafío.$"
# 1117 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1118 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles:
# 1119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Huy, qué pena…\p"
# 1120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "No tienes tres POKéMON que puedan\n"
# 1121 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "participar en este desafío.\p"
# 1122 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Necesitas tres POKéMON diferentes\n"
# 1123 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "para poder participar.\p"
# 1124 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Además, deben sostener distintos\n"
# 1125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "tipos de objeto.\p"
# 1126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
# 1127 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Vuelve cuando cumplas las condiciones\n"
# 1128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "para aceptar el desafío.$"
# 1129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1130 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles:
# 1131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Huy, qué pena…\p"
# 1132 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "No tienes cuatro POKéMON que puedan\n"
# 1133 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "participar en este desafío.\p"
# 1134 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Necesitas cuatro POKéMON diferentes\n"
# 1135 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de nivel 50 o inferior.\p"
# 1136 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Además, deben sostener distintos\n"
# 1137 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "tipos de objeto.\p"
# 1138 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
# 1139 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Vuelve cuando cumplas las condiciones\n"
# 1140 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "para aceptar el desafío.$"
# 1141 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1142 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles:
# 1143 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Huy, qué pena…\p"
# 1144 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "No tienes cuatro POKéMON que puedan\n"
# 1145 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "participar en este desafío.\p"
# 1146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Necesitas cuatro POKéMON diferentes\n"
# 1147 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "para poder participar.\p"
# 1148 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Además, deben sostener distintos\n"
# 1149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "tipos de objeto.\p"
# 1150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
# 1151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Vuelve cuando cumplas las condiciones\n"
# 1152 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "para aceptar el desafío.$"
# 1153 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1154 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis:
# 1155 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Huy, qué pena…\p"
# 1156 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "No tienes dos POKéMON que puedan\n"
# 1157 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "participar en este desafío.\p"
# 1158 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Necesitas dos POKéMON diferentes\n"
# 1159 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de nivel 50 o inferior.\p"
# 1160 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Además, deben sostener distintos\n"
# 1161 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "tipos de objeto.\p"
# 1162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
# 1163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Vuelve cuando cumplas las condiciones\n"
# 1164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "para aceptar el desafío.$"
# 1165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1166 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis:
# 1167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Huy, qué pena…\p"
# 1168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "No tienes dos POKéMON que puedan\n"
# 1169 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "participar en este desafío.\p"
# 1170 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Necesitas dos POKéMON diferentes\n"
# 1171 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "para poder participar.\p"
# 1172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Además, deben sostener distintos\n"
# 1173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "tipos de objeto.\p"
# 1174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
# 1175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Vuelve cuando cumplas las condiciones\n"
# 1176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "para aceptar el desafío.$"
# 1177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle:
# 1179 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Aquí ponemos a prueba la destreza\n"
# 1180 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de los ENTRENADORES!\p"
# 1181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Te damos la bienvenida\n"
# 1182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "a la TORRE BATALLA!\p"
# 1183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Soy la guía de las SALAS BATALLA\n"
# 1184 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de COMBATES INDIVIDUALES!$"
# 1185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge:
# 1187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¿Aceptas el desafío del\n"
# 1188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "COMBATE INDIVIDUAL?$"
# 1189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1190 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge:
# 1191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "En los COMBATES INDIVIDUALES\n"
# 1192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "que se disputan en la TORRE BATALLA\l"
# 1193 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "participan tres POKéMON.\p"
# 1194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hay muchas SALAS BATALLA de COMBATES\n"
# 1195 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "INDIVIDUALES en la TORRE BATALLA.\p"
# 1196 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "En cada una de ellas, siete\n"
# 1197 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ENTRENADORES te esperan.\p"
# 1198 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Si consigues derrotar a los siete,\n"
# 1199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "obtendrás PUNTOS de BATALLA.\p"
# 1200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Si quieres interrumpir el desafío,\n"
# 1201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "no olvides guardar antes la partida.\p"
# 1202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Si no la guardas, se te descalificará.$"
# 1203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_SelectThreeMons:
# 1205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Selecciona los tres POKéMON\n"
# 1206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "con los que quieres combatir.$"
# 1207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle:
# 1209 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Aquí ponemos a prueba la destreza\n"
# 1210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de los ENTRENADORES!\p"
# 1211 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Te damos la bienvenida\n"
# 1212 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "a la TORRE BATALLA!\p"
# 1213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Soy la guía de las SALAS BATALLA\n"
# 1214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de COMBATES DOBLES!$"
# 1215 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1216 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge:
# 1217 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¿Aceptas el desafío del\n"
# 1218 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "COMBATE DOBLE?$"
# 1219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge:
# 1221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "En los COMBATES DOBLES que\n"
# 1222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "se disputan en la TORRE BATALLA\l"
# 1223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "participan cuatro POKéMON.\p"
# 1224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hay muchas SALAS BATALLA de COMBATES\n"
# 1225 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "DOBLES en la TORRE BATALLA.\p"
# 1226 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "En cada una de ellas, siete\n"
# 1227 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ENTRENADORES te esperan.\p"
# 1228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Si consigues derrotar a los siete,\n"
# 1229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "obtendrás PUNTOS de BATALLA.\p"
# 1230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Si quieres interrumpir el desafío,\n"
# 1231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "no olvides guardar antes la partida.\p"
# 1232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Si no la guardas, se te descalificará.$"
# 1233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons:
# 1235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Selecciona los cuatro POKéMON\n"
# 1236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "con los que quieres combatir.$"
# 1237 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1238 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle:
# 1239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Aquí ponemos a prueba la destreza\n"
# 1240 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de los ENTRENADORES!\p"
# 1241 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Te damos la bienvenida\n"
# 1242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "a la TORRE BATALLA!\p"
# 1243 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Soy la guía de las SALAS BATALLA\n"
# 1244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de COMBATES MÚLTIPLES!$"
# 1245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge:
# 1247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¿Aceptas el desafío del\n"
# 1248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "COMBATE MÚLTIPLE?$"
# 1249 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1250 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge:
# 1251 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "En los COMBATES MÚLTIPLES que se\n"
# 1252 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "disputan en la TORRE BATALLA, debes\l"
# 1253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "formar equipo con otro ENTRENADOR\l"
# 1254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "y combatir con dos POKéMON cada uno\l"
# 1255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "contra otras parejas de ENTRENADORES.\p"
# 1256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "En el SALÓN BATALLA que hay dentro\n"
# 1257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de la TORRE, podrás conocer a otros\l"
# 1258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ENTRENADORES como tú.\p"
# 1259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Allí deberás elegir al ENTRENADOR\n"
# 1260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "que será tu compañero.\p"
# 1261 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Cuando hayas elegido tu pareja, seréis\n"
# 1262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "conducidos a la SALA BATALLA.\p"
# 1263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Una vez allí, os enfrentaréis a\n"
# 1264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "siete parejas de ENTRENADORES.\p"
# 1265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Si lográis derrotar a las siete parejas,\n"
# 1266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "obtendrás PUNTOS de BATALLA.\p"
# 1267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Si quieres interrumpir el desafío,\n"
# 1268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "no olvides guardar antes la partida.\p"
# 1269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Si no la guardas, se te descalificará.$"
# 1270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons:
# 1272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Selecciona los dos POKéMON\n"
# 1273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "con los que quieres combatir.$"
# 1274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle:
# 1276 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Aquí ponemos a prueba la destreza\n"
# 1277 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de los ENTRENADORES!\p"
# 1278 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Te damos la bienvenida\n"
# 1279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "a la TORRE BATALLA!\p"
# 1280 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Soy la guía de las SALAS BATALLA de\n"
# 1281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "COMBATES MULTIJUGADOR con CONEXIÓN!$"
# 1282 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1283 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge:
# 1284 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¿Aceptas el desafío del COMBATE\n"
# 1285 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "MULTIJUGADOR con CONEXIÓN?$"
# 1286 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1287 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge:
# 1288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "En los COMBATES MULTIJUGADOR\n"
# 1289 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "con CONEXIÓN, debes formar equipo\l"
# 1290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "con un amigo y combatir con dos\l"
# 1291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "POKéMON cada uno contra otras\l"
# 1292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "parejas de ENTRENADORES.\p"
# 1293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Para formar pareja con tu amigo, usad\n"
# 1294 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Conectores inalámbricos o un cable\l"
# 1295 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Game Link de Game Boy Advance.\p"
# 1296 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Debes formar equipo con tu amigo y\n"
# 1297 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "con dos clases distintas de POKéMON.\p"
# 1298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hay muchas SALAS BATALLA donde\n"
# 1299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "podréis enfrentaros a otros equipos.\p"
# 1300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Cuando entréis en una, tu amigo y\n"
# 1301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "tú os enfrentaréis a siete parejas\l"
# 1302 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de ENTRENADORES sin descanso.\p"
# 1303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Si lográis derrotar a las siete parejas,\n"
# 1304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "obtendréis PUNTOS de BATALLA.\p"
# 1305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Recuerda que, a diferencia de lo que\n"
# 1306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ocurre en otras SALAS, aquí no podréis\l"
# 1307 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "interrumpir el desafío.\p"
# 1308 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Una vez empecéis, deberéis terminar\n"
# 1309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "los siete combates sin interrupción.$"
# 1310 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1311 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2:
# 1312 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Selecciona los dos POKéMON\n"
# 1313 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "con los que quieres combatir.$"
# 1314 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1315 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend:
# 1317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You have chosen the same kind of\n"
# 1318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "POKéMON as your friend.\p"
# 1319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please choose two POKéMON different\n"
# 1320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "from your friend’s, match the level\l"
# 1321 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you wish to enter, and register again.$"
# 1322 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1323 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers:
# 1324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "En las SALAS BATALLA de COMBATES\n"
# 1325 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "MULTIJUGADOR con CONEXIÓN sólo pueden\l"
# 1326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "participar dos jugadores conectados.$"
# 1327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon:
# 1329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Tu amigo también ha seleccionado\n"
# 1330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "el POKéMON {STR_VAR_1}.$"
# 1331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons:
# 1333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Tu amigo también ha seleccionado\n"
# 1334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "los POKéMON {STR_VAR_1} y {STR_VAR_2}.$"
# 1335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1336 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode:
# 1337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Tu amigo ha seleccionado\n"
# 1338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "un nivel distinto para combatir.$"
# 1339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon:
# 1342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
# 1343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "battle level.\p"
# 1344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected\n"
# 1345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the POKéMON {STR_VAR_1}.$"
# 1346 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons:
# 1349 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
# 1350 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "battle level.\p"
# 1351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected the\n"
# 1352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "POKéMON {STR_VAR_1} and {STR_VAR_2}.$"
# 1353 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1354 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode:
# 1355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Elige dos POKéMON distintos a los\n"
# 1356 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de tu amigo, selecciona el mismo\l"
# 1357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "nivel y vuelve a registrarte.$"
# 1358 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1359 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn:
# 1360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Antes de continuar, hay que guardar\n"
# 1361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "la partida. Espera unos instantes.$"
# 1362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1363 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden:
# 1364 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Enhorabuena!\n"
# 1365 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¡Has derrotado a la DAMA de la TORRE\l"
# 1366 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "y has logrado siete victorias seguidas!$"
# 1367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints:
# 1369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "En reconocimiento a tu enorme talento,\n"
# 1370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "recibirás PUNTOS de BATALLA de premio.$"
# 1371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_Text_ObtainedXBattlePoints:
# 1373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} obtuvo {STR_VAR_1} PB.$"
# 1374 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RulesAreListed:
# 1376 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Son las reglas de la TORRE BATALLA.$"
# 1377 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1378 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading:
# 1379 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "¿Qué capítulo quieres leer?$"
# 1380 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1381 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules:
# 1382 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "En la TORRE BATALLA se disputan\n"
# 1383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "cuatro tipos de combates:\l"
# 1384 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "INDIVIDUALES, DOBLES, MÚLTIPLES\l"
# 1385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "y MULTIJUGADOR con CONEXIÓN.\p"
# 1386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Cada tipo de combate se celebra\n"
# 1387 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "en SALAS BATALLA distintas.\p"
# 1388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Habla con la guía que ofrezca el tipo\n"
# 1389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "de combate en el que desees entrar.$"
# 1390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1391 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMonRules:
# 1392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "En cada SALA BATALLA, se necesita\n"
# 1393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "un número distinto de POKéMON.\p"
# 1394 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Para los COMBATES INDIVIDUALES\n"
# 1395 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "se necesitan tres POKéMON.\p"
# 1396 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Para los DOBLES, se necesitan cuatro.\p"
# 1397 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Para el MÚLTIPLE y MULTIJUGADOR con\n"
# 1398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "CONEXIÓN, se necesitan dos POKéMON.$"
# 1399 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1400 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules:
# 1401 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "En el SALÓN BATALLA es donde\n"
# 1402 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "debes elegir al compañero con el que\l"
# 1403 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "disputarás los COMBATES MÚLTIPLES.\p"
# 1404 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Para tu elección, ten en cuenta los\n"
# 1405 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "POKéMON que tenga cada ENTRENADOR\l"
# 1406 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "y los movimientos que puedan realizar.\p"
# 1407 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Si ganas siete combates consecutivos,\n"
# 1408 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "podrás cambiar de compañero.$"
# 1409 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1410 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules:
# 1411 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "En los COMBATES MULTIJUGADOR\n"
# 1412 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "con CONEXIÓN, te enfrentarás con un\l"
# 1413 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "amigo a otros equipos de ENTRENADORES.\p"
# 1414 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Para formar pareja con tu amigo, usad\n"
# 1415 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Conectores inalámbricos o un cable\l"
# 1416 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Game Link de Game Boy Advance.\p"
# 1417 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Debes elegir dos POKéMON\n"
# 1418 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "en el mostrador del registro.\p"
# 1419 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Los POKéMON que elijas tienen\n"
# 1420 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "que ser distintos a los de tu amigo.\p"
# 1421 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "A diferencia de lo que ocurre con otros\n"
# 1422 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "combates, los COMBATES MULTIJUGADOR\l"
# 1423 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "con CONEXIÓN no pueden interrumpirse.$"
