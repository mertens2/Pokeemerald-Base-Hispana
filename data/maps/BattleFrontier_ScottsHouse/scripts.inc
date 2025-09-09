# 1 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 2 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_MapScripts::
# 3 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 5 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Scott::
# 6 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	lock
# 7 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	faceplayer
# 8 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, BattleFrontier_ScottsHouse_EventScript_GivenBerry
# 9 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, BattleFrontier_ScottsHouse_EventScript_GivenShield
# 10 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints
# 11 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems
# 12 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 13 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 14 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveItems::
# 15 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SCOTT_GIVES_BATTLE_POINTS, BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier
# 16 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_COLLECTED_ALL_SILVER_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols
# 17 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_COLLECTED_ALL_GOLD_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols
# 18 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 19 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 20 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 21 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveShield::
# 22 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SILVER_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield
# 23 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOLD_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield
# 24 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 25 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 26 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 27 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols::
# 28 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_TOWER_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 29 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 30 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 31 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_ARENA_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 32 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_FACTORY_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 33 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PIKE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 34 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PYRAMID_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 35 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols, MSGBOX_DEFAULT
# 36 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	giveitem ITEM_LANSAT_BERRY
# 37 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
# 38 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_COLLECTED_ALL_SILVER_SYMBOLS
# 39 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 40 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 41 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 43 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols::
# 44 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_TOWER_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 45 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 46 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 47 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_ARENA_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 48 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_FACTORY_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 49 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PIKE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 50 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PYRAMID_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 51 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	giveitem ITEM_STARF_BERRY
# 53 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
# 54 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_COLLECTED_ALL_GOLD_SYMBOLS
# 55 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 56 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 57 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 58 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 59 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_BerryPocketFull::
# 60 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_BerryPocketStuffed, MSGBOX_DEFAULT
# 61 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 62 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 63 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 64 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenBerry::
# 65 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere, MSGBOX_DEFAULT
# 66 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 67 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 69 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_RandomComment::
# 70 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	random 3
# 71 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment
# 72 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment
# 73 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers, MSGBOX_DEFAULT
# 74 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 75 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 76 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 77 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment::
# 78 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain, MSGBOX_DEFAULT
# 79 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 80 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 81 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 82 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment::
# 83 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier, MSGBOX_DEFAULT
# 84 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 85 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 87 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield::
# 88 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 89 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 90 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 91 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 50, BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
# 92 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
# 93 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 94 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 50, BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
# 95 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 96 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 97 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 98 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveSilverShield::
# 99 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow, MSGBOX_DEFAULT
# 100 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	givedecoration DECOR_SILVER_SHIELD
# 101 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
# 102 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_RECEIVED_SILVER_SHIELD
# 103 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 104 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
# 105 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 107 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_NoRoomForShield::
# 108 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ComeBackForThisLater, MSGBOX_DEFAULT
# 109 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 110 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 111 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 112 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenShield::
# 113 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings, MSGBOX_DEFAULT
# 114 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 115 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 116 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 117 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield::
# 118 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 119 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 120 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 121 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 100, BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
# 122 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
# 123 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 124 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 100, BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
# 125 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 126 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 127 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 128 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveGoldShield::
# 129 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow, MSGBOX_DEFAULT
# 130 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	givedecoration DECOR_GOLD_SHIELD
# 131 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
# 132 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_RECEIVED_GOLD_SHIELD
# 133 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 134 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
# 135 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 136 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 137 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints::
# 138 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingGreatThings, MSGBOX_DEFAULT
# 139 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 140 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 141 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 142 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier::
# 143 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 144 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	closemessage
# 145 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	delay 30
# 146 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayNorth
# 147 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwaySouth
# 148 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayEast
# 149 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayWest
# 150 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal, MSGBOX_DEFAULT
# 151 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_FacePlayer
# 152 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 153 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing, MSGBOX_DEFAULT
# 154 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_SCOTT_STATE, 13, BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints
# 155 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_SCOTT_STATE, 9, BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints
# 156 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_SCOTT_STATE, 6, BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints
# 157 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint
# 158 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 159 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 160 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints::
# 161 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 4
# 162 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 4
# 163 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 164 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 165 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 166 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints::
# 167 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 3
# 168 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 3
# 169 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 170 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 171 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 172 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints::
# 173 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 2
# 174 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 2
# 175 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 176 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 177 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 178 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint::
# 179 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 1
# 180 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 1
# 181 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 182 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 183 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 184 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints::
# 185 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	special GiveFrontierBattlePoints
# 186 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 187 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExplainBattlePoints, MSGBOX_DEFAULT
# 188 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_SCOTT_GIVES_BATTLE_POINTS
# 189 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 190 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 191 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 192 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 193 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayNorth::
# 194 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterUp
# 195 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 196 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 197 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 198 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwaySouth::
# 199 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterDown
# 200 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 201 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 202 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 203 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayEast::
# 204 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 205 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 206 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 207 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 208 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayWest::
# 209 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 210 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 211 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 212 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 213 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier:
# 214 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "TRETO: ¡Hola, hola!\n"
# 215 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Je, je… Perdona por lo pequeño del sitio.\p"
# 216 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Pero, en fin, {PLAYER}{KUN}, déjame darte\n"
# 217 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "la bienvenida al FRENTE de BATALLA.\p"
# 218 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Éste es mi sueño.\n"
# 219 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Me ha llevado años, pero por fin\l"
# 220 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "he conseguido hacerlo realidad.$"
# 221 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 222 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal:
# 223 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ahora que lo pienso, la verdad es que\n"
# 224 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "ha sido un viaje largo y agotador…\p"
# 225 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Dejé mi hogar hace mucho tiempo en\n"
# 226 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "busca de los ENTRENADORES más fuertes.\p"
# 227 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Nadie sabe el trabajo que me ha costado\n"
# 228 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "conseguirlo.$"
# 229 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 230 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing:
# 231 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Pero bueno, todo eso ya pasó.\n"
# 232 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Ya no hay por qué lamentarse!\p"
# 233 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ahora sólo quiero que disfrutes todo\n"
# 234 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "lo que puedas de este lugar mágico.\p"
# 235 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER}{KUN}, quiero entregarte esto\n"
# 236 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "como recuerdo de todas las ocasiones\l"
# 237 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "en que se cruzaron nuestros caminos.$"
# 238 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 239 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints:
# 240 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER} obtuvo {STR_VAR_1} PB.$"
# 241 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 242 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExplainBattlePoints:
# 243 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "TRETO: En el PASE del FRENTE podrás\n"
# 244 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "ver los PUNTOS de BATALLA que tienes.\p"
# 245 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "A medida que mejoren tus resultados\n"
# 246 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "en el FRENTE de BATALLA, se será\l"
# 247 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "más generoso a la hora de darte puntos.\p"
# 248 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Usa los puntos para lo que consideres.\n"
# 249 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Cámbialos por objetos si quieres.$"
# 250 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 251 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExpectingGreatThings:
# 252 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Espero mucho de ti!$"
# 253 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 254 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers:
# 255 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "TRETO: Cada ENTRENADOR es como es.\n"
# 256 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Cada uno vive a su manera.\p"
# 257 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Pero, cuando entran en combate,\n"
# 258 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "ya no importa quiénes son.\p"
# 259 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Todos son iguales!\p"
# 260 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Me gusta esa pureza del combate,\n"
# 261 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "donde todo el mundo es igual.\p"
# 262 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Por eso me he pasado media vida\n"
# 263 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "buscando ENTRENADORES de verdad.\l"
# 264 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Y por eso están todos aquí.$"
# 265 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 266 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain:
# 267 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "TRETO: ¿Has llegado a conocer\n"
# 268 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "a alguno de los ASES del FRENTE?\p"
# 269 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Mejor aún, ¿has conseguido\n"
# 270 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "alguno de sus símbolos?\p"
# 271 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Yo los escogí personalmente uno a uno.\n"
# 272 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Son los mejores ENTRENADORES que hay.\p"
# 273 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Pero estoy seguro de que, cuando vean\n"
# 274 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "lo fuerte que eres tú, más de uno se va\l"
# 275 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "a quedar con la boca abierta…$"
# 276 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 277 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier:
# 278 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "TRETO: Tú no entrenas sólo\n"
# 279 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "para combatir, ¿verdad?\p"
# 280 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Creo que te vi una vez con una POKéDEX.\p"
# 281 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Pues vas a tener suerte, oye.\p"
# 282 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Quizás encuentres algunos POKéMON\n"
# 283 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "salvajes en el FRENTE de BATALLA…\l"
# 284 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Je, je, je!$"
# 285 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 286 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols:
# 287 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "TRETO: ¿Te está gustando\n"
# 288 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "el FRENTE de BATALLA?\p"
# 289 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Eh…, espera un segundo…\p"
# 290 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Tu PASE del FRENTE!\n"
# 291 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡¡Tienes todos los símbolos de plata!!\p"
# 292 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Eso es impresionante!\n"
# 293 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Ya sabía yo que valías para esto!\p"
# 294 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Normalmente, no suelo hacerlo,\n"
# 295 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡pero es una ocasión especial!\p"
# 296 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Toma esto!\n"
# 297 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Seguro que sabes sacarle partido!$"
# 298 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 299 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols:
# 300 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "TRETO: Espero que estés disfrutando\n"
# 301 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "mucho del FRENTE de BATALLA.\p"
# 302 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "…\n"
# 303 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Pero ¿qué ven mis ojos?…\p"
# 304 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Mira ese PASE del FRENTE! ¡¡Pero\n"
# 305 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "si tienes todos los símbolos de oro!!\p"
# 306 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Ahora sí que me has dejado de piedra!\n"
# 307 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Eres increíble, justo como pensaba!\p"
# 308 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Mmm…\p"
# 309 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡{PLAYER}, tienes que aceptar esto!\p"
# 310 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Nadie como tú sabrá apreciar\n"
# 311 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "el valor de este regalo!$"
# 312 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 313 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere:
# 314 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Debo decir que sé reconocer a un buen\n"
# 315 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "ENTRENADOR nada más verlo.\p"
# 316 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Me alegro tanto de haberte traído!$"
# 317 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 318 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_BerryPocketStuffed:
# 319 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Tu BOLSILLO de BAYAS está a tope.$"
# 320 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 321 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow:
# 322 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "TRETO: ¡Oye, todo el mundo habla de ti!\n"
# 323 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡La TORRE BATALLA está a tus pies!\l"
# 324 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¿50 ENTRENADORES consecutivos?\p"
# 325 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Eso es fantástico!\n"
# 326 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Toma esto, te lo mereces más que nadie!$"
# 327 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 328 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow:
# 329 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "TRETO: ¡Eh, todos hablan de ti!\n"
# 330 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Y de cómo arrasas en la TORRE BATALLA!\l"
# 331 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡100 ENTRENADORES seguidos!\p"
# 332 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Ahora sí que te has pasado!\n"
# 333 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Toma, quiero darte esto!$"
# 334 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 335 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings:
# 336 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "¡Espero seguir oyendo a todos\n"
# 337 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "hablar de esas hazañas tuyas!$"
# 338 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 339 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ComeBackForThisLater:
# 340 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Vaya, parece que tienes demasiadas\n"
# 341 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "cosas. Vuelve más tarde.$"
