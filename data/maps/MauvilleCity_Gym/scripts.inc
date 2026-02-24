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
	case 5, MauvilleCity_Gym_EventScript_Switch5Pressed
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_Gym/scripts.pory"

# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 20 "data/maps/MauvilleCity_Gym/scripts.pory"

# 21 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 22 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"

# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"

# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"

# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"

# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"

# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch5Pressed::
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"

# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"

# 59 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 60 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar B_VAR_STARTING_STATUS, STARTING_STATUS_THUNDER_TERRAIN
# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
	checkitem ITEM_TM34
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_Gym_EventScript_GiveShockWave2
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"

# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar B_VAR_STARTING_STATUS, 0
# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"

# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM34
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"

# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM34
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"

# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"

# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar B_VAR_STARTING_STATUS, STARTING_STATUS_THUNDER_TERRAIN
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"

# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"

# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"

# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"

# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"

# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch5::
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 5, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 5
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"

# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"

# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"

# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"

# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"

# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"

# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"

# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"

# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"

# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"

# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"

# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"

# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"

# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"

# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"

# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"

# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"

# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"

# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"

# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"

# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON and rock, it's all about heart,\n"
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"

# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under WATTSON!\n"
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"

# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"

# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\n"
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"

# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"

# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat:
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"

# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON says he likes setting up\n"
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"

# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"

# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"

# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by WATTSON.\p"
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"

# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"

# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"

# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"

# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my GYM.\p"
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, WATTSON, the LEADER of\n"
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM, shall electrify you!$"
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"

# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"

# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from WATTSON.$"
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"

# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, it will make your POKéMON a little\n"
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bit faster, too.\p"
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"

# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains SHOCK WAVE.\p"
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that never\n"
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "misses! You can count on it!\p"
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"

# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WATTSON\n"
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"

# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young TRAINER like you!$"
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"

# 374 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"

# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"

# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"

# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 393 "data/maps/MauvilleCity_Gym/scripts.pory"

# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"

# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: We'll have to recharge our\n"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"

# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"
