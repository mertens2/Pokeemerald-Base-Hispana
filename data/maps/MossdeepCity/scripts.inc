# 1 "data/maps/MossdeepCity/scripts.pory"

# 2 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_MapScripts::
# 3 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
# 4 "data/maps/MossdeepCity/scripts.pory"
	.byte 0
# 5 "data/maps/MossdeepCity/scripts.pory"

# 6 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition:
# 7 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 8 "data/maps/MossdeepCity/scripts.pory"
	end
# 9 "data/maps/MossdeepCity/scripts.pory"

# 10 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 11 "data/maps/MossdeepCity/scripts.pory"
	lock
# 12 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 13 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
# 14 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 15 "data/maps/MossdeepCity/scripts.pory"
	release
# 16 "data/maps/MossdeepCity/scripts.pory"
	end
# 17 "data/maps/MossdeepCity/scripts.pory"

# 18 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 19 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 20 "data/maps/MossdeepCity/scripts.pory"
	release
# 21 "data/maps/MossdeepCity/scripts.pory"
	end
# 22 "data/maps/MossdeepCity/scripts.pory"

# 23 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 24 "data/maps/MossdeepCity/scripts.pory"
	lock
# 25 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 26 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
# 27 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 28 "data/maps/MossdeepCity/scripts.pory"
	release
# 29 "data/maps/MossdeepCity/scripts.pory"
	end
# 30 "data/maps/MossdeepCity/scripts.pory"

# 31 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 32 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 33 "data/maps/MossdeepCity/scripts.pory"
	release
# 34 "data/maps/MossdeepCity/scripts.pory"
	end
# 35 "data/maps/MossdeepCity/scripts.pory"

# 36 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 37 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 38 "data/maps/MossdeepCity/scripts.pory"
	end
# 39 "data/maps/MossdeepCity/scripts.pory"

# 40 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 41 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 42 "data/maps/MossdeepCity/scripts.pory"
	end
# 43 "data/maps/MossdeepCity/scripts.pory"

# 44 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 45 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 46 "data/maps/MossdeepCity/scripts.pory"
	end
# 47 "data/maps/MossdeepCity/scripts.pory"

# 48 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 49 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 50 "data/maps/MossdeepCity/scripts.pory"
	end
# 51 "data/maps/MossdeepCity/scripts.pory"

# 52 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_WhiteRock::
# 53 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
# 54 "data/maps/MossdeepCity/scripts.pory"
	end
# 55 "data/maps/MossdeepCity/scripts.pory"

# 56 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 57 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 58 "data/maps/MossdeepCity/scripts.pory"
	end
# 59 "data/maps/MossdeepCity/scripts.pory"

# 60 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 61 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 62 "data/maps/MossdeepCity/scripts.pory"
	end
# 63 "data/maps/MossdeepCity/scripts.pory"

# 64 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 65 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 66 "data/maps/MossdeepCity/scripts.pory"
	end
# 67 "data/maps/MossdeepCity/scripts.pory"

# 68 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 69 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 70 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 71 "data/maps/MossdeepCity/scripts.pory"
	end
# 72 "data/maps/MossdeepCity/scripts.pory"

# 73 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 74 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 75 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 76 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 77 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 78 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 79 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 80 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 81 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 83 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 84 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 85 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 86 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 87 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_MAXIE
# 89 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_1
# 90 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_2
# 91 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_3
# 92 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_4
# 93 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 94 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 95 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 96 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 97 "data/maps/MossdeepCity/scripts.pory"
	end
# 98 "data/maps/MossdeepCity/scripts.pory"

# 99 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter:
# 100 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 101 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 102 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 103 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 104 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 105 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 106 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 107 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 108 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 109 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 110 "data/maps/MossdeepCity/scripts.pory"

# 111 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 112 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 113 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 114 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 115 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 116 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 117 "data/maps/MossdeepCity/scripts.pory"

# 118 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter:
# 119 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 120 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 121 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 122 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 123 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 124 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 125 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 126 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 127 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 128 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 129 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 130 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 131 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 132 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 133 "data/maps/MossdeepCity/scripts.pory"

# 134 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 135 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 136 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 137 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 138 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 139 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 140 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 141 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 142 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 143 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 144 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 145 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 146 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 147 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 148 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 149 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 150 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 151 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 152 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 153 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 154 "data/maps/MossdeepCity/scripts.pory"

# 155 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 156 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 157 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 158 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 159 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 160 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 161 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 162 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 163 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 164 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 165 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 166 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 167 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 168 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 169 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 170 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 171 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 172 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 173 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 174 "data/maps/MossdeepCity/scripts.pory"

# 175 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 176 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 177 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 178 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 179 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 180 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 181 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 182 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 183 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 184 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 185 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 186 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 187 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 188 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 189 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 190 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 191 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 192 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 193 "data/maps/MossdeepCity/scripts.pory"

# 194 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 195 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 196 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 197 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 198 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 199 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 200 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 201 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 202 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 203 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 204 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 205 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 206 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 207 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 208 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 209 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 210 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 211 "data/maps/MossdeepCity/scripts.pory"

# 212 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 213 "data/maps/MossdeepCity/scripts.pory"
	lock
# 214 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 215 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 216 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 217 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 218 "data/maps/MossdeepCity/scripts.pory"
	release
# 219 "data/maps/MossdeepCity/scripts.pory"
	end
# 220 "data/maps/MossdeepCity/scripts.pory"

# 221 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 222 "data/maps/MossdeepCity/scripts.pory"
	lock
# 223 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 224 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 225 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 226 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
# 227 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 228 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 229 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 230 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 231 "data/maps/MossdeepCity/scripts.pory"
	release
# 232 "data/maps/MossdeepCity/scripts.pory"
	end
# 233 "data/maps/MossdeepCity/scripts.pory"

# 234 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 235 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 236 "data/maps/MossdeepCity/scripts.pory"
	release
# 237 "data/maps/MossdeepCity/scripts.pory"
	end
# 238 "data/maps/MossdeepCity/scripts.pory"

# 239 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 240 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 241 "data/maps/MossdeepCity/scripts.pory"
	release
# 242 "data/maps/MossdeepCity/scripts.pory"
	end
# 243 "data/maps/MossdeepCity/scripts.pory"

# 244 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 245 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 246 "data/maps/MossdeepCity/scripts.pory"
	end
# 247 "data/maps/MossdeepCity/scripts.pory"

# 248 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 249 "data/maps/MossdeepCity/scripts.pory"
	lock
# 250 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 251 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 252 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 253 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
# 254 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
# 255 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 256 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_SCOTT
# 257 "data/maps/MossdeepCity/scripts.pory"
	release
# 258 "data/maps/MossdeepCity/scripts.pory"
	end
# 259 "data/maps/MossdeepCity/scripts.pory"

# 260 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 261 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 262 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 263 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 264 "data/maps/MossdeepCity/scripts.pory"
	return
# 265 "data/maps/MossdeepCity/scripts.pory"

# 266 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 267 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 268 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitEast
# 269 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 270 "data/maps/MossdeepCity/scripts.pory"
	return
# 271 "data/maps/MossdeepCity/scripts.pory"

# 272 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 273 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 274 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 275 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 276 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 277 "data/maps/MossdeepCity/scripts.pory"

# 278 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth:
# 279 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 280 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 281 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 282 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 283 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 284 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 285 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 286 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 287 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 288 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 289 "data/maps/MossdeepCity/scripts.pory"

# 290 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 291 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 292 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 293 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 294 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 295 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 296 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 297 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 298 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 299 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 300 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 301 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 302 "data/maps/MossdeepCity/scripts.pory"

# 303 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe:
# 304 "data/maps/MossdeepCity/scripts.pory"
	.string "MÁXIMO me ha dado esto,\n"
# 305 "data/maps/MossdeepCity/scripts.pory"
	.string "pero no sé para qué sirve.\p"
# 306 "data/maps/MossdeepCity/scripts.pory"
	.string "Creo que se llama ROCA del REY.\n"
# 307 "data/maps/MossdeepCity/scripts.pory"
	.string "¿La quieres?$"
# 308 "data/maps/MossdeepCity/scripts.pory"

# 309 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt:
# 310 "data/maps/MossdeepCity/scripts.pory"
	.string "¿Y para qué la quieres?\n"
# 311 "data/maps/MossdeepCity/scripts.pory"
	.string "Mira que la gente es rara…\p"
# 312 "data/maps/MossdeepCity/scripts.pory"
	.string "Bueno, quédatela, pero no\n"
# 313 "data/maps/MossdeepCity/scripts.pory"
	.string "se lo digas a MÁXIMO.$"
# 314 "data/maps/MossdeepCity/scripts.pory"

# 315 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere:
# 316 "data/maps/MossdeepCity/scripts.pory"
	.string "¡La casa de MÁXIMO está justo ahí!$"
# 317 "data/maps/MossdeepCity/scripts.pory"

# 318 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock:
# 319 "data/maps/MossdeepCity/scripts.pory"
	.string "¡Justamente eso digo yo! ¿Qué se\n"
# 320 "data/maps/MossdeepCity/scripts.pory"
	.string "puede hacer con una roca rara?$"
# 321 "data/maps/MossdeepCity/scripts.pory"

# 322 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching:
# 323 "data/maps/MossdeepCity/scripts.pory"
	.string "Cerca de ALGARIA, puedes ver\n"
# 324 "data/maps/MossdeepCity/scripts.pory"
	.string "WAILMER salvajes.\p"
# 325 "data/maps/MossdeepCity/scripts.pory"
	.string "El sitio en cuestión se llama…\n"
# 326 "data/maps/MossdeepCity/scripts.pory"
	.string "¿Cómo se llama…?\p"
# 327 "data/maps/MossdeepCity/scripts.pory"
	.string "Puesto…, puesto de algo…\p"
# 328 "data/maps/MossdeepCity/scripts.pory"
	.string "¡Puesto de observación de WAILMER!$"
# 329 "data/maps/MossdeepCity/scripts.pory"

# 330 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter:
# 331 "data/maps/MossdeepCity/scripts.pory"
	.string "El CENTRO ESPACIAL de esta isla\n"
# 332 "data/maps/MossdeepCity/scripts.pory"
	.string "ha estado lanzando cohetes enormes.\p"
# 333 "data/maps/MossdeepCity/scripts.pory"
	.string "Es que andan bastante alborotados\n"
# 334 "data/maps/MossdeepCity/scripts.pory"
	.string "a causa de una carta que han recibido.$"
# 335 "data/maps/MossdeepCity/scripts.pory"

# 336 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets:
# 337 "data/maps/MossdeepCity/scripts.pory"
	.string "El CENTRO ESPACIAL de esta isla\n"
# 338 "data/maps/MossdeepCity/scripts.pory"
	.string "ha estado lanzando cohetes enormes.$"
# 339 "data/maps/MossdeepCity/scripts.pory"

# 340 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma:
# 341 "data/maps/MossdeepCity/scripts.pory"
	.string "Un MARINERO me ha dicho que el EQUIPO\n"
# 342 "data/maps/MossdeepCity/scripts.pory"
	.string "AQUA la ha montado gorda en CALAGUA.\p"
# 343 "data/maps/MossdeepCity/scripts.pory"
	.string "¡También he oído que alguien\n"
# 344 "data/maps/MossdeepCity/scripts.pory"
	.string "les ha dado una buena paliza!\p"
# 345 "data/maps/MossdeepCity/scripts.pory"
	.string "Pero ahora CIUDAD ALGARIA ha pasado\n"
# 346 "data/maps/MossdeepCity/scripts.pory"
	.string "a ser un objetivo del EQUIPO MAGMA.\p"
# 347 "data/maps/MossdeepCity/scripts.pory"
	.string "Si quieres saber qué están tramando,\n"
# 348 "data/maps/MossdeepCity/scripts.pory"
	.string "ve a visitar el CENTRO ESPACIAL.$"
# 349 "data/maps/MossdeepCity/scripts.pory"

# 350 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand:
# 351 "data/maps/MossdeepCity/scripts.pory"
	.string "Soy un MARINERO, así que el mar\n"
# 352 "data/maps/MossdeepCity/scripts.pory"
	.string "es muy importante para mí.\p"
# 353 "data/maps/MossdeepCity/scripts.pory"
	.string "Pero cuando vuelvo a tierra después\n"
# 354 "data/maps/MossdeepCity/scripts.pory"
	.string "de un viaje, respiro tranquilo, ¿sabes?$"
# 355 "data/maps/MossdeepCity/scripts.pory"

# 356 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
# 357 "data/maps/MossdeepCity/scripts.pory"
	.string "Qué bonito sería…\p"
# 358 "data/maps/MossdeepCity/scripts.pory"
	.string "si el mundo entero estuviera cubierto\n"
# 359 "data/maps/MossdeepCity/scripts.pory"
	.string "de flores y plantas como las de aquí.$"
# 360 "data/maps/MossdeepCity/scripts.pory"

# 361 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive:
# 362 "data/maps/MossdeepCity/scripts.pory"
	.string "Todo ser vivo necesita el mar,\n"
# 363 "data/maps/MossdeepCity/scripts.pory"
	.string "aunque viva en la tierra.\p"
# 364 "data/maps/MossdeepCity/scripts.pory"
	.string "Todo ser vivo, con el tiempo, se\n"
# 365 "data/maps/MossdeepCity/scripts.pory"
	.string "convierte en polvo y vuelve a la tierra.\p"
# 366 "data/maps/MossdeepCity/scripts.pory"
	.string "El mar y la tierra están conectados…,\p"
# 367 "data/maps/MossdeepCity/scripts.pory"
	.string "basta mirar la costa para darse cuenta.$"
# 368 "data/maps/MossdeepCity/scripts.pory"

# 369 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating:
# 370 "data/maps/MossdeepCity/scripts.pory"
	.string "Un viaje en barco es divertido.\p"
# 371 "data/maps/MossdeepCity/scripts.pory"
	.string "Pero cruzar el mar con un POKéMON\n"
# 372 "data/maps/MossdeepCity/scripts.pory"
	.string "que hace SURF…\p"
# 373 "data/maps/MossdeepCity/scripts.pory"
	.string "¡Eso sí que es un puntazo!\n"
# 374 "data/maps/MossdeepCity/scripts.pory"
	.string "¿A que sí?$"
# 375 "data/maps/MossdeepCity/scripts.pory"

# 376 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock:
# 377 "data/maps/MossdeepCity/scripts.pory"
	.string "Esta roca tiene un significado especial\n"
# 378 "data/maps/MossdeepCity/scripts.pory"
	.string "para la gente del CENTRO ESPACIAL.\p"
# 379 "data/maps/MossdeepCity/scripts.pory"
	.string "Es como un talismán para que los\n"
# 380 "data/maps/MossdeepCity/scripts.pory"
	.string "cohetes despeguen sin problemas.\p"
# 381 "data/maps/MossdeepCity/scripts.pory"
	.string "Y tú, cuando formulas un deseo,\n"
# 382 "data/maps/MossdeepCity/scripts.pory"
	.string "¿usas algún amuleto?\p"
# 383 "data/maps/MossdeepCity/scripts.pory"
	.string "Yo tengo una frase mágica…\n"
# 384 "data/maps/MossdeepCity/scripts.pory"
	.string "¡y siempre funciona!$"
# 385 "data/maps/MossdeepCity/scripts.pory"

# 386 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ItsAWhiteRock:
# 387 "data/maps/MossdeepCity/scripts.pory"
	.string "Es una roca blanca.$"
# 388 "data/maps/MossdeepCity/scripts.pory"

# 389 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign:
# 390 "data/maps/MossdeepCity/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD ALGARIA\n"
# 391 "data/maps/MossdeepCity/scripts.pory"
	.string "LÍDERES: LETI Y VITO\p"
# 392 "data/maps/MossdeepCity/scripts.pory"
	.string "“¡Una combinación mística!”$"
# 393 "data/maps/MossdeepCity/scripts.pory"

# 394 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign:
# 395 "data/maps/MossdeepCity/scripts.pory"
	.string "CIUDAD ALGARIA\p"
# 396 "data/maps/MossdeepCity/scripts.pory"
	.string "“Nuestra divisa: ¡quiere\n"
# 397 "data/maps/MossdeepCity/scripts.pory"
	.string "a los POKéMON!”$"
# 398 "data/maps/MossdeepCity/scripts.pory"

# 399 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign:
# 400 "data/maps/MossdeepCity/scripts.pory"
	.string "CENTRO ESPACIAL de ALGARIA\p"
# 401 "data/maps/MossdeepCity/scripts.pory"
	.string "“¡A un paso del espacio exterior!”$"
# 402 "data/maps/MossdeepCity/scripts.pory"

# 403 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown:
# 404 "data/maps/MossdeepCity/scripts.pory"
	.string "TRETO: {PLAYER}{KUN}, ¿cómo estás?\n"
# 405 "data/maps/MossdeepCity/scripts.pory"
	.string "¡Yo estoy estupendamente!\p"
# 406 "data/maps/MossdeepCity/scripts.pory"
	.string "He oído que los LÍDERES de GIMNASIO\n"
# 407 "data/maps/MossdeepCity/scripts.pory"
	.string "de CIUDAD ALGARIA son bastante\l"
# 408 "data/maps/MossdeepCity/scripts.pory"
	.string "fuertes, así que quiero comprobarlo.\p"
# 409 "data/maps/MossdeepCity/scripts.pory"
	.string "Pero hay algo en esta ciudad\n"
# 410 "data/maps/MossdeepCity/scripts.pory"
	.string "que no me da buena espina.\p"
# 411 "data/maps/MossdeepCity/scripts.pory"
	.string "Todos hablan de una misteriosa carta\n"
# 412 "data/maps/MossdeepCity/scripts.pory"
	.string "de advertencia y del CENTRO ESPACIAL…\p"
# 413 "data/maps/MossdeepCity/scripts.pory"
	.string "Aunque yo creo que todo eso\n"
# 414 "data/maps/MossdeepCity/scripts.pory"
	.string "a mí no me atañe.$"
# 415 "data/maps/MossdeepCity/scripts.pory"

# 416 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader:
# 417 "data/maps/MossdeepCity/scripts.pory"
	.string "Aaah… Qué bien se está con\n"
# 418 "data/maps/MossdeepCity/scripts.pory"
	.string "el mar acariciándote los pies…\p"
# 419 "data/maps/MossdeepCity/scripts.pory"
	.string "Hablando de olas, ¿conoces la\n"
# 420 "data/maps/MossdeepCity/scripts.pory"
	.string "ciudad-isla de ARRECÍPOLIS?\p"
# 421 "data/maps/MossdeepCity/scripts.pory"
	.string "Creo que el GIMNASIO de allí\n"
# 422 "data/maps/MossdeepCity/scripts.pory"
	.string "tiene un nuevo LÍDER.\p"
# 423 "data/maps/MossdeepCity/scripts.pory"
	.string "Al parecer, el nuevo LÍDER fue\n"
# 424 "data/maps/MossdeepCity/scripts.pory"
	.string "el mentor de PLUBIO en su día.$"
