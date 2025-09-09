MauvilleCity_InverseBattle_MapScripts::
	.byte 0


MauvilleCity_InverseBattle_Scripts_Psychic::
# 5 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	lockall
# 6 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_0
# 7 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_InverseBattle_Scripts_Psychic_Text_1, MauvilleCity_InverseBattle_Scripts_Psychic_Text_2, MauvilleCity_InverseBattle_Scripts_Psychic_Text_3, MauvilleCity_InverseBattle_Scripts_Psychic_Text_4
# 8 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	switch VAR_RESULT
# 9 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Scripts_Psychic_2
# 30 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Scripts_Psychic_3
# 51 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Scripts_Psychic_4
# 59 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Scripts_Psychic_5
	return

MauvilleCity_InverseBattle_Scripts_Psychic_2:
# 10 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_5
# 12 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_InverseBattle_Scripts_Psychic_Text_6, MauvilleCity_InverseBattle_Scripts_Psychic_Text_7, MauvilleCity_InverseBattle_Scripts_Psychic_Text_8, MauvilleCity_InverseBattle_Scripts_Psychic_Text_4
# 13 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Scripts_Psychic_8
# 18 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Scripts_Psychic_9
# 22 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Scripts_Psychic_10
# 26 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Scripts_Psychic_11
MauvilleCity_InverseBattle_Scripts_Psychic_6:
	return

MauvilleCity_InverseBattle_Scripts_Psychic_3:
# 31 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_12
# 33 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_InverseBattle_Scripts_Psychic_Text_6, MauvilleCity_InverseBattle_Scripts_Psychic_Text_7, MauvilleCity_InverseBattle_Scripts_Psychic_Text_8, MauvilleCity_InverseBattle_Scripts_Psychic_Text_4
# 34 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	switch VAR_RESULT
# 35 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Scripts_Psychic_14
# 39 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Scripts_Psychic_15
# 43 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Scripts_Psychic_16
# 47 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Scripts_Psychic_17
MauvilleCity_InverseBattle_Scripts_Psychic_12:
	return

MauvilleCity_InverseBattle_Scripts_Psychic_4:
# 52 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_13
# 55 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_14
# 56 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
# 57 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	end
	return

MauvilleCity_InverseBattle_Scripts_Psychic_5:
# 60 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	goto MauvilleCity_InverseBattle_Scripts_PsychicEnd
	return

MauvilleCity_InverseBattle_Scripts_Psychic_8:
# 15 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_9
	goto MauvilleCity_InverseBattle_Scripts_Psychic_6

MauvilleCity_InverseBattle_Scripts_Psychic_9:
# 19 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_10
	goto MauvilleCity_InverseBattle_Scripts_Psychic_6

MauvilleCity_InverseBattle_Scripts_Psychic_10:
# 23 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_11
	goto MauvilleCity_InverseBattle_Scripts_Psychic_6

MauvilleCity_InverseBattle_Scripts_Psychic_11:
# 27 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	goto MauvilleCity_InverseBattle_Scripts_PsychicEnd
	goto MauvilleCity_InverseBattle_Scripts_Psychic_6

MauvilleCity_InverseBattle_Scripts_Psychic_14:
# 36 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_9
	goto MauvilleCity_InverseBattle_Scripts_Psychic_12

MauvilleCity_InverseBattle_Scripts_Psychic_15:
# 40 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_10
	goto MauvilleCity_InverseBattle_Scripts_Psychic_12

MauvilleCity_InverseBattle_Scripts_Psychic_16:
# 44 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_11
	goto MauvilleCity_InverseBattle_Scripts_Psychic_12

MauvilleCity_InverseBattle_Scripts_Psychic_17:
# 48 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	goto MauvilleCity_InverseBattle_Scripts_PsychicEnd
	goto MauvilleCity_InverseBattle_Scripts_Psychic_12


MauvilleCity_InverseBattle_Scripts_PsychicEnd::
# 66 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_PsychicEnd_Text_0
# 67 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	closemessage
# 68 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
	end


MauvilleCity_InverseBattle_Scripts_Woman1::
# 73 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	faceplayer
# 74 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	lockall
	checkitem ITEM_TM49
# 0 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_InverseBattle_Scripts_Woman1_2
# 90 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Woman1_Text_3
MauvilleCity_InverseBattle_Scripts_Woman1_1:
# 92 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	closemessage
# 93 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
	end

MauvilleCity_InverseBattle_Scripts_Woman1_2:
# 76 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Woman1_Text_0, MSGBOX_INTERRUPT
# 78 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	playse SE_PIN
# 79 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 80 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 81 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	waitmovement 0
# 82 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Woman1_Text_1
# 85 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	giveitem ITEM_TM49
# 86 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Woman1_Text_2
	goto MauvilleCity_InverseBattle_Scripts_Woman1_1


MauvilleCity_InverseBattle_Scripts_Woman2::
# 98 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	faceplayer
# 99 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	lockall
	checkitem ITEM_TM49
# 0 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_InverseBattle_Scripts_Woman2_2
# 105 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Woman2_Text_0
MauvilleCity_InverseBattle_Scripts_Woman2_1:
# 107 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	closemessage
# 108 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
	end

MauvilleCity_InverseBattle_Scripts_Woman2_2:
# 101 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Woman1_Text_2
	goto MauvilleCity_InverseBattle_Scripts_Woman2_1


MauvilleCity_InverseBattle_Scripts_Man1::
# 113 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	faceplayer
# 114 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	lockall
# 115 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Man1_Text_0
# 117 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	closemessage
# 118 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
	end


MauvilleCity_InverseBattle_Scripts_Man2::
# 123 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	faceplayer
# 124 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	lockall
	setgetobjectflags VAR_LAST_TALKED, 2, TRUE, GET_EVENT_FLAG
# 0 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_InverseBattle_Scripts_Man2_2
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, GET_EVENT_FLAG
# 0 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_InverseBattle_Scripts_Man2_3
# 156 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Man2_Text_2
# 161 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, SET_EVENT_FLAG
MauvilleCity_InverseBattle_Scripts_Man2_1:
# 163 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	closemessage
# 164 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
# 165 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	end

MauvilleCity_InverseBattle_Scripts_Man2_2:
# 131 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Man2_Text_0
	goto MauvilleCity_InverseBattle_Scripts_Man2_1

MauvilleCity_InverseBattle_Scripts_Man2_3:
# 142 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Man2_Text_1
# 146 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 2, TRUE, SET_EVENT_FLAG
	goto MauvilleCity_InverseBattle_Scripts_Man2_1


MauvilleCity_InverseBattle_Scripts_Krokorok::
# 170 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	faceplayer
# 171 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	lockall
# 172 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_NORMAL
# 173 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Krokorok_Text_0
# 174 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	waitmoncry
# 175 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
	end


MauvilleCity_InverseBattle_Scripts_Psychic_Text_0:
# 6 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡Hola, bienvenid{OA}!\p"
	.string "¡Este es el Torneo de Batallas\n"
	.string "Inversas!\p"
	.string "¿Necesitas algo?$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_1:
# 7 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Solitario$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_2:
# 7 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Con Amigos$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_3:
# 7 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¿Qué es esto?$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_4:
# 7 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Nada, disculpe$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_5:
# 10 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Ah, ¡Así que jugarás sol{OA}!\n"
	.string "Está bien, probarás suerte contra\l"
	.string "nuestros competidores.\p"
	.string "¿En qué formato te gustaría\n"
	.string "participar?$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_6:
# 12 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Simples$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_7:
# 12 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Dobles$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_8:
# 12 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "1v1$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_9:
# 15 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡Simples, perfecto!\n"
	.string "Justo estábamos esperando otr{OA}\l"
	.string "combatiente, ¡Por aquí!$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_10:
# 19 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡Dobles, perfecto!\n"
	.string "Justo estábamos esperando otr{OA}\l"
	.string "combatiente, ¡Por aquí!$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_11:
# 23 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡1v1, perfecto!\n"
	.string "Justo estábamos esperando otr{OA}\l"
	.string "combatiente, ¡Por aquí!$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_12:
# 31 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Ah, ¡Así que jugarás con amigos!\n"
	.string "Será divertido, ¡Ojalá que le ganes!\p"
	.string "¿En qué formato te gustaría\n"
	.string "participar?$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_13:
# 52 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Las Batallas Inversas son creación\n"
	.string "nuestra, de los Psíquicos. ¡He venido\l"
	.string "desde Kalos para popularizarlas!\p"
	.string "Usando mis poderes, podré invertir las\n"
	.string "ventajas y desventajas de tipo… ¡Y\l"
	.string "tranquil{OA}!\p"
	.string "¡Las inmunidades no existirán!\n"
	.string "En resumen: ¡En estas batallas, los\l"
	.string "Pokémon tipo Fuego serán débiles a\l"
	.string "ataques tipo Planta!$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_14:
# 55 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡Esperamos verte pronto!$"

MauvilleCity_InverseBattle_Scripts_PsychicEnd_Text_0:
# 66 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡No pasa nada, vuelva pronto!$"

MauvilleCity_InverseBattle_Scripts_Woman1_Text_0:
# 76 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Las recompensas por ganar en estos\n"
	.string "Torneos son bastante buenas para ser\l"
	.string "tan baratos…\p"
	.string "Mi novia dice que debe ser que a los\n"
	.string "ganadores adultos los usan-{PAUSE 15}$"

MauvilleCity_InverseBattle_Scripts_Woman1_Text_1:
# 82 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡NO DIGAS ESO EN FRENTE DE UN{A} NIÑ{OA}!\p"
	.string "……… {COLOR LIGHT_GRAY SHADOW WHITE}Justo de esta me tenía que\n"
	.string "enamorar……\p"
	.string "{COLOR LIGHT_GRAY SHADOW WHITE}Qué idiota tan linda es…{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\p"
	.string "Discúlpala, es un poco lenta a veces,\n"
	.string "pero no es mala.\p"
	.string "Ten esto para compensártelo.$"

MauvilleCity_InverseBattle_Scripts_Woman1_Text_2:
# 86 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Robo es un movimiento que te permite…\n"
	.string "Robar… Los efectos de los\l"
	.string "movimientos de Estado que use\l"
	.string "cualquier Pokémon de la batalla.\p"
	.string "¡Perfecto contra Entrenadores que\n"
	.string "amen boostearse en el primer turno!\p"
	.string "Aunque, aquí entre nos… Me gusta\n"
	.string "usarlo para robarle las Danzas Aleteo\l"
	.string "a mi novia…$"

MauvilleCity_InverseBattle_Scripts_Woman1_Text_3:
# 90 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡Disculpa lo de antes! ¡Me refería\n"
	.string "monetariamente!$"

MauvilleCity_InverseBattle_Scripts_Woman2_Text_0:
# 105 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Mi novia y yo amamos las Batallas\n"
	.string "Dobles, así que un lugar así de raro\l"
	.string "es bueno para variar un poco, ¡Y las\l"
	.string "recompensas son increíbles!$"

MauvilleCity_InverseBattle_Scripts_Man1_Text_0:
# 115 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¿¡Batallas Inversas!? ¡Qué locura!\p"
	.string "Pobres Pokémon tipo Acero, todas esas\n"
	.string "Resistencias que tiene…\p"
	.string "… Puestas en su contra… ¡Hasta da\n"
	.string "lástima!$"

MauvilleCity_InverseBattle_Scripts_Man2_Text_0:
# 131 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Arcdarn Emolgas…$"

MauvilleCity_InverseBattle_Scripts_Man2_Text_1:
# 142 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Why do I want revenge against\n"
	.string "Emolgas?\p"
	.string "Why, it's because of that Gym! It was\n"
	.string "rigged so you couldn't win with your\l"
	.string "Ground-types!$"

MauvilleCity_InverseBattle_Scripts_Man2_Text_2:
# 156 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "I came from Unova when I heard of this\n"
	.string "place!\p"
	.string "Battles where a Ground-type has the\n"
	.string "upper-hand against a Flying-type…\p"
	.string "All those Emolgas will finally get it!$"

MauvilleCity_InverseBattle_Scripts_Krokorok_Text_0:
# 173 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Krooook…$"
