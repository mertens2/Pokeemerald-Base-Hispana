LavaridgeTown_MapScripts::
# 9 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 23 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 11 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_LAVARIDGE_TOWN_STATE, 1
	goto_if_eq LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
	goto LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 15 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
	goto LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 24 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 25 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 26 "data/maps/LavaridgeTown/scripts.pory"
	fadeoutbgm 0
# 28 "data/maps/LavaridgeTown/scripts.pory"
	delay 16
# 34 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 37 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 39 "data/maps/LavaridgeTown/scripts.pory"
	delay 16
# 40 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 41 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 47 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 50 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 51 "data/maps/LavaridgeTown/scripts.pory"
	fadeinbgm 0
# 52 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 53 "data/maps/LavaridgeTown/scripts.pory"
	release
	return


LavaridgeTown_EventScript_EggWoman::
# 62 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 63 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 64 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_EggWoman_2
# 81 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_1, MSGBOX_YESNO
# 84 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_EventScript_EggWoman_5
# 96 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 97 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LavaridgeTown_EventScript_EggWoman_8
# 114 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_4
# 117 "data/maps/LavaridgeTown/scripts.pory"
	random 100
# 118 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 14
	goto_if_lt LavaridgeTown_EventScript_EggWoman_11
# 122 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_NO_SHINIES
LavaridgeTown_EventScript_EggWoman_10:
# 129 "data/maps/LavaridgeTown/scripts.pory"
	dynmultichoice 25, 4, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, LavaridgeTown_EventScript_EggWoman_Text_5, LavaridgeTown_EventScript_EggWoman_Text_6, LavaridgeTown_EventScript_EggWoman_Text_7, LavaridgeTown_EventScript_EggWoman_Text_8, LavaridgeTown_EventScript_EggWoman_Text_9, LavaridgeTown_EventScript_EggWoman_Text_10
# 132 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq LavaridgeTown_EventScript_EggWoman_15
LavaridgeTown_EventScript_EggWoman_14:
# 141 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 142 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_19
# 170 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_20
# 203 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_21
# 232 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_22
# 262 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_23
LavaridgeTown_EventScript_EggWoman_17:
# 307 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 308 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 309 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_EventScript_EggWoman_Text_11
# 310 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 311 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_SHINY_CREATION
# 312 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_NO_SHINIES
# 313 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_12
# 314 "data/maps/LavaridgeTown/scripts.pory"
	release
	return

LavaridgeTown_EventScript_EggWoman_2:
# 70 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_0
# 73 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_5:
# 90 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_2
# 93 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_8:
# 103 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_EggWoman_Text_3
# 106 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_EggWoman_11:
# 119 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_SHINY_CREATION
	goto LavaridgeTown_EventScript_EggWoman_10

LavaridgeTown_EventScript_EggWoman_15:
# 133 "data/maps/LavaridgeTown/scripts.pory"
	random 6
	goto LavaridgeTown_EventScript_EggWoman_14

LavaridgeTown_EventScript_EggWoman_19:
# 143 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 144 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 145 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_26
# 148 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_27
# 152 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_28
# 155 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_29
# 158 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_30
# 161 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_31
# 164 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_32
LavaridgeTown_EventScript_EggWoman_24:
# 168 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_SHIFT_GEAR
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_20:
# 171 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 173 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 174 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_35
# 178 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_36
# 181 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_37
# 185 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_38
# 188 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_39
# 193 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_40
# 197 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_41
LavaridgeTown_EventScript_EggWoman_33:
# 201 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_FREEZY_FROST
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_21:
# 204 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 205 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 206 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_44
# 209 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_45
# 212 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_46
# 216 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_47
# 220 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_48
# 223 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_49
# 226 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_50
LavaridgeTown_EventScript_EggWoman_42:
# 230 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_SPARKLY_SWIRL
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_22:
# 233 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 234 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 235 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_53
# 238 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_54
# 241 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_55
# 245 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_56
# 249 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_57
# 253 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_58
# 256 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_59
LavaridgeTown_EventScript_EggWoman_51:
# 260 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_NO_RETREAT
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_23:
# 263 "data/maps/LavaridgeTown/scripts.pory"
	random 7
# 264 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 265 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_62
# 269 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_63
# 273 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_64
# 276 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_65
# 280 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_EggWoman_66
# 283 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_EggWoman_67
# 286 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_EggWoman_68
LavaridgeTown_EventScript_EggWoman_60:
# 290 "data/maps/LavaridgeTown/scripts.pory"
	random 4
# 291 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 292 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_EggWoman_71
# 295 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_EggWoman_72
# 298 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_EggWoman_73
# 301 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_EggWoman_74
LavaridgeTown_EventScript_EggWoman_69:
	goto LavaridgeTown_EventScript_EggWoman_17

LavaridgeTown_EventScript_EggWoman_26:
# 146 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MEOWTH_GALAR
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_27:
# 149 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PAWNIARD
# 150 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SACRED_SWORD
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_28:
# 153 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_HONEDGE
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_29:
# 156 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_FERROSEED
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_30:
# 159 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MUNCHLAX
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_31:
# 162 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BELDUM
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_32:
# 165 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BONSLY
	goto LavaridgeTown_EventScript_EggWoman_24

LavaridgeTown_EventScript_EggWoman_35:
# 175 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_DARUMAKA_GALAR
# 176 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SIZZLY_SLIDE
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_36:
# 179 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_VULPIX_ALOLA
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_37:
# 182 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SNOM
# 183 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_WATER_SPORT
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_38:
# 186 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SPHEAL
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_39:
# 189 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_VANILLITE
# 190 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_CHILLY_RECEPTION
# 191 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 2, MOVE_FROST_BREATH
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_40:
# 194 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SMOOCHUM
# 195 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_41:
# 198 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SNOVER
	goto LavaridgeTown_EventScript_EggWoman_33

LavaridgeTown_EventScript_EggWoman_44:
# 207 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_IGGLYBUFF
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_45:
# 210 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CLEFFA
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_46:
# 213 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SWIRLIX
# 214 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_47:
# 217 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SPRITZEE
# 218 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_48:
# 221 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_AZURILL
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_49:
# 224 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOGEPI
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_50:
# 227 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MIME_JR
	goto LavaridgeTown_EventScript_EggWoman_42

LavaridgeTown_EventScript_EggWoman_53:
# 236 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_RIOLU
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_54:
# 239 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TYROGUE
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_55:
# 242 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_ELEKID
# 243 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_ZIPPY_ZAP
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_56:
# 246 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MAGBY
# 247 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SIZZLY_SLIDE
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_57:
# 250 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PICHU
# 251 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SPLISHY_SPLASH
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_58:
# 254 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MUNCHLAX
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_59:
# 257 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOXEL
	goto LavaridgeTown_EventScript_EggWoman_51

LavaridgeTown_EventScript_EggWoman_62:
# 266 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PICHU
# 267 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_SPLISHY_SPLASH
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_63:
# 270 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
# 271 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_COPYCAT
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_64:
# 274 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BUDEW
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_65:
# 277 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CHINGLING
# 278 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 1, MOVE_TIDY_UP
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_66:
# 281 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_HAPPINY
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_67:
# 284 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MANTYKE
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_68:
# 287 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOGEPI
	goto LavaridgeTown_EventScript_EggWoman_60

LavaridgeTown_EventScript_EggWoman_71:
# 293 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_BOUNCY_BUBBLE
	goto LavaridgeTown_EventScript_EggWoman_69

LavaridgeTown_EventScript_EggWoman_72:
# 296 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_BADDY_BAD
	goto LavaridgeTown_EventScript_EggWoman_69

LavaridgeTown_EventScript_EggWoman_73:
# 299 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_GLITZY_GLOW
	goto LavaridgeTown_EventScript_EggWoman_69

LavaridgeTown_EventScript_EggWoman_74:
# 302 "data/maps/LavaridgeTown/scripts.pory"
	setmonmove 8, 0, MOVE_SAPPY_SEED
	goto LavaridgeTown_EventScript_EggWoman_69


# 318 "data/maps/LavaridgeTown/scripts.pory"

# 319 "data/maps/LavaridgeTown/scripts.pory"

# 320 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 321 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 322 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 323 "data/maps/LavaridgeTown/scripts.pory"
	end
# 324 "data/maps/LavaridgeTown/scripts.pory"

# 325 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 326 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 327 "data/maps/LavaridgeTown/scripts.pory"
	end
# 328 "data/maps/LavaridgeTown/scripts.pory"

# 329 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 330 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 331 "data/maps/LavaridgeTown/scripts.pory"
	end
# 332 "data/maps/LavaridgeTown/scripts.pory"

# 333 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 334 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 335 "data/maps/LavaridgeTown/scripts.pory"
	end
# 336 "data/maps/LavaridgeTown/scripts.pory"

# 337 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 338 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 339 "data/maps/LavaridgeTown/scripts.pory"
	end
# 340 "data/maps/LavaridgeTown/scripts.pory"

# 341 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 342 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 343 "data/maps/LavaridgeTown/scripts.pory"
	end
# 344 "data/maps/LavaridgeTown/scripts.pory"

# 345 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 346 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 347 "data/maps/LavaridgeTown/scripts.pory"
	end
# 348 "data/maps/LavaridgeTown/scripts.pory"

# 349 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 350 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 351 "data/maps/LavaridgeTown/scripts.pory"
	end
# 352 "data/maps/LavaridgeTown/scripts.pory"

# 353 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 354 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 355 "data/maps/LavaridgeTown/scripts.pory"
	end
# 356 "data/maps/LavaridgeTown/scripts.pory"

# 357 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 358 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 359 "data/maps/LavaridgeTown/scripts.pory"
	end
# 360 "data/maps/LavaridgeTown/scripts.pory"

# 361 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 362 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 363 "data/maps/LavaridgeTown/scripts.pory"
	end
# 364 "data/maps/LavaridgeTown/scripts.pory"

# 365 "data/maps/LavaridgeTown/scripts.pory"

# 366 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 367 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 368 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 369 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 370 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 371 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 372 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 373 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 374 "data/maps/LavaridgeTown/scripts.pory"

# 375 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 376 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 377 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 378 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 379 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 380 "data/maps/LavaridgeTown/scripts.pory"
	.string "A POKéMON nipped my backside!$"
# 381 "data/maps/LavaridgeTown/scripts.pory"

# 382 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 383 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 384 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 385 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 386 "data/maps/LavaridgeTown/scripts.pory"

# 387 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 388 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 389 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 390 "data/maps/LavaridgeTown/scripts.pory"
	.string "GYM LEADER like FLANNERY.$"
# 391 "data/maps/LavaridgeTown/scripts.pory"

# 392 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 393 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put POKéMON in hot springs,\n"
# 394 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 395 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 396 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 397 "data/maps/LavaridgeTown/scripts.pory"

# 398 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 399 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 400 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 401 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 402 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 403 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 404 "data/maps/LavaridgeTown/scripts.pory"

# 405 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 406 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN\p"
# 407 "data/maps/LavaridgeTown/scripts.pory"
	.string "“POKéMON CENTER HOT SPRINGS\n"
# 408 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 409 "data/maps/LavaridgeTown/scripts.pory"

# 410 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 411 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\n"
# 412 "data/maps/LavaridgeTown/scripts.pory"
	.string "LEADER: FLANNERY\l"
# 413 "data/maps/LavaridgeTown/scripts.pory"
	.string "“One with a fiery passion that burns!”$"
# 414 "data/maps/LavaridgeTown/scripts.pory"

# 415 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 416 "data/maps/LavaridgeTown/scripts.pory"
	.string "POKéMON HERB SHOP\n"
# 417 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 34 "data/maps/LavaridgeTown/scripts.pory"
	.string "{TEXT_SPEED 4}{PLAYER} sintió algo en la mano.\p"
	.string "{TEXT_SPEED 8}Miró lo que era, y…{PAUSE 12}$"

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 47 "data/maps/LavaridgeTown/scripts.pory"
	.string "Por alguna razón…\n"
	.string "Se sintió como si siempre las hubieses\l"
	.string "tenido…$"

LavaridgeTown_EventScript_EggWoman_Text_0:
# 70 "data/maps/LavaridgeTown/scripts.pory"
	.string "Si quieres más Huevos Pokémon para\n"
	.string "cuidar, habrán en la Guardería a\l"
	.string "veces…\p"
	.string "¡La cuidadora es mi amiga, seguro te\n"
	.string "dejará cuidarlo si encuentra alguno!$"

LavaridgeTown_EventScript_EggWoman_Text_1:
# 81 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hola, joven… Se ve que eres un{A}\n"
	.string "Entrenador{A} muy fuerte…\p"
	.string "¿Te gustaría cuidar uno de los Huevos\n"
	.string "que encontramos en la Guardería?$"

LavaridgeTown_EventScript_EggWoman_Text_2:
# 90 "data/maps/LavaridgeTown/scripts.pory"
	.string "Como quieras entonces… Podemos\n"
	.string "cuidarlo mi esposo y yo…$"

LavaridgeTown_EventScript_EggWoman_Text_3:
# 103 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh… No tienes espacio…$"

LavaridgeTown_EventScript_EggWoman_Text_4:
# 114 "data/maps/LavaridgeTown/scripts.pory"
	.string "Me pregunto…\p"
	.string "¿Qué Pokémon te gustan más?$"

LavaridgeTown_EventScript_EggWoman_Text_5:
# 129 "data/maps/LavaridgeTown/scripts.pory"
	.string "Resistentes$"

LavaridgeTown_EventScript_EggWoman_Text_6:
# 129 "data/maps/LavaridgeTown/scripts.pory"
	.string "Fríos$"

LavaridgeTown_EventScript_EggWoman_Text_7:
# 129 "data/maps/LavaridgeTown/scripts.pory"
	.string "Mágicos$"

LavaridgeTown_EventScript_EggWoman_Text_8:
# 129 "data/maps/LavaridgeTown/scripts.pory"
	.string "Fuertes$"

LavaridgeTown_EventScript_EggWoman_Text_9:
# 129 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lindos$"

LavaridgeTown_EventScript_EggWoman_Text_10:
# 129 "data/maps/LavaridgeTown/scripts.pory"
	.string "¡Todos!$"

LavaridgeTown_EventScript_EggWoman_Text_11:
# 309 "data/maps/LavaridgeTown/scripts.pory"
	.string "¡{PLAYER} recibió el Huevo Extraño!$"

LavaridgeTown_EventScript_EggWoman_Text_12:
# 313 "data/maps/LavaridgeTown/scripts.pory"
	.string "¡Cuida bien de él, joven!$"
