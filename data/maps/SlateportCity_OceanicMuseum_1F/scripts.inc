# 1 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 2 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_MapScripts::
# 3 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 5 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_EntranceAttendant::
# 6 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_NPC
# 7 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 8 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 9 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeLeft::
# 10 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 11 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 12 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 13 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 14 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 15 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 16 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeRight::
# 17 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 18 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 19 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 21 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 22 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 23 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee::
# 24 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	showmoneybox 0, 0
# 25 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter, MSGBOX_YESNO
# 26 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee
# 27 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 28 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 29 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 30 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 31 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 32 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 33 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 34 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee::
# 35 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	checkmoney 50
# 36 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney
# 37 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_SHOP
# 38 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removemoney 50
# 39 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	updatemoneybox
# 40 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 41 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 42 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 43 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 44 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 45 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 46 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney::
# 47 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway
# 48 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 49 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 50 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 51 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 52 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 53 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 54 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 55 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 56 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway::
# 57 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup, MSGBOX_DEFAULT
# 58 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 59 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 60 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 61 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 62 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 63 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter:
# 64 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_down
# 65 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 66 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 67 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt1::
# 68 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll, MSGBOX_NPC
# 69 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 70 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 71 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt2::
# 72 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere, MSGBOX_NPC
# 73 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 74 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 75 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt3::
# 76 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich, MSGBOX_NPC
# 77 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 78 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 79 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt4::
# 80 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds, MSGBOX_SIGN
# 81 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 82 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 83 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt5::
# 84 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RustboroBungled, MSGBOX_NPC
# 85 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 86 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 87 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt6::
# 88 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney, MSGBOX_NPC
# 89 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 90 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 91 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WhirlpoolExperiment::
# 92 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment, MSGBOX_SIGN
# 93 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 94 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 95 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WaterfallExperiment::
# 96 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment, MSGBOX_SIGN
# 97 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 98 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 99 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanSoilDisplay::
# 100 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay, MSGBOX_SIGN
# 101 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 102 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 103 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_BeachSandDisplay::
# 104 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay, MSGBOX_SIGN
# 105 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 106 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 107 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact1::
# 108 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1, MSGBOX_SIGN
# 109 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 110 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 111 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact2::
# 112 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2, MSGBOX_SIGN
# 113 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 114 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 115 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact3::
# 116 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3, MSGBOX_SIGN
# 117 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 118 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 119 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FossilDisplay::
# 120 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_FossilDisplay, MSGBOX_SIGN
# 121 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 122 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 123 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_DepthMeasuringMachine::
# 124 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine, MSGBOX_SIGN
# 125 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 126 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 127 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron1::
# 128 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling, MSGBOX_NPC
# 129 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 130 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 131 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron2::
# 132 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel, MSGBOX_NPC
# 133 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 134 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 135 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron3::
# 136 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow, MSGBOX_NPC
# 137 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 138 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 139 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron4::
# 140 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon, MSGBOX_NPC
# 141 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 142 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 143 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt::
# 144 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lock
# 145 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	faceplayer
# 146 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay 8
# 147 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_PIN
# 148 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, Common_Movement_ExclamationMark
# 149 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 150 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, Common_Movement_Delay48
# 151 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 152 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis, MSGBOX_DEFAULT
# 153 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	giveitem ITEM_TM_THIEF
# 154 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief
# 155 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_THIEF
# 156 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain, MSGBOX_DEFAULT
# 157 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 158 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth
# 159 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth
# 160 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 161 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 162 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 163 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 164 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth::
# 165 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth
# 166 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth
# 167 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 168 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 169 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 170 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 171 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth::
# 172 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
# 173 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 174 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 175 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 176 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast::
# 178 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast
# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
# 180 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 181 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 182 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 183 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 184 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited::
# 185 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT
# 186 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_EXIT
# 187 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT
# 188 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	release
# 189 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 190 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 191 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief::
# 192 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis, MSGBOX_DEFAULT
# 193 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	release
# 194 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 195 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 196 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth:
# 197 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 198 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 199 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_4
# 200 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 201 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 202 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 203 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast:
# 204 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 205 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 206 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 207 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 208 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit:
# 209 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	face_down
# 210 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 211 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 212 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 213 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 214 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 215 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 216 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 217 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth:
# 218 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 219 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 220 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 221 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 222 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 223 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 224 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 225 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 226 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter:
# 227 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Hola. Éste es el MUSEO OCEÁNICO.\p"
# 228 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "La entrada cuesta 50¥.\n"
# 229 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¿Quieres entrar?$"
# 230 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 231 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself:
# 232 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Disfruta de la visita.$"
# 233 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 234 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney:
# 235 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Vaya, lo siento, pero parece que\n"
# 236 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "no tienes bastante dinero…$"
# 237 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 238 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup:
# 239 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¿Ah, sí? ¿Vienes con el grupo\n"
# 240 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "que entró justo antes?\p"
# 241 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Pues llegas tarde!\n"
# 242 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Date prisa para alcanzarles!$"
# 243 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 244 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll:
# 245 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Nosotros, el EQUIPO AQUA, existimos\n"
# 246 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "por el bien de la humanidad!$"
# 247 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 248 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere:
# 249 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Nos dijeron que viniéramos aquí\n"
# 250 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "y eso hemos hecho, pero…\p"
# 251 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Nuestro JEFE no está y sin él\n"
# 252 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "no somos nada.$"
# 253 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 254 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich:
# 255 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Si birlara todas las cosas\n"
# 256 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "que hay aquí, ¿me haría rico?$"
# 257 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 258 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds:
# 259 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Todo lo que aprenda aquí puedo\n"
# 260 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "aplicarlo con fines malvados…$"
# 261 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 262 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RustboroBungled:
# 263 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Si nuestro matón no la hubiera\n"
# 264 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "pifiado en CIUDAD FÉRRICA,\l"
# 265 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "no tendríamos que estar aquí!$"
# 266 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 267 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney:
# 268 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Yo no tenía 50¥, así que tuve que\n"
# 269 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "burlar a la recepcionista para entrar.\l"
# 270 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡No fue nada fácil!$"
# 271 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 272 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling:
# 273 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Quiero aprender todo lo que pueda\n"
# 274 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "sobre el mar y aplicarlo al combate.$"
# 275 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 276 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel:
# 277 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Me entra un mareo horrible\n"
# 278 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "cada vez que veo el mar…\p"
# 279 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Ojalá pudiera ser tan valiente\n"
# 280 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "como el CAP. BABOR!$"
# 281 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 282 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow:
# 283 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "El mar es tan, tan grande y tan,\n"
# 284 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "tan profundo…\p"
# 285 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Seguro que hay muchos POKéMON\n"
# 286 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "de los que nunca hemos oído hablar.$"
# 287 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 288 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon:
# 289 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Quiero un POKéMON marino.\p"
# 290 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Abrazarlo resultaría tan\n"
# 291 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "fresquito y agradable…$"
# 292 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 293 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis:
# 294 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Aaaaah!\n"
# 295 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¿Qué haces aquí?\p"
# 296 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¿Yo? Soy el miembro del EQUIPO\n"
# 297 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "AQUA al que diste una paliza en el\l"
# 298 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "TÚNEL FERVERGAL, ¿recuerdas?\p"
# 299 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Hala, toma!\n"
# 300 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Y espero que me perdones!$"
# 301 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 302 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain:
# 303 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Esa MT va más contigo que\n"
# 304 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "conmigo.\p"
# 305 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Hasta nunca, espero!\n"
# 306 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Jua, ja, ja, ja!$"
# 307 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 308 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis:
# 309 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Encima esto!\n"
# 310 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Toma esto y deja que me largue!$"
# 311 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 312 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment:
# 313 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Un líquido azul fluye en espiral dentro\n"
# 314 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "de un recipiente de cristal.\p"
# 315 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Éste es un experimento que se sirve\n"
# 316 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "de la fuerza del viento para recrear\l"
# 317 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "un TORBELLINO.”$"
# 318 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 319 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment:
# 320 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Una bola roja sube y baja dentro\n"
# 321 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "de un recipiente de cristal.\p"
# 322 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Éste es un experimento que se sirve\n"
# 323 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "del principio de la flotabilidad para\l"
# 324 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "simular una CASCADA.”$"
# 325 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 326 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay:
# 327 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Se trata de una muestra de tierra\n"
# 328 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "del fondo oceánico.\p"
# 329 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“A lo largo de miles de años, los\n"
# 330 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "restos orgánicos se van depositando\l"
# 331 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "en el fondo del mar y crean capas.\p"
# 332 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Mediante el análisis de estas capas\n"
# 333 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "sedimentarias, se puede aprender mucho\l"
# 334 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "sobre el pasado más remoto.”$"
# 335 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 336 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay:
# 337 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Se trata de una muestra de arena\n"
# 338 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "de playa.\p"
# 339 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“El agua de los ríos erosiona las rocas\n"
# 340 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "de las montañas, las fragmenta y las\l"
# 341 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "entierra en el lecho de los mismos.\p"
# 342 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Son reducidas a gravilla por la fricción\n"
# 343 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "del agua y acaban depositándose\l"
# 344 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "en las playas.”$"
# 345 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 346 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1:
# 347 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "MINI-INFO OCEÁNICA 1\n"
# 348 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¿Por qué el agua del mar es azul?\p"
# 349 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“La luz se compone de muchos colores.\p"
# 350 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Cuando la luz atraviesa el agua,\n"
# 351 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "la mayoría de estos colores son\l"
# 352 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "absorbidos, sobre todo los rojos.\p"
# 353 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "La luz azul se dispersa más fácilmente,\n"
# 354 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "por eso el mar tiene ese color.”$"
# 355 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 356 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2:
# 357 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "MINI-INFO OCEÁNICA 2\n"
# 358 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¿Por qué el mar es salado?\p"
# 359 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“El agua del mar contiene sal disuelta\n"
# 360 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "bajo forma de iones de sodio y cloruro.\p"
# 361 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Estos iones se separan de las rocas y\n"
# 362 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "llegan al mar por la acción de la lluvia.\p"
# 363 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "La alta concentración de sal disuelta\n"
# 364 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "hace que el mar sea salado.”$"
# 365 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 366 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3:
# 367 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "MINI-INFO OCEÁNICA 3\n"
# 368 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¿Qué es mayor? ¿La tierra o el mar?\p"
# 369 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“El mar cubre alrededor de un 70% del\n"
# 370 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "planeta, y el resto es tierra firme.\p"
# 371 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Por lo tanto, el mar es más del doble\n"
# 372 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "de grande que la tierra.”$"
# 373 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 374 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_FossilDisplay:
# 375 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Se trata de un fósil con crestas\n"
# 376 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "onduladas.\p"
# 377 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“La marea erosiona el suelo\n"
# 378 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "del fondo oceánico.\p"
# 379 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Las corrientes marcan el suelo\n"
# 380 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "con pequeñas crestas y valles.\p"
# 381 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Si este suelo termina fosilizándose,\n"
# 382 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "recibe el nombre de marca fósil.”$"
# 383 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 384 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine:
# 385 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Una extraña máquina está rotando\n"
# 386 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "bajo una cúpula de cristal.\p"
# 387 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Quizás sirva para medir la\n"
# 388 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "profundidad de algo…$"
