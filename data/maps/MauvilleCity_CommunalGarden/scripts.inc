MauvilleCity_CommunalGarden_MapScripts::
	.byte 0


MauvilleCity_CommunalGarden_Scripts_Ranger1::
# 5 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	lockall
# 6 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	faceplayer
# 7 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	msgbox MauvilleCity_CommunalGarden_Text_Ranger1
# 8 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	closemessage
# 9 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	applymovement 1, MauvilleCity_CommunalGarden_Movement_ExcitedRanger
# 10 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	waitmovement 0
# 11 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	releaseall
	return


MauvilleCity_CommunalGarden_Scripts_Ranger2::
# 15 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	lockall
# 16 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	msgbox MauvilleCity_CommunalGarden_Text_Ranger2
# 17 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	closemessage
# 18 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	applymovement 1, MauvilleCity_CommunalGarden_Movement_ExcitedRanger
# 19 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	msgbox MauvilleCity_CommunalGarden_Text_Ranger1No
# 20 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	closemessage
# 21 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	releaseall
	return


MauvilleCity_CommunalGarden_Scripts_OldWoman::
# 25 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	lockall
# 26 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	faceplayer
# 27 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	msgbox MauvilleCity_CommunalGarden_Text_OldWoman
# 28 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	closemessage
# 29 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	releaseall
	return


MauvilleCity_CommunalGarden_Scripts_Boy::
# 33 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	lockall
# 34 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	faceplayer
# 35 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	msgbox MauvilleCity_CommunalGarden_Text_Boy
# 36 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	closemessage
# 37 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	releaseall
	return


MauvilleCity_CommunalGarden_Scripts_Man::
# 41 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	lockall
# 42 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	faceplayer
# 43 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	msgbox MauvilleCity_CommunalGarden_Text_Man
# 44 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	closemessage
# 45 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	releaseall
	return


MauvilleCity_CommunalGarden_Scripts_Woman::
# 49 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	lockall
# 50 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	faceplayer
# 51 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	msgbox MauvilleCity_CommunalGarden_Text_Woman
# 52 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	closemessage
# 53 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	releaseall
	return


MauvilleCity_CommunalGarden_Scripts_Pokemon::
# 57 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	lockall
# 58 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	faceplayer
# 59 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	msgbox MauvilleCity_CommunalGarden_Text_Pokemon
# 60 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	closemessage
# 61 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	releaseall
	return


MauvilleCity_CommunalGarden_Scripts_BlackBelt::
# 65 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	lockall
# 66 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	faceplayer
# 67 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	msgbox MauvilleCity_CommunalGarden_Text_BlackBeltWannaSee, MSGBOX_YESNO
# 68 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_CommunalGarden_Scripts_BlackBelt_2
MauvilleCity_CommunalGarden_Scripts_BlackBelt_1:
# 100 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	closemessage
# 101 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	releaseall
	return

MauvilleCity_CommunalGarden_Scripts_BlackBelt_2:
# 69 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	closemessage
# 70 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_RESULT
# 71 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MauvilleCity_CommunalGarden_Scripts_BlackBelt_5
# 77 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	applymovement VAR_LAST_TALKED, MauvilleCity_CommunalGarden_Movement_BlackBeltHelpFront
# 78 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_CommunalGarden_Movement_GetOnBlackBeltFront
# 79 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
MauvilleCity_CommunalGarden_Scripts_BlackBelt_4:
# 81 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	special SpawnCameraObject
# 82 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	applymovement LOCALID_CAMERA, MauvilleCity_CommunalGarden_Movement_CameraUp
# 83 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	waitmovement 0
# 84 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	special RemoveCameraObject
	msgbox MauvilleCity_CommunalGarden_Text_BlackBeltYouDone, MSGBOX_YESNO
# 0 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne MauvilleCity_CommunalGarden_Scripts_BlackBelt_9
MauvilleCity_CommunalGarden_Scripts_BlackBelt_8:
# 91 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	applymovement VAR_LAST_TALKED, MauvilleCity_CommunalGarden_Movement_BlackBeltHelpDown
# 92 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_CommunalGarden_Movement_GetOffBlackBelt
# 93 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 94 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	special SpawnCameraObject
# 95 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	applymovement LOCALID_CAMERA, MauvilleCity_CommunalGarden_Movement_CameraDown
# 96 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	waitmovement 0
# 97 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	special RemoveCameraObject
# 98 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	msgbox MauvilleCity_CommunalGarden_Text_BlackBeltFun
	goto MauvilleCity_CommunalGarden_Scripts_BlackBelt_1

MauvilleCity_CommunalGarden_Scripts_BlackBelt_5:
# 72 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	applymovement VAR_LAST_TALKED, MauvilleCity_CommunalGarden_Movement_BlackBeltHelpSide
# 73 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_CommunalGarden_Movement_GetOnBlackBeltBySide
# 74 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MauvilleCity_CommunalGarden_Scripts_BlackBelt_4

MauvilleCity_CommunalGarden_Scripts_BlackBelt_9:
MauvilleCity_CommunalGarden_Scripts_BlackBelt_12:
# 87 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	closemessage
# 88 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	delay 64
	msgbox MauvilleCity_CommunalGarden_Text_BlackBeltYouSure, MSGBOX_YESNO
# 0 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_CommunalGarden_Scripts_BlackBelt_12
	goto MauvilleCity_CommunalGarden_Scripts_BlackBelt_8


# 104 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
MauvilleCity_CommunalGarden_Movement_ExcitedRanger:
# 105 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	jump_in_place_down
	step_end

# 108 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
MauvilleCity_CommunalGarden_Movement_CameraUp:
# 109 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_slow_up
# 109 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_slow_up
# 109 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_slow_up
	step_end

# 112 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
MauvilleCity_CommunalGarden_Movement_CameraDown:
# 113 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_slow_down
# 113 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_slow_down
# 113 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_slow_down
	step_end

# 116 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
MauvilleCity_CommunalGarden_Movement_GetOnBlackBeltBySide:
# 117 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_right
# 118 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_right
# 119 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_up
# 120 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_slow_up
# 121 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_up
	step_end

# 124 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
MauvilleCity_CommunalGarden_Movement_GetOffBlackBelt:
# 125 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_up
# 126 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_down
# 127 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_slow_down
# 127 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_slow_down
	step_end

# 130 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
MauvilleCity_CommunalGarden_Movement_BlackBeltHelpSide:
# 131 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_left
# 131 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_left
# 131 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_left
# 132 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_up
# 132 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_up
# 132 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_up
	step_end

# 135 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
MauvilleCity_CommunalGarden_Movement_BlackBeltHelpDown:
# 136 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_up
# 137 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_down
# 137 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_down
# 137 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_down
	step_end

# 141 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
MauvilleCity_CommunalGarden_Movement_BlackBeltHelpFront:
# 142 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_down
# 142 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_down
# 142 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_down
# 143 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_up
# 143 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_up
# 143 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_up
	step_end

# 146 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
MauvilleCity_CommunalGarden_Movement_GetOnBlackBeltFront:
# 147 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_up
# 148 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_slow_up
# 148 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_slow_up
# 149 "data/maps/MauvilleCity_CommunalGarden/scripts.pory"
	walk_in_place_slow_up
	step_end
