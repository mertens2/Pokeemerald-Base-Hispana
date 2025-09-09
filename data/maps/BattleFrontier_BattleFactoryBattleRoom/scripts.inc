# 1 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
@ On this map the player will automatically walk into the room, but the camera is supposed to remain still.
# 3 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
@ To do this GF sets the player (LOCALID_PLAYER) invisible and creates a fake player object (LOCALID_FACTORY_BATTLE_PLAYER).
# 4 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
@ The graphics of this fake player object are represented with VAR_OBJ_GFX_ID_F.
# 5 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
@ The graphics of the opponent are represented with VAR_OBJ_GFX_ID_0, which will ultimately be set by factory_setopponentgfx.
# 6 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 7 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_MapScripts::
# 8 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleFactoryBattleRoom_OnTransition
# 9 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryBattleRoom_OnWarp
# 10 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryBattleRoom_OnFrame
# 11 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.byte 0
# 12 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_OnTransition:
# 14 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_settrainers
# 15 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	checkplayergender
# 16 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxMale
# 17 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxFemale
# 18 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 19 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 20 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleFactoryBattleRoom_EventScript_SetUpFactoryHeadObj
# 21 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 22 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 23 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_SetUpFactoryHeadObj::
# 24 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 25 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_FACTORY_BATTLE_OPPONENT, 7, 9
# 26 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 28 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_OnWarp:
# 29 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects
# 30 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.2byte 0
# 31 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 32 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects::
# 33 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 34 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_FACTORY_BATTLE_ROOM
# 35 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleFactoryBattleRoom_EventScript_EndHideObjects
# 36 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	hideobjectat LOCALID_FACTORY_BATTLE_OPPONENT, MAP_BATTLE_FRONTIER_BATTLE_FACTORY_BATTLE_ROOM
# 37 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_EndHideObjects::
# 38 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 39 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 40 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxMale::
# 41 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 42 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 43 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 44 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxFemale::
# 45 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 46 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 47 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 48 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_OnFrame:
# 49 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom
# 50 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.2byte 0
# 51 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 52 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoomFactoryHeadBattle::
# 53 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_GetAMoveOn, MSGBOX_DEFAULT
# 54 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 55 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_OPPONENT, BattleFrontier_BattleFactoryBattleRoom_Movement_NolandMoveToBattle
# 56 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
# 57 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
# 58 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 59 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle
# 60 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent
# 61 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 62 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 63 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom::
# 64 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoomFactoryHeadBattle
# 65 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
# 66 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
# 67 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 68 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle
# 69 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_setopponentgfx
# 70 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	removeobject LOCALID_FACTORY_BATTLE_OPPONENT
# 71 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_FACTORY_BATTLE_OPPONENT, 7, 1
# 72 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addobject LOCALID_FACTORY_BATTLE_OPPONENT
# 73 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_OPPONENT, BattleFrontier_BattleFactoryBattleRoom_Movement_OpponentEnter
# 74 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 75 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent::
# 76 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland
# 77 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	palace_getopponentintro
# 78 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	lockall
# 79 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 80 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 81 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 82 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 83 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	special HealPlayerParty
# 84 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_FACTORY
# 85 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 86 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	special DoSpecialTrainerBattle
# 87 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
# 88 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent
# 90 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost::
# 91 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 92 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby
# 93 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 94 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent::
# 95 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_get FACTORY_DATA_WIN_STREAK_SWAPS
# 96 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MAX_STREAK, BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak
# 97 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 98 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setorcopyvar VAR_0x8006, VAR_RESULT
# 99 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS  @ uses VAR_0x8006 above
# 100 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak::
# 101 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 102 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum::
# 103 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 104 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 105 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 106 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	switch VAR_RESULT
# 107 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	case 7, BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon
# 108 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_0x8006, 1
# 109 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 8
# 110 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
# 111 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon::
# 112 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 113 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby
# 114 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 115 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland::
# 116 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 117 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold
# 118 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver
# 119 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold
# 120 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 121 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver
# 122 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NolandImFactoryHead, MSGBOX_DEFAULT
# 123 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 124 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver::
# 125 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_ShakeOutKnowledgeBringItOn, MSGBOX_DEFAULT
# 126 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle
# 127 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver
# 128 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost
# 129 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 130 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver::
# 131 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_getsymbols
# 132 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
# 133 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NolandLetsSeeFrontierPass, MSGBOX_DEFAULT
# 134 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 135 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerApproachNoland
# 136 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 137 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 138 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryBattleRoom_Text_ReceivedKnowledgeSymbol
# 139 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 140 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitfanfare
# 141 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_givesymbol
# 142 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NextTimeNoHoldsBarred, MSGBOX_DEFAULT
# 143 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
# 144 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 145 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold::
# 146 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 147 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold
# 148 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_HarderLookThanLastTime, MSGBOX_DEFAULT
# 149 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 150 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold::
# 151 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_AllRightBringItOn, MSGBOX_DEFAULT
# 152 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle
# 153 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold
# 154 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost
# 155 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 156 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold::
# 157 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_getsymbols
# 158 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
# 159 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_OutOfMyLeagueLetsSeePass, MSGBOX_DEFAULT
# 160 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 161 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerApproachNoland
# 162 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 163 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 164 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryBattleRoom_Text_KnowledgeSymbolTookGoldenShine
# 165 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 166 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitfanfare
# 167 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_givesymbol
# 168 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_LastTimeILoseToYou, MSGBOX_DEFAULT
# 169 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
# 170 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 171 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle::
# 172 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 173 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 174 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	special HealPlayerParty
# 175 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_FACTORY
# 176 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 177 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	special DoSpecialTrainerBattle
# 178 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
# 179 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 180 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 181 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland::
# 182 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_get FACTORY_DATA_WIN_STREAK_SWAPS
# 183 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MAX_STREAK, BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak
# 184 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 185 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setorcopyvar VAR_0x8006, VAR_RESULT
# 186 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS  @ uses VAR_0x8006 above
# 187 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_get FACTORY_DATA_WIN_STREAK
# 188 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MAX_STREAK, BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum
# 189 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 190 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK, VAR_RESULT
# 191 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 192 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 193 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon
# 194 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 195 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 196 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom:
# 197 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 198 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 199 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 200 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 201 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 202 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	face_right
# 203 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	step_end
# 204 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 205 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerApproachNoland:
# 206 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_right
# 207 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	step_end
# 208 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 209 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Movement_OpponentEnter:
# 210 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 211 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 212 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 213 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 214 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 215 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	face_left
# 216 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	step_end
# 217 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 218 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Movement_NolandMoveToBattle:
# 219 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 220 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 221 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 222 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	face_left
# 223 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	step_end
# 224 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 225 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby::
# 226 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 227 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyDoubles
# 228 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_LOBBY, 4, 8
# 229 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
# 230 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 231 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 232 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyDoubles::
# 233 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_LOBBY, 14, 8
# 234 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
# 235 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 236 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 237 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle::
# 238 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_1, Common_Movement_WalkInPlaceFasterRight
# 239 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_2, Common_Movement_WalkInPlaceFasterRight
# 240 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_3, Common_Movement_WalkInPlaceFasterRight
# 241 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_4, Common_Movement_WalkInPlaceFasterLeft
# 242 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_5, Common_Movement_WalkInPlaceFasterLeft
# 243 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_6, Common_Movement_WalkInPlaceFasterLeft
# 244 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 245 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 246 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 247 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_GetAMoveOn:
# 248 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Venga, venga!\n"
# 249 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Muévete!$"
# 250 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 251 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_NolandImFactoryHead:
# 252 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Hola, me llamo SABINO!\n"
# 253 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Soy el que manda aquí, por así decirlo.\l"
# 254 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Por eso me llaman el JEFE de la FÁBRICA.\p"
# 255 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "He estado echando un vistazo a tus\n"
# 256 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "resultados de COMBATE con TRUEQUE.\p"
# 257 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Parece que tienes madera, pero aún\n"
# 258 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "hay algo de serrín en tu cabeza.\p"
# 259 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Déjame decirte algo, ¿eh? El saber\n"
# 260 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "no está sólo en leer libros y estudiar.\p"
# 261 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Si sólo haces eso…\n"
# 262 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡No aprenderás nunca nada!\p"
# 263 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Tienes que vivir las cosas, sentirlas\n"
# 264 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "en tu propia piel, ¿entiendes?\p"
# 265 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Te retaré en igualdad de condiciones.\n"
# 266 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Yo también usaré POKéMON prestados!$"
# 267 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 268 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_ShakeOutKnowledgeBringItOn:
# 269 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Llegó la hora de mostrarme todo\n"
# 270 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "el saber que posees!$"
# 271 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 272 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_NolandLetsSeeFrontierPass:
# 273 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "SABINO: ¡Bien hecho!\n"
# 274 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Déjame tu PASE del FRENTE.$"
# 275 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 276 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_ReceivedKnowledgeSymbol:
# 277 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡El SÍMBOLO del SABER ha sido\n"
# 278 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "grabado en tu PASE del FRENTE!$"
# 279 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 280 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_NextTimeNoHoldsBarred:
# 281 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Eh, tú…\n"
# 282 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Brillas con luz propia…\p"
# 283 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "La próxima vez, no seré tan magnánimo.\n"
# 284 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Sin contemplaciones, ¿entiendes?\p"
# 285 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Sigue estudiando y aprendiendo!$"
# 286 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 287 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_HarderLookThanLastTime:
# 288 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "SABINO: ¡Eh, hola! ¿Qué tal lo llevas?\n"
# 289 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¿Sigues aplicándote en tus estudios?\p"
# 290 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Mmm…\p"
# 291 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Tus ojos brillan con más fuerza\n"
# 292 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "que la última vez que te vi.\p"
# 293 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Venga, creo que nos vamos a divertir!$"
# 294 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 295 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_AllRightBringItOn:
# 296 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Adelante!\n"
# 297 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Veamos de lo que eres capaz!$"
# 298 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 299 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_OutOfMyLeagueLetsSeePass:
# 300 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "SABINO: Pero cómo…\n"
# 301 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Oye, tú ya estás en otro nivel!\p"
# 302 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Uff!\n"
# 303 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Dame el PASE del FRENTE!$"
# 304 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 305 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_KnowledgeSymbolTookGoldenShine:
# 306 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡El SÍMBOLO del SABER\n"
# 307 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "ha adquirido un brillo dorado!$"
# 308 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 309 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_LastTimeILoseToYou:
# 310 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Vaya, vaya!\p"
# 311 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "¡Te prometo que es la última vez\n"
# 312 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "que pierdo contigo!\p"
# 313 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Tenemos que repetirlo, ¿vale?$"
