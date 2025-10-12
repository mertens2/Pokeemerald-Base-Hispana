# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 3 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 21 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 22 "data/maps/SlateportCity/scripts.pory"

# 23 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 24 "data/maps/SlateportCity/scripts.pory"

# 25 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 26 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 27 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 28 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 29 "data/maps/SlateportCity/scripts.pory"

# 30 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 31 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 32 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 33 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 34 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 35 "data/maps/SlateportCity/scripts.pory"
	end
# 36 "data/maps/SlateportCity/scripts.pory"

# 37 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 38 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 39 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 40 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 41 "data/maps/SlateportCity/scripts.pory"
	return
# 42 "data/maps/SlateportCity/scripts.pory"

# 43 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 44 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 45 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 58 "data/maps/SlateportCity/scripts.pory"
	return
# 59 "data/maps/SlateportCity/scripts.pory"

# 60 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 61 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 62 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 63 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 18, SlateportCity_EventScript_MoveScottToPokeCenter
# 64 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 31, SlateportCity_EventScript_MoveScottLeft
# 65 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottRight
# 66 "data/maps/SlateportCity/scripts.pory"
	subvar VAR_0x8004, 7
# 67 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, VAR_0x8004, VAR_0x8005
# 68 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottFinish::
# 69 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 70 "data/maps/SlateportCity/scripts.pory"
	return
# 71 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottRight::
# 72 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 39
# 73 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_MoveScottFinish
# 74 "data/maps/SlateportCity/scripts.pory"

# 75 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottToPokeCenter::
# 76 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 20
# 77 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_MoveScottFinish
# 78 "data/maps/SlateportCity/scripts.pory"

# 79 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 80 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 24, 39
# 81 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_MoveScottFinish
# 82 "data/maps/SlateportCity/scripts.pory"

# 83 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 84 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 85 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 86 "data/maps/SlateportCity/scripts.pory"

# 87 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 88 "data/maps/SlateportCity/scripts.pory"
	lockall
# 89 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 90 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 91 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 92 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/SlateportCity/scripts.pory"
	namebox Scott
# 94 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 95 "data/maps/SlateportCity/scripts.pory"
	hidenamebox
# 96 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 97 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 98 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 100 "data/maps/SlateportCity/scripts.pory"
	namebox Scott
# 101 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 102 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 103 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 105 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 106 "data/maps/SlateportCity/scripts.pory"
	hidenamebox
# 107 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 108 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 109 "data/maps/SlateportCity/scripts.pory"
	namebox Scott
# 110 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 111 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 112 "data/maps/SlateportCity/scripts.pory"
	hidenamebox
# 113 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 114 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 115 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 116 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 117 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 118 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 119 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 120 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 121 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 122 "data/maps/SlateportCity/scripts.pory"
	end
# 123 "data/maps/SlateportCity/scripts.pory"

# 124 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 125 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 126 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 127 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 128 "data/maps/SlateportCity/scripts.pory"
	step_end
# 129 "data/maps/SlateportCity/scripts.pory"

# 130 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 131 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 137 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 138 "data/maps/SlateportCity/scripts.pory"
	step_end
# 139 "data/maps/SlateportCity/scripts.pory"

# 140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 141 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 142 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 143 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 144 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 145 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 146 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 147 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 148 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 149 "data/maps/SlateportCity/scripts.pory"
	step_end
# 150 "data/maps/SlateportCity/scripts.pory"

# 151 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 152 "data/maps/SlateportCity/scripts.pory"
	lock
# 153 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 154 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 155 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 156 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 157 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 158 "data/maps/SlateportCity/scripts.pory"
	release
# 159 "data/maps/SlateportCity/scripts.pory"
	end
# 160 "data/maps/SlateportCity/scripts.pory"

# 161 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 162 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 163 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 164 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TART_APPLE
# 165 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CRACKED_POT 
# 166 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 167 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 168 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 169 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_UPGRADE
# 170 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 171 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SACHET
# 172 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 173 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 174 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LOVE_SWEET 
# 175 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BERRY_SWEET 
# 176 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CLOVER_SWEET 
# 177 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FLOWER_SWEET 
# 178 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_STAR_SWEET
# 179 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RIBBON_SWEET
# 180 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RED_NECTAR 
# 181 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR 
# 182 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PINK_NECTAR 
# 183 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR 
# 184 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 185 "data/maps/SlateportCity/scripts.pory"
	release
# 186 "data/maps/SlateportCity/scripts.pory"
	end
# 187 "data/maps/SlateportCity/scripts.pory"

# 188 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 189 "data/maps/SlateportCity/scripts.pory"
	lock
# 190 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 191 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 192 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 193 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 194 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 195 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 196 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 197 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 198 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 199 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 200 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 201 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 202 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 203 "data/maps/SlateportCity/scripts.pory"
	release
# 204 "data/maps/SlateportCity/scripts.pory"
	end
# 205 "data/maps/SlateportCity/scripts.pory"

# 206 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 207 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 208 "data/maps/SlateportCity/scripts.pory"
	release
# 209 "data/maps/SlateportCity/scripts.pory"
	end
# 210 "data/maps/SlateportCity/scripts.pory"

# 211 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 212 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 213 "data/maps/SlateportCity/scripts.pory"
	release
# 214 "data/maps/SlateportCity/scripts.pory"
	end
# 215 "data/maps/SlateportCity/scripts.pory"

# 216 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 217 "data/maps/SlateportCity/scripts.pory"
	lock
# 218 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 219 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 220 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 221 "data/maps/SlateportCity/scripts.pory"
	release
# 222 "data/maps/SlateportCity/scripts.pory"
	end
# 223 "data/maps/SlateportCity/scripts.pory"

# 224 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 225 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 226 "data/maps/SlateportCity/scripts.pory"
	release
# 227 "data/maps/SlateportCity/scripts.pory"
	end
# 228 "data/maps/SlateportCity/scripts.pory"

# 229 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 230 "data/maps/SlateportCity/scripts.pory"
	lock
# 231 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 232 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 233 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 234 "data/maps/SlateportCity/scripts.pory"
	release
# 235 "data/maps/SlateportCity/scripts.pory"
	end
# 236 "data/maps/SlateportCity/scripts.pory"

# 237 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 238 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 239 "data/maps/SlateportCity/scripts.pory"
	release
# 240 "data/maps/SlateportCity/scripts.pory"
	end
# 241 "data/maps/SlateportCity/scripts.pory"

# 242 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 243 "data/maps/SlateportCity/scripts.pory"
	lock
# 244 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 245 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 246 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 247 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 248 "data/maps/SlateportCity/scripts.pory"
	release
# 249 "data/maps/SlateportCity/scripts.pory"
	end
# 250 "data/maps/SlateportCity/scripts.pory"

# 251 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 252 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 253 "data/maps/SlateportCity/scripts.pory"
	release
# 254 "data/maps/SlateportCity/scripts.pory"
	end
# 255 "data/maps/SlateportCity/scripts.pory"

# 256 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 257 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 258 "data/maps/SlateportCity/scripts.pory"
	release
# 259 "data/maps/SlateportCity/scripts.pory"
	end
# 260 "data/maps/SlateportCity/scripts.pory"

# 261 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 262 "data/maps/SlateportCity/scripts.pory"
	lock
# 263 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 264 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 265 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 266 "data/maps/SlateportCity/scripts.pory"
	release
# 267 "data/maps/SlateportCity/scripts.pory"
	end
# 268 "data/maps/SlateportCity/scripts.pory"

# 269 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 270 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 271 "data/maps/SlateportCity/scripts.pory"
	release
# 272 "data/maps/SlateportCity/scripts.pory"
	end
# 273 "data/maps/SlateportCity/scripts.pory"

# 274 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 275 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 276 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 277 "data/maps/SlateportCity/scripts.pory"
	end
# 278 "data/maps/SlateportCity/scripts.pory"

# 279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 280 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 281 "data/maps/SlateportCity/scripts.pory"
	end
# 282 "data/maps/SlateportCity/scripts.pory"

# 283 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 284 "data/maps/SlateportCity/scripts.pory"
	lock
# 285 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 286 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 287 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 288 "data/maps/SlateportCity/scripts.pory"
	release
# 289 "data/maps/SlateportCity/scripts.pory"
	end
# 290 "data/maps/SlateportCity/scripts.pory"

# 291 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 292 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 293 "data/maps/SlateportCity/scripts.pory"
	release
# 294 "data/maps/SlateportCity/scripts.pory"
	end
# 295 "data/maps/SlateportCity/scripts.pory"

# 296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 297 "data/maps/SlateportCity/scripts.pory"
	lock
# 298 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 299 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 300 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 301 "data/maps/SlateportCity/scripts.pory"
	release
# 302 "data/maps/SlateportCity/scripts.pory"
	end
# 303 "data/maps/SlateportCity/scripts.pory"

# 304 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 305 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 306 "data/maps/SlateportCity/scripts.pory"
	release
# 307 "data/maps/SlateportCity/scripts.pory"
	end
# 308 "data/maps/SlateportCity/scripts.pory"

# 309 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 310 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 311 "data/maps/SlateportCity/scripts.pory"
	end
# 312 "data/maps/SlateportCity/scripts.pory"

# 313 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 314 "data/maps/SlateportCity/scripts.pory"
	lockall
# 315 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 316 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 317 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 318 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 319 "data/maps/SlateportCity/scripts.pory"
	end
# 320 "data/maps/SlateportCity/scripts.pory"

# 321 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 322 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 323 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 324 "data/maps/SlateportCity/scripts.pory"
	end
# 325 "data/maps/SlateportCity/scripts.pory"

# 326 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 327 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 328 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 329 "data/maps/SlateportCity/scripts.pory"
	end
# 330 "data/maps/SlateportCity/scripts.pory"

# 331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 332 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 333 "data/maps/SlateportCity/scripts.pory"
	end
# 334 "data/maps/SlateportCity/scripts.pory"

# 335 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 336 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 337 "data/maps/SlateportCity/scripts.pory"
	end
# 338 "data/maps/SlateportCity/scripts.pory"

# 339 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 340 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 341 "data/maps/SlateportCity/scripts.pory"
	end
# 342 "data/maps/SlateportCity/scripts.pory"

# 343 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 344 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 345 "data/maps/SlateportCity/scripts.pory"
	end
# 346 "data/maps/SlateportCity/scripts.pory"

# 347 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 348 "data/maps/SlateportCity/scripts.pory"
	lockall
# 349 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 350 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 351 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 352 "data/maps/SlateportCity/scripts.pory"
	end
# 353 "data/maps/SlateportCity/scripts.pory"

# 354 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 355 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 356 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 357 "data/maps/SlateportCity/scripts.pory"
	end
# 358 "data/maps/SlateportCity/scripts.pory"

# 359 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 360 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 361 "data/maps/SlateportCity/scripts.pory"
	end
# 362 "data/maps/SlateportCity/scripts.pory"

# 363 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 364 "data/maps/SlateportCity/scripts.pory"
	lock
# 365 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 366 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 367 "data/maps/SlateportCity/scripts.pory"
	release
# 368 "data/maps/SlateportCity/scripts.pory"
	end
# 369 "data/maps/SlateportCity/scripts.pory"

# 370 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 371 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 372 "data/maps/SlateportCity/scripts.pory"
	end
# 373 "data/maps/SlateportCity/scripts.pory"

# 374 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 375 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 376 "data/maps/SlateportCity/scripts.pory"
	end
# 377 "data/maps/SlateportCity/scripts.pory"

# 378 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 379 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 380 "data/maps/SlateportCity/scripts.pory"
	end
# 381 "data/maps/SlateportCity/scripts.pory"

# 382 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 383 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 384 "data/maps/SlateportCity/scripts.pory"
	end
# 385 "data/maps/SlateportCity/scripts.pory"

# 386 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 387 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 388 "data/maps/SlateportCity/scripts.pory"
	end
# 389 "data/maps/SlateportCity/scripts.pory"

# 390 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 391 "data/maps/SlateportCity/scripts.pory"
	lock
# 392 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 393 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 394 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 395 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 396 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 397 "data/maps/SlateportCity/scripts.pory"
	release
# 398 "data/maps/SlateportCity/scripts.pory"
	end
# 399 "data/maps/SlateportCity/scripts.pory"

# 400 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 401 "data/maps/SlateportCity/scripts.pory"
	lock
# 402 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 403 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 404 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 405 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 406 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 407 "data/maps/SlateportCity/scripts.pory"
	release
# 408 "data/maps/SlateportCity/scripts.pory"
	end
# 409 "data/maps/SlateportCity/scripts.pory"

# 410 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 411 "data/maps/SlateportCity/scripts.pory"
	lock
# 412 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 413 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 414 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 415 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 416 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 417 "data/maps/SlateportCity/scripts.pory"
	release
# 418 "data/maps/SlateportCity/scripts.pory"
	end
# 419 "data/maps/SlateportCity/scripts.pory"

# 420 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 421 "data/maps/SlateportCity/scripts.pory"
	lock
# 422 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 423 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 424 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 425 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 426 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 427 "data/maps/SlateportCity/scripts.pory"
	release
# 428 "data/maps/SlateportCity/scripts.pory"
	end
# 429 "data/maps/SlateportCity/scripts.pory"

# 430 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 431 "data/maps/SlateportCity/scripts.pory"
	lock
# 432 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 433 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 434 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 435 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 436 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 437 "data/maps/SlateportCity/scripts.pory"
	release
# 438 "data/maps/SlateportCity/scripts.pory"
	end
# 439 "data/maps/SlateportCity/scripts.pory"

# 440 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 441 "data/maps/SlateportCity/scripts.pory"
	lock
# 442 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 443 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 444 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 445 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 446 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 447 "data/maps/SlateportCity/scripts.pory"
	release
# 448 "data/maps/SlateportCity/scripts.pory"
	end
# 449 "data/maps/SlateportCity/scripts.pory"

# 450 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 451 "data/maps/SlateportCity/scripts.pory"
	lock
# 452 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 453 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 454 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 455 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 456 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 457 "data/maps/SlateportCity/scripts.pory"
	release
# 458 "data/maps/SlateportCity/scripts.pory"
	end
# 459 "data/maps/SlateportCity/scripts.pory"

# 460 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 461 "data/maps/SlateportCity/scripts.pory"
	lock
# 462 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 463 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 464 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 465 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 466 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 467 "data/maps/SlateportCity/scripts.pory"
	release
# 468 "data/maps/SlateportCity/scripts.pory"
	end
# 469 "data/maps/SlateportCity/scripts.pory"

# 470 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 471 "data/maps/SlateportCity/scripts.pory"
	lock
# 472 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 473 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 474 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 475 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 476 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 477 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 478 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 479 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 480 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 481 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 482 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 483 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 484 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 485 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 486 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 487 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 488 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 489 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 490 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 491 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 492 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 493 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 494 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 495 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 496 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 497 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 498 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 499 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 500 "data/maps/SlateportCity/scripts.pory"
	release
# 501 "data/maps/SlateportCity/scripts.pory"
	end
# 502 "data/maps/SlateportCity/scripts.pory"

# 503 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 504 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 505 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 506 "data/maps/SlateportCity/scripts.pory"
	step_end
# 507 "data/maps/SlateportCity/scripts.pory"

# 508 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 509 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 510 "data/maps/SlateportCity/scripts.pory"
	end
# 511 "data/maps/SlateportCity/scripts.pory"

# 512 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 513 "data/maps/SlateportCity/scripts.pory"
	lock
# 514 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 515 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 516 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 517 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 518 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/SlateportCity/scripts.pory"
	release
# 520 "data/maps/SlateportCity/scripts.pory"
	end
# 521 "data/maps/SlateportCity/scripts.pory"

# 522 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 523 "data/maps/SlateportCity/scripts.pory"
	lock
# 524 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 525 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 526 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 527 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 528 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 529 "data/maps/SlateportCity/scripts.pory"
	release
# 530 "data/maps/SlateportCity/scripts.pory"
	end
# 531 "data/maps/SlateportCity/scripts.pory"

# 532 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 533 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 534 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 535 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 536 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 537 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 538 "data/maps/SlateportCity/scripts.pory"
	release
# 539 "data/maps/SlateportCity/scripts.pory"
	end
# 540 "data/maps/SlateportCity/scripts.pory"

# 541 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 542 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 543 "data/maps/SlateportCity/scripts.pory"
	release
# 544 "data/maps/SlateportCity/scripts.pory"
	end
# 545 "data/maps/SlateportCity/scripts.pory"

# 546 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 547 "data/maps/SlateportCity/scripts.pory"
	lock
# 548 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 549 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 550 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 551 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 552 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 553 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 554 "data/maps/SlateportCity/scripts.pory"
	release
# 555 "data/maps/SlateportCity/scripts.pory"
	end
# 556 "data/maps/SlateportCity/scripts.pory"

# 557 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 558 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 559 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 560 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 561 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 562 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 563 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 564 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 565 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 566 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 567 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 568 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 569 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 570 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 571 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 572 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 573 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 574 "data/maps/SlateportCity/scripts.pory"
	release
# 575 "data/maps/SlateportCity/scripts.pory"
	end
# 576 "data/maps/SlateportCity/scripts.pory"

# 577 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 578 "data/maps/SlateportCity/scripts.pory"
	lock
# 579 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 580 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 581 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 582 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 583 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 584 "data/maps/SlateportCity/scripts.pory"
	release
# 585 "data/maps/SlateportCity/scripts.pory"
	end
# 586 "data/maps/SlateportCity/scripts.pory"

# 587 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 588 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 589 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM10  @ Hidden Power
# 590 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM43  @ Secret Power
# 591 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 592 "data/maps/SlateportCity/scripts.pory"
	release
# 593 "data/maps/SlateportCity/scripts.pory"
	end
# 594 "data/maps/SlateportCity/scripts.pory"

# 595 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 596 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 597 "data/maps/SlateportCity/scripts.pory"
	lockall
# 598 "data/maps/SlateportCity/scripts.pory"
	namebox Stern
# 599 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_0
# 600 "data/maps/SlateportCity/scripts.pory"
	namebox Gabby
# 601 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_1
# 602 "data/maps/SlateportCity/scripts.pory"
	namebox Stern
# 603 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_2
# 604 "data/maps/SlateportCity/scripts.pory"
	namebox Ty
# 605 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_3
# 606 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceRight
# 607 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceRight
# 608 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 609 "data/maps/SlateportCity/scripts.pory"
	namebox Ty
# 610 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_4
# 611 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 612 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 613 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 614 "data/maps/SlateportCity/scripts.pory"
	namebox Stern
# 615 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_5
# 616 "data/maps/SlateportCity/scripts.pory"
	namebox Ty
# 617 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_6
# 618 "data/maps/SlateportCity/scripts.pory"
	namebox Stern
# 619 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_7
# 620 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 621 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 622 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 623 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 624 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 625 "data/maps/SlateportCity/scripts.pory"
	namebox Stern
# 626 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_CaptStern_Text_8
# 627 "data/maps/SlateportCity/scripts.pory"
	hidenamebox
# 628 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 629 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 630 "data/maps/SlateportCity/scripts.pory"
	namebox Unknown
# 631 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 632 "data/maps/SlateportCity/scripts.pory"
	hidenamebox
# 633 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 634 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 635 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 636 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 637 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 638 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 640 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 642 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 643 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 644 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 645 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 646 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 647 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 648 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 650 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_FacePlayer
# 651 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 653 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 654 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 655 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 656 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 658 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 659 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 660 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 661 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 662 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 663 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 664 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 665 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 666 "data/maps/SlateportCity/scripts.pory"
	end
# 667 "data/maps/SlateportCity/scripts.pory"

# 668 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 669 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 670 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 671 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 672 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 673 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 674 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 675 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 676 "data/maps/SlateportCity/scripts.pory"
	step_end
# 677 "data/maps/SlateportCity/scripts.pory"

# 678 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 679 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 680 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 681 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 682 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 683 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 684 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 685 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 686 "data/maps/SlateportCity/scripts.pory"
	step_end
# 687 "data/maps/SlateportCity/scripts.pory"

# 688 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 689 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 690 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 691 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 692 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 693 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 694 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 695 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 696 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 697 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 698 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 699 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 700 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 701 "data/maps/SlateportCity/scripts.pory"
	step_end
# 702 "data/maps/SlateportCity/scripts.pory"

# 703 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 704 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 705 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 706 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 707 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 708 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 709 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 710 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 711 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 712 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 713 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 714 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 715 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 716 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 717 "data/maps/SlateportCity/scripts.pory"
	step_end
# 718 "data/maps/SlateportCity/scripts.pory"

# 719 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 720 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 721 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 722 "data/maps/SlateportCity/scripts.pory"
	step_end
# 723 "data/maps/SlateportCity/scripts.pory"

# 724 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 725 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 726 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 727 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 728 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 729 "data/maps/SlateportCity/scripts.pory"
	step_end
# 730 "data/maps/SlateportCity/scripts.pory"

# 731 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 732 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 733 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 734 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 735 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 736 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 737 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 738 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 739 "data/maps/SlateportCity/scripts.pory"
	step_end
# 740 "data/maps/SlateportCity/scripts.pory"

# 741 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 742 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 743 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 744 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 745 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 746 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 747 "data/maps/SlateportCity/scripts.pory"
	step_end
# 748 "data/maps/SlateportCity/scripts.pory"

# 749 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 750 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 751 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 752 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 753 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 754 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 755 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 756 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 757 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 758 "data/maps/SlateportCity/scripts.pory"
	step_end
# 759 "data/maps/SlateportCity/scripts.pory"

# 760 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 761 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 762 "data/maps/SlateportCity/scripts.pory"
	end
# 763 "data/maps/SlateportCity/scripts.pory"

# 764 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 765 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 766 "data/maps/SlateportCity/scripts.pory"
	end
# 767 "data/maps/SlateportCity/scripts.pory"

# 768 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 769 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 770 "data/maps/SlateportCity/scripts.pory"
	end
# 771 "data/maps/SlateportCity/scripts.pory"

# 772 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 773 "data/maps/SlateportCity/scripts.pory"
	lock
# 774 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 775 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 776 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 777 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 778 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 779 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 780 "data/maps/SlateportCity/scripts.pory"
	release
# 781 "data/maps/SlateportCity/scripts.pory"
	end
# 782 "data/maps/SlateportCity/scripts.pory"

# 783 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 784 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 785 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 786 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 787 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 788 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 789 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 790 "data/maps/SlateportCity/scripts.pory"
	end
# 791 "data/maps/SlateportCity/scripts.pory"

# 792 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 793 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 794 "data/maps/SlateportCity/scripts.pory"
	release
# 795 "data/maps/SlateportCity/scripts.pory"
	end
# 796 "data/maps/SlateportCity/scripts.pory"

# 797 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 798 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 799 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 800 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 801 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 802 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 803 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 804 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 805 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 806 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 807 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 808 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 809 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 810 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 811 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 812 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 813 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 814 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 815 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 816 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 817 "data/maps/SlateportCity/scripts.pory"
	end
# 818 "data/maps/SlateportCity/scripts.pory"

# 819 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 820 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 821 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 822 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 823 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 824 "data/maps/SlateportCity/scripts.pory"
	end
# 825 "data/maps/SlateportCity/scripts.pory"

# 826 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 827 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 828 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 829 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 830 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 831 "data/maps/SlateportCity/scripts.pory"
	end
# 832 "data/maps/SlateportCity/scripts.pory"

# 833 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 834 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 835 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 836 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 837 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 838 "data/maps/SlateportCity/scripts.pory"
	end
# 839 "data/maps/SlateportCity/scripts.pory"

# 840 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 841 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 842 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 843 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 844 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 845 "data/maps/SlateportCity/scripts.pory"
	end
# 846 "data/maps/SlateportCity/scripts.pory"

# 847 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 848 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 849 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 850 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 851 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 852 "data/maps/SlateportCity/scripts.pory"
	end
# 853 "data/maps/SlateportCity/scripts.pory"

# 854 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 855 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 856 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 857 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 858 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 859 "data/maps/SlateportCity/scripts.pory"
	end
# 860 "data/maps/SlateportCity/scripts.pory"

# 861 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 862 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 863 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 864 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 865 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 866 "data/maps/SlateportCity/scripts.pory"
	end
# 867 "data/maps/SlateportCity/scripts.pory"

# 868 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 869 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 870 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 871 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 872 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 873 "data/maps/SlateportCity/scripts.pory"
	end
# 874 "data/maps/SlateportCity/scripts.pory"

# 875 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 876 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 877 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 878 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 879 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 880 "data/maps/SlateportCity/scripts.pory"
	end
# 881 "data/maps/SlateportCity/scripts.pory"

# 882 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 883 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 884 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 885 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 886 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 887 "data/maps/SlateportCity/scripts.pory"
	end
# 888 "data/maps/SlateportCity/scripts.pory"

# 889 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 890 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 891 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 892 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 893 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 894 "data/maps/SlateportCity/scripts.pory"
	end
# 895 "data/maps/SlateportCity/scripts.pory"

# 896 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 897 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 898 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 899 "data/maps/SlateportCity/scripts.pory"
	release
# 900 "data/maps/SlateportCity/scripts.pory"
	end
# 901 "data/maps/SlateportCity/scripts.pory"

# 902 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 903 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 904 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 905 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 906 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 907 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 908 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 909 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 910 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 911 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 912 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 913 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 914 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 915 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 916 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 917 "data/maps/SlateportCity/scripts.pory"
	release
# 918 "data/maps/SlateportCity/scripts.pory"
	end
# 919 "data/maps/SlateportCity/scripts.pory"

# 920 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 921 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 922 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 923 "data/maps/SlateportCity/scripts.pory"
	release
# 924 "data/maps/SlateportCity/scripts.pory"
	end
# 925 "data/maps/SlateportCity/scripts.pory"

# 926 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 927 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 928 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 929 "data/maps/SlateportCity/scripts.pory"
	end
# 930 "data/maps/SlateportCity/scripts.pory"

# 931 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 932 "data/maps/SlateportCity/scripts.pory"
	lockall
# 933 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 934 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 935 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 936 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 937 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 938 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 939 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 940 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 941 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 942 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 943 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 944 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 945 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 946 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 947 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 948 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 949 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 950 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 951 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 952 "data/maps/SlateportCity/scripts.pory"
	end
# 953 "data/maps/SlateportCity/scripts.pory"

# 954 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 955 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 956 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 957 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 958 "data/maps/SlateportCity/scripts.pory"
	step_end
# 959 "data/maps/SlateportCity/scripts.pory"

# 960 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 961 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 962 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 963 "data/maps/SlateportCity/scripts.pory"
	step_end
# 964 "data/maps/SlateportCity/scripts.pory"

# 965 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 966 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 967 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 968 "data/maps/SlateportCity/scripts.pory"
	step_end
# 969 "data/maps/SlateportCity/scripts.pory"

# 970 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 971 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 972 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 973 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 974 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 975 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 976 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 977 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 978 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 979 "data/maps/SlateportCity/scripts.pory"
	step_end
# 980 "data/maps/SlateportCity/scripts.pory"

# 981 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 982 "data/maps/SlateportCity/scripts.pory"
	lockall
# 983 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 984 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 985 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 986 "data/maps/SlateportCity/scripts.pory"
	end
# 987 "data/maps/SlateportCity/scripts.pory"

# 988 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 989 "data/maps/SlateportCity/scripts.pory"
	.string "¡Soy el Gurú Evolución!\p¡Compra lo que quieras!$"
# 990 "data/maps/SlateportCity/scripts.pory"

# 991 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 992 "data/maps/SlateportCity/scripts.pory"
	.string "¿Eh?\n"
# 993 "data/maps/SlateportCity/scripts.pory"
	.string "Tu {STR_VAR_1}…$"
# 994 "data/maps/SlateportCity/scripts.pory"

# 995 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 996 "data/maps/SlateportCity/scripts.pory"
	.string "¡Se esfuerza muchísimo!\p"
# 997 "data/maps/SlateportCity/scripts.pory"
	.string "Como recompensa, por favor acepta\n"
# 998 "data/maps/SlateportCity/scripts.pory"
	.string "Este Listón Esfuerzo.$"
# 999 "data/maps/SlateportCity/scripts.pory"

# 1000 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1001 "data/maps/SlateportCity/scripts.pory"
	.string "¡{PLAYER} tiene Listón Esfuerzo!$"
# 1002 "data/maps/SlateportCity/scripts.pory"

# 1003 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1004 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} se lo dio\na {STR_VAR_1}.$"
# 1005 "data/maps/SlateportCity/scripts.pory"

# 1006 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1007 "data/maps/SlateportCity/scripts.pory"
	.string "Deberías esforzarte más.\p"
# 1008 "data/maps/SlateportCity/scripts.pory"
	.string "Si lo haces, le daré algo a tu Pokémon.$"
# 1009 "data/maps/SlateportCity/scripts.pory"

# 1010 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "¡Ah! ¡Tu {STR_VAR_1}!\n¡Ese Listón Esfuerzo le queda bien!$"
# 1012 "data/maps/SlateportCity/scripts.pory"

# 1013 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1014 "data/maps/SlateportCity/scripts.pory"
	.string "Me pregunto si la luz del faro\nmolesta a los Pokémon salvajes.$"
# 1015 "data/maps/SlateportCity/scripts.pory"

# 1016 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1017 "data/maps/SlateportCity/scripts.pory"
	.string "¡Amo el mar!\pEl Equipo Aqua parece amarlo, también.\p¡Dicen que evitarán que el\ncambio climático lo arruine!$"
# 1018 "data/maps/SlateportCity/scripts.pory"

# 1019 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1020 "data/maps/SlateportCity/scripts.pory"
	.string "Donde hay agua limpia, bayas,\ny gente dispuesta a amar\ly esforzarse, un Pueblo nacerá.\pEsta Ciudad nació por el amor\nde la gente por el mar.$"
# 1021 "data/maps/SlateportCity/scripts.pory"

# 1022 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1023 "data/maps/SlateportCity/scripts.pory"
	.string "Comprar donde sientes\nel aroma del océano…\p"
# 1024 "data/maps/SlateportCity/scripts.pory"
	.string "¡Es algo tan romántico!$"
# 1025 "data/maps/SlateportCity/scripts.pory"

# 1026 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "¡Compraré peluchitos para mi mamá!$"
# 1028 "data/maps/SlateportCity/scripts.pory"

# 1029 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "¡Sí! ¡Pelearé en la\nTienda Batalla, también!\p"
# 1031 "data/maps/SlateportCity/scripts.pory"
	.string "¡Quizá gane algo bueno!$"
# 1032 "data/maps/SlateportCity/scripts.pory"

# 1033 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1034 "data/maps/SlateportCity/scripts.pory"
	.string "Amo.\nLas.\lBicicletas.$"
# 1035 "data/maps/SlateportCity/scripts.pory"

# 1036 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1037 "data/maps/SlateportCity/scripts.pory"
	.string "Stern es un hombre amado aquí.\pFinanció el museo, y es\nparte de un equipo de\lexploración marina.$"
# 1038 "data/maps/SlateportCity/scripts.pory"

# 1039 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "¿Esas personas de ahí?\n"
# 1041 "data/maps/SlateportCity/scripts.pory"
	.string "Son el Equipo Aqua, ¡Unas\lmaravillosas personas que ayudarán\lal océano a mantener su\lmajestuosidad!$"
# 1042 "data/maps/SlateportCity/scripts.pory"

# 1043 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1044 "data/maps/SlateportCity/scripts.pory"
	.string "Me encantaría unirme al Equpo Aqua.\p¡Parecen ser tan buena gente!$"
# 1045 "data/maps/SlateportCity/scripts.pory"

# 1046 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1047 "data/maps/SlateportCity/scripts.pory"
	.string "¡Hey, no empujes!\n"
# 1048 "data/maps/SlateportCity/scripts.pory"
	.string "¿No ves que es una fula?$"
# 1049 "data/maps/SlateportCity/scripts.pory"

# 1050 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1051 "data/maps/SlateportCity/scripts.pory"
	.string "El Equipo Aqua no roba\nni rompe leyes inconsecuentes.\pPor eso somos amados por aquí.$"
# 1052 "data/maps/SlateportCity/scripts.pory"

# 1053 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1054 "data/maps/SlateportCity/scripts.pory"
	.string "¡Nuestro Jefe es tan lindo y brillante!\p"
# 1055 "data/maps/SlateportCity/scripts.pory"
	.string "Nadie pensaría en reunirse\nen un Museo, ¡Sólo él!$"
# 1056 "data/maps/SlateportCity/scripts.pory"

# 1057 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1058 "data/maps/SlateportCity/scripts.pory"
	.string "Los discursos de\nnuestro Jefe…\p¡Son tan inspiracionales!\p¡Me hace querer ser como él!$"
# 1059 "data/maps/SlateportCity/scripts.pory"

# 1060 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1061 "data/maps/SlateportCity/scripts.pory"
	.string "Ser un Soldado Aqua es como un\nsueño hecho realidad.\p¡Siempre quise tener una familia!$"
# 1062 "data/maps/SlateportCity/scripts.pory"

# 1063 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1064 "data/maps/SlateportCity/scripts.pory"
	.string "¡Ey ey ey!\n"
# 1065 "data/maps/SlateportCity/scripts.pory"
	.string "¡No te coles en la fila!$"
# 1066 "data/maps/SlateportCity/scripts.pory"

# 1067 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "Esta fila tan larga…\p"
# 1069 "data/maps/SlateportCity/scripts.pory"
	.string "Me recuerda cuando hacía\nfilas para comprar juegos\lnuevos cuando era niña…$"
# 1070 "data/maps/SlateportCity/scripts.pory"

# 1071 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "¡Nuestro Jefe es genial!\p¡Hasta pagó nuestros boletos\npara no levantar sospechas!$"
# 1073 "data/maps/SlateportCity/scripts.pory"

# 1074 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1075 "data/maps/SlateportCity/scripts.pory"
	.string "¿Necesitabas algo, amiguit{OA}?$"
# 1076 "data/maps/SlateportCity/scripts.pory"

# 1077 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1078 "data/maps/SlateportCity/scripts.pory"
	.string "¡Te leeré el cartel si quieres!$"
# 1079 "data/maps/SlateportCity/scripts.pory"

# 1080 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1081 "data/maps/SlateportCity/scripts.pory"
	.string "A ver…\p"
# 1082 "data/maps/SlateportCity/scripts.pory"
	.string "Dice… “La vida oceánica es\ntan misteriosa como hermosa.”\p"
# 1083 "data/maps/SlateportCity/scripts.pory"
	.string "¡Denada, amiguit{OA}, vuelve\nsi necesitas algo más!$"
# 1084 "data/maps/SlateportCity/scripts.pory"

# 1085 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "Uggghh…\p"
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "Tuve que haber traído mi\ncelular para emular Pokémon…\p"
# 1088 "data/maps/SlateportCity/scripts.pory"
	.string "Uggghhh qué aburridooo…$"
# 1089 "data/maps/SlateportCity/scripts.pory"

# 1090 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "¡Nuestro Líder nos dijo que\niríamos a relajarnos a\lunas aguas termales después!\p"
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "¡No puedo esperar a ver al\nJefecito sin una camisa!\p¡Me sonrojo de sólo pensarlo!$"
# 1093 "data/maps/SlateportCity/scripts.pory"

# 1094 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "El océano es tan vasto…\p"
# 1096 "data/maps/SlateportCity/scripts.pory"
	.string "¿No es genial que será salvado?$"
# 1097 "data/maps/SlateportCity/scripts.pory"

# 1098 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1099 "data/maps/SlateportCity/scripts.pory"
	.string "Hay veces que pienso:\p¿Qué cosas no hemos descubierto\ndel océano?\p¿Cuántos Pokémon quedarán\npor encontrarse ahí?$"
# 1100 "data/maps/SlateportCity/scripts.pory"

# 1101 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "Debería haber traído a mi\nnovia a comprar conmigo,\l¡Le encantan los peluches!$"
# 1103 "data/maps/SlateportCity/scripts.pory"

# 1104 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1105 "data/maps/SlateportCity/scripts.pory"
	.string "Desde que la gente tiene\nsentido común, el CambiaMotes se quedó\lsin trabajo.\pMe pregunto qué hará ahora.$"
# 1106 "data/maps/SlateportCity/scripts.pory"

# 1107 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "Un Pokémon intercambiado\nconservará su apodo original.\pDespués de todo, es lo último\nque le queda de su\lantiguo mejor amigo.$"
# 1109 "data/maps/SlateportCity/scripts.pory"

# 1110 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1111 "data/maps/SlateportCity/scripts.pory"
	.string "¡Mi esposa y yo amamos Surfear!\p¡Ojalá hubiera un Modo Surf en\lla Tienda Batalla!$"
# 1112 "data/maps/SlateportCity/scripts.pory"

# 1113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "¿Una entrevista?\p¿Para Stern?$"
# 1115 "data/maps/SlateportCity/scripts.pory"

# 1116 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1117 "data/maps/SlateportCity/scripts.pory"
	.string "¡La entrevistadora es\ntan cool y linda!\p"
# 1118 "data/maps/SlateportCity/scripts.pory"
	.string "¡Quiero ser como ella al crecer!$"
# 1119 "data/maps/SlateportCity/scripts.pory"

# 1120 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1121 "data/maps/SlateportCity/scripts.pory"
	.string "¿Cuál será el nuevo invento de Stern?$"
# 1122 "data/maps/SlateportCity/scripts.pory"

# 1123 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1124 "data/maps/SlateportCity/scripts.pory"
	.string "¿Qué pasa aquí?\n¿Acaso el Capitán lo logró?$"
# 1125 "data/maps/SlateportCity/scripts.pory"

# 1126 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "¿Estoy en la Tele?$"
# 1128 "data/maps/SlateportCity/scripts.pory"

# 1129 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "¡El Capitán es una celebridad!$"
# 1131 "data/maps/SlateportCity/scripts.pory"

# 1132 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1133 "data/maps/SlateportCity/scripts.pory"
	.string "TY: ¡Explícate, Stern!\p¿Qué tienes que ver\ncon el Equipo Aqua?$"
# 1134 "data/maps/SlateportCity/scripts.pory"

# 1135 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "Gabby: ¿Qué tiene para decir\nsobre el Equipo Aqua?$"
# 1137 "data/maps/SlateportCity/scripts.pory"

# 1138 "data/maps/SlateportCity/scripts.pory"
	return
# 1139 "data/maps/SlateportCity/scripts.pory"

# 1140 "data/maps/SlateportCity/scripts.pory"

# 1141 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_0:
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "Y bueno, eso es todo lo que puedo decir\n"
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "respecto al Submarino.$"
# 1144 "data/maps/SlateportCity/scripts.pory"

# 1145 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_1:
# 1146 "data/maps/SlateportCity/scripts.pory"
	.string "¡Muchísimas gracias!\n"
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "Esperamos poder volver a trabajar con\l"
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "usted.$"
# 1149 "data/maps/SlateportCity/scripts.pory"

# 1150 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_2:
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "¡No hay problema!$"
# 1152 "data/maps/SlateportCity/scripts.pory"

# 1153 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_3:
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "E-eh, Capitán, quería preguntarle algo\n"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "también, s-si no le molesta.$"
# 1156 "data/maps/SlateportCity/scripts.pory"

# 1157 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_4:
# 1158 "data/maps/SlateportCity/scripts.pory"
	.string "¿S-será... que son ciertos los rumores?\n"
# 1159 "data/maps/SlateportCity/scripts.pory"
	.string "Los rumores que afirman que usted ha\l"
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "{COLOR RED}estado ayudando financieramente al\l"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "Equipo Aqua{COLOR DARK_GRAY}?$"
# 1162 "data/maps/SlateportCity/scripts.pory"

# 1163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_5:
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "¿Qué?\p"
# 1165 "data/maps/SlateportCity/scripts.pory"
	.string "No conocía esos rumores, pero no, no\n"
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "son ciertos. Quien sea que lo piense en\l"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "serio se está engañando.$"
# 1168 "data/maps/SlateportCity/scripts.pory"

# 1169 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_6:
# 1170 "data/maps/SlateportCity/scripts.pory"
	.string "Comprendo... ¡G-gracias igualmente,\n"
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "Capitán!$"
# 1172 "data/maps/SlateportCity/scripts.pory"

# 1173 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_7:
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "Denada, solo hago mi trabajo.$"
# 1175 "data/maps/SlateportCity/scripts.pory"

# 1176 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Text_8:
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "... {COLOR LIGHT_GRAY SHADOW WHITE}Cuando quieran{COLOR DARK_GRAY SHADOW LIGHT_GRAY}...$"
# 1178 "data/maps/SlateportCity/scripts.pory"

# 1179 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "¡Hola, maravillosa gente de Ciudad Slateport!\n"
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "¡Les habla el Equipo Aqua!\l"
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "Gracias a toda su colaboración, seremos\l"
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "ahora capaces de tomar control de su\l"
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "Submarino. ¡Les estamos agradecidos!$"
# 1185 "data/maps/SlateportCity/scripts.pory"

# 1186 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "Parece venir desde dentro... ¡Hay que\n"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "hacer algo!$"
# 1189 "data/maps/SlateportCity/scripts.pory"

# 1190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "...{COLOR LIGHT_GRAY SHADOW WHITE}Eso es{COLOR DARK_GRAY SHADOW LIGHT_GRAY}...$"
# 1192 "data/maps/SlateportCity/scripts.pory"

# 1193 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "¡{PLAYER}{KUN}!\n"
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "¡Ayúdame!$"
# 1196 "data/maps/SlateportCity/scripts.pory"

# 1197 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1200 "data/maps/SlateportCity/scripts.pory"

# 1201 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1205 "data/maps/SlateportCity/scripts.pory"

# 1206 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1211 "data/maps/SlateportCity/scripts.pory"

# 1212 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1217 "data/maps/SlateportCity/scripts.pory"

# 1218 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1221 "data/maps/SlateportCity/scripts.pory"

# 1222 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1226 "data/maps/SlateportCity/scripts.pory"

# 1227 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1231 "data/maps/SlateportCity/scripts.pory"

# 1232 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1235 "data/maps/SlateportCity/scripts.pory"

# 1236 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1242 "data/maps/SlateportCity/scripts.pory"

# 1243 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1247 "data/maps/SlateportCity/scripts.pory"

# 1248 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1251 "data/maps/SlateportCity/scripts.pory"

# 1252 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1266 "data/maps/SlateportCity/scripts.pory"

# 1267 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1277 "data/maps/SlateportCity/scripts.pory"

# 1278 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1279 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1281 "data/maps/SlateportCity/scripts.pory"

# 1282 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1284 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1285 "data/maps/SlateportCity/scripts.pory"

# 1286 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1289 "data/maps/SlateportCity/scripts.pory"

# 1290 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1293 "data/maps/SlateportCity/scripts.pory"

# 1294 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1296 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1299 "data/maps/SlateportCity/scripts.pory"

# 1300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1303 "data/maps/SlateportCity/scripts.pory"

# 1304 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1309 "data/maps/SlateportCity/scripts.pory"

# 1310 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "Mhhh. Te me haces familiar…\p"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "¿Me he presentado alguna vez?\n"
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "Si no, name's Scott.\p"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "Acabo de ver al Equipo Aqua\n"
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "escaparse como unos cobardes.\p"
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "Adivinaré,--¿Los asustaste?$"
# 1317 "data/maps/SlateportCity/scripts.pory"

# 1318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "Mmmhh…\n"
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "{COLOR BLUE}(So… This Trainer…){COLOR DARK_GRAY}$"
# 1321 "data/maps/SlateportCity/scripts.pory"

# 1322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "¡Okay! ¡Veo potencial en tí,\n"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "pareces un{A} Entrenador{A} fuerte.\p"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "Espero con ansias ver en qué tipo\n"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "de Entrenador{A} te conviertes.$"
# 1327 "data/maps/SlateportCity/scripts.pory"

# 1328 "data/maps/SlateportCity/scripts.pory"

# 1329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "¡See ya later, {PLAYER}, espero que\n"
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "en nuestro próximo encuentro, seas\l"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "mucho más fuerte!\p"
# 1333 "data/maps/SlateportCity/scripts.pory"
	.string "¡Desarrolla tu {COLOR RED}talento{COLOR DARK_GRAY} al máximo!$"
# 1334 "data/maps/SlateportCity/scripts.pory"

# 1335 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "¡Oh, hey!\n"
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "¡{PLAYER}{KUN}!\p"
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "So, {PLAYER}{KUN}, adivinaré--\n"
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "¿Tomarás el desafío de la Tienda de Batalla?\p"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "¡Yeah! ¡Qué buena idea!\n"
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "¡That's a really great idea!\p"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "Después de todo, es una oportunidad\n"
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "única para cualquier Entrenador!\p"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "¡Dale con todo, {PLAYER}!$"
