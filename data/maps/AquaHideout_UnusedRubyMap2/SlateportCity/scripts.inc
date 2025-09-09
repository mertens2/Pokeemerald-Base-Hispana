# 1 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 2 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_FAT_MAN, 1
# 3 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_MAN_1, 2
# 4 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_RICH_BOY, 3
# 5 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_GRUNT_1, 5
# 6 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_COOK, 6
# 7 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_OLD_WOMAN, 7
# 8 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_GIRL, 8
# 9 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_TY, 9
# 10 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_GABBY, 10
# 11 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_CAPT_STERN, 11
# 12 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_GRUNT_2, 18
# 13 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_GRUNT_3, 19
# 14 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_GRUNT_4, 26
# 15 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_GRUNT_5, 27
# 16 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_GRUNT_6, 28
# 17 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_GRUNT_7, 29
# 18 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_GRUNT_8, 30
# 19 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_GRUNT_9, 31
# 20 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_GRUNT_11, 33
# 21 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ .set LOCALID_SCOTT, 35
# 22 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 23 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 24 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 25 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 26 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 27 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 28 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.byte 0
# 29 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 30 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 31 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 32 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 33 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 34 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 35 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 36 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 37 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 38 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 39 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 40 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 41 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	return
# 42 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 43 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 44 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 45 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 46 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 47 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 48 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 49 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 50 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 51 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 52 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 53 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 54 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 58 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	return
# 59 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 60 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 61 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 62 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 63 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 64 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 65 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 66 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	return
# 67 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 68 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 69 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 70 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 71 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	return
# 72 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 73 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 74 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 75 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte 0
# 76 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 77 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 78 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lockall
# 79 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 80 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 81 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 82 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	namebox Scott
# 84 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 85 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	hidenamebox
# 86 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 87 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 88 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay 60
# 90 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	namebox Scott
# 91 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 92 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 93 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 95 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 96 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	hidenamebox
# 97 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay 30
# 98 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 99 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	namebox Scott
# 100 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 101 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 102 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	hidenamebox
# 103 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 104 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 106 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 107 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 108 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 109 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 110 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 111 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	releaseall
# 112 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 113 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 114 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 115 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 116 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_8
# 117 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 118 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 119 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 120 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 121 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 122 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 123 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 124 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 125 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 126 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 127 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 128 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 129 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 130 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 131 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 132 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 133 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 134 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 135 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 136 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 137 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 138 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 139 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 140 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 141 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 142 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 143 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 144 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 145 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmessage
# 146 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 147 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 148 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 149 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 150 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 151 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.align 2
# 152 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 153 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 154 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_TART_APPLE
# 155 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_CRACKED_POT 
# 156 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 157 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 158 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 159 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_UPGRADE
# 160 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 161 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_SACHET
# 162 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 163 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 164 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_LOVE_SWEET 
# 165 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_BERRY_SWEET 
# 166 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_CLOVER_SWEET 
# 167 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_FLOWER_SWEET 
# 168 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_STAR_SWEET
# 169 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_RIBBON_SWEET
# 170 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_RED_NECTAR 
# 171 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR 
# 172 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_PINK_NECTAR 
# 173 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR 
# 174 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 175 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 176 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 177 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 178 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 179 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 180 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 181 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 182 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 183 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 184 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 185 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 186 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 187 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 188 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 189 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 190 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitfanfare
# 191 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 192 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 193 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 194 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 195 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 196 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 197 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 198 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 199 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 200 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 201 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 202 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 203 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 204 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 205 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 206 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 207 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 208 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 209 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 210 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 211 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 212 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 213 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 214 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 215 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 216 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 217 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 218 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 219 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 220 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 221 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 222 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 223 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 224 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 225 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 226 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 227 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 228 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 229 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 230 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 231 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 232 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 233 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 234 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 235 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 236 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 237 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 238 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 239 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 240 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 241 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 242 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 243 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 244 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 245 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 246 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 247 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 248 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 249 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 250 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 251 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 252 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 253 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 254 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 255 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 256 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 257 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 258 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 259 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 260 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 261 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 262 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 263 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 264 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 265 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 266 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 267 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 268 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 269 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 270 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 271 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 272 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 273 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 274 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 275 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 276 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 277 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 278 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 279 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 280 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 281 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 282 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 283 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 284 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 285 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 286 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 287 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 288 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 289 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 290 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 291 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 292 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 293 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 294 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 295 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 296 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 297 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 298 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 299 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 300 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 301 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 302 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 303 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 304 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lockall
# 305 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 306 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 307 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 308 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	releaseall
# 309 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 310 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 311 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 312 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 313 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	releaseall
# 314 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 315 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 316 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 317 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 318 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	releaseall
# 319 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 320 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 321 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 322 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 323 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 324 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 325 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 326 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 327 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 328 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 329 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 330 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 331 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 332 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 333 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 334 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 335 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 336 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 337 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 338 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lockall
# 339 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 340 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 341 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	releaseall
# 342 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 343 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 344 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 345 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 346 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	releaseall
# 347 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 348 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 349 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 350 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 351 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 352 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 353 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 354 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 355 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 356 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 357 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 358 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 359 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 360 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 361 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 362 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 363 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 364 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 365 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 366 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 367 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 368 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 369 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 370 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 371 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 372 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 373 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 374 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 375 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 376 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 377 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 378 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 379 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 380 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 381 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 382 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 383 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 384 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 385 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 386 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 387 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 388 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 389 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 390 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 391 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 392 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 393 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 394 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 395 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 396 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 397 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 398 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 399 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 400 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 401 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 402 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 403 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 404 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 405 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 406 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 407 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 408 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 409 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 410 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 411 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 412 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 413 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 414 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 415 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 416 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 417 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 418 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 419 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 420 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 421 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 422 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 423 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 424 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 425 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 426 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 427 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 428 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 429 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 430 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 431 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 432 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 433 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 434 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 435 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 436 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 437 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 438 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 439 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 440 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 441 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 442 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 443 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 444 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 445 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 446 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 447 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 448 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 449 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 450 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 451 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 452 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 453 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 454 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 455 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 456 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 457 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 458 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 459 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 460 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 461 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 462 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 463 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	playse SE_PIN
# 464 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 465 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 466 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 467 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 468 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 469 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 470 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 471 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 472 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 473 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 474 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 475 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 476 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 477 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 478 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 479 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 480 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 481 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 482 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 483 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 484 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 485 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 486 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 487 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 488 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 489 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 490 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 491 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 492 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 493 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 494 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 495 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 496 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 497 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 498 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 499 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 500 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 501 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 502 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 503 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 504 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 505 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 506 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 507 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 508 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 509 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 510 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 511 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 512 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 513 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 514 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 515 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 516 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmessage
# 517 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 518 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 519 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 520 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 521 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 522 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.align 2
# 523 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 524 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 525 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 526 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 527 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 528 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 529 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 530 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 531 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 532 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 533 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 534 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 535 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 536 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 537 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 538 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 539 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 540 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 541 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmessage
# 542 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 543 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 544 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 545 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 546 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 547 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.align 2
# 548 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 549 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 550 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 551 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 552 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 553 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 554 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 555 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 556 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 557 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 558 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 559 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 560 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 561 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 562 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 563 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 564 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 565 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 566 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 567 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 568 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 569 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 570 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 571 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmessage
# 572 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 573 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 574 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 575 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 576 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 577 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.align 2
# 578 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 579 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_TM10  @ Hidden Power
# 580 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_TM43  @ Secret Power
# 581 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 582 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 583 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 584 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 585 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 586 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 587 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lockall
# 588 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	namebox Stern
# 589 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_0
# 590 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	namebox Gabby
# 591 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_1
# 592 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	namebox Stern
# 593 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_2
# 594 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	namebox Ty
# 595 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_3
# 596 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceRight
# 597 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceRight
# 598 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 599 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	namebox Ty
# 600 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_4
# 601 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	playse SE_PIN
# 602 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 603 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 604 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	namebox Stern
# 605 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_5
# 606 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	namebox Ty
# 607 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_6
# 608 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	namebox Stern
# 609 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_7
# 610 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 611 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 612 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 613 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 614 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 615 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	namebox Stern
# 616 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_8
# 617 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	hidenamebox
# 618 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 619 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 620 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	namebox Unknown
# 621 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 622 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	hidenamebox
# 623 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 624 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 625 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 626 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 627 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 628 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 630 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 632 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	playse SE_PIN
# 633 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 634 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 635 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 636 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 637 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 638 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 640 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_FacePlayer
# 641 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 642 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 643 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 644 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 645 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 646 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 647 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 648 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 649 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 650 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 651 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 652 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 653 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 654 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitstate
# 655 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	releaseall
# 656 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 657 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 658 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 659 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 660 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 661 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	emote_question_mark
# 662 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 663 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 664 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 665 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 666 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 667 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 668 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 669 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	emote_question_mark
# 670 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 671 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 672 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 673 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 674 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 675 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 676 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 677 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 678 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 679 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 680 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 681 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 682 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_down
# 683 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 684 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 685 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 686 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 687 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 688 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 689 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 690 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 691 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 692 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 693 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 694 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_down
# 695 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 696 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 697 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 698 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_down
# 699 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 700 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 701 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 702 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 703 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 704 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 705 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 706 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 707 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 708 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 709 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 710 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_down
# 711 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 712 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 713 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 714 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 715 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 716 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_up
# 717 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_up
# 718 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	set_invisible
# 719 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 720 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 721 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 722 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 723 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 724 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 725 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 726 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 727 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_down
# 728 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_left
# 729 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 730 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 731 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 732 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 733 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 734 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 735 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 736 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_up
# 737 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 738 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 739 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 740 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 741 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 742 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 743 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 744 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 745 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 746 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 747 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 748 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 749 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 750 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 751 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 752 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 753 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 754 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 755 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 756 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 757 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 758 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 759 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 760 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 761 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 762 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 763 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock
# 764 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	faceplayer
# 765 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 766 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 767 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 768 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 769 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 770 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 771 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 772 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 773 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 774 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 775 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 776 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 777 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 778 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 779 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 780 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 781 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 782 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 783 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 784 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 785 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 786 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 787 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 788 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 789 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmessage
# 790 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 791 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 792 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitstate
# 793 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 794 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 795 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 796 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 797 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 798 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 799 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 800 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 801 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 802 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 803 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 804 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 805 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 806 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 807 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 808 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 809 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 810 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 811 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 812 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 813 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 814 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 815 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 816 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 817 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 818 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 819 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 820 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 821 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 822 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 823 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 824 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 825 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 826 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 827 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 828 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 829 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 830 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 831 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 832 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 833 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 834 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 835 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 836 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 837 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 838 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 839 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 840 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 841 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 842 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 843 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 844 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 845 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 846 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 847 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 848 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 849 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 850 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 851 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 852 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 853 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 854 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 855 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 856 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 857 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 858 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 859 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 860 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 861 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 862 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 863 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 864 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 865 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 866 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 867 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 868 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 869 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 870 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 871 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 872 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 873 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 874 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 875 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 876 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 877 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 878 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 879 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 880 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 881 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 882 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 883 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 884 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 885 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 886 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 887 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 888 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 889 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 890 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 891 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 892 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 893 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 894 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 895 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 896 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 897 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 898 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 899 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 900 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 901 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 902 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 903 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 904 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 905 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 906 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 907 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 908 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 909 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 910 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 911 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 912 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 913 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	release
# 914 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 915 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 916 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 917 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 918 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 919 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 920 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 921 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 922 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lockall
# 923 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 924 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 925 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	opendoor 10, 12
# 926 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitdooranim
# 927 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 928 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 929 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 930 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 931 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closedoor 10, 12
# 932 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitdooranim
# 933 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 934 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	closemessage
# 935 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 936 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 937 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitmovement 0
# 938 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 939 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 940 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 941 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	releaseall
# 942 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 943 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 944 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 945 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lock_facing_direction
# 946 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_down
# 947 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	unlock_facing_direction
# 948 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 949 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 950 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 951 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_16
# 952 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 953 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 954 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 955 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 956 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	delay_8
# 957 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_down
# 958 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 959 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 960 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 961 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 962 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 963 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 964 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 965 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 966 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 967 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 968 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	walk_right
# 969 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	step_end
# 970 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 971 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 972 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	lockall
# 973 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 974 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	waitstate
# 975 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	releaseall
# 976 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	end
# 977 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 978 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 979 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Soy el Gurú Evolución!\p¡Compra lo que quieras!$"
# 980 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 981 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 982 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¿Eh?\n"
# 983 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Tu {STR_VAR_1}…$"
# 984 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 985 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 986 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Se esfuerza muchísimo!\p"
# 987 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Como recompensa, por favor acepta\n"
# 988 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Este Listón Esfuerzo.$"
# 989 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 990 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 991 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡{PLAYER} tiene Listón Esfuerzo!$"
# 992 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 993 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 994 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "{PLAYER} se lo dio\na {STR_VAR_1}.$"
# 995 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 996 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 997 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Deberías esforzarte más.\p"
# 998 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Si lo haces, le daré algo a tu Pokémon.$"
# 999 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1000 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1001 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Ah! ¡Tu {STR_VAR_1}!\n¡Ese Listón Esfuerzo le queda bien!$"
# 1002 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1003 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1004 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Me pregunto si la luz del faro\nmolesta a los Pokémon salvajes.$"
# 1005 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1006 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1007 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Amo el mar!\pEl Equipo Aqua parece amarlo, también.\p¡Dicen que evitarán que el\ncambio climático lo arruine!$"
# 1008 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1009 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1010 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Donde hay agua limpia, bayas,\ny gente dispuesta a amar\ly esforzarse, un Pueblo nacerá.\pEsta Ciudad nació por el amor\nde la gente por el mar.$"
# 1011 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1012 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1013 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Comprar donde sientes\nel aroma del océano…\p"
# 1014 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Es algo tan romántico!$"
# 1015 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1016 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1017 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Compraré peluchitos para mi mamá!$"
# 1018 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1019 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1020 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Sí! ¡Pelearé en la\nTienda Batalla, también!\p"
# 1021 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Quizá gane algo bueno!$"
# 1022 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1023 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1024 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Amo.\nLas.\lBicicletas.$"
# 1025 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1026 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1027 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Stern es un hombre amado aquí.\pFinanció el museo, y es\nparte de un equipo de\lexploración marina.$"
# 1028 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1029 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1030 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¿Esas personas de ahí?\n"
# 1031 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Son el Equipo Aqua, ¡Unas\lmaravillosas personas que ayudarán\lal océano a mantener su\lmajestuosidad!$"
# 1032 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1033 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1034 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Me encantaría unirme al Equpo Aqua.\p¡Parecen ser tan buena gente!$"
# 1035 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1036 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1037 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Hey, no empujes!\n"
# 1038 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¿No ves que es una fula?$"
# 1039 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1040 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1041 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "El Equipo Aqua no roba\nni rompe leyes inconsecuentes.\pPor eso somos amados por aquí.$"
# 1042 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1043 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1044 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Nuestro Jefe es tan lindo y brillante!\p"
# 1045 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Nadie pensaría en reunirse\nen un Museo, ¡Sólo él!$"
# 1046 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1047 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1048 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Los discursos de\nnuestro Jefe…\p¡Son tan inspiracionales!\p¡Me hace querer ser como él!$"
# 1049 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1050 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1051 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Ser un Soldado Aqua es como un\nsueño hecho realidad.\p¡Siempre quise tener una familia!$"
# 1052 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1053 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1054 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Ey ey ey!\n"
# 1055 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡No te coles en la fila!$"
# 1056 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1057 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1058 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Esta fila tan larga…\p"
# 1059 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Me recuerda cuando hacía\nfilas para comprar juegos\lnuevos cuando era niña…$"
# 1060 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1061 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1062 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Nuestro Jefe es genial!\p¡Hasta pagó nuestros boletos\npara no levantar sospechas!$"
# 1063 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1064 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1065 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¿Necesitabas algo, amiguit{OA}?$"
# 1066 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1067 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1068 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Te leeré el cartel si quieres!$"
# 1069 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1070 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1071 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "A ver…\p"
# 1072 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Dice… “La vida oceánica es\ntan misteriosa como hermosa.”\p"
# 1073 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Denada, amiguit{OA}, vuelve\nsi necesitas algo más!$"
# 1074 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1075 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1076 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Uggghh…\p"
# 1077 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Tuve que haber traído mi\ncelular para emular Pokémon…\p"
# 1078 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Uggghhh qué aburridooo…$"
# 1079 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1080 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1081 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Nuestro Líder nos dijo que\niríamos a relajarnos a\lunas aguas termales después!\p"
# 1082 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡No puedo esperar a ver al\nJefecito sin una camisa!\p¡Me sonrojo de sólo pensarlo!$"
# 1083 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1084 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1085 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "El océano es tan vasto…\p"
# 1086 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¿No es genial que será salvado?$"
# 1087 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1088 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1089 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Hay veces que pienso:\p¿Qué cosas no hemos descubierto\ndel océano?\p¿Cuántos Pokémon quedarán\npor encontrarse ahí?$"
# 1090 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1091 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1092 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Debería haber traído a mi\nnovia a comprar conmigo,\l¡Le encantan los peluches!$"
# 1093 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1094 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1095 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Desde que la gente tiene\nsentido común, el CambiaMotes se quedó\lsin trabajo.\pMe pregunto qué hará ahora.$"
# 1096 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1097 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1098 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Un Pokémon intercambiado\nconservará su apodo original.\pDespués de todo, es lo último\nque le queda de su\lantiguo mejor amigo.$"
# 1099 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1100 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1101 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Mi esposa y yo amamos Surfear!\p¡Ojalá hubiera un Modo Surf en\lla Tienda Batalla!$"
# 1102 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1103 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1104 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¿Una entrevista?\p¿Para Stern?$"
# 1105 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1106 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1107 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡La entrevistadora es\ntan cool y linda!\p"
# 1108 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Quiero ser como ella al crecer!$"
# 1109 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1110 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1111 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¿Cuál será el nuevo invento de Stern?$"
# 1112 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1113 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1114 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¿Qué pasa aquí?\n¿Acaso el Capitán lo logró?$"
# 1115 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1116 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1117 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¿Estoy en la Tele?$"
# 1118 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1119 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1120 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡El Capitán es una celebridad!$"
# 1121 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1122 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1123 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "TY: ¡Explícate, Stern!\p¿Qué tienes que ver\ncon el Equipo Aqua?$"
# 1124 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1125 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1126 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Gabby: ¿Qué tiene para decir\nsobre el Equipo Aqua?$"
# 1127 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1128 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	return
# 1129 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1130 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1131 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_0:
# 1132 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Y bueno, eso es todo lo que puedo decir\n"
# 1133 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "respecto al Submarino.$"
# 1134 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1135 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_1:
# 1136 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Muchísimas gracias!\n"
# 1137 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Esperamos poder volver a trabajar con\l"
# 1138 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "usted.$"
# 1139 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1140 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_2:
# 1141 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡No hay problema!$"
# 1142 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1143 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_3:
# 1144 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "E-eh, Capitán, quería preguntarle algo\n"
# 1145 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "también, s-si no le molesta.$"
# 1146 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1147 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_4:
# 1148 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¿S-será... que son ciertos los rumores?\n"
# 1149 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Los rumores que afirman que usted ha\l"
# 1150 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "{COLOR RED}estado ayudando financieramente al\l"
# 1151 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Equipo Aqua{COLOR DARK_GRAY}?$"
# 1152 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1153 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_5:
# 1154 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¿Qué?\p"
# 1155 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "No conocía esos rumores, pero no, no\n"
# 1156 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "son ciertos. Quien sea que lo piense en\l"
# 1157 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "serio se está engañando.$"
# 1158 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1159 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_6:
# 1160 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Comprendo... ¡G-gracias igualmente,\n"
# 1161 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Capitán!$"
# 1162 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1163 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_7:
# 1164 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Denada, solo hago mi trabajo.$"
# 1165 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1166 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_8:
# 1167 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "... {COLOR LIGHT_GRAY SHADOW WHITE}Cuando quieran{COLOR DARK_GRAY SHADOW LIGHT_GRAY}...$"
# 1168 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1169 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1170 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Hola, maravillosa gente de Ciudad Slateport!\n"
# 1171 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Les habla el Equipo Aqua!\l"
# 1172 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Gracias a toda su colaboración, seremos\l"
# 1173 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "ahora capaces de tomar control de su\l"
# 1174 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Submarino. ¡Les estamos agradecidos!$"
# 1175 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1176 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1177 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Parece venir desde dentro... ¡Hay que\n"
# 1178 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "hacer algo!$"
# 1179 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1180 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1181 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "...{COLOR LIGHT_GRAY SHADOW WHITE}Eso es{COLOR DARK_GRAY SHADOW LIGHT_GRAY}...$"
# 1182 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1183 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1184 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡{PLAYER}{KUN}!\n"
# 1185 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Ayúdame!$"
# 1186 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1187 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1188 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1189 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1190 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1191 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1192 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1193 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1194 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1195 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1196 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1197 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1198 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1199 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1200 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1201 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1202 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1203 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1204 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1205 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1206 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1207 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1208 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1209 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1210 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1211 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1212 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1213 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1214 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1215 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1216 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1217 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1218 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1219 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1220 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1221 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1222 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1223 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1224 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1225 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1226 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1227 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1228 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1229 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1230 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1231 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1232 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1233 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1234 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1235 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1236 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1237 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1238 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1239 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1240 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1241 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1242 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1243 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1244 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1245 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1246 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1247 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1248 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1249 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1250 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1251 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1252 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1253 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1254 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1255 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "like you.$"
# 1256 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1257 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1258 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1259 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1260 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1261 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1262 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1263 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1264 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1265 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1266 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1267 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1268 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1269 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1270 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1271 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1272 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1273 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1274 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "it with?$"
# 1275 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1276 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1277 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1278 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1279 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1280 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1281 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1282 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1283 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1284 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1285 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1286 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1287 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1288 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1289 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1290 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1291 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1292 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1293 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1294 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1295 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1296 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1297 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1298 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1299 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1300 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1301 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Mhhh. Te me haces familiar…\p"
# 1302 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¿Me he presentado alguna vez?\n"
# 1303 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Si no, name's Scott.\p"
# 1304 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Acabo de ver al Equipo Aqua\n"
# 1305 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "escaparse como unos cobardes.\p"
# 1306 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Adivinaré,--¿Los asustaste?$"
# 1307 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1308 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1309 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Mmmhh…\n"
# 1310 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "{COLOR BLUE}(So… This Trainer…){COLOR DARK_GRAY}$"
# 1311 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1312 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1313 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Okay! ¡Veo potencial en tí,\n"
# 1314 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "pareces un{A} Entrenador{A} fuerte.\p"
# 1315 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Espero con ansias ver en qué tipo\n"
# 1316 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "de Entrenador{A} te conviertes.$"
# 1317 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1318 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1319 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1320 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡See ya later, {PLAYER}, espero que\n"
# 1321 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "en nuestro próximo encuentro, seas\l"
# 1322 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "mucho más fuerte!\p"
# 1323 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Desarrolla tu {COLOR RED}talento{COLOR DARK_GRAY} al máximo!$"
# 1324 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"

# 1325 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1326 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Oh, hey!\n"
# 1327 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡{PLAYER}{KUN}!\p"
# 1328 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "So, {PLAYER}{KUN}, adivinaré--\n"
# 1329 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¿Tomarás el desafío de la Tienda de Batalla?\p"
# 1330 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Yeah! ¡Qué buena idea!\n"
# 1331 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡That's a really great idea!\p"
# 1332 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "Después de todo, es una oportunidad\n"
# 1333 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "única para cualquier Entrenador!\p"
# 1334 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity/scripts.pory"
	.string "¡Dale con todo, {PLAYER}!$"
