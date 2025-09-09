# 1 "data/maps/MauvilleCity/scripts.pory"

# 2 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 3 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 4 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 5 "data/maps/MauvilleCity/scripts.pory"

# 6 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 7 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 8 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 9 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 10 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 11 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 12 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 13 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 14 "data/maps/MauvilleCity/scripts.pory"
	end
# 15 "data/maps/MauvilleCity/scripts.pory"

# 16 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 17 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 18 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 19 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 20 "data/maps/MauvilleCity/scripts.pory"
	return
# 21 "data/maps/MauvilleCity/scripts.pory"

# 22 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 23 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 24 "data/maps/MauvilleCity/scripts.pory"
	end
# 25 "data/maps/MauvilleCity/scripts.pory"

# 26 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 27 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 28 "data/maps/MauvilleCity/scripts.pory"
	end
# 29 "data/maps/MauvilleCity/scripts.pory"

# 30 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 31 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 32 "data/maps/MauvilleCity/scripts.pory"
	end
# 33 "data/maps/MauvilleCity/scripts.pory"

# 34 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 35 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 36 "data/maps/MauvilleCity/scripts.pory"
	end
# 37 "data/maps/MauvilleCity/scripts.pory"

# 38 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 39 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 40 "data/maps/MauvilleCity/scripts.pory"
	end
# 41 "data/maps/MauvilleCity/scripts.pory"

# 42 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 43 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 44 "data/maps/MauvilleCity/scripts.pory"
	end
# 45 "data/maps/MauvilleCity/scripts.pory"

# 46 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 47 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 48 "data/maps/MauvilleCity/scripts.pory"
	end
# 49 "data/maps/MauvilleCity/scripts.pory"

# 50 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 51 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 52 "data/maps/MauvilleCity/scripts.pory"
	end
# 53 "data/maps/MauvilleCity/scripts.pory"

# 54 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 55 "data/maps/MauvilleCity/scripts.pory"
	lock
# 56 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 57 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 58 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 59 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 60 "data/maps/MauvilleCity/scripts.pory"
	release
# 61 "data/maps/MauvilleCity/scripts.pory"
	end
# 62 "data/maps/MauvilleCity/scripts.pory"

# 63 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 64 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 65 "data/maps/MauvilleCity/scripts.pory"
	release
# 66 "data/maps/MauvilleCity/scripts.pory"
	end
# 67 "data/maps/MauvilleCity/scripts.pory"

# 68 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 69 "data/maps/MauvilleCity/scripts.pory"
	lock
# 70 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 71 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 72 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 73 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 74 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 75 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 76 "data/maps/MauvilleCity/scripts.pory"
	release
# 77 "data/maps/MauvilleCity/scripts.pory"
	end
# 78 "data/maps/MauvilleCity/scripts.pory"

# 79 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 80 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 81 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 82 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 83 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/MauvilleCity/scripts.pory"
	release
# 85 "data/maps/MauvilleCity/scripts.pory"
	end
# 86 "data/maps/MauvilleCity/scripts.pory"

# 87 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 88 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 89 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 90 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 91 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 93 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 94 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 95 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 96 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 98 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_ExclamationMark
# 99 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 100 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_Delay48
# 101 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 103 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 104 "data/maps/MauvilleCity/scripts.pory"
	end
# 105 "data/maps/MauvilleCity/scripts.pory"

# 106 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 107 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 108 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 109 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 110 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 111 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 112 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 113 "data/maps/MauvilleCity/scripts.pory"
	end
# 114 "data/maps/MauvilleCity/scripts.pory"

# 115 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 116 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 117 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 118 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 119 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 120 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 121 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 122 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 123 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 124 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 125 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 126 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 127 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 128 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 129 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 130 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 131 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 132 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 133 "data/maps/MauvilleCity/scripts.pory"
	end
# 134 "data/maps/MauvilleCity/scripts.pory"

# 135 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 136 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 137 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast1
# 138 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 139 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 140 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 141 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 142 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 143 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 144 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 145 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 146 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 147 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 148 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 149 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast2
# 150 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 151 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 152 "data/maps/MauvilleCity/scripts.pory"
	end
# 153 "data/maps/MauvilleCity/scripts.pory"

# 154 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 155 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLY
# 156 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLYS_UNCLE
# 157 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 158 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 159 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 160 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 161 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 162 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 163 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 164 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 165 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 166 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 167 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 168 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 169 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 170 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 171 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_SCOTT
# 172 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 173 "data/maps/MauvilleCity/scripts.pory"
	end
# 174 "data/maps/MauvilleCity/scripts.pory"

# 175 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 176 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 177 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 178 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 179 "data/maps/MauvilleCity/scripts.pory"
	return
# 180 "data/maps/MauvilleCity/scripts.pory"

# 181 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 182 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_MAUVILLE_SCOTT, 12, 13
# 183 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 184 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 185 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 186 "data/maps/MauvilleCity/scripts.pory"
	return
# 187 "data/maps/MauvilleCity/scripts.pory"

# 188 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 189 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 190 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 191 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 192 "data/maps/MauvilleCity/scripts.pory"
	return
# 193 "data/maps/MauvilleCity/scripts.pory"

# 194 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 195 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 196 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitEast
# 197 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 198 "data/maps/MauvilleCity/scripts.pory"
	return
# 199 "data/maps/MauvilleCity/scripts.pory"

# 200 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 201 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 202 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 203 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 204 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 206 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 207 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 209 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 210 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 212 "data/maps/MauvilleCity/scripts.pory"
	return
# 213 "data/maps/MauvilleCity/scripts.pory"

# 214 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 215 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 216 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 217 "data/maps/MauvilleCity/scripts.pory"
	release
# 218 "data/maps/MauvilleCity/scripts.pory"
	end
# 219 "data/maps/MauvilleCity/scripts.pory"

# 220 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 221 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 222 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 223 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 224 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 225 "data/maps/MauvilleCity/scripts.pory"
	end
# 226 "data/maps/MauvilleCity/scripts.pory"

# 227 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 228 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 229 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 230 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 231 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 232 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 233 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 234 "data/maps/MauvilleCity/scripts.pory"

# 235 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 236 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 237 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 238 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 239 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 240 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 241 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 242 "data/maps/MauvilleCity/scripts.pory"

# 243 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 244 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 245 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 246 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 247 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 248 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 249 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 250 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 251 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 252 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 254 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 255 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 256 "data/maps/MauvilleCity/scripts.pory"

# 257 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 258 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 259 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 260 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 262 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 263 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 264 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 265 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 266 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 267 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 268 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 269 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 270 "data/maps/MauvilleCity/scripts.pory"

# 271 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 272 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 273 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 274 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 275 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 276 "data/maps/MauvilleCity/scripts.pory"

# 277 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 278 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 279 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 280 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 281 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 282 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 283 "data/maps/MauvilleCity/scripts.pory"

# 284 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 285 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 286 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 287 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 288 "data/maps/MauvilleCity/scripts.pory"

# 289 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 290 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 291 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 292 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 293 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 294 "data/maps/MauvilleCity/scripts.pory"

# 295 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 296 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 297 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 298 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 299 "data/maps/MauvilleCity/scripts.pory"

# 300 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 301 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 302 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 303 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 304 "data/maps/MauvilleCity/scripts.pory"

# 305 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 306 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 307 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 308 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 309 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 310 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 311 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 312 "data/maps/MauvilleCity/scripts.pory"

# 313 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 314 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 316 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 317 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 318 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 319 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 320 "data/maps/MauvilleCity/scripts.pory"

# 321 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 322 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 323 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 324 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 325 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 326 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 327 "data/maps/MauvilleCity/scripts.pory"

# 328 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 329 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 331 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 332 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 333 "data/maps/MauvilleCity/scripts.pory"

# 334 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 335 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 336 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 337 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 338 "data/maps/MauvilleCity/scripts.pory"

# 339 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 343 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 344 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 347 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 349 "data/maps/MauvilleCity/scripts.pory"

# 350 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 352 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 354 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 355 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 356 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 357 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 358 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 359 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 360 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 361 "data/maps/MauvilleCity/scripts.pory"

# 362 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 363 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 364 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 365 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 366 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 367 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 369 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 370 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 371 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 372 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 373 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 374 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 375 "data/maps/MauvilleCity/scripts.pory"

# 376 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 377 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 378 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 379 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 380 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 381 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 382 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 383 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 384 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 385 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 386 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 388 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 389 "data/maps/MauvilleCity/scripts.pory"

# 390 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 391 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 392 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 393 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 398 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 399 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 400 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 401 "data/maps/MauvilleCity/scripts.pory"

# 402 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 403 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 405 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 406 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 409 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 410 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 411 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 412 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 413 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 414 "data/maps/MauvilleCity/scripts.pory"

# 415 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 416 "data/maps/MauvilleCity/scripts.pory"
	lock
# 417 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 418 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 419 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 420 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 421 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 422 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 423 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 424 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 425 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 426 "data/maps/MauvilleCity/scripts.pory"
	release
# 427 "data/maps/MauvilleCity/scripts.pory"
	end
# 428 "data/maps/MauvilleCity/scripts.pory"

# 429 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 430 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 431 "data/maps/MauvilleCity/scripts.pory"
	release
# 432 "data/maps/MauvilleCity/scripts.pory"
	end
# 433 "data/maps/MauvilleCity/scripts.pory"

# 434 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 435 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 436 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 437 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 438 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 439 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 440 "data/maps/MauvilleCity/scripts.pory"
	release
# 441 "data/maps/MauvilleCity/scripts.pory"
	end
# 442 "data/maps/MauvilleCity/scripts.pory"

# 443 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 444 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 445 "data/maps/MauvilleCity/scripts.pory"
	release
# 446 "data/maps/MauvilleCity/scripts.pory"
	end
# 447 "data/maps/MauvilleCity/scripts.pory"

# 448 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 449 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 450 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 451 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 452 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 453 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 454 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 455 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 456 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 457 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 458 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 459 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 460 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 461 "data/maps/MauvilleCity/scripts.pory"
	end
# 462 "data/maps/MauvilleCity/scripts.pory"

# 463 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 464 "data/maps/MauvilleCity/scripts.pory"
	.string "TÍO: Creo que este chico está tan vital\n"
# 465 "data/maps/MauvilleCity/scripts.pory"
	.string "últimamente gracias a los POKéMON.\l"
# 466 "data/maps/MauvilleCity/scripts.pory"
	.string "Pero es que ya es demasiado…$"
# 467 "data/maps/MauvilleCity/scripts.pory"

# 468 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 469 "data/maps/MauvilleCity/scripts.pory"
	.string "BLASCO: Eh… ¿TÍO?\p"
# 470 "data/maps/MauvilleCity/scripts.pory"
	.string "Quiero desafiar al LÍDER de este\n"
# 471 "data/maps/MauvilleCity/scripts.pory"
	.string "GIMNASIO y ver cuánto he mejorado.\p"
# 472 "data/maps/MauvilleCity/scripts.pory"
	.string "¿Puedo? ¿Puedo? Porfaaaa…$"
# 473 "data/maps/MauvilleCity/scripts.pory"

# 474 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 475 "data/maps/MauvilleCity/scripts.pory"
	.string "TÍO: Espera un poco, BLASCO…\p"
# 476 "data/maps/MauvilleCity/scripts.pory"
	.string "Es cierto que desde que vives con\n"
# 477 "data/maps/MauvilleCity/scripts.pory"
	.string "POKéMON eres mucho más fuerte.\p"
# 478 "data/maps/MauvilleCity/scripts.pory"
	.string "¿Pero no crees que exageras\n"
# 479 "data/maps/MauvilleCity/scripts.pory"
	.string "un poco cuando hablas de desafiar\l"
# 480 "data/maps/MauvilleCity/scripts.pory"
	.string "a un LÍDER de GIMNASIO?$"
# 481 "data/maps/MauvilleCity/scripts.pory"

# 482 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 483 "data/maps/MauvilleCity/scripts.pory"
	.string "BLASCO: No exagero…\p"
# 484 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Si RALTS y yo unimos fuerzas,\n"
# 485 "data/maps/MauvilleCity/scripts.pory"
	.string "podemos con todo!$"
# 486 "data/maps/MauvilleCity/scripts.pory"

# 487 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 488 "data/maps/MauvilleCity/scripts.pory"
	.string "BLASCO: Oh, hola, {PLAYER}.\p"
# 489 "data/maps/MauvilleCity/scripts.pory"
	.string "Soy mogollón más fuerte que la última\n"
# 490 "data/maps/MauvilleCity/scripts.pory"
	.string "vez que nos vimos.\p"
# 491 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, quiero que mi TÍO y tú no\n"
# 492 "data/maps/MauvilleCity/scripts.pory"
	.string "tengáis ninguna duda al respecto.\p"
# 493 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, ¿querrías luchar conmigo?$"
# 494 "data/maps/MauvilleCity/scripts.pory"

# 495 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 496 "data/maps/MauvilleCity/scripts.pory"
	.string "BLASCO: Oh, pues si no tenemos\n"
# 497 "data/maps/MauvilleCity/scripts.pory"
	.string "un combate, mi TÍO no podrá ver\l"
# 498 "data/maps/MauvilleCity/scripts.pory"
	.string "lo fuerte que me he vuelto…$"
# 499 "data/maps/MauvilleCity/scripts.pory"

# 500 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "TÍO: {PLAYER}{KUN}, ¿verdad?\n"
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "En nombre de BLASCO, ¿puedo pedirte\l"
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "que os enfrentéis sólo esta vez?\p"
# 504 "data/maps/MauvilleCity/scripts.pory"
	.string "Está tan empeñado que no habrá\n"
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "manera de convencerle de lo contrario.$"
# 506 "data/maps/MauvilleCity/scripts.pory"

# 507 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "BLASCO: {PLAYER}, porfa…\n"
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Lucha conmigo, anda!$"
# 510 "data/maps/MauvilleCity/scripts.pory"

# 511 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "BLASCO: Gracias, {PLAYER}.\p"
# 513 "data/maps/MauvilleCity/scripts.pory"
	.string "Muy bien… ¡Allá vamos!$"
# 514 "data/maps/MauvilleCity/scripts.pory"

# 515 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 516 "data/maps/MauvilleCity/scripts.pory"
	.string "BLASCO: Pues…\p"
# 517 "data/maps/MauvilleCity/scripts.pory"
	.string "Pues…\p"
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "Pues he perdido…$"
# 519 "data/maps/MauvilleCity/scripts.pory"

# 520 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 521 "data/maps/MauvilleCity/scripts.pory"
	.string "BLASCO: TÍO…\n"
# 522 "data/maps/MauvilleCity/scripts.pory"
	.string "Me vuelvo a VERDEGAL…$"
# 523 "data/maps/MauvilleCity/scripts.pory"

# 524 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "Gracias, {PLAYER}.\n"
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "Es duro ser un ENTRENADOR, ¿no?\p"
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "No basta con tener POKéMON\n"
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "y hacerlos combatir.\l"
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "Ser ENTRENADOR es más que eso…$"
# 530 "data/maps/MauvilleCity/scripts.pory"

# 531 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "TÍO: BLASCO, no debes venirte abajo\n"
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "por esto…\p"
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "A ver, ¿qué te impide mejorar cada\n"
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "vez más?\p"
# 536 "data/maps/MauvilleCity/scripts.pory"
	.string "Venga, vamos a casa.\n"
# 537 "data/maps/MauvilleCity/scripts.pory"
	.string "Todos te están esperando.$"
# 538 "data/maps/MauvilleCity/scripts.pory"

# 539 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 540 "data/maps/MauvilleCity/scripts.pory"
	.string "TÍO: {PLAYER}{KUN}, acabo de darme cuenta\n"
# 541 "data/maps/MauvilleCity/scripts.pory"
	.string "de que tú fuiste quien ayudó a BLASCO\l"
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "a atrapar su POKéMON.\p"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "¿Por qué no vienes a visitarnos\n"
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "a VERDEGAL algún día?\l"
# 545 "data/maps/MauvilleCity/scripts.pory"
	.string "A BLASCO le haría ilusión.$"
# 546 "data/maps/MauvilleCity/scripts.pory"

# 547 "data/maps/MauvilleCity/scripts.pory"

# 548 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Bip!\p"
# 550 "data/maps/MauvilleCity/scripts.pory"
	.string "BLASCO: ¡Hey, hola, {PLAYER}!\p"
# 551 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Sólo quería decirte que mi TÍO\n"
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "me ha comprado un POKéNAV!\p"
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Así que ya puedo hablar contigo\n"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "siempre que quiera, {PLAYER}!\p"
# 555 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Clic!$"
# 556 "data/maps/MauvilleCity/scripts.pory"

# 557 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "Acabas de registrar a BLASCO\n"
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "en el POKéNAV.$"
# 560 "data/maps/MauvilleCity/scripts.pory"

# 561 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "TRETO: Je, je…\n"
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "¡He presenciado ese enfrentamiento!\p"
# 564 "data/maps/MauvilleCity/scripts.pory"
	.string "Tienes amistad con ese tal BLASCO,\n"
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "¿verdad?\p"
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "Pues no te has cortado ni un pelo.\n"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "Le has vencido de forma impresionante.\p"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Ése es el verdadero espíritu de los\n"
# 569 "data/maps/MauvilleCity/scripts.pory"
	.string "combates POKéMON, sí, señor!\p"
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Admiro a la gente que entrena como tú!\p"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Seguiré animándote!$"
# 572 "data/maps/MauvilleCity/scripts.pory"

# 573 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 574 "data/maps/MauvilleCity/scripts.pory"
	.string "ERICO: ¡Anda, {PLAYER}{KUN}!\n"
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Te veo muy en forma!\l"
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "Me parece genial, ja, ja, ja.\p"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "Vale. Está decidido.\n"
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "Necesito que me hagas un favor.\p"
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "En CIUDAD MALVALONA hay una zona\n"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "subterránea llamada MALVALANOVA.\p"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, necesito que vayas allí\n"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "y apagues el GENERADOR.\p"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "El GENERADOR ha estado funcionando\n"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "de cualquier manera. No es seguro.\p"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "Toma. Ésta es la LLAVE para entrar\n"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "en MALVALANOVA.$"
# 587 "data/maps/MauvilleCity/scripts.pory"

# 588 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "ERICO: No te preocupes. No creo\n"
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "que te suponga ningún problema.\p"
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "La entrada a MALVALANOVA está\n"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "cerca. Sólo hay que ir a la RUTA 110 \l"
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "y hacer un poco de SURF.\p"
# 594 "data/maps/MauvilleCity/scripts.pory"
	.string "Pues eso es. Cuento contigo.\n"
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Jua, jua, jua, jua!$"
# 596 "data/maps/MauvilleCity/scripts.pory"

# 597 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "ERICO: ¡Jua, jua, jua, jua!\p"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Lo sabía, {PLAYER}{KUN}!\n"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Sabía que no me equivocaba contigo!\p"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "Y quiero agradecértelo: toma la MT\n"
# 602 "data/maps/MauvilleCity/scripts.pory"
	.string "que contiene RAYO.\p"
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Te la has ganado!$"
# 604 "data/maps/MauvilleCity/scripts.pory"

# 605 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "ERICO: ¡Jua, jua, jua, jua!\p"
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "Me alegra mucho ver cómo los jóvenes\n"
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "van avanzando hasta la cumbre.$"
# 609 "data/maps/MauvilleCity/scripts.pory"

# 610 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "Es verdad. Mola entablar combates\n"
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "POKéMON y todo eso, pero recuerda:\p"
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "si tu POKéMON se hace daño, debes\n"
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "cuidarlo hasta que se ponga bueno.$"
# 615 "data/maps/MauvilleCity/scripts.pory"

# 616 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 617 "data/maps/MauvilleCity/scripts.pory"
	.string "Las carreteras de este pueblo van\n"
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "en todas las direcciones.\p"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "Por eso viene tanta gente\n"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "diferente continuamente.$"
# 621 "data/maps/MauvilleCity/scripts.pory"

# 622 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "¿Ya has estado en la TIENDA de BICIS\n"
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "de ANACLETO?\p"
# 625 "data/maps/MauvilleCity/scripts.pory"
	.string "ANACLETO, el dueño, es muy generoso.$"
# 626 "data/maps/MauvilleCity/scripts.pory"

# 627 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 628 "data/maps/MauvilleCity/scripts.pory"
	.string "Aunque montes en BICI, los POKéMON\n"
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "salvajes pueden atacarte.$"
# 630 "data/maps/MauvilleCity/scripts.pory"

# 631 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "CIUDAD MALVALONA\n"
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "“¡Una ciudad que rebosa diversión!”$"
# 634 "data/maps/MauvilleCity/scripts.pory"

# 635 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 636 "data/maps/MauvilleCity/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD MALVALONA\n"
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "LÍDER: ERICO\l"
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "“¡Una personalidad electrificante!”$"
# 639 "data/maps/MauvilleCity/scripts.pory"

# 640 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 641 "data/maps/MauvilleCity/scripts.pory"
	.string "TIENDA de BICIS de ANACLETO\n"
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "“¡Todo para ir sobre ruedas!”$"
# 643 "data/maps/MauvilleCity/scripts.pory"

# 644 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "CASINO de MALVALONA\n"
# 646 "data/maps/MauvilleCity/scripts.pory"
	.string "“¡Juega a lo que te apetezca!”$"
# 647 "data/maps/MauvilleCity/scripts.pory"

# 648 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 649 "data/maps/MauvilleCity/scripts.pory"
	.string "Hola. ¿Tú ves la tele?\p"
# 650 "data/maps/MauvilleCity/scripts.pory"
	.string "Últimamente hay un montón de programas\n"
# 651 "data/maps/MauvilleCity/scripts.pory"
	.string "muy buenos.\p"
# 652 "data/maps/MauvilleCity/scripts.pory"
	.string "Es superguay. Hasta han salido\n"
# 653 "data/maps/MauvilleCity/scripts.pory"
	.string "mis amigos.\p"
# 654 "data/maps/MauvilleCity/scripts.pory"
	.string "Y, a veces, tú también sales,\n"
# 655 "data/maps/MauvilleCity/scripts.pory"
	.string "aunque no lo sepas.\p"
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "Me gustaría salir un día…\p"
# 657 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Por eso voy a ver la tele cada\n"
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "dos por tres!$"
# 659 "data/maps/MauvilleCity/scripts.pory"

# 660 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 661 "data/maps/MauvilleCity/scripts.pory"
	.string "Hola. ¿Has estado viendo la tele?$"
