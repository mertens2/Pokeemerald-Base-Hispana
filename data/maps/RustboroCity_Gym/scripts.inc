# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Gym/scripts.pory"

# 14 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 28 "data/maps/RustboroCity_Gym/scripts.pory"

# 29 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 36 "data/maps/RustboroCity_Gym/scripts.pory"

# 37 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 41 "data/maps/RustboroCity_Gym/scripts.pory"

# 42 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 46 "data/maps/RustboroCity_Gym/scripts.pory"

# 47 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 51 "data/maps/RustboroCity_Gym/scripts.pory"

# 52 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 56 "data/maps/RustboroCity_Gym/scripts.pory"

# 57 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 64 "data/maps/RustboroCity_Gym/scripts.pory"

# 65 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 69 "data/maps/RustboroCity_Gym/scripts.pory"

# 70 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 75 "data/maps/RustboroCity_Gym/scripts.pory"

# 76 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 81 "data/maps/RustboroCity_Gym/scripts.pory"

# 82 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 86 "data/maps/RustboroCity_Gym/scripts.pory"

# 87 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 91 "data/maps/RustboroCity_Gym/scripts.pory"

# 92 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 106 "data/maps/RustboroCity_Gym/scripts.pory"

# 107 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Eh, ¿qué tal vamos?\p"
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Escucha algo que te va a interesar!\n"
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¿Vas camino del CAMPEONATO?\p"
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo no soy ENTRENADOR, pero te puedo\n"
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "dar un par de buenos consejos.\p"
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Así me gusta! ¡Te voy a decir cómo\n"
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ganar el CAMPEONATO POKéMON!\p"
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Un ENTRENADOR tiene que reunir\n"
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "MEDALLAS de GIMNASIO, ¿no?\p"
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Pero ganar a los LÍDERES no es\n"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pan comido!\p"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Y ahí entro yo!\n"
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Puedo asesorarte como nadie.\p"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "PETRA, la LÍDER del GIMNASIO,\n"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "usa POKéMON de tipo ROCA.\p"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "El tipo ROCA es muy resistente, pero no\n"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "tiene ninguna oportunidad si se usan\l"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "movimientos de tipo AGUA o PLANTA.\p"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Si derrotas a la LÍDER, ven a verme.\p"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Venga, ¡valor y al toro!$"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"

# 129 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Guau, vaya pedazo de victoria!\n"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Seguro que ha sido por todo lo que\l"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "te he animado desde aquí!\p"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Genial!\n"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Consulta tu FICHA de ENTRENADOR.\p"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "La MEDALLA PIEDRA que has conseguido\n"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "debería figurar ahí.\p"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "En otras palabras…\p"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Has dado el primer paso que te llevará\n"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a la cima!\p"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Tiene que ser superemocionante!$"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"

# 142 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "A los ENTRENADORES no debes tomarnos\n"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a la ligera… ¡Ahora verás por qué!$"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"

# 146 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Me has dejado a cuadros…$"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"

# 149 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Todavía no has visto ni una pizca\n"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "del terrible poder del tipo ROCA!$"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"

# 153 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Si no puedes vencerme a mí, ya puedes\n"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "olvidarte de derrotar a PETRA!$"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"

# 157 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Vaya, se diría que tienes potencial…$"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"

# 160 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pero PETRA es mucho más fuerte\n"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "que yo de aquí a Lima.\p"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Mejor no te confíes!$"
# 164 "data/maps/RustboroCity_Gym/scripts.pory"

# 165 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ya sé que estamos en medio de una\n"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ciudad, pero no te servirá de nada.\p"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Mis POKéMON ROCA no se andan\n"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "con chiquitas. ¡Échate a temblar!$"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"

# 171 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Por todos los peñascos!\n"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Tú sí que no te andas con chiquitas!$"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"

# 175 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Nuestra LÍDER te dará tu merecido.\p"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "A pesar de su juventud, escogió el\n"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "tipo ROCA y eso demuestra carácter.$"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"

# 180 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hola, soy PETRA, la LÍDER del\n"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD FÉRRICA.\p"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Me convertí en LÍDER para poder\n"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "aplicar lo que había aprendido en la\l"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ESCUELA de ENTRENADORES POKéMON.\p"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¿Me harías el favor de enseñarme tus\n"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON y tus técnicas de combate?$"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"

# 189 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pues…\n"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "he perdido…\p"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Parece que aún no he aprendido\n"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "bastante…\p"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Qué se le va a hacer.\p"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Según las reglas de la LIGA POKéMON,\n"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "los ENTRENADORES deben recibir\l"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "esto si derrotan a un LÍDER.\p"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Te entrego la MEDALLA PIEDRA oficial\n"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "de la LIGA POKéMON.$"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"

# 201 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} recibió la MEDALLA PIEDRA\n"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "de PETRA.$"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"

# 205 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "La MEDALLA PIEDRA potencia el poder\n"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "de ATAQUE de tus POKéMON.\p"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "También les permite usar la MO CORTE\n"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "fuera del combate.\p"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Además, quiero darte esto.$"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"

# 212 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "La MT39 contiene TUMBA ROCAS.\p"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "No sólo inflige daño al lanzar rocas\n"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a tu rival, sino que también reduce\l"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "la VELOCIDAD de éste.\p"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Si usas una MT, puedes enseñar\n"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ese movimiento a un POKéMON.\p"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Pero recuerda que sólo la podrás\n"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "usar una vez y ya está!$"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"

# 222 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ya que eres tan fuerte, deberías\n"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "desafiar a otros LÍDERES.\p"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pero antes lucha contra muchos\n"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ENTRENADORES para ganar experiencia.$"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"

# 228 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD FÉRRICA$"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"

# 231 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD FÉRRICA\p"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"

# 236 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Bip, bip!\p"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "PETRA: ¡Hola, {PLAYER}!\n"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Aquí PETRA, de CIUDAD FÉRRICA.\p"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Me ha dicho MARCIAL que estás\n"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "escalando puestos en la jerarquía\l"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "de ENTRENADORES a ojos vistas.\p"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pero, la verdad, no quiero pensar\n"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "que no puedo vencerte…\p"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "En el GIMNASIO nos entrenamos\n"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a fondo para cuando vuelvas.\p"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Estamos deseando desafiarte!\n"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡No nos hagas esperar mucho!\p"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Clic!$"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"

# 251 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Acabas de registrar a PETRA,\n"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "la LÍDER de GIMNASIO, en el POKéNAV.$"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"

# 255 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "PETRA: Me alegra volver a verte.\n"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Como sabes, soy PETRA, la LÍDER\l"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "de este GIMNASIO.\p"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Seguro que hemos adquirido mucha\n"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "experiencia desde la última vez.\p"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Así que habrá que comprobar todo lo\n"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "que hemos mejorado… ¡A luchar!$"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"

# 264 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grrr…\n"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "He perdido otra vez…$"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"

# 268 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "PETRA: Todavía tengo mucho que\n"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "aprender de los combates POKéMON.\p"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¡Saber eso me da aún más ánimos\n"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "para seguir entrenándome y mejorar!$"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"

# 274 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "PETRA: Me alegra volver a verte.\n"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Como sabes, soy PETRA, la LÍDER\l"
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "de este GIMNASIO.\p"
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Seguro que hemos adquirido mucha\n"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "experiencia desde la última vez.\p"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Así que habrá que comprobar todo lo\n"
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "que hemos mejorado…\p"
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "¿Sólo llevas un POKéMON contigo?\p"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pues necesitas al menos otro más.\n"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Si no, no podremos luchar.$"
