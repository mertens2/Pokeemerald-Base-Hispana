# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 3 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgWoods/scripts.pory"

# 5 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 7 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 8 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 9 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 10 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 11 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 12 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 13 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 14 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 15 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 16 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 17 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 18 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 19 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 20 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 21 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 22 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 23 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 24 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 25 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 26 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 27 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 28 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 29 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 31 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 32 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 33 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 34 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 35 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 36 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 37 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 38 "data/maps/PetalburgWoods/scripts.pory"
	end
# 39 "data/maps/PetalburgWoods/scripts.pory"

# 40 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 41 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 42 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 43 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 44 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 45 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 46 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 47 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 48 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 49 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 50 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 51 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 52 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 54 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 55 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 56 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 57 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 58 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 59 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 60 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 61 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 62 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 63 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 64 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 65 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 66 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 67 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 68 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 69 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 70 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 71 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 72 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 73 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 74 "data/maps/PetalburgWoods/scripts.pory"
	end
# 75 "data/maps/PetalburgWoods/scripts.pory"

# 76 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 77 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 78 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 79 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 80 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 81 "data/maps/PetalburgWoods/scripts.pory"
	return
# 82 "data/maps/PetalburgWoods/scripts.pory"

# 83 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 84 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 85 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 86 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 87 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 88 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 89 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 90 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 91 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 92 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 93 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 94 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 95 "data/maps/PetalburgWoods/scripts.pory"
	end
# 96 "data/maps/PetalburgWoods/scripts.pory"

# 97 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 98 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 99 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 100 "data/maps/PetalburgWoods/scripts.pory"
	end
# 101 "data/maps/PetalburgWoods/scripts.pory"

# 102 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 103 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 104 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 105 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 106 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 107 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 108 "data/maps/PetalburgWoods/scripts.pory"
	return
# 109 "data/maps/PetalburgWoods/scripts.pory"

# 110 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 111 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 112 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 113 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 114 "data/maps/PetalburgWoods/scripts.pory"
	end
# 115 "data/maps/PetalburgWoods/scripts.pory"

# 116 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 117 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 118 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 119 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 120 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 121 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 122 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 123 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 124 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 125 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 126 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 127 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 128 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 129 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 130 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 131 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 132 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 133 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 134 "data/maps/PetalburgWoods/scripts.pory"

# 135 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 136 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 137 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 138 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 139 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 140 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 141 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 142 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 143 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 144 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 145 "data/maps/PetalburgWoods/scripts.pory"

# 146 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 147 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 148 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 149 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 150 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 151 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 152 "data/maps/PetalburgWoods/scripts.pory"

# 153 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 154 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 155 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 156 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 157 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 158 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 159 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 160 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 161 "data/maps/PetalburgWoods/scripts.pory"

# 162 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 163 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 164 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 165 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 166 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 167 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 168 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 169 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 170 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 171 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 172 "data/maps/PetalburgWoods/scripts.pory"

# 173 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 174 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 175 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 176 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 177 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 178 "data/maps/PetalburgWoods/scripts.pory"

# 179 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 180 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 181 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 182 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 183 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 184 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 185 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 186 "data/maps/PetalburgWoods/scripts.pory"

# 187 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 188 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 189 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 190 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 191 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 192 "data/maps/PetalburgWoods/scripts.pory"

# 193 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 194 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 195 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 196 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 197 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 198 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 199 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 200 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 201 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 202 "data/maps/PetalburgWoods/scripts.pory"

# 203 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 204 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 205 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 206 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 207 "data/maps/PetalburgWoods/scripts.pory"

# 208 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 209 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 210 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 211 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 212 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 213 "data/maps/PetalburgWoods/scripts.pory"

# 214 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 215 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 216 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 217 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 218 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 219 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 220 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 221 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 222 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 223 "data/maps/PetalburgWoods/scripts.pory"

# 224 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 225 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 226 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 227 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 228 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 229 "data/maps/PetalburgWoods/scripts.pory"

# 230 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 231 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 232 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 233 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 234 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 235 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 236 "data/maps/PetalburgWoods/scripts.pory"

# 237 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 238 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 239 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 240 "data/maps/PetalburgWoods/scripts.pory"

# 241 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 242 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 243 "data/maps/PetalburgWoods/scripts.pory"
	end
# 244 "data/maps/PetalburgWoods/scripts.pory"

# 245 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 246 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 247 "data/maps/PetalburgWoods/scripts.pory"
	end
# 248 "data/maps/PetalburgWoods/scripts.pory"

# 249 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 250 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 251 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 252 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 253 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 254 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 255 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 256 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 257 "data/maps/PetalburgWoods/scripts.pory"
	release
# 258 "data/maps/PetalburgWoods/scripts.pory"
	end
# 259 "data/maps/PetalburgWoods/scripts.pory"

# 260 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 261 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 262 "data/maps/PetalburgWoods/scripts.pory"
	release
# 263 "data/maps/PetalburgWoods/scripts.pory"
	end
# 264 "data/maps/PetalburgWoods/scripts.pory"

# 265 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 266 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 267 "data/maps/PetalburgWoods/scripts.pory"
	end
# 268 "data/maps/PetalburgWoods/scripts.pory"

# 269 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 270 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 271 "data/maps/PetalburgWoods/scripts.pory"
	end
# 272 "data/maps/PetalburgWoods/scripts.pory"

# 273 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 274 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 275 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 276 "data/maps/PetalburgWoods/scripts.pory"
	end
# 277 "data/maps/PetalburgWoods/scripts.pory"

# 278 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 279 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 280 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 281 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 282 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 283 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 284 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 285 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 286 "data/maps/PetalburgWoods/scripts.pory"
	release
# 287 "data/maps/PetalburgWoods/scripts.pory"
	end
# 288 "data/maps/PetalburgWoods/scripts.pory"

# 289 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 290 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 291 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 292 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 293 "data/maps/PetalburgWoods/scripts.pory"
	release
# 294 "data/maps/PetalburgWoods/scripts.pory"
	end
# 295 "data/maps/PetalburgWoods/scripts.pory"

# 296 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 297 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 298 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 299 "data/maps/PetalburgWoods/scripts.pory"
	release
# 300 "data/maps/PetalburgWoods/scripts.pory"
	end
# 301 "data/maps/PetalburgWoods/scripts.pory"

# 302 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 303 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 304 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 305 "data/maps/PetalburgWoods/scripts.pory"
	release
# 306 "data/maps/PetalburgWoods/scripts.pory"
	end
# 307 "data/maps/PetalburgWoods/scripts.pory"

# 308 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 309 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 310 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 311 "data/maps/PetalburgWoods/scripts.pory"
	release
# 312 "data/maps/PetalburgWoods/scripts.pory"
	end
# 313 "data/maps/PetalburgWoods/scripts.pory"

# 314 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 315 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 316 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 317 "data/maps/PetalburgWoods/scripts.pory"
	end
# 318 "data/maps/PetalburgWoods/scripts.pory"

# 319 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 320 "data/maps/PetalburgWoods/scripts.pory"
	.string "Mmmm…\n"
# 321 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ni uno… No hay ni uno…$"
# 322 "data/maps/PetalburgWoods/scripts.pory"

# 323 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 324 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hola, ¿has visto a un POKéMON\n"
# 325 "data/maps/PetalburgWoods/scripts.pory"
	.string "llamado SHROOMISH por aquí?\p"
# 326 "data/maps/PetalburgWoods/scripts.pory"
	.string "Me encanta ese POKéMON…$"
# 327 "data/maps/PetalburgWoods/scripts.pory"

# 328 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 329 "data/maps/PetalburgWoods/scripts.pory"
	.string "Iba a tenderte una emboscada, pero\n"
# 330 "data/maps/PetalburgWoods/scripts.pory"
	.string "tú tenías que eternizarte haciendo\l"
# 331 "data/maps/PetalburgWoods/scripts.pory"
	.string "el tonto en el BOSQUE PETALIA, ¿no?\p"
# 332 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ya me he cansado de esperar,\n"
# 333 "data/maps/PetalburgWoods/scripts.pory"
	.string "así que ¡aquí estoy!$"
# 334 "data/maps/PetalburgWoods/scripts.pory"

# 335 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 336 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Tú! ¡INVESTIGADOR de DEVON!\p"
# 337 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Suelta esos papeles!$"
# 338 "data/maps/PetalburgWoods/scripts.pory"

# 339 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 340 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Aaaaaaah!\p"
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "Tú entrenas POKéMON, ¿verdad?\n"
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Pues entonces ayúdameeeee!$"
# 343 "data/maps/PetalburgWoods/scripts.pory"

# 344 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 345 "data/maps/PetalburgWoods/scripts.pory"
	.string "¿Eh? ¿Qué crees que estás haciendo?\n"
# 346 "data/maps/PetalburgWoods/scripts.pory"
	.string "¿Tú vas a protegerle?\p"
# 347 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Nadie que se cruce en el camino\n"
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "del EQUIPO AQUA sale bien librado,\l"
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "aunque no levante dos palmos del suelo!\p"
# 350 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Ven a que te dé jarabe de palo!$"
# 351 "data/maps/PetalburgWoods/scripts.pory"

# 352 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Esto tiene que ser una broma!\n"
# 354 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Eres muy fuerte!$"
# 355 "data/maps/PetalburgWoods/scripts.pory"

# 356 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 357 "data/maps/PetalburgWoods/scripts.pory"
	.string "Brrrr… Hay que tener valor para\n"
# 358 "data/maps/PetalburgWoods/scripts.pory"
	.string "entrometerse en los planes del EQUIPO\l"
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "AQUA… ¡Vuelve a luchar conmigo!\p"
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "Bueno, eso me gustaría, pero no me\n"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "queda ni un POKéMON en forma…\p"
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pues que sepas que los del EQUIPO AQUA\n"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "estamos tras algo en CIUDAD FÉRRICA.\p"
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Por hoy te perdono la vida!$"
# 365 "data/maps/PetalburgWoods/scripts.pory"

# 366 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "Huy, huy, huy…\n"
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "Casi no lo contamos…\p"
# 369 "data/maps/PetalburgWoods/scripts.pory"
	.string "Gracias a ti, ese granuja no me robó\n"
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "unos papeles muy importantes.\p"
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "Para agradecerte tu ayuda quiero\n"
# 372 "data/maps/PetalburgWoods/scripts.pory"
	.string "darte esta SUPERBALL.$"
# 373 "data/maps/PetalburgWoods/scripts.pory"

# 374 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 375 "data/maps/PetalburgWoods/scripts.pory"
	.string "¿No ha dicho ese matón del EQUIPO AQUA\n"
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "que buscaba algo en CIUDAD FÉRRICA?$"
# 377 "data/maps/PetalburgWoods/scripts.pory"

# 378 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "Huy, huy, huy… ¡Esto es muy serio!\n"
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡No hay tiempo que perder!$"
# 381 "data/maps/PetalburgWoods/scripts.pory"

# 382 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "Tienes un montón de objetos.\n"
# 384 "data/maps/PetalburgWoods/scripts.pory"
	.string "No puedo darte la SUPERBALL.$"
# 385 "data/maps/PetalburgWoods/scripts.pory"

# 386 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 387 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡He atrapado un montón de POKéMON!\p"
# 388 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Adelante, vosotros podéis!\n"
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Vivan los POKéMON BICHO!$"
# 390 "data/maps/PetalburgWoods/scripts.pory"

# 391 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 392 "data/maps/PetalburgWoods/scripts.pory"
	.string "A pesar de tener todos estos POKéMON,\n"
# 393 "data/maps/PetalburgWoods/scripts.pory"
	.string "he perdido miserablemente…$"
# 394 "data/maps/PetalburgWoods/scripts.pory"

# 395 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 396 "data/maps/PetalburgWoods/scripts.pory"
	.string "Como he atrapado tantísimos POKéMON,\n"
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "ya no me queda ni una POKé BALL.$"
# 398 "data/maps/PetalburgWoods/scripts.pory"

# 399 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 400 "data/maps/PetalburgWoods/scripts.pory"
	.string "Si llevas POKéMON BICHO a la escuela,\n"
# 401 "data/maps/PetalburgWoods/scripts.pory"
	.string "te haces con un club de fans.$"
# 402 "data/maps/PetalburgWoods/scripts.pory"

# 403 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Si quiero conservar mi club de fans,\n"
# 405 "data/maps/PetalburgWoods/scripts.pory"
	.string "no puedo perder!$"
# 406 "data/maps/PetalburgWoods/scripts.pory"

# 407 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "Si tienes un POKéMON BICHO grande,\n"
# 409 "data/maps/PetalburgWoods/scripts.pory"
	.string "la gente parece que te respeta más.$"
# 410 "data/maps/PetalburgWoods/scripts.pory"

# 411 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Cuando mi POKéMON BICHO crezca,\n"
# 413 "data/maps/PetalburgWoods/scripts.pory"
	.string "me tomaré la revancha!\p"
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Te voy a registrar en mi POKéNAV\n"
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "ya mismo!$"
# 416 "data/maps/PetalburgWoods/scripts.pory"

# 417 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Cuando mi POKéMON BICHO crezca,\n"
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "me tomaré la revancha!\p"
# 420 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Te voy a registrar en mi POKéNAV\n"
# 421 "data/maps/PetalburgWoods/scripts.pory"
	.string "ya mismo!$"
# 422 "data/maps/PetalburgWoods/scripts.pory"

# 423 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 424 "data/maps/PetalburgWoods/scripts.pory"
	.string "Mis POKéMON BICHO han evolucionado.\n"
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Ahora recuperaré mi club de fans!$"
# 426 "data/maps/PetalburgWoods/scripts.pory"

# 427 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Si quiero conservar mi club de fans,\n"
# 429 "data/maps/PetalburgWoods/scripts.pory"
	.string "no puedo perder!$"
# 430 "data/maps/PetalburgWoods/scripts.pory"

# 431 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "Consigues un club de fans si tus\n"
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON son fuertes, ¿no es así?\l"
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "Por eso me he entrenado mucho.$"
# 435 "data/maps/PetalburgWoods/scripts.pory"

# 436 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Hola!\n"
# 438 "data/maps/PetalburgWoods/scripts.pory"
	.string "¿Qué tal están tus POKéMON?\p"
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "Si están débiles y quieres evitar\n"
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "los combates, aléjate de las zonas\l"
# 441 "data/maps/PetalburgWoods/scripts.pory"
	.string "con hierba alta.$"
# 442 "data/maps/PetalburgWoods/scripts.pory"

# 443 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "A veces hay cosas en el suelo,\n"
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "aunque no puedas verlas.\p"
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "Por eso siempre tengo los ojos abiertos\n"
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "cuando voy de paseo.$"
# 448 "data/maps/PetalburgWoods/scripts.pory"

# 449 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "¡Cómo mola! ¡La MEDALLA del GIMNASIO\n"
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "de CIUDAD FÉRRICA!\p"
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "Tú seguro que entrenas POKéMON.\n"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pues prueba a usar este objeto.$"
# 454 "data/maps/PetalburgWoods/scripts.pory"

# 455 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "Es una SEMILLA MILAGRO.\n"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "Dásela a un POKéMON para reforzar\l"
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "los movimientos de tipo PLANTA.\p"
# 459 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pero creo que hay muchos más objetos\n"
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "que puedes dar a los POKéMON.$"
# 461 "data/maps/PetalburgWoods/scripts.pory"

# 462 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "PISTAS para ENTRENADORES\p"
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "Cuando un POKéMON hace acto\n"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "de presencia en un combate,\l"
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "recibe puntos de EXPERIENCIA.\p"
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "Si quieres entrenar sin riesgos\n"
# 468 "data/maps/PetalburgWoods/scripts.pory"
	.string "a un POKéMON débil, ponlo al principio\l"
# 469 "data/maps/PetalburgWoods/scripts.pory"
	.string "de la lista del equipo.\p"
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "En cuanto empiece el combate,\n"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "sustitúyelo. Así ganará puntos de\l"
# 472 "data/maps/PetalburgWoods/scripts.pory"
	.string "EXPERIENCIA sin sufrir ningún daño.$"
# 473 "data/maps/PetalburgWoods/scripts.pory"

# 474 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 475 "data/maps/PetalburgWoods/scripts.pory"
	.string "PISTAS para ENTRENADORES\p"
# 476 "data/maps/PetalburgWoods/scripts.pory"
	.string "Además de los PUNTOS de SALUD (PS),\n"
# 477 "data/maps/PetalburgWoods/scripts.pory"
	.string "los POKéMON tienen PUNTOS de PODER\l"
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "(PP), que necesitan para realizar\l"
# 479 "data/maps/PetalburgWoods/scripts.pory"
	.string "movimientos durante el combate.\p"
# 480 "data/maps/PetalburgWoods/scripts.pory"
	.string "Si un POKéMON se queda sin PP,\n"
# 481 "data/maps/PetalburgWoods/scripts.pory"
	.string "hay que llevarlo a un CENTRO POKéMON.$"
