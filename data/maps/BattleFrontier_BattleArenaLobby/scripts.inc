# 1 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaLobby_OnFrame
# 4 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaLobby_OnWarp
# 5 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 7 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_OnWarp:
# 8 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth
# 9 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.2byte 0
# 10 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 11 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth::
# 12 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 14 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 15 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 16 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_OnFrame:
# 17 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus
# 18 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving
# 19 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge
# 20 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleArenaLobby_EventScript_WonChallenge
# 21 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleArenaLobby_EventScript_LostChallenge
# 22 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.2byte 0
# 23 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 24 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus::
# 25 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_getstatus
# 26 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 28 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving::
# 29 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 30 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown, MSGBOX_DEFAULT
# 31 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 32 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK, 0
# 33 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 34 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 35 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 36 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 37 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 38 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 39 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WonChallenge::
# 40 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 41 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_isbrain
# 42 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon
# 43 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins, MSGBOX_DEFAULT
# 44 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints
# 45 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 46 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon::
# 47 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon, MSGBOX_DEFAULT
# 48 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints::
# 49 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints, MSGBOX_DEFAULT
# 50 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_givepoints
# 51 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 52 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordAchievement
# 53 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 54 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 55 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 56 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 57 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 58 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 59 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 60 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 61 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_LostChallenge::
# 62 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 63 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
# 64 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 65 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 66 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 67 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 68 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 69 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 70 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 71 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 72 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 73 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge::
# 74 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkairshow
# 75 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 76 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special HealPlayerParty
# 77 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 78 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save 0
# 79 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 80 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 81 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 82 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 83 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
# 84 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 85 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 86 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 87 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 88 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_RecordMatch
# 89 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 90 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 91 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_RecordMatch::
# 92 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 93 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge::
# 94 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 95 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 96 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge::
# 97 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 98 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
# 99 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 100 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save CHALLENGE_STATUS_SAVING
# 101 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 102 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 103 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 104 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 105 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge
# 106 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 107 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Attendant::
# 108 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lock
# 109 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	faceplayer
# 110 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
# 111 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 112 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 113 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena, MSGBOX_DEFAULT
# 114 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge::
# 115 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
# 116 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 117 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 118 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 119 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge
# 120 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge
# 121 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 122 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 123 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 124 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge::
# 125 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
# 126 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 127 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 128 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 129 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 130 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 131 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkineligible
# 132 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons
# 133 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 134 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 136 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 137 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 138 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 139 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 140 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 141 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
# 142 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 143 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OkayToSave, MSGBOX_YESNO
# 144 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 145 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case NO, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 146 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case YES, BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge
# 147 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 148 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 149 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge::
# 150 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 151 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 152 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_init
# 153 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, TRUE
# 154 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 155 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 156 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 157 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 158 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	delay 2
# 159 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 160 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 161 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed
# 162 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge::
# 163 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 164 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 165 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_GuideYouToArena, MSGBOX_DEFAULT
# 166 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 167 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 168 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call_if_eq VAR_RESULT, FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50
# 169 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call_if_eq VAR_RESULT, FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen
# 170 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_CORRIDOR, 9, 13
# 171 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 172 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
# 173 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 174 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 175 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge::
# 176 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainChallenge, MSGBOX_DEFAULT
# 177 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge
# 178 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 179 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons::
# 180 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50
# 182 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen
# 183 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 184 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50::
# 185 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 186 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
# 187 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 188 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen::
# 189 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 190 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
# 191 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 192 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed::
# 193 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 194 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 195 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 196 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge::
# 197 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge::
# 200 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
# 201 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge::
# 202 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	release
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 205 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50::
# 206 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor
# 207 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor
# 208 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 209 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 2, 2
# 210 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 211 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 212 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 213 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 214 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 2, 2
# 215 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 216 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 217 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 218 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor:
# 219 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 220 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 221 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 222 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 223 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 224 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 225 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 226 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 227 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 228 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 229 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 230 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor:
# 231 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 232 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 233 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 234 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 235 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor:
# 236 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 237 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 238 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 239 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 240 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 241 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 242 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 243 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 244 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 245 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_faster_up
# 246 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 247 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 248 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor:
# 249 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 250 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 251 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 252 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 253 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 254 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen::
# 255 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor
# 256 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor
# 257 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 258 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 11, 2
# 259 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 260 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 261 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 262 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 263 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 11, 2
# 264 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 265 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 266 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 267 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor:
# 268 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 269 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 270 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 271 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 272 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 273 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 274 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 275 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 276 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 277 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 278 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor:
# 279 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 280 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 281 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 282 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 283 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 284 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 285 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 286 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 287 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_faster_up
# 288 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 289 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 290 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ShowResults::
# 291 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 292 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_ARENA
# 293 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitbuttonpress
# 294 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special RemoveRecordsWindow
# 295 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 296 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 297 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 298 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Youngster::
# 299 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack, MSGBOX_NPC
# 300 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 301 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 302 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Man::
# 303 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked, MSGBOX_NPC
# 304 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 305 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 306 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Camper::
# 307 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw, MSGBOX_NPC
# 308 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 309 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 310 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Woman::
# 311 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant, MSGBOX_NPC
# 312 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 313 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 314 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_RulesBoard::
# 315 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 316 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 317 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 318 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 319 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 320 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard::
# 321 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
# 322 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 323 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_ARENA_RULES, FALSE
# 324 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 325 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_BattleRules
# 326 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_MindRules
# 327 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_SkillRules
# 328 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 3, BattleFrontier_BattleArenaLobby_EventScript_BodyRules
# 329 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 4, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
# 330 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
# 331 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 332 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 333 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_BattleRules::
# 334 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
# 335 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 336 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 337 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 338 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_MindRules::
# 339 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
# 340 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 341 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 342 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 343 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SkillRules::
# 344 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
# 345 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 346 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 347 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 348 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_BodyRules::
# 349 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
# 350 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 351 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 352 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 353 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ExitRules::
# 354 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 355 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 356 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 357 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena:
# 358 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "¡Aquí ponemos a prueba el coraje\n"
# 359 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "de los ENTRENADORES!\p"
# 360 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "¡Te doy la bienvenida al DOJO BATALLA!\p"
# 361 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "¡Soy el guía del TORNEO con JUEZ!$"
# 362 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 363 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge:
# 364 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "¿Aceptas el desafío del DOJO BATALLA?$"
# 365 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 366 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge:
# 367 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Espero que vuelvas pronto por aquí.$"
# 368 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 369 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainChallenge:
# 370 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "En el DOJO BATALLA, se disputan\n"
# 371 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "TORNEOS con JUEZ.\p"
# 372 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Cada ENTRENADOR participa\n"
# 373 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "con un equipo de tres POKéMON.\p"
# 374 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Primero, debes elegir los tres POKéMON\n"
# 375 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "en el orden en que deseas que combatan.\p"
# 376 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Durante el combate, los POKéMON\n"
# 377 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "aparecerán uno a uno en ese orden.\p"
# 378 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Una vez entre un POKéMON en combate,\n"
# 379 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "deberá seguir hasta que concluya.\p"
# 380 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Pero si no hay ganador al cabo\n"
# 381 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "de tres rondas, el juez decidirá.\p"
# 382 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Si quieres interrumpir el torneo,\n"
# 383 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "no olvides guardar antes la partida.\p"
# 384 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Si no la guardas, se te descalificará.\p"
# 385 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Si logras vencer a siete ENTRENADORES\n"
# 386 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "seguidos, ganarás PUNTOS de BATALLA.$"
# 387 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 388 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_OkayToSave:
# 389 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Antes de entrar en el DOJO BATALLA,\n"
# 390 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "debes guardar la partida. ¿De acuerdo?$"
# 391 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 392 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WhichLevelMode:
# 393 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "En DOJO BATALLA hay dos categorías:\n"
# 394 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "nivel 50 y nivel libre. ¿Cuál prefieres?$"
# 395 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 396 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_SelectThreeMons:
# 397 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Selecciona los tres POKéMON\n"
# 398 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "con los que quieres combatir.$"
# 399 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 400 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen:
# 401 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Qué lástima…\p"
# 402 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "No tienes tres POKéMON que puedan\n"
# 403 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "participar en este desafío.\p"
# 404 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Necesitas tres POKéMON diferentes\n"
# 405 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "para poder participar.\p"
# 406 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Además, deben sostener distintos\n"
# 407 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "tipos de objeto.\p"
# 408 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
# 409 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Vuelve cuando cumplas las condiciones\n"
# 410 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "para aceptar el desafío.$"
# 411 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 412 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50:
# 413 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Qué lástima…\p"
# 414 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "No tienes tres POKéMON que puedan\n"
# 415 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "participar en este desafío.\p"
# 416 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Necesitas tres POKéMON diferentes\n"
# 417 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "de nivel 50 o inferior.\p"
# 418 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Además, deben sostener distintos\n"
# 419 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "tipos de objeto.\p"
# 420 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
# 421 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Vuelve cuando cumplas las condiciones\n"
# 422 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "para aceptar el desafío.$"
# 423 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 424 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_GuideYouToArena:
# 425 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Ahora te guiaré hasta el DOJO BATALLA.$"
# 426 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 427 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown:
# 428 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Qué lástima…\p"
# 429 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Me temo que no guardaste la partida\n"
# 430 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "antes de abandonar el desafío…\p"
# 431 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Eso supone la descalificación\n"
# 432 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "automática…\p"
# 433 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "No obstante, puedes volver\n"
# 434 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "a participar cuando quieras.$"
# 435 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 436 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins:
# 437 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "¡Enhorabuena por tu extraordinaria\n"
# 438 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "serie de siete victorias consecutivas!$"
# 439 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 440 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RecordAchievement:
# 441 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Vamos a guardar tu récord.\n"
# 442 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Espera unos instantes.$"
# 443 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 444 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 445 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize:
# 446 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In commemoration of your 7-win streak,\n"
# 447 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "we present you with this prize.$"
# 448 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 449 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 450 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize:
# 451 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 452 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 453 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 454 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 455 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize:
# 456 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Oh?\n"
# 457 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Your BAG seems to be full.\p"
# 458 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I urge you to clear space and\n"
# 459 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "return for your prize.$"
# 460 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 461 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave:
# 462 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "¡Gracias por participar!\p"
# 463 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Vamos a guardar tu récord.\n"
# 464 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Espera unos instantes.$"
# 465 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 466 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2:
# 467 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Esperamos que vuelvas\n"
# 468 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "pronto por aquí.$"
# 469 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 470 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame:
# 471 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Es un placer tenerte de nuevo por aquí.\p"
# 472 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Antes de conducirte al DOJO BATALLA,\n"
# 473 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "debo guardar tu partida. Un segundo.$"
# 474 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 475 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RecordLastMatch:
# 476 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "¿Quieres que tu último combate\n"
# 477 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "en el DOJO BATALLA sea grabado\l"
# 478 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "en tu PASE del FRENTE?$"
# 479 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 480 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack:
# 481 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "He perdido por decisión del JUEZ…\p"
# 482 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Creo que hice mal en usar tantos\n"
# 483 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "movimientos defensivos y no atacar…$"
# 484 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 485 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked:
# 486 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "¡El JUEZ me ha dado la victoria!\p"
# 487 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "¡Mi táctica de atacar sin cesar\n"
# 488 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "al POKéMON del rival ha funcionado!$"
# 489 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 490 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw:
# 491 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Hemos empatado.\p"
# 492 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Cuando se acabó el tiempo, tanto mi\n"
# 493 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "POKéMON como el de mi rival tenían\l"
# 494 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "el mismo número de PS.$"
# 495 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 496 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant:
# 497 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "En el DOJO BATALLA, el orden\n"
# 498 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "de los POKéMON es algo clave.\p"
# 499 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Por ejemplo, si tu primer POKéMON\n"
# 500 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "tiene ciertas deficiencias, trata de\l"
# 501 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "compensarlo poniendo de segundo\l"
# 502 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "POKéMON a uno cuyos movimientos\l"
# 503 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "sean muy eficaces contra el primero.\p"
# 504 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Creo que ésa es la estrategia adecuada\n"
# 505 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "para formar un buen equipo.$"
# 506 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 507 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RulesAreListed:
# 508 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Son las reglas del TORNEO con JUEZ.$"
# 509 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 510 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading:
# 511 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "¿Qué capítulo quieres leer?$"
# 512 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 513 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules:
# 514 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Las reglas del TORNEO con JUEZ difieren\n"
# 515 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "de las que rigen los combates normales.\p"
# 516 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Primero, los combates\n"
# 517 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "sólo duran tres turnos.\p"
# 518 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Si al cabo de los tres turnos no hay\n"
# 519 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "un ganador, lo decidirá el JUEZ.\p"
# 520 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "El JUEZ elegirá al ganador basándose\n"
# 521 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "en cómo han luchado los POKéMON.\p"
# 522 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Además, no podrá cambiarse de POKéMON\n"
# 523 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "hasta que el combate esté decidido.$"
# 524 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 525 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainMindRules:
# 526 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "El primer factor que se juzga\n"
# 527 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "es la MENTE.\p"
# 528 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Con este factor, el JUEZ evalúa\n"
# 529 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "la capacidad agresiva de los rivales.\p"
# 530 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Para ello, el JUEZ se basa en el número\n"
# 531 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "de veces que los ENTRENADORES\l"
# 532 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "han ordenado movimientos ofensivos.$"
# 533 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 534 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules:
# 535 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "El segundo factor que se juzga\n"
# 536 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "es la HABILIDAD.\p"
# 537 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Se trata de evaluar la eficacia de los\n"
# 538 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "movimientos usados por los POKéMON.\p"
# 539 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Si un movimiento funcionó,\n"
# 540 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "sube la nota en habilidad.\p"
# 541 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Si un movimiento no funcionó,\n"
# 542 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "baja la nota en habilidad.\p"
# 543 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "En movimientos ofensivos, la nota sube\n"
# 544 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "si resulta “muy eficaz” y baja cuando\l"
# 545 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "“no es muy eficaz”.\p"
# 546 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "La nota en habilidad no sube cuando\n"
# 547 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "se usan movimientos como PROTECCIÓN\l"
# 548 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "y DETECCIÓN.\p"
# 549 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Si el rival usa PROTECCIÓN o DETECCIÓN\n"
# 550 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "y el movimiento de tu POKéMON falla,\l"
# 551 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "la nota en habilidad no baja.$"
# 552 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 553 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules:
# 554 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "El tercer factor que se juzga\n"
# 555 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "es el CUERPO.\p"
# 556 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "La nota se basa en el número de PS\n"
# 557 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "que se conservan al final del combate.\p"
# 558 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "La nota tiene también en cuenta\n"
# 559 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "cuántos PS tenía cada POKéMON\l"
# 560 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "al comienzo del combate.$"
# 561 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 562 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon:
# 563 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "¡7 victorias sobre 7 ENTRENADORES\n"
# 564 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "venciendo a la MAESTRA del DOJO!\p"
# 565 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "¡Debemos felicitarte todos\n"
# 566 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "por semejante proeza!$"
# 567 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 568 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints:
# 569 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "En reconocimiento a ese infatigable\n"
# 570 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "espíritu tuyo, por favor, acepta un\l"
# 571 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "modesto premio en PUNTOS de BATALLA.$"
