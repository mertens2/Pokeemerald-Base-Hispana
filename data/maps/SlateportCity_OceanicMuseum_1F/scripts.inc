# 1 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 2 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 3 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_MapScripts::
# 4 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.byte 0
# 5 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 6 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_EntranceAttendant::
# 7 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_NPC
# 8 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 9 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 10 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeLeft::
# 11 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 12 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 13 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 14 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 15 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 16 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 17 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeRight::
# 18 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 19 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 20 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 22 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 23 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 24 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee::
# 25 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	showmoneybox 0, 0
# 26 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter, MSGBOX_YESNO
# 27 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee
# 28 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 29 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 30 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 31 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 32 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 33 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 34 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 35 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee::
# 36 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	checkmoney 50
# 37 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney
# 38 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_SHOP
# 39 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removemoney 50
# 40 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	updatemoneybox
# 41 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 42 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 43 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 44 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 45 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 46 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 47 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney::
# 48 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway
# 49 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 50 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 51 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 52 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 53 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 54 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 55 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 56 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 57 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway::
# 58 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup, MSGBOX_DEFAULT
# 59 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 60 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 61 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 62 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 63 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 64 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter:
# 65 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_down
# 66 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 67 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 68 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt1::
# 69 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll, MSGBOX_NPC
# 70 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 71 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 72 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt2::
# 73 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere, MSGBOX_NPC
# 74 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 75 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 76 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt3::
# 77 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich, MSGBOX_NPC
# 78 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 79 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 80 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt4::
# 81 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds, MSGBOX_SIGN
# 82 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 83 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 84 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt5::
# 85 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RustboroBungled, MSGBOX_NPC
# 86 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 87 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 88 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt6::
# 89 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney, MSGBOX_NPC
# 90 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 91 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 92 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WhirlpoolExperiment::
# 93 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment, MSGBOX_SIGN
# 94 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 95 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 96 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WaterfallExperiment::
# 97 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment, MSGBOX_SIGN
# 98 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 99 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 100 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanSoilDisplay::
# 101 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay, MSGBOX_SIGN
# 102 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 103 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 104 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_BeachSandDisplay::
# 105 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay, MSGBOX_SIGN
# 106 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 107 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 108 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact1::
# 109 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1, MSGBOX_SIGN
# 110 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 111 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 112 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact2::
# 113 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2, MSGBOX_SIGN
# 114 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 115 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 116 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact3::
# 117 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3, MSGBOX_SIGN
# 118 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 119 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 120 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FossilDisplay::
# 121 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_FossilDisplay, MSGBOX_SIGN
# 122 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 123 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 124 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_DepthMeasuringMachine::
# 125 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine, MSGBOX_SIGN
# 126 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 127 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 128 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron1::
# 129 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling, MSGBOX_NPC
# 130 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 131 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 132 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron2::
# 133 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel, MSGBOX_NPC
# 134 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 135 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 136 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron3::
# 137 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow, MSGBOX_NPC
# 138 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 139 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 140 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron4::
# 141 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon, MSGBOX_NPC
# 142 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 143 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 144 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt::
# 145 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lock
# 146 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	faceplayer
# 147 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay 8
# 148 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_PIN
# 149 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, Common_Movement_ExclamationMark
# 150 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 151 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, Common_Movement_Delay48
# 152 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 153 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis, MSGBOX_DEFAULT
# 154 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	giveitem ITEM_TM46
# 155 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief
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
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth
# 166 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth
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
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
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
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast
# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
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
	removeobject LOCALID_FAMILIAR_GRUNT
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
	walk_in_place_faster_right
# 199 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 200 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_4
# 201 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 202 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 203 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 204 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast:
# 205 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 206 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 207 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 208 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 209 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit:
# 210 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	face_down
# 211 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 212 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 213 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 214 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 215 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 216 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 217 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 218 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 219 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 220 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 221 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 222 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 223 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth:
# 224 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 225 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 226 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 227 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 228 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 229 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 230 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 231 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 232 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 233 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 234 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 235 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 236 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter:
# 237 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Sea bienvenid{OA} al Museo Oceánico!\p"
# 238 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "La entrada cuesta ¥50.\n"
# 239 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¿Quisiera entrar?$"
# 240 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 241 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself:
# 242 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Disfrute!$"
# 243 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 244 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney:
# 245 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¿Eh? Lo siento mucho, pero parece que\n"
# 246 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "no tiene suficiente dinero.$"
# 247 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 248 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup:
# 249 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Ah! Usted debe estar con el\ngrupo que pasó antes, ¿no?\p"
# 250 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Su Jefe pagó las entradas para todos.\n"
# 251 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Apúrese que llega tarde!$"
# 252 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 253 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll:
# 254 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Ayudaremos a las criaturas océanicas!$"
# 255 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 256 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere:
# 257 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Ya sé que el Jefe dijo que tardaría\nen venir, pero…\p"
# 258 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Me preocupa que tarde demasiado.$"
# 259 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 260 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich:
# 261 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "La biología marina es una de\n"
# 262 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "mis pasiones.\p¿Crees que llegue algún día\na trabajar de eso?$"
# 263 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 264 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds:
# 265 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Con lo que aprenda aquí…\n¡Podré abrir mi restaurante temático!$"
# 266 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 267 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RustboroBungled:
# 268 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Estamos aquí por cosas secretas!\n¡Muaja ja ja ja!$"
# 269 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 270 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney:
# 271 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Soy pobre, así que me alegra que\nnuestro Jefe sea tan generoso,\l¡Siempre había soñado entrar aquí!$"
# 272 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 273 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling:
# 274 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Quiero aprender del mar y su\n"
# 275 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "historia para hacerme más fuerte.$"
# 276 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 277 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel:
# 278 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡El Capitán Stern es el mejor!$"
# 279 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 280 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow:
# 281 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "El océano es tan, tan vasto…\p"
# 282 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Deben haber tantos Pokémon ahí.$"
# 283 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 284 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon:
# 285 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "...$"
# 286 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 287 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis:
# 288 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Ey ey ey!\n"
# 289 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡¿Qué haces aquí?!\pSoy el Recluta que derrotaste en el\nTúnel Rusturf. ¡Gracias a tí,\lmi vida ha mejorado!\p"
# 290 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Volví a hablar con ese hombre al\nque molesté, y le dije que podía cavar ahí\lsi tenía mucho ciudado.\p"
# 291 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Luego, me dijo que quería conocerme\nmejor, y le dije que nos viéramos\lpronto. Decidí trabajar aquí otro mes,\lpara comprarle algo lindo.\p"
# 292 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Toma esto como agradecimiento!$"
# 293 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 294 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain:
# 295 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Esa MT te permitirá quitarle\nlos objetos equipados a tus rivales!\pTe aconsejo que lo uses contra Niños\n"
# 296 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Bien y Chicas Parasol, que suelen\ldarles Pepitas en sus Pokémon.\p¡Hasta pronto!$"
# 297 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 298 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis:
# 299 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¿Pero cómo?\n"
# 300 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡No me iré hasta que la aceptes!$"
# 301 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 302 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment:
# 303 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A blue fluid is spiraling inside\n"
# 304 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "a glass vessel.\p"
# 305 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“This is an experiment to create a\n"
# 306 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "WHIRLPOOL artificially using wind.”$"
# 307 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 308 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment:
# 309 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A red ball is bobbing up and down\n"
# 310 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "inside a glass vessel.\p"
# 311 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“This is an experiment simulating a\n"
# 312 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "WATERFALL using the ball's buoyancy.”$"
# 313 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 314 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay:
# 315 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a sample of soil from the ocean\n"
# 316 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "floor.\p"
# 317 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Over many years, the remains of\n"
# 318 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "life-forms settle at the bottom of\l"
# 319 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the sea, making sedimentary layers.\p"
# 320 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“By analyzing these layers, the\n"
# 321 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "ancient past is revealed.”$"
# 322 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 323 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay:
# 324 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a sample of beach sand.\p"
# 325 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Stones from mountains are washed\n"
# 326 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "down by rivers where they are\l"
# 327 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "chipped and ground down.\p"
# 328 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“They are reduced to grains and end\n"
# 329 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "up as sand on beaches.”$"
# 330 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 331 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1:
# 332 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 1\n"
# 333 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Why is seawater blue?\p"
# 334 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Light is composed of many colors.\p"
# 335 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“When light passes through water,\n"
# 336 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "most kinds of light lose color.\p"
# 337 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“However, blue light retains its\n"
# 338 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "color, making the sea appear blue.”$"
# 339 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 340 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2:
# 341 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 2\n"
# 342 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Why is the sea salty?\p"
# 343 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Seawater contains dissolved salt in\n"
# 344 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the form of sodium and chlorine ions.\p"
# 345 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“These ions leech out of rocks\n"
# 346 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "and are carried out to sea by rain.\p"
# 347 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The concentration of dissolved salt\n"
# 348 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "makes the sea salty.”$"
# 349 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 350 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3:
# 351 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 3\n"
# 352 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Which is bigger? The sea or land?\p"
# 353 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The sea covers about 70% of\n"
# 354 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the planet, and the rest is land.\p"
# 355 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The sea is therefore more than twice\n"
# 356 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the size of land.”$"
# 357 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 358 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_FossilDisplay:
# 359 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a fossil with wavy ridges on it.\p"
# 360 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Soil on the ocean floor gets scoured\n"
# 361 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "by the tide.\p"
# 362 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The flowing seawater marks the soil\n"
# 363 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "with small ridges and valleys.\p"
# 364 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“If this soil becomes fossilized, it is\n"
# 365 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "called a ripple mark.”$"
# 366 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 367 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine:
# 368 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A strange machine is rotating under\n"
# 369 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "a glass dome.\p"
# 370 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Maybe it's for measuring the depth\n"
# 371 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "of something…$"
