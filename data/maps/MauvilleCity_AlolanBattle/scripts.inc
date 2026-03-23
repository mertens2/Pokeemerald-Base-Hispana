MauvilleCity_AlolanBattle_MapScripts::
	.byte 0


MauvilleCity_AlolanBattle_Scripts_Attendant::
# 4 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	lockall
# 5 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Attendant_Text_0
# 7 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	dynmultichoice 15, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_AlolanBattle_Scripts_Attendant_Text_1, MauvilleCity_AlolanBattle_Scripts_Attendant_Text_2, MauvilleCity_AlolanBattle_Scripts_Attendant_Text_3
# 8 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	switch VAR_RESULT
# 9 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	case 0, MauvilleCity_AlolanBattle_Scripts_Attendant_2
# 23 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	case 1, MauvilleCity_AlolanBattle_Scripts_Attendant_3
# 31 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	case 2, MauvilleCity_AlolanBattle_Scripts_Attendant_4
	return

MauvilleCity_AlolanBattle_Scripts_Attendant_2:
# 10 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Attendant_Text_4
# 14 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Attendant_Text_5
# 15 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	goto_if_unset FLAG_RECIEVED_Z_RING, MauvilleCity_AlolanBattle_Scripts_Attendant_6
MauvilleCity_AlolanBattle_Scripts_Attendant_5:
# 18 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	setvar VAR_INVERSE_BATTLE_TYPE, 1
# 19 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	random 3
# 20 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	copyvar VAR_INVERSE_BATTLE_FOE, VAR_RESULT
# 21 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	warp MAP_MAUVILLE_CITY_ALOLAN_BATTLE_LOBBY, 4, 6
	return

MauvilleCity_AlolanBattle_Scripts_Attendant_3:
# 24 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Attendant_Text_6
# 26 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Attendant_Text_7
# 27 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	closemessage
# 28 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	releaseall
# 29 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	end
	return

MauvilleCity_AlolanBattle_Scripts_Attendant_4:
# 32 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	goto MauvilleCity_AlolanBattle_Scripts_AttendantEnd
	return

MauvilleCity_AlolanBattle_Scripts_Attendant_6:
# 16 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	giveitem ITEM_Z_POWER_RING, 1
	goto MauvilleCity_AlolanBattle_Scripts_Attendant_5


MauvilleCity_AlolanBattle_Scripts_Shop::
# 38 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	lockall
# 39 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	goto_if_set FLAG_RECIEVED_Z_RING, MauvilleCity_AlolanBattle_Scripts_Shop_2
# 51 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Shop_Text_1
MauvilleCity_AlolanBattle_Scripts_Shop_1:
# 54 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	closemessage
# 55 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	releaseall
	return

MauvilleCity_AlolanBattle_Scripts_Shop_2:
# 40 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Shop_Text_0
# 45 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	tradepokemart MauvilleCity_AlolanBattle_Mart
	goto MauvilleCity_AlolanBattle_Scripts_Shop_1


# 59 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"

# 60 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.align 2
# 61 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
MauvilleCity_AlolanBattle_Mart:
# 62 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.2byte ITEM_WATERIUM_Z, ITEM_GREEN_SHARD, 20
# 63 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.2byte ITEM_GRASSIUM_Z, ITEM_GREEN_SHARD, 20
# 64 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.2byte ITEM_FIRIUM_Z, ITEM_RED_SHARD, 20
# 65 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.2byte ITEM_ELECTRIUM_Z, ITEM_YELLOW_SHARD, 20
# 66 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
    .2byte ITEM_NONE
# 67 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
    release
# 68 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
    end

MauvilleCity_AlolanBattle_Scripts_AttendantEnd::
# 73 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_AttendantEnd_Text_0
# 74 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	closemessage
# 75 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	releaseall
	end


MauvilleCity_AlolanBattle_Scripts_RockBoy::
# 80 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	lockall
# 81 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	faceplayer
# 82 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_RockBoy_Text_0
# 83 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	closemessage
# 84 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	releaseall
	end


MauvilleCity_AlolanBattle_Scripts_Rock::
# 89 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	lockall
# 90 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_Rock_Text_0
# 91 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	closemessage
# 92 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	releaseall
	end


MauvilleCity_AlolanBattle_Scripts_RockGirl::
# 97 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	lockall
# 98 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	faceplayer
# 99 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_RockBoy_Text_0
# 100 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	closemessage
# 101 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	releaseall
	end


MauvilleCity_AlolanBattle_Scripts_AliveRock::
# 106 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	lockall
# 107 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	msgbox MauvilleCity_AlolanBattle_Scripts_AliveRock_Text_0
# 108 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	closemessage
# 109 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	releaseall
	end


MauvilleCity_AlolanBattle_Scripts_Attendant_Text_0:
# 5 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "¡Hola, bienvenid{OA}!\p"
	.string "¡Este es el Torneo de Batallas de\n"
	.string "Alola!\p"
	.string "¿Necesitas algo?$"

MauvilleCity_AlolanBattle_Scripts_Attendant_Text_1:
# 7 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Jugar$"

MauvilleCity_AlolanBattle_Scripts_Attendant_Text_2:
# 7 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "¿Qué es esto?$"

MauvilleCity_AlolanBattle_Scripts_Attendant_Text_3:
# 7 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Nada, disculpe$"

MauvilleCity_AlolanBattle_Scripts_Attendant_Text_4:
# 10 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Ah, ¡Así que probarás suerte contra\n"
	.string "nuestros competidores!$"

MauvilleCity_AlolanBattle_Scripts_Attendant_Text_5:
# 14 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Justo estábamos esperando otr{OA}\n"
	.string "combatiente, ¡Ponte tu Súperpulsera\l"
	.string "Z y ven por aquí!$"

MauvilleCity_AlolanBattle_Scripts_Attendant_Text_6:
# 24 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "En las Batallas de Alola, ¡Recibirás una\n"
	.string "Súperpulsera Z temporal, y Cristales Z\l"
	.string "con cada victoria!\p"
	.string "¡Si ganas 5 veces seguidas, podrás\n"
	.string "quedarte la Súperpulsera Z para usar\l"
	.string "cuando quieras!$"

MauvilleCity_AlolanBattle_Scripts_Attendant_Text_7:
# 26 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "¡Esperamos verte pronto!$"

MauvilleCity_AlolanBattle_Scripts_Shop_Text_0:
# 40 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "¡Oh, tienes una Súperpulsera Z!\n"
	.string "¡Bienvenid{OA} a la Tienda de Cristales,\l"
	.string "entonces!\p"
	.string "¿Qué necesitabas?$"

MauvilleCity_AlolanBattle_Scripts_Shop_Text_1:
# 51 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "¡Vuelve cuando tengas una Súperpulsera\n"
	.string "Z!\p"
	.string "¡Podré venderte algo genial!$"

MauvilleCity_AlolanBattle_Scripts_AttendantEnd_Text_0:
# 73 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "¡No pasa nada, vuelva pronto!$"

MauvilleCity_AlolanBattle_Scripts_RockBoy_Text_0:
# 82 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Estoy sacando a mi roca mascota de\n"
	.string "paseo.$"

MauvilleCity_AlolanBattle_Scripts_Rock_Text_0:
# 90 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Es una roca inerte.$"

MauvilleCity_AlolanBattle_Scripts_AliveRock_Text_0:
# 107 "data/maps/MauvilleCity_AlolanBattle/scripts.pory"
	.string "Es una roca viva.$"
