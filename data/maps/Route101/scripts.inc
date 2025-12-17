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


Route101_EventScript_LoadStaticWildMons::
	return


# 124 "data/maps/Route101/scripts.pory"

# 125 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 126 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 127 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route101_OnResume
# 128 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 129 "data/maps/Route101/scripts.pory"
	.byte 0
# 130 "data/maps/Route101/scripts.pory"

# 131 "data/maps/Route101/scripts.pory"
Route101_OnResume:
# 132 "data/maps/Route101/scripts.pory"
	end
# 133 "data/maps/Route101/scripts.pory"
	
# 134 "data/maps/Route101/scripts.pory"

# 135 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 136 "data/maps/Route101/scripts.pory"
	goto Route101_OnTransition_Night
# 137 "data/maps/Route101/scripts.pory"
	end
# 138 "data/maps/Route101/scripts.pory"
	
# 139 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Night:
# 140 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 141 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_LoadStaticWildMons
# 142 "data/maps/Route101/scripts.pory"
	end
# 143 "data/maps/Route101/scripts.pory"

# 144 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Day:
# 145 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 146 "data/maps/Route101/scripts.pory"
	end
# 147 "data/maps/Route101/scripts.pory"

# 148 "data/maps/Route101/scripts.pory"

# 149 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 150 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 151 "data/maps/Route101/scripts.pory"
	.2byte 0
# 152 "data/maps/Route101/scripts.pory"

# 153 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 154 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 155 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 156 "data/maps/Route101/scripts.pory"
	end
# 157 "data/maps/Route101/scripts.pory"

# 158 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 159 "data/maps/Route101/scripts.pory"
	lockall
# 160 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 161 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 162 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_HelpMe
# 163 "data/maps/Route101/scripts.pory"
	closemessage
# 164 "data/maps/Route101/scripts.pory"
	hidenamebox
# 165 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 16
# 166 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 17
# 167 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 168 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway1
# 169 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 170 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 171 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 172 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 173 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 175 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 176 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 177 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 178 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 179 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 180 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_PleaseHelp
# 181 "data/maps/Route101/scripts.pory"
	closemessage
# 182 "data/maps/Route101/scripts.pory"
	hidenamebox
# 183 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 184 "data/maps/Route101/scripts.pory"
	releaseall
# 185 "data/maps/Route101/scripts.pory"
	end
# 186 "data/maps/Route101/scripts.pory"

# 187 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 188 "data/maps/Route101/scripts.pory"
	lockall
# 189 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 190 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 191 "data/maps/Route101/scripts.pory"
	hidenamebox
# 192 "data/maps/Route101/scripts.pory"
	closemessage
# 193 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 194 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route101/scripts.pory"
	releaseall
# 196 "data/maps/Route101/scripts.pory"
	end
# 197 "data/maps/Route101/scripts.pory"

# 198 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 199 "data/maps/Route101/scripts.pory"
	lockall
# 200 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 201 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 202 "data/maps/Route101/scripts.pory"
	closemessage
# 203 "data/maps/Route101/scripts.pory"
	hidenamebox
# 204 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 205 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 206 "data/maps/Route101/scripts.pory"
	releaseall
# 207 "data/maps/Route101/scripts.pory"
	end
# 208 "data/maps/Route101/scripts.pory"

# 209 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 210 "data/maps/Route101/scripts.pory"
	lockall
# 211 "data/maps/Route101/scripts.pory"
	namebox Unknown
# 212 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 213 "data/maps/Route101/scripts.pory"
	closemessage
# 214 "data/maps/Route101/scripts.pory"
	hidenamebox
# 215 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 216 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route101/scripts.pory"
	releaseall
# 218 "data/maps/Route101/scripts.pory"
	end
# 219 "data/maps/Route101/scripts.pory"

# 220 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 221 "data/maps/Route101/scripts.pory"
	walk_up
# 222 "data/maps/Route101/scripts.pory"
	step_end
# 223 "data/maps/Route101/scripts.pory"

# 224 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 225 "data/maps/Route101/scripts.pory"
	walk_right
# 226 "data/maps/Route101/scripts.pory"
	step_end
# 227 "data/maps/Route101/scripts.pory"

# 228 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 229 "data/maps/Route101/scripts.pory"
	walk_down
# 230 "data/maps/Route101/scripts.pory"
	step_end
# 231 "data/maps/Route101/scripts.pory"

# 232 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 233 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 234 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 235 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 236 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 237 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 238 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 239 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 240 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 241 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 242 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 243 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 244 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 245 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 246 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 247 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 248 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 250 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 251 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 252 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 253 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 254 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 255 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 256 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 257 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 258 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 259 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 260 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 261 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 262 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 263 "data/maps/Route101/scripts.pory"
	step_end
# 264 "data/maps/Route101/scripts.pory"

# 265 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 266 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 267 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 268 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 269 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 270 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 271 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 272 "data/maps/Route101/scripts.pory"
	step_end
# 273 "data/maps/Route101/scripts.pory"

# 274 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 275 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 276 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 277 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 278 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 279 "data/maps/Route101/scripts.pory"
	step_end
# 280 "data/maps/Route101/scripts.pory"

# 281 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 282 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 283 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 284 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 285 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 286 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 287 "data/maps/Route101/scripts.pory"
	step_end
# 288 "data/maps/Route101/scripts.pory"

# 289 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 290 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 291 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 292 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 293 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 294 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 295 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 296 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 297 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 298 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 299 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 300 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 301 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 302 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 303 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 304 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 305 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 306 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 307 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 308 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 309 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 310 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 311 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 312 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 313 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 314 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 315 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 316 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 317 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 318 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 319 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 320 "data/maps/Route101/scripts.pory"
	step_end
# 321 "data/maps/Route101/scripts.pory"

# 322 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 323 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 324 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 325 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 326 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 327 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 328 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 329 "data/maps/Route101/scripts.pory"
	step_end
# 330 "data/maps/Route101/scripts.pory"

# 331 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 332 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 333 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 334 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 335 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 336 "data/maps/Route101/scripts.pory"
	step_end
# 337 "data/maps/Route101/scripts.pory"

# 338 "data/maps/Route101/scripts.pory"
Route101_Movement_PokemonEscape:
# 339 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 340 "data/maps/Route101/scripts.pory"
	delay_8
# 341 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 342 "data/maps/Route101/scripts.pory"
	delay_8
# 343 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 344 "data/maps/Route101/scripts.pory"
	delay_8
# 345 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 346 "data/maps/Route101/scripts.pory"
	delay_8
# 347 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 348 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 349 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 350 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 351 "data/maps/Route101/scripts.pory"
	walk_fast_right
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
	walk_fast_left
# 360 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 361 "data/maps/Route101/scripts.pory"
	set_invisible
# 362 "data/maps/Route101/scripts.pory"
	step_end
# 363 "data/maps/Route101/scripts.pory"

# 364 "data/maps/Route101/scripts.pory"

# 365 "data/maps/Route101/scripts.pory"
Route101_EventScript_Night::
# 366 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter2, MSGBOX_NPC
# 367 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 95, ITEM_LEFTOVERS
# 368 "data/maps/Route101/scripts.pory"
	dowildbattle
# 369 "data/maps/Route101/scripts.pory"
	giveitem ITEM_LEFTOVERS, 10
# 370 "data/maps/Route101/scripts.pory"
	end
# 371 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 372 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 373 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 374 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 375 "data/maps/Route101/scripts.pory"
	end
# 376 "data/maps/Route101/scripts.pory"

# 377 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 378 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 379 "data/maps/Route101/scripts.pory"
	end
# 380 "data/maps/Route101/scripts.pory"

# 381 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 382 "data/maps/Route101/scripts.pory"
	lock
# 383 "data/maps/Route101/scripts.pory"
	faceplayer
# 384 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 385 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 386 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 387 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 7, 15
# 388 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Common_Movement_WalkInPlaceFasterRight
# 389 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 390 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 392 "data/maps/Route101/scripts.pory"
	waitstate
# 393 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 394 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Common_Movement_ExclamationMark
# 395 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 396 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_PokemonEscape
# 397 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 398 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 399 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 400 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_YouSavedMe
# 401 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 402 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 403 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 404 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 405 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 406 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 407 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 408 "data/maps/Route101/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 409 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 410 "data/maps/Route101/scripts.pory"
	checkplayergender
# 411 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 412 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 413 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 414 "data/maps/Route101/scripts.pory"
	waitstate
# 415 "data/maps/Route101/scripts.pory"
	release
# 416 "data/maps/Route101/scripts.pory"
	end
# 417 "data/maps/Route101/scripts.pory"

# 418 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 419 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 420 "data/maps/Route101/scripts.pory"
	return
# 421 "data/maps/Route101/scripts.pory"

# 422 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 423 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 424 "data/maps/Route101/scripts.pory"
	return
# 425 "data/maps/Route101/scripts.pory"

# 426 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 427 "data/maps/Route101/scripts.pory"
	walk_right
# 428 "data/maps/Route101/scripts.pory"
	step_end
# 429 "data/maps/Route101/scripts.pory"

# 430 "data/maps/Route101/scripts.pory"

# 431 "data/maps/Route101/scripts.pory"

# 432 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter2:
# 433 "data/maps/Route101/scripts.pory"
	.string "¡{STR_VAR_1}!$"
# 434 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 435 "data/maps/Route101/scripts.pory"
	.string "Los Pokémon salvajes te atacarán\n"
# 436 "data/maps/Route101/scripts.pory"
	.string "sin pensar en la hierba alta.\p"
# 437 "data/maps/Route101/scripts.pory"
	.string "¡Ten cuidado en las Rutas!$"
# 438 "data/maps/Route101/scripts.pory"

# 439 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 440 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_RED SHADOW RED}RUTA 101{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
# 441 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} {COLOR LIGHT_GREEN SHADOW GREEN}PUEBLO OLDALE{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\l"
# 442 "data/maps/Route101/scripts.pory"
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
