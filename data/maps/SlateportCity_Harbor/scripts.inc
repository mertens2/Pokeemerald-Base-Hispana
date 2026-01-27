SlateportCity_Harbor_MapScripts::
# 4 "data/maps/SlateportCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 0
# 6 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_SLATEPORT_HARBOR_STATE, 1
	goto_if_eq SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/SlateportCity_Harbor/scripts.pory"
	savebgm MUS_ENCOUNTER_AQUA
# 8 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxyperm LOCALID_HARBOR_CAPT_STERN, 12, 13
# 9 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_HARBOR_CAPT_STERN, MOVEMENT_TYPE_FACE_LEFT
# 10 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
	goto SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/SlateportCity_Harbor/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
	return


SlateportCity_Harbor_EventScript_AquaEscapeTrigger1::
# 19 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 20 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 1
# 21 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
	return


SlateportCity_Harbor_EventScript_AquaEscapeTrigger2::
# 25 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 26 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 2
# 27 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
	return


SlateportCity_Harbor_EventScript_AquaEscapeScene::
# 31 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 32 "data/maps/SlateportCity_Harbor/scripts.pory"
	special SpawnCameraObject
# 33 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 34 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_ARCHIE, Common_Movement_WalkInPlaceDown
# 35 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_GRUNT, Common_Movement_WalkInPlaceDown
# 36 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 37 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Archie
# 38 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_0, MSGBOX_INTERRUPT
# 39 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Unknown
# 40 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_1
# 41 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadeoutbgm 1
# 42 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_PIN
# 43 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_ARCHIE, Common_Movement_ExclamationMark
# 44 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_ARCHIE, Common_Movement_WalkInPlaceDown
# 45 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_GRUNT, Common_Movement_WalkInPlaceDown
# 46 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 47 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Archie
# 48 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_2
# 49 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Aqua
# 50 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_3, MSGBOX_INTERRUPT
# 51 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_4
# 52 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Archie
# 53 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_5
# 54 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_CAPT_STERN, Common_Movement_FaceDown
# 55 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Unknown
# 57 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_6
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_PIN
# 59 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_ARCHIE, Common_Movement_ExclamationMark
# 60 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_GRUNT, Common_Movement_ExclamationMark
# 61 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 62 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 63 "data/maps/SlateportCity_Harbor/scripts.pory"
	addobject LOCALID_HARBOR_DELTA
# 64 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Unknown
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_7
# 66 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_DELTA, SlateportCity_Harbor_Movement_DeltaEnter
# 67 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Archie
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_8
# 69 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Delta
# 70 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_9, MSGBOX_INTERRUPT
# 71 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Archie
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_10
# 74 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 76 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq SlateportCity_Harbor_EventScript_AquaEscapeScene_2
SlateportCity_Harbor_EventScript_AquaEscapeScene_1:
# 80 "data/maps/SlateportCity_Harbor/scripts.pory"
	addobject LOCALID_HARBOR_SHARPEDO
# 81 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxy LOCALID_HARBOR_SHARPEDO, 8, 12
# 82 "data/maps/SlateportCity_Harbor/scripts.pory"
	addobject LOCALID_HARBOR_SHARPEDO
# 83 "data/maps/SlateportCity_Harbor/scripts.pory"
	playmoncry SPECIES_SHARPEDO, CRY_MODE_NORMAL
# 84 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Archie
# 85 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_11
# 86 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 87 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 88 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Unknown
# 89 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_12
# 90 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_THUNDER
# 91 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 2
# 92 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitse
# 93 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_FAINT
# 94 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitse
# 95 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 97 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_HARBOR_SHARPEDO
# 98 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxyperm LOCALID_HARBOR_SHARPEDO, 23, 0
# 99 "data/maps/SlateportCity_Harbor/scripts.pory"
	addobject LOCALID_HARBOR_WINONA
# 100 "data/maps/SlateportCity_Harbor/scripts.pory"
	addobject LOCALID_HARBOR_ALTARIA
# 101 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 102 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_PIN
# 103 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_ARCHIE, Common_Movement_ExclamationMark
# 104 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_GRUNT, Common_Movement_ExclamationMark
# 105 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 106 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 107 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_ARCHIE, Common_Movement_WalkInPlaceUp
# 108 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_GRUNT, Common_Movement_WalkInPlaceUp
# 109 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 110 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 111 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Archie
# 112 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_13
# 113 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportCity_Harbor_Movement_CameraPan
# 114 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 8
# 115 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_14
# 116 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 117 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Winona
# 118 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_15
# 119 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Archie
# 120 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_16
# 121 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 123 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_WINONA, SlateportCity_Harbor_Movement_WinonaDown
# 124 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_ALTARIA, SlateportCity_Harbor_Movement_WinonaDown
# 125 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportCity_Harbor_Movement_CameraDown
# 126 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 127 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Winona
# 128 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_17
# 129 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 131 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_WINONA, SlateportCity_Harbor_Movement_JumpDown
# 132 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 4
# 133 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 1
# 134 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_HARBOR_ALTARIA
# 135 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_BALL
# 136 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 1
# 137 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Archie
# 138 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_18
# 139 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Winona
# 140 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_19, MSGBOX_INTERRUPT
# 141 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 143 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 2
# 144 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8005, 2
# 145 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8006, 5
# 146 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8007, 4
# 147 "data/maps/SlateportCity_Harbor/scripts.pory"
	special ShakeCamera
# 148 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Winona
# 149 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_20
# 150 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 152 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_PIN
# 153 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_ARCHIE, Common_Movement_ExclamationMark
# 154 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_GRUNT, Common_Movement_ExclamationMark
# 155 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 156 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 157 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Winona
# 158 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_21
# 159 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_WINONA, SlateportCity_Harbor_Movement_WinonaLeave
# 160 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Archie
# 161 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_22
# 162 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Aqua
# 163 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_23
# 164 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 165 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 167 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 168 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 169 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_DELTA
# 170 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_HARBOR_DELTA
# 171 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_HARBOR_WINONA
# 172 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 173 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 174 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SUBMARINE, SlateportCity_Harbor_Movement_SubmarineExit
# 175 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SUBMARINE
# 177 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 2
# 178 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_MET_TEAM_AQUA_HARBOR
# 179 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
# 180 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_ARCHIE, Common_Movement_FaceDown
# 181 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_GRUNT, Common_Movement_FaceDown
# 182 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 183 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Archie
# 184 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_24
# 185 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 187 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 188 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 189 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 190 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_HARBOR_ARCHIE
# 191 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_HARBOR_GRUNT
# 192 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxy LOCALID_HARBOR_CAPT_STERN, 7, 12
# 193 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_HARBOR_CAPT_STERN, Common_Movement_FacePlayer
# 194 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 195 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 196 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 197 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadedefaultbgm
# 198 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 199 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Stern
# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_25
# 201 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Player
# 202 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_26
# 203 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Stern
# 204 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_27, MSGBOX_INTERRUPT
# 205 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_28
# 207 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Player
# 208 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_29
# 209 "data/maps/SlateportCity_Harbor/scripts.pory"
	special RemoveCameraObject
# 211 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 212 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNTS_BLOCKING_ENTRANCE
# 213 "data/maps/SlateportCity_Harbor/scripts.pory"
	clearflag FLAG_AQUA_HIDEOUT_SET_DELTA_DIVISION
# 214 "data/maps/SlateportCity_Harbor/scripts.pory"
	copyobjectxytoperm LOCALID_HARBOR_CAPT_STERN
# 215 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_HARBOR_CAPT_STERN, MOVEMENT_TYPE_FACE_RIGHT
# 216 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 217 "data/maps/SlateportCity_Harbor/scripts.pory"
	releaseall
	end

SlateportCity_Harbor_EventScript_AquaEscapeScene_2:
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_JumpLeft
# 78 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene_1


# 221 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_DeltaEnter:
# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 223 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 224 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_up
	step_end

# 227 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_WinonaDown:
# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
	step_end

# 231 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_CameraDown:
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
	step_end

# 235 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_JumpLeft:
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"
	face_right
# 237 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock_facing_direction
# 238 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_left
# 239 "data/maps/SlateportCity_Harbor/scripts.pory"
	unlock_facing_direction
	step_end

# 242 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_CameraPan:
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
	step_end

# 246 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_JumpDown:
# 247 "data/maps/SlateportCity_Harbor/scripts.pory"
	enable_jump_landing_ground_effect
# 248 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_down
# 249 "data/maps/SlateportCity_Harbor/scripts.pory"
	disable_jump_landing_ground_effect
	step_end

# 252 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_PlayerLeave:
# 253 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 253 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 254 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 254 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 254 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 254 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
	step_end

# 257 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SubmarineExit:
# 258 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 258 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 259 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 259 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 259 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
	step_end

# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_WinonaLeave:
# 263 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 263 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 264 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_up
# 265 "data/maps/SlateportCity_Harbor/scripts.pory"
	enable_jump_landing_ground_effect
# 266 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 267 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
	step_end

# 270 "data/maps/SlateportCity_Harbor/scripts.pory"

# 271 "data/maps/SlateportCity_Harbor/scripts.pory"

# 272 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryAttendant::
# 273 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 274 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 275 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_AskForTicket
# 276 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FerryServiceUnavailable, MSGBOX_DEFAULT
# 277 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 278 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 279 "data/maps/SlateportCity_Harbor/scripts.pory"

# 280 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskForTicket::
# 281 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 282 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_FlashedTicketWhereTo
# 283 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 284 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 285 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 286 "data/maps/SlateportCity_Harbor/scripts.pory"

# 287 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination::
# 288 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_ON_SS_TIDAL, SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier
# 289 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 18, 8, MULTI_SSTIDAL_SLATEPORT_NO_BF, 2, FALSE
# 290 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 291 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 292 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 293 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 294 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 295 "data/maps/SlateportCity_Harbor/scripts.pory"

# 296 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier::
# 297 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 17, 6, MULTI_SSTIDAL_SLATEPORT_WITH_BF, 2, FALSE
# 298 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 299 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 300 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_BattleFrontier
# 301 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 302 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 303 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 304 "data/maps/SlateportCity_Harbor/scripts.pory"

# 305 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused. Should be impossible for player to reach Ferry without having received SS Tidal ticket
# 306 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NoTicket::
# 307 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_YouMustHaveTicket, MSGBOX_DEFAULT
# 308 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 309 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 310 "data/maps/SlateportCity_Harbor/scripts.pory"

# 311 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Lilycove::
# 312 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LilycoveItIs, MSGBOX_YESNO
# 313 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 314 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT
# 315 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 316 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 317 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 318 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 319 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 320 "data/maps/SlateportCity_Harbor/scripts.pory"

# 321 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BattleFrontier::
# 322 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 323 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 324 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 325 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 326 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 327 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 328 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 329 "data/maps/SlateportCity_Harbor/scripts.pory"

# 330 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseNewDestination::
# 331 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhereWouldYouLikeToGo
# 332 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 333 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 334 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 335 "data/maps/SlateportCity_Harbor/scripts.pory"

# 336 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry::
# 337 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 338 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 339 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 340 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 341 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 342 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_SLATEPORT_CITY_HARBOR
# 343 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SlateportCity_Harbor_EventScript_BoardFerryNorth
# 344 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_Harbor_EventScript_BoardFerryEast
# 345 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 346 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideplayer
# 347 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 348 "data/maps/SlateportCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 349 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 350 "data/maps/SlateportCity_Harbor/scripts.pory"

# 351 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CancelDestinationSelect::
# 352 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 353 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 354 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 355 "data/maps/SlateportCity_Harbor/scripts.pory"

# 356 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryEast::
# 357 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryEast
# 358 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 359 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 360 "data/maps/SlateportCity_Harbor/scripts.pory"

# 361 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryNorth::
# 362 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryNorth
# 363 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 364 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 365 "data/maps/SlateportCity_Harbor/scripts.pory"

# 366 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryEast:
# 367 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 368 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 369 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 370 "data/maps/SlateportCity_Harbor/scripts.pory"

# 371 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryNorth:
# 372 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 373 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 374 "data/maps/SlateportCity_Harbor/scripts.pory"

# 375 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor::
# 376 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 377 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 378 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather
# 379 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 380 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 381 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 382 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_0x8004, 2, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather  @ Defeated both
# 383 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_AbnormalWeather, MSGBOX_DEFAULT
# 384 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 385 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 386 "data/maps/SlateportCity_Harbor/scripts.pory"

# 387 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather::
# 388 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday, MSGBOX_DEFAULT
# 389 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 390 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 391 "data/maps/SlateportCity_Harbor/scripts.pory"

# 392 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CountDefeatedLegendary::
# 393 "data/maps/SlateportCity_Harbor/scripts.pory"
	addvar VAR_0x8004, 1
# 394 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 395 "data/maps/SlateportCity_Harbor/scripts.pory"

# 396 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FatMan::
# 397 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SubTooSmallForMe, MSGBOX_NPC
# 398 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 399 "data/maps/SlateportCity_Harbor/scripts.pory"

# 400 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern::
# 401 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 402 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 403 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment
# 404 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive
# 405 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_SLATEPORT_HARBOR_STATE, 2, SlateportCity_Harbor_EventScript_WhyStealSubmarine
# 406 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum, MSGBOX_DEFAULT
# 407 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 408 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 409 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 410 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 411 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 412 "data/maps/SlateportCity_Harbor/scripts.pory"

# 413 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_WhyStealSubmarine::
# 414 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Stern
# 415 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TeamAquaLeftNeedDive, MSGBOX_DEFAULT
# 416 "data/maps/SlateportCity_Harbor/scripts.pory"
	
# 417 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 418 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 419 "data/maps/SlateportCity_Harbor/scripts.pory"

# 420 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive::
# 421 "data/maps/SlateportCity_Harbor/scripts.pory"
	setspeaker Stern
# 422 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TeamAquaLeftNeedDive, MSGBOX_DEFAULT
# 423 "data/maps/SlateportCity_Harbor/scripts.pory"
	
# 424 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 425 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 426 "data/maps/SlateportCity_Harbor/scripts.pory"

# 427 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment::
# 428 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, SlateportCity_Harbor_EventScript_TradedScanner
# 429 "data/maps/SlateportCity_Harbor/scripts.pory"
	checkitem ITEM_SCANNER
# 430 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_Harbor_EventScript_AskToTradeScanner
# 431 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_FerryFinished
# 432 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry, MSGBOX_DEFAULT
# 433 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 434 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 435 "data/maps/SlateportCity_Harbor/scripts.pory"

# 436 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryFinished::
# 437 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FinishedMakingFerry, MSGBOX_DEFAULT
# 438 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 439 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"

# 441 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskToTradeScanner::
# 442 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WouldYouTradeScanner
# 443 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 444 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH, 2
# 445 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE, 2
# 446 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 447 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 448 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 449 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 450 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"

# 452 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TradedScanner::
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 454 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ThisWillHelpResearch, MSGBOX_DEFAULT
# 455 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 456 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 457 "data/maps/SlateportCity_Harbor/scripts.pory"

# 458 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FerryServiceUnavailable:
# 459 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
# 460 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're looking for a ship?\p"
# 461 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm sorry, the ferry service isn't\n"
# 462 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "available at present…$"
# 463 "data/maps/SlateportCity_Harbor/scripts.pory"

# 464 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_MayISeeYourTicket:
# 465 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 466 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "May I see your TICKET?$"
# 467 "data/maps/SlateportCity_Harbor/scripts.pory"

# 468 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_YouMustHaveTicket:
# 469 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 470 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm terribly sorry.\p"
# 471 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You must have a TICKET to board\n"
# 472 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ferry.$"
# 473 "data/maps/SlateportCity_Harbor/scripts.pory"

# 474 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FlashedTicketWhereTo:
# 475 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 476 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 477 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "And where would you like to go?$"
# 478 "data/maps/SlateportCity_Harbor/scripts.pory"

# 479 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SailAnotherTime:
# 480 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"
# 481 "data/maps/SlateportCity_Harbor/scripts.pory"

# 482 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LilycoveItIs:
# 483 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 484 "data/maps/SlateportCity_Harbor/scripts.pory"

# 485 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_BattleFrontierItIs:
# 486 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "BATTLE FRONTIER it is, then!$"
# 487 "data/maps/SlateportCity_Harbor/scripts.pory"

# 488 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_PleaseBoardFerry:
# 489 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 490 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "departure.$"
# 491 "data/maps/SlateportCity_Harbor/scripts.pory"

# 492 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhereWouldYouLikeToGo:
# 493 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"
# 494 "data/maps/SlateportCity_Harbor/scripts.pory"

# 495 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday:
# 496 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A journey to the bottom of the sea…\n"
# 497 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wonder what it'd be like?\p"
# 498 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'd love to go deep underwater like\n"
# 499 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "that someday.$"
# 500 "data/maps/SlateportCity_Harbor/scripts.pory"

# 501 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_AbnormalWeather:
# 502 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "For a ship to sail safely, we need to\n"
# 503 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "know about the weather!\p"
# 504 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Speaking of weather, I heard something\n"
# 505 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "from a guy at the WEATHER INSTITUTE.\p"
# 506 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "He was saying abnormal weather has\n"
# 507 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "been reported all over the place!\p"
# 508 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You should visit the WEATHER INSTITUTE\n"
# 509 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "and ask around!$"
# 510 "data/maps/SlateportCity_Harbor/scripts.pory"

# 511 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SubTooSmallForMe:
# 512 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wanted to go with CAPT. STERN on\n"
# 513 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ocean floor exploration.\p"
# 514 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But the sub's too small for me.\p"
# 515 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "If I squeezed in, there wouldn't be\n"
# 516 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "any room for the CAPTAIN…$"
# 517 "data/maps/SlateportCity_Harbor/scripts.pory"

# 518 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum:
# 519 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Those thugs…\p"
# 520 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They're the same lot who tried to rob\n"
# 521 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the DEVON GOODS at the MUSEUM.$"
# 522 "data/maps/SlateportCity_Harbor/scripts.pory"

# 523 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TeamAquaLeftNeedDive:
# 524 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¿Ah, que se fueron sin ti…?\p¡Ja! ¡Ahora sabes qué se siente!\pPero sin Buceo, ¡No podrás\nllegar a ellos!$"
# 525 "data/maps/SlateportCity_Harbor/scripts.pory"

# 526 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry:
# 527 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh, yes.\n"
# 528 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "MR. BRINEY came to our SHIPYARD.\p"
# 529 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It won't be long now before we finish\n"
# 530 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "making the ferry!$"
# 531 "data/maps/SlateportCity_Harbor/scripts.pory"

# 532 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FinishedMakingFerry:
# 533 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: {PLAYER}{KUN}!\p"
# 534 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We finally finished making the ferry\n"
# 535 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "S.S. TIDAL!\p"
# 536 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We couldn't have done it without\n"
# 537 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your friend MR. BRINEY.\p"
# 538 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please go for a short cruise on it!$"
# 539 "data/maps/SlateportCity_Harbor/scripts.pory"

# 540 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WouldYouTradeScanner:
# 541 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Oh?\n"
# 542 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, that item you have…\p"
# 543 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "That's a SCANNER! That would sure\n"
# 544 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "help us on our explorations.\p"
# 545 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, would you trade your\n"
# 546 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "SCANNER for something?\p"
# 547 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Like, say, a DEEPSEATOOTH or\n"
# 548 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "a DEEPSEASCALE that I have?$"
# 549 "data/maps/SlateportCity_Harbor/scripts.pory"

# 550 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow:
# 551 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Are you certain?\n"
# 552 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's useless to you, {PLAYER}{KUN}…\p"
# 553 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Well, okay, then. If you want to trade\n"
# 554 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your SCANNER, let me know.$"
# 555 "data/maps/SlateportCity_Harbor/scripts.pory"

# 556 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaTooth:
# 557 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 558 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEATOOTH?$"
# 559 "data/maps/SlateportCity_Harbor/scripts.pory"

# 560 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaScale:
# 561 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: So you'll trade it for\n"
# 562 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my DEEPSEASCALE?$"
# 563 "data/maps/SlateportCity_Harbor/scripts.pory"

# 564 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhichOneDoYouWant:
# 565 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Which one do you want?$"
# 566 "data/maps/SlateportCity_Harbor/scripts.pory"

# 567 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_HandedScannerToStern:
# 568 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} handed the SCANNER to\n"
# 569 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN.$"
# 570 "data/maps/SlateportCity_Harbor/scripts.pory"

# 571 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ThisWillHelpResearch:
# 572 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "CAPT. STERN: Thanks, {PLAYER}{KUN}!\n"
# 573 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "This will help our research a lot!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_0:
# 38 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Increíble, {PLAYER}!\n"
	.string "Así que nos has seguido desde el\l"
	.string "Monte Pyre hasta aquí, ¿Eh?\p"
	.string "Me impresiona tu dedicación, pero es en\n"
	.string "vano. Porque, con este Submarino y el\l"
	.string "Orbe Asul en nuestro poder,\l"
	.string "¡Despertaré al Pokémon Ancestral,\l"
	.string "{COLOR BLUE}Kyogre{COLOR DARK_GRAY}!\p"
	.string "No es tarde aún para unírtenos,\n"
	.string "¿Sabes?\l"
	.string "Pero si sigues empeñad{OA} en detenernos,\l"
	.string "{PAUSE 15}estaré en nuestra-{PAUSE 20}$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_1:
# 40 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡J-Jefe!\n"
	.string "¡El Submarino no responde!\l"
	.string "¡Alguien metió mano en los controles!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_2:
# 48 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¿¡QUÉ!?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_3:
# 50 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡D-{PAUSE 5}Deben ser esos idiotas!{PAUSE 15}\n"
	.string "Los que vimos en el Instituto\l"
	.string "Meteorológ-{PAUSE 25}$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_4:
# 51 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡AH!{PAUSE 15}\n"
	.string "¡O-{PAUSE 5}O-{PAUSE 5}O sea, quiero decir, es{EA} idiota {PAUSE 15}--\l"
	.string "en singular --{PAUSE 15} que vimos en el\l"
	.string "Insituto Meteorológico! ¡{PLAYER},\l"
	.string "creo que es!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_5:
# 53 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "....................\n"
	.string ".............\p"
	.string "¿Hay algo que no me estés contanto,\n"
	.string "Recluta?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_6:
# 57 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Meh. Así que este es el Gran Archie,\n"
	.string "¿Eh?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_7:
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Tomar control de este Submarino fue\n"
	.string "extremadamente fácil, sobretodo\l"
	.string "después de robarles información en\l"
	.string "ese Instituto.\p"
	.string "Parece ser que usted no estaba al\n"
	.string "tanto, qué buenos resultaron ser sus\l"
	.string "Reclutas.$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_8:
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Ese... Ese uniforme...\p"
	.string "¡Es del Equipo Delta!\p"
	.string "¿Siguen bajo operaciones?\n"
	.string "¡Dismantelamos el Equipo hace 10 años!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_9:
# 70 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Ah, sí, bajo orden suya y de Maxie.\p"
	.string "Apuesto que apenas pueden verse a los\n"
	.string "ojos después de tal fr-{PAUSE 20}$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_10:
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Ahórratelo!\n"
	.string "¡No vuelvas a hablar así de Maxie y\l"
	.string "yo!\p"
	.string "¡Y no creas que te dejaré arruinar\n"
	.string "nuestros planes ni una ves más!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_11:
# 85 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Sharpedo, {PAUSE 15}{COLOR BLUE SHADOW LIGHT_BLUE}Mega Evoluciona{COLOR DARK_GRAY SHADOW LIGHT_GRAY}!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_12:
# 89 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{COLOR LIGHT_GREEN}Trueno{COLOR DARK_GRAY}.$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_13:
# 112 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Tú... Así que nunca disolviste el Equipo,\n"
	.string "¿Eh...?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_14:
# 115 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¿... Winona?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_15:
# 118 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Puedo sentir que no estás impresionado,\n"
	.string "Archie. ¿Será que te lo veías venir?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_16:
# 120 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "No necesito el viento o los pajaritos\n"
	.string "para imaginarlo, Winona.\p"
	.string "No eres la clase de marinera que se\n"
	.string "rinde al perder su primer barco.$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_17:
# 128 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Ja, ja ja ja!\p"
	.string "Eres el mismo de siempre, amigo. Me\n"
	.string "alegra, significa que entenderás mis\l"
	.string "motivos.$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_18:
# 138 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Los entiendo, y es por eso que no\n"
	.string "comprendo tu posición.\p"
	.string "Estás en contra tanto del Equipo Magma,\n"
	.string "como de nostros.\p"
	.string "¿Porqué?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_19:
# 140 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Si pudieras sentirlo,{PAUSE 15} {COLOR BLUE}el dolor del\n"
	.string "mundo{COLOR DARK_GRAY}{PAUSE 30}...\p"
	.string "Entenderías porq-{PAUSE 30}$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_20:
# 149 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡MGAAAAAAAAAAAH!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_21:
# 158 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Agh!\n"
	.string "Mhh... {PAUSE 15}Ah...\l"
	.string "Está... {PAUSE 15}Empeorando...\p"
	.string "Bueno, Archie, perdón tener que irme tan\n"
	.string "rápido. ¿Nos vemos en Lilycove?\p"
	.string "Ah, y, Stern, muchas gracias por el\n"
	.string "Submarino.$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_22:
# 161 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Lilycove!\n"
	.string "¡Rápido, Recluta, avísale a los chicos\l"
	.string "que se preparen en la Base!\p"
	.string "¡Emergencia Nivel Zafiro Alfa!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_23:
# 163 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Entendido!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_24:
# 184 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Bueno, {PLAYER}, nuestro combate\n"
	.string "tendrá que esperar. Estaré en\l"
	.string "Lilycove, y, si necesitas algo,\l"
	.string "intentaré acudir cuanto la situación\l"
	.string "mejore, ¿Ok?\p"
	.string "Cuídate, {PLAYER}, puedo sentir que\n"
	.string "se viene una tormenta.\p"
	.string "Ah, y, Stern, ya hablaremos sobre tu\n"
	.string "parte en todo esto en cuanto todo\l"
	.string "mejore, ¿Entendido?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_25:
# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡Ah, {PLAYER}, hay que hacer algo!\p"
	.string "¡Mi... Mi Submarino, hay que recuperarlo!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_26:
# 202 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{COLOR BLUE}(¿Por usted, que ha estado trabajando\n"
	.string "para el Equipo Aqua?)\p"
	.string "(Ojalá pierda su trabajo.){COLOR DARK_GRAY}$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_27:
# 204 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Eh... {PAUSE 20}N-no hablo...{PAUSE 20} Lengua de señas-{PAUSE 30}$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_28:
# 205 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "¡E-EY! ¡Ese gesto es de muy mala\n"
	.string "educación!\p"
	.string "P-pero, ¡No importa qué pienses de mí!\p"
	.string "¡Cosas horribles pueden pasar si\n"
	.string "despiertan a Kyogre!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_29:
# 208 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "...\n"
	.string "{COLOR BLUE}(Si no tengo de otra...){COLOR DARK_GRAY}$"
