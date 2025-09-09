# 1 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_MapScripts::
# 3 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
# 4 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.byte 0
# 5 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 6 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_OnTransition:
# 7 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	call_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_BlockStairs
# 8 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 9 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 10 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_BlockStairs::
# 11 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_CORP_STAIR_GUARD, 14, 2
# 12 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_CORP_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
# 13 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	return
# 14 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 15 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee::
# 16 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 17 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 18 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
# 19 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
# 20 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
# 21 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 22 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 23 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 24 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright::
# 25 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
# 26 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 27 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 28 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 29 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered::
# 30 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
# 31 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 32 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 34 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard::
# 35 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 36 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 37 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
# 38 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 39 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 40 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 42 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 43 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 44 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome::
# 45 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
# 46 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 48 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 49 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GotRobbed::
# 50 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
# 51 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 52 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 53 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter::
# 55 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 56 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 57 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
# 58 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 59 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 60 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 61 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 62 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 63 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 64 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
# 65 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 66 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 67 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 68 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 69 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed::
# 70 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
# 71 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 72 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 73 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 74 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
# 75 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
# 76 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 77 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 78 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
# 79 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
# 80 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 81 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 82 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp:
# 83 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Buenos días. Estás en DEVON S.A.\p"
# 84 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Somos los orgullosos fabricantes\n"
# 85 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "de miles de objetos y medicinas\l"
# 86 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "que hacen la vida más fácil.$"
# 87 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 88 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_StaffGotRobbed:
# 89 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Uno de nuestros científicos se ha\n"
# 90 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "dejado robar un paquete de lo más\l"
# 91 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "importante.$"
# 92 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 93 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct:
# 94 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Eh, esas DEPORTIVAS las hemos\n"
# 95 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "fabricado nosotros.\p"
# 96 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "¡Siempre es un placer ver a uno\n"
# 97 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "de nuestros clientes!$"
# 98 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 99 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright:
# 100 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Ese paquete que han robado…\p"
# 101 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "es muy importante, cierto, pero no es\n"
# 102 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "algo que pueda usar cualquiera.\p"
# 103 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "En mi opinión, ese ladrón no era\n"
# 104 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "muy listo que digamos…$"
# 105 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 106 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered:
# 107 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Parece que alguien ha recuperado\n"
# 108 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "las PIEZAS DEVON que robaron.$"
# 109 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 110 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter:
# 111 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Lo siento, sólo el personal autorizado\n"
# 112 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "puede entrar aquí.$"
# 113 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 114 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed:
# 115 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "¿Cómo hemos podido ser tan tontos…?\n"
# 116 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "¡¿Cómo nos hemos dejado robar?!$"
# 117 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 118 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere:
# 119 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "¡Anda, hola!\n"
# 120 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "¡Tenerte aquí es siempre un placer!$"
# 121 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 122 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay:
# 123 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "En la urna de cristal se exponen\n"
# 124 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "muestras de rocas y metales.\p"
# 125 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hay un cartel con algo escrito…\p"
# 126 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“DEVON S.A. se dedicaba en sus\n"
# 127 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "inicios a extraer rocas de canteras.”\p"
# 128 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“También producía hierro a partir de\n"
# 129 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "las limaduras que había en la arena.”\p"
# 130 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“A pesar de tan humildes orígenes,\n"
# 131 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "DEVON logró crecer como empresa.”\p"
# 132 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“DEVON fabrica en la actualidad una\n"
# 133 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "amplia gama de productos industriales.”$"
# 134 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 135 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ProductDisplay:
# 136 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "En la urna de cristal se exponen\n"
# 137 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "prototipos y productos de prueba.\p"
# 138 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hay un cartel con algo escrito…\p"
# 139 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Además de productos industriales,\n"
# 140 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "DEVON comercializa artículos varios\l"
# 141 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "e incluso productos farmacéuticos.”\p"
# 142 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Desde hace poco, DEVON también vende\n"
# 143 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "artículos para ENTRENADORES POKéMON,\l"
# 144 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "como POKé BALLS y POKéNAVEGADORES.”$"
