# 1 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_MapScripts::
# 3 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_OnFrame
# 4 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
# 5 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_OnLoad
# 6 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
# 7 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.byte 0
# 8 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 9 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnTransition:
# 10 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
# 11 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 12 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 13 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnResume:
# 14 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
# 15 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 16 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 17 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnLoad:
# 18 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 19 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special SetSootopolisGymCrackedIceMetatiles
# 20 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 21 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 22 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles::
# 23 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_StopCheckingStairs  @ All stairs ice
# 24 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
# 25 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
# 26 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
# 27 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
# 28 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs::
# 29 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
# 30 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
# 31 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstStairs::
# 32 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
# 33 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
# 34 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_StopCheckingStairs::
# 35 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 36 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 37 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnFrame:
# 38 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
# 39 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
# 40 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
# 41 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
# 42 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.2byte 0
# 43 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 44 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs::
# 45 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 46 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 47 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 48 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 49 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 50 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 51 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 52 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs::
# 53 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 54 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 55 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 56 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 57 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 58 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 59 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 60 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs::
# 61 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 62 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 63 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 64 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 65 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 66 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 67 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 68 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_FallThroughIce::
# 69 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 70 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 20
# 71 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
# 72 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_FALL
# 74 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 60
# 75 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
# 76 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitstate
# 77 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 78 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 79 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Movement_FallThroughIce:
# 80 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	set_invisible
# 81 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	step_end
# 82 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 83 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan::
# 84 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
# 85 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 86 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SootopolisCity_Gym_1F_EventScript_JuanRematch
# 87 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_WATER_PULSE, SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
# 88 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
# 89 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
# 90 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 91 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 92 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 93 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanDefeated::
# 94 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
# 95 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmessage
# 96 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 97 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
# 98 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 99 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_BADGE08_GET
# 100 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 101 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 102 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 103 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 104 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 105 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 8
# 106 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 107 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
# 108 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 109 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 110 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 111 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
# 112 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitfanfare
# 113 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 114 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 115 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 116 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 117 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 118 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 119 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
# 120 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_WATER_PULSE
# 121 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 122 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 123 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
# 124 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 125 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 126 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
# 127 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_WATER_PULSE
# 128 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 129 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 130 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
# 131 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 132 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 133 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 134 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
# 135 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
# 136 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 137 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 138 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 139 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanRematch::
# 140 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat, SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons
# 141 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
# 142 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 143 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 144 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuide::
# 145 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 146 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 147 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
# 148 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 149 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 150 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 151 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 152 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
# 153 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 154 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 155 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 156 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 157 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
# 158 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 159 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 160 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 161 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 162 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 163 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_RightGymStatue::
# 164 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 165 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 166 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 167 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 168 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 169 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
# 170 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 171 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 172 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 173 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 174 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatue::
# 175 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 176 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 177 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 178 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 179 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuideAdvice:
# 180 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
# 181 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¿Camino del CAMPEONATO?\p"
# 182 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "GALANO, el LÍDER del GIMNASIO\n"
# 183 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "de ARRECÍPOLIS es un maestro\l"
# 184 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "de los POKéMON de tipo AGUA.\p"
# 185 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Y, si quieres llegar hasta GALANO,\n"
# 186 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "tendrás que superar un suelo helado.\p"
# 187 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Lo siento, pero no puedo decirte más.\p"
# 188 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¡El resto tendrás que descubrirlo tú!$"
# 189 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 190 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuidePostVictory:
# 191 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¡Guau! ¡Has vencido incluso a GALANO,\n"
# 192 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "que según dicen es el mejor de HOENN!\p"
# 193 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Muy bien, comprueba tu FICHA\n"
# 194 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "de ENTRENADOR.\p"
# 195 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Si tienes todas las MEDALLAS, puedes\n"
# 196 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "aceptar el desafío de la LIGA POKéMON.$"
# 197 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 198 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanIntro:
# 199 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Quisiera explicarte algo.\n"
# 200 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "No sé si sabrás…\l"
# 201 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Uf, no sé por qué me da corte…\p"
# 202 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Verás, yo enseñé a PLUBIO todo lo que\n"
# 203 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "se puede saber sobre los POKéMON.\p"
# 204 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Cuando acabé, renuncié a mi puesto\n"
# 205 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "como LÍDER de GIMNASIO.\p"
# 206 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Decidí confiar esa responsabilidad\n"
# 207 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "a PLUBIO.\p"
# 208 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Sin embargo, retomé mi puesto\n"
# 209 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "por una razón de peso…\p"
# 210 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Pero ya basta de charlas…\n"
# 211 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Deberíamos luchar, ¿no?\p"
# 212 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Quisiera que fueras testigo\n"
# 213 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "de nuestra maestría.\p"
# 214 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¡Mis POKéMON y yo hemos\n"
# 215 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "creado una gran ilusión acuática!$"
# 216 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 217 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
# 218 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
# 219 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
# 220 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the existence of that unused array of ints.
# 221 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanDefeat:
# 222 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¡Ja, ja, ja! ¡Magnífico!\n"
# 223 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "La victoria es tuya.\p"
# 224 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Tengo el presentimiento de que\n"
# 225 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "tu destreza te llevará a lo más alto.\p"
# 226 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "No obstante, en comparación conmigo\n"
# 227 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "o PLUBIO, te falta elegancia.\p"
# 228 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Puede que sea una buena idea\n"
# 229 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "prestarte mi traje…\p"
# 230 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¿Te lo presto?…\n"
# 231 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¿No te lo presto? …\p"
# 232 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¡Que no, que es broma!\p"
# 233 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¡Te voy a dar algo mejor! ¡Aquí\n"
# 234 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "tienes la MEDALLA LLUVIA!$"
# 235 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 236 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ReceivedRainBadge:
# 237 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER} recibió la MEDALLA LLUVIA\n"
# 238 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "de GALANO.$"
# 239 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 240 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis:
# 241 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "La MEDALLA LLUVIA te concede la\n"
# 242 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "obediencia total de todos tus POKéMON\l"
# 243 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "a cada una de tus órdenes.\p"
# 244 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "También te permite usar el movimiento\n"
# 245 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "de la MO CASCADA, que hace posible\l"
# 246 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "que subas por cualquier catarata.\p"
# 247 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Y, además, para que nunca olvides\n"
# 248 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "nuestro combate, toma esto…$"
# 249 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 250 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainWaterPulse:
# 251 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "La MT que te he dado contiene\n"
# 252 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "HIDROPULSO.\p"
# 253 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Lanza ondas ultrasónicas que pueden\n"
# 254 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "confundir a tu rival.\p"
# 255 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Es una pasada…$"
# 256 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 257 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_RegisteredJuan:
# 258 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Acabas de registrar a GALANO,\n"
# 259 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "el LÍDER de GIMNASIO, en el POKéNAV.$"
# 260 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 261 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostBattle:
# 262 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Los ENTRENADORES que han reunido\n"
# 263 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "todas las MEDALLAS de GIMNASIO\l"
# 264 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "de HOENN deben dar el siguiente paso…\p"
# 265 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¡La LIGA POKéMON!\p"
# 266 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Viaja al extremo oriental de HOENN,\n"
# 267 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "a la isla de COLOSALIA.\l"
# 268 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "La LIGA POKéMON está allí.$"
# 269 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 270 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GoGetFortreeBadge:
# 271 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Sólo te queda una MEDALLA\n"
# 272 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "por obtener en HOENN.\p"
# 273 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Si quieres llegar hasta la LIGA\n"
# 274 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "POKéMON, debes conseguirla\l"
# 275 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "en el GIMNASIO de ARBORADA.$"
# 276 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 277 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatue:
# 278 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "GIMNASIO POKéMON de ARRECÍPOLIS$"
# 279 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 280 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatueCertified:
# 281 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "GIMNASIO POKéMON de ARRECÍPOLIS\p"
# 282 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
# 283 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 284 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 285 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPreRematch:
# 286 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "GALANO: Ah, este GIMNASIO por fin\n"
# 287 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "ha vuelto a ser un oasis de serenidad…\p"
# 288 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Pero nuestro pequeño maremoto\n"
# 289 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "ha regresado para ponernos a prueba.\p"
# 290 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¡Será un placer darte satisfacción!\p"
# 291 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¡Estaré dispuesto a enfrentarme\n"
# 292 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "a ti todas las veces que quieras!$"
# 293 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 294 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchDefeat:
# 295 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¡Ja, ja, ja! La victoria es tuya.\n"
# 296 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¡Me has derrotado una vez más!$"
# 297 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 298 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostRematch:
# 299 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "GALANO: Si te propusiera que fueras\n"
# 300 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "mi aprendiz, te negarías, lo sé.\p"
# 301 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Quisiera ofrecerte mi abrigo\n"
# 302 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "como regalo.\p"
# 303 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Pero también lo rechazarías,\n"
# 304 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "estoy convencido.\p"
# 305 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¡Y eso, sin duda, demuestra\n"
# 306 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "la nobleza de tu carácter!$"
# 307 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 308 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons:
# 309 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "GALANO: Ah, este GIMNASIO por fin\n"
# 310 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "ha vuelto a ser un oasis de serenidad…\p"
# 311 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Pero nuestro pequeño maremoto\n"
# 312 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "ha regresado para ponernos a prueba.\p"
# 313 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "¡Será un placer darte satisfacción!\p"
# 314 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Pero no, no, no. Ni hablar.\n"
# 315 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Sólo tienes un POKéMON.\p"
# 316 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Te agradecería que regresaras\n"
# 317 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "con dos o incluso más POKéMON.$"
