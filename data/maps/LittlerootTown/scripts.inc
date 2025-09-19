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
	namebox Mama
# 104 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_GiveRunningShoesTrigger_Text_0
# 105 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 106 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 107 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 108 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_GiveRunningShoesTrigger_6
# 114 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomApproachPlayerFemale
# 115 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 116 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHomeFemale
LittlerootTown_EventScript_GiveRunningShoesTrigger_5:
# 118 "data/maps/LittlerootTown/scripts.pory"
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
	call LittlerootTown_EventScript_GiveRunningShoes
# 111 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHomeMale
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger_5


LittlerootTown_EventScript_FatMan::
# 123 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 124 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 125 "data/maps/LittlerootTown/scripts.pory"
	namebox Carlos
	setgetobjectflags VAR_LAST_TALKED, 2, TRUE, GET_EVENT_FLAG
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LittlerootTown_EventScript_FatMan_2
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, GET_EVENT_FLAG
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LittlerootTown_EventScript_FatMan_3
# 150 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_2
# 158 "data/maps/LittlerootTown/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, SET_EVENT_FLAG
LittlerootTown_EventScript_FatMan_1:
# 160 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 161 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 162 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 163 "data/maps/LittlerootTown/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	end

LittlerootTown_EventScript_FatMan_2:
# 129 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_0
	goto LittlerootTown_EventScript_FatMan_1

LittlerootTown_EventScript_FatMan_3:
# 139 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_FatMan_Text_1
# 145 "data/maps/LittlerootTown/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 2, TRUE, SET_EVENT_FLAG
	goto LittlerootTown_EventScript_FatMan_1


LittlerootTown_EventScript_Boy::
# 168 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 169 "data/maps/LittlerootTown/scripts.pory"
	lock
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, GET_EVENT_FLAG
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LittlerootTown_EventScript_Boy_2
# 183 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Boy_Text_1
# 189 "data/maps/LittlerootTown/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, SET_EVENT_FLAG
LittlerootTown_EventScript_Boy_1:
# 191 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 192 "data/maps/LittlerootTown/scripts.pory"
	release
	end

LittlerootTown_EventScript_Boy_2:
# 173 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_Boy_Text_0
	goto LittlerootTown_EventScript_Boy_1


LittlerootTown_EventScript_GiveRunningShoes::
# 199 "data/maps/LittlerootTown/scripts.pory"
	namebox Mama
# 200 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_GiveRunningShoes_Text_0
# 202 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 203 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_MACH_BIKE, 1
# 204 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_NOT_DOUBLE_BIKE
# 205 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 206 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 207 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 208 "data/maps/LittlerootTown/scripts.pory"
	namebox Mama
# 209 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_GiveRunningShoes_Text_1
# 231 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 232 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 233 "data/maps/LittlerootTown/scripts.pory"
	delay 30
	return


LittlerootTown_EventScript_OurNewHomeLetsGoInside::
# 240 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_OurNewHomeLetsGoInside_Text_0
	return


# 254 "data/maps/LittlerootTown/scripts.pory"

# 255 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 256 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 257 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 258 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 259 "data/maps/LittlerootTown/scripts.pory"

# 260 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 261 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 262 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 263 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 264 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 265 "data/maps/LittlerootTown/scripts.pory"

# 266 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 267 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 268 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 269 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 270 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 271 "data/maps/LittlerootTown/scripts.pory"

# 272 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 273 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 274 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 275 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 276 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 277 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 278 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 279 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 280 "data/maps/LittlerootTown/scripts.pory"

# 281 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 282 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 283 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 284 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 285 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 286 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 287 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 288 "data/maps/LittlerootTown/scripts.pory"

# 289 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 290 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 291 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 292 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 293 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 294 "data/maps/LittlerootTown/scripts.pory"

# 295 "data/maps/LittlerootTown/scripts.pory"

# 296 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 297 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 298 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 299 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 300 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 301 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 302 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 303 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 304 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 305 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 306 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 307 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 308 "data/maps/LittlerootTown/scripts.pory"
	end
# 309 "data/maps/LittlerootTown/scripts.pory"

# 310 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MakePlayerInvisible::
# 311 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_MakePlayerInvisible
# 312 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 313 "data/maps/LittlerootTown/scripts.pory"
	return
# 314 "data/maps/LittlerootTown/scripts.pory"

# 315 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MakePlayerInvisible:
# 316 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 317 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 318 "data/maps/LittlerootTown/scripts.pory"

# 319 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 320 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 321 "data/maps/LittlerootTown/scripts.pory"
	return
# 322 "data/maps/LittlerootTown/scripts.pory"

# 323 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 324 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 325 "data/maps/LittlerootTown/scripts.pory"
	return
# 326 "data/maps/LittlerootTown/scripts.pory"

# 327 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 328 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 329 "data/maps/LittlerootTown/scripts.pory"
	return
# 330 "data/maps/LittlerootTown/scripts.pory"

# 331 "data/maps/LittlerootTown/scripts.pory"
	
# 332 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_MLMSign::
# 333 "data/maps/LittlerootTown/scripts.pory"
	.string "CASA DE ESMERALDA$"
# 334 "data/maps/LittlerootTown/scripts.pory"

# 335 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 336 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 337 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 338 "data/maps/LittlerootTown/scripts.pory"
	return
# 339 "data/maps/LittlerootTown/scripts.pory"

# 340 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 341 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 342 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 343 "data/maps/LittlerootTown/scripts.pory"
	return
# 344 "data/maps/LittlerootTown/scripts.pory"

# 345 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 346 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 8
# 347 "data/maps/LittlerootTown/scripts.pory"
	return
# 348 "data/maps/LittlerootTown/scripts.pory"

# 349 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 350 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 351 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 13, 2
# 352 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 353 "data/maps/LittlerootTown/scripts.pory"
	return
# 354 "data/maps/LittlerootTown/scripts.pory"

# 355 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 356 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 13, 3
# 357 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 358 "data/maps/LittlerootTown/scripts.pory"
	return
# 359 "data/maps/LittlerootTown/scripts.pory"

# 360 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 361 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 362 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 363 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 364 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 365 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 366 "data/maps/LittlerootTown/scripts.pory"
	return
# 367 "data/maps/LittlerootTown/scripts.pory"

# 368 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 369 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 9
# 370 "data/maps/LittlerootTown/scripts.pory"
	return
# 371 "data/maps/LittlerootTown/scripts.pory"

# 372 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 373 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 16, 9
# 374 "data/maps/LittlerootTown/scripts.pory"
	return
# 375 "data/maps/LittlerootTown/scripts.pory"

# 376 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 377 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 378 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 379 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 380 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 381 "data/maps/LittlerootTown/scripts.pory"

# 382 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 383 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 384 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 385 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 386 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 387 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 388 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 389 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 390 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 391 "data/maps/LittlerootTown/scripts.pory"
	end
# 392 "data/maps/LittlerootTown/scripts.pory"

# 393 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 394 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 395 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 396 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 397 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 398 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 399 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 400 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 401 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 402 "data/maps/LittlerootTown/scripts.pory"
	end
# 403 "data/maps/LittlerootTown/scripts.pory"

# 404 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 405 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 406 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 407 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 408 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 409 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 410 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 411 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 412 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 413 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 414 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 415 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 416 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 417 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 418 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 419 "data/maps/LittlerootTown/scripts.pory"
	namebox Mama
# 420 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_OurNewHomeLetsGoInside
# 421 "data/maps/LittlerootTown/scripts.pory"
	hidenamebox
# 422 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 423 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 424 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 425 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 426 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 427 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 428 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 429 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 430 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 431 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 432 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 433 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 434 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 435 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 436 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 437 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 438 "data/maps/LittlerootTown/scripts.pory"
	return
# 439 "data/maps/LittlerootTown/scripts.pory"

# 440 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 441 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 442 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 443 "data/maps/LittlerootTown/scripts.pory"

# 444 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 445 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 446 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 447 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 448 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 449 "data/maps/LittlerootTown/scripts.pory"

# 450 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 451 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 452 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 453 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 454 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 455 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 456 "data/maps/LittlerootTown/scripts.pory"

# 457 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 458 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 459 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 460 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 461 "data/maps/LittlerootTown/scripts.pory"

# 462 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 463 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 464 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 465 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 466 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 467 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 468 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 469 "data/maps/LittlerootTown/scripts.pory"

# 470 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 471 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 472 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 473 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 474 "data/maps/LittlerootTown/scripts.pory"

# 475 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 476 "data/maps/LittlerootTown/scripts.pory"
	set_visible
# 477 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 478 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 479 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 480 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 481 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 482 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 483 "data/maps/LittlerootTown/scripts.pory"

# 484 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 485 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 486 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 487 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 488 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 489 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 490 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 491 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 492 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 493 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 494 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 495 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 496 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 497 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 498 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 499 "data/maps/LittlerootTown/scripts.pory"
	end
# 500 "data/maps/LittlerootTown/scripts.pory"

# 501 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 502 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 503 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 504 "data/maps/LittlerootTown/scripts.pory"

# 505 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 506 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 507 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 508 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 509 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 510 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 511 "data/maps/LittlerootTown/scripts.pory"
	end
# 512 "data/maps/LittlerootTown/scripts.pory"

# 513 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 514 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 515 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 516 "data/maps/LittlerootTown/scripts.pory"
	end
# 517 "data/maps/LittlerootTown/scripts.pory"

# 518 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 519 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 520 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 521 "data/maps/LittlerootTown/scripts.pory"
	end
# 522 "data/maps/LittlerootTown/scripts.pory"

# 523 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 524 "data/maps/LittlerootTown/scripts.pory"
	lock
# 525 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 526 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 527 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 528 "data/maps/LittlerootTown/scripts.pory"
	release
# 529 "data/maps/LittlerootTown/scripts.pory"
	end
# 530 "data/maps/LittlerootTown/scripts.pory"

# 531 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 532 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 533 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 534 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 535 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 536 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 537 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 538 "data/maps/LittlerootTown/scripts.pory"
	release
# 539 "data/maps/LittlerootTown/scripts.pory"
	end
# 540 "data/maps/LittlerootTown/scripts.pory"

# 541 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 542 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 543 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 544 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 545 "data/maps/LittlerootTown/scripts.pory"
	end
# 546 "data/maps/LittlerootTown/scripts.pory"

# 547 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 548 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 549 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 550 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 551 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 552 "data/maps/LittlerootTown/scripts.pory"
	return
# 553 "data/maps/LittlerootTown/scripts.pory"

# 554 "data/maps/LittlerootTown/scripts.pory"

# 555 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 556 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 557 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 558 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 559 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 560 "data/maps/LittlerootTown/scripts.pory"

# 561 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 562 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 563 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 564 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 565 "data/maps/LittlerootTown/scripts.pory"
	end
# 566 "data/maps/LittlerootTown/scripts.pory"

# 567 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 568 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 569 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 570 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 571 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 572 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 573 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 574 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 575 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 576 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 577 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 578 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 579 "data/maps/LittlerootTown/scripts.pory"
	end
# 580 "data/maps/LittlerootTown/scripts.pory"

# 581 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 582 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 583 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 584 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 585 "data/maps/LittlerootTown/scripts.pory"
	end
# 586 "data/maps/LittlerootTown/scripts.pory"

# 587 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 588 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 589 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 590 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 591 "data/maps/LittlerootTown/scripts.pory"
	end
# 592 "data/maps/LittlerootTown/scripts.pory"

# 593 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 594 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 595 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 596 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 597 "data/maps/LittlerootTown/scripts.pory"
	end
# 598 "data/maps/LittlerootTown/scripts.pory"

# 599 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 600 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 601 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 602 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 603 "data/maps/LittlerootTown/scripts.pory"
	end
# 604 "data/maps/LittlerootTown/scripts.pory"

# 605 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 606 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 6
# 607 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 608 "data/maps/LittlerootTown/scripts.pory"
	return
# 609 "data/maps/LittlerootTown/scripts.pory"

# 610 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 611 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 16
# 612 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 613 "data/maps/LittlerootTown/scripts.pory"
	return
# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 616 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 617 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 618 "data/maps/LittlerootTown/scripts.pory"
	return
# 619 "data/maps/LittlerootTown/scripts.pory"

# 620 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 621 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 622 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 623 "data/maps/LittlerootTown/scripts.pory"
	return
# 624 "data/maps/LittlerootTown/scripts.pory"

# 625 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 626 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 627 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 628 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 629 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 630 "data/maps/LittlerootTown/scripts.pory"
	return
# 631 "data/maps/LittlerootTown/scripts.pory"

# 632 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 633 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 634 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 635 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 636 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 637 "data/maps/LittlerootTown/scripts.pory"
	return
# 638 "data/maps/LittlerootTown/scripts.pory"

# 639 "data/maps/LittlerootTown/scripts.pory"

# 640 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 641 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 642 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 643 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 644 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 645 "data/maps/LittlerootTown/scripts.pory"
	return
# 646 "data/maps/LittlerootTown/scripts.pory"

# 647 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 648 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 650 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 651 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 652 "data/maps/LittlerootTown/scripts.pory"
	return
# 653 "data/maps/LittlerootTown/scripts.pory"

# 654 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 655 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 656 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 657 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 658 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 659 "data/maps/LittlerootTown/scripts.pory"
	return
# 660 "data/maps/LittlerootTown/scripts.pory"

# 661 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 662 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 663 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 664 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 665 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 666 "data/maps/LittlerootTown/scripts.pory"
	return
# 667 "data/maps/LittlerootTown/scripts.pory"

# 668 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 669 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 670 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 671 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 672 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 673 "data/maps/LittlerootTown/scripts.pory"
	return
# 674 "data/maps/LittlerootTown/scripts.pory"

# 675 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 676 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 677 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 678 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 679 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 680 "data/maps/LittlerootTown/scripts.pory"
	return
# 681 "data/maps/LittlerootTown/scripts.pory"

# 682 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 683 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 684 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 685 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 686 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 687 "data/maps/LittlerootTown/scripts.pory"
	return
# 688 "data/maps/LittlerootTown/scripts.pory"

# 689 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 690 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 691 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 692 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 693 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 694 "data/maps/LittlerootTown/scripts.pory"
	return
# 695 "data/maps/LittlerootTown/scripts.pory"

# 696 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 697 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 698 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 699 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 700 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 701 "data/maps/LittlerootTown/scripts.pory"
	return
# 702 "data/maps/LittlerootTown/scripts.pory"

# 703 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 704 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 705 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 706 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 707 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 708 "data/maps/LittlerootTown/scripts.pory"
	return
# 709 "data/maps/LittlerootTown/scripts.pory"

# 710 "data/maps/LittlerootTown/scripts.pory"

# 711 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 712 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 713 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 714 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 715 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 716 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 717 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 718 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 719 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 720 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 721 "data/maps/LittlerootTown/scripts.pory"
	return
# 722 "data/maps/LittlerootTown/scripts.pory"

# 723 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 724 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 726 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 727 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 728 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 729 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 730 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 731 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 732 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 733 "data/maps/LittlerootTown/scripts.pory"
	return
# 734 "data/maps/LittlerootTown/scripts.pory"

# 735 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 736 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 737 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 738 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 739 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 740 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 741 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 742 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 743 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 744 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 745 "data/maps/LittlerootTown/scripts.pory"
	return
# 746 "data/maps/LittlerootTown/scripts.pory"

# 747 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 748 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 749 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 750 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 751 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 752 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 753 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 754 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 755 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 756 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 757 "data/maps/LittlerootTown/scripts.pory"
	return
# 758 "data/maps/LittlerootTown/scripts.pory"

# 759 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 760 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 761 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 762 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 763 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 764 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 765 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 766 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 767 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 768 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 769 "data/maps/LittlerootTown/scripts.pory"
	return
# 770 "data/maps/LittlerootTown/scripts.pory"

# 771 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 772 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 773 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 774 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 775 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 776 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 777 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 778 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 779 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 780 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 781 "data/maps/LittlerootTown/scripts.pory"
	return
# 782 "data/maps/LittlerootTown/scripts.pory"

# 783 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 784 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 785 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 786 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 787 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 788 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 789 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 790 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 791 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 792 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 793 "data/maps/LittlerootTown/scripts.pory"
	return
# 794 "data/maps/LittlerootTown/scripts.pory"

# 795 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 796 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 797 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 798 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 799 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 800 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 801 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 802 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 803 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 804 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 805 "data/maps/LittlerootTown/scripts.pory"
	return
# 806 "data/maps/LittlerootTown/scripts.pory"

# 807 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 808 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 809 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 810 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 811 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 812 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 813 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 815 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 816 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 817 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 818 "data/maps/LittlerootTown/scripts.pory"

# 819 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 820 "data/maps/LittlerootTown/scripts.pory"
	walk_down
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
	walk_right
# 827 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_up
# 828 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 829 "data/maps/LittlerootTown/scripts.pory"

# 830 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 831 "data/maps/LittlerootTown/scripts.pory"
	walk_down
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
LittlerootTown_Movement_MomApproachPlayerMale5:
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
	walk_in_place_up
# 847 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 848 "data/maps/LittlerootTown/scripts.pory"

# 849 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 850 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 851 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 852 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 853 "data/maps/LittlerootTown/scripts.pory"

# 854 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 858 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 859 "data/maps/LittlerootTown/scripts.pory"

# 860 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 865 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 866 "data/maps/LittlerootTown/scripts.pory"

# 867 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 873 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 874 "data/maps/LittlerootTown/scripts.pory"

# 875 "data/maps/LittlerootTown/scripts.pory"

# 876 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_left
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
	walk_left
# 884 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 885 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 886 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 887 "data/maps/LittlerootTown/scripts.pory"

# 888 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
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
	walk_left
# 895 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 896 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 897 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 898 "data/maps/LittlerootTown/scripts.pory"

# 899 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
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
LittlerootTown_Movement_MomReturnHomeMale5:
# 910 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 911 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 912 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 913 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 914 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 915 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 916 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 917 "data/maps/LittlerootTown/scripts.pory"

# 918 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 919 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 920 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 921 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 922 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 923 "data/maps/LittlerootTown/scripts.pory"

# 924 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 925 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 926 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 927 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 928 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 929 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 930 "data/maps/LittlerootTown/scripts.pory"

# 931 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 932 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 933 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 934 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 935 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 936 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 937 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 938 "data/maps/LittlerootTown/scripts.pory"

# 939 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 940 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 941 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 942 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 943 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 944 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 945 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 946 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 947 "data/maps/LittlerootTown/scripts.pory"

# 948 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 949 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 950 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 951 "data/maps/LittlerootTown/scripts.pory"

# 952 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 953 "data/maps/LittlerootTown/scripts.pory"
	lock
# 954 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 955 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 956 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 957 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 958 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 959 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 960 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 961 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 962 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 963 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 964 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 965 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 966 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 967 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 968 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 969 "data/maps/LittlerootTown/scripts.pory"
	end
# 970 "data/maps/LittlerootTown/scripts.pory"

# 971 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 972 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 973 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 974 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 975 "data/maps/LittlerootTown/scripts.pory"
	release
# 976 "data/maps/LittlerootTown/scripts.pory"
	end
# 977 "data/maps/LittlerootTown/scripts.pory"

# 978 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 979 "data/maps/LittlerootTown/scripts.pory"
	.string "…………$"
# 980 "data/maps/LittlerootTown/scripts.pory"

# 981 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 982 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Bueno, bueno, {PLAYER}, sabía que\n"
# 983 "data/maps/LittlerootTown/scripts.pory"
	.string "eras especial!\p"
# 984 "data/maps/LittlerootTown/scripts.pory"
	.string "Tu gran poder…\p"
# 985 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Te ha llevado a lograr tanto!\p"
# 986 "data/maps/LittlerootTown/scripts.pory"
	.string "Gracias a eso, voy a darte algo…\p"
# 987 "data/maps/LittlerootTown/scripts.pory"
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
# 129 "data/maps/LittlerootTown/scripts.pory"
	.string "Pero… Es un día tan lindo…$"

LittlerootTown_EventScript_FatMan_Text_1:
# 139 "data/maps/LittlerootTown/scripts.pory"
	.string "Supongo que debería pasar más tiempo\n"
	.string "con mi esposo y nuestra hija en casa…$"

LittlerootTown_EventScript_FatMan_Text_2:
# 150 "data/maps/LittlerootTown/scripts.pory"
	.string "Mi esposo me dice siempre que paso\n"
	.string "demasiado tiempo afuera, pero… ¡Amo\l"
	.string "el aire fresco y limpio, y la\l"
	.string "naturaleza tan bella…!\p"
	.string "Aunque entiendo que debería pasar más\n"
	.string "tiempo con él dentro de casa…$"

LittlerootTown_EventScript_Boy_Text_0:
# 173 "data/maps/LittlerootTown/scripts.pory"
	.string "Mira. Entiendo que sea su trabajo, pero\n"
	.string "la de veces que tuve que escuchar a\l"
	.string "su hij{AO} llorar porque su padre no está…\p"
	.string "Debería darle vergüenza…$"

LittlerootTown_EventScript_Boy_Text_1:
# 183 "data/maps/LittlerootTown/scripts.pory"
	.string "Ese Profesor. Se la pasa siempre fuera\n"
	.string "de su casa investigando, ¿Qué no\l"
	.string "extraña a su familia?$"

LittlerootTown_EventScript_GiveRunningShoes_Text_0:
# 200 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Mi amor!\p"
	.string "¡Ah, el Profesor te dio un Pokémon!\p"
	.string "-sniff sniff- …{PAUSE 5} …{PAUSE 5} …{PAUSE 5}\n"
	.string "Perdón por llorar pero… {PAUSE 5}Estoy tan\l"
	.string "orgullosa de ti, mi pequeñit{OA}…\p"
	.string "Pero bueno… {PAUSE 5}No puedo evitar que\n"
	.string "crezcas, así que… {PAUSE 5}Toma esto, mi amor.$"

LittlerootTown_EventScript_GiveRunningShoes_Text_1:
# 209 "data/maps/LittlerootTown/scripts.pory"
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
# 240 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Llegamos, amor!\p"
	.string "Lamento haberte dejado en el camión,\n"
	.string "pero no teníamos más dinero…\l"
	.string "¡Pero bueno, esto es Villa Littleroot!\p"
	.string "¿Te gusta? Se me hace que es un lugar\n"
	.string "tranquilo para vivir.\p"
	.string "¡Entremos!$"
