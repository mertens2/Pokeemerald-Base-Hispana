# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 2, 4
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 5
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 1, 8
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 2, 3
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_RIVAL
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call EventScript_YoureNewNeighbor_Translated
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_down
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_left
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_fast_down
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer:
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs::
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit:
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs:
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Es INCREÍBLE que la gente viaje\n"
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "con Pokémon, pero JAMÁS deberían\l"
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "olvidarse de sus familias, {PLAYER}.\l"
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Tu padre y mi esposo lo hicieron cuando\l"
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "salieron de viaje, y ahora APENAS\l"
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "pueden concentrarse en sus esposas e\l"
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "hijos…\p"
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Pero bueno…$"

RivalsHouse_1F_Text_LikeChildLikeFather::
# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Mi esposo debe… UGH…\n"
	.string "Debe estar en el campo\l"
	.string "estudiando alguna estupidez…\p"
	.string "Que gran tipo, ¿no…?$"

RivalsHouse_1F_Text_TooBusyToNoticeVisit::
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ah, mi {RIVAL}, debe estar en su\n"
	.string "cuarto.$"

RivalsHouse_1F_Text_WentOutToRoute103::
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ah, mi {RIVAL}, creo que está\n"
	.string "en la Ruta 103 estudiando Pokémon,\l"
	.string "así que deberías buscarle,\l"
	.string "{PLAYER}.\l"
	.string "La última vez, se quedó investigando\l"
	.string "hasta que se desmayó.$"

RivalsHouse_1F_Text_DoYouHavePokemon::
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡Hoda, veshin{OA}!\p"
	.string "¿Ya tienesh Pokémon?$"
