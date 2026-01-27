LittlerootTown_EventScript_TownSign::
# 5 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BirchsLabSign::
# 17 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BirchsLabSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BrendansHouseSign::
# 27 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 28 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 29 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_BrendansHouseSign_2
# 42 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BrendansHouseSign_Text_1, MSGBOX_SIGN
LittlerootTown_EventScript_BrendansHouseSign_1:
# 49 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_BrendansHouseSign_2:
# 32 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BrendansHouseSign_Text_0, MSGBOX_SIGN
	goto LittlerootTown_EventScript_BrendansHouseSign_1


LittlerootTown_EventScript_MaysHouseSign::
# 54 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 55 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 56 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne LittlerootTown_EventScript_MaysHouseSign_2
# 69 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BrendansHouseSign_Text_1, MSGBOX_SIGN
LittlerootTown_EventScript_MaysHouseSign_1:
# 76 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_MaysHouseSign_2:
# 59 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BrendansHouseSign_Text_0, MSGBOX_SIGN
	goto LittlerootTown_EventScript_MaysHouseSign_1


LittlerootTown_EventScript_MLMSign::
# 83 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_MLMSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 94 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 95 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_GiveRunningShoesTrigger_2
# 100 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomNoticePlayerFemale
# 101 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoordsFemale
LittlerootTown_EventScript_GiveRunningShoesTrigger_1:
# 103 "data/maps/LittlerootTown/scripts.pory"
	setspeaker Mama
# 104 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_GiveRunningShoesTrigger_Text_0
# 106 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 107 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 108 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_GiveRunningShoesTrigger_6
# 115 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomApproachPlayerFemale
# 116 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 117 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 118 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHomeFemale
LittlerootTown_EventScript_GiveRunningShoesTrigger_5:
# 120 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end

LittlerootTown_EventScript_GiveRunningShoesTrigger_2:
# 96 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomNoticePlayerMale
# 97 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoordsMale
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger_1

LittlerootTown_EventScript_GiveRunningShoesTrigger_6:
# 109 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomApproachPlayerMale
# 110 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 111 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 112 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHomeMale
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger_5


LittlerootTown_EventScript_FatMan::
# 125 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 126 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 127 "data/maps/LittlerootTown/scripts.pory"
	setspeaker Carlos
	setgetobjectflags VAR_LAST_TALKED, 2, TRUE, GET_EVENT_FLAG
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LittlerootTown_EventScript_FatMan_2
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, GET_EVENT_FLAG
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LittlerootTown_EventScript_FatMan_3
# 152 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_2
# 160 "data/maps/LittlerootTown/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, SET_EVENT_FLAG
LittlerootTown_EventScript_FatMan_1:
# 163 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 164 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 165 "data/maps/LittlerootTown/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	end

LittlerootTown_EventScript_FatMan_2:
# 131 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_0
	goto LittlerootTown_EventScript_FatMan_1

LittlerootTown_EventScript_FatMan_3:
# 141 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_1
# 147 "data/maps/LittlerootTown/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 2, TRUE, SET_EVENT_FLAG
	goto LittlerootTown_EventScript_FatMan_1


LittlerootTown_EventScript_Boy::
# 170 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 171 "data/maps/LittlerootTown/scripts.pory"
	lock
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, GET_EVENT_FLAG
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LittlerootTown_EventScript_Boy_2
# 185 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Boy_Text_1
# 191 "data/maps/LittlerootTown/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, SET_EVENT_FLAG
LittlerootTown_EventScript_Boy_1:
# 193 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 194 "data/maps/LittlerootTown/scripts.pory"
	release
	end

LittlerootTown_EventScript_Boy_2:
# 175 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Boy_Text_0
	goto LittlerootTown_EventScript_Boy_1


LittlerootTown_EventScript_GiveRunningShoes::
# 201 "data/maps/LittlerootTown/scripts.pory"
	setspeaker Mama
# 202 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_GiveRunningShoes_Text_0
# 205 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_MACH_BIKE, 1
# 206 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_NOT_DOUBLE_BIKE
# 207 "data/maps/LittlerootTown/scripts.pory"
	setspeaker Mama
# 208 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_GiveRunningShoes_Text_1
# 230 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 231 "data/maps/LittlerootTown/scripts.pory"
	delay 30
	return


LittlerootTown_EventScript_OurNewHomeLetsGoInside::
# 238 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_OurNewHomeLetsGoInside_Text_0
	return


# 252 "data/maps/LittlerootTown/scripts.pory"

# 253 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 254 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 255 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 256 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 257 "data/maps/LittlerootTown/scripts.pory"

# 258 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 259 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 260 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 261 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 262 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 263 "data/maps/LittlerootTown/scripts.pory"

# 264 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 265 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 266 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 267 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 268 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 269 "data/maps/LittlerootTown/scripts.pory"

# 270 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 271 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 272 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 273 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 274 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 275 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 276 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 277 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 278 "data/maps/LittlerootTown/scripts.pory"

# 279 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 280 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 281 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 282 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 283 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 284 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 285 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 286 "data/maps/LittlerootTown/scripts.pory"

# 287 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 288 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 289 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 290 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 291 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 292 "data/maps/LittlerootTown/scripts.pory"

# 293 "data/maps/LittlerootTown/scripts.pory"

# 294 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 295 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 296 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 297 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 298 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 299 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 300 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 301 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 302 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 303 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 304 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 305 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 306 "data/maps/LittlerootTown/scripts.pory"
	end
# 307 "data/maps/LittlerootTown/scripts.pory"

# 308 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MakePlayerInvisible::
# 309 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MakePlayerInvisible
# 310 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 311 "data/maps/LittlerootTown/scripts.pory"
	return
# 312 "data/maps/LittlerootTown/scripts.pory"

# 313 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MakePlayerInvisible:
# 314 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 315 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 316 "data/maps/LittlerootTown/scripts.pory"

# 317 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MakePlayerVisible:
# 318 "data/maps/LittlerootTown/scripts.pory"
	set_visible
# 319 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 320 "data/maps/LittlerootTown/scripts.pory"

# 321 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 322 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 323 "data/maps/LittlerootTown/scripts.pory"
	return
# 324 "data/maps/LittlerootTown/scripts.pory"

# 325 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 326 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 327 "data/maps/LittlerootTown/scripts.pory"
	return
# 328 "data/maps/LittlerootTown/scripts.pory"

# 329 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 330 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 331 "data/maps/LittlerootTown/scripts.pory"
	return
# 332 "data/maps/LittlerootTown/scripts.pory"

# 333 "data/maps/LittlerootTown/scripts.pory"
	
# 334 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_MLMSign::
# 335 "data/maps/LittlerootTown/scripts.pory"
	.string "CASA DE ESMERALDA$"
# 336 "data/maps/LittlerootTown/scripts.pory"

# 337 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 338 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 339 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 340 "data/maps/LittlerootTown/scripts.pory"
	return
# 341 "data/maps/LittlerootTown/scripts.pory"

# 342 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 343 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 344 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 345 "data/maps/LittlerootTown/scripts.pory"
	return
# 346 "data/maps/LittlerootTown/scripts.pory"

# 347 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 348 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 8
# 349 "data/maps/LittlerootTown/scripts.pory"
	return
# 350 "data/maps/LittlerootTown/scripts.pory"

# 351 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 352 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 353 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 13, 2
# 354 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 355 "data/maps/LittlerootTown/scripts.pory"
	return
# 356 "data/maps/LittlerootTown/scripts.pory"

# 357 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 358 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 13, 3
# 359 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 360 "data/maps/LittlerootTown/scripts.pory"
	return
# 361 "data/maps/LittlerootTown/scripts.pory"

# 362 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 363 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 364 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 365 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 366 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 367 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 368 "data/maps/LittlerootTown/scripts.pory"
	return
# 369 "data/maps/LittlerootTown/scripts.pory"

# 370 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 371 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 9
# 372 "data/maps/LittlerootTown/scripts.pory"
	return
# 373 "data/maps/LittlerootTown/scripts.pory"

# 374 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 375 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 9
# 376 "data/maps/LittlerootTown/scripts.pory"
	return
# 377 "data/maps/LittlerootTown/scripts.pory"

# 378 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 379 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 380 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 381 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 382 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 383 "data/maps/LittlerootTown/scripts.pory"

# 384 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 385 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 386 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 387 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 388 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 389 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 390 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 9, 10
# 391 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 392 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 393 "data/maps/LittlerootTown/scripts.pory"
	end
# 394 "data/maps/LittlerootTown/scripts.pory"

# 395 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 396 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 397 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 398 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 399 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 400 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 401 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 10
# 402 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 403 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 404 "data/maps/LittlerootTown/scripts.pory"
	end
# 405 "data/maps/LittlerootTown/scripts.pory"

# 406 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 407 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 408 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 409 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 410 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 411 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 412 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 413 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 414 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 415 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 416 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 417 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 418 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 419 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 420 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 421 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 422 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 423 "data/maps/LittlerootTown/scripts.pory"
	setspeaker Mama
# 424 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_OurNewHomeLetsGoInside
# 425 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 426 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 427 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 428 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 429 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 430 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 431 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 432 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 433 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 434 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 435 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 436 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 437 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 438 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 439 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 440 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 441 "data/maps/LittlerootTown/scripts.pory"
	return
# 442 "data/maps/LittlerootTown/scripts.pory"

# 443 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 444 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 445 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 446 "data/maps/LittlerootTown/scripts.pory"

# 447 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 448 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 449 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 450 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 451 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 452 "data/maps/LittlerootTown/scripts.pory"

# 453 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 454 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 455 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 456 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 457 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 458 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 461 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 462 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 463 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 464 "data/maps/LittlerootTown/scripts.pory"

# 465 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 466 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 467 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 468 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 469 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 470 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 471 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 472 "data/maps/LittlerootTown/scripts.pory"

# 473 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 474 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 475 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 476 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 477 "data/maps/LittlerootTown/scripts.pory"

# 478 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 479 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 480 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 481 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 482 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 483 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 484 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 485 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_right
# 486 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 487 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 488 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 489 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 490 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 491 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 492 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 493 "data/maps/LittlerootTown/scripts.pory"

# 494 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 495 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 496 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 497 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 498 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 499 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 500 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 501 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 502 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 503 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 504 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 505 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 506 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 507 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 508 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 509 "data/maps/LittlerootTown/scripts.pory"
	end
# 510 "data/maps/LittlerootTown/scripts.pory"

# 511 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 512 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 513 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 514 "data/maps/LittlerootTown/scripts.pory"

# 515 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 516 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 517 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 518 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 519 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 520 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 521 "data/maps/LittlerootTown/scripts.pory"
	end
# 522 "data/maps/LittlerootTown/scripts.pory"

# 523 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 524 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 525 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 526 "data/maps/LittlerootTown/scripts.pory"
	end
# 527 "data/maps/LittlerootTown/scripts.pory"

# 528 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 529 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 530 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 531 "data/maps/LittlerootTown/scripts.pory"
	end
# 532 "data/maps/LittlerootTown/scripts.pory"

# 533 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 534 "data/maps/LittlerootTown/scripts.pory"
	lock
# 535 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 536 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 537 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 538 "data/maps/LittlerootTown/scripts.pory"
	release
# 539 "data/maps/LittlerootTown/scripts.pory"
	end
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 542 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 543 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 544 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 545 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 546 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 547 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 548 "data/maps/LittlerootTown/scripts.pory"
	release
# 549 "data/maps/LittlerootTown/scripts.pory"
	end
# 550 "data/maps/LittlerootTown/scripts.pory"

# 551 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 552 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 553 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 554 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 555 "data/maps/LittlerootTown/scripts.pory"
	end
# 556 "data/maps/LittlerootTown/scripts.pory"

# 557 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 558 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 559 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 560 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 561 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 562 "data/maps/LittlerootTown/scripts.pory"
	return
# 563 "data/maps/LittlerootTown/scripts.pory"

# 564 "data/maps/LittlerootTown/scripts.pory"

# 565 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 566 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 567 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 568 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 569 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 570 "data/maps/LittlerootTown/scripts.pory"

# 571 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 572 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 573 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 574 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 575 "data/maps/LittlerootTown/scripts.pory"
	end
# 576 "data/maps/LittlerootTown/scripts.pory"

# 577 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 578 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 579 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 580 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 581 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 582 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 583 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 584 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 585 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 586 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 587 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 588 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 589 "data/maps/LittlerootTown/scripts.pory"
	end
# 590 "data/maps/LittlerootTown/scripts.pory"

# 591 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 592 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 593 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 594 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 595 "data/maps/LittlerootTown/scripts.pory"
	end
# 596 "data/maps/LittlerootTown/scripts.pory"

# 597 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 598 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 599 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 600 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 601 "data/maps/LittlerootTown/scripts.pory"
	end
# 602 "data/maps/LittlerootTown/scripts.pory"

# 603 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 604 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 605 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 606 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 607 "data/maps/LittlerootTown/scripts.pory"
	end
# 608 "data/maps/LittlerootTown/scripts.pory"

# 609 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 610 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 611 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 612 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 613 "data/maps/LittlerootTown/scripts.pory"
	end
# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 616 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 6
# 617 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 618 "data/maps/LittlerootTown/scripts.pory"
	return
# 619 "data/maps/LittlerootTown/scripts.pory"

# 620 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 621 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 16
# 622 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 623 "data/maps/LittlerootTown/scripts.pory"
	return
# 624 "data/maps/LittlerootTown/scripts.pory"

# 625 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 626 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 627 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 628 "data/maps/LittlerootTown/scripts.pory"
	return
# 629 "data/maps/LittlerootTown/scripts.pory"

# 630 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 631 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 632 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 633 "data/maps/LittlerootTown/scripts.pory"
	return
# 634 "data/maps/LittlerootTown/scripts.pory"

# 635 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 636 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 637 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 638 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 639 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 640 "data/maps/LittlerootTown/scripts.pory"
	return
# 641 "data/maps/LittlerootTown/scripts.pory"

# 642 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 643 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 644 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 645 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 646 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 647 "data/maps/LittlerootTown/scripts.pory"
	return
# 648 "data/maps/LittlerootTown/scripts.pory"

# 649 "data/maps/LittlerootTown/scripts.pory"

# 650 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 651 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 652 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 653 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 654 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 655 "data/maps/LittlerootTown/scripts.pory"
	return
# 656 "data/maps/LittlerootTown/scripts.pory"

# 657 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 658 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 659 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 660 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 662 "data/maps/LittlerootTown/scripts.pory"
	return
# 663 "data/maps/LittlerootTown/scripts.pory"

# 664 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 665 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 666 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 667 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 668 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 669 "data/maps/LittlerootTown/scripts.pory"
	return
# 670 "data/maps/LittlerootTown/scripts.pory"

# 671 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 672 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 673 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 674 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 675 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 676 "data/maps/LittlerootTown/scripts.pory"
	return
# 677 "data/maps/LittlerootTown/scripts.pory"

# 678 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 679 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 680 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 681 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 682 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 683 "data/maps/LittlerootTown/scripts.pory"
	return
# 684 "data/maps/LittlerootTown/scripts.pory"

# 685 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 686 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 687 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 688 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 689 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 690 "data/maps/LittlerootTown/scripts.pory"
	return
# 691 "data/maps/LittlerootTown/scripts.pory"

# 692 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 693 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 694 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 695 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 696 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 697 "data/maps/LittlerootTown/scripts.pory"
	return
# 698 "data/maps/LittlerootTown/scripts.pory"

# 699 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 700 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 701 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 702 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 703 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 704 "data/maps/LittlerootTown/scripts.pory"
	return
# 705 "data/maps/LittlerootTown/scripts.pory"

# 706 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 707 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 708 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 709 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 710 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 711 "data/maps/LittlerootTown/scripts.pory"
	return
# 712 "data/maps/LittlerootTown/scripts.pory"

# 713 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 714 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 715 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 716 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 717 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 718 "data/maps/LittlerootTown/scripts.pory"
	return
# 719 "data/maps/LittlerootTown/scripts.pory"

# 720 "data/maps/LittlerootTown/scripts.pory"

# 721 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 722 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 723 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 724 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 726 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 727 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 728 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 729 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 730 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 731 "data/maps/LittlerootTown/scripts.pory"
	return
# 732 "data/maps/LittlerootTown/scripts.pory"

# 733 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 734 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 735 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 736 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 737 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 738 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 739 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 740 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 741 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 742 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 743 "data/maps/LittlerootTown/scripts.pory"
	return
# 744 "data/maps/LittlerootTown/scripts.pory"

# 745 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 746 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 747 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 748 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 749 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 750 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 751 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 752 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 753 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 754 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 755 "data/maps/LittlerootTown/scripts.pory"
	return
# 756 "data/maps/LittlerootTown/scripts.pory"

# 757 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 758 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 759 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 760 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 761 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 762 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 763 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 764 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 765 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 766 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 767 "data/maps/LittlerootTown/scripts.pory"
	return
# 768 "data/maps/LittlerootTown/scripts.pory"

# 769 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 770 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 771 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 772 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 773 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 774 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 775 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 776 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 777 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 778 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 779 "data/maps/LittlerootTown/scripts.pory"
	return
# 780 "data/maps/LittlerootTown/scripts.pory"

# 781 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 782 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 783 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 784 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 785 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 786 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 787 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 788 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 789 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 790 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 791 "data/maps/LittlerootTown/scripts.pory"
	return
# 792 "data/maps/LittlerootTown/scripts.pory"

# 793 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 794 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 795 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 796 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 797 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 798 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 799 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 800 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 801 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 802 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 803 "data/maps/LittlerootTown/scripts.pory"
	return
# 804 "data/maps/LittlerootTown/scripts.pory"

# 805 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 806 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 807 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 808 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 809 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 810 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 811 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 812 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 813 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 814 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 815 "data/maps/LittlerootTown/scripts.pory"
	return
# 816 "data/maps/LittlerootTown/scripts.pory"

# 817 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 820 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 821 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 822 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 823 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 824 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 825 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 826 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 827 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 828 "data/maps/LittlerootTown/scripts.pory"

# 829 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 831 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 832 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 833 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 835 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 836 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 837 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 838 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 839 "data/maps/LittlerootTown/scripts.pory"

# 840 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 842 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 844 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 845 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 846 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 848 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 849 "data/maps/LittlerootTown/scripts.pory"

# 850 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 851 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 852 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 857 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 858 "data/maps/LittlerootTown/scripts.pory"

# 859 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 860 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 862 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 863 "data/maps/LittlerootTown/scripts.pory"

# 864 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 865 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 866 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 867 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 868 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 869 "data/maps/LittlerootTown/scripts.pory"

# 870 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 875 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 876 "data/maps/LittlerootTown/scripts.pory"

# 877 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 878 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 879 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 880 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 881 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 882 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 883 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 884 "data/maps/LittlerootTown/scripts.pory"

# 885 "data/maps/LittlerootTown/scripts.pory"

# 886 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 887 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 888 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 889 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 890 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 891 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 892 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 893 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 894 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 895 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 896 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 897 "data/maps/LittlerootTown/scripts.pory"

# 898 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 899 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 900 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 901 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 902 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 903 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 904 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 905 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 906 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 907 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 908 "data/maps/LittlerootTown/scripts.pory"

# 909 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 910 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 911 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 912 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 913 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 914 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 915 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 916 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 917 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 918 "data/maps/LittlerootTown/scripts.pory"

# 919 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 920 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 921 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 922 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 923 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 924 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 925 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 926 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 927 "data/maps/LittlerootTown/scripts.pory"

# 928 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 929 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 930 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 931 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 932 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 933 "data/maps/LittlerootTown/scripts.pory"

# 934 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 935 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 936 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 937 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 938 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 939 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 940 "data/maps/LittlerootTown/scripts.pory"

# 941 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 942 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 943 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 944 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 945 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 946 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 947 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 948 "data/maps/LittlerootTown/scripts.pory"

# 949 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 950 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 951 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 952 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 953 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 954 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 955 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 956 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 957 "data/maps/LittlerootTown/scripts.pory"

# 958 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 959 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 960 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 961 "data/maps/LittlerootTown/scripts.pory"

# 962 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 963 "data/maps/LittlerootTown/scripts.pory"
	lock
# 964 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 965 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 966 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 967 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 968 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 969 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 970 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 971 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 972 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 973 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 974 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 975 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 976 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 977 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 978 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 979 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 980 "data/maps/LittlerootTown/scripts.pory"
	end
# 981 "data/maps/LittlerootTown/scripts.pory"

# 982 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 983 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 984 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 985 "data/maps/LittlerootTown/scripts.pory"
	release
# 986 "data/maps/LittlerootTown/scripts.pory"
	end
# 987 "data/maps/LittlerootTown/scripts.pory"

# 988 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 989 "data/maps/LittlerootTown/scripts.pory"
	.string "…………$"
# 990 "data/maps/LittlerootTown/scripts.pory"

# 991 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 992 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Bueno, bueno, {PLAYER}, sabía que\n"
# 993 "data/maps/LittlerootTown/scripts.pory"
	.string "eras especial!\p"
# 994 "data/maps/LittlerootTown/scripts.pory"
	.string "Tu gran poder…\p"
# 995 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Te ha llevado a lograr tanto!\p"
# 996 "data/maps/LittlerootTown/scripts.pory"
	.string "Gracias a eso, voy a darte algo…\p"
# 997 "data/maps/LittlerootTown/scripts.pory"
	.string "Ven a mi Laboratorio…$"

LittlerootTown_EventScript_TownSign_Text_0:
# 5 "data/maps/LittlerootTown/scripts.pory"
	.string "VILLA LITTLEROOT\n"
	.string "“Una Villa bonita.”$"

LittlerootTown_EventScript_BirchsLabSign_Text_0:
# 17 "data/maps/LittlerootTown/scripts.pory"
	.string "LABORATORIO DEL PROFESOR BIRCH$"

LittlerootTown_EventScript_BrendansHouseSign_Text_0:
# 32 "data/maps/LittlerootTown/scripts.pory"
	.string "CASA DE {PLAYER}$"

LittlerootTown_EventScript_BrendansHouseSign_Text_1:
# 42 "data/maps/LittlerootTown/scripts.pory"
	.string "CASA DE {RIVAL}$"

LittlerootTown_EventScript_MLMSign_Text_0:
# 83 "data/maps/LittlerootTown/scripts.pory"
	.string "CASA DE ESMERALDA$"

LittlerootTown_EventScript_GiveRunningShoesTrigger_Text_0:
# 104 "data/maps/LittlerootTown/scripts.pory"
	.string "Ah, {PLAYER}.$"

LittlerootTown_EventScript_FatMan_Text_0:
# 131 "data/maps/LittlerootTown/scripts.pory"
	.string "Pero… Es un día tan lindo…$"

LittlerootTown_EventScript_FatMan_Text_1:
# 141 "data/maps/LittlerootTown/scripts.pory"
	.string "Supongo que debería pasar más tiempo\n"
	.string "con mi esposo y nuestra hija en casa…$"

LittlerootTown_EventScript_FatMan_Text_2:
# 152 "data/maps/LittlerootTown/scripts.pory"
	.string "Mi esposo me dice siempre que paso\n"
	.string "demasiado tiempo afuera, pero… ¡Amo\l"
	.string "el aire fresco y limpio, y la\l"
	.string "naturaleza tan bella…!\p"
	.string "Aunque entiendo que debería pasar más\n"
	.string "tiempo con él dentro de casa…$"

LittlerootTown_EventScript_Boy_Text_0:
# 175 "data/maps/LittlerootTown/scripts.pory"
	.string "Mira. Entiendo que sea su trabajo, pero\n"
	.string "la de veces que tuve que escuchar a\l"
	.string "su hij{AO} llorar porque su padre no está…\p"
	.string "Debería darle vergüenza…$"

LittlerootTown_EventScript_Boy_Text_1:
# 185 "data/maps/LittlerootTown/scripts.pory"
	.string "Ese Profesor. Se la pasa siempre fuera\n"
	.string "de su casa investigando, ¿Qué no\l"
	.string "extraña a su familia?$"

LittlerootTown_EventScript_GiveRunningShoes_Text_0:
# 202 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Mi amor!\p"
	.string "¡Ah, el Profesor te dio un Pokémon!\p"
	.string "-sniff sniff- …{PAUSE 5} …{PAUSE 5} …{PAUSE 5}\n"
	.string "Perdón por llorar pero… {PAUSE 5}Estoy tan\l"
	.string "orgullosa de ti, mi pequeñit{OA}…\p"
	.string "Pero bueno… {PAUSE 5}No puedo evitar que\n"
	.string "crezcas, así que… {PAUSE 5}Toma esto, mi amor.$"

LittlerootTown_EventScript_GiveRunningShoes_Text_1:
# 208 "data/maps/LittlerootTown/scripts.pory"
	.string "Es una Bici Dos-En-Uno, aunque creo que\n"
	.string "no funciona… ¡Quizá la puedan reparar\l"
	.string "en la Tienda de Bicis!\p"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\n"
	.string "… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}… {PAUSE 5}…\p"
	.string "Ya tienes un Pokémon…\n"
	.string "Estoy tan, tan orgullosa de ti, mi\l"
	.string "pequeñ{OA}…\p"
	.string "Si pasa algo, acá está mami para darte\n"
	.string "amor y cariño.\p"
	.string "Cuídate mucho, mi amor…\n"
	.string "Voy a extrañarte…$"

LittlerootTown_EventScript_OurNewHomeLetsGoInside_Text_0:
# 238 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Llegamos, amor!\p"
	.string "Lamento haberte dejado en el camión,\n"
	.string "pero no teníamos más dinero…\l"
	.string "¡Pero bueno, esto es Villa Littleroot!\p"
	.string "¿Te gusta? Se me hace que es un lugar\n"
	.string "tranquilo para vivir.\p"
	.string "¡Entremos!$"
