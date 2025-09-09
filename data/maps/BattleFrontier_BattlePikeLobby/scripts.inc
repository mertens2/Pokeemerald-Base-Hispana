# 1 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeLobby_OnFrame
# 4 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeLobby_OnWarp
# 5 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 7 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_OnFrame:
# 8 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePikeLobby_EventScript_GetChallengeStatus
# 9 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving
# 10 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePikeLobby_EventScript_WonChallenge
# 11 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePikeLobby_EventScript_LostChallenge
# 12 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 14 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_OnWarp:
# 15 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePikeLobby_EventScript_TurnPlayerNorth
# 16 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.2byte 0
# 17 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 18 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TurnPlayerNorth::
# 19 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 21 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 22 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 23 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_GetChallengeStatus::
# 24 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_getstatus
# 25 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 26 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 27 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving::
# 28 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 29 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 30 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 31 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting, MSGBOX_DEFAULT
# 32 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 33 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK, 0
# 34 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
# 35 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 36 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 37 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 38 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 39 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 40 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_WonChallenge::
# 41 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 42 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_isbrain
# 43 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePikeLobby_EventScript_DefeatedQueen
# 44 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance, MSGBOX_DEFAULT
# 45 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 46 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_GiveBattlePoints
# 47 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 48 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_DefeatedQueen::
# 49 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen, MSGBOX_DEFAULT
# 50 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 51 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_GiveBattlePoints::
# 52 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints, MSGBOX_DEFAULT
# 53 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_givepoints
# 54 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 55 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkairshow
# 56 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_get PIKE_DATA_TOTAL_STREAKS
# 57 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	addvar VAR_RESULT, 1
# 58 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_TOTAL_STREAKS, VAR_RESULT
# 59 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 60 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 61 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 62 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 63 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ShallRecordResults
# 64 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 65 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_save 0
# 66 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_SAVE
# 67 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 68 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 69 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 70 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 71 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 72 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 73 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 74 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_LostChallenge::
# 75 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 76 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults
# 77 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 78 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkairshow
# 79 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, 0
# 80 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
# 81 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 82 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 83 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 84 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 85 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_save 0
# 86 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_SAVE
# 87 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 88 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 89 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 90 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 91 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 92 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 93 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 94 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Attendant::
# 95 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lock
# 96 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	faceplayer
# 97 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PIKE
# 98 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 99 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special SavePlayerParty
# 100 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike, MSGBOX_DEFAULT
# 101 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge::
# 102 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_TakeChallenge
# 103 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 104 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 105 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 0, BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge
# 107 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 1, BattleFrontier_BattlePikeLobby_EventScript_ExplainChallenge
# 108 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 2, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 109 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 110 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 111 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge::
# 112 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode
# 113 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 114 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 115 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 117 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 118 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkineligible
# 119 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons
# 120 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 121 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons, MSGBOX_DEFAULT
# 122 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 123 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 124 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 125 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 126 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 127 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 128 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
# 129 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 130 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 131 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 132 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case NO, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 133 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case YES, BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge
# 134 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 135 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 136 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge::
# 137 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 138 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_1, 0
# 139 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 140 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_init
# 141 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 142 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, TRUE
# 143 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_savehelditems
# 144 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 145 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 146 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 147 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	delay 2
# 148 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 149 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 150 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_savehelditems
# 151 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePikeLobby_EventScript_CancelChallengeSaveFailed
# 152 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special SavePlayerParty
# 153 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 154 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 155 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 156 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_settrainers
# 157 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_BattlePikeLobby_EventScript_WalkToCorridor
# 158 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 159 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_BattlePike_EventScript_CloseCurtain
# 160 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_CORRIDOR, 6, 7
# 161 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 162 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
# 163 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 164 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 165 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ExplainChallenge::
# 166 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike, MSGBOX_DEFAULT
# 167 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge
# 168 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 169 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons::
# 170 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 171 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLv50
# 172 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLvOpen
# 173 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 174 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLv50::
# 175 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 176 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge
# 177 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 178 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLvOpen::
# 179 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 180 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge
# 181 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 182 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_CancelChallengeSaveFailed::
# 183 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 184 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 185 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 186 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge::
# 187 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 188 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 189 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge::
# 190 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 191 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge::
# 192 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	release
# 193 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 194 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 195 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ShowResults::
# 196 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 197 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PIKE
# 198 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitbuttonpress
# 199 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special RemoveRecordsWindow
# 200 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 201 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 202 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 203 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_WalkToCorridor::
# 204 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	applymovement LOCALID_PIKE_LOBBY_ATTENDANT, BattleFrontier_BattlePikeLobby_Movement_AttendantWalkToCorridor
# 205 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeLobby_Movement_PlayerWalkToCorridor
# 206 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmovement 0
# 207 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 208 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 209 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Movement_PlayerWalkToCorridor:
# 210 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 211 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Movement_AttendantWalkToCorridor:
# 212 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 213 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 214 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	set_invisible
# 215 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	step_end
# 216 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 217 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Hiker::
# 218 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal, MSGBOX_NPC
# 219 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 220 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 221 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Twin::
# 222 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer, MSGBOX_NPC
# 223 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 224 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 225 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Beauty::
# 226 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere, MSGBOX_NPC
# 227 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 228 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 229 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesBoard::
# 230 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 231 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 232 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 233 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 234 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 235 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard::
# 236 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading
# 237 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 238 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 16, 4, MULTI_BATTLE_PIKE_RULES, FALSE
# 239 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 240 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 0, BattleFrontier_BattlePikeLobby_EventScript_RulesPokenavBag
# 241 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 1, BattleFrontier_BattlePikeLobby_EventScript_RulesHeldItems
# 242 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 2, BattleFrontier_BattlePikeLobby_EventScript_RulesMonOrder
# 243 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 3, BattleFrontier_BattlePikeLobby_EventScript_ExitRules
# 244 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_ExitRules
# 245 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 246 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 247 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesPokenavBag::
# 248 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules, MSGBOX_DEFAULT
# 249 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 250 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 251 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 252 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesHeldItems::
# 253 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules, MSGBOX_DEFAULT
# 254 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 255 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 256 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 257 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesMonOrder::
# 258 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules, MSGBOX_DEFAULT
# 259 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 260 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 261 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 262 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ExitRules::
# 263 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 264 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 265 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 266 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePike_EventScript_CloseCurtain::
# 267 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_PIKE_CURTAIN_CLOSE
# 268 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special CloseBattlePikeCurtain
# 269 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
# 270 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 271 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 272 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 273 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike:
# 274 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "¡Aquí ponemos a prueba la suerte\n"
# 275 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "de los ENTRENADORES!\p"
# 276 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "¡Te doy la bienvenida\n"
# 277 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "a la SIERPE BATALLA!\p"
# 278 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Yo seré tu primera guía si aceptas\n"
# 279 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "el desafío de la ELECCIÓN de COMBATES.$"
# 280 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 281 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_TakeChallenge:
# 282 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Dime, pues, ¿aceptas el desafío\n"
# 283 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "de la ELECCIÓN de COMBATES?$"
# 284 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike:
# 286 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Si aceptas entrar aquí, te enfrentarás\n"
# 287 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "a la llamada ELECCIÓN de COMBATES.\p"
# 288 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Las reglas de la ELECCIÓN de COMBATES\n"
# 289 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "son muy simples…\p"
# 290 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Elige uno de los tres caminos y llega\n"
# 291 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "a la última sala de la SIERPE BATALLA.\l"
# 292 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Así de sencillo.\p"
# 293 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Pero recuerda: lo que te encuentres\n"
# 294 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "en el camino que elijas, dependerá\l"
# 295 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "únicamente de tu fortuna…\p"
# 296 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Si alcanzas la meta, recibirás como\n"
# 297 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "recompensa PUNTOS de BATALLA.\p"
# 298 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Si quieres interrumpir el desafío, habla\n"
# 299 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "con cualquiera de mis compañeras\l"
# 300 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "que están en las salas grandes.\p"
# 301 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Si no guardas antes de salirte\n"
# 302 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "del juego, se te descalificará.$"
# 303 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 304 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou:
# 305 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Esperamos que vuelvas\n"
# 306 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "pronto por aquí.$"
# 307 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 308 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode:
# 309 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "El desafío se disputa en dos niveles:\n"
# 310 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "el nivel 50 y el nivel libre. ¿Cuál eliges?$"
# 311 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 312 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50:
# 313 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Una lástima…\p"
# 314 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "No tienes tres POKéMON que puedan\n"
# 315 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "participar en la ELECCIÓN de COMBATES.\p"
# 316 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Necesitas tres POKéMON diferentes\n"
# 317 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "de nivel 50 o inferior.\p"
# 318 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Además, deben sostener distintos\n"
# 319 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "tipos de objeto.\p"
# 320 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
# 321 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Vuelve cuando cumplas las condiciones\n"
# 322 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "para aceptar el desafío.$"
# 323 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 324 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen:
# 325 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Una lástima…\p"
# 326 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "No tienes tres POKéMON que puedan\n"
# 327 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "participar en la ELECCIÓN de COMBATES.\p"
# 328 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Necesitas tres POKéMON diferentes\n"
# 329 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "para poder participar.\p"
# 330 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Además, deben sostener distintos\n"
# 331 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "tipos de objeto.\p"
# 332 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Los HUEVOS{STR_VAR_1} participar.\p"
# 333 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Vuelve cuando cumplas las condiciones\n"
# 334 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "para aceptar el desafío.$"
# 335 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 336 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons:
# 337 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Selecciona los tres POKéMON con los\n"
# 338 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "que quieres combatir.$"
# 339 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 340 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge:
# 341 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Antes de comenzar tu ELECCIÓN de\n"
# 342 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "COMBATES, debo guardar la partida.\l"
# 343 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "¿Estás de acuerdo?$"
# 344 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 345 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_StepThisWay:
# 346 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Pasa por aquí.$"
# 347 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 348 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults:
# 349 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "El desafío ha terminado…\p"
# 350 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Voy a guardar tus resultados.\n"
# 351 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Espera unos instantes.$"
# 352 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 353 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance:
# 354 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Has logrado finalizar el desafío…\p"
# 355 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Debo reconocer… que has tenido\n"
# 356 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "mucha fortuna…$"
# 357 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 358 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ShallRecordResults:
# 359 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Vamos a guardar tus resultados.\n"
# 360 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Espera unos instantes.$"
# 361 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 362 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
@ Unused
# 363 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints2:
# 364 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "To commemorate your completion of\n"
# 365 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "the Battle Choice challenge, we award\l"
# 366 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "you these Battle Point(s)…$"
# 367 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 368 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
@ Unused
# 369 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ReachedBattlePointLimit:
# 370 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You appear to have reached the limit\n"
# 371 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "for Battle Points…\p"
# 372 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please exchange some Battle Points\n"
# 373 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "for prizes, then return…$"
# 374 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 375 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting:
# 376 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Una lástima…\p"
# 377 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Se te olvidó guardar la partida antes\n"
# 378 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "de abandonar el desafío…\p"
# 379 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Me temo que se te ha descalificado…$"
# 380 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 381 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen:
# 382 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Enhorabuena…\p"
# 383 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Has conseguido derrotar a la REINA\n"
# 384 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "de la SIERPE y superar la gran prueba…$"
# 385 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 386 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints:
# 387 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Premiaremos tu increíble fortuna\n"
# 388 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "con PUNTOS de BATALLA…$"
# 389 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 390 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal:
# 391 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "¡Grrr! ¡La he pifiado!\n"
# 392 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "¡Y sólo me quedaba una sala!\p"
# 393 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "En este lugar hay que tener cuidado\n"
# 394 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "con venenos, paralizantes y demás.$"
# 395 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 396 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer:
# 397 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Aunque no te lo creas, he terminado\n"
# 398 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "el desafío 10 veces sin tener que\l"
# 399 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "enfrentarme nunca a un ENTRENADOR.$"
# 400 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 401 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere:
# 402 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "¡Oye! ¡Oye!\p"
# 403 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "¿No crees que aquí podrías sacarles\n"
# 404 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "mucho partido a las habilidades\l"
# 405 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "especiales de los POKéMON?$"
# 406 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 407 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
@ Unused
# 408 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_TrainersWhicheverPathIChoose:
# 409 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "What is this weird place?\n"
# 410 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I can’t figure it out at all!\p"
# 411 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I’ve taken the challenge a bunch\n"
# 412 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "of times, but all I ever do is run into\l"
# 413 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "TRAINERS whichever path I choose.$"
# 414 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 415 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_RulesAreListed:
# 416 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Aquí están expuestas las reglas\n"
# 417 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "de la ELECCIÓN de COMBATES.$"
# 418 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 419 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading:
# 420 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "¿Qué capítulo quieres leer?$"
# 421 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 422 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules:
# 423 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "La MOCHILA y el POKéNAV no pueden\n"
# 424 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "usarse en la ELECCIÓN de COMBATES.$"
# 425 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 426 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules:
# 427 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Durante la ELECCIÓN de COMBATES,\n"
# 428 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "las BAYAS o HIERBAS que sostengan los\l"
# 429 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "POKéMON sólo tendrán efecto una vez.$"
# 430 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 431 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules:
# 432 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Durante la ELECCIÓN de COMBATES,\n"
# 433 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "el orden de salida de tus POKéMON\l"
# 434 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "no puede cambiarse.\p"
# 435 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "El orden debe fijarse antes de comenzar\n"
# 436 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "el desafío.$"
