MauvilleCity_EventScript_Wally::
# 5 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 6 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_Wally_2
MauvilleCity_EventScript_Wally_1:
# 9 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 10 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 11 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 12 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 13 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 14 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 15 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 16 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 17 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 18 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 19 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 20 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 21 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 22 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_ExclamationMark
# 23 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 24 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_Delay48
# 25 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 26 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 27 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 28 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end

MauvilleCity_EventScript_Wally_2:
# 7 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyRequestBattleAgain
	goto MauvilleCity_EventScript_Wally_1


MauvilleCity_EventScript_BattleWallyPrompt::
# 34 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_EventScript_BattleWallyPrompt_2
# 38 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DeclineWallyBattle
MauvilleCity_EventScript_BattleWallyPrompt_1:
# 40 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 41 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 42 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 43 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWallyPrompt_7
# 45 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWallyPrompt_8
MauvilleCity_EventScript_BattleWallyPrompt_5:
	end

MauvilleCity_EventScript_BattleWallyPrompt_2:
# 35 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_BattleWally
	goto MauvilleCity_EventScript_BattleWallyPrompt_1

MauvilleCity_EventScript_BattleWallyPrompt_7:
# 44 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitNorth
	goto MauvilleCity_EventScript_BattleWallyPrompt_5

MauvilleCity_EventScript_BattleWallyPrompt_8:
# 46 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitEast
	goto MauvilleCity_EventScript_BattleWallyPrompt_5


MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 52 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 53 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 54 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 55 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 57 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 59 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 60 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyNoNeedTo, MSGBOX_DEFAULT
# 61 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 62 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 63 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallysUncleItsOkay, MSGBOX_DEFAULT
# 64 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 65 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 66 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 67 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 68 "data/maps/MauvilleCity/scripts.pory"
	delay 36
# 69 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 70 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 71 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_StartScottScene
# 73 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 74 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 75 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 76 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 77 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
	end


MauvilleCity_EventScript_WallyAndUncleExitEast::
# 82 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 83 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast1
# 84 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 85 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 86 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 87 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 89 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 90 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyNoNeedTo, MSGBOX_DEFAULT
# 91 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 92 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 93 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallysUncleItsOkay, MSGBOX_DEFAULT
# 94 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 95 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 96 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast2
# 97 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/MauvilleCity/scripts.pory"
	delay 36
# 99 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 100 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_StartScottScene
# 102 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 103 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 104 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 105 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 106 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
	end


MauvilleCity_EventScript_StartScottScene::
# 112 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 113 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 114 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 115 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 116 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 117 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_StartScottScene_3
# 119 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_StartScottScene_4
MauvilleCity_EventScript_StartScottScene_1:
# 122 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 123 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_WalkInPlaceFasterDown
# 124 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 125 "data/maps/MauvilleCity/scripts.pory"
	namebox Scott
# 126 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottAParentShould, MSGBOX_DEFAULT
# 127 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 128 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AndWhoAreYou, MSGBOX_DEFAULT
# 129 "data/maps/MauvilleCity/scripts.pory"
	namebox Scott
# 130 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ImScott, MSGBOX_DEFAULT
# 131 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 132 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AndWhyDoICare, MSGBOX_DEFAULT
# 133 "data/maps/MauvilleCity/scripts.pory"
	namebox Scott
# 134 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottDefendsWally, MSGBOX_DEFAULT
# 135 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 136 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_YouDontUnderstand, MSGBOX_DEFAULT
# 137 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_WalkInPlaceUp
# 138 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 139 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_WalkInPlaceLeft
# 140 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 141 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 142 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_Although, MSGBOX_DEFAULT
# 143 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 144 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 145 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
	return

MauvilleCity_EventScript_StartScottScene_3:
# 118 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottApproachPlayerNorth
	goto MauvilleCity_EventScript_StartScottScene_1

MauvilleCity_EventScript_StartScottScene_4:
# 120 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottApproachPlayerEast
	goto MauvilleCity_EventScript_StartScottScene_1


MauvilleCity_EventScript_DefeatedWally::
# 150 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLY
# 151 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLYS_UNCLE
# 152 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 153 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 154 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 155 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 156 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 157 "data/maps/MauvilleCity/scripts.pory"
	namebox Scott
# 158 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottBadFamily
# 159 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, Common_Movement_WalkInPlaceUp
# 160 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 161 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 162 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYoureTheRealDeal
# 163 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 164 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 165 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 166 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_DefeatedWally_3
# 168 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_DefeatedWally_4
MauvilleCity_EventScript_DefeatedWally_1:
# 171 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_SCOTT
# 172 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end

MauvilleCity_EventScript_DefeatedWally_3:
# 167 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottExitNorth
	goto MauvilleCity_EventScript_DefeatedWally_1

MauvilleCity_EventScript_DefeatedWally_4:
# 169 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottExitEast
	goto MauvilleCity_EventScript_DefeatedWally_1


MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 177 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 178 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 179 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottApproachPlayerEast::
# 184 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_MAUVILLE_SCOTT, 12, 13
# 185 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 186 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 187 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottExitNorth::
# 192 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 193 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 194 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottExitEast::
# 199 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 200 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitEast
# 201 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_BattleWally::
# 206 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 207 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 208 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 209 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 210 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 211 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 212 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 213 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 214 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 215 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 216 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 218 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
	return


MauvilleCity_EventScript_DeclineWallyBattle::
# 223 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 224 "data/maps/MauvilleCity/scripts.pory"
	namebox Wally
# 225 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 226 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 227 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 228 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_WallyRequestBattleAgain::
# 233 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 234 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 235 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 236 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end


# 240 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 241 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 241 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 242 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 242 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 243 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 246 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 247 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 247 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 248 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 248 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 248 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 251 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 252 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 252 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 254 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 257 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 258 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 258 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 260 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 263 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 264 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 265 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 266 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 269 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 270 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 270 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 270 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 271 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 274 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 275 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 276 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 279 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 280 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 280 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 281 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 284 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 285 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 286 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 289 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 290 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 291 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 294 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 295 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 295 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 295 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 296 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 296 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 297 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 300 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 301 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 302 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 302 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 303 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 303 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 306 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 307 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 308 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 309 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 310 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
	step_end

# 313 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 314 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 314 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 318 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 319 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 320 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 323 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 327 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 328 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 329 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 333 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 335 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 335 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 335 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 335 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 336 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 339 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
	step_end

# 345 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 349 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 355 "data/maps/MauvilleCity/scripts.pory"

# 356 "data/maps/MauvilleCity/scripts.pory"

# 357 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 358 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 359 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 360 "data/maps/MauvilleCity/scripts.pory"

# 361 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 362 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 363 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 364 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 365 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 366 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 367 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 368 "data/maps/MauvilleCity/scripts.pory"
	checkitem ITEM_TM24
# 369 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MauvilleCity_EventScript_MoveWattsonBackToGym
# 370 "data/maps/MauvilleCity/scripts.pory"
	end
# 371 "data/maps/MauvilleCity/scripts.pory"

# 372 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 373 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 374 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 375 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 376 "data/maps/MauvilleCity/scripts.pory"
	return
# 377 "data/maps/MauvilleCity/scripts.pory"

# 378 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 379 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 380 "data/maps/MauvilleCity/scripts.pory"
	end
# 381 "data/maps/MauvilleCity/scripts.pory"

# 382 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 383 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 384 "data/maps/MauvilleCity/scripts.pory"
	end
# 385 "data/maps/MauvilleCity/scripts.pory"

# 386 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 387 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 388 "data/maps/MauvilleCity/scripts.pory"
	end
# 389 "data/maps/MauvilleCity/scripts.pory"

# 390 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 391 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 392 "data/maps/MauvilleCity/scripts.pory"
	end
# 393 "data/maps/MauvilleCity/scripts.pory"

# 394 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 395 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 396 "data/maps/MauvilleCity/scripts.pory"
	end
# 397 "data/maps/MauvilleCity/scripts.pory"

# 398 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 399 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 400 "data/maps/MauvilleCity/scripts.pory"
	end
# 401 "data/maps/MauvilleCity/scripts.pory"

# 402 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 403 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 404 "data/maps/MauvilleCity/scripts.pory"
	end
# 405 "data/maps/MauvilleCity/scripts.pory"

# 406 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 407 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 408 "data/maps/MauvilleCity/scripts.pory"
	end
# 409 "data/maps/MauvilleCity/scripts.pory"

# 410 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 411 "data/maps/MauvilleCity/scripts.pory"
	lock
# 412 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 413 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 414 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 415 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 416 "data/maps/MauvilleCity/scripts.pory"
	release
# 417 "data/maps/MauvilleCity/scripts.pory"
	end
# 418 "data/maps/MauvilleCity/scripts.pory"

# 419 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 420 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 421 "data/maps/MauvilleCity/scripts.pory"
	release
# 422 "data/maps/MauvilleCity/scripts.pory"
	end
# 423 "data/maps/MauvilleCity/scripts.pory"

# 424 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 425 "data/maps/MauvilleCity/scripts.pory"
	lock
# 426 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 427 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 428 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 429 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 430 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 431 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 432 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 433 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 434 "data/maps/MauvilleCity/scripts.pory"
	release
# 435 "data/maps/MauvilleCity/scripts.pory"
	end
# 436 "data/maps/MauvilleCity/scripts.pory"

# 437 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 438 "data/maps/MauvilleCity/scripts.pory"
	namebox TioWally
# 439 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 440 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 441 "data/maps/MauvilleCity/scripts.pory"
	hidenamebox
# 442 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 443 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 444 "data/maps/MauvilleCity/scripts.pory"
	release
# 445 "data/maps/MauvilleCity/scripts.pory"
	end
# 446 "data/maps/MauvilleCity/scripts.pory"

# 447 "data/maps/MauvilleCity/scripts.pory"

# 448 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 449 "data/maps/MauvilleCity/scripts.pory"
	lock
# 450 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 451 "data/maps/MauvilleCity/scripts.pory"
	checkitem ITEM_TM55
# 452 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_EventScript_ReceivedThunderbolt
# 453 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 454 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 455 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 456 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 457 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 458 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 459 "data/maps/MauvilleCity/scripts.pory"
	release
# 460 "data/maps/MauvilleCity/scripts.pory"
	end
# 461 "data/maps/MauvilleCity/scripts.pory"

# 462 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 463 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 464 "data/maps/MauvilleCity/scripts.pory"
	release
# 465 "data/maps/MauvilleCity/scripts.pory"
	end
# 466 "data/maps/MauvilleCity/scripts.pory"

# 467 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 468 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 469 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM55
# 470 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 471 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 472 "data/maps/MauvilleCity/scripts.pory"
	release
# 473 "data/maps/MauvilleCity/scripts.pory"
	end
# 474 "data/maps/MauvilleCity/scripts.pory"

# 475 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 476 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 477 "data/maps/MauvilleCity/scripts.pory"
	release
# 478 "data/maps/MauvilleCity/scripts.pory"
	end
# 479 "data/maps/MauvilleCity/scripts.pory"

# 480 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 481 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 482 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 483 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 484 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 485 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 486 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 487 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 488 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 489 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 490 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 491 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 492 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 493 "data/maps/MauvilleCity/scripts.pory"
	end
# 494 "data/maps/MauvilleCity/scripts.pory"

# 495 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 496 "data/maps/MauvilleCity/scripts.pory"
	.string "Ah, {PAUSE 2}¡{PLAYER}!\p"
# 497 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Que alegría verte aquí!\n"
# 498 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Hasta se ve que estás hechando\l"
# 499 "data/maps/MauvilleCity/scripts.pory"
	.string "chispas, BUAJAJAJAJA!\p"
# 500 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Mira, mira, {PLAYER}, necesito que me\n"
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "hagas un favor.\p"
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "Hace tiempo, creé un lugar llamado\n"
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "Nueva Mauville, pero por alguna razón,\l"
# 504 "data/maps/MauvilleCity/scripts.pory"
	.string "el generador ha vuelto a encenderse…\l"
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Y eso molesta a los Pokémon salvajes,\l"
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "podría sobrecargarlos y causar\l"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "aprietos!\p"
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "Necesito que vayas ahí y apagues el\n"
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "generador. No puedo hacerlo yo porque\l"
# 510 "data/maps/MauvilleCity/scripts.pory"
	.string "mis piernas ya no son lo que eran…\l"
# 511 "data/maps/MauvilleCity/scripts.pory"
	.string "Así que toma estas Llaves, y apaga ese\l"
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "generador por mí,{PAUSE 2} ¿Okay?$"
# 513 "data/maps/MauvilleCity/scripts.pory"

# 514 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 515 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Ah, y no te preocupes!\n"
# 516 "data/maps/MauvilleCity/scripts.pory"
	.string "Ese lugar es inseguro, pero no mortal.\l"
# 517 "data/maps/MauvilleCity/scripts.pory"
	.string "Estarás bien, {PAUSE 2}¡No es como si un humano\l"
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "pudiera sobrecargarse de electricidad\l"
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "como un Voltorb, BUAJAJAJAJA!$"
# 520 "data/maps/MauvilleCity/scripts.pory"

# 521 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 522 "data/maps/MauvilleCity/scripts.pory"
	.string "¡BUAJAJAJAJA!\p"
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Sabía que podrías!\p"
# 524 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Ahora, ten esta MT.\n"
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "Contiene el movimiento Rayo Carga, que\l"
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "subirá tu Ataque Especial en un nivel\l"
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "después de usarse, {PAUSE 2}¿Muy útil, no?\p"
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Se podría decir que cargas con un arma\n"
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "ahora, BUAJAJAJAJAJA!$"
# 530 "data/maps/MauvilleCity/scripts.pory"

# 531 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "¡Se podría decir que cargas con un arma\n"
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "ahora, BUAJAJAJAJAJA!$"
# 534 "data/maps/MauvilleCity/scripts.pory"

# 535 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 536 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 537 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 540 "data/maps/MauvilleCity/scripts.pory"

# 541 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 545 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 546 "data/maps/MauvilleCity/scripts.pory"

# 547 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 550 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 551 "data/maps/MauvilleCity/scripts.pory"

# 552 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 555 "data/maps/MauvilleCity/scripts.pory"

# 556 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 559 "data/maps/MauvilleCity/scripts.pory"

# 560 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: WATTSON\l"
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 564 "data/maps/MauvilleCity/scripts.pory"

# 565 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 569 "data/maps/MauvilleCity/scripts.pory"

# 570 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 573 "data/maps/MauvilleCity/scripts.pory"

# 574 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 585 "data/maps/MauvilleCity/scripts.pory"

# 586 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
