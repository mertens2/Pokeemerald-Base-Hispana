# 1 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
.set LOCALID_STAIR_GUARD, 2
# 3 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_MapScripts::
# 5 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.byte 0
# 7 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 8 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_OnTransition:
# 9 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	call_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_BlockStairs
# 10 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 11 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 12 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_BlockStairs::
# 13 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectxyperm LOCALID_STAIR_GUARD, 14, 2
# 14 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectmovementtype LOCALID_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	return
# 16 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 17 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee::
# 18 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 19 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 20 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
# 21 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
# 22 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
# 23 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 24 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 25 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 26 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright::
# 27 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
# 28 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 29 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 30 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 31 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered::
# 32 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 34 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 35 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 36 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard::
# 37 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 38 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 39 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
# 40 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 41 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 42 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
# 43 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 44 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 45 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 46 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome::
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
# 48 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 49 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 50 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 51 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GotRobbed::
# 52 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 55 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 56 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter::
# 57 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 58 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 59 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
# 60 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 61 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 62 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 64 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 65 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 66 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
# 67 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 68 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 69 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 70 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 71 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed::
# 72 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
# 73 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 74 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 75 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 76 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
# 77 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
# 78 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 79 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 80 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
# 81 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
# 82 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 83 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 84 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp:
# 85 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "¡Bienvenid{0A} a Devon!$"
# 86 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 87 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_StaffGotRobbed:
# 88 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Uno de nuestros miembros dejo que\n"
# 89 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "un estúpido le robara estúpidamente.$"
# 90 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 91 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct:
# 92 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "¡Ey, ese Sistema de\n"
# 93 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Almacenamiento portátil!\n"
# 94 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "¡Es nuestra última invención!\p"
# 95 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Me enorgullece ver que lo usen.$"
# 96 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 97 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright:
# 98 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Las {COLOR BLUE}Partes robadas{COLOR DARK_GRAY}…\p"
# 99 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Son importantes, pero no son algo\n"
# 100 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "que cualquiera pueda usar.\p"
# 101 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "O bien el ladrón es idiota,\n"
# 102 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "o hay algo que no sepamos sobre él.$"
# 103 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 104 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered:
# 105 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Las Partes fueron recuperadas.$"
# 106 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 107 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter:
# 108 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Sólo personal autorizado. Vete.$"
# 109 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 110 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed:
# 111 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Ese estúpido debería ser despedido.$"
# 112 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 113 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere:
# 114 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "¡Bienvenid{OA}!$"
# 115 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 116 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay:
# 117 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Unas placas metálicas que detallan\n"
# 118 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "la historia de la compañía.\p"
# 119 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Al principio, Devon era una compañía\n"
# 120 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "de extracción de rocas preciosas,\l"
# 121 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "siguiendo a eso, se convirtió en una\l"
# 122 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "productora de aleaciones de metal.”\p"
# 123 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Poco a poco, el negocio se fue\n"
# 124 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "expandiendo dando lugar a la productora\l"
# 125 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "de tecnología líden en Hoenn\l"
# 126 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "que es hoy en día.”$"
# 127 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 128 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ProductDisplay:
# 129 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Unas placas metálicas que detallan\n"
# 130 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "la historia de la compañía.\p"
# 131 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Además de proveer tecnología de\l"
# 132 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "primera categoría, Devon también posee\n"
# 133 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "monopolio de farmacéutica y arquitectura\l"
# 134 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "en Hoenn, teniendo así el poder de\l"
# 135 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "crear cualquier proyecto imaginable.”$"
