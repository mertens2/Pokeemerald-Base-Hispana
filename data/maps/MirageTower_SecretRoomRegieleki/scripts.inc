MirageTower_SecretRoomRegieleki_MapScripts::
# 2 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MirageTower_SecretRoomRegieleki_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MirageTower_SecretRoomRegieleki_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, MirageTower_SecretRoomRegieleki_RegisInfluence
	.2byte 0


MirageTower_SecretRoomRegieleki_RegisInfluence::
# 8 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_REGIELEKI_DEFEATED, MirageTower_SecretRoomRegieleki_RegisInfluence_2
# 14 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_REGIELEKI_UNLOCKED, MirageTower_SecretRoomRegieleki_RegisInfluence_3
# 21 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
# 22 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar 0x8005, SPECIES_REGIROCK
# 23 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	special CheckSpecies
# 24 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirageTower_SecretRoomRegieleki_RegisInfluence_8
# 29 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox MirageTower_SecretRoomRegieleki_RegisInfluence_Text_0
# 30 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	closemessage
# 31 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_TEMP_0, 1
MirageTower_SecretRoomRegieleki_RegisInfluence_1:
# 33 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end

MirageTower_SecretRoomRegieleki_RegisInfluence_2:
# 9 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
# 10 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setweather WEATHER_NONE
# 11 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	doweather
# 12 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto MirageTower_SecretRoomRegieleki_RegisInfluence_1

MirageTower_SecretRoomRegieleki_RegisInfluence_3:
# 15 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
# 16 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setweather WEATHER_NONE
# 17 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	doweather
# 18 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto MirageTower_SecretRoomRegieleki_RegisInfluence_1

MirageTower_SecretRoomRegieleki_RegisInfluence_8:
# 25 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_TEMP_0, 1
# 26 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end


MirageTower_SecretRoomRegieleki_Regieleki::
# 38 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_DAILY_REGIELEKI, MirageTower_SecretRoomRegieleki_Regieleki_1
# 43 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_REGIELEKI_UNLOCKED, MirageTower_SecretRoomRegieleki_Regieleki_2
# 74 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_REGIELEKI_DEFEATED, MirageTower_SecretRoomRegieleki_Regieleki_3
# 81 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_8
# 82 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	closemessage
# 83 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end

MirageTower_SecretRoomRegieleki_Regieleki_1:
# 39 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_0
# 40 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end

MirageTower_SecretRoomRegieleki_Regieleki_2:
# 44 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_1
# 45 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	closemessage
# 46 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	delay 16
# 47 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_2
# 48 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	playmoncry SPECIES_REGIELEKI, CRY_MODE_NORMAL
# 49 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_3
# 50 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitmoncry
# 51 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	closemessage
# 52 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setwildbattle SPECIES_REGIELEKI, 50, ITEM_AIR_BALLOON
# 53 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	special StartRegiBattle
# 54 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitstate
# 55 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 56 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	switch VAR_RESULT
# 57 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	case B_OUTCOME_CAUGHT, MirageTower_SecretRoomRegieleki_Regieleki_10
# 62 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	case B_OUTCOME_WON, MirageTower_SecretRoomRegieleki_Regieleki_11
# 66 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	case B_OUTCOME_RAN, MirageTower_SecretRoomRegieleki_Regieleki_12
# 67 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, MirageTower_SecretRoomRegieleki_Regieleki_12
MirageTower_SecretRoomRegieleki_Regieleki_8:
# 71 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end

MirageTower_SecretRoomRegieleki_Regieleki_3:
# 75 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_7
# 77 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end

MirageTower_SecretRoomRegieleki_Regieleki_10:
# 58 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	removeobject 1
# 59 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setflag FLAG_REGIELEKI_DEFEATED
# 60 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_4
	goto MirageTower_SecretRoomRegieleki_Regieleki_8

MirageTower_SecretRoomRegieleki_Regieleki_11:
# 63 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setflag FLAG_DAILY_REGIELEKI
# 64 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_5
	goto MirageTower_SecretRoomRegieleki_Regieleki_8

MirageTower_SecretRoomRegieleki_Regieleki_12:
# 68 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_6
	goto MirageTower_SecretRoomRegieleki_Regieleki_8


MirageTower_SecretRoomRegieleki_Braille_1::
# 89 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	braillemsgbox ThunderTomb_Braille_First
# 90 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end


MirageTower_SecretRoomRegieleki_Braille_2::
# 95 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	braillemsgbox ThunderTomb_Braille_Second
# 96 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end


MirageTower_SecretRoomRegieleki_Braille_3::
# 101 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	braillemsgbox ThunderTomb_Braille_Third
# 102 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end


MirageTower_SecretRoomRegieleki_Braille_4::
# 107 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	braillemsgbox ThunderTomb_Braille_Fourth
# 108 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end


MirageTower_SecretRoomRegieleki_Braille_Message::
# 113 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	braillemsgbox ThunderTomb_Braille_Stop
# 114 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	delay 8
# 115 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	braillemsgbox ThunderTomb_Braille_Order
# 116 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	delay 8
# 117 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	braillemsgbox ThunderTomb_Braille_Stop
# 118 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end


EventScript_RockSmash_Regieleki::
# 123 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_REGIELEKI_DEFEATED, EventScript_RockSmash_Regieleki_1
# 128 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_REGIELEKI_UNLOCKED, EventScript_RockSmash_Regieleki_2
# 134 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	playse SE_M_ROCK_THROW
# 135 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_SmashRock
# 136 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitmovement 0
# 137 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	removeobject VAR_LAST_TALKED
# 138 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_1, EventScript_RockSmash_Regieleki_56
EventScript_RockSmash_Regieleki_12:
# 182 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_RockSmash_Regieleki_11
EventScript_RockSmash_Regieleki_6:
# 226 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end

EventScript_RockSmash_Regieleki_1:
# 124 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox EventScript_RockSmash_Regieleki_Text_0
# 125 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end

EventScript_RockSmash_Regieleki_2:
# 129 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox EventScript_RockSmash_Regieleki_Text_1
# 130 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end

EventScript_RockSmash_Regieleki_7:
# 143 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_REGIELEKI_DEFEATED, EventScript_RockSmash_Regieleki_99
# 149 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8004, 0
# 150 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8005, 2
# 151 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8006, 2
# 152 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8007, 3
# 153 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	special ShakeCamera
# 154 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	playse SE_PIN
# 155 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 156 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitstate
# 157 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	delay 30
# 158 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8004, 2
# 159 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8005, 4
# 160 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8006, 4
# 161 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8007, 2
# 162 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	special ShakeCamera
# 163 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitstate
# 164 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	delay 30
# 165 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitmovement 0
# 166 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setflag FLAG_REGIELEKI_UNLOCKED
# 167 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setweather WEATHER_NONE
# 168 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	doweather
# 169 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	delay 50
# 170 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox EventScript_RockSmash_Regieleki_Text_3
# 171 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	playmoncry SPECIES_REGIELEKI, CRY_MODE_NORMAL
# 172 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_3
# 173 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitmoncry
# 174 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	closemessage
# 175 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 176 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitmovement 0
# 177 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox EventScript_RockSmash_Regieleki_Text_4
# 178 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end

EventScript_RockSmash_Regieleki_8:
# 187 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_REGIELEKI_DEFEATED, EventScript_RockSmash_Regieleki_102
# 193 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8004, 0
# 194 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8005, 2
# 195 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8006, 2
# 196 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8007, 3
# 197 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	special ShakeCamera
# 198 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	playse SE_PIN
# 199 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 200 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitstate
# 201 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	delay 30
# 202 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8004, 2
# 203 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8005, 4
# 204 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8006, 4
# 205 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar VAR_0x8007, 2
# 206 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	special ShakeCamera
# 207 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitstate
# 208 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	delay 30
# 209 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitmovement 0
# 210 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setflag FLAG_REGIELEKI_UNLOCKED
# 211 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setweather WEATHER_NONE
# 212 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	doweather
# 213 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	delay 50
# 214 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox EventScript_RockSmash_Regieleki_Text_3
# 215 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	playmoncry SPECIES_REGIELEKI, CRY_MODE_NORMAL
# 216 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox MirageTower_SecretRoomRegieleki_Regieleki_Text_3
# 217 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitmoncry
# 218 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	closemessage
# 219 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 220 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitmovement 0
# 221 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox EventScript_RockSmash_Regieleki_Text_4
# 222 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end

EventScript_RockSmash_Regieleki_9:
# 184 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_A, EventScript_RockSmash_Regieleki_30
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_10:
# 182 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_3, EventScript_RockSmash_Regieleki_15
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_11:
# 182 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_2, EventScript_RockSmash_Regieleki_10
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_14:
# 182 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_7, EventScript_RockSmash_Regieleki_19
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_15:
# 182 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_5, EventScript_RockSmash_Regieleki_14
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_18:
# 183 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_D, EventScript_RockSmash_Regieleki_23
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_19:
# 183 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_9, EventScript_RockSmash_Regieleki_18
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_22:
# 183 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_11, EventScript_RockSmash_Regieleki_26
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_23:
# 183 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_E, EventScript_RockSmash_Regieleki_22
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_26:
# 183 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_15, EventScript_RockSmash_Regieleki_9
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_29:
# 184 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_B, EventScript_RockSmash_Regieleki_34
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_30:
# 184 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_4, EventScript_RockSmash_Regieleki_29
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_33:
# 184 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_13, EventScript_RockSmash_Regieleki_38
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_34:
# 184 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_C, EventScript_RockSmash_Regieleki_33
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_37:
# 185 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_6, EventScript_RockSmash_Regieleki_42
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_38:
# 185 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_14, EventScript_RockSmash_Regieleki_37
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_41:
# 185 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_8, EventScript_RockSmash_Regieleki_46
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_42:
# 185 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_16, EventScript_RockSmash_Regieleki_41
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_45:
# 186 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_10, EventScript_RockSmash_Regieleki_50
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_46:
# 185 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_F, EventScript_RockSmash_Regieleki_45
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_49:
# 186 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_18, EventScript_RockSmash_Regieleki_8
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_50:
# 186 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_17, EventScript_RockSmash_Regieleki_49
	goto EventScript_RockSmash_Regieleki_6

EventScript_RockSmash_Regieleki_54:
# 140 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_A, EventScript_RockSmash_Regieleki_75
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_55:
# 138 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_3, EventScript_RockSmash_Regieleki_60
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_56:
# 138 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_2, EventScript_RockSmash_Regieleki_55
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_59:
# 138 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_7, EventScript_RockSmash_Regieleki_64
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_60:
# 138 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_5, EventScript_RockSmash_Regieleki_59
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_63:
# 139 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_D, EventScript_RockSmash_Regieleki_68
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_64:
# 139 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_9, EventScript_RockSmash_Regieleki_63
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_67:
# 139 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_11, EventScript_RockSmash_Regieleki_71
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_68:
# 139 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_E, EventScript_RockSmash_Regieleki_67
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_71:
# 139 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_set FLAG_TEMP_15, EventScript_RockSmash_Regieleki_54
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_74:
# 140 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_B, EventScript_RockSmash_Regieleki_79
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_75:
# 140 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_4, EventScript_RockSmash_Regieleki_74
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_78:
# 140 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_13, EventScript_RockSmash_Regieleki_83
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_79:
# 140 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_C, EventScript_RockSmash_Regieleki_78
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_82:
# 141 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_6, EventScript_RockSmash_Regieleki_87
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_83:
# 141 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_14, EventScript_RockSmash_Regieleki_82
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_86:
# 141 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_8, EventScript_RockSmash_Regieleki_91
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_87:
# 141 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_16, EventScript_RockSmash_Regieleki_86
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_90:
# 142 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_10, EventScript_RockSmash_Regieleki_95
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_91:
# 141 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_F, EventScript_RockSmash_Regieleki_90
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_94:
# 142 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_18, EventScript_RockSmash_Regieleki_7
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_95:
# 142 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	goto_if_unset FLAG_TEMP_17, EventScript_RockSmash_Regieleki_94
	goto EventScript_RockSmash_Regieleki_12

EventScript_RockSmash_Regieleki_99:
# 144 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox EventScript_RockSmash_Regieleki_Text_2
# 145 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end

EventScript_RockSmash_Regieleki_102:
# 188 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox EventScript_RockSmash_Regieleki_Text_2
# 189 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end


MirageTower_SecretRoomRegieleki_PushBack::
# 232 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	setvar 0x8005, SPECIES_REGIROCK
# 233 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	special CheckSpecies
# 234 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirageTower_SecretRoomRegieleki_PushBack_1
	return

MirageTower_SecretRoomRegieleki_PushBack_1:
# 235 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	msgbox MirageTower_SecretRoomRegieleki_PushBack_Text_0
# 236 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirageTower_SecretRoomRegieleki_MoveBack
# 237 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	waitmovement 0
# 238 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	releaseall
	end


# 243 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
MirageTower_SecretRoomRegieleki_MoveBack:
# 244 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	lock_facing_direction
# 245 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	walk_down
# 246 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	unlock_facing_direction
	step_end

MirageTower_SecretRoomRegieleki_RegisInfluence_Text_0:
# 29 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "La influencia de Regirock te permite\n"
	.string "caminar y la fuerza de Registeel,\l"
	.string "romper las rocas.$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_0:
# 39 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "Regieleki parece muy cansado para\n"
	.string "pelear...\p"
	.string "¡Vuelve mañana!$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_1:
# 44 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "¡Re re re re gigigigi!$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_2:
# 47 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "¡Regieleki parece recuperado!$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_3:
# 49 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "¡Regi! ¡Eleeeeekiiiii!$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_4:
# 60 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "¡Regieleki te estará por siempre\n"
	.string "agradecido!$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_5:
# 64 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "¡A Regieleki le encantó combatir\n"
	.string "contigo!\p"
	.string "¡Seguro mañana querrá tener otra\n"
	.string "batalla!$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_6:
# 68 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "Regieleki parece decepcionado...$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_7:
# 75 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "Si ves esto, avisa al creador del juego.\n"
	.string "Esto no tendría que ocurrir. Dale al\l"
	.string "creador las circumstancias en las que\l"
	.string "esto ocurrió para encontrar una\l"
	.string "solución. Lamento las molestias.$"

MirageTower_SecretRoomRegieleki_Regieleki_Text_8:
# 81 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "R...eg....iii....$"

EventScript_RockSmash_Regieleki_Text_0:
# 124 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "Registeel parece desinteresado en\n"
	.string "estas rocas...$"

EventScript_RockSmash_Regieleki_Text_1:
# 129 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "Registeel piensa que hay cosas más\n"
	.string "importantes que hacer...\p"
	.string "Se rehúsa a alterar el patrón.$"

EventScript_RockSmash_Regieleki_Text_2:
# 144 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "Regieleki ya ha sido derrotado...$"

EventScript_RockSmash_Regieleki_Text_3:
# 170 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "Parece que el clima se ha calmado...$"

EventScript_RockSmash_Regieleki_Text_4:
# 177 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "¡Parece que Regieleki ya se siente\n"
	.string "mejor!\p"
	.string "¡Debe querer agradecerte con un\n"
	.string "combate!$"

MirageTower_SecretRoomRegieleki_PushBack_Text_0:
# 235 "data/maps/MirageTower_SecretRoomRegieleki/scripts.pory"
	.string "¡La tormenta de arena te empuja hacia\n"
	.string "atrás!$"
