# 1 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_MapScripts::
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_OnTransition
# 6 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition:
# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 15 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos::
# 18 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 20 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos::
# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 8, 2
# 27 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 29 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 30 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Ret::
# 31 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay::
# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 35 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 38 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay::
# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 41 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 42 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnWarp:
# 43 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor
# 44 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0
# 45 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 46 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor::
# 47 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SecretBase_EventScript_InitDecorations
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
# 52 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 53 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 54 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 55 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 56 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival::
# 58 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove
# 60 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_May
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_Brendan
# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 65 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_May::
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	namebox Rival
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	hidenamebox
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Brendan::
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	namebox Rival
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	hidenamebox
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove::
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_MayPostLilycove
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_BrendanPostLilycove
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove::
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove::
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 100 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
# 106 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC::
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
# 117 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 119 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 120 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitstate
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 130 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 131 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayGettingReady:
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Pokémon curado!\n"
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Pokéballs listas y…!$"
# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanGettingReady:
# 143 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Mis Pokémon están curados…\n"
# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Mis Pokéball listas y mi…$"
# 145 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_ItsRivalsPokeBall:
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Es la Pokéball de {RIVAL}!\p"
# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Mejor la dejo ahí.$"
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayJustCheckingMyPokedex:
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Ah!\n"
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}, hola!\p"
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Yo… Em………\p"
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Estoy arrepentida por la forma en la\n"
# 155 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "que te traté……\l"
# 156 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Te veía como un enemig{OA}, pero tuve que\l"
# 157 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "haberte tratado como un aliad{OA}…\p"
# 158 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Así que, perdón, {PLAYER}. No volveré\n"
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "a tratarte así…\p"
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … … … … … … … … … … … … … … … … …\n"
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … … … … … … … … … … … … … … … … …\l"
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Quería también decirte…\p"
# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Que aún estoy intentando actualizar mi\n"
# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Pokédex… Y quería que\l"
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "intercambiáramos datos de la Pokédex,\l"
# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "si eso te parece bien…$"
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 168 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhereShouldIGoNext:
# 169 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Tantas… Entradas nuevas\n"
# 170 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "en mi Pokédex se han llenado…\p"
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Me pregunto… ¿Dónde debería buscar\n"
# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "más Pokémon ahora?$"
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex:
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{RIVAL}: ¡Ah, in-\n"
# 176 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}, hola!\p"
# 177 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Yo… Em………\p"
# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Estoy arrepentido por la forma en la\n"
# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "que te traté……\l"
# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Te veía como un enemig{OA}, pero tuve que\l"
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "haberte tratado como un aliad{OA}…\p"
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Así que, perdón, {PLAYER}. No volveré\n"
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "a tratarte así…\p"
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … … … … … … … … … … … … … … … … …\n"
# 185 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … … … … … … … … … … … … … … … … …\l"
# 186 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Quería también decirte…\p"
# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Que aún estoy intentando actualizar mi\n"
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Pokédex… Y quería que\l"
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "intercambiáramos datos de la Pokédex,\l"
# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "si eso te parece bien…$"
# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhereShouldIGoNext:
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{RIVAL}: Tantas… Entradas nuevas\n"
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "en mi Pokédex se han llenado…\p"
# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Me pregunto… ¿Dónde debería buscar\n"
# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "más Pokémon ahora?$"
