# 1 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ NPC that rates pokemon based on their IVs
# 6 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_Breeder::
# 7 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	lock
# 8 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	faceplayer
# 9 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	call_if_unset FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_BreederIntro
# 10 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	call_if_set FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder
# 11 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_BREEDER
# 12 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
# 13 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 14 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 15 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder::
# 16 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	special ChoosePartyMon
# 17 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	waitstate
# 18 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge1_EventScript_ShowMonToBreeder
# 19 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge1_EventScript_CancelMonSelect
# 20 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 21 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 22 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_BreederIntro::
# 23 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_PokemonBreederIntro, MSGBOX_DEFAULT
# 24 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	return
# 25 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 26 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder::
# 27 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon, MSGBOX_DEFAULT
# 28 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	return
# 29 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 30 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ BufferVarsForIVRater buffers the following values
# 31 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ VAR_0x8005: Sum of the mons IVs
# 32 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ VAR_0x8006: Stat id of highest IV stat
# 33 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ VAR_0x8007: IV of the highest IV stat
# 34 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder::
# 35 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 36 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge1_EventScript_ShowEggToBreeder
# 37 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	special BufferVarsForIVRater
# 38 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le VAR_0x8005, 90, BattleFrontier_Lounge1_EventScript_AverageTotalIVs       @ Average of 15
# 39 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le VAR_0x8005, 120, BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs @ Average of 20
# 40 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le VAR_0x8005, 150, BattleFrontier_Lounge1_EventScript_HighTotalIVs         @ Average of 25
# 41 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_ge VAR_0x8005, 151, BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs     @ Average of > 25
# 42 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 43 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 44 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_ShowEggToBreeder::
# 45 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_EvenICantTell, MSGBOX_DEFAULT
# 46 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
# 47 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 48 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 49 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ Comment on the highest IV stat
# 50 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVStat::
# 51 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8006, STAT_HP, BattleFrontier_Lounge1_EventScript_HighestIVHP
# 52 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8006, STAT_ATK, BattleFrontier_Lounge1_EventScript_HighestIVAtk
# 53 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8006, STAT_DEF, BattleFrontier_Lounge1_EventScript_HighestIVDef
# 54 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8006, STAT_SPEED, BattleFrontier_Lounge1_EventScript_HighestIVSpeed
# 55 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8006, STAT_SPATK, BattleFrontier_Lounge1_EventScript_HighestIVSpAtk
# 56 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_eq VAR_0x8006, STAT_SPDEF, BattleFrontier_Lounge1_EventScript_HighestIVSpDef
# 57 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 58 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 59 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ Comment on the highest IV value
# 60 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVValue::
# 61 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le VAR_0x8007, 15, BattleFrontier_Lounge1_EventScript_HighestIVLow
# 62 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le VAR_0x8007, 25, BattleFrontier_Lounge1_EventScript_HighestIVMid
# 63 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_le VAR_0x8007, 30, BattleFrontier_Lounge1_EventScript_HighestIVHigh
# 64 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_ge VAR_0x8007, 31, BattleFrontier_Lounge1_EventScript_HighestIVMax
# 65 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 66 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 67 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_EndBreederComments::
# 68 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	release
# 69 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 70 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 71 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_AverageTotalIVs::
# 72 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_AverageAbility, MSGBOX_DEFAULT
# 73 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
# 74 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 75 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 76 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs::
# 77 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BetterThanAverageAbility, MSGBOX_DEFAULT
# 78 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
# 79 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 80 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 81 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighTotalIVs::
# 82 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_ImpressiveAbility, MSGBOX_DEFAULT
# 83 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
# 84 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 85 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 86 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs::
# 87 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_OutstandingAbility, MSGBOX_DEFAULT
# 88 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
# 89 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 90 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 91 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVHP::
# 92 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectHP, MSGBOX_DEFAULT
# 93 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 94 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 95 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 96 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVAtk::
# 97 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectAtk, MSGBOX_DEFAULT
# 98 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 99 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 100 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 101 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVDef::
# 102 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectDef, MSGBOX_DEFAULT
# 103 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 104 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 105 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 106 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVSpeed::
# 107 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpeed, MSGBOX_DEFAULT
# 108 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 109 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 110 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 111 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVSpAtk::
# 112 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpAtk, MSGBOX_DEFAULT
# 113 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 114 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 115 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 116 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVSpDef::
# 117 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpDef, MSGBOX_DEFAULT
# 118 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
# 119 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 120 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 121 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVLow::
# 122 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatRelativelyGood, MSGBOX_DEFAULT
# 123 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
# 124 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 125 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 126 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVMid::
# 127 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatImpressive, MSGBOX_DEFAULT
# 128 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
# 129 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 130 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 131 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVHigh::
# 132 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatOutstanding, MSGBOX_DEFAULT
# 133 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
# 134 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 135 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 136 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_HighestIVMax::
# 137 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatFlawless, MSGBOX_DEFAULT
# 138 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
# 139 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 140 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 141 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_CancelMonSelect::
# 142 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_NoTimeForMyAdvice, MSGBOX_DEFAULT
# 143 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	release
# 144 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 145 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 146 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_Boy1::
# 147 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding, MSGBOX_NPC
# 148 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 149 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 150 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_EventScript_Boy2::
# 151 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt, MSGBOX_NPC
# 152 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	end
# 153 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 154 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_PokemonBreederIntro:
# 155 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Llevo 70 años entrenando POKéMON!\n"
# 156 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Todos me consideran una leyenda viva\l"
# 157 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "y me rinden sus honores!\p"
# 158 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Soy el mejor CRIAPOKéMON!\p"
# 159 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Si llegas a alcanzar mi maestría,\n"
# 160 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "podrás reconocer las habilidades\l"
# 161 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "de un POKéMON nada más verlo.\p"
# 162 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Tú parece que sabes algo de entrenar.\n"
# 163 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¿Te interesa conocer las habilidades\l"
# 164 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "de tus propios POKéMON?\p"
# 165 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Venga!\n"
# 166 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Veamos a esos POKéMON que llevas ahí!$"
# 167 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 168 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_AverageAbility:
# 169 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Mmm…\p"
# 170 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "De éste, a grandes rasgos, diría\n"
# 171 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "que posee habilidades normales.$"
# 172 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 173 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BetterThanAverageAbility:
# 174 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Mmm…\p"
# 175 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "De éste, a grandes rasgos, diría\n"
# 176 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "que posee buenas habilidades.$"
# 177 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 178 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_ImpressiveAbility:
# 179 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Mmm…\p"
# 180 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "De éste, a grandes rasgos, diría que\n"
# 181 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "posee habilidades impresionantes.$"
# 182 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 183 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_OutstandingAbility:
# 184 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Mmm…\p"
# 185 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "De éste, a grandes rasgos, diría que\n"
# 186 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "posee habilidades extraordinarias.$"
# 187 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 188 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectHP:
# 189 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Más concretamente, su punto fuerte\n"
# 190 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "está en los PS…$"
# 191 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 192 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectAtk:
# 193 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Más concretamente, su punto fuerte\n"
# 194 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "está en el ATAQUE…$"
# 195 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 196 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectDef:
# 197 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Más concretamente, su punto fuerte\n"
# 198 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "está en la DEFENSA…$"
# 199 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 200 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectSpAtk:
# 201 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Más concretamente, su punto fuerte\n"
# 202 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "está en el ATAQUE ESPECIAL…$"
# 203 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 204 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectSpDef:
# 205 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Más concretamente, su punto fuerte\n"
# 206 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "está en la DEFENSA ESPECIAL…$"
# 207 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 208 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_BestAspectSpeed:
# 209 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Más concretamente, su punto fuerte\n"
# 210 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "está en la VELOCIDAD…$"
# 211 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 212 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_StatRelativelyGood:
# 213 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Es una característica buena.\n"
# 214 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Mm… Sí, así la definiría yo.$"
# 215 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 216 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_StatImpressive:
# 217 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Es una característica muy buena.\n"
# 218 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Mm… Sí, así la definiría yo.$"
# 219 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 220 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_StatOutstanding:
# 221 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Es una característica extraordinaria.\n"
# 222 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Mm… Sí, así la definiría yo.$"
# 223 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 224 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_StatFlawless:
# 225 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Es algo sencillamente perfecto!\n"
# 226 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Mm… Sí, así lo definiría yo.$"
# 227 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 228 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_NoTimeForMyAdvice:
# 229 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¿Cómo?\n"
# 230 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¿Que no tienes tiempo para consejos?\p"
# 231 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Deberías estar feliz por poder\n"
# 232 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "aprender algo de los mayores!$"
# 233 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 234 "data/maps/BattleFrontier_Lounge1/scripts.pory"
@ Unused
# 235 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_HaveBusinessNeedsTending:
# 236 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Yes, what is it now?\p"
# 237 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "I have business that needs tending!\n"
# 238 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Save it for next time!$"
# 239 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 240 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon:
# 241 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Mmm… ¿Te intrigan las habilidades\n"
# 242 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "de tus POKéMON?\p"
# 243 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Venga! ¡Vamos a echarles un vistazo!$"
# 244 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 245 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_EvenICantTell:
# 246 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Soy un experto, no un adivino!\n"
# 247 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡No puedo decir nada sobre los POKéMON\l"
# 248 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "que aún no han roto el cascarón!\p"
# 249 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Muéstrame un POKéMON!\n"
# 250 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Lo que necesito ver es un POKéMON!$"
# 251 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 252 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding:
# 253 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Este señor me ha dicho\n"
# 254 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "que mi POKéMON es extraordinario!\l"
# 255 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Me alegro de haberlo entrenado bien!$"
# 256 "data/maps/BattleFrontier_Lounge1/scripts.pory"

# 257 "data/maps/BattleFrontier_Lounge1/scripts.pory"
BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt:
# 258 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "¡Este señor me ha dicho\n"
# 259 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "que mi POKéMON es extraordinario!\l"
# 260 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Y eso que no me he esmerado mucho…$"
