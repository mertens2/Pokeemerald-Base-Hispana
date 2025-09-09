# 1 "data/maps/MtPyre_3F/scripts.pory"

# 2 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_MapScripts::
# 3 "data/maps/MtPyre_3F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_3F/scripts.pory"

# 5 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_William::
# 6 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_WILLIAM, MtPyre_3F_Text_WilliamIntro, MtPyre_3F_Text_WilliamDefeat
# 7 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/MtPyre_3F/scripts.pory"
	end
# 9 "data/maps/MtPyre_3F/scripts.pory"

# 10 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Kayla::
# 11 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_KaylaIntro, MtPyre_3F_Text_KaylaDefeat
# 12 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/MtPyre_3F/scripts.pory"
	end
# 14 "data/maps/MtPyre_3F/scripts.pory"

# 15 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Gabrielle::
# 16 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleIntro, MtPyre_3F_Text_GabrielleDefeat, MtPyre_3F_EventScript_RegisterGabrielle
# 17 "data/maps/MtPyre_3F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 18 "data/maps/MtPyre_3F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtPyre_3F_EventScript_RematchGabrielle
# 19 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabriellePostBattle, MSGBOX_DEFAULT
# 20 "data/maps/MtPyre_3F/scripts.pory"
	release
# 21 "data/maps/MtPyre_3F/scripts.pory"
	end
# 22 "data/maps/MtPyre_3F/scripts.pory"

# 23 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_RegisterGabrielle::
# 24 "data/maps/MtPyre_3F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 25 "data/maps/MtPyre_3F/scripts.pory"
	waitmovement 0
# 26 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabrielleRegister, MSGBOX_DEFAULT
# 27 "data/maps/MtPyre_3F/scripts.pory"
	register_matchcall TRAINER_GABRIELLE_1
# 28 "data/maps/MtPyre_3F/scripts.pory"
	release
# 29 "data/maps/MtPyre_3F/scripts.pory"
	end
# 30 "data/maps/MtPyre_3F/scripts.pory"

# 31 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_RematchGabrielle::
# 32 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_rematch TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleRematchIntro, MtPyre_3F_Text_GabrielleRematchDefeat
# 33 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabriellePostRematch, MSGBOX_AUTOCLOSE
# 34 "data/maps/MtPyre_3F/scripts.pory"
	end
# 35 "data/maps/MtPyre_3F/scripts.pory"

# 36 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamIntro:
# 37 "data/maps/MtPyre_3F/scripts.pory"
	.string "¡El fresco aire de la montaña\n"
# 38 "data/maps/MtPyre_3F/scripts.pory"
	.string "ha potenciado mis poderes psíquicos!\p"
# 39 "data/maps/MtPyre_3F/scripts.pory"
	.string "Alguien tan pequeño como tú…\n"
# 40 "data/maps/MtPyre_3F/scripts.pory"
	.string "No tienes ni medio movimiento…$"
# 41 "data/maps/MtPyre_3F/scripts.pory"

# 42 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamDefeat:
# 43 "data/maps/MtPyre_3F/scripts.pory"
	.string "Qué vergüenza más grande…$"
# 44 "data/maps/MtPyre_3F/scripts.pory"

# 45 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamPostBattle:
# 46 "data/maps/MtPyre_3F/scripts.pory"
	.string "Quizás todavía pueda potenciar\n"
# 47 "data/maps/MtPyre_3F/scripts.pory"
	.string "mis poderes psíquicos una pizquita…$"
# 48 "data/maps/MtPyre_3F/scripts.pory"

# 49 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaIntro:
# 50 "data/maps/MtPyre_3F/scripts.pory"
	.string "¡Ja, ja, ja, ja!\p"
# 51 "data/maps/MtPyre_3F/scripts.pory"
	.string "Éste no es lugar para críos…\n"
# 52 "data/maps/MtPyre_3F/scripts.pory"
	.string "¡y menos aún para ti!$"
# 53 "data/maps/MtPyre_3F/scripts.pory"

# 54 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaDefeat:
# 55 "data/maps/MtPyre_3F/scripts.pory"
	.string "Es evidente que he perdido…$"
# 56 "data/maps/MtPyre_3F/scripts.pory"

# 57 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaPostBattle:
# 58 "data/maps/MtPyre_3F/scripts.pory"
	.string "Está claro que tengo que entrenarme\n"
# 59 "data/maps/MtPyre_3F/scripts.pory"
	.string "mucho más…\p"
# 60 "data/maps/MtPyre_3F/scripts.pory"
	.string "No debo flaquear si quiero alcanzar\n"
# 61 "data/maps/MtPyre_3F/scripts.pory"
	.string "la cima.\p"
# 62 "data/maps/MtPyre_3F/scripts.pory"
	.string "¡Yo puedo!$"
# 63 "data/maps/MtPyre_3F/scripts.pory"

# 64 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleIntro:
# 65 "data/maps/MtPyre_3F/scripts.pory"
	.string "¿Por qué has venido hasta aquí?$"
# 66 "data/maps/MtPyre_3F/scripts.pory"

# 67 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleDefeat:
# 68 "data/maps/MtPyre_3F/scripts.pory"
	.string "¡Ha sido impresionante!\n"
# 69 "data/maps/MtPyre_3F/scripts.pory"
	.string "Tienes cualidades muy especiales.$"
# 70 "data/maps/MtPyre_3F/scripts.pory"

# 71 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabriellePostBattle:
# 72 "data/maps/MtPyre_3F/scripts.pory"
	.string "Los POKéMON que ya no están aquí,\n"
# 73 "data/maps/MtPyre_3F/scripts.pory"
	.string "los POKéMON que te acompañan,\p"
# 74 "data/maps/MtPyre_3F/scripts.pory"
	.string "los POKéMON que conocerás\n"
# 75 "data/maps/MtPyre_3F/scripts.pory"
	.string "en el futuro…\p"
# 76 "data/maps/MtPyre_3F/scripts.pory"
	.string "Todos merecen nuestro cariño.\n"
# 77 "data/maps/MtPyre_3F/scripts.pory"
	.string "No lo olvides nunca.$"
# 78 "data/maps/MtPyre_3F/scripts.pory"

# 79 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRegister:
# 80 "data/maps/MtPyre_3F/scripts.pory"
	.string "Me gustaría volver a ver a tus POKéMON\n"
# 81 "data/maps/MtPyre_3F/scripts.pory"
	.string "cuando hayan crecido un poco…\p"
# 82 "data/maps/MtPyre_3F/scripts.pory"
	.string "Déjame ver tu POKéNAV, por favor.$"
# 83 "data/maps/MtPyre_3F/scripts.pory"

# 84 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRematchIntro:
# 85 "data/maps/MtPyre_3F/scripts.pory"
	.string "Ah, si eres tú…\p"
# 86 "data/maps/MtPyre_3F/scripts.pory"
	.string "¿Has venido a enseñarme cómo\n"
# 87 "data/maps/MtPyre_3F/scripts.pory"
	.string "han crecido tus POKéMON?$"
# 88 "data/maps/MtPyre_3F/scripts.pory"

# 89 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRematchDefeat:
# 90 "data/maps/MtPyre_3F/scripts.pory"
	.string "¡Es impresionante!\n"
# 91 "data/maps/MtPyre_3F/scripts.pory"
	.string "Tienes cualidades muy especiales.$"
# 92 "data/maps/MtPyre_3F/scripts.pory"

# 93 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabriellePostRematch:
# 94 "data/maps/MtPyre_3F/scripts.pory"
	.string "Los POKéMON que ya no están aquí,\n"
# 95 "data/maps/MtPyre_3F/scripts.pory"
	.string "los POKéMON que te acompañan,\p"
# 96 "data/maps/MtPyre_3F/scripts.pory"
	.string "los POKéMON que conocerás\n"
# 97 "data/maps/MtPyre_3F/scripts.pory"
	.string "en el futuro…\p"
# 98 "data/maps/MtPyre_3F/scripts.pory"
	.string "Todos merecen nuestro cariño.\n"
# 99 "data/maps/MtPyre_3F/scripts.pory"
	.string "Veo que no lo has olvidado.$"
