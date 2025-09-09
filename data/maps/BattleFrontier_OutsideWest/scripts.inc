# 1 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 2 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_MapScripts::
# 3 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
# 4 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.byte 0
# 5 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 6 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_OnTransition:
# 7 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 8 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 9 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 10 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 11 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 12 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 13 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 14 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 15 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	checkitem ITEM_SS_TICKET
# 16 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_OutsideWest_EventScript_NoSSTicket
# 17 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 18 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 19 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 20 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 21 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 22 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 23 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 24 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
# 26 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
# 27 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 28 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 29 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_NoSSTicket::
# 32 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 34 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 35 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 36 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 37 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 38 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 39 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 40 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 41 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 42 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 43 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 44 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 45 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 46 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 47 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 48 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 49 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 50 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 51 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 52 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 53 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 54 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 55 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 56 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 57 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 58 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 59 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 60 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 61 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 64 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 65 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 66 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 70 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 71 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 72 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
# 73 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 74 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 75 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 76 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 77 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 78 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
# 79 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 81 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 85 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 86 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
# 87 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 88 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 89 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused. Of note, Battle Tower is in the East section in the final release
# 90 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 91 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
# 92 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 93 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 95 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 96 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 99 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy1::
# 100 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
# 101 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 102 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 103 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 104 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 105 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 106 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 108 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 109 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 110 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 111 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 113 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 114 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man1::
# 115 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
# 116 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 117 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 118 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac1::
# 119 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 120 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 121 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 122 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 123 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac2::
# 124 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 125 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 126 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 127 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 128 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 129 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
# 130 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 132 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 134 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 136 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 137 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
# 138 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 140 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 141 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 142 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 143 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper::
# 144 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 146 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 147 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 148 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
# 149 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 152 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 153 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 154 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 155 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
# 157 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 159 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
# 161 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 162 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl::
# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 165 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_GirlShudderWest
# 171 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_GirlShudderEast
# 172 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 173 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 175 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 176 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
# 177 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 178 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 179 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 180 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 183 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 184 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 185 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 186 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 189 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 190 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 191 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
# 192 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 194 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 195 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 196 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
# 197 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 198 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 199 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 200 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 201 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
# 202 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 203 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 204 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 205 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest:
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 208 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 209 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 210 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 211 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast:
# 212 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 213 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 215 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2::
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 218 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 219 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 220 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 221 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
# 222 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
# 223 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 225 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
# 226 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 227 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 230 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
# 231 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 232 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 233 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 236 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 238 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 239 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 240 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 241 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
# 242 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 244 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Gentleman::
# 245 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
# 246 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 247 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Lass::
# 249 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
# 250 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 252 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ExpertM::
# 253 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 255 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 256 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man2::
# 257 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
# 258 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 259 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman1::
# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
# 262 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 263 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 264 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan1::
# 265 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan2::
# 269 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
# 270 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 272 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman3::
# 273 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy2::
# 279 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 281 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 282 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 283 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 284 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_OldMan::
# 285 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 287 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man4::
# 289 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 290 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 293 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
# 294 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 295 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 296 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 298 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_PokefanF::
# 299 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
# 300 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 301 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign:
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Ésta es la CÚPULA BATALLA!\n"
# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡La ruta a la fama pasa por aquí!$"
# 305 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 306 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleFactorySign:
# 307 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Ésta es la FÁBRICA BATALLA!\n"
# 308 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Hazte con el POKéMON más fuerte!$"
# 309 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 310 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattlePikeSign:
# 311 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Ésta es la SIERPE BATALLA!\n"
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Elige el mejor de los tres caminos!$"
# 313 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 314 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThisIsBattleTower:
# 315 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ésta es la TORRE BATALLA.\p"
# 316 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Los ENTRENADORES traen a sus mejores\n"
# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON para luchar en combates\l"
# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "eliminatorios.$"
# 319 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 320 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MayISeeYourTicket:
# 321 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Buenas, ¿vienes para coger el ferry?\n"
# 322 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¿Puedo ver tu TICKET?$"
# 323 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard:
# 325 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} no tiene ningún TICKET…\p"
# 326 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Cuánto lo lamento.\p"
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Necesitas un TICKET para poder\n"
# 328 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "subir a bordo del ferry.$"
# 329 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 330 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo:
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} enseñó el TICKET…\p"
# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Perfecto. Todo está en regla.\p"
# 333 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¿Adónde te gustaría ir?$"
# 334 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 335 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SlateportItIs:
# 336 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Muy bien, rumbo a CIUDAD PORTUAL.$"
# 337 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 338 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LilycoveItIs:
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Muy bien, rumbo a CIUDAD CALAGUA.$"
# 340 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 341 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime:
# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Esperamos que vuelvas a navegar\n"
# 343 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "con nosotros!$"
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 345 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_PleaseBoardFerry:
# 346 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sube a bordo y espera a que zarpemos.$"
# 347 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 348 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo:
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sube. ¿Adónde te gustaría ir?$"
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 351 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends:
# 352 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Les doy mil vueltas a todos mis amigos.\n"
# 353 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pero aquí…\l"
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "He hecho el ridículo.$"
# 355 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_CantFindBattleTower:
# 357 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quiero ir a la TORRE BATALLA,\n"
# 358 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "pero no la encuentro, y eso que tengo\l"
# 359 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "un mapa del FRENTE de BATALLA…\p"
# 360 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Es que este sitio es muy grande!$"
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere:
# 363 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Quería llegar lo antes posible\n"
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "para ponerme a luchar.\p"
# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pero me he mareado en el barco…\n"
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Uajjj…$"
# 367 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 368 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere:
# 369 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "No te creas que al FRENTE de BATALLA\n"
# 370 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "puede venir cualquiera, ¿eh?\p"
# 371 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Aquí sólo invitan a los ENTRENADORES\n"
# 372 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "que han demostrado que valen.\p"
# 373 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Por eso muchos ENTRENADORES\n"
# 374 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "ni han oído hablar de este lugar.$"
# 375 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons:
# 377 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Eh, colega…\p"
# 378 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¿Seguro que podemos combatir\n"
# 379 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "aunque no tengamos ni un POKéMON?$"
# 380 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons:
# 382 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Claro! ¡Seguro que no pasa nada!\p"
# 383 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Creo…\p"
# 384 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Recuerda lo que dijo el gorila ese del\n"
# 385 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "mostrador: “¡Yo te presto\l"
# 386 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "los POKéMON!”.$"
# 387 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 388 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons:
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Eso de ahí es la FÁBRICA BATALLA.\n"
# 390 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ahí te prestan POKéMON muy fuertes.\p"
# 391 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Siempre me he preguntado quién será\n"
# 392 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "el guapo que los entrena…$"
# 393 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 394 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper:
# 395 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Me da miedo entrar en la SIERPE\n"
# 396 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "BATALLA con todos esos SEVIPER…\p"
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pe-pero, ya que he llegado hasta aquí,\n"
# 398 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "tendré que conquistarlo todo, ¿no?\l"
# 399 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ay, ay, ay…$"
# 400 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 401 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors:
# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Vamos a jugar a piedra, papel o tijeras!\n"
# 403 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Una, dos, y…\p"
# 404 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡tres!\p"
# 405 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Mmm…$"
# 406 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 407 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge:
# 408 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Sí! ¡Gané!\n"
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Entraré en la SIERPE BATALLA!$"
# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 411 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge:
# 412 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, no…\n"
# 413 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "He perdido.\p"
# 414 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hoy no es mi día de suerte.\n"
# 415 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Creo que tendré que dejar lo de\l"
# 416 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "la SIERPE BATALLA para mañana.$"
# 417 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 418 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling:
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Creo que soy el único de por aquí que, \n"
# 420 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "por alguna razón que se me escapa,\l"
# 421 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "prefiere pescar a combatir.\p"
# 422 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¿Cómo?…\p"
# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¿Que aquí no pica nada?\n"
# 424 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Vaya, qué fastidio…$"
# 425 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 426 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol:
# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Hoy no pienso parar de combatir hasta\n"
# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "que no haya ganado un símbolo! ¡Ea!$"
# 429 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 430 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome:
# 431 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¿Eh? ¿Tú también piensas entrar\n"
# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "en la CÚPULA BATALLA?\p"
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pues te deseo toda la suerte del mundo.\n"
# 434 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ojalá ganemos los dos\l"
# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "y nos encontremos en la final.$"
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 437 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa:
# 438 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Abuelito, por aquí!\n"
# 439 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡La CÚPULA BATALLA está aquí!\l"
# 440 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Venga, a por ellos, abuelito!$"
# 441 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe:
# 443 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ah, conque esto es la CÚPULA BATALLA…\n"
# 444 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡No pienso dejarme ganar por ninguno\l"
# 445 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "de esos a los que llaman CABALLEROS!\p"
# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pero ¿por dónde se entra a este sitio?$"
# 447 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo:
# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Todavía me acuerdo de cuando aquí\n"
# 450 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "no había nada.\p"
# 451 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pero mira ahora… ¡Increíble!\n"
# 452 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Esto tiene que verlo mi madre!$"
# 453 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier:
# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Por fin estoy en el FRENTE de BATALLA!\p"
# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Ya verás cómo triunfo aquí con\n"
# 457 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "todos mis encantos y habilidades!$"
# 458 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 459 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople:
# 460 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ñam, ñam…\p"
# 461 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Esta plaza está llena de tipos duros,\n"
# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¿no crees?\p"
# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ñam, ñam…$"
# 464 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike:
# 466 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ñam, ñam…\p"
# 467 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "El otro día me encontré con una chica\n"
# 468 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "en la SIERPE BATALLA.\p"
# 469 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Tenía unos ojos que daban miedo.\p"
# 470 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ñam, ñam…\p"
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Estaba indignada: “¡¿Vas a dejar de\n"
# 472 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "comer de una vez?!”, me dijo.\l"
# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Y luego me machacó.\p"
# 474 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lo pasé fatal, menuda experiencia tan\n"
# 475 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "traumática, oye. Qué mal lo pasé…\p"
# 476 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ñam, ñam…$"
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 478 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet:
# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pero ¡¿qué estás diciendo, chaval?!\n"
# 480 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Menuda tontería!\p"
# 481 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¿Sabes lo que te digo?\n"
# 482 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Que era a mí a quien miraba!$"
# 483 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 484 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering:
# 485 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡¿Que qué?!\n"
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Bah!\p"
# 487 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Eso fue porque estabas\n"
# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "sentada a mi lado, lista!\p"
# 489 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡El ASTRO de la CÚPULA me estaba\n"
# 490 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "mirando a mí! ¡Y sólo a mí!$"
# 491 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 492 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceIsMine:
# 493 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Venga, ya!\n"
# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Dejad de discutir! ¡Parecéis críos!\p"
# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Menudos fans de pacotilla!\n"
# 496 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡No os merecéis animar\l"
# 497 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "ni a un LÍDER de GIMNASIO!\p"
# 498 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡El ASTRO de la CÚPULA es para mí!\n"
# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Es mi único ídolo!$"
# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 501 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers:
# 502 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Mira a ésos de ahí discutiendo…\p"
# 503 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Resulta difícil de creer, pero antes\n"
# 504 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "eran ENTRENADORES, y de los buenos.\p"
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Vamos, que eran famosos y todo.\p"
# 506 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pero en un torneo, hubo un ENTRENADOR\n"
# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "que los eclipsó completamente.\p"
# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Les dio una paliza tremenda a todos.\p"
# 509 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Y ahora son sus fans incondicionales\n"
# 510 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "y van a animarlo a la CÚPULA BATALLA\l"
# 511 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "siempre que participa en un torneo.$"
# 512 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier:
# 514 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Dicen que han visto a un POKéMON\n"
# 515 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "que tiene una cola larguísima en algún\l"
# 516 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "sitio del FRENTE de BATALLA.\p"
# 517 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Tiene que ser adorable, seguro…\p"
# 518 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Los desafíos pueden esperar.\n"
# 519 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "¡Yo quiero encontrar a ese POKéMON!$"
