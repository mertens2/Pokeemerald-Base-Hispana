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
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 2, 4
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 5
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 1, 8
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	namebox Marta
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_RIVAL
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call EventScript_YoureNewNeighbor_Translated
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	hidenamebox
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	namebox Marta
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	hidenamebox
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	hidenamebox
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	hidenamebox
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	hidenamebox
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer:
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs::
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit:
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs:
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Es INCREÍBLE que la gente viaje\n"
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "con Pokémon, pero JAMÁS deberían\l"
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "olvidarse de sus familias, {PLAYER}.\l"
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Tu padre y mi esposo lo hicieron cuando\l"
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "salieron de viaje, y ahora APENAS\l"
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "pueden concentrarse en sus esposas e\l"
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "hijos…\p"
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Pero bueno…$"

RivalsHouse_1F_Text_LikeChildLikeFather::
# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My husband's… UGH…\n"
	.string "He's likely out, studying\l"
	.string "some other big stupid thing…\p"
	.string "What a guy, huh…?$"

RivalsHouse_1F_Text_TooBusyToNoticeVisit::
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ah, my {RIVAL}, they must be in their\n"
	.string "room.$"

RivalsHouse_1F_Text_WentOutToRoute103::
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ah, my {RIVAL}, they're at Route\n"
	.string "103.\p"
	.string "They worry me, {PLAYER}, last time\n"
	.string "they stayed investigating till they\l"
	.string "passed out.$"

RivalsHouse_1F_Text_DoYouHavePokemon::
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I no shpeek english!$"
