Route112_EventScript_MagmaGrunts::
# 3 "data/maps/Route112/scripts.pory"
	lockall
# 4 "data/maps/Route112/scripts.pory"
	delay 40
# 5 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 6 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 7 "data/maps/Route112/scripts.pory"
	delay 20
# 8 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LeaderGoingToAwakenThing, MSGBOX_DEFAULT
# 9 "data/maps/Route112/scripts.pory"
	closemessage
# 10 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 11 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 12 "data/maps/Route112/scripts.pory"
	delay 40
# 13 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 14 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 15 "data/maps/Route112/scripts.pory"
	delay 20
# 16 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_YeahWeNeedMeteorite, MSGBOX_DEFAULT
# 17 "data/maps/Route112/scripts.pory"
	closemessage
# 18 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 19 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route112/scripts.pory"
	delay 40
# 21 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 22 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route112/scripts.pory"
	delay 20
# 24 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_OhThatsWhyCrewWentToFallarbor, MSGBOX_DEFAULT
# 25 "data/maps/Route112/scripts.pory"
	closemessage
# 26 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 27 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route112/scripts.pory"
	delay 40
# 29 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 30 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route112/scripts.pory"
	delay 20
# 32 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CantLetAnyonePassUntilTheyreBack, MSGBOX_DEFAULT
# 33 "data/maps/Route112/scripts.pory"
	closemessage
# 34 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 35 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route112/scripts.pory"
	msgbox Common_Text_Realization
# 37 "data/maps/Route112/scripts.pory"
	closemessage
# 38 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterDown
# 39 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterDown
# 40 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_AreYouChallengingUs
# 42 "data/maps/Route112/scripts.pory"
	closemessage
# 43 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_WerePlentyStrong, MSGBOX_YESNO
# 44 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route112_EventScript_MagmaGrunts_2
# 61 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_WeCanDoBetter
Route112_EventScript_MagmaGrunts_1:
# 63 "data/maps/Route112/scripts.pory"
	releaseall
	end

Route112_EventScript_MagmaGrunts_2:
# 45 "data/maps/Route112/scripts.pory"
	battle_1_vs_2 TRAINER_GRUNT_MAGMA_ROUTE112_M, Route112_EventScript_MagmaGrunts_Text_0, TRAINER_GRUNT_MAGMA_ROUTE112_F, Route112_EventScript_MagmaGrunts_Text_1, TRUE
# 46 "data/maps/Route112/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 47 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route112_EventScript_MagmaGrunts_5
# 54 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_WeToldYou
# 55 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 56 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 57 "data/maps/Route112/scripts.pory"
	waitmovement 0
	goto Route112_EventScript_MagmaGrunts_1

Route112_EventScript_MagmaGrunts_5:
# 48 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_WeCanDoBetter
# 49 "data/maps/Route112/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 50 "data/maps/Route112/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 51 "data/maps/Route112/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 3
	goto Route112_EventScript_MagmaGrunts_1


# 71 "data/maps/Route112/scripts.pory"

# 72 "data/maps/Route112/scripts.pory"

# 73 "data/maps/Route112/scripts.pory"

# 74 "data/maps/Route112/scripts.pory"
Route112_MapScripts::
# 75 "data/maps/Route112/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_OnTransition
# 76 "data/maps/Route112/scripts.pory"
	.byte 0
# 77 "data/maps/Route112/scripts.pory"

# 78 "data/maps/Route112/scripts.pory"
Route112_OnTransition:
# 79 "data/maps/Route112/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 80 "data/maps/Route112/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 81 "data/maps/Route112/scripts.pory"
	end
# 82 "data/maps/Route112/scripts.pory"

# 83 "data/maps/Route112/scripts.pory"

# 84 "data/maps/Route112/scripts.pory"

# 85 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneyCableCarSign::
# 86 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
# 87 "data/maps/Route112/scripts.pory"
	end
# 88 "data/maps/Route112/scripts.pory"

# 89 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneySign::
# 90 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
# 91 "data/maps/Route112/scripts.pory"
	end
# 92 "data/maps/Route112/scripts.pory"

# 93 "data/maps/Route112/scripts.pory"
Route112_EventScript_RouteSignLavaridge::
# 94 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
# 95 "data/maps/Route112/scripts.pory"
	end
# 96 "data/maps/Route112/scripts.pory"

# 97 "data/maps/Route112/scripts.pory"
Route112_EventScript_Hiker::
# 98 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
# 99 "data/maps/Route112/scripts.pory"
	end
# 100 "data/maps/Route112/scripts.pory"

# 101 "data/maps/Route112/scripts.pory"
Route112_EventScript_Brice::
# 102 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
# 103 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/Route112/scripts.pory"
	end
# 105 "data/maps/Route112/scripts.pory"

# 106 "data/maps/Route112/scripts.pory"
Route112_EventScript_Trent::
# 107 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
# 108 "data/maps/Route112/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 109 "data/maps/Route112/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route112_EventScript_RematchTrent
# 110 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
# 111 "data/maps/Route112/scripts.pory"
	release
# 112 "data/maps/Route112/scripts.pory"
	end
# 113 "data/maps/Route112/scripts.pory"

# 114 "data/maps/Route112/scripts.pory"
Route112_EventScript_RegisterTrent::
# 115 "data/maps/Route112/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 116 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
# 118 "data/maps/Route112/scripts.pory"
	register_matchcall TRAINER_TRENT_1
# 119 "data/maps/Route112/scripts.pory"
	release
# 120 "data/maps/Route112/scripts.pory"
	end
# 121 "data/maps/Route112/scripts.pory"

# 122 "data/maps/Route112/scripts.pory"
Route112_EventScript_RematchTrent::
# 123 "data/maps/Route112/scripts.pory"
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
# 124 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route112/scripts.pory"
	end
# 126 "data/maps/Route112/scripts.pory"

# 127 "data/maps/Route112/scripts.pory"
Route112_EventScript_Larry::
# 128 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
# 129 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/Route112/scripts.pory"
	end
# 131 "data/maps/Route112/scripts.pory"

# 132 "data/maps/Route112/scripts.pory"
Route112_EventScript_Carol::
# 133 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
# 134 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/Route112/scripts.pory"
	end
# 136 "data/maps/Route112/scripts.pory"

# 137 "data/maps/Route112/scripts.pory"
Route112_EventScript_Bryant::
# 138 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
# 139 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
# 140 "data/maps/Route112/scripts.pory"
	end
# 141 "data/maps/Route112/scripts.pory"

# 142 "data/maps/Route112/scripts.pory"
Route112_EventScript_Shayla::
# 143 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
# 144 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/Route112/scripts.pory"
	end
# 146 "data/maps/Route112/scripts.pory"

# 147 "data/maps/Route112/scripts.pory"
Route112_Text_NotEasyToGetBackToLavaridge:
# 148 "data/maps/Route112/scripts.pory"
	.string "Eh, I'd like to get to MAUVILLE, but if\n"
# 149 "data/maps/Route112/scripts.pory"
	.string "I went down these ledges, it'd be no\l"
# 150 "data/maps/Route112/scripts.pory"
	.string "easy matter to get back to LAVARIDGE.$"
# 151 "data/maps/Route112/scripts.pory"

# 152 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneyCableCarSign:
# 153 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY CABLE CAR\n"
# 154 "data/maps/Route112/scripts.pory"
	.string "“A short walk {UP_ARROW} way!”$"
# 155 "data/maps/Route112/scripts.pory"

# 156 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneySign:
# 157 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY\p"
# 158 "data/maps/Route112/scripts.pory"
	.string "“For LAVARIDGE TOWN or the summit,\n"
# 159 "data/maps/Route112/scripts.pory"
	.string "please take the CABLE CAR.”$"
# 160 "data/maps/Route112/scripts.pory"

# 161 "data/maps/Route112/scripts.pory"
Route112_Text_RouteSignLavaridge:
# 162 "data/maps/Route112/scripts.pory"
	.string "ROUTE 112\n"
# 163 "data/maps/Route112/scripts.pory"
	.string "{LEFT_ARROW} LAVARIDGE TOWN$"

Route112_EventScript_MagmaGrunts_Text_0:
# 45 "data/maps/Route112/scripts.pory"
	.string "¿¡Amor, viste eso!?$"

Route112_EventScript_MagmaGrunts_Text_1:
# 45 "data/maps/Route112/scripts.pory"
	.string "Sí... Creo que nos quedamos sin\n"
	.string "trabajo...$"
