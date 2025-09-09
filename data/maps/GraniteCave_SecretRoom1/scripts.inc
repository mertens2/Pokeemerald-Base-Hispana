GraniteCave_SecretRoom1_MapScripts::
# 2 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GraniteCave_SecretRoom1_Rocks
# 3 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GraniteCave_SecretRoom1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GraniteCave_SecretRoom1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, GraniteCave_SecretRoom1_RegisInfluence
	.2byte 0


GraniteCave_SecretRoom1_RegisInfluence::
# 9 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIELEKI_DEFEATED, GraniteCave_SecretRoom1_RegisInfluence_4
GraniteCave_SecretRoom1_RegisInfluence_3:
# 13 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	msgbox GraniteCave_SecretRoom1_RegisInfluence_Text_0
# 14 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	closemessage
# 15 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_TEMP_0, 1
GraniteCave_SecretRoom1_RegisInfluence_1:
# 17 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	releaseall
	end

GraniteCave_SecretRoom1_RegisInfluence_2:
# 10 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_TEMP_0, 1
	goto GraniteCave_SecretRoom1_RegisInfluence_1

GraniteCave_SecretRoom1_RegisInfluence_4:
# 9 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIDRAGO_DEFEATED, GraniteCave_SecretRoom1_RegisInfluence_2
	goto GraniteCave_SecretRoom1_RegisInfluence_3


GraniteCave_SecretRoom1_Rocks::
# 22 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIDRAGO_ALMOST_UNLOCKED, GraniteCave_SecretRoom1_Rocks_7
GraniteCave_SecretRoom1_Rocks_5:
# 29 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIELEKI_ALMOST_UNLOCKED, GraniteCave_SecretRoom1_Rocks_4
GraniteCave_SecretRoom1_Rocks_1:
# 36 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIELEKI_DEFEATED, GraniteCave_SecretRoom1_Rocks_12
GraniteCave_SecretRoom1_Rocks_10:
# 47 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	release
	end

GraniteCave_SecretRoom1_Rocks_2:
# 23 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_12
# 24 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_11
# 25 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_8
# 26 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_14
# 27 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_15
	goto GraniteCave_SecretRoom1_Rocks_1

GraniteCave_SecretRoom1_Rocks_3:
# 30 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_12
# 31 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_3
# 32 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_13
# 33 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_14
# 34 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_16
	goto GraniteCave_SecretRoom1_Rocks_1

GraniteCave_SecretRoom1_Rocks_4:
# 29 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_REGIELEKI_DEFEATED, GraniteCave_SecretRoom1_Rocks_3
	goto GraniteCave_SecretRoom1_Rocks_1

GraniteCave_SecretRoom1_Rocks_7:
# 22 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_REGIDRAGO_DEFEATED, GraniteCave_SecretRoom1_Rocks_2
	goto GraniteCave_SecretRoom1_Rocks_5

GraniteCave_SecretRoom1_Rocks_11:
# 37 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_12
# 38 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_11
# 39 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_1
# 40 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_5
# 41 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_14
# 42 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_TEMP_15
# 43 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setobjectxyperm 2, 13, 19
# 44 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	releaseall
	end

GraniteCave_SecretRoom1_Rocks_12:
# 36 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIDRAGO_DEFEATED, GraniteCave_SecretRoom1_Rocks_11
	goto GraniteCave_SecretRoom1_Rocks_10


GraniteCave_SecretRoom1_Braille_Face::
# 52 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIDRAGO_ALMOST_UNLOCKED, GraniteCave_SecretRoom1_Braille_Face_7
GraniteCave_SecretRoom1_Braille_Face_5:
# 57 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIELEKI_ALMOST_UNLOCKED, GraniteCave_SecretRoom1_Braille_Face_4
GraniteCave_SecretRoom1_Braille_Face_3:
# 63 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	braillemsgbox DracoThunderAltar_Braille_MakeHisFace
# 64 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	release
	end

GraniteCave_SecretRoom1_Braille_Face_1:
# 53 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	braillemsgbox DracoThunderAltar_Braille_Route125
# 54 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	release
	end

GraniteCave_SecretRoom1_Braille_Face_2:
# 58 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	braillemsgbox DracoThunderAltar_Braille_Route111
# 59 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	release
	end

GraniteCave_SecretRoom1_Braille_Face_4:
# 57 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_REGIELEKI_DEFEATED, GraniteCave_SecretRoom1_Braille_Face_2
	goto GraniteCave_SecretRoom1_Braille_Face_3

GraniteCave_SecretRoom1_Braille_Face_7:
# 52 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_REGIDRAGO_DEFEATED, GraniteCave_SecretRoom1_Braille_Face_1
	goto GraniteCave_SecretRoom1_Braille_Face_5


GraniteCave_SecretRoom1_Braille_Fear::
# 70 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	braillemsgbox DracoThunderAltar_Braille_WeFearedSpeedWeFearedLife
# 71 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	release
	end


GraniteCave_SecretRoom1_Braille_Key::
# 76 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	braillemsgbox DracoThunderAltar_Braille_TheKeyIsUnited
# 77 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	release
	end


EventScript_RockSmash_Regis_1::
# 82 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIELEKI_DEFEATED, EventScript_RockSmash_Regis_1_7
EventScript_RockSmash_Regis_1_5:
# 87 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIDRAGO_ALMOST_UNLOCKED, EventScript_RockSmash_Regis_1_2
# 87 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIELEKI_ALMOST_UNLOCKED, EventScript_RockSmash_Regis_1_2
# 93 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	playse SE_M_ROCK_THROW
# 94 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_SmashRock
# 95 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	waitmovement 0
# 96 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	removeobject VAR_LAST_TALKED
# 97 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_TEMP_3, EventScript_RockSmash_Regis_1_36
EventScript_RockSmash_Regis_1_16:
# 137 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_TEMP_12, EventScript_RockSmash_Regis_1_15
EventScript_RockSmash_Regis_1_10:
# 180 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	releaseall
	end

EventScript_RockSmash_Regis_1_1:
# 83 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	msgbox EventScript_RockSmash_Regis_1_Text_0
# 84 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	releaseall
	end

EventScript_RockSmash_Regis_1_2:
# 88 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	msgbox EventScript_RockSmash_Regis_1_Text_1
# 89 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	releaseall
	end

EventScript_RockSmash_Regis_1_7:
# 82 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIDRAGO_DEFEATED, EventScript_RockSmash_Regis_1_1
	goto EventScript_RockSmash_Regis_1_5

EventScript_RockSmash_Regis_1_11:
# 100 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIELEKI_DEFEATED, EventScript_RockSmash_Regis_1_57
# 106 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 0
# 107 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 108 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_REGIELEKI_ALMOST_UNLOCKED
# 109 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8004, 0
# 110 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8005, 2
# 111 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8006, 2
# 112 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8007, 3
# 113 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	special ShakeCamera
# 114 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	playse SE_PIN
# 115 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 116 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	waitstate
# 117 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	delay 30
# 118 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8004, 2
# 119 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8005, 4
# 120 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8006, 4
# 121 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8007, 2
# 122 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	special ShakeCamera
# 123 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	waitstate
# 124 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	delay 30
# 125 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	waitmovement 0
# 126 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	msgbox EventScript_RockSmash_Regis_1_Text_3
# 127 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	playse SE_PIN
# 128 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 129 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	waitmovement 0
# 130 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 131 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	waitmovement 0
# 132 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	msgbox EventScript_RockSmash_Regis_1_Text_4
# 133 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	releaseall
	end

EventScript_RockSmash_Regis_1_12:
# 140 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_REGIDRAGO_DEFEATED, EventScript_RockSmash_Regis_1_60
# 146 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	delay 20
# 147 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setflag FLAG_REGIDRAGO_ALMOST_UNLOCKED
# 148 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8004, 0
# 149 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8005, 2
# 150 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8006, 2
# 151 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8007, 3
# 152 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	special ShakeCamera
# 153 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	waitstate
# 154 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	playse SE_M_ROCK_THROW
# 155 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	applymovement 2, Movement_SmashRock
# 156 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	waitmovement 0
# 157 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	removeobject 2
# 158 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	playse SE_PIN
# 159 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 160 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	waitmovement 0
# 161 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	delay 30
# 162 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8004, 2
# 163 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8005, 4
# 164 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8006, 4
# 165 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	setvar VAR_0x8007, 2
# 166 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	special ShakeCamera
# 167 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	waitstate
# 168 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	delay 30
# 169 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	msgbox EventScript_RockSmash_Regis_1_Text_3
# 170 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	playse SE_PIN
# 171 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 172 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	waitmovement 0
# 173 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 174 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	waitmovement 0
# 175 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	msgbox EventScript_RockSmash_Regis_1_Text_4
# 176 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	releaseall
	end

EventScript_RockSmash_Regis_1_13:
# 138 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_5, EventScript_RockSmash_Regis_1_22
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_14:
# 137 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_TEMP_14, EventScript_RockSmash_Regis_1_18
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_15:
# 137 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_TEMP_11, EventScript_RockSmash_Regis_1_14
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_18:
# 138 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_TEMP_15, EventScript_RockSmash_Regis_1_13
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_21:
# 138 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_7, EventScript_RockSmash_Regis_1_26
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_22:
# 138 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_9, EventScript_RockSmash_Regis_1_21
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_25:
# 139 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_3, EventScript_RockSmash_Regis_1_30
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_26:
# 139 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_RockSmash_Regis_1_25
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_29:
# 139 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_16, EventScript_RockSmash_Regis_1_12
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_30:
# 139 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_13, EventScript_RockSmash_Regis_1_29
	goto EventScript_RockSmash_Regis_1_10

EventScript_RockSmash_Regis_1_34:
# 98 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_1, EventScript_RockSmash_Regis_1_45
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_35:
# 97 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_TEMP_13, EventScript_RockSmash_Regis_1_40
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_36:
# 97 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_TEMP_12, EventScript_RockSmash_Regis_1_35
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_39:
# 97 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_TEMP_16, EventScript_RockSmash_Regis_1_34
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_40:
# 97 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_set FLAG_TEMP_14, EventScript_RockSmash_Regis_1_39
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_44:
# 98 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_7, EventScript_RockSmash_Regis_1_49
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_45:
# 98 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_11, EventScript_RockSmash_Regis_1_44
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_48:
# 98 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_8, EventScript_RockSmash_Regis_1_53
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_49:
# 98 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_5, EventScript_RockSmash_Regis_1_48
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_52:
# 99 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_15, EventScript_RockSmash_Regis_1_11
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_53:
# 99 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	goto_if_unset FLAG_TEMP_9, EventScript_RockSmash_Regis_1_52
	goto EventScript_RockSmash_Regis_1_16

EventScript_RockSmash_Regis_1_57:
# 101 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	msgbox EventScript_RockSmash_Regis_1_Text_2
# 102 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	releaseall
	end

EventScript_RockSmash_Regis_1_60:
# 141 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	msgbox EventScript_RockSmash_Regis_1_Text_5
# 142 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	releaseall
	end


GraniteCave_SecretRoom1_RegisInfluence_Text_0:
# 13 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	.string "La influencia de Registeel te permite\n"
	.string "romper las rocas en un santiamén.$"

EventScript_RockSmash_Regis_1_Text_0:
# 83 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	.string "El poder de Registeel parece estar\n"
	.string "siendo limitado por un poder abismal...\p"
	.string "Es incapaz de romper estas rocas...$"

EventScript_RockSmash_Regis_1_Text_1:
# 88 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	.string "Registeel piensa que hay cosas más\n"
	.string "importantes que hacer...\p"
	.string "Se rehúsa a alterar el patrón.$"

EventScript_RockSmash_Regis_1_Text_2:
# 101 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	.string "Regieleki ya ha sido derrotado...$"

EventScript_RockSmash_Regis_1_Text_3:
# 126 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	.string "Una puerta en la lejanía se ha abierto.$"

EventScript_RockSmash_Regis_1_Text_4:
# 132 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	.string "Los mensajes en la pared de ahí parecen\n"
	.string "haber cambiado.$"

EventScript_RockSmash_Regis_1_Text_5:
# 141 "data/maps/GraniteCave_SecretRoom1/scripts.pory"
	.string "Regidrago ya ha sido derrotado...$"
