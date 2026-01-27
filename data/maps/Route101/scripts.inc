Route101_EventScript_HelpMe::
# 5 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_HelpMe_Text_0
	return


Route101_EventScript_Youngster::
# 17 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Youngster_Text_0
# 23 "data/maps/Route101/scripts.pory"
	closemessage
	return


Route101_EventScript_PleaseHelp::
# 30 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_PleaseHelp_Text_0
	return


Route101_EventScript_DontLeaveMe::
# 42 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_DontLeaveMe_Text_0
	return


Route101_EventScript_YouSavedMe::
# 54 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 55 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_YouSavedMe_Text_0
# 59 "data/maps/Route101/scripts.pory"
	setspeaker Birch
# 60 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_YouSavedMe_Text_1
	return


Route101_EventScript_LoadStaticWildMons::
	return


# 125 "data/maps/Route101/scripts.pory"

# 126 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 127 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 128 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route101_OnResume
# 129 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 130 "data/maps/Route101/scripts.pory"
	.byte 0
# 131 "data/maps/Route101/scripts.pory"

# 132 "data/maps/Route101/scripts.pory"
Route101_OnResume:
# 133 "data/maps/Route101/scripts.pory"
	end
# 134 "data/maps/Route101/scripts.pory"
	
# 135 "data/maps/Route101/scripts.pory"

# 136 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 137 "data/maps/Route101/scripts.pory"
	goto Route101_OnTransition_Night
# 138 "data/maps/Route101/scripts.pory"
	end
# 139 "data/maps/Route101/scripts.pory"
	
# 140 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Night:
# 141 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 142 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_LoadStaticWildMons
# 143 "data/maps/Route101/scripts.pory"
	end
# 144 "data/maps/Route101/scripts.pory"

# 145 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Day:
# 146 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 147 "data/maps/Route101/scripts.pory"
	end
# 148 "data/maps/Route101/scripts.pory"

# 149 "data/maps/Route101/scripts.pory"

# 150 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 151 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 152 "data/maps/Route101/scripts.pory"
	.2byte 0
# 153 "data/maps/Route101/scripts.pory"

# 154 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 155 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 156 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 157 "data/maps/Route101/scripts.pory"
	end
# 158 "data/maps/Route101/scripts.pory"

# 159 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 160 "data/maps/Route101/scripts.pory"
	lockall
# 161 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 162 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 163 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_HelpMe
# 164 "data/maps/Route101/scripts.pory"
	closemessage
# 165 "data/maps/Route101/scripts.pory"
	
# 166 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 16
# 167 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 17
# 168 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 169 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway1
# 170 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 171 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 173 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 174 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 176 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 177 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 178 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 179 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 180 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 181 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_PleaseHelp
# 182 "data/maps/Route101/scripts.pory"
	closemessage
# 183 "data/maps/Route101/scripts.pory"
	
# 184 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 185 "data/maps/Route101/scripts.pory"
	releaseall
# 186 "data/maps/Route101/scripts.pory"
	end
# 187 "data/maps/Route101/scripts.pory"

# 188 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 189 "data/maps/Route101/scripts.pory"
	lockall
# 190 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 191 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 192 "data/maps/Route101/scripts.pory"
	
# 193 "data/maps/Route101/scripts.pory"
	closemessage
# 194 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 195 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route101/scripts.pory"
	releaseall
# 197 "data/maps/Route101/scripts.pory"
	end
# 198 "data/maps/Route101/scripts.pory"

# 199 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 200 "data/maps/Route101/scripts.pory"
	lockall
# 201 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 202 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 203 "data/maps/Route101/scripts.pory"
	closemessage
# 204 "data/maps/Route101/scripts.pory"
	
# 205 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 206 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 207 "data/maps/Route101/scripts.pory"
	releaseall
# 208 "data/maps/Route101/scripts.pory"
	end
# 209 "data/maps/Route101/scripts.pory"

# 210 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 211 "data/maps/Route101/scripts.pory"
	lockall
# 212 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 213 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 214 "data/maps/Route101/scripts.pory"
	closemessage
# 215 "data/maps/Route101/scripts.pory"
	
# 216 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 217 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route101/scripts.pory"
	releaseall
# 219 "data/maps/Route101/scripts.pory"
	end
# 220 "data/maps/Route101/scripts.pory"

# 221 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 222 "data/maps/Route101/scripts.pory"
	walk_up
# 223 "data/maps/Route101/scripts.pory"
	step_end
# 224 "data/maps/Route101/scripts.pory"

# 225 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 226 "data/maps/Route101/scripts.pory"
	walk_right
# 227 "data/maps/Route101/scripts.pory"
	step_end
# 228 "data/maps/Route101/scripts.pory"

# 229 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 230 "data/maps/Route101/scripts.pory"
	walk_down
# 231 "data/maps/Route101/scripts.pory"
	step_end
# 232 "data/maps/Route101/scripts.pory"

# 233 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 234 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 235 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 236 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 237 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 238 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 239 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 240 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 241 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 242 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 243 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 244 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 245 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 246 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 247 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 248 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 250 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 251 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 252 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 253 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 254 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 255 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 256 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 257 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 258 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 259 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 260 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 261 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 262 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 263 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 264 "data/maps/Route101/scripts.pory"
	step_end
# 265 "data/maps/Route101/scripts.pory"

# 266 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 267 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 268 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 269 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 270 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 271 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 272 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 273 "data/maps/Route101/scripts.pory"
	step_end
# 274 "data/maps/Route101/scripts.pory"

# 275 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 276 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 277 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 278 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 279 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 280 "data/maps/Route101/scripts.pory"
	step_end
# 281 "data/maps/Route101/scripts.pory"

# 282 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 283 "data/maps/Route101/scripts.pory"
	player_run_up
# 284 "data/maps/Route101/scripts.pory"
	player_run_up
# 285 "data/maps/Route101/scripts.pory"
	player_run_up
# 286 "data/maps/Route101/scripts.pory"
	player_run_up
# 287 "data/maps/Route101/scripts.pory"
	player_run_left
# 288 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 289 "data/maps/Route101/scripts.pory"
	step_end
# 290 "data/maps/Route101/scripts.pory"

# 291 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 292 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 293 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 294 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 295 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 296 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 297 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 298 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 299 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 300 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 301 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 302 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 303 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 304 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 305 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 306 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 307 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 308 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 309 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 310 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 311 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 312 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 313 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 314 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 315 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 316 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 317 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 318 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 319 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 320 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 321 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 322 "data/maps/Route101/scripts.pory"
	step_end
# 323 "data/maps/Route101/scripts.pory"

# 324 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 325 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 326 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 327 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 328 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 329 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 330 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 331 "data/maps/Route101/scripts.pory"
	step_end
# 332 "data/maps/Route101/scripts.pory"

# 333 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 334 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 335 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 336 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 337 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 338 "data/maps/Route101/scripts.pory"
	step_end
# 339 "data/maps/Route101/scripts.pory"

# 340 "data/maps/Route101/scripts.pory"
Route101_Movement_PokemonEscape:
# 341 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 342 "data/maps/Route101/scripts.pory"
	delay_8
# 343 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 344 "data/maps/Route101/scripts.pory"
	delay_8
# 345 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 346 "data/maps/Route101/scripts.pory"
	delay_8
# 347 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 348 "data/maps/Route101/scripts.pory"
	delay_8
# 349 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 350 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 351 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 352 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 353 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 354 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 355 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 356 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 357 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 358 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 359 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 360 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 361 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 362 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 363 "data/maps/Route101/scripts.pory"
	set_invisible
# 364 "data/maps/Route101/scripts.pory"
	step_end
# 365 "data/maps/Route101/scripts.pory"

# 366 "data/maps/Route101/scripts.pory"

# 367 "data/maps/Route101/scripts.pory"
Route101_EventScript_Night::
# 368 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter2, MSGBOX_NPC
# 369 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 95, ITEM_LEFTOVERS
# 370 "data/maps/Route101/scripts.pory"
	dowildbattle
# 371 "data/maps/Route101/scripts.pory"
	giveitem ITEM_LEFTOVERS, 10
# 372 "data/maps/Route101/scripts.pory"
	end
# 373 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 374 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 375 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 376 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 377 "data/maps/Route101/scripts.pory"
	end
# 378 "data/maps/Route101/scripts.pory"

# 379 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 380 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 381 "data/maps/Route101/scripts.pory"
	end
# 382 "data/maps/Route101/scripts.pory"

# 383 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 384 "data/maps/Route101/scripts.pory"
	lock
# 385 "data/maps/Route101/scripts.pory"
	faceplayer
# 386 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 387 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 388 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 389 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 7, 15
# 390 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Common_Movement_WalkInPlaceFasterRight
# 391 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 392 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 393 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 394 "data/maps/Route101/scripts.pory"
	waitstate
# 395 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 396 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Common_Movement_ExclamationMark
# 397 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 398 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_PokemonEscape
# 399 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 400 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 401 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 402 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_YouSavedMe
# 403 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 404 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 405 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 406 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 407 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 408 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 409 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 410 "data/maps/Route101/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 411 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 412 "data/maps/Route101/scripts.pory"
	checkplayergender
# 413 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 414 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 415 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 416 "data/maps/Route101/scripts.pory"
	waitstate
# 417 "data/maps/Route101/scripts.pory"
	release
# 418 "data/maps/Route101/scripts.pory"
	end
# 419 "data/maps/Route101/scripts.pory"

# 420 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 421 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 422 "data/maps/Route101/scripts.pory"
	return
# 423 "data/maps/Route101/scripts.pory"

# 424 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 425 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 426 "data/maps/Route101/scripts.pory"
	return
# 427 "data/maps/Route101/scripts.pory"

# 428 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 429 "data/maps/Route101/scripts.pory"
	walk_right
# 430 "data/maps/Route101/scripts.pory"
	step_end
# 431 "data/maps/Route101/scripts.pory"

# 432 "data/maps/Route101/scripts.pory"

# 433 "data/maps/Route101/scripts.pory"

# 434 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter2:
# 435 "data/maps/Route101/scripts.pory"
	.string "¡{STR_VAR_1}!$"
# 436 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 437 "data/maps/Route101/scripts.pory"
	.string "Los Pokémon salvajes te atacarán\n"
# 438 "data/maps/Route101/scripts.pory"
	.string "sin pensar en la hierba alta.\p"
# 439 "data/maps/Route101/scripts.pory"
	.string "¡Ten cuidado en las Rutas!$"
# 440 "data/maps/Route101/scripts.pory"

# 441 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 442 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_RED SHADOW RED}RUTA 101{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
# 443 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} {COLOR LIGHT_GREEN SHADOW GREEN}PUEBLO OLDALE{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\l"
# 444 "data/maps/Route101/scripts.pory"
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
# 30 "data/maps/Route101/scripts.pory"
	.string "¡Tú, ayúdame, soy alérgico a este\n"
	.string "Pokémon, y olvidé mi EPI-Pen!\p"
	.string "¡Usa las PokéBall que están en mi\n"
	.string "maletín!$"

Route101_EventScript_DontLeaveMe_Text_0:
# 42 "data/maps/Route101/scripts.pory"
	.string "{SHAKE_SCREEN 3 3 2 3}¡No me dejes así!$"

Route101_EventScript_YouSavedMe_Text_0:
# 55 "data/maps/Route101/scripts.pory"
	.string "¡UFF! {SHAKE_SCREEN 2 3 2 1}¡MUCHÍSIMAS GRACIAS!\p"
	.string "Eso estuvo cerca…\n"
	.string "Estaba estudiando los Pokémon de\l"
	.string "esta ruta, y me atacó un Zigzagoon…\p"
	.string "¡Por cierto, yo soy el {COLOR BLUE}Profesor Birch{COLOR DARK_GRAY}!$"

Route101_EventScript_YouSavedMe_Text_1:
# 60 "data/maps/Route101/scripts.pory"
	.string "¡Encantado!\n"
	.string "Te invito a mi Laboratorio para\l"
	.string "charlar más.$"
