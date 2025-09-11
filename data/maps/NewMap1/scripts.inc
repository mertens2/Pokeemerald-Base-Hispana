# 1 "data/maps/NewMap1/scripts.pory"

# 2 "data/maps/NewMap1/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/NewMap1/scripts.pory"

# 4 "data/maps/NewMap1/scripts.pory"
NewMap1_MapScripts::
# 5 "data/maps/NewMap1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMap1_OnTransition
# 6 "data/maps/NewMap1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewMap1_OnFrame
# 7 "data/maps/NewMap1/scripts.pory"
	.byte 0
# 8 "data/maps/NewMap1/scripts.pory"

# 9 "data/maps/NewMap1/scripts.pory"
NewMap1_OnFrame:
# 10 "data/maps/NewMap1/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 2, NewMap1_EventScript_EnterSafariZone
# 11 "data/maps/NewMap1/scripts.pory"
	.2byte 0
# 12 "data/maps/NewMap1/scripts.pory"

# 13 "data/maps/NewMap1/scripts.pory"
NewMap1_EventScript_EnterSafariZone::
# 14 "data/maps/NewMap1/scripts.pory"
	lockall
# 15 "data/maps/NewMap1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap1_Movement_PlayerEnter
# 16 "data/maps/NewMap1/scripts.pory"
	waitmovement 0
# 17 "data/maps/NewMap1/scripts.pory"
	applymovement LOCALID_ATTENDANT, NewMap1_Movement_ExitAttendantBlockDoor
# 18 "data/maps/NewMap1/scripts.pory"
	waitmovement 0
# 19 "data/maps/NewMap1/scripts.pory"
	setobjectxyperm LOCALID_ATTENDANT, 44, 34
# 20 "data/maps/NewMap1/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 4
# 21 "data/maps/NewMap1/scripts.pory"
	releaseall
# 22 "data/maps/NewMap1/scripts.pory"
	end
# 23 "data/maps/NewMap1/scripts.pory"

# 24 "data/maps/NewMap1/scripts.pory"
NewMap1_OnTransition:
# 25 "data/maps/NewMap1/scripts.pory"
	call_if_eq VAR_SAFARI_ZONE_STATE, 2, NewMap1_EventScript_SetExitAttendantAside
# 26 "data/maps/NewMap1/scripts.pory"
	end
# 27 "data/maps/NewMap1/scripts.pory"

# 28 "data/maps/NewMap1/scripts.pory"
NewMap1_EventScript_SetExitAttendantAside::
# 29 "data/maps/NewMap1/scripts.pory"
	setobjectxyperm LOCALID_ATTENDANT, 44, 34
# 30 "data/maps/NewMap1/scripts.pory"
	return
# 31 "data/maps/NewMap1/scripts.pory"

# 32 "data/maps/NewMap1/scripts.pory"
NewMap1_Movement_PlayerEnter:
# 33 "data/maps/NewMap1/scripts.pory"
	walk_down
# 34 "data/maps/NewMap1/scripts.pory"
	step_end
# 35 "data/maps/NewMap1/scripts.pory"

# 36 "data/maps/NewMap1/scripts.pory"
NewMap1_Movement_ExitAttendantBlockDoor:
# 37 "data/maps/NewMap1/scripts.pory"
	walk_right
# 38 "data/maps/NewMap1/scripts.pory"
	walk_in_place_faster_down
# 39 "data/maps/NewMap1/scripts.pory"
	step_end
# 40 "data/maps/NewMap1/scripts.pory"

# 41 "data/maps/NewMap1/scripts.pory"
NewMap1_EventScript_ExitAttendant::
# 42 "data/maps/NewMap1/scripts.pory"
	lock
# 43 "data/maps/NewMap1/scripts.pory"
	faceplayer
# 44 "data/maps/NewMap1/scripts.pory"
	goto_if_unset FLAG_GOOD_LUCK_SAFARI_ZONE, NewMap1_EventScript_GoodLuck
# 45 "data/maps/NewMap1/scripts.pory"
	msgbox SafariZone_South_Text_StillHaveTimeExit, MSGBOX_YESNO
# 46 "data/maps/NewMap1/scripts.pory"
	goto_if_eq VAR_RESULT, YES, NewMap1_EventScript_ExitEarly
# 47 "data/maps/NewMap1/scripts.pory"
	msgbox SafariZone_South_Text_EnjoyTheRestOfYourAdventure, MSGBOX_DEFAULT
# 48 "data/maps/NewMap1/scripts.pory"
	release
# 49 "data/maps/NewMap1/scripts.pory"
	end
# 50 "data/maps/NewMap1/scripts.pory"

# 51 "data/maps/NewMap1/scripts.pory"
NewMap1_EventScript_GoodLuck::
# 52 "data/maps/NewMap1/scripts.pory"
	setflag FLAG_GOOD_LUCK_SAFARI_ZONE
# 53 "data/maps/NewMap1/scripts.pory"
	msgbox SafariZone_South_Text_GoodLuck, MSGBOX_DEFAULT
# 54 "data/maps/NewMap1/scripts.pory"
	release
# 55 "data/maps/NewMap1/scripts.pory"
	end
# 56 "data/maps/NewMap1/scripts.pory"

# 57 "data/maps/NewMap1/scripts.pory"
NewMap1_EventScript_ExitEarly::
# 58 "data/maps/NewMap1/scripts.pory"
	msgbox SafariZone_South_Text_ExitEarlyThankYouForPlaying, MSGBOX_DEFAULT
# 59 "data/maps/NewMap1/scripts.pory"
	closemessage
# 60 "data/maps/NewMap1/scripts.pory"
	switch VAR_FACING
# 61 "data/maps/NewMap1/scripts.pory"
	case DIR_NORTH, NewMap1_EventScript_ExitEarlyNorth
# 62 "data/maps/NewMap1/scripts.pory"
	case DIR_EAST, NewMap1_EventScript_ExitEarlyEast
# 63 "data/maps/NewMap1/scripts.pory"
	end
# 64 "data/maps/NewMap1/scripts.pory"

# 65 "data/maps/NewMap1/scripts.pory"
NewMap1_EventScript_ExitEarlyNorth::
# 66 "data/maps/NewMap1/scripts.pory"
	applymovement LOCALID_ATTENDANT, NewMap1_Movement_MoveExitAttendantNorth
# 67 "data/maps/NewMap1/scripts.pory"
	waitmovement 0
# 68 "data/maps/NewMap1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap1_Movement_PlayerExitNorth
# 69 "data/maps/NewMap1/scripts.pory"
	waitmovement 0
# 70 "data/maps/NewMap1/scripts.pory"
	goto NewMap1_EventScript_Exit
# 71 "data/maps/NewMap1/scripts.pory"
	end
# 72 "data/maps/NewMap1/scripts.pory"

# 73 "data/maps/NewMap1/scripts.pory"
NewMap1_EventScript_ExitEarlyEast::
# 74 "data/maps/NewMap1/scripts.pory"
	applymovement LOCALID_ATTENDANT, NewMap1_Movement_MoveExitAttendantEast
# 75 "data/maps/NewMap1/scripts.pory"
	waitmovement 0
# 76 "data/maps/NewMap1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap1_Movement_PlayerExitEast
# 77 "data/maps/NewMap1/scripts.pory"
	waitmovement 0
# 78 "data/maps/NewMap1/scripts.pory"
	goto NewMap1_EventScript_Exit
# 79 "data/maps/NewMap1/scripts.pory"
	end
# 80 "data/maps/NewMap1/scripts.pory"
	
# 81 "data/maps/NewMap1/scripts.pory"
NewMap1_EventScript_OldMan::
# 82 "data/maps/NewMap1/scripts.pory"
	lockall
# 83 "data/maps/NewMap1/scripts.pory"
	faceplayer
# 84 "data/maps/NewMap1/scripts.pory"
	msgbox NewMap1_EventScript_OldMan_Text_0
# 85 "data/maps/NewMap1/scripts.pory"
	releaseall
# 86 "data/maps/NewMap1/scripts.pory"
	return
# 87 "data/maps/NewMap1/scripts.pory"

# 88 "data/maps/NewMap1/scripts.pory"
NewMap1_EventScript_OldMan_Text_0:
# 89 "data/maps/NewMap1/scripts.pory"
	.string "Estoy muy emocionado por probar este\n"
# 90 "data/maps/NewMap1/scripts.pory"
	.string "nuevo Safari.\p"
# 91 "data/maps/NewMap1/scripts.pory"
	.string "Sólo un áera y una cueva pequeña\n"
# 92 "data/maps/NewMap1/scripts.pory"
	.string "suena limitante, pero entiendo porqué\l"
# 93 "data/maps/NewMap1/scripts.pory"
	.string "es así. ¡Espero se expanda en el\l"
# 94 "data/maps/NewMap1/scripts.pory"
	.string "futuro!$"
# 95 "data/maps/NewMap1/scripts.pory"

# 96 "data/maps/NewMap1/scripts.pory"
NewMap1_EventScript_Fisherman::
# 97 "data/maps/NewMap1/scripts.pory"
	lockall
# 98 "data/maps/NewMap1/scripts.pory"
	faceplayer
# 99 "data/maps/NewMap1/scripts.pory"
	msgbox NewMap1_EventScript_Fisherman_Text_0
# 100 "data/maps/NewMap1/scripts.pory"
	releaseall
# 101 "data/maps/NewMap1/scripts.pory"
	return
# 102 "data/maps/NewMap1/scripts.pory"

# 103 "data/maps/NewMap1/scripts.pory"
NewMap1_EventScript_Fisherman_Text_0:
# 104 "data/maps/NewMap1/scripts.pory"
	.string "¡Este lugar es increíble!\p"
# 105 "data/maps/NewMap1/scripts.pory"
	.string "¡Hasta la Caña Vieja saca cosas\n"
# 106 "data/maps/NewMap1/scripts.pory"
	.string "interesantes! ¡Todas las cañas tienen\l"
# 107 "data/maps/NewMap1/scripts.pory"
	.string "algún Pokémon interesante o exclusivo!\p¡Incluso de noche hay nuevos Pokémon!$"
# 108 "data/maps/NewMap1/scripts.pory"

# 109 "data/maps/NewMap1/scripts.pory"
NewMap1_EventScript_Exit::
# 110 "data/maps/NewMap1/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 1
# 111 "data/maps/NewMap1/scripts.pory"
	special ExitSafariMode
# 112 "data/maps/NewMap1/scripts.pory"
	warpdoor MAP_MINI_SAFARI_MIDDLE, 2, 5
# 113 "data/maps/NewMap1/scripts.pory"
	waitstate
# 114 "data/maps/NewMap1/scripts.pory"
	end
# 115 "data/maps/NewMap1/scripts.pory"

# 116 "data/maps/NewMap1/scripts.pory"
NewMap1_Movement_PlayerExitNorth:
# 117 "data/maps/NewMap1/scripts.pory"
	walk_up
# 118 "data/maps/NewMap1/scripts.pory"
	step_end
# 119 "data/maps/NewMap1/scripts.pory"

# 120 "data/maps/NewMap1/scripts.pory"
NewMap1_Movement_PlayerExitEast:
# 121 "data/maps/NewMap1/scripts.pory"
	walk_right
# 122 "data/maps/NewMap1/scripts.pory"
	walk_in_place_faster_up
# 123 "data/maps/NewMap1/scripts.pory"
	step_end
# 124 "data/maps/NewMap1/scripts.pory"

# 125 "data/maps/NewMap1/scripts.pory"
NewMap1_Movement_MoveExitAttendantNorth:
# 126 "data/maps/NewMap1/scripts.pory"
	walk_left
# 127 "data/maps/NewMap1/scripts.pory"
	walk_in_place_faster_right
# 128 "data/maps/NewMap1/scripts.pory"
	step_end
# 129 "data/maps/NewMap1/scripts.pory"

# 130 "data/maps/NewMap1/scripts.pory"
NewMap1_Movement_MoveExitAttendantEast:
# 131 "data/maps/NewMap1/scripts.pory"
	walk_down
# 132 "data/maps/NewMap1/scripts.pory"
	walk_in_place_faster_up
# 133 "data/maps/NewMap1/scripts.pory"
	step_end
