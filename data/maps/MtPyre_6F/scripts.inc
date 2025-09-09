# 1 "data/maps/MtPyre_6F/scripts.pory"

# 2 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_MapScripts::
# 3 "data/maps/MtPyre_6F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_6F/scripts.pory"

# 5 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Valerie::
# 6 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_RegisterValerie
# 7 "data/maps/MtPyre_6F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/MtPyre_6F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtPyre_6F_EventScript_RematchValerie
# 9 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
# 10 "data/maps/MtPyre_6F/scripts.pory"
	release
# 11 "data/maps/MtPyre_6F/scripts.pory"
	end
# 12 "data/maps/MtPyre_6F/scripts.pory"

# 13 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RegisterValerie::
# 14 "data/maps/MtPyre_6F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 15 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 0
# 16 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
# 17 "data/maps/MtPyre_6F/scripts.pory"
	register_matchcall TRAINER_VALERIE_1
# 18 "data/maps/MtPyre_6F/scripts.pory"
	release
# 19 "data/maps/MtPyre_6F/scripts.pory"
	end
# 20 "data/maps/MtPyre_6F/scripts.pory"

# 21 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RematchValerie::
# 22 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
# 23 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
# 24 "data/maps/MtPyre_6F/scripts.pory"
	end
# 25 "data/maps/MtPyre_6F/scripts.pory"

# 26 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Cedric::
# 27 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
# 28 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/MtPyre_6F/scripts.pory"
	end
# 30 "data/maps/MtPyre_6F/scripts.pory"

# 31 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieIntro:
# 32 "data/maps/MtPyre_6F/scripts.pory"
	.string "Cuando estoy aquí…\n"
# 33 "data/maps/MtPyre_6F/scripts.pory"
	.string "siento un extraño poder dentro de mí.$"
# 34 "data/maps/MtPyre_6F/scripts.pory"

# 35 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieDefeat:
# 36 "data/maps/MtPyre_6F/scripts.pory"
	.string "Pues esta vez no lo he sentido mucho…$"
# 37 "data/maps/MtPyre_6F/scripts.pory"

# 38 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostBattle:
# 39 "data/maps/MtPyre_6F/scripts.pory"
	.string "Quizás provenga del espíritu de los\n"
# 40 "data/maps/MtPyre_6F/scripts.pory"
	.string "POKéMON que a veces acuden aquí…$"
# 41 "data/maps/MtPyre_6F/scripts.pory"

# 42 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRegister:
# 43 "data/maps/MtPyre_6F/scripts.pory"
	.string "Ji, ji, ji… He perdido el combate, pero…\n"
# 44 "data/maps/MtPyre_6F/scripts.pory"
	.string "todavía puedo sorprenderte…\p"
# 45 "data/maps/MtPyre_6F/scripts.pory"
	.string "No hace falta ni que ponga mis manos\n"
# 46 "data/maps/MtPyre_6F/scripts.pory"
	.string "sobre tu POKéNAV… ¡Toma ya!$"
# 47 "data/maps/MtPyre_6F/scripts.pory"

# 48 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchIntro:
# 49 "data/maps/MtPyre_6F/scripts.pory"
	.string "¡Detrás de ti!\n"
# 50 "data/maps/MtPyre_6F/scripts.pory"
	.string "¿Qué es eso?$"
# 51 "data/maps/MtPyre_6F/scripts.pory"

# 52 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchDefeat:
# 53 "data/maps/MtPyre_6F/scripts.pory"
	.string "Pues juraría que había algo…$"
# 54 "data/maps/MtPyre_6F/scripts.pory"

# 55 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostRematch:
# 56 "data/maps/MtPyre_6F/scripts.pory"
	.string "Los POKéMON que descansan aquí\n"
# 57 "data/maps/MtPyre_6F/scripts.pory"
	.string "pueden ser muy juguetones.$"
# 58 "data/maps/MtPyre_6F/scripts.pory"

# 59 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricIntro:
# 60 "data/maps/MtPyre_6F/scripts.pory"
	.string "¿Has perdido el norte?\n"
# 61 "data/maps/MtPyre_6F/scripts.pory"
	.string "¡No te preocupes, que aquí estoy yo!$"
# 62 "data/maps/MtPyre_6F/scripts.pory"

# 63 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricDefeat:
# 64 "data/maps/MtPyre_6F/scripts.pory"
	.string "¿Pero tú no te habías perdido?$"
# 65 "data/maps/MtPyre_6F/scripts.pory"

# 66 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricPostBattle:
# 67 "data/maps/MtPyre_6F/scripts.pory"
	.string "Pensaba que era más fácil derrotar\n"
# 68 "data/maps/MtPyre_6F/scripts.pory"
	.string "a los ENTRENADORES que se pierden.\p"
# 69 "data/maps/MtPyre_6F/scripts.pory"
	.string "No volveré a intentar un truco\n"
# 70 "data/maps/MtPyre_6F/scripts.pory"
	.string "tan sucio nunca más…$"
