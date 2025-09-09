# 1 "data/maps/SSTidalLowerDeck/scripts.pory"

# 2 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_MapScripts::
# 3 "data/maps/SSTidalLowerDeck/scripts.pory"
	.byte 0
# 4 "data/maps/SSTidalLowerDeck/scripts.pory"

# 5 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_EventScript_Phillip::
# 6 "data/maps/SSTidalLowerDeck/scripts.pory"
	trainerbattle_single TRAINER_PHILLIP, SSTidalLowerDeck_Text_PhillipIntro, SSTidalLowerDeck_Text_PhillipDefeat
# 7 "data/maps/SSTidalLowerDeck/scripts.pory"
	msgbox SSTidalLowerDeck_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SSTidalLowerDeck/scripts.pory"
	end
# 9 "data/maps/SSTidalLowerDeck/scripts.pory"

# 10 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_EventScript_Leonard::
# 11 "data/maps/SSTidalLowerDeck/scripts.pory"
	trainerbattle_single TRAINER_LEONARD, SSTidalLowerDeck_Text_LeonardIntro, SSTidalLowerDeck_Text_LeonardDefeat
# 12 "data/maps/SSTidalLowerDeck/scripts.pory"
	msgbox SSTidalLowerDeck_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/SSTidalLowerDeck/scripts.pory"
	end
# 14 "data/maps/SSTidalLowerDeck/scripts.pory"

# 15 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_PhillipIntro:
# 16 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "¡Aaaaargh! ¡Estoy hasta las narices\n"
# 17 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "de no acabar nunca de limpiar esto!\p"
# 18 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "¡Vamos a luchar para desfogarme!$"
# 19 "data/maps/SSTidalLowerDeck/scripts.pory"

# 20 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_PhillipDefeat:
# 21 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Je, je… Pues he perdido…$"
# 22 "data/maps/SSTidalLowerDeck/scripts.pory"

# 23 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_PhillipPostBattle:
# 24 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "¡Somos los HERMANOS FREGONA!\p"
# 25 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "El mayor echa jabón en el suelo\n"
# 26 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "y el joven fregotea por todas partes.$"
# 27 "data/maps/SSTidalLowerDeck/scripts.pory"

# 28 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_LeonardIntro:
# 29 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Éste es el nivel inferior del casco.\n"
# 30 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Aquí hay un montón de sitio.\l"
# 31 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Se puede luchar sin agobios…$"
# 32 "data/maps/SSTidalLowerDeck/scripts.pory"

# 33 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_LeonardDefeat:
# 34 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Je, je… Pues he perdido…$"
# 35 "data/maps/SSTidalLowerDeck/scripts.pory"

# 36 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_LeonardPostBattle:
# 37 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "¡Somos los HERMANOS FREGONA!\p"
# 38 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "El mayor echa jabón en el suelo\n"
# 39 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "y el joven fregotea por todas partes.$"
