RusturfTunnel_MapScripts::
# 8 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RUSTURF_TUNNEL_STATE, 2
	goto_if_eq RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm 7, 13, 4
# 11 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm 6, 13, 5
	return

RusturfTunnel_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 16 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
	.2byte 0


RusturfTunnel_EventScript_Wanda::
# 23 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 24 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 25 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_Wanda_Text_0
# 26 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 27 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 28 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 29 "data/maps/RusturfTunnel/scripts.pory"
	release
	end


RusturfTunnel_EventScript_WandasBoyfriend::
# 34 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 35 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 36 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_WandasBoyfriend_Text_0
# 37 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 38 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 39 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 40 "data/maps/RusturfTunnel/scripts.pory"
	release
	end


RusturfTunnel_EventScript_ClearTunnelScene::
# 45 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 46 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_TEMP_1
# 47 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_ClearTunnelScene_3
# 49 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_ClearTunnelScene_4
# 51 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_ClearTunnelScene_5
RusturfTunnel_EventScript_ClearTunnelScene_1:
# 54 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 55 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Riley
# 56 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_ClearTunnelScene_Text_0
# 58 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_TEMP_1
# 59 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_ClearTunnelScene_8
# 60 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_ClearTunnelScene_8
RusturfTunnel_EventScript_ClearTunnelScene_6:
# 65 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_AGGRONITE
# 66 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM04
# 67 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Riley
# 68 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_ClearTunnelScene_Text_1
# 69 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 71 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_TEMP_1
# 72 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_ClearTunnelScene_11
# 74 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_ClearTunnelScene_12
# 76 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_ClearTunnelScene_13
RusturfTunnel_EventScript_ClearTunnelScene_9:
# 79 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Riley
# 80 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_ClearTunnelScene_Text_2
# 82 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Wanda
# 83 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_ClearTunnelScene_Text_3
# 85 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Riley
# 86 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_ClearTunnelScene_Text_4
# 88 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Wanda
# 89 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_ClearTunnelScene_Text_5
# 91 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_TEMP_1
# 92 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_ClearTunnelScene_16
# 94 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_ClearTunnelScene_17
# 95 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_ClearTunnelScene_17
RusturfTunnel_EventScript_ClearTunnelScene_14:
# 98 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 99 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end

RusturfTunnel_EventScript_ClearTunnelScene_3:
# 48 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_FaceWandasBoyfriend1
	goto RusturfTunnel_EventScript_ClearTunnelScene_1

RusturfTunnel_EventScript_ClearTunnelScene_4:
# 50 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_FaceWandasBoyfriend2
	goto RusturfTunnel_EventScript_ClearTunnelScene_1

RusturfTunnel_EventScript_ClearTunnelScene_5:
# 52 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_FaceWandasBoyfriend3
	goto RusturfTunnel_EventScript_ClearTunnelScene_1

RusturfTunnel_EventScript_ClearTunnelScene_8:
# 61 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 62 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 1, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 63 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	goto RusturfTunnel_EventScript_ClearTunnelScene_6

RusturfTunnel_EventScript_ClearTunnelScene_11:
# 73 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_BoyfriendApproachWanda1
	goto RusturfTunnel_EventScript_ClearTunnelScene_9

RusturfTunnel_EventScript_ClearTunnelScene_12:
# 75 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_BoyfriendApproachWanda2
	goto RusturfTunnel_EventScript_ClearTunnelScene_9

RusturfTunnel_EventScript_ClearTunnelScene_13:
# 77 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_BoyfriendApproachWanda3
	goto RusturfTunnel_EventScript_ClearTunnelScene_9

RusturfTunnel_EventScript_ClearTunnelScene_16:
# 93 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandaAndBoyfriendExit1
	goto RusturfTunnel_EventScript_ClearTunnelScene_14

RusturfTunnel_EventScript_ClearTunnelScene_17:
# 96 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandaAndBoyfriendExit
	goto RusturfTunnel_EventScript_ClearTunnelScene_14


RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 104 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 105 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 1, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 106 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	return


RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 111 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 112 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 1, RusturfTunnel_Movement_BoyfriendApproachWanda
# 113 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 114 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterDown
# 115 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	return


RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 120 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 121 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 1, RusturfTunnel_Movement_BoyfriendApproachWanda
# 122 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 123 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceFasterDown
# 124 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	return


RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 129 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 130 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 131 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 132 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	return


RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 137 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 1, RusturfTunnel_Movement_BoyfriendFaceRight
# 138 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	return


RusturfTunnel_EventScript_FaceWandasBoyfriend3::
	return


RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 147 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 148 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 1, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 149 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	return


RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 154 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 10, RusturfTunnel_Movement_WandaExit1
# 155 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 1, RusturfTunnel_Movement_WandasBoyfriendExit1
# 156 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 157 "data/maps/RusturfTunnel/scripts.pory"
	removeobject 10
# 158 "data/maps/RusturfTunnel/scripts.pory"
	removeobject 1
# 159 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_EXIT
	return


RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 164 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 165 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 10, RusturfTunnel_Movement_WandaExit
# 166 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 1, RusturfTunnel_Movement_WandasBoyfriendExit
# 167 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 168 "data/maps/RusturfTunnel/scripts.pory"
	removeobject 10
# 169 "data/maps/RusturfTunnel/scripts.pory"
	removeobject 1
# 170 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 171 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 172 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_EXIT
	return


RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 177 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 178 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 179 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 180 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 181 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	return


# 185 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 186 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 186 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 186 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 186 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 187 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 187 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 187 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 187 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 187 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 187 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 187 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 190 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 191 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 191 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 191 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 191 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 195 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 196 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 197 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 198 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 198 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 199 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
	step_end

# 202 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 203 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 204 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
	step_end

# 207 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 208 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 209 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
	step_end

# 212 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 213 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 214 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
	step_end

# 217 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 218 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 218 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 218 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 218 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 218 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 219 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 219 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 219 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 219 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 219 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 219 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 219 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 222 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 223 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 224 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 224 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 224 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 224 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 228 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 229 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
	step_end

# 232 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 233 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 233 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 234 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 235 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
	step_end

# 238 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 239 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 239 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 240 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 241 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
	step_end

RusturfTunnel_EventScript_TunnelBlockagePos1::
# 245 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


RusturfTunnel_EventScript_TunnelBlockagePos2::
# 250 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
	end


RusturfTunnel_EventScript_TunnelBlockagePos3::
# 255 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
	end


RusturfTunnel_EventScript_Peeko::
# 260 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 261 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 262 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 263 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 264 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_Peeko_Text_0
# 265 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 266 "data/maps/RusturfTunnel/scripts.pory"
	release
	end


RusturfTunnel_EventScript_GruntEscape::
# 271 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 272 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 6, RusturfTunnel_Movement_GruntEscape
# 273 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 274 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Unknown
# 277 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_GruntEscape_Text_0
# 278 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 279 "data/maps/RusturfTunnel/scripts.pory"
	addobject 5
# 281 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Aqua
# 282 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_GruntEscape_Text_1
# 294 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 295 "data/maps/RusturfTunnel/scripts.pory"
	delay 32
# 296 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerPursue
# 297 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 298 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 299 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Aqua
# 302 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_GruntEscape_Text_2
# 308 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat2
# 309 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_EVIL_TEAM_SIDE, 2
	goto_if_gt RusturfTunnel_EventScript_GruntEscape_2
RusturfTunnel_EventScript_GruntEscape_1:
# 330 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Aqua
# 333 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_GruntEscape_Text_5
# 344 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS, 1
# 345 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 346 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 347 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 348 "data/maps/RusturfTunnel/scripts.pory"
	delay 16
# 349 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Aqua
# 352 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_GruntEscape_Text_6
# 354 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 355 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 356 "data/maps/RusturfTunnel/scripts.pory"
	delay 16
# 357 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Aqua
# 358 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_GruntEscape_Text_7
# 360 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 361 "data/maps/RusturfTunnel/scripts.pory"
	delay 16
# 362 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 5, RusturfTunnel_Movement_BrineyMove
# 363 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 364 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 6, RusturfTunnel_Movement_GruntRegrets
# 365 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 366 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Aqua
# 367 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_GruntEscape_Text_8
# 389 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 390 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 6, RusturfTunnel_Movement_GruntExit
# 391 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 392 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 393 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_EXIT
# 394 "data/maps/RusturfTunnel/scripts.pory"
	removeobject 6
# 395 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 396 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 7, RusturfTunnel_Movement_ApproachPeeko1
# 397 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 398 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 399 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 400 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 401 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 402 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 403 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 404 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 405 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 406 "data/maps/RusturfTunnel/scripts.pory"
	delay 8
# 407 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Briney
# 408 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_GruntEscape_Text_9
# 410 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 5, RusturfTunnel_Movement_BrineyApproachPeeko1
# 411 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 412 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Briney
# 415 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_GruntEscape_Text_10
# 417 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 5, Common_Movement_FacePlayer
# 418 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 419 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Briney
# 420 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_GruntEscape_Text_11
# 431 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 433 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 434 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 435 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 436 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 437 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 5, RusturfTunnel_Movement_BrineyExit
# 438 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 7, RusturfTunnel_Movement_PeekoExit
# 439 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 440 "data/maps/RusturfTunnel/scripts.pory"
	removeobject 7
# 441 "data/maps/RusturfTunnel/scripts.pory"
	removeobject 5
# 442 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_EXIT
# 443 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 444 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 445 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 446 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 447 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
	return

RusturfTunnel_EventScript_GruntEscape_2:
# 310 "data/maps/RusturfTunnel/scripts.pory"
	savepartofteam
# 311 "data/maps/RusturfTunnel/scripts.pory"
	special LoadPlayerParty
# 312 "data/maps/RusturfTunnel/scripts.pory"
	loadpartofteam
# 313 "data/maps/RusturfTunnel/scripts.pory"
	special GiveBackItemsAndBerries
# 314 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_STARTED_BOSS
# 315 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Aqua
# 318 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_GruntEscape_Text_3
# 320 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_EventScript_GruntEscape_Text_4
	goto RusturfTunnel_EventScript_GruntEscape_1


RusturfTunnel_EventScript_Grunt::
# 452 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 453 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 454 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 455 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_EVIL_TEAM_SIDE, 3
	goto_if_lt RusturfTunnel_EventScript_Grunt_2
RusturfTunnel_EventScript_Grunt_1:
# 502 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 503 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Aqua
# 506 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_Grunt_Text_5
# 513 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 514 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 515 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 516 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 517 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 518 "data/maps/RusturfTunnel/scripts.pory"
	special HealPlayerParty
# 519 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_STARTED_BOSS
# 520 "data/maps/RusturfTunnel/scripts.pory"
	special TakeAwayItemsAndBerries
# 521 "data/maps/RusturfTunnel/scripts.pory"
	special SavePlayerParty
# 522 "data/maps/RusturfTunnel/scripts.pory"
	deletepokemon 1
# 525 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_EventScript_Grunt_Text_6
# 531 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 532 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 533 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 6, RusturfTunnel_Movement_GruntNervous
# 534 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 535 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_HELP, FALSE
# 536 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Aqua
# 539 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_Grunt_Text_7
# 546 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 547 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_GruntEscape
# 548 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end

RusturfTunnel_EventScript_Grunt_2:
# 456 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Aqua
# 459 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_Grunt_Text_0
# 461 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_Grunt_Text_1
# 462 "data/maps/RusturfTunnel/scripts.pory"
	dynmultichoice 25, 5, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RusturfTunnel_EventScript_Grunt_Text_2, RusturfTunnel_EventScript_Grunt_Text_3
# 472 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RusturfTunnel_EventScript_Grunt_4
# 498 "data/maps/RusturfTunnel/scripts.pory"
	addvar VAR_EVIL_TEAM_SIDE, 1
	goto RusturfTunnel_EventScript_Grunt_1

RusturfTunnel_EventScript_Grunt_4:
# 473 "data/maps/RusturfTunnel/scripts.pory"
	subvar VAR_EVIL_TEAM_SIDE, 1
# 474 "data/maps/RusturfTunnel/scripts.pory"
	setspeaker Aqua
# 477 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_Grunt_Text_4
# 485 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 486 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 487 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 488 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 489 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 490 "data/maps/RusturfTunnel/scripts.pory"
	applymovement 6, RusturfTunnel_Movement_GruntNervous
# 491 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 492 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_HELP, FALSE
# 493 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_GruntEscape
# 494 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end


# 563 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_ApproachPeeko1:
# 564 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 564 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 564 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 564 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 564 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 564 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 564 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 564 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 564 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 565 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 565 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 568 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntExit:
# 569 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 570 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 573 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntNervous:
# 574 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 575 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 576 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_left
# 577 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 578 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 579 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 580 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_left
# 581 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 582 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 583 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 584 "data/maps/RusturfTunnel/scripts.pory"
	jump_in_place_left
# 585 "data/maps/RusturfTunnel/scripts.pory"
	jump_in_place_left
	step_end

# 588 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 589 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 590 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 591 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 592 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 593 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
	step_end

# 596 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 597 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 598 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_down
	step_end

# 601 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 602 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 602 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 602 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 602 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 602 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 602 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 602 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 602 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 602 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 603 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_down
# 603 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_down
# 603 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_down
# 603 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_down
	step_end

# 605 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerPursue:
# 606 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_down
# 607 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 607 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 607 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 607 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 607 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 607 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 607 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 607 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 608 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_down
# 608 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_down
# 608 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_down
	step_end

# 611 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyMove:
# 612 "data/maps/RusturfTunnel/scripts.pory"
	face_right
# 613 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 614 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 615 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
	step_end

# 617 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntRegrets:
# 618 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 619 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 620 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 621 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_left
	step_end

# 624 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 625 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 625 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 625 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 626 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 627 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
	step_end

# 630 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 631 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 631 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 631 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 632 "data/maps/RusturfTunnel/scripts.pory"
	set_invisible
	step_end

# 635 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 636 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 636 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 636 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 636 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 637 "data/maps/RusturfTunnel/scripts.pory"
	set_invisible
	step_end

RusturfTunnel_EventScript_Mike::
# 641 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 642 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_Mike_Text_0
	end


RusturfTunnel_EventScript_Wanda_Text_0:
# 25 "data/maps/RusturfTunnel/scripts.pory"
	.string "Mi novio estaba cavando este túnel por\n"
	.string "su cuenta, pero hubo un derrumbe que\l"
	.string "lastimó sus manos y no puede seguir\l"
	.string "cavando.$"

RusturfTunnel_EventScript_WandasBoyfriend_Text_0:
# 36 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡ARGH! {PAUSE 2}¡ROAR!\p"
	.string "¡Ese lindo hombre me detuvo cuando\n"
	.string "estaba tan cerca………!\p"
	.string "Y ahora, un derrumbe me lastimó las\n"
	.string "manos.\p"
	.string "Quiero llegar con mi novia para hablarle\n"
	.string "de él.$"

RusturfTunnel_EventScript_ClearTunnelScene_Text_0:
# 56 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡ROAR!\n"
	.string "E-eh, quiero decir, {PAUSE 2}¡wow!\p"
	.string "¡Destruíste esa roca que bloqueaba el\n"
	.string "camino! {PAUSE 2}¡Ni mis enormes músculos de\l"
	.string "constructor podían destruírla!\p"
	.string "Como agradecimiento de crear un atajo\n"
	.string "para ver a mi novia, ten esto.$"

RusturfTunnel_EventScript_ClearTunnelScene_Text_1:
# 68 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Es una Aggronita!\p"
	.string "Esa es una megapiedra que puede hacer\n"
	.string "{COLOR BLUE}megaevolucionar a un Aggron{COLOR DARK_GRAY}.\p"
	.string "¡Gracias a tí podré hablar y ver a mi\n"
	.string "novia cuando quiera!\p"
	.string "¡Ah, también te di la MO de Fuerza!$"

RusturfTunnel_EventScript_ClearTunnelScene_Text_2:
# 80 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Amor! {PAUSE 2}¡Hola!\n"
	.string "Nnn… {PAUSE 2}¡ROOOAARR! {PAUSE 2}¡Estoy tan feliz!$"

RusturfTunnel_EventScript_ClearTunnelScene_Text_3:
# 83 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Oh, Riley, amor mío!\n"
	.string "Al fin nos vemos otra vez.$"

RusturfTunnel_EventScript_ClearTunnelScene_Text_4:
# 86 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Amorcito!\n"
	.string "La cosa más maravillosa ha pasado, no\l"
	.string "lo creerás.\p"
	.string "¡Alguien más ha reconocido el esfuerzo\n"
	.string "que hice para mantener estos músculos!$"

RusturfTunnel_EventScript_ClearTunnelScene_Text_5:
# 89 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Qué cosa tan maravillosa, mi amor!\p"
	.string "¡Podemos hablar más de esa persona en\n"
	.string "mi casa!\p"
	.string "Me gustaría conocer gente nueva que\n"
	.string "reconozca el trabajo duro.$"

RusturfTunnel_EventScript_Peeko_Text_0:
# 264 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pii pihyoh...$"

RusturfTunnel_EventScript_GruntEscape_Text_0:
# 277 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡No te preocupes, yo lo detengo aquí!$"

RusturfTunnel_EventScript_GruntEscape_Text_1:
# 282 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡N-NO!\n"
	.string "¡ROAR!$"

RusturfTunnel_EventScript_GruntEscape_Text_2:
# 302 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡A-ARGH!\p"
	.string "¡B-Bueno, si tanto quieren sus Partes,\n"
	.string "derrótame!$"

RusturfTunnel_EventScript_GruntEscape_Text_3:
# 318 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡N-NO!\n"
	.string "¡No puede ser!\l"
	.string "¡ARGH! {PAUSE 2}¡Aquí tienes denuevo tus\l"
	.string "inútiles Pokémon!$"

RusturfTunnel_EventScript_GruntEscape_Text_4:
# 320 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Te han devuelto la mochila!$"

RusturfTunnel_EventScript_GruntEscape_Text_5:
# 333 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡A-ARGH! {PAUSE 2}¡ROAR! {PAUSE 2}¡NOO!\p"
	.string "¡Tch, aquí tienen las partes!\n"
	.string "... ... ... Ya voy fallando dos misiones\l"
	.string "en un día.\p"
	.string "Y eso que ninguna debía recurrir a la\n"
	.string "violencia de este modo.$"

RusturfTunnel_EventScript_GruntEscape_Text_6:
# 352 "data/maps/RusturfTunnel/scripts.pory"
	.string "………\p"
	.string "Esta………\n"
	.string "No fue una experiencia que quiera que\l"
	.string "se repita.$"

RusturfTunnel_EventScript_GruntEscape_Text_7:
# 358 "data/maps/RusturfTunnel/scripts.pory"
	.string "………\p"
	.string "Esto que hice………\n"
	.string "Me uní a este Equipo para evitar ser\l"
	.string "un ladrón, y aún así...$"

RusturfTunnel_EventScript_GruntEscape_Text_8:
# 367 "data/maps/RusturfTunnel/scripts.pory"
	.string "………\p"
	.string "Yo………\n"
	.string "Lo lamento, señor.\p"
	.string "No. Lo que hice no tiene perdón.\p"
	.string "………\p"
	.string "Debería disculparme con el hombre que\n"
	.string "asusté antes, y decirle…$"

RusturfTunnel_EventScript_GruntEscape_Text_9:
# 408 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wing Wingull...$"

RusturfTunnel_EventScript_GruntEscape_Text_10:
# 415 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Oh, Peeko!\n"
	.string "¡Te extrañé tanto, mi chiquito!$"

RusturfTunnel_EventScript_GruntEscape_Text_11:
# 420 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Muchísimas gracias!\n"
	.string "Peeko, vamos a casa.$"

RusturfTunnel_EventScript_Grunt_Text_0:
# 459 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Argh, esto no lo pensé bien!\p"
	.string "¡Eres tú!\n"
	.string "Antes estabas por dejarme llevar los\l"
	.string "planos, luego me derrotaste, ¿Y ahora\l"
	.string "qué? ¿Vas a burlarte de que terminé\l"
	.string "en esta situación?$"

RusturfTunnel_EventScript_Grunt_Text_1:
# 461 "data/maps/RusturfTunnel/scripts.pory"
	.string "¿Qué harás?$"

RusturfTunnel_EventScript_Grunt_Text_2:
# 462 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ver qué pasa$"

RusturfTunnel_EventScript_Grunt_Text_3:
# 462 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Atacarlo!$"

RusturfTunnel_EventScript_Grunt_Text_4:
# 477 "data/maps/RusturfTunnel/scripts.pory"
	.string "No comprendo.\p"
	.string "El {COLOR BLUE}Jefecito{COLOR DARK_GRAY} me dijo que sería tarea\n"
	.string "fácil, {PAUSE 2}¡Pero no lo es!\p"
	.string "¡ARGH! {PAUSE 2}¡ROAR!\p"
	.string "¡Me voy, esto es demasiado!$"

RusturfTunnel_EventScript_Grunt_Text_5:
# 506 "data/maps/RusturfTunnel/scripts.pory"
	.string "No comprendo.\p"
	.string "El {COLOR BLUE}Jefecito{COLOR DARK_GRAY} me dijo que sería tarea\n"
	.string "fácil, {PAUSE 2}¡Pero no lo es!\p"
	.string "¡ARGH! {PAUSE 2}¡ROAR!\p"
	.string "¡Tendré que hacer esto con trucos\n"
	.string "sucios!$"

RusturfTunnel_EventScript_Grunt_Text_6:
# 525 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Te han robado la mochila!\n"
	.string "¡Ahora sólo podrás usar el Pokémon\l"
	.string "que tenías a mano!$"

RusturfTunnel_EventScript_Grunt_Text_7:
# 539 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡NO IMPORTA NADA, YO ME VOY!$"

RusturfTunnel_EventScript_Mike_Text_0:
# 642 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Esta cueva es muy pequeña!$"

RusturfTunnel_Text_GruntDefeat2::
# 552 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡ARGH! {PAUSE 2}¡ROAR!\p"
	.string "¡DÉJAME GANARTE!$"

RusturfTunnel_Text_GruntDefeat::
# 647 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡ARGH! {PAUSE 2}¡ROAR!$"

RusturfTunnel_Text_MikeIntro::
# 660 "data/maps/RusturfTunnel/scripts.pory"
	.string "Si un hombre que está en las montañas\n"
	.string "se llama montañero, {PAUSE 2}¿Porqué los\l"
	.string "Pokémon de montañas no se llaman\l"
	.string "montañokes?$"

RusturfTunnel_Text_MikeDefeat::
# 671 "data/maps/RusturfTunnel/scripts.pory"
	.string "Mis montañokes...$"
