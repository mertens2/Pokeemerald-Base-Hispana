# 1 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 2 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
@ .set LOCALID_RAYQUAZA_SLEEPING, 1
# 3 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 4 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_MapScripts::
# 5 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_OnResume
# 6 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_OnTransition
# 7 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_OnWarp
# 8 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	.byte 0
# 9 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 10 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume:
# 11 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_EventScript_TryRemoveRayquaza
# 12 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	end
# 13 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 14 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza::
# 15 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 16 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 17 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 18 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	return
# 19 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 20 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition:
# 21 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_SetCleanLayout
# 22 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	call_if_ge VAR_SKY_PILLAR_STATE, 2, SkyPillar_Top_EventScript_TryShowRayquaza
# 23 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	end
# 24 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 25 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout::
# 26 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 27 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 28 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	return
# 29 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 30 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza::
# 31 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
# 32 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	return
# 33 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 34 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza::
# 35 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 36 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	return
# 37 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 38 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp:
# 39 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 40 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	.2byte 0
# 41 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 42 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown::
# 43 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 44 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	end
# 45 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 46 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza::
# 47 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	lockall
# 48 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	waitse
# 49 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 50 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay 40
# 51 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	waitmoncry
# 52 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 53 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 54 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 55 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	waitstate
# 56 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 57 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 58 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SkyPillar_Top_EventScript_DefeatedRayquaza
# 59 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SkyPillar_Top_EventScript_RanFromRayquaza
# 60 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_RanFromRayquaza
# 61 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 62 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	releaseall
# 63 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	end
# 64 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 65 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza::
# 66 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 67 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_DefeatedRayquaza2
# 68 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	end
# 69 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 70 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza::
# 71 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 72 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	goto SkyPillar_Top_EventScript_RanFromRayquaza2
# 73 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	end
# 74 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 75 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza2::
# 76 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 77 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 78 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 79 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	releaseall
# 80 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	end
# 81 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 82 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza2::
# 83 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 84 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 85 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 86 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 87 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 88 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	releaseall
# 89 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	end
# 90 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 91 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza::
# 92 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	lockall
# 93 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 94 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 95 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 96 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 97 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 98 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 99 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 100 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 101 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 102 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	waitse
# 103 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 104 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 105 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 106 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 107 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 108 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 109 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	waitstate
# 110 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	waitse
# 111 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 112 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 113 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 114 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 115 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 116 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 117 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	waitstate
# 118 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	waitmoncry
# 119 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 120 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 121 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 122 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 123 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	closemessage
# 124 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay 20
# 125 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 126 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 127 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 128 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 129 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 130 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 131 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 132 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	releaseall
# 133 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	end
# 134 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 135 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
@ Rayquaza has unusual movement frames
# 136 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
@ See comments, or sAnimTable_Rayquaza
# 137 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 138 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 139 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left  @ Coiled, awake
# 140 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 141 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 142 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 143 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 144 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 145 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	walk_in_place_left  @ Coiled, mouth open
# 146 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 147 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 148 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 149 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 150 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 151 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 152 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 153 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 154 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	step_end
# 155 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 156 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 157 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_16
# 158 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	walk_in_place_down  @ Coiled, asleep
# 159 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_8
# 160 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	walk_in_place_right  @ Normal, awake
# 161 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	delay_8
# 162 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	walk_faster_up  @ Fly up
# 163 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	slide_up
# 164 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	slide_up
# 165 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	slide_up
# 166 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	slide_up
# 167 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	slide_up
# 168 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	slide_up
# 169 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	step_end
# 170 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 171 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp:
# 172 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 173 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 174 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 175 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	step_end
# 176 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 177 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown:
# 178 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 179 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 180 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 181 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	step_end
# 182 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"

# 183 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff:
# 184 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"
