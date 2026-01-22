SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 4 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 5 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setspeaker Stern
# 6 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BeReady
# 7 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 10 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts
# 11 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_BALL_TRADE
# 12 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 13 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 16 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
# 17 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 18 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 19 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
# 20 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 21 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 22 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 23 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 24 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
# 25 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1:
# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setspeaker Aqua
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts
# 31 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_ne SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_6:
# 35 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setspeaker Stern
# 36 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou
# 37 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setspeaker Aqua
# 38 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 41 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 42 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_10
# 47 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_11
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9:
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setspeaker Aqua
# 53 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setspeaker Aqua
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	getpartysize
# 0 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_gt SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_15
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis2
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_14:
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2
	return

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2:
# 27 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7:
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_6

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_10:
# 45 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_11:
# 49 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_15:
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_double TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat, SlateportCity_OceanicMuseum_2F_Text_WeCantDoThat, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_14


SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2::
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, Common_Movement_WalkInPlaceFasterDown
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setspeaker Aqua
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_set FLAG_TEMP_1, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_2
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_1:
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setspeaker Unknown
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setspeaker Unknown
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setspeaker Archie
# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning2
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, Common_Movement_FaceAwayPlayer
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setspeaker Archie
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWereLeaving
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_EVIL_TEAM_SIDE, 3
	goto_if_gt SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_6
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_5:
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 145 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
	end

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_2:
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WeCantBeatUp
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_1

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_6:
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setspeaker Player
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ShouldI
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern2_5


# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_MapScripts::
# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.byte 0
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 166 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN, Common_Movement_WalkInPlaceFasterLeft
# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 178 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 180 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 183 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 195 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 199 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 200 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 201 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 202 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 203 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 206 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 208 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 209 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 214 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 215 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 217 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 218 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 220 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 221 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 222 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 225 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 226 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 229 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 230 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 240 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 245 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 246 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 252 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 253 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 260 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 261 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 267 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 268 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 269 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 270 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 271 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 272 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 279 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_up
# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 282 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 283 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 284 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 286 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 287 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 288 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 289 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 292 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 293 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 294 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 296 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 297 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 299 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 301 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 302 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 304 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 308 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 309 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 311 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 312 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 313 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 314 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 316 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 317 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 318 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 319 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 323 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 324 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 325 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 326 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 327 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	checkitem ITEM_TM56
# 328 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2_Done
# 329 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 330 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	giveitem ITEM_TM56
# 331 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum2
# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	releaseall
# 333 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 334 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2_Done::
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum2
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	releaseall
# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 343 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 344 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 345 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 346 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 347 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 348 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 349 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 350 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
# 351 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hace mucho, se creó en el medio del mar\n"
# 352 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "una fábrica flotante que dio trabajo a\l"
# 353 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "más de cien personas, sin embargo…\p"
# 354 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Cerró, y ahora es hogar de muchos\n"
# 355 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon.$"
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 358 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
# 359 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Amo este museo!\p"
# 360 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A veces me pregunto si recibirán\n"
# 361 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "donaciones, tengo muchos objetos\l"
# 362 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "marinos interesantes que encontré\l"
# 363 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "buceando.\p"
# 364 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Ah, toma este por escucharme!$"
# 365 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 366 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum2:
# 367 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "No tengo mucha idea de que es una...\n"
# 368 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Emeté?\p"
# 369 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Pero seguro que te sirve de algo!$"
# 370 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 371 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
# 372 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Qué lindo el submarino!\p"
# 373 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Me pregunto cómo lo convertirán en\n"
# 374 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "bebida!$"
# 375 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 376 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 377 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
# 378 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MUESTRA 1,” dice la\n"
# 379 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "etiqueta.\p"
# 380 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Contiene una muestra de agua de\n"
# 381 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "océano, y explica porqué algunos\l"
# 382 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon viven en agua salada, y otros\l"
# 383 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "en dulce.$"
# 384 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 385 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
# 386 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MUESTRA 2,” dice la\n"
# 387 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "etiqueta.\p"
# 388 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Contiene una muestra de agua, también,\n"
# 389 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "pero explica que el agua tiene millones\l"
# 390 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "de pequeñísimos Pokémon llamados\l"
# 391 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“plankton,” que sirven de comida para\l"
# 392 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon marinos.\p"
# 393 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "También hay una etiqueta que dice:\p"
# 394 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Evelyn, deja de tomarte el agua de\n"
# 395 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "plankton, te vas a enfermar,” seguido\l"
# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "de una cara triste dibujada.$"
# 397 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 398 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Una bola de goma que se expande y\n"
# 400 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "contrae.\p"
# 401 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“En el mar, el peso del agua crea\n"
# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "presión.”\p"
# 403 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Mientras más profundo se va, más\n"
# 404 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "fuerte es dicha presión.”\p"
# 405 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“En el fondo del mar, hay Pokémon que ni\n"
# 406 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "huesos tienen, o que poseen\l"
# 407 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "exoesqueletos. Esto es para adaptarse\l"
# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "a la increíblemente fuerte presión del\l"
# 409 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "fondo marino.\p"
# 410 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Sólo se conoce el 1% de dicho fondo.”$"
# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel:
# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MAQUETA DE HOENN”\p"
# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Es una maquetita de Hoenn.\p"
# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Dónde estará Littleroot?$"
# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Parece ser un simulador de corriente\n"
# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "marina.\p"
# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Al museo le hacen falta figuritas de\n"
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon raros del fondo del mar.$"
# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Parece ser un simulador de corriente\n"
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "marina.\p"
# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Qué bueno que el museo no tiene\nfiguritas de Tentacool.$"
# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“FERRY SS MAREA”\p"
# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Una maqueta del Ferry que construyó\n"
# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "el Capitán Stern.$"
# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“RÉPLICA DE SUBMARINO”\p"
# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Es un submarino usado para\n"
# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "expediciones en el fondo del mar.$"
# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“CÁMARA DE ESCAPE”\p"
# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Sirve para escapar de una nave o\n"
# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "submarino en situación crítica.\p"
# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Unas escrituras parecen haber sido\n"
# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "hechas en la cámara, pero están\l"
# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "borrosas:\p"
# 446 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A D-v-n le i-p-rt- m-s -- d-n--o q--\n"
# 447 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "n---t-a s-g---d-d.\p"
# 448 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "--s cá---as -- e----e ---n m-ra----e\n"
# 449 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "e-té-i--s.$"
# 450 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 451 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
# 452 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SS ANNE”\p"
# 453 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Una nave que viaja de Kanto a\n"
# 454 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "otras regiones cada año.\p"
# 455 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hay algo escrito en fibrón:\p"
# 456 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "No regresará jamás... Firma, Joven Chano\p"
# 457 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡JA, SE LA CREYERON!\p"
# 458 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "................\p"
# 459 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Maldito Joven Chano...$"
