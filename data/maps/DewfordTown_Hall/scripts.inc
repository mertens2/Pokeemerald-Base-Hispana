# 1 "data/maps/DewfordTown_Hall/scripts.pory"

# 2 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_MapScripts::
# 3 "data/maps/DewfordTown_Hall/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_Hall/scripts.pory"

# 5 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Girl::
# 6 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 7 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 8 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 9 "data/maps/DewfordTown_Hall/scripts.pory"
	special IsTrendyPhraseBoring
# 10 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Hall_EventScript_GirlBoredOfTrend
# 11 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CantImagineLifeWithoutTrend, MSGBOX_DEFAULT
# 12 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 13 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 14 "data/maps/DewfordTown_Hall/scripts.pory"

# 15 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_GirlBoredOfTrend::
# 16 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GettingBoredOfTrend, MSGBOX_DEFAULT
# 17 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 18 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 19 "data/maps/DewfordTown_Hall/scripts.pory"

# 20 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Woman::
# 21 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 22 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 23 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 24 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TeachingMonAboutTrend, MSGBOX_DEFAULT
# 25 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 26 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 27 "data/maps/DewfordTown_Hall/scripts.pory"

# 28 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Man::
# 29 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 30 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 31 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 32 "data/maps/DewfordTown_Hall/scripts.pory"
	special BufferDeepLinkPhrase
# 33 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_DeepLinkBetweenXAndY, MSGBOX_YESNO
# 34 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_Hall_EventScript_ConfirmTrendLink
# 35 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_Hall_EventScript_RejectTrendLink
# 36 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 37 "data/maps/DewfordTown_Hall/scripts.pory"

# 38 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ConfirmTrendLink::
# 39 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_MyHunchWasRight, MSGBOX_DEFAULT
# 40 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 41 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 42 "data/maps/DewfordTown_Hall/scripts.pory"

# 43 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_RejectTrendLink::
# 44 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_NotEasyToKeepUp, MSGBOX_DEFAULT
# 45 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 46 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 47 "data/maps/DewfordTown_Hall/scripts.pory"

# 48 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ExpertM::
# 49 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 50 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 51 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 52 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TVShowAboutTrend, MSGBOX_DEFAULT
# 53 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 54 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_EXPERT_M, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 56 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 57 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 58 "data/maps/DewfordTown_Hall/scripts.pory"

# 59 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Twin::
# 60 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 61 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 62 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 63 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea, MSGBOX_DEFAULT
# 64 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 65 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_TWIN, Common_Movement_WalkInPlaceFasterUp
# 66 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 67 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 68 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 69 "data/maps/DewfordTown_Hall/scripts.pory"

# 70 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_LittleBoy::
# 71 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 72 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 73 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 74 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CollectTrendMerchandise, MSGBOX_DEFAULT
# 75 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 76 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 77 "data/maps/DewfordTown_Hall/scripts.pory"

# 78 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Bookshelf::
# 79 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 80 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 81 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BooksAboutTrend, MSGBOX_DEFAULT
# 82 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 83 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 84 "data/maps/DewfordTown_Hall/scripts.pory"

# 85 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_Painting::
# 86 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 87 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 88 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 89 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_ScreamTitle
# 91 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_ScreamTitle
# 92 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_SmileTitle
# 93 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_ScreamTitle
# 94 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_LastTitle
# 95 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_LastTitle
# 96 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_BirthTitle
# 97 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_LastTitle
# 98 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 99 "data/maps/DewfordTown_Hall/scripts.pory"

# 100 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ScreamTitle::
# 101 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsScream, MSGBOX_DEFAULT
# 102 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 103 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 104 "data/maps/DewfordTown_Hall/scripts.pory"

# 105 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SmileTitle::
# 106 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsSmile, MSGBOX_DEFAULT
# 107 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 108 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 109 "data/maps/DewfordTown_Hall/scripts.pory"

# 110 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_LastTitle::
# 111 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LastTrend, MSGBOX_DEFAULT
# 112 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 113 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 114 "data/maps/DewfordTown_Hall/scripts.pory"

# 115 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_BirthTitle::
# 116 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BirthOfTrend, MSGBOX_DEFAULT
# 117 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 118 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 119 "data/maps/DewfordTown_Hall/scripts.pory"

# 120 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SchoolKidM::
# 121 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 122 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 0
# 123 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
# 124 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 125 "data/maps/DewfordTown_Hall/scripts.pory"

# 126 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PsychicM::
# 127 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 128 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 1
# 129 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
# 130 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 131 "data/maps/DewfordTown_Hall/scripts.pory"

# 132 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DoTrendDebate::
# 133 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 134 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 135 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_TrendDebate1
# 137 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_TrendDebate1
# 138 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_TrendDebate2
# 139 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_TrendDebate2
# 140 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_TrendDebate3
# 141 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_TrendDebate3
# 142 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_TrendDebate4
# 143 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_TrendDebate5
# 144 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 145 "data/maps/DewfordTown_Hall/scripts.pory"

# 146 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate1::
# 147 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 148 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_SawTrendCoolestThing, MSGBOX_DEFAULT
# 149 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 150 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_AllegedTrendNotAuthentic, MSGBOX_DEFAULT
# 151 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 152 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 153 "data/maps/DewfordTown_Hall/scripts.pory"

# 154 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate2::
# 155 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 156 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_ComposedTrendThemeSong, MSGBOX_DEFAULT
# 157 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 158 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WorkOnYourSinging, MSGBOX_DEFAULT
# 159 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 160 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 161 "data/maps/DewfordTown_Hall/scripts.pory"

# 162 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate3::
# 163 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 164 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_OrganizeTrendParty, MSGBOX_DEFAULT
# 165 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 166 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BrilliantIndeed, MSGBOX_DEFAULT
# 167 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 168 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 169 "data/maps/DewfordTown_Hall/scripts.pory"

# 170 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate4::
# 171 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 172 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendHasBecomePartOfLife, MSGBOX_DEFAULT
# 173 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 174 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind, MSGBOX_DEFAULT
# 175 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 176 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 177 "data/maps/DewfordTown_Hall/scripts.pory"

# 178 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_TrendDebate5::
# 179 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 180 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible, MSGBOX_DEFAULT
# 181 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 182 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WellBeTrendDuo, MSGBOX_DEFAULT
# 183 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
# 184 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 185 "data/maps/DewfordTown_Hall/scripts.pory"

# 186 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DontMovePlayer1::
# 187 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 188 "data/maps/DewfordTown_Hall/scripts.pory"

# 189 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact1::
# 190 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_PSYCHIC_M, DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft
# 191 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 192 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_0x8008, 0, DewfordTown_Hall_EventScript_PlayerReactWest
# 193 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_0x8008, 1, DewfordTown_Hall_EventScript_DontMovePlayer2
# 194 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 195 "data/maps/DewfordTown_Hall/scripts.pory"

# 196 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactWest::
# 197 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_FACING, DIR_EAST, DewfordTown_Hall_EventScript_DontMovePlayer1
# 198 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 199 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 200 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 201 "data/maps/DewfordTown_Hall/scripts.pory"

# 202 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DontMovePlayer2::
# 203 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 204 "data/maps/DewfordTown_Hall/scripts.pory"

# 205 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_DebateReact2::
# 206 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_SCHOOL_KID_M, DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight
# 207 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 208 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_0x8008, 0, DewfordTown_Hall_EventScript_PlayerReactNorthSouth
# 209 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_0x8008, 1, DewfordTown_Hall_EventScript_PlayerReactEast
# 210 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 211 "data/maps/DewfordTown_Hall/scripts.pory"

# 212 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactNorthSouth::
# 213 "data/maps/DewfordTown_Hall/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp
# 214 "data/maps/DewfordTown_Hall/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown
# 215 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 216 "data/maps/DewfordTown_Hall/scripts.pory"

# 217 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp::
# 218 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 219 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 220 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 221 "data/maps/DewfordTown_Hall/scripts.pory"

# 222 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown::
# 223 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 224 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 225 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 226 "data/maps/DewfordTown_Hall/scripts.pory"

# 227 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_PlayerReactEast::
# 228 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, DewfordTown_Hall_EventScript_DontMovePlayer1
# 229 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 230 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 231 "data/maps/DewfordTown_Hall/scripts.pory"
	return
# 232 "data/maps/DewfordTown_Hall/scripts.pory"

# 233 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft:
# 234 "data/maps/DewfordTown_Hall/scripts.pory"
	walk_in_place_left
# 235 "data/maps/DewfordTown_Hall/scripts.pory"
	step_end
# 236 "data/maps/DewfordTown_Hall/scripts.pory"

# 237 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight:
# 238 "data/maps/DewfordTown_Hall/scripts.pory"
	walk_in_place_right
# 239 "data/maps/DewfordTown_Hall/scripts.pory"
	step_end
# 240 "data/maps/DewfordTown_Hall/scripts.pory"

# 241 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_SludgeBombMan::
# 242 "data/maps/DewfordTown_Hall/scripts.pory"
	lock
# 243 "data/maps/DewfordTown_Hall/scripts.pory"
	faceplayer
# 244 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 245 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SLUDGE_BOMB, DewfordTown_Hall_EventScript_ReceivedSludgeBomb
# 246 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GiveYouSludgeBomb, MSGBOX_DEFAULT
# 247 "data/maps/DewfordTown_Hall/scripts.pory"
	giveitem ITEM_TM_SLUDGE_BOMB
# 248 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 249 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_RECEIVED_TM_SLUDGE_BOMB
# 250 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 251 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 252 "data/maps/DewfordTown_Hall/scripts.pory"

# 253 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_EventScript_ReceivedSludgeBomb::
# 254 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo, MSGBOX_DEFAULT
# 255 "data/maps/DewfordTown_Hall/scripts.pory"
	release
# 256 "data/maps/DewfordTown_Hall/scripts.pory"
	end
# 257 "data/maps/DewfordTown_Hall/scripts.pory"

# 258 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_CantImagineLifeWithoutTrend:
# 259 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¿Qué es lo que está de moda? ¡Pues\n"
# 260 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”, claro!\p"
# 261 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡No puedo imaginarme lo que sería la\n"
# 262 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "vida sin “{STR_VAR_1}”!$"
# 263 "data/maps/DewfordTown_Hall/scripts.pory"

# 264 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_GettingBoredOfTrend:
# 265 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¿Qué es lo que está de moda? ¡Pues\n"
# 266 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”, claro!\p"
# 267 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Pero ya empiezo a hartarme un poco…\p"
# 268 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Debería enterarme de lo que está\n"
# 269 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "a la última de verdad…$"
# 270 "data/maps/DewfordTown_Hall/scripts.pory"

# 271 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TeachingMonAboutTrend:
# 272 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Estoy enseñando a mi POKéMON todo\n"
# 273 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "sobre “{STR_VAR_1}”,\l"
# 274 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "pero no acaba de funcionar…\p"
# 275 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Creo que el pobre no da más de sí…$"
# 276 "data/maps/DewfordTown_Hall/scripts.pory"

# 277 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_DeepLinkBetweenXAndY:
# 278 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Estoy estudiando algo supermolón:\n"
# 279 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡“{STR_VAR_1}”!\p"
# 280 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¿Crees que de veras existe un vínculo\n"
# 281 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "entre “{STR_VAR_1}”\l"
# 282 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "y “{STR_VAR_2}”?$"
# 283 "data/maps/DewfordTown_Hall/scripts.pory"

# 284 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_MyHunchWasRight:
# 285 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Oh!\n"
# 286 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Entonces mi corazonada era cierta!\p"
# 287 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Cada vez estoy más cerca de ser\n"
# 288 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "superguay y supermoderno! ¡Yupi!$"
# 289 "data/maps/DewfordTown_Hall/scripts.pory"

# 290 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_NotEasyToKeepUp:
# 291 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡¿Cómo?!\n"
# 292 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡¿En serio?!\p"
# 293 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Ya estoy muy mayor para estar al\n"
# 294 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "tanto de las últimas tendencias…$"
# 295 "data/maps/DewfordTown_Hall/scripts.pory"

# 296 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TVShowAboutTrend:
# 297 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Toda esta historia de\n"
# 298 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 299 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¿Ha salido en la tele o algo?$"
# 300 "data/maps/DewfordTown_Hall/scripts.pory"

# 301 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea:
# 302 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¿Y al otro lado del mar…\p"
# 303 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "todo el mundo dice también\n"
# 304 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”?$"
# 305 "data/maps/DewfordTown_Hall/scripts.pory"

# 306 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_CollectTrendMerchandise:
# 307 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Colecciono artículos oficiales\n"
# 308 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”.\p"
# 309 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Tengo muñecos oficiales\n"
# 310 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”…,\p"
# 311 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "ropa de marca\n"
# 312 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”…\p"
# 313 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "y libros ilustrados oficiales\n"
# 314 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”.\p"
# 315 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Y es todo mío!\n"
# 316 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Se mira, pero no se toca!$"
# 317 "data/maps/DewfordTown_Hall/scripts.pory"

# 318 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BooksAboutTrend:
# 319 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“DIFERENCIANDO UN BUEN\n"
# 320 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” DE UN\l"
# 321 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” MALO”…\p"
# 322 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“LA CONEXIÓN ENTRE\n"
# 323 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” Y\l"
# 324 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "LOS POKéMON”…\p"
# 325 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“EL “{STR_VAR_1}”\n"
# 326 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "ÚTIL”…\p"
# 327 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Hay un montón de libros que tratan de\n"
# 328 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”.$"
# 329 "data/maps/DewfordTown_Hall/scripts.pory"

# 330 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendsScream:
# 331 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "El título es “EL GRITO DE\n"
# 332 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}”.$"
# 333 "data/maps/DewfordTown_Hall/scripts.pory"

# 334 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendsSmile:
# 335 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "El título es “LA SONRISA DE\n"
# 336 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}”.$"
# 337 "data/maps/DewfordTown_Hall/scripts.pory"

# 338 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_LastTrend:
# 339 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "El título es “EL ÚLTIMO\n"
# 340 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}”.$"
# 341 "data/maps/DewfordTown_Hall/scripts.pory"

# 342 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BirthOfTrend:
# 343 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "El título es “EL NACIMIENTO DE\n"
# 344 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "{STR_VAR_1}”.$"
# 345 "data/maps/DewfordTown_Hall/scripts.pory"

# 346 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_SawTrendCoolestThing:
# 347 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "He visto “{STR_VAR_1}”\n"
# 348 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "y mola cantidubi.\p"
# 349 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Me ha hecho flipar en colores.\p"
# 350 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Era asombroso!\n"
# 351 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Lo más de lo más!$"
# 352 "data/maps/DewfordTown_Hall/scripts.pory"

# 353 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_AllegedTrendNotAuthentic:
# 354 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh, no, no y no.\p"
# 355 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Crees haber visto\n"
# 356 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 357 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Pero es de mentira…\p"
# 358 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Para ser auténtico, debería tener…,\n"
# 359 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¿cómo lo diría yo?…, fuerza y\l"
# 360 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "delicadeza al mismo tiempo…\p"
# 361 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Bah, qué más da… ¡Es chulísimo!$"
# 362 "data/maps/DewfordTown_Hall/scripts.pory"

# 363 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_ComposedTrendThemeSong:
# 364 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Óyeme. He compuesto una canción\n"
# 365 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "sobre “{STR_VAR_1}”.\p"
# 366 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\n"
# 367 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "es muy popular actualmente.\p"
# 368 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Vale, escúchala!\p"
# 369 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Oh, oh, {STR_VAR_1}!\n"
# 370 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡La, la, la!\p"
# 371 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Sólo {STR_VAR_1}!\n"
# 372 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡La, la, la!$"
# 373 "data/maps/DewfordTown_Hall/scripts.pory"

# 374 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_WorkOnYourSinging:
# 375 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Jo, colega…\p"
# 376 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Antes de chafar del todo\n"
# 377 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”,\l"
# 378 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "deberías aprender a cantar…$"
# 379 "data/maps/DewfordTown_Hall/scripts.pory"

# 380 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_OrganizeTrendParty:
# 381 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Pero como decía yo antes, habría\n"
# 382 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "que juntarse y organizar una fiesta\l"
# 383 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 384 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "en la isla.$"
# 385 "data/maps/DewfordTown_Hall/scripts.pory"

# 386 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_BrilliantIndeed:
# 387 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Qué idea tan buena!\p"
# 388 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Por fin sabremos quién es el as de\n"
# 389 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”.\l"
# 390 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Una idea buenísima!\p"
# 391 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡A partir de hoy, todo girará alrededor\n"
# 392 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "de “{STR_VAR_1}”!$"
# 393 "data/maps/DewfordTown_Hall/scripts.pory"

# 394 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendHasBecomePartOfLife:
# 395 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Estaba pensando una cosa…\p"
# 396 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¿No opinas también que\n"
# 397 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}” ha\l"
# 398 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "pasado de ser una moda a ser\l"
# 399 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "parte de nuestras vidas?$"
# 400 "data/maps/DewfordTown_Hall/scripts.pory"

# 401 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind:
# 402 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¿Perdón?\n"
# 403 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¿Tanto como eso?\p"
# 404 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Sin embargo, es verdad que tenemos\n"
# 405 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "a “{STR_VAR_1}”\l"
# 406 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "en la cabeza a todas horas.\p"
# 407 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Pero, en lo que respecta a pensar\n"
# 408 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "en “{STR_VAR_1}”,\l"
# 409 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "nadie te gana, coleguita!$"
# 410 "data/maps/DewfordTown_Hall/scripts.pory"

# 411 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible:
# 412 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Si tú y yo unimos fuerzas, seremos\n"
# 413 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "invencibles en todo lo que concierne\l"
# 414 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "a “{STR_VAR_1}”.$"
# 415 "data/maps/DewfordTown_Hall/scripts.pory"

# 416 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_WellBeTrendDuo:
# 417 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Escucha, colega!\p"
# 418 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Seremos el DÚO\n"
# 419 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”!\p"
# 420 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¿No te parece buena idea?\n"
# 421 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¡Ja, ja, ja, ja!$"
# 422 "data/maps/DewfordTown_Hall/scripts.pory"

# 423 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_GiveYouSludgeBomb:
# 424 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "En mi opinión, BOMBA LODO está\n"
# 425 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "en su mejor momento. Es lo mejor.\p"
# 426 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "¿Eh? ¿Me estás diciendo que no\n"
# 427 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "sabes lo que es BOMBA LODO?\p"
# 428 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Qué pena, penita, pena.\n"
# 429 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Pues te voy a dar una, fíjate tú.$"
# 430 "data/maps/DewfordTown_Hall/scripts.pory"

# 431 "data/maps/DewfordTown_Hall/scripts.pory"
DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo:
# 432 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Me encanta BOMBA LODO.\p"
# 433 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Pero también me gustan los POKéMON\n"
# 434 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "que saben el movimiento\l"
# 435 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}”.$"
