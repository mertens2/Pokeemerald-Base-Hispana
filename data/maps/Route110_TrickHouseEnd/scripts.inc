# 1 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 2 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_MapScripts::
# 3 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHouseEnd_OnResume
# 4 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseEnd_OnTransition
# 5 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEnd_OnFrame
# 6 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHouseEnd_OnWarp
# 7 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.byte 0
# 8 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 9 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnResume:
# 10 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile
# 11 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 12 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 13 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnTransition:
# 14 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_1, 0
# 15 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_2, 0
# 16 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special SetTrickHouseNuggetFlag
# 17 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 18 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 19 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnWarp:
# 20 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, Route110_TrickHouseEnd_EventScript_SetTrickMasterPos
# 21 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.2byte 0
# 22 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 23 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_SetTrickMasterPos::
# 24 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	addobject LOCALID_TRICK_MASTER_END
# 25 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	showobjectat LOCALID_TRICK_MASTER_END, MAP_ROUTE110_TRICK_HOUSE_END
# 26 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER_END, DIR_EAST
# 27 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 28 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 29 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnFrame:
# 30 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Route110_TrickHouseEnd_EventScript_CloseDoor
# 31 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.2byte 0
# 32 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 33 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CloseDoor::
# 34 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_1, 1
# 35 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile
# 36 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special DrawWholeMapView
# 37 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 38 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 39 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile::
# 40 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setmetatile 10, 1, METATILE_GenericBuilding_TrickHouse_Door_Closed, TRUE
# 41 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 42 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 43 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMaster::
# 44 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	lock
# 45 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	faceplayer
# 46 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouveMadeItToMe, MSGBOX_DEFAULT
# 47 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_2, 1
# 48 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 49 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 0, Route110_TrickHouseEnd_EventScript_CompletedPuzzle1
# 50 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 1, Route110_TrickHouseEnd_EventScript_CompletedPuzzle2
# 51 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 2, Route110_TrickHouseEnd_EventScript_CompletedPuzzle3
# 52 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 3, Route110_TrickHouseEnd_EventScript_CompletedPuzzle4
# 53 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 4, Route110_TrickHouseEnd_EventScript_CompletedPuzzle5
# 54 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 5, Route110_TrickHouseEnd_EventScript_CompletedPuzzle6
# 55 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 6, Route110_TrickHouseEnd_EventScript_CompletedPuzzle7
# 56 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 7, Route110_TrickHouseEnd_EventScript_CompletedPuzzle8
# 57 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 58 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 59 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle1::
# 60 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToPlantTrees, MSGBOX_DEFAULT
# 61 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 62 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 63 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 64 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
# 65 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 66 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 67 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 68 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 69 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 70 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 71 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle2::
# 72 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToMakeMaze, MSGBOX_DEFAULT
# 73 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 74 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 75 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_TIMER_BALL
# 76 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
# 77 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 78 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 79 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 80 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 81 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 82 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 83 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle3::
# 84 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToPreparePanels, MSGBOX_DEFAULT
# 85 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 86 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 87 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_HARD_STONE
# 88 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
# 89 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 90 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 91 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 92 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 93 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 94 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 95 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle4::
# 96 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToShoveBoulders, MSGBOX_DEFAULT
# 97 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 98 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 99 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_SMOKE_BALL
# 100 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
# 101 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 102 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 103 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 104 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 105 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 106 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 107 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle5::
# 108 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls, MSGBOX_DEFAULT
# 109 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 110 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 111 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_TM_TAUNT
# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
# 113 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 114 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 115 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 116 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 117 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 118 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 119 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle6::
# 120 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToInstallDoors, MSGBOX_DEFAULT
# 121 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 122 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 123 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_MAGNET
# 124 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
# 125 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 126 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 127 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 128 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 129 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 130 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 131 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle7::
# 132 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightSettingUpArrows, MSGBOX_DEFAULT
# 133 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 134 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 135 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_PP_MAX
# 136 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
# 137 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 138 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 139 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 140 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 141 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 142 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 143 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8::
# 144 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightPolishingFloors, MSGBOX_DEFAULT
# 145 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 146 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwaySouth
# 147 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayNorth
# 148 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayWest
# 149 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayEast
# 150 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 30
# 151 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry, MSGBOX_DEFAULT
# 152 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 153 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_FacePlayer
# 154 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 155 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 30
# 156 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent, MSGBOX_DEFAULT
# 157 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 158 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_ChooseTent
# 159 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_NoRoomForTent
# 160 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_LeavingOnJourney, MSGBOX_DEFAULT
# 161 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 162 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special ResetTrickHouseNuggetFlag
# 163 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 164 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 165 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 166 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_ChooseTent::
# 167 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	multichoice 0, 0, MULTI_TENT, TRUE
# 168 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	switch VAR_RESULT
# 169 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 0, Route110_TrickHouseEnd_EventScript_GiveRedTent
# 170 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_GiveBlueTent
# 171 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 172 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_GiveRedTent::
# 173 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	givedecoration DECOR_RED_TENT
# 174 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 175 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 176 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_GiveBlueTent::
# 177 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	givedecoration DECOR_BLUE_TENT
# 178 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 179 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 180 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterExit::
# 181 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouse_Movement_TrickMasterSpin
# 182 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 183 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_M_EXPLOSION
# 184 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 185 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	removeobject LOCALID_TRICK_MASTER_END
# 187 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	addvar VAR_TRICK_HOUSE_LEVEL, 1
# 188 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 189 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 190 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_BagFull::
# 191 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Common_EventScript_BagIsFull
# 192 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_NoRoomForThis, MSGBOX_DEFAULT
# 193 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
# 194 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 195 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 196 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_NoRoomForTent::
# 197 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 198 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_NoRoomInPC, MSGBOX_DEFAULT
# 199 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
# 200 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 201 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 202 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwaySouth::
# 203 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterDown
# 204 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 205 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 206 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 207 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayNorth::
# 208 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterUp
# 209 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 211 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 212 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayWest::
# 213 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterLeft
# 214 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 216 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 217 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayEast::
# 218 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterRight
# 219 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 220 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 221 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 222 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterExitTrigger::
# 223 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	lockall
# 224 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER_END, DIR_WEST
# 225 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_PIN
# 226 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_ExclamationMark
# 227 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 228 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 20
# 229 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouseEnd_Movement_TrickMasterSurprise
# 230 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_M_EXPLOSION
# 232 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 233 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 234 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YoureIgnoringMe, MSGBOX_DEFAULT
# 235 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 236 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_PLAYER, Route110_TrickHouseEnd_Movement_KeepPlayerInRoom
# 237 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 238 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 4
# 239 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER_END, DIR_EAST
# 240 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	releaseall
# 241 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 242 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 243 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Movement_KeepPlayerInRoom:
# 244 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	walk_down
# 245 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	step_end
# 246 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 247 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Movement_TrickMasterSurprise:
# 248 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	jump_in_place_left
# 249 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	step_end
# 250 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 251 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_YouveMadeItToMe:
# 252 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Aaaah!\n"
# 253 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¿Has conseguido llegar hasta mí?\l"
# 254 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Mmmmm… ¡Tú sí que piensas!$"
# 255 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 256 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToPlantTrees:
# 257 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Me ha llevado toda la noche\n"
# 258 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "plantar esos árboles…\p"
# 259 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Te faltan seis pasos para ser\n"
# 260 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "casi tan genial como yo!$"
# 261 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 262 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToMakeMaze:
# 263 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Me ha llevado toda la noche\n"
# 264 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "crear el laberinto…\p"
# 265 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Te faltan cinco pasos para ser\n"
# 266 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "casi tan genial como yo!$"
# 267 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 268 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToPreparePanels:
# 269 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Me ha llevado toda la noche preparar\n"
# 270 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "esas puertas correderas…\p"
# 271 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Te faltan cuatro pasos para ser\n"
# 272 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "casi tan genial como yo!$"
# 273 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 274 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToShoveBoulders:
# 275 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Me ha llevado toda la noche\n"
# 276 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "colocar esas rocas…\p"
# 277 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Te faltan tres pasos para ser\n"
# 278 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "casi tan genial como yo!$"
# 279 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 280 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls:
# 281 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Me ha llevado toda una noche fabricar\n"
# 282 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "MECAÑECOS y otra pensar en los\l"
# 283 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "acertijos…\p"
# 284 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Te faltan dos pasos para ser\n"
# 285 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "casi tan genial como yo!$"
# 286 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 287 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToInstallDoors:
# 288 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Me ha llevado toda la noche\n"
# 289 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "instalar esas puertas…\p"
# 290 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Eres casi tan genial como yo!$"
# 291 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 292 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightSettingUpArrows:
# 293 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Me ha llevado toda la noche\n"
# 294 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "instalar las flechas…\p"
# 295 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Eres tan genial como yo!$"
# 296 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 297 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightPolishingFloors:
# 298 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Me ha llevado toda la noche\n"
# 299 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "pulir el suelo…\p"
# 300 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Eres más genial que yo!\n"
# 301 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Probablemente…$"
# 302 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 303 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry:
# 304 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡¿Y ahora qué hago?!\n"
# 305 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Se me han agotado las ideas…\p"
# 306 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Quizás debiera darme una vuelta por\n"
# 307 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "HOENN para idear nuevos trucos…$"
# 308 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 309 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent:
# 310 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Odio admitir mi derrota,\n"
# 311 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡pero me has superado!\p"
# 312 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Ahora bien, mi gran carisma ha debido\n"
# 313 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "de encandilarte para que hayas venido\l"
# 314 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "a verme sin parar. ¡Seguro, segurísimo!\p"
# 315 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Aunque eso no tiene nada que ver\n"
# 316 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "con que yo haya perdido…\p"
# 317 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Toma este recuerdo conmemorativo\n"
# 318 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "de la amistad surgida entre un talento\l"
# 319 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "como tú y un genio como yo!\p"
# 320 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Bueno, en realidad hay dos:\n"
# 321 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "una TIENDA ROJA y una TIENDA AZUL.\l"
# 322 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¿Cuál prefieres?$"
# 323 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 324 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_NoRoomInPC:
# 325 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¿Cómo? ¿No tienes espacio en el PC?\n"
# 326 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¿Y qué hago ahora yo?\p"
# 327 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Tienes suerte: soy buenísima persona.\n"
# 328 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Te lo guardaré hasta que vuelvas.$"
# 329 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 330 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_LeavingOnJourney:
# 331 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Mmmm…\p"
# 332 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Me voy en un viaje de descubrimiento.\n"
# 333 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Buscaré nuevos trucos y tretas…\p"
# 334 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Espero que vuelvas algún día a verme\n"
# 335 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "para entretenerme un rato contigo.\p"
# 336 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Ahora me voy. ¡Hasta la vista!$"
# 337 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 338 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward:
# 339 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Bien!\n"
# 340 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Has ganado esto!$"
# 341 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 342 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_NoRoomForThis:
# 343 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¿Cómo? ¿No tienes espacio para esto?\n"
# 344 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¿Pero cuántos objetos llevas?\p"
# 345 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Tienes suerte: como has llegado lejos,\n"
# 346 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "te lo guardaré hasta que vuelvas.$"
# 347 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 348 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou:
# 349 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Borra esa ridícula sonrisa de tu cara!\n"
# 350 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Es pronto para cantar victoria!\p"
# 351 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Voy a crear nuevos trucos que te van a\n"
# 352 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "desconcertar. A ver quién ríe el último.\p"
# 353 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Vuelve pronto para probar mi nueva\n"
# 354 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "y complicadísima trampa!$"
# 355 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 356 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_YoureIgnoringMe:
# 357 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "¡Pero bueno! ¿Me estás ignorando?\n"
# 358 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Eso me destroza el corazón, ay…$"
