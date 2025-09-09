# 1 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceLobby_OnFrame
# 4 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePalaceLobby_OnWarp
# 5 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 7 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_OnWarp:
# 8 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth
# 9 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.2byte 0
# 10 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 11 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth::
# 12 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 14 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 15 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 16 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_OnFrame:
# 17 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus
# 18 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving
# 19 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge
# 20 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
# 21 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge
# 22 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.2byte 0
# 23 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 24 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus::
# 25 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_getstatus
# 26 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 28 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving::
# 29 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 30 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge, MSGBOX_DEFAULT
# 31 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 32 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK, 0
# 33 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
# 34 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 35 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 36 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 37 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 38 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 39 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge::
# 40 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 41 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_isbrain
# 42 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven
# 43 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak, MSGBOX_DEFAULT
# 44 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints
# 45 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 46 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven::
# 47 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers, MSGBOX_DEFAULT
# 48 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints::
# 49 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints, MSGBOX_DEFAULT
# 50 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_givepoints
# 51 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 52 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded
# 53 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 54 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge
# 55 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 56 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 57 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 58 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 59 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 60 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 61 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge::
# 62 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 63 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded
# 64 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 65 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
# 66 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge
# 67 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 68 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 69 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 70 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 71 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 72 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 73 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge::
# 74 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_checkairshow
# 75 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 76 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special HealPlayerParty
# 77 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 78 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_save 0
# 79 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	playse SE_SAVE
# 80 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitse
# 81 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 82 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 83 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch
# 84 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 85 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 86 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 87 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 88 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch
# 89 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 90 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 91 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch::
# 92 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 93 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge::
# 94 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 95 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 96 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge::
# 97 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 98 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting, MSGBOX_DEFAULT
# 99 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge
# 100 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 101 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_save CHALLENGE_STATUS_SAVING
# 102 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	playse SE_SAVE
# 103 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitse
# 104 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 105 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 106 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge
# 107 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 108 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SinglesAttendant::
# 109 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lock
# 110 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	faceplayer
# 111 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 112 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 113 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
# 114 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 115 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 116 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_DoublesAttendant::
# 117 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lock
# 118 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	faceplayer
# 119 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 120 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 121 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
# 122 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 123 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 124 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Attendant::
# 125 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_get PALACE_DATA_PRIZE
# 126 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_ne VAR_RESULT, ITEM_NONE, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
# 127 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special SavePlayerParty
# 128 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle
# 129 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle
# 130 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge::
# 131 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge
# 132 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge
# 133 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 134 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 135 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge
# 137 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge
# 138 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 139 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 140 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 141 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge::
# 142 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_WhichChallenge
# 143 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 144 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 145 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 147 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 148 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_checkineligible
# 149 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons
# 150 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 151 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons, MSGBOX_DEFAULT
# 152 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 153 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 154 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 155 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 156 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 157 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 158 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitstate
# 159 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 160 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2, MSGBOX_YESNO
# 161 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 162 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case NO, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 163 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case YES, BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge
# 164 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 165 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 166 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge::
# 167 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 168 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 169 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_init
# 170 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, TRUE
# 171 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 172 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 173 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 174 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 175 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	delay 2
# 176 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 177 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 178 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallengeSaveFailed
# 179 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge::
# 180 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special SavePlayerParty
# 181 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 182 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FollowMe, MSGBOX_DEFAULT
# 183 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 184 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor
# 185 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR, 8, 13
# 186 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 187 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitstate
# 188 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 189 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 190 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge::
# 191 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge
# 192 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge, MSGBOX_DEFAULT
# 193 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge
# 194 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 195 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge::
# 196 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge, MSGBOX_DEFAULT
# 197 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge
# 198 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 199 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons::
# 200 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 201 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLv50
# 202 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLvOpen
# 203 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 204 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLv50::
# 205 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 206 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge
# 207 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 208 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLvOpen::
# 209 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 210 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge
# 211 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 212 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CancelChallengeSaveFailed::
# 213 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 214 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 215 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 216 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge::
# 217 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 218 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative LoadPlayerParty
# 219 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge::
# 220 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 221 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge::
# 222 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	release
# 223 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 224 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 225 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle::
# 226 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
# 227 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 228 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 229 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle::
# 230 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
# 231 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 232 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 233 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge::
# 234 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge
# 235 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 236 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 237 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge::
# 238 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge
# 239 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 240 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 241 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor::
# 242 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant
# 243 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant
# 244 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor
# 245 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor
# 246 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmovement 0
# 247 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor
# 248 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor
# 249 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitdooranim
# 250 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor
# 251 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor
# 252 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmovement 0
# 253 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor
# 254 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor
# 255 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitdooranim
# 256 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 257 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 258 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant::
# 259 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_PALACE_ATTENDANT_SINGLES
# 260 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 261 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 262 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant::
# 263 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_PALACE_ATTENDANT_DOUBLES
# 264 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 265 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 266 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor::
# 267 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	opendoor 5, 4
# 268 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 269 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 270 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor::
# 271 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	opendoor 19, 4
# 272 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 273 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 274 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor::
# 275 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closedoor 5, 4
# 276 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 277 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 278 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor::
# 279 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closedoor 19, 4
# 280 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 281 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 282 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor:
# 283 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 284 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 285 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 286 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor:
# 287 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 288 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	set_invisible
# 289 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 290 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 291 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor:
# 292 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 293 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 294 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	set_invisible
# 295 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 296 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 297 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ShowSinglesResults::
# 298 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 299 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_SINGLES
# 300 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitbuttonpress
# 301 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special RemoveRecordsWindow
# 302 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 303 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 304 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 305 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ShowDoublesResults::
# 306 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 307 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_DOUBLES
# 308 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitbuttonpress
# 309 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special RemoveRecordsWindow
# 310 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 311 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 312 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 313 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_BlackBelt::
# 314 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink, MSGBOX_NPC
# 315 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 316 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 317 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Man::
# 318 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere, MSGBOX_NPC
# 319 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 320 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 321 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Beauty::
# 322 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms, MSGBOX_NPC
# 323 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 324 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 325 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Maniac::
# 326 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway, MSGBOX_NPC
# 327 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 328 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 329 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesBoard::
# 330 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 331 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 332 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 333 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 334 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 335 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard::
# 336 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading
# 337 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 338 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 16, 0, MULTI_BATTLE_PALACE_RULES, FALSE
# 339 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 340 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics
# 341 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_RulesNature
# 342 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves
# 343 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 3, BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered
# 344 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 4, BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger
# 345 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 5, BattleFrontier_BattlePalaceLobby_EventScript_ExitRules
# 346 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_ExitRules
# 347 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 348 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 349 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics::
# 350 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics, MSGBOX_DEFAULT
# 351 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 352 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 353 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 354 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesNature::
# 355 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature, MSGBOX_DEFAULT
# 356 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 357 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 358 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 359 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves::
# 360 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves, MSGBOX_DEFAULT
# 361 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 362 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 363 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 364 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered::
# 365 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered, MSGBOX_DEFAULT
# 366 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 367 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 368 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 369 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger::
# 370 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger, MSGBOX_DEFAULT
# 371 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 372 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 373 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 374 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExitRules::
# 375 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 376 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 377 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 378 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle:
# 379 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "¡Aquí ponemos a prueba el ánimo\n"
# 380 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "y el arrojo de los ENTRENADORES!\p"
# 381 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "¡Te doy la bienvenida\n"
# 382 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "al PALACIO BATALLA!\p"
# 383 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Yo soy el guía del COMBATE\n"
# 384 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "sin TUTELA INDIVIDUAL.$"
# 385 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 386 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge:
# 387 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "¿Aceptas el desafío del COMBATE\n"
# 388 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "sin TUTELA INDIVIDUAL?$"
# 389 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 390 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge:
# 391 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "En el PALACIO BATALLA, hay varias\n"
# 392 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "salas donde se celebran COMBATES\l"
# 393 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "sin TUTELA INDIVIDUALES.\p"
# 394 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Los COMBATES sin TUTELA sólo se\n"
# 395 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "distinguen de los normales\l"
# 396 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "por una regla de obligado cumplimiento:\p"
# 397 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Los ENTRENADORES sólo pueden\n"
# 398 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "cambiar de POKéMON.\p"
# 399 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Es decir, los ENTRENADORES no pueden\n"
# 400 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "dar órdenes a sus POKéMON.\p"
# 401 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "De este modo, se deja que los POKéMON\n"
# 402 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "combatan solos, según su naturaleza.\p"
# 403 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Debes confiar en tus POKéMON\n"
# 404 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "y vigilar para que nada les pase.\p"
# 405 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Si logras derrotar consecutivamente\n"
# 406 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "a siete ENTRENADORES, obtendrás\l"
# 407 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "PUNTOS de BATALLA.\p"
# 408 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Si quieres interrumpir el desafío,\n"
# 409 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "no olvides guardar antes la partida.\p"
# 410 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Si no la guardas, se te descalificará.$"
# 411 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 412 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified:
# 413 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Vuelve cuando tu ánimo y tus POKéMON\n"
# 414 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "sean más fuertes.$"
# 415 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 416 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WhichChallenge:
# 417 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Hay dos niveles de COMBATE sin TUTELA:\n"
# 418 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "el nivel 50 y el nivel libre. ¿Cuál eliges?$"
# 419 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 420 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50:
# 421 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Lo lamento…\p"
# 422 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "No tienes tres POKéMON que puedan\n"
# 423 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "participar en este desafío.\p"
# 424 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Necesitas tres POKéMON diferentes\n"
# 425 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "de nivel 50 o inferior.\p"
# 426 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Además, deben sostener distintos\n"
# 427 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "tipos de objeto.\p"
# 428 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
# 429 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Vuelve cuando cumplas las condiciones\n"
# 430 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "para aceptar el desafío.$"
# 431 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 432 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen:
# 433 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Lo lamento…\p"
# 434 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "No tienes tres POKéMON que puedan\n"
# 435 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "participar en este desafío.\p"
# 436 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Necesitas tres POKéMON diferentes\n"
# 437 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "para poder participar.\p"
# 438 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Además, deben sostener distintos\n"
# 439 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "tipos de objeto.\p"
# 440 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
# 441 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Vuelve cuando cumplas las condiciones\n"
# 442 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "para aceptar el desafío.$"
# 443 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 444 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons:
# 445 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Selecciona los tres POKéMON\n"
# 446 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "con los que quieres combatir.$"
# 447 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 448 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2:
# 449 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Antes de participar en el COMBATE sin\n"
# 450 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "TUTELA, debes guardar la partida…$"
# 451 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 452 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FollowMe:
# 453 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Bien.\n"
# 454 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Vamos, pues.$"
# 455 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 456 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded:
# 457 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Ha sido un honor ver combatir\n"
# 458 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "a tus POKéMON.\p"
# 459 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Ahora debemos guardar los resultados.\n"
# 460 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Un segundo, por favor.$"
# 461 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 462 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak:
# 463 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Has logrado una racha de 7 victorias…\p"
# 464 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Sin duda, existe un fuerte vínculo\n"
# 465 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "entre tus POKéMON y tú.$"
# 466 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 467 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded:
# 468 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Vamos a guardar tu récord.\n"
# 469 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Espera unos instantes.$"
# 470 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 471 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
@ Unused
# 472 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_BattlePointsFor7WinStreak:
# 473 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "For the feat of your 7-win streak,\n"
# 474 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "we present you with Battle Point(s).$"
# 475 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 476 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NoSpaceForPrize:
# 477 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Lástima, parece que no tienes sitio\n"
# 478 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "para guardar nuestro premio.\p"
# 479 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "No te olvides de volver cuando\n"
# 480 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "tengas sitio en la MOCHILA.$"
# 481 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 482 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting:
# 483 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Te estábamos esperando…$"
# 484 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 485 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge:
# 486 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Antes de participar en el COMBATE sin\n"
# 487 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "TUTELA, debes guardar la partida…$"
# 488 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 489 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge:
# 490 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Lo lamento…\p"
# 491 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "No debiste de guardar la partida antes\n"
# 492 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "de abandonar el desafío…\p"
# 493 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Me temo que, por tanto, se te ha\n"
# 494 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "descalificado…$"
# 495 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 496 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
@ Unused
# 497 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReceivedPrize:
# 498 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 499 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 500 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 501 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink:
# 502 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Para los tipos robustos como yo,\n"
# 503 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "los POKéMON robustos son los mejores.\p"
# 504 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "¡La mejor defensa es un buen ataque!\n"
# 505 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "¡Y un ataque incesante es aún mejor!\p"
# 506 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pero yo no quería hablarte de esto.\p"
# 507 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "De vez en cuando pasa por aquí\n"
# 508 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "una señorita realmente hermosa.\p"
# 509 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Ella dice que puede adivinar lo\n"
# 510 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "que piensan los POKéMON.\p"
# 511 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "No sé si será verdad lo que dice,\n"
# 512 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "pero es que es guapa de verdad.\p"
# 513 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "¿Eh?\n"
# 514 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "¿Por qué me miras así?$"
# 515 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 516 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere:
# 517 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Mmm…\p"
# 518 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Parece que la clave para ganar\n"
# 519 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "combates en este sitio está\l"
# 520 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "en la naturaleza de los POKéMON\l"
# 521 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "y en los movimientos que han aprendido.\p"
# 522 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Concretamente, en lo bien que se\n"
# 523 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "corresponden los movimientos del\l"
# 524 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "POKéMON con su naturaleza.\p"
# 525 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Si un POKéMON tiene problemas y no\n"
# 526 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "rinde como se espera de él, a lo mejor\l"
# 527 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "es que los movimientos que usa no\l"
# 528 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "tienen nada que ver con su naturaleza.$"
# 529 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 530 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms:
# 531 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Mi POKéMON suele ser muy dócil.\p"
# 532 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pero, oye, cuando participa en un\n"
# 533 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "COMBATE sin TUTELA, es como si se\l"
# 534 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "transformara en una bestia salvaje.\p"
# 535 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Se vuelve muy agresivo.\n"
# 536 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Da miedo verlo.$"
# 537 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 538 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway:
# 539 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Me preguntaba qué clase de naturaleza\n"
# 540 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "tendrá un POKéMON que hace más y más\l"
# 541 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "débiles a sus rivales hasta agotarlos.\p"
# 542 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Me sorprendería que fuese\n"
# 543 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "de naturaleza FLOJA.\p"
# 544 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pero, bah, no puede ser.$"
# 545 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 546 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle:
# 547 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "¡Aquí ponemos a prueba el ánimo\n"
# 548 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "y el arrojo de los ENTRENADORES!\p"
# 549 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "¡Te doy la bienvenida\n"
# 550 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "al PALACIO BATALLA!\p"
# 551 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Yo soy el guía del COMBATE\n"
# 552 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "sin TUTELA DOBLE.$"
# 553 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 554 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge:
# 555 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "¿Aceptas el desafío del COMBATE\n"
# 556 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "sin TUTELA DOBLE?$"
# 557 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 558 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge:
# 559 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "En el PALACIO BATALLA, hay varias\n"
# 560 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "salas donde se celebran COMBATES\l"
# 561 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "sin TUTELA DOBLES.\p"
# 562 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Los COMBATES sin TUTELA sólo se\n"
# 563 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "distinguen de los normales\l"
# 564 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "por una regla de obligado cumplimiento:\p"
# 565 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Los ENTRENADORES sólo pueden\n"
# 566 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "cambiar de POKéMON.\p"
# 567 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Es decir, los ENTRENADORES no pueden\n"
# 568 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "dar órdenes a sus POKéMON.\p"
# 569 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "De este modo, se deja que los POKéMON\n"
# 570 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "combatan solos, según su naturaleza.\p"
# 571 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Debes confiar en tus POKéMON\n"
# 572 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "y vigilar para que nada les pase.\p"
# 573 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Si logras derrotar consecutivamente\n"
# 574 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "a siete ENTRENADORES, obtendrás\l"
# 575 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "PUNTOS de BATALLA.\p"
# 576 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Si quieres interrumpir el desafío,\n"
# 577 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "no olvides guardar antes la partida.\p"
# 578 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Si no la guardas, se te descalificará.$"
# 579 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 580 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers:
# 581 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Derrotado el AMO del PALACIO y, con él,\n"
# 582 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "siete ENTRENADORES consecutivos…$"
# 583 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 584 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints:
# 585 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Debemos hacer honor al vínculo\n"
# 586 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "que has forjado entre tú y tus POKéMON,\l"
# 587 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "y premiarlo con PUNTOS de BATALLA.$"
# 588 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 589 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch:
# 590 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "¿Quieres grabar tu último\n"
# 591 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "enfrentamiento del PALACIO BATALLA\l"
# 592 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "en tu PASE del FRENTE?$"
# 593 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 594 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_RulesAreListed:
# 595 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Son las reglas del COMBATE sin TUTELA.$"
# 596 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 597 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading:
# 598 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "¿Qué capítulo quieres leer?$"
# 599 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 600 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics:
# 601 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Aquí, los POKéMON deberán pensar\n"
# 602 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "y combatir por sí mismos.\p"
# 603 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "A diferencia de los POKéMON salvajes,\n"
# 604 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "los que viven con gente se comportan\l"
# 605 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "de manera distinta según su naturaleza.$"
# 606 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 607 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature:
# 608 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Según su naturaleza, un POKéMON puede\n"
# 609 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "atacar sin medir las consecuencias.\p"
# 610 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Mientras que otro preferirá protegerse\n"
# 611 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "en lugar de atacar.\p"
# 612 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Y otro puede que prefiera irritar\n"
# 613 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "o confundir a sus oponentes.\p"
# 614 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Según su naturaleza, cada POKéMON\n"
# 615 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "tendrá unos movimientos preferidos,\l"
# 616 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "que sabrá usar muy bien.\p"
# 617 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Igualmente, puede que deteste ciertos\n"
# 618 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "movimientos que le resultan difíciles.$"
# 619 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 620 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves:
# 621 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Existen movimientos ofensivos que\n"
# 622 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "infligen un daño directo al enemigo.\p"
# 623 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Hay movimientos defensivos que sirven\n"
# 624 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "para prepararse ante ataques enemigos,\l"
# 625 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "curar PS, etc.\p"
# 626 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Existen también otros movimientos\n"
# 627 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "que pueden alterar el estado del rival\l"
# 628 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "con envenenamiento, parálisis, etc.\p"
# 629 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Los POKéMON usarán movimientos\n"
# 630 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "de una de estas tres categorías.$"
# 631 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 632 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered:
# 633 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Cuando no está bajo el control de su\n"
# 634 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "ENTRENADOR, un POKéMON puede ser\l"
# 635 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "incapaz de usar ciertos movimientos.\p"
# 636 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "A los POKéMON no les gusta usar\n"
# 637 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "movimientos impropios de su naturaleza.\p"
# 638 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Si un POKéMON sólo conoce movimientos\n"
# 639 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "ajenos a su naturaleza, es probable que\l"
# 640 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "nunca llegue a demostrar su valía.$"
# 641 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 642 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger:
# 643 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Cuando un POKéMON está en peligro,\n"
# 644 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "es posible que decida usar movimientos\l"
# 645 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "que sean ajenos a su naturaleza.\p"
# 646 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Si un POKéMON comienza a comportarse\n"
# 647 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "de modo extraño en un momento de apuro,\l"
# 648 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "no lo pierdas de vista.$"
