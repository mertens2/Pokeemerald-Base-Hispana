Route103_EventScript_Rival::
# 122 "data/maps/Route103/scripts.pory"
	lockall
# 123 "data/maps/Route103/scripts.pory"
	checkplayergender
# 124 "data/maps/Route103/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE QUEST_1
# 125 "data/maps/Route103/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST QUEST_1
# 126 "data/maps/Route103/scripts.pory"
	setspeaker Rival
# 129 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_0
# 135 "data/maps/Route103/scripts.pory"
	closemessage
# 137 "data/maps/Route103/scripts.pory"
	faceplayer
# 138 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route103_EventScript_Rival_2
# 143 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
Route103_EventScript_Rival_1:
# 145 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 146 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 147 "data/maps/Route103/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 148 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 149 "data/maps/Route103/scripts.pory"
	delay 48
# 150 "data/maps/Route103/scripts.pory"
	setspeaker Rival
# 153 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_1
# 159 "data/maps/Route103/scripts.pory"
	checkplayergender
# 160 "data/maps/Route103/scripts.pory"
	compare VAR_STARTER_REGION, 9
	goto_if_ge Route103_EventScript_Rival_6
# 169 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route103_EventScript_Rival_12
# 182 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 183 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_Rival_20
# 185 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_Rival_21
# 187 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_Rival_22
Route103_EventScript_Rival_5:
# 195 "data/maps/Route103/scripts.pory"
	closemessage
# 196 "data/maps/Route103/scripts.pory"
	setspeaker Rival
# 199 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_2
# 205 "data/maps/Route103/scripts.pory"
	closemessage
# 207 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_Rival_2:
# 139 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto Route103_EventScript_Rival_1

Route103_EventScript_Rival_6:
# 161 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route103_EventScript_Rival_9
# 165 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_ALL_STARTERS, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_9:
# 162 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_ALL_STARTERS, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_12:
# 170 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 171 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_Rival_16
# 173 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_Rival_17
# 175 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_Rival_18
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_16:
# 172 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_17:
# 174 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_18:
# 176 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_20:
# 184 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_21:
# 186 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_22:
# 188 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5


# 211 "data/maps/Route103/scripts.pory"

# 212 "data/maps/Route103/scripts.pory"
.set LOCALID_RIVAL, 2
# 213 "data/maps/Route103/scripts.pory"

# 214 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 215 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 216 "data/maps/Route103/scripts.pory"
	.byte 0
# 217 "data/maps/Route103/scripts.pory"

# 218 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 219 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 220 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 221 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_BADGE03_GET, Route103_Transition_MoveCamper
# 222 "data/maps/Route103/scripts.pory"
	end
# 223 "data/maps/Route103/scripts.pory"

# 224 "data/maps/Route103/scripts.pory"

# 225 "data/maps/Route103/scripts.pory"
Route103_Transition_MoveCamper:
# 226 "data/maps/Route103/scripts.pory"
	setobjectxyperm 21, 5, 11
# 227 "data/maps/Route103/scripts.pory"
	return
# 228 "data/maps/Route103/scripts.pory"

# 229 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 230 "data/maps/Route103/scripts.pory"
	closemessage
# 231 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 232 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 233 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 234 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 235 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 236 "data/maps/Route103/scripts.pory"
	end
# 237 "data/maps/Route103/scripts.pory"

# 238 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 239 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 240 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 241 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 243 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_EventScript_RivalExitFacingNorth2
# 244 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 245 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 246 "data/maps/Route103/scripts.pory"
	end
# 247 "data/maps/Route103/scripts.pory"

# 248 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 249 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 250 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 251 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 253 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 254 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 255 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 256 "data/maps/Route103/scripts.pory"
	end
# 257 "data/maps/Route103/scripts.pory"

# 258 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 259 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 260 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 261 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 262 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 263 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 264 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 265 "data/maps/Route103/scripts.pory"
	end
# 266 "data/maps/Route103/scripts.pory"

# 267 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 268 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 269 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 270 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 271 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 272 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 273 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 274 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 275 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 276 "data/maps/Route103/scripts.pory"
	releaseall
# 277 "data/maps/Route103/scripts.pory"
	end
# 278 "data/maps/Route103/scripts.pory"

# 279 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard::
# 280 "data/maps/Route103/scripts.pory"
	lockall
# 281 "data/maps/Route103/scripts.pory"
	faceplayer
# 282 "data/maps/Route103/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route103_EventScript_SafariGuard_2
# 283 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_SafariGuard_Text_2
# 284 "data/maps/Route103/scripts.pory"
	releaseall
# 285 "data/maps/Route103/scripts.pory"
	return
# 286 "data/maps/Route103/scripts.pory"

# 287 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard_2:
# 288 "data/maps/Route103/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Route103_EventScript_SafariGuard_5
# 289 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard_4:
# 290 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Route103_EventScript_SafariGuard_9
# 291 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard_7:
# 292 "data/maps/Route103/scripts.pory"
	releaseall
# 293 "data/maps/Route103/scripts.pory"
	end
# 294 "data/maps/Route103/scripts.pory"

# 295 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard_5:
# 296 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_SafariGuard_Text_0
# 297 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_SafariGuard_4
# 298 "data/maps/Route103/scripts.pory"

# 299 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard_8:
# 300 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_SafariGuard_Text_1
# 301 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_SafariGuard_7
# 302 "data/maps/Route103/scripts.pory"

# 303 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard_9:
# 304 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Route103_EventScript_SafariGuard_8
# 305 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_SafariGuard_7
# 306 "data/maps/Route103/scripts.pory"

# 307 "data/maps/Route103/scripts.pory"

# 308 "data/maps/Route103/scripts.pory"

# 309 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 310 "data/maps/Route103/scripts.pory"
	walk_left
# 311 "data/maps/Route103/scripts.pory"
	walk_down
# 312 "data/maps/Route103/scripts.pory"
	step_end
# 313 "data/maps/Route103/scripts.pory"

# 314 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth2:
# 315 "data/maps/Route103/scripts.pory"
	jump_2_down
# 316 "data/maps/Route103/scripts.pory"
	delay_16
# 317 "data/maps/Route103/scripts.pory"
	walk_down
# 318 "data/maps/Route103/scripts.pory"
	walk_down
# 319 "data/maps/Route103/scripts.pory"
	walk_down
# 320 "data/maps/Route103/scripts.pory"
	walk_down
# 321 "data/maps/Route103/scripts.pory"
	step_end
# 322 "data/maps/Route103/scripts.pory"

# 323 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 324 "data/maps/Route103/scripts.pory"
	delay_16
# 325 "data/maps/Route103/scripts.pory"
	delay_4
# 326 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 327 "data/maps/Route103/scripts.pory"
	delay_16
# 328 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 329 "data/maps/Route103/scripts.pory"
	step_end
# 330 "data/maps/Route103/scripts.pory"

# 331 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 332 "data/maps/Route103/scripts.pory"
	walk_down
# 333 "data/maps/Route103/scripts.pory"
	step_end
# 334 "data/maps/Route103/scripts.pory"

# 335 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 336 "data/maps/Route103/scripts.pory"
	jump_2_down
# 337 "data/maps/Route103/scripts.pory"
	delay_16
# 338 "data/maps/Route103/scripts.pory"
	walk_down
# 339 "data/maps/Route103/scripts.pory"
	walk_down
# 340 "data/maps/Route103/scripts.pory"
	walk_down
# 341 "data/maps/Route103/scripts.pory"
	step_end
# 342 "data/maps/Route103/scripts.pory"

# 343 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 344 "data/maps/Route103/scripts.pory"
	delay_16
# 345 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 346 "data/maps/Route103/scripts.pory"
	step_end
# 347 "data/maps/Route103/scripts.pory"

# 348 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 349 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 350 "data/maps/Route103/scripts.pory"
	end
# 351 "data/maps/Route103/scripts.pory"

# 352 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 353 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 354 "data/maps/Route103/scripts.pory"
	end
# 355 "data/maps/Route103/scripts.pory"

# 356 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 357 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 358 "data/maps/Route103/scripts.pory"
	end
# 359 "data/maps/Route103/scripts.pory"
	
# 360 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariSign::
# 361 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_SafariSign, MSGBOX_SIGN
# 362 "data/maps/Route103/scripts.pory"
	end
# 363 "data/maps/Route103/scripts.pory"

# 364 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 365 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 366 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 367 "data/maps/Route103/scripts.pory"
	end
# 368 "data/maps/Route103/scripts.pory"

# 369 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 370 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 371 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 372 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 373 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 374 "data/maps/Route103/scripts.pory"
	end
# 375 "data/maps/Route103/scripts.pory"

# 376 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 377 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 378 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 379 "data/maps/Route103/scripts.pory"
	release
# 380 "data/maps/Route103/scripts.pory"
	end
# 381 "data/maps/Route103/scripts.pory"

# 382 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 383 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 384 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 385 "data/maps/Route103/scripts.pory"
	end
# 386 "data/maps/Route103/scripts.pory"

# 387 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 388 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 389 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 390 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 391 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 392 "data/maps/Route103/scripts.pory"
	end
# 393 "data/maps/Route103/scripts.pory"

# 394 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 395 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 396 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 397 "data/maps/Route103/scripts.pory"
	release
# 398 "data/maps/Route103/scripts.pory"
	end
# 399 "data/maps/Route103/scripts.pory"

# 400 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 401 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 402 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 403 "data/maps/Route103/scripts.pory"
	end
# 404 "data/maps/Route103/scripts.pory"

# 405 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 406 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 407 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 408 "data/maps/Route103/scripts.pory"
	end
# 409 "data/maps/Route103/scripts.pory"

# 410 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 411 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 412 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 413 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 414 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 415 "data/maps/Route103/scripts.pory"
	release
# 416 "data/maps/Route103/scripts.pory"
	end
# 417 "data/maps/Route103/scripts.pory"

# 418 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 419 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 420 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 421 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 422 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 423 "data/maps/Route103/scripts.pory"
	release
# 424 "data/maps/Route103/scripts.pory"
	end
# 425 "data/maps/Route103/scripts.pory"

# 426 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 427 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 428 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 429 "data/maps/Route103/scripts.pory"
	end
# 430 "data/maps/Route103/scripts.pory"

# 431 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 432 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 433 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 434 "data/maps/Route103/scripts.pory"
	end
# 435 "data/maps/Route103/scripts.pory"

# 436 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 437 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 438 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 439 "data/maps/Route103/scripts.pory"
	end
# 440 "data/maps/Route103/scripts.pory"

# 441 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 442 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 443 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 444 "data/maps/Route103/scripts.pory"
	end
# 445 "data/maps/Route103/scripts.pory"

# 446 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 447 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 448 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 449 "data/maps/Route103/scripts.pory"
	end

Route103_EventScript_Rival_Text_0:
# 129 "data/maps/Route103/scripts.pory"
	.string "Ah, Sentret, Ducklett, ¿Quién más?$"

Route103_EventScript_Rival_Text_1:
# 153 "data/maps/Route103/scripts.pory"
	.string "¡Ah, hola, {PLAYER}!\p"
	.string "Qué bueno que llegas, porque quería\n"
	.string "investigar el comportamiento en\l"
	.string "combate de nuestros iniciales.\p"
	.string "¡Prepárate!$"

Route103_EventScript_Rival_Text_2:
# 199 "data/maps/Route103/scripts.pory"
	.string "¡Genial! ¡Papá amará estos datos!$"

Route103_Text_MayDefeated::
# 4 "data/maps/Route103/scripts.pory"
	.string "… … … … … … … ¡Y listo!\p"
	.string "¡Wow! Nunca creí que se comportara\n"
	.string "así…\p"
	.string "¡Gracias!$"

Route103_Text_ShouldHaveBroughtPotion::
# 18 "data/maps/Route103/scripts.pory"
	.string "Mi Pokémon…\n"
	.string "No esperaba que de noche…$"

Route103_Text_ShortcutToOldale::
# 32 "data/maps/Route103/scripts.pory"
	.string "¡ATAJOOOOOOOOO!$"

Route103_Text_RouteSign::
# 44 "data/maps/Route103/scripts.pory"
	.string "RUTA 103\n"
	.string "{DOWN_ARROW} PUEBLO OLDALE$"

Route103_Text_SafariSign::
# 58 "data/maps/Route103/scripts.pory"
	.string "Mini-Safari\n"
	.string "¡Captura Pokémon muy raros!$"

Route103_EventScript_SafariGuard_Text_0::
# 70 "data/maps/Route103/scripts.pory"
	.string "¡Hola, Joven Entrenador{A}!\p"
	.string "Estamos preparando un nuevo Juego del\n"
	.string "Safari... Aún falta, ¡Pero visítanos a\l"
	.string "menudo para saber si hemos abierto!$"

Route103_EventScript_SafariGuard_Text_1::
# 87 "data/maps/Route103/scripts.pory"
	.string "¡Hola, Joven Entrenador{A}!\p"
	.string "Estamos preparando un nuevo Juego del\n"
	.string "Safari... ¡Pero falta muy poco!\p"
	.string "Entretanto, ¿Porqué no vas a desafiar a\n"
	.string "Wattson?\p"
	.string "¡Habremos abierto para entonces!$"

Route103_EventScript_SafariGuard_Text_2::
# 103 "data/maps/Route103/scripts.pory"
	.string "¡Hola, Joven Entrenador{A}!\p"
	.string "El Mini-Safari ha abierto,\n"
	.string "¡Buena suerte!$"
