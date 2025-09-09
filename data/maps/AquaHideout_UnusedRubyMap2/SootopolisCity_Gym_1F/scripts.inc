# 1 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 2 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_MapScripts::
# 3 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_OnFrame
# 4 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
# 5 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_OnLoad
# 6 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
# 7 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.byte 0
# 8 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 9 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnTransition:
# 10 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
# 11 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 12 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 13 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnResume:
# 14 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
# 15 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 16 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 17 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnLoad:
# 18 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 19 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	special SetSootopolisGymCrackedIceMetatiles
# 20 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 21 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 22 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles::
# 23 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_StopCheckingStairs  @ All stairs ice
# 24 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
# 25 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
# 26 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
# 27 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
# 28 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs::
# 29 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
# 30 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
# 31 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstStairs::
# 32 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
# 33 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
# 34 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_StopCheckingStairs::
# 35 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	return
# 36 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 37 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnFrame:
# 38 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
# 39 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
# 40 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
# 41 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
# 42 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.2byte 0
# 43 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 44 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs::
# 45 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 46 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 47 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 48 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 49 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 50 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 51 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 52 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs::
# 53 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 54 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 55 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 56 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 57 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 58 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 59 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 60 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs::
# 61 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 62 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 63 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 64 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 65 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 66 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 67 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 68 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_FallThroughIce::
# 69 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 70 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	delay 20
# 71 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
# 72 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_FALL
# 74 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	delay 60
# 75 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
# 76 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	waitstate
# 77 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 78 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 79 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Movement_FallThroughIce:
# 80 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	set_invisible
# 81 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	step_end
# 82 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 83 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan::
# 84 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
# 85 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 86 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SootopolisCity_Gym_1F_EventScript_JuanRematch
# 87 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	checkitem ITEM_TM03
# 88 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
# 89 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
# 90 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
# 91 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	release
# 92 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 93 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 94 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanDefeated::
# 95 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
# 96 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	waitmessage
# 97 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 98 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
# 99 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 100 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_BADGE08_GET
# 101 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 102 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 103 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 104 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 105 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 106 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 8
# 107 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 108 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
# 109 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 110 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 111 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 112 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
# 113 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	waitfanfare
# 114 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 115 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 116 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 117 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	release
# 118 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 119 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 120 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
# 121 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM03
# 122 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 123 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 124 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	return
# 125 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 126 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
# 127 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM03
# 128 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 129 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 130 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	release
# 131 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 132 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 133 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
# 134 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
# 135 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	release
# 136 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 137 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 138 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanRematch::
# 139 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat, SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons
# 140 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
# 141 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 142 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 143 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuide::
# 144 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 145 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 146 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
# 147 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 148 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	release
# 149 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 150 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 151 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
# 152 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 153 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	release
# 154 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 155 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 156 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
# 157 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 158 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 159 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 160 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 161 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 162 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_RightGymStatue::
# 163 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 164 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 165 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 166 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 167 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 168 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
# 169 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 170 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 171 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 172 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 173 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatue::
# 174 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 175 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 176 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	end
# 177 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 178 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuideAdvice:
# 179 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yo! How's it going, CHAMPION-\n"
# 180 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 181 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS's GYM LEADER JUAN is\n"
# 182 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "a master of WATER-type POKéMON.\p"
# 183 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "And, to get to JUAN, an icy floor\n"
# 184 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "will hamper your progress…\p"
# 185 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Listen, I'm sorry, but that's all the\n"
# 186 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "advice that I have for you.\p"
# 187 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "The rest of the way, you have to\n"
# 188 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "go for it yourself!$"
# 189 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 190 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuidePostVictory:
# 191 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yow! You've beaten even JUAN, who\n"
# 192 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "was supposedly the best in all HOENN!\p"
# 193 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Okay! Check out your TRAINER CARD.\p"
# 194 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "If you've gotten all the BADGES, you're\n"
# 195 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "set for the POKéMON LEAGUE challenge!$"
# 196 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 197 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanIntro:
# 198 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Let me ask you.\n"
# 199 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Did you know?\l"
# 200 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, I should not be so coy.\p"
# 201 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "It was I who taught WALLACE everything\n"
# 202 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "there is to know about POKéMON.\p"
# 203 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Once, I had given up my position as\n"
# 204 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "the GYM LEADER.\p"
# 205 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "In my place, I had entrusted WALLACE\n"
# 206 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "with the GYM.\p"
# 207 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "However, a compelling reason arose for\n"
# 208 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "me to make a comeback.\p"
# 209 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, but enough chatter.\n"
# 210 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Let us begin our match, shall we?\p"
# 211 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Please, you shall bear witness to\n"
# 212 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "our artistry.\p"
# 213 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "A grand illusion of water sculpted\n"
# 214 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "by POKéMON and myself!$"
# 215 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 216 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
# 217 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
# 218 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
# 219 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
@ the existence of that unused array of ints.
# 220 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanDefeat:
# 221 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahaha, excellent!\n"
# 222 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Very well, you are the winner.\p"
# 223 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "From you, I sense the brilliant shine\n"
# 224 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "of skill that will overcome all.\p"
# 225 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "However, compared with me or even\n"
# 226 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "WALLACE, you are lacking in elegance.\p"
# 227 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Perhaps I should make you a loan\n"
# 228 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "of my outfit?\p"
# 229 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …\n"
# 230 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …\p"
# 231 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Hahaha, I merely jest!\p"
# 232 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Rather than my clothes, I shall reward\n"
# 233 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "you with this, the RAIN BADGE!$"
# 234 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 235 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ReceivedRainBadge:
# 236 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER} received the RAIN BADGE\n"
# 237 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "from JUAN.$"
# 238 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 239 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis:
# 240 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Having the RAIN BADGE shall assure you\n"
# 241 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "the full obedience of all your POKéMON\l"
# 242 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "to your every command.\p"
# 243 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "The RAIN BADGE also allows the use\n"
# 244 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "of the HM move WATERFALL to scale\l"
# 245 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "walls of cascading water.\p"
# 246 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "And, so that you never forget the\n"
# 247 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "battle we shared, take this…$"
# 248 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 249 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainWaterPulse:
# 250 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "The TECHNICAL MACHINE I handed you\n"
# 251 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "contains WATER PULSE.\p"
# 252 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "In use, it will occasionally confuse\n"
# 253 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "the target with ultrasonic waves.\p"
# 254 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …$"
# 255 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 256 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_RegisteredJuan:
# 257 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Registered GYM LEADER JUAN\n"
# 258 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 259 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 260 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostBattle:
# 261 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "The TRAINERS who have gathered all\n"
# 262 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "the GYM BADGES of HOENN should make\l"
# 263 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "way to the ultimate destination.\p"
# 264 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "The POKéMON LEAGUE.\p"
# 265 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Travel to the easternmost reaches\n"
# 266 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "of HOENN, to the island EVER GRANDE.\p"
# 267 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "There, you shall find the POKéMON\n"
# 268 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "LEAGUE.$"
# 269 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 270 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GoGetFortreeBadge:
# 271 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "There remains but one BADGE to\n"
# 272 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "obtain in HOENN.\p"
# 273 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "If you wish to challenge the POKéMON\n"
# 274 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "LEAGUE, you must obtain the last\l"
# 275 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "BADGE from the GYM in FORTREE.$"
# 276 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 277 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatue:
# 278 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM$"
# 279 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 280 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatueCertified:
# 281 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\p"
# 282 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN'S CERTIFIED TRAINERS:\n"
# 283 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 284 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 285 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPreRematch:
# 286 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: Ah, this GYM had returned to its\n"
# 287 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 288 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 289 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 290 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\p"
# 291 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you\n"
# 292 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "as often as you wish!$"
# 293 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 294 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchDefeat:
# 295 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahaha, you are the winner!\n"
# 296 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have defeated me again!$"
# 297 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 298 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostRematch:
# 299 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: If I told you to become my\n"
# 300 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "apprentice, you will refuse, I am sure.\p"
# 301 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "I would like to make a gift of my coat\n"
# 302 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "to you.\p"
# 303 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "But again, you will refuse.\n"
# 304 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "I imagine that to be so.\p"
# 305 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "And that, my friend, is a certain sign\n"
# 306 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "of nobility!$"
# 307 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"

# 308 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons:
# 309 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: Ah, this GYM had returned to its\n"
# 310 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 311 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 312 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 313 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\n"
# 314 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you…\p"
# 315 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, no, no, no.\n"
# 316 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have with you but one POKéMON.\p"
# 317 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "I wish that you would return with\n"
# 318 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_Gym_1F/scripts.pory"
	.string "two, perhaps more, POKéMON, please.$"
