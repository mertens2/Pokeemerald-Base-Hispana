Route102_EventScript_Boy::
# 141 "data/maps/Route102/scripts.pory"
	faceplayer
# 142 "data/maps/Route102/scripts.pory"
	lock
# 143 "data/maps/Route102/scripts.pory"
	CheckItem ITEM_GREAT_BALL
# 144 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route102_EventScript_Boy_2
# 168 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Boy_Text_3
Route102_EventScript_Boy_1:
# 172 "data/maps/Route102/scripts.pory"
	closemessage
# 173 "data/maps/Route102/scripts.pory"
	releaseall
	return

Route102_EventScript_Boy_2:
# 154 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Boy_Text_0
# 155 "data/maps/Route102/scripts.pory"
	message Route102_EventScript_Boy_Text_1
# 156 "data/maps/Route102/scripts.pory"
	giveitem ITEM_QUICK_BALL
# 157 "data/maps/Route102/scripts.pory"
	removeitem ITEM_GREAT_BALL
# 158 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Boy_Text_2
	goto Route102_EventScript_Boy_1


# 177 "data/maps/Route102/scripts.pory"

# 178 "data/maps/Route102/scripts.pory"

# 179 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 180 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route102_OnFrame
# 181 "data/maps/Route102/scripts.pory"
	.byte 0
# 182 "data/maps/Route102/scripts.pory"

# 183 "data/maps/Route102/scripts.pory"
Route102_OnFrame::
# 184 "data/maps/Route102/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, Route102_WallyTutorial
# 185 "data/maps/Route102/scripts.pory"
	.2byte 0
# 186 "data/maps/Route102/scripts.pory"

# 187 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 188 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 189 "data/maps/Route102/scripts.pory"
	end
# 190 "data/maps/Route102/scripts.pory"

# 191 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 192 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 193 "data/maps/Route102/scripts.pory"
	end
# 194 "data/maps/Route102/scripts.pory"

# 195 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 196 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 197 "data/maps/Route102/scripts.pory"
	end
# 198 "data/maps/Route102/scripts.pory"

# 199 "data/maps/Route102/scripts.pory"

# 200 "data/maps/Route102/scripts.pory"
Error::
# 201 "data/maps/Route102/scripts.pory"
	lockall
# 202 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 203 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 204 "data/maps/Route102/scripts.pory"
	msgbox NoDeberiasVerlo, MSGBOX_NPC
# 205 "data/maps/Route102/scripts.pory"
	releaseall
# 206 "data/maps/Route102/scripts.pory"
	end
# 207 "data/maps/Route102/scripts.pory"

# 208 "data/maps/Route102/scripts.pory"
Route102_WallyTutorial::
# 209 "data/maps/Route102/scripts.pory"
	lockall
# 210 "data/maps/Route102/scripts.pory"
	clearflag FLAG_HIDE_RALTS_102
# 211 "data/maps/Route102/scripts.pory"
	clearflag FLAG_HIDE_ZIGZA_102
# 212 "data/maps/Route102/scripts.pory"
	clearflag FLAG_HIDE_BALL_102
# 213 "data/maps/Route102/scripts.pory"
	clearflag FLAG_BALL_CATCH_102
# 214 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ROUTE102_WALLY
# 215 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ROUTE102_BALL
# 216 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ROUTE102_BALL_CATCH
# 217 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ROUTE102_RALTS
# 218 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ROUTE102_ZIGZAGOON
# 219 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Route102_Movement_WallyTutorialWally
# 220 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102_Movement_WallyTutorialPlayer
# 221 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 222 "data/maps/Route102/scripts.pory"
	setspeaker Wally
# 223 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_INTERRUPT
# 224 "data/maps/Route102/scripts.pory"
	
# 225 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_RaltsAppears
# 226 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_UnRalts, MSGBOX_DEFAULT
# 227 "data/maps/Route102/scripts.pory"
	closemessage
# 228 "data/maps/Route102/scripts.pory"
	
# 229 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_BALL, 3, 6
# 230 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 231 "data/maps/Route102/scripts.pory"
	delay 16
# 232 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 233 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 234 "data/maps/Route102/scripts.pory"
	delay 16
# 235 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_BALL, 10, 7
# 236 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_ZIGZAGOON, 3, 6
# 237 "data/maps/Route102/scripts.pory"
	delay 8
# 238 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 239 "data/maps/Route102/scripts.pory"
	delay 8
# 240 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 241 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Sigsa, MSGBOX_DEFAULT
# 242 "data/maps/Route102/scripts.pory"
	waitmoncry
# 243 "data/maps/Route102/scripts.pory"
	delay 8
# 244 "data/maps/Route102/scripts.pory"
	setspeaker Wally
# 245 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyCommands
# 246 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Route102_Movement_WallyJump
# 247 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route102/scripts.pory"
	closemessage
# 249 "data/maps/Route102/scripts.pory"
	
# 250 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzagoonAttacks
# 251 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 252 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Sigsa, MSGBOX_DEFAULT
# 253 "data/maps/Route102/scripts.pory"
	waitmoncry
# 254 "data/maps/Route102/scripts.pory"
	closemessage
# 255 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 256 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Ralts
# 257 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_RALTS, Route102_Movement_RaltsTeleport
# 258 "data/maps/Route102/scripts.pory"
	delay 2
# 259 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 260 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 261 "data/maps/Route102/scripts.pory"
	delay 8
# 262 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_RALTS, 5, 6
# 263 "data/maps/Route102/scripts.pory"
	delay 16
# 264 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_RALTS, Route102_Movement_RaltsTeleport2
# 265 "data/maps/Route102/scripts.pory"
	delay 4
# 266 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 267 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 268 "data/maps/Route102/scripts.pory"
	delay 8
# 269 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzaSurprise
# 270 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Common_Movement_ExclamationMark
# 271 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 272 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 273 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 274 "data/maps/Route102/scripts.pory"
	waitmoncry
# 275 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzaHurt
# 276 "data/maps/Route102/scripts.pory"
	delay 60
# 277 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_PokeballVe, MSGBOX_DEFAULT
# 278 "data/maps/Route102/scripts.pory"
	closemessage
# 279 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallThrow
# 280 "data/maps/Route102/scripts.pory"
	delay 8
# 281 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallCatch
# 282 "data/maps/Route102/scripts.pory"
	delay 8
# 283 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Route102_Movement_WallyGrabBall
# 284 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 285 "data/maps/Route102/scripts.pory"
	delay 16
# 286 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Common_Movement_WalkInPlaceRight
# 287 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 288 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallCatchHide
# 289 "data/maps/Route102/scripts.pory"
	setspeaker Wally
# 290 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 291 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Route102_Movement_WallyGrabBall
# 292 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 293 "data/maps/Route102/scripts.pory"
	closemessage
# 294 "data/maps/Route102/scripts.pory"
	
# 295 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyZigzagoonThanks, MSGBOX_DEFAULT
# 296 "data/maps/Route102/scripts.pory"
	setspeaker Wally
# 297 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 298 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_ZIGZAGOON
# 299 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_BALL, 7, 6
# 300 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 301 "data/maps/Route102/scripts.pory"
	delay 8
# 302 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 303 "data/maps/Route102/scripts.pory"
	waitse
# 304 "data/maps/Route102/scripts.pory"
	closemessage
# 305 "data/maps/Route102/scripts.pory"
	
# 306 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Common_Movement_WalkInPlaceRight
# 307 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 308 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallZigzaHide
# 309 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Common_Movement_WalkInPlaceFasterLeft
# 310 "data/maps/Route102/scripts.pory"
	waitmovement LOCALID_ROUTE102_WALLY
# 311 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 312 "data/maps/Route102/scripts.pory"
	closemessage
# 313 "data/maps/Route102/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 314 "data/maps/Route102/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 315 "data/maps/Route102/scripts.pory"
	fadedefaultbgm
# 316 "data/maps/Route102/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 317 "data/maps/Route102/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 318 "data/maps/Route102/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 319 "data/maps/Route102/scripts.pory"
	waitstate
# 320 "data/maps/Route102/scripts.pory"
	releaseall
# 321 "data/maps/Route102/scripts.pory"
	end
# 322 "data/maps/Route102/scripts.pory"

# 323 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyTutorialPlayer:
# 324 "data/maps/Route102/scripts.pory"
	delay_8
# 325 "data/maps/Route102/scripts.pory"
	walk_right
# 326 "data/maps/Route102/scripts.pory"
	walk_right
# 327 "data/maps/Route102/scripts.pory"
	walk_up
# 328 "data/maps/Route102/scripts.pory"
	walk_up
# 329 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_right
# 330 "data/maps/Route102/scripts.pory"
	step_end
# 331 "data/maps/Route102/scripts.pory"

# 332 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyTutorialWally:
# 333 "data/maps/Route102/scripts.pory"
	delay_8
# 334 "data/maps/Route102/scripts.pory"
	walk_right
# 335 "data/maps/Route102/scripts.pory"
	walk_up
# 336 "data/maps/Route102/scripts.pory"
	walk_up
# 337 "data/maps/Route102/scripts.pory"
	walk_up
# 338 "data/maps/Route102/scripts.pory"
	delay_16
# 339 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_up
# 340 "data/maps/Route102/scripts.pory"
	delay_16
# 341 "data/maps/Route102/scripts.pory"
	delay_16
# 342 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_right
# 343 "data/maps/Route102/scripts.pory"
	step_end
# 344 "data/maps/Route102/scripts.pory"

# 345 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyGrabBall:
# 346 "data/maps/Route102/scripts.pory"
	walk_right
# 347 "data/maps/Route102/scripts.pory"
	walk_right
# 348 "data/maps/Route102/scripts.pory"
	step_end
# 349 "data/maps/Route102/scripts.pory"

# 350 "data/maps/Route102/scripts.pory"

# 351 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyJump::
# 352 "data/maps/Route102/scripts.pory"
	jump_in_place_right
# 353 "data/maps/Route102/scripts.pory"
	step_end
# 354 "data/maps/Route102/scripts.pory"

# 355 "data/maps/Route102/scripts.pory"
Route102_EventScript_RaltsAppears::
# 356 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_RALTS, 6, 6
# 357 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_RALTS, Route102_Movement_RaltsJump
# 358 "data/maps/Route102/scripts.pory"
	delay 8
# 359 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 360 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 361 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Ralts, MSGBOX_DEFAULT
# 362 "data/maps/Route102/scripts.pory"
	waitmoncry
# 363 "data/maps/Route102/scripts.pory"
	delay 8
# 364 "data/maps/Route102/scripts.pory"
	playbgm MUS_VS_WILD, FALSE
# 365 "data/maps/Route102/scripts.pory"
	return
# 366 "data/maps/Route102/scripts.pory"

# 367 "data/maps/Route102/scripts.pory"

# 368 "data/maps/Route102/scripts.pory"
	
# 369 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzaSurprise::
# 370 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_ZIGZAGOON, Common_Movement_ExclamationMark
# 371 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 372 "data/maps/Route102/scripts.pory"
	return
# 373 "data/maps/Route102/scripts.pory"

# 374 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzaHurt::
# 375 "data/maps/Route102/scripts.pory"
	playse SE_EFFECTIVE
# 376 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_ZIGZAGOON, Route102_Movement_RaltsHurt
# 377 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 378 "data/maps/Route102/scripts.pory"
	return
# 379 "data/maps/Route102/scripts.pory"

# 380 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallThrow::
# 381 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_BALL, 3, 6
# 382 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL, Route102_Movement_BallThrow
# 383 "data/maps/Route102/scripts.pory"
	playse SE_BALL_THROW
# 384 "data/maps/Route102/scripts.pory"
	waitse
# 385 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 386 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_RALTS
# 387 "data/maps/Route102/scripts.pory"
	waitse
# 388 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 389 "data/maps/Route102/scripts.pory"
	waitmoncry
# 390 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_BALL, 10, 7
# 392 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_BALL_CATCH, 5, 6
# 393 "data/maps/Route102/scripts.pory"
	return
# 394 "data/maps/Route102/scripts.pory"

# 395 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallCatch::
# 396 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 397 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceUp
# 398 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 399 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceDown
# 400 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 401 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceLeft
# 402 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 403 "data/maps/Route102/scripts.pory"
	waitse
# 404 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceDown
# 405 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 406 "data/maps/Route102/scripts.pory"
	delay 16
# 407 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 408 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceUp
# 409 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 410 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceDown
# 411 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceLeft
# 413 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 414 "data/maps/Route102/scripts.pory"
	waitse
# 415 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceDown
# 416 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 417 "data/maps/Route102/scripts.pory"
	delay 16
# 418 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 419 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceUp
# 420 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 421 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceDown
# 422 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 423 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceLeft
# 424 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 425 "data/maps/Route102/scripts.pory"
	waitse
# 426 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceDown
# 427 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 428 "data/maps/Route102/scripts.pory"
	delay 24
# 429 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 430 "data/maps/Route102/scripts.pory"
	waitse 
# 431 "data/maps/Route102/scripts.pory"
	delay 10
# 432 "data/maps/Route102/scripts.pory"
	playfanfare MUS_EVOLVED
# 433 "data/maps/Route102/scripts.pory"
	waitfanfare
# 434 "data/maps/Route102/scripts.pory"
	return
# 435 "data/maps/Route102/scripts.pory"

# 436 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallCatchHide::
# 437 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_BALL_CATCH
# 438 "data/maps/Route102/scripts.pory"
	return
# 439 "data/maps/Route102/scripts.pory"

# 440 "data/maps/Route102/scripts.pory"

# 441 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallZigzaHide::
# 442 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_BALL
# 443 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_BALL_CATCH
# 444 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_RALTS
# 445 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_ZIGZAGOON
# 446 "data/maps/Route102/scripts.pory"
	return
# 447 "data/maps/Route102/scripts.pory"
	
# 448 "data/maps/Route102/scripts.pory"

# 449 "data/maps/Route102/scripts.pory"
Route102_Movement_BallThrow::
# 450 "data/maps/Route102/scripts.pory"
	disable_jump_landing_ground_effect
# 451 "data/maps/Route102/scripts.pory"
	jump_2_right
# 452 "data/maps/Route102/scripts.pory"
	step_end
# 453 "data/maps/Route102/scripts.pory"

# 454 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsTeleport::
# 455 "data/maps/Route102/scripts.pory"
	jump_in_place_left_right
# 456 "data/maps/Route102/scripts.pory"
	set_invisible
# 457 "data/maps/Route102/scripts.pory"
	step_end
# 458 "data/maps/Route102/scripts.pory"

# 459 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsTeleport2::
# 460 "data/maps/Route102/scripts.pory"
	set_visible
# 461 "data/maps/Route102/scripts.pory"
	jump_in_place_left_right
# 462 "data/maps/Route102/scripts.pory"
	face_right
# 463 "data/maps/Route102/scripts.pory"
	step_end
# 464 "data/maps/Route102/scripts.pory"

# 465 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzagoonAttacks::
# 466 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_ZIGZAGOON, Route102_Movement_AttackRalts
# 467 "data/maps/Route102/scripts.pory"
	delay 24
# 468 "data/maps/Route102/scripts.pory"
	playse SE_EFFECTIVE
# 469 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_RALTS, Route102_Movement_RaltsHurt
# 470 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 471 "data/maps/Route102/scripts.pory"
	return
# 472 "data/maps/Route102/scripts.pory"
	
# 473 "data/maps/Route102/scripts.pory"
	
# 474 "data/maps/Route102/scripts.pory"
	
# 475 "data/maps/Route102/scripts.pory"
Route102_Movement_AttackRalts::
# 476 "data/maps/Route102/scripts.pory"
	walk_right
# 477 "data/maps/Route102/scripts.pory"
	walk_fast_right
# 478 "data/maps/Route102/scripts.pory"
	walk_faster_right
# 479 "data/maps/Route102/scripts.pory"
	walk_faster_right
# 480 "data/maps/Route102/scripts.pory"
	lock_facing_direction
# 481 "data/maps/Route102/scripts.pory"
	delay_16
# 482 "data/maps/Route102/scripts.pory"
	walk_left
# 483 "data/maps/Route102/scripts.pory"
	unlock_facing_direction
# 484 "data/maps/Route102/scripts.pory"
	step_end
# 485 "data/maps/Route102/scripts.pory"

# 486 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsHurt::
# 487 "data/maps/Route102/scripts.pory"
	face_left
# 488 "data/maps/Route102/scripts.pory"
	lock_facing_direction
# 489 "data/maps/Route102/scripts.pory"
	jump_right
# 490 "data/maps/Route102/scripts.pory"
	unlock_facing_direction
# 491 "data/maps/Route102/scripts.pory"
	step_end
# 492 "data/maps/Route102/scripts.pory"

# 493 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsJump::
# 494 "data/maps/Route102/scripts.pory"
	jump_in_place_left
# 495 "data/maps/Route102/scripts.pory"
	step_end
# 496 "data/maps/Route102/scripts.pory"

# 497 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 498 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 499 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 500 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 501 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 502 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 503 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 504 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 505 "data/maps/Route102/scripts.pory"
	release
# 506 "data/maps/Route102/scripts.pory"
	end
# 507 "data/maps/Route102/scripts.pory"

# 508 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 509 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 510 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 511 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 512 "data/maps/Route102/scripts.pory"
	release
# 513 "data/maps/Route102/scripts.pory"
	end
# 514 "data/maps/Route102/scripts.pory"

# 515 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 516 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 517 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 518 "data/maps/Route102/scripts.pory"
	release
# 519 "data/maps/Route102/scripts.pory"
	end
# 520 "data/maps/Route102/scripts.pory"

# 521 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 522 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 523 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 524 "data/maps/Route102/scripts.pory"
	release
# 525 "data/maps/Route102/scripts.pory"
	end
# 526 "data/maps/Route102/scripts.pory"

# 527 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 528 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 529 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 530 "data/maps/Route102/scripts.pory"
	release
# 531 "data/maps/Route102/scripts.pory"
	end
# 532 "data/maps/Route102/scripts.pory"

# 533 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 534 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 535 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 536 "data/maps/Route102/scripts.pory"
	end
# 537 "data/maps/Route102/scripts.pory"

# 538 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 539 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 540 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 541 "data/maps/Route102/scripts.pory"
	end
# 542 "data/maps/Route102/scripts.pory"

# 543 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 544 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 545 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 546 "data/maps/Route102/scripts.pory"
	end
# 547 "data/maps/Route102/scripts.pory"

# 548 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 549 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 550 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 551 "data/maps/Route102/scripts.pory"
	end

Route102_EventScript_Boy_Text_0:
# 154 "data/maps/Route102/scripts.pory"
	.string "¡Ah!\n"
	.string "Me asustaste...\p"
	.string "¡Acepta este cambio y no le digas a\n"
	.string "nadie que estaba acá!$"

Route102_EventScript_Boy_Text_1:
# 155 "data/maps/Route102/scripts.pory"
	.string "¡Obtuviste una Veloz Ball a cambio de la\n"
	.string "Super Ball!$"

Route102_EventScript_Boy_Text_2:
# 158 "data/maps/Route102/scripts.pory"
	.string "La Veloz Ball es mejor cuando la usas al\n"
	.string "inicio de un combate.\p"
	.string "¡Acércate por detrás y atrapa a tu\n"
	.string "presa!$"

Route102_EventScript_Boy_Text_3:
# 168 "data/maps/Route102/scripts.pory"
	.string "¡Ah!\n"
	.string "¡Me asustaste!\p"
	.string "Te daría esta Veloz Ball, pero no tienes\n"
	.string "una Super Ball para darme a cambio...$"

Route102_Text_Sigsa::
# 2 "data/maps/Route102/scripts.pory"
	.string "¡ZIGZA!$"

Route102_Text_Ralts::
# 13 "data/maps/Route102/scripts.pory"
	.string "¡R-{PAUSE 20}RALTS!$"

Route102_Text_UnRalts::
# 23 "data/maps/Route102/scripts.pory"
	.string "¡WOW! ¡Un Ralts!\n"
	.string "Estos son raros, leí en un libro.\p"
	.string "Bueno, ahora es tiempo de atraparlo…\n"
	.string "Eh…{PAUSE 20} ¿Cómo…?\p"
	.string "Em…{PAUSE 20} Z-Zigzagon… ¡Sal de ahí!$"

Route102_Text_WallyCommands::
# 39 "data/maps/Route102/scripts.pory"
	.string "Ahora, tengo que atacar, ¿no?\p"
	.string "Zigzagoon, ¡Tacleada!$"

Route102_Text_PokeballVe::
# 51 "data/maps/Route102/scripts.pory"
	.string "¡Y-y-y-y ahora, eh…!\p"
	.string "¡POKÉBALL, CAPTÚRALO!$"

Route102_Text_WatchMeCatchPokemon::
# 65 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}…\n"
	.string "Los Pokémon viven en el pasto, ¿no?\p"
	.string "Por favor quédate así puedo…\n"
	.string "¡…AHHH-!{PAUSE 20}$"

Route102_Text_WallyIDidIt::
# 80 "data/maps/Route102/scripts.pory"
	.string "L-lo hice…\n"
	.string "¡TENGO UN POKÉMON!$"

Route102_Text_WallyZigzagoonThanks::
# 95 "data/maps/Route102/scripts.pory"
	.string "¡Gracias, Zigzagoon!\n"
	.string "No podría haberlo hecho sin ti...\p"
	.string "Eh... ¡Regresa!$"

Route102_Text_LetsGoBack::
# 107 "data/maps/Route102/scripts.pory"
	.string "¡{PLAYER}, gracias!\n"
	.string "¡Volvamos al Gimnasio!$"

Route102_Text_ImNotVeryTall::
# 121 "data/maps/Route102/scripts.pory"
	.string "No…soy tan alto, así que\n"
	.string "me hundo en el pasto alto.\p"
	.string "Ayúdame… Soy alérgic-\n"
	.string "-AAAA…\l"
	.string "CHOOO- alégica…$"

Route102_Text_RouteSignOldale::
# 129 "data/maps/Route102/scripts.pory"
	.string "RUTA 102\n"
	.string "{RIGHT_ARROW} PUEBLO OLDALE$"

Route102_Text_RouteSignPetalburg::
# 134 "data/maps/Route102/scripts.pory"
	.string "RUTA 102\n"
	.string "{LEFT_ARROW} CIUDAD PETALBURG$"
