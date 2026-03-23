MtChimney_MapScripts::
# 2 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 22 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MtChimney_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 8 "data/maps/MtChimney/scripts.pory"
	switch VAR_MT_CHIMNEY_STATE
# 9 "data/maps/MtChimney/scripts.pory"
	case 2, MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 12 "data/maps/MtChimney/scripts.pory"
	case 3, MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 15 "data/maps/MtChimney/scripts.pory"
	case 5, MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 18 "data/maps/MtChimney/scripts.pory"
	case 10, MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/MtChimney/scripts.pory"
	call MtChimney_OnTransition_PrepareTeamMagmaCheating
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 13 "data/maps/MtChimney/scripts.pory"
	call MtChimney_OnTransition_PrepareDelta
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 16 "data/maps/MtChimney/scripts.pory"
	call MtChimney_OnTransition_PrepareGroudon
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 19 "data/maps/MtChimney/scripts.pory"
	call MtChimney_OnTransition_PrepareMaxieFreakOut
	return

MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 23 "data/maps/MtChimney/scripts.pory"
	map_script_2 VAR_MT_CHIMNEY_STATE, 3, MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 191 "data/maps/MtChimney/scripts.pory"
	map_script_2 VAR_MT_CHIMNEY_STATE, 5, MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 24 "data/maps/MtChimney/scripts.pory"
	lockall
# 25 "data/maps/MtChimney/scripts.pory"
	special SpawnCameraObject
# 26 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanToDelta
# 27 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 28 "data/maps/MtChimney/scripts.pory"
	setspeaker Unknown
# 29 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DeltaPlan1
# 30 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DeltaPlan2
# 31 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 32 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_DELTA_2, MtChimney_Movement_DeltaWalkAway3
# 33 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_DELTA_1, MtChimney_Movement_DeltaBlockWay
# 34 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_SortaFollowDelta
# 35 "data/maps/MtChimney/scripts.pory"
	closemessage
# 37 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 38 "data/maps/MtChimney/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 26, 39
# 39 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerArrive2
# 40 "data/maps/MtChimney/scripts.pory"
	delay 48
# 41 "data/maps/MtChimney/scripts.pory"
	setspeaker Unknown
# 42 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DeltaYouCantPass
# 43 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 44 "data/maps/MtChimney/scripts.pory"
	closemessage
# 46 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_DELTA_2
# 47 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_DELTA_2, MtChimney_Movement_DeltaWalkAway2
# 48 "data/maps/MtChimney/scripts.pory"
	delay 48
# 49 "data/maps/MtChimney/scripts.pory"
	setspeaker Unknown
# 50 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DeltaWereDoneHere
# 51 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_MT_CHIMNEY_DELTA_2
# 52 "data/maps/MtChimney/scripts.pory"
	closemessage
# 54 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 55 "data/maps/MtChimney/scripts.pory"
	delay 16
# 56 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_DELTA_1
# 57 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_DELTA_2
# 58 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_DELTA_1, 40, 0
# 59 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_DELTA_2, 40, 0
# 60 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_MAXIE, 26, 38
# 61 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1, 25, 38
# 62 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2, 27, 38
# 63 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_MAXIE
# 64 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 65 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 66 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 67 "data/maps/MtChimney/scripts.pory"
	delay 16
# 68 "data/maps/MtChimney/scripts.pory"
	setspeaker Unknown
# 69 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieArrive
# 70 "data/maps/MtChimney/scripts.pory"
	delay 8
# 71 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 72 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 73 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 74 "data/maps/MtChimney/scripts.pory"
	applymove OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanToMagma
# 75 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 76 "data/maps/MtChimney/scripts.pory"
	delay 8
# 77 "data/maps/MtChimney/scripts.pory"
	closemessage
# 79 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 80 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, MtChimney_Movement_PlayerArrive
# 81 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 82 "data/maps/MtChimney/scripts.pory"
	setspeaker Unknown
# 83 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhoAreYou
# 84 "data/maps/MtChimney/scripts.pory"
	delay 32
# 85 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1, MtChimney_Movement_PlayerArrive
# 86 "data/maps/MtChimney/scripts.pory"
	delay 8
# 87 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2, MtChimney_Movement_PlayerArrive
# 88 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 89 "data/maps/MtChimney/scripts.pory"
	closemessage
# 91 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 92 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 93 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 94 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 95 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FaceAwayPlayer
# 96 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 97 "data/maps/MtChimney/scripts.pory"
	setspeaker Magma
# 98 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceUp
# 99 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaGruntMaxieLost1
# 100 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 101 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceUp
# 102 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaGruntMaxieLost2
# 103 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 104 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 105 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIllSucceedAnyways
# 106 "data/maps/MtChimney/scripts.pory"
	delay 24
# 107 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_WalkInPlaceUp
# 108 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 109 "data/maps/MtChimney/scripts.pory"
	closemessage
# 111 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, MtChimney_Movement_MaxieGoesToMachine
# 112 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerGetOut
# 113 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_MT_CHIMNEY_MAXIE
# 114 "data/maps/MtChimney/scripts.pory"
	delay 16
# 115 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 116 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieMachineNotWork
# 117 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 26, 38
# 118 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_AQUA_GRUNT_1, 25, 39
# 119 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_AQUA_GRUNT_2, 27, 39
# 120 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 121 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_AQUA_GRUNT_1
# 122 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_AQUA_GRUNT_2
# 123 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 124 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieArrives
# 126 "data/maps/MtChimney/scripts.pory"
	closemessage
# 127 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_PlayerArrive
# 128 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_MT_CHIMNEY_ARCHIE
# 129 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, MtChimney_Movement_DeltaWalkAway2
# 130 "data/maps/MtChimney/scripts.pory"
	delay 8
# 131 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_AQUA_GRUNT_1, MtChimney_Movement_PlayerArrive
# 132 "data/maps/MtChimney/scripts.pory"
	delay 4
# 133 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_AQUA_GRUNT_2, MtChimney_Movement_PlayerArrive
# 134 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_MT_CHIMNEY_MAXIE
# 135 "data/maps/MtChimney/scripts.pory"
	delay 24
# 136 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanToArchie
# 137 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 138 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhatDoYouWant, MSGBOX_INTERRUPT
# 139 "data/maps/MtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 140 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 141 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieWhoDidThat
# 142 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 143 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhat
# 144 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 145 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieSomethingsUp
# 146 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 147 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieDelightful
# 148 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 149 "data/maps/MtChimney/scripts.pory"
	delay 16
# 150 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanToPlayer
# 151 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 152 "data/maps/MtChimney/scripts.pory"
	setobjectxy LOCALID_MT_CHIMNEY_ARCHIE, 26, 31
# 153 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 154 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 155 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 156 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceDown
# 157 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 158 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 159 "data/maps/MtChimney/scripts.pory"
	delay 16
# 160 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 161 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhMaxie
# 162 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_WalkInPlaceUp
# 163 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 164 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 165 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_WalkInPlaceDown
# 166 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 167 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_LookAround
# 168 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieTellsGrunts
# 169 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 170 "data/maps/MtChimney/scripts.pory"
	setspeaker Aqua
# 171 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_WeLoveYouArchie
# 172 "data/maps/MtChimney/scripts.pory"
	closemessage
# 174 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 175 "data/maps/MtChimney/scripts.pory"
	delay 16
# 176 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 177 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_AQUA_GRUNT_1
# 178 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_AQUA_GRUNT_2
# 179 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 180 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 181 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 182 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 183 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 184 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 185 "data/maps/MtChimney/scripts.pory"
	addobject 9
# 186 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 4
# 187 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 188 "data/maps/MtChimney/scripts.pory"
	releaseall
	end

MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 192 "data/maps/MtChimney/scripts.pory"
	lockall
# 193 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 194 "data/maps/MtChimney/scripts.pory"
	special SpawnCameraObject
# 195 "data/maps/MtChimney/scripts.pory"
	applymovement 25, Common_Movement_WalkDown
# 196 "data/maps/MtChimney/scripts.pory"
	applymovement 25, Common_Movement_SetInvisible
# 197 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 198 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 199 "data/maps/MtChimney/scripts.pory"
	applymovement 26, Common_Movement_WalkDown
# 200 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 201 "data/maps/MtChimney/scripts.pory"
	applymovement 26, Common_Movement_WalkDown
# 202 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 203 "data/maps/MtChimney/scripts.pory"
	applymovement 26, Common_Movement_SetInvisible
# 204 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 205 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 206 "data/maps/MtChimney/scripts.pory"
	applymovement 27, Common_Movement_WalkDown2
# 207 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 208 "data/maps/MtChimney/scripts.pory"
	applymovement 27, Common_Movement_WalkDown
# 209 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 210 "data/maps/MtChimney/scripts.pory"
	applymovement 27, Common_Movement_SetInvisible
# 211 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 212 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 213 "data/maps/MtChimney/scripts.pory"
	applymovement 28, Common_Movement_WalkLeft
# 214 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 215 "data/maps/MtChimney/scripts.pory"
	applymovement 28, Common_Movement_WalkDown2
# 216 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 217 "data/maps/MtChimney/scripts.pory"
	applymovement 28, Common_Movement_WalkDown
# 218 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 219 "data/maps/MtChimney/scripts.pory"
	applymovement 28, Common_Movement_SetInvisible
# 220 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 221 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 222 "data/maps/MtChimney/scripts.pory"
	applymovement 29, Common_Movement_WalkLeft2
# 223 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 224 "data/maps/MtChimney/scripts.pory"
	applymovement 29, Common_Movement_WalkDown2
# 225 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 226 "data/maps/MtChimney/scripts.pory"
	applymovement 29, Common_Movement_WalkDown
# 227 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 228 "data/maps/MtChimney/scripts.pory"
	applymovement 29, Common_Movement_SetInvisible
# 229 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 230 "data/maps/MtChimney/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 231 "data/maps/MtChimney/scripts.pory"
	applymovement 30, MtChimney_Movement_NPCWalkToWarp
# 232 "data/maps/MtChimney/scripts.pory"
	applymovement 9, MtChimney_Movement_WatchNPCWalkToWarp
# 233 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_PanToGroudon
# 234 "data/maps/MtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 235 "data/maps/MtChimney/scripts.pory"
	delay 32
# 236 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_NORMAL
# 237 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0
# 238 "data/maps/MtChimney/scripts.pory"
	waitmoncry
# 239 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_SPAWN_INVISIBLE
# 240 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 6
# 241 "data/maps/MtChimney/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 3
# 242 "data/maps/MtChimney/scripts.pory"
	warp MAP_JAGGED_PASS, 16, 19
# 243 "data/maps/MtChimney/scripts.pory"
	releaseall
	end


MtChimney_OnTransition_PrepareGroudon::
# 250 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 25, 21, 40
# 251 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 25, MOVEMENT_TYPE_FACE_DOWN
# 252 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 26, 21, 39
# 253 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_DOWN
# 254 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 27, 21, 38
# 255 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_DOWN
# 256 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 28, 22, 38
# 257 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 28, MOVEMENT_TYPE_FACE_LEFT
# 258 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 29, 23, 38
# 259 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 29, MOVEMENT_TYPE_FACE_LEFT
# 260 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 9, 20, 40
# 261 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_GROUDON, 20, 6
# 262 "data/maps/MtChimney/scripts.pory"
	addobject 9
# 263 "data/maps/MtChimney/scripts.pory"
	addobject 25
# 264 "data/maps/MtChimney/scripts.pory"
	addobject 26
# 265 "data/maps/MtChimney/scripts.pory"
	addobject 27
# 266 "data/maps/MtChimney/scripts.pory"
	addobject 28
# 267 "data/maps/MtChimney/scripts.pory"
	addobject 29
# 268 "data/maps/MtChimney/scripts.pory"
	addobject 30
# 269 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_GROUDON
	return


MtChimney_EventScript_Golbat::
# 274 "data/maps/MtChimney/scripts.pory"
	moncryscript SPECIES_GOLBAT, MtChimney_EventScript_Golbat_Text_0, CRY_MODE_NORMAL
	return


MtChimney_EventScript_Krokorok::
# 277 "data/maps/MtChimney/scripts.pory"
	moncryscript SPECIES_KROKOROK, MtChimney_EventScript_Krokorok_Text_0, CRY_MODE_NORMAL
	return


MtChimney_EventScript_Frillish::
# 281 "data/maps/MtChimney/scripts.pory"
	moncryscript SPECIES_FRILLISH, MtChimney_EventScript_Frillish_Text_0, CRY_MODE_NORMAL
	return


MtChimney_EventScript_Pyroar::
# 285 "data/maps/MtChimney/scripts.pory"
	moncryscript SPECIES_PYROAR, MtChimney_EventScript_Pyroar_Text_0, CRY_MODE_NORMAL
	return


MtChimney_EventScript_Sharpedo::
# 289 "data/maps/MtChimney/scripts.pory"
	moncryscript SPECIES_SHARPEDO, MtChimney_EventScript_Sharpedo_Text_0, CRY_MODE_NORMAL
	return


MtChimney_EventScript_Monferno::
# 293 "data/maps/MtChimney/scripts.pory"
	moncryscript SPECIES_MONFERNO, MtChimney_EventScript_Monferno_Text_0, CRY_MODE_NORMAL
	return


MtChimney_EventScript_Pignite::
# 297 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 298 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Pignite_Text_0
# 299 "data/maps/MtChimney/scripts.pory"
	delay 32
# 300 "data/maps/MtChimney/scripts.pory"
	applymove LOCALID_MT_CHIMNEY_PIGNITE, Common_Movement_WalkInPlaceUp
# 301 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_PIGNITE, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 302 "data/maps/MtChimney/scripts.pory"
	moncryscript SPECIES_PIGNITE, MtChimney_EventScript_Pignite_Text_1, CRY_MODE_NORMAL
	return


MtChimney_OnTransition_PrepareMaxieFreakOut::
# 306 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_COURTNEY, 12, 6
# 307 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_TABITHA, 13, 7
# 308 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_TABITHA, MOVEMENT_TYPE_FACE_UP
# 309 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_COURTNEY
# 310 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_TABITHA
	return


MtChimney_EventScript_Trigger3::
# 314 "data/maps/MtChimney/scripts.pory"
	lockall
# 315 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 316 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_WalkInPlaceDown
# 317 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 318 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 319 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 320 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_WalkInPlaceDown
# 321 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 322 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 323 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieFreakOut
# 324 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_WalkInPlaceUp
# 325 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 326 "data/maps/MtChimney/scripts.pory"
	setspeaker Tabitha
# 327 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaWeDontKnow
# 328 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_COURTNEY, Common_Movement_WalkInPlaceRight
# 329 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 330 "data/maps/MtChimney/scripts.pory"
	setspeaker Courtney
# 331 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneySolution
# 332 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_WalkInPlaceDown
# 333 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 334 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 335 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 336 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_WalkInPlaceDown
# 337 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 338 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 339 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieFreakOut2
# 341 "data/maps/MtChimney/scripts.pory"
	closemessage
# 342 "data/maps/MtChimney/scripts.pory"
	setspeaker Player
# 343 "data/maps/MtChimney/scripts.pory"
	msgbox Common_Text_Realization
# 345 "data/maps/MtChimney/scripts.pory"
	closemessage
# 346 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 347 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 348 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_COURTNEY, Common_Movement_ExclamationMark
# 349 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_ExclamationMark
# 350 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 351 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 352 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_COURTNEY, Common_Movement_WalkInPlaceFasterLeft
# 353 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_WalkInPlaceFasterLeft
# 354 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 355 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 356 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 357 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 358 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieNoticePlayer
# 360 "data/maps/MtChimney/scripts.pory"
	closemessage
# 361 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_WHITE
# 362 "data/maps/MtChimney/scripts.pory"
	setspeaker Unknown
# 363 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieAsIf
# 365 "data/maps/MtChimney/scripts.pory"
	closemessage
# 366 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 6
# 367 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_ARCHIE, MOVEMENT_TYPE_FACE_RIGHT
# 368 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 369 "data/maps/MtChimney/scripts.pory"
	delay 16
# 370 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 371 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 372 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieBattleWithPlayer
# 373 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_PrepareMultiBattle
# 374 "data/maps/MtChimney/scripts.pory"
	multi_fixed_2_vs_1 TRAINER_MAXIE_MAGMA_HIDEOUT, MtChimney_Text_MaxieDefeat, TRAINER_ARCHIE_ALLY
# 375 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 376 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq MtChimney_EventScript_Trigger3_2
MtChimney_EventScript_Trigger3_1:
# 379 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 380 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceDown
# 381 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 382 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 383 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieKnewYouCould
# 384 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_WalkInPlaceRight
# 385 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_WalkInPlaceLeft
# 386 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 387 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 388 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhatDoYouWant, MSGBOX_INTERRUPT
# 389 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 390 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieWhoDidThat
# 391 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 392 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhat
# 393 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 394 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieSomethingsUp
# 395 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 396 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieDelightful
# 397 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 398 "data/maps/MtChimney/scripts.pory"
	delay 16
# 399 "data/maps/MtChimney/scripts.pory"
	setobjectxy LOCALID_MT_CHIMNEY_ARCHIE, 9, 7
# 400 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 401 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 402 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 403 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 404 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 405 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceDown
# 406 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 407 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 408 "data/maps/MtChimney/scripts.pory"
	delay 16
# 409 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 410 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhMaxie
# 411 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_WalkInPlaceRight
# 412 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 413 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 414 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 415 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_WalkInPlaceDown
# 416 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 417 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_LookAround
# 418 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieTellsGrunts
# 419 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 420 "data/maps/MtChimney/scripts.pory"
	setspeaker Aqua
# 421 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_WeLoveYouArchie
# 422 "data/maps/MtChimney/scripts.pory"
	closemessage
# 424 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 425 "data/maps/MtChimney/scripts.pory"
	delay 16
# 426 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 427 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_AQUA_GRUNT_1
# 428 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_AQUA_GRUNT_2
# 429 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 430 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 431 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 432 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 433 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 434 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 435 "data/maps/MtChimney/scripts.pory"
	addobject 9
# 436 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 4
# 437 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 438 "data/maps/MtChimney/scripts.pory"
	releaseall
	end

MtChimney_EventScript_Trigger3_2:
# 377 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_LostMaxieMultiBattle
	goto MtChimney_EventScript_Trigger3_1


MtChimney_EventScript_LostMaxieMultiBattle::
# 443 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 10
# 444 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 445 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 446 "data/maps/MtChimney/scripts.pory"
	releaseall
	end


# 450 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PanToGroudon:
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
# 451 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 454 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_NPCWalkToWarp:
# 455 "data/maps/MtChimney/scripts.pory"
	walk_left
# 455 "data/maps/MtChimney/scripts.pory"
	walk_left
# 455 "data/maps/MtChimney/scripts.pory"
	walk_left
# 456 "data/maps/MtChimney/scripts.pory"
	walk_down
# 456 "data/maps/MtChimney/scripts.pory"
	walk_down
# 456 "data/maps/MtChimney/scripts.pory"
	walk_down
# 457 "data/maps/MtChimney/scripts.pory"
	set_invisible
	step_end

# 459 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_WatchNPCWalkToWarp:
# 460 "data/maps/MtChimney/scripts.pory"
	delay_8
# 460 "data/maps/MtChimney/scripts.pory"
	delay_8
# 460 "data/maps/MtChimney/scripts.pory"
	delay_8
# 460 "data/maps/MtChimney/scripts.pory"
	delay_8
# 460 "data/maps/MtChimney/scripts.pory"
	delay_8
# 461 "data/maps/MtChimney/scripts.pory"
	face_right
# 462 "data/maps/MtChimney/scripts.pory"
	face_down
# 463 "data/maps/MtChimney/scripts.pory"
	delay_8
# 464 "data/maps/MtChimney/scripts.pory"
	face_up
# 465 "data/maps/MtChimney/scripts.pory"
	delay_16
# 466 "data/maps/MtChimney/scripts.pory"
	walk_down
# 467 "data/maps/MtChimney/scripts.pory"
	set_invisible
	step_end

# 470 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanToMagma:
# 471 "data/maps/MtChimney/scripts.pory"
	walk_down
# 471 "data/maps/MtChimney/scripts.pory"
	walk_down
# 471 "data/maps/MtChimney/scripts.pory"
	walk_down
# 471 "data/maps/MtChimney/scripts.pory"
	walk_down
# 471 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 474 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanBackToPlayer:
# 475 "data/maps/MtChimney/scripts.pory"
	walk_up
# 475 "data/maps/MtChimney/scripts.pory"
	walk_up
# 475 "data/maps/MtChimney/scripts.pory"
	walk_up
# 475 "data/maps/MtChimney/scripts.pory"
	walk_up
# 475 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 478 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanToDelta:
# 479 "data/maps/MtChimney/scripts.pory"
	walk_diag_northeast
# 480 "data/maps/MtChimney/scripts.pory"
	walk_right
# 480 "data/maps/MtChimney/scripts.pory"
	walk_right
# 480 "data/maps/MtChimney/scripts.pory"
	walk_right
# 480 "data/maps/MtChimney/scripts.pory"
	walk_right
# 480 "data/maps/MtChimney/scripts.pory"
	walk_right
	step_end

# 483 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_SortaFollowDelta:
# 484 "data/maps/MtChimney/scripts.pory"
	walk_diag_northeast
# 484 "data/maps/MtChimney/scripts.pory"
	walk_diag_northeast
# 485 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 488 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_DeltaWalkAway:
# 489 "data/maps/MtChimney/scripts.pory"
	walk_right
# 489 "data/maps/MtChimney/scripts.pory"
	walk_right
# 490 "data/maps/MtChimney/scripts.pory"
	walk_up
# 490 "data/maps/MtChimney/scripts.pory"
	walk_up
# 490 "data/maps/MtChimney/scripts.pory"
	walk_up
# 490 "data/maps/MtChimney/scripts.pory"
	walk_up
# 490 "data/maps/MtChimney/scripts.pory"
	walk_up
# 490 "data/maps/MtChimney/scripts.pory"
	walk_up
# 490 "data/maps/MtChimney/scripts.pory"
	walk_up
# 490 "data/maps/MtChimney/scripts.pory"
	walk_up
# 490 "data/maps/MtChimney/scripts.pory"
	walk_up
# 490 "data/maps/MtChimney/scripts.pory"
	walk_up
# 491 "data/maps/MtChimney/scripts.pory"
	walk_left
# 491 "data/maps/MtChimney/scripts.pory"
	walk_left
# 491 "data/maps/MtChimney/scripts.pory"
	walk_left
# 491 "data/maps/MtChimney/scripts.pory"
	walk_left
# 491 "data/maps/MtChimney/scripts.pory"
	walk_left
# 491 "data/maps/MtChimney/scripts.pory"
	walk_left
# 492 "data/maps/MtChimney/scripts.pory"
	walk_up
# 492 "data/maps/MtChimney/scripts.pory"
	walk_up
# 492 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 495 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_DeltaWalkAway3:
# 496 "data/maps/MtChimney/scripts.pory"
	walk_up
# 496 "data/maps/MtChimney/scripts.pory"
	walk_up
# 496 "data/maps/MtChimney/scripts.pory"
	walk_up
# 496 "data/maps/MtChimney/scripts.pory"
	walk_up
# 496 "data/maps/MtChimney/scripts.pory"
	walk_up
# 496 "data/maps/MtChimney/scripts.pory"
	walk_up
# 496 "data/maps/MtChimney/scripts.pory"
	walk_up
# 496 "data/maps/MtChimney/scripts.pory"
	walk_up
# 496 "data/maps/MtChimney/scripts.pory"
	walk_up
# 497 "data/maps/MtChimney/scripts.pory"
	walk_left
# 497 "data/maps/MtChimney/scripts.pory"
	walk_left
# 497 "data/maps/MtChimney/scripts.pory"
	walk_left
# 497 "data/maps/MtChimney/scripts.pory"
	walk_left
# 498 "data/maps/MtChimney/scripts.pory"
	walk_up
# 498 "data/maps/MtChimney/scripts.pory"
	walk_up
# 498 "data/maps/MtChimney/scripts.pory"
	walk_up
# 498 "data/maps/MtChimney/scripts.pory"
	walk_up
# 498 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 501 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_DeltaBlockWay:
# 502 "data/maps/MtChimney/scripts.pory"
	walk_right
# 502 "data/maps/MtChimney/scripts.pory"
	walk_right
# 502 "data/maps/MtChimney/scripts.pory"
	walk_right
# 503 "data/maps/MtChimney/scripts.pory"
	walk_up
# 503 "data/maps/MtChimney/scripts.pory"
	walk_up
# 503 "data/maps/MtChimney/scripts.pory"
	walk_up
# 503 "data/maps/MtChimney/scripts.pory"
	walk_up
# 504 "data/maps/MtChimney/scripts.pory"
	walk_in_place_down
	step_end

# 507 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PlayerArrive2:
# 508 "data/maps/MtChimney/scripts.pory"
	walk_up
# 508 "data/maps/MtChimney/scripts.pory"
	walk_up
# 508 "data/maps/MtChimney/scripts.pory"
	walk_up
# 508 "data/maps/MtChimney/scripts.pory"
	walk_up
# 508 "data/maps/MtChimney/scripts.pory"
	walk_up
# 508 "data/maps/MtChimney/scripts.pory"
	walk_up
# 508 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 511 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PlayerArrive:
# 512 "data/maps/MtChimney/scripts.pory"
	walk_up
# 512 "data/maps/MtChimney/scripts.pory"
	walk_up
# 512 "data/maps/MtChimney/scripts.pory"
	walk_up
# 512 "data/maps/MtChimney/scripts.pory"
	walk_up
# 512 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 515 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_DeltaWalkAway2:
# 516 "data/maps/MtChimney/scripts.pory"
	walk_down
# 516 "data/maps/MtChimney/scripts.pory"
	walk_down
# 516 "data/maps/MtChimney/scripts.pory"
	walk_down
# 517 "data/maps/MtChimney/scripts.pory"
	walk_right
# 517 "data/maps/MtChimney/scripts.pory"
	walk_right
# 517 "data/maps/MtChimney/scripts.pory"
	walk_right
# 517 "data/maps/MtChimney/scripts.pory"
	walk_right
# 518 "data/maps/MtChimney/scripts.pory"
	walk_down
# 518 "data/maps/MtChimney/scripts.pory"
	walk_down
# 518 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 522 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MaxieGoesToMachine:
# 523 "data/maps/MtChimney/scripts.pory"
	walk_up
# 523 "data/maps/MtChimney/scripts.pory"
	walk_up
# 523 "data/maps/MtChimney/scripts.pory"
	walk_up
# 523 "data/maps/MtChimney/scripts.pory"
	walk_up
# 523 "data/maps/MtChimney/scripts.pory"
	walk_up
# 523 "data/maps/MtChimney/scripts.pory"
	walk_up
# 523 "data/maps/MtChimney/scripts.pory"
	walk_up
# 523 "data/maps/MtChimney/scripts.pory"
	walk_up
# 524 "data/maps/MtChimney/scripts.pory"
	walk_left
# 524 "data/maps/MtChimney/scripts.pory"
	walk_left
# 524 "data/maps/MtChimney/scripts.pory"
	walk_left
# 524 "data/maps/MtChimney/scripts.pory"
	walk_left
# 525 "data/maps/MtChimney/scripts.pory"
	walk_up
# 525 "data/maps/MtChimney/scripts.pory"
	walk_up
# 525 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 528 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanToArchie:
# 529 "data/maps/MtChimney/scripts.pory"
	walk_right
# 529 "data/maps/MtChimney/scripts.pory"
	walk_right
# 530 "data/maps/MtChimney/scripts.pory"
	walk_down
# 530 "data/maps/MtChimney/scripts.pory"
	walk_down
# 530 "data/maps/MtChimney/scripts.pory"
	walk_down
# 530 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 533 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanToPlayer:
# 534 "data/maps/MtChimney/scripts.pory"
	walk_left
# 534 "data/maps/MtChimney/scripts.pory"
	walk_left
# 535 "data/maps/MtChimney/scripts.pory"
	walk_up
# 535 "data/maps/MtChimney/scripts.pory"
	walk_up
# 535 "data/maps/MtChimney/scripts.pory"
	walk_up
# 535 "data/maps/MtChimney/scripts.pory"
	walk_up
# 535 "data/maps/MtChimney/scripts.pory"
	walk_up
# 535 "data/maps/MtChimney/scripts.pory"
	walk_up
# 535 "data/maps/MtChimney/scripts.pory"
	walk_up
# 535 "data/maps/MtChimney/scripts.pory"
	walk_up
# 535 "data/maps/MtChimney/scripts.pory"
	walk_up
	step_end

# 538 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PlayerGetOut:
# 539 "data/maps/MtChimney/scripts.pory"
	delay_8
# 540 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 541 "data/maps/MtChimney/scripts.pory"
	walk_up
# 542 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 543 "data/maps/MtChimney/scripts.pory"
	face_right
# 544 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 545 "data/maps/MtChimney/scripts.pory"
	walk_left
# 546 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 547 "data/maps/MtChimney/scripts.pory"
	walk_in_place_up
	step_end

# 550 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_LookAround:
# 551 "data/maps/MtChimney/scripts.pory"
	walk_in_place_left
# 552 "data/maps/MtChimney/scripts.pory"
	delay_16
# 553 "data/maps/MtChimney/scripts.pory"
	walk_in_place_down
# 554 "data/maps/MtChimney/scripts.pory"
	delay_16
# 555 "data/maps/MtChimney/scripts.pory"
	walk_in_place_right
# 556 "data/maps/MtChimney/scripts.pory"
	delay_16
# 557 "data/maps/MtChimney/scripts.pory"
	walk_in_place_down
	step_end

# 560 "data/maps/MtChimney/scripts.pory"

# 561 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 562 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 563 "data/maps/MtChimney/scripts.pory"
	end
# 564 "data/maps/MtChimney/scripts.pory"

# 565 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 566 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 567 "data/maps/MtChimney/scripts.pory"
	end
# 568 "data/maps/MtChimney/scripts.pory"

# 569 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 570 "data/maps/MtChimney/scripts.pory"
	lock
# 571 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 572 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 573 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 574 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 575 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 576 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 577 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 578 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 579 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 580 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 581 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 582 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 583 "data/maps/MtChimney/scripts.pory"
	release
# 584 "data/maps/MtChimney/scripts.pory"
	end
# 585 "data/maps/MtChimney/scripts.pory"

# 586 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 587 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 588 "data/maps/MtChimney/scripts.pory"
	release
# 589 "data/maps/MtChimney/scripts.pory"
	end
# 590 "data/maps/MtChimney/scripts.pory"

# 591 "data/maps/MtChimney/scripts.pory"

# 592 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 593 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 594 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 595 "data/maps/MtChimney/scripts.pory"
	return
# 596 "data/maps/MtChimney/scripts.pory"

# 597 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 598 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 599 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 600 "data/maps/MtChimney/scripts.pory"
	release
# 601 "data/maps/MtChimney/scripts.pory"
	end
# 602 "data/maps/MtChimney/scripts.pory"

# 603 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 604 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 605 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 606 "data/maps/MtChimney/scripts.pory"
	release
# 607 "data/maps/MtChimney/scripts.pory"
	end
# 608 "data/maps/MtChimney/scripts.pory"

# 609 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 610 "data/maps/MtChimney/scripts.pory"
	walk_up
# 611 "data/maps/MtChimney/scripts.pory"
	walk_up
# 612 "data/maps/MtChimney/scripts.pory"
	walk_up
# 613 "data/maps/MtChimney/scripts.pory"
	walk_up
# 614 "data/maps/MtChimney/scripts.pory"
	walk_up
# 615 "data/maps/MtChimney/scripts.pory"
	walk_up
# 616 "data/maps/MtChimney/scripts.pory"
	walk_right
# 617 "data/maps/MtChimney/scripts.pory"
	step_end
# 618 "data/maps/MtChimney/scripts.pory"

# 619 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 620 "data/maps/MtChimney/scripts.pory"
	walk_left
# 621 "data/maps/MtChimney/scripts.pory"
	walk_down
# 622 "data/maps/MtChimney/scripts.pory"
	walk_down
# 623 "data/maps/MtChimney/scripts.pory"
	walk_down
# 624 "data/maps/MtChimney/scripts.pory"
	walk_down
# 625 "data/maps/MtChimney/scripts.pory"
	walk_down
# 626 "data/maps/MtChimney/scripts.pory"
	walk_down
# 627 "data/maps/MtChimney/scripts.pory"
	walk_down
# 628 "data/maps/MtChimney/scripts.pory"
	step_end
# 629 "data/maps/MtChimney/scripts.pory"

# 630 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 631 "data/maps/MtChimney/scripts.pory"
	walk_up
# 632 "data/maps/MtChimney/scripts.pory"
	walk_up
# 633 "data/maps/MtChimney/scripts.pory"
	walk_up
# 634 "data/maps/MtChimney/scripts.pory"
	walk_up
# 635 "data/maps/MtChimney/scripts.pory"
	walk_up
# 636 "data/maps/MtChimney/scripts.pory"
	walk_right
# 637 "data/maps/MtChimney/scripts.pory"
	walk_right
# 638 "data/maps/MtChimney/scripts.pory"
	step_end
# 639 "data/maps/MtChimney/scripts.pory"

# 640 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 641 "data/maps/MtChimney/scripts.pory"
	walk_left
# 642 "data/maps/MtChimney/scripts.pory"
	walk_left
# 643 "data/maps/MtChimney/scripts.pory"
	walk_down
# 644 "data/maps/MtChimney/scripts.pory"
	walk_down
# 645 "data/maps/MtChimney/scripts.pory"
	walk_down
# 646 "data/maps/MtChimney/scripts.pory"
	walk_down
# 647 "data/maps/MtChimney/scripts.pory"
	walk_down
# 648 "data/maps/MtChimney/scripts.pory"
	walk_down
# 649 "data/maps/MtChimney/scripts.pory"
	walk_down
# 650 "data/maps/MtChimney/scripts.pory"
	step_end
# 651 "data/maps/MtChimney/scripts.pory"

# 652 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 653 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 654 "data/maps/MtChimney/scripts.pory"
	end
# 655 "data/maps/MtChimney/scripts.pory"

# 656 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 657 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 658 "data/maps/MtChimney/scripts.pory"
	end
# 659 "data/maps/MtChimney/scripts.pory"

# 660 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 661 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 662 "data/maps/MtChimney/scripts.pory"
	end
# 663 "data/maps/MtChimney/scripts.pory"

# 664 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 665 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 666 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 667 "data/maps/MtChimney/scripts.pory"
	end
# 668 "data/maps/MtChimney/scripts.pory"

# 669 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 670 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 671 "data/maps/MtChimney/scripts.pory"
	end
# 672 "data/maps/MtChimney/scripts.pory"

# 673 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 674 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 675 "data/maps/MtChimney/scripts.pory"
	end
# 676 "data/maps/MtChimney/scripts.pory"

# 677 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 678 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 679 "data/maps/MtChimney/scripts.pory"
	end
# 680 "data/maps/MtChimney/scripts.pory"

# 681 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 682 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 683 "data/maps/MtChimney/scripts.pory"
	end
# 684 "data/maps/MtChimney/scripts.pory"

# 685 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 686 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 687 "data/maps/MtChimney/scripts.pory"
	end
# 688 "data/maps/MtChimney/scripts.pory"

# 689 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 690 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 691 "data/maps/MtChimney/scripts.pory"
	end
# 692 "data/maps/MtChimney/scripts.pory"

# 693 "data/maps/MtChimney/scripts.pory"

# 694 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 695 "data/maps/MtChimney/scripts.pory"
	lockall
# 696 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 697 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 698 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 699 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 700 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 701 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 702 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 703 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 704 "data/maps/MtChimney/scripts.pory"
	releaseall
# 705 "data/maps/MtChimney/scripts.pory"
	end
# 706 "data/maps/MtChimney/scripts.pory"

# 707 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 708 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 709 "data/maps/MtChimney/scripts.pory"
	releaseall
# 710 "data/maps/MtChimney/scripts.pory"
	end
# 711 "data/maps/MtChimney/scripts.pory"

# 712 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 713 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 714 "data/maps/MtChimney/scripts.pory"
	releaseall
# 715 "data/maps/MtChimney/scripts.pory"
	end
# 716 "data/maps/MtChimney/scripts.pory"

# 717 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 718 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 719 "data/maps/MtChimney/scripts.pory"
	releaseall
# 720 "data/maps/MtChimney/scripts.pory"
	end
# 721 "data/maps/MtChimney/scripts.pory"

# 722 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 723 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 724 "data/maps/MtChimney/scripts.pory"
	end
# 725 "data/maps/MtChimney/scripts.pory"

# 726 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 727 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 728 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 729 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 730 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 731 "data/maps/MtChimney/scripts.pory"
	release
# 732 "data/maps/MtChimney/scripts.pory"
	end
# 733 "data/maps/MtChimney/scripts.pory"

# 734 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 735 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 736 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 737 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 738 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 739 "data/maps/MtChimney/scripts.pory"
	release
# 740 "data/maps/MtChimney/scripts.pory"
	end
# 741 "data/maps/MtChimney/scripts.pory"

# 742 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 743 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 744 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 745 "data/maps/MtChimney/scripts.pory"
	end
# 746 "data/maps/MtChimney/scripts.pory"

# 747 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 748 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 749 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 750 "data/maps/MtChimney/scripts.pory"
	end
# 751 "data/maps/MtChimney/scripts.pory"

# 752 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 753 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 754 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 755 "data/maps/MtChimney/scripts.pory"
	end
# 756 "data/maps/MtChimney/scripts.pory"

# 757 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 758 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 759 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 760 "data/maps/MtChimney/scripts.pory"
	end
# 761 "data/maps/MtChimney/scripts.pory"

# 762 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 763 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 764 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 765 "data/maps/MtChimney/scripts.pory"
	end
# 766 "data/maps/MtChimney/scripts.pory"

# 767 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 768 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 769 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 770 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 771 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 772 "data/maps/MtChimney/scripts.pory"
	release
# 773 "data/maps/MtChimney/scripts.pory"
	end
# 774 "data/maps/MtChimney/scripts.pory"

# 775 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 776 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 777 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 778 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 779 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 780 "data/maps/MtChimney/scripts.pory"
	release
# 781 "data/maps/MtChimney/scripts.pory"
	end
# 782 "data/maps/MtChimney/scripts.pory"

# 783 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 784 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 785 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 786 "data/maps/MtChimney/scripts.pory"
	end
# 787 "data/maps/MtChimney/scripts.pory"

# 788 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition_PrepareDelta::
# 789 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 790 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 791 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 792 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 793 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_DELTA_1, 23, 35
# 794 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_DELTA_2, 24, 35
# 795 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_DELTA_1
# 796 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_DELTA_2
# 797 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_DELTA_2, MOVEMENT_TYPE_FACE_LEFT
# 798 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_DELTA_1, MOVEMENT_TYPE_FACE_RIGHT
# 799 "data/maps/MtChimney/scripts.pory"
	return
# 800 "data/maps/MtChimney/scripts.pory"

# 801 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition_PrepareTeamMagmaCheating::
# 802 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 17, 30, 10
# 803 "data/maps/MtChimney/scripts.pory"
	addobject 17
# 804 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 15, 31, 6
# 805 "data/maps/MtChimney/scripts.pory"
	addobject 15
# 806 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_DOWN
# 807 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 808 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 16, 31, 7
# 809 "data/maps/MtChimney/scripts.pory"
	addobject 16
# 810 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 13, 39, 0
# 811 "data/maps/MtChimney/scripts.pory"
	addobject 13
# 812 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 12, 39, 0
# 813 "data/maps/MtChimney/scripts.pory"
	addobject 12
# 814 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 29, 14
# 815 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 816 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_ARCHIE, MOVEMENT_TYPE_FACE_UP
# 817 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 11, 29, 13
# 818 "data/maps/MtChimney/scripts.pory"
	addobject 11
# 819 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 820 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 14, 30, 11
# 821 "data/maps/MtChimney/scripts.pory"
	addobject 14
# 822 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 823 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_TABITHA, 39, 0
# 824 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_COURTNEY, 39, 0
# 825 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1, 39, 0
# 826 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2, 39, 0
# 827 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 828 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 829 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 830 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 831 "data/maps/MtChimney/scripts.pory"
	return
# 832 "data/maps/MtChimney/scripts.pory"

# 833 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 834 "data/maps/MtChimney/scripts.pory"
	lock
# 835 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 836 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 837 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 838 "data/maps/MtChimney/scripts.pory"
	closemessage
# 839 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceOriginalDirection
# 840 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 841 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 842 "data/maps/MtChimney/scripts.pory"
	release
# 843 "data/maps/MtChimney/scripts.pory"
	end
# 844 "data/maps/MtChimney/scripts.pory"

# 845 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 846 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 847 "data/maps/MtChimney/scripts.pory"
	return
# 848 "data/maps/MtChimney/scripts.pory"

# 849 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 850 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 851 "data/maps/MtChimney/scripts.pory"
	return
# 852 "data/maps/MtChimney/scripts.pory"

# 853 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 854 "data/maps/MtChimney/scripts.pory"
	lockall
# 855 "data/maps/MtChimney/scripts.pory"
	special SpawnCameraObject
# 856 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 857 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 858 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 859 "data/maps/MtChimney/scripts.pory"
	
# 860 "data/maps/MtChimney/scripts.pory"
	closemessage
# 861 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
# 862 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 863 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 864 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 865 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 866 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_Delay48
# 867 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 868 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 869 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 870 "data/maps/MtChimney/scripts.pory"
	
# 871 "data/maps/MtChimney/scripts.pory"
	closemessage
# 872 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 873 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 874 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 875 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 876 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FaceAwayPlayer
# 877 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 878 "data/maps/MtChimney/scripts.pory"
	delay 16
# 879 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 880 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 881 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
# 882 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 883 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma2, MSGBOX_DEFAULT
# 884 "data/maps/MtChimney/scripts.pory"
	
# 885 "data/maps/MtChimney/scripts.pory"
	closemessage
# 886 "data/maps/MtChimney/scripts.pory"
	delay 30
# 887 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 888 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 889 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 890 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_TABITHA
# 891 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_COURTNEY
# 892 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 893 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 894 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_MAXIE, 11, 7
# 895 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_MAXIE
# 896 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 897 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 12
# 898 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 899 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 900 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 901 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, MtChimney_EventScript_ArchieMaxieReunion
# 902 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, MtChimney_EventScript_ArchieMaxieReunion
# 903 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 904 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 905 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 906 "data/maps/MtChimney/scripts.pory"
	closemessage
# 907 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 908 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 909 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 910 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 911 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 912 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 913 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 914 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 915 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 4
# 916 "data/maps/MtChimney/scripts.pory"
	releaseall
# 917 "data/maps/MtChimney/scripts.pory"
	end
# 918 "data/maps/MtChimney/scripts.pory"

# 919 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 920 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieMaxieReunion
# 921 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 922 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 923 "data/maps/MtChimney/scripts.pory"
	return
# 924 "data/maps/MtChimney/scripts.pory"

# 925 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 926 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieMaxieReunion
# 927 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 928 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 929 "data/maps/MtChimney/scripts.pory"
	return
# 930 "data/maps/MtChimney/scripts.pory"

# 931 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 932 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitEast
# 933 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 934 "data/maps/MtChimney/scripts.pory"
	return
# 935 "data/maps/MtChimney/scripts.pory"

# 936 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 937 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 938 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 939 "data/maps/MtChimney/scripts.pory"
	return
# 940 "data/maps/MtChimney/scripts.pory"

# 941 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieMaxieReunion::
# 942 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieGetToMaxie
# 943 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, MtChimney_Movement_MaxieGetToArchie
# 944 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_MaxieGetToArchie
# 945 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 946 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 947 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhatDoYouWant, MSGBOX_INTERRUPT
# 948 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 949 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieWhoDidThat
# 950 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 951 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieWhat
# 952 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 953 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieSomethingsUp
# 954 "data/maps/MtChimney/scripts.pory"
	setspeaker Maxie
# 955 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieDelightful
# 956 "data/maps/MtChimney/scripts.pory"
	closemessage
# 957 "data/maps/MtChimney/scripts.pory"
	
# 958 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 959 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 960 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 961 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight
# 962 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 963 "data/maps/MtChimney/scripts.pory"
	delay 16
# 964 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 965 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceDown
# 966 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 967 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 968 "data/maps/MtChimney/scripts.pory"
	delay 16
# 969 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 970 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhMaxie
# 971 "data/maps/MtChimney/scripts.pory"
	closemessage
# 972 "data/maps/MtChimney/scripts.pory"
	
# 973 "data/maps/MtChimney/scripts.pory"
	return
# 974 "data/maps/MtChimney/scripts.pory"

# 975 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieWhatDoYouWant:
# 976 "data/maps/MtChimney/scripts.pory"
	.string "Archie.\p"
# 977 "data/maps/MtChimney/scripts.pory"
	.string "¿Qué es lo que quieres?\n"
# 978 "data/maps/MtChimney/scripts.pory"
	.string "¿Estás aquí para burlarte de mí, del\l"
# 979 "data/maps/MtChimney/scripts.pory"
	.string "fracaso de mi Equipo?\p"
# 980 "data/maps/MtChimney/scripts.pory"
	.string "Porque si es así, debo recordarte qu-{PAUSE 32}$"
# 981 "data/maps/MtChimney/scripts.pory"

# 982 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieWhoDidThat:
# 983 "data/maps/MtChimney/scripts.pory"
	.string "No hay tiempo para eso, bacalao.\pTú no te dejarías arruinar así.\n"
# 984 "data/maps/MtChimney/scripts.pory"
	.string "¿Qué le pasó a esa máquina, y quién fue\l"
# 985 "data/maps/MtChimney/scripts.pory"
	.string "el filibustero que lo hizo?$"
# 986 "data/maps/MtChimney/scripts.pory"

# 987 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieWhat:
# 988 "data/maps/MtChimney/scripts.pory"
	.string "…{PAUSE 16}…{PAUSE 8}¿F…{PAUSE 16}Fili-qué?{PAUSE 16} ¿…Bacalao?\n"
# 989 "data/maps/MtChimney/scripts.pory"
	.string "En cualquier caso, no es algo que te\l"
# 990 "data/maps/MtChimney/scripts.pory"
	.string "incumba, idiota.\p"
# 991 "data/maps/MtChimney/scripts.pory"
	.string "A menos… ¿Acaso te ha estado pasando\n"
# 992 "data/maps/MtChimney/scripts.pory"
	.string "lo mismo?$"
# 993 "data/maps/MtChimney/scripts.pory"

# 994 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieSomethingsUp:
# 995 "data/maps/MtChimney/scripts.pory"
	.string "Aye, aye, atinaste, amigo.\n"
# 996 "data/maps/MtChimney/scripts.pory"
	.string "Algo en estas aguas huele mal, y parece\l"
# 997 "data/maps/MtChimney/scripts.pory"
	.string "que en tierra también, ¿eh?\p"
# 998 "data/maps/MtChimney/scripts.pory"
	.string "Creo que tenemos alguien en nuestras\n"
# 999 "data/maps/MtChimney/scripts.pory"
	.string "tripulaciones que nos están queriendo\l"
# 1000 "data/maps/MtChimney/scripts.pory"
	.string "hundir, Maxie.$"
# 1001 "data/maps/MtChimney/scripts.pory"

# 1002 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDelightful:
# 1003 "data/maps/MtChimney/scripts.pory"
	.string "¡Ja! ¡Jajajaja!\n"
# 1004 "data/maps/MtChimney/scripts.pory"
	.string "Pues me deleita escuchar eso, ¿Sabes?\p"
# 1005 "data/maps/MtChimney/scripts.pory"
	.string "Aunque signifique tener contratiempos,\n"
# 1006 "data/maps/MtChimney/scripts.pory"
	.string "verte sufrir antes de hundirte es\l"
# 1007 "data/maps/MtChimney/scripts.pory"
	.string "delicioso, Archie.\p"
# 1008 "data/maps/MtChimney/scripts.pory"
	.string "Sólo espero poder unirme a la diversión\n"
# 1009 "data/maps/MtChimney/scripts.pory"
	.string "antes de que toques fondo. Hasta luego,\l"
# 1010 "data/maps/MtChimney/scripts.pory"
	.string "Archie.$"
# 1011 "data/maps/MtChimney/scripts.pory"

# 1012 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhMaxie:
# 1013 "data/maps/MtChimney/scripts.pory"
	.string "Ah, mi Maxie…\n"
# 1014 "data/maps/MtChimney/scripts.pory"
	.string "Siempre sintiéndose tan superior.\p"
# 1015 "data/maps/MtChimney/scripts.pory"
	.string "Nunca cambies, Maxie.$"
# 1016 "data/maps/MtChimney/scripts.pory"

# 1017 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieGetToMaxie:
# 1018 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1019 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1020 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1021 "data/maps/MtChimney/scripts.pory"
	step_end
# 1022 "data/maps/MtChimney/scripts.pory"

# 1023 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MaxieGetToArchie:
# 1024 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1025 "data/maps/MtChimney/scripts.pory"
	walk_down
# 1026 "data/maps/MtChimney/scripts.pory"
	walk_in_place_down
# 1027 "data/maps/MtChimney/scripts.pory"
	step_end
# 1028 "data/maps/MtChimney/scripts.pory"

# 1029 "data/maps/MtChimney/scripts.pory"

# 1030 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LostMultiBattle::
# 1031 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 0
# 1032 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1033 "data/maps/MtChimney/scripts.pory"
	special SetCB2WhiteOut
# 1034 "data/maps/MtChimney/scripts.pory"
	releaseall
# 1035 "data/maps/MtChimney/scripts.pory"
	end
# 1036 "data/maps/MtChimney/scripts.pory"

# 1037 "data/maps/MtChimney/scripts.pory"

# 1038 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_PrepareMultiBattle::
# 1039 "data/maps/MtChimney/scripts.pory"
    lockall
# 1040 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 1041 "data/maps/MtChimney/scripts.pory"
	msgbox PleasePick3Mons
# 1042 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1043 "data/maps/MtChimney/scripts.pory"
	
# 1044 "data/maps/MtChimney/scripts.pory"
    choose_mons
# 1045 "data/maps/MtChimney/scripts.pory"
    compare VAR_RESULT, 0
# 1046 "data/maps/MtChimney/scripts.pory"
    goto_if_eq script_NeedToChoose3ValidMons
# 1047 "data/maps/MtChimney/scripts.pory"
    return
# 1048 "data/maps/MtChimney/scripts.pory"

# 1049 "data/maps/MtChimney/scripts.pory"
script_NeedToChoose3ValidMons::
# 1050 "data/maps/MtChimney/scripts.pory"
	msgbox PleasePick3Mons
# 1051 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1052 "data/maps/MtChimney/scripts.pory"
	
# 1053 "data/maps/MtChimney/scripts.pory"
    choose_mons
# 1054 "data/maps/MtChimney/scripts.pory"
    compare VAR_RESULT, 0
# 1055 "data/maps/MtChimney/scripts.pory"
    goto_if_eq script_CancelBattle
# 1056 "data/maps/MtChimney/scripts.pory"
    return
# 1057 "data/maps/MtChimney/scripts.pory"

# 1058 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieYouCanDoIt::
# 1059 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 1060 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieYouCanDoIt
# 1061 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1062 "data/maps/MtChimney/scripts.pory"
	
# 1063 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 1064 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieWalkDown
# 1065 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1066 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 2
# 1067 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1068 "data/maps/MtChimney/scripts.pory"
	call MtChimney_OnTransition_PrepareTeamMagmaCheating
# 1069 "data/maps/MtChimney/scripts.pory"
	special DrawWholeMapView
# 1070 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1071 "data/maps/MtChimney/scripts.pory"
	return
# 1072 "data/maps/MtChimney/scripts.pory"

# 1073 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieWalkDown:
# 1074 "data/maps/MtChimney/scripts.pory"
	walk_down
# 1075 "data/maps/MtChimney/scripts.pory"
	walk_down
# 1076 "data/maps/MtChimney/scripts.pory"
	walk_down
# 1077 "data/maps/MtChimney/scripts.pory"
	walk_down
# 1078 "data/maps/MtChimney/scripts.pory"
	walk_down
# 1079 "data/maps/MtChimney/scripts.pory"
	walk_down
# 1080 "data/maps/MtChimney/scripts.pory"
	step_end
# 1081 "data/maps/MtChimney/scripts.pory"

# 1082 "data/maps/MtChimney/scripts.pory"
PleasePick3Mons::
# 1083 "data/maps/MtChimney/scripts.pory"
	.string "Deberás elegir 3 o\nmenos Pokémon.$"
# 1084 "data/maps/MtChimney/scripts.pory"

# 1085 "data/maps/MtChimney/scripts.pory"
script_CancelBattle::
# 1086 "data/maps/MtChimney/scripts.pory"
    goto MtChimney_EventScript_PrepareMultiBattle
# 1087 "data/maps/MtChimney/scripts.pory"
    return
# 1088 "data/maps/MtChimney/scripts.pory"

# 1089 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Trigger::
# 1090 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 1091 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 1092 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_COURTNEY, Common_Movement_ExclamationMark
# 1093 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_ExclamationMark
# 1094 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1095 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_COURTNEY, Common_Movement_FaceDown
# 1096 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_FaceDown
# 1097 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 1098 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1099 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerDown
# 1100 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1101 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 1102 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1103 "data/maps/MtChimney/scripts.pory"
	setspeaker Archie
# 1104 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieDontWorry
# 1105 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1106 "data/maps/MtChimney/scripts.pory"
	
# 1107 "data/maps/MtChimney/scripts.pory"
	return
# 1108 "data/maps/MtChimney/scripts.pory"
	
# 1109 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Trigger1::
# 1110 "data/maps/MtChimney/scripts.pory"
	lockall
# 1111 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 1
# 1112 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1113 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1114 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 1115 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_ExclamationMark
# 1116 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 1117 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1118 "data/maps/MtChimney/scripts.pory"
	playbgm TRAINER_ENCOUNTER_MUSIC_MAGMA, FALSE
# 1119 "data/maps/MtChimney/scripts.pory"
	setspeaker Tabitha
# 1120 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaIntro
# 1121 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1122 "data/maps/MtChimney/scripts.pory"
	
# 1123 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 1124 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_COURTNEY, Common_Movement_ExclamationMark
# 1125 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 1126 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1127 "data/maps/MtChimney/scripts.pory"
	setspeaker Courtney
# 1128 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyIntro
# 1129 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1130 "data/maps/MtChimney/scripts.pory"
	
# 1131 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_COURTNEY, Common_Movement_WalkRight
# 1132 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1133 "data/maps/MtChimney/scripts.pory"
	fadedefaultbgm
# 1134 "data/maps/MtChimney/scripts.pory"
	setspeaker Unknown
# 1135 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieStop
# 1136 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1137 "data/maps/MtChimney/scripts.pory"
	
# 1138 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 11, 17
# 1139 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_Trigger
# 1140 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_WalkLeft
# 1141 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1142 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1143 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceUp
# 1144 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_COURTNEY, Common_Movement_FaceDown
# 1145 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1146 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_WalkLeft
# 1147 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1148 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_FaceDown
# 1149 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1150 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1151 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_PrepareMultiBattle
# 1152 "data/maps/MtChimney/scripts.pory"
	multi_2_vs_2 TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat, TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_CourtneyDefeat, TRAINER_ARCHIE_ALLY
# 1153 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 1154 "data/maps/MtChimney/scripts.pory"
    compare VAR_RESULT, B_OUTCOME_LOST
# 1155 "data/maps/MtChimney/scripts.pory"
    goto_if_eq MtChimney_EventScript_LostMultiBattle
# 1156 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_TabithaCourtneyLost
# 1157 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 1158 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1159 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieYouCanDoIt
# 1160 "data/maps/MtChimney/scripts.pory"
	releaseall
# 1161 "data/maps/MtChimney/scripts.pory"
	end
# 1162 "data/maps/MtChimney/scripts.pory"
	
# 1163 "data/maps/MtChimney/scripts.pory"
	
# 1164 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Trigger2::
# 1165 "data/maps/MtChimney/scripts.pory"
	lockall
# 1166 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 1
# 1167 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 1168 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1169 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 1170 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_COURTNEY, Common_Movement_ExclamationMark
# 1171 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 1172 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1173 "data/maps/MtChimney/scripts.pory"
	playbgm TRAINER_ENCOUNTER_MUSIC_MAGMA, FALSE
# 1174 "data/maps/MtChimney/scripts.pory"
	setspeaker Courtney
# 1175 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyIntro
# 1176 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1177 "data/maps/MtChimney/scripts.pory"
	
# 1178 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 1179 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_ExclamationMark
# 1180 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 1181 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1182 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_WalkLeft
# 1183 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1184 "data/maps/MtChimney/scripts.pory"
	setspeaker Tabitha
# 1185 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaIntro
# 1186 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1187 "data/maps/MtChimney/scripts.pory"
	
# 1188 "data/maps/MtChimney/scripts.pory"
	fadedefaultbgm
# 1189 "data/maps/MtChimney/scripts.pory"
	setspeaker Unknown
# 1190 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieStop
# 1191 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1192 "data/maps/MtChimney/scripts.pory"
	
# 1193 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 17
# 1194 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_Trigger
# 1195 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_WalkRight
# 1196 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 1197 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1198 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceUp
# 1199 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_FaceDown
# 1200 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1201 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_COURTNEY, Common_Movement_WalkRight
# 1202 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1203 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_COURTNEY, Common_Movement_FaceDown
# 1204 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1205 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1206 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_PrepareMultiBattle
# 1207 "data/maps/MtChimney/scripts.pory"
	multi_2_vs_2 TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat, TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_CourtneyDefeat, TRAINER_ARCHIE_ALLY
# 1208 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 1209 "data/maps/MtChimney/scripts.pory"
    compare VAR_RESULT, B_OUTCOME_LOST
# 1210 "data/maps/MtChimney/scripts.pory"
    goto_if_eq MtChimney_EventScript_LostMultiBattle
# 1211 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_TabithaCourtneyLost
# 1212 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 1213 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1214 "data/maps/MtChimney/scripts.pory"
	call MtChimney_EventScript_ArchieYouCanDoIt
# 1215 "data/maps/MtChimney/scripts.pory"
	releaseall
# 1216 "data/maps/MtChimney/scripts.pory"
	end
# 1217 "data/maps/MtChimney/scripts.pory"

# 1218 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_TabithaCourtneyLost::
# 1219 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 1220 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_ExclamationMark
# 1221 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_COURTNEY, Common_Movement_ExclamationMark
# 1222 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1223 "data/maps/MtChimney/scripts.pory"
	setspeaker Courtney
# 1224 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyPostBattle
# 1225 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_WalkInPlaceUp
# 1226 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1227 "data/maps/MtChimney/scripts.pory"
	setspeaker Tabitha
# 1228 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle
# 1229 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1230 "data/maps/MtChimney/scripts.pory"
	
# 1231 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_TABITHA, Common_Movement_WalkInPlaceDown
# 1232 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 1233 "data/maps/MtChimney/scripts.pory"
	setspeaker Tabitha
# 1234 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaYouHaventSeen
# 1235 "data/maps/MtChimney/scripts.pory"
	closemessage
# 1236 "data/maps/MtChimney/scripts.pory"
	
# 1237 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1238 "data/maps/MtChimney/scripts.pory"
	delay 16
# 1239 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_COURTNEY, 39, 0
# 1240 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_TABITHA, 39, 0
# 1241 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_TABITHA
# 1242 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_COURTNEY
# 1243 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 1244 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1245 "data/maps/MtChimney/scripts.pory"
	delay 16
# 1246 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FacePlayer
# 1247 "data/maps/MtChimney/scripts.pory"
	return
# 1248 "data/maps/MtChimney/scripts.pory"

# 1249 "data/maps/MtChimney/scripts.pory"

# 1250 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerDown:
# 1251 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1252 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1253 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1254 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1255 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1256 "data/maps/MtChimney/scripts.pory"
	step_end
# 1257 "data/maps/MtChimney/scripts.pory"

# 1258 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 1259 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 1260 "data/maps/MtChimney/scripts.pory"
	end
# 1261 "data/maps/MtChimney/scripts.pory"

# 1262 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Courtney::
# 1263 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyPostBattle, MSGBOX_AUTOCLOSE
# 1264 "data/maps/MtChimney/scripts.pory"
	end
# 1265 "data/maps/MtChimney/scripts.pory"

# 1266 "data/maps/MtChimney/scripts.pory"

# 1267 "data/maps/MtChimney/scripts.pory"

# 1268 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 1269 "data/maps/MtChimney/scripts.pory"
	.string "¡Ay, no!\n"
# 1270 "data/maps/MtChimney/scripts.pory"
	.string "¡Me quedé sin Pokémon!$"
# 1271 "data/maps/MtChimney/scripts.pory"

# 1272 "data/maps/MtChimney/scripts.pory"

# 1273 "data/maps/MtChimney/scripts.pory"

# 1274 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 1275 "data/maps/MtChimney/scripts.pory"
	.string "Las GALLETAS LAVA son la especialidad\n"
# 1276 "data/maps/MtChimney/scripts.pory"
	.string "del MONTE CENIZO.\p"
# 1277 "data/maps/MtChimney/scripts.pory"
	.string "Prueba una. Son sólo 200¥.$"
# 1278 "data/maps/MtChimney/scripts.pory"

# 1279 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 1280 "data/maps/MtChimney/scripts.pory"
	.string "¡Muchas gracias!$"
# 1281 "data/maps/MtChimney/scripts.pory"

# 1282 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 1283 "data/maps/MtChimney/scripts.pory"
	.string "Pero vamos a ver: si no tienes dinero,\n"
# 1284 "data/maps/MtChimney/scripts.pory"
	.string "no puedes comprar nada de nada.$"
# 1285 "data/maps/MtChimney/scripts.pory"

# 1286 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 1287 "data/maps/MtChimney/scripts.pory"
	.string "Bueno. Tú te lo pierdes…$"
# 1288 "data/maps/MtChimney/scripts.pory"

# 1289 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 1290 "data/maps/MtChimney/scripts.pory"
	.string "Hay un METEORITO dentro de\n"
# 1291 "data/maps/MtChimney/scripts.pory"
	.string "una extraña máquina…\p"
# 1292 "data/maps/MtChimney/scripts.pory"
	.string "Parece que la máquina está almacenando\n"
# 1293 "data/maps/MtChimney/scripts.pory"
	.string "energía dentro del METEORITO.$"
# 1294 "data/maps/MtChimney/scripts.pory"

# 1295 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 1296 "data/maps/MtChimney/scripts.pory"
	.string "¡El Equipo Magma nos supera en número,\n"
# 1297 "data/maps/MtChimney/scripts.pory"
	.string "¡Pero tenemos chance si los superamos\len poder!$"
# 1298 "data/maps/MtChimney/scripts.pory"

# 1299 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 1300 "data/maps/MtChimney/scripts.pory"
	.string "Hay un METEORITO dentro de\n"
# 1301 "data/maps/MtChimney/scripts.pory"
	.string "una extraña máquina…\p"
# 1302 "data/maps/MtChimney/scripts.pory"
	.string "¿Quieres sacar el METEORITO?$"
# 1303 "data/maps/MtChimney/scripts.pory"

# 1304 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 1305 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} sacó el METEORITO\n"
# 1306 "data/maps/MtChimney/scripts.pory"
	.string "de la extraña máquina.$"
# 1307 "data/maps/MtChimney/scripts.pory"

# 1308 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 1309 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} dejó el METEORITO\n"
# 1310 "data/maps/MtChimney/scripts.pory"
	.string "donde estaba.$"
# 1311 "data/maps/MtChimney/scripts.pory"

# 1312 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 1313 "data/maps/MtChimney/scripts.pory"
	.string "Esta extraña máquina…\n"
# 1314 "data/maps/MtChimney/scripts.pory"
	.string "No responde…$"
# 1315 "data/maps/MtChimney/scripts.pory"

# 1316 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 1317 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} DESFILADERO\n"
# 1318 "data/maps/MtChimney/scripts.pory"
	.string "PUEBLO LAVACALDA MÁS ADELANTE$"
# 1319 "data/maps/MtChimney/scripts.pory"

# 1320 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 1321 "data/maps/MtChimney/scripts.pory"
	.string "He estado en las fuentes termales\n"
# 1322 "data/maps/MtChimney/scripts.pory"
	.string "y he descansado mis pobres huesos.\l"
# 1323 "data/maps/MtChimney/scripts.pory"
	.string "¡Ahora me siento fuerte como un roble!$"
# 1324 "data/maps/MtChimney/scripts.pory"

# 1325 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 1326 "data/maps/MtChimney/scripts.pory"
	.string "Vaya, vaya, vaya…\n"
# 1327 "data/maps/MtChimney/scripts.pory"
	.string "Tienes un estilo increíble luchando.$"
# 1328 "data/maps/MtChimney/scripts.pory"

# 1329 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 1330 "data/maps/MtChimney/scripts.pory"
	.string "Soy una POKéABU con mucha experiencia,\n"
# 1331 "data/maps/MtChimney/scripts.pory"
	.string "pero aún me pueden dar una lección…$"
# 1332 "data/maps/MtChimney/scripts.pory"

# 1333 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 1334 "data/maps/MtChimney/scripts.pory"
	.string "Gracias, joven. Me ha hecho ilusión\n"
# 1335 "data/maps/MtChimney/scripts.pory"
	.string "enfrentarme a las nuevas generaciones.\p"
# 1336 "data/maps/MtChimney/scripts.pory"
	.string "No dudes en venir a verme en alguna\n"
# 1337 "data/maps/MtChimney/scripts.pory"
	.string "otra ocasión para combatir de nuevo.$"
# 1338 "data/maps/MtChimney/scripts.pory"

# 1339 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 1340 "data/maps/MtChimney/scripts.pory"
	.string "Si eres capaz de fundir tu corazón\n"
# 1341 "data/maps/MtChimney/scripts.pory"
	.string "con los de tus POKéMON, sin duda\l"
# 1342 "data/maps/MtChimney/scripts.pory"
	.string "lograrás todo lo que te propongas.$"
# 1343 "data/maps/MtChimney/scripts.pory"

# 1344 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 1345 "data/maps/MtChimney/scripts.pory"
	.string "Vaya, vaya, vaya…\n"
# 1346 "data/maps/MtChimney/scripts.pory"
	.string "Tienes un estilo increíble luchando.$"
# 1347 "data/maps/MtChimney/scripts.pory"

# 1348 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 1349 "data/maps/MtChimney/scripts.pory"
	.string "Es posible que tu corazón y los de tus\n"
# 1350 "data/maps/MtChimney/scripts.pory"
	.string "POKéMON sean sólo uno.$"
# 1351 "data/maps/MtChimney/scripts.pory"

# 1352 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 1353 "data/maps/MtChimney/scripts.pory"
	.string "Estoy la mar de nerviosa. Tengo que\n"
# 1354 "data/maps/MtChimney/scripts.pory"
	.string "descargar adrenalina. ¡Vamos a luchar!$"
# 1355 "data/maps/MtChimney/scripts.pory"

# 1356 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 1357 "data/maps/MtChimney/scripts.pory"
	.string "Me he quedado la mar de tranquila…$"
# 1358 "data/maps/MtChimney/scripts.pory"

# 1359 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 1360 "data/maps/MtChimney/scripts.pory"
	.string "No hay nada como un poco de ejercicio\n"
# 1361 "data/maps/MtChimney/scripts.pory"
	.string "para recuperar el buen humor.$"
# 1362 "data/maps/MtChimney/scripts.pory"

# 1363 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 1364 "data/maps/MtChimney/scripts.pory"
	.string "Por fin he llegado al MONTE CENIZO.\n"
# 1365 "data/maps/MtChimney/scripts.pory"
	.string "¡Y ahora quiero un combate POKéMON!$"
# 1366 "data/maps/MtChimney/scripts.pory"

# 1367 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 1368 "data/maps/MtChimney/scripts.pory"
	.string "Tu manera de luchar…\n"
# 1369 "data/maps/MtChimney/scripts.pory"
	.string "¡es como una erupción volcánica!$"
# 1370 "data/maps/MtChimney/scripts.pory"

# 1371 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 1372 "data/maps/MtChimney/scripts.pory"
	.string "Pues sí, por fin he llegado al MONTE\n"
# 1373 "data/maps/MtChimney/scripts.pory"
	.string "CENIZO y no me voy a dedicar\l"
# 1374 "data/maps/MtChimney/scripts.pory"
	.string "sólo a hacer visitas…\p"
# 1375 "data/maps/MtChimney/scripts.pory"
	.string "También quiero luchar un poquito\n"
# 1376 "data/maps/MtChimney/scripts.pory"
	.string "y comprar GALLETAS de recuerdo.$"
# 1377 "data/maps/MtChimney/scripts.pory"

# 1378 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 1379 "data/maps/MtChimney/scripts.pory"
	.string "Desde que fui a los baños termales,\n"
# 1380 "data/maps/MtChimney/scripts.pory"
	.string "me siento como nueva.\l"
# 1381 "data/maps/MtChimney/scripts.pory"
	.string "¡Seguro que te gano!$"
# 1382 "data/maps/MtChimney/scripts.pory"

# 1383 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 1384 "data/maps/MtChimney/scripts.pory"
	.string "¡Achís!\n"
# 1385 "data/maps/MtChimney/scripts.pory"
	.string "¡Creo que he pillado frío!$"
# 1386 "data/maps/MtChimney/scripts.pory"

# 1387 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 1388 "data/maps/MtChimney/scripts.pory"
	.string "Mejor me vuelvo a los baños…\n"
# 1389 "data/maps/MtChimney/scripts.pory"
	.string "¿Te apuntas?\p"
# 1390 "data/maps/MtChimney/scripts.pory"
	.string "Ya, ya sé que tienes cosas más\n"
# 1391 "data/maps/MtChimney/scripts.pory"
	.string "importantes que hacer…$"
# 1392 "data/maps/MtChimney/scripts.pory"

# 1393 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 1394 "data/maps/MtChimney/scripts.pory"
	.string "¡Esta montaña está que arde! ¡Está\n"
# 1395 "data/maps/MtChimney/scripts.pory"
	.string "llena de gente impetuosa y apasionada!$"
# 1396 "data/maps/MtChimney/scripts.pory"

# 1397 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 1398 "data/maps/MtChimney/scripts.pory"
	.string "¡Me has dejado echando humo!$"
# 1399 "data/maps/MtChimney/scripts.pory"

# 1400 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 1401 "data/maps/MtChimney/scripts.pory"
	.string "¡Debería ir a los BAÑOS TERMALES\n"
# 1402 "data/maps/MtChimney/scripts.pory"
	.string "de LAVACALDA, como hacen todos!$"
# 1403 "data/maps/MtChimney/scripts.pory"

# 1404 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 1405 "data/maps/MtChimney/scripts.pory"
	.string "Me gusta la gente entusiasta como tú.\n"
# 1406 "data/maps/MtChimney/scripts.pory"
	.string "Te voy a registrar en mi POKéNAV.$"
# 1407 "data/maps/MtChimney/scripts.pory"

# 1408 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 1409 "data/maps/MtChimney/scripts.pory"
	.string "¡Hay tanta gente que rebosa energía\n"
# 1410 "data/maps/MtChimney/scripts.pory"
	.string "a mi alrededor que no puedo perder!$"
# 1411 "data/maps/MtChimney/scripts.pory"

# 1412 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 1413 "data/maps/MtChimney/scripts.pory"
	.string "¡Se ve que a ti te gusta\n"
# 1414 "data/maps/MtChimney/scripts.pory"
	.string "escaldar a la gente!$"
# 1415 "data/maps/MtChimney/scripts.pory"

# 1416 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 1417 "data/maps/MtChimney/scripts.pory"
	.string "Va a ser que me he abrigado demasiado\n"
# 1418 "data/maps/MtChimney/scripts.pory"
	.string "para el calor que hace por aquí.$"
# 1419 "data/maps/MtChimney/scripts.pory"

# 1420 "data/maps/MtChimney/scripts.pory"

# 1421 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieYouCanDoIt:
# 1422 "data/maps/MtChimney/scripts.pory"
	.string "Ahora, {PLAYER}, voy a continuar a\n"
# 1423 "data/maps/MtChimney/scripts.pory"
	.string "ayudar a mis Reclutas a combatir al\l"
# 1424 "data/maps/MtChimney/scripts.pory"
	.string "Equipo Magma. Están atacándolos en\l"
# 1425 "data/maps/MtChimney/scripts.pory"
	.string "grupo ahora y realmente me están\l"
# 1426 "data/maps/MtChimney/scripts.pory"
	.string "cansando con su cobardía.\p"
# 1427 "data/maps/MtChimney/scripts.pory"
	.string "¡Tú puedes derrotar a {COLOR RED}Maxie{COLOR DARK_GRAY}!\n"
# 1428 "data/maps/MtChimney/scripts.pory"
	.string "No te preocupes, que no es alguien que\l"
# 1429 "data/maps/MtChimney/scripts.pory"
	.string "pueda preparar un “Plan B”.\p"
# 1430 "data/maps/MtChimney/scripts.pory"
	.string "Créeme…\p"
# 1431 "data/maps/MtChimney/scripts.pory"
	.string "Bueno, sigue adelante, niñ{OA}, venceremos\n"
# 1432 "data/maps/MtChimney/scripts.pory"
	.string "al Equipo Magma juntos.$"
# 1433 "data/maps/MtChimney/scripts.pory"

# 1434 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 1435 "data/maps/MtChimney/scripts.pory"
	.string "¿¡Qué!?\n"
# 1436 "data/maps/MtChimney/scripts.pory"
	.string "El {COLOR RED}Meteorito{COLOR DARK_GRAY}…\l"
# 1437 "data/maps/MtChimney/scripts.pory"
	.string "Ha sido desconectado de la fuente de\l"
# 1438 "data/maps/MtChimney/scripts.pory"
	.string "poder…\p"
# 1439 "data/maps/MtChimney/scripts.pory"
	.string "Pero si llegamos antes que ese Archie…\n"
# 1440 "data/maps/MtChimney/scripts.pory"
	.string "¡Y-Y que todo el Equipo Aqua también!\l¿Quién pudo ser?\pSanto Arceus, tendría que haber traído a\nmis Pokémon más fuertes…$"
# 1441 "data/maps/MtChimney/scripts.pory"

# 1442 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 1443 "data/maps/MtChimney/scripts.pory"
	.string "Un{A} niñ{OA}… ¡¿Qué estás haciendo aquí!?\p"
# 1444 "data/maps/MtChimney/scripts.pory"
	.string "Creí que Tabitha y Courtney serían\n"
# 1445 "data/maps/MtChimney/scripts.pory"
	.string "defensa suficiente… Apuesto a que ese\l"
# 1446 "data/maps/MtChimney/scripts.pory"
	.string "Archie te ha ayudado…\p"
# 1447 "data/maps/MtChimney/scripts.pory"
	.string "Pero eso es lo de menos. El {COLOR LIGHT_RED SHADOW RED}Equipo Magma{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
# 1448 "data/maps/MtChimney/scripts.pory"
	.string "y yo, {COLOR RED}su Líder Maxie{COLOR DARK_GRAY}, tenemos objetivos\l"
# 1449 "data/maps/MtChimney/scripts.pory"
	.string "tan grandes que este mero contratiempo\l"
# 1450 "data/maps/MtChimney/scripts.pory"
	.string "no significa nada.\p"
# 1451 "data/maps/MtChimney/scripts.pory"
	.string "La juventud es el futuro, ¿Sabes?\n"
# 1452 "data/maps/MtChimney/scripts.pory"
	.string "Por ese motivo, debo educarte.\p"
# 1453 "data/maps/MtChimney/scripts.pory"
	.string "Al derrotarte, reactivaré la máquina, y\n"
# 1454 "data/maps/MtChimney/scripts.pory"
	.string "con ella formaré una {COLOR RED}Piedra Activadora{COLOR DARK_GRAY}\l"
# 1455 "data/maps/MtChimney/scripts.pory"
	.string "con el poder suficiente para controlar\l"
# 1456 "data/maps/MtChimney/scripts.pory"
	.string "al {COLOR LIGHT_RED SHADOW RED}Legendario Durmiente del Magma{COLOR DARK_GRAY SHADOW LIGHT_GRAY}…\l"
# 1457 "data/maps/MtChimney/scripts.pory"
	.string "Entonces, ¡Podremos cumplir nuestro\l"
# 1458 "data/maps/MtChimney/scripts.pory"
	.string "objetivo!\p¿Que cuál es, preguntas? No, eso es\n"
# 1459 "data/maps/MtChimney/scripts.pory"
	.string "para la siguiente clase.\p"
# 1460 "data/maps/MtChimney/scripts.pory"
	.string "Y ahora, como es debido, déjame darte\n"
# 1461 "data/maps/MtChimney/scripts.pory"
	.string "un examen que se quemará en tu\l"
# 1462 "data/maps/MtChimney/scripts.pory"
	.string "memoria.$"
# 1463 "data/maps/MtChimney/scripts.pory"

# 1464 "data/maps/MtChimney/scripts.pory"

# 1465 "data/maps/MtChimney/scripts.pory"

# 1466 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 1467 "data/maps/MtChimney/scripts.pory"
	.string "¿¡C-cómo!?\n"
# 1468 "data/maps/MtChimney/scripts.pory"
	.string "¿Qué quieres decir con eso?\p"
# 1469 "data/maps/MtChimney/scripts.pory"
	.string "… … … No importa, estaré ahí en un\n"
# 1470 "data/maps/MtChimney/scripts.pory"
	.string "minuto.\p"
# 1471 "data/maps/MtChimney/scripts.pory"
	.string "Supongo… Que tendremos que proceder\n"
# 1472 "data/maps/MtChimney/scripts.pory"
	.string "con el Plan de Emergencia…\l"
# 1473 "data/maps/MtChimney/scripts.pory"
	.string "No creí que llegara a esto.\p"
# 1474 "data/maps/MtChimney/scripts.pory"
	.string "No falles con esto, ¿Entiendes?$"
# 1475 "data/maps/MtChimney/scripts.pory"

# 1476 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma2:
# 1477 "data/maps/MtChimney/scripts.pory"
	.string "Lo siento, niñ{OA}, pero los adultos tenemos\n"
# 1478 "data/maps/MtChimney/scripts.pory"
	.string "cosas por hacer. La próxima vez que nos\l"
# 1479 "data/maps/MtChimney/scripts.pory"
	.string "veamos, no me contendré.$"
# 1480 "data/maps/MtChimney/scripts.pory"

# 1481 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 1482 "data/maps/MtChimney/scripts.pory"
	.string "Veo que nuestros Reclutas no poseen\nsuficiente poder para derrotar\la un{A} simple niñ{OA}.\p"
# 1483 "data/maps/MtChimney/scripts.pory"
	.string "Pero llegas tarde, ¿No lo ves?\p"
# 1484 "data/maps/MtChimney/scripts.pory"
	.string "¡Nuestro Jefe liberará el poder\ndel Meteorito!$"
# 1485 "data/maps/MtChimney/scripts.pory"

# 1486 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 1487 "data/maps/MtChimney/scripts.pory"
	.string "Equipo… Aqua…$"
# 1488 "data/maps/MtChimney/scripts.pory"

# 1489 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 1490 "data/maps/MtChimney/scripts.pory"
	.string "¡Jefe, es tu oportunidad!$"
# 1491 "data/maps/MtChimney/scripts.pory"

# 1492 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyIntro:
# 1493 "data/maps/MtChimney/scripts.pory"
	.string "Intrus{OA}… Rango de visión…\n"
# 1494 "data/maps/MtChimney/scripts.pory"
	.string "Analizando…\p"
# 1495 "data/maps/MtChimney/scripts.pory"
	.string "… … …\p"
# 1496 "data/maps/MtChimney/scripts.pory"
	.string "Procediendo… Protocolo B…$"
# 1497 "data/maps/MtChimney/scripts.pory"

# 1498 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyDefeat:
# 1499 "data/maps/MtChimney/scripts.pory"
	.string "Interesante…$"
# 1500 "data/maps/MtChimney/scripts.pory"

# 1501 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyPostBattle:
# 1502 "data/maps/MtChimney/scripts.pory"
	.string "Maxie… Lo siento tanto…\n"
# 1503 "data/maps/MtChimney/scripts.pory"
	.string "No pude… Detener…$"
# 1504 "data/maps/MtChimney/scripts.pory"

# 1505 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieStop:
# 1506 "data/maps/MtChimney/scripts.pory"
	.string "¿Atacando a un{A} niñ{OA} indefens{OA}?\p"
# 1507 "data/maps/MtChimney/scripts.pory"
	.string "Compórtense como los adultos que son.$"
# 1508 "data/maps/MtChimney/scripts.pory"

# 1509 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieDontWorry:
# 1510 "data/maps/MtChimney/scripts.pory"
	.string "No te preocupes, {PLAYER}, estamos en\n"
# 1511 "data/maps/MtChimney/scripts.pory"
	.string "esta misión para detener al Equipo\l"
# 1512 "data/maps/MtChimney/scripts.pory"
	.string "Magma juntos. No dejaré que te ataquen\l"
# 1513 "data/maps/MtChimney/scripts.pory"
	.string "entre dos de esa manera, ¡Ni yo que soy\l"
# 1514 "data/maps/MtChimney/scripts.pory"
	.string "un pirata haría trucos tan sucios!\p"
# 1515 "data/maps/MtChimney/scripts.pory"
	.string "Principalmente porque no los necesito…$"
# 1516 "data/maps/MtChimney/scripts.pory"

# 1517 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaYouHaventSeen:
# 1518 "data/maps/MtChimney/scripts.pory"
	.string "¡N-{PAUSE 8}n-{PAUSE 16}n-{PAUSE 32}NO ES\n"
# 1519 "data/maps/MtChimney/scripts.pory"
	.string "LO Ú-{PAUSE 16}ÚLTIMO QUE VERÁN DE MÍ!\l"
# 1520 "data/maps/MtChimney/scripts.pory"
	.string "¡Muajajaja!$"
# 1521 "data/maps/MtChimney/scripts.pory"

# 1522 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 1523 "data/maps/MtChimney/scripts.pory"
	.string "¡Nos del Equipo Magma estamos haciendo\n"
# 1524 "data/maps/MtChimney/scripts.pory"
	.string "lo posible para mejorar la vida de los\l"
# 1525 "data/maps/MtChimney/scripts.pory"
	.string "humanos!\p"
# 1526 "data/maps/MtChimney/scripts.pory"
	.string "Todos serán felices si ganamos.$"
# 1527 "data/maps/MtChimney/scripts.pory"

# 1528 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 1529 "data/maps/MtChimney/scripts.pory"
	.string "¿¡CÓMO QUE PERDÍ!?$"
# 1530 "data/maps/MtChimney/scripts.pory"

# 1531 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 1532 "data/maps/MtChimney/scripts.pory"
	.string "Nuestro Jefe siempre dice que todos\n"
# 1533 "data/maps/MtChimney/scripts.pory"
	.string "serán felices si él gana, pero… ¿Porqué\l"
# 1534 "data/maps/MtChimney/scripts.pory"
	.string "entonces somos tan odiados?$"
# 1535 "data/maps/MtChimney/scripts.pory"

# 1536 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 1537 "data/maps/MtChimney/scripts.pory"
	.string "Si hubiera más tierra, ¡Podría comprarme\n"
# 1538 "data/maps/MtChimney/scripts.pory"
	.string "mi propia casa!\p"
# 1539 "data/maps/MtChimney/scripts.pory"
	.string "Supongo que aún así habría que\n"
# 1540 "data/maps/MtChimney/scripts.pory"
	.string "comprarla, y seguro seguría siendo\l"
# 1541 "data/maps/MtChimney/scripts.pory"
	.string "carísima…$"
# 1542 "data/maps/MtChimney/scripts.pory"

# 1543 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 1544 "data/maps/MtChimney/scripts.pory"
	.string "¿Es la falta de tierra el motivo de la\n"
# 1545 "data/maps/MtChimney/scripts.pory"
	.string "falta de casas para la gente?$"
# 1546 "data/maps/MtChimney/scripts.pory"

# 1547 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 1548 "data/maps/MtChimney/scripts.pory"
	.string "Creo que el verdadero enemigo aquí es\n"
# 1549 "data/maps/MtChimney/scripts.pory"
	.string "el capitalismo, ¿No?\p"
# 1550 "data/maps/MtChimney/scripts.pory"
	.string "¿Será que puedo convencer al Jefe de\n"
# 1551 "data/maps/MtChimney/scripts.pory"
	.string "usar el poder que quiere reunir para\l"
# 1552 "data/maps/MtChimney/scripts.pory"
	.string "expandir el comunismo?$"
# 1553 "data/maps/MtChimney/scripts.pory"

# 1554 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 1555 "data/maps/MtChimney/scripts.pory"
	.string "Estos del Equipo Aqua, siempre\n"
# 1556 "data/maps/MtChimney/scripts.pory"
	.string "persiguiéndonos…\p"
# 1557 "data/maps/MtChimney/scripts.pory"
	.string "¡¿Tan enamorados de nosotros están?!$"
# 1558 "data/maps/MtChimney/scripts.pory"

# 1559 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 1560 "data/maps/MtChimney/scripts.pory"
	.string "Quiero un helado.$"
# 1561 "data/maps/MtChimney/scripts.pory"

# 1562 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 1563 "data/maps/MtChimney/scripts.pory"
	.string "No me gustan estos trajes… ¡Hace que\n"
# 1564 "data/maps/MtChimney/scripts.pory"
	.string "todos nos veamos iguales! ¡Me hace\l"
# 1565 "data/maps/MtChimney/scripts.pory"
	.string "morirme de calor!$"
# 1566 "data/maps/MtChimney/scripts.pory"

# 1567 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 1568 "data/maps/MtChimney/scripts.pory"
	.string "¡Sabía que vendrías, {PLAYER}!\p"
# 1569 "data/maps/MtChimney/scripts.pory"
	.string "¡Grrr! Tengo que ir a derrotar a Maxie, si\n"
# 1570 "data/maps/MtChimney/scripts.pory"
	.string "logra encender esa máquina, ¡El volcán\l"
# 1571 "data/maps/MtChimney/scripts.pory"
	.string "hará erupción!$"
# 1572 "data/maps/MtChimney/scripts.pory"

# 1573 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 1574 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, odio tener que pedirle esto\n"
# 1575 "data/maps/MtChimney/scripts.pory"
	.string "a un{A} niñ{OA}, pero necesito que vayas a\l"
# 1576 "data/maps/MtChimney/scripts.pory"
	.string "derrotar a Maxie por mí, ¿Lo harías?$"
# 1577 "data/maps/MtChimney/scripts.pory"

# 1578 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 1579 "data/maps/MtChimney/scripts.pory"
	.string "¡{PLAYER}!\p"
# 1580 "data/maps/MtChimney/scripts.pory"
	.string "¡Ja ja ja! ¡Sabía que podías hacerlo!\l"
# 1581 "data/maps/MtChimney/scripts.pory"
	.string "… … … …\l"
# 1582 "data/maps/MtChimney/scripts.pory"
	.string "Ah, ¿Eso?\p"
# 1583 "data/maps/MtChimney/scripts.pory"
	.string "¡No te preocupes, cosa de adultos!\n"
# 1584 "data/maps/MtChimney/scripts.pory"
	.string "Pero lo que quiero saber es… ¿De qué\l"
# 1585 "data/maps/MtChimney/scripts.pory"
	.string "lado estás, niñ{OA}?\l"
# 1586 "data/maps/MtChimney/scripts.pory"
	.string "¡Ah, no importa, siempre y cuando nos\l"
# 1587 "data/maps/MtChimney/scripts.pory"
	.string "ayudes a derrotar a esos idiotas!\p"
# 1588 "data/maps/MtChimney/scripts.pory"
	.string "Espero nos volvamos a ver pronto,\n"
# 1589 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}.$"

MtChimney_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
# 237 "data/maps/MtChimney/scripts.pory"
	.string "{SHAKE_SCREEN 8 10 3 0}¡GROUUUUUUUDON!$"

MtChimney_EventScript_Golbat_Text_0:
# 274 "data/maps/MtChimney/scripts.pory"
	.string "¡BAAAT!$"

MtChimney_EventScript_Krokorok_Text_0:
# 277 "data/maps/MtChimney/scripts.pory"
	.string "¡KRO-KRO, ROK-ROK-ROK!$"

MtChimney_EventScript_Frillish_Text_0:
# 281 "data/maps/MtChimney/scripts.pory"
	.string "¡Liiiiishhhh!$"

MtChimney_EventScript_Pyroar_Text_0:
# 285 "data/maps/MtChimney/scripts.pory"
	.string "¡Py-py-pyyyyyyy!$"

MtChimney_EventScript_Sharpedo_Text_0:
# 289 "data/maps/MtChimney/scripts.pory"
	.string "¡SHAAAAAARRRRRRR!$"

MtChimney_EventScript_Monferno_Text_0:
# 293 "data/maps/MtChimney/scripts.pory"
	.string "¡NONONONONONOOOOO!$"

MtChimney_EventScript_Pignite_Text_0:
# 298 "data/maps/MtChimney/scripts.pory"
	.string "{COLOR BLUE}(suspiro){COLOR DARK_GRAY}{PAUSE 16}…{PAUSE 16}…{PAUSE 16}…{PAUSE 16}…{PAUSE 16}…{PAUSE 16}…\p"
	.string "{PAUSE 16}…{PAUSE 16}…{PAUSE 16}…{PAUSE 16}…{PAUSE 16}…{PAUSE 16}…{PAUSE 16}…$"

MtChimney_EventScript_Pignite_Text_1:
# 302 "data/maps/MtChimney/scripts.pory"
	.string "Pig. {PAUSE 16}Nite.$"
