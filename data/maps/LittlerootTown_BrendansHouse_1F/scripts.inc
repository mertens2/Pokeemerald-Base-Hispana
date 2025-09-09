# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: ¿Ves, {PLAYER}?\n"
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿A que esto es muy bonito?$"
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Los POKéMON del servicio de mudanzas\n"
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "hacen todo el trabajo duro y además\l"
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "recogen lo que ensucian. ¡Es perfecto!\p"
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, tu cuarto está arriba.\n"
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Ve a verlo, cariño!\p"
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PAPÁ te ha comprado un nuevo\n"
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "reloj para que recuerdes este día.\l"
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "No olvides ponerlo en hora.$"
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: ¿Y bien, {PLAYER}?\n"
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿No quieres ver tu cuarto?$"
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: {PLAYER}, cielo…\p"
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Pon en hora el reloj de tu cuarto.$"
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: ¡{PLAYER}, {PLAYER}!\n"
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Ven! ¡Ven rápido!$"
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: ¡Mira! ¡El GIMNASIO de PETALIA!\n"
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡A ver si sale tu padre!$"
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: Pues no… Qué lástima…\p"
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Creo que estaba hace nada y se\n"
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "acaba de ir. Mala suerte.$"
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ah, sí, una cosa.\n"
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Uno de los amigos de tu padre vive aquí.\p"
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Se llama PROF. ABEDUL.\p"
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Vive aquí al lado. Creo que deberías\n"
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "ir a verlo y presentarte, cariño.$"
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: ¡Hasta luego, cielo!$"
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: ¿Has ido a presentarte\n"
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "al PROF. ABEDUL?$"
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: ¿Cómo estás, {PLAYER}?\n"
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "No pareces muy en forma.\p"
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Creo que deberías descansar un poco.$"
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: ¡Cuídate, cielo!$"
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: ¡Mira por dónde! ¿Tu padre\n"
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "te ha dado esa MEDALLA?\p"
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Pues yo también quiero darte algo!$"
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "No te esfuerces demasiado, cielo.\n"
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Tienes que saber cuándo hay que parar.\p"
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Buena suerte y ven a verme\n"
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "de vez en cuando!$"
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: ¿Qué es eso, cariño? ¿Un POKéNAV?\n"
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿Te lo dio alguien de DEVON?\p"
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Entonces, cielo, tendrás que apuntarme\n"
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "en él, ¿no?\p"
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mmm…$"
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Acabas de registrar a MAMÁ\n"
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "en el POKéNAV.$"
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Vigoró, vigoró!$"
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Goro, goro-goro…$"
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "ENTREVISTADOR: Y, desde el GIMNASIO\n"
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "de PETALIA, nos despedimos de todos.$"
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hay una peli en la tele.\p"
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dos hombres están bailando sobre\n"
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "el teclado de un piano de cola.\p"
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Bueno, mejor dejo de ver la tele.$"
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Son las instrucciones de las \n"
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DEPORTIVAS.\p"
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Pulsa el Botón B cuando lleves las\n"
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DEPORTIVAS para salir pitando.\p"
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ponte las DEPORTIVAS y empieza\n"
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "a correr por todas partes.”$"
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PAPÁ: ¿Eh?\p"
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Pero si es mi {PLAYER}!\p"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hace un siglo que no te veo…\n"
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Si pareces mucho más fuerte!\p"
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ésa es la impresión que das, ¡pero\n"
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "tu padre aún puede dar guerra!\p"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ah, sí, tengo algo para ti.\n"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Te lo envía un tal SR. ARENQUE.$"
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PAPÁ: ¿Un TICKET para el ferry?\p"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Si recuerdo bien, los puertos donde\n"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "atraca son CIUDAD PORTUAL y CALAGUA.$"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mejor vuelvo al GIMNASIO de PETALIA.\p"
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Cariño, gracias por ocuparte\n"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "de la casa mientras yo estoy fuera.$"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: Este padre tuyo…\p"
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Cuando por fin viene un poco a casa,\n"
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "sólo se le ocurre hablar de POKéMON.\p"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Debería relajarse un poco y quedarse\n"
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "más tiempo aquí tranquilito…$"
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: ¿Un especial informativo?$"
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Interrumpimos la programación para\n"
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "traerles las últimas noticias!\p"
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hay noticias confusas sobre supuestos\n"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "avistamientos de un POKéMON azzzrt…\l"
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "volando en distintos puntos de HOENN.\p"
# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Actualmente se desconoce la identidad\n"
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "del POKéMON.\p"
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Y ahora les dejamos con la programación\n"
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "habitual.$"
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: {PLAYER}, ¿has oído eso?\p"
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿De qué color ha dicho el de\n"
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "la tele que era ese POKéMON?$"
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MAMÁ: ¡Ver para creer!\n"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Aún hay POKéMON desconocidos!$"
