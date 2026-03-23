DewfordTownTrainingZone_MapScripts::
	.byte 0


DewfordTrainingZone_EventScript_Brawly::
# 4 "data/maps/DewfordTownTrainingZone/scripts.pory"
	setspeaker Brawly
# 5 "data/maps/DewfordTownTrainingZone/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_TRAINING_ZONE, DewfordTrainingZone_Text_Brawly, DewfordTrainingZone_Text_BrawlyDefeat, DewfordTrainingZone_EventScript_BrawlyDefeat
# 6 "data/maps/DewfordTownTrainingZone/scripts.pory"
	goto DewfordTrainingZone_EventScript_BrawlyDefeat
	return


DewfordTrainingZone_EventScript_BrawlyDefeat::
# 9 "data/maps/DewfordTownTrainingZone/scripts.pory"
	setspeaker Brawly
	checkitem ITEM_SUPER_ROD
# 0 "data/maps/DewfordTownTrainingZone/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq DewfordTrainingZone_EventScript_BrawlyDefeat_2
DewfordTrainingZone_EventScript_BrawlyDefeat_1:
# 15 "data/maps/DewfordTownTrainingZone/scripts.pory"
	setspeaker Brawly
# 16 "data/maps/DewfordTownTrainingZone/scripts.pory"
	msgbox DewfordTrainingZone_Text_BrawlyGaveYouSuperRod
# 17 "data/maps/DewfordTownTrainingZone/scripts.pory"
	closemessage
# 18 "data/maps/DewfordTownTrainingZone/scripts.pory"
	releaseall
	end

DewfordTrainingZone_EventScript_BrawlyDefeat_2:
# 11 "data/maps/DewfordTownTrainingZone/scripts.pory"
	msgbox DewfordTrainingZone_Text_BrawlyPostBattle
# 12 "data/maps/DewfordTownTrainingZone/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 13 "data/maps/DewfordTownTrainingZone/scripts.pory"
	closemessage
	goto DewfordTrainingZone_EventScript_BrawlyDefeat_1


DewfordTrainingZone_EventScript_Hariyama::
# 22 "data/maps/DewfordTownTrainingZone/scripts.pory"
	faceplayer
# 23 "data/maps/DewfordTownTrainingZone/scripts.pory"
	lockall
# 24 "data/maps/DewfordTownTrainingZone/scripts.pory"
	playmoncry SPECIES_HARIYAMA, CRY_MODE_NORMAL
# 25 "data/maps/DewfordTownTrainingZone/scripts.pory"
	msgbox DewfordTrainingZone_EventScript_Hariyama_Text_0
# 26 "data/maps/DewfordTownTrainingZone/scripts.pory"
	waitmoncry
# 27 "data/maps/DewfordTownTrainingZone/scripts.pory"
	closemessage
# 28 "data/maps/DewfordTownTrainingZone/scripts.pory"
	releaseall
	end


DewfordTrainingZone_EventScript_Markus::
# 33 "data/maps/DewfordTownTrainingZone/scripts.pory"
	trainerbattle_single TRAINER_MARKUS, DewfordTrainingZone_Text_MarkusIntro, DewfordTrainingZone_Text_MarkusDefeat, DewfordTrainingZone_EventScript_MarkusDefeat
# 34 "data/maps/DewfordTownTrainingZone/scripts.pory"
	goto DewfordTrainingZone_EventScript_MarkusDefeat
	return


DewfordTrainingZone_EventScript_MarkusDefeat::
# 38 "data/maps/DewfordTownTrainingZone/scripts.pory"
	lockall
# 39 "data/maps/DewfordTownTrainingZone/scripts.pory"
	faceplayer
# 40 "data/maps/DewfordTownTrainingZone/scripts.pory"
	msgbox DewfordTrainingZone_Text_MarkusPostBattle
# 41 "data/maps/DewfordTownTrainingZone/scripts.pory"
	releaseall
	end


DewfordTrainingZone_EventScript_Lola::
# 47 "data/maps/DewfordTownTrainingZone/scripts.pory"
	trainerbattle_single TRAINER_LOLA, DewfordTrainingZone_Text_LolaIntro, DewfordTrainingZone_Text_LolaDefeat, DewfordTrainingZone_EventScript_LolaDefeat
# 48 "data/maps/DewfordTownTrainingZone/scripts.pory"
	goto DewfordTrainingZone_EventScript_LolaDefeat
	return


DewfordTrainingZone_EventScript_LolaDefeat::
# 52 "data/maps/DewfordTownTrainingZone/scripts.pory"
	lockall
# 53 "data/maps/DewfordTownTrainingZone/scripts.pory"
	faceplayer
# 54 "data/maps/DewfordTownTrainingZone/scripts.pory"
	msgbox DewfordTrainingZone_Text_LolaPostBattle
# 55 "data/maps/DewfordTownTrainingZone/scripts.pory"
	releaseall
	end


DewfordTrainingZone_EventScript_Hariyama_Text_0:
# 25 "data/maps/DewfordTownTrainingZone/scripts.pory"
	.string "¡Ha…Ri…Yama!$"

DewfordTrainingZone_Text_Brawly::
# 60 "data/maps/DewfordTownTrainingZone/scripts.pory"
	.string "¡You've made it!\p"
	.string "¿Te gusta? ¡Es mi propia Zona de\n"
	.string "Entrenamiento Privada!\p"
	.string "La uso para entrenar a mis aprendices\n"
	.string "más poderosos para que estén listos\l"
	.string "para reemplazarme en el Gimnasio de\l"
	.string "ser necesario.\p"
	.string "¡Pero! ¡Más importante, bro!\p"
	.string "No estoy en el Gimnasio ahora, ¿Am I?\n"
	.string "¡Podemos tener una batalla a todo\l"
	.string "poder, sin tontas reglas de la Liga\l"
	.string "Pokémon!\p"
	.string "¡No te salvará un Equipo con Ventaja de\n"
	.string "Tipos!$"

DewfordTrainingZone_Text_BrawlyDefeat::
# 79 "data/maps/DewfordTownTrainingZone/scripts.pory"
	.string "¡Woah! ¡Esa salpicadura de poder es\n"
	.string "inaudita!$"

DewfordTrainingZone_Text_BrawlyPostBattle::
# 90 "data/maps/DewfordTownTrainingZone/scripts.pory"
	.string "¡Pudiste derrotar a mi Equipo no\n"
	.string "restringido, not bad!\p"
	.string "Sigue así, ¡Y serás {ELLA} mejor, mejor que\n"
	.string "nadie más in no time!\p"
	.string "No puedo darte una Medalla fuera del\n"
	.string "Gimnasio, ¡Pero ésto puedo darte!$"

DewfordTrainingZone_Text_BrawlyGaveYouSuperRod::
# 105 "data/maps/DewfordTownTrainingZone/scripts.pory"
	.string "¡Es la Súpercaña!\p"
	.string "¡Con ella, ningún Pokémon evitará ser\n"
	.string "pescado por tí!\p"
	.string "Pero ciudadito, muchos pueden ser bien\n"
	.string "fuertes, ¡Oh yeah!\p"
	.string "¡My best wishes!$"

DewfordTrainingZone_Text_LolaIntro::
# 121 "data/maps/DewfordTownTrainingZone/scripts.pory"
	.string "¡He entrenado hasta el cansancio con\n"
	.string "Brawly para convertirme en la\l"
	.string "siguiente {COLOR LIGHT_RED SHADOW RED}Líder de Gimnasio{COLOR DARK_GRAY SHADOW LIGHT_GRAY} de {COLOR LIGHT_RED SHADOW RED}Pueblo\l"
	.string "Dewford{COLOR DARK_GRAY SHADOW LIGHT_GRAY}!$"

DewfordTrainingZone_Text_LolaDefeat::
# 132 "data/maps/DewfordTownTrainingZone/scripts.pory"
	.string "¡Aún doy para más! ¡Ataca, ahora!\p"
	.string "¿Eh? ¿Cómo que ya terminó la batalla?$"

DewfordTrainingZone_Text_LolaPostBattle::
# 145 "data/maps/DewfordTownTrainingZone/scripts.pory"
	.string "Brawly me enseñó a tomarme cada\n"
	.string "derrota como una pequeña victoria.\p"
	.string "¡Pero, Carvanho, nunca se siente así!$"

DewfordTrainingZone_Text_MarkusIntro::
# 158 "data/maps/DewfordTownTrainingZone/scripts.pory"
	.string "¡Me convertiré en {COLOR LIGHT_RED SHADOW RED}Líder de Gimnasio{COLOR DARK_GRAY SHADOW LIGHT_GRAY} SÍ O\n"
	.string "SÍ!\p"
	.string "¡Ya verás!$"

DewfordTrainingZone_Text_MarkusDefeat::
# 169 "data/maps/DewfordTownTrainingZone/scripts.pory"
	.string "Un paso hacia atrás… ¡Y tres para\n"
	.string "adelante!$"

DewfordTrainingZone_Text_MarkusPostBattle::
# 180 "data/maps/DewfordTownTrainingZone/scripts.pory"
	.string "No importa qué tanto pierda.\n"
	.string "Cada derrota me enseña algo, y me\l"
	.string "acerca a mi meta.\p"
	.string "¿No debería ser esa la filosofía de un\n"
	.string "Líder de Gimnasio?$"
