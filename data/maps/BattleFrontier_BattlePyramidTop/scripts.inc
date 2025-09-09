# 1 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidTop_OnResume
# 4 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidTop_OnFrame
# 5 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidTop_OnTransition
# 6 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePyramidTop_OnWarp
# 7 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 9 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnTransition:
# 10 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_updatelight 200, PYRAMID_LIGHT_SET_RADIUS
# 11 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 1
# 12 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 13 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 14 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnWarp:
# 15 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects
# 16 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.2byte 0
# 17 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 18 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects::
# 19 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 21 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_TEMP_C, 0, BattleFrontier_BattlePyramidTop_EventScript_EndSetUpObjects
# 22 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setobjectxyperm LOCALID_BRANDON, 0, 0
# 23 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_EndSetUpObjects::
# 24 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 25 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 26 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnResume:
# 27 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getbrainstatus
# 28 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus
# 29 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 30 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus::
# 31 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	copyvar VAR_TEMP_C, VAR_RESULT
# 32 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getstatus
# 33 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	switch VAR_TEMP_CHALLENGE_STATUS
# 34 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case 0, BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge
# 35 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramid_EventScript_WarpToLobby
# 36 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge
# 37 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 38 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 39 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_DREW, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 40 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_FORFEITED, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 41 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 43 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnFrame:
# 44 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidTop_EventScript_PlayPyramidMusic
# 45 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidTop_EventScript_ShowMapName
# 46 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.2byte 0
# 47 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 48 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_PlayPyramidMusic::
# 49 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 50 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
# 51 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 52 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 53 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_ShowMapName::
# 54 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special ShowMapNamePopup
# 55 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 0
# 56 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 57 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 58 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge::
# 59 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_save CHALLENGE_STATUS_SAVING
# 60 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SavePlayerParty
# 61 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 62 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_settrainers
# 63 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 64 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 1
# 65 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 66 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 67 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_Attendant::
# 68 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	lock
# 69 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	faceplayer
# 70 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_TEMP_D, 0, BattleFrontier_BattlePyramidTop_EventScript_StepForwardWhenReady
# 71 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_TEMP_C, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattlePyramidTop_EventScript_BrandonHereMoveAside
# 72 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo, MSGBOX_DEFAULT
# 73 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 74 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside
# 75 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 76 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidTop_Movement_PlayerClimbToTop
# 77 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 78 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantBlockPath
# 79 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 80 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid
# 81 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 82 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 83 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 84 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 85 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon::
# 86 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 87 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
# 88 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitstate
# 89 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 90 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 91 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_StepForwardWhenReady::
# 92 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady, MSGBOX_DEFAULT
# 93 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 94 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 95 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 96 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonHereMoveAside::
# 97 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere, MSGBOX_DEFAULT
# 98 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside
# 99 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_D, 1
# 100 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 101 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 102 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 103 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon::
# 104 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	lockall
# 105 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	switch VAR_TEMP_C
# 106 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold
# 107 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech
# 108 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech
# 109 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 110 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech
# 111 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SpawnCameraObject
# 112 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_CameraPanUp
# 113 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 114 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure, MSGBOX_DEFAULT
# 115 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 116 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 117 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 118 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 119 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon, MSGBOX_DEFAULT
# 120 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver
# 121 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 122 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 123 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech::
# 124 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 125 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 126 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver::
# 127 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle, MSGBOX_DEFAULT
# 128 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle
# 129 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 130 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver
# 131 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 132 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 133 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver::
# 134 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getsymbols
# 135 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 136 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease, MSGBOX_DEFAULT
# 137 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 138 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol
# 139 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 140 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 141 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_givesymbol
# 142 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting, MSGBOX_DEFAULT
# 143 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 144 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 145 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold::
# 146 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 147 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech
# 148 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SpawnCameraObject
# 149 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_CameraPanUp
# 150 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 151 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned, MSGBOX_DEFAULT
# 152 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 153 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 154 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 155 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 156 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter, MSGBOX_DEFAULT
# 157 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold
# 158 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 159 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 160 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech::
# 161 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 162 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 163 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold::
# 164 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_EverythingYouHave, MSGBOX_DEFAULT
# 165 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle
# 166 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 167 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold
# 168 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 169 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 170 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold::
# 171 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getsymbols
# 172 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 173 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis, MSGBOX_DEFAULT
# 174 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 175 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine
# 176 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 177 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 178 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_givesymbol
# 179 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_FarewellForNow, MSGBOX_DEFAULT
# 180 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 181 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 182 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle::
# 183 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 184 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_PYRAMID
# 185 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_0x8005, 0
# 186 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special DoSpecialTrainerBattle
# 187 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitstate
# 188 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	return
# 189 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 190 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside:
# 191 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_right
# 192 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_left
# 193 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 194 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 195 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_AttendantBlockPath:
# 196 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_left
# 197 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_up
# 198 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 199 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 200 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_PlayerClimbToTop:
# 201 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 202 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 203 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 204 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 205 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 206 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_down
# 207 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 208 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 209 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer:
# 210 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_fast_down
# 211 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 212 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 213 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_CameraPanUp:
# 214 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_slow_up
# 215 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_slow_up
# 216 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	delay_16
# 217 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 218 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 219 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo:
# 220 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Qué alegría verte llegar hasta aquí!\n"
# 221 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Has conquistado la cima\l"
# 222 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "de la PIRÁMIDE BATALLA!\p"
# 223 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Arriba está el mirador de la pirámide.\p"
# 224 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Es un lugar reservado sólo a aquellos\n"
# 225 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "que han llegado a lo más alto.\p"
# 226 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Ve, pues!\n"
# 227 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Hasta lo más alto!$"
# 228 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 229 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid:
# 230 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡{PLAYER} ha conquistado la PIRÁMIDE!\n"
# 231 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Que los vientos aclamen su nombre!$"
# 232 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 233 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere:
# 234 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Qué alegría verte llegar hasta aquí!\p"
# 235 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Pero qué pena que hayas llegado\n"
# 236 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "en segundo lugar!\p"
# 237 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Nuestro jefe ha llegado a la cima\n"
# 238 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "de la PIRÁMIDE antes que tú.\p"
# 239 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Con todo…, ¡reconozco tu valentía!\p"
# 240 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡En tus manos está ahora conquistar\n"
# 241 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "la fama y arrebatársela a nuestro jefe!\p"
# 242 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Bueno, cuando te sientas con fuerzas,\n"
# 243 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡sube el último escalón hacia la gloria!$"
# 244 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 245 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure:
# 246 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Tú, que te aventuras en lo desconocido…\p"
# 247 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¿Verdad que las expediciones son las\n"
# 248 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "más grandiosas de todas las aventuras?\p"
# 249 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Tu propia inteligencia!\p"
# 250 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Tu propia fuerza!\p"
# 251 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Tus propios POKéMON!\p"
# 252 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Y, sobre todo, tu propia valentía te ha\n"
# 253 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "sabido llevar por mundos desconocidos…$"
# 254 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 255 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon:
# 256 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Ah, realmente esta vida es grandiosa!\n"
# 257 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Grandiosa, ¿no te parece? ¿Eh?\p"
# 258 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Yo soy VALENTE!\p"
# 259 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Soy el REY de la PIRÁMIDE, o sea,\n"
# 260 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "que soy el que manda aquí.\p"
# 261 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "La mayoría me llama simplemente\n"
# 262 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "“jefe”.\p"
# 263 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "El que hayas llegado hasta aquí\n"
# 264 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "significa que confías en ti, ¿verdad?\p"
# 265 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Ja, ja, ja, ja!\n"
# 266 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Esto promete!$"
# 267 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 268 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle:
# 269 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Adelante, pues!\n"
# 270 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Veamos si tienes suficiente valentía!$"
# 271 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 272 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease:
# 273 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "VALENTE: ¡Ja, ja, ja! ¡Grandioso!\n"
# 274 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Tu valentía es realmente grandiosa!\p"
# 275 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Te has ganado mi reconocimiento!\n"
# 276 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Tu PASE del FRENTE, por favor!$"
# 277 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 278 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol:
# 279 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡El SÍMBOLO de la VALENTÍA ha sido\n"
# 280 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "grabado en el PASE del FRENTE!$"
# 281 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 282 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting:
# 283 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Ya estoy deseando\n"
# 284 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "que nos volvamos a ver!$"
# 285 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 286 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned:
# 287 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "VALENTE: Por fin has vuelto…\p"
# 288 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Parece que sientes un profundo amor\n"
# 289 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "por la aventura…\p"
# 290 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Sí… Te veo, y me veo a mí\n"
# 291 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "cuando sólo era un chaval…\p"
# 292 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Ah…\p"
# 293 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡La pasión!\p"
# 294 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡El peligro!\p"
# 295 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡La impaciencia!\p"
# 296 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Aquellos días en que no temía a nada\n"
# 297 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "ni a nadie!… ¡Tú me los has devuelto!$"
# 298 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 299 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter:
# 300 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Venga, adelante!\p"
# 301 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Me siento más valiente que nunca!$"
# 302 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 303 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_EverythingYouHave:
# 304 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Lucha con todas tus fuerzas!\n"
# 305 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Estoy preparado para todo!$"
# 306 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 307 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis:
# 308 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "VALENTE: ¡Ja, ja, ja, ja! ¡Excelente!\n"
# 309 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Grandioso, realmente grandioso!\p"
# 310 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Qué espíritu aventurero!\p"
# 311 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Me has superado en todo!\n"
# 312 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Toma! ¡Te lo mereces!$"
# 313 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 314 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine:
# 315 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡El SÍMBOLO de la VALENTÍA\n"
# 316 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "ha adquirido un brillo dorado!$"
# 317 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 318 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_FarewellForNow:
# 319 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Ah, sí! ¡Esto me sirve para ver\n"
# 320 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "que aún tengo mucho que aprender!\p"
# 321 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "¡Ojalá vuelvan a cruzarse nuestros\n"
# 322 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "caminos! ¡Hasta la vista, pues!$"
# 323 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 324 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady:
# 325 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Cuando tu mente esté preparada, \n"
# 326 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "que tu cuerpo dé un paso al frente.$"
