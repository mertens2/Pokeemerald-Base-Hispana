# 1 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_MapScripts::
# 3 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
# 4 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.byte 0
# 5 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 6 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition:
# 7 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere
# 8 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone
# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
# 10 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 11 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 12 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere::
# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 1, 6
# 14 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 15 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 16 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 17 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone::
# 18 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 4, 6
# 19 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 21 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 22 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear::
# 23 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 2, 2
# 24 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_UP
# 25 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 27 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt5::
# 28 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
# 29 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 31 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt2::
# 33 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
# 34 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 36 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 37 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt3::
# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
# 39 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 40 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 41 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 42 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly::
# 43 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lockall
# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Unknown
# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_0
# 46 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_1, MSGBOX_INTERRUPT
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_DELTA_DIVISION_GRUNT_A, Common_Movement_WalkInPlaceDown
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Unknown
# 52 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_2
# 53 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_DELTA_DIVISION_GRUNT_B, Common_Movement_WalkInPlaceRight
# 54 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Unknown
# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_3
# 57 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 58 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_4, MSGBOX_INTERRUPT
# 59 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_FAINT
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_ExclamationMark
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_5, MSGBOX_INTERRUPT
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_DELTA_DIVISION_GRUNT_B, Common_Movement_WalkInPlaceUp
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Unknown
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_6
# 77 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 78 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_ExclamationMark
# 79 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_7, MSGBOX_INTERRUPT
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Unknown
# 83 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_8
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 85 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_9
# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Unknown
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_10, MSGBOX_INTERRUPT
# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_11
# 94 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 95 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 96 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 97 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_FAINT
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_FAINT
# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Unknown
# 103 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_12, MSGBOX_INTERRUPT
# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_13
# 106 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 108 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 109 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 110 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_FAINT
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Unknown
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_14
# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_FAINT
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 120 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 121 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 122 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_FAINT
# 123 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_ExclamationMark
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_15
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 131 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Unknown
# 132 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_16
# 133 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Unknown
# 134 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_17
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 137 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 138 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxy LOCALID_WEATHER_INSTITUTE_2F_DELTA_DIVISION_GRUNT_A, 19, 0
# 140 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxy LOCALID_WEATHER_INSTITUTE_2F_DELTA_DIVISION_GRUNT_B, 19, 0
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxy LOCALID_WEATHER_INSTITUTE_2F_GRUNT_1, 5, 6
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxy LOCALID_WEATHER_INSTITUTE_2F_GRUNT_2, 6, 6
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	turnobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_1, DIR_WEST
# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 8
# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	turnobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_2, DIR_WEST
# 146 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerOutOfTheWay
# 147 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_18
# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 153 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Aqua
# 154 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_19
# 155 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 156 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Aqua
# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_20
# 159 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 162 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_21
# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 164 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 165 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_WalkInPlaceRight
# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_22
# 169 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 171 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_GRUNT_2, Route119_WeatherInstitute_2F_Movement_GruntsOutTheWay
# 172 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_GRUNT_1, Route119_WeatherInstitute_2F_Movement_GruntsOutTheWay
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Aqua
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_23
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 178 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Route119_WeatherInstitute_2F_Movement_ShellyAttacks
# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_24
# 182 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Aqua
# 183 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_25
# 184 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 185 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 186 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_GRUNT_2, Route119_WeatherInstitute_2F_Movement_GruntsHack
# 187 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_GRUNT_1, Route119_WeatherInstitute_2F_Movement_GruntsHack
# 188 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_no_whiteout_continue_script TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 192 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 193 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
# 194 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_2
# 197 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 198 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_1
# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_1:
# 202 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_GRUNT_2, Route119_WeatherInstitute_2F_Movement_GruntsBack
# 203 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_GRUNT_1, Route119_WeatherInstitute_2F_Movement_GruntsBack
# 204 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Aqua
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_2
# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_WalkInPlaceUp
# 208 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 210 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_3
# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_WalkInPlaceDown
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_4
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_1
# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_2
# 224 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_SHELLY
# 225 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_4
# 226 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_DELTA_DIVISION_GRUNT_A
# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_DELTA_DIVISION_GRUNT_B
# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxy LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 1, 6
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyobjectxytoperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST
# 236 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	releaseall
# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_2:
# 241 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setspeaker Shelly
# 242 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_0
# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	
# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_1
# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 248 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerOutOfTheWay:
# 249 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	face_up
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShellyAttacks:
# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 257 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntsOutTheWay:
# 262 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
# 263 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	face_down
# 264 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 265 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntsHack:
# 267 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 268 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 269 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 271 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
# 272 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
# 273 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
# 274 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
# 275 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 277 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntsBack:
# 278 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 279 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 280 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 281 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 283 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 284 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 285 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 286 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 287 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 288 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_0:
# 289 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿Quiénes son ustedes?\n"
# 290 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿Qué están haciendo aquí?\p"
# 291 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿Acaso saben en lo que se están\n"
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "metiendo al interponerse conmigo,\l"
# 293 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}, la {COLOR BLUE}Comandante del Equipo Aqua{COLOR DARK_GRAY}?$"
# 294 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 295 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_1:
# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Salgan de nuestro camino si no quieren\n"
# 297 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "ser aplastados!\l"
# 298 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Nuestra racha de victorias es muestra\l"
# 299 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "de las pocas posibilidades que tienen!$"
# 300 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 301 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_2:
# 302 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Acábala, ¿Quieres?$"
# 303 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 304 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_3:
# 305 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Dalo por hecho.$"
# 306 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_4:
# 308 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿¡C-cómo se atreven!?\n"
# 309 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Nadie dudará jamás del Equipo Aqu-{PAUSE 16} $"
# 310 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 311 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_5:
# 312 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "P-{PAUSE 16}pero... ¿¡CÓMO!?\n"
# 313 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Todos mis Pokémon... Derrotados por\l"
# 314 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "sólo uno de los suyos!\p"
# 315 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Pagarán por est-{PAUSE 16}  $"
# 316 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 317 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_6:
# 318 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hemos terminado aquí.\p"
# 319 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Tenemos la {COLOR BLUE}información necesaria{COLOR DARK_GRAY}.$"
# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 321 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_7:
# 322 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Si me interrumpen una ves m-{PAUSE 16}!$"
# 323 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 324 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_8:
# 325 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Concuerdo. Regresemos a la base e\n"
# 326 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "infomémosle de lo ocurrido.$"
# 327 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 328 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_9:
# 329 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Me harté!\p"
# 330 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡No soportaré que manchen el honor del\n"
# 331 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Equipo Aqua!$"
# 332 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 333 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_10:
# 334 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ah. Supongo que tendré que acabarte\n"
# 335 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "de nuevo.\p"
# 336 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Usa {COLOR GREEN}Gigadr{COLOR DARK_GRAY}-{PAUSE 8} $"
# 337 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 338 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_11:
# 339 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Frilish, usa {COLOR BLUE}Mismodestino{COLOR DARK_GRAY}!$"
# 340 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 341 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_12:
# 342 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hmmm... Interesante. Acabemos con esto,\n"
# 343 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR BLUE}Alt{COLOR DARK_GRAY}-{PAUSE 8} $"
# 344 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 345 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_13:
# 346 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡{COLOR BLUE}Rayo de Hielo{COLOR DARK_GRAY}!$"
# 347 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 348 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_14:
# 349 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡SUFICIENTE!$"
# 350 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 351 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_15:
# 352 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Derrotada... ¿De nuevo?$"
# 353 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 354 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_16:
# 355 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Seguir entreteniéndonos con estos\n"
# 356 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "criminales sería una pérdida de tiempo.\p"
# 357 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Creí que esta sería más fuerte, pero\n"
# 358 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "apenas consiguió derrotar a dos de mis\l"
# 359 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Pokémon.$"
# 360 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 361 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_17:
# 362 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Vámonos. No necesitamos seguir\n"
# 363 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "aplastando su espíritu.\p"
# 364 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Aunque admito que es entretenido.$"
# 365 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 366 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_18:
# 367 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "...{PAUSE 16}...{PAUSE 16}...{PAUSE 16}$"
# 368 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 369 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_19:
# 370 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Comandante Shelly!\p"
# 371 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿Está bien?$"
# 372 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 373 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_20:
# 374 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Queríamos ayudar, pero est{EA} niñ{OA} derrotó\n"
# 375 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "a nuestros Pokémon fuertes. ¿Qué\l"
# 376 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "vamos a hacer ahora?$"
# 377 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 378 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_21:
# 379 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "...{PAUSE 16}...{PAUSE 16}...{PAUSE 16}\p"
# 380 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "La recuperaremos.$"
# 381 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 382 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_22:
# 383 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡No importa quiénes ellos se crean que\n"
# 384 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "son!\p"
# 385 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡No importa que nos hayan derrotado!\p"
# 386 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "La información no se puede borrar.\n"
# 387 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Sigue en el servidor de este lugar, y\l"
# 388 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "van a recuperarla.\p"
# 389 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Y no se preocupen, que tengo\n"
# 390 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "suficientes Objetos como para curar a\l"
# 391 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "mis Pokémon y derrotar a est{EA} inútil\l"
# 392 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Entrenador{A} que tantos problemas les\l"
# 393 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "dio a ustedes.$"
# 394 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 395 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_23:
# 396 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Vamos, Comandante!\p"
# 397 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Usted puede!$"
# 398 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 399 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_24:
# 400 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "De mientras, encárgense ustedes de\n"
# 401 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "recuperar la información.\p"
# 402 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Todo lo necesario está en el Pendrive\n"
# 403 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "que les di.$"
# 404 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 405 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly_Text_25:
# 406 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Si, Comandante!$"
# 407 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 408 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_0:
# 409 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Ah!\p"
# 410 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Es impresionante el poder que tienes...\n"
# 411 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Pero no importa, pues el poder de\l"
# 412 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR BLUE}nuestro Líder{COLOR DARK_GRAY} es incluso más grande!$"
# 413 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 414 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_1:
# 415 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "La derrota que sufrí te hiso confiarte,\n"
# 416 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿No es así?\p"
# 417 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Pues que sirva de testamento del poder\n"
# 418 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "que posee el Equipo Aqua!\p"
# 419 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR BLUE}Nuestro Líder{COLOR DARK_GRAY} podría barrer el piso él\n"
# 420 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "sólo aunque el {COLOR BLUE}Comandante Matt y yo\l"
# 421 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "luchemos juntos en su contra{COLOR DARK_GRAY}.\p"
# 422 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Que sirva también de aviso para que no\n"
# 423 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "te metas con esa pandilla de idiotas\l"
# 424 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "que me derrotaron... ¡O podría no volver\l"
# 425 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "a disfrutar de aplastarte!$"
# 426 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 427 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_2:
# 428 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Todo listo, ¡La información es nuestra,\n"
# 429 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "señorita!$"
# 430 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 431 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_3:
# 432 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Perfecto.$"
# 433 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 434 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Text_4:
# 435 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Como verás, tus acciones aquí, las\n"
# 436 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "veces que has derrotado a miembros de\l"
# 437 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "nuestro equipo, han sido todas en vano,\l"
# 438 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "pues hemos terminado exitosamente las\l"
# 439 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "primeras dos fases.\p"
# 440 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Aunque tengo mis dudas con respecto a\n"
# 441 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "nuestros métodos y objetivos, ¡Mi\l"
# 442 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "lealtad es mucho más fuerte!\p"
# 443 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahora, equipo, ¡Vayamos al Monte Pyre a\n"
# 444 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "detener al Equipo Magma como\l"
# 445 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "acordamos!$"
# 446 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 447 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
# 448 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon
# 449 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	showmonpicshiny SPECIES_CASTFORM, 10, 3, 0
# 450 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ExplainCastform, MSGBOX_YESNO
# 451 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_RejectCastform
# 452 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 453 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidemonpic
# 454 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CASTFORM
# 455 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_CASTFORM, 30, ITEM_DAMP_ROCK
# 456 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
# 457 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
# 458 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 459 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 460 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 461 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_RejectCastform::
# 462 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 463 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	hidemonpic
# 464 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_RejectedCastform
# 465 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	releaseall
# 466 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 467 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 468 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_RejectedCastform:
# 469 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡No te preocupes!\p¡Seguiré aquí si lo quieres!$"
# 470 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 471 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
# 472 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 473 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 474 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 475 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 476 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 477 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 478 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 479 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 480 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
# 481 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 482 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 483 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 484 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 485 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 486 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 487 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 488 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
# 489 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 490 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 491 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 492 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 493 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
# 494 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 495 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
# 496 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 497 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 498 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM
# 499 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 500 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 501 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
# 502 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 503 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 504 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 505 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 506 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 507 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
# 508 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
# 509 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
# 510 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 511 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 512 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 513 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
# 514 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 515 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 516 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 517 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather  @ Both defeated
# 518 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
# 519 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 520 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route119_WeatherInstitute_2F_EventScript_KyogreWeather
# 521 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
# 522 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 523 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 524 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 525 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
# 526 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
# 527 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 528 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 529 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 530 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
# 531 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 532 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 533 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 534 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 535 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
# 536 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
# 537 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 538 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 539 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
# 540 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
# 541 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 542 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 543 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 544 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
# 545 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 546 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 547 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 548 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 549 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 550 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 551 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 552 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 553 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 554 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 555 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 556 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 557 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 558 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay:
# 559 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 560 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 561 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 562 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 563 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 564 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 565 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_down
# 566 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 567 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 568 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
# 569 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_up
# 570 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_up
# 571 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_up
# 572 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_left
# 573 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 574 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 575 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
# 576 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 577 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 578 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 579 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 580 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 581 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
# 582 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 583 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 584 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
# 585 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 586 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 587 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 588 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Intro:
# 589 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The INSTITUTE created a type of\n"
# 590 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "POKéMON that has something to do with\l"
# 591 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the weather. We're here to take them!$"
# 592 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 593 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Defeat:
# 594 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Our plan's being spoiled by a kid?$"
# 595 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 596 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2PostBattle:
# 597 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "If the POKéMON they made here can\n"
# 598 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "control the weather freely, then we of\l"
# 599 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "TEAM AQUA definitely need it!$"
# 600 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 601 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Intro:
# 602 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We're TEAM AQUA!\n"
# 603 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We appear wherever anything rare is\l"
# 604 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "found!$"
# 605 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 606 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
# 607 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You got me!$"
# 608 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 609 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3PostBattle:
# 610 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You don't have any idea what we of\n"
# 611 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "TEAM AQUA are working towards!\l"
# 612 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You stay out of our way!$"
# 613 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 614 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Intro:
# 615 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Don't tell me you're looking for that\n"
# 616 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "weather POKéMON, too?\p"
# 617 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That's a no-no!\n"
# 618 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We were here to get it first!$"
# 619 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 620 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
# 621 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, will you look at my POKéMON?$"
# 622 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 623 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5PostBattle:
# 624 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Humph, so what?\n"
# 625 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we want…\p"
# 626 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we really want isn't here…\n"
# 627 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ihihihihi…$"
# 628 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 629 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyIntro:
# 630 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Te arrepentirás de haber derrotado\n"
# 631 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "a nuestros Reclutas!\p"
# 632 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Prepárate para ahogarte con\nel tsunami de mi poder!$"
# 633 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 634 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyDefeat:
# 635 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿¡Q-qué!?\n"
# 636 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Ja, tu poder es asqueroso!$"
# 637 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 638 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyPostBattle:
# 639 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It's bad enough to have TEAM MAGMA\n"
# 640 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "blunder about, but now there's you!\p"
# 641 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What makes you want to sniff around\n"
# 642 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in our business, anyway?$"
# 643 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 644 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy:
# 645 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have a situation here!\p"
# 646 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "A TEAM MAGMA mob just passed\n"
# 647 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the WEATHER INSTITUTE.\p"
# 648 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "They appear to be headed for\n"
# 649 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "MT. PYRE!$"
# 650 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 651 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre:
# 652 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What?!\p"
# 653 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We can't waste any more time here!\n"
# 654 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have to hurry to MT. PYRE, too!\p"
# 655 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
# 656 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "TEAM MAGMA, just you wait!$"
# 657 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 658 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon:
# 659 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks!\n"
# 660 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks to you, we're safe!\p"
# 661 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It might be an odd way of thanking you,\n"
# 662 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "but take this POKéMON.$"
# 663 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 664 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ExplainCastform:
# 665 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Es un Castform!\pSolía ser bastante débil, pero las\namables personas que detuvieron\lal Equipo Aqua lo modificaron genéticamente.\p¡Ahora es increíblemente rápido!\p¿Lo quieres, no?$"
# 666 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 667 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
@ Unused
# 668 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon:
# 669 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? You don't seem to have any room\n"
# 670 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "for this POKéMON.$"
# 671 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 672 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform:
# 673 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received CASTFORM!$"
# 674 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 675 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather:
# 676 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ese Pokémon puede usar Meteorobola,\n"
# 677 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "que cambia el clima, (y su tipo)\l"
# 678 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "dependiendo del Objeto que tenga\l"
# 679 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "equipado, ¡Es muy fuerte!.$"
# 680 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 681 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous:
# 682 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I've been researching rain for many\n"
# 683 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "years, but it's ridiculous to think that\l"
# 684 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "humans can freely change the weather.$"
# 685 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 686 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_GroudonWeather:
# 687 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 688 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the HOENN region.\p"
# 689 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, a drought has been recorded\n"
# 690 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in {STR_VAR_1}.\p"
# 691 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 692 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 693 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 694 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_KyogreWeather:
# 695 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 696 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the HOENN region.\p"
# 697 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, heavy rainfall has been\n"
# 698 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "recorded over {STR_VAR_1}.\p"
# 699 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 700 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 701 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 702 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoAbnormalWeather:
# 703 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Abnormal weather conditions are\n"
# 704 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "no longer being reported.\p"
# 705 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The occasional rainfall is a blessing,\n"
# 706 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "really.$"
