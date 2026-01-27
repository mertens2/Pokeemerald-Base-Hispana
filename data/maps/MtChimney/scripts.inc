# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 3 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 4 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 5 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 6 "data/maps/MtChimney/scripts.pory"

# 7 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 8 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 9 "data/maps/MtChimney/scripts.pory"
	end
# 10 "data/maps/MtChimney/scripts.pory"

# 11 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 12 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 13 "data/maps/MtChimney/scripts.pory"
	end
# 14 "data/maps/MtChimney/scripts.pory"

# 15 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 16 "data/maps/MtChimney/scripts.pory"
	lock
# 17 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 18 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 19 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 20 "data/maps/MtChimney/scripts.pory"
	closemessage
# 21 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceOriginalDirection
# 22 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 23 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 24 "data/maps/MtChimney/scripts.pory"
	release
# 25 "data/maps/MtChimney/scripts.pory"
	end
# 26 "data/maps/MtChimney/scripts.pory"

# 27 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 28 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 29 "data/maps/MtChimney/scripts.pory"
	return
# 30 "data/maps/MtChimney/scripts.pory"

# 31 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 32 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 33 "data/maps/MtChimney/scripts.pory"
	return
# 34 "data/maps/MtChimney/scripts.pory"

# 35 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 36 "data/maps/MtChimney/scripts.pory"
	lockall
# 37 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 38 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 39 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
# 40 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 41 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 42 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 43 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 44 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_Delay48
# 45 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 46 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 47 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 48 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 49 "data/maps/MtChimney/scripts.pory"
	closemessage
# 50 "data/maps/MtChimney/scripts.pory"
	delay 30
# 51 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 52 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 53 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 54 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_TABITHA
# 55 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 56 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 57 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 58 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 12
# 59 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 60 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 61 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 62 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 63 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 64 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 65 "data/maps/MtChimney/scripts.pory"
	closemessage
# 66 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 67 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 68 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 69 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 70 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 71 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 72 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 73 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 74 "data/maps/MtChimney/scripts.pory"
	releaseall
# 75 "data/maps/MtChimney/scripts.pory"
	end
# 76 "data/maps/MtChimney/scripts.pory"

# 77 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 78 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 79 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 80 "data/maps/MtChimney/scripts.pory"
	return
# 81 "data/maps/MtChimney/scripts.pory"

# 82 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 83 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 84 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 85 "data/maps/MtChimney/scripts.pory"
	return
# 86 "data/maps/MtChimney/scripts.pory"

# 87 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 88 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitEast
# 89 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 90 "data/maps/MtChimney/scripts.pory"
	return
# 91 "data/maps/MtChimney/scripts.pory"

# 92 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 93 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 94 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 95 "data/maps/MtChimney/scripts.pory"
	return
# 96 "data/maps/MtChimney/scripts.pory"

# 97 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 98 "data/maps/MtChimney/scripts.pory"
	lock
# 99 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 100 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 101 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 102 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 103 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 104 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 105 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 106 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 107 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 108 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 109 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 110 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 111 "data/maps/MtChimney/scripts.pory"
	release
# 112 "data/maps/MtChimney/scripts.pory"
	end
# 113 "data/maps/MtChimney/scripts.pory"

# 114 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 115 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 116 "data/maps/MtChimney/scripts.pory"
	release
# 117 "data/maps/MtChimney/scripts.pory"
	end
# 118 "data/maps/MtChimney/scripts.pory"

# 119 "data/maps/MtChimney/scripts.pory"

# 120 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 121 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 122 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 123 "data/maps/MtChimney/scripts.pory"
	return
# 124 "data/maps/MtChimney/scripts.pory"

# 125 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 126 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 127 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 128 "data/maps/MtChimney/scripts.pory"
	release
# 129 "data/maps/MtChimney/scripts.pory"
	end
# 130 "data/maps/MtChimney/scripts.pory"

# 131 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 132 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 133 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 134 "data/maps/MtChimney/scripts.pory"
	release
# 135 "data/maps/MtChimney/scripts.pory"
	end
# 136 "data/maps/MtChimney/scripts.pory"

# 137 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 138 "data/maps/MtChimney/scripts.pory"
	walk_up
# 139 "data/maps/MtChimney/scripts.pory"
	walk_up
# 140 "data/maps/MtChimney/scripts.pory"
	walk_up
# 141 "data/maps/MtChimney/scripts.pory"
	walk_up
# 142 "data/maps/MtChimney/scripts.pory"
	walk_up
# 143 "data/maps/MtChimney/scripts.pory"
	walk_up
# 144 "data/maps/MtChimney/scripts.pory"
	walk_right
# 145 "data/maps/MtChimney/scripts.pory"
	step_end
# 146 "data/maps/MtChimney/scripts.pory"

# 147 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 148 "data/maps/MtChimney/scripts.pory"
	walk_left
# 149 "data/maps/MtChimney/scripts.pory"
	walk_down
# 150 "data/maps/MtChimney/scripts.pory"
	walk_down
# 151 "data/maps/MtChimney/scripts.pory"
	walk_down
# 152 "data/maps/MtChimney/scripts.pory"
	walk_down
# 153 "data/maps/MtChimney/scripts.pory"
	walk_down
# 154 "data/maps/MtChimney/scripts.pory"
	walk_down
# 155 "data/maps/MtChimney/scripts.pory"
	walk_down
# 156 "data/maps/MtChimney/scripts.pory"
	step_end
# 157 "data/maps/MtChimney/scripts.pory"

# 158 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 159 "data/maps/MtChimney/scripts.pory"
	walk_up
# 160 "data/maps/MtChimney/scripts.pory"
	walk_up
# 161 "data/maps/MtChimney/scripts.pory"
	walk_up
# 162 "data/maps/MtChimney/scripts.pory"
	walk_up
# 163 "data/maps/MtChimney/scripts.pory"
	walk_up
# 164 "data/maps/MtChimney/scripts.pory"
	walk_right
# 165 "data/maps/MtChimney/scripts.pory"
	walk_right
# 166 "data/maps/MtChimney/scripts.pory"
	step_end
# 167 "data/maps/MtChimney/scripts.pory"

# 168 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 169 "data/maps/MtChimney/scripts.pory"
	walk_left
# 170 "data/maps/MtChimney/scripts.pory"
	walk_left
# 171 "data/maps/MtChimney/scripts.pory"
	walk_down
# 172 "data/maps/MtChimney/scripts.pory"
	walk_down
# 173 "data/maps/MtChimney/scripts.pory"
	walk_down
# 174 "data/maps/MtChimney/scripts.pory"
	walk_down
# 175 "data/maps/MtChimney/scripts.pory"
	walk_down
# 176 "data/maps/MtChimney/scripts.pory"
	walk_down
# 177 "data/maps/MtChimney/scripts.pory"
	walk_down
# 178 "data/maps/MtChimney/scripts.pory"
	step_end
# 179 "data/maps/MtChimney/scripts.pory"

# 180 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 181 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 182 "data/maps/MtChimney/scripts.pory"
	end
# 183 "data/maps/MtChimney/scripts.pory"

# 184 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 185 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 186 "data/maps/MtChimney/scripts.pory"
	end
# 187 "data/maps/MtChimney/scripts.pory"

# 188 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 189 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 190 "data/maps/MtChimney/scripts.pory"
	end
# 191 "data/maps/MtChimney/scripts.pory"

# 192 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 193 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 194 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/MtChimney/scripts.pory"
	end
# 196 "data/maps/MtChimney/scripts.pory"

# 197 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 198 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 199 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 200 "data/maps/MtChimney/scripts.pory"
	end
# 201 "data/maps/MtChimney/scripts.pory"

# 202 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 203 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 204 "data/maps/MtChimney/scripts.pory"
	end
# 205 "data/maps/MtChimney/scripts.pory"

# 206 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 207 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 208 "data/maps/MtChimney/scripts.pory"
	end
# 209 "data/maps/MtChimney/scripts.pory"

# 210 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 211 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 212 "data/maps/MtChimney/scripts.pory"
	end
# 213 "data/maps/MtChimney/scripts.pory"

# 214 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 215 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 216 "data/maps/MtChimney/scripts.pory"
	end
# 217 "data/maps/MtChimney/scripts.pory"

# 218 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 219 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 220 "data/maps/MtChimney/scripts.pory"
	end
# 221 "data/maps/MtChimney/scripts.pory"

# 222 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 223 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 224 "data/maps/MtChimney/scripts.pory"
	end
# 225 "data/maps/MtChimney/scripts.pory"

# 226 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 227 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 228 "data/maps/MtChimney/scripts.pory"
	end
# 229 "data/maps/MtChimney/scripts.pory"

# 230 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 231 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 232 "data/maps/MtChimney/scripts.pory"
	end
# 233 "data/maps/MtChimney/scripts.pory"

# 234 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 235 "data/maps/MtChimney/scripts.pory"
	lockall
# 236 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 237 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 238 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 239 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 240 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 241 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 242 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 243 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 244 "data/maps/MtChimney/scripts.pory"
	releaseall
# 245 "data/maps/MtChimney/scripts.pory"
	end
# 246 "data/maps/MtChimney/scripts.pory"

# 247 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 248 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 249 "data/maps/MtChimney/scripts.pory"
	releaseall
# 250 "data/maps/MtChimney/scripts.pory"
	end
# 251 "data/maps/MtChimney/scripts.pory"

# 252 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 253 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 254 "data/maps/MtChimney/scripts.pory"
	releaseall
# 255 "data/maps/MtChimney/scripts.pory"
	end
# 256 "data/maps/MtChimney/scripts.pory"

# 257 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 258 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 259 "data/maps/MtChimney/scripts.pory"
	releaseall
# 260 "data/maps/MtChimney/scripts.pory"
	end
# 261 "data/maps/MtChimney/scripts.pory"

# 262 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 263 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 264 "data/maps/MtChimney/scripts.pory"
	end
# 265 "data/maps/MtChimney/scripts.pory"

# 266 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 267 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 268 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 269 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 270 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 271 "data/maps/MtChimney/scripts.pory"
	release
# 272 "data/maps/MtChimney/scripts.pory"
	end
# 273 "data/maps/MtChimney/scripts.pory"

# 274 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 275 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 276 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 277 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 278 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 279 "data/maps/MtChimney/scripts.pory"
	release
# 280 "data/maps/MtChimney/scripts.pory"
	end
# 281 "data/maps/MtChimney/scripts.pory"

# 282 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 283 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 284 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 285 "data/maps/MtChimney/scripts.pory"
	end
# 286 "data/maps/MtChimney/scripts.pory"

# 287 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 288 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 289 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 290 "data/maps/MtChimney/scripts.pory"
	end
# 291 "data/maps/MtChimney/scripts.pory"

# 292 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 293 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 294 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/MtChimney/scripts.pory"
	end
# 296 "data/maps/MtChimney/scripts.pory"

# 297 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 298 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 299 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 300 "data/maps/MtChimney/scripts.pory"
	end
# 301 "data/maps/MtChimney/scripts.pory"

# 302 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 303 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 304 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 305 "data/maps/MtChimney/scripts.pory"
	end
# 306 "data/maps/MtChimney/scripts.pory"

# 307 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 308 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 309 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 310 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 311 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 312 "data/maps/MtChimney/scripts.pory"
	release
# 313 "data/maps/MtChimney/scripts.pory"
	end
# 314 "data/maps/MtChimney/scripts.pory"

# 315 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 316 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 317 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 318 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 319 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 320 "data/maps/MtChimney/scripts.pory"
	release
# 321 "data/maps/MtChimney/scripts.pory"
	end
# 322 "data/maps/MtChimney/scripts.pory"

# 323 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 324 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 325 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 326 "data/maps/MtChimney/scripts.pory"
	end
# 327 "data/maps/MtChimney/scripts.pory"

# 328 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 329 "data/maps/MtChimney/scripts.pory"
	.string "Ese METEORITO posee un gran poder…\p"
# 330 "data/maps/MtChimney/scripts.pory"
	.string "Si lo amplificamos con esta máquina,\n"
# 331 "data/maps/MtChimney/scripts.pory"
	.string "la actividad volcánica del MONTE CENIZO\l"
# 332 "data/maps/MtChimney/scripts.pory"
	.string "aumentará al instante…\p"
# 333 "data/maps/MtChimney/scripts.pory"
	.string "Su energía inundará el cráter\n"
# 334 "data/maps/MtChimney/scripts.pory"
	.string "y entonces…\l"
# 335 "data/maps/MtChimney/scripts.pory"
	.string "Jua, jua, jua…$"
# 336 "data/maps/MtChimney/scripts.pory"

# 337 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 338 "data/maps/MtChimney/scripts.pory"
	.string "MAGNO: ¿Eh?\n"
# 339 "data/maps/MtChimney/scripts.pory"
	.string "¿Quién eres tú?\p"
# 340 "data/maps/MtChimney/scripts.pory"
	.string "Ajá…\n"
# 341 "data/maps/MtChimney/scripts.pory"
	.string "Ya veo…\p"
# 342 "data/maps/MtChimney/scripts.pory"
	.string "He oído a AQUILES quejarse de alguien\n"
# 343 "data/maps/MtChimney/scripts.pory"
	.string "que intentaba tirar por la borda los\l"
# 344 "data/maps/MtChimney/scripts.pory"
	.string "terribles designios del EQUIPO AQUA.\p"
# 345 "data/maps/MtChimney/scripts.pory"
	.string "Seguro que hablaba de ti.\p"
# 346 "data/maps/MtChimney/scripts.pory"
	.string "¡Ja! ¿Y también buscas problemas\n"
# 347 "data/maps/MtChimney/scripts.pory"
	.string "con nosotros, el EQUIPO MAGMA?\p"
# 348 "data/maps/MtChimney/scripts.pory"
	.string "Escúchame bien. Desde siempre,\n"
# 349 "data/maps/MtChimney/scripts.pory"
	.string "los seres vivos han necesitado\l"
# 350 "data/maps/MtChimney/scripts.pory"
	.string "la tierra para vivir. \p"
# 351 "data/maps/MtChimney/scripts.pory"
	.string "¡La tierra lo es todo!\n"
# 352 "data/maps/MtChimney/scripts.pory"
	.string "¡Su importancia es vital!\p"
# 353 "data/maps/MtChimney/scripts.pory"
	.string "Por eso el EQUIPO MAGMA se está\n"
# 354 "data/maps/MtChimney/scripts.pory"
	.string "dedicando a expandir la tierra firme.\p"
# 355 "data/maps/MtChimney/scripts.pory"
	.string "¡Es por el bien de la humanidad\n"
# 356 "data/maps/MtChimney/scripts.pory"
	.string "y de los POKéMON!\p"
# 357 "data/maps/MtChimney/scripts.pory"
	.string "Y por eso necesitamos el poder\n"
# 358 "data/maps/MtChimney/scripts.pory"
	.string "que duerme en esa montaña.\p"
# 359 "data/maps/MtChimney/scripts.pory"
	.string "¡Oh! No debería haberte dicho eso.\n"
# 360 "data/maps/MtChimney/scripts.pory"
	.string "Total, no es asunto tuyo.\p"
# 361 "data/maps/MtChimney/scripts.pory"
	.string "¡Pero no importa! ¡Ahora sufrirás\n"
# 362 "data/maps/MtChimney/scripts.pory"
	.string "las consecuencias de haberte\l"
# 363 "data/maps/MtChimney/scripts.pory"
	.string "entrometido en nuestros planes!$"
# 364 "data/maps/MtChimney/scripts.pory"

# 365 "data/maps/MtChimney/scripts.pory"

# 366 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 367 "data/maps/MtChimney/scripts.pory"
	.string "MAGNO: Ya basta.\n"
# 368 "data/maps/MtChimney/scripts.pory"
	.string "Esta vez has ganado.\p"
# 369 "data/maps/MtChimney/scripts.pory"
	.string "Pero no pienses que es la última vez\n"
# 370 "data/maps/MtChimney/scripts.pory"
	.string "que oirás hablar del EQUIPO MAGMA.\p"
# 371 "data/maps/MtChimney/scripts.pory"
	.string "Jua, jua, jua…\p"
# 372 "data/maps/MtChimney/scripts.pory"
	.string "El METEORITO no importa. Si logramos\n"
# 373 "data/maps/MtChimney/scripts.pory"
	.string "hacernos con la ESFERA… Jua, jua…$"
# 374 "data/maps/MtChimney/scripts.pory"

# 375 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 376 "data/maps/MtChimney/scripts.pory"
	.string "¡Je, je, je!\p"
# 377 "data/maps/MtChimney/scripts.pory"
	.string "¡Así que has llegado hasta aquí!\p"
# 378 "data/maps/MtChimney/scripts.pory"
	.string "¡Pero ya es demasiado tarde!\n"
# 379 "data/maps/MtChimney/scripts.pory"
	.string "¡He entregado el METEORITO\l"
# 380 "data/maps/MtChimney/scripts.pory"
	.string "de la CASCADA METEORO al JEFE!$"
# 381 "data/maps/MtChimney/scripts.pory"

# 382 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 383 "data/maps/MtChimney/scripts.pory"
	.string "Ji, ji, ji…\p"
# 384 "data/maps/MtChimney/scripts.pory"
	.string "Mi derrota es irrelevante. Si el JEFE\n"
# 385 "data/maps/MtChimney/scripts.pory"
	.string "logra despertar a esa cosa…$"
# 386 "data/maps/MtChimney/scripts.pory"

# 387 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 388 "data/maps/MtChimney/scripts.pory"
	.string "¡JEFE, date prisa!\n"
# 389 "data/maps/MtChimney/scripts.pory"
	.string "¡Transmítele la energía del METEORITO!\p"
# 390 "data/maps/MtChimney/scripts.pory"
	.string "Ji, ji, ji…$"
# 391 "data/maps/MtChimney/scripts.pory"

# 392 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 393 "data/maps/MtChimney/scripts.pory"
	.string "Nosotros, los del EQUIPO MAGMA,\n"
# 394 "data/maps/MtChimney/scripts.pory"
	.string "estamos trabajando mucho en beneficio\l"
# 395 "data/maps/MtChimney/scripts.pory"
	.string "de todos.\p"
# 396 "data/maps/MtChimney/scripts.pory"
	.string "Porque, si hay más tierra,\n"
# 397 "data/maps/MtChimney/scripts.pory"
	.string "habrá más sitios donde vivir.\l"
# 398 "data/maps/MtChimney/scripts.pory"
	.string "¡Todo el mundo será más feliz!$"
# 399 "data/maps/MtChimney/scripts.pory"

# 400 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 401 "data/maps/MtChimney/scripts.pory"
	.string "¿Eh?\n"
# 402 "data/maps/MtChimney/scripts.pory"
	.string "¿Qué quieres decir con que he perdido?$"
# 403 "data/maps/MtChimney/scripts.pory"

# 404 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 405 "data/maps/MtChimney/scripts.pory"
	.string "Nuestro JEFE dice que todo el mundo\n"
# 406 "data/maps/MtChimney/scripts.pory"
	.string "será más feliz…\p"
# 407 "data/maps/MtChimney/scripts.pory"
	.string "¿Pero por qué todo el mundo parece\n"
# 408 "data/maps/MtChimney/scripts.pory"
	.string "llevarnos la contraria?$"
# 409 "data/maps/MtChimney/scripts.pory"

# 410 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 411 "data/maps/MtChimney/scripts.pory"
	.string "¡Si la tierra fuera más vasta, podría\n"
# 412 "data/maps/MtChimney/scripts.pory"
	.string "tener una casona sólo para mí!\p"
# 413 "data/maps/MtChimney/scripts.pory"
	.string "¡La construiré sobre terreno volcánico!$"
# 414 "data/maps/MtChimney/scripts.pory"

# 415 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 416 "data/maps/MtChimney/scripts.pory"
	.string "Ya me he quedado sin casona…$"
# 417 "data/maps/MtChimney/scripts.pory"

# 418 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 419 "data/maps/MtChimney/scripts.pory"
	.string "¡Alguien tan joven como tú\n"
# 420 "data/maps/MtChimney/scripts.pory"
	.string "no tendría que estar aquí!$"
# 421 "data/maps/MtChimney/scripts.pory"

# 422 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 423 "data/maps/MtChimney/scripts.pory"
	.string "Esos plastas del EQUIPO AQUA…\n"
# 424 "data/maps/MtChimney/scripts.pory"
	.string "¡Siempre se meten en todo!$"
# 425 "data/maps/MtChimney/scripts.pory"

# 426 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 427 "data/maps/MtChimney/scripts.pory"
	.string "¡Los METEORITOS contienen\n"
# 428 "data/maps/MtChimney/scripts.pory"
	.string "un poder inmenso!$"
# 429 "data/maps/MtChimney/scripts.pory"

# 430 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 431 "data/maps/MtChimney/scripts.pory"
	.string "¡Será mejor que no nos\n"
# 432 "data/maps/MtChimney/scripts.pory"
	.string "busques las cosquillas!\p"
# 433 "data/maps/MtChimney/scripts.pory"
	.string "¡Queremos despertar a esa\n"
# 434 "data/maps/MtChimney/scripts.pory"
	.string "cosa en beneficio de todos!$"
# 435 "data/maps/MtChimney/scripts.pory"

# 436 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 437 "data/maps/MtChimney/scripts.pory"
	.string "¡Somos el EQUIPO MAGMA!\p"
# 438 "data/maps/MtChimney/scripts.pory"
	.string "¡Ellos son el EQUIPO AQUA!\p"
# 439 "data/maps/MtChimney/scripts.pory"
	.string "¡Me fastidia mogollón que\n"
# 440 "data/maps/MtChimney/scripts.pory"
	.string "casi nos copien el nombre!$"
# 441 "data/maps/MtChimney/scripts.pory"

# 442 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 443 "data/maps/MtChimney/scripts.pory"
	.string "¡Eso, eso!\n"
# 444 "data/maps/MtChimney/scripts.pory"
	.string "¡Abrasémoslos!$"
# 445 "data/maps/MtChimney/scripts.pory"

# 446 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 447 "data/maps/MtChimney/scripts.pory"
	.string "¡Seguiremos luchando por expandir\n"
# 448 "data/maps/MtChimney/scripts.pory"
	.string "la tierra firme!$"
# 449 "data/maps/MtChimney/scripts.pory"

# 450 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 451 "data/maps/MtChimney/scripts.pory"
	.string "¡Guaguaguauuuu!$"
# 452 "data/maps/MtChimney/scripts.pory"

# 453 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 454 "data/maps/MtChimney/scripts.pory"
	.string "AQUILES: ¡{PLAYER}, grrrr!\n"
# 455 "data/maps/MtChimney/scripts.pory"
	.string "¡Tendría que haberlo supuesto!\p"
# 456 "data/maps/MtChimney/scripts.pory"
	.string "¡Ya puedes ver hasta dónde llega\n"
# 457 "data/maps/MtChimney/scripts.pory"
	.string "la locura del EQUIPO MAGMA!\p"
# 458 "data/maps/MtChimney/scripts.pory"
	.string "¡Están intentando transmitir el poder\n"
# 459 "data/maps/MtChimney/scripts.pory"
	.string "del METEORITO robado al volcán!\p"
# 460 "data/maps/MtChimney/scripts.pory"
	.string "¡Eso provocará que el volcán\n"
# 461 "data/maps/MtChimney/scripts.pory"
	.string "entre en erupción!$"
# 462 "data/maps/MtChimney/scripts.pory"

# 463 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 464 "data/maps/MtChimney/scripts.pory"
	.string "AQUILES: Grrr…\p"
# 465 "data/maps/MtChimney/scripts.pory"
	.string "¡Quiero pararle los pies a ese MAGNO,\n"
# 466 "data/maps/MtChimney/scripts.pory"
	.string "pero no puedo!\p"
# 467 "data/maps/MtChimney/scripts.pory"
	.string "¡No si tengo que enfrentarme\n"
# 468 "data/maps/MtChimney/scripts.pory"
	.string "a tres adversarios a la vez!$"
# 469 "data/maps/MtChimney/scripts.pory"

# 470 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 471 "data/maps/MtChimney/scripts.pory"
	.string "AQUILES: ¡{PLAYER}, gracias!\p"
# 472 "data/maps/MtChimney/scripts.pory"
	.string "¡Con tu ayuda hemos echado por tierra\n"
# 473 "data/maps/MtChimney/scripts.pory"
	.string "el destructivo plan del EQUIPO MAGMA!\p"
# 474 "data/maps/MtChimney/scripts.pory"
	.string "Pero tú…\n"
# 475 "data/maps/MtChimney/scripts.pory"
	.string "¿de qué lado estás?\p"
# 476 "data/maps/MtChimney/scripts.pory"
	.string "Bah, no importa.\p"
# 477 "data/maps/MtChimney/scripts.pory"
	.string "No bajaremos la guardia en lo que\n"
# 478 "data/maps/MtChimney/scripts.pory"
	.string "concierne al malvado EQUIPO MAGMA.\p"
# 479 "data/maps/MtChimney/scripts.pory"
	.string "¡Hasta la próxima, {PLAYER}!$"
# 480 "data/maps/MtChimney/scripts.pory"

# 481 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 482 "data/maps/MtChimney/scripts.pory"
	.string "Vaya… El EQUIPO MAGMA nos supera\n"
# 483 "data/maps/MtChimney/scripts.pory"
	.string "en número. ¡No podemos con ellos!$"
# 484 "data/maps/MtChimney/scripts.pory"

# 485 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 486 "data/maps/MtChimney/scripts.pory"
	.string "Si expanden la tierra, el hábitat de los\n"
# 487 "data/maps/MtChimney/scripts.pory"
	.string "POKéMON de tipo AGUA se reducirá.$"
# 488 "data/maps/MtChimney/scripts.pory"

# 489 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 490 "data/maps/MtChimney/scripts.pory"
	.string "¡Somos el EQUIPO AQUA!\p"
# 491 "data/maps/MtChimney/scripts.pory"
	.string "¡Ellos son el EQUIPO MAGMA!\p"
# 492 "data/maps/MtChimney/scripts.pory"
	.string "¡Me fastidia mogollón que\n"
# 493 "data/maps/MtChimney/scripts.pory"
	.string "casi nos copien el nombre!$"
# 494 "data/maps/MtChimney/scripts.pory"

# 495 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 496 "data/maps/MtChimney/scripts.pory"
	.string "¡Guau, guau, guau!$"
# 497 "data/maps/MtChimney/scripts.pory"

# 498 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 499 "data/maps/MtChimney/scripts.pory"
	.string "Las GALLETAS LAVA son la especialidad\n"
# 500 "data/maps/MtChimney/scripts.pory"
	.string "del MONTE CENIZO.\p"
# 501 "data/maps/MtChimney/scripts.pory"
	.string "Prueba una. Son sólo 200¥.$"
# 502 "data/maps/MtChimney/scripts.pory"

# 503 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 504 "data/maps/MtChimney/scripts.pory"
	.string "¡Muchas gracias!$"
# 505 "data/maps/MtChimney/scripts.pory"

# 506 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 507 "data/maps/MtChimney/scripts.pory"
	.string "Pero vamos a ver: si no tienes dinero,\n"
# 508 "data/maps/MtChimney/scripts.pory"
	.string "no puedes comprar nada de nada.$"
# 509 "data/maps/MtChimney/scripts.pory"

# 510 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 511 "data/maps/MtChimney/scripts.pory"
	.string "Bueno. Tú te lo pierdes…$"
# 512 "data/maps/MtChimney/scripts.pory"

# 513 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 514 "data/maps/MtChimney/scripts.pory"
	.string "Hay un METEORITO dentro de\n"
# 515 "data/maps/MtChimney/scripts.pory"
	.string "una extraña máquina…\p"
# 516 "data/maps/MtChimney/scripts.pory"
	.string "Parece que la máquina está almacenando\n"
# 517 "data/maps/MtChimney/scripts.pory"
	.string "energía dentro del METEORITO.$"
# 518 "data/maps/MtChimney/scripts.pory"

# 519 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 520 "data/maps/MtChimney/scripts.pory"
	.string "Hay un METEORITO dentro de\n"
# 521 "data/maps/MtChimney/scripts.pory"
	.string "una extraña máquina…\p"
# 522 "data/maps/MtChimney/scripts.pory"
	.string "¿Quieres sacar el METEORITO?$"
# 523 "data/maps/MtChimney/scripts.pory"

# 524 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 525 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} sacó el METEORITO\n"
# 526 "data/maps/MtChimney/scripts.pory"
	.string "de la extraña máquina.$"
# 527 "data/maps/MtChimney/scripts.pory"

# 528 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 529 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} dejó el METEORITO\n"
# 530 "data/maps/MtChimney/scripts.pory"
	.string "donde estaba.$"
# 531 "data/maps/MtChimney/scripts.pory"

# 532 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 533 "data/maps/MtChimney/scripts.pory"
	.string "Esta extraña máquina…\n"
# 534 "data/maps/MtChimney/scripts.pory"
	.string "No responde…$"
# 535 "data/maps/MtChimney/scripts.pory"

# 536 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 537 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} DESFILADERO\n"
# 538 "data/maps/MtChimney/scripts.pory"
	.string "PUEBLO LAVACALDA MÁS ADELANTE$"
# 539 "data/maps/MtChimney/scripts.pory"

# 540 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 541 "data/maps/MtChimney/scripts.pory"
	.string "He estado en las fuentes termales\n"
# 542 "data/maps/MtChimney/scripts.pory"
	.string "y he descansado mis pobres huesos.\l"
# 543 "data/maps/MtChimney/scripts.pory"
	.string "¡Ahora me siento fuerte como un roble!$"
# 544 "data/maps/MtChimney/scripts.pory"

# 545 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 546 "data/maps/MtChimney/scripts.pory"
	.string "Vaya, vaya, vaya…\n"
# 547 "data/maps/MtChimney/scripts.pory"
	.string "Tienes un estilo increíble luchando.$"
# 548 "data/maps/MtChimney/scripts.pory"

# 549 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 550 "data/maps/MtChimney/scripts.pory"
	.string "Soy una POKéABU con mucha experiencia,\n"
# 551 "data/maps/MtChimney/scripts.pory"
	.string "pero aún me pueden dar una lección…$"
# 552 "data/maps/MtChimney/scripts.pory"

# 553 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 554 "data/maps/MtChimney/scripts.pory"
	.string "Gracias, joven. Me ha hecho ilusión\n"
# 555 "data/maps/MtChimney/scripts.pory"
	.string "enfrentarme a las nuevas generaciones.\p"
# 556 "data/maps/MtChimney/scripts.pory"
	.string "No dudes en venir a verme en alguna\n"
# 557 "data/maps/MtChimney/scripts.pory"
	.string "otra ocasión para combatir de nuevo.$"
# 558 "data/maps/MtChimney/scripts.pory"

# 559 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 560 "data/maps/MtChimney/scripts.pory"
	.string "Si eres capaz de fundir tu corazón\n"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "con los de tus POKéMON, sin duda\l"
# 562 "data/maps/MtChimney/scripts.pory"
	.string "lograrás todo lo que te propongas.$"
# 563 "data/maps/MtChimney/scripts.pory"

# 564 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 565 "data/maps/MtChimney/scripts.pory"
	.string "Vaya, vaya, vaya…\n"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "Tienes un estilo increíble luchando.$"
# 567 "data/maps/MtChimney/scripts.pory"

# 568 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 569 "data/maps/MtChimney/scripts.pory"
	.string "Es posible que tu corazón y los de tus\n"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "POKéMON sean sólo uno.$"
# 571 "data/maps/MtChimney/scripts.pory"

# 572 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 573 "data/maps/MtChimney/scripts.pory"
	.string "Estoy la mar de nerviosa. Tengo que\n"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "descargar adrenalina. ¡Vamos a luchar!$"
# 575 "data/maps/MtChimney/scripts.pory"

# 576 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 577 "data/maps/MtChimney/scripts.pory"
	.string "Me he quedado la mar de tranquila…$"
# 578 "data/maps/MtChimney/scripts.pory"

# 579 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 580 "data/maps/MtChimney/scripts.pory"
	.string "No hay nada como un poco de ejercicio\n"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "para recuperar el buen humor.$"
# 582 "data/maps/MtChimney/scripts.pory"

# 583 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 584 "data/maps/MtChimney/scripts.pory"
	.string "Por fin he llegado al MONTE CENIZO.\n"
# 585 "data/maps/MtChimney/scripts.pory"
	.string "¡Y ahora quiero un combate POKéMON!$"
# 586 "data/maps/MtChimney/scripts.pory"

# 587 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 588 "data/maps/MtChimney/scripts.pory"
	.string "Tu manera de luchar…\n"
# 589 "data/maps/MtChimney/scripts.pory"
	.string "¡es como una erupción volcánica!$"
# 590 "data/maps/MtChimney/scripts.pory"

# 591 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 592 "data/maps/MtChimney/scripts.pory"
	.string "Pues sí, por fin he llegado al MONTE\n"
# 593 "data/maps/MtChimney/scripts.pory"
	.string "CENIZO y no me voy a dedicar\l"
# 594 "data/maps/MtChimney/scripts.pory"
	.string "sólo a hacer visitas…\p"
# 595 "data/maps/MtChimney/scripts.pory"
	.string "También quiero luchar un poquito\n"
# 596 "data/maps/MtChimney/scripts.pory"
	.string "y comprar GALLETAS de recuerdo.$"
# 597 "data/maps/MtChimney/scripts.pory"

# 598 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 599 "data/maps/MtChimney/scripts.pory"
	.string "Desde que fui a los baños termales,\n"
# 600 "data/maps/MtChimney/scripts.pory"
	.string "me siento como nueva.\l"
# 601 "data/maps/MtChimney/scripts.pory"
	.string "¡Seguro que te gano!$"
# 602 "data/maps/MtChimney/scripts.pory"

# 603 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 604 "data/maps/MtChimney/scripts.pory"
	.string "¡Achís!\n"
# 605 "data/maps/MtChimney/scripts.pory"
	.string "¡Creo que he pillado frío!$"
# 606 "data/maps/MtChimney/scripts.pory"

# 607 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 608 "data/maps/MtChimney/scripts.pory"
	.string "Mejor me vuelvo a los baños…\n"
# 609 "data/maps/MtChimney/scripts.pory"
	.string "¿Te apuntas?\p"
# 610 "data/maps/MtChimney/scripts.pory"
	.string "Ya, ya sé que tienes cosas más\n"
# 611 "data/maps/MtChimney/scripts.pory"
	.string "importantes que hacer…$"
# 612 "data/maps/MtChimney/scripts.pory"

# 613 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 614 "data/maps/MtChimney/scripts.pory"
	.string "¡Esta montaña está que arde! ¡Está\n"
# 615 "data/maps/MtChimney/scripts.pory"
	.string "llena de gente impetuosa y apasionada!$"
# 616 "data/maps/MtChimney/scripts.pory"

# 617 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 618 "data/maps/MtChimney/scripts.pory"
	.string "¡Me has dejado echando humo!$"
# 619 "data/maps/MtChimney/scripts.pory"

# 620 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 621 "data/maps/MtChimney/scripts.pory"
	.string "¡Debería ir a los BAÑOS TERMALES\n"
# 622 "data/maps/MtChimney/scripts.pory"
	.string "de LAVACALDA, como hacen todos!$"
# 623 "data/maps/MtChimney/scripts.pory"

# 624 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 625 "data/maps/MtChimney/scripts.pory"
	.string "Me gusta la gente entusiasta como tú.\n"
# 626 "data/maps/MtChimney/scripts.pory"
	.string "Te voy a registrar en mi POKéNAV.$"
# 627 "data/maps/MtChimney/scripts.pory"

# 628 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 629 "data/maps/MtChimney/scripts.pory"
	.string "¡Hay tanta gente que rebosa energía\n"
# 630 "data/maps/MtChimney/scripts.pory"
	.string "a mi alrededor que no puedo perder!$"
# 631 "data/maps/MtChimney/scripts.pory"

# 632 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 633 "data/maps/MtChimney/scripts.pory"
	.string "¡Se ve que a ti te gusta\n"
# 634 "data/maps/MtChimney/scripts.pory"
	.string "escaldar a la gente!$"
# 635 "data/maps/MtChimney/scripts.pory"

# 636 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 637 "data/maps/MtChimney/scripts.pory"
	.string "Va a ser que me he abrigado demasiado\n"
# 638 "data/maps/MtChimney/scripts.pory"
	.string "para el calor que hace por aquí.$"
