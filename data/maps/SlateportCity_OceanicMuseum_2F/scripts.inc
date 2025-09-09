# 1 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 2 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_MapScripts::
# 3 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 5 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 6 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 10 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 11 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
# 12 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 13 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 16 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 17 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 18 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 19 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 20 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 21 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 22 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
# 23 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
# 24 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
# 25 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
# 26 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 27 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest
# 31 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 34 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 35 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 37 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 38 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis, MSGBOX_DEFAULT
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat
# 40 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 41 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 42 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, Common_Movement_WalkInPlaceFasterDown
# 43 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 44 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 45 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
# 46 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 47 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 48 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
# 49 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 50 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 53 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	callnative UpdateFollowingPokemon
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 81 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 88 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN, Common_Movement_WalkInPlaceFasterLeft
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 145 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 147 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 149 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 150 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 166 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 178 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 180 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
# 183 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 195 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 199 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 200 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 201 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 202 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 203 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 206 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 208 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 209 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_up
# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 214 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 215 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 217 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 218 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 220 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 221 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 222 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 225 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 226 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 229 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 230 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 240 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 245 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 246 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 252 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 253 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 260 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 261 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 267 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 268 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 269 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 270 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 271 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 272 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Si estás buscando a un tal BABOR,\n"
# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ése soy yo.\p"
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Anda! Ésas deben de ser las piezas\n"
# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "que pedí al SR. PEÑAS de DEVON.\p"
# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Gracias! ¡Qué bien me vienen!\n"
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ya puedo preparar la expedición.$"
# 279 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Je, je, je! ¡Alto ahí!\n"
# 282 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Esas piezas son nuestras!$"
# 283 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 284 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAP. BABOR: ¿Pe-pero…?\n"
# 286 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Quiénes sois vosotros?$"
# 287 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 288 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
# 289 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Somos el EQUIPO AQUA!\p"
# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Nuestro JEFE quiere esas piezas!\n"
# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Cierra el pico y suéltalas!$"
# 292 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 293 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
# 294 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Aaaah!\n"
# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Me ha ganado una criatura!$"
# 296 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 297 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ay, ay, ay, qué desastre…\n"
# 299 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "El JEFE se va a mosquear…$"
# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 301 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
# 302 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Apártate, llorica!\n"
# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Yo me ocupo de todo!$"
# 304 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡¿Cómo puede ser?!\n"
# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Yo también he perdido!$"
# 308 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 309 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Y ahora qué? ¡Si no conseguimos\n"
# 311 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "las piezas, estamos listos!\p"
# 312 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Aaaah, nunca pensé que alguien\n"
# 313 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "mangonearía nuestros planes\l"
# 314 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "de mangoneo!$"
# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 316 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
# 317 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Vine a ver por qué tardabais tanto\n"
# 318 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "en robar unas piezas de nada\l"
# 319 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "y me encuentro con esto.\p"
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Ahora os dejáis vencer por párvulos?$"
# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
# 323 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Somos el EQUIPO AQUA\n"
# 324 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "y nos encanta el mar!\p"
# 325 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Y yo soy AQUILES, el líder\n"
# 326 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "del EQUIPO AQUA!\p"
# 327 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A ver, ¿por qué te inmiscuyes\n"
# 328 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "en nuestros nobles asuntos?\p"
# 329 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡No! ¡No puede ser!\n"
# 330 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿No eres del EQUIPO MAGMA?\p"
# 331 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Un momento, hay algo que no va.\n"
# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Tu ropa no es como debería ser…\p"
# 333 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "No sé, no sé…\p"
# 334 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "En fin, has de saber que los POKéMON, la\n"
# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "gente…, toda la vida depende del mar.\p"
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Por esta razón, el EQUIPO AQUA se\n"
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ha consagrado a la expansión del mar.\p"
# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿No estás de acuerdo?\n"
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Si nuestra labor es encomiable!\p"
# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, claro, es natural…\n"
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Todavía eres muy joven para\l"
# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "entender tan loable objetivo.\p"
# 343 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pero, si te vuelves a oponer a\n"
# 344 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "nuestros designios, ¡tendrás que\l"
# 345 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "sufrir las consecuencias!\p"
# 346 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡No digas que no te lo he\n"
# 347 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "advertido! \p"
# 348 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Que no se te olvide!$"
# 349 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 350 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
# 351 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAP. BABOR: Eres…\n"
# 352 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, sí, eres {PLAYER}{KUN}…\p"
# 353 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Uf, qué situación tan violenta…\n"
# 354 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Gracias por salvarnos!\p"
# 355 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, sí, casi me olvido de que además\n"
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "has traído las piezas de DEVON.$"
# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 358 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
# 359 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "CAP. BABOR: ¡Pues adelante!\n"
# 360 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡No hay tiempo que perder!\p"
# 361 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Tenemos que zarpar lo antes posible\n"
# 362 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "para llevar a cabo nuestra expedición\l"
# 363 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "al fondo oceánico.\p"
# 364 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Gracias y discúlpame, pero es que\n"
# 365 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "tengo cosas que hacer…\p"
# 366 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Ahora bien, tú puedes darte todas\n"
# 367 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "las vueltas que quieras por aquí\l"
# 368 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "y curiosear cuanto te apetezca!$"
# 369 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 370 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
# 371 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "He visto un modelo de barco aquí.\p"
# 372 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Me ha recordado a la NAO ABANDONADA\n"
# 373 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "que hay cerca de PUEBLO AZULIZA.$"
# 374 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 375 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
# 376 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Ni se te ocurra correr\n"
# 377 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "por el MUSEO!$"
# 378 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 379 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
# 380 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Guau, este submarino es impresionante!\n"
# 381 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¡Yo me quiero montar!$"
# 382 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 383 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
# 384 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "La etiqueta dice: “MUESTRA de CALIDAD\n"
# 385 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "de AGUA 1”.\p"
# 386 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Todos los mares se comunican, pero\n"
# 387 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "el agua parece diferente en cada zona.$"
# 388 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 389 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
# 390 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "La etiqueta dice: “MUESTRA de CALIDAD\n"
# 391 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "de AGUA 2”.\p"
# 392 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Es posible que la salinidad del agua sea\n"
# 393 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "diferente de un mar a otro…$"
# 394 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 395 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Una bola de goma se hincha y deshincha.\p"
# 397 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“En el mar, el mismo peso del agua\n"
# 398 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ejerce presión.\p"
# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "En aguas poco profundas, la presión\n"
# 400 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "no es tan fuerte.\p"
# 401 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pero en aguas profundas, la presión\n"
# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "puede llegar a ser de decenas de miles\l"
# 403 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "de toneladas en una pequeña zona.”$"
# 404 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 405 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel:
# 406 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MODELO de la REGIÓN de HOENN”\p"
# 407 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Es un diorama en miniatura\n"
# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "de la región de HOENN.\p"
# 409 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "¿Dónde está VILLA RAÍZ aquí?$"
# 410 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Es una exposición sobre las corrientes\n"
# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "marinas.\p"
# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Cerca del fondo del mar, el agua\n"
# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "fluye porque hay diferencias de\l"
# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "temperatura y salinidad.”$"
# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Es una exposición sobre las corrientes\n"
# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "marinas.\p"
# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Cerca de la superficie, el agua\n"
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "fluye debido a las corrientes que\l"
# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "provoca el viento.”$"
# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "EL FERRY S.S. MAREA\p"
# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Una réplica a escala de la nave que se\n"
# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "está construyendo en los ASTILLEROS\l"
# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "BABOR.”$"
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "SUBMARINO EXPLORADOR 1\p"
# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Una réplica del modernísimo submarino\n"
# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "de exploración del fondo oceánico.”$"
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "VEHÍCULO SUMERGIBLE\p"
# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Una réplica de un vehículo de\n"
# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "exploración del fondo oceánico\l"
# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "compacto y no tripulado.”$"
# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "S.S. ANNE\p"
# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Una réplica de un transatlántico de\n"
# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "lujo que navega por todo el mundo.”$"
