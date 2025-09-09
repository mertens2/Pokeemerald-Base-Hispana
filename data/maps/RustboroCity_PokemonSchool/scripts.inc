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
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 70 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 71 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
# 72 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 75 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 77 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 78 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher::
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 80 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 81 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
# 82 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
# 83 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 91 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 93 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
# 95 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 114 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 123 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 124 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 126 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 127 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 128 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 129 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 131 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 132 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 139 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 140 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 141 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 142 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 143 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 144 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 149 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 151 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 153 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 156 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 157 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 161 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 162 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 164 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott::
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
# 168 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 181 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 196 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 197 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 198 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
# 199 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 203 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "En la pizarra hay notas sobre los\n"
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "cambios de estado que pueden afectar\l"
# 206 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a los POKéMON durante un combate.$"
# 207 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 208 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ReadWhichTopic:
# 209 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "¿Sobre qué tema te gustaría leer?$"
# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainPoison:
# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Si un POKéMON está envenenado,\n"
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "irá perdiendo PS continuamente.\p"
# 214 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Los efectos del veneno se dejan sentir\n"
# 215 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "incluso después del combate.\p"
# 216 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Los PS de un POKéMON envenenado\n"
# 217 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "disminuirán mientras viaja.\p"
# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Para curar un caso de envenenamiento,\n"
# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "usa un ANTÍDOTO.$"
# 220 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 221 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainParalysis:
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Si un POKéMON está paralizado,\n"
# 223 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "su VELOCIDAD cae en picado.\p"
# 224 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Es posible que incluso quede\n"
# 225 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "inmovilizado durante el combate.\p"
# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "La parálisis permanece después del\n"
# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "combate. Usa ANTIPARALIZACIÓN.$"
# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 229 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainSleep:
# 230 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Si un POKéMON se duerme, no podrá\n"
# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "atacar a su rival.\p"
# 232 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Un POKéMON puede despertarse por\n"
# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sí solo, pero, si el combate finaliza\l"
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "mientras está dormido, seguirá así.\p"
# 235 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Despiértalo usando DESPERTAR.$"
# 236 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 237 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainBurn:
# 238 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Una quemadura reduce el poder\n"
# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "de ATAQUE y los PS de la víctima.\p"
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Sus efectos continúan tras el\n"
# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "combate. Usa ANTIQUEMAR.$"
# 242 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 243 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainFreeze:
# 244 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Si un POKéMON está congelado,\n"
# 245 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "queda completamente indefenso.\p"
# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Continuará congelado tras el combate.\n"
# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Descongélalo usando ANTIHIELO.$"
# 248 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 249 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
# 250 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cuando un alumno no estudia nada,\n"
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "le doy jarabe de GARRA RÁPIDA.\p"
# 252 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Tu aplicación en el estudio se verá por\n"
# 253 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "la manera en que uses este objeto.$"
# 254 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 255 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Un POKéMON que tiene GARRA RÁPIDA\n"
# 257 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a veces ganará velocidad y se moverá\l"
# 258 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "antes que su rival.\p"
# 259 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hay muchos otros objetos que\n"
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "se pueden dar a los POKéMON.\p"
# 261 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Sólo eso da para estudiar un montón.$"
# 262 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 263 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_TradingRightNow:
# 264 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Voy a intercambiar un POKéMON\n"
# 265 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "con mi amigo ahora mismo.$"
# 266 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 267 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
# 268 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Siempre he querido un SEEDOT\n"
# 269 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "y por fin voy a conseguir uno.$"
# 270 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 271 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
# 272 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Los POKéMON pueden llevar objetos,\n"
# 273 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "pero no saben qué hacer con las\l"
# 274 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POCIONES y los ANTÍDOTOS, por ejemplo.$"
# 275 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 276 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
# 277 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "¿Sabes que algunos movimientos\n"
# 278 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "pueden confundir a un POKéMON?\p"
# 279 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Un POKéMON confuso puede hacerse\n"
# 280 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "daño a sí mismo sin querer.\p"
# 281 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pero cuando acaba el combate,\n"
# 282 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "se pasa el efecto.$"
# 283 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 284 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
# 285 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Un POKéMON que tiene una BAYA\n"
# 286 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "puede curarse a sí mismo.\p"
# 287 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hay muchos tipos de objeto que\n"
# 288 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "se pueden dar a los POKéMON.\p"
# 289 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Uf, qué cansado es coger apuntes…$"
# 290 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 291 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsNotes:
# 292 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Es un cuaderno de un alumno…\p"
# 293 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Se atrapa a los POKéMON usando\n"
# 294 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "las POKé BALLS.\p"
# 295 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Un ENTRENADOR puede llevar hasta\n"
# 296 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "seis POKéMON consigo.\p"
# 297 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Un ENTRENADOR es alguien que atrapa\n"
# 298 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a los POKéMON, los entrena y lucha\l"
# 299 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "con ellos.\p"
# 300 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "La misión de un ENTRENADOR es derrotar\n"
# 301 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a los ENTRENADORES fuertes que están\l"
# 302 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "en los GIMNASIOS POKéMON.$"
# 303 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 304 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
# 305 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hola, ¿nos conocemos?\n"
# 306 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Quizás de CIUDAD PETALIA…\p"
# 307 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Permíteme presentarme:\n"
# 308 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "me llamo TRETO.\p"
# 309 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "He estado viajando por el mundo en\n"
# 310 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "busca de grandes ENTRENADORES.\p"
# 311 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "O más bien estoy buscando expertos\n"
# 312 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "en los combates POKéMON.\p"
# 313 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Así que, ¿qué te trae por esta ESCUELA?\n"
# 314 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "¿Tú también entrenas POKéMON?\p"
# 315 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Lo primero que tendrías que enseñar\n"
# 316 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a un POKéMON es el movimiento CORTE.\p"
# 317 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Si no recuerdo mal, alguien de por\n"
# 318 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "aquí tiene el movimiento CORTE.$"
# 319 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 320 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
# 321 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "TRETO: Mmm…\p"
# 322 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Desconocemos el talento real de\n"
# 323 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "nuestros estudiantes, pero lo que\l"
# 324 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "está claro es que tienen potencial.$"
# 325 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 326 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottStoneBadge:
# 327 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "TRETO: Eh, ¿qué es eso?\p"
# 328 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Una MEDALLA PIEDRA, ¿verdad?\n"
# 329 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Estoy impresionado, la verdad.\p"
# 330 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pero de todas formas me hubiera\n"
# 331 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "gustado verte en acción.\p"
# 332 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Las MEDALLAS no bastan para saber\n"
# 333 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "qué tipo de ENTRENADOR se es.$"
# 334 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 335 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
# 336 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hola, ¿nos conocemos?\n"
# 337 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Quizás de CIUDAD PETALIA…\p"
# 338 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Permíteme presentarme:\n"
# 339 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "me llamo TRETO.\p"
# 340 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "He estado viajando por el mundo en\n"
# 341 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "busca de grandes ENTRENADORES.\p"
# 342 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "O más bien estoy buscando expertos\n"
# 343 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "en los combates con POKéMON.\p"
# 344 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Anda, ¿eso qué es?\n"
# 345 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Una MEDALLA PIEDRA, ¿verdad?\p"
# 346 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Y eso que no tienes mucha experiencia.\n"
# 347 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Estoy impresionado, la verdad.\p"
# 348 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pero de todas formas me hubiera\n"
# 349 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "gustado verte en acción.\p"
# 350 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Las MEDALLAS no bastan para saber\n"
# 351 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "qué tipo de ENTRENADOR se es.$"
