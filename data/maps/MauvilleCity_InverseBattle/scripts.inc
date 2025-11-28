MauvilleCity_InverseBattle_MapScripts::
	.byte 0


MauvilleCity_InverseBattle_Scripts_Psychic::
# 5 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	lockall
# 6 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_0
# 8 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_InverseBattle_Scripts_Psychic_Text_1, MauvilleCity_InverseBattle_Scripts_Psychic_Text_2, MauvilleCity_InverseBattle_Scripts_Psychic_Text_3
# 9 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Scripts_Psychic_2
# 67 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Scripts_Psychic_3
# 75 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Scripts_Psychic_4
	return

MauvilleCity_InverseBattle_Scripts_Psychic_2:
# 11 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_4
# 13 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_InverseBattle_Scripts_Psychic_Text_5, MauvilleCity_InverseBattle_Scripts_Psychic_Text_6, MauvilleCity_InverseBattle_Scripts_Psychic_Text_7, MauvilleCity_InverseBattle_Scripts_Psychic_Text_3
# 14 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 0, MauvilleCity_InverseBattle_Scripts_Psychic_7
# 24 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 1, MauvilleCity_InverseBattle_Scripts_Psychic_8
# 33 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 2, MauvilleCity_InverseBattle_Scripts_Psychic_9
# 42 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	case 3, MauvilleCity_InverseBattle_Scripts_Psychic_10
MauvilleCity_InverseBattle_Scripts_Psychic_5:
	return

MauvilleCity_InverseBattle_Scripts_Psychic_3:
# 68 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_11
# 71 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_12
# 72 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
# 73 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	end
	return

MauvilleCity_InverseBattle_Scripts_Psychic_4:
# 76 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	goto MauvilleCity_InverseBattle_Scripts_PsychicEnd
	return

MauvilleCity_InverseBattle_Scripts_Psychic_7:
# 16 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_8
# 17 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	setflag B_FLAG_INVERSE_BATTLE
# 18 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	setvar VAR_INVERSE_BATTLE_TYPE, 1
# 19 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	random 6
# 20 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	copyvar VAR_INVERSE_BATTLE_FOE, VAR_RESULT
# 21 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	warp MAP_MAUVILLE_CITY_INVERSE_BATTLE_LOBBY, 4, 6
	goto MauvilleCity_InverseBattle_Scripts_Psychic_5

MauvilleCity_InverseBattle_Scripts_Psychic_8:
# 25 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_9
# 26 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	setflag B_FLAG_INVERSE_BATTLE
# 27 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	setvar VAR_INVERSE_BATTLE_TYPE, 2
# 28 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	random 6
# 29 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	copyvar VAR_INVERSE_BATTLE_FOE, VAR_RESULT
# 30 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	warp MAP_MAUVILLE_CITY_INVERSE_BATTLE_LOBBY, 4, 6
	goto MauvilleCity_InverseBattle_Scripts_Psychic_5

MauvilleCity_InverseBattle_Scripts_Psychic_9:
# 34 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Psychic_Text_10
# 35 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	setflag B_FLAG_INVERSE_BATTLE
# 36 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	setvar VAR_INVERSE_BATTLE_TYPE, 3
# 37 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	random 6
# 38 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	copyvar VAR_INVERSE_BATTLE_FOE, VAR_RESULT
# 39 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	warp MAP_MAUVILLE_CITY_INVERSE_BATTLE_LOBBY, 4, 6
	goto MauvilleCity_InverseBattle_Scripts_Psychic_5

MauvilleCity_InverseBattle_Scripts_Psychic_10:
# 43 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	goto MauvilleCity_InverseBattle_Scripts_PsychicEnd
	goto MauvilleCity_InverseBattle_Scripts_Psychic_5


MauvilleCity_InverseBattle_Scripts_PsychicEnd::
# 82 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_PsychicEnd_Text_0
# 83 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	closemessage
# 84 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
	end


MauvilleCity_InverseBattle_Scripts_Woman1::
# 89 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	faceplayer
# 90 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	lockall
	checkitem ITEM_TM49
# 0 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_InverseBattle_Scripts_Woman1_2
# 106 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Woman1_Text_3
MauvilleCity_InverseBattle_Scripts_Woman1_1:
# 108 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	closemessage
# 109 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
	end

MauvilleCity_InverseBattle_Scripts_Woman1_2:
# 92 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Woman1_Text_0, MSGBOX_INTERRUPT
# 94 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	playse SE_PIN
# 95 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 96 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 97 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	waitmovement 0
# 98 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Woman1_Text_1
# 101 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	giveitem ITEM_TM49
# 102 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Woman1_Text_2
	goto MauvilleCity_InverseBattle_Scripts_Woman1_1


MauvilleCity_InverseBattle_Scripts_Woman2::
# 114 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	faceplayer
# 115 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	lockall
	checkitem ITEM_TM49
# 0 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_InverseBattle_Scripts_Woman2_2
# 121 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Woman2_Text_0
MauvilleCity_InverseBattle_Scripts_Woman2_1:
# 123 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	closemessage
# 124 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
	end

MauvilleCity_InverseBattle_Scripts_Woman2_2:
# 117 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Woman1_Text_2
	goto MauvilleCity_InverseBattle_Scripts_Woman2_1


MauvilleCity_InverseBattle_Scripts_Man1::
# 129 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	faceplayer
# 130 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	lockall
# 131 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Man1_Text_0
# 133 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	closemessage
# 134 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
	end


MauvilleCity_InverseBattle_Scripts_Man2::
# 139 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	faceplayer
# 140 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	lockall
	setgetobjectflags VAR_LAST_TALKED, 2, TRUE, GET_EVENT_FLAG
# 0 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_InverseBattle_Scripts_Man2_2
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, GET_EVENT_FLAG
# 0 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MauvilleCity_InverseBattle_Scripts_Man2_3
# 167 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Man2_Text_2
# 177 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 1, TRUE, SET_EVENT_FLAG
MauvilleCity_InverseBattle_Scripts_Man2_1:
# 179 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	closemessage
# 180 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
# 181 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	end

MauvilleCity_InverseBattle_Scripts_Man2_2:
# 144 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Man2_Text_0
	goto MauvilleCity_InverseBattle_Scripts_Man2_1

MauvilleCity_InverseBattle_Scripts_Man2_3:
# 154 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Man2_Text_1
# 162 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	setgetobjectflags VAR_LAST_TALKED, 2, TRUE, SET_EVENT_FLAG
	goto MauvilleCity_InverseBattle_Scripts_Man2_1


MauvilleCity_InverseBattle_Scripts_Krokorok::
# 186 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	faceplayer
# 187 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	lockall
# 188 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_NORMAL
# 189 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	msgbox MauvilleCity_InverseBattle_Scripts_Krokorok_Text_0
# 190 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	waitmoncry
# 191 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	releaseall
	end


MauvilleCity_InverseBattle_Scripts_Psychic_Text_0:
# 6 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡Hola, bienvenid{OA}!\p"
	.string "¡Este es el Torneo de Batallas\n"
	.string "Inversas!\p"
	.string "¿Necesitas algo?$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_1:
# 8 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Jugar$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_2:
# 8 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¿Qué es esto?$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_3:
# 8 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Nada, disculpe$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_4:
# 11 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Ah, ¡Así que probarás suerte contra\n"
	.string "nuestros competidores!\p"
	.string "¿En qué formato te gustaría\n"
	.string "participar?$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_5:
# 13 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Simples$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_6:
# 13 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Dobles$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_7:
# 13 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "1v1$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_8:
# 16 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡Simples, perfecto!\n"
	.string "Justo estábamos esperando otr{OA}\l"
	.string "combatiente, ¡Por aquí!$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_9:
# 25 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡Dobles, perfecto!\n"
	.string "Justo estábamos esperando otr{OA}\l"
	.string "combatiente, ¡Por aquí!$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_10:
# 34 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡1v1, perfecto!\n"
	.string "Justo estábamos esperando otr{OA}\l"
	.string "combatiente, ¡Por aquí!$"

MauvilleCity_InverseBattle_Scripts_Psychic_Text_11:
# 68 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
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

MauvilleCity_InverseBattle_Scripts_Psychic_Text_12:
# 71 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡Esperamos verte pronto!$"

MauvilleCity_InverseBattle_Scripts_PsychicEnd_Text_0:
# 82 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡No pasa nada, vuelva pronto!$"

MauvilleCity_InverseBattle_Scripts_Woman1_Text_0:
# 92 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Las recompensas por ganar en estos\n"
	.string "Torneos son bastante buenas para ser\l"
	.string "tan baratos…\p"
	.string "Mi novia dice que debe ser que a los\n"
	.string "ganadores adultos los usan-{PAUSE 15}$"

MauvilleCity_InverseBattle_Scripts_Woman1_Text_1:
# 98 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡NO DIGAS ESO EN FRENTE DE UN{A} NIÑ{OA}!\p"
	.string "……… {COLOR LIGHT_GRAY SHADOW WHITE}Justo de esta me tenía que\n"
	.string "enamorar……\p"
	.string "{COLOR LIGHT_GRAY SHADOW WHITE}Qué idiota tan linda es…{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\p"
	.string "Discúlpala, es un poco lenta a veces,\n"
	.string "pero no es mala.\p"
	.string "Ten esto para compensártelo.$"

MauvilleCity_InverseBattle_Scripts_Woman1_Text_2:
# 102 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
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
# 106 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡Disculpa lo de antes! ¡Me refería\n"
	.string "monetariamente!$"

MauvilleCity_InverseBattle_Scripts_Woman2_Text_0:
# 121 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Mi novia y yo amamos las Batallas\n"
	.string "Dobles, así que un lugar así de raro\l"
	.string "es bueno para variar un poco, ¡Y las\l"
	.string "recompensas son increíbles!$"

MauvilleCity_InverseBattle_Scripts_Man1_Text_0:
# 131 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¿¡Batallas Inversas!? ¡Qué locura!\p"
	.string "Pobres Pokémon tipo Acero, todas esas\n"
	.string "Resistencias que tiene…\p"
	.string "… Puestas en su contra… ¡Hasta da\n"
	.string "lástima!$"

MauvilleCity_InverseBattle_Scripts_Man2_Text_0:
# 144 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Malditos Emolgas…$"

MauvilleCity_InverseBattle_Scripts_Man2_Text_1:
# 154 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¿Que por qué quiero vengarme de los\n"
	.string "Emolgas?\p"
	.string "¡Porque es difícil derrotarlos con un\n"
	.string "tipo Tierra! ¡Ese Gimnasio estaba\l"
	.string "arreglado!$"

MauvilleCity_InverseBattle_Scripts_Man2_Text_2:
# 167 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "¡Vine desde Unova junto a mi Krokorok\n"
	.string "cuando me enteré de este lugar!\p"
	.string "Batallas donde un tipo Tierra tiene\n"
	.string "ventaja contra un tipo Volador…\p"
	.string "¡Al fin me vengaré de los Emolgas!$"

MauvilleCity_InverseBattle_Scripts_Krokorok_Text_0:
# 189 "data/maps/MauvilleCity_InverseBattle/scripts.pory"
	.string "Krooook…$"
