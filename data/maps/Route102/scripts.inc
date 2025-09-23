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
.set LOCALID_RALTS, 9
# 179 "data/maps/Route102/scripts.pory"
.set LOCALID_ZIGZA, 10
# 180 "data/maps/Route102/scripts.pory"
.set LOCALID_BALL, 11
# 181 "data/maps/Route102/scripts.pory"
.set LOCALID_BALL2, 13
# 182 "data/maps/Route102/scripts.pory"
.set LOCALID_WALLY, 14
# 183 "data/maps/Route102/scripts.pory"

# 184 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 185 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route102_OnFrame
# 186 "data/maps/Route102/scripts.pory"
	.byte 0
# 187 "data/maps/Route102/scripts.pory"

# 188 "data/maps/Route102/scripts.pory"
Route102_OnFrame::
# 189 "data/maps/Route102/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, Route102_WallyTutorial
# 190 "data/maps/Route102/scripts.pory"
	.2byte 0
# 191 "data/maps/Route102/scripts.pory"

# 192 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 193 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 194 "data/maps/Route102/scripts.pory"
	end
# 195 "data/maps/Route102/scripts.pory"

# 196 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 197 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 198 "data/maps/Route102/scripts.pory"
	end
# 199 "data/maps/Route102/scripts.pory"

# 200 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 201 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 202 "data/maps/Route102/scripts.pory"
	end
# 203 "data/maps/Route102/scripts.pory"

# 204 "data/maps/Route102/scripts.pory"

# 205 "data/maps/Route102/scripts.pory"
Error::
# 206 "data/maps/Route102/scripts.pory"
	lockall
# 207 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_WHITE
# 208 "data/maps/Route102/scripts.pory"
	special DrawWholeMapView
# 209 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 210 "data/maps/Route102/scripts.pory"
	msgbox NoDeberiasVerlo, MSGBOX_NPC
# 211 "data/maps/Route102/scripts.pory"
	releaseall
# 212 "data/maps/Route102/scripts.pory"
	end
# 213 "data/maps/Route102/scripts.pory"

# 214 "data/maps/Route102/scripts.pory"
Route102_WallyTutorial::
# 215 "data/maps/Route102/scripts.pory"
	lockall
# 216 "data/maps/Route102/scripts.pory"
	addobject LOCALID_WALLY
# 217 "data/maps/Route102/scripts.pory"
	addobject LOCALID_BALL
# 218 "data/maps/Route102/scripts.pory"
	addobject LOCALID_BALL2
# 219 "data/maps/Route102/scripts.pory"
	addobject LOCALID_RALTS
# 220 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ZIGZA
# 221 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Route102_Movement_WallyTutorialWally
# 222 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102_Movement_WallyTutorialPlayer
# 223 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route102/scripts.pory"
	namebox Wally
# 225 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_INTERRUPT
# 226 "data/maps/Route102/scripts.pory"
	hidenamebox
# 227 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_RaltsAppears
# 228 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_UnRalts, MSGBOX_DEFAULT
# 229 "data/maps/Route102/scripts.pory"
	closemessage
# 230 "data/maps/Route102/scripts.pory"
	hidenamebox
# 231 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 3, 6
# 232 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 233 "data/maps/Route102/scripts.pory"
	delay 16
# 234 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 235 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_WHITE
# 236 "data/maps/Route102/scripts.pory"
	delay 16
# 237 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 10, 7
# 238 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ZIGZA, 3, 6
# 239 "data/maps/Route102/scripts.pory"
	delay 8
# 240 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 241 "data/maps/Route102/scripts.pory"
	delay 8
# 242 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 243 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Sigsa, MSGBOX_DEFAULT
# 244 "data/maps/Route102/scripts.pory"
	waitmoncry
# 245 "data/maps/Route102/scripts.pory"
	delay 8
# 246 "data/maps/Route102/scripts.pory"
	namebox Wally
# 247 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyCommands
# 248 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Route102_Movement_WallyJump
# 249 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 250 "data/maps/Route102/scripts.pory"
	closemessage
# 251 "data/maps/Route102/scripts.pory"
	hidenamebox
# 252 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzagoonAttacks
# 253 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 254 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Sigsa, MSGBOX_DEFAULT
# 255 "data/maps/Route102/scripts.pory"
	waitmoncry
# 256 "data/maps/Route102/scripts.pory"
	closemessage
# 257 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 258 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Ralts
# 259 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RALTS, Route102_Movement_RaltsTeleport
# 260 "data/maps/Route102/scripts.pory"
	delay 2
# 261 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_WHITE
# 262 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 263 "data/maps/Route102/scripts.pory"
	delay 8
# 264 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_RALTS, 5, 6
# 265 "data/maps/Route102/scripts.pory"
	delay 16
# 266 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RALTS, Route102_Movement_RaltsTeleport2
# 267 "data/maps/Route102/scripts.pory"
	delay 4
# 268 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 269 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 270 "data/maps/Route102/scripts.pory"
	delay 8
# 271 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzaSurprise
# 272 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 273 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 274 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 275 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 276 "data/maps/Route102/scripts.pory"
	waitmoncry
# 277 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_ZigzaHurt
# 278 "data/maps/Route102/scripts.pory"
	delay 60
# 279 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_PokeballVe, MSGBOX_DEFAULT
# 280 "data/maps/Route102/scripts.pory"
	closemessage
# 281 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallThrow
# 282 "data/maps/Route102/scripts.pory"
	delay 8
# 283 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallCatch
# 284 "data/maps/Route102/scripts.pory"
	delay 8
# 285 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Route102_Movement_WallyGrabBall
# 286 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 287 "data/maps/Route102/scripts.pory"
	delay 16
# 288 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceRight
# 289 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 290 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallCatchHide
# 291 "data/maps/Route102/scripts.pory"
	namebox Wally
# 292 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 293 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Route102_Movement_WallyGrabBall
# 294 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 295 "data/maps/Route102/scripts.pory"
	closemessage
# 296 "data/maps/Route102/scripts.pory"
	hidenamebox
# 297 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_WallyZigzagoonThanks, MSGBOX_DEFAULT
# 298 "data/maps/Route102/scripts.pory"
	namebox Wally
# 299 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_WHITE
# 300 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ZIGZA
# 301 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 7, 6
# 302 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 303 "data/maps/Route102/scripts.pory"
	delay 8
# 304 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 305 "data/maps/Route102/scripts.pory"
	waitse
# 306 "data/maps/Route102/scripts.pory"
	closemessage
# 307 "data/maps/Route102/scripts.pory"
	hidenamebox
# 308 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceRight
# 309 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 310 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_BallZigzaHide
# 311 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft
# 312 "data/maps/Route102/scripts.pory"
	waitmovement LOCALID_WALLY
# 313 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 314 "data/maps/Route102/scripts.pory"
	closemessage
# 315 "data/maps/Route102/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 316 "data/maps/Route102/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 317 "data/maps/Route102/scripts.pory"
	fadedefaultbgm
# 318 "data/maps/Route102/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 319 "data/maps/Route102/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 320 "data/maps/Route102/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 321 "data/maps/Route102/scripts.pory"
	waitstate
# 322 "data/maps/Route102/scripts.pory"
	releaseall
# 323 "data/maps/Route102/scripts.pory"
	end
# 324 "data/maps/Route102/scripts.pory"

# 325 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyTutorialPlayer:
# 326 "data/maps/Route102/scripts.pory"
	delay_8
# 327 "data/maps/Route102/scripts.pory"
	walk_right
# 328 "data/maps/Route102/scripts.pory"
	walk_right
# 329 "data/maps/Route102/scripts.pory"
	walk_up
# 330 "data/maps/Route102/scripts.pory"
	walk_up
# 331 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_right
# 332 "data/maps/Route102/scripts.pory"
	step_end
# 333 "data/maps/Route102/scripts.pory"

# 334 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyTutorialWally:
# 335 "data/maps/Route102/scripts.pory"
	delay_8
# 336 "data/maps/Route102/scripts.pory"
	walk_right
# 337 "data/maps/Route102/scripts.pory"
	walk_up
# 338 "data/maps/Route102/scripts.pory"
	walk_up
# 339 "data/maps/Route102/scripts.pory"
	walk_up
# 340 "data/maps/Route102/scripts.pory"
	delay_16
# 341 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_up
# 342 "data/maps/Route102/scripts.pory"
	delay_16
# 343 "data/maps/Route102/scripts.pory"
	delay_16
# 344 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_right
# 345 "data/maps/Route102/scripts.pory"
	step_end
# 346 "data/maps/Route102/scripts.pory"

# 347 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyGrabBall:
# 348 "data/maps/Route102/scripts.pory"
	walk_right
# 349 "data/maps/Route102/scripts.pory"
	walk_right
# 350 "data/maps/Route102/scripts.pory"
	step_end
# 351 "data/maps/Route102/scripts.pory"

# 352 "data/maps/Route102/scripts.pory"

# 353 "data/maps/Route102/scripts.pory"
Route102_Movement_WallyJump::
# 354 "data/maps/Route102/scripts.pory"
	jump_in_place_right
# 355 "data/maps/Route102/scripts.pory"
	step_end
# 356 "data/maps/Route102/scripts.pory"

# 357 "data/maps/Route102/scripts.pory"
Route102_EventScript_RaltsAppears::
# 358 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_RALTS, 6, 6
# 359 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RALTS, Route102_Movement_RaltsJump
# 360 "data/maps/Route102/scripts.pory"
	delay 8
# 361 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 362 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 363 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_Ralts, MSGBOX_DEFAULT
# 364 "data/maps/Route102/scripts.pory"
	waitmoncry
# 365 "data/maps/Route102/scripts.pory"
	delay 8
# 366 "data/maps/Route102/scripts.pory"
	playbgm MUS_VS_WILD, FALSE
# 367 "data/maps/Route102/scripts.pory"
	return
# 368 "data/maps/Route102/scripts.pory"

# 369 "data/maps/Route102/scripts.pory"

# 370 "data/maps/Route102/scripts.pory"
	
# 371 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzaSurprise::
# 372 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ZIGZA, Common_Movement_ExclamationMark
# 373 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 374 "data/maps/Route102/scripts.pory"
	return
# 375 "data/maps/Route102/scripts.pory"

# 376 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzaHurt::
# 377 "data/maps/Route102/scripts.pory"
	playse SE_EFFECTIVE
# 378 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ZIGZA, Route102_Movement_RaltsHurt
# 379 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 380 "data/maps/Route102/scripts.pory"
	return
# 381 "data/maps/Route102/scripts.pory"

# 382 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallThrow::
# 383 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 3, 6
# 384 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL, Route102_Movement_BallThrow
# 385 "data/maps/Route102/scripts.pory"
	playse SE_BALL_THROW
# 386 "data/maps/Route102/scripts.pory"
	waitse
# 387 "data/maps/Route102/scripts.pory"
	playse SE_BALL_OPEN
# 388 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_RALTS
# 389 "data/maps/Route102/scripts.pory"
	waitse
# 390 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 391 "data/maps/Route102/scripts.pory"
	waitmoncry
# 392 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 393 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL, 10, 7
# 394 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_BALL2, 5, 6
# 395 "data/maps/Route102/scripts.pory"
	return
# 396 "data/maps/Route102/scripts.pory"

# 397 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallCatch::
# 398 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 399 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceUp
# 400 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 401 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 402 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 403 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceLeft
# 404 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 405 "data/maps/Route102/scripts.pory"
	waitse
# 406 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 407 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 408 "data/maps/Route102/scripts.pory"
	delay 16
# 409 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 410 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceUp
# 411 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 413 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 414 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceLeft
# 415 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 416 "data/maps/Route102/scripts.pory"
	waitse
# 417 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 418 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 419 "data/maps/Route102/scripts.pory"
	delay 16
# 420 "data/maps/Route102/scripts.pory"
	playse SE_BALL
# 421 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceUp
# 422 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 423 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 424 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 425 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceLeft
# 426 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 427 "data/maps/Route102/scripts.pory"
	waitse
# 428 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_BALL2, Common_Movement_FaceDown
# 429 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 430 "data/maps/Route102/scripts.pory"
	delay 24
# 431 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 432 "data/maps/Route102/scripts.pory"
	waitse 
# 433 "data/maps/Route102/scripts.pory"
	delay 10
# 434 "data/maps/Route102/scripts.pory"
	playfanfare MUS_EVOLVED
# 435 "data/maps/Route102/scripts.pory"
	waitfanfare
# 436 "data/maps/Route102/scripts.pory"
	return
# 437 "data/maps/Route102/scripts.pory"

# 438 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallCatchHide::
# 439 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_BALL2
# 440 "data/maps/Route102/scripts.pory"
	return
# 441 "data/maps/Route102/scripts.pory"

# 442 "data/maps/Route102/scripts.pory"

# 443 "data/maps/Route102/scripts.pory"
Route102_EventScript_BallZigzaHide::
# 444 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_BALL
# 445 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_BALL2
# 446 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_RALTS
# 447 "data/maps/Route102/scripts.pory"
	removeobject LOCALID_ZIGZA
# 448 "data/maps/Route102/scripts.pory"
	return
# 449 "data/maps/Route102/scripts.pory"
	
# 450 "data/maps/Route102/scripts.pory"

# 451 "data/maps/Route102/scripts.pory"
Route102_Movement_BallThrow::
# 452 "data/maps/Route102/scripts.pory"
	disable_jump_landing_ground_effect
# 453 "data/maps/Route102/scripts.pory"
	jump_2_right
# 454 "data/maps/Route102/scripts.pory"
	step_end
# 455 "data/maps/Route102/scripts.pory"

# 456 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsTeleport::
# 457 "data/maps/Route102/scripts.pory"
	jump_in_place_left_right
# 458 "data/maps/Route102/scripts.pory"
	set_invisible
# 459 "data/maps/Route102/scripts.pory"
	step_end
# 460 "data/maps/Route102/scripts.pory"

# 461 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsTeleport2::
# 462 "data/maps/Route102/scripts.pory"
	set_visible
# 463 "data/maps/Route102/scripts.pory"
	jump_in_place_left_right
# 464 "data/maps/Route102/scripts.pory"
	face_right
# 465 "data/maps/Route102/scripts.pory"
	step_end
# 466 "data/maps/Route102/scripts.pory"

# 467 "data/maps/Route102/scripts.pory"
Route102_EventScript_ZigzagoonAttacks::
# 468 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ZIGZA, Route102_Movement_AttackRalts
# 469 "data/maps/Route102/scripts.pory"
	delay 24
# 470 "data/maps/Route102/scripts.pory"
	playse SE_EFFECTIVE
# 471 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_RALTS, Route102_Movement_RaltsHurt
# 472 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 473 "data/maps/Route102/scripts.pory"
	return
# 474 "data/maps/Route102/scripts.pory"
	
# 475 "data/maps/Route102/scripts.pory"
	
# 476 "data/maps/Route102/scripts.pory"
	
# 477 "data/maps/Route102/scripts.pory"
Route102_Movement_AttackRalts::
# 478 "data/maps/Route102/scripts.pory"
	walk_right
# 479 "data/maps/Route102/scripts.pory"
	walk_fast_right
# 480 "data/maps/Route102/scripts.pory"
	walk_faster_right
# 481 "data/maps/Route102/scripts.pory"
	walk_faster_right
# 482 "data/maps/Route102/scripts.pory"
	lock_facing_direction
# 483 "data/maps/Route102/scripts.pory"
	delay_16
# 484 "data/maps/Route102/scripts.pory"
	walk_left
# 485 "data/maps/Route102/scripts.pory"
	unlock_facing_direction
# 486 "data/maps/Route102/scripts.pory"
	step_end
# 487 "data/maps/Route102/scripts.pory"

# 488 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsHurt::
# 489 "data/maps/Route102/scripts.pory"
	face_left
# 490 "data/maps/Route102/scripts.pory"
	lock_facing_direction
# 491 "data/maps/Route102/scripts.pory"
	jump_right
# 492 "data/maps/Route102/scripts.pory"
	unlock_facing_direction
# 493 "data/maps/Route102/scripts.pory"
	step_end
# 494 "data/maps/Route102/scripts.pory"

# 495 "data/maps/Route102/scripts.pory"
Route102_Movement_RaltsJump::
# 496 "data/maps/Route102/scripts.pory"
	jump_in_place_left
# 497 "data/maps/Route102/scripts.pory"
	step_end
# 498 "data/maps/Route102/scripts.pory"

# 499 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 500 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 501 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 502 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 503 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 504 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 505 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 506 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 507 "data/maps/Route102/scripts.pory"
	release
# 508 "data/maps/Route102/scripts.pory"
	end
# 509 "data/maps/Route102/scripts.pory"

# 510 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 511 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 512 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 513 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 514 "data/maps/Route102/scripts.pory"
	release
# 515 "data/maps/Route102/scripts.pory"
	end
# 516 "data/maps/Route102/scripts.pory"

# 517 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 518 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 519 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 520 "data/maps/Route102/scripts.pory"
	release
# 521 "data/maps/Route102/scripts.pory"
	end
# 522 "data/maps/Route102/scripts.pory"

# 523 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 524 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 525 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 526 "data/maps/Route102/scripts.pory"
	release
# 527 "data/maps/Route102/scripts.pory"
	end
# 528 "data/maps/Route102/scripts.pory"

# 529 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 530 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 531 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 532 "data/maps/Route102/scripts.pory"
	release
# 533 "data/maps/Route102/scripts.pory"
	end
# 534 "data/maps/Route102/scripts.pory"

# 535 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 536 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 537 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 538 "data/maps/Route102/scripts.pory"
	end
# 539 "data/maps/Route102/scripts.pory"

# 540 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 541 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 542 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 543 "data/maps/Route102/scripts.pory"
	end
# 544 "data/maps/Route102/scripts.pory"

# 545 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 546 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 547 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 548 "data/maps/Route102/scripts.pory"
	end
# 549 "data/maps/Route102/scripts.pory"

# 550 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 551 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 552 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 553 "data/maps/Route102/scripts.pory"
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
