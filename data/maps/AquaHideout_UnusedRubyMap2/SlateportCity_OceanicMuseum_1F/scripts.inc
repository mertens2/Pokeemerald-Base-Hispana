# 1 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 2 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
@ .set LOCALID_FAMILIAR_GRUNT, 13
# 3 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 4 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_MapScripts::
# 5 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.byte 0
# 6 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 7 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_EntranceAttendant::
# 8 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_NPC
# 9 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 10 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 11 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeLeft::
# 12 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 13 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 14 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 15 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 16 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 17 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 18 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeRight::
# 19 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 20 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 21 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 22 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 23 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 24 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 25 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee::
# 26 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	showmoneybox 0, 0
# 27 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter, MSGBOX_YESNO
# 28 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee
# 29 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 30 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 31 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 32 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 34 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 35 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 36 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee::
# 37 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	checkmoney 50
# 38 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney
# 39 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_SHOP
# 40 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removemoney 50
# 41 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	updatemoneybox
# 42 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 43 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 44 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 45 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 46 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 47 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 48 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney::
# 49 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway
# 50 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 51 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 52 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 53 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 54 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 55 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 56 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 57 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 58 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway::
# 59 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup, MSGBOX_DEFAULT
# 60 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 61 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 62 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 63 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 64 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 65 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter:
# 66 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_down
# 67 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 68 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 69 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt1::
# 70 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll, MSGBOX_NPC
# 71 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 72 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 73 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt2::
# 74 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere, MSGBOX_NPC
# 75 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 76 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 77 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt3::
# 78 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich, MSGBOX_NPC
# 79 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 80 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 81 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt4::
# 82 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds, MSGBOX_SIGN
# 83 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 84 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 85 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt5::
# 86 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RustboroBungled, MSGBOX_NPC
# 87 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 88 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 89 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt6::
# 90 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney, MSGBOX_NPC
# 91 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 92 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 93 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WhirlpoolExperiment::
# 94 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment, MSGBOX_SIGN
# 95 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 96 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 97 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WaterfallExperiment::
# 98 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment, MSGBOX_SIGN
# 99 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 100 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 101 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanSoilDisplay::
# 102 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay, MSGBOX_SIGN
# 103 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 104 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 105 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_BeachSandDisplay::
# 106 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay, MSGBOX_SIGN
# 107 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 108 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 109 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact1::
# 110 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1, MSGBOX_SIGN
# 111 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 112 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 113 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact2::
# 114 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2, MSGBOX_SIGN
# 115 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 116 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 117 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact3::
# 118 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3, MSGBOX_SIGN
# 119 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 120 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 121 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FossilDisplay::
# 122 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_FossilDisplay, MSGBOX_SIGN
# 123 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 124 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 125 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_DepthMeasuringMachine::
# 126 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine, MSGBOX_SIGN
# 127 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 128 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 129 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron1::
# 130 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling, MSGBOX_NPC
# 131 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 132 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 133 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron2::
# 134 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel, MSGBOX_NPC
# 135 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 136 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 137 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron3::
# 138 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow, MSGBOX_NPC
# 139 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 140 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 141 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron4::
# 142 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon, MSGBOX_NPC
# 143 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 144 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 145 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt::
# 146 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lock
# 147 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	faceplayer
# 148 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay 8
# 149 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_PIN
# 150 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, Common_Movement_ExclamationMark
# 151 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 152 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, Common_Movement_Delay48
# 153 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 154 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis, MSGBOX_DEFAULT
# 155 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	giveitem ITEM_TM46
# 156 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief
# 157 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM46
# 158 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain, MSGBOX_DEFAULT
# 159 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 160 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth
# 161 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth
# 162 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 163 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 164 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 165 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 166 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth::
# 167 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth
# 168 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth
# 169 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 170 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 171 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 172 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 173 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth::
# 174 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
# 175 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 176 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 177 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 178 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 179 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast::
# 180 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast
# 181 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
# 182 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 183 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 184 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 185 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 186 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited::
# 187 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT
# 188 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_EXIT
# 189 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removeobject LOCALID_FAMILIAR_GRUNT
# 190 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	release
# 191 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 192 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 193 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief::
# 194 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis, MSGBOX_DEFAULT
# 195 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	release
# 196 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 197 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 198 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth:
# 199 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 200 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_right
# 201 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 202 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_4
# 203 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 204 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 205 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 206 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast:
# 207 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 208 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 209 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 210 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 211 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit:
# 212 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	face_down
# 213 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 214 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 215 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 216 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 217 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 218 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 219 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 220 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 221 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 222 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 223 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 224 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 225 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth:
# 226 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 227 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 228 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 229 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 230 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 231 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 232 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 233 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 234 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 235 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 236 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 237 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 238 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter:
# 239 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Sea bienvenid{OA} al Museo Oceánico!\p"
# 240 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "La entrada cuesta ¥50.\n"
# 241 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¿Quisiera entrar?$"
# 242 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 243 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself:
# 244 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Disfrute!$"
# 245 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 246 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney:
# 247 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¿Eh? Lo siento mucho, pero parece que\n"
# 248 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "no tiene suficiente dinero.$"
# 249 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 250 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup:
# 251 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Ah! Usted debe estar con el\ngrupo que pasó antes, ¿no?\p"
# 252 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Su Jefe pagó las entradas para todos.\n"
# 253 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Apúrese que llega tarde!$"
# 254 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 255 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll:
# 256 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Ayudaremos a las criaturas océanicas!$"
# 257 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 258 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere:
# 259 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Ya sé que el Jefe dijo que tardaría\nen venir, pero…\p"
# 260 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Me preocupa que tarde demasiado.$"
# 261 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 262 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich:
# 263 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "La biología marina es una de\n"
# 264 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "mis pasiones.\p¿Crees que llegue algún día\na trabajar de eso?$"
# 265 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 266 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds:
# 267 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Con lo que aprenda aquí…\n¡Podré abrir mi restaurante temático!$"
# 268 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 269 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RustboroBungled:
# 270 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Estamos aquí por cosas secretas!\n¡Muaja ja ja ja!$"
# 271 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 272 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney:
# 273 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Soy pobre, así que me alegra que\nnuestro Jefecito sea tan generoso,\l¡Siempre había soñado entrar aquí!$"
# 274 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 275 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling:
# 276 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Quiero aprender del mar y su\n"
# 277 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "historia para hacerme más fuerte.$"
# 278 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 279 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel:
# 280 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡El Capitán Stern es el mejor!$"
# 281 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 282 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow:
# 283 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "El océano es tan, tan vasto…\p"
# 284 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Deben haber tantos Pokémon ahí.$"
# 285 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 286 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon:
# 287 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "...$"
# 288 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 289 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis:
# 290 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Ey ey ey!\n"
# 291 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡¿Qué haces aquí?!\pSoy el Recluta que derrotaste en el\nTúnel Rusturf. ¡Gracias a tí,\lmi vida ha mejorado!\p"
# 292 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Volví a hablar con ese hombre al\nque molesté, y le dije que podía cavar ahí\lsi tenía mucho ciudado.\p"
# 293 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Luego, me dijo que quería conocerme\nmejor, y le dije que nos viéramos\lpronto. Decidí trabajar aquí otro mes,\lpara comprarle algo lindo.\p"
# 294 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Toma esto como agradecimiento!$"
# 295 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 296 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain:
# 297 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡Esa MT te permitirá quitarle\nlos objetos equipados a tus rivales!\pTe aconsejo que lo uses contra Niños\n"
# 298 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Bien y Chicas Parasol, que suelen\ldarles Pepitas en sus Pokémon.\p¡Hasta pronto!$"
# 299 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 300 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis:
# 301 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¿Pero cómo?\n"
# 302 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "¡No me iré hasta que la aceptes!$"
# 303 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 304 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment:
# 305 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A blue fluid is spiraling inside\n"
# 306 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "a glass vessel.\p"
# 307 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“This is an experiment to create a\n"
# 308 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "WHIRLPOOL artificially using wind.”$"
# 309 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 310 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment:
# 311 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A red ball is bobbing up and down\n"
# 312 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "inside a glass vessel.\p"
# 313 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“This is an experiment simulating a\n"
# 314 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "WATERFALL using the ball's buoyancy.”$"
# 315 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 316 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay:
# 317 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a sample of soil from the ocean\n"
# 318 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "floor.\p"
# 319 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Over many years, the remains of\n"
# 320 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "life-forms settle at the bottom of\l"
# 321 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the sea, making sedimentary layers.\p"
# 322 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“By analyzing these layers, the\n"
# 323 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "ancient past is revealed.”$"
# 324 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 325 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay:
# 326 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a sample of beach sand.\p"
# 327 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Stones from mountains are washed\n"
# 328 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "down by rivers where they are\l"
# 329 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "chipped and ground down.\p"
# 330 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“They are reduced to grains and end\n"
# 331 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "up as sand on beaches.”$"
# 332 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 333 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1:
# 334 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 1\n"
# 335 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Why is seawater blue?\p"
# 336 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Light is composed of many colors.\p"
# 337 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“When light passes through water,\n"
# 338 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "most kinds of light lose color.\p"
# 339 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“However, blue light retains its\n"
# 340 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "color, making the sea appear blue.”$"
# 341 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 342 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2:
# 343 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 2\n"
# 344 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Why is the sea salty?\p"
# 345 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Seawater contains dissolved salt in\n"
# 346 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the form of sodium and chlorine ions.\p"
# 347 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“These ions leech out of rocks\n"
# 348 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "and are carried out to sea by rain.\p"
# 349 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The concentration of dissolved salt\n"
# 350 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "makes the sea salty.”$"
# 351 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 352 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3:
# 353 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“OCEANIC MINIFACT 3\n"
# 354 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Which is bigger? The sea or land?\p"
# 355 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The sea covers about 70% of\n"
# 356 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the planet, and the rest is land.\p"
# 357 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The sea is therefore more than twice\n"
# 358 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "the size of land.”$"
# 359 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 360 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_FossilDisplay:
# 361 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "It's a fossil with wavy ridges on it.\p"
# 362 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“Soil on the ocean floor gets scoured\n"
# 363 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "by the tide.\p"
# 364 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“The flowing seawater marks the soil\n"
# 365 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "with small ridges and valleys.\p"
# 366 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "“If this soil becomes fossilized, it is\n"
# 367 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "called a ripple mark.”$"
# 368 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 369 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine:
# 370 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "A strange machine is rotating under\n"
# 371 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "a glass dome.\p"
# 372 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Maybe it's for measuring the depth\n"
# 373 "data/maps/AquaHideout_UnusedRubyMap2/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "of something…$"
