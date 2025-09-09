# 1 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 2 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_MapScripts::
# 3 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_ReceptionGate_OnFrame
# 4 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_ReceptionGate_OnTransition
# 5 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 7 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_OnTransition:
# 8 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
# 9 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 10 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 11 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_OnFrame:
# 12 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script_2 VAR_HAS_ENTERED_BATTLE_FRONTIER, 0, BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering
# 13 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.2byte 0
# 14 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 15 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering::
# 16 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lockall
# 17 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_HAS_ENTERED_BATTLE_FRONTIER, 1
# 18 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 19 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
# 20 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 21 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_Delay48
# 22 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 23 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay, MSGBOX_DEFAULT
# 24 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 25 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter
# 26 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 27 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ScottScene
# 28 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 29 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 30 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ScottScene::
# 31 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 32 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IssueFrontierPass, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 34 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass
# 35 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitfanfare
# 36 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 37 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass, MSGBOX_DEFAULT
# 38 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_SYS_FRONTIER_PASS
# 39 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 40 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame, MSGBOX_DEFAULT
# 41 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 42 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_WalkInPlaceFasterUp
# 43 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_WalkInPlaceFasterUp
# 44 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 45 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 46 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 47 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_ExclamationMark
# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 50 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 53 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, BattleFrontier_ReceptionGate_Movement_GreeterFaceScott
# 54 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerFaceScott
# 56 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottEnter
# 57 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 58 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere, MSGBOX_DEFAULT
# 59 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 60 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottExit
# 61 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 62 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	removeobject LOCALID_FRONTIER_RECEPTION_SCOTT
# 63 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	releaseall
# 64 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 65 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 66 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter:
# 67 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 68 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 69 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 70 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 71 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 72 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 73 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_PlayerFaceScott:
# 74 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 75 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 76 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 77 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 78 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_right
# 79 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 80 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 81 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
@ Unused
# 82 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_WalkDown:
# 83 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 84 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 85 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 86 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 87 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_ScottEnter:
# 88 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 89 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 90 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 91 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 92 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 93 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 94 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 95 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 96 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 97 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_ScottExit:
# 98 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_right
# 99 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 100 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 101 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 102 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 103 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 104 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 105 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 106 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 107 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_GreeterFaceScott:
# 108 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 109 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 110 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 111 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 112 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_right
# 113 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 114 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 115 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott:
# 116 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 117 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 118 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 119 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 120 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_left
# 121 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 122 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 123 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Greeter::
# 124 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 125 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 126 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 127 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 128 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 129 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 130 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 131 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FacilityGuide::
# 132 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 133 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 134 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFacilities, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 136 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 137 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 138 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout::
# 139 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich2
# 140 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 141 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_RECEPTIONIST
# 142 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	special ShowScrollableMultichoice
# 143 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitstate
# 144 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 145 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_BattleTower
# 146 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_BattleDome
# 147 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePalace
# 148 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_BattleArena
# 149 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_BattleFactory
# 150 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_BattlePike
# 151 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 6, BattleFrontier_ReceptionGate_EventScript_BattlePyramid
# 152 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 7, BattleFrontier_ReceptionGate_EventScript_RankingHall
# 153 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 8, BattleFrontier_ReceptionGate_EventScript_ExchangeCorner
# 154 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 9, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
# 155 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
# 156 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 157 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 158 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleTower::
# 159 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleTowerInfo, MSGBOX_DEFAULT
# 160 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 161 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 162 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 163 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleDome::
# 164 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleDomeInfo, MSGBOX_DEFAULT
# 165 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 166 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 167 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 168 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePalace::
# 169 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePalaceInfo, MSGBOX_DEFAULT
# 170 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 171 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 172 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 173 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleArena::
# 174 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleArenaInfo, MSGBOX_DEFAULT
# 175 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 176 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 177 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 178 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleFactory::
# 179 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleFactoryInfo, MSGBOX_DEFAULT
# 180 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 181 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 182 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 183 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePike::
# 184 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePikeInfo, MSGBOX_DEFAULT
# 185 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 186 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 187 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 188 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePyramid::
# 189 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePyramidInfo, MSGBOX_DEFAULT
# 190 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 191 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 192 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 193 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RankingHall::
# 194 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RankingHallInfo, MSGBOX_DEFAULT
# 195 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 196 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 197 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 198 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExchangeCorner::
# 199 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo, MSGBOX_DEFAULT
# 200 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 201 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 202 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 203 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide::
# 204 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 205 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 206 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 207 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 208 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RulesGuide::
# 209 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 210 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 211 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToRules, MSGBOX_DEFAULT
# 212 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 213 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 214 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 215 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout::
# 216 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhat
# 217 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 218 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 15, 0, MULTI_FRONTIER_RULES, FALSE
# 219 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 220 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_LevelMode
# 221 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_Level50
# 222 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_OpenLevel
# 223 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_MonEntry
# 224 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_HoldItems
# 225 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
# 226 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
# 227 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 228 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 229 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_LevelMode::
# 230 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_LevelModeInfo, MSGBOX_DEFAULT
# 231 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 232 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 233 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 234 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Level50::
# 235 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_Level50Info, MSGBOX_DEFAULT
# 236 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 237 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 238 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 239 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_OpenLevel::
# 240 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OpenLevelInfo, MSGBOX_DEFAULT
# 241 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 242 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 243 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 244 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_MonEntry::
# 245 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_MonEntryInfo, MSGBOX_DEFAULT
# 246 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 247 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 248 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 249 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_HoldItems::
# 250 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_HoldItemsInfo, MSGBOX_DEFAULT
# 251 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 252 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 253 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 254 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide::
# 255 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 256 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 257 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 258 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 259 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FrontierPassGuide::
# 260 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 261 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 262 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass, MSGBOX_DEFAULT
# 263 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 264 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 265 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 266 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout::
# 267 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich1
# 268 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 269 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 16, 4, MULTI_FRONTIER_PASS_INFO, FALSE
# 270 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 271 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_Symbols
# 272 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_RecordBattle
# 273 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePoints
# 274 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
# 275 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
# 276 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 277 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 278 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Symbols::
# 279 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_SymbolsInfo, MSGBOX_DEFAULT
# 280 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 281 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 282 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 283 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RecordBattle::
# 284 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RecordedBattleInfo, MSGBOX_DEFAULT
# 285 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 286 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 287 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 288 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePoints::
# 289 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePointsInfo, MSGBOX_DEFAULT
# 290 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 291 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 292 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 293 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide::
# 294 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 295 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 296 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 297 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 298 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay:
# 299 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "¿Es la primera vez que vienes?\n"
# 300 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "¡Entonces por aquí, por favor!$"
# 301 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 302 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier:
# 303 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "¡Éste es el FRENTE de BATALLA!\n"
# 304 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "¡La prueba final de los ENTRENADORES!$"
# 305 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 306 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_IssueFrontierPass:
# 307 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Como es la primera vez que nos visitas,\n"
# 308 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "te entregaremos el PASE del FRENTE.\p"
# 309 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Te permitirá entrar y competir en todos\n"
# 310 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "los edificios del FRENTE de BATALLA.\p"
# 311 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "¡Aquí tienes!$"
# 312 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 313 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass:
# 314 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER} obtuvo el PASE del FRENTE.$"
# 315 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 316 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass:
# 317 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER} colocó su FICHA de ENTRENADOR\n"
# 318 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "dentro del PASE del FRENTE.$"
# 319 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 320 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier:
# 321 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "¡Y ahora, disfruta al máximo de todo lo\n"
# 322 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "que te ofrece el FRENTE de BATALLA!$"
# 323 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 324 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame:
# 325 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "(?): Bueno, bueno, ¡pero si es {PLAYER}{KUN}!\n"
# 326 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "¡Al final has venido!$"
# 327 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 328 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay:
# 329 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "GUÍA: ¡Oh! ¡Don TRETO! ¡Está usted aquí!\n"
# 330 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "¡Muy buenas! ¡Muy buenas tenga usted!$"
# 331 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 332 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere:
# 333 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "TRETO: ¡Me alegra mucho verte,\n"
# 334 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "por supuesto que sí!\p"
# 335 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Espero que tengas tiempo de\n"
# 336 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "echarle un vistazo a todo esto.\p"
# 337 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Y, por supuesto, espero que no vengas\n"
# 338 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "sólo a mirar, sino también a combatir.\p"
# 339 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Aquí tengo mi rinconcito, así que\n"
# 340 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "puedes venir a verme cuando quieras.$"
# 341 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 342 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToFacilities:
# 343 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "¿Buscas información sobre algún\n"
# 344 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "edificio del FRENTE de BATALLA?$"
# 345 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 346 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhich2:
# 347 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "¿Sobre cuál?$"
# 348 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 349 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleTowerInfo:
# 350 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Esta torre es para muchos el edificio\n"
# 351 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "emblemático del FRENTE de BATALLA.\p"
# 352 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "En ella se disputan cuatro tipos\n"
# 353 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "de combates: INDIVIDUALES,\l"
# 354 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "DOBLES, MÚLTIPLES y\l"
# 355 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "MULTIJUGADOR con CONEXIÓN.$"
# 356 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 357 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleDomeInfo:
# 358 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "La CÚPULA BATALLA es un enorme\n"
# 359 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "edificio con forma de huevo gigante.\p"
# 360 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Dentro de ella se disputan los llamados\n"
# 361 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "TORNEOS de COMBATES, en dos\l"
# 362 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "modalidades: INDIVIDUAL y DOBLES.$"
# 363 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 364 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePalaceInfo:
# 365 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "El PALACIO BATALLA es un edificio rojo\n"
# 366 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "situado al este del FRENTE de BATALLA.\p"
# 367 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "En él se celebran los llamados\n"
# 368 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "COMBATES sin TUTELA, en dos\l"
# 369 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "modalidades: INDIVIDUAL y DOBLES.$"
# 370 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 371 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleArenaInfo:
# 372 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "El DOJO BATALLA es el edificio\n"
# 373 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "de aspecto oriental situado en la\l"
# 374 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "zona central del FRENTE de BATALLA.\p"
# 375 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Los denominados TORNEOS con JUEZ\n"
# 376 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "tienen lugar en el DOJO BATALLA.$"
# 377 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 378 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleFactoryInfo:
# 379 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "La FÁBRICA BATALLA es ese enorme\n"
# 380 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "edificio que está nada más salir\l"
# 381 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "a la izquierda.\p"
# 382 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Allí se celebran los famosos COMBATES\n"
# 383 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "con TRUEQUE, tanto en la modalidad\l"
# 384 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "INDIVIDUAL como en la de DOBLES.$"
# 385 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 386 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePikeInfo:
# 387 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "La SIERPE BATALLA es ese edificio con\n"
# 388 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "la forma de un POKéMON que está situado\l"
# 389 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "en el centro del FRENTE de BATALLA.\p"
# 390 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "El desafío conocido como\n"
# 391 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "ELECCIÓN de COMBATES se celebra allí.$"
# 392 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 393 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePyramidInfo:
# 394 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "La PIRÁMIDE BATALLA es la gran\n"
# 395 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "pirámide que está al noreste\l"
# 396 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "del FRENTE de BATALLA.\p"
# 397 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Allí podrás emprender las llamadas\n"
# 398 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "EXPEDICIONES de COMBATES.$"
# 399 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 400 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_RankingHallInfo:
# 401 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "El HALL de las CLASIFICACIONES\n"
# 402 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "se halla junto a la TORRE BATALLA.\p"
# 403 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "En él podrás ver los récords logrados\n"
# 404 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "por los más grandes ENTRENADORES\l"
# 405 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "en los distintos desafíos que ofrece\l"
# 406 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "el FRENTE de BATALLA.$"
# 407 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 408 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo:
# 409 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "El CENTRO del SERVICIO de CANJE está\n"
# 410 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "junto a la entrada de la TORRE BATALLA.\p"
# 411 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Los PUNTOS de BATALLA que hayas\n"
# 412 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "ganado en el FRENTE de BATALLA podrás\l"
# 413 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "canjearlos allí por fabulosos premios.$"
# 414 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 415 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToRules:
# 416 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Mi trabajo es informar sobre las reglas\n"
# 417 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "básicas comunes a todos los desafíos\l"
# 418 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "a los que puedes enfrentarte en los\l"
# 419 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "escenarios del FRENTE de BATALLA.$"
# 420 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 421 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhat:
# 422 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "¿Sobre qué quieres que te hable?$"
# 423 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 424 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LevelModeInfo:
# 425 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Todos los desafíos del FRENTE\n"
# 426 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "de BATALLA están disponibles\l"
# 427 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "en el nivel 50 y el nivel libre.$"
# 428 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 429 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_Level50Info:
# 430 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "El nivel 50 está abierto a los POKéMON\n"
# 431 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "cuyo nivel sea igual o inferior a 50.\p"
# 432 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Pero debes saber que ninguno de los\n"
# 433 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "ENTRENADORES a los que te enfrentes\l"
# 434 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "tendrá POKéMON por debajo del nivel 50.\p"
# 435 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Es el nivel básico para enfrentarse a\n"
# 436 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "los desafíos del FRENTE de BATALLA.\p"
# 437 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Para empezar, te recomendamos\n"
# 438 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "que elijas este nivel.$"
# 439 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 440 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_OpenLevelInfo:
# 441 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "El nivel libre, como su nombre indica,\n"
# 442 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "no impone límite alguno al nivel de los\l"
# 443 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "POKéMON con los que se combate.\p"
# 444 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Los niveles de tus rivales se ajustarán\n"
# 445 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "para igualarse a los de tus POKéMON.\p"
# 446 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Con todo, ningún ENTRENADOR\n"
# 447 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "al que te enfrentes tendrá POKéMON\l"
# 448 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "por debajo del nivel 60.$"
# 449 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 450 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_MonEntryInfo:
# 451 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Prácticamente cualquier POKéMON podrá\n"
# 452 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "participar en los desafíos que ofrece\l"
# 453 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "cualquiera de los escenarios que hay.\p"
# 454 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "No obstante, los HUEVOS y ciertos\n"
# 455 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "POKéMON no podrán hacerlo.\p"
# 456 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "El número de POKéMON necesario para\n"
# 457 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "participar dependerá del escenario.\p"
# 458 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Sin embargo, lo que no podrás hacer en\n"
# 459 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "ninguno de los escenarios es participar\l"
# 460 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "con dos POKéMON iguales.$"
# 461 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 462 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_HoldItemsInfo:
# 463 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Antes de afrontar cualquier desafío\n"
# 464 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "en un escenario del FRENTE de BATALLA,\l"
# 465 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "comprueba que no haya dos de tus\l"
# 466 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "POKéMON sosteniendo el mismo objeto.\p"
# 467 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Asegúrate de que todos los POKéMON\n"
# 468 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "que vayan a entrar en un combate\l"
# 469 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "sostienen objetos diferentes.$"
# 470 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 471 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass:
# 472 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Estaré encantado de explicarte lo que\n"
# 473 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "quieras sobre el PASE del FRENTE.$"
# 474 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 475 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhich1:
# 476 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "¿Te explico algo en especial?$"
# 477 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 478 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_SymbolsInfo:
# 479 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Hay siete escenarios diferentes\n"
# 480 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "en el FRENTE de BATALLA.\p"
# 481 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Cuando un ENTRENADOR demuestra\n"
# 482 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "sus habilidades y triunfa en uno de los\l"
# 483 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "edificios, puede que reciba su símbolo.\p"
# 484 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Para ganar un símbolo, puede que haya\n"
# 485 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "que derrotar a varios ENTRENADORES\l"
# 486 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "consecutivamente y puede que en varias\l"
# 487 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "ocasiones.\p"
# 488 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "No es nada fácil ganar estos símbolos.\n"
# 489 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "¡Que tengas suerte!$"
# 490 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 491 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_RecordedBattleInfo:
# 492 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "En tu PASE del FRENTE puedes\n"
# 493 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "grabar un combate.\p"
# 494 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Puedes grabar un combate en el que te\n"
# 495 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "hayas enfrentado a uno o varios amigos.\p"
# 496 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "O puedes grabar uno de tus combates\n"
# 497 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "del FRENTE de BATALLA, salvo los de la\l"
# 498 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "SIERPE BATALLA y la PIRÁMIDE BATALLA.\p"
# 499 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "La opción de grabarlos aparece\n"
# 500 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "al terminar el combate.$"
# 501 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 502 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePointsInfo:
# 503 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Cuando un ENTRENADOR lucha de manera\n"
# 504 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "extraordinaria en el FRENTE de BATALLA,\l"
# 505 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "recibe PUNTOS de BATALLA como premio.\p"
# 506 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Luego, esos PUNTOS de BATALLA\n"
# 507 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "pueden canjearse por objetos en\l"
# 508 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "el CENTRO del SERVICIO de CANJE.$"
