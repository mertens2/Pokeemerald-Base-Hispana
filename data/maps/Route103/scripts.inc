Route103_EventScript_Rival::
# 122 "data/maps/Route103/scripts.pory"
	lockall
# 123 "data/maps/Route103/scripts.pory"
	checkplayergender
# 124 "data/maps/Route103/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE SIDE_QUEST_1
# 125 "data/maps/Route103/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST SIDE_QUEST_1
# 126 "data/maps/Route103/scripts.pory"
	namebox Rival
# 129 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_0
# 135 "data/maps/Route103/scripts.pory"
	closemessage
# 136 "data/maps/Route103/scripts.pory"
	hidenamebox
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
	namebox Rival
# 153 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_1
# 159 "data/maps/Route103/scripts.pory"
	checkplayergender
# 160 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route103_EventScript_Rival_6
# 173 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 174 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_Rival_14
# 176 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_Rival_15
# 178 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_Rival_16
Route103_EventScript_Rival_5:
# 183 "data/maps/Route103/scripts.pory"
	hidenamebox
# 184 "data/maps/Route103/scripts.pory"
	closemessage
# 185 "data/maps/Route103/scripts.pory"
	namebox Rival
# 188 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Rival_Text_2
# 194 "data/maps/Route103/scripts.pory"
	closemessage
# 195 "data/maps/Route103/scripts.pory"
	hidenamebox
# 196 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_Rival_2:
# 139 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto Route103_EventScript_Rival_1

Route103_EventScript_Rival_6:
# 161 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 162 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_Rival_10
# 164 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_Rival_11
# 166 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_Rival_12
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_10:
# 163 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_11:
# 165 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_12:
# 167 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_14:
# 175 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_15:
# 177 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5

Route103_EventScript_Rival_16:
# 179 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
	goto Route103_EventScript_Rival_5


# 200 "data/maps/Route103/scripts.pory"

# 201 "data/maps/Route103/scripts.pory"
.set LOCALID_RIVAL, 2
# 202 "data/maps/Route103/scripts.pory"

# 203 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 204 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 205 "data/maps/Route103/scripts.pory"
	.byte 0
# 206 "data/maps/Route103/scripts.pory"

# 207 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 208 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 209 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 210 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_BADGE03_GET, Route103_Transition_MoveCamper
# 211 "data/maps/Route103/scripts.pory"
	end
# 212 "data/maps/Route103/scripts.pory"

# 213 "data/maps/Route103/scripts.pory"

# 214 "data/maps/Route103/scripts.pory"
Route103_Transition_MoveCamper:
# 215 "data/maps/Route103/scripts.pory"
	setobjectxyperm 21, 5, 11
# 216 "data/maps/Route103/scripts.pory"
	return
# 217 "data/maps/Route103/scripts.pory"

# 218 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 219 "data/maps/Route103/scripts.pory"
	closemessage
# 220 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 221 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 222 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 223 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 224 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 225 "data/maps/Route103/scripts.pory"
	end
# 226 "data/maps/Route103/scripts.pory"

# 227 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 228 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 229 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 230 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 232 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_EventScript_RivalExitFacingNorth2
# 233 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 234 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 235 "data/maps/Route103/scripts.pory"
	end
# 236 "data/maps/Route103/scripts.pory"

# 237 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 238 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 239 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 240 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 242 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 243 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 244 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 245 "data/maps/Route103/scripts.pory"
	end
# 246 "data/maps/Route103/scripts.pory"

# 247 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 248 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 249 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 250 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 251 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 252 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 253 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 254 "data/maps/Route103/scripts.pory"
	end
# 255 "data/maps/Route103/scripts.pory"

# 256 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 257 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 258 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 259 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 260 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 261 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 262 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 263 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 264 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 265 "data/maps/Route103/scripts.pory"
	releaseall
# 266 "data/maps/Route103/scripts.pory"
	end
# 267 "data/maps/Route103/scripts.pory"

# 268 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard::
# 269 "data/maps/Route103/scripts.pory"
	lockall
# 270 "data/maps/Route103/scripts.pory"
	faceplayer
# 271 "data/maps/Route103/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route103_EventScript_SafariGuard_2
# 272 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_SafariGuard_Text_2
# 273 "data/maps/Route103/scripts.pory"
	releaseall
# 274 "data/maps/Route103/scripts.pory"
	return
# 275 "data/maps/Route103/scripts.pory"

# 276 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard_2:
# 277 "data/maps/Route103/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Route103_EventScript_SafariGuard_5
# 278 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard_4:
# 279 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Route103_EventScript_SafariGuard_9
# 280 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard_7:
# 281 "data/maps/Route103/scripts.pory"
	releaseall
# 282 "data/maps/Route103/scripts.pory"
	end
# 283 "data/maps/Route103/scripts.pory"

# 284 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard_5:
# 285 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_SafariGuard_Text_0
# 286 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_SafariGuard_4
# 287 "data/maps/Route103/scripts.pory"

# 288 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard_8:
# 289 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_SafariGuard_Text_1
# 290 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_SafariGuard_7
# 291 "data/maps/Route103/scripts.pory"

# 292 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariGuard_9:
# 293 "data/maps/Route103/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Route103_EventScript_SafariGuard_8
# 294 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_SafariGuard_7
# 295 "data/maps/Route103/scripts.pory"

# 296 "data/maps/Route103/scripts.pory"

# 297 "data/maps/Route103/scripts.pory"

# 298 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 299 "data/maps/Route103/scripts.pory"
	walk_left
# 300 "data/maps/Route103/scripts.pory"
	walk_down
# 301 "data/maps/Route103/scripts.pory"
	step_end
# 302 "data/maps/Route103/scripts.pory"

# 303 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth2:
# 304 "data/maps/Route103/scripts.pory"
	jump_2_down
# 305 "data/maps/Route103/scripts.pory"
	delay_16
# 306 "data/maps/Route103/scripts.pory"
	walk_down
# 307 "data/maps/Route103/scripts.pory"
	walk_down
# 308 "data/maps/Route103/scripts.pory"
	walk_down
# 309 "data/maps/Route103/scripts.pory"
	walk_down
# 310 "data/maps/Route103/scripts.pory"
	step_end
# 311 "data/maps/Route103/scripts.pory"

# 312 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 313 "data/maps/Route103/scripts.pory"
	delay_16
# 314 "data/maps/Route103/scripts.pory"
	delay_4
# 315 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 316 "data/maps/Route103/scripts.pory"
	delay_16
# 317 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 318 "data/maps/Route103/scripts.pory"
	step_end
# 319 "data/maps/Route103/scripts.pory"

# 320 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 321 "data/maps/Route103/scripts.pory"
	walk_down
# 322 "data/maps/Route103/scripts.pory"
	step_end
# 323 "data/maps/Route103/scripts.pory"

# 324 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 325 "data/maps/Route103/scripts.pory"
	jump_2_down
# 326 "data/maps/Route103/scripts.pory"
	delay_16
# 327 "data/maps/Route103/scripts.pory"
	walk_down
# 328 "data/maps/Route103/scripts.pory"
	walk_down
# 329 "data/maps/Route103/scripts.pory"
	walk_down
# 330 "data/maps/Route103/scripts.pory"
	step_end
# 331 "data/maps/Route103/scripts.pory"

# 332 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 333 "data/maps/Route103/scripts.pory"
	delay_16
# 334 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 335 "data/maps/Route103/scripts.pory"
	step_end
# 336 "data/maps/Route103/scripts.pory"

# 337 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 338 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 339 "data/maps/Route103/scripts.pory"
	end
# 340 "data/maps/Route103/scripts.pory"

# 341 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 342 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 343 "data/maps/Route103/scripts.pory"
	end
# 344 "data/maps/Route103/scripts.pory"

# 345 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 346 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 347 "data/maps/Route103/scripts.pory"
	end
# 348 "data/maps/Route103/scripts.pory"
	
# 349 "data/maps/Route103/scripts.pory"
Route103_EventScript_SafariSign::
# 350 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_SafariSign, MSGBOX_SIGN
# 351 "data/maps/Route103/scripts.pory"
	end
# 352 "data/maps/Route103/scripts.pory"

# 353 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 354 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 355 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 356 "data/maps/Route103/scripts.pory"
	end
# 357 "data/maps/Route103/scripts.pory"

# 358 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 359 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 360 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 361 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 362 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 363 "data/maps/Route103/scripts.pory"
	end
# 364 "data/maps/Route103/scripts.pory"

# 365 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 366 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 367 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 368 "data/maps/Route103/scripts.pory"
	release
# 369 "data/maps/Route103/scripts.pory"
	end
# 370 "data/maps/Route103/scripts.pory"

# 371 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 372 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 373 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 374 "data/maps/Route103/scripts.pory"
	end
# 375 "data/maps/Route103/scripts.pory"

# 376 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 377 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 378 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 379 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 380 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 381 "data/maps/Route103/scripts.pory"
	end
# 382 "data/maps/Route103/scripts.pory"

# 383 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 384 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 385 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 386 "data/maps/Route103/scripts.pory"
	release
# 387 "data/maps/Route103/scripts.pory"
	end
# 388 "data/maps/Route103/scripts.pory"

# 389 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 390 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 391 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 392 "data/maps/Route103/scripts.pory"
	end
# 393 "data/maps/Route103/scripts.pory"

# 394 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 395 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 396 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 397 "data/maps/Route103/scripts.pory"
	end
# 398 "data/maps/Route103/scripts.pory"

# 399 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 400 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 401 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 402 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 403 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 404 "data/maps/Route103/scripts.pory"
	release
# 405 "data/maps/Route103/scripts.pory"
	end
# 406 "data/maps/Route103/scripts.pory"

# 407 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 408 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 409 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 410 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 411 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 412 "data/maps/Route103/scripts.pory"
	release
# 413 "data/maps/Route103/scripts.pory"
	end
# 414 "data/maps/Route103/scripts.pory"

# 415 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 416 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 417 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 418 "data/maps/Route103/scripts.pory"
	end
# 419 "data/maps/Route103/scripts.pory"

# 420 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 421 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 422 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 423 "data/maps/Route103/scripts.pory"
	end
# 424 "data/maps/Route103/scripts.pory"

# 425 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 426 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 427 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 428 "data/maps/Route103/scripts.pory"
	end
# 429 "data/maps/Route103/scripts.pory"

# 430 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 431 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 432 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 433 "data/maps/Route103/scripts.pory"
	end
# 434 "data/maps/Route103/scripts.pory"

# 435 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 436 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 437 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 438 "data/maps/Route103/scripts.pory"
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
# 188 "data/maps/Route103/scripts.pory"
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
