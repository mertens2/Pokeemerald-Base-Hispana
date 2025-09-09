# 1 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Dan::
# 6 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat, AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterDan
# 7 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_DanRematch
# 9 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_DEFAULT
# 10 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 11 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 12 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 13 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterDan::
# 14 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT  @ Kira speaks for both when registering KiraAndDan
# 15 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 16 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 17 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 18 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 19 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_DanRematch::
# 20 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
# 21 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
# 22 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 23 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 24 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Kira::
# 25 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraIntro, AbandonedShip_Rooms2_1F_Text_KiraDefeat, AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterKira
# 26 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 27 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_KiraRematch
# 28 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_DEFAULT
# 29 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 30 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 31 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 32 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterKira::
# 33 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
# 34 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 35 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 36 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 37 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 38 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_KiraRematch::
# 39 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
# 40 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
# 41 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 42 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 43 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Jani::
# 44 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
# 45 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 47 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 48 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Garrison::
# 49 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_GarrisonIntro, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
# 50 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 52 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 53 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanIntro:
# 54 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "FITO: ¡Estábamos buscando tesoros\n"
# 55 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "y nos encontramos con un combate!$"
# 56 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 57 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanDefeat:
# 58 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "FITO: A pesar de luchar a dúo,\n"
# 59 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "hemos perdido…$"
# 60 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 61 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostBattle:
# 62 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "FITO: No encontramos ni una baratija…\n"
# 63 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "¿Se habrá llevado ya alguien el tesoro?$"
# 64 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 65 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons:
# 66 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "FITO: Pero si no tienes dos POKéMON…\n"
# 67 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Así no ganas ni en sueños…$"
# 68 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 69 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraIntro:
# 70 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LUCI: ¡Anda! Buscábamos tesoros\n"
# 71 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "y nos encontramos con un combate…$"
# 72 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 73 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraDefeat:
# 74 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LUCI: ¡Guau, qué fuerte eres!$"
# 75 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 76 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostBattle:
# 77 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LUCI: Me pregunto dónde habrán\n"
# 78 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "escondido el tesoro…\p"
# 79 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "¡Si lo encuentro, ya sé en qué\n"
# 80 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "me lo voy a gastar!$"
# 81 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 82 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons:
# 83 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LUCI: ¿No tienes dos POKéMON?\n"
# 84 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "¡Pues lo dejamos para otro día!$"
# 85 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 86 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRegister:
# 87 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LUCI: ¡Ay, me pones de los nervios!\n"
# 88 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "¡Por eso mismo te voy a registrar!$"
# 89 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 90 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchIntro:
# 91 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "FITO: Todavía estamos buscando\n"
# 92 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "tesoros por aquí.\p"
# 93 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Entretanto, nuestros POKéMON\n"
# 94 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "han mejorado. ¿Quieres verlo?$"
# 95 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 96 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchDefeat:
# 97 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "FITO: Nada, sigues siendo tan fuerte\n"
# 98 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "como siempre.$"
# 99 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 100 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostRematch:
# 101 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "FITO: No encontramos ningún tesoro,\n"
# 102 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "perdemos en los combates POKéMON…\p"
# 103 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Yo me voy a casa… Bueno, quiero irme,\n"
# 104 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "pero no creo que ella me deje…$"
# 105 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 106 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons:
# 107 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "FITO: Pero si no tienes dos POKéMON…\n"
# 108 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Así no ganas ni en sueños…$"
# 109 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 110 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchIntro:
# 111 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LUCI: ¡Hola de nuevo!\p"
# 112 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ya se ve que tú tampoco has dejado\n"
# 113 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "de buscar el tesoro.\p"
# 114 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "¿Qué te parece si luchamos\n"
# 115 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "y quien pierda deja de buscar?$"
# 116 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 117 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat:
# 118 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LUCI: Oh, perdimos otra vez…$"
# 119 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 120 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostRematch:
# 121 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LUCI: Entrenaremos mejor a nuestros\n"
# 122 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "POKéMON.\p"
# 123 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "¡Pero no nos iremos hasta\n"
# 124 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "encontrar algún tesoro!$"
# 125 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 126 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons:
# 127 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "LUCI: ¿No tienes dos POKéMON?\n"
# 128 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "¡Pues lo dejamos para otro día!$"
# 129 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 130 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniIntro:
# 131 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "No se me da bien nadar,\n"
# 132 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "¡pero luchar es otra cosa!$"
# 133 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 134 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniDefeat:
# 135 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ay, ay, ay…\n"
# 136 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Esto no ha salido bien…$"
# 137 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 138 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniPostBattle:
# 139 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Andar descalza por este barco\n"
# 140 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "no es muy higiénico.$"
# 141 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 142 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonIntro:
# 143 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Fuerza y compasión…\n"
# 144 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "¡Todo ENTRENADOR debe poseer ambas!$"
# 145 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 146 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonDefeat:
# 147 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Hay algo en ti que deslumbra.$"
# 148 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 149 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle:
# 150 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Por cierto, he visto algo que\n"
# 151 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "brillaba en uno de los camarotes.$"
