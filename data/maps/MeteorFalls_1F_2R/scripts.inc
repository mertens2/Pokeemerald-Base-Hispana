# 1 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_MapScripts::
# 3 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.byte 0
# 4 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 5 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Nicolas::
# 6 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_single TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasIntro, MeteorFalls_1F_2R_Text_NicolasDefeat, MeteorFalls_1F_2R_EventScript_RegisterNicolas
# 7 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchNicolas
# 9 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasPostBattle, MSGBOX_DEFAULT
# 10 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 11 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 12 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 13 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterNicolas::
# 14 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 15 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	waitmovement 0
# 16 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasRegister, MSGBOX_DEFAULT
# 17 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_NICOLAS_1
# 18 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 19 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 20 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 21 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchNicolas::
# 22 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasRematchIntro, MeteorFalls_1F_2R_Text_NicolasRematchDefeat
# 23 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasPostRematch, MSGBOX_AUTOCLOSE
# 24 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 25 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 26 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_John::
# 27 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnIntro, MeteorFalls_1F_2R_Text_JohnDefeat, MeteorFalls_1F_2R_Text_JohnNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJohn
# 28 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 29 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchJohn
# 30 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnPostBattle, MSGBOX_DEFAULT
# 31 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 32 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 33 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 34 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJohn::
# 35 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT
# 36 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 37 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 38 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 39 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 40 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJohn::
# 41 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnRematchIntro, MeteorFalls_1F_2R_Text_JohnRematchDefeat, MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons
# 42 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnPostRematch, MSGBOX_AUTOCLOSE
# 43 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 44 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 45 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Jay::
# 46 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat, MeteorFalls_1F_2R_Text_JayNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJay
# 47 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 48 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchJay
# 49 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostBattle, MSGBOX_DEFAULT
# 50 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 51 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 52 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 53 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJay::
# 54 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT  @ John speaks for both during register
# 55 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 56 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 57 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 58 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 59 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJay::
# 60 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayRematchIntro, MeteorFalls_1F_2R_Text_JayRematchDefeat, MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons
# 61 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostRematch, MSGBOX_AUTOCLOSE
# 62 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 63 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 64 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasIntro:
# 65 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Aquí es donde los amantes de los\n"
# 66 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "DRAGONES entrenamos.\p"
# 67 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "A veces viene el CAMPEÓN de visita.\n"
# 68 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "¿Ves como somos algo especial?$"
# 69 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 70 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasDefeat:
# 71 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "¡Uf!\n"
# 72 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "¡No esperaba que fueras tan fuerte!$"
# 73 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 74 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostBattle:
# 75 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Te aguarda un camino largo y difícil.\p"
# 76 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "¿Cuándo lograré llegar triunfante\n"
# 77 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "hasta el final con mis POKéMON?$"
# 78 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 79 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRegister:
# 80 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Quiero saber más sobre tus habilidades.\n"
# 81 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Déjame registrarte en mi POKéNAV.$"
# 82 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 83 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchIntro:
# 84 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Desde que nos conocimos, hemos\n"
# 85 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "entrenado duro para ser los mejores.\p"
# 86 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "¡Veamos cuánto hemos mejorado!$"
# 87 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 88 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchDefeat:
# 89 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "¡Uf!\n"
# 90 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "¡No esperaba que fueras tan fuerte!$"
# 91 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 92 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostRematch:
# 93 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Se ve que has estado entrenando\n"
# 94 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "mucho con tus POKéMON.\p"
# 95 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "¡Pero yo también puedo mejorar!$"
# 96 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 97 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnIntro:
# 98 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JULI: Siempre hemos luchado a dúo.\n"
# 99 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Juntos somos más fuertes.$"
# 100 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 101 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnDefeat:
# 102 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JULI: Oh…\n"
# 103 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Hemos perdido, querida.$"
# 104 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 105 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostBattle:
# 106 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JULI: Llevamos cincuenta años casados.\p"
# 107 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Y ahora que lo pienso… Todavía\n"
# 108 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "no he vencido a mi mujer en combate.$"
# 109 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 110 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnNotEnoughMons:
# 111 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JULI: ¡Vaya, vaya! ¡Qué joven eres!\p"
# 112 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "¿Quieres desafiarnos? Pues entonces\n"
# 113 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "tendrás que volver con más POKéMON.$"
# 114 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 115 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRegister:
# 116 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JULI: Dime, si surgiera la oportunidad,\n"
# 117 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "¿volverías a enfrentarte a nosotros?$"
# 118 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 119 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayIntro:
# 120 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "NELA: Llevamos cincuenta años casados.\p"
# 121 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "El vínculo que nos une como pareja\n"
# 122 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "es fuerte como un roble.$"
# 123 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 124 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayDefeat:
# 125 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "NELA: Oh…\n"
# 126 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Hemos perdido, querido.$"
# 127 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 128 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostBattle:
# 129 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "NELA: Cincuenta años de matrimonio…\p"
# 130 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Cada vez que discutíamos,\n"
# 131 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "lo resolvíamos con un combate POKéMON.$"
# 132 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 133 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayNotEnoughMons:
# 134 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "NELA: ¡Vaya, vaya! ¡Qué joven eres!\p"
# 135 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "¿Quieres desafiarnos? Pues entonces\n"
# 136 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "tendrás que volver con más POKéMON.$"
# 137 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 138 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchIntro:
# 139 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JULI: Siempre hemos luchado a dúo.\n"
# 140 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Juntos somos más fuertes.$"
# 141 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 142 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchDefeat:
# 143 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JULI: Oh…\n"
# 144 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Hemos perdido, querida.$"
# 145 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 146 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostRematch:
# 147 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JULI: Llevamos cincuenta años casados.\p"
# 148 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Y ahora que lo pienso… Mi mujer y yo\n"
# 149 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "hemos combatido día sí y día no.$"
# 150 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 151 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons:
# 152 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JULI: ¡Vaya, vaya! ¡Qué joven eres!\p"
# 153 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "¿Quieres desafiarnos? Pues entonces\n"
# 154 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "tendrás que volver con más POKéMON.$"
# 155 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 156 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchIntro:
# 157 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "NELA: Llevamos cincuenta años casados.\p"
# 158 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Nos hemos apoyado el uno al otro\n"
# 159 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "en las duras y en las maduras.$"
# 160 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 161 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchDefeat:
# 162 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "NELA: Oh…\n"
# 163 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Hemos perdido, querido.$"
# 164 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 165 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostRematch:
# 166 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "NELA: Cincuenta años de matrimonio…\n"
# 167 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Han pasado tantas cosas…\p"
# 168 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Espero que siempre seamos\n"
# 169 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "tan felices como hasta ahora.$"
# 170 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 171 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons:
# 172 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "NELA: ¡Vaya, vaya! ¡Qué joven eres!\p"
# 173 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "¿Quieres desafiarnos? Pues entonces\n"
# 174 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "tendrás que volver con más POKéMON.$"
