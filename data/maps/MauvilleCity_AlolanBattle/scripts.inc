MauvilleCity_AlolanBattle_MapScripts::
	.byte 0


MauvilleCity_AlolanBattle_Scripts_Psychic::
# 4 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	lockall
# 5 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Psychic_Text_0
# 7 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_AlolanBattle_Scripts_Psychic_Text_1, MauvilleCity_AlolanBattle_Scripts_Psychic_Text_2, MauvilleCity_AlolanBattle_Scripts_Psychic_Text_3
# 8 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	switch VAR_RESULT
# 9 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	case 0, MauvilleCity_AlolanBattle_Scripts_Psychic_2
# 23 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	case 1, MauvilleCity_AlolanBattle_Scripts_Psychic_3
# 31 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	case 2, MauvilleCity_AlolanBattle_Scripts_Psychic_4
	return

MauvilleCity_AlolanBattle_Scripts_Psychic_2:
# 10 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Psychic_Text_4
# 14 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Psychic_Text_5
# 15 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	goto_if_unset FLAG_RECIEVED_Z_RING, MauvilleCity_AlolanBattle_Scripts_Psychic_6
MauvilleCity_AlolanBattle_Scripts_Psychic_5:
# 18 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	setvar VAR_INVERSE_BATTLE_TYPE, 1
# 19 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	random 3
# 20 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	copyvar VAR_INVERSE_BATTLE_FOE, VAR_RESULT
# 21 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	warp MAP_MAUVILLE_CITY_ALOLAN_BATTLE_LOBBY, 4, 6
	return

MauvilleCity_AlolanBattle_Scripts_Psychic_3:
# 24 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Psychic_Text_6
# 26 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Psychic_Text_7
# 27 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	closemessage
# 28 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	releaseall
# 29 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	end
	return

MauvilleCity_AlolanBattle_Scripts_Psychic_4:
# 32 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	goto MauvilleCity_AlolanBattle_Scripts_PsychicEnd
	return

MauvilleCity_AlolanBattle_Scripts_Psychic_6:
# 16 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	giveitem ITEM_Z_POWER_RING, 1
	goto MauvilleCity_AlolanBattle_Scripts_Psychic_5


MauvilleCity_AlolanBattle_Scripts_PsychicEnd::
# 38 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_PsychicEnd_Text_0
# 39 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	closemessage
# 40 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	releaseall
	end


MauvilleCity_AlolanBattle_Scripts_RockBoy::
# 45 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	lockall
# 46 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	faceplayer
# 47 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_RockBoy_Text_0
# 48 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	closemessage
# 49 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	releaseall
	end


MauvilleCity_AlolanBattle_Scripts_Rock::
# 54 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	lockall
# 55 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Rock_Text_0
# 56 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	closemessage
# 57 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	releaseall
	end


MauvilleCity_AlolanBattle_Scripts_RockGirl::
# 62 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	lockall
# 63 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	faceplayer
# 64 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_RockBoy_Text_0
# 65 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	closemessage
# 66 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	releaseall
	end


MauvilleCity_AlolanBattle_Scripts_AliveRock::
# 71 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	lockall
# 72 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_AliveRock_Text_0
# 73 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	closemessage
# 74 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	releaseall
	end


MauvilleCity_AlolanBattle_Scripts_Psychic_Text_0:
# 5 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "¡Hola, bienvenid{OA}!\p"
	.string "¡Este es el Torneo de Batallas de\n"
	.string "Alola!\p"
	.string "¿Necesitas algo?$"

MauvilleCity_AlolanBattle_Scripts_Psychic_Text_1:
# 7 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Jugar$"

MauvilleCity_AlolanBattle_Scripts_Psychic_Text_2:
# 7 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "¿Qué es esto?$"

MauvilleCity_AlolanBattle_Scripts_Psychic_Text_3:
# 7 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Nada, disculpe$"

MauvilleCity_AlolanBattle_Scripts_Psychic_Text_4:
# 10 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Ah, ¡Así que probarás suerte contra\n"
	.string "nuestros competidores!$"

MauvilleCity_AlolanBattle_Scripts_Psychic_Text_5:
# 14 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Justo estábamos esperando otr{OA}\n"
	.string "combatiente, ¡Ponte tu Súperpulsera\l"
	.string "Z y ven por aquí!$"

MauvilleCity_AlolanBattle_Scripts_Psychic_Text_6:
# 24 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "En las Batallas de Alola, ¡Recibirás una\n"
	.string "Súperpulsera Z temporal, y Cristales Z\l"
	.string "con cada victoria!\p"
	.string "¡Si ganas 5 veces seguidas, podrás\n"
	.string "quedarte la Súperpulsera Z para usar\l"
	.string "cuando quieras!$"

MauvilleCity_AlolanBattle_Scripts_Psychic_Text_7:
# 26 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "¡Esperamos verte pronto!$"

MauvilleCity_AlolanBattle_Scripts_PsychicEnd_Text_0:
# 38 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "¡No pasa nada, vuelva pronto!$"

MauvilleCity_AlolanBattle_Scripts_RockBoy_Text_0:
# 47 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Estoy sacando a mi roca mascota de\n"
	.string "paseo.$"

MauvilleCity_AlolanBattle_Scripts_Rock_Text_0:
# 55 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Es una roca inerte.$"

MauvilleCity_AlolanBattle_Scripts_AliveRock_Text_0:
# 72 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Es una roca viva.$"
