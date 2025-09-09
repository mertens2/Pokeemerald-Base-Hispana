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
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 46 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
# 51 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3, Route119_WeatherInstitute_2F_Movement_GruntApproachShelly
# 52 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay
# 53 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy, MSGBOX_DEFAULT
# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 57 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_ExclamationMark
# 58 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_Delay48
# 60 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre, MSGBOX_DEFAULT
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_1
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_2
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_SHELLY
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_4
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 77 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
# 78 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyobjectxytoperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST
# 80 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 83 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
# 85 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CASTFORM_NORMAL
# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_CASTFORM_NORMAL, 25, ITEM_MYSTIC_WATER
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 94 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 95 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 96 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 97 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 103 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 106 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 108 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 109 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
# 110 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM_NORMAL
# 120 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 121 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 122 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
# 123 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
# 131 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 132 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 133 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 134 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 137 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 138 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather  @ Both defeated
# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
# 140 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route119_WeatherInstitute_2F_EventScript_KyogreWeather
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 146 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
# 147 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
# 148 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 153 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 154 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 155 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 156 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 159 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
# 162 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 164 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 165 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 169 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 171 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 172 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 178 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay:
# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 182 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 183 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 184 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 185 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 186 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_down
# 187 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 188 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_down
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_left
# 192 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 193 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 194 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 197 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 198 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 202 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 203 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
# 204 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Intro:
# 208 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "El INSTITUTO ha creado un tipo\n"
# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "de POKéMON que tiene algo que ver con\l"
# 210 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "el tiempo. ¡Venimos a por unos cuantos!$"
# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Defeat:
# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡¿Semejante mequetrefe\n"
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "nos está chafando el plan?!$"
# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2PostBattle:
# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Si los POKéMON creados aquí pueden\n"
# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "controlar el tiempo a voluntad,\l"
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "los del EQUIPO AQUA los necesitamos!$"
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Intro:
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Somos el EQUIPO AQUA! ¡Aparecemos\n"
# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "allí donde hay algo extraordinario!$"
# 224 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 225 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
# 226 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Me has parado los pies!$"
# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3PostBattle:
# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡No tienes ni idea de lo que los del\n"
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "EQUIPO AQUA estamos planeando!\l"
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Fuera de mi camino!$"
# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Intro:
# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡No me digas que tú también estás\n"
# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "buscando ese POKéMON del tiempo!\p"
# 236 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Ah, pues no, no y no!\n"
# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Nosotros llegamos aquí primero!$"
# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, ¿ves cómo están mis POKéMON?$"
# 241 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 242 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5PostBattle:
# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Bah, ¿y qué?\n"
# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Lo que nosotros buscamos de verdad…\p"
# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Lo que nosotros buscamos no está aquí.\n"
# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Ji, ji, ji, ji!…$"
# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 248 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyIntro:
# 249 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Ja, ja, ja, ja!\p"
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿Vas a mezclarte en los asuntos\n"
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "del EQUIPO AQUA?\p"
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Entonces, o no tienes miedo o no\n"
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "tienes ni idea!\p"
# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Eres tan dulce que empalagas!\n"
# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Voy a darte una buena tunda!$"
# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 257 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyDefeat:
# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Ja, ja, ja, ja!\p"
# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Eres tan fuerte que agobias!$"
# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyPostBattle:
# 262 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Ya es un fastidio tener todo el día\n"
# 263 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "detrás al EQUIPO MAGMA\l"
# 264 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "para que ahora encima vengas tú!\p"
# 265 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¿Se puede saber por qué metes\n"
# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "las narices donde no te llaman?$"
# 267 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 268 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy:
# 269 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Tenemos un problema!\p"
# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Una banda del EQUIPO MAGMA acaba de\n"
# 271 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "pasar por el INSTITUTO METEOROLÓGICO.\p"
# 272 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Parece que se dirigen al MONTE PÍRICO!$"
# 273 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 274 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre:
# 275 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡¿Qué?! ¡¿Cómo?!\p"
# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡No perdamos más tiempo aquí!\n"
# 277 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Deprisa, ¡al MONTE PÍRICO!\p"
# 278 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Ja, ja, ja, ja!\n"
# 279 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Prepárate, EQUIPO MAGMA! ¡Allá vamos!$"
# 280 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 281 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon:
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Gracias, gracias!\n"
# 283 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡Nos has salvado!\p"
# 284 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Quiero agradecértelo de algún modo,\n"
# 285 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "así que voy a darte este POKéMON.$"
# 286 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 287 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
@ Unused
# 288 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon:
# 289 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? You don’t seem to have any room\n"
# 290 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "for this POKéMON.$"
# 291 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform:
# 293 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "¡{PLAYER} recibió a CASTFORM!$"
# 294 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 295 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather:
# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Este POKéMON cambia de forma según\n"
# 297 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "las condiciones meteorológicas.\p"
# 298 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hay un montón de ellos\n"
# 299 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "en el INSTITUTO: éste es para ti.$"
# 300 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 301 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous:
# 302 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "He investigado la lluvia durante años,\n"
# 303 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "pero es ridículo creer que el hombre\l"
# 304 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "puede cambiar el tiempo a su antojo.$"
# 305 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 306 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_GroudonWeather:
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Me dedico a estudiar los fenómenos\n"
# 308 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "atmosféricos de la región de HOENN.\p"
# 309 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahora mismo, se ha detectado\n"
# 310 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "que hay sequía en {STR_VAR_1}.\p"
# 311 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Podría ser en algún punto cercano\n"
# 312 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "a {STR_VAR_1}…$"
# 313 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 314 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_KyogreWeather:
# 315 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Me dedico a estudiar los fenómenos\n"
# 316 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "atmosféricos de la región de HOENN.\p"
# 317 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahora mismo, se ha detectado que\n"
# 318 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "hay inundaciones en {STR_VAR_1}.\p"
# 319 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Podría ser en algún punto cercano\n"
# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "a {STR_VAR_1}…$"
# 321 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 322 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoAbnormalWeather:
# 323 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Actualmente no se detecta ninguna\n"
# 324 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "anomalía en lo que al tiempo se refiere.\p"
# 325 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "La verdad es que la lluvia a veces\n"
# 326 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "viene como agua de mayo.$"
