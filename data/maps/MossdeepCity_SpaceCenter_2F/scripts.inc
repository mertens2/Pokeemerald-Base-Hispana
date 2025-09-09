# 1 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_MapScripts::
# 3 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_OnTransition
# 4 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_OnFrame
# 5 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.byte 0
# 6 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 7 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition:
# 8 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians
# 9 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_SPACE_CENTER_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts
# 10 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 11 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 12 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians::
# 13 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 14 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 3
# 15 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 16 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_RICH_BOY, 3, 2
# 17 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_RICH_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 18 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_GENTLEMAN, 1, 3
# 19 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_GENTLEMAN, MOVEMENT_TYPE_FACE_RIGHT
# 20 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 21 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 22 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts::
# 23 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_GRUNT_6, 11, 2
# 24 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_GRUNT_7, 15, 2
# 25 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_GRUNT_5, 13, 4
# 26 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 27 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 28 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnFrame:
# 29 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE, 1, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts
# 30 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.2byte 0
# 31 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 32 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts::
# 33 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 34 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 35 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 37 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 38 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn, MSGBOX_YESNO
# 39 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 40 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_GoodAnswer, MSGBOX_DEFAULT
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 42 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerExit
# 43 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 44 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	warp MAP_MOSSDEEP_CITY_SPACE_CENTER_1F, 13, 1
# 45 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 46 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 48 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 49 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_PlayerExit:
# 50 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_up
# 51 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 52 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts::
# 54 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro, MSGBOX_DEFAULT
# 55 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_5, MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat
# 56 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_GRUNT_5, MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated
# 57 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 58 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 59 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro, MSGBOX_DEFAULT
# 61 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_6, MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat
# 62 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_GRUNT_6, MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated
# 63 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 65 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro, MSGBOX_DEFAULT
# 67 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_7, MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat
# 68 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_GRUNT_7, MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated
# 69 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
# 71 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_GRUNT_6
# 72 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_GRUNT_7
# 73 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_GRUNT_5
# 74 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 75 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 76 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 77 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated:
# 78 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 79 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 80 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 81 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 82 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 83 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated:
# 84 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 85 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 86 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 87 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 88 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 89 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated:
# 90 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 91 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_right
# 92 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 93 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 94 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 95 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
# 96 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 97 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 98 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 99 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 100 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 101 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 102 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 103 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 104 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal::
# 105 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
# 106 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 107 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 108 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 109 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma::
# 110 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
# 111 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 112 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 113 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 114 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
# 115 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 116 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 117 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 118 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 119 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 120 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 121 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 122 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 123 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal::
# 124 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
# 125 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 126 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 127 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 128 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma::
# 129 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
# 130 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 131 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 132 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 133 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
# 134 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 135 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 136 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 137 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 138 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 140 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 141 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 142 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal::
# 143 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
# 144 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 145 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 146 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 147 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma::
# 148 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
# 149 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 150 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 151 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Battle for the below 3 grunts is handled in MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
# 154 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
# 155 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 156 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 157 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt7::
# 158 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle, MSGBOX_NPC
# 159 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 160 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 161 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
# 162 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
# 163 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 164 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 165 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Tabitha::
# 166 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 167 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 168 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou, MSGBOX_DEFAULT
# 169 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 170 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 171 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 172 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 173 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 174 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
# 175 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 176 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere, MSGBOX_DEFAULT
# 177 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 178 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 179 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 180 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 181 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 182 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER, MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 183 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 184 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel, MSGBOX_DEFAULT
# 185 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano, MSGBOX_DEFAULT
# 186 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 187 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 30
# 188 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 189 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 190 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth
# 191 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFight
# 192 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 193 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 194 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 195 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 196 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth::
# 197 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth
# 198 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 199 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 200 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 201 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 202 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFight:
# 203 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 204 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 205 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 206 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 207 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 208 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 209 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 210 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 211 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 212 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 213 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth:
# 214 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_left
# 215 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 216 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 217 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 218 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 219 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 220 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 221 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 222 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 223 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_down
# 224 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt::
# 227 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 228 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 229 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle, MSGBOX_YESNO
# 230 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 231 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly, MSGBOX_DEFAULT
# 232 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 233 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 234 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 235 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 236 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 237 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 238 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle::
# 239 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 240 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 241 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SavePlayerParty
# 242 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 243 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 244 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 245 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle
# 246 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special LoadPlayerParty
# 247 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 248 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 249 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle::
# 250 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	multi_2_vs_2 TRAINER_MAXIE_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand, TRAINER_TABITHA_MOSSDEEP, MossdeepCity_SpaceCenter_Text_TabithaDefeat, PARTNER_STEVEN
# 251 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_RESULT
# 252 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha
# 253 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 254 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SetCB2WhiteOut
# 255 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 256 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 257 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha::
# 258 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided, MSGBOX_DEFAULT
# 259 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 260 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 261 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 262 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 263 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 264 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 60
# 265 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 266 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 267 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 268 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 269 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp, MSGBOX_DEFAULT
# 270 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 271 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 272 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadedefaultbgm
# 273 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 274 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 275 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 276 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 277 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 278 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_GRUNT_6
# 279 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_GRUNT_7
# 280 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_GRUNT_5
# 281 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_TABITHA
# 282 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_MAXIE
# 283 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 6
# 284 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_SCIENTIST, DIR_SOUTH
# 285 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_GENTLEMAN, 11, 8
# 286 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_GENTLEMAN, DIR_NORTH
# 287 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_RICH_BOY, 6, 2
# 288 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_RICH_BOY, DIR_NORTH
# 289 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer
# 290 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 291 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome, MSGBOX_DEFAULT
# 292 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 293 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 294 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 295 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 296 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_STEVEN
# 297 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 298 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 299 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 300 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 301 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_SCIENTIST
# 302 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 6
# 303 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
# 304 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SPACE_CENTER_2F_SCIENTIST
# 305 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 306 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#ifdef BUGFIX
# 307 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 308 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#endif
# 309 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 310 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 311 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer::
# 312 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 313 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth
# 314 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest
# 315 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 316 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 317 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth::
# 318 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_STEVEN, DIR_NORTH
# 319 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 320 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 321 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest::
# 322 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_STEVEN, DIR_EAST
# 323 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 324 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 325 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
# 326 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 327 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	checkplayergender
# 328 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall
# 329 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall
# 330 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 331 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 332 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 333 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 334 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 335 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall::
# 336 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_MayRayquazaCall
# 337 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 338 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 339 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 340 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall::
# 341 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_BrendanRayquazaCall
# 342 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 343 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 344 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 345 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets:
# 346 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "ALGARIA suele tener buen tiempo\n"
# 347 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "y vientos estables.\p"
# 348 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Es el mejor lugar para lanzar cohetes\n"
# 349 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "al espacio exterior.$"
# 350 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 351 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel:
# 352 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¿Por qué querrá el EQUIPO MAGMA\n"
# 353 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "robar el combustible del cohete?$"
# 354 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 355 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut:
# 356 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Me hubiera gustado ser astronauta.\n"
# 357 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Si fuera sólo un pelín más joven…\p"
# 358 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Pero no, nunca es demasiado tarde.\n"
# 359 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Voy a intentarlo!$"
# 360 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 361 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis:
# 362 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Si el EQUIPO MAGMA se lleva\n"
# 363 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "el combustible, no podré ir al espacio.\p"
# 364 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Qué tragedia! ¡Qué ultraje!\n"
# 365 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡No se puede permitir!$"
# 366 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 367 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace:
# 368 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Ojalá la gente normal pudiera ir\n"
# 369 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "al espacio de excursión…$"
# 370 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 371 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace:
# 372 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¿El EQUIPO MAGMA también\n"
# 373 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "quiere ir al espacio exterior?$"
# 374 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 375 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn:
# 376 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¿De qué vas?\p"
# 377 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¿Te superamos en número\n"
# 378 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "y aun así quieres desafiarnos?$"
# 379 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 380 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_GoodAnswer:
# 381 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Bien dicho! ¡Así hablan\n"
# 382 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "las personas inteligentes!$"
# 383 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 384 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro:
# 385 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¿Te va vivir peligrosamente?\n"
# 386 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Pues te vas a enterar!$"
# 387 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 388 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat:
# 389 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡He perdido!\n"
# 390 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Imposible!$"
# 391 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 392 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro:
# 393 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡No te creas que puedes\n"
# 394 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "escapar! ¡Ahora voy yo!$"
# 395 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 396 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat:
# 397 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Yo también he perdido!\n"
# 398 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Imposible!$"
# 399 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 400 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro:
# 401 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Darías lo que fuera por descansar\n"
# 402 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "un rato, ¿eh? ¡Pues se siente!$"
# 403 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 404 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat:
# 405 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Tendría que haber descansado yo…\n"
# 406 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Ya lo creo…$"
# 407 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 408 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle:
# 409 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "No ha servido de nada ser tres.\n"
# 410 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Nos has derrotado miserablemente.$"
# 411 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 412 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle:
# 413 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Hemos perdido los tres…\n"
# 414 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Ha sido una derrota por triplicado!$"
# 415 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 416 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle:
# 417 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Somos una vergüenza para el EQUIPO\n"
# 418 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "y para nuestro líder.$"
# 419 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 420 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou:
# 421 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Je, je, je!\p"
# 422 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Hemos venido hasta aquí en busca\n"
# 423 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "del combustible y todo son problemas!\p"
# 424 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Si quieres desbaratar nuestros planes,\n"
# 425 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "tendremos que darte una lección!$"
# 426 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 427 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere:
# 428 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAGNO: ¡Apártate!\n"
# 429 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡No oses interferir!$"
# 430 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 431 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel:
# 432 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MÁXIMO: EQUIPO MAGMA…\p"
# 433 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¿Por qué queréis robar el combustible\n"
# 434 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "del cohete?$"
# 435 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 436 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano:
# 437 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAGNO: Je, je, je… Ya que tanto\n"
# 438 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "te interesa, te lo voy a explicar.\p"
# 439 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Vamos a echarlo todo, todito,\n"
# 440 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "todo en el MONTE CENIZO!\p"
# 441 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Ahora que GROUDON ya no está,\n"
# 442 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "no necesitamos esa estúpida montaña!\p"
# 443 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Vamos a usar el combustible para\n"
# 444 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "que el volcán entre en erupción!\p"
# 445 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Va a ser bestial!$"
# 446 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 447 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle:
# 448 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MÁXIMO: ¡{PLAYER}{KUN}!\n"
# 449 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¿Me ayudarás?\p"
# 450 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡Luchemos juntos!\n"
# 451 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¿Estás de acuerdo?$"
# 452 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 453 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly:
# 454 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MÁXIMO: ¿Cómo que no?\n"
# 455 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¡No hay tiempo que perder!$"
# 456 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 457 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand:
# 458 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Mi único objetivo es…\n"
# 459 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "expandir la tierra…$"
# 460 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 461 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_Text_TabithaDefeat:
# 462 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Estoy con nuestro líder…$"
# 463 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 464 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided:
# 465 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAGNO: No conseguimos hacer\n"
# 466 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "que el volcán entrara en erupción…\p"
# 467 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "GROUDON escapó a nuestro control\n"
# 468 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "una vez despierto…\p"
# 469 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¿Quizás nuestro objetivo de expandir\n"
# 470 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "la tierra es una insensatez?\p"
# 471 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Uf…\n"
# 472 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "No sé…\p"
# 473 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Si nosotros…\n"
# 474 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Si el EQUIPO MAGMA se equivoca…\l"
# 475 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Entonces…\p"
# 476 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "¿Quizás el deseo del EQUIPO AQUA de\n"
# 477 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "expandir el mar también sea una locura?$"
# 478 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 479 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp:
# 480 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAGNO: Muy bien…\n"
# 481 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Renunciaremos al combustible…\p"
# 482 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Parece haber asuntos más importantes\n"
# 483 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "que requieren nuestra atención…$"
# 484 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 485 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome:
# 486 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MÁXIMO: Uf, ha faltado un pelo.\n"
# 487 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Gracias por tu ayuda, {PLAYER}{KUN}.\p"
# 488 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Quisiera darte algo como muestra\n"
# 489 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "de agradecimiento.\p"
# 490 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "No dejes de venir a mi casa\n"
# 491 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "después.\p"
# 492 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Ah, no, no vivo en CIUDAD FÉRRICA,\n"
# 493 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "sino aquí mismo, en la isla.$"
