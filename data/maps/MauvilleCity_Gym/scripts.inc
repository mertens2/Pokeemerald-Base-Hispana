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
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	checkitem ITEM_TM34
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_Gym_EventScript_GiveShockWave2
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"

# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"

# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM34
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"

# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM34
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"

# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"

# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"

# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"

# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"

# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"

# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"

# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch5::
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 5, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 5
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"

# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"

# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"

# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"

# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"

# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"

# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"

# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"

# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"

# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"

# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"

# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"

# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"

# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"

# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"

# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"

# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, the LEADER of MAUVILLE\n"
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "GYM, uses ELECTRIC-type POKéMON.\p"
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with WATER-type\n"
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, he'll zap them! Bzzt!\p"
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his GYM! Eccentric!\p"
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"

# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"

# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"

# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 272 "data/maps/MauvilleCity_Gym/scripts.pory"

# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON and rock, it's all about heart,\n"
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"

# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under WATTSON!\n"
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"

# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"

# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON, our GYM LEADER, has been\n"
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"

# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This GYM's got puzzles!\n"
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"

# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat:
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"

# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON says he likes setting up\n"
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"

# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my POKéMON's moves,\n"
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"

# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"

# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that MAUVILLE was founded\n"
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by WATTSON.\p"
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a TRAINER long before we\n"
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became TRAINERS.\l"
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"

# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"

# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"

# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"

# 326 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've given up on my plans to convert\n"
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "the city, I have.\p"
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And so, I put my time into making\n"
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "door traps in my GYM.\p"
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Now, what are you doing here?\p"
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "What's that? You say you've gotten\n"
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "past all my rigged doors?\p"
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Now, that is amusing!\p"
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Then, I, WATTSON, the LEADER of\n"
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE GYM, shall electrify you!$"
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"

# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this BADGE!$"
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"

# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the DYNAMO BADGE\n"
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from WATTSON.$"
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"

# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With the DYNAMO BADGE, POKéMON can\n"
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "use ROCK SMASH out of battle.\p"
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, it will make your POKéMON a little\n"
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bit faster, too.\p"
# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"

# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains SHOCK WAVE.\p"
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that never\n"
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "misses! You can count on it!\p"
# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"

# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WATTSON\n"
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"

# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young TRAINER like you!$"
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"

# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 374 "data/maps/MauvilleCity_Gym/scripts.pory"

# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM$"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"

# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\p"
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"

# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"

# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"

# 395 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: We'll have to recharge our\n"
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"

# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "WATTSON: Ah-ha! Here at last!\n"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my POKéMON!\p"
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one POKéMON with you!\p"
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "POKéMON, all right?$"
