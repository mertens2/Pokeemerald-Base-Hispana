# 1 "data/maps/MossdeepCity_Gym/scripts.pory"

# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MapScripts::
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/MossdeepCity_Gym/scripts.pory"

# 6 "data/maps/MossdeepCity_Gym/scripts.pory"
@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below
# 7 "data/maps/MossdeepCity_Gym/scripts.pory"

# 8 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnTransition:
# 9 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower since it can collide with moving statues
# 10 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 11 "data/maps/MossdeepCity_Gym/scripts.pory"

# 12 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza::
# 13 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
# 14 "data/maps/MossdeepCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 15 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_Gym_EventScript_TateAndLizaRematch
# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_GiveCalmMind2
# 17 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 18 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"

# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 23 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 25 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 28 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 39 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 45 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 51 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 52 "data/maps/MossdeepCity_Gym/scripts.pory"

# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 55 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 56 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"

# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"

# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"

# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"

# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"

# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"

# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"

# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"

# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"

# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"

# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"

# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"

# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"

# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"

# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"

# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"

# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"

# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"

# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"

# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"

# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"

# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"

# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"

# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"

# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"

# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"

# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"

# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¿Camino del CAMPEONATO?\p"
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Los LÍDERES de este GIMNASIO usan\n"
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON de tipo PSÍQUICO.\p"
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Si les atacas con POKéMON de los tipos\n"
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LUCHA o VENENO, te destrozarán.\p"
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Además, van a combatirte con ataques\n"
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "combinados realmente increíbles.\p"
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Si quieres ganar, tendrás que mostrar\n"
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "que estás muy unido a tus POKéMON.\l"
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Adelante!$"
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"

# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Guau, eres sorprendente!\n"
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Tú sabes cómo luchar!$"
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"

# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "El resultado del combate depende de tu\n"
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "fuerza de voluntad. ¡Nunca te rindas!$"
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"

# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Mi fuerza de voluntad ha flaqueado!\n"
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Y yo he perdido!$"
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"

# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Los indecisos siempre pierden.\n"
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tenlo en cuenta.$"
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"

# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Demuéstrame lo que vales!$"
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"

# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Tú sí que vales!$"
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"

# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Las maravillas humanas de este mundo\n"
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "son los LÍDERES de GIMNASIO.\p"
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pero es posible que puedas demostrar\n"
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "que vales incluso más que ellos…$"
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"

# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ommmmm… Mira cómo hago levitar\n"
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "una POKé BALL por telequinesia.\p"
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Huy, huy, huy…\n"
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Aaaaaaaaah!\p"
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ejem… A veces no controlo muy\n"
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bien mis poderes, je, je, je.$"
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"

# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Vaya, mi POKéMON tampoco controla\n"
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "muy bien sus habilidades de combate!$"
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"

# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "La POKé BALL de antes pesaba mucho,\n"
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡pero ya verás con esta pelusa!\p"
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ommmmm… \p"
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Que no! ¡Que no he hecho trampa!\n"
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡No he soplado, de verdad! Je, je, je.$"
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"

# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Cuando pierdas contra mí, no te\n"
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "deprimas demasiado…\p"
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No es que seas débil, ¡es que YO\n"
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "soy superfuerte!$"
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"

# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ejem… TÚ eres superfuerte…$"
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"

# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pero no pienso deprimirme por esta\n"
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "derrota, voy a entrenarme más.\p"
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Hay que pensar de forma positiva! \n"
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Y a mí eso se me da requetebién!$"
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"

# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Puedo verlo…\n"
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Puedo verlo claro como el agua…\p"
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¿Quién vencerá en este combate?\n"
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡No pienso decírtelo!$"
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"

# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Esto no estaba previsto!$"
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"

# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Puedo ver que librarás un terrible\n"
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "combate con nuestros LÍDERES…\p"
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Y ganará…\n"
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡No pienso decírtelo!$"
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"

# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Has viajado mucho y has vivido\n"
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "todo tipo de experiencias…\p"
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Enséñame ahora qué es lo que\n"
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "has aprendido!$"
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"

# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Has viajado por el camino\n"
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "de los grandes!$"
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"

# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A aquellos que trabajan duro\n"
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "les aguarda un futuro brillante.\p"
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A aquellos que gandulean sólo\n"
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "les esperan bastantes palos…\p"
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Siempre se recoge lo que se siembra!$"
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"

# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Pienso ganar este combate\n"
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "cueste lo que cueste!$"
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"

# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tu forma de luchar…\n"
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "es aterradora…$"
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"

# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¿Cómo osas derrotarme?\p"
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No será culpa mía si te ocurre\n"
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "algo malo muy pronto…$"
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"

# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Jo, jo, jo…\p"
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Será un placer mostrarte lo tenaz\n"
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "que puede ser el tipo PSÍQUICO.$"
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"

# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Fantástico! ¡Excepcional!\n"
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Qué estilo de lucha tan magnífico!$"
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"

# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo… nunca me dejo achantar por\n"
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "la derrota…, aunque sea apabullante.$"
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"

# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Prepárate para pasar más miedo\n"
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "que en toda tu vida!$"
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"

# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Noooo!$"
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"

# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Me has dejado temblando!\n"
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Aléjate de mí!$"
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"

# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Puede que ya no sea un pimpollo,\n"
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "pero aún tengo cuerda para rato.$"
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"

# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Ah, esta juventud!\n"
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Siempre avasallando!$"
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"

# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Me temo que me he dejado arrollar\n"
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "por tu imperiosa juventud.$"
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"

# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡No pasarás!\n"
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡No, si puedo impedirlo!$"
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"

# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¿A quién quieres impresionar\n"
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "con esa demostración de fuerza?$"
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"

# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Bah! ¡Serás fuerte, pero no tienes\n"
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "cualidades para el tipo PSÍQUICO!\p"
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Tu manera de luchar es brutal!$"
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"

# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Grrrrr! ¡Vas a probar mi jarabe\n"
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "de POKéMON! ¡Prepárate!$"
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"

# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Ah!\n"
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Se acabó lo que se daba!$"
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"

# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "La próxima vez ya verás…\n"
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "¡Te daré jarabe de POKéMON del bueno!$"
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"

# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Je, je, je, ¿no lo esperabas?\p"
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: Ji, ji, ji, ¿no lo esperabas?\p"
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: ¡Somos dos LÍDERES de GIMNASIO!\n"
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡Somos dos LÍDERES de GIMNASIO!\p"
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: ¡Somos mellizos!\n"
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡Somos mellizos!\p"
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: No necesitamos hablar porque…\n"
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: los dos siempre sabemos lo que…\p"
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: el otro piensa.\n"
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡Es telepatía!\p"
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Los dos juntos…\n"
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡somos invencibles!$"
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"

# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: ¡¿Pe-pero…?! Los dos juntos…\n"
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡nos hemos dejado derrotar!\p"
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: La vida es así. Has ganado…\n"
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: Y también te has ganado esto…$"
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"

# 436 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} recibió la MEDALLA MENTE\n"
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "de LETI y VITO.$"
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"

# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: La MEDALLA MENTE mejora el\n"
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "AT. ESP. y la DEF. ESP. de los POKéMON.\p"
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: También te permite usar la MO\n"
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BUCEO fuera del combate.\p"
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Toma esto también…$"
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"

# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: La MT04 contiene…\n"
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡PAZ MENTAL!\p"
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Mejora el AT. ESP. y…\n"
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡también la DEF. ESP.!\p"
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Es un movimiento perfecto…\n"
# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡para los POKéMON PSÍQUICOS!\p"
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "(…)$"
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"

# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Acabas de registrar a VITO y LETI, los \n"
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LÍDERES de GIMNASIO, en el POKéNAV.$"
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"

# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Parece que el vínculo que te une\n"
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "a tus POKéMON es más fuerte\l"
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "que el que nos une como mellizos.\p"
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡Y te harás todavía más fuerte!\n"
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Estamos seguros por cómo combates.$"
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"

# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Je, je, je, ¿no lo esperabas?\p"
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡Somos dos LÍDERES de GIMNASIO!\p"
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: O-oh, sólo tienes un…\n"
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: POKéMON para luchar.\p"
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: ¡Así no se puede!\p"
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: Si quieres desafiarnos,\n"
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "trae algún POKéMON más.$"
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"

# 476 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD ALGARIA$"
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"

# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD ALGARIA\p"
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"

# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: POKéMON por aquí…\n"
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: POKéMON por allá…\p"
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Cambia la composición del equipo…\n"
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: y cambiarás tu estilo de lucha.\p"
# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Pero yo…\n"
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: Pero yo…\p"
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: ¡siempre estaré con LETI!\n"
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡siempre estaré con VITO!\p"
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Los dos juntos…\n"
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡somos invencibles!$"
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"

# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Tus POKéMON y tú…\n"
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡estáis muy unidos!$"
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"

# 500 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: ¡Podrás derrotarnos,\n"
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "pero nunca achantarnos!\p"
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡Porque nos apoyamos\n"
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "y animamos mutuamente!$"
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"

# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Así que has vuelto…\n"
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: Ya sabemos por qué…\p"
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Quieres luchar con nosotros.\n"
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: No lo niegues.\p"
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Pero…,\n"
# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: si quieres pelea…,\p"
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: ¡no basta con un POKéMON!\n"
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: ¡Y sólo tienes uno!\p"
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "VITO: Necesitas…\n"
# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LETI: al menos dos POKéMON.$"
