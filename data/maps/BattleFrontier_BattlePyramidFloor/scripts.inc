# 1 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidFloor_OnResume
# 4 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidFloor_OnFrame
# 5 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidFloor_OnTransition
# 6 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.byte 0
# 7 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 8 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnFrame:
# 9 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_D, 1, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight
# 10 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic
# 11 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName
# 12 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 14 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight::
# 15 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	lockall
# 16 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	@ pyramid_updatelight, cant use macro because it straddles the loop
# 17 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_UPDATE_LIGHT
# 18 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8005, 4
# 19 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8006, PYRAMID_LIGHT_INCR_RADIUS
# 20 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8007, SE_SAVE
# 21 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_RESULT, 0
# 22 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop::
# 23 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special CallBattlePyramidFunction
# 24 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	delay 2
# 25 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_ne VAR_RESULT, 2, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop
# 26 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_D, 0
# 27 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	releaseall
# 28 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 29 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 30 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName::
# 31 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special ShowMapNamePopup
# 32 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 0
# 33 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 34 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 35 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic::
# 36 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	playbgm MUS_B_PYRAMID, FALSE
# 37 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
# 38 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 39 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 40 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume:
# 41 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_setfloorpal
# 42 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_getstatus
# 43 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	switch VAR_TEMP_CHALLENGE_STATUS
# 44 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case 0, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
# 45 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramid_EventScript_WarpToLobby
# 46 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
# 47 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 48 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 49 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 50 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 51 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 52 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_DREW, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 53 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_FORFEITED, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 54 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_isbattletype BATTLE_TYPE_TRAINER  @ VAR_RESULT seems to be ignored here
# 55 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_D, 1
# 56 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ResetParty::
# 57 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_resetparty
# 58 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 59 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 60 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost::
# 61 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 62 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_set PYRAMID_DATA_TRAINER_FLAGS, 255
# 63 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramid_EventScript_WarpToLobby::
# 64 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_updatelight 0, PYRAMID_LIGHT_SET_RADIUS
# 65 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_clearhelditems
# 66 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special HealPlayerParty
# 67 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
# 68 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 69 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 70 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 71 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge::
# 72 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_save CHALLENGE_STATUS_SAVING
# 73 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special SavePlayerParty
# 74 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 75 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_settrainers
# 76 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 77 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 1
# 78 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 79 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 80 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnTransition:
# 81 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	call BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius
# 82 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 1
# 83 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 84 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 85 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius::
# 86 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_updatelight 32, PYRAMID_LIGHT_SET_RADIUS
# 87 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	return
# 88 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 89 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_WarpToNextFloor::
# 90 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 91 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM  @ Floor number
# 92 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	addvar VAR_RESULT, 1
# 93 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 94 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, 7, BattlePyramid_WarpToTop
# 95 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_seedfloor
# 96 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 97 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_RESULT, 0
# 98 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
# 99 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 100 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 101 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 102 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_WarpToTop::
# 103 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP, 17, 17
# 104 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 105 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 107 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
@ TRAINER_PHILLIP is used as a placeholder
# 108 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_TrainerBattle::
# 109 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	trainerbattle TRAINER_BATTLE_HILL, LOCALID_NONE, TRAINER_PHILLIP, BattleFacility_TrainerBattle_PlaceholderText, BattleFacility_TrainerBattle_PlaceholderText, NULL, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
# 110 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_showhint
# 111 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitmessage
# 112 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitbuttonpress
# 113 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	closemessage
# 114 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	releaseall
# 115 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 116 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 117 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_FindItemBall::
# 118 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_setitem
# 119 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	callstd STD_FIND_ITEM
# 120 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_0x8007, 0, BattlePyramid_FindItemBallEnd
# 121 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_hideitem
# 122 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_FindItemBallEnd::
# 123 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 124 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 125 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Retire::
# 126 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 127 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 128 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
@ Also used by Trainer Hill
# 129 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFacility_TrainerBattle_PlaceholderText:
# 130 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Mensaje de prueba.$"
# 131 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 132 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
gText_BattlePyramidConfirmRest::
# 133 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Tu expedición de la PIRÁMIDE BATALLA\n"
# 134 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "se guardará para que puedas tomarte\l"
# 135 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "un descanso. ¿Estás de acuerdo?$"
# 136 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 137 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
gText_BattlePyramidConfirmRetire::
# 138 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿De verdad deseas abortar\n"
# 139 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "tu EXPEDICIÓN de COMBATES?$"
# 140 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 141 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp1::
# 142 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "La salida de este nivel está\n"
# 143 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "en esa dirección: {UP_ARROW}.$"
# 144 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 145 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft1::
# 146 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "La salida de este nivel está\n"
# 147 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "en esa dirección: {LEFT_ARROW}.$"
# 148 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 149 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight1::
# 150 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "La salida de este nivel está\n"
# 151 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "en esa dirección: {RIGHT_ARROW}.$"
# 152 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 153 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown1::
# 154 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "La salida de este nivel está\n"
# 155 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "en esa dirección: {DOWN_ARROW}.$"
# 156 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 157 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp2::
# 158 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Creo que la salida de este nivel\n"
# 159 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "está por ahí: {UP_ARROW}.$"
# 160 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 161 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft2::
# 162 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Creo que la salida de este nivel\n"
# 163 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "está por ahí: {LEFT_ARROW}.$"
# 164 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 165 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight2::
# 166 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Creo que la salida de este nivel\n"
# 167 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "está por ahí: {RIGHT_ARROW}.$"
# 168 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 169 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown2::
# 170 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Creo que la salida de este nivel\n"
# 171 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "está por ahí: {DOWN_ARROW}.$"
# 172 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 173 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp3::
# 174 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "La salida está en esa dirección: {UP_ARROW}.$"
# 175 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 176 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft3::
# 177 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "La salida está en esa dirección: {LEFT_ARROW}.$"
# 178 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 179 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight3::
# 180 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "La salida está en esa dirección: {RIGHT_ARROW}.$"
# 181 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 182 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown3::
# 183 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "La salida está en esa dirección: {DOWN_ARROW}.$"
# 184 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 185 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp4::
# 186 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "En este nivel, la salida está\n"
# 187 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "en esa dirección: {UP_ARROW}.$"
# 188 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 189 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft4::
# 190 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "En este nivel, la salida está\n"
# 191 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "en esa dirección: {LEFT_ARROW}.$"
# 192 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 193 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight4::
# 194 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "En este nivel, la salida está\n"
# 195 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "en esa dirección: {RIGHT_ARROW}.$"
# 196 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 197 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown4::
# 198 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "En este nivel, la salida está\n"
# 199 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "en esa dirección: {DOWN_ARROW}.$"
# 200 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 201 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp5::
# 202 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿La salida, dices?\n"
# 203 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Por ahí: {UP_ARROW}.$"
# 204 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 205 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft5::
# 206 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿La salida, dices?\n"
# 207 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Por ahí: {LEFT_ARROW}.$"
# 208 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 209 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight5::
# 210 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿La salida, dices?\n"
# 211 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Por ahí: {RIGHT_ARROW}.$"
# 212 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 213 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown5::
# 214 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿La salida, dices?\n"
# 215 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Por ahí: {DOWN_ARROW}.$"
# 216 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 217 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp6::
# 218 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "La salida resulta que está \n"
# 219 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "en la dirección: {UP_ARROW}.$"
# 220 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 221 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft6::
# 222 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "La salida resulta que está \n"
# 223 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "en la dirección: {LEFT_ARROW}.$"
# 224 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 225 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight6::
# 226 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "La salida resulta que está \n"
# 227 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "en la dirección: {RIGHT_ARROW}.$"
# 228 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 229 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown6::
# 230 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "La salida resulta que está \n"
# 231 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "en la dirección: {DOWN_ARROW}.$"
# 232 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 233 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining1::
# 234 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Buscas objetos?\p"
# 235 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía te quedan 8 por aquí.$"
# 236 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 237 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining1::
# 238 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Buscas objetos?\p"
# 239 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía te quedan 7 por aquí.$"
# 240 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 241 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining1::
# 242 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Buscas objetos?\p"
# 243 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía te quedan 6 por aquí.$"
# 244 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 245 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining1::
# 246 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Buscas objetos?\p"
# 247 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía te quedan 5 por aquí.$"
# 248 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 249 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining1::
# 250 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Buscas objetos?\p"
# 251 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía te quedan 4 por aquí.$"
# 252 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 253 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining1::
# 254 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Buscas objetos?\p"
# 255 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía te quedan 3 por aquí.$"
# 256 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 257 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining1::
# 258 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Buscas objetos?\p"
# 259 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía te quedan 2 por aquí.$"
# 260 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 261 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining1::
# 262 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Buscas objetos?\p"
# 263 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía te queda 1 por aquí.$"
# 264 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 265 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining1::
# 266 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Buscas objetos?\p"
# 267 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pero si ya los has encontrado todos!$"
# 268 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 269 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining2::
# 270 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ya que has ganado,\n"
# 271 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡te contaré un secreto!\p"
# 272 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hay 8 objetos desperdigados por aquí.$"
# 273 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 274 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining2::
# 275 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ya que has ganado,\n"
# 276 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡te contaré un secreto!\p"
# 277 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hay 7 objetos más desperdigados\n"
# 278 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por aquí.$"
# 279 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 280 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining2::
# 281 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ya que has ganado,\n"
# 282 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡te contaré un secreto!\p"
# 283 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hay 6 objetos más desperdigados\n"
# 284 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por aquí.$"
# 285 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 286 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining2::
# 287 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ya que has ganado,\n"
# 288 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡te contaré un secreto!\p"
# 289 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hay 5 objetos más desperdigados\n"
# 290 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por aquí.$"
# 291 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 292 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining2::
# 293 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ya que has ganado,\n"
# 294 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡te contaré un secreto!\p"
# 295 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hay 4 objetos más desperdigados\n"
# 296 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por aquí.$"
# 297 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 298 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining2::
# 299 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ya que has ganado,\n"
# 300 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡te contaré un secreto!\p"
# 301 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hay 3 objetos más desperdigados\n"
# 302 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por aquí.$"
# 303 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 304 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining2::
# 305 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ya que has ganado,\n"
# 306 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡te contaré un secreto!\p"
# 307 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hay 2 objetos más desperdigados\n"
# 308 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por aquí.$"
# 309 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 310 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining2::
# 311 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ya que has ganado,\n"
# 312 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡te contaré un secreto!\p"
# 313 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Sólo queda 1 objeto más por aquí.$"
# 314 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 315 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining2::
# 316 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ya que has ganado,\n"
# 317 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡te contaré un secreto!\p"
# 318 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ya no queda ningún objeto más por aquí.$"
# 319 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 320 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining3::
# 321 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Cómo vas de objetos?\p"
# 322 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía quedan 8 en este nivel.$"
# 323 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 324 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining3::
# 325 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Cómo vas de objetos?\p"
# 326 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía quedan 7 en este nivel.$"
# 327 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 328 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining3::
# 329 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Cómo vas de objetos?\p"
# 330 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía quedan 6 en este nivel.$"
# 331 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 332 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining3::
# 333 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Cómo vas de objetos?\p"
# 334 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía quedan 5 en este nivel.$"
# 335 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 336 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining3::
# 337 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Cómo vas de objetos?\p"
# 338 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía quedan 4 en este nivel.$"
# 339 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 340 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining3::
# 341 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Cómo vas de objetos?\p"
# 342 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía quedan 3 en este nivel.$"
# 343 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 344 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining3::
# 345 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Cómo vas de objetos?\p"
# 346 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía quedan 2 en este nivel.$"
# 347 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 348 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining3::
# 349 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Cómo vas de objetos?\p"
# 350 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues todavía queda 1 en este nivel.$"
# 351 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 352 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining3::
# 353 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Cómo vas de objetos?\p"
# 354 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Pues ya no queda ninguno en este nivel.\n"
# 355 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Cuídate!$"
# 356 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 357 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining4::
# 358 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Te mereces una pequeña ayudita\n"
# 359 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por haberme ganado!\p"
# 360 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ahí va: hay 8 objetos en este nivel.$"
# 361 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 362 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining4::
# 363 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Te mereces una pequeña ayudita\n"
# 364 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por haberme ganado!\p"
# 365 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ahí va: hay 7 objetos en este nivel.$"
# 366 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 367 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining4::
# 368 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Te mereces una pequeña ayudita\n"
# 369 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por haberme ganado!\p"
# 370 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ahí va: hay 6 objetos en este nivel.$"
# 371 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 372 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining4::
# 373 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Te mereces una pequeña ayudita\n"
# 374 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por haberme ganado!\p"
# 375 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ahí va: hay 5 objetos en este nivel.$"
# 376 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 377 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining4::
# 378 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Te mereces una pequeña ayudita\n"
# 379 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por haberme ganado!\p"
# 380 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ahí va: hay 4 objetos en este nivel.$"
# 381 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 382 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining4::
# 383 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Te mereces una pequeña ayudita\n"
# 384 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por haberme ganado!\p"
# 385 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ahí va: hay 3 objetos en este nivel.$"
# 386 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 387 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining4::
# 388 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Te mereces una pequeña ayudita\n"
# 389 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por haberme ganado!\p"
# 390 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ahí va: hay 2 objetos en este nivel.$"
# 391 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 392 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining4::
# 393 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Te mereces una pequeña ayudita\n"
# 394 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por haberme ganado!\p"
# 395 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ahí va: hay 1 objeto en este nivel.$"
# 396 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 397 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining4::
# 398 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Te mereces una pequeña ayudita\n"
# 399 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por haberme ganado!\p"
# 400 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ahí va: ¡ya no quedan más objetos\n"
# 401 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "en este nivel!$"
# 402 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 403 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining5::
# 404 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
# 405 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "hay 8 objetos…$"
# 406 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 407 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining5::
# 408 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
# 409 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "hay 7 objetos…$"
# 410 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 411 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining5::
# 412 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
# 413 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "hay 6 objetos…$"
# 414 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 415 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining5::
# 416 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
# 417 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "hay 5 objetos…$"
# 418 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 419 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining5::
# 420 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
# 421 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "hay 4 objetos…$"
# 422 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 423 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining5::
# 424 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
# 425 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "hay 3 objetos…$"
# 426 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 427 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining5::
# 428 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
# 429 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "hay 2 objetos…$"
# 430 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 431 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining5::
# 432 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
# 433 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "hay 1 objeto…$"
# 434 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 435 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining5::
# 436 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dicen que en este nivel de la PIRÁMIDE,\n"
# 437 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "no quedan objetos…$"
# 438 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 439 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining6::
# 440 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Llevas algún objeto?\p"
# 441 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Creo que hay 8 en este nivel.$"
# 442 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 443 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining6::
# 444 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Llevas algún objeto?\p"
# 445 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Creo que hay 7 en este nivel.$"
# 446 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 447 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining6::
# 448 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Llevas algún objeto?\p"
# 449 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Creo que hay 6 en este nivel.$"
# 450 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 451 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining6::
# 452 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Llevas algún objeto?\p"
# 453 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Creo que hay 5 en este nivel.$"
# 454 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 455 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining6::
# 456 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Llevas algún objeto?\p"
# 457 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Creo que hay 4 en este nivel.$"
# 458 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 459 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining6::
# 460 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Llevas algún objeto?\p"
# 461 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Creo que hay 3 en este nivel.$"
# 462 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 463 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining6::
# 464 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Llevas algún objeto?\p"
# 465 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Creo que hay 2 en este nivel.$"
# 466 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 467 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining6::
# 468 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Llevas algún objeto?\p"
# 469 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Creo que hay 1 en este nivel.$"
# 470 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 471 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining6::
# 472 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Llevas algún objeto?\p"
# 473 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Creo que ya no quedan en este nivel.$"
# 474 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 475 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining1::
# 476 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Sabes combatir, de eso no hay duda!\p"
# 477 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pero aún te quedan otros 7\n"
# 478 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES aparte de mí!$"
# 479 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 480 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining1::
# 481 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Sabes combatir, de eso no hay duda!\p"
# 482 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pero aún te quedan otros 6\n"
# 483 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES aparte de mí!$"
# 484 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 485 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining1::
# 486 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Sabes combatir, de eso no hay duda!\p"
# 487 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pero aún te quedan otros 5\n"
# 488 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES aparte de mí!$"
# 489 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 490 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining1::
# 491 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Sabes combatir, de eso no hay duda!\p"
# 492 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pero aún te quedan otros 4\n"
# 493 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES aparte de mí!$"
# 494 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 495 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining1::
# 496 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Sabes combatir, de eso no hay duda!\p"
# 497 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pero aún te quedan otros 3\n"
# 498 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES aparte de mí!$"
# 499 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 500 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining1::
# 501 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Sabes combatir, de eso no hay duda!\p"
# 502 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pero aún te quedan otros 2\n"
# 503 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES aparte de mí!$"
# 504 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 505 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining1::
# 506 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Sabes combatir, de eso no hay duda!\p"
# 507 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pero aún te queda otro\n"
# 508 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADOR aparte de mí!$"
# 509 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 510 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining1::
# 511 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Sabes combatir, de eso no hay duda!\p"
# 512 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Ya no te queda ningún\n"
# 513 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADOR por batir!$"
# 514 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 515 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining2::
# 516 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Qué fastidio!\p"
# 517 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pues que sepas que aún te quedan 7\n"
# 518 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES más! ¡Prepárate!$"
# 519 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 520 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining2::
# 521 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Qué fastidio!\p"
# 522 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pues que sepas que aún te quedan 6\n"
# 523 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES más! ¡Prepárate!$"
# 524 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 525 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining2::
# 526 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Qué fastidio!\p"
# 527 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pues que sepas que aún te quedan 5\n"
# 528 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES más! ¡Prepárate!$"
# 529 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 530 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining2::
# 531 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Qué fastidio!\p"
# 532 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pues que sepas que aún te quedan 4\n"
# 533 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES más! ¡Prepárate!$"
# 534 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 535 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining2::
# 536 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Qué fastidio!\p"
# 537 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pues que sepas que aún te quedan 3\n"
# 538 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES más! ¡Prepárate!$"
# 539 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 540 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining2::
# 541 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Qué fastidio!\p"
# 542 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pues que sepas que aún te quedan 2\n"
# 543 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES más! ¡Prepárate!$"
# 544 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 545 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining2::
# 546 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Qué fastidio!\p"
# 547 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Pues que sepas que aún te queda 1\n"
# 548 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADOR más! ¡Prepárate!$"
# 549 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 550 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining2::
# 551 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Qué fastidio!\p"
# 552 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Ya no te queda ningún ENTRENADOR\n"
# 553 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "que pueda hacerte frente!$"
# 554 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 555 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining3::
# 556 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Me has dejado con la boca abierta!\p"
# 557 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Todavía te quedan 7 ENTRENADORES\n"
# 558 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "más en este nivel. ¿Podrás con todos?$"
# 559 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 560 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining3::
# 561 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Me has dejado con la boca abierta!\p"
# 562 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Todavía te quedan 6 ENTRENADORES\n"
# 563 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "más en este nivel. ¿Podrás con todos?$"
# 564 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 565 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining3::
# 566 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Me has dejado con la boca abierta!\p"
# 567 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Todavía te quedan 5 ENTRENADORES\n"
# 568 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "más en este nivel. ¿Podrás con todos?$"
# 569 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 570 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining3::
# 571 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Me has dejado con la boca abierta!\p"
# 572 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Todavía te quedan 4 ENTRENADORES\n"
# 573 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "más en este nivel. ¿Podrás con todos?$"
# 574 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 575 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining3::
# 576 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Me has dejado con la boca abierta!\p"
# 577 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Todavía te quedan 3 ENTRENADORES\n"
# 578 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "más en este nivel. ¿Podrás con todos?$"
# 579 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 580 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining3::
# 581 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Me has dejado con la boca abierta!\p"
# 582 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Todavía te quedan 2 ENTRENADORES\n"
# 583 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "más en este nivel. ¿Podrás con todos?$"
# 584 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 585 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining3::
# 586 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Me has dejado con la boca abierta!\p"
# 587 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Todavía te queda 1 ENTRENADOR\n"
# 588 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "más en este nivel. ¿Cómo lo ves?$"
# 589 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 590 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining3::
# 591 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Me has dejado con la boca abierta!\p"
# 592 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¡Has acabado uno a uno con todos\n"
# 593 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "los ENTRENADORES de este nivel!$"
# 594 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 595 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining4::
# 596 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dudo que puedas derrotar a los 7\n"
# 597 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES que quedan en este nivel.$"
# 598 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 599 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining4::
# 600 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dudo que puedas derrotar a los 6\n"
# 601 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES que quedan en este nivel.$"
# 602 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 603 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining4::
# 604 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dudo que puedas derrotar a los 5\n"
# 605 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES que quedan en este nivel.$"
# 606 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 607 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining4::
# 608 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dudo que puedas derrotar a los 4\n"
# 609 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES que quedan en este nivel.$"
# 610 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 611 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining4::
# 612 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dudo que puedas derrotar a los 3\n"
# 613 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES que quedan en este nivel.$"
# 614 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 615 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining4::
# 616 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dudo que puedas derrotar a los 2\n"
# 617 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES que quedan en este nivel.$"
# 618 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 619 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining4::
# 620 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dudo que puedas derrotar al\n"
# 621 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADOR que queda en este nivel.$"
# 622 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 623 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining4::
# 624 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Bueno, ya no te queda nadie\n"
# 625 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "por vencer en este nivel…$"
# 626 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 627 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining5::
# 628 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Puede que hasta consigas derrotar\n"
# 629 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a los 7 ENTRENADORES que quedan.$"
# 630 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 631 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining5::
# 632 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Puede que hasta consigas derrotar\n"
# 633 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a los 6 ENTRENADORES que quedan.$"
# 634 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 635 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining5::
# 636 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Puede que hasta consigas derrotar\n"
# 637 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a los 5 ENTRENADORES que quedan.$"
# 638 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 639 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining5::
# 640 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Puede que hasta consigas derrotar\n"
# 641 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a los 4 ENTRENADORES que quedan.$"
# 642 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 643 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining5::
# 644 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Puede que hasta consigas derrotar\n"
# 645 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a los 3 ENTRENADORES que quedan.$"
# 646 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 647 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining5::
# 648 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Puede que hasta consigas derrotar\n"
# 649 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a los 2 ENTRENADORES que quedan.$"
# 650 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 651 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining5::
# 652 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Puede que hasta consigas derrotar\n"
# 653 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "al ENTRENADOR que queda.$"
# 654 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 655 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining5::
# 656 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Eres mucho para nosotros.\p"
# 657 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "En este nivel ya no queda ningún\n"
# 658 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADOR para enfrentarse a ti.$"
# 659 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 660 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining6::
# 661 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Serás capaz de vencer a los 7\n"
# 662 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES que quedan?$"
# 663 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 664 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining6::
# 665 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Serás capaz de vencer a los 6\n"
# 666 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES que quedan?$"
# 667 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 668 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining6::
# 669 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Serás capaz de vencer a los 5\n"
# 670 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES que quedan?$"
# 671 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 672 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining6::
# 673 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Serás capaz de vencer a los 4\n"
# 674 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES que quedan?$"
# 675 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 676 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining6::
# 677 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Serás capaz de vencer a los 3\n"
# 678 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES que quedan?$"
# 679 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 680 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining6::
# 681 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Serás capaz de vencer a los 2\n"
# 682 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADORES que quedan?$"
# 683 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 684 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining6::
# 685 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "¿Serás capaz de vencer al último\n"
# 686 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ENTRENADOR que queda?$"
# 687 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 688 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining6::
# 689 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ya no queda ni un solo ENTRENADOR\n"
# 690 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "que pueda retarte…$"
