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
	addobject LOCALID_ROUTE102_WALLY
# 211 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ROUTE102_BALL
# 212 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ROUTE102_BALL_CATCH
# 213 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ROUTE102_RALTS
# 214 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ROUTE102_ZIGZAGOON
# 215 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Route102_Movement_WallyTutorialWally
# 216 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102_Movement_WallyTutorialPlayer
# 217 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route102/scripts.pory"
	setspeaker Wally
# 219 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_INTERRUPT
# 220 "data/maps/Route102/scripts.pory"
	
# 221 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_RaltsAppears
# 222 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_UnRalts, MSGBOX_DEFAULT
# 223 "data/maps/Route102/scripts.pory"
	closemessage
# 224 "data/maps/Route102/scripts.pory"
	
# 225 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_BALL, 3, 6
# 226 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 227 "data/maps/Route102/scripts.pory"
	delay 16
# 228 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 229 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 230 "data/maps/Route102/scripts.pory"
	delay 16
# 231 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_BALL, 10, 7
# 232 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_ZIGZAGOON, 3, 6
# 233 "data/maps/Route102/scripts.pory"
	delay 8
# 234 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 235 "data/maps/Route102/scripts.pory"
	delay 8
# 236 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 237 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Sigsa, MSGBOX_DEFAULT
# 238 "data/maps/Route102/scripts.pory"
	waitmoncry
# 239 "data/maps/Route102/scripts.pory"
	delay 8
# 240 "data/maps/Route102/scripts.pory"
	setspeaker Wally
# 241 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyCommands
# 242 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Route102_Movement_WallyJump
# 243 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 244 "data/maps/Route102/scripts.pory"
	closemessage
# 245 "data/maps/Route102/scripts.pory"
	
# 246 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzagoonAttacks
# 247 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 248 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Sigsa, MSGBOX_DEFAULT
# 249 "data/maps/Route102/scripts.pory"
	waitmoncry
# 250 "data/maps/Route102/scripts.pory"
	closemessage
# 251 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 252 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Ralts
# 253 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_RALTS, Route102_Movement_RaltsTeleport
# 254 "data/maps/Route102/scripts.pory"
	delay 2
# 255 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 256 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route102/scripts.pory"
	delay 8
# 258 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_RALTS, 5, 6
# 259 "data/maps/Route102/scripts.pory"
	delay 16
# 260 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_RALTS, Route102_Movement_RaltsTeleport2
# 261 "data/maps/Route102/scripts.pory"
	delay 4
# 262 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 263 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 264 "data/maps/Route102/scripts.pory"
	delay 8
# 265 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzaSurprise
# 266 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Common_Movement_ExclamationMark
# 267 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 268 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 269 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 270 "data/maps/Route102/scripts.pory"
	waitmoncry
# 271 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzaHurt
# 272 "data/maps/Route102/scripts.pory"
	delay 60
# 273 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_PokeballVe, MSGBOX_DEFAULT
# 274 "data/maps/Route102/scripts.pory"
	closemessage
# 275 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallThrow
# 276 "data/maps/Route102/scripts.pory"
	delay 8
# 277 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallCatch
# 278 "data/maps/Route102/scripts.pory"
	delay 8
# 279 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Route102_Movement_WallyGrabBall
# 280 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 281 "data/maps/Route102/scripts.pory"
	delay 16
# 282 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Common_Movement_WalkInPlaceRight
# 283 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 284 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallCatchHide
# 285 "data/maps/Route102/scripts.pory"
	setspeaker Wally
# 286 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 287 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Route102_Movement_WallyGrabBall
# 288 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 289 "data/maps/Route102/scripts.pory"
	closemessage
# 290 "data/maps/Route102/scripts.pory"
	
# 291 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyZigzagoonThanks, MSGBOX_DEFAULT
# 292 "data/maps/Route102/scripts.pory"
	setspeaker Wally
# 293 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 294 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_ZIGZAGOON
# 295 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_BALL, 7, 6
# 296 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 297 "data/maps/Route102/scripts.pory"
	delay 8
# 298 "data/maps/Route102/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 299 "data/maps/Route102/scripts.pory"
	waitse
# 300 "data/maps/Route102/scripts.pory"
	closemessage
# 301 "data/maps/Route102/scripts.pory"
	
# 302 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Common_Movement_WalkInPlaceRight
# 303 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 304 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallZigzaHide
# 305 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_WALLY, Common_Movement_WalkInPlaceFasterLeft
# 306 "data/maps/Route102/scripts.pory"
	waitmovement LOCALID_ROUTE102_WALLY
# 307 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 308 "data/maps/Route102/scripts.pory"
	closemessage
# 309 "data/maps/Route102/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 310 "data/maps/Route102/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 311 "data/maps/Route102/scripts.pory"
	fadedefaultbgm
# 312 "data/maps/Route102/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 313 "data/maps/Route102/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 314 "data/maps/Route102/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 315 "data/maps/Route102/scripts.pory"
	waitstate
# 316 "data/maps/Route102/scripts.pory"
	releaseall
# 317 "data/maps/Route102/scripts.pory"
	end
# 318 "data/maps/Route102/scripts.pory"

# 319 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyTutorialPlayer:
# 320 "data/maps/Route102/scripts.pory"
	delay_8
# 321 "data/maps/Route102/scripts.pory"
	walk_right
# 322 "data/maps/Route102/scripts.pory"
	walk_right
# 323 "data/maps/Route102/scripts.pory"
	walk_up
# 324 "data/maps/Route102/scripts.pory"
	walk_up
# 325 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_right
# 326 "data/maps/Route102/scripts.pory"
	step_end
# 327 "data/maps/Route102/scripts.pory"

# 328 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyTutorialWally:
# 329 "data/maps/Route102/scripts.pory"
	delay_8
# 330 "data/maps/Route102/scripts.pory"
	walk_right
# 331 "data/maps/Route102/scripts.pory"
	walk_up
# 332 "data/maps/Route102/scripts.pory"
	walk_up
# 333 "data/maps/Route102/scripts.pory"
	walk_up
# 334 "data/maps/Route102/scripts.pory"
	delay_16
# 335 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_up
# 336 "data/maps/Route102/scripts.pory"
	delay_16
# 337 "data/maps/Route102/scripts.pory"
	delay_16
# 338 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_right
# 339 "data/maps/Route102/scripts.pory"
	step_end
# 340 "data/maps/Route102/scripts.pory"

# 341 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyGrabBall:
# 342 "data/maps/Route102/scripts.pory"
	walk_right
# 343 "data/maps/Route102/scripts.pory"
	walk_right
# 344 "data/maps/Route102/scripts.pory"
	step_end
# 345 "data/maps/Route102/scripts.pory"

# 346 "data/maps/Route102/scripts.pory"

# 347 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyJump::
# 348 "data/maps/Route102/scripts.pory"
	jump_in_place_right
# 349 "data/maps/Route102/scripts.pory"
	step_end
# 350 "data/maps/Route102/scripts.pory"

# 351 "data/maps/Route102/scripts.pory"
Route102_EventScript_RaltsAppears::
# 352 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_RALTS, 6, 6
# 353 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_RALTS, Route102_Movement_RaltsJump
# 354 "data/maps/Route102/scripts.pory"
	delay 8
# 355 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 356 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 357 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Ralts, MSGBOX_DEFAULT
# 358 "data/maps/Route102/scripts.pory"
	waitmoncry
# 359 "data/maps/Route102/scripts.pory"
	delay 8
# 360 "data/maps/Route102/scripts.pory"
	playbgm MUS_VS_WILD, FALSE
# 361 "data/maps/Route102/scripts.pory"
	return
# 362 "data/maps/Route102/scripts.pory"

# 363 "data/maps/Route102/scripts.pory"

# 364 "data/maps/Route102/scripts.pory"
	
# 365 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzaSurprise::
# 366 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_ZIGZAGOON, Common_Movement_ExclamationMark
# 367 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 368 "data/maps/Route102/scripts.pory"
	return
# 369 "data/maps/Route102/scripts.pory"

# 370 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzaHurt::
# 371 "data/maps/Route102/scripts.pory"
	playse SE_EFFECTIVE
# 372 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_ZIGZAGOON, Route102_Movement_RaltsHurt
# 373 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 374 "data/maps/Route102/scripts.pory"
	return
# 375 "data/maps/Route102/scripts.pory"

# 376 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallThrow::
# 377 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_BALL, 3, 6
# 378 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL, Route102_Movement_BallThrow
# 379 "data/maps/Route102/scripts.pory"
	playse SE_BALL_THROW
# 380 "data/maps/Route102/scripts.pory"
	waitse
# 381 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 382 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_RALTS
# 383 "data/maps/Route102/scripts.pory"
	waitse
# 384 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 385 "data/maps/Route102/scripts.pory"
	waitmoncry
# 386 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 387 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_BALL, 10, 7
# 388 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_BALL_CATCH, 5, 6
# 389 "data/maps/Route102/scripts.pory"
	return
# 390 "data/maps/Route102/scripts.pory"

# 391 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallCatch::
# 392 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 393 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceUp
# 394 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 395 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceDown
# 396 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 397 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceLeft
# 398 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 399 "data/maps/Route102/scripts.pory"
	waitse
# 400 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceDown
# 401 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 402 "data/maps/Route102/scripts.pory"
	delay 16
# 403 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 404 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceUp
# 405 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 406 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceDown
# 407 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 408 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceLeft
# 409 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 410 "data/maps/Route102/scripts.pory"
	waitse
# 411 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceDown
# 412 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 413 "data/maps/Route102/scripts.pory"
	delay 16
# 414 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 415 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceUp
# 416 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 417 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceDown
# 418 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 419 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceLeft
# 420 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 421 "data/maps/Route102/scripts.pory"
	waitse
# 422 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_BALL_CATCH, Common_Movement_FaceDown
# 423 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 424 "data/maps/Route102/scripts.pory"
	delay 24
# 425 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 426 "data/maps/Route102/scripts.pory"
	waitse 
# 427 "data/maps/Route102/scripts.pory"
	delay 10
# 428 "data/maps/Route102/scripts.pory"
	playfanfare MUS_EVOLVED
# 429 "data/maps/Route102/scripts.pory"
	waitfanfare
# 430 "data/maps/Route102/scripts.pory"
	return
# 431 "data/maps/Route102/scripts.pory"

# 432 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallCatchHide::
# 433 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_BALL_CATCH
# 434 "data/maps/Route102/scripts.pory"
	return
# 435 "data/maps/Route102/scripts.pory"

# 436 "data/maps/Route102/scripts.pory"

# 437 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallZigzaHide::
# 438 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_BALL
# 439 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_BALL_CATCH
# 440 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_RALTS
# 441 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ROUTE102_ZIGZAGOON
# 442 "data/maps/Route102/scripts.pory"
	return
# 443 "data/maps/Route102/scripts.pory"
	
# 444 "data/maps/Route102/scripts.pory"

# 445 "data/maps/Route102/scripts.pory"
Route102_Movement_BallThrow::
# 446 "data/maps/Route102/scripts.pory"
	disable_jump_landing_ground_effect
# 447 "data/maps/Route102/scripts.pory"
	jump_2_right
# 448 "data/maps/Route102/scripts.pory"
	step_end
# 449 "data/maps/Route102/scripts.pory"

# 450 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsTeleport::
# 451 "data/maps/Route102/scripts.pory"
	jump_in_place_left_right
# 452 "data/maps/Route102/scripts.pory"
	set_invisible
# 453 "data/maps/Route102/scripts.pory"
	step_end
# 454 "data/maps/Route102/scripts.pory"

# 455 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsTeleport2::
# 456 "data/maps/Route102/scripts.pory"
	set_visible
# 457 "data/maps/Route102/scripts.pory"
	jump_in_place_left_right
# 458 "data/maps/Route102/scripts.pory"
	face_right
# 459 "data/maps/Route102/scripts.pory"
	step_end
# 460 "data/maps/Route102/scripts.pory"

# 461 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzagoonAttacks::
# 462 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_ZIGZAGOON, Route102_Movement_AttackRalts
# 463 "data/maps/Route102/scripts.pory"
	delay 24
# 464 "data/maps/Route102/scripts.pory"
	playse SE_EFFECTIVE
# 465 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_RALTS, Route102_Movement_RaltsHurt
# 466 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 467 "data/maps/Route102/scripts.pory"
	return
# 468 "data/maps/Route102/scripts.pory"
	
# 469 "data/maps/Route102/scripts.pory"
	
# 470 "data/maps/Route102/scripts.pory"
	
# 471 "data/maps/Route102/scripts.pory"
Route102_Movement_AttackRalts::
# 472 "data/maps/Route102/scripts.pory"
	walk_right
# 473 "data/maps/Route102/scripts.pory"
	walk_fast_right
# 474 "data/maps/Route102/scripts.pory"
	walk_faster_right
# 475 "data/maps/Route102/scripts.pory"
	walk_faster_right
# 476 "data/maps/Route102/scripts.pory"
	lock_facing_direction
# 477 "data/maps/Route102/scripts.pory"
	delay_16
# 478 "data/maps/Route102/scripts.pory"
	walk_left
# 479 "data/maps/Route102/scripts.pory"
	unlock_facing_direction
# 480 "data/maps/Route102/scripts.pory"
	step_end
# 481 "data/maps/Route102/scripts.pory"

# 482 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsHurt::
# 483 "data/maps/Route102/scripts.pory"
	face_left
# 484 "data/maps/Route102/scripts.pory"
	lock_facing_direction
# 485 "data/maps/Route102/scripts.pory"
	jump_right
# 486 "data/maps/Route102/scripts.pory"
	unlock_facing_direction
# 487 "data/maps/Route102/scripts.pory"
	step_end
# 488 "data/maps/Route102/scripts.pory"

# 489 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsJump::
# 490 "data/maps/Route102/scripts.pory"
	jump_in_place_left
# 491 "data/maps/Route102/scripts.pory"
	step_end
# 492 "data/maps/Route102/scripts.pory"

# 493 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 494 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 495 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 496 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 497 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 498 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 499 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 500 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 501 "data/maps/Route102/scripts.pory"
	release
# 502 "data/maps/Route102/scripts.pory"
	end
# 503 "data/maps/Route102/scripts.pory"

# 504 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 505 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 506 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 507 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 508 "data/maps/Route102/scripts.pory"
	release
# 509 "data/maps/Route102/scripts.pory"
	end
# 510 "data/maps/Route102/scripts.pory"

# 511 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 512 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 513 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 514 "data/maps/Route102/scripts.pory"
	release
# 515 "data/maps/Route102/scripts.pory"
	end
# 516 "data/maps/Route102/scripts.pory"

# 517 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 518 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 519 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 520 "data/maps/Route102/scripts.pory"
	release
# 521 "data/maps/Route102/scripts.pory"
	end
# 522 "data/maps/Route102/scripts.pory"

# 523 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 524 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 525 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 526 "data/maps/Route102/scripts.pory"
	release
# 527 "data/maps/Route102/scripts.pory"
	end
# 528 "data/maps/Route102/scripts.pory"

# 529 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 530 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 531 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 532 "data/maps/Route102/scripts.pory"
	end
# 533 "data/maps/Route102/scripts.pory"

# 534 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 535 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 536 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 537 "data/maps/Route102/scripts.pory"
	end
# 538 "data/maps/Route102/scripts.pory"

# 539 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 540 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 541 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 542 "data/maps/Route102/scripts.pory"
	end
# 543 "data/maps/Route102/scripts.pory"

# 544 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 545 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 546 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 547 "data/maps/Route102/scripts.pory"
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
