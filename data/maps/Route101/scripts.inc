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


Route101_EventScript_StartMewEvent::
# 126 "data/maps/Route101/scripts.pory"
	lockall
# 127 "data/maps/Route101/scripts.pory"
	faceplayer
# 128 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RaltsIsEagerForBattle, MSGBOX_YESNO
# 129 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route101_EventScript_StartMewEvent_2
# 161 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RaltsIsMad
Route101_EventScript_StartMewEvent_1:
# 163 "data/maps/Route101/scripts.pory"
	closemessage
# 164 "data/maps/Route101/scripts.pory"
	releaseall
	return

Route101_EventScript_StartMewEvent_2:
# 130 "data/maps/Route101/scripts.pory"
	setflag B_SMART_WILD_AI_FLAG
# 131 "data/maps/Route101/scripts.pory"
	setflag B_FLAG_NO_CATCHING
# 132 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_RALTS, 20, ITEM_ORAN_BERRY
# 133 "data/maps/Route101/scripts.pory"
	dowildbattle
# 134 "data/maps/Route101/scripts.pory"
	clearflag B_SMART_WILD_AI_FLAG
# 135 "data/maps/Route101/scripts.pory"
	clearflag B_FLAG_NO_CATCHING
# 136 "data/maps/Route101/scripts.pory"
	addvar VAR_MEW_EVENT, 1
# 137 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_RALTS_R101, Route101_Movement_RevealTrueFormStart
# 138 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 139 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_RALTS_R101
# 140 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_RALTS_R101
# 141 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MEW_R101
# 142 "data/maps/Route101/scripts.pory"
	addobject LOCALID_MEW_R101
# 143 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_MEW_R101, Route101_Movement_RevealTrueForm
# 144 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 146 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 147 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route101/scripts.pory"
	delay 32
# 149 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 150 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_MEW_R101
# 151 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MEW_R101
# 152 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_NORMAL
# 153 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_StartMewEvent_Text_0
# 154 "data/maps/Route101/scripts.pory"
	waitmoncry
# 155 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 156 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 158 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RaltsWasMew
	goto Route101_EventScript_StartMewEvent_1


# 167 "data/maps/Route101/scripts.pory"
Route101_Movement_RevealTrueFormStart:
# 168 "data/maps/Route101/scripts.pory"
	face_down
# 169 "data/maps/Route101/scripts.pory"
	set_invisible
# 170 "data/maps/Route101/scripts.pory"
	delay_16
# 171 "data/maps/Route101/scripts.pory"
	set_visible
# 172 "data/maps/Route101/scripts.pory"
	delay_16
# 173 "data/maps/Route101/scripts.pory"
	set_invisible
# 174 "data/maps/Route101/scripts.pory"
	delay_16
# 175 "data/maps/Route101/scripts.pory"
	set_visible
# 176 "data/maps/Route101/scripts.pory"
	delay_8
# 177 "data/maps/Route101/scripts.pory"
	set_invisible
# 178 "data/maps/Route101/scripts.pory"
	delay_8
# 179 "data/maps/Route101/scripts.pory"
	set_visible
# 180 "data/maps/Route101/scripts.pory"
	delay_8
# 181 "data/maps/Route101/scripts.pory"
	set_invisible
	step_end

# 184 "data/maps/Route101/scripts.pory"
Route101_Movement_RevealTrueForm:
# 185 "data/maps/Route101/scripts.pory"
	face_down
# 186 "data/maps/Route101/scripts.pory"
	set_visible
# 187 "data/maps/Route101/scripts.pory"
	delay_8
# 188 "data/maps/Route101/scripts.pory"
	set_invisible
# 189 "data/maps/Route101/scripts.pory"
	delay_8
# 190 "data/maps/Route101/scripts.pory"
	set_visible
# 191 "data/maps/Route101/scripts.pory"
	delay_8
# 192 "data/maps/Route101/scripts.pory"
	set_invisible
# 193 "data/maps/Route101/scripts.pory"
	delay_16
# 194 "data/maps/Route101/scripts.pory"
	set_visible
# 195 "data/maps/Route101/scripts.pory"
	delay_16
# 196 "data/maps/Route101/scripts.pory"
	set_invisible
# 197 "data/maps/Route101/scripts.pory"
	delay_16
# 198 "data/maps/Route101/scripts.pory"
	set_visible
	step_end

# 201 "data/maps/Route101/scripts.pory"

# 202 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 203 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 204 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route101_OnResume
# 205 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 206 "data/maps/Route101/scripts.pory"
	.byte 0
# 207 "data/maps/Route101/scripts.pory"

# 208 "data/maps/Route101/scripts.pory"
Route101_OnResume:
# 209 "data/maps/Route101/scripts.pory"
	end
# 210 "data/maps/Route101/scripts.pory"
	
# 211 "data/maps/Route101/scripts.pory"

# 212 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 213 "data/maps/Route101/scripts.pory"
	goto Route101_OnTransition_Night
# 214 "data/maps/Route101/scripts.pory"
	end
# 215 "data/maps/Route101/scripts.pory"
	
# 216 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Night:
# 217 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 218 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_LoadStaticWildMons
# 219 "data/maps/Route101/scripts.pory"
	end
# 220 "data/maps/Route101/scripts.pory"

# 221 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Day:
# 222 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 223 "data/maps/Route101/scripts.pory"
	end
# 224 "data/maps/Route101/scripts.pory"

# 225 "data/maps/Route101/scripts.pory"

# 226 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 227 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 228 "data/maps/Route101/scripts.pory"
	.2byte 0
# 229 "data/maps/Route101/scripts.pory"

# 230 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 231 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 232 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 233 "data/maps/Route101/scripts.pory"
	release
# 234 "data/maps/Route101/scripts.pory"
	return
# 235 "data/maps/Route101/scripts.pory"

# 236 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 237 "data/maps/Route101/scripts.pory"
	lockall
# 238 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 239 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 240 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_HelpMe
# 241 "data/maps/Route101/scripts.pory"
	closemessage
# 242 "data/maps/Route101/scripts.pory"
	
# 243 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 16
# 244 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 17
# 245 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 246 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway1
# 247 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 248 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 250 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 251 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 253 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 254 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 255 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 256 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 258 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_PleaseHelp
# 259 "data/maps/Route101/scripts.pory"
	closemessage
# 260 "data/maps/Route101/scripts.pory"
	
# 261 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 262 "data/maps/Route101/scripts.pory"
	releaseall
# 263 "data/maps/Route101/scripts.pory"
	end
# 264 "data/maps/Route101/scripts.pory"

# 265 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 266 "data/maps/Route101/scripts.pory"
	lockall
# 267 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 268 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 269 "data/maps/Route101/scripts.pory"
	
# 270 "data/maps/Route101/scripts.pory"
	closemessage
# 271 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 272 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 273 "data/maps/Route101/scripts.pory"
	releaseall
# 274 "data/maps/Route101/scripts.pory"
	end
# 275 "data/maps/Route101/scripts.pory"

# 276 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 277 "data/maps/Route101/scripts.pory"
	lockall
# 278 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 279 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 280 "data/maps/Route101/scripts.pory"
	closemessage
# 281 "data/maps/Route101/scripts.pory"
	
# 282 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 283 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 284 "data/maps/Route101/scripts.pory"
	releaseall
# 285 "data/maps/Route101/scripts.pory"
	end
# 286 "data/maps/Route101/scripts.pory"

# 287 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 288 "data/maps/Route101/scripts.pory"
	lockall
# 289 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 290 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 291 "data/maps/Route101/scripts.pory"
	closemessage
# 292 "data/maps/Route101/scripts.pory"
	
# 293 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 294 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 295 "data/maps/Route101/scripts.pory"
	releaseall
# 296 "data/maps/Route101/scripts.pory"
	end
# 297 "data/maps/Route101/scripts.pory"

# 298 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 299 "data/maps/Route101/scripts.pory"
	walk_up
# 300 "data/maps/Route101/scripts.pory"
	step_end
# 301 "data/maps/Route101/scripts.pory"

# 302 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 303 "data/maps/Route101/scripts.pory"
	walk_right
# 304 "data/maps/Route101/scripts.pory"
	step_end
# 305 "data/maps/Route101/scripts.pory"

# 306 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 307 "data/maps/Route101/scripts.pory"
	walk_down
# 308 "data/maps/Route101/scripts.pory"
	step_end
# 309 "data/maps/Route101/scripts.pory"

# 310 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 311 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 312 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 313 "data/maps/Route101/scripts.pory"
	walk_fast_right
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
	walk_fast_up
# 323 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 324 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 325 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 326 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 327 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 328 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 329 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 330 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 331 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 332 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 333 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 334 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 335 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 336 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 337 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 338 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 339 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 340 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 341 "data/maps/Route101/scripts.pory"
	step_end
# 342 "data/maps/Route101/scripts.pory"

# 343 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 344 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 345 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 346 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 347 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 348 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 349 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 350 "data/maps/Route101/scripts.pory"
	step_end
# 351 "data/maps/Route101/scripts.pory"

# 352 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 353 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 354 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 355 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 356 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 357 "data/maps/Route101/scripts.pory"
	step_end
# 358 "data/maps/Route101/scripts.pory"

# 359 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 360 "data/maps/Route101/scripts.pory"
	player_run_up
# 361 "data/maps/Route101/scripts.pory"
	player_run_up
# 362 "data/maps/Route101/scripts.pory"
	player_run_up
# 363 "data/maps/Route101/scripts.pory"
	player_run_up
# 364 "data/maps/Route101/scripts.pory"
	player_run_left
# 365 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 366 "data/maps/Route101/scripts.pory"
	step_end
# 367 "data/maps/Route101/scripts.pory"

# 368 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 369 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 370 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 371 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 372 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 374 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 375 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 376 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 377 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 378 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 379 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 380 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 381 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 383 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 384 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 385 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 386 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 387 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 388 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 389 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 390 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 391 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 392 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 393 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 394 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 395 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 396 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 397 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 398 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 399 "data/maps/Route101/scripts.pory"
	step_end
# 400 "data/maps/Route101/scripts.pory"

# 401 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 402 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 403 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 404 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 405 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 406 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 407 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 408 "data/maps/Route101/scripts.pory"
	step_end
# 409 "data/maps/Route101/scripts.pory"

# 410 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 411 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 412 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 413 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 414 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 415 "data/maps/Route101/scripts.pory"
	step_end
# 416 "data/maps/Route101/scripts.pory"

# 417 "data/maps/Route101/scripts.pory"
Route101_Movement_PokemonEscape:
# 418 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 419 "data/maps/Route101/scripts.pory"
	delay_8
# 420 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 421 "data/maps/Route101/scripts.pory"
	delay_8
# 422 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 423 "data/maps/Route101/scripts.pory"
	delay_8
# 424 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 425 "data/maps/Route101/scripts.pory"
	delay_8
# 426 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 427 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 428 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 429 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 430 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 431 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 432 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 433 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 434 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 435 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 436 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 437 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 438 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 439 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 440 "data/maps/Route101/scripts.pory"
	set_invisible
# 441 "data/maps/Route101/scripts.pory"
	step_end
# 442 "data/maps/Route101/scripts.pory"

# 443 "data/maps/Route101/scripts.pory"

# 444 "data/maps/Route101/scripts.pory"
Route101_EventScript_Night::
# 445 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter2, MSGBOX_NPC
# 446 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 95, ITEM_LEFTOVERS
# 447 "data/maps/Route101/scripts.pory"
	dowildbattle
# 448 "data/maps/Route101/scripts.pory"
	giveitem ITEM_LEFTOVERS, 10
# 449 "data/maps/Route101/scripts.pory"
	end
# 450 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 451 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 452 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 453 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 454 "data/maps/Route101/scripts.pory"
	end
# 455 "data/maps/Route101/scripts.pory"

# 456 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 457 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 458 "data/maps/Route101/scripts.pory"
	end
# 459 "data/maps/Route101/scripts.pory"

# 460 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 461 "data/maps/Route101/scripts.pory"
	lock
# 462 "data/maps/Route101/scripts.pory"
	faceplayer
# 463 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 464 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 465 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 466 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 7, 15
# 467 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Common_Movement_WalkInPlaceFasterRight
# 468 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 469 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 470 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 471 "data/maps/Route101/scripts.pory"
	waitstate
# 472 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 473 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Common_Movement_ExclamationMark
# 474 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 475 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_PokemonEscape
# 476 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 478 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 479 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_YouSavedMe
# 480 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 481 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 482 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 483 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 484 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 485 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 486 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 487 "data/maps/Route101/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 488 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 489 "data/maps/Route101/scripts.pory"
	checkplayergender
# 490 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 491 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 492 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 493 "data/maps/Route101/scripts.pory"
	waitstate
# 494 "data/maps/Route101/scripts.pory"
	release
# 495 "data/maps/Route101/scripts.pory"
	end
# 496 "data/maps/Route101/scripts.pory"

# 497 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 498 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 499 "data/maps/Route101/scripts.pory"
	return
# 500 "data/maps/Route101/scripts.pory"

# 501 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 502 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 503 "data/maps/Route101/scripts.pory"
	return
# 504 "data/maps/Route101/scripts.pory"

# 505 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 506 "data/maps/Route101/scripts.pory"
	walk_right
# 507 "data/maps/Route101/scripts.pory"
	step_end
# 508 "data/maps/Route101/scripts.pory"

# 509 "data/maps/Route101/scripts.pory"

# 510 "data/maps/Route101/scripts.pory"

# 511 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter2:
# 512 "data/maps/Route101/scripts.pory"
	.string "¡{STR_VAR_1}!$"
# 513 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 514 "data/maps/Route101/scripts.pory"
	.string "Los Pokémon salvajes te atacarán\n"
# 515 "data/maps/Route101/scripts.pory"
	.string "sin pensar en la hierba alta.\p"
# 516 "data/maps/Route101/scripts.pory"
	.string "¡Ten cuidado en las Rutas!$"
# 517 "data/maps/Route101/scripts.pory"

# 518 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 519 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_RED SHADOW RED}RUTA 101{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
# 520 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} {COLOR LIGHT_GREEN SHADOW GREEN}PUEBLO OLDALE{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\l"
# 521 "data/maps/Route101/scripts.pory"
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

Route101_EventScript_StartMewEvent_Text_0:
# 153 "data/maps/Route101/scripts.pory"
	.string "MEEEWWWW.$"
