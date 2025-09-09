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
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 109 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 110 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 111 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 112 "data/maps/MtChimney/scripts.pory"
	release
# 113 "data/maps/MtChimney/scripts.pory"
	end
# 114 "data/maps/MtChimney/scripts.pory"

# 115 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 116 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 117 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 118 "data/maps/MtChimney/scripts.pory"
	release
# 119 "data/maps/MtChimney/scripts.pory"
	end
# 120 "data/maps/MtChimney/scripts.pory"
.else
# 121 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 122 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 123 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 124 "data/maps/MtChimney/scripts.pory"
	release
# 125 "data/maps/MtChimney/scripts.pory"
	end
# 126 "data/maps/MtChimney/scripts.pory"

# 127 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 128 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 129 "data/maps/MtChimney/scripts.pory"
	release
# 130 "data/maps/MtChimney/scripts.pory"
	end
# 131 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 132 "data/maps/MtChimney/scripts.pory"

# 133 "data/maps/MtChimney/scripts.pory"

# 134 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 135 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 136 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 137 "data/maps/MtChimney/scripts.pory"
	return
# 138 "data/maps/MtChimney/scripts.pory"

# 139 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 140 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 141 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 142 "data/maps/MtChimney/scripts.pory"
	release
# 143 "data/maps/MtChimney/scripts.pory"
	end
# 144 "data/maps/MtChimney/scripts.pory"

# 145 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 146 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 147 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 148 "data/maps/MtChimney/scripts.pory"
	release
# 149 "data/maps/MtChimney/scripts.pory"
	end
# 150 "data/maps/MtChimney/scripts.pory"

# 151 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 152 "data/maps/MtChimney/scripts.pory"
	walk_up
# 153 "data/maps/MtChimney/scripts.pory"
	walk_up
# 154 "data/maps/MtChimney/scripts.pory"
	walk_up
# 155 "data/maps/MtChimney/scripts.pory"
	walk_up
# 156 "data/maps/MtChimney/scripts.pory"
	walk_up
# 157 "data/maps/MtChimney/scripts.pory"
	walk_up
# 158 "data/maps/MtChimney/scripts.pory"
	walk_right
# 159 "data/maps/MtChimney/scripts.pory"
	step_end
# 160 "data/maps/MtChimney/scripts.pory"

# 161 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 162 "data/maps/MtChimney/scripts.pory"
	walk_left
# 163 "data/maps/MtChimney/scripts.pory"
	walk_down
# 164 "data/maps/MtChimney/scripts.pory"
	walk_down
# 165 "data/maps/MtChimney/scripts.pory"
	walk_down
# 166 "data/maps/MtChimney/scripts.pory"
	walk_down
# 167 "data/maps/MtChimney/scripts.pory"
	walk_down
# 168 "data/maps/MtChimney/scripts.pory"
	walk_down
# 169 "data/maps/MtChimney/scripts.pory"
	walk_down
# 170 "data/maps/MtChimney/scripts.pory"
	step_end
# 171 "data/maps/MtChimney/scripts.pory"

# 172 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 173 "data/maps/MtChimney/scripts.pory"
	walk_up
# 174 "data/maps/MtChimney/scripts.pory"
	walk_up
# 175 "data/maps/MtChimney/scripts.pory"
	walk_up
# 176 "data/maps/MtChimney/scripts.pory"
	walk_up
# 177 "data/maps/MtChimney/scripts.pory"
	walk_up
# 178 "data/maps/MtChimney/scripts.pory"
	walk_right
# 179 "data/maps/MtChimney/scripts.pory"
	walk_right
# 180 "data/maps/MtChimney/scripts.pory"
	step_end
# 181 "data/maps/MtChimney/scripts.pory"

# 182 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 183 "data/maps/MtChimney/scripts.pory"
	walk_left
# 184 "data/maps/MtChimney/scripts.pory"
	walk_left
# 185 "data/maps/MtChimney/scripts.pory"
	walk_down
# 186 "data/maps/MtChimney/scripts.pory"
	walk_down
# 187 "data/maps/MtChimney/scripts.pory"
	walk_down
# 188 "data/maps/MtChimney/scripts.pory"
	walk_down
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 190 "data/maps/MtChimney/scripts.pory"
	walk_down
# 191 "data/maps/MtChimney/scripts.pory"
	walk_down
# 192 "data/maps/MtChimney/scripts.pory"
	step_end
# 193 "data/maps/MtChimney/scripts.pory"

# 194 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 195 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 196 "data/maps/MtChimney/scripts.pory"
	end
# 197 "data/maps/MtChimney/scripts.pory"

# 198 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 199 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 200 "data/maps/MtChimney/scripts.pory"
	end
# 201 "data/maps/MtChimney/scripts.pory"

# 202 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 203 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 204 "data/maps/MtChimney/scripts.pory"
	end
# 205 "data/maps/MtChimney/scripts.pory"

# 206 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 207 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 208 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/MtChimney/scripts.pory"
	end
# 210 "data/maps/MtChimney/scripts.pory"

# 211 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 212 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 213 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/MtChimney/scripts.pory"
	end
# 215 "data/maps/MtChimney/scripts.pory"

# 216 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 217 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 218 "data/maps/MtChimney/scripts.pory"
	end
# 219 "data/maps/MtChimney/scripts.pory"

# 220 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 221 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 222 "data/maps/MtChimney/scripts.pory"
	end
# 223 "data/maps/MtChimney/scripts.pory"

# 224 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 225 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 226 "data/maps/MtChimney/scripts.pory"
	end
# 227 "data/maps/MtChimney/scripts.pory"

# 228 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 229 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 230 "data/maps/MtChimney/scripts.pory"
	end
# 231 "data/maps/MtChimney/scripts.pory"

# 232 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 233 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 234 "data/maps/MtChimney/scripts.pory"
	end
# 235 "data/maps/MtChimney/scripts.pory"

# 236 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 237 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 238 "data/maps/MtChimney/scripts.pory"
	end
# 239 "data/maps/MtChimney/scripts.pory"

# 240 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 241 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 242 "data/maps/MtChimney/scripts.pory"
	end
# 243 "data/maps/MtChimney/scripts.pory"

# 244 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 245 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 246 "data/maps/MtChimney/scripts.pory"
	end
# 247 "data/maps/MtChimney/scripts.pory"

# 248 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 249 "data/maps/MtChimney/scripts.pory"
	lockall
# 250 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 251 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 252 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 253 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 254 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 255 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 256 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 257 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 258 "data/maps/MtChimney/scripts.pory"
	releaseall
# 259 "data/maps/MtChimney/scripts.pory"
	end
# 260 "data/maps/MtChimney/scripts.pory"

# 261 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 262 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 263 "data/maps/MtChimney/scripts.pory"
	releaseall
# 264 "data/maps/MtChimney/scripts.pory"
	end
# 265 "data/maps/MtChimney/scripts.pory"

# 266 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 267 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 268 "data/maps/MtChimney/scripts.pory"
	releaseall
# 269 "data/maps/MtChimney/scripts.pory"
	end
# 270 "data/maps/MtChimney/scripts.pory"

# 271 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 272 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 273 "data/maps/MtChimney/scripts.pory"
	releaseall
# 274 "data/maps/MtChimney/scripts.pory"
	end
# 275 "data/maps/MtChimney/scripts.pory"

# 276 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 277 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 278 "data/maps/MtChimney/scripts.pory"
	end
# 279 "data/maps/MtChimney/scripts.pory"

# 280 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 281 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 282 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 283 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 284 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 285 "data/maps/MtChimney/scripts.pory"
	release
# 286 "data/maps/MtChimney/scripts.pory"
	end
# 287 "data/maps/MtChimney/scripts.pory"

# 288 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 289 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 290 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 291 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 292 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 293 "data/maps/MtChimney/scripts.pory"
	release
# 294 "data/maps/MtChimney/scripts.pory"
	end
# 295 "data/maps/MtChimney/scripts.pory"

# 296 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 297 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 298 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 299 "data/maps/MtChimney/scripts.pory"
	end
# 300 "data/maps/MtChimney/scripts.pory"

# 301 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 302 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 303 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/MtChimney/scripts.pory"
	end
# 305 "data/maps/MtChimney/scripts.pory"

# 306 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 307 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 308 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 309 "data/maps/MtChimney/scripts.pory"
	end
# 310 "data/maps/MtChimney/scripts.pory"

# 311 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 312 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 313 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 314 "data/maps/MtChimney/scripts.pory"
	end
# 315 "data/maps/MtChimney/scripts.pory"

# 316 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 317 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 318 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 319 "data/maps/MtChimney/scripts.pory"
	end
# 320 "data/maps/MtChimney/scripts.pory"

# 321 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 322 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 323 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 324 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 325 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 326 "data/maps/MtChimney/scripts.pory"
	release
# 327 "data/maps/MtChimney/scripts.pory"
	end
# 328 "data/maps/MtChimney/scripts.pory"

# 329 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 330 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 331 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 332 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 333 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 334 "data/maps/MtChimney/scripts.pory"
	release
# 335 "data/maps/MtChimney/scripts.pory"
	end
# 336 "data/maps/MtChimney/scripts.pory"

# 337 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 338 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 339 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 340 "data/maps/MtChimney/scripts.pory"
	end
# 341 "data/maps/MtChimney/scripts.pory"

# 342 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 343 "data/maps/MtChimney/scripts.pory"
	.string "Ese METEORITO posee un gran poder…\p"
# 344 "data/maps/MtChimney/scripts.pory"
	.string "Si lo amplificamos con esta máquina,\n"
# 345 "data/maps/MtChimney/scripts.pory"
	.string "la actividad volcánica del MONTE CENIZO\l"
# 346 "data/maps/MtChimney/scripts.pory"
	.string "aumentará al instante…\p"
# 347 "data/maps/MtChimney/scripts.pory"
	.string "Su energía inundará el cráter\n"
# 348 "data/maps/MtChimney/scripts.pory"
	.string "y entonces…\l"
# 349 "data/maps/MtChimney/scripts.pory"
	.string "Jua, jua, jua…$"
# 350 "data/maps/MtChimney/scripts.pory"

# 351 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 352 "data/maps/MtChimney/scripts.pory"
	.string "MAGNO: ¿Eh?\n"
# 353 "data/maps/MtChimney/scripts.pory"
	.string "¿Quién eres tú?\p"
# 354 "data/maps/MtChimney/scripts.pory"
	.string "Ajá…\n"
# 355 "data/maps/MtChimney/scripts.pory"
	.string "Ya veo…\p"
# 356 "data/maps/MtChimney/scripts.pory"
	.string "He oído a AQUILES quejarse de alguien\n"
# 357 "data/maps/MtChimney/scripts.pory"
	.string "que intentaba tirar por la borda los\l"
# 358 "data/maps/MtChimney/scripts.pory"
	.string "terribles designios del EQUIPO AQUA.\p"
# 359 "data/maps/MtChimney/scripts.pory"
	.string "Seguro que hablaba de ti.\p"
# 360 "data/maps/MtChimney/scripts.pory"
	.string "¡Ja! ¿Y también buscas problemas\n"
# 361 "data/maps/MtChimney/scripts.pory"
	.string "con nosotros, el EQUIPO MAGMA?\p"
# 362 "data/maps/MtChimney/scripts.pory"
	.string "Escúchame bien. Desde siempre,\n"
# 363 "data/maps/MtChimney/scripts.pory"
	.string "los seres vivos han necesitado\l"
# 364 "data/maps/MtChimney/scripts.pory"
	.string "la tierra para vivir. \p"
# 365 "data/maps/MtChimney/scripts.pory"
	.string "¡La tierra lo es todo!\n"
# 366 "data/maps/MtChimney/scripts.pory"
	.string "¡Su importancia es vital!\p"
# 367 "data/maps/MtChimney/scripts.pory"
	.string "Por eso el EQUIPO MAGMA se está\n"
# 368 "data/maps/MtChimney/scripts.pory"
	.string "dedicando a expandir la tierra firme.\p"
# 369 "data/maps/MtChimney/scripts.pory"
	.string "¡Es por el bien de la humanidad\n"
# 370 "data/maps/MtChimney/scripts.pory"
	.string "y de los POKéMON!\p"
# 371 "data/maps/MtChimney/scripts.pory"
	.string "Y por eso necesitamos el poder\n"
# 372 "data/maps/MtChimney/scripts.pory"
	.string "que duerme en esa montaña.\p"
# 373 "data/maps/MtChimney/scripts.pory"
	.string "¡Oh! No debería haberte dicho eso.\n"
# 374 "data/maps/MtChimney/scripts.pory"
	.string "Total, no es asunto tuyo.\p"
# 375 "data/maps/MtChimney/scripts.pory"
	.string "¡Pero no importa! ¡Ahora sufrirás\n"
# 376 "data/maps/MtChimney/scripts.pory"
	.string "las consecuencias de haberte\l"
# 377 "data/maps/MtChimney/scripts.pory"
	.string "entrometido en nuestros planes!$"
# 378 "data/maps/MtChimney/scripts.pory"

# 379 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 380 "data/maps/MtChimney/scripts.pory"
	.string "¡¿Qué?!\p"
# 381 "data/maps/MtChimney/scripts.pory"
	.string "¡¿A mí, al gran MAGNO,\n"
# 382 "data/maps/MtChimney/scripts.pory"
	.string "me han dado una lección?!$"
# 383 "data/maps/MtChimney/scripts.pory"

# 384 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 385 "data/maps/MtChimney/scripts.pory"
	.string "MAGNO: Ya basta.\n"
# 386 "data/maps/MtChimney/scripts.pory"
	.string "Esta vez has ganado.\p"
# 387 "data/maps/MtChimney/scripts.pory"
	.string "Pero no pienses que es la última vez\n"
# 388 "data/maps/MtChimney/scripts.pory"
	.string "que oirás hablar del EQUIPO MAGMA.\p"
# 389 "data/maps/MtChimney/scripts.pory"
	.string "Jua, jua, jua…\p"
# 390 "data/maps/MtChimney/scripts.pory"
	.string "El METEORITO no importa. Si logramos\n"
# 391 "data/maps/MtChimney/scripts.pory"
	.string "hacernos con la ESFERA… Jua, jua…$"
# 392 "data/maps/MtChimney/scripts.pory"

# 393 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 394 "data/maps/MtChimney/scripts.pory"
	.string "¡Je, je, je!\p"
# 395 "data/maps/MtChimney/scripts.pory"
	.string "¡Así que has llegado hasta aquí!\p"
# 396 "data/maps/MtChimney/scripts.pory"
	.string "¡Pero ya es demasiado tarde!\n"
# 397 "data/maps/MtChimney/scripts.pory"
	.string "¡He entregado el METEORITO\l"
# 398 "data/maps/MtChimney/scripts.pory"
	.string "de la CASCADA METEORO al JEFE!$"
# 399 "data/maps/MtChimney/scripts.pory"

# 400 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 401 "data/maps/MtChimney/scripts.pory"
	.string "Ji, ji, ji…\p"
# 402 "data/maps/MtChimney/scripts.pory"
	.string "Mi derrota es irrelevante. Si el JEFE\n"
# 403 "data/maps/MtChimney/scripts.pory"
	.string "logra despertar a esa cosa…$"
# 404 "data/maps/MtChimney/scripts.pory"

# 405 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 406 "data/maps/MtChimney/scripts.pory"
	.string "¡JEFE, date prisa!\n"
# 407 "data/maps/MtChimney/scripts.pory"
	.string "¡Transmítele la energía del METEORITO!\p"
# 408 "data/maps/MtChimney/scripts.pory"
	.string "Ji, ji, ji…$"
# 409 "data/maps/MtChimney/scripts.pory"

# 410 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 411 "data/maps/MtChimney/scripts.pory"
	.string "Nosotros, los del EQUIPO MAGMA,\n"
# 412 "data/maps/MtChimney/scripts.pory"
	.string "estamos trabajando mucho en beneficio\l"
# 413 "data/maps/MtChimney/scripts.pory"
	.string "de todos.\p"
# 414 "data/maps/MtChimney/scripts.pory"
	.string "Porque, si hay más tierra,\n"
# 415 "data/maps/MtChimney/scripts.pory"
	.string "habrá más sitios donde vivir.\l"
# 416 "data/maps/MtChimney/scripts.pory"
	.string "¡Todo el mundo será más feliz!$"
# 417 "data/maps/MtChimney/scripts.pory"

# 418 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 419 "data/maps/MtChimney/scripts.pory"
	.string "¿Eh?\n"
# 420 "data/maps/MtChimney/scripts.pory"
	.string "¿Qué quieres decir con que he perdido?$"
# 421 "data/maps/MtChimney/scripts.pory"

# 422 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 423 "data/maps/MtChimney/scripts.pory"
	.string "Nuestro JEFE dice que todo el mundo\n"
# 424 "data/maps/MtChimney/scripts.pory"
	.string "será más feliz…\p"
# 425 "data/maps/MtChimney/scripts.pory"
	.string "¿Pero por qué todo el mundo parece\n"
# 426 "data/maps/MtChimney/scripts.pory"
	.string "llevarnos la contraria?$"
# 427 "data/maps/MtChimney/scripts.pory"

# 428 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 429 "data/maps/MtChimney/scripts.pory"
	.string "¡Si la tierra fuera más vasta, podría\n"
# 430 "data/maps/MtChimney/scripts.pory"
	.string "tener una casona sólo para mí!\p"
# 431 "data/maps/MtChimney/scripts.pory"
	.string "¡La construiré sobre terreno volcánico!$"
# 432 "data/maps/MtChimney/scripts.pory"

# 433 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 434 "data/maps/MtChimney/scripts.pory"
	.string "Ya me he quedado sin casona…$"
# 435 "data/maps/MtChimney/scripts.pory"

# 436 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 437 "data/maps/MtChimney/scripts.pory"
	.string "¡Alguien tan joven como tú\n"
# 438 "data/maps/MtChimney/scripts.pory"
	.string "no tendría que estar aquí!$"
# 439 "data/maps/MtChimney/scripts.pory"

# 440 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 441 "data/maps/MtChimney/scripts.pory"
	.string "Esos plastas del EQUIPO AQUA…\n"
# 442 "data/maps/MtChimney/scripts.pory"
	.string "¡Siempre se meten en todo!$"
# 443 "data/maps/MtChimney/scripts.pory"

# 444 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 445 "data/maps/MtChimney/scripts.pory"
	.string "¡Los METEORITOS contienen\n"
# 446 "data/maps/MtChimney/scripts.pory"
	.string "un poder inmenso!$"
# 447 "data/maps/MtChimney/scripts.pory"

# 448 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 449 "data/maps/MtChimney/scripts.pory"
	.string "¡Será mejor que no nos\n"
# 450 "data/maps/MtChimney/scripts.pory"
	.string "busques las cosquillas!\p"
# 451 "data/maps/MtChimney/scripts.pory"
	.string "¡Queremos despertar a esa\n"
# 452 "data/maps/MtChimney/scripts.pory"
	.string "cosa en beneficio de todos!$"
# 453 "data/maps/MtChimney/scripts.pory"

# 454 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 455 "data/maps/MtChimney/scripts.pory"
	.string "¡Somos el EQUIPO MAGMA!\p"
# 456 "data/maps/MtChimney/scripts.pory"
	.string "¡Ellos son el EQUIPO AQUA!\p"
# 457 "data/maps/MtChimney/scripts.pory"
	.string "¡Me fastidia mogollón que\n"
# 458 "data/maps/MtChimney/scripts.pory"
	.string "casi nos copien el nombre!$"
# 459 "data/maps/MtChimney/scripts.pory"

# 460 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 461 "data/maps/MtChimney/scripts.pory"
	.string "¡Eso, eso!\n"
# 462 "data/maps/MtChimney/scripts.pory"
	.string "¡Abrasémoslos!$"
# 463 "data/maps/MtChimney/scripts.pory"

# 464 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 465 "data/maps/MtChimney/scripts.pory"
	.string "¡Seguiremos luchando por expandir\n"
# 466 "data/maps/MtChimney/scripts.pory"
	.string "la tierra firme!$"
# 467 "data/maps/MtChimney/scripts.pory"

# 468 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 469 "data/maps/MtChimney/scripts.pory"
	.string "¡Guaguaguauuuu!$"
# 470 "data/maps/MtChimney/scripts.pory"

# 471 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 472 "data/maps/MtChimney/scripts.pory"
	.string "AQUILES: ¡{PLAYER}, grrrr!\n"
# 473 "data/maps/MtChimney/scripts.pory"
	.string "¡Tendría que haberlo supuesto!\p"
# 474 "data/maps/MtChimney/scripts.pory"
	.string "¡Ya puedes ver hasta dónde llega\n"
# 475 "data/maps/MtChimney/scripts.pory"
	.string "la locura del EQUIPO MAGMA!\p"
# 476 "data/maps/MtChimney/scripts.pory"
	.string "¡Están intentando transmitir el poder\n"
# 477 "data/maps/MtChimney/scripts.pory"
	.string "del METEORITO robado al volcán!\p"
# 478 "data/maps/MtChimney/scripts.pory"
	.string "¡Eso provocará que el volcán\n"
# 479 "data/maps/MtChimney/scripts.pory"
	.string "entre en erupción!$"
# 480 "data/maps/MtChimney/scripts.pory"

# 481 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 482 "data/maps/MtChimney/scripts.pory"
	.string "AQUILES: Grrr…\p"
# 483 "data/maps/MtChimney/scripts.pory"
	.string "¡Quiero pararle los pies a ese MAGNO,\n"
# 484 "data/maps/MtChimney/scripts.pory"
	.string "pero no puedo!\p"
# 485 "data/maps/MtChimney/scripts.pory"
	.string "¡No si tengo que enfrentarme\n"
# 486 "data/maps/MtChimney/scripts.pory"
	.string "a tres adversarios a la vez!$"
# 487 "data/maps/MtChimney/scripts.pory"

# 488 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 489 "data/maps/MtChimney/scripts.pory"
	.string "AQUILES: ¡{PLAYER}, gracias!\p"
# 490 "data/maps/MtChimney/scripts.pory"
	.string "¡Con tu ayuda hemos echado por tierra\n"
# 491 "data/maps/MtChimney/scripts.pory"
	.string "el destructivo plan del EQUIPO MAGMA!\p"
# 492 "data/maps/MtChimney/scripts.pory"
	.string "Pero tú…\n"
# 493 "data/maps/MtChimney/scripts.pory"
	.string "¿de qué lado estás?\p"
# 494 "data/maps/MtChimney/scripts.pory"
	.string "Bah, no importa.\p"
# 495 "data/maps/MtChimney/scripts.pory"
	.string "No bajaremos la guardia en lo que\n"
# 496 "data/maps/MtChimney/scripts.pory"
	.string "concierne al malvado EQUIPO MAGMA.\p"
# 497 "data/maps/MtChimney/scripts.pory"
	.string "¡Hasta la próxima, {PLAYER}!$"
# 498 "data/maps/MtChimney/scripts.pory"

# 499 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 500 "data/maps/MtChimney/scripts.pory"
	.string "Vaya… El EQUIPO MAGMA nos supera\n"
# 501 "data/maps/MtChimney/scripts.pory"
	.string "en número. ¡No podemos con ellos!$"
# 502 "data/maps/MtChimney/scripts.pory"

# 503 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 504 "data/maps/MtChimney/scripts.pory"
	.string "Si expanden la tierra, el hábitat de los\n"
# 505 "data/maps/MtChimney/scripts.pory"
	.string "POKéMON de tipo AGUA se reducirá.$"
# 506 "data/maps/MtChimney/scripts.pory"

# 507 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 508 "data/maps/MtChimney/scripts.pory"
	.string "¡Somos el EQUIPO AQUA!\p"
# 509 "data/maps/MtChimney/scripts.pory"
	.string "¡Ellos son el EQUIPO MAGMA!\p"
# 510 "data/maps/MtChimney/scripts.pory"
	.string "¡Me fastidia mogollón que\n"
# 511 "data/maps/MtChimney/scripts.pory"
	.string "casi nos copien el nombre!$"
# 512 "data/maps/MtChimney/scripts.pory"

# 513 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 514 "data/maps/MtChimney/scripts.pory"
	.string "¡Guau, guau, guau!$"
# 515 "data/maps/MtChimney/scripts.pory"

# 516 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 517 "data/maps/MtChimney/scripts.pory"
	.string "Las GALLETAS LAVA son la especialidad\n"
# 518 "data/maps/MtChimney/scripts.pory"
	.string "del MONTE CENIZO.\p"
# 519 "data/maps/MtChimney/scripts.pory"
	.string "Prueba una. Son sólo 200¥.$"
# 520 "data/maps/MtChimney/scripts.pory"

# 521 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 522 "data/maps/MtChimney/scripts.pory"
	.string "¡Muchas gracias!$"
# 523 "data/maps/MtChimney/scripts.pory"

# 524 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 525 "data/maps/MtChimney/scripts.pory"
	.string "Pero vamos a ver: si no tienes dinero,\n"
# 526 "data/maps/MtChimney/scripts.pory"
	.string "no puedes comprar nada de nada.$"
# 527 "data/maps/MtChimney/scripts.pory"

# 528 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 529 "data/maps/MtChimney/scripts.pory"
	.string "Bueno. Tú te lo pierdes…$"
# 530 "data/maps/MtChimney/scripts.pory"

# 531 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 532 "data/maps/MtChimney/scripts.pory"
	.string "Hay un METEORITO dentro de\n"
# 533 "data/maps/MtChimney/scripts.pory"
	.string "una extraña máquina…\p"
# 534 "data/maps/MtChimney/scripts.pory"
	.string "Parece que la máquina está almacenando\n"
# 535 "data/maps/MtChimney/scripts.pory"
	.string "energía dentro del METEORITO.$"
# 536 "data/maps/MtChimney/scripts.pory"

# 537 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 538 "data/maps/MtChimney/scripts.pory"
	.string "Hay un METEORITO dentro de\n"
# 539 "data/maps/MtChimney/scripts.pory"
	.string "una extraña máquina…\p"
# 540 "data/maps/MtChimney/scripts.pory"
	.string "¿Quieres sacar el METEORITO?$"
# 541 "data/maps/MtChimney/scripts.pory"

# 542 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 543 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} sacó el METEORITO\n"
# 544 "data/maps/MtChimney/scripts.pory"
	.string "de la extraña máquina.$"
# 545 "data/maps/MtChimney/scripts.pory"

# 546 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 547 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} dejó el METEORITO\n"
# 548 "data/maps/MtChimney/scripts.pory"
	.string "donde estaba.$"
# 549 "data/maps/MtChimney/scripts.pory"

# 550 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 551 "data/maps/MtChimney/scripts.pory"
	.string "Esta extraña máquina…\n"
# 552 "data/maps/MtChimney/scripts.pory"
	.string "No responde…$"
# 553 "data/maps/MtChimney/scripts.pory"

# 554 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 555 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} DESFILADERO\n"
# 556 "data/maps/MtChimney/scripts.pory"
	.string "PUEBLO LAVACALDA MÁS ADELANTE$"
# 557 "data/maps/MtChimney/scripts.pory"

# 558 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 559 "data/maps/MtChimney/scripts.pory"
	.string "He estado en las fuentes termales\n"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "y he descansado mis pobres huesos.\l"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "¡Ahora me siento fuerte como un roble!$"
# 562 "data/maps/MtChimney/scripts.pory"

# 563 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 564 "data/maps/MtChimney/scripts.pory"
	.string "Vaya, vaya, vaya…\n"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "Tienes un estilo increíble luchando.$"
# 566 "data/maps/MtChimney/scripts.pory"

# 567 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 568 "data/maps/MtChimney/scripts.pory"
	.string "Soy una POKéABU con mucha experiencia,\n"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "pero aún me pueden dar una lección…$"
# 570 "data/maps/MtChimney/scripts.pory"

# 571 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 572 "data/maps/MtChimney/scripts.pory"
	.string "Gracias, joven. Me ha hecho ilusión\n"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "enfrentarme a las nuevas generaciones.\p"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "No dudes en venir a verme en alguna\n"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "otra ocasión para combatir de nuevo.$"
# 576 "data/maps/MtChimney/scripts.pory"

# 577 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 578 "data/maps/MtChimney/scripts.pory"
	.string "Si eres capaz de fundir tu corazón\n"
# 579 "data/maps/MtChimney/scripts.pory"
	.string "con los de tus POKéMON, sin duda\l"
# 580 "data/maps/MtChimney/scripts.pory"
	.string "lograrás todo lo que te propongas.$"
# 581 "data/maps/MtChimney/scripts.pory"

# 582 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 583 "data/maps/MtChimney/scripts.pory"
	.string "Vaya, vaya, vaya…\n"
# 584 "data/maps/MtChimney/scripts.pory"
	.string "Tienes un estilo increíble luchando.$"
# 585 "data/maps/MtChimney/scripts.pory"

# 586 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 587 "data/maps/MtChimney/scripts.pory"
	.string "Es posible que tu corazón y los de tus\n"
# 588 "data/maps/MtChimney/scripts.pory"
	.string "POKéMON sean sólo uno.$"
# 589 "data/maps/MtChimney/scripts.pory"

# 590 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 591 "data/maps/MtChimney/scripts.pory"
	.string "Estoy la mar de nerviosa. Tengo que\n"
# 592 "data/maps/MtChimney/scripts.pory"
	.string "descargar adrenalina. ¡Vamos a luchar!$"
# 593 "data/maps/MtChimney/scripts.pory"

# 594 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 595 "data/maps/MtChimney/scripts.pory"
	.string "Me he quedado la mar de tranquila…$"
# 596 "data/maps/MtChimney/scripts.pory"

# 597 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 598 "data/maps/MtChimney/scripts.pory"
	.string "No hay nada como un poco de ejercicio\n"
# 599 "data/maps/MtChimney/scripts.pory"
	.string "para recuperar el buen humor.$"
# 600 "data/maps/MtChimney/scripts.pory"

# 601 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 602 "data/maps/MtChimney/scripts.pory"
	.string "Por fin he llegado al MONTE CENIZO.\n"
# 603 "data/maps/MtChimney/scripts.pory"
	.string "¡Y ahora quiero un combate POKéMON!$"
# 604 "data/maps/MtChimney/scripts.pory"

# 605 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 606 "data/maps/MtChimney/scripts.pory"
	.string "Tu manera de luchar…\n"
# 607 "data/maps/MtChimney/scripts.pory"
	.string "¡es como una erupción volcánica!$"
# 608 "data/maps/MtChimney/scripts.pory"

# 609 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 610 "data/maps/MtChimney/scripts.pory"
	.string "Pues sí, por fin he llegado al MONTE\n"
# 611 "data/maps/MtChimney/scripts.pory"
	.string "CENIZO y no me voy a dedicar\l"
# 612 "data/maps/MtChimney/scripts.pory"
	.string "sólo a hacer visitas…\p"
# 613 "data/maps/MtChimney/scripts.pory"
	.string "También quiero luchar un poquito\n"
# 614 "data/maps/MtChimney/scripts.pory"
	.string "y comprar GALLETAS de recuerdo.$"
# 615 "data/maps/MtChimney/scripts.pory"

# 616 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 617 "data/maps/MtChimney/scripts.pory"
	.string "Desde que fui a los baños termales,\n"
# 618 "data/maps/MtChimney/scripts.pory"
	.string "me siento como nueva.\l"
# 619 "data/maps/MtChimney/scripts.pory"
	.string "¡Seguro que te gano!$"
# 620 "data/maps/MtChimney/scripts.pory"

# 621 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 622 "data/maps/MtChimney/scripts.pory"
	.string "¡Achís!\n"
# 623 "data/maps/MtChimney/scripts.pory"
	.string "¡Creo que he pillado frío!$"
# 624 "data/maps/MtChimney/scripts.pory"

# 625 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 626 "data/maps/MtChimney/scripts.pory"
	.string "Mejor me vuelvo a los baños…\n"
# 627 "data/maps/MtChimney/scripts.pory"
	.string "¿Te apuntas?\p"
# 628 "data/maps/MtChimney/scripts.pory"
	.string "Ya, ya sé que tienes cosas más\n"
# 629 "data/maps/MtChimney/scripts.pory"
	.string "importantes que hacer…$"
# 630 "data/maps/MtChimney/scripts.pory"

# 631 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 632 "data/maps/MtChimney/scripts.pory"
	.string "¡Esta montaña está que arde! ¡Está\n"
# 633 "data/maps/MtChimney/scripts.pory"
	.string "llena de gente impetuosa y apasionada!$"
# 634 "data/maps/MtChimney/scripts.pory"

# 635 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 636 "data/maps/MtChimney/scripts.pory"
	.string "¡Me has dejado echando humo!$"
# 637 "data/maps/MtChimney/scripts.pory"

# 638 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 639 "data/maps/MtChimney/scripts.pory"
	.string "¡Debería ir a los BAÑOS TERMALES\n"
# 640 "data/maps/MtChimney/scripts.pory"
	.string "de LAVACALDA, como hacen todos!$"
# 641 "data/maps/MtChimney/scripts.pory"

# 642 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 643 "data/maps/MtChimney/scripts.pory"
	.string "Me gusta la gente entusiasta como tú.\n"
# 644 "data/maps/MtChimney/scripts.pory"
	.string "Te voy a registrar en mi POKéNAV.$"
# 645 "data/maps/MtChimney/scripts.pory"

# 646 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 647 "data/maps/MtChimney/scripts.pory"
	.string "¡Hay tanta gente que rebosa energía\n"
# 648 "data/maps/MtChimney/scripts.pory"
	.string "a mi alrededor que no puedo perder!$"
# 649 "data/maps/MtChimney/scripts.pory"

# 650 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 651 "data/maps/MtChimney/scripts.pory"
	.string "¡Se ve que a ti te gusta\n"
# 652 "data/maps/MtChimney/scripts.pory"
	.string "escaldar a la gente!$"
# 653 "data/maps/MtChimney/scripts.pory"

# 654 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 655 "data/maps/MtChimney/scripts.pory"
	.string "Va a ser que me he abrigado demasiado\n"
# 656 "data/maps/MtChimney/scripts.pory"
	.string "para el calor que hace por aquí.$"
