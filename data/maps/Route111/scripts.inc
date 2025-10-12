Route111_Trigger::
# 3 "data/maps/Route111/scripts.pory"
	addvar VAR_TEMP_0, 1
# 4 "data/maps/Route111/scripts.pory"
	msgbox Route111_Trigger_Text_0
	return


# 7 "data/maps/Route111/scripts.pory"

# 8 "data/maps/Route111/scripts.pory"

# 9 "data/maps/Route111/scripts.pory"
@ Note: LOCALID_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h
# 10 "data/maps/Route111/scripts.pory"

# 11 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 12 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 13 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 14 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 15 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 16 "data/maps/Route111/scripts.pory"
	.byte 0
# 17 "data/maps/Route111/scripts.pory"

# 18 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 19 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 20 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 21 "data/maps/Route111/scripts.pory"
	end
# 22 "data/maps/Route111/scripts.pory"

# 23 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 24 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 25 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 26 "data/maps/Route111/scripts.pory"
	return
# 27 "data/maps/Route111/scripts.pory"

# 28 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 29 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 30 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 31 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 32 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 33 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 34 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 35 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 36 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 37 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 38 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 39 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 40 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 41 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 42 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 43 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 44 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 45 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 46 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 47 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 48 "data/maps/Route111/scripts.pory"
	return
# 49 "data/maps/Route111/scripts.pory"

# 50 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 51 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 52 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 53 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 54 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 55 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 56 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 57 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 58 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 59 "data/maps/Route111/scripts.pory"
	end
# 60 "data/maps/Route111/scripts.pory"

# 61 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 62 "data/maps/Route111/scripts.pory"
	checkplayergender
# 63 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 64 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 65 "data/maps/Route111/scripts.pory"
	return
# 66 "data/maps/Route111/scripts.pory"

# 67 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 68 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 69 "data/maps/Route111/scripts.pory"
	return
# 70 "data/maps/Route111/scripts.pory"

# 71 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 72 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 73 "data/maps/Route111/scripts.pory"
	return
# 74 "data/maps/Route111/scripts.pory"

# 75 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 76 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 77 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 78 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 79 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 80 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 81 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 82 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 83 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 84 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 85 "data/maps/Route111/scripts.pory"
	return
# 86 "data/maps/Route111/scripts.pory"

# 87 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 88 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 89 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 90 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 91 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 92 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 93 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 94 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 95 "data/maps/Route111/scripts.pory"
	end
# 96 "data/maps/Route111/scripts.pory"

# 97 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 98 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 99 "data/maps/Route111/scripts.pory"
	return
# 100 "data/maps/Route111/scripts.pory"

# 101 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 102 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 103 "data/maps/Route111/scripts.pory"
	return
# 104 "data/maps/Route111/scripts.pory"

# 105 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 106 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 107 "data/maps/Route111/scripts.pory"
	.2byte 0
# 108 "data/maps/Route111/scripts.pory"

# 109 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 110 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 111 "data/maps/Route111/scripts.pory"
	end
# 112 "data/maps/Route111/scripts.pory"

# 113 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 114 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 115 "data/maps/Route111/scripts.pory"
	.2byte 0
# 116 "data/maps/Route111/scripts.pory"

# 117 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally::
# 118 "data/maps/Route111/scripts.pory"
	lockall
# 119 "data/maps/Route111/scripts.pory"
	faceplayer
# 120 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_WALLY, Common_Movement_ExclamationMark
# 121 "data/maps/Route111/scripts.pory"
	playse SE_PIN
# 122 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route111/scripts.pory"
	namebox Wally
# 124 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Wally_Text_0
# 125 "data/maps/Route111/scripts.pory"
	specialvar VAR_0x8004, GetPlayerFacingDirection
# 126 "data/maps/Route111/scripts.pory"
	compare VAR_0x8004, DIR_SOUTH
# 127 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_Wally_2
# 128 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_1:
# 129 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_WALLY, Common_Movement_WalkInPlaceUp
# 130 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Wally_Text_1
# 132 "data/maps/Route111/scripts.pory"
	closemessage
# 133 "data/maps/Route111/scripts.pory"
	hidenamebox
# 134 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 135 "data/maps/Route111/scripts.pory"
	playse SE_PIN
# 136 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route111/scripts.pory"
	faceplayer
# 138 "data/maps/Route111/scripts.pory"
	namebox Wally
# 139 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Wally_Text_2
# 140 "data/maps/Route111/scripts.pory"
	closemessage
# 141 "data/maps/Route111/scripts.pory"
	hidenamebox
# 142 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_WALLY, Route111_Movement_Wally1
# 143 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Wally_Text_3
# 145 "data/maps/Route111/scripts.pory"
	fadeoutbgm 1
# 146 "data/maps/Route111/scripts.pory"
	closemessage
# 147 "data/maps/Route111/scripts.pory"
	hidenamebox
# 148 "data/maps/Route111/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 149 "data/maps/Route111/scripts.pory"
	waitse
# 150 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 151 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8005, 1
# 152 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8006, 4
# 153 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8007, 2
# 154 "data/maps/Route111/scripts.pory"
	special ShakeCamera
# 155 "data/maps/Route111/scripts.pory"
	waitstate
# 156 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 157 "data/maps/Route111/scripts.pory"
	playse SE_PIN
# 158 "data/maps/Route111/scripts.pory"
	waitse
# 159 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PlayerHelp
# 161 "data/maps/Route111/scripts.pory"
	delay 8
# 162 "data/maps/Route111/scripts.pory"
	fadescreen FADE_TO_BLACK
# 163 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 164 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Wally_Text_4
# 165 "data/maps/Route111/scripts.pory"
	closemessage
# 166 "data/maps/Route111/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 5
# 167 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_WALLY
# 168 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_WALLY_LAVARIDGE
# 169 "data/maps/Route111/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 170 "data/maps/Route111/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE_OUT
# 171 "data/maps/Route111/scripts.pory"
	fadeinbgm 1
# 172 "data/maps/Route111/scripts.pory"
	warp MAP_LAVARIDGE_TOWN_GYM_1F, 14, 11
# 173 "data/maps/Route111/scripts.pory"
	release
# 174 "data/maps/Route111/scripts.pory"
	end
# 175 "data/maps/Route111/scripts.pory"

# 176 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_2:
# 177 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PlayerGetOut
# 178 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 179 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Wally_1
# 180 "data/maps/Route111/scripts.pory"

# 181 "data/maps/Route111/scripts.pory"

# 182 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerGetOut:
# 183 "data/maps/Route111/scripts.pory"
	walk_left
# 184 "data/maps/Route111/scripts.pory"
	walk_down
# 185 "data/maps/Route111/scripts.pory"
	delay_8
# 186 "data/maps/Route111/scripts.pory"
	face_right
# 187 "data/maps/Route111/scripts.pory"
	step_end
# 188 "data/maps/Route111/scripts.pory"

# 189 "data/maps/Route111/scripts.pory"
Route111_Movement_Wally1:
# 190 "data/maps/Route111/scripts.pory"
	walk_up
# 191 "data/maps/Route111/scripts.pory"
	walk_up
# 192 "data/maps/Route111/scripts.pory"
	walk_slow_up
# 193 "data/maps/Route111/scripts.pory"
	walk_slow_up
# 194 "data/maps/Route111/scripts.pory"
	delay_16
# 195 "data/maps/Route111/scripts.pory"
	walk_in_place_up
# 196 "data/maps/Route111/scripts.pory"
	step_end
# 197 "data/maps/Route111/scripts.pory"

# 198 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerHelp:
# 199 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 200 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 201 "data/maps/Route111/scripts.pory"
	walk_fast_up
# 202 "data/maps/Route111/scripts.pory"
	step_end
# 203 "data/maps/Route111/scripts.pory"

# 204 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_Text_0:
# 205 "data/maps/Route111/scripts.pory"
	.string "¡{PLAYER}!\n"
# 206 "data/maps/Route111/scripts.pory"
	.string "No esperaba que entendieras donde\l"
# 207 "data/maps/Route111/scripts.pory"
	.string "estaba... ¡Pero me alegra verte aquí!$"
# 208 "data/maps/Route111/scripts.pory"

# 209 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_Text_1:
# 210 "data/maps/Route111/scripts.pory"
	.string "Q{PAUSE 8}uiero... Entrenar en esta misma Ruta,\n"
# 211 "data/maps/Route111/scripts.pory"
	.string "porque -COF, COF-,{PAUSE 25} yo{PAUSE 8} creo que puedo\l"
# 212 "data/maps/Route111/scripts.pory"
	.string "sobreponerme a mi asma. Que puedo\l"
# 213 "data/maps/Route111/scripts.pory"
	.string "vencer a mi enfermedad y lograrlo todo.\l"
# 214 "data/maps/Route111/scripts.pory"
	.string "{PAUSE 25}-COF, COF, COF-\p"
# 215 "data/maps/Route111/scripts.pory"
	.string "Mmmgghh{PAUSE 11}...\l"
# 216 "data/maps/Route111/scripts.pory"
	.string "{PAUSE 11}...$"
# 217 "data/maps/Route111/scripts.pory"

# 218 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_Text_2:
# 219 "data/maps/Route111/scripts.pory"
	.string "No te... {PAUSE 25}-COF-...pre{PAUSE 8}ocupes, {PLAYER}.\n"
# 220 "data/maps/Route111/scripts.pory"
	.string "¡Soy más fuerte de lo que aparento!\l"
# 221 "data/maps/Route111/scripts.pory"
	.string "-COF, COF, COF-...{PAUSE 20}¡Ah...!\p"
# 222 "data/maps/Route111/scripts.pory"
	.string "Eh...{PAUSE 20} Est{PAUSE 11}oy bi{PAUSE 8}en... ¡ESTOY BIEN!$"
# 223 "data/maps/Route111/scripts.pory"

# 224 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_Text_3:
# 225 "data/maps/Route111/scripts.pory"
	.string "¡ESTOY....! {PAUSE 20}Es{PAUSE 8}toy...\n"
# 226 "data/maps/Route111/scripts.pory"
	.string "B-{PAUSE 8}bi-{PAUSE 25}e{PAUSE 5}n...................$"
# 227 "data/maps/Route111/scripts.pory"

# 228 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wally_Text_4:
# 229 "data/maps/Route111/scripts.pory"
	.string ".{PAUSE 8}.{PAUSE 8}.{PAUSE 8} .{PAUSE 8}.{PAUSE 8}.{PAUSE 8} .{PAUSE 8}.{PAUSE 8}.{PAUSE 8} .{PAUSE 8}.{PAUSE 8}.{PAUSE 8} .{PAUSE 8}.{PAUSE 8}.{PAUSE 8} .{PAUSE 8}.{PAUSE 8}.{PAUSE 8}$"
# 230 "data/maps/Route111/scripts.pory"
	
# 231 "data/maps/Route111/scripts.pory"

# 232 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 233 "data/maps/Route111/scripts.pory"
	lockall
# 234 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 235 "data/maps/Route111/scripts.pory"
	waitstate
# 236 "data/maps/Route111/scripts.pory"
	delay 24
# 237 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 238 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 239 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 240 "data/maps/Route111/scripts.pory"
	waitstate
# 241 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 242 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 243 "data/maps/Route111/scripts.pory"
	delay 16
# 244 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 245 "data/maps/Route111/scripts.pory"
	delay 16
# 246 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 247 "data/maps/Route111/scripts.pory"
	waitstate
# 248 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 249 "data/maps/Route111/scripts.pory"
	waitstate
# 250 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 251 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 252 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 253 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 254 "data/maps/Route111/scripts.pory"
	releaseall
# 255 "data/maps/Route111/scripts.pory"
	end
# 256 "data/maps/Route111/scripts.pory"

# 257 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 258 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 259 "data/maps/Route111/scripts.pory"
	releaseall
# 260 "data/maps/Route111/scripts.pory"
	end
# 261 "data/maps/Route111/scripts.pory"

# 262 "data/maps/Route111/scripts.pory"
@ Unused
# 263 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 264 "data/maps/Route111/scripts.pory"
	lock_anim
# 265 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 266 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 267 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 268 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 269 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 270 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 271 "data/maps/Route111/scripts.pory"
	step_end
# 272 "data/maps/Route111/scripts.pory"

# 273 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 274 "data/maps/Route111/scripts.pory"
	lock
# 275 "data/maps/Route111/scripts.pory"
	faceplayer
# 276 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 277 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 278 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 279 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 280 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 281 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 282 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 283 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 284 "data/maps/Route111/scripts.pory"
	release
# 285 "data/maps/Route111/scripts.pory"
	end
# 286 "data/maps/Route111/scripts.pory"

# 287 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 288 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 289 "data/maps/Route111/scripts.pory"
	release
# 290 "data/maps/Route111/scripts.pory"
	end
# 291 "data/maps/Route111/scripts.pory"

# 292 "data/maps/Route111/scripts.pory"
@ Unused
# 293 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 294 "data/maps/Route111/scripts.pory"
	lockall
# 295 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 296 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 297 "data/maps/Route111/scripts.pory"
	end
# 298 "data/maps/Route111/scripts.pory"

# 299 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 300 "data/maps/Route111/scripts.pory"
	lockall
# 301 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 302 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 303 "data/maps/Route111/scripts.pory"
	end
# 304 "data/maps/Route111/scripts.pory"

# 305 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 306 "data/maps/Route111/scripts.pory"
	lockall
# 307 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 308 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 309 "data/maps/Route111/scripts.pory"
	end
# 310 "data/maps/Route111/scripts.pory"

# 311 "data/maps/Route111/scripts.pory"
@ Unused
# 312 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 313 "data/maps/Route111/scripts.pory"
	lockall
# 314 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 315 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 316 "data/maps/Route111/scripts.pory"
	end
# 317 "data/maps/Route111/scripts.pory"

# 318 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 319 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 320 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 321 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 322 "data/maps/Route111/scripts.pory"
	releaseall
# 323 "data/maps/Route111/scripts.pory"
	end
# 324 "data/maps/Route111/scripts.pory"

# 325 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 326 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 327 "data/maps/Route111/scripts.pory"
	closemessage
# 328 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 329 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 330 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 331 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 332 "data/maps/Route111/scripts.pory"
	releaseall
# 333 "data/maps/Route111/scripts.pory"
	end
# 334 "data/maps/Route111/scripts.pory"

# 335 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 336 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 337 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route111/scripts.pory"
	return
# 339 "data/maps/Route111/scripts.pory"

# 340 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 341 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 342 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 343 "data/maps/Route111/scripts.pory"
	return
# 344 "data/maps/Route111/scripts.pory"

# 345 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 346 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 347 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 348 "data/maps/Route111/scripts.pory"
	return
# 349 "data/maps/Route111/scripts.pory"

# 350 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 351 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 352 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 353 "data/maps/Route111/scripts.pory"
	return
# 354 "data/maps/Route111/scripts.pory"

# 355 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 356 "data/maps/Route111/scripts.pory"
	walk_up
# 357 "data/maps/Route111/scripts.pory"
	step_end
# 358 "data/maps/Route111/scripts.pory"

# 359 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 360 "data/maps/Route111/scripts.pory"
	walk_down
# 361 "data/maps/Route111/scripts.pory"
	step_end
# 362 "data/maps/Route111/scripts.pory"

# 363 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 364 "data/maps/Route111/scripts.pory"
	walk_left
# 365 "data/maps/Route111/scripts.pory"
	step_end
# 366 "data/maps/Route111/scripts.pory"

# 367 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 368 "data/maps/Route111/scripts.pory"
	walk_right
# 369 "data/maps/Route111/scripts.pory"
	step_end
# 370 "data/maps/Route111/scripts.pory"

# 371 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 372 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 373 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 374 "data/maps/Route111/scripts.pory"
	doweather
# 375 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 376 "data/maps/Route111/scripts.pory"
	end
# 377 "data/maps/Route111/scripts.pory"

# 378 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 379 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 380 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 381 "data/maps/Route111/scripts.pory"
	doweather
# 382 "data/maps/Route111/scripts.pory"
	end
# 383 "data/maps/Route111/scripts.pory"

# 384 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 385 "data/maps/Route111/scripts.pory"
	lock
# 386 "data/maps/Route111/scripts.pory"
	faceplayer
# 387 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 388 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 389 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 390 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 391 "data/maps/Route111/scripts.pory"
	release
# 392 "data/maps/Route111/scripts.pory"
	end
# 393 "data/maps/Route111/scripts.pory"

# 394 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 395 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 396 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 397 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 398 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 399 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 400 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 401 "data/maps/Route111/scripts.pory"
	closemessage
# 402 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Route111_Movement_WinstrateEnterHouse
# 403 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 404 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTOR
# 405 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 406 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 407 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 408 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 409 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICTORIA
# 410 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateExitHouse
# 411 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 413 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 414 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 415 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 416 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 417 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 418 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 419 "data/maps/Route111/scripts.pory"
	closemessage
# 420 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 421 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 422 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTORIA
# 423 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 424 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 425 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 426 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 427 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VIVI
# 428 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateExitHouse
# 429 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 430 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 431 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 432 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 433 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Common_Movement_WalkInPlaceFasterUp
# 434 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 435 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 436 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 437 "data/maps/Route111/scripts.pory"
	closemessage
# 438 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateEnterHouse
# 439 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 440 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VIVI
# 441 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 442 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 443 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 444 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 445 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICKY
# 446 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateExitHouse
# 447 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 448 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 449 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 450 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 451 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 452 "data/maps/Route111/scripts.pory"
	closemessage
# 453 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Common_Movement_WalkInPlaceFasterUp
# 454 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 455 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 456 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateEnterHouse
# 457 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 458 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICKY
# 459 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 460 "data/maps/Route111/scripts.pory"
	release
# 461 "data/maps/Route111/scripts.pory"
	end
# 462 "data/maps/Route111/scripts.pory"

# 463 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 464 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 465 "data/maps/Route111/scripts.pory"
	waitdooranim
# 466 "data/maps/Route111/scripts.pory"
	return
# 467 "data/maps/Route111/scripts.pory"

# 468 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 469 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 470 "data/maps/Route111/scripts.pory"
	waitdooranim
# 471 "data/maps/Route111/scripts.pory"
	return
# 472 "data/maps/Route111/scripts.pory"

# 473 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 474 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 475 "data/maps/Route111/scripts.pory"
	walk_up
# 476 "data/maps/Route111/scripts.pory"
	step_end
# 477 "data/maps/Route111/scripts.pory"

# 478 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 479 "data/maps/Route111/scripts.pory"
	walk_down
# 480 "data/maps/Route111/scripts.pory"
	step_end
# 481 "data/maps/Route111/scripts.pory"

# 482 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 483 "data/maps/Route111/scripts.pory"
	delay_16
# 484 "data/maps/Route111/scripts.pory"
	delay_16
# 485 "data/maps/Route111/scripts.pory"
	delay_16
# 486 "data/maps/Route111/scripts.pory"
	step_end
# 487 "data/maps/Route111/scripts.pory"

# 488 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 489 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 490 "data/maps/Route111/scripts.pory"
	end
# 491 "data/maps/Route111/scripts.pory"

# 492 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 493 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 494 "data/maps/Route111/scripts.pory"
	end
# 495 "data/maps/Route111/scripts.pory"

# 496 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 497 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 498 "data/maps/Route111/scripts.pory"
	end
# 499 "data/maps/Route111/scripts.pory"

# 500 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 501 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 502 "data/maps/Route111/scripts.pory"
	end
# 503 "data/maps/Route111/scripts.pory"

# 504 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 505 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 506 "data/maps/Route111/scripts.pory"
	end
# 507 "data/maps/Route111/scripts.pory"

# 508 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 509 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 510 "data/maps/Route111/scripts.pory"
	end
# 511 "data/maps/Route111/scripts.pory"

# 512 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 513 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 514 "data/maps/Route111/scripts.pory"
	end
# 515 "data/maps/Route111/scripts.pory"

# 516 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 517 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 518 "data/maps/Route111/scripts.pory"
	end
# 519 "data/maps/Route111/scripts.pory"

# 520 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 521 "data/maps/Route111/scripts.pory"
	lock
# 522 "data/maps/Route111/scripts.pory"
	faceplayer
# 523 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 524 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 525 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 526 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 527 "data/maps/Route111/scripts.pory"
	release
# 528 "data/maps/Route111/scripts.pory"
	end
# 529 "data/maps/Route111/scripts.pory"

# 530 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 531 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 532 "data/maps/Route111/scripts.pory"
	release
# 533 "data/maps/Route111/scripts.pory"
	end
# 534 "data/maps/Route111/scripts.pory"

# 535 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 536 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 537 "data/maps/Route111/scripts.pory"
	release
# 538 "data/maps/Route111/scripts.pory"
	end
# 539 "data/maps/Route111/scripts.pory"

# 540 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 541 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 542 "data/maps/Route111/scripts.pory"
	release
# 543 "data/maps/Route111/scripts.pory"
	end
# 544 "data/maps/Route111/scripts.pory"

# 545 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 546 "data/maps/Route111/scripts.pory"
	lockall
# 547 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 548 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 549 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 550 "data/maps/Route111/scripts.pory"
	closemessage
# 551 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 552 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 553 "data/maps/Route111/scripts.pory"
	releaseall
# 554 "data/maps/Route111/scripts.pory"
	end
# 555 "data/maps/Route111/scripts.pory"

# 556 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 557 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 558 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 559 "data/maps/Route111/scripts.pory"
	end
# 560 "data/maps/Route111/scripts.pory"

# 561 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 562 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 563 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 564 "data/maps/Route111/scripts.pory"
	end
# 565 "data/maps/Route111/scripts.pory"

# 566 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 567 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 568 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 569 "data/maps/Route111/scripts.pory"
	end
# 570 "data/maps/Route111/scripts.pory"

# 571 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 572 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 573 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 574 "data/maps/Route111/scripts.pory"
	end
# 575 "data/maps/Route111/scripts.pory"

# 576 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 577 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 578 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 579 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 580 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 581 "data/maps/Route111/scripts.pory"
	release
# 582 "data/maps/Route111/scripts.pory"
	end
# 583 "data/maps/Route111/scripts.pory"

# 584 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 585 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 586 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 587 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 588 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 589 "data/maps/Route111/scripts.pory"
	release
# 590 "data/maps/Route111/scripts.pory"
	end
# 591 "data/maps/Route111/scripts.pory"

# 592 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 593 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 594 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 595 "data/maps/Route111/scripts.pory"
	end
# 596 "data/maps/Route111/scripts.pory"

# 597 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 598 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 599 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 600 "data/maps/Route111/scripts.pory"
	end
# 601 "data/maps/Route111/scripts.pory"

# 602 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 603 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 604 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 605 "data/maps/Route111/scripts.pory"
	end
# 606 "data/maps/Route111/scripts.pory"

# 607 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 608 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 609 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 610 "data/maps/Route111/scripts.pory"
	end
# 611 "data/maps/Route111/scripts.pory"

# 612 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 613 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 614 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 615 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 616 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 617 "data/maps/Route111/scripts.pory"
	release
# 618 "data/maps/Route111/scripts.pory"
	end
# 619 "data/maps/Route111/scripts.pory"

# 620 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 621 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 622 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 623 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 624 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 625 "data/maps/Route111/scripts.pory"
	release
# 626 "data/maps/Route111/scripts.pory"
	end
# 627 "data/maps/Route111/scripts.pory"

# 628 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 629 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 630 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 631 "data/maps/Route111/scripts.pory"
	end
# 632 "data/maps/Route111/scripts.pory"

# 633 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 634 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 635 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 636 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 637 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 638 "data/maps/Route111/scripts.pory"
	release
# 639 "data/maps/Route111/scripts.pory"
	end
# 640 "data/maps/Route111/scripts.pory"

# 641 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 642 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 643 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 644 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 645 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 646 "data/maps/Route111/scripts.pory"
	release
# 647 "data/maps/Route111/scripts.pory"
	end
# 648 "data/maps/Route111/scripts.pory"

# 649 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 650 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 651 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 652 "data/maps/Route111/scripts.pory"
	end
# 653 "data/maps/Route111/scripts.pory"

# 654 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 655 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 656 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 657 "data/maps/Route111/scripts.pory"
	end
# 658 "data/maps/Route111/scripts.pory"

# 659 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 660 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 661 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 662 "data/maps/Route111/scripts.pory"
	end
# 663 "data/maps/Route111/scripts.pory"

# 664 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 665 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 666 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 667 "data/maps/Route111/scripts.pory"
	end
# 668 "data/maps/Route111/scripts.pory"

# 669 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 670 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 671 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 672 "data/maps/Route111/scripts.pory"
	end
# 673 "data/maps/Route111/scripts.pory"

# 674 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 675 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 676 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 677 "data/maps/Route111/scripts.pory"
	end
# 678 "data/maps/Route111/scripts.pory"

# 679 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 680 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 681 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 682 "data/maps/Route111/scripts.pory"
	end
# 683 "data/maps/Route111/scripts.pory"

# 684 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 685 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 686 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 687 "data/maps/Route111/scripts.pory"
	end
# 688 "data/maps/Route111/scripts.pory"

# 689 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 690 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 691 "data/maps/Route111/scripts.pory"
	end
# 692 "data/maps/Route111/scripts.pory"

# 693 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 694 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 695 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 696 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 697 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 698 "data/maps/Route111/scripts.pory"

# 699 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 700 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 701 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 702 "data/maps/Route111/scripts.pory"

# 703 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 704 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 705 "data/maps/Route111/scripts.pory"

# 706 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 707 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 708 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 709 "data/maps/Route111/scripts.pory"

# 710 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 711 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 712 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 713 "data/maps/Route111/scripts.pory"

# 714 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 715 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 716 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 717 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 718 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 719 "data/maps/Route111/scripts.pory"

# 720 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 721 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 722 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 723 "data/maps/Route111/scripts.pory"

# 724 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 725 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 726 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 727 "data/maps/Route111/scripts.pory"

# 728 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 729 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 730 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 731 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 732 "data/maps/Route111/scripts.pory"

# 733 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 734 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 735 "data/maps/Route111/scripts.pory"

# 736 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 737 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 738 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 739 "data/maps/Route111/scripts.pory"

# 740 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 741 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 742 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 743 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 744 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 745 "data/maps/Route111/scripts.pory"

# 746 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 747 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 748 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 749 "data/maps/Route111/scripts.pory"

# 750 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 751 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 752 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 753 "data/maps/Route111/scripts.pory"

# 754 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 755 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 756 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 757 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 758 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 759 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 760 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 761 "data/maps/Route111/scripts.pory"

# 762 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 763 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 764 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 765 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 766 "data/maps/Route111/scripts.pory"

# 767 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 768 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 769 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 770 "data/maps/Route111/scripts.pory"

# 771 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 772 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 773 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 774 "data/maps/Route111/scripts.pory"

# 775 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 776 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 777 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 778 "data/maps/Route111/scripts.pory"

# 779 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 780 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 781 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 782 "data/maps/Route111/scripts.pory"

# 783 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 784 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 785 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 786 "data/maps/Route111/scripts.pory"

# 787 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 788 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 789 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 790 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 791 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 792 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 793 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 794 "data/maps/Route111/scripts.pory"

# 795 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 796 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 797 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 798 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 799 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 800 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 801 "data/maps/Route111/scripts.pory"

# 802 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 803 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 804 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 805 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 806 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 807 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 808 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 809 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 810 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 811 "data/maps/Route111/scripts.pory"

# 812 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 813 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 814 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 815 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 816 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 817 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 818 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 819 "data/maps/Route111/scripts.pory"

# 820 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 821 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 822 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 823 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 824 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 825 "data/maps/Route111/scripts.pory"

# 826 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 827 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 828 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 829 "data/maps/Route111/scripts.pory"

# 830 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 831 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 832 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 833 "data/maps/Route111/scripts.pory"

# 834 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 835 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 836 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 837 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 838 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 839 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 840 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 841 "data/maps/Route111/scripts.pory"

# 842 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 843 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 844 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 845 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"

Route111_Trigger_Text_0:
# 4 "data/maps/Route111/scripts.pory"
	.string "Hasta aqui llega esta DEMO. Puedes\n"
	.string "seguir si quieres, pero los mapas y\l"
	.string "eventos estarán a medio terminar.$"
