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
	map_script_2 VAR_MEW_EVENT, 0, Route101_EventScript_HideMewShowRalts
# 229 "data/maps/Route101/scripts.pory"
	.2byte 0
# 230 "data/maps/Route101/scripts.pory"

# 231 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMewShowRalts::
# 232 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MEW_R101
# 233 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_RALTS_R101
# 234 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_MEW_R101
# 235 "data/maps/Route101/scripts.pory"
	addobject LOCALID_RALTS_R101
# 236 "data/maps/Route101/scripts.pory"
	end
# 237 "data/maps/Route101/scripts.pory"

# 238 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 239 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 240 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 241 "data/maps/Route101/scripts.pory"
	end
# 242 "data/maps/Route101/scripts.pory"

# 243 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 244 "data/maps/Route101/scripts.pory"
	lockall
# 245 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 246 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 247 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_HelpMe
# 248 "data/maps/Route101/scripts.pory"
	closemessage
# 249 "data/maps/Route101/scripts.pory"
	
# 250 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 16
# 251 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 17
# 252 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 253 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunAway1
# 254 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 255 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 256 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 257 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 258 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 259 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 260 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 261 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 262 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 263 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 264 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 265 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_PleaseHelp
# 266 "data/maps/Route101/scripts.pory"
	closemessage
# 267 "data/maps/Route101/scripts.pory"
	
# 268 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 269 "data/maps/Route101/scripts.pory"
	releaseall
# 270 "data/maps/Route101/scripts.pory"
	end
# 271 "data/maps/Route101/scripts.pory"

# 272 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 273 "data/maps/Route101/scripts.pory"
	lockall
# 274 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 275 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 276 "data/maps/Route101/scripts.pory"
	
# 277 "data/maps/Route101/scripts.pory"
	closemessage
# 278 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 279 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 280 "data/maps/Route101/scripts.pory"
	releaseall
# 281 "data/maps/Route101/scripts.pory"
	end
# 282 "data/maps/Route101/scripts.pory"

# 283 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 284 "data/maps/Route101/scripts.pory"
	lockall
# 285 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 286 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 287 "data/maps/Route101/scripts.pory"
	closemessage
# 288 "data/maps/Route101/scripts.pory"
	
# 289 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 290 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route101/scripts.pory"
	releaseall
# 292 "data/maps/Route101/scripts.pory"
	end
# 293 "data/maps/Route101/scripts.pory"

# 294 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 295 "data/maps/Route101/scripts.pory"
	lockall
# 296 "data/maps/Route101/scripts.pory"
	setspeaker Unknown
# 297 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_DontLeaveMe
# 298 "data/maps/Route101/scripts.pory"
	closemessage
# 299 "data/maps/Route101/scripts.pory"
	
# 300 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 301 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 302 "data/maps/Route101/scripts.pory"
	releaseall
# 303 "data/maps/Route101/scripts.pory"
	end
# 304 "data/maps/Route101/scripts.pory"

# 305 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 306 "data/maps/Route101/scripts.pory"
	walk_up
# 307 "data/maps/Route101/scripts.pory"
	step_end
# 308 "data/maps/Route101/scripts.pory"

# 309 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 310 "data/maps/Route101/scripts.pory"
	walk_right
# 311 "data/maps/Route101/scripts.pory"
	step_end
# 312 "data/maps/Route101/scripts.pory"

# 313 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 314 "data/maps/Route101/scripts.pory"
	walk_down
# 315 "data/maps/Route101/scripts.pory"
	step_end
# 316 "data/maps/Route101/scripts.pory"

# 317 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 318 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 319 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 320 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 321 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 322 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 323 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 324 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 325 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 326 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 327 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 328 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 329 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 330 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 331 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 332 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 333 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 334 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 335 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 336 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 337 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 338 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 339 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 340 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 341 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 342 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 343 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 344 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 345 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 346 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 347 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 348 "data/maps/Route101/scripts.pory"
	step_end
# 349 "data/maps/Route101/scripts.pory"

# 350 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
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
	walk_fast_up
# 357 "data/maps/Route101/scripts.pory"
	step_end
# 358 "data/maps/Route101/scripts.pory"

# 359 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 360 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 361 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 362 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 363 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 364 "data/maps/Route101/scripts.pory"
	step_end
# 365 "data/maps/Route101/scripts.pory"

# 366 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 367 "data/maps/Route101/scripts.pory"
	player_run_up
# 368 "data/maps/Route101/scripts.pory"
	player_run_up
# 369 "data/maps/Route101/scripts.pory"
	player_run_up
# 370 "data/maps/Route101/scripts.pory"
	player_run_up
# 371 "data/maps/Route101/scripts.pory"
	player_run_left
# 372 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 373 "data/maps/Route101/scripts.pory"
	step_end
# 374 "data/maps/Route101/scripts.pory"

# 375 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 376 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 377 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 378 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 379 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 380 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 381 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 383 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 384 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 385 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 386 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 387 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 388 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 389 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 390 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 391 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 392 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 393 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 394 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 395 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 396 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 397 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 398 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 399 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 400 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 401 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 402 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 403 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 404 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 405 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 406 "data/maps/Route101/scripts.pory"
	step_end
# 407 "data/maps/Route101/scripts.pory"

# 408 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 409 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 410 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 411 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 412 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 413 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 414 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 415 "data/maps/Route101/scripts.pory"
	step_end
# 416 "data/maps/Route101/scripts.pory"

# 417 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 418 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 419 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 420 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 421 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 422 "data/maps/Route101/scripts.pory"
	step_end
# 423 "data/maps/Route101/scripts.pory"

# 424 "data/maps/Route101/scripts.pory"
Route101_Movement_PokemonEscape:
# 425 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 426 "data/maps/Route101/scripts.pory"
	delay_8
# 427 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 428 "data/maps/Route101/scripts.pory"
	delay_8
# 429 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 430 "data/maps/Route101/scripts.pory"
	delay_8
# 431 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 432 "data/maps/Route101/scripts.pory"
	delay_8
# 433 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 434 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 435 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 436 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 437 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 438 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 439 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 440 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 441 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 442 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 443 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 444 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 445 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 446 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 447 "data/maps/Route101/scripts.pory"
	set_invisible
# 448 "data/maps/Route101/scripts.pory"
	step_end
# 449 "data/maps/Route101/scripts.pory"

# 450 "data/maps/Route101/scripts.pory"

# 451 "data/maps/Route101/scripts.pory"
Route101_EventScript_Night::
# 452 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter2, MSGBOX_NPC
# 453 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 95, ITEM_LEFTOVERS
# 454 "data/maps/Route101/scripts.pory"
	dowildbattle
# 455 "data/maps/Route101/scripts.pory"
	giveitem ITEM_LEFTOVERS, 10
# 456 "data/maps/Route101/scripts.pory"
	end
# 457 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 458 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 459 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 460 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 461 "data/maps/Route101/scripts.pory"
	end
# 462 "data/maps/Route101/scripts.pory"

# 463 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 464 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 465 "data/maps/Route101/scripts.pory"
	end
# 466 "data/maps/Route101/scripts.pory"

# 467 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 468 "data/maps/Route101/scripts.pory"
	lock
# 469 "data/maps/Route101/scripts.pory"
	faceplayer
# 470 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 471 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 472 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 473 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 7, 15
# 474 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Common_Movement_WalkInPlaceFasterRight
# 475 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 476 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 477 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 478 "data/maps/Route101/scripts.pory"
	waitstate
# 479 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 480 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Common_Movement_ExclamationMark
# 481 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 482 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_PokemonEscape
# 483 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 484 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 485 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 486 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_YouSavedMe
# 487 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 488 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 489 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 490 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 491 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 492 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 493 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 494 "data/maps/Route101/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 495 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 496 "data/maps/Route101/scripts.pory"
	checkplayergender
# 497 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 498 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 499 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 500 "data/maps/Route101/scripts.pory"
	waitstate
# 501 "data/maps/Route101/scripts.pory"
	release
# 502 "data/maps/Route101/scripts.pory"
	end
# 503 "data/maps/Route101/scripts.pory"

# 504 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 505 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 506 "data/maps/Route101/scripts.pory"
	return
# 507 "data/maps/Route101/scripts.pory"

# 508 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 509 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 510 "data/maps/Route101/scripts.pory"
	return
# 511 "data/maps/Route101/scripts.pory"

# 512 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 513 "data/maps/Route101/scripts.pory"
	walk_right
# 514 "data/maps/Route101/scripts.pory"
	step_end
# 515 "data/maps/Route101/scripts.pory"

# 516 "data/maps/Route101/scripts.pory"

# 517 "data/maps/Route101/scripts.pory"

# 518 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter2:
# 519 "data/maps/Route101/scripts.pory"
	.string "¡{STR_VAR_1}!$"
# 520 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 521 "data/maps/Route101/scripts.pory"
	.string "Los Pokémon salvajes te atacarán\n"
# 522 "data/maps/Route101/scripts.pory"
	.string "sin pensar en la hierba alta.\p"
# 523 "data/maps/Route101/scripts.pory"
	.string "¡Ten cuidado en las Rutas!$"
# 524 "data/maps/Route101/scripts.pory"

# 525 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 526 "data/maps/Route101/scripts.pory"
	.string "{COLOR LIGHT_RED SHADOW RED}RUTA 101{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
# 527 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} {COLOR LIGHT_GREEN SHADOW GREEN}PUEBLO OLDALE{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\l"
# 528 "data/maps/Route101/scripts.pory"
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
