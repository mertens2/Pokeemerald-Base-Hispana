# 1 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 2 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
@ .set LOCALID_CAPT_STERN, 1
# 3 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
@ .set LOCALID_ARCHIE, 2
# 4 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
@ .set LOCALID_GRUNT_1, 3
# 5 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
@ .set LOCALID_GRUNT_2, 4
# 6 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 7 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_MapScripts::
# 8 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.byte 0
# 9 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 10 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 11 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 12 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 13 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Stern
# 14 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
# 15 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 16 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 17 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_BALL_TRADE
# 18 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 19 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 20 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 21 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 22 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_GRUNT_1
# 23 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 24 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_GRUNT_2
# 26 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 27 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 28 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 29 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 30 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 31 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 32 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 33 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Aqua
# 34 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
# 35 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
# 36 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Stern
# 37 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
# 38 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Aqua
# 39 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
# 40 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 41 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 42 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 43 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 44 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth
# 45 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest
# 46 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat
# 47 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Aqua
# 48 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
# 49 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 50 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 51 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 52 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 53 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 54 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 55 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Aqua
# 56 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis, MSGBOX_DEFAULT
# 57 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat
# 58 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 59 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterDown
# 61 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 62 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Aqua
# 64 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
# 65 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 66 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 67 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 68 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_ARCHIE
# 69 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 70 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 71 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Unknown
# 73 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 74 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 75 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 76 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 77 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Unknown
# 79 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
# 80 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Archie
# 81 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning2, MSGBOX_DEFAULT
# 82 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 83 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 84 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceAwayPlayer
# 85 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 86 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	namebox Archie
# 87 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWereLeaving, MSGBOX_DEFAULT
# 88 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 89 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	hidenamebox
# 90 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 91 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 92 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_ARCHIE
# 94 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 95 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 96 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 97 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 98 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 99 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 100 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
# 102 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 103 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 104 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
# 105 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 106 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 107 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 108 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 109 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 110 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 111 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 112 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
# 113 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 114 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 115 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 116 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 117 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 118 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 119 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 120 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 121 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 122 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
# 123 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 124 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 125 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 126 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 127 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 128 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 129 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 130 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 131 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterLeft
# 132 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 133 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 134 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 135 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 136 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 137 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 138 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 139 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 140 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 141 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 142 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 143 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 144 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 145 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 146 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 147 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 148 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 149 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 150 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 151 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 152 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 153 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 154 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 155 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 156 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 157 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 158 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 159 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 160 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 161 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 162 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 163 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 164 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 165 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 166 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 167 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 168 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 169 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 170 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 171 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 172 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 173 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 174 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 175 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 176 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 177 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 178 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 179 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 180 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 181 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 182 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 183 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 184 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 185 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 186 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 187 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 188 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 189 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 190 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 191 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 192 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 193 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 194 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 195 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 196 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 197 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 198 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
# 199 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 200 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 201 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 202 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 203 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 204 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 205 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 206 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 207 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 208 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 209 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 210 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 211 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 212 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 213 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
# 214 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 215 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 216 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 217 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 218 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 219 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 220 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 221 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 222 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 223 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 224 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 225 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 226 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 227 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 228 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 229 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 230 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 231 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 232 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 233 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 234 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 235 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 236 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 237 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 238 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 239 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 240 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 241 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 242 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_up
# 243 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 244 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 245 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 246 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 247 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 248 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 249 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 250 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 251 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 252 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 253 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 254 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 255 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 256 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 257 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 258 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 259 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 260 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 261 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 262 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 263 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 264 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 265 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 266 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 267 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 268 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 269 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 270 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 271 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 272 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 273 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 274 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 275 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 276 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 277 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 278 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 279 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 280 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 281 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 282 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 283 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 284 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 285 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 286 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 287 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 288 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 289 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 290 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	checkitem ITEM_TM56
# 291 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2_Done
# 292 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 293 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	giveitem ITEM_TM56
# 294 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum2
# 295 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	releaseall
# 296 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 297 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 298 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2_Done::
# 299 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum2
# 300 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	releaseall
# 301 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 302 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 303 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 304 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 305 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 306 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 307 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 308 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 309 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 310 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 311 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 312 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 313 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
# 314 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, ¡Pero si es {PLAYER}!\n"
# 315 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Traes las {COLOR BLUE}Partes{COLOR DARK_GRAY} que pedí?\p"
# 316 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ahora te recomendaría que\nte fueras inmediatamente.$"
# 317 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 318 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
# 319 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Alto ahí, señores!\n"
# 320 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Nos llevaremos esas Partes!$"
# 321 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 322 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
# 323 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Oh! ¡Eh! ¿Qué?\n"
# 324 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Q-quiénes son?$"
# 325 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 326 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
# 327 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Somos el Equipo Aqua!\p"
# 328 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Y nuestro Jefecito nos envió\na buscar esas Partes!$"
# 329 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 330 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
# 331 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Aaaahh!\n"
# 332 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Me ganó un{A} niñ{OA}!$"
# 333 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 334 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
# 335 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Porqué tenía que pasar esto…?\n"
# 336 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "El Jefecito no estará complacido…$"
# 337 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 338 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
# 339 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Pedazo de inútil!\n"
# 340 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Déjame que yo me encargo!$"
# 341 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 342 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
# 343 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡¿QUÉ?!\n"
# 344 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡También perdí!$"
# 345 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 346 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
# 347 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Ahora qué? Se supone que las Partes\n"
# 348 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "son nuestras, ¡Esto es injusto!$"
# 349 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 350 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
# 351 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Sabía que alguien terminaría\nentrometiéndose en nuestros planes,\ly por ende, vine aquí.\p¡Pero no me imaginé que\nsería un{A} niñ{OA}!$"
# 352 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 353 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
# 354 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Somos el {COLOR BLUE}Equipo Aqua{COLOR DARK_GRAY},\ny vamos a cambiar el mundo!\p"
# 355 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Y yo, {COLOR BLUE}soy el Líder del Equipo{COLOR DARK_GRAY},\n"
# 356 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{COLOR BLUE}el Grandioso Archie{COLOR DARK_GRAY}!$"
# 357 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning2:
# 358 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "La gente, y los Pokémon…\n¡Merecen un mundo mejor!\p¡Pero nosotros, los humanos,\nhemos contaminado el mundo!\p"
# 359 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\p"
# 360 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "En pocos años, llegaremos {COLOR RED}a un punto\nsin retorno{COLOR DARK_GRAY}, uno donde nuestras acciones\ldejarán este mundo inhabitable.\p"
# 361 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "El Equipo Aqua, mi maravillosa\norganización… ¡Nos salvará a todos!\p"
# 362 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Y si te metes en mi camino\nde nuevo…\p¡Te destruiré por completo!$"
# 363 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWereLeaving:
# 364 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Ahora, ustedes dos!\n¡Nos vamos!\p"
# 365 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Díganle a todos en el museo que nos\nvamos a las aguas termales, lo merecen.\p"
# 366 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Tengo mis métodos para\nobtener esas {COLOR BLUE}Partes{COLOR DARK_GRAY}.$"
# 367 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 368 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
# 369 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Eh… Bueno…\n"
# 370 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{PLAYER}… Ese {COLOR BLUE}Equipo Aqua{COLOR DARK_GRAY}… …\p"
# 371 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Es horrible!\n"
# 372 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Entrar a la fuerza y atacar a un{A} niñ{OA}!\p"
# 373 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "No puedo creer que esta ciudad esté\n"
# 374 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "tan de acuerdo con ese grupo de\l"
# 375 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "criminales intentando “ayudar,”\l"
# 376 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Cuando en verdad son un peligro!\pPero bueno, ¡Me llevaré las Partes,\ngracias!$"
# 377 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 378 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
# 379 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Estas Partes son necesarias para la\n"
# 380 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "construcción de un {COLOR BLUE}submarino{COLOR DARK_GRAY} que\l"
# 381 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "estoy construyendo…$"
# 382 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 383 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
# 384 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hace mucho, se creó en el medio del mar\n"
# 385 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "una fábrica flotante que dio trabajo a\l"
# 386 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "más de cien personas, sin embargo…\p"
# 387 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Cerró, y ahora es hogar de muchos\n"
# 388 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon.$"
# 389 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 390 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 391 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
# 392 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Amo este museo!\p"
# 393 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A veces me pregunto si recibirán\n"
# 394 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "donaciones, tengo muchos objetos\l"
# 395 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "marinos interesantes que encontré\l"
# 396 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "buceando.\p"
# 397 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Ah, toma este por escucharme!$"
# 398 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 399 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum2:
# 400 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "No tengo mucha idea de que es una...\n"
# 401 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Emeté?\p"
# 402 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Pero seguro que te sirve de algo!$"
# 403 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 404 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
# 405 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Qué lindo el submarino!\p"
# 406 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Me pregunto cómo lo convertirán en\n"
# 407 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "bebida!$"
# 408 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 409 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 410 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
# 411 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MUESTRA 1,” dice la\n"
# 412 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "etiqueta.\p"
# 413 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Contiene una muestra de agua de\n"
# 414 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "océano, y explica porqué algunos\l"
# 415 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon viven en agua salada, y otros\l"
# 416 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "en dulce.$"
# 417 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 418 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
# 419 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MUESTRA 2,” dice la\n"
# 420 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "etiqueta.\p"
# 421 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Contiene una muestra de agua, también,\n"
# 422 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "pero explica que el agua tiene millones\l"
# 423 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "de pequeñísimos Pokémon llamados\l"
# 424 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“plankton,” que sirven de comida para\l"
# 425 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon marinos.\p"
# 426 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "También hay una etiqueta que dice:\p"
# 427 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Evelyn, deja de tomarte el agua de\n"
# 428 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "plankton, te vas a enfermar,” seguido\l"
# 429 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "de una cara triste dibujada.$"
# 430 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 431 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
# 432 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Una bola de goma que se expande y\n"
# 433 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "contrae.\p"
# 434 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“En el mar, el peso del agua crea\n"
# 435 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "presión.”\p"
# 436 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Mientras más profundo se va, más\n"
# 437 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "fuerte es dicha presión.”\p"
# 438 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“En el fondo del mar, hay Pokémon que ni\n"
# 439 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "huesos tienen, o que poseen\l"
# 440 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "exoesqueletos. Esto es para adaptarse\l"
# 441 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "a la increíblemente fuerte presión del\l"
# 442 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "fondo marino.\p"
# 443 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Sólo se conoce el 1% de dicho fondo.”$"
# 444 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 445 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 446 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel:
# 447 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MAQUETA DE HOENN”\p"
# 448 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Es una maquetita de Hoenn.\p"
# 449 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Dónde estará Littleroot?$"
# 450 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 451 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
# 452 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Parece ser un simulador de corriente\n"
# 453 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "marina.\p"
# 454 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Al museo le hacen falta figuritas de\n"
# 455 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon raros del fondo del mar.$"
# 456 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 457 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
# 458 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Parece ser un simulador de corriente\n"
# 459 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "marina.\p"
# 460 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Qué bueno que el museo no tiene\nfiguritas de Tentacool.$"
# 461 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 462 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
# 463 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“FERRY SS MAREA”\p"
# 464 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Una maqueta del Ferry que construyó\n"
# 465 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "el Capitán Stern.$"
# 466 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 467 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
# 468 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“RÉPLICA DE SUBMARINO”\p"
# 469 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Es un submarino usado para\n"
# 470 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "expediciones en el fondo del mar.$"
# 471 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 472 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
# 473 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“CÁMARA DE ESCAPE”\p"
# 474 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Sirve para escapar de una nave o\n"
# 475 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "submarino en situación crítica.\p"
# 476 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Unas escrituras parecen haber sido\n"
# 477 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "hechas en la cámara, pero están\l"
# 478 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "borrosas:\p"
# 479 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A D-v-n le i-p-rt- m-s -- d-n--o q--\n"
# 480 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "n---t-a s-g---d-d.\p"
# 481 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "--s cá---as -- e----e ---n m-ra----e\n"
# 482 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "e-té-i--s.$"
# 483 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 484 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
# 485 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SS ANNE”\p"
# 486 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Una nave que viaja de Kanto a\n"
# 487 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "otras regiones cada año.\p"
# 488 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hay algo escrito en fibrón:\p"
# 489 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "No regresará jamás... Firma, Joven Chano\p"
# 490 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡JA, SE LA CREYERON!\p"
# 491 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "................\p"
# 492 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Maldito Joven Chano...$"
