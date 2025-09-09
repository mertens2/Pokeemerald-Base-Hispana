# 1 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_LeftMoveTutor::
# 6 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	lock
# 7 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	faceplayer
# 8 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 9 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor
# 10 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorIntro, MSGBOX_DEFAULT
# 11 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
# 12 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
# 13 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 14 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 15 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor::
# 16 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack, MSGBOX_DEFAULT
# 17 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
# 18 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 20 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove::
# 21 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 22 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 23 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowBattlePointsWindow
# 24 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
# 25 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 26 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 0
# 27 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 28 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 29 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 30 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 31 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled
# 32 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss
# 33 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater
# 34 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch
# 35 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick
# 36 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam
# 37 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide
# 38 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_Counter
# 39 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave
# 40 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance
# 41 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 42 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 43 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 45 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove::
# 46 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 47 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 48 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
# 49 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 50 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 1
# 51 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 52 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 53 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 54 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled
# 56 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss
# 57 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater
# 58 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch
# 59 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick
# 60 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam
# 61 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide
# 62 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_Counter
# 63 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave
# 64 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance
# 65 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 66 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 67 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 69 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Softboiled::
# 70 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 16
# 71 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SOFT_BOILED
# 72 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 73 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 74 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 75 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_SeismicToss::
# 76 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 77 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
# 78 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 79 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 80 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 81 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_DreamEater::
# 82 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 83 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_DREAM_EATER
# 84 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 85 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 87 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_MegaPunch::
# 88 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 89 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
# 90 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 91 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 92 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 93 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_MegaKick::
# 94 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 95 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_KICK
# 96 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 97 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 99 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_BodySlam::
# 100 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 101 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_SLAM
# 102 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 103 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 104 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 105 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_RockSlide::
# 106 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 107 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
# 108 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 109 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 110 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 111 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Counter::
# 112 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 113 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_COUNTER
# 114 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 115 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 116 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 117 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ThunderWave::
# 118 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 119 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
# 120 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 121 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 122 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 123 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_SwordsDance::
# 124 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 125 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SWORDS_DANCE
# 126 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 127 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 128 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 129 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_RightMoveTutor::
# 130 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	lock
# 131 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	faceplayer
# 132 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 133 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor
# 134 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorIntro, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
# 136 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
# 137 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 138 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 139 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor::
# 140 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorWelcomeBack, MSGBOX_DEFAULT
# 141 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
# 142 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 143 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 144 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove::
# 145 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 146 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 147 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowBattlePointsWindow
# 148 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
# 149 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 150 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 0
# 151 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 152 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 153 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 154 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 155 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl
# 156 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_Snore
# 157 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_MudSlap
# 158 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_Swift
# 159 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_IcyWind
# 160 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_Endure
# 161 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_PsychUp
# 162 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_IcePunch
# 163 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ThunderPunch
# 164 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_FirePunch
# 165 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 166 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 167 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 168 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 169 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove::
# 170 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 171 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 172 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
# 173 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 174 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 1
# 175 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 176 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 177 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 178 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 179 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl
# 180 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_Snore
# 181 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_MudSlap
# 182 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_Swift
# 183 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_IcyWind
# 184 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_Endure
# 185 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_PsychUp
# 186 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_IcePunch
# 187 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ThunderPunch
# 188 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_FirePunch
# 189 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 190 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 191 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 192 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 193 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_DefenseCurl::
# 194 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 16
# 195 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_DEFENSE_CURL
# 196 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 197 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 198 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 199 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Snore::
# 200 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 201 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SNORE
# 202 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 203 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 204 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 205 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_MudSlap::
# 206 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 207 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SLAP
# 208 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 209 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 210 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 211 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Swift::
# 212 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 213 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SWIFT
# 214 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 215 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 216 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 217 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_IcyWind::
# 218 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 219 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 220 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 221 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 222 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 223 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Endure::
# 224 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 225 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ENDURE
# 226 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 227 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 228 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 229 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_PsychUp::
# 230 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 231 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCH_UP
# 232 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 233 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 234 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 235 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_IcePunch::
# 236 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 237 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
# 238 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 239 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 240 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 241 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ThunderPunch::
# 242 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 243 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
# 244 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 245 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 246 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 247 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_FirePunch::
# 248 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 249 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
# 250 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 251 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 252 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 253 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect::
# 254 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 255 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 256 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
# 257 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
# 258 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 259 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 260 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_CancelChooseMon::
# 261 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
# 262 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
# 263 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 264 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 265 "data/maps/BattleFrontier_Lounge7/scripts.pory"
@ VAR_0x8008 is the price
# 266 "data/maps/BattleFrontier_Lounge7/scripts.pory"
@ VAR_TEMP_C is the scroll multichoice ID
# 267 "data/maps/BattleFrontier_Lounge7/scripts.pory"
@ VAR_TEMP_FRONTIER_TUTOR_SELECTION is the move selection
# 268 "data/maps/BattleFrontier_Lounge7/scripts.pory"
@ VAR_TEMP_FRONTIER_TUTOR_ID is which move tutor was spoken to
# 269 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection::
# 270 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 271 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8008
# 272 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
# 273 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge7_EventScript_ChooseNewMove
# 274 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 275 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge7_EventScript_TeachTutorMove
# 276 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
# 277 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove
# 278 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 279 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 280 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_TeachTutorMove::
# 281 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
# 282 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 283 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 284 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 285 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ChooseMonForMoveTutor
# 286 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 287 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge7_EventScript_CancelChooseMon
# 288 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
# 289 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 290 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special TakeFrontierBattlePoints
# 291 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
# 292 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 293 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 294 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewMove::
# 295 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove
# 296 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove
# 297 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 298 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 299 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Sailor::
# 300 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong, MSGBOX_NPC
# 301 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 302 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 303 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Gentleman::
# 304 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful, MSGBOX_NPC
# 305 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 306 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 307 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_LeftTutorIntro:
# 308 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¡Ji, ji, ji, ji!\p"
# 309 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Quizás ahora no lo parezca, pero yo\n"
# 310 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "en su día fui una gran ENTRENADORA.\p"
# 311 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¡Decían que yo era la BELLA y la bestia!\n"
# 312 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¡Las dos juntas!\p"
# 313 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¿Mmm?\p"
# 314 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¿Qué?…\n"
# 315 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ah, ¿que no me crees?\p"
# 316 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¡Pues no te pienses que sólo\n"
# 317 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "soy una pobre viejecita!\l"
# 318 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¡Como ésa de ahí enfrente!\p"
# 319 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Te lo voy a demostrar.\n"
# 320 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Les puedo enseñar a tus POKéMON\l"
# 321 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "movimientos especiales.\p"
# 322 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Pero las lecciones no son gratis, claro.\n"
# 323 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Yo cobro en PUNTOS de BATALLA.$"
# 324 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 325 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack:
# 326 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¡Ji, ji, ji, ji!\p"
# 327 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¿Has vuelto para aprender movimientos \n"
# 328 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "especiales para tus POKéMON?$"
# 329 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 330 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_TeachWhichMove:
# 331 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Bien, bien.\n"
# 332 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¿Qué quieres que te enseñe?$"
# 333 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 334 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints:
# 335 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Conque el movimiento {STR_VAR_1}…\n"
# 336 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Te costará {STR_VAR_2} PUNTOS de BATALLA, ¿sí?$"
# 337 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 338 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_TeachMoveToWhichMon:
# 339 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Bien, bien. Elige entonces el POKéMON\n"
# 340 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "que quieres que aprenda el movimiento.$"
# 341 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 342 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_HaventGotEnoughPoints:
# 343 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¿Pero cómo…? ¿No ves que no tienes\n"
# 344 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "suficientes PUNTOS de BATALLA?$"
# 345 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 346 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_IllTakeBattlePoints:
# 347 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¿A que ahora no parezco tan viejecita?\n"
# 348 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¡Vengan acá esos PUNTOS de BATALLA!$"
# 349 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 350 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_YouDontWantTo:
# 351 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¡Cómo!\n"
# 352 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¿Ya no quieres…?\p"
# 353 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "En fin, si quieres aprender algo bueno,\n"
# 354 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¡ven a verme cuando quieras!$"
# 355 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 356 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_RightTutorIntro:
# 357 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¡Je, je, je, je!\p"
# 358 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Sé que resulta difícil de creer, pero yo\n"
# 359 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "antes era una ENTRENADORA fantástica.\p"
# 360 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¡Tenía fama de ser una NADADORA\n"
# 361 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "poco menos que invencible! ¡En serio!\p"
# 362 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¿Mmm?\p"
# 363 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¿Qué pasa?\n"
# 364 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¿No me crees?\p"
# 365 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A diferencia de esa abuelita de ahí,\n"
# 366 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "yo aún tengo mucho que enseñar.\p"
# 367 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Y puedo demostrártelo.\n"
# 368 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Puedo enseñarte movimientos POKéMON\l"
# 369 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "“alucinantes”, como decís los jóvenes.\p"
# 370 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Aunque, claro, aprender un movimiento\n"
# 371 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "te costará PUNTOS de BATALLA.$"
# 372 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 373 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_RightTutorWelcomeBack:
# 374 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¡Je, je, je, je!\p"
# 375 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "¿Has venido a aprender movimientos \n"
# 376 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "especiales para tus POKéMON?$"
# 377 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 378 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong:
# 379 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Seguro que al ver a esas viejecitas\n"
# 380 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "ponerse verdes, pensarás que no pueden\l"
# 381 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "ni verse, ¿verdad?\p"
# 382 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Pero yo creo que, si se llevasen tan mal,\n"
# 383 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "no estarían todo el rato juntas, ¿no?$"
# 384 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 385 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful:
# 386 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Cuando yo era un apuesto JOVEN, esas\n"
# 387 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "ancianas de ahí eran las ENTRENADORAS\l"
# 388 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "más guapas y más fuertes que había.\p"
# 389 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Eran la envidia de todas las demás.\p"
# 390 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ni siquiera la edad ha echado a perder\n"
# 391 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "sus encantos, ni sus habilidades.\p"
# 392 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "De hecho, juraría que sus movimientos\n"
# 393 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "POKéMON son ahora más perfectos.\p"
# 394 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "De todos modos, siento\n"
# 395 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "no sé qué al verlas…\p"
# 396 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ay, el tiempo es tan cruel…$"
# 397 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 398 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SoftboiledDesc::
# 399 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Restaura hasta\n"
# 400 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "la mitad de tus\n"
# 401 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "PS máximos.$"
# 402 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 403 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SeismicTossDesc::
# 404 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Resta los mismos\n"
# 405 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "PS que nivel\n"
# 406 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "tenga el agresor.$"
# 407 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 408 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_DreamEaterDesc::
# 409 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Roba la mitad del\n"
# 410 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "daño causado\n"
# 411 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "a un rival dormido.$"
# 412 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 413 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MegaPunchDesc::
# 414 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Un puñetazo\n"
# 415 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "de gran potencia.$"
# 416 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 417 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MegaKickDesc::
# 418 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Patada de extrema\n"
# 419 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "fuerza.$"
# 420 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 421 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_BodySlamDesc::
# 422 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ataque corporal\n"
# 423 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "que puede\n"
# 424 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "paralizar.$"
# 425 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 426 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_RockSlideDesc::
# 427 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Lanza grandes\n"
# 428 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "pedruscos. Puede\n"
# 429 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "causar retroceso.$"
# 430 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 431 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_CounterDesc::
# 432 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Devuelve un golpe\n"
# 433 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "físico por\n"
# 434 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "duplicado.$"
# 435 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 436 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_ThunderWaveDesc::
# 437 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Una descarga que\n"
# 438 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "puede paralizar\n"
# 439 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "al enemigo.$"
# 440 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 441 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SwordsDanceDesc::
# 442 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Baile que mejora\n"
# 443 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "el ATAQUE.$"
# 444 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 445 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_DefenseCurlDesc::
# 446 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Oculta su punto\n"
# 447 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "débil al rizarse.\n"
# 448 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Sube la DEFENSA.$"
# 449 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 450 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SnoreDesc::
# 451 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Fuerte ronquido\n"
# 452 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "que puede usarse\n"
# 453 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "estando dormido.$"
# 454 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 455 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MudSlapDesc::
# 456 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Echa lodo en la\n"
# 457 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "cara para bajar\n"
# 458 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "la PRECISIÓN.$"
# 459 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 460 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SwiftDesc::
# 461 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Lanza rayos en\n"
# 462 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "forma de estrella\n"
# 463 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "que no fallan.$"
# 464 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 465 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_IcyWindDesc::
# 466 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ataque helado que\n"
# 467 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "baja la VELOCIDAD.$"
# 468 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 469 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_EndureDesc::
# 470 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Resiste el ataque\n"
# 471 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "de 1 turno y deja\n"
# 472 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "al menos 1 PS.$"
# 473 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 474 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_PsychUpDesc::
# 475 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Copia los efectos\n"
# 476 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "del rival y te los\n"
# 477 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "adjudica.$"
# 478 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 479 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_IcePunchDesc::
# 480 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Puñetazo helado.\n"
# 481 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Puede congelar.$"
# 482 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 483 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_ThunderPunchDesc::
# 484 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Puñetazo\n"
# 485 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "eléctrico.\n"
# 486 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Puede paralizar.$"
# 487 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 488 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_FirePunchDesc::
# 489 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Puñetazo\n"
# 490 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "ardiente.\n"
# 491 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Puede quemar.$"
