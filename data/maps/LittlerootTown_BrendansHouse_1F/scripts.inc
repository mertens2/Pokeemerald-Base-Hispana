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
	return
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 10, 10
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setspeaker Mama
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 12, 2
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_RIVAL
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call EventScript_YoureNewNeighbor_Translated
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer::
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer:
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs::
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit:
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs:
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "……………………………………………$"
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡El amigo de la infancia de Papá vive\n"
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "acá!\p"
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Es un Profesor Pokémon, y me dijo\n"
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "que te preguntara...\p"
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿Cuál es tu Región favorita?$"
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Hasta luego amor!$"
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿Ya fuiste?$"
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡WOW! ¡Es la medalla de tu Papá!\p"
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Pues ahora tu señora madre te dará\n"
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "algo también!$"
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Por favor, cuídate mucho, amor.$"
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿Qué es eso, amor? ¿Un Pokénav?\p"
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Entonces agrégame ahí, así te llamo\n"
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "cada vez que te extraño!$"
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Añadiste a Mamá con muy pocas ganas…$"
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡VIIIIIGORR!$"
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh… Oth… VIGOROTH!$"
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hay una película en la tele.\p"
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Un Zigzagoon y un Tailow Azul\n"
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "están peleando en el espacio…\p"
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … … … Mejor me voy…$"
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"
