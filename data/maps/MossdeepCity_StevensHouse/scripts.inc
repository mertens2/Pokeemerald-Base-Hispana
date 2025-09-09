# 1 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 2 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_MapScripts::
# 3 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_StevensHouse_OnLoad
# 4 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_StevensHouse_OnTransition
# 5 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_StevensHouse_OnFrame
# 6 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.byte 0
# 7 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 8 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnLoad:
# 9 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_StevensHouse_EventScript_HideStevensNote
# 10 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 11 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 12 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_HideStevensNote::
# 13 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setmetatile 6, 4, METATILE_GenericBuilding_TableEdge, TRUE
# 14 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 15 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 16 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnTransition:
# 17 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_eq VAR_STEVENS_HOUSE_STATE, 2, MossdeepCity_StevensHouse_EventScript_SetStevenPos
# 18 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 19 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 20 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SetStevenPos::
# 21 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectxyperm LOCALID_STEVENS_HOUSE_STEVEN, 6, 5
# 22 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectmovementtype LOCALID_STEVENS_HOUSE_STEVEN, MOVEMENT_TYPE_FACE_UP
# 23 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 24 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 25 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnFrame:
# 26 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script_2 VAR_STEVENS_HOUSE_STATE, 1, MossdeepCity_StevensHouse_EventScript_StevenGivesDive
# 27 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.2byte 0
# 28 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_StevenGivesDive::
# 30 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 31 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 32 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 33 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playse SE_PIN
# 34 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_ExclamationMark
# 35 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 36 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_Delay48
# 37 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, MossdeepCity_StevensHouse_Movement_StevenApproachPlayer
# 39 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 40 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_YouveEarnedHMDive, MSGBOX_DEFAULT
# 41 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	giveitem ITEM_HM_DIVE
# 42 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 43 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
# 44 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_ExplainDive, MSGBOX_DEFAULT
# 45 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	closemessage
# 46 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	delay 20
# 47 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, MossdeepCity_StevensHouse_Movement_StevenReturn
# 48 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 49 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 50 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
# 51 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 52 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 53 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 54 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 55 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenApproachPlayer:
# 56 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 57 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 58 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 59 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 60 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 61 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 62 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_down
# 63 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end
# 64 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 65 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenReturn:
# 66 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_up
# 67 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 68 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 69 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 70 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_up
# 71 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end
# 72 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 73 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_BeldumPokeball::
# 74 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 75 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum, MSGBOX_YESNO
# 76 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_LeaveBeldum
# 77 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_GiveBeldum
# 78 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 79 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 80 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_LeaveBeldum::
# 81 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
# 82 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 83 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 84 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 85 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_GiveBeldum::
# 86 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BELDUM
# 87 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	givemon SPECIES_BELDUM, 5
# 88 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_StevensHouse_EventScript_SendBeldumParty
# 89 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_StevensHouse_EventScript_SendBeldumPC
# 90 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 91 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 92 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 93 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumParty::
# 94 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 95 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 96 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 97 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 98 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 99 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 100 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 101 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 102 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumPC::
# 103 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 104 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 105 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
# 106 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 107 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
# 108 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 109 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 110 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC::
# 111 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 112 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 113 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 114 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 115 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare::
# 116 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BELDUM
# 117 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	removeobject LOCALID_STEVENS_HOUSE_BALL
# 118 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 119 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	message MossdeepCity_StevensHouse_Text_ObtainedBeldum
# 120 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmessage
# 121 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitfanfare
# 122 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
# 123 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 124 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 125 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedBeldum::
# 126 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
# 127 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELDUM
# 128 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 129 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 130 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 131 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_RockDisplay::
# 132 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_CollectionOfRareRocks, MSGBOX_SIGN
# 133 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 134 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 135 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Steven::
# 136 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis, MSGBOX_NPC
# 137 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 138 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 139 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Letter::
# 140 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 141 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LetterFromSteven, MSGBOX_DEFAULT
# 142 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 143 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 144 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 145 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
@ Unused, leftover from RS
# 146 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_DiveItemBall::
# 147 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	finditem ITEM_HM_DIVE
# 148 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 149 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 150 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 151 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_YouveEarnedHMDive:
# 152 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "MÁXIMO: ¿{PLAYER}{KUN}? Anda…\p"
# 153 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Pues sí, aquí vivo yo. Ya sé, parece\n"
# 154 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "algo frío, pero es que me gusta\l"
# 155 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "la decoración minimalista…\p"
# 156 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Te agradezco todo lo que has hecho.\p"
# 157 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Y quiero demostrártelo dándote esto.\n"
# 158 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Es la MÁQUINA OCULTA BUCEO.\p"
# 159 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Acéptala. Te la has ganado.$"
# 160 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 161 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ExplainDive:
# 162 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "MÁXIMO: Cuando hagas SURF, verás\n"
# 163 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "zonas donde el agua está más oscura.\p"
# 164 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "En esos sitios puedes usar BUCEO.\n"
# 165 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Así bucearás hasta el fondo.\p"
# 166 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Cuando quieras volver a la superficie,\n"
# 167 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "vuelve a usar BUCEO.\p"
# 168 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Sin embargo, en algunas zonas\n"
# 169 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "no podrás volver a la superficie…$"
# 170 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 171 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis:
# 172 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "MÁXIMO: Parece que hay una gruta\n"
# 173 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "submarina entre ALGARIA y\l"
# 174 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "ARRECÍPOLIS.\p"
# 175 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Sí, ya sabes, la que descubrió\n"
# 176 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "el CAP. BABOR con su submarino.$"
# 177 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 178 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum:
# 179 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} comprobó la POKé BALL.\p"
# 180 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Contiene el POKéMON\n"
# 181 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "BELDUM.\p"
# 182 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "¿Quieres la POKé BALL?$"
# 183 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 184 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ObtainedBeldum:
# 185 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} consiguió un BELDUM.$"
# 186 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 187 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
@ Unused
# 188 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_NoSpaceForAnotherMon:
# 189 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "There is no space for another POKéMON.$"
# 190 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 191 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas:
# 192 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} dejó la POKé BALL\n"
# 193 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "donde estaba.$"
# 194 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 195 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LetterFromSteven:
# 196 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Es una carta.\p"
# 197 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "A ver qué dice…\p"
# 198 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Para {PLAYER}{KUN}…\p"
# 199 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "He decidido lanzarme a la aventura\n"
# 200 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "y entrenar mientras viajo.\p"
# 201 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "No creo que vuelva a casa\n"
# 202 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "en bastante tiempo.\p"
# 203 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Por eso debo pedirte un favor.\p"
# 204 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Quisiera que cojas la POKé BALL\n"
# 205 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "que está en la mesa.\p"
# 206 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Dentro hay un BELDUM,\n"
# 207 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "mi POKéMON favorito.\p"
# 208 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Cuento contigo.\p"
# 209 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Espero que nuestros caminos\n"
# 210 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "se crucen algún día.\p"
# 211 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "MÁXIMO PEÑAS$"
# 212 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 213 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_CollectionOfRareRocks:
# 214 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Es una colección de rocas y piedras\n"
# 215 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "raras reunida por MÁXIMO.$"
