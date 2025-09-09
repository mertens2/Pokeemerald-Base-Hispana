# 1 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 2 "data/maps/LilycoveCity_ContestHall/scripts.pory"
@ All the LOCALID constants used in this file are essentially redundant.
# 3 "data/maps/LilycoveCity_ContestHall/scripts.pory"
@ They're all used to have the NPC the player talked to turn back so they're facing
# 4 "data/maps/LilycoveCity_ContestHall/scripts.pory"
@ their original direction (because they're watching/participating in the contests).
# 5 "data/maps/LilycoveCity_ContestHall/scripts.pory"
@ They could all be substituted for VAR_LAST_TALKED.
# 6 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_MapScripts::
# 7 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.byte 0
# 8 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 9 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Boy1::
# 10 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_TodayWonSmartnessContest, MSGBOX_NPC
# 11 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 12 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 13 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Boy2::
# 14 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EnteredBunchOfContests, MSGBOX_NPC
# 15 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 17 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Girl::
# 18 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks, MSGBOX_NPC
# 19 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 20 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 21 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Sailor::
# 22 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous, MSGBOX_NPC
# 23 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 24 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 25 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestMC::
# 26 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 27 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 28 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal, MSGBOX_DEFAULT
# 29 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 30 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_MC, Common_Movement_FaceOriginalDirection
# 31 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 32 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 33 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 34 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 35 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestJudge::
# 36 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 37 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 38 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest, MSGBOX_DEFAULT
# 39 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 40 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_JUDGE, Common_Movement_FaceOriginalDirection
# 41 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 42 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 43 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 44 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 45 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant1::
# 46 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 47 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 48 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EnteredWrongContest, MSGBOX_DEFAULT
# 49 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 50 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 51 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 52 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 53 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 54 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 55 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant2::
# 56 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 57 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 58 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_RaisedMonToBeSmart, MSGBOX_DEFAULT
# 59 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 60 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 61 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 62 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 63 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 65 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant3::
# 66 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 67 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 68 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext, MSGBOX_DEFAULT
# 69 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 70 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 71 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 72 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 73 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 74 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 75 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant4::
# 76 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 77 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 78 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife, MSGBOX_DEFAULT
# 79 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 80 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 81 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 82 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 83 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 84 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 85 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience1::
# 86 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa, MSGBOX_SIGN
# 87 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 88 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 89 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience2::
# 90 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 91 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 92 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves, MSGBOX_DEFAULT
# 93 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 94 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 95 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 96 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 97 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 98 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 99 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience3::
# 100 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 101 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 102 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers, MSGBOX_DEFAULT
# 103 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 104 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 105 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 106 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 107 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 108 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 109 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience4::
# 110 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 111 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 112 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_StillLoveSmartnessContests, MSGBOX_DEFAULT
# 113 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 114 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_AUDIENCE_4, Common_Movement_FaceOriginalDirection
# 115 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 116 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 117 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 118 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 119 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestMC::
# 120 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 121 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 122 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest, MSGBOX_DEFAULT
# 123 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 124 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_MC, Common_Movement_FaceOriginalDirection
# 125 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 126 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 127 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 128 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 129 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestJudge::
# 130 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 131 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 132 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty, MSGBOX_DEFAULT
# 133 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 134 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_JUDGE, Common_Movement_FaceOriginalDirection
# 135 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 136 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 137 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 138 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 139 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant1::
# 140 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 141 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 142 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty, MSGBOX_DEFAULT
# 143 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 144 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 145 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 146 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 147 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 148 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 149 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant2::
# 150 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 151 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 152 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_OverdidGrooming, MSGBOX_DEFAULT
# 153 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 154 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 155 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 156 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 157 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 158 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 159 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant3::
# 160 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 161 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 162 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam, MSGBOX_DEFAULT
# 163 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 164 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 165 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 166 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 167 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 168 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 169 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant4::
# 170 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 171 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 172 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe, MSGBOX_DEFAULT
# 173 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 174 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 175 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 176 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 177 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 178 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 179 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience1::
# 180 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 181 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 182 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy, MSGBOX_DEFAULT
# 183 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 184 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_AUDIENCE_1, Common_Movement_FaceOriginalDirection
# 185 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 186 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 187 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 188 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 189 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience2::
# 190 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 191 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 192 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon, MSGBOX_DEFAULT
# 193 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 194 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 195 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 196 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 197 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 198 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 199 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience3::
# 200 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 201 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 202 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone, MSGBOX_DEFAULT
# 203 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 204 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 205 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 206 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 207 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 208 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 209 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestMC::
# 210 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 211 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 212 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_InTheMiddleOfContest, MSGBOX_DEFAULT
# 213 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 214 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_MC, Common_Movement_FaceOriginalDirection
# 215 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 216 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 217 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 218 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 219 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestJudge::
# 220 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 221 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 222 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals, MSGBOX_DEFAULT
# 223 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 224 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_JUDGE, Common_Movement_FaceOriginalDirection
# 225 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 226 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 227 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 228 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 229 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant1::
# 230 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 231 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 232 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyAzurillWasDistracted, MSGBOX_DEFAULT
# 233 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 234 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 235 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 236 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 237 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 238 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 239 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant2::
# 240 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 241 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 242 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_NeverWonBattleButContest, MSGBOX_DEFAULT
# 243 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 244 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 245 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 246 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 247 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 248 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 249 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant3::
# 250 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 251 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 252 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PetalDanceIsMarvel, MSGBOX_DEFAULT
# 253 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 254 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 255 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 256 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 257 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 258 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 259 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant4::
# 260 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 261 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 262 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter, MSGBOX_DEFAULT
# 263 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 264 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 265 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 266 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 267 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 268 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 269 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience1::
# 270 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lockall
# 271 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FacePlayer
# 272 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 273 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyChildIsInContest, MSGBOX_DEFAULT
# 274 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 275 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FaceOriginalDirection
# 276 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 277 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	delay 25
# 278 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ComeOnDear, MSGBOX_DEFAULT
# 279 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	releaseall
# 280 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 281 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 282 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience2::
# 283 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 284 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 285 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn, MSGBOX_DEFAULT
# 286 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 287 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 288 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 289 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 290 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 291 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 292 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience3::
# 293 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 294 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 295 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest, MSGBOX_DEFAULT
# 296 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 297 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 298 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 299 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 300 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 301 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 302 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyStageSign::
# 303 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_BeautyContestStage, MSGBOX_SIGN
# 304 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 305 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 306 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteStageSign::
# 307 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_CuteContestStage, MSGBOX_SIGN
# 308 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 309 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 310 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartStageSign::
# 311 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_SmartContestStage, MSGBOX_SIGN
# 312 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 313 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 314 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_TodayWonSmartnessContest:
# 315 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Este POKéMON ya ha ganado\n"
# 316 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "el CONCURSO de BELLEZA…\p"
# 317 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¿Y sabes qué? ¡Hoy ha ganado\n"
# 318 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "el CONCURSO de INGENIO!\p"
# 319 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Soy tan bueno que no me lo creo…$"
# 320 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 321 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EnteredBunchOfContests:
# 322 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "He entrado en un montón de CONCURSOS\n"
# 323 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "para ver cómo funciona este tinglado.\p"
# 324 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Si estás en un CONCURSO de CARISMA,\n"
# 325 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "usa movimientos carismáticos para\l"
# 326 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "ganar más puntos.\p"
# 327 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Vamos, que los movimientos ingeniosos\n"
# 328 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "o dulces no servirán de gran cosa…$"
# 329 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 330 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks:
# 331 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ese jovencito que ganó antes tenía\n"
# 332 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "un buen montón de {POKEBLOCK}S diferentes.\p"
# 333 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¿Crees que usando muchas cosas\n"
# 334 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "de ésas resulta más fácil ganar?$"
# 335 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 336 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous:
# 337 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Guau… Este sitio es gigantesco…\p"
# 338 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Se respira tanta tensión… No es en\n"
# 339 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "absoluto como esas SALAS de CONCURSO\l"
# 340 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "perdidas en medio de la nada…$"
# 341 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 342 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal:
# 343 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "PRESENTADORA: Muy bien. POKéMON\n"
# 344 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "ingeniosos y ENTRENADORES\l"
# 345 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "respectivos, ¿estáis listos?\p"
# 346 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Dad lo mejor de vosotros!\n"
# 347 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡A exhibirse!$"
# 348 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 349 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest:
# 350 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "JUEZ: ¿Te está gustando el CONCURSO?\p"
# 351 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Vuelve con tres amigos más y todos\n"
# 352 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "podréis participar en uno.$"
# 353 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 354 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EnteredWrongContest:
# 355 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ay, ay, ay, ay…\n"
# 356 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Me he equivocado de CONCURSO!\p"
# 357 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "He apuntado a un POKéMON duro\n"
# 358 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "a un CONCURSO de INGENIO…\p"
# 359 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Venga, déjalos patidifusos\n"
# 360 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "con un ingenioso GOLPE ROCA!$"
# 361 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 362 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_RaisedMonToBeSmart:
# 363 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Durante años he aplicado todos\n"
# 364 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "mis conocimientos para entrenar\l"
# 365 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "un POKéMON ingenioso como él solo.\p"
# 366 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Dudo mucho que los POKéMON\n"
# 367 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "de unos renacuajos puedan superarlo…\p"
# 368 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Cariño, ¿ves todo bien desde ahí?$"
# 369 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 370 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext:
# 371 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Toma ya!\p"
# 372 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Si mi POKéMON hace alarde\n"
# 373 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "de un movimiento ingenioso ahora,\l"
# 374 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "el público se va a volver loco!$"
# 375 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 376 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife:
# 377 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Oh, no!\p"
# 378 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "El CHUPAVIDAS de mi querido ZUBAT\n"
# 379 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "es tan guay que lo he usado varias\l"
# 380 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "veces seguidas…\p"
# 381 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Pero estos cabezas de chorlito no\n"
# 382 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "han sabido apreciarlo en absoluto!$"
# 383 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 384 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa:
# 385 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Adelante! ¡Amorcito, eres el mejor!$"
# 386 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 387 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves:
# 388 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Aun cuando los ENTRENADORES apuntan\n"
# 389 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "al mismo tipo de POKéMON, cada uno\l"
# 390 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "se exhibe con un movimiento distinto.\p"
# 391 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Porque, claro, ¡todo el mundo\n"
# 392 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "tiene su propio estilo de lucha!$"
# 393 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 394 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers:
# 395 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Creo que esos POKéMON parecen mucho\n"
# 396 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "más ingeniosos que sus ENTRENADORES.$"
# 397 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 398 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_StillLoveSmartnessContests:
# 399 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Por mucho que venga, estos CONCURSOS\n"
# 400 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "de INGENIO me siguen encantando.\p"
# 401 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ese color verde es tan… agudo…\n"
# 402 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Es tan, tan… intelectual…$"
# 403 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 404 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest:
# 405 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "PRESENTADORA: ¿Tú también participas\n"
# 406 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "en el CONCURSO de BELLEZA?\l"
# 407 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Pues suerte!$"
# 408 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 409 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty:
# 410 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "JUEZ: Todos los POKéMON que hay aquí\n"
# 411 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "son un modelo de perfecta belleza.\p"
# 412 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Huy, en vez de admirarlos tanto,\n"
# 413 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "debería darles una puntuación!$"
# 414 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 415 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty:
# 416 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Este POKéMON es de una BELLEZA\n"
# 417 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "sin igual… No tiene rival.\p"
# 418 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Sin duda el público se quedará\n"
# 419 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "admirado al verlo.$"
# 420 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 421 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_OverdidGrooming:
# 422 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Aaaaah!\p"
# 423 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "He peinado y arreglado a mi POKéMON\n"
# 424 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "especialmente para el CONCURSO…\p"
# 425 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Pero me he pasado…\n"
# 426 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Y ahora su bonito pelo está todo tieso…\p"
# 427 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡¿Qué puedo hacer?!$"
# 428 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 429 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam:
# 430 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Este RAYO AURORA es deslumbrante.\n"
# 431 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "El JUEZ no podrá ni verlo.\p"
# 432 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Eh, un momento…\n"
# 433 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Entonces no servirá de nada!$"
# 434 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 435 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe:
# 436 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Este bonito POKéMON se parece\n"
# 437 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "a mí cuando era joven, clavadito.\p"
# 438 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Pues, cuando se lo dije a mi marido,\n"
# 439 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "no pudo aguantarse la risa.\p"
# 440 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Y, digo yo, ¿dónde está la gracia?$"
# 441 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 442 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy:
# 443 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Yo creo que a cualquiera le hace\n"
# 444 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "ilusión ganar un CONCURSO\l"
# 445 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "de BELLEZA, ¿o no?$"
# 446 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 447 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon:
# 448 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Ja, ja, ja!\p"
# 449 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Mira bien todos esos POKéMON!\n"
# 450 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Son tan bonitos que deslumbran!$"
# 451 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 452 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone:
# 453 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "La belleza natural no basta.\p"
# 454 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Hay que potenciarla un poco para\n"
# 455 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "conseguir una imagen tan estupenda\l"
# 456 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "como la de mi POKéMON.$"
# 457 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 458 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_InTheMiddleOfContest:
# 459 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "PRESENTADORA: ¡Huy, hola!\n"
# 460 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Estamos en mitad de un CONCURSO!\p"
# 461 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ve a registrarte primero si quieres\n"
# 462 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "participar, ¿vale?$"
# 463 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 464 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals:
# 465 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "JUEZ: ¡Nunca había visto exhibiciones\n"
# 466 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "tan dulces y encantadoras como éstas!\p"
# 467 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Por ejemplo, ese HIDROCHORRO tan\n"
# 468 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "adorable merece una gran puntuación.$"
# 469 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 470 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyAzurillWasDistracted:
# 471 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, no, un POKéMON ha distraído\n"
# 472 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "a mi dulce AZURILL…$"
# 473 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 474 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_NeverWonBattleButContest:
# 475 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Mi POKéMON nunca ha vencido luchando,\n"
# 476 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡pero ya verás como gana el CONCURSO!$"
# 477 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 478 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PetalDanceIsMarvel:
# 479 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "La DANZA PÉTALO de mi POKéMON\n"
# 480 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "es un prodigio de elegancia.\p"
# 481 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "No dejaré que nadie le moleste\n"
# 482 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "durante su actuación.$"
# 483 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 484 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter:
# 485 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Todo el mundo piensa que su POKéMON\n"
# 486 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "es el más dulce de todos.\p"
# 487 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Pero yo sé que, cuando el mío haga\n"
# 488 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "una exhibición de DULZURA…,\p"
# 489 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡se llevará la palma!$"
# 490 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 491 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyChildIsInContest:
# 492 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Mi hijo está participando\n"
# 493 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "en el CONCURSO.$"
# 494 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 495 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ComeOnDear:
# 496 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Adelante, cariño!\n"
# 497 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Tu POKéMON es el mejor!$"
# 498 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 499 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest:
# 500 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Creo que esa chica de ahí\n"
# 501 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "es la más dulce de toda la sala.\p"
# 502 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¿Cómo? ¿Que compiten los POKéMON,\n"
# 503 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "no sus ENTRENADORES?$"
# 504 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 505 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn:
# 506 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oooooh, al ver a esos POKéMON tan\n"
# 507 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "dulces, me entran ganas de tener uno…\p"
# 508 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡Me voy a atrapar unos cuantos!$"
# 509 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 510 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_BeautyContestStage:
# 511 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "ESCENARIO del CONCURSO de BELLEZA\n"
# 512 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡LOS POKéMON MÁS GUAPOS!$"
# 513 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 514 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_CuteContestStage:
# 515 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "ESCENARIO del CONCURSO de DULZURA\n"
# 516 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡LOS POKéMON MÁS ACHUCHABLES!$"
# 517 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 518 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_SmartContestStage:
# 519 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "ESCENARIO del CONCURSO de INGENIO\n"
# 520 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "¡LOS POKéMON MÁS LISTOS!$"
