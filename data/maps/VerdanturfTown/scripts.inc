# 1 "data/maps/VerdanturfTown/scripts.pory"

# 2 "data/maps/VerdanturfTown/scripts.pory"
.set LOCALID_TWIN, 2
# 3 "data/maps/VerdanturfTown/scripts.pory"
.set LOCALID_BULLY_1, 3
# 4 "data/maps/VerdanturfTown/scripts.pory"
.set LOCALID_BULLY_2, 4
# 5 "data/maps/VerdanturfTown/scripts.pory"
.set LOCALID_WALLY, 5
# 6 "data/maps/VerdanturfTown/scripts.pory"

# 7 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_MapScripts::
# 8 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
# 9 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_OnFrame
# 10 "data/maps/VerdanturfTown/scripts.pory"
	.byte 0
# 11 "data/maps/VerdanturfTown/scripts.pory"

# 12 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition:
# 13 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 14 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 15 "data/maps/VerdanturfTown/scripts.pory"
	call_if_eq VAR_VERDANTURF_TOWN_STATE, 1, VerdanturfTown_OnTransition_SetTint
# 16 "data/maps/VerdanturfTown/scripts.pory"
	end
# 17 "data/maps/VerdanturfTown/scripts.pory"

# 18 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnFrame:
# 19 "data/maps/VerdanturfTown/scripts.pory"
	map_script_2 VAR_VERDANTURF_TOWN_STATE, 1, VerdanturfTown_EventScript_WallysMemory
# 20 "data/maps/VerdanturfTown/scripts.pory"
	.2byte 0
# 21 "data/maps/VerdanturfTown/scripts.pory"

# 22 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition_SetTint:
# 23 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 24 "data/maps/VerdanturfTown/scripts.pory"
	call Script_SetSepiaTint
# 25 "data/maps/VerdanturfTown/scripts.pory"
	savebgm MUS_END
# 26 "data/maps/VerdanturfTown/scripts.pory"
	return
# 27 "data/maps/VerdanturfTown/scripts.pory"

# 28 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WallysMemory:
# 29 "data/maps/VerdanturfTown/scripts.pory"
	lockall
# 30 "data/maps/VerdanturfTown/scripts.pory"
	special SpawnCameraObject
# 31 "data/maps/VerdanturfTown/scripts.pory"
	setobjectxy LOCALID_BULLY_1, 13, 7
# 32 "data/maps/VerdanturfTown/scripts.pory"
	setobjectxy LOCALID_BULLY_2, 12, 8
# 33 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_BULLY_1, Common_Movement_FaceDown
# 34 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_BULLY_2, Common_Movement_FaceRight
# 35 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 36 "data/maps/VerdanturfTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 37 "data/maps/VerdanturfTown/scripts.pory"
	delay 16
# 38 "data/maps/VerdanturfTown/scripts.pory"
	opendoor 10, 14
# 39 "data/maps/VerdanturfTown/scripts.pory"
	waitdooranim
# 40 "data/maps/VerdanturfTown/scripts.pory"
	addobject LOCALID_WALLY
# 41 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_WALLY, VerdanturfTown_Movement_WallyShopping1
# 42 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 43 "data/maps/VerdanturfTown/scripts.pory"
	closedoor 10, 14
# 44 "data/maps/VerdanturfTown/scripts.pory"
	waitdooranim
# 45 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_WALLY, VerdanturfTown_Movement_WallyShopping2
# 46 "data/maps/VerdanturfTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VerdanturfTown_Movement_WallyShopping2
# 47 "data/maps/VerdanturfTown/scripts.pory"
	namebox Wally
# 48 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WallyExplains1, MSGBOX_DEFAULT
# 49 "data/maps/VerdanturfTown/scripts.pory"
	hidenamebox
# 50 "data/maps/VerdanturfTown/scripts.pory"
	closemessage
# 51 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 52 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_BULLY_1, VerdanturfTown_Movement_AttackWally
# 53 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_WALLY, VerdanturfTown_Movement_WallyPushed
# 54 "data/maps/VerdanturfTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VerdanturfTown_Movement_CameraDown
# 55 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_VERDANTURF_TOWN_STATE, 2
# 57 "data/maps/VerdanturfTown/scripts.pory"
	special RemoveCameraObject
# 58 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_HIDE_WALLY_VERDANTURF
# 59 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE_OUT
# 60 "data/maps/VerdanturfTown/scripts.pory"
	switch VAR_0x8004
# 61 "data/maps/VerdanturfTown/scripts.pory"
	case DIR_EAST, VerdanturfTown_EventScript_WallysMemoryEast
# 62 "data/maps/VerdanturfTown/scripts.pory"
	case DIR_NORTH, VerdanturfTown_EventScript_WallysMemoryNorth
# 63 "data/maps/VerdanturfTown/scripts.pory"
	case DIR_WEST, VerdanturfTown_EventScript_WallysMemoryWest
# 64 "data/maps/VerdanturfTown/scripts.pory"
	case DIR_SOUTH, VerdanturfTown_EventScript_WallysMemorySouth
# 65 "data/maps/VerdanturfTown/scripts.pory"
	release
# 66 "data/maps/VerdanturfTown/scripts.pory"
	end
# 67 "data/maps/VerdanturfTown/scripts.pory"

# 68 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WallysMemoryEast::
# 69 "data/maps/VerdanturfTown/scripts.pory"
	warp MAP_DEWFORD_TOWN, 5, 18
# 70 "data/maps/VerdanturfTown/scripts.pory"
	release
# 71 "data/maps/VerdanturfTown/scripts.pory"
	end
# 72 "data/maps/VerdanturfTown/scripts.pory"

# 73 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WallysMemoryNorth::
# 74 "data/maps/VerdanturfTown/scripts.pory"
	warp MAP_DEWFORD_TOWN, 6, 19
# 75 "data/maps/VerdanturfTown/scripts.pory"
	release
# 76 "data/maps/VerdanturfTown/scripts.pory"
	end
# 77 "data/maps/VerdanturfTown/scripts.pory"

# 78 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WallysMemoryWest::
# 79 "data/maps/VerdanturfTown/scripts.pory"
	warp MAP_DEWFORD_TOWN, 7, 18
# 80 "data/maps/VerdanturfTown/scripts.pory"
	release
# 81 "data/maps/VerdanturfTown/scripts.pory"
	end
# 82 "data/maps/VerdanturfTown/scripts.pory"

# 83 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WallysMemorySouth::
# 84 "data/maps/VerdanturfTown/scripts.pory"
	warp MAP_DEWFORD_TOWN, 6, 17
# 85 "data/maps/VerdanturfTown/scripts.pory"
	release
# 86 "data/maps/VerdanturfTown/scripts.pory"
	end
# 87 "data/maps/VerdanturfTown/scripts.pory"

# 88 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Movement_WallyShopping1:
# 89 "data/maps/VerdanturfTown/scripts.pory"
	walk_down
# 90 "data/maps/VerdanturfTown/scripts.pory"
	delay_16
# 91 "data/maps/VerdanturfTown/scripts.pory"
	walk_in_place_up
# 92 "data/maps/VerdanturfTown/scripts.pory"
	step_end
# 93 "data/maps/VerdanturfTown/scripts.pory"

# 94 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Movement_WallyShopping2:
# 95 "data/maps/VerdanturfTown/scripts.pory"
	walk_down
# 96 "data/maps/VerdanturfTown/scripts.pory"
	walk_right
# 97 "data/maps/VerdanturfTown/scripts.pory"
	walk_right
# 98 "data/maps/VerdanturfTown/scripts.pory"
	walk_right
# 99 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 100 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 101 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 102 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 103 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 104 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 105 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 106 "data/maps/VerdanturfTown/scripts.pory"
	walk_up
# 107 "data/maps/VerdanturfTown/scripts.pory"
	delay_16
# 108 "data/maps/VerdanturfTown/scripts.pory"
	walk_in_place_left
# 109 "data/maps/VerdanturfTown/scripts.pory"
	delay_16
# 110 "data/maps/VerdanturfTown/scripts.pory"
	walk_in_place_up
# 111 "data/maps/VerdanturfTown/scripts.pory"
	step_end
# 112 "data/maps/VerdanturfTown/scripts.pory"

# 113 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Movement_AttackWally:
# 114 "data/maps/VerdanturfTown/scripts.pory"
	walk_fast_down
# 115 "data/maps/VerdanturfTown/scripts.pory"
	delay_16
# 116 "data/maps/VerdanturfTown/scripts.pory"
	delay_8
# 117 "data/maps/VerdanturfTown/scripts.pory"
	walk_fast_down
# 118 "data/maps/VerdanturfTown/scripts.pory"
	step_end
# 119 "data/maps/VerdanturfTown/scripts.pory"

# 120 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Movement_WallyPushed:
# 121 "data/maps/VerdanturfTown/scripts.pory"
	lock_facing_direction
# 122 "data/maps/VerdanturfTown/scripts.pory"
	delay_8
# 123 "data/maps/VerdanturfTown/scripts.pory"
	jump_down
# 124 "data/maps/VerdanturfTown/scripts.pory"
	delay_16
# 125 "data/maps/VerdanturfTown/scripts.pory"
	jump_down
# 126 "data/maps/VerdanturfTown/scripts.pory"
	step_end
# 127 "data/maps/VerdanturfTown/scripts.pory"

# 128 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Movement_CameraDown:
# 129 "data/maps/VerdanturfTown/scripts.pory"
	delay_8
# 130 "data/maps/VerdanturfTown/scripts.pory"
	walk_down
# 131 "data/maps/VerdanturfTown/scripts.pory"
	delay_16
# 132 "data/maps/VerdanturfTown/scripts.pory"
	walk_down
# 133 "data/maps/VerdanturfTown/scripts.pory"
	step_end
# 134 "data/maps/VerdanturfTown/scripts.pory"

# 135 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_WallyExplains1:
# 136 "data/maps/VerdanturfTown/scripts.pory"
	.string "Y cuando vivía en Verdanturf, las cosas\n"
# 137 "data/maps/VerdanturfTown/scripts.pory"
	.string "no eran nada diferentes.\p"
# 138 "data/maps/VerdanturfTown/scripts.pory"
	.string "Recuerdo que varias veces, al querer ir\n"
# 139 "data/maps/VerdanturfTown/scripts.pory"
	.string "a comprar cosas en el Centro Pokémon,\l"
# 140 "data/maps/VerdanturfTown/scripts.pory"
	.string "me molestaban unos de mis vecinos,\l"
# 141 "data/maps/VerdanturfTown/scripts.pory"
	.string "diciéndome cosas horribles y no\l"
# 142 "data/maps/VerdanturfTown/scripts.pory"
	.string "dejándome continuar...$"
# 143 "data/maps/VerdanturfTown/scripts.pory"

# 144 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin::
# 145 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 146 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 147 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
# 148 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
# 149 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 150 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 151 "data/maps/VerdanturfTown/scripts.pory"
	release
# 152 "data/maps/VerdanturfTown/scripts.pory"
	end
# 153 "data/maps/VerdanturfTown/scripts.pory"

# 154 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TwinTunnelOpen::
# 155 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
# 156 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 157 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/VerdanturfTown/scripts.pory"
	release
# 159 "data/maps/VerdanturfTown/scripts.pory"
	end
# 160 "data/maps/VerdanturfTown/scripts.pory"

# 161 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Man::
# 162 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
# 163 "data/maps/VerdanturfTown/scripts.pory"
	end
# 164 "data/maps/VerdanturfTown/scripts.pory"

# 165 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Camper::
# 166 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
# 167 "data/maps/VerdanturfTown/scripts.pory"
	end
# 168 "data/maps/VerdanturfTown/scripts.pory"

# 169 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy::
# 170 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 171 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 172 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
# 173 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
# 174 "data/maps/VerdanturfTown/scripts.pory"
	release
# 175 "data/maps/VerdanturfTown/scripts.pory"
	end
# 176 "data/maps/VerdanturfTown/scripts.pory"

# 177 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BoyTunnelOpen::
# 178 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
# 179 "data/maps/VerdanturfTown/scripts.pory"
	release
# 180 "data/maps/VerdanturfTown/scripts.pory"
	end
# 181 "data/maps/VerdanturfTown/scripts.pory"

# 182 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TownSign::
# 183 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
# 184 "data/maps/VerdanturfTown/scripts.pory"
	end
# 185 "data/maps/VerdanturfTown/scripts.pory"

# 186 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WandasHouseSign::
# 187 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
# 188 "data/maps/VerdanturfTown/scripts.pory"
	end
# 189 "data/maps/VerdanturfTown/scripts.pory"

# 190 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BattleTentSign::
# 191 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
# 192 "data/maps/VerdanturfTown/scripts.pory"
	end
# 193 "data/maps/VerdanturfTown/scripts.pory"

# 194 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_RusturfTunnelSign::
# 195 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
# 196 "data/maps/VerdanturfTown/scripts.pory"
	end
# 197 "data/maps/VerdanturfTown/scripts.pory"

# 198 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManTryingToDigTunnel:
# 199 "data/maps/VerdanturfTown/scripts.pory"
	.string "My papa told me.\p"
# 200 "data/maps/VerdanturfTown/scripts.pory"
	.string "He says this tunnel is full of\n"
# 201 "data/maps/VerdanturfTown/scripts.pory"
	.string "timid POKéMON.\p"
# 202 "data/maps/VerdanturfTown/scripts.pory"
	.string "They get all scared of loud noise and\n"
# 203 "data/maps/VerdanturfTown/scripts.pory"
	.string "make a big uproar.\p"
# 204 "data/maps/VerdanturfTown/scripts.pory"
	.string "So they had to stop the big tunnel\n"
# 205 "data/maps/VerdanturfTown/scripts.pory"
	.string "project.\p"
# 206 "data/maps/VerdanturfTown/scripts.pory"
	.string "But there's one man. He's trying to dig\n"
# 207 "data/maps/VerdanturfTown/scripts.pory"
	.string "the tunnel by himself!$"
# 208 "data/maps/VerdanturfTown/scripts.pory"

# 209 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManDugTunnelForLove:
# 210 "data/maps/VerdanturfTown/scripts.pory"
	.string "There was a man who dug a tunnel for\n"
# 211 "data/maps/VerdanturfTown/scripts.pory"
	.string "a lady he loved.\p"
# 212 "data/maps/VerdanturfTown/scripts.pory"
	.string "I don't really get it, but hey!$"
# 213 "data/maps/VerdanturfTown/scripts.pory"

# 214 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_AirCleanHere:
# 215 "data/maps/VerdanturfTown/scripts.pory"
	.string "The way the winds blow, volcanic ash\n"
# 216 "data/maps/VerdanturfTown/scripts.pory"
	.string "is never blown in this direction.\p"
# 217 "data/maps/VerdanturfTown/scripts.pory"
	.string "The air is clean and delicious here.\n"
# 218 "data/maps/VerdanturfTown/scripts.pory"
	.string "Living here should do wonders for even\l"
# 219 "data/maps/VerdanturfTown/scripts.pory"
	.string "frail and sickly people.$"
# 220 "data/maps/VerdanturfTown/scripts.pory"

# 221 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_MakeBattleTentDebut:
# 222 "data/maps/VerdanturfTown/scripts.pory"
	.string "My POKéMON and I, we've been riding\n"
# 223 "data/maps/VerdanturfTown/scripts.pory"
	.string "a hot winning streak.\p"
# 224 "data/maps/VerdanturfTown/scripts.pory"
	.string "So I decided to make my BATTLE TENT\n"
# 225 "data/maps/VerdanturfTown/scripts.pory"
	.string "debut in this town.$"
# 226 "data/maps/VerdanturfTown/scripts.pory"

# 227 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_GuyTryingToBustThroughCave:
# 228 "data/maps/VerdanturfTown/scripts.pory"
	.string "Did you see the cave next to the\n"
# 229 "data/maps/VerdanturfTown/scripts.pory"
	.string "POKéMON MART?\p"
# 230 "data/maps/VerdanturfTown/scripts.pory"
	.string "There's a guy in there who's trying to\n"
# 231 "data/maps/VerdanturfTown/scripts.pory"
	.string "bust up boulders so he can bust out\l"
# 232 "data/maps/VerdanturfTown/scripts.pory"
	.string "through to the other side.\p"
# 233 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'd be great if we could go through…\n"
# 234 "data/maps/VerdanturfTown/scripts.pory"
	.string "It'll make it easy to visit RUSTBORO.$"
# 235 "data/maps/VerdanturfTown/scripts.pory"

# 236 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_EasyToGetToRustboroNow:
# 237 "data/maps/VerdanturfTown/scripts.pory"
	.string "That cave next to the POKéMON MART\n"
# 238 "data/maps/VerdanturfTown/scripts.pory"
	.string "is now a tunnel to the other side.\p"
# 239 "data/maps/VerdanturfTown/scripts.pory"
	.string "It's great--it's easy to go shop for\n"
# 240 "data/maps/VerdanturfTown/scripts.pory"
	.string "new DEVON products in RUSTBORO now.$"
# 241 "data/maps/VerdanturfTown/scripts.pory"

# 242 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_TownSign:
# 243 "data/maps/VerdanturfTown/scripts.pory"
	.string "VERDANTURF TOWN\p"
# 244 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The windswept highlands with the\n"
# 245 "data/maps/VerdanturfTown/scripts.pory"
	.string "sweet fragrance of grass.”$"
# 246 "data/maps/VerdanturfTown/scripts.pory"

# 247 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_WandasHouse:
# 248 "data/maps/VerdanturfTown/scripts.pory"
	.string "WANDA'S HOUSE$"
# 249 "data/maps/VerdanturfTown/scripts.pory"

# 250 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_BattleTentSign:
# 251 "data/maps/VerdanturfTown/scripts.pory"
	.string "BATTLE TENT VERDANTURF SITE\n"
# 252 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Feast Your Eyes on Battles!”$"
# 253 "data/maps/VerdanturfTown/scripts.pory"

# 254 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_RusturfTunnelSign:
# 255 "data/maps/VerdanturfTown/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 256 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 257 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The tunnel project has been\n"
# 258 "data/maps/VerdanturfTown/scripts.pory"
	.string "canceled.”$"
