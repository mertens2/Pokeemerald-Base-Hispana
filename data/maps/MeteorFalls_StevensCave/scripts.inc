# 1 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 2 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_MapScripts::
# 3 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.byte 0
# 4 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 5 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_Steven::
# 6 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	lock
# 7 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Defeated
# 8 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitse
# 9 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	playse SE_PIN
# 10 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_ExclamationMark
# 11 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 12 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_Delay48
# 13 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 14 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
# 15 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 16 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
# 17 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
# 18 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 19 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
# 20 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 21 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 22 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 23 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_Defeated::
# 24 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
# 25 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 26 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 27 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 28 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 29 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 30 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst:
# 31 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "MÁXIMO: Anda, {PLAYER}{KUN}.\n"
# 32 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Me sorprende que me hayas encontrado.\p"
# 33 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Dime… ¿Tú crees que las rocas\n"
# 34 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "me encantan?\p"
# 35 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Pues que sepas que no.\p"
# 36 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Ya nos enfrentamos en el CENTRO\n"
# 37 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "ESPACIAL de CIUDAD ALGARIA.\p"
# 38 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Deberías saber de sobra que soy muy,\n"
# 39 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "pero que muy bueno.\p"
# 40 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "¡Tú lo has querido, {PLAYER}{KUN},\n"
# 41 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "si buscas pelea, espérate lo peor!$"
# 42 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 43 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_StevenDefeat:
# 44 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Vaya…\n"
# 45 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Pues sí que has mejorado…$"
# 46 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 47 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_MyPredictionCameTrue:
# 48 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "MÁXIMO: Ahora que lo pienso, lo supe\n"
# 49 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "desde que nos encontramos en la\l"
# 50 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "CUEVA GRANITO de PUEBLO AZULIZA.\p"
# 51 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Ya sabía yo que acabarías por hacerte\n"
# 52 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "con el CAMPEONATO.\p"
# 53 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Mis predicciones nunca fallan.\p"
# 54 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "¿Y ahora qué te depara el futuro?\p"
# 55 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Mmmm…\n"
# 56 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Mmmm…\p"
# 57 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Je, je, je, ni yo lo sé.$"
