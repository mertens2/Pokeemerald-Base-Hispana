# 1 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 3 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 5 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad:
# 7 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceDown
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterUp
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_ExclamationMark
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_Delay48
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_ARCHIE
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_AQUA_GRUNT_1
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_AQUA_GRUNT_2
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieArrive
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_MAGMA_GRUNT_1
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_MAGMA_GRUNT_2
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieExit
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_ARCHIE
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_AQUA_GRUNT_1
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_AQUA_GRUNT_2
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite:
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡Je, je, je!\p"
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Con este METEORITO, lo del \n"
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MONTE CENIZO va a…$"
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma:
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¿Cómo?\p"
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "No sé quién eres, pero si te entrometes\n"
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "en los planes del EQUIPO MAGMA,\l"
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡vas a tener problemas!$"
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma:
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡Un momento, EQUIPO MAGMA!\p"
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡Os equivocáis si os pensáis que\n"
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "os dejaremos saliros con la vuestra!$"
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua:
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡Je, je, je!\n"
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡Mira por dónde, el EQUIPO AQUA!\p"
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Pero no tenemos tiempo para ocuparnos\n"
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "de todos vosotros…\p"
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡Bah, da igual!\p"
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡Tenemos el METEORITO,\n"
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "así que nos vamos al MONTE CENIZO!\p"
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡Je, je, je!\n"
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡Nos vemos, pandilla de memos!$"
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore:
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "AQUILES: ¿Te conozco de algo?\n"
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¿Del MUSEO de CIUDAD PORTUAL?\p"
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Así que te llamas {PLAYER}.\p"
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Entonces creía que eras de los\n"
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "impresentables del EQUIPO MAGMA.\p"
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Mmmm…\n"
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Debo reconocer que eres singular.\p"
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Quiero que sepas que el EQUIPO MAGMA\n"
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "es una grave amenaza para todos.\p"
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Han llevado a cabo muchos actos\n"
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "vandálicos en su afán por expandir\l"
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "la tierra.\p"
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡Nosotros, el EQUIPO AQUA, amamos\n"
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "el mar por encima de todo, así que\l"
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "el EQUIPO MAGMA es nuestro enemigo!$"
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma:
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "JEFE, deberíamos perseguir\n"
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "al EQUIPO MAGMA…$"
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo:
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "AQUILES: Sí, sí, es cierto.\n"
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "No hay tiempo que perder.\p"
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡No se puede saber lo que el EQUIPO\n"
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MAGMA puede hacer en el MONTE CENIZO!$"
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell:
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "AQUILES: {PLAYER}, tú tampoco\n"
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "deberías perder de vista al EQUIPO\l"
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MAGMA, ¿sabes?\p"
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¡Adiós!$"
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Yo… soy COZMO…\n"
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "El PROFESOR COZMO…\p"
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Los del EQUIPO MAGMA me pidieron\n"
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "que les llevara a la CASCADA METEORO…\p"
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Pero me engañaron y encima se llevaron\n"
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "mi METEORITO…\p"
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Y luego apareció otra panda\n"
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "de gamberros, el EQUIPO AQUA…\p"
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Como si lo de antes no hubiera sido\n"
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "bastante. Estoy desconcertado…\p"
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Pero ese EQUIPO MAGMA…\p"
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¿Qué pretende hacer con el METEORITO\n"
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "en el MONTE CENIZO?$"
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: Pero ese EQUIPO MAGMA…\p"
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "¿Qué pretende hacer con el METEORITO\n"
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "en el MONTE CENIZO?$"
