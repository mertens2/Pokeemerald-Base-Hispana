# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts::
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition:
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 0, 2
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call EventScript_RunningShoesManualTranslated
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end

PlayersHouse_2F_Text_ClockIsStopped::
# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "¡Debería poner en marcha este reloj!$"

PlayersHouse_2F_Text_HowDoYouLikeYourRoom::
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "¡{PLAYER}! ¿Te gusta tu nuevo\n"
	.string "cuarto?\p"
	.string "¡Pues recuerda que debes quitar tus\n"
	.string "objetos de la PC!$"

Common_Text_LookCloserAtMap::
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "La hermosa Hoenn.$"

PlayersHouse_2F_Text_ItsAGameCube::
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Es una Nintendo GameCube.\p"
	.string "Una Game Boy Advance está\n"
	.string "conectada con Pokémon Box RZ.$"
