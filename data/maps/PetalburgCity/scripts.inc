# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 3
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 5 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 6 "data/maps/PetalburgCity/scripts.pory"

# 7 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 8 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 9 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 10 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 11 "data/maps/PetalburgCity/scripts.pory"

# 12 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 13 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 14 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 15 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 16 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 17 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 6, PetalburgCity_EventScript_SetTintForMemory
# 18 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 19 "data/maps/PetalburgCity/scripts.pory"
	end
# 20 "data/maps/PetalburgCity/scripts.pory"

# 21 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 22 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 13
# 23 "data/maps/PetalburgCity/scripts.pory"
	return
# 24 "data/maps/PetalburgCity/scripts.pory"

# 25 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 26 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 27 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 28 "data/maps/PetalburgCity/scripts.pory"
	return
# 29 "data/maps/PetalburgCity/scripts.pory"

# 30 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetTintForMemory::
# 31 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 32 "data/maps/PetalburgCity/scripts.pory"
	call Script_SetSepiaTint
# 33 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 34 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 35 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_WALLY
# 36 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_WALLYS_DAD
# 37 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 15, 19
# 38 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_WALLYS_DAD, 14, 19
# 39 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 12, 13
# 40 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_END
# 41 "data/maps/PetalburgCity/scripts.pory"
	return
# 42 "data/maps/PetalburgCity/scripts.pory"

# 43 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 44 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 45 "data/maps/PetalburgCity/scripts.pory"
	return
# 46 "data/maps/PetalburgCity/scripts.pory"

# 47 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 48 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 49 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 6, PetalburgCity_EventScript_WallysFlashback
# 50 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 51 "data/maps/PetalburgCity/scripts.pory"
	
# 52 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysFlashback::
# 53 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 54 "data/maps/PetalburgCity/scripts.pory"
	special SpawnCameraObject
# 55 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FaceDown
# 56 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 58 "data/maps/PetalburgCity/scripts.pory"
	hidenamebox
# 59 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 60 "data/maps/PetalburgCity/scripts.pory"
	delay 20
# 61 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FaceUp
# 62 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 63 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_FaceUp
# 64 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyMemory
# 66 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WallyDadMemory
# 67 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_Movement_WallyMemoryCamera
# 68 "data/maps/PetalburgCity/scripts.pory"
	namebox Chico
# 69 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallysMemoryKid, MSGBOX_DEFAULT
# 70 "data/maps/PetalburgCity/scripts.pory"
	namebox PapaWally
# 71 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallysMemory2, MSGBOX_DEFAULT
# 72 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 73 "data/maps/PetalburgCity/scripts.pory"
	hidenamebox
# 74 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 75 "data/maps/PetalburgCity/scripts.pory"
	namebox Wally
# 76 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallysMemory3, MSGBOX_DEFAULT
# 77 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 78 "data/maps/PetalburgCity/scripts.pory"
	hidenamebox
# 79 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 80 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyMemory2
# 81 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgCity/scripts.pory"
	opendoor 7, 5
# 83 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 84 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 85 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyMemory3
# 86 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WallyDadMemory2
# 88 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 90 "data/maps/PetalburgCity/scripts.pory"
	closedoor 7, 5
# 91 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 92 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 3
# 93 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_VERDANTURF_TOWN_STATE, 1
# 94 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 7
# 95 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_WALLY_VERDANTURF
# 96 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 97 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 98 "data/maps/PetalburgCity/scripts.pory"
	special RemoveCameraObject
# 99 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 100 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE_OUT
# 101 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_VERDANTURF_TOWN, 10, 15
# 102 "data/maps/PetalburgCity/scripts.pory"
	release
# 103 "data/maps/PetalburgCity/scripts.pory"
	end
# 104 "data/maps/PetalburgCity/scripts.pory"

# 105 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyMemory:
# 106 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 107 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 108 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 109 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 125 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 126 "data/maps/PetalburgCity/scripts.pory"

# 127 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyMemoryCamera:
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 147 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 148 "data/maps/PetalburgCity/scripts.pory"

# 149 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyDadMemory:
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 154 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 155 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 156 "data/maps/PetalburgCity/scripts.pory"
	delay_4
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_slow_left
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_left
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_slow_right
# 174 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 175 "data/maps/PetalburgCity/scripts.pory"

# 176 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyMemory2:
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_slow_up
# 178 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 179 "data/maps/PetalburgCity/scripts.pory"

# 180 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyMemory3:
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 182 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 183 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 184 "data/maps/PetalburgCity/scripts.pory"

# 185 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyDadMemory2:
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 188 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 189 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 190 "data/maps/PetalburgCity/scripts.pory"

# 191 "data/maps/PetalburgCity/scripts.pory"

# 192 "data/maps/PetalburgCity/scripts.pory"

# 193 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 194 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 195 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 196 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 197 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 198 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 199 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 200 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 201 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 202 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 203 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 204 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 205 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 207 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 208 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 209 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 210 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 211 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 212 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 213 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 214 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 215 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 216 "data/maps/PetalburgCity/scripts.pory"
	end
# 217 "data/maps/PetalburgCity/scripts.pory"

# 218 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 219 "data/maps/PetalburgCity/scripts.pory"
	lock
# 220 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 221 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 222 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 223 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 224 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 225 "data/maps/PetalburgCity/scripts.pory"
	release
# 226 "data/maps/PetalburgCity/scripts.pory"
	end
# 227 "data/maps/PetalburgCity/scripts.pory"

# 228 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 229 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 230 "data/maps/PetalburgCity/scripts.pory"
	end
# 231 "data/maps/PetalburgCity/scripts.pory"

# 232 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 233 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 234 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 235 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 236 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 237 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 238 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 239 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 240 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 241 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 242 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 243 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 244 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 245 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 247 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 248 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 249 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 250 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 251 "data/maps/PetalburgCity/scripts.pory"

# 252 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 253 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 254 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 255 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 256 "data/maps/PetalburgCity/scripts.pory"

# 257 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 258 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 259 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 260 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 261 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 263 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 264 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 265 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 266 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 267 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 268 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 270 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 271 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 272 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 274 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 275 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 276 "data/maps/PetalburgCity/scripts.pory"

# 277 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 279 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 280 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 281 "data/maps/PetalburgCity/scripts.pory"

# 282 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 283 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 285 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 286 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 288 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 289 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 290 "data/maps/PetalburgCity/scripts.pory"

# 291 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 292 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 294 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 295 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 296 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 297 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 298 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 299 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 300 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 301 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 302 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 303 "data/maps/PetalburgCity/scripts.pory"

# 304 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 305 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 306 "data/maps/PetalburgCity/scripts.pory"
	end
# 307 "data/maps/PetalburgCity/scripts.pory"

# 308 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 309 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 310 "data/maps/PetalburgCity/scripts.pory"
	end
# 311 "data/maps/PetalburgCity/scripts.pory"

# 312 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 313 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 314 "data/maps/PetalburgCity/scripts.pory"
	end
# 315 "data/maps/PetalburgCity/scripts.pory"

# 316 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 317 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 318 "data/maps/PetalburgCity/scripts.pory"
	end
# 319 "data/maps/PetalburgCity/scripts.pory"

# 320 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 321 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 322 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 323 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 324 "data/maps/PetalburgCity/scripts.pory"
	end
# 325 "data/maps/PetalburgCity/scripts.pory"

# 326 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 327 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 328 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 329 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 330 "data/maps/PetalburgCity/scripts.pory"
	end
# 331 "data/maps/PetalburgCity/scripts.pory"

# 332 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 333 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 334 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 335 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 336 "data/maps/PetalburgCity/scripts.pory"
	end
# 337 "data/maps/PetalburgCity/scripts.pory"

# 338 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 339 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 340 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 341 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 342 "data/maps/PetalburgCity/scripts.pory"
	end
# 343 "data/maps/PetalburgCity/scripts.pory"

# 344 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 345 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 346 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 347 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 348 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 349 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 350 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 351 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 352 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 353 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 354 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 355 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 356 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 357 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 358 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 359 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 360 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 361 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 362 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 363 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 364 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 365 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 366 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 367 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 368 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 369 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 370 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 371 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 372 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 373 "data/maps/PetalburgCity/scripts.pory"
	end
# 374 "data/maps/PetalburgCity/scripts.pory"

# 375 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 376 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 377 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 378 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 379 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 380 "data/maps/PetalburgCity/scripts.pory"
	return
# 381 "data/maps/PetalburgCity/scripts.pory"

# 382 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 383 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 384 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 385 "data/maps/PetalburgCity/scripts.pory"
	return
# 386 "data/maps/PetalburgCity/scripts.pory"

# 387 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 388 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 389 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 390 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 391 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 392 "data/maps/PetalburgCity/scripts.pory"
	return
# 393 "data/maps/PetalburgCity/scripts.pory"

# 394 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 395 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 396 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 397 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 398 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 399 "data/maps/PetalburgCity/scripts.pory"
	return
# 400 "data/maps/PetalburgCity/scripts.pory"

# 401 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 402 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 403 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 404 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 405 "data/maps/PetalburgCity/scripts.pory"
	return
# 406 "data/maps/PetalburgCity/scripts.pory"

# 407 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 408 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 409 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 410 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 411 "data/maps/PetalburgCity/scripts.pory"
	return
# 412 "data/maps/PetalburgCity/scripts.pory"

# 413 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 414 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 415 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 416 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 417 "data/maps/PetalburgCity/scripts.pory"
	return
# 418 "data/maps/PetalburgCity/scripts.pory"

# 419 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 420 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 421 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 422 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 423 "data/maps/PetalburgCity/scripts.pory"
	return
# 424 "data/maps/PetalburgCity/scripts.pory"

# 425 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 426 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 427 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 428 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 429 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 430 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 431 "data/maps/PetalburgCity/scripts.pory"

# 432 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 437 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 438 "data/maps/PetalburgCity/scripts.pory"

# 439 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 442 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 443 "data/maps/PetalburgCity/scripts.pory"

# 444 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 449 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 450 "data/maps/PetalburgCity/scripts.pory"

# 451 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 457 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 458 "data/maps/PetalburgCity/scripts.pory"

# 459 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 470 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 471 "data/maps/PetalburgCity/scripts.pory"

# 472 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 486 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 487 "data/maps/PetalburgCity/scripts.pory"

# 488 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 499 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 500 "data/maps/PetalburgCity/scripts.pory"

# 501 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 506 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 507 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 508 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 509 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 510 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 511 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 512 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 513 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 514 "data/maps/PetalburgCity/scripts.pory"

# 515 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 516 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 517 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 518 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 519 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 520 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 521 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 522 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 523 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 524 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 525 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 526 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 527 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 528 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 529 "data/maps/PetalburgCity/scripts.pory"

# 530 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 531 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 532 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 533 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 534 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 535 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 536 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 537 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 538 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 539 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 540 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 541 "data/maps/PetalburgCity/scripts.pory"

# 542 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 543 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 544 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 545 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 546 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 547 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 548 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 549 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 550 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 551 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 552 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 553 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 554 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 555 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 556 "data/maps/PetalburgCity/scripts.pory"

# 557 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 558 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 559 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 560 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 561 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 562 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 563 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 564 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 565 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 566 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 567 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 568 "data/maps/PetalburgCity/scripts.pory"

# 569 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 570 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 571 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 572 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 573 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 574 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 575 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 576 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 577 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 578 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 579 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 580 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 581 "data/maps/PetalburgCity/scripts.pory"

# 582 "data/maps/PetalburgCity/scripts.pory"

# 583 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 584 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 585 "data/maps/PetalburgCity/scripts.pory"
	end
# 586 "data/maps/PetalburgCity/scripts.pory"

# 587 "data/maps/PetalburgCity/scripts.pory"
Petalburg_Leaf::
# 588 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 589 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 590 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_DEFEATED_LEAF, Petalburg_Leaf_2
# 591 "data/maps/PetalburgCity/scripts.pory"
	namebox CampeonaLeaf
# 592 "data/maps/PetalburgCity/scripts.pory"
	msgbox Petalburg_Leaf_Text_3
# 593 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 594 "data/maps/PetalburgCity/scripts.pory"
	hidenamebox
# 595 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_DEFEATED_LEAF
# 596 "data/maps/PetalburgCity/scripts.pory"
	removeobject 10
# 597 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 598 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 599 "data/maps/PetalburgCity/scripts.pory"
Petalburg_Leaf_1:
# 600 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 601 "data/maps/PetalburgCity/scripts.pory"
	return
# 602 "data/maps/PetalburgCity/scripts.pory"

# 603 "data/maps/PetalburgCity/scripts.pory"
Petalburg_Leaf_2:
# 604 "data/maps/PetalburgCity/scripts.pory"
	namebox Unknown
# 605 "data/maps/PetalburgCity/scripts.pory"
	msgbox Petalburg_Leaf_Text_0
# 606 "data/maps/PetalburgCity/scripts.pory"
	hidenamebox
# 607 "data/maps/PetalburgCity/scripts.pory"
	namebox CampeonaLeaf
# 608 "data/maps/PetalburgCity/scripts.pory"
	msgbox Petalburg_Leaf_Text_02
# 609 "data/maps/PetalburgCity/scripts.pory"
	hidenamebox
# 610 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_LEAF, Leaf_Defeated_Message
# 611 "data/maps/PetalburgCity/scripts.pory"
	namebox Leaf
# 612 "data/maps/PetalburgCity/scripts.pory"
	msgbox Petalburg_Leaf_Text_1
# 613 "data/maps/PetalburgCity/scripts.pory"
	hidenamebox
# 614 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_CHERISH_BALL, 30
# 615 "data/maps/PetalburgCity/scripts.pory"
	namebox Leaf
# 616 "data/maps/PetalburgCity/scripts.pory"
	msgbox Petalburg_Leaf_Text_2
# 617 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 618 "data/maps/PetalburgCity/scripts.pory"
	hidenamebox
# 619 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 620 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_DEFEATED_LEAF
# 621 "data/maps/PetalburgCity/scripts.pory"
	removeobject 10
# 622 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 623 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 624 "data/maps/PetalburgCity/scripts.pory"
	goto Petalburg_Leaf_1
# 625 "data/maps/PetalburgCity/scripts.pory"

# 626 "data/maps/PetalburgCity/scripts.pory"

# 627 "data/maps/PetalburgCity/scripts.pory"
Petalburg_Leaf_Text_0:
# 628 "data/maps/PetalburgCity/scripts.pory"
	.string "¡AH!\n"
# 629 "data/maps/PetalburgCity/scripts.pory"
	.string "¡Me encontraste!\p"
# 630 "data/maps/PetalburgCity/scripts.pory"
	.string "¡P-por favor no me hagas nada! ¡S-solo\n"
# 631 "data/maps/PetalburgCity/scripts.pory"
	.string "estoy jugando con los Pokémon Bebé\l"
# 632 "data/maps/PetalburgCity/scripts.pory"
	.string "que aparecen acá!\p"
# 633 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … …\n"
# 634 "data/maps/PetalburgCity/scripts.pory"
	.string "Ah, que solo venías a explorar…\l"
# 635 "data/maps/PetalburgCity/scripts.pory"
	.string "Entiendo…\l"
# 636 "data/maps/PetalburgCity/scripts.pory"
	.string "Pues ya que me encontraste, déjame\l"
# 637 "data/maps/PetalburgCity/scripts.pory"
	.string "contarte algo, y escucha bien que es un\l"
# 638 "data/maps/PetalburgCity/scripts.pory"
	.string "secretito importantísimo que no debe\l"
# 639 "data/maps/PetalburgCity/scripts.pory"
	.string "saber nadie pero nadie nadie, ¿sí?\p"
# 640 "data/maps/PetalburgCity/scripts.pory"
	.string "Bueeeeno, pues…\n"
# 641 "data/maps/PetalburgCity/scripts.pory"
	.string "Yo…\l"
# 642 "data/maps/PetalburgCity/scripts.pory"
	.string "Soy {COLOR GREEN}Leaf{COLOR DARK_GRAY}, y soy una de las {COLOR GREEN}Campeonas de\l"
# 643 "data/maps/PetalburgCity/scripts.pory"
	.string "la Liga Añil de Kanto{COLOR DARK_GRAY} y me propuse a\l"
# 644 "data/maps/PetalburgCity/scripts.pory"
	.string "venir a Hoenn para investigar la\l"
# 645 "data/maps/PetalburgCity/scripts.pory"
	.string "migración de Pokémon, que parece estar\l"
# 646 "data/maps/PetalburgCity/scripts.pory"
	.string "relacionada al clima. ¿Y te digo otro\l"
# 647 "data/maps/PetalburgCity/scripts.pory"
	.string "secretito más, uno que aún más\l"
# 648 "data/maps/PetalburgCity/scripts.pory"
	.string "secretoso que el otro, y que nadie\l"
# 649 "data/maps/PetalburgCity/scripts.pory"
	.string "NADIE debe saber?$"
# 650 "data/maps/PetalburgCity/scripts.pory"
Petalburg_Leaf_Text_02:
# 651 "data/maps/PetalburgCity/scripts.pory"
	.string "Bueno, bueno ahorita te cuento…\n"
# 652 "data/maps/PetalburgCity/scripts.pory"
	.string "Hace poco volví a iniciar, con un Equipo\l"
# 653 "data/maps/PetalburgCity/scripts.pory"
	.string "Pokémon nuevo bien nuevecito… Una\l"
# 654 "data/maps/PetalburgCity/scripts.pory"
	.string "nueva aventura por la Región de Hoenn,\l"
# 655 "data/maps/PetalburgCity/scripts.pory"
	.string "para investigar qué está pasando…\p"
# 656 "data/maps/PetalburgCity/scripts.pory"
	.string "Y como veo que tienes potencial, voy a\n"
# 657 "data/maps/PetalburgCity/scripts.pory"
	.string "hacer una cosita muy cositezca…\l"
# 658 "data/maps/PetalburgCity/scripts.pory"
	.string "¡Vamos a tener una Batalla, y voy a\l"
# 659 "data/maps/PetalburgCity/scripts.pory"
	.string "ganarte, JA JA JA!$"
# 660 "data/maps/PetalburgCity/scripts.pory"

# 661 "data/maps/PetalburgCity/scripts.pory"
Petalburg_Leaf_Text_1:
# 662 "data/maps/PetalburgCity/scripts.pory"
	.string "¡AH!\n"
# 663 "data/maps/PetalburgCity/scripts.pory"
	.string "¡Me ganaste!\l"
# 664 "data/maps/PetalburgCity/scripts.pory"
	.string "¡INCREÍBLE!\p"
# 665 "data/maps/PetalburgCity/scripts.pory"
	.string "¡Eres un{A} Entrenador{A}\n"
# 666 "data/maps/PetalburgCity/scripts.pory"
	.string "poderosisimisimísim{OA} de l{OA}s que ganan\l"
# 667 "data/maps/PetalburgCity/scripts.pory"
	.string "batallas batallonezcas!\p"
# 668 "data/maps/PetalburgCity/scripts.pory"
	.string "Pero bueno, bueeno, me ganaste, así que\n"
# 669 "data/maps/PetalburgCity/scripts.pory"
	.string "tengo que decirte al menos una de las\l"
# 670 "data/maps/PetalburgCity/scripts.pory"
	.string "cosas que descubrí: {COLOR GREEN}Hoenn tiene una\l"
# 671 "data/maps/PetalburgCity/scripts.pory"
	.string "gran resistencia al cambio climático{COLOR DARK_GRAY},\l"
# 672 "data/maps/PetalburgCity/scripts.pory"
	.string "pero incluso con eso, el ser humano\l"
# 673 "data/maps/PetalburgCity/scripts.pory"
	.string "sigue logrando arruinar tanto las\l"
# 674 "data/maps/PetalburgCity/scripts.pory"
	.string "cosas, que está afectando incluso a\l"
# 675 "data/maps/PetalburgCity/scripts.pory"
	.string "Hoenn.\p"
# 676 "data/maps/PetalburgCity/scripts.pory"
	.string "Mi sospecha es que los Pokémon han\n"
# 677 "data/maps/PetalburgCity/scripts.pory"
	.string "venido a Hoenn en busca de un hogar\l"
# 678 "data/maps/PetalburgCity/scripts.pory"
	.string "más seguro, pero por ahora es solo una\l"
# 679 "data/maps/PetalburgCity/scripts.pory"
	.string "teoría teorizadora, nada más ni nada\l"
# 680 "data/maps/PetalburgCity/scripts.pory"
	.string "menos.\p"
# 681 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … …\n"
# 682 "data/maps/PetalburgCity/scripts.pory"
	.string "¡Ah!\l"
# 683 "data/maps/PetalburgCity/scripts.pory"
	.string "Se me olvidaba darte algo por vencer a\l"
# 684 "data/maps/PetalburgCity/scripts.pory"
	.string "una campeona campeonística como yo.$"
# 685 "data/maps/PetalburgCity/scripts.pory"

# 686 "data/maps/PetalburgCity/scripts.pory"
Petalburg_Leaf_Text_2:
# 687 "data/maps/PetalburgCity/scripts.pory"
	.string "Es una Gloria Ball, una Pokéball\n"
# 688 "data/maps/PetalburgCity/scripts.pory"
	.string "especial creada para conmemorar un\l"
# 689 "data/maps/PetalburgCity/scripts.pory"
	.string "evento importantísimo; y tiene la\l"
# 690 "data/maps/PetalburgCity/scripts.pory"
	.string "peculiar capacidad de atrapar a los\l"
# 691 "data/maps/PetalburgCity/scripts.pory"
	.string "Pokémon raros, de esos rarísimos que\l"
# 692 "data/maps/PetalburgCity/scripts.pory"
	.string "no se dejan atrapar ni con las Ultra\l"
# 693 "data/maps/PetalburgCity/scripts.pory"
	.string "Ball ni las Ocaso Ball.\p"
# 694 "data/maps/PetalburgCity/scripts.pory"
	.string "Úsala sabiamente, pues no sirve muy\n"
# 695 "data/maps/PetalburgCity/scripts.pory"
	.string "bien con Pokémon fáciles facilitos de\l"
# 696 "data/maps/PetalburgCity/scripts.pory"
	.string "atrapar, solo con los más caprichosos.\p"
# 697 "data/maps/PetalburgCity/scripts.pory"
	.string "Bueeeeno, ya no te detengo más. ¡Sigue\n"
# 698 "data/maps/PetalburgCity/scripts.pory"
	.string "adelante! ¡Nos vemos!$"
# 699 "data/maps/PetalburgCity/scripts.pory"

# 700 "data/maps/PetalburgCity/scripts.pory"
Petalburg_Leaf_Text_3:
# 701 "data/maps/PetalburgCity/scripts.pory"
	.string "¿¿¿QUE HAGO ACÁ NO SE SUPONE QUE\n"
# 702 "data/maps/PetalburgCity/scripts.pory"
	.string "ESTÉ ACÁ QUE???$"
# 703 "data/maps/PetalburgCity/scripts.pory"
	
# 704 "data/maps/PetalburgCity/scripts.pory"
Leaf_Defeated_Message:
# 705 "data/maps/PetalburgCity/scripts.pory"
	.string "¡AH! ¡WOW!\p"
# 706 "data/maps/PetalburgCity/scripts.pory"
	.string "Los Entrenadores en Hoenn\n"
# 707 "data/maps/PetalburgCity/scripts.pory"
	.string "no dejan nada que desear!$"
# 708 "data/maps/PetalburgCity/scripts.pory"

# 709 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "¿A dónde se ha ido Wally?\p"
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "Tenemos que irnos a la\n"
# 712 "data/maps/PetalburgCity/scripts.pory"
	.string "Ciudad Verdantuff pronto…$"
# 713 "data/maps/PetalburgCity/scripts.pory"

# 714 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "¡Holis! ¿Será que eres…\n"
# 716 "data/maps/PetalburgCity/scripts.pory"
	.string "Un{A} novat{OA}?\p"
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "¡Pues ven aquí!$"
# 718 "data/maps/PetalburgCity/scripts.pory"

# 719 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "Este es el Gimnasio Petalburg.$"
# 721 "data/maps/PetalburgCity/scripts.pory"

# 722 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 723 "data/maps/PetalburgCity/scripts.pory"
	.string "¡Buena suerte!$"
# 724 "data/maps/PetalburgCity/scripts.pory"

# 725 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "Reflejada es,\n"
# 727 "data/maps/PetalburgCity/scripts.pory"
	.string "mi cara en el agua,\l"
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "melacólica.\p"
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "¿Y tu cara, cuál\n"
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "emoción reflejará?\l"
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "¿Será que lo sabrás?$"
# 732 "data/maps/PetalburgCity/scripts.pory"

# 733 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "El PC es maravilloso.\n"
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "Ojalá tuviera más espacio…$"
# 736 "data/maps/PetalburgCity/scripts.pory"

# 737 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 738 "data/maps/PetalburgCity/scripts.pory"
	.string "Gimnasio Pokémon de Petalburg\n"
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "Líder: Norman\l"
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "“¡El hombre que persigue el poder!”$"
# 741 "data/maps/PetalburgCity/scripts.pory"

# 742 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}CIUDAD PETALBURG{COLOR DARK_GRAY}\n"
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "“Donde las personas viven en armonía\l"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "con la naturaleza”$"
# 746 "data/maps/PetalburgCity/scripts.pory"

# 747 "data/maps/PetalburgCity/scripts.pory"

# 748 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 749 "data/maps/PetalburgCity/scripts.pory"
	.string "Casa de Wally$"
# 750 "data/maps/PetalburgCity/scripts.pory"

# 751 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "Hola, dime, ¿Eres un{A} Entrenador{A}?$"
# 753 "data/maps/PetalburgCity/scripts.pory"

# 754 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "Quizás no… Algo me dice, en la forma en\n"
# 756 "data/maps/PetalburgCity/scripts.pory"
	.string "la que te vistes… Que, o bien eres un{A}\l"
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "novat{OA}, o sólamente eres un{A} niñ{OA}\l"
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "ordinari{OA}…$"
# 759 "data/maps/PetalburgCity/scripts.pory"

# 760 "data/maps/PetalburgCity/scripts.pory"

# 761 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "Verás, estoy en busca de Entrenadores\n"
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "poderosos para {COLOR BLUE}un proyecto especial{COLOR DARK_GRAY}\l"
# 764 "data/maps/PetalburgCity/scripts.pory"
	.string "en el que estoy trabajando…$"
# 765 "data/maps/PetalburgCity/scripts.pory"
	
# 766 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallysMemoryKid:
# 767 "data/maps/PetalburgCity/scripts.pory"
	.string "¡Hey, Wally! ¿Qué pasa? ¿No puedes\n"
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "volver a tu casa solito sin que\l"
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "tu papito te lleve de la mano?\p"
# 770 "data/maps/PetalburgCity/scripts.pory"
	.string "¡Ja! Y pensaba que verte correr\n"
# 771 "data/maps/PetalburgCity/scripts.pory"
	.string "de los Poochyena salvajes y\l"
# 772 "data/maps/PetalburgCity/scripts.pory"
	.string "desmayarte era patético...$"
# 773 "data/maps/PetalburgCity/scripts.pory"

# 774 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallysMemory2:
# 775 "data/maps/PetalburgCity/scripts.pory"
	.string "Tranquilo, Wally, no les hagas caso.\p"
# 776 "data/maps/PetalburgCity/scripts.pory"
	.string "Sólo te dicen esas cosas porque no\n"
# 777 "data/maps/PetalburgCity/scripts.pory"
	.string "pueden ni atravesar el Bosque\l"
# 778 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg.\p"
# 779 "data/maps/PetalburgCity/scripts.pory"
	.string "Te hacen sentir mal para ellos sentirse\n"
# 780 "data/maps/PetalburgCity/scripts.pory"
	.string "mejor.$"
# 781 "data/maps/PetalburgCity/scripts.pory"

# 782 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallysMemory3:
# 783 "data/maps/PetalburgCity/scripts.pory"
	.string "Allá en Petalburg, todos me trataban\n"
# 784 "data/maps/PetalburgCity/scripts.pory"
	.string "muy mal...\p"
# 785 "data/maps/PetalburgCity/scripts.pory"
	.string "Mi papá intentaba ayudarme, pero... Sólo\n"
# 786 "data/maps/PetalburgCity/scripts.pory"
	.string "me hacía sentir peor...\p"
# 787 "data/maps/PetalburgCity/scripts.pory"
	.string "Sin un Pokémon que me protegiera, y\n"
# 788 "data/maps/PetalburgCity/scripts.pory"
	.string "estando siempre débil por mis\l"
# 789 "data/maps/PetalburgCity/scripts.pory"
	.string "enfermedades, siempre se aprovechaban\l"
# 790 "data/maps/PetalburgCity/scripts.pory"
	.string "de mí para burlarse y hacer cosas como\l"
# 791 "data/maps/PetalburgCity/scripts.pory"
	.string "empujarme hacia la hierba alta y\l"
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "escapar...$"
