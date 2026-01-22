MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setspeaker Unknown
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_AndThatsWhy
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setspeaker Unknown
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_Understood
# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setspeaker Player
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_FamiliarVoice
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setspeaker Magma
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PlayerRescue
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setspeaker MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ThisIsAllIHave
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_PlayerWhatDoIDo
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	dynmultichoice 25, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setspeaker Player
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_PlayerRightJustWatch
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1:
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setspeaker Magma
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5:
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setspeaker Unknown
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setspeaker Magma
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MagmaConfusion
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_9
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	dynmultichoice 25, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_8:
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_12:
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setspeaker Aqua
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_GotCarriedAway
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 7
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 8
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject 9
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieArrive
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setspeaker Magma
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 6, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 5
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 6
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setspeaker Archie
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_22
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_20:
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_unset FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_19
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_18:
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieNeverHelped
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_15:
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterLeft
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 7, MeteorFalls_1F_1R_Movement_ArchieExit
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 8, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 9, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 7
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 8
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 9
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 10
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_MET_PROF_COZMO
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2:
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addvar VAR_TEAM_AQUA_SIDE, 1
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_PlayerRightHelp
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6:
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_3, MeteorFalls_1F_1R_Text_WhatIsThisChild
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setspeaker Magma
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatIsThisYOU
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ShutUp
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_9:
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	dynmultichoice 25, 9, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_8

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13:
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	giveitem ITEM_METEORITE
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_12

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_16:
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieHelpedBothTimes
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_15

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_17:
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieHelpedBeforeNotNow
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_15

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_19:
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_TEAM_AQUA_SIDE, 1
	goto_if_ge MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_17
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_18

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_22:
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_TEAM_AQUA_SIDE, 1
	goto_if_ge MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_16
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_20


MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_ProfCozmo_2
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo
MeteorFalls_1F_1R_EventScript_ProfCozmo_1:
	checkitem ITEM_METEORITE
# 0 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MeteorFalls_1F_1R_EventScript_ProfCozmo_6
MeteorFalls_1F_1R_EventScript_ProfCozmo_5:
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end

MeteorFalls_1F_1R_EventScript_ProfCozmo_2:
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney
	goto MeteorFalls_1F_1R_EventScript_ProfCozmo_1

MeteorFalls_1F_1R_EventScript_ProfCozmo_6:
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM
	giveitem ITEM_TM60
# 0 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_1F_1R_EventScript_ProfCozmo_9
MeteorFalls_1F_1R_EventScript_ProfCozmo_8:
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_0x8004, ITEM_METEORITE
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch
	goto MeteorFalls_1F_1R_EventScript_ProfCozmo_5

MeteorFalls_1F_1R_EventScript_ProfCozmo_9:
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call Common_EventScript_ShowBagIsFull
	goto MeteorFalls_1F_1R_EventScript_ProfCozmo_8


# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PlayerRescue:
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_left
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	player_run_down
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
	step_end

# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 5
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 6
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_ARCHIE, 7
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_1, 8
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_2, 9
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad:
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 319 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 320 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 322 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 324 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 327 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 328 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 333 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 335 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 336 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 337 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 338 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 339 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 340 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 341 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 342 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 343 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 344 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 345 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 346 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0:
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Cozmo$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1:
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ayudar$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2:
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ver qué pasa$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3:
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡Hacer algo!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4:
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "No hacer nada$"
