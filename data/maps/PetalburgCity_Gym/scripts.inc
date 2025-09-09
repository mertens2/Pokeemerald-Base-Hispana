# 1 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"

# 9 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 13 "data/maps/PetalburgCity_Gym/scripts.pory"

# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 18 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"

# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"

# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"

# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_WALLY, 5, 108
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"

# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"

# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"

# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"

# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"

# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"

# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"

# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"

# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"

# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"

# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"

# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"

# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"

# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"

# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLY
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"

# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"

# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"

# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"

# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"

# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"

# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"

# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"

# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"

# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"

# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"

# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"

# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"

# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"

# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"

# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"

# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_FacePlayer
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"

# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_WalkInPlaceFasterDown
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"

# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"

# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"

# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"

# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"

# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"

# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"

# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"

# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"

# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"

# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"

# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"

# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"

# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"

# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"

# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"

# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"

# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"

# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"

# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_ExclamationMark
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_Delay48
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"

# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"

# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"

# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"

# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"

# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"

# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"

# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"

# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"

# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"

# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"

# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"

# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"

# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"

# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"

# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"

# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"

# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"

# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"

# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"

# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"

# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"

# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"

# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"

# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"

# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"

# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"

# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"

# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"

# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"

# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"

# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"

# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"

# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"

# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"

# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"

# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"

# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"

# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"

# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"

# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"

# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"

# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"

# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"

# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"

# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"

# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"

# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"

# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"

# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"

# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"

# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"

# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"

# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"

# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"

# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"

# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"

# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"

# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"

# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"

# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"

# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"

# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"

# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"

# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"

# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"

# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"

# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: ¿Eh?\p"
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Anda, si es mi {PLAYER}!\n"
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Ya habéis terminado\l"
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "con la mudanza?\p"
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Me sorprende que hayas\n"
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "llegado aquí sin guía.\p"
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, claro, estás con un buen\n"
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON…\p"
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Entonces quieres entrenar POKéMON\n"
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "como yo, ¿no, {PLAYER}?\p"
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Maravilloso!\n"
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡También es mi mayor deseo!$"
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Eh… Yo… quisiera conseguir\n"
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "un POKéMON, por favor…$"
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: ¿Cómo? Ah, sí…\n"
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Tú eres BLASCO, ¿no?$"
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "BLASCO: Me voy a quedar con mis\n"
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "parientes en PUEBLO VERDEGAL.\p"
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pensé que me sentiría solo allí, así\n"
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "que quiero llevarme un POKéMON.\p"
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pero nunca he conseguido atrapar\n"
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "uno, no sé cómo se hace…$"
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: Ya…$"
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: {PLAYER}, lo has oído,\n"
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿verdad?\p"
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ve con BLASCO y asegúrate\n"
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de que atrapa un POKéMON.$"
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ven, BLASCO, te presto mi POKéMON.\p"
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡BLASCO recibió un ZIGZAGOON!$"
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "BLASCO: ¡Halaaaa!\n"
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Un POKéMON!\p"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: También te voy a dar\n"
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "una POKé BALL. ¡Adelante!\p"
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡BLASCO recibió una POKé BALL!$"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "BLASCO: ¡Guau!\n"
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Gracias!$"
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\n"
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿De verdad que vas a venir conmigo?$"
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: ¿Qué tal os fue?$"
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "BLASCO: Gracias, muy bien.\n"
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Aquí tienes tu POKéMON.\p"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, gracias por acompañarme.\p"
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gracias a vosotros dos he\n"
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "logrado atrapar un POKéMON.\p"
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Prometo cuidarlo muy bien.\p"
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Huy! Mi madre me está esperando,\n"
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "así que me tengo que ir.\p"
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Adiós, {PLAYER}!$"
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: Muy bien…\p"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, si quieres figurar entre\n"
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "los mejores ENTRENADORES,\l"
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "tendrás que hacer lo siguiente…\p"
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ve a CIUDAD FÉRRICA y desafía\n"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a la LÍDER de GIMNASIO, PETRA.\p"
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Después, ve a otros GIMNASIOS\n"
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON y derrota a sus LÍDERES.\p"
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Guarda las MEDALLAS que te den\n"
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "todos ellos, ¿entendido?\p"
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Como yo también soy un LÍDER \n"
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de GIMNASIO, nos enfrentaremos\l"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "algún día, {PLAYER}.\p"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pero eso sólo será cuando seas\n"
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "más fuerte, claro…$"
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: ¿Y eso?\n"
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿No vas a ir al GIMNASIO POKéMON\l"
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de CIUDAD FÉRRICA?\p"
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Desafiar a un ENTRENADOR novato\n"
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "no tiene ninguna emoción.\p"
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, si quieres desafiarme, primero\n"
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "tendrás que ser mucho más fuerte.\p"
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Lucharé contigo cuando hayas ganado\n"
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "cuatro MEDALLAS, ¿vale?$"
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: Ya veo… Has vencido a la LÍDER\n"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "del GIMNASIO de CIUDAD FÉRRICA.\p"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pero quedan muchos ENTRENADORES\n"
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "que son más fuertes que tú, {PLAYER}.\p"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Más allá del mar está PUEBLO AZULIZA.\n"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "El LÍDER del GIMNASIO que hay allí\l"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "se llama MARCIAL.\p"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Deberías lanzarle un desafío.$"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: Mmm… {PLAYER}, te has vuelto\n"
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bastante más fuerte.\p"
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Se ve por el número de MEDALLAS\n"
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "que has conseguido.$"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: Mmm… Así que has conseguido\n"
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "hacerte con las cuatro MEDALLAS.\p"
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Estupendo. Como te prometí,\n"
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "tendremos un combate POKéMON.\p"
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Estoy tan orgulloso de poder\n"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "enfrentarme a ti…\p"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Pero un combate es un combate!\p"
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Haré todo lo que pueda como\n"
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LÍDER de GIMNASIO para ganar.\p"
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, ¡será mejor que tú\n"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "también des lo mejor de ti!$"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hala…\p"
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Increíble…\p"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No puedo creérmelo…\p"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He perdido contra la sangre\n"
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de mi sangre… {PLAYER}…\p"
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pero las reglas son las reglas.\n"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Aquí tienes.$"
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡{PLAYER} recibió la MEDALLA\n"
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "EQUILIBRIO de PAPÁ!$"
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: Con esta MEDALLA, la DEFENSA\n"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de tus POKéMON aumentará.\p"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Los POKéMON que conozcan\n"
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "el movimiento de MO SURF podrán\l"
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "usarlo para desplazarse por el agua.\p"
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Éste es mi regalo para ti, {PLAYER}.\n"
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sé que harás buen uso de él.$"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: La MT42 contiene IMAGEN.\p"
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Duplica la potencia de los\n"
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "movimientos si el POKéMON está\l"
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "envenenado, paralizado o quemado.\p"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Puede sacar ventaja de una\n"
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "situación poco favorable.$"
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: Como LÍDER de GIMNASIO,\n"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "me entristece perder…\p"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pero, como padre, estoy orgulloso\n"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "y algo triste de ver que ya te has\l"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "hecho mayor. Es extraño…$"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Anda, si estás aquí, {PLAYER}{KUN}!\p"
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ven conmigo un segundo.\n"
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Tengo algo para ti.$"
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN, discúlpanos un momento.\p"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Déjame a {PLAYER}{KUN} un rato.\n"
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Un momento, ¿eh?$"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: {PLAYER}, no olvides visitar\n"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a tu madre de vez en cuando.\p"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Yo voy a quedarme aquí\n"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "para entrenar a conciencia.\p"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Como ENTRENADOR, necesito\n"
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "tomarme mi revancha, {PLAYER}!$"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: {PLAYER}, ¿qué tal te está\n"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "yendo?\p"
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "El mundo de los POKéMON\n"
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "es complejo.\p"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Por mucho que te entrenes,\n"
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "nunca terminas de conocerlo…$"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Camino del CAMPEONATO?\p"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Las puertas de este GIMNASIO\n"
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "se abren cuando derrotas a los\l"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ENTRENADORES del camino.\p"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Oye, oye! ¡Estas puertas están\n"
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "abiertas! ¡No me ataques!\p"
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Los ENTRENADORES del GIMNASIO\n"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de PETALIA usan toda clase\l"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de objetos.\p"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "La puerta de la izquierda conduce\n"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a la SALA de VELOCIDAD.\p"
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "La puerta de la derecha lleva\n"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a la SALA de PRECISIÓN.\p"
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "El nombre de la sala está marcado\n"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "en la puerta. Elige con cuidado.\p"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Cuando te hayas decidido\n"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "por una, ¡ve a por todas!$"
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡{PLAYER}! ¡Impresionante!\n"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Has vencido a tu propio padre!\p"
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Me has dejado con la boca abierta!\n"
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Es un momento emocionante!$"
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "La capacidad de atacar antes\n"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "que tu oponente…\p"
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sólo eso constituye una gran\n"
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ventaja, ¿no crees?$"
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Ha sido un gran combate!$"
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ve a la siguiente sala, donde\n"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "te aguarda un nuevo desafío.\p"
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A la izquierda está la SALA\n"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de CONFUSIÓN.\p"
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A la derecha se encuentra\n"
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "la SALA de DEFENSA.$"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Venzas a quien venzas, y te derrote\n"
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "quien te derrote, nunca dejes de\l"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "entrenarte y entrenar tus POKéMON.\p"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Más o menos en eso consiste\n"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ser un LÍDER de GIMNASIO.$"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ésta es la SALA de CONFUSIÓN.\p"
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Vamos a comprobar lo bien que\n"
# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "te llevas con tus POKéMON!$"
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No hay quien confunda a tu equipo…\n"
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Se nota que estáis unidos a tope.$"
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "La siguiente sala es la SALA\n"
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de FUERZA. ¿Resistirás un combate\l"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a la máxima potencia?$"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Desde que derrotaste a nuestro\n"
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LÍDER, el entrenamiento se ha\l"
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "vuelto mucho más duro.$"
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Justo cuando piensas que vas\n"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a ganar, tu rival restaura PS…\p"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Tienes idea de lo mal que\n"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sienta una cosa así?\p"
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Pues ahora mismo lo vas\n"
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a comprobar!$"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No conseguí restaurar\n"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "suficientes PS…\p"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vaya potencia de ATAQUE…$"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No debería haber esperado\n"
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "menos de alguien como tú.\p"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Un momento… Tener un padre\n"
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ENTRENADOR no basta.\l"
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡También hay que esforzarse!\p"
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Y yo he perdido porque no me\n"
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "he esforzado lo suficiente…\p"
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Adelante! Ahora viene la\n"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "SALA de K.O. INSTANTÁNEO.$"
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Voy a seguir entrenándome mucho\n"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "hasta convertirme en un LÍDER\l"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de GIMNASIO.$"
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No voy a ponértelo fácil porque\n"
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "tu padre sea nuestro LÍDER.\p"
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Te voy a enseñar lo mal que\n"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sienta recibir un golpe crítico.$"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Qué fuerza…\n"
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Eres el no va más.$"
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Tu padre es muy fuerte.\n"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Es un ENTRENADOR muy respetado.\p"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Y tengo la impresión de que\n"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "llegarás tan lejos como él.\p"
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Espero que ambos entabléis\n"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "un gran combate!$"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Desde que tu padre es el LÍDER,\n"
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "los ENTRENADORES de CIUDAD\l"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALIA son mucho más fuertes.$"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ji, ji, ji…\n"
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ésta es la SALA de PRECISIÓN.\p"
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A nuestros rivales no les sienta\n"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "muy bien que todos los ataques\l"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "den en el blanco.$"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Eres muy superior a mí…$"
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hay ENTRENADORES aún\n"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "más fuertes esperándote.\p"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A la izquierda, está la SALA\n"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de DEFENSA y, a la derecha,\l"
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "la SALA de RECUPERACIÓN.\p"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Cualquiera de las dos pondrá\n"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a prueba el poder de ATAQUE\l"
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de tus POKéMON.$"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Sabes lo que los ENTRENADORES\n"
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "queremos conseguir?\p"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Convertirnos en las almas\n"
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "gemelas de nuestros POKéMON!$"
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Cuanto más alta es la DEFENSA,\n"
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "más implacable es mi ataque.$"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nuestras defensas no han sido\n"
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "suficientes…$"
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Creo que me has enseñado\n"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "una valiosa lección.\p"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Sigue adelante! La puerta de la\n"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "izquierda lleva a la SALA de FUERZA.\p"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "La puerta de la derecha lleva\n"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a la SALA de K.O. INSTANTÁNEO.\p"
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Los ENTRENADORES de ambas\n"
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "salas poseen habilidades ofensivas.$"
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Hola! ¿Has probado a hacer SURF?$"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "El LÍDER de nuestro GIMNASIO\n"
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "nos ha dicho que debemos vencerte.\p"
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Da igual que sea tu padre!$"
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pero si… ¡me has vencido!$"
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Usas los POKéMON igualito\n"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "que tu padre.\p"
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Venga! Tu padre, el LÍDER\n"
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "del GIMNASIO, te espera.$"
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sin duda es importante\n"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "fortalecer tus POKéMON.\p"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pero ¿qué distingue al vencedor?\p"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Está claro: los sentimientos que\n"
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "alberga hacia sus POKéMON.$"
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Parece que esta puerta está cerrada…$"
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "En el cartel pone: “SALA\n"
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de VELOCIDAD”.\p"
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Quieres entrar?$"
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "En el cartel pone: “SALA\n"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de PRECISIÓN”.\p"
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Quieres entrar?$"
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "En el cartel pone: “SALA\n"
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de CONFUSIÓN”.\p"
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Quieres entrar?$"
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "En el cartel pone: “SALA\n"
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de DEFENSA”.\p"
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Quieres entrar?$"
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "En el cartel pone: “SALA\n"
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de RECUPERACIÓN”.\p"
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Quieres entrar?$"
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "En el cartel pone: “SALA\n"
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de FUERZA”.\p"
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Quieres entrar?$"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "En el cartel pone: “SALA\n"
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de K.O. INSTANTÁNEO”.\p"
# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Quieres entrar?$"
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SALA del LÍDER del GIMNASIO”\p"
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "El cartel dice: “Comprueba por ti\n"
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "mismo qué POKéMON te espera”.\p"
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Quieres entrar?$"
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD PETALIA$"
# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD PETALIA\p"
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: {PLAYER}…\n"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ya sabía yo que ibas a venir.\p"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Yo siempre estoy dispuesto\n"
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a aceptar un desafío.\p"
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sabes qué quiero decir, ¿verdad?\p"
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "En un GIMNASIO, los lazos familiares\n"
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "que te puedan unir no importan.\p"
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Es más, precisamente porque soy tu\n"
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "padre, debemos luchar dando lo mejor\l"
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "de nosotros, ¿no crees, {PLAYER}?$"
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Eh… Ja, ja, ja… Está claro que\n"
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "no te has andado con chiquitas…$"
# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: {PLAYER}…\n"
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dime, ¿cuál es tu sueño?\p"
# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pues el mío…\n"
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ja, ja, ja…\l"
# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¡Justamente acaba de hacerse realidad!$"
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAPÁ: {PLAYER}…\n"
# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ya sabía yo que ibas a venir.\p"
# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Yo siempre estoy dispuesto\n"
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a aceptar un desafío.\p"
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sabes qué quiero decir, ¿verdad?\p"
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "En un GIMNASIO, los lazos familiares\n"
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "que te puedan unir no importan.\p"
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Cómo? Un momento, {PLAYER}.\p"
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "¿Sólo tienes un POKéMON\n"
# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "en condiciones de luchar?\p"
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Lo siento mucho, pero necesitas\n"
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "al menos dos POKéMON.$"
