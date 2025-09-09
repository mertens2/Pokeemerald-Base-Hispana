# 1 "data/maps/MauvilleCity_Gym/scripts.pory"

# 2 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_MapScripts::
# 3 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
# 4 "data/maps/MauvilleCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/MauvilleCity_Gym/scripts.pory"

# 6 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad:
# 7 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_DeactivatePuzzle
# 8 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_MAUVILLE_GYM_STATE
# 9 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"

# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"

# 20 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 21 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 22 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"

# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"

# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 60 "data/maps/MauvilleCity_Gym/scripts.pory"

# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"

# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"

# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"

# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SHOCK_WAVE, MauvilleCity_Gym_EventScript_GiveShockWave2
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"

# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"

# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"

# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"

# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"

# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"

# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"

# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"

# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"

# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"

# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"

# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"

# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"

# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"

# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"

# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"

# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"

# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"

# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"

# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"

# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"

# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"

# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"

# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"

# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"

# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¿Camino del CAMPEONATO?\p"
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "ERICO, el LÍDER del GIMNASIO\n"
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "de MALVALONA, usa POKéMON\l"
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "de tipo ELÉCTRICO.\p"
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Si le desafías con POKéMON\n"
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "de tipo AGUA, te fulminará!\p"
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Y además ha puesto por todo\n"
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "el GIMNASIO puertas controladas\l"
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "por interruptores! Mira que es rarito…\p"
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Bueno, ¡ve a por él!$"
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"

# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Guau, tú sí que tienes chispa!\n"
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡No hay circuito que se te resista!$"
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"

# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Tengo una personalidad tan\n"
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "electrificante que te voy a\l"
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "chamuscar. ¡Jua, jua, jua!$"
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"

# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Nunca había visto una actuación\n"
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "tan subida de voltios, oye.\l"
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Me has puesto los pelos de punta!$"
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"

# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Los POKéMON son como el rock:\n"
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡tienes que poner el corazón!$"
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"

# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Yo rocanroleo mejor que nadie!\n"
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡No puedo perder!$"
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"

# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Me has desenchufado…$"
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"

# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Nuestro LÍDER de GIMNASIO, ERICO,\n"
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "está aquí desde hace siglos.\p"
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Cuando empezó a combatir, tu padre\n"
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "aún no había nacido, imagínate.$"
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"

# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Este GIMNASIO está lleno\n"
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "de trampas. ¿A que mola?$"
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"

# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat:
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Soy muy mal perdedor…$"
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"

# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "ERICO dice que le encanta poner\n"
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "trampas con interruptores.$"
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"

# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Con mi energía y mis POKéMON,\n"
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "te voy a desintegrar!$"
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"

# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Tu potencia me ha dejado\n"
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "cortocircuitada!$"
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"

# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Dicen que ERICO fundó MALVALONA.\p"
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Era ENTRENADOR ya mucho antes\n"
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "de que nosotros llegáramos a serlo.\l"
# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Tiene que saberse todos los trucos!$"
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"

# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Me encanta todo lo que brilla!$"
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"

# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Me has deslumbrado…$"
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"

# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "A ERICO, del GIMNASIO de MALVALONA,\n"
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "le brilla la frente un montón. ¡Es genial!$"
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"

# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He abandonado mis planes de\n"
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "remodelación urbanística…\p"
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Y me he dedicado a instalar trampas\n"
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "eléctricas en mi GIMNASIO.\p"
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Y tú ¿qué haces aquí?\p"
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¿Cómo? ¿Que has conseguido burlar\n"
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "todas las puertas amañadas?\p"
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Jua, jua, jua!\n"
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Tienes madera!\p"
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Pues ahora yo, ERICO, LÍDER\n"
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "del GIMNASIO de MALVALONA,\l"
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "te voy a dar una buena descarga!$"
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"

# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Jua, jua, jua!\n"
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Vale, he perdido!\p"
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ha sido un combate emocionante.\n"
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Toma esta MEDALLA!$"
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"

# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} recibió la MEDALLA DINAMO\n"
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "de ERICO.$"
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"

# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "La MEDALLA DINAMO te permite usar\n"
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GOLPE ROCA fuera de los combates.\p"
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Además, hará que tus POKéMON\n"
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "sean un poco más rápidos.\p"
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mmmm…\n"
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Toma esto también.$"
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"

# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Es la MT34, contiene ONDA VOLTIO.\p"
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Se trata de un gran movimiento\n"
# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "que nunca falla. ¡Nunca jamás!\p"
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Digo…$"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"

# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Acabas de registrar a ERICO,\n"
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "el LÍDER de GIMNASIO, en el POKéNAV.$"
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"

# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Ver a una joven promesa como tú\n"
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "me llena de confianza en el futuro!$"
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"

# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Jua, jua, jua!\n"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Sigue trabajando así!$"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"

# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD MALVALONA$"
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"

# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD MALVALONA\p"
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"

# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "ERICO: ¡Ajajá! ¡Por fin!\n"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Yo sé lo que tú quieres…\l"
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Quieres luchar contra mis POKéMON!\p"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Jua, jua, jua, jua!\p"
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Van a saltar chispas!\n"
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Te lo advierto!$"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"

# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Uf…\n"
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Me he quedado sin pilas…$"
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"

# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "ERICO: Habrá que recargar pilas…\p"
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pero, una vez que estemos a tope\n"
# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "de energía, será un placer volver\l"
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "a medir fuerzas contigo.\p"
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Así que vuelve por aquí un día\n"
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "de éstos, ¿vale?$"
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"

# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "ERICO: ¡Ajajá! ¡Por fin!\n"
# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Yo sé lo que tú quieres…\l"
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Quieres luchar contra mis POKéMON!\p"
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Jua, jua, jua, jua!\p"
# 423 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Huy, un momento…\n"
# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "¡Si sólo tienes un POKéMON!\p"
# 425 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Vuelve cuando tengas dos\n"
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON por lo menos, ¿vale?$"
