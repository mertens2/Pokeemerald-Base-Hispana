# 1 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 2 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_MapScripts::
# 3 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_PokemonTrainerFanClub_OnFrame
# 4 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonTrainerFanClub_OnTransition
# 5 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 7 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	@ See field_specials.c for a breakdown of the Fan Club and its variables
# 8 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 9 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_OnFrame:
# 10 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script_2 VAR_LILYCOVE_FAN_CLUB_STATE, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
# 11 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.2byte 0
# 12 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 13 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
# 14 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lockall
# 15 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_LASS, Common_Movement_WalkInPlaceFasterDown
# 16 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 17 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OhWowItsPlayer, MSGBOX_DEFAULT
# 18 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlWatchPlayer
# 19 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_MAN, LilycoveCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
# 20 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 21 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 22 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 23 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlMoveCloserToPlayer
# 25 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 26 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 27 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 28 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlHideFromPlayer
# 29 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 30 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_LILYCOVE_FAN_CLUB_STATE, 2
# 31 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	releaseall
# 32 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 33 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 34 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_FanApproachPlayer:
# 35 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 36 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 37 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 38 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 39 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 40 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 41 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 42 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 43 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 44 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlWatchPlayer:
# 45 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 46 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 47 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 48 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 49 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 50 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 51 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 52 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 53 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlMoveCloserToPlayer:
# 54 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 55 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_right
# 56 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 57 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 58 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlHideFromPlayer:
# 59 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	jump_in_place_right
# 60 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 61 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 62 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_right
# 63 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 64 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 65 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 66 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_OnTransition:
# 67 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer
# 68 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_SetFanMemberPositionsForFirstFanMeeting
# 69 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 2, LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
# 70 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 71 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 72 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
# 73 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special TryLoseFansFromPlayTime
# 74 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow
# 75 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 76 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 77 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable
# 78 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 79 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 80 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 81 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 82 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 83 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable
# 84 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 85 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 86 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 87 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 88 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 89 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 90 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 91 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 92 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 93 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 94 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 95 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 96 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 97 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 98 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 99 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 100 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 101 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer::
# 102 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, ShouldHideFanClubInterviewer
# 103 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_HideInterviewer
# 104 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER
# 105 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	clearflag FLAG_FAN_CLUB_STRENGTH_SHARED
# 106 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 107 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 108 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_HideInterviewer::
# 109 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER
# 110 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 111 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 112 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Set up the fan club TV show, if the player has at least 5 fans in the club
# 113 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Rather than counting up, 1 is subtracted from the total for each member not a fan of the players
# 114 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow::
# 115 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8005, NUM_TRAINER_FAN_CLUB_MEMBERS
# 116 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 117 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 118 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 119 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 120 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 121 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 122 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 123 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 124 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 125 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 126 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 127 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 128 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 129 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 130 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 131 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 132 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 133 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 134 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 135 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 136 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 137 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 138 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 139 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 140 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_ge VAR_0x8005, 5, LilycoveCity_PokemonTrainerFanClub_EventScript_TrySetUpTVShow
# 141 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 142 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 143 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan::
# 144 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	subvar VAR_0x8005, 1
# 145 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 146 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 147 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_TrySetUpTVShow::
# 148 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special TryPutTrainerFanClubOnAir
# 149 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 150 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 151 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable::
# 152 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LASS, 7, 5
# 153 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 154 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 155 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable::
# 156 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_POKEFAN_M, 3, 4
# 157 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 158 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 159 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable::
# 160 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, 7, 2
# 161 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 162 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 163 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
# 164 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_NINJA_BOY, 5, 5
# 165 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 166 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 167 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
# 168 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BOY, 5, 2
# 169 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 170 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 171 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
# 172 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_MAN, 8, 4
# 173 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 174 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 175 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
# 176 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_WOMAN, 3, 3
# 177 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 178 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 179 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
# 180 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_EXPERT_F, 8, 3
# 181 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 182 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 183 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_SetFanMemberPositionsForFirstFanMeeting::
# 184 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow
# 185 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 186 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 187 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 188 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 189 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 190 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 191 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 192 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Man::
# 193 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 194 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 195 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 196 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 197 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayerNotChampion
# 198 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 199 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan
# 200 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 201 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyNonFan
# 202 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary, MSGBOX_DEFAULT
# 203 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 204 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 205 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 206 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan::
# 207 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 208 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyFan
# 209 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin, MSGBOX_DEFAULT
# 210 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 211 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 212 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 213 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyFan::
# 214 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest, MSGBOX_DEFAULT
# 215 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 216 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 217 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 218 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyNonFan::
# 219 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen, MSGBOX_DEFAULT
# 220 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 221 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 222 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 223 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayerNotChampion::
# 224 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer, MSGBOX_DEFAULT
# 225 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 226 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 227 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 228 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Lass::
# 229 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 230 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 231 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 232 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 233 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayerNotChampion
# 234 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 235 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan
# 236 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 237 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyNonFan
# 238 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly, MSGBOX_DEFAULT
# 239 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 240 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 241 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 242 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan::
# 243 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 244 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyFan
# 245 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou, MSGBOX_DEFAULT
# 246 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 247 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 248 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 249 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyFan::
# 250 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan, MSGBOX_DEFAULT
# 251 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 252 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 253 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 254 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyNonFan::
# 255 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly, MSGBOX_DEFAULT
# 256 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 257 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 258 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 259 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayerNotChampion::
# 260 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly, MSGBOX_DEFAULT
# 261 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 262 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 263 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 264 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM::
# 265 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 266 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 267 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 268 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 269 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayerNotChampion
# 270 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 271 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan
# 272 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 273 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyNonFan
# 274 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman, MSGBOX_DEFAULT
# 275 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 276 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 277 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 278 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan::
# 279 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 280 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyFan
# 281 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather, MSGBOX_DEFAULT
# 282 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 283 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 284 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 285 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyFan::
# 286 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling, MSGBOX_DEFAULT
# 287 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 288 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 289 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 290 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyNonFan::
# 291 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent, MSGBOX_DEFAULT
# 292 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 293 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 294 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 295 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayerNotChampion::
# 296 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers, MSGBOX_DEFAULT
# 297 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 298 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 299 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 300 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl::
# 301 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 302 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 303 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 304 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 305 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion
# 306 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 307 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan
# 308 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 309 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan
# 310 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool, MSGBOX_DEFAULT
# 311 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 312 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 313 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 314 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan::
# 315 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 316 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan
# 317 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer, MSGBOX_DEFAULT
# 318 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 319 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 320 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 321 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan::
# 322 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou, MSGBOX_DEFAULT
# 323 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 324 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 325 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 326 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan::
# 327 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe, MSGBOX_DEFAULT
# 328 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 329 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 330 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 331 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion::
# 332 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat, MSGBOX_DEFAULT
# 333 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 334 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 335 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 336 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoy::
# 337 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 338 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 339 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 340 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 341 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 342 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan
# 343 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 344 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyNonFan
# 345 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool, MSGBOX_DEFAULT
# 346 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 347 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 348 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 349 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan::
# 350 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 351 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyFan
# 352 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou, MSGBOX_DEFAULT
# 353 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 354 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 355 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 356 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyFan::
# 357 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou, MSGBOX_DEFAULT
# 358 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 359 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 360 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 361 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyNonFan::
# 362 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan, MSGBOX_DEFAULT
# 363 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 364 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 365 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 366 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Boy::
# 367 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 368 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 369 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 370 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 371 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 372 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan
# 373 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 374 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyNonFan
# 375 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne, MSGBOX_DEFAULT
# 376 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 377 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 378 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 379 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan::
# 380 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 381 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyFan
# 382 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll, MSGBOX_DEFAULT
# 383 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 384 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 385 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 386 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyFan::
# 387 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner, MSGBOX_DEFAULT
# 388 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 389 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 390 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 391 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyNonFan::
# 392 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer, MSGBOX_DEFAULT
# 393 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 394 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 395 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 396 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Woman::
# 397 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 398 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 399 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 400 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 401 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 402 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan
# 403 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 404 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan
# 405 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout, MSGBOX_DEFAULT
# 406 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 407 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 408 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 409 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan::
# 410 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 411 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan
# 412 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind, MSGBOX_DEFAULT
# 413 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 414 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 415 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 416 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan::
# 417 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation, MSGBOX_DEFAULT
# 418 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 419 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 420 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 421 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan::
# 422 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger, MSGBOX_DEFAULT
# 423 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 424 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 425 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 426 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertF::
# 427 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 428 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 429 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 430 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 431 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 432 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan
# 433 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 434 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyNonFan
# 435 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential, MSGBOX_DEFAULT
# 436 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 437 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 438 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 439 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan::
# 440 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 441 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyFan
# 442 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive, MSGBOX_DEFAULT
# 443 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 444 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 445 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 446 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyFan::
# 447 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth, MSGBOX_DEFAULT
# 448 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 449 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 450 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 451 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyNonFan::
# 452 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength, MSGBOX_DEFAULT
# 453 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 454 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 455 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 456 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer::
# 457 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 458 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 459 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_set FLAG_FAN_CLUB_STRENGTH_SHARED, LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed
# 460 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_unset FLAG_FAN_CLUB_STRENGTH_SHARED, LilycoveCity_PokemonTrainerFanClub_EventScript_Interview
# 461 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 462 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 463 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ The interviewer doesnt count as an individual fan club member
# 464 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Instead they always ask about whoever the Lass would be interested in, if not the player
# 465 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interview::
# 466 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8005, TVSHOW_FAN_CLUB_SPECIAL
# 467 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special InterviewBefore
# 468 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed2
# 469 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8006
# 470 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 471 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 472 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer, MSGBOX_DEFAULT
# 473 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_FAN_QUESTION
# 474 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 475 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call Common_ShowEasyChatScreen
# 476 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 477 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 478 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion
# 479 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion
# 480 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 481 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 482 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion::
# 483 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink, MSGBOX_DEFAULT
# 484 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer
# 485 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 486 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 487 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion::
# 488 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 489 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 490 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer, MSGBOX_YESNO
# 491 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer
# 492 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion
# 493 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 494 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 495 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion::
# 496 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 497 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 498 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2, MSGBOX_DEFAULT
# 499 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_FAN_QUESTION
# 500 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 501 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call Common_ShowEasyChatScreen
# 502 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 503 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 504 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion
# 505 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion
# 506 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 507 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 508 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer::
# 509 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 510 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 511 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	message LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer
# 512 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmessage
# 513 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_POKEMON_FAN_CLUB_RATER
# 514 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special ShowScrollableMultichoice
# 515 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitstate
# 516 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 517 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	switch VAR_RESULT
# 518 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	case 11, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer
# 519 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer
# 520 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 521 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 522 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8006, VAR_0x800A
# 523 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 524 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special PutFanClubSpecialOnTheAir
# 525 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CompleteInterview
# 526 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 527 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 528 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer::
# 529 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 530 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 531 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer2, MSGBOX_YESNO
# 532 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer
# 533 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer
# 534 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 535 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 536 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer::
# 537 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 538 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 539 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer, MSGBOX_DEFAULT
# 540 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 541 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 542 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 543 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CompleteInterview::
# 544 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 545 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 546 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo, MSGBOX_DEFAULT
# 547 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setflag FLAG_FAN_CLUB_STRENGTH_SHARED
# 548 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 549 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 550 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 551 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed::
# 552 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 553 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 554 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial, MSGBOX_DEFAULT
# 555 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 556 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 557 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 558 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Shouldnt be reached
# 559 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed2::
# 560 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 561 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 562 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OhWowItsPlayer:
# 563 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Anda!\n"
# 564 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Si es {PLAYER}!$"
# 565 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 566 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan:
# 567 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Ya me han contado todo!\n"
# 568 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Tú eres muy fuerte, ¿verdad?\p"
# 569 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Aquí siempre estamos discutiendo\n"
# 570 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "sobre quién es el más fuerte.\p"
# 571 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Así que cuando me hablaron de ti\n"
# 572 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "decidí ser tu fan número uno.\p"
# 573 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Confío en que sigas luchando\n"
# 574 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "contra ENTRENADORES duros.\p"
# 575 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "De ese modo podré seguir disfrutando\n"
# 576 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "de tus emocionantes combates.\p"
# 577 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Y todo el mundo se dará cuenta\n"
# 578 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "de lo grande que eres.\p"
# 579 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Recuerda que yo siempre te estaré\n"
# 580 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "apoyando, {PLAYER}!$"
# 581 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 582 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin:
# 583 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Hola, {PLAYER}!\n"
# 584 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Nosotros vamos a estar animándote\l"
# 585 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "desde aquí!$"
# 586 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 587 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest:
# 588 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Los demás no tienen ni idea\n"
# 589 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "de que no hay nadie mejor que tú!\p"
# 590 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¿A que sí, {PLAYER}?\n"
# 591 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Enséñales lo que vales!$"
# 592 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 593 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary:
# 594 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Odio tener que decir esto, pero el\n"
# 595 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "ENTRENADOR que está en boca\l"
# 596 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "de todos es {STR_VAR_1}, eso está claro.\p"
# 597 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "La fuerza de ese ENTRENADOR…\n"
# 598 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "es algo que no es normal…$"
# 599 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 600 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen:
# 601 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Qué pesadez… He estado diciendo\n"
# 602 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "a todos que el mejor es {STR_VAR_1}…\p"
# 603 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Pero nadie me escucha…$"
# 604 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 605 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer:
# 606 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "He estado oyendo algo de un nuevo\n"
# 607 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "ENTRENADOR muy fuerte…\p"
# 608 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Se supone que puede incluso vencer\n"
# 609 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "a los LÍDERES de los GIMNASIOS.\p"
# 610 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¿Tú sabes algo de eso?$"
# 611 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 612 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou:
# 613 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Oh, {PLAYER}!\p"
# 614 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Adelante!\n"
# 615 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Sé que puedes ganar!$"
# 616 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 617 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan:
# 618 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ufff…\n"
# 619 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "MARCIAL…\p"
# 620 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Eh, no, espera!\n"
# 621 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Eso no está bien! ¡No, no, no!\p"
# 622 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Yo he sido siempre tu mayor fan!\p"
# 623 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡No me defraudes!\n"
# 624 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Ve a por todas!$"
# 625 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 626 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly:
# 627 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "No puedo evitarlo, sólo me gusta\n"
# 628 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "MARCIAL…$"
# 629 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 630 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly:
# 631 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Nadie comprende lo bueno\n"
# 632 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "que es MARCIAL…\p"
# 633 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Pero a mí me da igual!\p"
# 634 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Aunque sea la única persona que lo\n"
# 635 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "haga, seguiré apoyando a MARCIAL!$"
# 636 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 637 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly:
# 638 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Digan lo que digan los demás, mi\n"
# 639 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "ENTRENADOR favorito es MARCIAL:\l"
# 640 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "el LÍDER del GIMNASIO de AZULIZA.$"
# 641 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 642 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather:
# 643 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Has conseguido superar a tu padre\n"
# 644 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "en todos los aspectos!\p"
# 645 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Te lo digo yo, así que ni te atrevas\n"
# 646 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "a dudarlo!$"
# 647 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 648 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling:
# 649 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Incluso cuando las cosas no estaban\n"
# 650 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "nada fáciles, tu padre nunca se rindió.\p"
# 651 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Eso lo sé a ciencia cierta.\p"
# 652 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Así que no te rindas aunque pierdas!\n"
# 653 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Sigue luchando!$"
# 654 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 655 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman:
# 656 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "NORMAN luchó con más fuerza,\n"
# 657 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "personalidad y estilo que tú.\p"
# 658 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Muchos dicen que eres fuerte…,\p"
# 659 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "pero todavía te queda mucho que\n"
# 660 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "aprender para ser como tu padre.$"
# 661 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 662 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent:
# 663 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Estás empezando a inspirar tanto\n"
# 664 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "respeto como NORMAN.\p"
# 665 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Pero un abismo os separa…\p"
# 666 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "No te puedo decir de qué se trata…\n"
# 667 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Averígualo tú!$"
# 668 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 669 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers:
# 670 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Todos los que estamos aquí somos\n"
# 671 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "grandes seguidores de los combates\l"
# 672 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "entre POKéMON.\p"
# 673 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Siempre estamos discutiendo quién\n"
# 674 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "es el mejor ENTRENADOR de todos.\p"
# 675 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Si algún día alcanzas la fama, puede\n"
# 676 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "que nos hagamos fans tuyos!$"
# 677 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 678 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer:
# 679 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Oh, guauuuu! ¡Es {PLAYER}!\n"
# 680 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡En carne y hueso!\p"
# 681 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Por favor, dame la mano!\n"
# 682 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Y un autógrafo!$"
# 683 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 684 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou:
# 685 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Yo siempre te apoyo, {PLAYER}!\n"
# 686 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Siempre, siempre, siempre!\p"
# 687 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Sé que no vas a perder, {PLAYER}!\n"
# 688 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Porque eres muy, muy fuerte!$"
# 689 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 690 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool:
# 691 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} es tan guay…\p"
# 692 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Y todo el mundo está de acuerdo,\n"
# 693 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¿sabes?$"
# 694 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 695 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe:
# 696 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} es muy guay, ¿verdad?\p"
# 697 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Aunque nadie esté conmigo, yo voy\n"
# 698 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "a animar a mi ENTRENADOR favorito.$"
# 699 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 700 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat:
# 701 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Mi ENTRENADOR preferido es…\p"
# 702 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "superguay…,\p"
# 703 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "superfuerte…\p"
# 704 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "y supersimpático.\p"
# 705 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ojalá existiera de verdad…$"
# 706 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 707 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou:
# 708 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Eh! ¡Es {PLAYER}!\n"
# 709 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Cómo mola!\p"
# 710 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Cuando sea mayor, quiero ser\n"
# 711 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "tan fuerte como tú, {PLAYER}.$"
# 712 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 713 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou:
# 714 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Aunque sea el único…,\p"
# 715 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "siempre te voy a animar a ti, {PLAYER}.\p"
# 716 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Porque yo creo en ti, {PLAYER}!\n"
# 717 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Eres mi ídolo!$"
# 718 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 719 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool:
# 720 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} es tan guay…\n"
# 721 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ojalá me dejara darle la mano…$"
# 722 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 723 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan:
# 724 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Aunque sea el único…,\p"
# 725 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡nunca dejaré de ser fan\n"
# 726 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "de {STR_VAR_1}!\p"
# 727 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Porque {STR_VAR_1} nunca pierde!$"
# 728 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 729 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll:
# 730 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡{PLAYER}!\n"
# 731 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Eres increíble!\p"
# 732 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Desde que te vi, supe que eras\n"
# 733 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "alguien realmente grande.\p"
# 734 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Yo nunca me equivoco…$"
# 735 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 736 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner:
# 737 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¿A quién le importa lo que piensen\n"
# 738 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "los demás? ¡Yo te apoyo a ti!\p"
# 739 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "No te preocupes. Tú sal ahí fuera\n"
# 740 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "y lucha igual que siempre.$"
# 741 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 742 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne:
# 743 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "La verdad es que no se te da mal\n"
# 744 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "entrenar.\p"
# 745 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Pero también creo que no hay nadie\n"
# 746 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "mejor que {STR_VAR_1} ahora mismo.\p"
# 747 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Es sólo mi opinión, de todas formas.\n"
# 748 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "No dejes que te influya.$"
# 749 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 750 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer:
# 751 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Vaya, eres muy fuerte. Quizás incluso\n"
# 752 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "más fuerte que {STR_VAR_1}.\p"
# 753 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Pero {STR_VAR_1} necesita apoyo.\p"
# 754 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Si no se lo doy yo, ¿quién lo hará?$"
# 755 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 756 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind:
# 757 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Me has hecho cambiar de opinión!\n"
# 758 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Eres muy, muy fuerte!\p"
# 759 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Quiero que me digas cómo lo has\n"
# 760 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "hecho para mejorar tanto!$"
# 761 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 762 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation:
# 763 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Siempre te las arreglas para luchar\n"
# 764 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "mejor en circunstancias difíciles.\p"
# 765 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡Estoy deseando ver tu próximo\n"
# 766 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "combate!$"
# 767 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 768 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout:
# 769 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Hay muchos ENTRENADORES que están\n"
# 770 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "bien, pero {STR_VAR_1} sobresale.\p"
# 771 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Su fuerza es algo sobrenatural…\p"
# 772 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Tú no lo haces mal, pero no te puedes\n"
# 773 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "comparar con {STR_VAR_1}.$"
# 774 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 775 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger:
# 776 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Eres muy popular…\p"
# 777 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Eres fuerte y te preocupas por tus\n"
# 778 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "POKéMON. Nadie puede vencerte.\p"
# 779 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Pero ¿sabes?, yo creo en {STR_VAR_1}.\p"
# 780 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} es sin duda más fuerte,\n"
# 781 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡no hay lugar a dudas!$"
# 782 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 783 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive:
# 784 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Tú…\p"
# 785 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡eres genial!$"
# 786 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 787 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth:
# 788 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Da igual si sólo yo soy capaz\n"
# 789 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "de reconocer lo que vales.\p"
# 790 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Los demás no pueden comprender\n"
# 791 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "el poder oculto que hay en ti.$"
# 792 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 793 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential:
# 794 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Sí, puedo ver lo fuerte que eres\n"
# 795 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "con sólo mirarte a los ojos.\p"
# 796 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Pero…\p"
# 797 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡todavía no eres consciente\n"
# 798 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "de tu enorme potencial!$"
# 799 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 800 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength:
# 801 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Tienes razón, eres muy fuerte.\p"
# 802 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Pero te puedo decir que…\p"
# 803 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "¡todavía no es suficiente!\p"
# 804 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "La verdadera fortaleza reside en…\p"
# 805 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ejem…\p"
# 806 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Bueno, no tengo ni idea.$"
