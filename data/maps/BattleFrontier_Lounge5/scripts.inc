# 1 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirl::
# 6 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	lock
# 7 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	faceplayer
# 8 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlGreeting, MSGBOX_YESNO
# 9 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
# 10 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	special ChoosePartyMon
# 11 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitstate
# 12 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	lock
# 13 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	faceplayer
# 14 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
# 15 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 16 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge5_EventScript_NatureGirlEgg
# 17 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	special ShowNatureGirlMessage
# 18 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitmessage
# 19 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitbuttonpress
# 20 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 21 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 22 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 23 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirlEgg::
# 24 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlEgg, MSGBOX_DEFAULT
# 25 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 26 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 28 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown::
# 29 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlNoneShown, MSGBOX_DEFAULT
# 30 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 31 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 32 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 33 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_Gentleman::
# 34 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon, MSGBOX_NPC
# 35 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 36 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 37 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_BlackBelt::
# 38 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound, MSGBOX_NPC
# 39 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 40 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 41 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_LittleBoy::
# 42 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot, MSGBOX_NPC
# 43 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 45 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlGreeting::
# 46 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Je, je, je!\n"
# 47 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Yo puedo decirte lo que piensan los\l"
# 48 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "POKéMON sobre esto de los combates!\p"
# 49 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Porfa, ¿me dejas ver tus POKéMON?$"
# 50 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 51 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlNoneShown::
# 52 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Ay!\n"
# 53 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Qué carácter, oye!$"
# 54 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 55 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlAttackHighAttackLow::
# 56 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Mmm…\p"
# 57 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Dice que le gusta combatir!\n"
# 58 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Aunque le hagan pupa!$"
# 59 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 60 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlAttackHighDefenseLow::
# 61 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Mmm…\p"
# 62 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Dice que le gusta combatir!\n"
# 63 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Pero que si le hacen pupa,\l"
# 64 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡se lo pensará dos veces!$"
# 65 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 66 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlAttackHighSupportLow::
# 67 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Mmm…\p"
# 68 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Dice que le gusta combatir!\n"
# 69 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Pero que si le hacen pupa,\l"
# 70 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡se reservará!$"
# 71 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 72 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlDefenseHighAttackLow::
# 73 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Mmm…\p"
# 74 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Dice que se cuida mucho!\n"
# 75 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Pero que si le hacen pupa,\l"
# 76 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡se vengará!$"
# 77 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 78 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlDefenseHighDefenseLow::
# 79 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Mmm…\p"
# 80 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Dice que se cuida mucho,\n"
# 81 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "le hagan o no daño!$"
# 82 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 83 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlDefenseHighSupportLow::
# 84 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Mmm…\p"
# 85 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Dice que se cuida mucho!\n"
# 86 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Pero que si le hacen pupa,\l"
# 87 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡se reservará!$"
# 88 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 89 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlSupportHighAttackLow::
# 90 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Mmm…\p"
# 91 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Dice que le gusta reservarse!\n"
# 92 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Y que, si le hacen pupa, no se anda\l"
# 93 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "con pamplinas!$"
# 94 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 95 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlSupportHighDefenseLow::
# 96 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Mmm…\p"
# 97 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Dice que le gusta reservarse!\n"
# 98 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Pero que si le hacen pupa,\l"
# 99 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡se lo pensará dos veces!$"
# 100 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 101 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlSupportHighSupportLow::
# 102 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Mmm…\p"
# 103 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Dice que le gusta reservarse!\n"
# 104 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Le gusta reservarse, incluso\l"
# 105 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "si le hacen mucha pupa.$"
# 106 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 107 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlEgg::
# 108 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Qué tontería! ¡Los HUEVOS duermen!\n"
# 109 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡No puedo hablar con los HUEVOS!$"
# 110 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 111 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon::
# 112 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Qué ricura!\n"
# 113 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Esa pequeña dice que puede leerles\l"
# 114 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "el pensamiento a los POKéMON!$"
# 115 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 116 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound::
# 117 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Me parece a mí que esa niña\n"
# 118 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "dice cosas la mar de profundas.$"
# 119 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 120 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot::
# 121 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¿Sabes una cosa? \p"
# 122 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "¡Esa niña juega mucho en la casa roja!$"
