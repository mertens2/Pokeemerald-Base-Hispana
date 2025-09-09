# 1 "data/maps/OldaleTown/scripts.pory"

# 2 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 3 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 4 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 5 "data/maps/OldaleTown/scripts.pory"

# 6 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 7 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 8 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 9 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 10 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 11 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 12 "data/maps/OldaleTown/scripts.pory"
	end
# 13 "data/maps/OldaleTown/scripts.pory"

# 14 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 15 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 16 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 17 "data/maps/OldaleTown/scripts.pory"
	return
# 18 "data/maps/OldaleTown/scripts.pory"

# 19 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 20 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 21 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 22 "data/maps/OldaleTown/scripts.pory"
	return
# 23 "data/maps/OldaleTown/scripts.pory"

# 24 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 25 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_OLDALE_MART_EMPLOYEE, 13, 14
# 26 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 27 "data/maps/OldaleTown/scripts.pory"
	return
# 28 "data/maps/OldaleTown/scripts.pory"

# 29 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 30 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 31 "data/maps/OldaleTown/scripts.pory"
	end
# 32 "data/maps/OldaleTown/scripts.pory"

# 33 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 34 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 35 "data/maps/OldaleTown/scripts.pory"
	end
# 36 "data/maps/OldaleTown/scripts.pory"

# 37 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 38 "data/maps/OldaleTown/scripts.pory"
	lock
# 39 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 40 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 41 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 42 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 43 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 44 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 45 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 46 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 47 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 48 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 49 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 50 "data/maps/OldaleTown/scripts.pory"
	end
# 51 "data/maps/OldaleTown/scripts.pory"

# 52 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 53 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 54 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 55 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 57 "data/maps/OldaleTown/scripts.pory"
	end
# 58 "data/maps/OldaleTown/scripts.pory"

# 59 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 60 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 61 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 62 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 63 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 64 "data/maps/OldaleTown/scripts.pory"
	end
# 65 "data/maps/OldaleTown/scripts.pory"

# 66 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 67 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 68 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 69 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 70 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 71 "data/maps/OldaleTown/scripts.pory"
	end
# 72 "data/maps/OldaleTown/scripts.pory"

# 73 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 74 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 75 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 76 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 77 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 78 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 79 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/OldaleTown/scripts.pory"
	release
# 81 "data/maps/OldaleTown/scripts.pory"
	end
# 82 "data/maps/OldaleTown/scripts.pory"

# 83 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 84 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 85 "data/maps/OldaleTown/scripts.pory"
	release
# 86 "data/maps/OldaleTown/scripts.pory"
	end
# 87 "data/maps/OldaleTown/scripts.pory"

# 88 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 89 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 90 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 91 "data/maps/OldaleTown/scripts.pory"
	release
# 92 "data/maps/OldaleTown/scripts.pory"
	end
# 93 "data/maps/OldaleTown/scripts.pory"

# 94 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 96 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 97 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 99 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 100 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 102 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 103 "data/maps/OldaleTown/scripts.pory"
	step_end
# 104 "data/maps/OldaleTown/scripts.pory"

# 105 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 106 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 107 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 109 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 110 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 112 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 113 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 116 "data/maps/OldaleTown/scripts.pory"
	step_end
# 117 "data/maps/OldaleTown/scripts.pory"

# 118 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 122 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 124 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 125 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 126 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 127 "data/maps/OldaleTown/scripts.pory"
	step_end
# 128 "data/maps/OldaleTown/scripts.pory"

# 129 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 130 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 132 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 133 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 134 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 135 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 136 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 137 "data/maps/OldaleTown/scripts.pory"
	step_end
# 138 "data/maps/OldaleTown/scripts.pory"

# 139 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 140 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 141 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 142 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 143 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 144 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 145 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 146 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 147 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 148 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 149 "data/maps/OldaleTown/scripts.pory"
	step_end
# 150 "data/maps/OldaleTown/scripts.pory"

# 151 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 152 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 153 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 154 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 155 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 156 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 157 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 158 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 159 "data/maps/OldaleTown/scripts.pory"
	step_end
# 160 "data/maps/OldaleTown/scripts.pory"

# 161 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 162 "data/maps/OldaleTown/scripts.pory"
	lock
# 163 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 164 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 165 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 166 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 167 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 168 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 169 "data/maps/OldaleTown/scripts.pory"
	release
# 170 "data/maps/OldaleTown/scripts.pory"
	end
# 171 "data/maps/OldaleTown/scripts.pory"

# 172 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 173 "data/maps/OldaleTown/scripts.pory"
	lockall
# 174 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 175 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 176 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 177 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 178 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 179 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 180 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 181 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 182 "data/maps/OldaleTown/scripts.pory"
	end
# 183 "data/maps/OldaleTown/scripts.pory"

# 184 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 185 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 186 "data/maps/OldaleTown/scripts.pory"
	release
# 187 "data/maps/OldaleTown/scripts.pory"
	end
# 188 "data/maps/OldaleTown/scripts.pory"

# 189 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 190 "data/maps/OldaleTown/scripts.pory"
	lockall
# 191 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 192 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 193 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 194 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 195 "data/maps/OldaleTown/scripts.pory"
	end
# 196 "data/maps/OldaleTown/scripts.pory"

# 197 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 198 "data/maps/OldaleTown/scripts.pory"
	lockall
# 199 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 200 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 201 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 202 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 203 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 204 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 205 "data/maps/OldaleTown/scripts.pory"
	end
# 206 "data/maps/OldaleTown/scripts.pory"

# 207 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 208 "data/maps/OldaleTown/scripts.pory"
	lockall
# 209 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 210 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 211 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 212 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 213 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 214 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 215 "data/maps/OldaleTown/scripts.pory"
	end
# 216 "data/maps/OldaleTown/scripts.pory"

# 217 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 218 "data/maps/OldaleTown/scripts.pory"
	lockall
# 219 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 220 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 221 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 222 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 223 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 224 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 225 "data/maps/OldaleTown/scripts.pory"
	end
# 226 "data/maps/OldaleTown/scripts.pory"

# 227 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 228 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 229 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 230 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 231 "data/maps/OldaleTown/scripts.pory"
	end
# 232 "data/maps/OldaleTown/scripts.pory"

# 233 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 234 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 235 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 236 "data/maps/OldaleTown/scripts.pory"
	end
# 237 "data/maps/OldaleTown/scripts.pory"

# 238 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 239 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 240 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 241 "data/maps/OldaleTown/scripts.pory"
	end
# 242 "data/maps/OldaleTown/scripts.pory"

# 243 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 244 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 245 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 246 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 247 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 248 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 249 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 250 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 251 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 252 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 253 "data/maps/OldaleTown/scripts.pory"
	end
# 254 "data/maps/OldaleTown/scripts.pory"

# 255 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 256 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 257 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 258 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 259 "data/maps/OldaleTown/scripts.pory"
	return
# 260 "data/maps/OldaleTown/scripts.pory"

# 261 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 262 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 263 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 264 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 265 "data/maps/OldaleTown/scripts.pory"
	return
# 266 "data/maps/OldaleTown/scripts.pory"

# 267 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 268 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 269 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 270 "data/maps/OldaleTown/scripts.pory"
	step_end
# 271 "data/maps/OldaleTown/scripts.pory"

# 272 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 273 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 274 "data/maps/OldaleTown/scripts.pory"
	step_end
# 275 "data/maps/OldaleTown/scripts.pory"

# 276 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 277 "data/maps/OldaleTown/scripts.pory"
	face_left
# 278 "data/maps/OldaleTown/scripts.pory"
	step_end
# 279 "data/maps/OldaleTown/scripts.pory"

# 280 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 281 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 282 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 283 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 284 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 285 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 286 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 287 "data/maps/OldaleTown/scripts.pory"
	step_end
# 288 "data/maps/OldaleTown/scripts.pory"

# 289 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 290 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 291 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 292 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 293 "data/maps/OldaleTown/scripts.pory"
	step_end
# 294 "data/maps/OldaleTown/scripts.pory"

# 295 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 296 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 297 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 298 "data/maps/OldaleTown/scripts.pory"
	step_end
# 299 "data/maps/OldaleTown/scripts.pory"

# 300 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 301 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 302 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 303 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 304 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 305 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 306 "data/maps/OldaleTown/scripts.pory"
	step_end
# 307 "data/maps/OldaleTown/scripts.pory"

# 308 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 309 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 310 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 311 "data/maps/OldaleTown/scripts.pory"
	step_end
# 312 "data/maps/OldaleTown/scripts.pory"

# 313 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 314 "data/maps/OldaleTown/scripts.pory"
	.string "Quiero descansar un ratito,\n"
# 315 "data/maps/OldaleTown/scripts.pory"
	.string "así que voy a guardar mi partida.$"
# 316 "data/maps/OldaleTown/scripts.pory"

# 317 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 318 "data/maps/OldaleTown/scripts.pory"
	.string "¡Hola!\n"
# 319 "data/maps/OldaleTown/scripts.pory"
	.string "Trabajo en la TIENDA POKéMON.\p"
# 320 "data/maps/OldaleTown/scripts.pory"
	.string "¿Querrías venir conmigo?$"
# 321 "data/maps/OldaleTown/scripts.pory"

# 322 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 323 "data/maps/OldaleTown/scripts.pory"
	.string "Ésta es la TIENDA POKéMON.\n"
# 324 "data/maps/OldaleTown/scripts.pory"
	.string "Se reconoce por el tejado azul.\p"
# 325 "data/maps/OldaleTown/scripts.pory"
	.string "Vendemos de todo, incluso POKé BALLS\n"
# 326 "data/maps/OldaleTown/scripts.pory"
	.string "para atrapar POKéMON.\p"
# 327 "data/maps/OldaleTown/scripts.pory"
	.string "Mira, te voy a hacer un regalo como\n"
# 328 "data/maps/OldaleTown/scripts.pory"
	.string "parte de nuestra promoción.$"
# 329 "data/maps/OldaleTown/scripts.pory"

# 330 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 331 "data/maps/OldaleTown/scripts.pory"
	.string "Puedes usar una POCIÓN en cualquier\n"
# 332 "data/maps/OldaleTown/scripts.pory"
	.string "momento, así que a veces puede ser más\l"
# 333 "data/maps/OldaleTown/scripts.pory"
	.string "útil que buscar un CENTRO POKéMON.$"
# 334 "data/maps/OldaleTown/scripts.pory"

# 335 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 336 "data/maps/OldaleTown/scripts.pory"
	.string "¡Nooooo! ¡No te muevas!\n"
# 337 "data/maps/OldaleTown/scripts.pory"
	.string "¡Ni se te ocurra pisar aquí!\p"
# 338 "data/maps/OldaleTown/scripts.pory"
	.string "Acabo de descubrir las huellas\n"
# 339 "data/maps/OldaleTown/scripts.pory"
	.string "de un POKéMON raro.\p"
# 340 "data/maps/OldaleTown/scripts.pory"
	.string "Espera hasta que termine de\n"
# 341 "data/maps/OldaleTown/scripts.pory"
	.string "hacer mi bosquejo, ¿vale?$"
# 342 "data/maps/OldaleTown/scripts.pory"

# 343 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 344 "data/maps/OldaleTown/scripts.pory"
	.string "Acabo de descubrir las huellas\n"
# 345 "data/maps/OldaleTown/scripts.pory"
	.string "de un POKéMON raro.\p"
# 346 "data/maps/OldaleTown/scripts.pory"
	.string "Espera hasta que termine de\n"
# 347 "data/maps/OldaleTown/scripts.pory"
	.string "hacer mi bosquejo, ¿vale?$"
# 348 "data/maps/OldaleTown/scripts.pory"

# 349 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 350 "data/maps/OldaleTown/scripts.pory"
	.string "Ya he acabado el bosquejo de las\n"
# 351 "data/maps/OldaleTown/scripts.pory"
	.string "huellas del POKéMON raro.\p"
# 352 "data/maps/OldaleTown/scripts.pory"
	.string "Y ahora me doy cuenta de que…\n"
# 353 "data/maps/OldaleTown/scripts.pory"
	.string "eran mis propias huellas, snif…$"
# 354 "data/maps/OldaleTown/scripts.pory"

# 355 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 356 "data/maps/OldaleTown/scripts.pory"
	.string "AURA: ¡{PLAYER}{KUN}!\n"
# 357 "data/maps/OldaleTown/scripts.pory"
	.string "¡Ven aquí, deprisa!\l"
# 358 "data/maps/OldaleTown/scripts.pory"
	.string "¡Vamos al LABORATORIO!$"
# 359 "data/maps/OldaleTown/scripts.pory"

# 360 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 361 "data/maps/OldaleTown/scripts.pory"
	.string "BRUNO: Me voy al LABORATORIO\n"
# 362 "data/maps/OldaleTown/scripts.pory"
	.string "de mi padre.\l"
# 363 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, tú también deberías venir.$"
# 364 "data/maps/OldaleTown/scripts.pory"

# 365 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 366 "data/maps/OldaleTown/scripts.pory"
	.string "PUEBLO ESCASO\n"
# 367 "data/maps/OldaleTown/scripts.pory"
	.string "“Donde nunca pasa nada.”$"
