# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 3 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 4 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 5 "data/maps/Route101/scripts.pory"
	.byte 0
# 6 "data/maps/Route101/scripts.pory"

# 7 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 8 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 9 "data/maps/Route101/scripts.pory"
	end
# 10 "data/maps/Route101/scripts.pory"

# 11 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 12 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 13 "data/maps/Route101/scripts.pory"
	.2byte 0
# 14 "data/maps/Route101/scripts.pory"

# 15 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 16 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 17 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 18 "data/maps/Route101/scripts.pory"
	end
# 19 "data/maps/Route101/scripts.pory"

# 20 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 21 "data/maps/Route101/scripts.pory"
	lockall
# 22 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 23 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 24 "data/maps/Route101/scripts.pory"
	closemessage
# 25 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 15
# 26 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 16
# 27 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_EnterScene
# 28 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway1
# 29 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 30 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 32 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 33 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 35 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 37 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 38 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 40 "data/maps/Route101/scripts.pory"
	closemessage
# 41 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 42 "data/maps/Route101/scripts.pory"
	releaseall
# 43 "data/maps/Route101/scripts.pory"
	end
# 44 "data/maps/Route101/scripts.pory"

# 45 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 46 "data/maps/Route101/scripts.pory"
	lockall
# 47 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 48 "data/maps/Route101/scripts.pory"
	closemessage
# 49 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitSouth
# 50 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route101/scripts.pory"
	releaseall
# 52 "data/maps/Route101/scripts.pory"
	end
# 53 "data/maps/Route101/scripts.pory"

# 54 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 55 "data/maps/Route101/scripts.pory"
	lockall
# 56 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 57 "data/maps/Route101/scripts.pory"
	closemessage
# 58 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitWest
# 59 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route101/scripts.pory"
	releaseall
# 61 "data/maps/Route101/scripts.pory"
	end
# 62 "data/maps/Route101/scripts.pory"

# 63 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 64 "data/maps/Route101/scripts.pory"
	lockall
# 65 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 66 "data/maps/Route101/scripts.pory"
	closemessage
# 67 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_Movement_PreventExitNorth
# 68 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route101/scripts.pory"
	releaseall
# 70 "data/maps/Route101/scripts.pory"
	end
# 71 "data/maps/Route101/scripts.pory"

# 72 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 73 "data/maps/Route101/scripts.pory"
	walk_up
# 74 "data/maps/Route101/scripts.pory"
	step_end
# 75 "data/maps/Route101/scripts.pory"

# 76 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 77 "data/maps/Route101/scripts.pory"
	walk_right
# 78 "data/maps/Route101/scripts.pory"
	step_end
# 79 "data/maps/Route101/scripts.pory"

# 80 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 81 "data/maps/Route101/scripts.pory"
	walk_down
# 82 "data/maps/Route101/scripts.pory"
	step_end
# 83 "data/maps/Route101/scripts.pory"

# 84 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 85 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 86 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 87 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 88 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 89 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 90 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 115 "data/maps/Route101/scripts.pory"
	step_end
# 116 "data/maps/Route101/scripts.pory"

# 117 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 124 "data/maps/Route101/scripts.pory"
	step_end
# 125 "data/maps/Route101/scripts.pory"

# 126 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 127 "data/maps/Route101/scripts.pory"
	step_end
# 128 "data/maps/Route101/scripts.pory"

# 129 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 130 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 131 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 132 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 133 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 134 "data/maps/Route101/scripts.pory"
	step_end
# 135 "data/maps/Route101/scripts.pory"

# 136 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 141 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 142 "data/maps/Route101/scripts.pory"
	step_end
# 143 "data/maps/Route101/scripts.pory"

# 144 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 147 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route101/scripts.pory"
	step_end
# 176 "data/maps/Route101/scripts.pory"

# 177 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 184 "data/maps/Route101/scripts.pory"
	step_end
# 185 "data/maps/Route101/scripts.pory"

# 186 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 187 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 188 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 189 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 190 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 191 "data/maps/Route101/scripts.pory"
	step_end
# 192 "data/maps/Route101/scripts.pory"

# 193 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 194 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 195 "data/maps/Route101/scripts.pory"
	end
# 196 "data/maps/Route101/scripts.pory"

# 197 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 198 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 199 "data/maps/Route101/scripts.pory"
	end
# 200 "data/maps/Route101/scripts.pory"

# 201 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 202 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 203 "data/maps/Route101/scripts.pory"
	end
# 204 "data/maps/Route101/scripts.pory"

# 205 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 206 "data/maps/Route101/scripts.pory"
	lock
# 207 "data/maps/Route101/scripts.pory"
	faceplayer
# 208 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 209 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 210 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 211 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 212 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_PLAYER, 6, 13
# 213 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 214 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 216 "data/maps/Route101/scripts.pory"
	waitstate
# 217 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 218 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 219 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 220 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 221 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 222 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 223 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 224 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 225 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 226 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 227 "data/maps/Route101/scripts.pory"
	checkplayergender
# 228 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 229 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 230 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 231 "data/maps/Route101/scripts.pory"
	waitstate
# 232 "data/maps/Route101/scripts.pory"
	release
# 233 "data/maps/Route101/scripts.pory"
	end
# 234 "data/maps/Route101/scripts.pory"

# 235 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 236 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 237 "data/maps/Route101/scripts.pory"
	return
# 238 "data/maps/Route101/scripts.pory"

# 239 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 240 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 241 "data/maps/Route101/scripts.pory"
	return
# 242 "data/maps/Route101/scripts.pory"

# 243 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 244 "data/maps/Route101/scripts.pory"
	walk_right
# 245 "data/maps/Route101/scripts.pory"
	step_end
# 246 "data/maps/Route101/scripts.pory"

# 247 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 248 "data/maps/Route101/scripts.pory"
	.string "¡Socorro! ¡Ayuda!$"
# 249 "data/maps/Route101/scripts.pory"

# 250 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 251 "data/maps/Route101/scripts.pory"
	.string "¡Oye! ¡Sí, tú!\n"
# 252 "data/maps/Route101/scripts.pory"
	.string "¡Ayúdame, por favor!\p"
# 253 "data/maps/Route101/scripts.pory"
	.string "¡En mi MOCHILA hay POKé BALLS!\n"
# 254 "data/maps/Route101/scripts.pory"
	.string "¡Usa una!$"
# 255 "data/maps/Route101/scripts.pory"

# 256 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 257 "data/maps/Route101/scripts.pory"
	.string "Pe-pero… ¡¿adónde vas?!\n"
# 258 "data/maps/Route101/scripts.pory"
	.string "¡¡¡No me dejes así!!!$"
# 259 "data/maps/Route101/scripts.pory"

# 260 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 261 "data/maps/Route101/scripts.pory"
	.string "PROF. ABEDUL: Uf…\p"
# 262 "data/maps/Route101/scripts.pory"
	.string "Estaba en la zona de hierba alta\n"
# 263 "data/maps/Route101/scripts.pory"
	.string "estudiando POKéMON salvajes\l"
# 264 "data/maps/Route101/scripts.pory"
	.string "cuando me atacó uno…\p"
# 265 "data/maps/Route101/scripts.pory"
	.string "Me has salvado.\n"
# 266 "data/maps/Route101/scripts.pory"
	.string "¡Muchísimas gracias!\p"
# 267 "data/maps/Route101/scripts.pory"
	.string "¡Anda!\p"
# 268 "data/maps/Route101/scripts.pory"
	.string "¡Si eres {PLAYER}{KUN}!\p"
# 269 "data/maps/Route101/scripts.pory"
	.string "Éste no es lugar para charlas, así que\n"
# 270 "data/maps/Route101/scripts.pory"
	.string "vente conmigo a mi LABORATORIO\l"
# 271 "data/maps/Route101/scripts.pory"
	.string "POKéMON, ¿vale?$"
# 272 "data/maps/Route101/scripts.pory"

# 273 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 274 "data/maps/Route101/scripts.pory"
	.string "Si tus POKéMON están cansados,\n"
# 275 "data/maps/Route101/scripts.pory"
	.string "llévalos a un CENTRO POKéMON.\p"
# 276 "data/maps/Route101/scripts.pory"
	.string "Hay un CENTRO POKéMON en PUEBLO\n"
# 277 "data/maps/Route101/scripts.pory"
	.string "ESCASO, muy cerca de aquí.$"
# 278 "data/maps/Route101/scripts.pory"

# 279 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 280 "data/maps/Route101/scripts.pory"
	.string "Los POKéMON salvajes te atacarán\n"
# 281 "data/maps/Route101/scripts.pory"
	.string "en las zonas de hierba alta.\p"
# 282 "data/maps/Route101/scripts.pory"
	.string "Si quieres atrapar POKéMON, ve donde\n"
# 283 "data/maps/Route101/scripts.pory"
	.string "haya hierba alta y busca.$"
# 284 "data/maps/Route101/scripts.pory"

# 285 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 286 "data/maps/Route101/scripts.pory"
	.string "RUTA 101\n"
# 287 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} PUEBLO ESCASO$"
