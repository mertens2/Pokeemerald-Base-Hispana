# 1 "data/maps/FortreeCity_Gym/scripts.pory"

# 2 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_MapScripts::
# 3 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
# 4 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
# 5 "data/maps/FortreeCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity_Gym/scripts.pory"

# 7 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnTransition:
# 8 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
# 9 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower bc of rotating gates
# 10 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 11 "data/maps/FortreeCity_Gym/scripts.pory"

# 12 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnWarp:
# 13 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
# 14 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 15 "data/maps/FortreeCity_Gym/scripts.pory"

# 16 "data/maps/FortreeCity_Gym/scripts.pory"
@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
# 17 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates::
# 18 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 19 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 20 "data/maps/FortreeCity_Gym/scripts.pory"

# 21 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 24 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
# 25 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GiveAerialAce2
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 28 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 29 "data/maps/FortreeCity_Gym/scripts.pory"

# 30 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 31 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 52 "data/maps/FortreeCity_Gym/scripts.pory"

# 53 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 60 "data/maps/FortreeCity_Gym/scripts.pory"

# 61 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 67 "data/maps/FortreeCity_Gym/scripts.pory"

# 68 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 72 "data/maps/FortreeCity_Gym/scripts.pory"

# 73 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 77 "data/maps/FortreeCity_Gym/scripts.pory"

# 78 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 82 "data/maps/FortreeCity_Gym/scripts.pory"

# 83 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 87 "data/maps/FortreeCity_Gym/scripts.pory"

# 88 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 92 "data/maps/FortreeCity_Gym/scripts.pory"

# 93 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 97 "data/maps/FortreeCity_Gym/scripts.pory"

# 98 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 102 "data/maps/FortreeCity_Gym/scripts.pory"

# 103 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 110 "data/maps/FortreeCity_Gym/scripts.pory"

# 111 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 115 "data/maps/FortreeCity_Gym/scripts.pory"

# 116 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 121 "data/maps/FortreeCity_Gym/scripts.pory"

# 122 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 127 "data/maps/FortreeCity_Gym/scripts.pory"

# 128 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 130 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 132 "data/maps/FortreeCity_Gym/scripts.pory"

# 133 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 137 "data/maps/FortreeCity_Gym/scripts.pory"

# 138 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
# 140 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¿Camino del CAMPEONATO?\p"
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "ALANA, la LÍDER del GIMNASIO\n"
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "de ARBORADA, es una maestra\l"
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "de los POKéMON de tipo VOLADOR.\p"
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ella está al fondo del GIMNASIO,\n"
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "tras las puertas giratorias.\p"
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Está esperando a los ENTRENADORES\n"
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "que quieren volar a lo más alto.\p"
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Muy bien, ¡adelante!$"
# 149 "data/maps/FortreeCity_Gym/scripts.pory"

# 150 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡Lo has hecho!\n"
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡Has conseguido despegar!$"
# 153 "data/maps/FortreeCity_Gym/scripts.pory"

# 154 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡Observa con qué elegancia lucha\n"
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "mi POKéMON PÁJARO!$"
# 157 "data/maps/FortreeCity_Gym/scripts.pory"

# 158 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Tú…\n"
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "eres muy fuerte…$"
# 161 "data/maps/FortreeCity_Gym/scripts.pory"

# 162 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Un ENTRENADOR ha de ser listo y saber\n"
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "reaccionar ante cualquier situación.\p"
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¿Y tú? ¿Tienes el ingenio que hace\n"
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "falta para llegar a nuestra LÍDER?$"
# 167 "data/maps/FortreeCity_Gym/scripts.pory"

# 168 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Los amantes de los POKéMON PÁJARO\n"
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "desean ser miembros de este GIMNASIO.\p"
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Y, los que somos miembros ya…,\n"
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡no podemos permitirnos perder!$"
# 173 "data/maps/FortreeCity_Gym/scripts.pory"

# 174 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Era una carga demasiado pesada\n"
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "para mí…$"
# 177 "data/maps/FortreeCity_Gym/scripts.pory"

# 178 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "El mundo es enorme y hay montones\n"
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "de ENTRENADORES muy fuertes.\p"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Por eso debo seguir entrenando\n"
# 182 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "y mejorando cada vez más.$"
# 183 "data/maps/FortreeCity_Gym/scripts.pory"

# 184 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 185 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡ALANA, nuestra LÍDER de GIMNASIO,\n"
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "no tiene por qué perder tiempo contigo!\p"
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡Yo me sobro para vencerte!$"
# 188 "data/maps/FortreeCity_Gym/scripts.pory"

# 189 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Qué dirá ALANA…\n"
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡He perdido!$"
# 192 "data/maps/FortreeCity_Gym/scripts.pory"

# 193 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "ALANA es la LÍDER definitiva:\n"
# 195 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡tiene fuerza y carácter!\p"
# 196 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ella no va a dejarse ganar…$"
# 197 "data/maps/FortreeCity_Gym/scripts.pory"

# 198 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "ALANA me enseñó todo lo que sé,\n"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "no te pienses que será tan fácil…$"
# 201 "data/maps/FortreeCity_Gym/scripts.pory"

# 202 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Me han derrotado…$"
# 204 "data/maps/FortreeCity_Gym/scripts.pory"

# 205 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 206 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "La gente de ARBORADA vive mucho\n"
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "más tranquila desde que está ALANA.$"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"

# 209 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Cuando ALANA entra en combate,\n"
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "su rostro brilla con determinación…\p"
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡Pero no dejaré que lo veas\n"
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "con tus propios ojos!$"
# 214 "data/maps/FortreeCity_Gym/scripts.pory"

# 215 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡Argh!\n"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No he logrado detenerte.$"
# 218 "data/maps/FortreeCity_Gym/scripts.pory"

# 219 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡Será mejor que te andes con cuidado!\n"
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡No te distraigas frente a ALANA\l"
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "o te hará picadillo en un periquete!$"
# 223 "data/maps/FortreeCity_Gym/scripts.pory"

# 224 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sabrás que hay muchísimas clases\n"
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "de POKéMON de tipo VOLADOR…\p"
# 227 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¿O no tenías ni idea?$"
# 228 "data/maps/FortreeCity_Gym/scripts.pory"

# 229 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡Ya veo que te sabes la lección!$"
# 231 "data/maps/FortreeCity_Gym/scripts.pory"

# 232 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No hay duda de que has vencido, pero\n"
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "ve con pies de plomo. Los POKéMON\l"
# 235 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "de nuestra LÍDER ALANA son cosa seria.$"
# 236 "data/maps/FortreeCity_Gym/scripts.pory"

# 237 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Soy ALANA, la LÍDER del GIMNASIO\n"
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "de ARBORADA.\p"
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "He unido fuerzas con los POKéMON\n"
# 241 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "PÁJARO y alzado el vuelo.\p"
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Por duro que fuera el combate, siempre\n"
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "hemos vencido con gracia y donaire.\p"
# 244 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡Ahora verás con qué elegancia te\n"
# 245 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "derrotan mis POKéMON PÁJARO!$"
# 246 "data/maps/FortreeCity_Gym/scripts.pory"

# 247 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Nunca antes había visto a ningún\n"
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "ENTRENADOR capaz de dirigir a sus\l"
# 250 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "POKéMON con más arte que yo…\p"
# 251 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Debo reconocer tamaña proeza como\n"
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "se merece. Toma esta MEDALLA.$"
# 253 "data/maps/FortreeCity_Gym/scripts.pory"

# 254 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} recibió la MEDALLA PLUMA\n"
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "de ALANA.$"
# 257 "data/maps/FortreeCity_Gym/scripts.pory"

# 258 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 259 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Con la MEDALLA PLUMA te obedecerán\n"
# 260 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "todos los POKéMON hasta el nivel 70,\l"
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "incluso los que has intercambiado.\p"
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "También podrás usar el movimiento\n"
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "de la MO VUELO fuera de los combates.\p"
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Además quiero hacerte un regalo…$"
# 265 "data/maps/FortreeCity_Gym/scripts.pory"

# 266 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "La MT40 contiene GOLPE AÉREO.\p"
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Es velocísimo: ningún POKéMON\n"
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "debería ser capaz de evitarlo.\p"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Absolutamente ninguno…$"
# 271 "data/maps/FortreeCity_Gym/scripts.pory"

# 272 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Acabas de registrar a ALANA,\n"
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "la LÍDER de GIMNASIO, en el POKéNAV.$"
# 275 "data/maps/FortreeCity_Gym/scripts.pory"

# 276 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Aunque he caído ante ti, seguiré\n"
# 278 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "siendo fiel a mis POKéMON PÁJARO.$"
# 279 "data/maps/FortreeCity_Gym/scripts.pory"

# 280 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD ARBORADA$"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"

# 283 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD ARBORADA\p"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"

# 288 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "ALANA: Los humanos no podemos\n"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "escapar a la fuerza de la gravedad.\p"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pero, con mucho trabajo y esfuerzo,\n"
# 292 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "podemos llegar a lo más alto.\p"
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Has coronado la cumbre y te has\n"
# 294 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "hecho con el CAMPEONATO.\p"
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡Estoy deseando ver cómo\n"
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "emprendes el vuelo!$"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"

# 298 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Esta nueva victoria te ha dado alas…$"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"

# 301 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "ALANA: Aunque he perdido,\n"
# 303 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "mi espíritu permanece intacto.\p"
# 304 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sé que puedo alzar el vuelo\n"
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "y tocar las nubes.\p"
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡Y eso haré!$"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"

# 308 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "ALANA: Los humanos no podemos\n"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "escapar a la fuerza de la gravedad.\p"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pero, con mucho trabajo y esfuerzo,\n"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "podemos llegar a lo más alto.\p"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Has coronado la cumbre y te has\n"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "hecho con el CAMPEONATO.\p"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¡Estoy deseando ver cómo\n"
# 316 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "emprendes el vuelo!\p"
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "¿Sólo llevas un POKéMON contigo?\p"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Vuelve cuando tengas al menos\n"
# 320 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "dos POKéMON.$"
