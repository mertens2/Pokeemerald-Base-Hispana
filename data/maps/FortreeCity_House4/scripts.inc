# 1 "data/maps/FortreeCity_House4/scripts.pory"

# 2 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_MapScripts::
# 3 "data/maps/FortreeCity_House4/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House4/scripts.pory"

# 5 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Woman::
# 6 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_BringsWorldCloserTogether, MSGBOX_NPC
# 7 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 8 "data/maps/FortreeCity_House4/scripts.pory"

# 9 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Boy::
# 10 "data/maps/FortreeCity_House4/scripts.pory"
	lockall
# 11 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_MENTAL_HERB, FortreeCity_House4_EventScript_ReceivedMentalHerb
# 12 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_DELIVERED_MAIL, FortreeCity_House4_EventScript_WingullReturned
# 13 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_SENT_ON_ERRAND, FortreeCity_House4_EventScript_WingullOnErrand
# 14 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_GoBirdPokemon, MSGBOX_DEFAULT
# 15 "data/maps/FortreeCity_House4/scripts.pory"
	closemessage
# 16 "data/maps/FortreeCity_House4/scripts.pory"
	setflag FLAG_WINGULL_SENT_ON_ERRAND
# 17 "data/maps/FortreeCity_House4/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL
# 18 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement LOCALID_FORTREE_HOUSE_WINGULL, FortreeCity_House4_Movement_WingullExit
# 19 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 20 "data/maps/FortreeCity_House4/scripts.pory"
	removeobject LOCALID_FORTREE_HOUSE_WINGULL
# 21 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 22 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 23 "data/maps/FortreeCity_House4/scripts.pory"

# 24 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_WingullOnErrand::
# 25 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 26 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 27 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_AskedWingullToRunErrand, MSGBOX_DEFAULT
# 28 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 29 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 30 "data/maps/FortreeCity_House4/scripts.pory"

# 31 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_WingullReturned::
# 32 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 33 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 34 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb, MSGBOX_DEFAULT
# 35 "data/maps/FortreeCity_House4/scripts.pory"
	giveitem ITEM_MENTAL_HERB
# 36 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 37 "data/maps/FortreeCity_House4/scripts.pory"
	setflag FLAG_RECEIVED_MENTAL_HERB
# 38 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 39 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 40 "data/maps/FortreeCity_House4/scripts.pory"

# 41 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_ReceivedMentalHerb::
# 42 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 43 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 44 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_FriendsFarAwayThanksToWingull, MSGBOX_DEFAULT
# 45 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
# 46 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 47 "data/maps/FortreeCity_House4/scripts.pory"

# 48 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Movement_WingullExit:
# 49 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_down
# 50 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_down
# 51 "data/maps/FortreeCity_House4/scripts.pory"
	walk_fast_right
# 52 "data/maps/FortreeCity_House4/scripts.pory"
	walk_in_place_faster_down
# 53 "data/maps/FortreeCity_House4/scripts.pory"
	delay_8
# 54 "data/maps/FortreeCity_House4/scripts.pory"
	step_end
# 55 "data/maps/FortreeCity_House4/scripts.pory"

# 56 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Wingull::
# 57 "data/maps/FortreeCity_House4/scripts.pory"
	lock
# 58 "data/maps/FortreeCity_House4/scripts.pory"
	faceplayer
# 59 "data/maps/FortreeCity_House4/scripts.pory"
	waitse
# 60 "data/maps/FortreeCity_House4/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 61 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_Wingull, MSGBOX_DEFAULT
# 62 "data/maps/FortreeCity_House4/scripts.pory"
	waitmoncry
# 63 "data/maps/FortreeCity_House4/scripts.pory"
	release
# 64 "data/maps/FortreeCity_House4/scripts.pory"
	end
# 65 "data/maps/FortreeCity_House4/scripts.pory"

# 66 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_BringsWorldCloserTogether:
# 67 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Cuando va con sus POKéMON,\n"
# 68 "data/maps/FortreeCity_House4/scripts.pory"
	.string "la gente hace muchos amigos.\p"
# 69 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Así, todos tienen cada vez más\n"
# 70 "data/maps/FortreeCity_House4/scripts.pory"
	.string "amigos y son más felices.\l"
# 71 "data/maps/FortreeCity_House4/scripts.pory"
	.string "¿No te parece maravilloso?$"
# 72 "data/maps/FortreeCity_House4/scripts.pory"

# 73 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_GoBirdPokemon:
# 74 "data/maps/FortreeCity_House4/scripts.pory"
	.string "¡Adelante, POKéMON PÁJARO!$"
# 75 "data/maps/FortreeCity_House4/scripts.pory"

# 76 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_AskedWingullToRunErrand:
# 77 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Je, je, he mandado a mi WINGULL\n"
# 78 "data/maps/FortreeCity_House4/scripts.pory"
	.string "a hacerme un recado.$"
# 79 "data/maps/FortreeCity_House4/scripts.pory"

# 80 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb:
# 81 "data/maps/FortreeCity_House4/scripts.pory"
	.string "¡Muy bien, WINGULL!\p"
# 82 "data/maps/FortreeCity_House4/scripts.pory"
	.string "¿Eh? ¿Qué llevas ahí?\p"
# 83 "data/maps/FortreeCity_House4/scripts.pory"
	.string "¿Una HIERBA MENTAL?\n"
# 84 "data/maps/FortreeCity_House4/scripts.pory"
	.string "¿De dónde la habrá cogido?\p"
# 85 "data/maps/FortreeCity_House4/scripts.pory"
	.string "A mí no me sirve porque no soy\n"
# 86 "data/maps/FortreeCity_House4/scripts.pory"
	.string "ENTRENADOR. Toma, para ti.$"
# 87 "data/maps/FortreeCity_House4/scripts.pory"

# 88 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_FriendsFarAwayThanksToWingull:
# 89 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Gracias a mi WINGULL, he hecho amigos\n"
# 90 "data/maps/FortreeCity_House4/scripts.pory"
	.string "por todas partes.$"
# 91 "data/maps/FortreeCity_House4/scripts.pory"

# 92 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_Text_Wingull:
# 93 "data/maps/FortreeCity_House4/scripts.pory"
	.string "WINGULL: ¡Winguuu!$"
