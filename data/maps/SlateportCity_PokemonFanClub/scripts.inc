# 1 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 2 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_MapScripts::
# 3 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 5 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman::
# 6 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_ENTERED_CONTEST, SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest
# 9 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_MeetChairman
# 10 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_SLATEPORT_FAN_CLUB_STATE
# 11 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment
# 12 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon
# 13 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 14 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 15 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 16 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 17 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment::
# 18 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 1
# 19 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon, MSGBOX_DEFAULT
# 20 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 21 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 22 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 23 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon::
# 24 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_2, 0
# 25 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 26 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 27 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 28 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 29 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 30 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_TEMP_2, CONTEST_CATEGORIES_COUNT, SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves
# 31 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_SLATEPORT_FAN_CLUB_STATE, 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 32 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing, MSGBOX_DEFAULT
# 33 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 34 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 35 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 36 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoMoreScarves::
# 37 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou, MSGBOX_DEFAULT
# 38 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 39 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 40 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 41 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon::
# 42 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HmHmISee, MSGBOX_DEFAULT
# 43 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 0
# 44 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonTough
# 45 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonSmart
# 46 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCute
# 47 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty
# 48 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCool
# 49 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 50 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_TEMP_1
# 51 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_NoHighConditions
# 52 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_GiveRedScarf
# 53 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf
# 54 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 3, SlateportCity_PokemonFanClub_EventScript_GivePinkScarf
# 55 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 4, SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf
# 56 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 5, SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf
# 57 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 58 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 59 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 60 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves::
# 61 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 2
# 62 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 63 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 64 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf::
# 65 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addvar VAR_TEMP_2, 1
# 66 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 67 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 68 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoHighConditions::
# 69 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks, MSGBOX_DEFAULT
# 70 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 71 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 72 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 73 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveRedScarf::
# 74 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_RED_SCARF
# 75 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 76 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 77 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_RED_SCARF
# 78 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_RED_SCARF
# 79 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainRedScarf, MSGBOX_DEFAULT
# 80 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 81 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 82 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 83 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf::
# 84 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_BLUE_SCARF
# 85 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 86 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 87 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_BLUE_SCARF
# 88 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_BLUE_SCARF
# 89 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainBlueScarf, MSGBOX_DEFAULT
# 90 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 91 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 92 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 93 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GivePinkScarf::
# 94 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_PINK_SCARF
# 95 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 96 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 97 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_PINK_SCARF
# 98 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_PINK_SCARF
# 99 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainPinkScarf, MSGBOX_DEFAULT
# 100 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 101 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 102 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 103 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf::
# 104 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_GREEN_SCARF
# 105 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 106 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 107 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_GREEN_SCARF
# 108 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 109 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainGreenScarf, MSGBOX_DEFAULT
# 110 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 111 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 112 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 113 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf::
# 114 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_YELLOW_SCARF
# 115 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 116 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 117 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_YELLOW_SCARF
# 118 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_YELLOW_SCARF
# 119 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainYellowScarf, MSGBOX_DEFAULT
# 120 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 121 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 122 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 123 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf::
# 124 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NoSpaceForReward, MSGBOX_DEFAULT
# 125 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 126 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 127 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 128 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCool::
# 129 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCool
# 130 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCool
# 131 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 132 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 133 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCool::
# 134 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 1
# 135 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 136 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 137 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty::
# 138 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonBeauty
# 139 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonBeauty
# 140 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 141 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 142 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonBeauty::
# 143 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 2
# 144 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 145 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 146 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCute::
# 147 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCute
# 148 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCute
# 149 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 150 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 151 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCute::
# 152 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 3
# 153 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 154 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 155 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonSmart::
# 156 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSmart
# 157 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonSmart
# 158 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 159 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 160 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonSmart::
# 161 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 4
# 162 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 163 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 164 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonTough::
# 165 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonTough
# 166 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonTough
# 167 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 168 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 169 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonTough::
# 170 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 5
# 171 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 172 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 173 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest::
# 174 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest
# 175 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 176 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 177 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 178 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 179 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 180 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest::
# 181 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon, MSGBOX_DEFAULT
# 182 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 183 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 184 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 185 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_MeetChairman::
# 186 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 187 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 188 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 189 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 190 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SootheBellWoman::
# 191 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 192 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 193 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell
# 194 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou, MSGBOX_DEFAULT
# 195 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 196 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, SlateportCity_PokemonFanClub_EventScript_GiveSootheBell
# 197 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 198 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 199 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 200 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveSootheBell::
# 201 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_PIN
# 202 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 203 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 204 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 205 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 206 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonAdoresYou, MSGBOX_DEFAULT
# 207 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 208 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 209 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_SOOTHE_BELL
# 210 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 211 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 212 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 213 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell::
# 214 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove, MSGBOX_DEFAULT
# 215 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 216 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 217 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 218 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Man::
# 219 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting, MSGBOX_NPC
# 220 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 221 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 222 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Twin::
# 223 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein, MSGBOX_NPC
# 224 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 225 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 226 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Skitty::
# 227 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 228 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 229 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 230 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 231 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Skitty, MSGBOX_DEFAULT
# 232 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 233 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 234 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 235 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 236 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Zigzagoon::
# 237 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 238 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 239 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 240 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 241 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Zigzagoon, MSGBOX_DEFAULT
# 242 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 243 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 244 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 245 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 246 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Azumarill::
# 247 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 248 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 249 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 250 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 251 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Azumarill, MSGBOX_DEFAULT
# 252 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 253 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 254 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 255 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 256 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MeetChairman:
# 257 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Ejem, ejem… ¡Soy el PRESIDENTE\n"
# 258 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "del CLUB de FANS de POKéMON!\p"
# 259 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Naturalmente, el PRESIDENTE\n"
# 260 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "es la persona más importante…\p"
# 261 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Nadie me iguala entrenando POKéMON.\n"
# 262 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¡Nadie!\p"
# 263 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Bueno, te voy a explicar qué son\n"
# 264 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "los CONCURSOS POKéMON.\p"
# 265 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¡Son competiciones donde puedes\n"
# 266 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "mostrar tus POKéMON al mundo mundial!\p"
# 267 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Pero siempre tienen lugar en el quinto\n"
# 268 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "pino, así que no puedo participar mucho.\p"
# 269 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Por eso nos reunimos aquí, para\n"
# 270 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "que todo el mundo pueda fardar\l"
# 271 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "de POKéMON, aunque sea un poco.$"
# 272 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 273 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon:
# 274 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Ya me gustaría ver al POKéMON de algún\n"
# 275 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "ENTRENADOR que haya participado\l"
# 276 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "en algún CONCURSO POKéMON…$"
# 277 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 278 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon:
# 279 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Ejem, ejem… ¡Ya veo que has\n"
# 280 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "participado en un CONCURSO POKéMON!\p"
# 281 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Estoy deseando ver cómo\n"
# 282 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "has criado a tu POKéMON.\p"
# 283 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Es maravilloso ver cómo los demás\n"
# 284 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "ENTRENADORES cuidan a sus POKéMON.\p"
# 285 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Me encantan las caras satisfechas\n"
# 286 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "de los POKéMON bien entrenados…\p"
# 287 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Y las cariñosas miradas de sus\n"
# 288 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "orgullosos ENTRENADORES…\p"
# 289 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Ay, ver tanta felicidad me llena\n"
# 290 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "de gozo…\p"
# 291 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¡Oh, pero discúlpame, empiezo\n"
# 292 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "a hablar y no paro!\p"
# 293 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Te lo ruego, permíteme examinar tu\n"
# 294 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON, a ver cuánto ha crecido.$"
# 295 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 296 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing:
# 297 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¿Qué tal está creciendo tu\n"
# 298 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON? Déjame examinarlo…$"
# 299 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 300 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_HmHmISee:
# 301 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Ajá… Muy bien…\n"
# 302 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Ya veo…$"
# 303 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 304 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks:
# 305 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Mmmm… No está mal, pero\n"
# 306 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "tampoco está bien…\p"
# 307 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¡Tú, que entrenas POKéMON,\n"
# 308 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "deberías esforzarte más con éste!\p"
# 309 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Una sugerencia… ¿Por qué no\n"
# 310 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "le das más {POKEBLOCK}S?$"
# 311 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 312 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_NoSpaceForReward:
# 313 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Vaya, vaya…\p"
# 314 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Tu POKéMON está creciendo\n"
# 315 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "muy bien. ¡Te mereces un premio!\p"
# 316 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Lástima que no tengas sitio\n"
# 317 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "en la MOCHILA…$"
# 318 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 319 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis:
# 320 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¡Tu {STR_VAR_1} está creciendo\n"
# 321 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "a un ritmo impresionante!\l"
# 322 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¡Qué magnífico ejemplar!\p"
# 323 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Pero, si le das esto, crecerá\n"
# 324 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "aún mejor. ¡Te lo digo yo!$"
# 325 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 326 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainRedScarf:
# 327 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Dale el PAÑUELO ROJO a un POKéMON.\p"
# 328 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¡Así todo el mundo podrá ver\n"
# 329 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "lo carismático que es!$"
# 330 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 331 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainBlueScarf:
# 332 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Dale el PAÑUELO AZUL a un POKéMON.\p"
# 333 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¡De esta manera conseguirás realzar\n"
# 334 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "su belleza aún más!$"
# 335 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 336 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainPinkScarf:
# 337 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Dale el PAÑUELO ROSA a un POKéMON.\p"
# 338 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¡Con él lograrás que parezca aún\n"
# 339 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "más dulce de lo que ya es!$"
# 340 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 341 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainGreenScarf:
# 342 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Dale el PAÑUELO VERDE a un POKéMON.\p"
# 343 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¡Potenciará su ingenio!$"
# 344 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 345 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainYellowScarf:
# 346 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Dale el PAÑUELO AMARILLO a un POKéMON.\p"
# 347 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¡Le hará ser mucho más duro\n"
# 348 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "de lo que es ahora!$"
# 349 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 350 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou:
# 351 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Lo siento, pero no me queda nada\n"
# 352 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "más que darte… ¡Nada de nada!\p"
# 353 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Después de todo, tienes el don de\n"
# 354 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "saber entrenar POKéMON sin recurrir\l"
# 355 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "continuamente a objetos, ¿no?$"
# 356 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 357 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou:
# 358 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Me encanta ver POKéMON que\n"
# 359 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "quieren a sus ENTRENADORES.\p"
# 360 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Los POKéMON son muy sensibles a los\n"
# 361 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "sentimientos de sus ENTRENADORES.\p"
# 362 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Si tratas a tus POKéMON con amor\n"
# 363 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "y cariño, te corresponderán.\p"
# 364 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Cuando tus POKéMON te quieran\n"
# 365 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "un poco más, vuelve a verme.$"
# 366 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 367 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_PokemonAdoresYou:
# 368 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Tu POKéMON te adora.\p"
# 369 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¡Como has demostrado tener un gran\n"
# 370 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "corazón, el CLUB de FANS te regala esto!$"
# 371 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 372 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove:
# 373 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Los POKéMON son muy sensibles a los\n"
# 374 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "sentimientos de los ENTRENADORES.\p"
# 375 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Si tratas a tus POKéMON con amor\n"
# 376 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "y cariño, te corresponderán.$"
# 377 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 378 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting:
# 379 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Si continuamente dejas que tus POKéMON\n"
# 380 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "caigan debilitados durante un combate,\l"
# 381 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "acabarán por resentirse de esto.\p"
# 382 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Muy pronto empezarán a perder\n"
# 383 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "confianza en su ENTRENADOR.\p"
# 384 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "En otras palabras, terminarás\n"
# 385 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "por no gustarles ni un pelo.$"
# 386 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 387 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein:
# 388 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "¿A los POKéMON les gusta\n"
# 389 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "que se les dé objetos?\p"
# 390 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "No sé, los míos se pusieron muy\n"
# 391 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "contentos cuando les di PROTEÍNA.$"
# 392 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 393 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Skitty:
# 394 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "SKITTY: Skitiiiiii…$"
# 395 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 396 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Zigzagoon:
# 397 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "ZIGZAGOON: Zigzaaaa…$"
# 398 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 399 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Azumarill:
# 400 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "AZUMARILL: ¿Marimari?$"
