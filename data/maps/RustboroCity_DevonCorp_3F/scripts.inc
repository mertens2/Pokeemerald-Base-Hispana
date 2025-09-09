# 1 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_MapScripts::
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_OnWarp
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_OnFrame
# 6 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.byte 0
# 7 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 8 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnTransition:
# 9 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call_if_eq VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos
# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 12 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos::
# 13 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_CORP_3F_EMPLOYEE, 3, 2
# 14 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_CORP_3F_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	return
# 16 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 17 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnWarp:
# 18 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast
# 19 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 20 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast::
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnFrame:
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_Unused:
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 106 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 117 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 118 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 123 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
# 127 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 134 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 138 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 139 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 140 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 145 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 152 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 162 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
# 163 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
# 168 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 171 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 177 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 178 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee::
# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
# 192 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 195 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Soy el SR. PEÑAS, el PRESIDENTE\n"
# 201 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "de DEVON S.A.\p"
# 202 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¿Puedo hablar contigo un segundo?\p"
# 203 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Nos has salvado no sólo una vez,\n"
# 204 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¡sino dos veces!\p"
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Eres una persona asombrosa…\n"
# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "y quisiera pedirte un favor.\p"
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Tengo entendido que vas a llevar\n"
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "un paquete a los ASTILLEROS\l"
# 209 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "que hay en CIUDAD PORTUAL.\p"
# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¿Podrías parar de camino un\n"
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "segundo en PUEBLO AZULIZA?\p"
# 212 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Te agradecería que le entregaras\n"
# 213 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "una CARTA a MÁXIMO en AZULIZA.$"
# 214 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 215 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis:
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "SR. PEÑAS: No sé si lo sabrás,\n"
# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "pero soy un gran PRESIDENTE.\p"
# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Nunca me he aprovechado de nadie\n"
# 219 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "y siempre devuelvo los favores.\p"
# 220 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¡Por eso quiero darte esto!$"
# 221 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
# 223 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} recibió un POKéNAV.$"
# 224 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 225 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "SR. PEÑAS: Este dispositivo es…\p"
# 227 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¡un POKéNAVEGADOR!\n"
# 228 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "POKéNAV, para abreviar…\p"
# 229 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Se trata de una herramienta esencial\n"
# 230 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "para todo ENTRENADOR aventurero.\p"
# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Incluye un mapa de la región de HOENN.\p"
# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Puedes consultar las ubicaciones\n"
# 233 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "de AZULIZA y CIUDAD PORTUAL\l"
# 234 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "en un abrir y cerrar de ojos.\p"
# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Por cierto, he oído que esos siniestros\n"
# 236 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "delincuentes, creo que se llaman MAGMA\l"
# 237 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "y AQUA, no paran de dar problemas.\p"
# 238 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Me parece que sería buena idea\n"
# 239 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "que descansaras antes de seguir.$"
# 240 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 241 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "SR. PEÑAS: En fin, {PLAYER}{KUN},\n"
# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "ve con cuidado.$"
# 244 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_CountingOnYou:
# 246 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "SR. PEÑAS: ¡Cuento contigo!$"
# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 248 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "SR. PEÑAS: ¿Has entregado mi CARTA?\n"
# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¡Muchas gracias!\p"
# 251 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Y también quiero agradecértelo así.\n"
# 252 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Como entrenas POKéMON, te vendrá bien.$"
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 254 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
# 255 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "SR. PEÑAS: Si un POKéMON tiene\n"
# 256 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "REPARTIR EXP, obtendrá algunos de los\l"
# 257 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "puntos de EXPERIENCIA del combate…\p"
# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¡Aunque no haya combatido!\p"
# 259 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "REPARTIR EXP es de lo más\n"
# 260 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "útil para fortalecer POKéMON débiles.$"
# 261 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 262 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
# 263 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "SR. PEÑAS: Desde que era un chaval,\n"
# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "siempre he trabajado de sol a sol.\p"
# 265 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Eso no me ha dejado mucho tiempo\n"
# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "para estar al tanto de las modas.\p"
# 267 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¿Todos los jóvenes de ahora quieren\n"
# 268 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "ser ENTRENADORES en la LIGA POKéMON?$"
# 269 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
# 271 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Éste es el segundo piso de DEVON S.A.\p"
# 272 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Aquí está el DESPACHO de nuestro\n"
# 273 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "PRESIDENTE.\p"
# 274 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Bueno, sólo quería decirte cuánto\n"
# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "aprecio lo que has hecho.\p"
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Eh… Por cierto… Ese paquete que\n"
# 277 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "nos has devuelto…\p"
# 278 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¿Podrías llevarlo a los ASTILLEROS\n"
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "de CIUDAD PORTUAL?\p"
# 280 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Sería horrible que nos lo volvieran\n"
# 281 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a robar…\p"
# 282 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Así que, ejem, ¿puedo contar contigo\n"
# 283 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "para que te ocupes de eso?\p"
# 284 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¡Qué bien!\n"
# 285 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¿Puedes esperar un segundo aquí?$"
# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 287 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
# 288 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Nuestro PRESIDENTE querría hablar\n"
# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "un momento contigo.\p"
# 290 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Acompáñame, por favor.$"
# 291 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 292 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
# 293 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Aquí es. Adelante.$"
# 294 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 295 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Si vas a los ASTILLEROS\n"
# 297 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "de CIUDAD PORTUAL, no olvides visitar\l"
# 298 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "al CAPITÁN BABOR.$"
# 299 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 300 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
# 301 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Los nuevos productos de DEVON, la\n"
# 302 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "ACOPIO BALL y la TURNO BALL, están\l"
# 303 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "haciendo furor entre los ENTRENADORES.$"
# 304 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 305 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
# 306 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Se trata de una colección de libros\n"
# 307 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "raros y rocas poco comunes\l"
# 308 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "que ha reunido el PRESIDENTE.$"
