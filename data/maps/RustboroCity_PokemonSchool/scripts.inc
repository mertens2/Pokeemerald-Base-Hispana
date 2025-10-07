# 1 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_MapScripts::
# 3 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Blackboard::
# 6 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 7 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
# 8 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 9 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 10 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 13 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
# 18 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
# 19 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
# 20 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
# 21 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 24 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Poison::
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
# 27 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 28 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 29 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 30 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Paralysis::
# 31 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
# 32 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 34 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Sleep::
# 36 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
# 37 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 38 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 39 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 40 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Burn::
# 41 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
# 42 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 43 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 44 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Freeze::
# 46 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 48 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 50 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
# 51 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
# 52 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 54 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid1::
# 55 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
# 56 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 57 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 58 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid2::
# 59 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
# 60 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 61 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 62 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_RichBoy::
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 65 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 66 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Lass::
# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	checkitem ITEM_TM69
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_PokemonSchool_EventScript_LassHasTM69
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
# 70 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_TM69
# 71 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_UTurnExplain, MSGBOX_NPC
# 72 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_LassHasTM69::
# 75 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_UTurnExplain, MSGBOX_NPC
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 77 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	
# 78 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 80 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
# 81 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 82 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 83 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher::
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
# 91 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
# 93 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 95 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
# 114 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 123 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 124 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 126 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 127 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 128 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 129 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 131 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 132 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 139 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 140 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 141 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 142 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 143 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 144 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 149 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 151 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 153 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 156 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 157 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 161 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 162 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 164 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 168 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott::
# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 181 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 196 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
# 197 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
# 198 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 199 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 203 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 206 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 207 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
# 208 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 209 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "El pizarrón tiene información\nsobre los diferentes estados\ly lo diferentes que son ahora.$"
# 214 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 215 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ReadWhichTopic:
# 216 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "¿Cuál leerás?$"
# 217 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainPoison:
# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Si un Pokémon está envenenado,\nperderá PS gradualmente mientras esté\len el campo de batalla.\pAdemás, su Defensa Especial se\nverá reducida en un 15%.$"
# 220 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 221 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainParalysis:
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Antes, los Pokémon tipo Hielo\npodían congelar a sus rivales, pero,\lpor culpa del cambio climático,\lahora sólo pueden helarlos.\p"
# 223 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cuando un Pokémon está helado, perderá\n1/16 de sus PS totales cada turno,\ly se reducirá su Ataque Especial\la la mitad.$"
# 224 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 225 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainSleep:
# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Si un Pokémon se confunde,\npuede llegar a atacarse a sí mismo.\lEl efecto desaparece al ser\lreemplazado, y los Pokémon tipo Bicho\lson inmunes a dicho estado.$"
# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 229 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainBurn:
# 230 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Un Pokémon enamorado tendrá\nreducidos ambos de sus ataques en\lun 10%, y no podrán atacar un\l50% de las veces.\p"
# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Además, se ha descubierto que\nno hay restricción de género para\lenamorar a un Pokémon.\pEs decir, un Pokémon macho puede\nenamorar a otro Pokémon macho.$"
# 232 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainFreeze:
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Un Pokémon atrapado, perderá 1/8\nde sus PS en cada turno.\pAdemás, no podrá ser intercambiado.\nLos Pokémon fantasma no se\lverán afectados por dicho efecto.$"
# 235 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 236 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
# 237 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Estábamos estudiando este objeto.$"
# 238 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "La Garra Rápida hace que\nel Pokémon pueda atacar primero,\lindependientemente de su velocidad.\p"
# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "¡Recuerda leer el pizarrón!\n¡Puede que haya algo que\lno sepas!$"
# 242 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 243 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_TradingRightNow:
# 244 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Estoy intercambiando Pokémon\nen Pokémon Rubí.\p¿No es raro que yo aparezca\nhaciendo lo mismo ahí?$"
# 245 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "¡Siempre quise un Seedot!$"
# 248 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 249 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
# 250 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Siempre les enseño el movimiento\nAtracción a mis Pokémon.\p¡Hace que rivales de cualquier\ngénero dejen de atacar!$"
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 252 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
# 253 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "La confusión puede costarte\nun combate.\pEsto podría ayudarte.$"
# 254 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 255 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_UTurnExplain:
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ida y Vuelta es un movimiento\ntipo Bicho que ataca, y luego\lregresa al usuario a su Pokéball.\pMuy útil para librarse de\nciertos cambios de estado.$"
# 257 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 258 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
# 259 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "……………………………\n……………………\pDéjame, tengo que prestar atención.$"
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 261 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsNotes:
# 262 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Lleno de dibujos sobre\nPokémon de Hoenn, con algunas notas\lsobre sus tipos y habilidades.$"
# 263 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 264 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
# 265 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "¿Hola? ¿Te conosco?\pAh, ¡Sí!\n¡Eres {ELLA} Entrenador{A} que\lconocí en Petalburg!\p"
# 266 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Si no te molesta, te diré\nunos consejos para entrenar\lmejor a tus Pokémon.\p"
# 267 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Si entrenas lo suficiente,\nverás que aparece un nuevo menú\lque te deja seleccionar los\lmovimientos que pueden aprender\llos Pokémon.\p"
# 268 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Siempre recuerda revisar qué\nmovimientos pueden aprender tus\lPokémon luego de evolucionarlos.$"
# 269 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 270 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
# 271 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Esos niños carecen de potencial.$"
# 272 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 273 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottStoneBadge:
# 274 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Esa medalla… No es nada especial.$"
# 275 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 276 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
# 277 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "¿Hola? ¿Te conosco?\pAh, ¡Sí!\n¡Eres {ELLA} Entrenador{A} que\lconocí en Petalburg!\p"
# 278 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Si no te molesta, te diré\nunos consejos para entrenar\lmejor a tus Pokémon.\p"
# 279 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Si entrenas lo suficiente,\nverás que aparece un nuevo menú\lque te deja seleccionar los\lmovimientos que pueden aprender\llos Pokémon.\p"
# 280 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Siempre recuerda revisar qué\nmovimientos pueden aprender tus\lPokémon luego de evolucionarlos.\p"
# 281 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Deberías intentar hacerlo\nantes de cada Batalla de Gimnasio.$"
