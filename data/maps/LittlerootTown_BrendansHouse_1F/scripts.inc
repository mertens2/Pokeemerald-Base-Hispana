# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	namebox Mama
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	hidenamebox
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	namebox Marta
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_RIVAL
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call EventScript_YoureNewNeighbor_Translated
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer::
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer:
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs::
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit:
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs:
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "……………………………………………$"
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡El amigo de la infancia de Papá vive\n"
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "acá!\p"
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Es un Profesor Pokémon, y me dijo\n"
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "que te preguntara...\p"
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿Cuál es tu Región favorita?$"
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Hasta luego amor!$"
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿Ya fuiste?$"
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡WOW! ¡Es la medalla de tu Papá!\p"
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Pues ahora tu señora madre te dará\n"
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "algo también!$"
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Por favor, cuídate mucho, amor.$"
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿Qué es eso, amor? ¿Un Pokénav?\p"
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Entonces agrégame ahí, así te llamo\n"
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "cada vez que te extraño!$"
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Añadiste a Mamá con muy pocas ganas…$"
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡VIIIIIGORR!$"
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh… Oth… VIGOROTH!$"
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hay una película en la tele.\p"
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Un Zigzagoon y un Tailow Azul\n"
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "están peleando en el espacio…\p"
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … … … Mejor me voy…$"
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"
