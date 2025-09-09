# 1 "data/maps/PacifidlogTown_House2/scripts.pory"

# 2 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_MapScripts::
# 3 "data/maps/PacifidlogTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House2/scripts.pory"

# 5 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother::
# 6 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House2/scripts.pory"
	dotimebasedevents
# 9 "data/maps/PacifidlogTown_House2/scripts.pory"
	call PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag
# 10 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, PacifidlogTown_House2_EventScript_ComeBackInXDays
# 11 "data/maps/PacifidlogTown_House2/scripts.pory"
	call_if_set FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_MonAssessment
# 12 "data/maps/PacifidlogTown_House2/scripts.pory"
	call_if_unset FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_FirstMonAssessment
# 13 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_MET_FANCLUB_YOUNGER_BROTHER
# 14 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 15 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, PacifidlogTown_House2_EventScript_GiveReturn
# 16 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 17 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_50_TO_99, PacifidlogTown_House2_EventScript_PutInEffort
# 18 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_GiveFrustration
# 19 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 20 "data/maps/PacifidlogTown_House2/scripts.pory"

# 21 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag::
# 22 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, Common_EventScript_NopReturn
# 23 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 24 "data/maps/PacifidlogTown_House2/scripts.pory"
	call_if_eq VAR_RESULT, 0, PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM
# 25 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 26 "data/maps/PacifidlogTown_House2/scripts.pory"

# 27 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_MonAssessment::
# 28 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
# 29 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 30 "data/maps/PacifidlogTown_House2/scripts.pory"

# 31 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FirstMonAssessment::
# 32 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation, MSGBOX_DEFAULT
# 33 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
# 34 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 35 "data/maps/PacifidlogTown_House2/scripts.pory"

# 36 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM::
# 37 "data/maps/PacifidlogTown_House2/scripts.pory"
	clearflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 38 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 39 "data/maps/PacifidlogTown_House2/scripts.pory"

# 40 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveReturn::
# 41 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AdoringPokemonTakeThis, MSGBOX_DEFAULT
# 42 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem ITEM_TM_RETURN
# 43 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 44 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 45 "data/maps/PacifidlogTown_House2/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 46 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
# 47 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 48 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 49 "data/maps/PacifidlogTown_House2/scripts.pory"

# 50 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_PutInEffort::
# 51 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_PutInSomeMoreEffort, MSGBOX_DEFAULT
# 52 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 53 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 54 "data/maps/PacifidlogTown_House2/scripts.pory"

# 55 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveFrustration::
# 56 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ViciousPokemonTakeThis, MSGBOX_DEFAULT
# 57 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem ITEM_TM_FRUSTRATION
# 58 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 59 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 60 "data/maps/PacifidlogTown_House2/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 61 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
# 62 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 63 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 64 "data/maps/PacifidlogTown_House2/scripts.pory"

# 65 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_ComeBackInXDays::
# 66 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 67 "data/maps/PacifidlogTown_House2/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 68 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_GetGoodTMInXDays, MSGBOX_DEFAULT
# 69 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 70 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 71 "data/maps/PacifidlogTown_House2/scripts.pory"

# 72 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_HappyAzurill::
# 73 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 74 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 75 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 76 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 77 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rurii, MSGBOX_DEFAULT
# 78 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 79 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_VeryFriendlyWithTrainer, MSGBOX_DEFAULT
# 80 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 81 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 82 "data/maps/PacifidlogTown_House2/scripts.pory"

# 83 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UnhappyAzurill::
# 84 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 85 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 86 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 87 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_ENCOUNTER
# 88 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rururi, MSGBOX_DEFAULT
# 89 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 90 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch, MSGBOX_DEFAULT
# 91 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 92 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 93 "data/maps/PacifidlogTown_House2/scripts.pory"

# 94 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation:
# 95 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Ejem…\p"
# 96 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Soy la persona más importante del CLUB\n"
# 97 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "de FANS de POKéMON: el hermano menor\l"
# 98 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "de nuestro PRESIDENTE.\p"
# 99 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Estoy aquí disfrutando de unas\n"
# 100 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "merecidas vacaciones con mis POKéMON.$"
# 101 "data/maps/PacifidlogTown_House2/scripts.pory"

# 102 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_AhYourPokemon:
# 103 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "¡Ah!\n"
# 104 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Tu POKéMON…$"
# 105 "data/maps/PacifidlogTown_House2/scripts.pory"

# 106 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_AdoringPokemonTakeThis:
# 107 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "te quiere mucho. Salta a la vista.\p"
# 108 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Un POKéMON tan cariñoso y adorable\n"
# 109 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "se merece una MT como ésta, ¿no?$"
# 110 "data/maps/PacifidlogTown_House2/scripts.pory"

# 111 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_PutInSomeMoreEffort:
# 112 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Mmmm…\n"
# 113 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "No está mal, pero tampoco muy bien.\p"
# 114 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Tendrías que esforzarte un\n"
# 115 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "poco más, ¿no te parece?$"
# 116 "data/maps/PacifidlogTown_House2/scripts.pory"

# 117 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ViciousPokemonTakeThis:
# 118 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "tiene una mirada que da miedo.\p"
# 119 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Un POKéMON terrorífico como éste\n"
# 120 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "se merece una MT como ésta.$"
# 121 "data/maps/PacifidlogTown_House2/scripts.pory"

# 122 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ExplainReturnFrustration:
# 123 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Si un POKéMON te quiere mucho,\n"
# 124 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "el poder de RETROCESO se potencia.\p"
# 125 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Si no te quiere, el poder de\n"
# 126 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "FRUSTRACIÓN es el que aumenta.$"
# 127 "data/maps/PacifidlogTown_House2/scripts.pory"

# 128 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_GetGoodTMInXDays:
# 129 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Ah, sí. En pocos días, {STR_VAR_1} o así,\n"
# 130 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "recibiré un par de MT flipantes.\p"
# 131 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Deberías venir a verme entonces.\n"
# 132 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Te daré la MT que convenga mejor\l"
# 133 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "a tu POKéMON.$"
# 134 "data/maps/PacifidlogTown_House2/scripts.pory"

# 135 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_Rurii:
# 136 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "AZURILL: Azu, azuriril…$"
# 137 "data/maps/PacifidlogTown_House2/scripts.pory"

# 138 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_VeryFriendlyWithTrainer:
# 139 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Parece que se lleva muy bien\n"
# 140 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "con su ENTRENADOR.$"
# 141 "data/maps/PacifidlogTown_House2/scripts.pory"

# 142 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_Rururi:
# 143 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "AZURILL: Azuzú, azuzuzú…$"
# 144 "data/maps/PacifidlogTown_House2/scripts.pory"

# 145 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch:
# 146 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Parece que no se lleva muy bien\n"
# 147 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "con su ENTRENADOR.$"
