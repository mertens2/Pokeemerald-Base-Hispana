# 1 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerMultiPartnerRoom_OnResume
# 4 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition
# 5 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp
# 6 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame
# 7 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnResume:
# 10 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	pyramid_resetparty
# 11 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 12 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition:
# 14 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner
# 15 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
# 16 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
# 17 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
# 18 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
# 19 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
# 20 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
# 21 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1
# 22 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2
# 23 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_loadpartners
# 24 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 25 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 26 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner::
# 27 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BOY_1
# 28 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BOY_1
# 29 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_BOY_1
# 30 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_BOY_1
# 31 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_BOY_1
# 32 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_BOY_1
# 33 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_BOY_1
# 34 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_BOY_1
# 35 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 36 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_3, 1
# 37 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setobjectxyperm LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, 10, 2
# 38 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 39 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 40 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp:
# 41 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth
# 42 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.2byte 0
# 43 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 44 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth::
# 45 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 46 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 47 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 48 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame:
# 49 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom
# 50 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom
# 51 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.2byte 0
# 52 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 53 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom::
# 54 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lockall
# 55 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_3, 0
# 56 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator
# 57 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 58 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 59 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom::
# 60 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lockall
# 61 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom
# 62 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 63 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit
# 64 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 65 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	copyobjectxytoperm LOCALID_TOWER_PARTNER_ROOM_ATTENDANT
# 66 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 67 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 68 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner, MSGBOX_DEFAULT
# 69 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	special HealPlayerParty
# 70 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 71 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	releaseall
# 72 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 73 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 74 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom:
# 75 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_down
# 76 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 77 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 78 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit:
# 79 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_left
# 80 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_in_place_faster_down
# 81 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 82 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 83 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant::
# 84 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 85 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 86 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner
# 87 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 88 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 89 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge
# 90 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner2, MSGBOX_DEFAULT
# 91 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	release
# 92 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 93 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 94 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge::
# 95 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 96 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost
# 97 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 99 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator::
# 100 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner, MSGBOX_DEFAULT
# 101 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closemessage
# 102 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, Common_Movement_WalkInPlaceFasterUp
# 103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 104 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	opendoor 10, 1
# 105 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitdooranim
# 106 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	call BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator
# 107 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closedoor 10, 1
# 108 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitdooranim
# 109 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 1, 6
# 110 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitstate
# 111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	releaseall
# 112 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 113 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 114 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator::
# 115 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
# 116 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator
# 117 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 118 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 119 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 120 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
@ Unused
# 121 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorEast:
# 122 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
# 123 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevatorEast
# 124 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 125 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 126 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 127 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
@ Unused
# 128 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorWest:
# 129 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
# 130 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEneterElevatorWest
# 131 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 132 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 133 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 134 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator:
# 135 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 136 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 138 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 139 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 140 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
@ Functionally unused
# 141 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevatorEast:
# 142 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_right
# 143 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 145 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 147 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
@ Functionally unused
# 148 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEneterElevatorWest:
# 149 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_left
# 150 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 151 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 152 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 153 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 154 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator:
# 155 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 156 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 157 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 158 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 159 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner1::
# 160 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 161 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 162 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 163 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 164 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 165 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 166 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner::
# 167 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
# 168 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_INTRO
# 169 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 170 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 171 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_MON1
# 172 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 173 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 174 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_MON2_ASK
# 175 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 176 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 177 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	switch VAR_RESULT
# 178 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
# 179 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
# 180 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_ACCEPT
# 181 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 182 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 183 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closemessage
# 184 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	call_if_ne VAR_FACING, DIR_SOUTH, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit
# 185 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExitSouth
# 186 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 187 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
# 188 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM, 10, 3
# 189 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitstate
# 190 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	release
# 191 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 192 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 193 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner::
# 194 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_REJECT
# 195 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 196 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 197 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	release
# 198 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 199 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 200 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit::
# 201 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit
# 202 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 203 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 204 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 205 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExitSouth::
# 206 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExitSouth
# 207 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 208 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 209 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 210 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit:
# 211 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 212 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 213 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 214 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 215 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 216 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 217 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 218 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 219 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 220 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExitSouth:
# 221 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_left
# 222 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 223 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 224 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 225 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 226 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 227 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 228 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 229 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 230 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 231 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner2::
# 232 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 233 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 234 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 235 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 236 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 237 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 238 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner3::
# 239 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 240 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 241 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 2
# 242 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 243 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 244 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 245 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner4::
# 246 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 247 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 248 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 3
# 249 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 250 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 251 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 252 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner5::
# 253 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 254 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 255 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 4
# 256 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 257 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 258 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 259 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner6::
# 260 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 261 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 262 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 5
# 263 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 264 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 265 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 266 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner7::
# 267 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 268 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 269 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 6
# 270 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 271 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 272 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 273 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner8::
# 274 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 275 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 276 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 7
# 277 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 278 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 279 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 280 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner:
# 281 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Búscate un compañero entre los\n"
# 282 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ENTRENADORES que hay aquí.$"
# 283 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 284 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner:
# 285 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿{PLAYER}, aún no has encontrado\n"
# 286 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un compañero para tu equipo?\p"
# 287 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Qué pasa? ¿Quieres dejar de buscar\n"
# 288 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y volver al mostrador de recepción?$"
# 289 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 290 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner2:
# 291 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Entonces, búscate un compañero entre\n"
# 292 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "los ENTRENADORES que hay aquí.$"
# 293 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 294 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner::
# 295 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bien, veo que ya tienes pareja.\p"
# 296 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Te conduciré a la SALA BATALLA\n"
# 297 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "de COMBATES MÚLTIPLES.$"
# 298 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 299 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Intro::
# 300 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I’m {STR_VAR_1}’s no. {STR_VAR_2} apprentice.\n"
# 301 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You can call me {STR_VAR_3}!$"
# 302 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 303 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon1::
# 304 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "On {STR_VAR_1}’s advice, I brought\n"
# 305 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_3} with {STR_VAR_2} and$"
# 306 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 307 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon2Ask::
# 308 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 309 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please, let me join you as a tag team.$"
# 310 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 311 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Accept::
# 312 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\n"
# 313 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I’ll go register right now.$"
# 314 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 315 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Reject::
# 316 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I really wanted to form a tag team\n"
# 317 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "with you, {PLAYER}…$"
# 318 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 319 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Intro::
# 320 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am {STR_VAR_1}’s no. {STR_VAR_2} apprentice.\n"
# 321 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My name is {STR_VAR_3}.$"
# 322 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 323 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon1::
# 324 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I got advice from {STR_VAR_1} and chose\n"
# 325 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_3} with {STR_VAR_2} and$"
# 326 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 327 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon2Ask::
# 328 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 329 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please, let’s form a tag team!$"
# 330 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 331 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Accept::
# 332 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you very much!\n"
# 333 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I’ll be done with registration quickly!$"
# 334 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 335 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Reject::
# 336 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}, I was hoping that I could\n"
# 337 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "partner up with you…$"
# 338 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 339 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Intro::
# 340 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hola, me llamo {STR_VAR_3},\n"
# 341 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "aprendiz n.º {STR_VAR_2} de {STR_VAR_1}.\p"
# 342 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Snif…\p"
# 343 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Lo siento!\n"
# 344 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Es la tensión, que me hace llorar…$"
# 345 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 346 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon1::
# 347 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} me aconsejó que tuviese\n"
# 348 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1} y$"
# 349 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 350 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon2Ask::
# 351 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 352 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Snif…\n"
# 353 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Por favor, déjame ser tu pareja!$"
# 354 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 355 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Accept::
# 356 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿De verdad? ¿Me eliges a mí?\n"
# 357 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Genial! ¡Alucinante! ¡Superguay!\p"
# 358 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh… Perdona…\n"
# 359 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Son lágrimas de felicidad…\p"
# 360 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Voy corriendo a registrarnos.\n"
# 361 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡No empieces sin mí!$"
# 362 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 363 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Reject::
# 364 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, pe-pero…\n"
# 365 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Si… ¡Buaaaaaa!$"
# 366 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 367 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Intro::
# 368 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Ah, hola! ¡Soy {STR_VAR_3},\n"
# 369 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "aprendiz n.º {STR_VAR_2} de {STR_VAR_1}!$"
# 370 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 371 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon1::
# 372 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} me recomendó un tándem.\n"
# 373 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Un {STR_VAR_2} con {STR_VAR_1} y$"
# 374 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 375 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon2Ask::
# 376 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\n"
# 377 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Y eso es lo que tengo! Genial, ¿eh?\p"
# 378 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Qué me dices?\n"
# 379 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Formamos el equipo invencible?$"
# 380 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 381 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Accept::
# 382 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Yupi! ¡Genial!\n"
# 383 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bueno, voy a registrarnos, ¿vale?$"
# 384 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 385 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Reject::
# 386 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Y eso?…\p"
# 387 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Lástima! ¡Habríamos hecho\n"
# 388 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un buen equipo, {PLAYER}!$"
# 389 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 390 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Intro::
# 391 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola! ¡Soy {STR_VAR_3}, y {STR_VAR_1}\n"
# 392 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "me eligió como su aprendiz n.º {STR_VAR_2}!$"
# 393 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 394 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon1::
# 395 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Le pedí consejo a {STR_VAR_3}.\n"
# 396 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Un {STR_VAR_2} con {STR_VAR_1}$"
# 397 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 398 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon2Ask::
# 399 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y un {STR_VAR_2} con {STR_VAR_1},\n"
# 400 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ésa es mi pareja de POKéMON.\p"
# 401 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Qué me dices? ¿Te interesa\n"
# 402 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "formar equipo conmigo?$"
# 403 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 404 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Accept::
# 405 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Gracias! ¡No te arrepentirás!\n"
# 406 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos ahora mismo!$"
# 407 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 408 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Reject::
# 409 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Como quieras, {PLAYER}, pero pocos\n"
# 410 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "compañeros encontrarás como yo…$"
# 411 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 412 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Intro::
# 413 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Eh… Me alegra saber que aún hay gente\n"
# 414 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "capaz de confiar en desconocidos.\p"
# 415 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me llamo {STR_VAR_3}. No hace mucho,\n"
# 416 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} me nombró su aprendiz n.º {STR_VAR_2}.$"
# 417 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 418 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon1::
# 419 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} me dio un consejo que\n"
# 420 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "le agradeceré mientras viva.\p"
# 421 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mi equipo de POKéMON está formado\n"
# 422 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "por un {STR_VAR_2} con {STR_VAR_1} y$"
# 423 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 424 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon2Ask::
# 425 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\n"
# 426 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sé que es mucho pedir…\p"
# 427 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Te atreves a formar tándem conmigo?$"
# 428 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 429 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Accept::
# 430 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿En serio? ¡Qué suerte!\n"
# 431 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Es un honor que me quieras a tu lado!\l"
# 432 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡No pienso defraudarte!\p"
# 433 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Esto…\n"
# 434 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy volando a registrarnos!$"
# 435 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 436 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Reject::
# 437 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bueno… Quizás cambies de opinión\n"
# 438 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "cuando veas a los otros…$"
# 439 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 440 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Intro::
# 441 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola, soy {STR_VAR_3},\n"
# 442 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "aprendiz n.º {STR_VAR_2} de {STR_VAR_1}!$"
# 443 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 444 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon1::
# 445 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} me dijo que lo mejor\n"
# 446 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "sería que formase este equipo:\l"
# 447 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}$"
# 448 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 449 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon2Ask::
# 450 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y un {STR_VAR_2} que supiese\n"
# 451 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "usar {STR_VAR_1}.\p"
# 452 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "No está mal, ¿eh?\n"
# 453 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Quieres que luchemos en pareja?$"
# 454 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 455 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Accept::
# 456 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Estupendo!\n"
# 457 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Ahora sólo espero que no lo estropees!\l"
# 458 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Voy a registrarnos.$"
# 459 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 460 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Reject::
# 461 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Cómo? ¿Por qué me rechazas?\n"
# 462 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Quizás sea lo mejor!$"
# 463 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 464 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Intro::
# 465 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy {STR_VAR_3}, renombrado TRIATLETA.\n"
# 466 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me paso todo el día corriendo,\l"
# 467 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "entrenando y practicando.\p"
# 468 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "También soy aprendiz de {STR_VAR_1},\n"
# 469 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "su n.º {STR_VAR_2}, para ser exactos.$"
# 470 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 471 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon1::
# 472 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} me recomendó este equipo:\n"
# 473 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Un {STR_VAR_2} con {STR_VAR_1}$"
# 474 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 475 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon2Ask::
# 476 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y un {STR_VAR_2} con {STR_VAR_1}.\p"
# 477 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me he esforzado por entrenarlos bien,\n"
# 478 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y eso que soy una persona muy ocupada.\p"
# 479 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Y si nos juntamos a ver qué tal?$"
# 480 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 481 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Accept::
# 482 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Así me gusta! ¡Gracias!\n"
# 483 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Prepárate, que voy a registrarnos, ¿eh?$"
# 484 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 485 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Reject::
# 486 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hice un hueco en mi agenda sólo para\n"
# 487 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "luchar contigo! ¡Me la has hecho buena!$"
# 488 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 489 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Intro::
# 490 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola!\n"
# 491 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Qué te cuentas?\p"
# 492 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy {STR_VAR_3}, aprendiz n.º {STR_VAR_2}\n"
# 493 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "de {STR_VAR_1}. ¡Un placer conocerte!$"
# 494 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 495 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon1::
# 496 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Oye, oye! Mira qué POKéMON\n"
# 497 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "me recomendó tener {STR_VAR_3}.\l"
# 498 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Un {STR_VAR_2} con {STR_VAR_1} y$"
# 499 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 500 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon2Ask::
# 501 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\n"
# 502 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Ni que decir tiene que los entrené yo!\p"
# 503 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Qué tal si hacemos pareja?\n"
# 504 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Creo que nos haríamos estrellas!$"
# 505 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 506 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Accept::
# 507 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bien dicho, ¡nos vamos a divertir!\n"
# 508 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos!$"
# 509 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 510 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Reject::
# 511 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Vaya, no me lo esperaba de ti!\n"
# 512 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hay quien piensa que valgo, ¿sabes?$"
# 513 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 514 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Intro::
# 515 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Permíteme que me presente.\n"
# 516 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy {STR_VAR_3}.\p"
# 517 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ejerzo de aprendiz n.º {STR_VAR_2} de {STR_VAR_1}.$"
# 518 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 519 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon1::
# 520 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Seguí el sabio consejo de {STR_VAR_3}\n"
# 521 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y ahora tengo en mi estupendo equipo\l"
# 522 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}$"
# 523 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 524 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon2Ask::
# 525 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y un {STR_VAR_2} con {STR_VAR_1}.\p"
# 526 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Anda, hagamos equipo!$"
# 527 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 528 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Accept::
# 529 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh… ¡Eso es estupendo!\n"
# 530 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Prometo que daré el máximo de mí!\p"
# 531 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos ahora mismo!\n"
# 532 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Prepárate!$"
# 533 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 534 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Reject::
# 535 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Esperaba que dijeses que sí,\n"
# 536 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}…$"
# 537 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 538 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Intro::
# 539 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Eh! ¡Has venido a hablar tú conmigo!\n"
# 540 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Menos mal, porque yo no me atrevía!\p"
# 541 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_3}! ¡{STR_VAR_1} me eligió\n"
# 542 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "como su aprendiz n.º {STR_VAR_2}!$"
# 543 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 544 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon1::
# 545 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "He seguido los consejo de {STR_VAR_3}.\p"
# 546 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ahora estoy entrenando\n"
# 547 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "a un {STR_VAR_2} con {STR_VAR_1}$"
# 548 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 549 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon2Ask::
# 550 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y a un {STR_VAR_2} con {STR_VAR_1}.\p"
# 551 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Por favor, concédeme el honor\n"
# 552 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "de luchar junto a ti. ¿Lo harás?$"
# 553 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 554 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Accept::
# 555 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Sí! ¡Es… genial!\n"
# 556 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Un millón de gracias!\l"
# 557 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy pitando a registrarnos!$"
# 558 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 559 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Reject::
# 560 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Buaaa!…\p"
# 561 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿No sientes remordimientos, verdad?\n"
# 562 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Si es que encima eso te hace más guay…$"
# 563 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 564 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Intro::
# 565 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Ah! ¡Yo soy el aprendiz n.º {STR_VAR_2}\n"
# 566 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "de {STR_VAR_1}!\p"
# 567 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me llamo {STR_VAR_3}. ¡Hola!$"
# 568 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 569 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon1::
# 570 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "A mí, {STR_VAR_3} me recomendó\n"
# 571 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}$"
# 572 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 573 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon2Ask::
# 574 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y un {STR_VAR_2} con {STR_VAR_1}.\p"
# 575 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Suena bien, verdad?\n"
# 576 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿A que te apuntas conmigo?$"
# 577 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 578 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Accept::
# 579 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Perfecto!\n"
# 580 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos ahora mismo!$"
# 581 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 582 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Reject::
# 583 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Vaya tela, {PLAYER}!\n"
# 584 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "No te andas con rodeos, ¿eh?$"
# 585 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 586 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Intro::
# 587 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Eh! ¡Dicen que soy un exagerado,\n"
# 588 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "pero hoy voy a cerrar la TORRE BATALLA!\p"
# 589 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mmm…\n"
# 590 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Es una broma!\p"
# 591 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "La gente me llama {STR_VAR_3}, \n"
# 592 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡y yo también, claro!\p"
# 593 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy el aprendiz n.º 1.000\n"
# 594 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "de {STR_VAR_1}!\p"
# 595 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Bueno, vale, en realidad\n"
# 596 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "soy el n.º {STR_VAR_2}!$"
# 597 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 598 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon1::
# 599 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} me dio un buen consejo.\n"
# 600 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Busca un {STR_VAR_2} con {STR_VAR_1}$"
# 601 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 602 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon2Ask::
# 603 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y un {STR_VAR_2} con {STR_VAR_1}.\n"
# 604 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Tengo diez de cada!\l"
# 605 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Bueno, uno de cada, quiero decir!\p"
# 606 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Qué te parece?\n"
# 607 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Nos ponemos a pelear juntos?$"
# 608 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 609 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Accept::
# 610 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Estupendo!\n"
# 611 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a darte un POKéMON por enrollarte!\p"
# 612 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Que es broma! Pero lo que sí es verdad\n"
# 613 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "es que voy a registrarnos, ¿vale?$"
# 614 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 615 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Reject::
# 616 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Me dejas helado! ¡Sólo por eso\n"
# 617 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "voy a destruir esta TORRE BATALLA!\p"
# 618 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Naa! ¡Claro que no!$"
# 619 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 620 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Intro::
# 621 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Eh, tú! ¡A mis POKéMON les gusta el mar\n"
# 622 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "porque cada día los llevo a navegar!\p"
# 623 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy {STR_VAR_3}, un avezado MARINERO.\n"
# 624 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡No me tomes por el pito de un sereno!\p"
# 625 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy el aprendiz n.º {STR_VAR_2} de {STR_VAR_1}.\n"
# 626 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Ahí es nada!$"
# 627 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 628 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon1::
# 629 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Gracias a {STR_VAR_3} y sus consejos\n"
# 630 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "he hecho un equipo sin complejos!\l"
# 631 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Un {STR_VAR_2} con {STR_VAR_1}$"
# 632 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 633 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon2Ask::
# 634 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y un {STR_VAR_2} que usa {STR_VAR_1}.\p"
# 635 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Celebremos este feliz encuentro\n"
# 636 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y luchemos codo con codo ahí dentro!$"
# 637 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 638 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Accept::
# 639 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Me alegra que luchemos juntos!\n"
# 640 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Ahora mismo voy y nos apunto!$"
# 641 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 642 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Reject::
# 643 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Vaya, {PLAYER}, me dejas de piedra!\n"
# 644 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Por mí puedes irte a paseo!$"
# 645 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 646 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Intro::
# 647 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Qué onda!\n"
# 648 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Ya me ha llegado a mí la ronda?\p"
# 649 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Ea, me presento! ¡Me llamo {STR_VAR_3}!\n"
# 650 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy el aprendiz n.º {STR_VAR_2} de {STR_VAR_1}!$"
# 651 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 652 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon1::
# 653 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} me dijo lo que debía buscar:\n"
# 654 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} que usase {STR_VAR_1}$"
# 655 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 656 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon2Ask::
# 657 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y un {STR_VAR_2} con {STR_VAR_1}.\p"
# 658 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Deja de mirarme como un búho\n"
# 659 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y anímate a formar conmigo un dúo!\p"
# 660 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡No veas lo bien que suena mi guitarra\n"
# 661 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "cuando otra buena la acompaña!$"
# 662 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 663 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Accept::
# 664 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Ay! ¡Voy a ponerme a cantar!\n"
# 665 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡No quepo en mí de felicidad!\p"
# 666 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Pero antes de luchar,\n"
# 667 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "nos debemos registrar!$"
# 668 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 669 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Reject::
# 670 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿{PLAYER}, de verdad me vas a rechazar?\n"
# 671 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Ahora sí que voy a tener que llorar!$"
# 672 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 673 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Intro::
# 674 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Achís!\p"
# 675 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, lo siento, tengo catarro.\n"
# 676 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Pero mis POKéMON están bien.\p"
# 677 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me llamo {STR_VAR_3}, aprendiz\n"
# 678 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "n.º {STR_VAR_2} de {STR_VAR_1}. ¡Achís!$"
# 679 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 680 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon1::
# 681 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Seguí el consejo de {STR_VAR_3} y junté\n"
# 682 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1} y$"
# 683 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 684 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon2Ask::
# 685 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 686 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Los entreno todos los días,\n"
# 687 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "aunque llueva o nieve.\p"
# 688 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Por eso he pillado este catarro.\n"
# 689 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Achís!\p"
# 690 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bueno, ésas son mis cartas.\n"
# 691 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Te animas a combatir a mi lado?$"
# 692 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 693 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Accept::
# 694 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Gracias, se agradece la confianza!\n"
# 695 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Achís!\l"
# 696 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy corriendo a registrarnos!$"
# 697 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 698 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Reject::
# 699 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Lástima, {PLAYER}…\n"
# 700 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Habríamos hecho una buena pareja.$"
# 701 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 702 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Intro::
# 703 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Oh, hola!\n"
# 704 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Todo esto me pone de los nervios.\p"
# 705 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy {STR_VAR_3}, aprendiz\n"
# 706 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "n.º {STR_VAR_2} de {STR_VAR_1}.$"
# 707 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 708 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon1::
# 709 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} me aconsejó este equipo:\n"
# 710 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1} y$"
# 711 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 712 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon2Ask::
# 713 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 714 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me da un poco de reparo preguntar,\n"
# 715 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "pero ¿querrías combatir a mi lado?$"
# 716 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 717 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Accept::
# 718 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Oh, guay, eso es genial!\n"
# 719 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Espero poder estar a la altura!\p"
# 720 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yo me encargo del papeleo.$"
# 721 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 722 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Reject::
# 723 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡No, por favor, no digas que no!\n"
# 724 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ya tenía suficientes dudas sobre mí…$"
# 725 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 726 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Intro::
# 727 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me llamo {STR_VAR_3},\n"
# 728 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "pero hay nombres peores.\p"
# 729 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} me hizo su aprendiz n.º {STR_VAR_2}.$"
# 730 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 731 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon1::
# 732 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} me recomendó este equipo.\p"
# 733 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Como parecía un buen consejo,\n"
# 734 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "decidí seguirlo al pie de la letra:\l"
# 735 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "tengo un {STR_VAR_2} con {STR_VAR_1}$"
# 736 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 737 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon2Ask::
# 738 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y un {STR_VAR_2} con {STR_VAR_1}.\p"
# 739 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Si no es mucho pedir,\n"
# 740 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "me gustaría luchar a tu lado.$"
# 741 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 742 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Accept::
# 743 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Me aceptas de verdad?\n"
# 744 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Menos mal, lo hubiese pasado fatal…\p"
# 745 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Pero me has aceptado!\n"
# 746 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy corriendo a registrarnos!$"
# 747 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 748 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Reject::
# 749 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Mm? ¿Y se puede saber por qué no?\n"
# 750 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Te piensas que tiene gracia?$"
# 751 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 752 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassIntro::
# 753 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_1}, una CHICA!$"
# 754 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 755 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon1::
# 756 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Lo que tengo aquí es un {STR_VAR_2}\n"
# 757 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "que usa {STR_VAR_1} y un$"
# 758 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 759 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon2Ask::
# 760 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} que usa {STR_VAR_1}.\n"
# 761 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Es lo que me he traído.\p"
# 762 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Quieres que seamos equipo?$"
# 763 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 764 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassAccept::
# 765 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Muchas gracias!\n"
# 766 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos!$"
# 767 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 768 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassReject::
# 769 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Conque no soy buena para ti?\n"
# 770 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Pues que sepas que lo vas a lamentar!$"
# 771 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 772 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterIntro::
# 773 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola!\p"
# 774 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy el JOVEN {STR_VAR_1}!$"
# 775 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 776 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon1::
# 777 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Quieres saber lo que llevo conmigo?\n"
# 778 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Un {STR_VAR_2} con {STR_VAR_1} y$"
# 779 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 780 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon2Ask::
# 781 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\p"
# 782 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Quieres hacer un equipo conmigo,\n"
# 783 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿verdad?$"
# 784 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 785 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterAccept::
# 786 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Lo sabía!\n"
# 787 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a apuntarnos ahora mismo!$"
# 788 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 789 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterReject::
# 790 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Qué palo! ¡Si formáramos un dúo\n"
# 791 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "tú y yo, no nos ganaría nadie!$"
# 792 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 793 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerIntro::
# 794 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Eco, eeeecooo!\n"
# 795 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy el MONTAÑERO {STR_VAR_1}!$"
# 796 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 797 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon1::
# 798 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Te interesa lo que llevo?\n"
# 799 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Mi {STR_VAR_2} usa {STR_VAR_1} y$"
# 800 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 801 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon2Ask::
# 802 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mi {STR_VAR_2}, {STR_VAR_1}!\p"
# 803 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "No está mal, ¿eh?\n"
# 804 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Formamos un equipo?$"
# 805 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 806 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerAccept::
# 807 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Jaroleri-leri-o!\n"
# 808 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos antes \l"
# 809 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "de que cambies de opinión!$"
# 810 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 811 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerReject::
# 812 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Qué pena, me habría gustado\n"
# 813 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "combatir a tu lado.$"
# 814 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 815 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyIntro::
# 816 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola!\n"
# 817 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy la BELLA {STR_VAR_1}!$"
# 818 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 819 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon1::
# 820 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Quieres ver lo que estoy entrenando?\n"
# 821 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Un {STR_VAR_2} con {STR_VAR_1} y$"
# 822 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 823 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon2Ask::
# 824 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\p"
# 825 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Qué opinas?\n"
# 826 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Los quieres en tu equipo?$"
# 827 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 828 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyAccept::
# 829 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Qué estupendo!\n"
# 830 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡No te muevas, yo voy a registrarnos!$"
# 831 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 832 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyReject::
# 833 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Pues qué mal!\p"
# 834 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Podríamos haber hecho algo especial!$"
# 835 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 836 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanIntro::
# 837 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola!\p"
# 838 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Sabes quién soy?\n"
# 839 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_1}, el PESCADOR!$"
# 840 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 841 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon1::
# 842 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Tengo dos ejemplares de escándalo!\n"
# 843 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Un {STR_VAR_2} que sabe {STR_VAR_1} y$"
# 844 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 845 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon2Ask::
# 846 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} que sabe {STR_VAR_1}.\p"
# 847 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "No está mal, ¿eh?\n"
# 848 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Vienes a pescar victorias conmigo?$"
# 849 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 850 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanAccept::
# 851 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Bien, bien!\n"
# 852 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Déjalo de mi cuenta!\p"
# 853 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Voy a registrarnos ahora mismo.$"
# 854 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 855 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanReject::
# 856 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Lástima, éramos tal para cual…$"
# 857 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 858 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyIntro::
# 859 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Encantada de conocerte.\n"
# 860 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy {STR_VAR_1}, una DAMISELA.$"
# 861 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 862 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon1::
# 863 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "En mi maravilloso equipo tengo\n"
# 864 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1} y$"
# 865 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 866 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon2Ask::
# 867 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 868 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Espero que te agraden, pues nada me\n"
# 869 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "haría más feliz que combatir a tu lado.$"
# 870 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 871 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyAccept::
# 872 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Te estoy agradecida.\n"
# 873 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Voy a formalizar los trámites.$"
# 874 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 875 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyReject::
# 876 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Humildemente, siento que terminarás\n"
# 877 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "por lamentar semejante decisión.$"
# 878 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 879 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFIntro::
# 880 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_1}, una TRIATLETA!$"
# 881 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 882 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon1::
# 883 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "A ver qué tengo aquí…\n"
# 884 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Un {STR_VAR_2} con {STR_VAR_1} y$"
# 885 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 886 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon2Ask::
# 887 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\n"
# 888 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Menuda pareja!\p"
# 889 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ahora, dime, ¿formamos un equipo?$"
# 890 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 891 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFAccept::
# 892 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Perfecto!\n"
# 893 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy corriendo a apuntarnos!$"
# 894 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 895 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFReject::
# 896 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh. ¡Tú y yo podríamos\n"
# 897 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "haber hecho historia!$"
# 898 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 899 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherIntro::
# 900 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Qué tal?\n"
# 901 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy el CAZABICHOS {STR_VAR_1}!$"
# 902 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 903 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon1::
# 904 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Mira lo que traigo en el morral!\n"
# 905 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Un {STR_VAR_2} con {STR_VAR_1} y$"
# 906 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 907 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon2Ask::
# 908 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\p"
# 909 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Así que escucha:\n"
# 910 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Qué tal si unimos fuerzas?$"
# 911 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 912 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherAccept::
# 913 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Te pillé!\p"
# 914 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy volando a registrarnos!$"
# 915 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 916 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherReject::
# 917 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Cómo? ¿Con los POKéMON que tengo?\n"
# 918 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Ya veremos si no te arrepientes!$"
# 919 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 920 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMIntro::
# 921 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola, hola! ¡Soy {STR_VAR_1},\n"
# 922 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un ESCOLAR con mucha escuela!$"
# 923 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 924 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon1::
# 925 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ahora estoy entrenando a un\n"
# 926 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} que usa {STR_VAR_1}$"
# 927 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 928 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon2Ask::
# 929 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y a un {STR_VAR_2}\n"
# 930 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "que usa {STR_VAR_1}.\p"
# 931 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Envidia, ¿eh? Bueno, si quieres,\n"
# 932 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "nos unimos para luchar…$"
# 933 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 934 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMAccept::
# 935 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Bien dicho!\n"
# 936 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a rellenar la solicitud!$"
# 937 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 938 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMReject::
# 939 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "No esperaba oír eso…\p"
# 940 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me hubiese gustado aprender\n"
# 941 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "algo de ti…$"
# 942 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 943 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyIntro::
# 944 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Tú también sabes quién soy, ¿verdad?\n"
# 945 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_1}, un NIÑO BIEN!$"
# 946 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 947 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon1::
# 948 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Yo siempre tengo lo mejor!\n"
# 949 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Un {STR_VAR_2} con {STR_VAR_1} y$"
# 950 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 951 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon2Ask::
# 952 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\p"
# 953 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Te voy a dar la oportunidad\n"
# 954 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "de luchar a mi lado.$"
# 955 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 956 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyAccept::
# 957 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Qué superguay!\p"
# 958 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Espabila y prepárate mientras\n"
# 959 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "yo voy a registrarnos.$"
# 960 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 961 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyReject::
# 962 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Que vas tú y me rechazas?\n"
# 963 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡No! ¡Te rechazo yo antes a ti!$"
# 964 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 965 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltIntro::
# 966 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Kiaaaaaa!\n"
# 967 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy el KARATEKA {STR_VAR_1}.$"
# 968 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 969 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon1::
# 970 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yo estoy luchando con\n"
# 971 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} que usa {STR_VAR_1}$"
# 972 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 973 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon2Ask::
# 974 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y un {STR_VAR_2} que usa {STR_VAR_1}.\p"
# 975 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Venga, concédeme este honor!\n"
# 976 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Combatamos codo con codo!$"
# 977 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 978 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltAccept::
# 979 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Kiaaaaaaa!\n"
# 980 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy corriendo a registrarnos!$"
# 981 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 982 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltReject::
# 983 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bien… Quizás cambies\n"
# 984 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "de opinión la próxima vez…$"
# 985 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 986 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFIntro::
# 987 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola, caracola!\n"
# 988 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_1}, una PLAYERA!$"
# 989 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 990 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon1::
# 991 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Te enseño lo que llevo.\n"
# 992 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Un {STR_VAR_2} con {STR_VAR_1} y$"
# 993 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 994 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon2Ask::
# 995 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\n"
# 996 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Me aceptas a tu lado?$"
# 997 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 998 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFAccept::
# 999 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Guay!\n"
# 1000 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy ahora mismo a apuntarnos!$"
# 1001 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1002 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFReject::
# 1003 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Si hubieses dicho que sí,\n"
# 1004 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "tendríamos más futuro!$"
# 1005 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1006 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacIntro::
# 1007 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Je, je. Hola…\n"
# 1008 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy la BRUJITA {STR_VAR_1}…$"
# 1009 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1010 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon1::
# 1011 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hoy llevo conmigo un {STR_VAR_2}\n"
# 1012 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "con {STR_VAR_1} y también un$"
# 1013 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1014 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon2Ask::
# 1015 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} que usa {STR_VAR_1}…\p"
# 1016 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Te lo suplico…\n"
# 1017 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Formemos un equipo…$"
# 1018 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1019 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacAccept::
# 1020 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Je, je. Gracias…\n"
# 1021 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Voy por los formularios…$"
# 1022 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1023 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacReject::
# 1024 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Vaya, debe de haber\n"
# 1025 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un conjuro contra mi…$"
# 1026 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1027 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMIntro::
# 1028 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Encantado. ¡Me llamo {STR_VAR_1},\n"
# 1029 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y soy un CRIAPOKéMON!$"
# 1030 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1031 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon1::
# 1032 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Tengo dos POKéMON invencibles!\n"
# 1033 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Un {STR_VAR_2} con {STR_VAR_1} y$"
# 1034 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1035 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon2Ask::
# 1036 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\p"
# 1037 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿A que suena bien?\n"
# 1038 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "No te cortes y lucha a mi lado.$"
# 1039 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1040 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMAccept::
# 1041 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Qué buena noticia!\p"
# 1042 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a ocuparme del papeleo!$"
# 1043 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1044 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMReject::
# 1045 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Con las ganas que tenía\n"
# 1046 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "de luchar a tu lado…$"
# 1047 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1048 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFIntro::
# 1049 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola, hola!\n"
# 1050 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy la TRIATLETA {STR_VAR_1}!$"
# 1051 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1052 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon1::
# 1053 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Sabes con qué compito? ¡Con\n"
# 1054 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} que usa {STR_VAR_1} y$"
# 1055 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1056 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon2Ask::
# 1057 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} que usa {STR_VAR_1}!\p"
# 1058 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Y bien?\n"
# 1059 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Formamos un equipo?$"
# 1060 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1061 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFAccept::
# 1062 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Estupendo!\p"
# 1063 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy volando a registrarnos!$"
# 1064 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1065 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFReject::
# 1066 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Tú y yo habríamos batido récords.\n"
# 1067 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Qué pena…$"
# 1068 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1069 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMIntro::
# 1070 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola! ¡Me llamo {STR_VAR_1}!\n"
# 1071 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy un TRIATLETA!$"
# 1072 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1073 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon1::
# 1074 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Éstas son mis dos liebres:\n"
# 1075 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡un {STR_VAR_2} con {STR_VAR_1} y$"
# 1076 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1077 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon2Ask::
# 1078 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\p"
# 1079 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Si nos juntamos, podemos\n"
# 1080 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ganarlo todo. ¿Qué me dices?$"
# 1081 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1082 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMAccept::
# 1083 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡La victoria es nuestra!\n"
# 1084 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy raudo y veloz a registrarnos!$"
# 1085 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1086 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMReject::
# 1087 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Estaba dispuesto a darlo todo\n"
# 1088 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "a tu lado…$"
# 1089 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1090 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlIntro::
# 1091 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy la LUCHADORA {STR_VAR_1}!$"
# 1092 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1093 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon1::
# 1094 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡He estado entrenando a\n"
# 1095 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} que usa {STR_VAR_1} y$"
# 1096 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1097 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon2Ask::
# 1098 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "a un {STR_VAR_2} con {STR_VAR_1}!\p"
# 1099 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Formamos equipo?$"
# 1100 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1101 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlAccept::
# 1102 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Bien dicho!\p"
# 1103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ya que tú te has decidido,\n"
# 1104 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡yo iré a registrarnos!$"
# 1105 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1106 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlReject::
# 1107 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "No pierdo la esperanza, quizás\n"
# 1108 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "vuelvas en otra ocasión…$"
# 1109 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1110 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMIntro::
# 1111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy un TRIATLETA\n"
# 1112 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y me llamo {STR_VAR_1}!$"
# 1113 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1114 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon1::
# 1115 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yo voy al gimnasio con un {STR_VAR_2}\n"
# 1116 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "que sabe usar {STR_VAR_1}$"
# 1117 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1118 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon2Ask::
# 1119 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y con un {STR_VAR_2} con {STR_VAR_1}.\p"
# 1120 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Creo que formaríamos un buen equipo.\n"
# 1121 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Tú decides…$"
# 1122 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1123 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMAccept::
# 1124 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Lo conseguí!\p"
# 1125 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos ya mismo!$"
# 1126 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1127 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMReject::
# 1128 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, qué pena. Me había hecho ilusiones.$"
# 1129 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1130 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMIntro::
# 1131 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Yo?\n"
# 1132 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_1}, todo un PLAYERO!$"
# 1133 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1134 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon1::
# 1135 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Que qué tengo aquí?\n"
# 1136 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Pues un {STR_VAR_2} con {STR_VAR_1} y$"
# 1137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1138 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon2Ask::
# 1139 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 1140 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ahora que lo sabes, supongo\n"
# 1141 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "que querrás combatir a mi lado, ¿no?$"
# 1142 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1143 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMAccept::
# 1144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Lo sabía!\p"
# 1145 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a apuntarnos!\n"
# 1146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Vamos a hacer algo grande!$"
# 1147 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1148 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMReject::
# 1149 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Con lo fuertes que son mis POKéMON…\n"
# 1150 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Creo que te has precipitado.$"
# 1151 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1152 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristIntro::
# 1153 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡A las muy buenas!\n"
# 1154 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Llámame GUITARRISTA {STR_VAR_1}!$"
# 1155 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1156 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon1::
# 1157 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Mira qué banda he formado!\n"
# 1158 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Un {STR_VAR_2} con {STR_VAR_1} y$"
# 1159 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1160 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon2Ask::
# 1161 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\p"
# 1162 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Suena bien, eh?\n"
# 1163 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Hacemos un dueto?$"
# 1164 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1165 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristAccept::
# 1166 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Música para mis oídos!\n"
# 1167 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Yo me encargo del papeleo!$"
# 1168 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1169 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristReject::
# 1170 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Vaya! ¡No reconocerías a un genio\n"
# 1171 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ni aunque lo tuvieses delante!$"
# 1172 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1173 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanIntro::
# 1174 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Es un honor.\n"
# 1175 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy el CABALLERO {STR_VAR_1}.$"
# 1176 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1177 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon1::
# 1178 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Tengo dos buenos escuderos:\n"
# 1179 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} que usa {STR_VAR_1} y$"
# 1180 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1181 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon2Ask::
# 1182 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} que usa {STR_VAR_1}.\p"
# 1183 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Osarías embarcarte conmigo\n"
# 1184 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "en esta arriesgada empresa?$"
# 1185 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1186 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanAccept::
# 1187 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Será un honor combatir a tu lado.\n"
# 1188 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Deja que yo me ocupe de la burocracia.$"
# 1189 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1190 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanReject::
# 1191 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Qué desafortunada elección…\p"
# 1192 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Espero con impaciencia nuestro\n"
# 1193 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "próximo encuentro…$"
# 1194 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1195 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMIntro::
# 1196 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hola, soy {STR_VAR_1},\n"
# 1197 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y soy un POKéFAN.$"
# 1198 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1199 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon1::
# 1200 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Tengo un {STR_VAR_2} que sabe\n"
# 1201 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "el movimiento {STR_VAR_1} y$"
# 1202 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1203 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon2Ask::
# 1204 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 1205 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Te gusta lo que ofrezco?\n"
# 1206 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Por qué no nos unimos?$"
# 1207 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1208 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMAccept::
# 1209 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Excelente!\n"
# 1210 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos!$"
# 1211 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1212 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMReject::
# 1213 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mis POKéMON son de lo mejor que hay…\n"
# 1214 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Es una pena que no sepas apreciarlos.$"
# 1215 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1216 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMIntro::
# 1217 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Mm!\n"
# 1218 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy {STR_VAR_1}, un POKéABU.$"
# 1219 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1220 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon1::
# 1221 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Los POKéMON que entreno son\n"
# 1222 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1} y$"
# 1223 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1224 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon2Ask::
# 1225 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 1226 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Te alías con un experto como yo?$"
# 1227 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1228 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMAccept::
# 1229 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Mm!\n"
# 1230 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos!\l"
# 1231 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Espero que tengamos suerte!$"
# 1232 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1233 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMReject::
# 1234 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Espero que tu elección sea la\n"
# 1235 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "más adecuada para ti…$"
# 1236 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1237 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFIntro::
# 1238 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hola, hola.\n"
# 1239 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy {STR_VAR_1}, una POKéABU.$"
# 1240 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1241 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon1::
# 1242 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "He entrenado mis POKéMON a conciencia.\n"
# 1243 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Un {STR_VAR_2} con {STR_VAR_1} y$"
# 1244 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1245 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon2Ask::
# 1246 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}:\n"
# 1247 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "eso es lo que tengo.\p"
# 1248 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Querrías aliarte conmigo?$"
# 1249 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1250 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFAccept::
# 1251 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bien, bien, bien.\n"
# 1252 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yo me encargo del papeleo.$"
# 1253 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1254 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFReject::
# 1255 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Quizás podamos formar\n"
# 1256 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un equipo la próxima vez.$"
# 1257 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1258 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerIntro::
# 1259 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy el DOMADRAGÓN {STR_VAR_1}!$"
# 1260 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1261 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon1::
# 1262 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "El equipo que he entrenado es\n"
# 1263 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1} y$"
# 1264 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1265 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon2Ask::
# 1266 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 1267 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Apuesto a que te gusta!\n"
# 1268 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Combatimos como equipo?$"
# 1269 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1270 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerAccept::
# 1271 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Genial, voy a esforzarme de verdad!\n"
# 1272 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Prepárate, que voy a registrarnos.$"
# 1273 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1274 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerReject::
# 1275 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Te va a ser difícil encontrar a\n"
# 1276 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mejores ENTRENADORES que yo!$"
# 1277 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1278 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperIntro::
# 1279 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy el ORNITÓLOGO {STR_VAR_1}!$"
# 1280 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1281 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon1::
# 1282 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Que cuáles son mis POKéMON?\n"
# 1283 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Un {STR_VAR_2} con {STR_VAR_1} y$"
# 1284 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1285 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon2Ask::
# 1286 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 1287 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿No te parece que haríamos\n"
# 1288 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un equipo fuera de serie?$"
# 1289 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1290 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperAccept::
# 1291 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Genial, a mí también!\n"
# 1292 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Yo me encargo de rellenar los papeles!$"
# 1293 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1294 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperReject::
# 1295 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mis POKéMON y yo somos muy buenos.\n"
# 1296 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Menuda decepción!$"
# 1297 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1298 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyIntro::
# 1299 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_1}, un CHICO NINJA!$"
# 1300 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1301 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon1::
# 1302 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mi equipo de POKéMON está formado por\n"
# 1303 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1} y$"
# 1304 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1305 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon2Ask::
# 1306 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 1307 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Vamos juntos a por todas!$"
# 1308 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1309 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyAccept::
# 1310 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Sí!\n"
# 1311 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos ahora mismo!$"
# 1312 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1313 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyReject::
# 1314 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Creo que vas a echar de menos a mis\n"
# 1315 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "POKéMON antes de lo que piensas!$"
# 1316 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1317 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyIntro::
# 1318 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola!\n"
# 1319 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy la DAMA PARASOL {STR_VAR_1}!$"
# 1320 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1321 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon1::
# 1322 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Haciéndome compañía están un\n"
# 1323 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} que usa {STR_VAR_1} y$"
# 1324 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1325 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon2Ask::
# 1326 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} que usa {STR_VAR_1}.\p"
# 1327 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿A que son preciosos?\n"
# 1328 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Desearías ir de la mano conmigo?$"
# 1329 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1330 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyAccept::
# 1331 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Sabia decisión!\p"
# 1332 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Voy en volandas a registrarnos.\n"
# 1333 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Esperemos no fallarnos mutuamente!$"
# 1334 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1335 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyReject::
# 1336 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mis POKéMON no son sólo hermosos,\n"
# 1337 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "también son fuertes. ¡Ignorante!…$"
# 1338 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1339 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacIntro::
# 1340 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hola. Soy {STR_VAR_1},\n"
# 1341 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡un auténtico BICHOMANÍACO!$"
# 1342 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1343 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon1::
# 1344 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ya tengo mis POKéMON, sí.\n"
# 1345 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Un {STR_VAR_2} con {STR_VAR_1} y$"
# 1346 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1347 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon2Ask::
# 1348 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}:\n"
# 1349 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "no hay nada mejor allá donde busques.\p"
# 1350 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Vas a aprovechar esta oportunidad\n"
# 1351 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "única que te doy de combatir conmigo?$"
# 1352 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1353 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacAccept::
# 1354 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Genial!\n"
# 1355 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Comprendido!\p"
# 1356 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡No tardaré en registrarnos!$"
# 1357 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1358 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacReject::
# 1359 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Con los POKéMON que he encontrado,\n"
# 1360 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "no perderíamos nunca…$"
# 1361 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1362 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorIntro::
# 1363 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Echa el ancla!\n"
# 1364 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy el MARINERO {STR_VAR_1}!$"
# 1365 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1366 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon1::
# 1367 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Déjame mostrarte mi mercancía!\n"
# 1368 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Un {STR_VAR_2} con {STR_VAR_1} y$"
# 1369 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1370 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon2Ask::
# 1371 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\p"
# 1372 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Zarpamos juntos hacia la victoria?$"
# 1373 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1374 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorAccept::
# 1375 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Bien dicho!\n"
# 1376 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy ahora mismo a registrarnos!$"
# 1377 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1378 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorReject::
# 1379 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Has tirado por la borda una\n"
# 1380 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "buena oportunidad, ¡no lo olvides!$"
# 1381 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1382 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorIntro::
# 1383 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hola, me llamo {STR_VAR_1}.\n"
# 1384 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy un POKéCOLECTOR.$"
# 1385 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1386 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon1::
# 1387 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Las joyas de mi colección son\n"
# 1388 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mi {STR_VAR_2} con {STR_VAR_1} y$"
# 1389 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1390 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon2Ask::
# 1391 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mi {STR_VAR_2} con {STR_VAR_1}.\p"
# 1392 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Brillantes, eh?\n"
# 1393 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Deberíamos formar un equipo.$"
# 1394 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1395 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorAccept::
# 1396 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Maravilloso!\p"
# 1397 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Venga, no perdamos tiempo.\n"
# 1398 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Voy a registrarnos.$"
# 1399 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1400 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorReject::
# 1401 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Pues que sepas que has perdido\n"
# 1402 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "una ocasión de oro.$"
# 1403 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1404 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMIntro::
# 1405 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Choca ésa! ¡Me llamo {STR_VAR_1}!\n"
# 1406 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy un POKéGUARDA.$"
# 1407 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1408 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon1::
# 1409 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Tengo a mi cargo un\n"
# 1410 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} que usa {STR_VAR_1} y$"
# 1411 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1412 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon2Ask::
# 1413 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 1414 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Por poco que tengas tú, seguro\n"
# 1415 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "que podemos hacer un buen equipo.$"
# 1416 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1417 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMAccept::
# 1418 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Así se habla!\n"
# 1419 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Déjame encargarme del registro!$"
# 1420 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1421 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMReject::
# 1422 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "La próxima vez no te equivoques.\n"
# 1423 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Elige a mis POKéMON, ¿vale?$"
# 1424 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1425 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFIntro::
# 1426 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me llamo {STR_VAR_1}.\n"
# 1427 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy una POKéGUARDA!$"
# 1428 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1429 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon1::
# 1430 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Te resumo brevemente mi equipo:\n"
# 1431 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡un {STR_VAR_2} con {STR_VAR_1} y$"
# 1432 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1433 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon2Ask::
# 1434 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\p"
# 1435 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Quieres hacer piña conmigo?$"
# 1436 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1437 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFAccept::
# 1438 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Nos vamos a salir, ya verás!\n"
# 1439 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Yo me encargo de registrarnos!$"
# 1440 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1441 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFReject::
# 1442 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Espero que la próxima vez elijas\n"
# 1443 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mis POKéMON, se lo merecen.$"
# 1444 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1445 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyIntro::
# 1446 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Encantada. Soy {STR_VAR_1}.\n"
# 1447 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy una SRTA. AROMA, a mucha honra.$"
# 1448 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1449 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon1::
# 1450 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Siempre viajo con mi {STR_VAR_2},\n"
# 1451 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "que usa {STR_VAR_1}, y con$"
# 1452 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1453 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon2Ask::
# 1454 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mi {STR_VAR_2}, que usa {STR_VAR_1}.\p"
# 1455 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Espero que sean de tu agrado.\n"
# 1456 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Y si formamos pareja?$"
# 1457 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1458 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyAccept::
# 1459 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me halaga tu elección.\n"
# 1460 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Tardaré sólo un minuto en registrarnos.$"
# 1461 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1462 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyReject::
# 1463 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sería estupendo que cambiases\n"
# 1464 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "de opinión para la próxima vez.$"
# 1465 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1466 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacIntro::
# 1467 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Sabes quién soy yo?\n"
# 1468 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy {STR_VAR_1}, ¡un RUINAMANÍACO!$"
# 1469 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1470 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon1::
# 1471 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Los POKéMON que tengo ahora son\n"
# 1472 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1} y$"
# 1473 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1474 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon2Ask::
# 1475 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 1476 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Intrigante, ¿verdad?\n"
# 1477 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Conquistamos juntos esta torre?$"
# 1478 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1479 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacAccept::
# 1480 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Bien! ¡Alea jacta est!\n"
# 1481 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yo me ocupo de los papeles.$"
# 1482 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1483 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacReject::
# 1484 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Habríamos hecho un equipo cuya fama\n"
# 1485 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "perduraría por los siglos de los siglos.$"
# 1486 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1487 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMIntro::
# 1488 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_1}, un ENTRENADOR GUAY!$"
# 1489 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1490 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon1::
# 1491 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Los POKéMON que tengo ahora a mi cargo\n"
# 1492 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "son un {STR_VAR_2} con {STR_VAR_1} y$"
# 1493 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1494 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon2Ask::
# 1495 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\n"
# 1496 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Molan, eh?\p"
# 1497 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Creo que, si formamos un equipo,\n"
# 1498 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "seremos la envidia de todos.$"
# 1499 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1500 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMAccept::
# 1501 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Guay!\n"
# 1502 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy pitando a hacer el papeleo!$"
# 1503 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1504 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMReject::
# 1505 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mis POKéMON te habrían flipado…$"
# 1506 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1507 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFIntro::
# 1508 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola, me llamo {STR_VAR_1}!\n"
# 1509 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy una ENTRENADORA GUAY!$"
# 1510 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1511 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon1::
# 1512 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "El equipo que estoy formando tiene\n"
# 1513 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1} y$"
# 1514 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1515 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon2Ask::
# 1516 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 1517 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "No te quejarás, ¿verdad?\n"
# 1518 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿A que quieres combatir a mi lado?$"
# 1519 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1520 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFAccept::
# 1521 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Bien por ese espíritu ganador!\n"
# 1522 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Voy a apuntarnos.$"
# 1523 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1524 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFReject::
# 1525 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Jamás creí que me rechazarías…$"
# 1526 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1527 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacIntro::
# 1528 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Buenas!\n"
# 1529 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_1}, un POKéMANÍACO!$"
# 1530 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1531 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon1::
# 1532 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Estoy encantado con mi\n"
# 1533 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} con {STR_VAR_1} y con$"
# 1534 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1535 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon2Ask::
# 1536 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mi {STR_VAR_2} con {STR_VAR_1}!\p"
# 1537 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Venga, vamos!\n"
# 1538 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Vamos a hacer un equipo juntos!$"
# 1539 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1540 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacAccept::
# 1541 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Bien dicho!\n"
# 1542 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy volando a registrarnos!$"
# 1543 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1544 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacReject::
# 1545 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Mis POKéMON son los mejores!\n"
# 1546 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡No me digas que no te avisé!$"
# 1547 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1548 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerIntro::
# 1549 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Eh, hooola!\n"
# 1550 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy el FOGONERO {STR_VAR_1}!$"
# 1551 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1552 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon1::
# 1553 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Tengo una receta infalible para ganar:\n"
# 1554 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡un {STR_VAR_2} con {STR_VAR_1} y$"
# 1555 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1556 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon2Ask::
# 1557 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\p"
# 1558 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Qué me dices?\n"
# 1559 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Formamos una piña?$"
# 1560 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1561 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerAccept::
# 1562 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Vamos a darnos una panzada de ganar!\n"
# 1563 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Yo me encargo de registrarnos!$"
# 1564 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1565 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerReject::
# 1566 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Espero que cambies de opinión\n"
# 1567 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "la próxima vez que nos veamos.$"
# 1568 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1569 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperIntro::
# 1570 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_1}, un CAMPISTA!$"
# 1571 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1572 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon1::
# 1573 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "He estado entrenando un {STR_VAR_2}\n"
# 1574 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "que usa {STR_VAR_1} y un$"
# 1575 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1576 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon2Ask::
# 1577 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} que usa {STR_VAR_1}.\p"
# 1578 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Te apetece que salgamos\n"
# 1579 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "juntos al campo de batalla?$"
# 1580 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1581 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperAccept::
# 1582 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Bravo!\n"
# 1583 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy corriendo a registrarnos!$"
# 1584 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1585 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperReject::
# 1586 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bueno, quizás la próxima vez, ¿vale?\n"
# 1587 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Estoy deseando combatir junto a ti.$"
# 1588 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1589 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerIntro::
# 1590 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola! ¡Me llamo {STR_VAR_1}, y confieso\n"
# 1591 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "que soy una auténtica DOMINGUERA!$"
# 1592 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1593 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon1::
# 1594 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Los POKéMON que llevo son\n"
# 1595 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1} y$"
# 1596 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1597 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon2Ask::
# 1598 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 1599 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Te interesa formar\n"
# 1600 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un equipo conmigo?$"
# 1601 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1602 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerAccept::
# 1603 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿En serio? ¡Genial!\n"
# 1604 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Yo me encargo de los papeles!$"
# 1605 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1606 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerReject::
# 1607 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bueno, no pierdo la esperanza.\n"
# 1608 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Quizás la próxima vez.$"
# 1609 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1610 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMIntro::
# 1611 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_1}, un MÉDIUM!$"
# 1612 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1613 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon1::
# 1614 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "He establecido contacto con\n"
# 1615 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} que usa {STR_VAR_1} y$"
# 1616 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1617 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon2Ask::
# 1618 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} que usa {STR_VAR_1}.\p"
# 1619 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Quieres formar un vínculo conmigo\n"
# 1620 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "para combatir juntos en el “más aquí”?$"
# 1621 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1622 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMAccept::
# 1623 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Lo sabía antes de que lo dijeses!\n"
# 1624 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos!$"
# 1625 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1626 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMReject::
# 1627 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Vaya, no me lo esperaba.\n"
# 1628 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me han fallado mis dotes adivinatorias.$"
# 1629 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1630 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFIntro::
# 1631 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_1}, una MÉDIUM!$"
# 1632 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1633 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon1::
# 1634 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Un {STR_VAR_2} con {STR_VAR_1} y$"
# 1635 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1636 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon2Ask::
# 1637 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}:\n"
# 1638 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ésos son mis dos discípulos.\p"
# 1639 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Quieres combatir junto a mí?$"
# 1640 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1641 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFAccept::
# 1642 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Así sea, pues!\n"
# 1643 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos!$"
# 1644 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1645 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFReject::
# 1646 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Quizás haya otra ocasión\n"
# 1647 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "para unir nuestras fuerzas.$"
# 1648 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1649 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFIntro::
# 1650 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy {STR_VAR_1}, una ESCOLAR!$"
# 1651 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1652 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon1::
# 1653 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Un {STR_VAR_2} que usa {STR_VAR_1}$"
# 1654 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1655 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon2Ask::
# 1656 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y un {STR_VAR_2} que usa {STR_VAR_1}:\n"
# 1657 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ésos son mis dos POKéMON.\p"
# 1658 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Quieres combatir a mi lado\n"
# 1659 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "a ver hasta dónde llegamos?$"
# 1660 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1661 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFAccept::
# 1662 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Ooh, muchas gracias!\n"
# 1663 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos ahora mismo!$"
# 1664 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1665 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFReject::
# 1666 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Me dejarás combatir junto a ti\n"
# 1667 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "la próxima vez? Anda, porfa…$"
# 1668 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1669 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFIntro::
# 1670 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Eh! ¡Me llamo {STR_VAR_1}!\n"
# 1671 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy una CRIAPOKéMON!$"
# 1672 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1673 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon1::
# 1674 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Los POKéMON que he criado son\n"
# 1675 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} que usa {STR_VAR_1} y$"
# 1676 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1677 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon2Ask::
# 1678 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} que usa {STR_VAR_1}.\p"
# 1679 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Suena interesante?\n"
# 1680 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Pues ¿por qué no unimos fuerzas?$"
# 1681 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1682 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFAccept::
# 1683 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Qué genial!\n"
# 1684 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Deja de mi cuenta lo de registrarnos!$"
# 1685 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1686 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFReject::
# 1687 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Pero, entonces, cuento contigo\n"
# 1688 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "para la próxima vez, ¿de acuerdo?$"
# 1689 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1690 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFIntro::
# 1691 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy {STR_VAR_1}, y puedo decir con\n"
# 1692 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "orgullo que soy una POKéFAN.$"
# 1693 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1694 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon1::
# 1695 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Estoy enamorada de mis dos POKéMON:\n"
# 1696 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1} y$"
# 1697 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1698 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon2Ask::
# 1699 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}.\p"
# 1700 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿A que son dos auténticas monadas?\n"
# 1701 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Tú y yo tenemos que hacer un equipo!$"
# 1702 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1703 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFAccept::
# 1704 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Qué estupendísimo!\n"
# 1705 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy a registrarnos en un plis!$"
# 1706 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1707 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFReject::
# 1708 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Cómo te atreves a hacerles ese feo\n"
# 1709 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "a mis POKéMON? ¡No tienes perdón!$"
# 1710 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1711 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFIntro::
# 1712 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hola, soy la NADADORA {STR_VAR_1}.$"
# 1713 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1714 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon1::
# 1715 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Un {STR_VAR_2} que usa {STR_VAR_1}$"
# 1716 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1717 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon2Ask::
# 1718 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "y un {STR_VAR_2} que usa {STR_VAR_1}:\n"
# 1719 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ésos son los POKéMON que entreno.\p"
# 1720 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Nos lanzamos a la piscina?\n"
# 1721 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Podemos ser la bomba!$"
# 1722 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1723 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFAccept::
# 1724 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡De cabeza, eso es!\n"
# 1725 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Voy corriendo a hacer el papeleo!$"
# 1726 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1727 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFReject::
# 1728 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Menudo jarro de agua fría!\n"
# 1729 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Bueno, la próxima vez, entonces!$"
# 1730 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1731 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMIntro::
# 1732 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Qué tal?\n"
# 1733 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy {STR_VAR_1}, un TRIATLETA.$"
# 1734 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1735 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon1::
# 1736 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Tengo un par de POKéMON decentes.\n"
# 1737 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Un {STR_VAR_2} con {STR_VAR_1} y$"
# 1738 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1739 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon2Ask::
# 1740 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\p"
# 1741 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Me encantaría formar un equipo\n"
# 1742 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "contigo! ¿Qué me dices?$"
# 1743 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1744 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMAccept::
# 1745 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Estupendo!\n"
# 1746 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Voy a registrarnos, ¿vale?$"
# 1747 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1748 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMReject::
# 1749 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Espero que cambies de opinión\n"
# 1750 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "la próxima vez que nos veamos.$"
# 1751 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1752 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFIntro::
# 1753 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Soy la TRIATLETA {STR_VAR_1}!$"
# 1754 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1755 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon1::
# 1756 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Un {STR_VAR_2} con {STR_VAR_1} y$"
# 1757 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1758 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon2Ask::
# 1759 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "otro {STR_VAR_2} que sabe usar\n"
# 1760 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}. Ésa es mi pareja.\p"
# 1761 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "No está nada mal, ¿eh?\n"
# 1762 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Haríamos un buen equipo, ¿qué me dices?$"
# 1763 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1764 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFAccept::
# 1765 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Ésa es la respuesta que esperaba!\n"
# 1766 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Un segundo, que voy a registrarnos!$"
# 1767 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1768 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFReject::
# 1769 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bueno, espero que la próxima vez\n"
# 1770 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "me des una oportunidad.$"
# 1771 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1772 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMIntro::
# 1773 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Hola! ¿Cómo te va?\n"
# 1774 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Soy {STR_VAR_1}, y soy un NADADOR.$"
# 1775 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1776 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon1::
# 1777 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Alucina con lo que tengo!\n"
# 1778 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Un {STR_VAR_2} con {STR_VAR_1} y$"
# 1779 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1780 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon2Ask::
# 1781 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "un {STR_VAR_2} con {STR_VAR_1}!\p"
# 1782 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¿Una pareja guapa, eh?\n"
# 1783 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Estamos listos para formar equipo!$"
# 1784 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1785 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMAccept::
# 1786 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Menuda oportunidad!\n"
# 1787 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "¡Gracias, voy a registrarnos!$"
# 1788 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1789 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMReject::
# 1790 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Si nos volvemos a ver,\n"
# 1791 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "vas a decir que sí, ¿verdad?$"
