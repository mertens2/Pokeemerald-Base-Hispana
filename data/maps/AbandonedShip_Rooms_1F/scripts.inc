# 1 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Gentleman::
# 6 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_TakingALookAround, MSGBOX_NPC
# 7 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 8 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 9 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Demetrius::
# 10 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_DEMETRIUS, AbandonedShip_Rooms_1F_Text_DemetriusIntro, AbandonedShip_Rooms_1F_Text_DemetriusDefeat
# 11 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_DemetriusPostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 13 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 14 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Thalia::
# 15 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaIntro, AbandonedShip_Rooms_1F_Text_ThaliaDefeat, AbandonedShip_Rooms_1F_EventScript_RegisterThalia
# 16 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 17 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms_1F_EventScript_ThaliaRematch
# 18 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostBattle, MSGBOX_DEFAULT
# 19 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 20 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 21 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 22 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_RegisterThalia::
# 23 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 24 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaRegister, MSGBOX_DEFAULT
# 26 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	register_matchcall TRAINER_THALIA_1
# 27 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 28 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 29 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 30 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_ThaliaRematch::
# 31 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_rematch TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro, AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat
# 32 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostRematch, MSGBOX_AUTOCLOSE
# 33 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 34 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 35 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_TakingALookAround:
# 36 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Los barcos de este tipo son poco\n"
# 37 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "comunes, así que estoy de inspección.\p"
# 38 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Mmmm…\n"
# 39 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Parece que hay muchos camarotes…$"
# 40 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 41 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaIntro:
# 42 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "¿Qué ha podido impulsarte a venir\n"
# 43 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "hasta aquí? ¡Será la curiosidad!$"
# 44 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 45 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaDefeat:
# 46 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "La fuerza es otra de tus cualidades…$"
# 47 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 48 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaPostBattle:
# 49 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "¿Ves al hombre de ahí al lado?\p"
# 50 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Dice que está de turismo,\n"
# 51 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "pero yo no me lo creo.$"
# 52 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 53 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRegister:
# 54 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "¡Tú sí que sabes entrenar POKéMON!\n"
# 55 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "¡Será un honor registrarte!$"
# 56 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 57 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro:
# 58 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "¿Qué ha podido impulsarte a venir\n"
# 59 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "hasta aquí? ¡Será la curiosidad!$"
# 60 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 61 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat:
# 62 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "No es normal ser tan fuerte.$"
# 63 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 64 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaPostRematch:
# 65 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "¡Ese picaruelo no es trigo limpio!\n"
# 66 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "¡Actúa de forma muy sospechosa!$"
# 67 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 68 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusIntro:
# 69 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "¡Aaaah!\n"
# 70 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "¡Me han encontrado! Pero ¿eh?$"
# 71 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 72 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusDefeat:
# 73 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "¡Tú no eres mi madre!$"
# 74 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 75 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusPostBattle:
# 76 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Mi madre se ha enfadado, así que me\n"
# 77 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "he escondido. No digas que estoy aquí.$"
