# 1 "data/maps/TrainerHill_Entrance/scripts.pory"

# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_MapScripts::
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_OnResume
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_OnReturn
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_OnTransition
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_OnLoad
# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_OnFrame
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
	.byte 0
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"

# 10 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnTransition:
# 11 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 12 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 13 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 14 "data/maps/TrainerHill_Entrance/scripts.pory"

# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnWarp:
# 17 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 18 "data/maps/TrainerHill_Entrance/scripts.pory"

# 19 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume:
# 20 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 21 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 0
# 22 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 23 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_TryFaceAttendant  @ VAR_RESULT always FALSE here
# 24 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy LOCALID_PLAYER, 9, 6
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 27 "data/maps/TrainerHill_Entrance/scripts.pory"

# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant::
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 30 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 32 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 33 "data/maps/TrainerHill_Entrance/scripts.pory"

# 34 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant::
# 35 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 36 "data/maps/TrainerHill_Entrance/scripts.pory"

# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnReturn:
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_NURSE
# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_ATTENDANT
# 40 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_MAN
# 41 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_GIRL
# 42 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 43 "data/maps/TrainerHill_Entrance/scripts.pory"

# 44 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad:
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_OpenCounterDoor
# 46 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 47 "data/maps/TrainerHill_Entrance/scripts.pory"

# 48 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_OpenCounterDoor::
# 49 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 51 "data/maps/TrainerHill_Entrance/scripts.pory"

# 52 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnFrame:
# 53 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_EventScript_ExitChallenge
# 54 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
# 55 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
# 56 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
# 57 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte 0
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"

# 59 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator::
# 60 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 61 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 64 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 68 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 69 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"

# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge::
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallengeLost
# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallengeECard
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_EndExitChallenge
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"

# 79 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeLost::
# 80 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 81 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 82 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
# 84 "data/maps/TrainerHill_Entrance/scripts.pory"

# 85 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeECard::
# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerExitChallenge::
# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 93 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 94 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 95 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EndExitChallenge::
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"

# 100 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Nurse::
# 101 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_TRAINER_HILL_NURSE
# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 107 "data/maps/TrainerHill_Entrance/scripts.pory"

# 108 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant::
# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 112 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_ThanksForPlaying
# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"

# 116 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ThanksForPlaying::
# 117 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AttendantEnd::
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 120 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 121 "data/maps/TrainerHill_Entrance/scripts.pory"

# 122 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger::
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Closed
# 126 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 128 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveGame
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 130 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_AllFloorsUsed
# 131 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"

# 134 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AllFloorsUsed::
# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_ChooseChallenge
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_CancelEntry
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_Info
# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 145 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 146 "data/maps/TrainerHill_Entrance/scripts.pory"

# 147 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Info::
# 148 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 149 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 151 "data/maps/TrainerHill_Entrance/scripts.pory"

# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge::
# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_CancelEntry
# 156 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 161 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 165 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"

# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_CancelEntry::
# 168 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 169 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 172 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 173 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 174 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"

# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame::
# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveFailed
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"

# 185 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveFailed::
# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 187 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 188 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 189 "data/maps/TrainerHill_Entrance/scripts.pory"

# 190 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Closed::
# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 194 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 196 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 197 "data/maps/TrainerHill_Entrance/scripts.pory"

# 198 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant:
# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"

# 202 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 205 "data/maps/TrainerHill_Entrance/scripts.pory"

# 206 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"

# 211 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator:
# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 214 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 215 "data/maps/TrainerHill_Entrance/scripts.pory"

# 216 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Records::
# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitstate
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"

# 224 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man::
# 225 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 226 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"

# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"

# 233 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl::
# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"

# 238 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 241 "data/maps/TrainerHill_Entrance/scripts.pory"

# 242 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk::
# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ExpandedPokemart
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Basic
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"

# 253 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 254 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Basic:
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 256 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 257 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_AWAKENING
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemartlistend
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"

# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 273 "data/maps/TrainerHill_Entrance/scripts.pory"

# 274 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Expanded:
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAX_POTION
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_REVIVE
# 281 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 287 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemartlistend
# 289 "data/maps/TrainerHill_Entrance/scripts.pory"

# 290 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady:
# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Ésta es la COLINA DESAFÍO.\n"
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Aquí podrás enfrentarte a otros\l"
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "ENTRENADORES en una carrera\l"
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "por llegar arriba lo antes posible.\p"
# 295 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Por desgracia, aún no está preparado\n"
# 296 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "todo. Pásate por aquí en otro momento.$"
# 297 "data/maps/TrainerHill_Entrance/scripts.pory"

# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill:
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Te damos la bienvenida!\p"
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Ésta es la COLINA DESAFÍO.\n"
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Aquí podrás enfrentarte a otros\l"
# 302 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "ENTRENADORES en una carrera\l"
# 303 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "por llegar arriba lo antes posible.$"
# 304 "data/maps/TrainerHill_Entrance/scripts.pory"

# 305 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter:
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¿Es la primera vez que vienes?\p"
# 307 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Antes de entrar, debes\n"
# 308 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "guardar la partida.$"
# 309 "data/maps/TrainerHill_Entrance/scripts.pory"

# 310 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX:
# 311 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Veamos…\n"
# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Los ENTRENADORES están ahora…\p"
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hasta el nivel {STR_VAR_1}.$"
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"

# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom:
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Veamos…\n"
# 317 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Los ENTRENADORES están ahora…\p"
# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Vaya, parece que hay ENTRENADORES\n"
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "en todos los niveles!$"
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"

# 321 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers:
# 322 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¿Quieres enfrentarte a ellos?$"
# 323 "data/maps/TrainerHill_Entrance/scripts.pory"

# 324 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo:
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Cronometraré tu tiempo.\n"
# 326 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Suerte!\p"
# 327 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "A la una…\p"
# 328 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "A las dos…\p"
# 329 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Y a las tres!$"
# 330 "data/maps/TrainerHill_Entrance/scripts.pory"

# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain:
# 332 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Vuelve cuando quieras!$"
# 333 "data/maps/TrainerHill_Entrance/scripts.pory"

# 334 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort:
# 335 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Qué pena…\p"
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "La verdad es que te has esforzado\n"
# 337 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "mucho.\p"
# 338 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Bueno, otra vez será!$"
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"

# 340 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest:
# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Demuestra lo que sabes!$"
# 342 "data/maps/TrainerHill_Entrance/scripts.pory"

# 343 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch:
# 344 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Cuando los ENTRENADORES se\n"
# 345 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "cambian de sitio, organizan una…\l"
# 346 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "tremenda.\p"
# 347 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Para evitar tanto follón pusimos\n"
# 348 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "la recepción aquí.\p"
# 349 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Disculpa las molestias.$"
# 350 "data/maps/TrainerHill_Entrance/scripts.pory"

# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying:
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Gracias por participar!$"
# 353 "data/maps/TrainerHill_Entrance/scripts.pory"

# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill:
# 355 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "En la COLINA DESAFÍO, los participantes\n"
# 356 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "compiten en la llamada “contrarreloj”.\p"
# 357 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Es una carrera donde se cuenta\n"
# 358 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "el tiempo que tardas en llegar\l"
# 359 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "desde aquí hasta la azotea,\l"
# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "donde te espera el dueño del local.\p"
# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Los récords de cada categoría están\n"
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "expuestos en el PANEL de TIEMPOS.\l"
# 363 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Demuestra que no hay nadie\l"
# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "más veloz que tú!\p"
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "En los combates que libres contra\n"
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "los ENTRENADORES que te encuentres\l"
# 367 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "en el ascenso, no ganarás ni dinero\l"
# 368 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "ni puntos de EXPERIENCIA.$"
# 369 "data/maps/TrainerHill_Entrance/scripts.pory"

# 370 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 371 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon:
# 372 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I’m sorry, but you appear to have\n"
# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "only one POKéMON with you.\p"
# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You will need at least two POKéMON\n"
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "to enter this event.$"
# 376 "data/maps/TrainerHill_Entrance/scripts.pory"

# 377 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo:
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Mmm!\p"
# 379 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Por fin has llegado!\n"
# 380 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Ya estás aquí!\p"
# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Espera! ¡No me lo digas!\n"
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Ya sé por qué has subido\l"
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "corriendo hasta aquí!\p"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Querías verme a mí, al propietario\n"
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "de la COLINA DESAFÍO, porque…\p"
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Quieres luchar a mi lado!\n"
# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡¿A que sí?!\p"
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¿Mmm?\n"
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¿Cómo? ¿Que no ha sido por eso?\p"
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Bueno, da igual, he visto cómo subías.\n"
# 391 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Bien luchado! ¡Bravo! ¡Bravo!$"
# 392 "data/maps/TrainerHill_Entrance/scripts.pory"

# 393 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift:
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Para alguien tan extraordinario,\n"
# 395 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡tengo un regalo extraordinario!$"
# 396 "data/maps/TrainerHill_Entrance/scripts.pory"

# 397 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis:
# 398 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, ¡no tienes sitio para nada!\n"
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Vuelve cuando lo tengas!$"
# 400 "data/maps/TrainerHill_Entrance/scripts.pory"

# 401 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly:
# 402 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Oh, espera un momento! ¿De verdad\n"
# 403 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "has conseguido llegar aquí tan rápido?\p"
# 404 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Espléndido! ¡Pero no tenías que\n"
# 405 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "correr tanto para venir a verme!\p"
# 406 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Aunque es un detalle, claro.\n"
# 407 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Le pediré a la chica de recepción\l"
# 408 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "que actualice el PANEL de TIEMPOS!$"
# 409 "data/maps/TrainerHill_Entrance/scripts.pory"

# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick:
# 411 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Pero bueno…\n"
# 412 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "No parece que hayas corrido mucho…$"
# 413 "data/maps/TrainerHill_Entrance/scripts.pory"

# 414 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime:
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¿Sabes? Creo que me alegraría más\n"
# 416 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "si llegases más rápido la próxima vez.\p"
# 417 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Seguro que hasta me animaba\n"
# 418 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "a formar un equipo contigo!\p"
# 419 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Hasta entonces!$"
# 420 "data/maps/TrainerHill_Entrance/scripts.pory"

# 421 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 422 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner:
# 423 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the TRAINER HILL built for but\n"
# 424 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "one reason and one only!\p"
# 425 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To find the most suitable partner\n"
# 426 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "with whom I may form a tag team!$"
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"

# 428 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime:
# 429 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1} min {STR_VAR_2},{STR_VAR_3} s$"
# 430 "data/maps/TrainerHill_Entrance/scripts.pory"

# 431 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead:
# 432 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "No sé qué clase de ENTRENADORES\n"
# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "y de POKéMON esperan ahí arriba.\p"
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Lo que sí sé es que no dejaré que\n"
# 435 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "nadie se interponga en mi camino!$"
# 436 "data/maps/TrainerHill_Entrance/scripts.pory"

# 437 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters:
# 438 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "He oído que a esta COLINA DESAFÍO\n"
# 439 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "vienen ENTRENADORES de todas partes.\p"
# 440 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Estoy deseando probar!\p"
# 441 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Voy a quitar de en medio a todos\n"
# 442 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "los que se me pongan por delante!$"
# 443 "data/maps/TrainerHill_Entrance/scripts.pory"

# 444 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop:
# 445 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¿Has visto el PANEL de TIEMPOS de ahí?\p"
# 446 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Mis amigos y yo estamos a ver quién\n"
# 447 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "consigue llegar arriba en menos tiempo.$"
# 448 "data/maps/TrainerHill_Entrance/scripts.pory"

# 449 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen:
# 450 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¿Tienes idea de cuándo\n"
# 451 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "van a abrir este sitio?\p"
# 452 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¡Quiero ser la primera de todos\n"
# 453 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "en competir aquí!$"
# 454 "data/maps/TrainerHill_Entrance/scripts.pory"

# 455 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception:
# 456 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "¿Quieres volver a la recepción?$"
