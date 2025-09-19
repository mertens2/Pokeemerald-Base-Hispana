Route101_EventScript_HelpMe::
# 5 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_HelpMe_Text_0
	return


Route101_EventScript_Youngster::
# 17 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Youngster_Text_0
	return


Route101_EventScript_PleaseHelp::
# 29 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_PleaseHelp_Text_0
	return


Route101_EventScript_DontLeaveMe::
# 41 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_DontLeaveMe_Text_0
	return


Route101_EventScript_YouSavedMe::
# 53 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 54 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_YouSavedMe_Text_0
# 57 "data/maps/Route101/scripts.pory"
	hidenamebox
# 58 "data/maps/Route101/scripts.pory"
	namebox Birch
# 59 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_YouSavedMe_Text_1
# 60 "data/maps/Route101/scripts.pory"
	hidenamebox
	return


# 75 "data/maps/Route101/scripts.pory"

# 76 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 77 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 78 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route101_OnResume
# 79 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 80 "data/maps/Route101/scripts.pory"
	.byte 0
# 81 "data/maps/Route101/scripts.pory"

# 82 "data/maps/Route101/scripts.pory"
Route101_OnResume:
# 83 "data/maps/Route101/scripts.pory"
	end
# 84 "data/maps/Route101/scripts.pory"
	
# 85 "data/maps/Route101/scripts.pory"

# 86 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 87 "data/maps/Route101/scripts.pory"
	goto Route101_OnTransition_Night
# 88 "data/maps/Route101/scripts.pory"
	end
# 89 "data/maps/Route101/scripts.pory"
	
# 90 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Night:
# 91 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 92 "data/maps/Route101/scripts.pory"
	end
# 93 "data/maps/Route101/scripts.pory"

# 94 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Day:
# 95 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 96 "data/maps/Route101/scripts.pory"
	end
# 97 "data/maps/Route101/scripts.pory"

# 98 "data/maps/Route101/scripts.pory"

# 99 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 100 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 101 "data/maps/Route101/scripts.pory"
	.2byte 0
# 102 "data/maps/Route101/scripts.pory"

# 103 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 104 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 105 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 106 "data/maps/Route101/scripts.pory"
	end
# 107 "data/maps/Route101/scripts.pory"

# 108 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 109 "data/maps/Route101/scripts.pory"
	lockall
# 110 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 111 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 112 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_HelpMe
# 113 "data/maps/Route101/scripts.pory"
	closemessage
# 114 "data/maps/Route101/scripts.pory"
	hidenamebox
# 115 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 16
# 116 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 17
# 117 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 118 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway1
# 119 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 120 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 122 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 123 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 125 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 127 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 128 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 130 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_PleaseHelp
# 131 "data/maps/Route101/scripts.pory"
	closemessage
# 132 "data/maps/Route101/scripts.pory"
	hidenamebox
# 133 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 134 "data/maps/Route101/scripts.pory"
	releaseall
# 135 "data/maps/Route101/scripts.pory"
	end
# 136 "data/maps/Route101/scripts.pory"

# 137 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 138 "data/maps/Route101/scripts.pory"
	lockall
# 139 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 140 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 141 "data/maps/Route101/scripts.pory"
	hidenamebox
# 142 "data/maps/Route101/scripts.pory"
	closemessage
# 143 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 144 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route101/scripts.pory"
	releaseall
# 146 "data/maps/Route101/scripts.pory"
	end
# 147 "data/maps/Route101/scripts.pory"

# 148 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 149 "data/maps/Route101/scripts.pory"
	lockall
# 150 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 151 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 152 "data/maps/Route101/scripts.pory"
	closemessage
# 153 "data/maps/Route101/scripts.pory"
	hidenamebox
# 154 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 155 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route101/scripts.pory"
	releaseall
# 157 "data/maps/Route101/scripts.pory"
	end
# 158 "data/maps/Route101/scripts.pory"

# 159 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 160 "data/maps/Route101/scripts.pory"
	lockall
# 161 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 162 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 163 "data/maps/Route101/scripts.pory"
	closemessage
# 164 "data/maps/Route101/scripts.pory"
	hidenamebox
# 165 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 166 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route101/scripts.pory"
	releaseall
# 168 "data/maps/Route101/scripts.pory"
	end
# 169 "data/maps/Route101/scripts.pory"

# 170 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 171 "data/maps/Route101/scripts.pory"
	walk_up
# 172 "data/maps/Route101/scripts.pory"
	step_end
# 173 "data/maps/Route101/scripts.pory"

# 174 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 175 "data/maps/Route101/scripts.pory"
	walk_right
# 176 "data/maps/Route101/scripts.pory"
	step_end
# 177 "data/maps/Route101/scripts.pory"

# 178 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 179 "data/maps/Route101/scripts.pory"
	walk_down
# 180 "data/maps/Route101/scripts.pory"
	step_end
# 181 "data/maps/Route101/scripts.pory"

# 182 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 187 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 188 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 195 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 196 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 197 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 198 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 199 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 200 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 201 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 202 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 203 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 204 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 205 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 206 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 207 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 208 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 209 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 211 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 212 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 213 "data/maps/Route101/scripts.pory"
	step_end
# 214 "data/maps/Route101/scripts.pory"

# 215 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 216 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 217 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 218 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 219 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 220 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 222 "data/maps/Route101/scripts.pory"
	step_end
# 223 "data/maps/Route101/scripts.pory"

# 224 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 225 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 226 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 227 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 228 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 229 "data/maps/Route101/scripts.pory"
	step_end
# 230 "data/maps/Route101/scripts.pory"

# 231 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 232 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 233 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 234 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 235 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 236 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 237 "data/maps/Route101/scripts.pory"
	step_end
# 238 "data/maps/Route101/scripts.pory"

# 239 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 240 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 241 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 242 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 243 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 245 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 246 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 247 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 248 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 249 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 250 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 251 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 252 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 253 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 254 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 255 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 256 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 257 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 258 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 259 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 260 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 261 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 262 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 263 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 264 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 265 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 266 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 267 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 268 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 269 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 270 "data/maps/Route101/scripts.pory"
	step_end
# 271 "data/maps/Route101/scripts.pory"

# 272 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 273 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 274 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 275 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 276 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 277 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 278 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 279 "data/maps/Route101/scripts.pory"
	step_end
# 280 "data/maps/Route101/scripts.pory"

# 281 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 282 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 283 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 284 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 285 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 286 "data/maps/Route101/scripts.pory"
	step_end
# 287 "data/maps/Route101/scripts.pory"

# 288 "data/maps/Route101/scripts.pory"
Route101_Movement_PokemonEscape:
# 289 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 290 "data/maps/Route101/scripts.pory"
	delay_8
# 291 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 292 "data/maps/Route101/scripts.pory"
	delay_8
# 293 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 294 "data/maps/Route101/scripts.pory"
	delay_8
# 295 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 296 "data/maps/Route101/scripts.pory"
	delay_8
# 297 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 298 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 299 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 300 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 301 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 302 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 303 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 304 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 305 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 306 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 307 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 308 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 309 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 310 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 311 "data/maps/Route101/scripts.pory"
	set_invisible
# 312 "data/maps/Route101/scripts.pory"
	step_end
# 313 "data/maps/Route101/scripts.pory"

# 314 "data/maps/Route101/scripts.pory"

# 315 "data/maps/Route101/scripts.pory"
Route101_EventScript_Night::
# 316 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter2, MSGBOX_NPC
# 317 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 95, ITEM_LEFTOVERS
# 318 "data/maps/Route101/scripts.pory"
	dowildbattle
# 319 "data/maps/Route101/scripts.pory"
	giveitem ITEM_LEFTOVERS, 10
# 320 "data/maps/Route101/scripts.pory"
	end
# 321 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 322 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 323 "data/maps/Route101/scripts.pory"
	end
# 324 "data/maps/Route101/scripts.pory"

# 325 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 326 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 327 "data/maps/Route101/scripts.pory"
	end
# 328 "data/maps/Route101/scripts.pory"

# 329 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 330 "data/maps/Route101/scripts.pory"
	lock
# 331 "data/maps/Route101/scripts.pory"
	faceplayer
# 332 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 333 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 334 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 335 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 7, 15
# 336 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Common_Movement_WalkInPlaceFasterRight
# 337 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 338 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 339 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 340 "data/maps/Route101/scripts.pory"
	waitstate
# 341 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 342 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Common_Movement_ExclamationMark
# 343 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 344 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_PokemonEscape
# 345 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 346 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 347 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 348 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_YouSavedMe
# 349 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 350 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 351 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 352 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 353 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 354 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 355 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 356 "data/maps/Route101/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 357 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 358 "data/maps/Route101/scripts.pory"
	checkplayergender
# 359 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 360 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 361 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 362 "data/maps/Route101/scripts.pory"
	waitstate
# 363 "data/maps/Route101/scripts.pory"
	release
# 364 "data/maps/Route101/scripts.pory"
	end
# 365 "data/maps/Route101/scripts.pory"

# 366 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 367 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 368 "data/maps/Route101/scripts.pory"
	return
# 369 "data/maps/Route101/scripts.pory"

# 370 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 371 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 372 "data/maps/Route101/scripts.pory"
	return
# 373 "data/maps/Route101/scripts.pory"

# 374 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 375 "data/maps/Route101/scripts.pory"
	walk_right
# 376 "data/maps/Route101/scripts.pory"
	step_end
# 377 "data/maps/Route101/scripts.pory"

# 378 "data/maps/Route101/scripts.pory"

# 379 "data/maps/Route101/scripts.pory"

# 380 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter2:
# 381 "data/maps/Route101/scripts.pory"
	.string "¡{STR_VAR_1}!$"
# 382 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 383 "data/maps/Route101/scripts.pory"
	.string "Los Pokémon salvajes te atacarán\n"
# 384 "data/maps/Route101/scripts.pory"
	.string "sin pensar en la hierba alta.\p"
# 385 "data/maps/Route101/scripts.pory"
	.string "¡Ten cuidado en las Rutas!$"
# 386 "data/maps/Route101/scripts.pory"

# 387 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 388 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_RED SHADOW RED}RUTA 101{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
# 389 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} {COLOR LIGHT_GREEN SHADOW GREEN}PUEBLO OLDALE{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\l"
# 390 "data/maps/Route101/scripts.pory"
	.string "{DOWN_ARROW} {COLOR LIGHT_GREEN SHADOW GREEN}VILLA LITTLEROOT{COLOR DARK_GRAY SHADOW LIGHT_GRAY}$"

Route101_EventScript_HelpMe_Text_0:
# 5 "data/maps/Route101/scripts.pory"
	.string "¡ALGUIEN, {SHAKE_SCREEN 3 3 2 3}AYÚDEME!$"

Route101_EventScript_Youngster_Text_0:
# 17 "data/maps/Route101/scripts.pory"
	.string "Es raro pensar en cómo cambian las\n"
	.string "cosas, ¿No te parece?\p"
	.string "Hace mucho, ¡Solíamos temer a los\n"
	.string "Pokémon!\l"
	.string "¿Te imaginas temerle a un Ralts?\l"
	.string "¡JAJAJA!$"

Route101_EventScript_PleaseHelp_Text_0:
# 29 "data/maps/Route101/scripts.pory"
	.string "¡Tú, ayúdame, soy alérgico a este\n"
	.string "Pokémon, y olvidé mi EPI-Pen!\p"
	.string "¡Usa las PokéBall que están en mi\n"
	.string "maletín!$"

Route101_EventScript_DontLeaveMe_Text_0:
# 41 "data/maps/Route101/scripts.pory"
	.string "{SHAKE_SCREEN 3 3 2 3}¡No me dejes así!$"

Route101_EventScript_YouSavedMe_Text_0:
# 54 "data/maps/Route101/scripts.pory"
	.string "¡UFF! {SHAKE_SCREEN 2 3 2 1}¡MUCHÍSIMAS GRACIAS!\p"
	.string "Eso estuvo cerca…\n"
	.string "Estaba estudiando los Pokémon de\l"
	.string "esta ruta, y me atacó un Zigzagoon…\p"
	.string "¡Por cierto, yo soy el {COLOR BLUE}Profesor Birch{COLOR DARK_GRAY}!$"

Route101_EventScript_YouSavedMe_Text_1:
# 59 "data/maps/Route101/scripts.pory"
	.string "¡Encantado!\n"
	.string "Te invito a mi Laboratorio para\l"
	.string "charlar más.$"
