# 1 "data/maps/VictoryRoad_B2F/scripts.pory"

# 2 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_MapScripts::
# 3 "data/maps/VictoryRoad_B2F/scripts.pory"
	.byte 0
# 4 "data/maps/VictoryRoad_B2F/scripts.pory"

# 5 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Vito::
# 6 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_VITO, VictoryRoad_B2F_Text_VitoIntro, VictoryRoad_B2F_Text_VitoDefeat
# 7 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 9 "data/maps/VictoryRoad_B2F/scripts.pory"

# 10 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Owen::
# 11 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_OWEN, VictoryRoad_B2F_Text_OwenIntro, VictoryRoad_B2F_Text_OwenDefeat
# 12 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 14 "data/maps/VictoryRoad_B2F/scripts.pory"

# 15 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Caroline::
# 16 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_CAROLINE, VictoryRoad_B2F_Text_CarolineIntro, VictoryRoad_B2F_Text_CarolineDefeat
# 17 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 19 "data/maps/VictoryRoad_B2F/scripts.pory"

# 20 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Julie::
# 21 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_JULIE, VictoryRoad_B2F_Text_JulieIntro, VictoryRoad_B2F_Text_JulieDefeat
# 22 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 24 "data/maps/VictoryRoad_B2F/scripts.pory"

# 25 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Felix::
# 26 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_FELIX, VictoryRoad_B2F_Text_FelixIntro, VictoryRoad_B2F_Text_FelixDefeat
# 27 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_FelixPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 29 "data/maps/VictoryRoad_B2F/scripts.pory"

# 30 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Dianne::
# 31 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_DIANNE, VictoryRoad_B2F_Text_DianneIntro, VictoryRoad_B2F_Text_DianneDefeat
# 32 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_DiannePostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 34 "data/maps/VictoryRoad_B2F/scripts.pory"

# 35 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_VitoIntro:
# 36 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "He entrenado con toda mi familia,\n"
# 37 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "toda enterita. ¡No voy a perder!$"
# 38 "data/maps/VictoryRoad_B2F/scripts.pory"

# 39 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_VitoDefeat:
# 40 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "¡¿Mejor que mi familia?!\n"
# 41 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "¡¿Cómo puede ser?!$"
# 42 "data/maps/VictoryRoad_B2F/scripts.pory"

# 43 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_VitoPostBattle:
# 44 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Logré superar a toda mi familia.\n"
# 45 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Nunca había perdido…\p"
# 46 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Vaya palo…\n"
# 47 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Me voy a casa a entrenar más.$"
# 48 "data/maps/VictoryRoad_B2F/scripts.pory"

# 49 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_OwenIntro:
# 50 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Me han dicho que por aquí había\n"
# 51 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "una personita que da mucha guerra.\l"
# 52 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "¿Eres tú?$"
# 53 "data/maps/VictoryRoad_B2F/scripts.pory"

# 54 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_OwenDefeat:
# 55 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "¡No hay que fiarse de tu juventud,\n"
# 56 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "está claro!$"
# 57 "data/maps/VictoryRoad_B2F/scripts.pory"

# 58 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_OwenPostBattle:
# 59 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Y, según los rumores, vienes\n"
# 60 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "de CIUDAD PETALIA, ¿no?$"
# 61 "data/maps/VictoryRoad_B2F/scripts.pory"

# 62 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_CarolineIntro:
# 63 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Yo creo que tanta lucha ya debe\n"
# 64 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "de haberte agotado…$"
# 65 "data/maps/VictoryRoad_B2F/scripts.pory"

# 66 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_CarolineDefeat:
# 67 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "¡Pues no!$"
# 68 "data/maps/VictoryRoad_B2F/scripts.pory"

# 69 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_CarolinePostBattle:
# 70 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Tanto CALLE VICTORIA como la LIGA\n"
# 71 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "POKéMON son desafíos largos y duros.\l"
# 72 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "¡Procura no fatigarte demasiado!$"
# 73 "data/maps/VictoryRoad_B2F/scripts.pory"

# 74 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_JulieIntro:
# 75 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "No deberías dormirte en los laureles\n"
# 76 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "sólo porque tienes un montón\l"
# 77 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "de MEDALLAS de GIMNASIO.\p"
# 78 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "¡Siempre puedes encontrar a alguien\n"
# 79 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "que sea mejor que tú!$"
# 80 "data/maps/VictoryRoad_B2F/scripts.pory"

# 81 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_JulieDefeat:
# 82 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "¡Eres mejor que yo!$"
# 83 "data/maps/VictoryRoad_B2F/scripts.pory"

# 84 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_JuliePostBattle:
# 85 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Mira todas tus MEDALLAS y acuérdate\n"
# 86 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "de los ENTRENADORES contra los que\l"
# 87 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "te has enfrentado.$"
# 88 "data/maps/VictoryRoad_B2F/scripts.pory"

# 89 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_FelixIntro:
# 90 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "He llegado hasta aquí, pero tanta\n"
# 91 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "tensión me destroza el estómago…$"
# 92 "data/maps/VictoryRoad_B2F/scripts.pory"

# 93 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_FelixDefeat:
# 94 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ayyyy…\n"
# 95 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Qué dolor…$"
# 96 "data/maps/VictoryRoad_B2F/scripts.pory"

# 97 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_FelixPostBattle:
# 98 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "No puedo evitar ponerme tenso al saber\n"
# 99 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "que me acerco a la LIGA POKéMON.\p"
# 100 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Curiosamente, es la única forma\n"
# 101 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "de controlar los nervios.$"
# 102 "data/maps/VictoryRoad_B2F/scripts.pory"

# 103 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_DianneIntro:
# 104 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "En esta cueva encontrarás\n"
# 105 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "lo mejor de lo mejor.\p"
# 106 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Hasta ahora, ¿qué te parece?$"
# 107 "data/maps/VictoryRoad_B2F/scripts.pory"

# 108 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_DianneDefeat:
# 109 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "¡Esto no me afecta lo más mínimo!$"
# 110 "data/maps/VictoryRoad_B2F/scripts.pory"

# 111 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_DiannePostBattle:
# 112 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "¡Tienes agallas y eso me gusta!\n"
# 113 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "¡Sigue así!$"
