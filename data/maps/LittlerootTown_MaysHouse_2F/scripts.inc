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
	setspeaker Rival
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Brendan::
# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setspeaker Rival
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove::
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_MayPostLilycove
# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_BrendanPostLilycove
# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove::
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove::
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
# 100 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 106 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC::
# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 117 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 119 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
# 120 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitstate
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 130 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 131 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayGettingReady:
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Pokémon curado!\n"
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Pokéballs listas y…!$"
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanGettingReady:
# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Mis Pokémon están curados…\n"
# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Mis Pokéball listas y mi…$"
# 143 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_ItsRivalsPokeBall:
# 145 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Es la Pokéball de {RIVAL}!\p"
# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Mejor la dejo ahí.$"
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayJustCheckingMyPokedex:
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Ah!\n"
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}, hola!\p"
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Yo… Em………\p"
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Estoy arrepentida por la forma en la\n"
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "que te traté……\l"
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Te veía como un enemig{OA}, pero tuve que\l"
# 155 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "haberte tratado como un aliad{OA}…\p"
# 156 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Así que, perdón, {PLAYER}. No volveré\n"
# 157 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "a tratarte así…\p"
# 158 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … … … … … … … … … … … … … … … … …\n"
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … … … … … … … … … … … … … … … … …\l"
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Quería también decirte…\p"
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Que aún estoy intentando actualizar mi\n"
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Pokédex… Y quería que\l"
# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "intercambiáramos datos de la Pokédex,\l"
# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "si eso te parece bien…$"
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhereShouldIGoNext:
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Tantas… Entradas nuevas\n"
# 168 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "en mi Pokédex se han llenado…\p"
# 169 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Me pregunto… ¿Dónde debería buscar\n"
# 170 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "más Pokémon ahora?$"
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex:
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{RIVAL}: ¡Ah, in-\n"
# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}, hola!\p"
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Yo… Em………\p"
# 176 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Estoy arrepentido por la forma en la\n"
# 177 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "que te traté……\l"
# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Te veía como un enemig{OA}, pero tuve que\l"
# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "haberte tratado como un aliad{OA}…\p"
# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Así que, perdón, {PLAYER}. No volveré\n"
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "a tratarte así…\p"
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … … … … … … … … … … … … … … … … …\n"
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … … … … … … … … … … … … … … … … …\l"
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Quería también decirte…\p"
# 185 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Que aún estoy intentando actualizar mi\n"
# 186 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Pokédex… Y quería que\l"
# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "intercambiáramos datos de la Pokédex,\l"
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "si eso te parece bien…$"
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhereShouldIGoNext:
# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{RIVAL}: Tantas… Entradas nuevas\n"
# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "en mi Pokédex se han llenado…\p"
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Me pregunto… ¿Dónde debería buscar\n"
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "más Pokémon ahora?$"
