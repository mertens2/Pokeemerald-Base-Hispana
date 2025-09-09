# 1 "data/maps/RusturfTunnel/scripts.pory"

# 2 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 3 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 4 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 5 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 6 "data/maps/RusturfTunnel/scripts.pory"

# 7 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 8 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 9 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 10 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 11 "data/maps/RusturfTunnel/scripts.pory"

# 12 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 13 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 14 "data/maps/RusturfTunnel/scripts.pory"
	end
# 15 "data/maps/RusturfTunnel/scripts.pory"

# 16 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 17 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_PEEKO, 13, 4
# 18 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_GRUNT, 13, 5
# 19 "data/maps/RusturfTunnel/scripts.pory"
	return
# 20 "data/maps/RusturfTunnel/scripts.pory"

# 21 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 22 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 23 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 24 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 25 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 26 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 27 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 28 "data/maps/RusturfTunnel/scripts.pory"
	release
# 29 "data/maps/RusturfTunnel/scripts.pory"
	end
# 30 "data/maps/RusturfTunnel/scripts.pory"

# 31 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 32 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 33 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 34 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 35 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 36 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 37 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 38 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 39 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 40 "data/maps/RusturfTunnel/scripts.pory"
	release
# 41 "data/maps/RusturfTunnel/scripts.pory"
	end
# 42 "data/maps/RusturfTunnel/scripts.pory"

# 43 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 44 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 45 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 46 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 47 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 48 "data/maps/RusturfTunnel/scripts.pory"
	release
# 49 "data/maps/RusturfTunnel/scripts.pory"
	end
# 50 "data/maps/RusturfTunnel/scripts.pory"

# 51 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 52 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 53 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 54 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 55 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 56 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 57 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 58 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 59 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 60 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 61 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 62 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 63 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 64 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 65 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 66 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 67 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 68 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 69 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 70 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 71 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 72 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 73 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 74 "data/maps/RusturfTunnel/scripts.pory"
	end
# 75 "data/maps/RusturfTunnel/scripts.pory"

# 76 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 77 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 78 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 79 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 80 "data/maps/RusturfTunnel/scripts.pory"
	return
# 81 "data/maps/RusturfTunnel/scripts.pory"

# 82 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 83 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 84 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 85 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 86 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 87 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 88 "data/maps/RusturfTunnel/scripts.pory"
	return
# 89 "data/maps/RusturfTunnel/scripts.pory"

# 90 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 91 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 92 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 93 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 94 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 95 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 96 "data/maps/RusturfTunnel/scripts.pory"
	return
# 97 "data/maps/RusturfTunnel/scripts.pory"

# 98 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 99 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 100 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 101 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 102 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 103 "data/maps/RusturfTunnel/scripts.pory"
	return
# 104 "data/maps/RusturfTunnel/scripts.pory"

# 105 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 106 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 107 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 108 "data/maps/RusturfTunnel/scripts.pory"
	return
# 109 "data/maps/RusturfTunnel/scripts.pory"

# 110 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 111 "data/maps/RusturfTunnel/scripts.pory"
	return
# 112 "data/maps/RusturfTunnel/scripts.pory"

# 113 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 114 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 115 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 116 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 117 "data/maps/RusturfTunnel/scripts.pory"
	return
# 118 "data/maps/RusturfTunnel/scripts.pory"

# 119 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 120 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit1
# 121 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 122 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 123 "data/maps/RusturfTunnel/scripts.pory"
	return
# 124 "data/maps/RusturfTunnel/scripts.pory"

# 125 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 126 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 127 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit
# 128 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 129 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 130 "data/maps/RusturfTunnel/scripts.pory"
	return
# 131 "data/maps/RusturfTunnel/scripts.pory"

# 132 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 133 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 134 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_ExclamationMark
# 135 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 136 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_Delay48
# 137 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 138 "data/maps/RusturfTunnel/scripts.pory"
	return
# 139 "data/maps/RusturfTunnel/scripts.pory"

# 140 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 141 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 142 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 143 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 144 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 145 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 146 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 147 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 148 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 149 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 150 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 151 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 152 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 153 "data/maps/RusturfTunnel/scripts.pory"

# 154 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 155 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 156 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 157 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 158 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 159 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 160 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 162 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 163 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 164 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 165 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 166 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 167 "data/maps/RusturfTunnel/scripts.pory"

# 168 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 169 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 170 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 171 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 172 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 173 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 174 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 175 "data/maps/RusturfTunnel/scripts.pory"

# 176 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 179 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 180 "data/maps/RusturfTunnel/scripts.pory"

# 181 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 182 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 183 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 184 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 185 "data/maps/RusturfTunnel/scripts.pory"

# 186 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 187 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 188 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 189 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 190 "data/maps/RusturfTunnel/scripts.pory"

# 191 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 193 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 194 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 195 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 196 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 197 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 198 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 199 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 201 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 202 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 203 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 204 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 205 "data/maps/RusturfTunnel/scripts.pory"

# 206 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 207 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 208 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 209 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 210 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 211 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 212 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 213 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 214 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 215 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 216 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 217 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 218 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 219 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 220 "data/maps/RusturfTunnel/scripts.pory"

# 221 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 222 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 223 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 224 "data/maps/RusturfTunnel/scripts.pory"

# 225 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 226 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 227 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 228 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 229 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 230 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 231 "data/maps/RusturfTunnel/scripts.pory"

# 232 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 233 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 234 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 235 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 236 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 237 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 238 "data/maps/RusturfTunnel/scripts.pory"

# 239 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 240 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 241 "data/maps/RusturfTunnel/scripts.pory"
	end
# 242 "data/maps/RusturfTunnel/scripts.pory"

# 243 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 244 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 245 "data/maps/RusturfTunnel/scripts.pory"
	end
# 246 "data/maps/RusturfTunnel/scripts.pory"

# 247 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 248 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 249 "data/maps/RusturfTunnel/scripts.pory"
	end
# 250 "data/maps/RusturfTunnel/scripts.pory"

# 251 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 252 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 253 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 254 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 255 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 256 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 257 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 258 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 259 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_GRUNT
# 260 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_PEEKO
# 261 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 262 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 263 "data/maps/RusturfTunnel/scripts.pory"
	end
# 264 "data/maps/RusturfTunnel/scripts.pory"

# 265 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 266 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 267 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 268 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 269 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 270 "data/maps/RusturfTunnel/scripts.pory"

# 271 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 272 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 273 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 274 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 275 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 276 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 277 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 278 "data/maps/RusturfTunnel/scripts.pory"
	release
# 279 "data/maps/RusturfTunnel/scripts.pory"
	end
# 280 "data/maps/RusturfTunnel/scripts.pory"

# 281 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 282 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 283 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 284 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 285 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 286 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 287 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 288 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 289 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 290 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 291 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntEscape
# 292 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 293 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_GRUNT
# 294 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 295 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 296 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 297 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 298 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 299 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 300 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 301 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 302 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, Common_Movement_FacePlayer
# 303 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 304 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 305 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 306 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 307 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 308 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 309 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 310 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 311 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 312 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyExit
# 313 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_PeekoExit
# 314 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 315 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 316 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_PEEKO
# 317 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 318 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 319 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 320 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 321 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 322 "data/maps/RusturfTunnel/scripts.pory"
	release
# 323 "data/maps/RusturfTunnel/scripts.pory"
	end
# 324 "data/maps/RusturfTunnel/scripts.pory"

# 325 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 326 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 327 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 328 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 329 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 330 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 331 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 332 "data/maps/RusturfTunnel/scripts.pory"

# 333 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 334 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 335 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 336 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 337 "data/maps/RusturfTunnel/scripts.pory"

# 338 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 339 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 340 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 341 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 342 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 343 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 344 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 345 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 346 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 347 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 348 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 349 "data/maps/RusturfTunnel/scripts.pory"

# 350 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 351 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 352 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 353 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 354 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 355 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 356 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 357 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 358 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 359 "data/maps/RusturfTunnel/scripts.pory"

# 360 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 361 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 362 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 363 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 364 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 365 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 366 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 367 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 368 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 369 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 370 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 371 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 372 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 373 "data/maps/RusturfTunnel/scripts.pory"

# 374 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 375 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 376 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 377 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 378 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 379 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 380 "data/maps/RusturfTunnel/scripts.pory"

# 381 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 382 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 383 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 384 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 385 "data/maps/RusturfTunnel/scripts.pory"

# 386 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 387 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 388 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 389 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 390 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 391 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 392 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 393 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 394 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 395 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 396 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 397 "data/maps/RusturfTunnel/scripts.pory"

# 398 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 399 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 400 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 401 "data/maps/RusturfTunnel/scripts.pory"
	end
# 402 "data/maps/RusturfTunnel/scripts.pory"

# 403 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 404 "data/maps/RusturfTunnel/scripts.pory"
	.string "¿Y esto? ¿Vienes a por mí?\n"
# 405 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Pues te voy a dar una buena!$"
# 406 "data/maps/RusturfTunnel/scripts.pory"

# 407 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 408 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pi, pikooo…$"
# 409 "data/maps/RusturfTunnel/scripts.pory"

# 410 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 411 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Por todos los POKéMON!\p"
# 412 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Este POKéMON que he secuestrado\n"
# 413 "data/maps/RusturfTunnel/scripts.pory"
	.string "ha resultado ser una carga inútil!\p"
# 414 "data/maps/RusturfTunnel/scripts.pory"
	.string "Y pensar que me he escapado a todo\n"
# 415 "data/maps/RusturfTunnel/scripts.pory"
	.string "correr por esta birria de túnel…\p"
# 416 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Eh, tú!\n"
# 417 "data/maps/RusturfTunnel/scripts.pory"
	.string "¿Quieres luchar conmigo?$"
# 418 "data/maps/RusturfTunnel/scripts.pory"

# 419 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 420 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Brrrr! ¡Mi brillante carrera criminal\n"
# 421 "data/maps/RusturfTunnel/scripts.pory"
	.string "ha llegado a su fin!$"
# 422 "data/maps/RusturfTunnel/scripts.pory"

# 423 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 424 "data/maps/RusturfTunnel/scripts.pory"
	.string "Aquí falla algo…\p"
# 425 "data/maps/RusturfTunnel/scripts.pory"
	.string "El JEFE me había dicho que sería\n"
# 426 "data/maps/RusturfTunnel/scripts.pory"
	.string "un trabajo chupado.\p"
# 427 "data/maps/RusturfTunnel/scripts.pory"
	.string "Sólo tenía que robar un paquete\n"
# 428 "data/maps/RusturfTunnel/scripts.pory"
	.string "en DEVON…\p"
# 429 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Pof!\n"
# 430 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Pues, si tanto lo quieres, para ti!$"
# 431 "data/maps/RusturfTunnel/scripts.pory"

# 432 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 433 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡PEEKO! ¡Estás sano y salvo!$"
# 434 "data/maps/RusturfTunnel/scripts.pory"

# 435 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 436 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡PEEKO te debe la vida!\p"
# 437 "data/maps/RusturfTunnel/scripts.pory"
	.string "Mi nombre es SR. ARENQUE.\n"
# 438 "data/maps/RusturfTunnel/scripts.pory"
	.string "¿Y tú eres…?\p"
# 439 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ajá…\p"
# 440 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Ah, {PLAYER}{KUN}!\n"
# 441 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Muchísimas gracias!\p"
# 442 "data/maps/RusturfTunnel/scripts.pory"
	.string "Bueno, si te puedo ayudar en lo que\n"
# 443 "data/maps/RusturfTunnel/scripts.pory"
	.string "sea, no dudes en decírmelo.\p"
# 444 "data/maps/RusturfTunnel/scripts.pory"
	.string "Me puedes encontrar en mi casita de\n"
# 445 "data/maps/RusturfTunnel/scripts.pory"
	.string "la playa, cerca del BOSQUE PETALIA.\p"
# 446 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ven, PEEKO. Tenemos que volver a casa.\p"
# 447 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: ¡Piko!$"
# 448 "data/maps/RusturfTunnel/scripts.pory"

# 449 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 450 "data/maps/RusturfTunnel/scripts.pory"
	.string "Uf…\p"
# 451 "data/maps/RusturfTunnel/scripts.pory"
	.string "¿Por qué no se puede seguir excavando?\n"
# 452 "data/maps/RusturfTunnel/scripts.pory"
	.string "¿La roca está muy dura?\p"
# 453 "data/maps/RusturfTunnel/scripts.pory"
	.string "Mi chica vive en PUEBLO VERDEGAL,\n"
# 454 "data/maps/RusturfTunnel/scripts.pory"
	.string "un poco más lejos de aquí…\p"
# 455 "data/maps/RusturfTunnel/scripts.pory"
	.string "Si un túnel uniera CIUDAD FÉRRICA\n"
# 456 "data/maps/RusturfTunnel/scripts.pory"
	.string "y VERDEGAL, podría visitarla cada día…\p"
# 457 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pero no estamos adelantando nada.\n"
# 458 "data/maps/RusturfTunnel/scripts.pory"
	.string "¿Qué puedo hacer yo?$"
# 459 "data/maps/RusturfTunnel/scripts.pory"

# 460 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 461 "data/maps/RusturfTunnel/scripts.pory"
	.string "Para ir de CIUDAD FÉRRICA a VERDEGAL,\n"
# 462 "data/maps/RusturfTunnel/scripts.pory"
	.string "tienes que ir primero a AZULIZA y luego\l"
# 463 "data/maps/RusturfTunnel/scripts.pory"
	.string "pasar por CIUDAD PORTUAL y MALVALONA.$"
# 464 "data/maps/RusturfTunnel/scripts.pory"

# 465 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 466 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Guau! Has destrozado la roca que\n"
# 467 "data/maps/RusturfTunnel/scripts.pory"
	.string "bloqueaba el camino…\p"
# 468 "data/maps/RusturfTunnel/scripts.pory"
	.string "Para demostrarte mi agradecimiento,\n"
# 469 "data/maps/RusturfTunnel/scripts.pory"
	.string "quiero darte esta MO.$"
# 470 "data/maps/RusturfTunnel/scripts.pory"

# 471 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 472 "data/maps/RusturfTunnel/scripts.pory"
	.string "Esta MO contiene FUERZA.\p"
# 473 "data/maps/RusturfTunnel/scripts.pory"
	.string "Si un POKéMON musculoso aprendiera\n"
# 474 "data/maps/RusturfTunnel/scripts.pory"
	.string "este movimiento, podría mover incluso\l"
# 475 "data/maps/RusturfTunnel/scripts.pory"
	.string "las rocas más grandes.$"
# 476 "data/maps/RusturfTunnel/scripts.pory"

# 477 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 478 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡CLARA!\n"
# 479 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Ahora puedo verte todos los días!\p"
# 480 "data/maps/RusturfTunnel/scripts.pory"
	.string "CLARA: ¡Cariño, es maravilloso!\p"
# 481 "data/maps/RusturfTunnel/scripts.pory"
	.string "Anda, ven a descansar un rato\n"
# 482 "data/maps/RusturfTunnel/scripts.pory"
	.string "a casa. Has trabajado tanto…$"
# 483 "data/maps/RusturfTunnel/scripts.pory"

# 484 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 485 "data/maps/RusturfTunnel/scripts.pory"
	.string "Mi novio me espera al otro lado\n"
# 486 "data/maps/RusturfTunnel/scripts.pory"
	.string "de esta enorme roca.\p"
# 487 "data/maps/RusturfTunnel/scripts.pory"
	.string "Está trabajando duro en el túnel,\n"
# 488 "data/maps/RusturfTunnel/scripts.pory"
	.string "pero no es sólo para verme a mí.\p"
# 489 "data/maps/RusturfTunnel/scripts.pory"
	.string "Lo está haciendo por el beneficio\n"
# 490 "data/maps/RusturfTunnel/scripts.pory"
	.string "de todos. ¡Es tan generoso…!$"
# 491 "data/maps/RusturfTunnel/scripts.pory"

# 492 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 493 "data/maps/RusturfTunnel/scripts.pory"
	.string "¿Cómo se llama a los hombres que pasan\n"
# 494 "data/maps/RusturfTunnel/scripts.pory"
	.string "todo el tiempo en las montañas?\l"
# 495 "data/maps/RusturfTunnel/scripts.pory"
	.string "Montañeros, ¿verdad?\p"
# 496 "data/maps/RusturfTunnel/scripts.pory"
	.string "Entonces ¿por qué no llaman a los\n"
# 497 "data/maps/RusturfTunnel/scripts.pory"
	.string "POKéMON que viven en las montañas\l"
# 498 "data/maps/RusturfTunnel/scripts.pory"
	.string "POKéMONtañeros?$"
# 499 "data/maps/RusturfTunnel/scripts.pory"

# 500 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 501 "data/maps/RusturfTunnel/scripts.pory"
	.string "Mis POKéMON…\n"
# 502 "data/maps/RusturfTunnel/scripts.pory"
	.string "se han quedado sin fuerzas…$"
# 503 "data/maps/RusturfTunnel/scripts.pory"

# 504 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 505 "data/maps/RusturfTunnel/scripts.pory"
	.string "Aquí decidieron detener el avance del\n"
# 506 "data/maps/RusturfTunnel/scripts.pory"
	.string "progreso para proteger a los POKéMON.\l"
# 507 "data/maps/RusturfTunnel/scripts.pory"
	.string "¡Ésta sí que es una historia bonita!$"
