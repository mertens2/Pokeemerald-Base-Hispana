VerdanturfTown_WandasHouse_MapScripts::
	.byte 0


VerdanturfTown_WandasHouse_EventScript_Wally::
# 4 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 5 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 6 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	namebox Wally
# 7 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_Wally_2
# 17 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, VerdanturfTown_WandasHouse_EventScript_Wally_5
# 23 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_Wally_Text_3
# 25 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	hidenamebox
# 26 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 27 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	setflag FLAG_WALLY_SPEECH
# 28 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wally_2:
# 8 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, VerdanturfTown_WandasHouse_EventScript_Wally_8
# 13 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_Wally_Text_1
# 14 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wally_5:
# 18 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_Wally_Text_2
# 20 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wally_8:
# 9 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_Wally_Text_0
# 10 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end


VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 33 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 34 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 35 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	namebox TioWally
# 36 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncle_2
# 43 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncle_5
# 48 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_2
# 50 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 51 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	hidenamebox
# 52 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysUncle_2:
# 37 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_0
# 40 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysUncle_5:
# 44 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_1
# 45 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end


VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
# 58 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	namebox Riley
# 59 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend_Text_0
# 61 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 62 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	hidenamebox
# 63 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 64 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	waitmovement 0
# 65 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 66 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	waitmovement 0
# 67 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 68 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Heart
# 69 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	waitmovement 0
# 70 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	namebox Riley
# 71 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend_Text_1
# 72 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 73 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	hidenamebox
# 74 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 75 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	applymovement 6, Common_Movement_Heart
# 76 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	waitmovement 0
# 77 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	namebox Camilo
# 78 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend_Text_2
# 79 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 80 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	hidenamebox
# 81 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end


VerdanturfTown_WandasHouse_EventScript_Wanda::
# 86 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 87 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 88 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	namebox Wanda
# 89 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_Wanda_2
# 96 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_Wanda_5
# 108 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	hidenamebox
# 109 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 110 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wanda_2:
# 90 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_Wanda_Text_0
# 91 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	hidenamebox
# 92 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 93 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wanda_5:
# 97 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_Wanda_Text_1
# 100 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	hidenamebox
# 101 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 102 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 103 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Heart
# 104 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	waitmovement 0
# 105 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end


VerdanturfTown_WandasHouse_EventScript_WallysAunt::
# 115 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 116 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 117 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	namebox TiaWally
# 118 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAunt_2
# 123 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAunt_5
# 129 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAunt_8
# 134 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_3
VerdanturfTown_WandasHouse_EventScript_WallysAunt_7:
# 137 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	hidenamebox
# 138 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 139 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAunt_2:
# 119 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_0
# 120 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAunt_5:
# 124 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_1
# 126 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAunt_8:
# 130 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_2
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_7


VerdanturfTown_WandasHouse_EventScript_Camilo::
# 144 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 145 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 146 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	namebox Camilo
# 147 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	checkitem ITEM_TM45
# 148 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq VerdanturfTown_WandasHouse_EventScript_Camilo_2
# 159 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_Camilo_Text_1
# 163 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	hidenamebox
# 164 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	giveitem ITEM_TM45
# 165 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	giveitem ITEM_TM48
# 166 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	namebox Camilo
# 167 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_Camilo_Text_2
# 170 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_Camilo_Text_3
# 172 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 173 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Heart
# 174 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	waitmovement 0
# 175 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	hidenamebox
# 176 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 177 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_Camilo_2:
# 149 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_Camilo_Text_0
# 151 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	hidenamebox
# 152 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 153 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	playse SE_CONTEST_HEART
# 154 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Heart
# 155 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	waitmovement 0
# 156 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end


VerdanturfTown_WandasHouse_EventScript_Wally_Text_0:
# 9 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "$"

VerdanturfTown_WandasHouse_EventScript_Wally_Text_1:
# 13 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Voy a alcanzarte, {PLAYER}. La\n"
	.string "próxima vez que nos enfrentemos,\l"
	.string "seré mucho más fuerte.$"

VerdanturfTown_WandasHouse_EventScript_Wally_Text_2:
# 18 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Estoy planeando hacer algo. Algo que me\n"
	.string "hará ser mucho más fuerte,\l"
	.string "{PLAYER}, pero no voy a decirte qué\l"
	.string "es.\p"
	.string "Parece que eres mucho más fuerte,\n"
	.string "¿no?\p"
	.string "Pues verás que cuando logre lo que\n"
	.string "estoy pensando, te lograré sobrepasar.$"

VerdanturfTown_WandasHouse_EventScript_Wally_Text_3:
# 23 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{PLAYER}…\p"
	.string "Me… Me habías vencido, pero…\l"
	.string "No creo estar tan afectado como lo\l"
	.string "estaba antes.\p"
	.string "De hecho, creo que esa derrota es lo que\n"
	.string "necesitaba.\p"
	.string "Ahora podré mejorar realmente, y podré\n"
	.string "esforzarme diez veces más que antes.\p"
	.string "Voy a alcanzarte, {PLAYER}. La\n"
	.string "próxima vez que nos enfrentemos,\l"
	.string "seré mucho más fuerte.$"

VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_0:
# 37 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¿Así que Wally ha logrado, sólo por su\n"
	.string "propia voluntad y determinación,\l"
	.string "llegar a la Liga Pokémon?\p"
	.string "Y yo que le decía que no estaba listo\n"
	.string "para afrontar el {COLOR BLUE}Desafío de los\l"
	.string "Gimnasios{COLOR DARK_GRAY}, pero lo completó todo.\p"
	.string "Estoy sorprendido, tomando en cuenta\n"
	.string "que es hijo de mi hermanito menor.\p"
	.string "¡Estoy muy orgulloso de él!$"

VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_1:
# 44 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "No puedo creer que se haya ido…\p"
	.string "¡Wally, ¿Dónde estás, mi chiquitín?!\p"
	.string "Argh, ¿¡CÓMO PUDE PERDERLO DE VISTA!?$"

VerdanturfTown_WandasHouse_EventScript_WallysUncle_Text_2:
# 48 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¿Wally?\n"
	.string "Ah, está en el cuarto de al lado.\p"
	.string "Su condición ha mejorado bastante,\n"
	.string "gracias a lo limpio que es el aire por\l"
	.string "aquí.\p"
	.string "Pero quizá, y sólo quizá, sea la\n"
	.string "influencia de sus Pokémon la que le\l"
	.string "está dando esperanza y vitalidad…$"

VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend_Text_0:
# 59 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¡ROAR!\n"
	.string "¡Soy yo, Riley, el tipo que ayudaste en\l"
	.string "el túnel!\p"
	.string "Estuve hablando con mi novia, y resulta\n"
	.string "que a ella también le gusta el hombre\l"
	.string "que encontré en el túnel.\p"
	.string "¡Ahora somos novios los tres!\p"
	.string "¿¡No es eso genial!?\p"
	.string "¡ROOOAARRR!$"

VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend_Text_1:
# 71 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¡Mi lindo, lindo novio!\n"
	.string "¡Qué lindo es mi novio!$"

VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend_Text_2:
# 78 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¡A-ay, basta, Riley, que me sonrojo!$"

VerdanturfTown_WandasHouse_EventScript_Wanda_Text_0:
# 90 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "No te preocupes, Wally está bien.\p"
	.string "Me dijo que se iba a ir a Dewford para\n"
	.string "empezar su {COLOR BLUE}Desafío de los Gimnasios{COLOR DARK_GRAY}.$"

VerdanturfTown_WandasHouse_EventScript_Wanda_Text_1:
# 97 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¡Ah! Tú debes de ser {PLAYER}.\p"
	.string "Wally no para de hablar de tí y lo mucho\n"
	.string "que te admira, soy Wanda, su prima.\p"
	.string "Y te debo un agradecimiento, porque\n"
	.string "gracias a tí, no sólo puedo ahora ver\l"
	.string "a mi novio cuando quiera, ¡Si no que\l"
	.string "conocí a otro hombre hermoso con el\l"
	.string "que salir!\p"
	.string "Amo mucho a mis dos novios, ¡Y es que\n"
	.string "cómo no amarlos, sólo míralos,\l"
	.string "musculosos, tiernos y graciosos!\p"
	.string "¡Son los mejores!$"

VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_0:
# 119 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¿¡QUE WALLY ESTABA EN EVERGRANDE!?\p"
	.string "¡Sus padres estarían sorprendidísimos,\n"
	.string "nunca se habrían imaginado tal hazaña!$"

VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_1:
# 124 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Ay, Arceus mío…\p"
	.string "Me voy a comprar al Centro Pokémon, y\n"
	.string "cuando vuelvo, el nuevo novio de mi\l"
	.string "hija me dice que Wally no está y todos\l"
	.string "están fuera buscándolo.\p"
	.string "Si algo le llegase a pasar… ¡No podría\n"
	.string "ver a sus padres a la cara nunca más!$"

VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_2:
# 130 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¡Es increíble!\p"
	.string "El novio de mi hija cavó la mayor parte\n"
	.string "del Túnel Rusturf por su cuenta, ¡Sin\l"
	.string "máquinas ni nada!\p"
	.string "No sólo eso, si no que mi hija es tan\n"
	.string "encantadora que hasta se consiguió\l"
	.string "otro novio.\p"
	.string "¿Hay algún límite para lo que mi hija\n"
	.string "pueda lograr?$"

VerdanturfTown_WandasHouse_EventScript_WallysAunt_Text_3:
# 134 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "El novio de mi hija es un constructor\n"
	.string "reconocido por su amabilidad y gran\l"
	.string "habilidad natural de liderazgo. ¡Y mi\l"
	.string "hija lo encantó con su ternura!\p"
	.string "¿Hay algún límite para lo que mi hija\n"
	.string "pueda lograr?$"

VerdanturfTown_WandasHouse_EventScript_Camilo_Text_0:
# 149 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Muchas gracias, {PLAYER}, por\n"
	.string "ayudarme a dejar el Team Aqua.\p"
	.string "Desde que lo hice, ¡Mi vida ha\n"
	.string "mejorado!\p"
	.string "Ahora tengo un hermosísimo novio y una\n"
	.string "hermosa novia, ¡Y los amo tanto!$"

VerdanturfTown_WandasHouse_EventScript_Camilo_Text_1:
# 159 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "H-hola, {PLAYER}, ¿No?\p"
	.string "Realmente lamento todo lo que hice…\p"
	.string "Dejé el Team Aqua hace un rato, y el\n"
	.string "Ex-Jefecito me dio una remuneración\l"
	.string "por mis\p"
	.string "servicios, aunque tambien me dijo que el\n"
	.string "Team Aqua no era un grupo de\l"
	.string "ladrones, si no que esa era una imagen\l"
	.string "pública.\p"
	.string "Pero desde que dejé el Team Aqua, ¡Mi\n"
	.string "vida ha mejorado!\p"
	.string "Ahora tengo un hermosísimo novio y una\n"
	.string "hermosa novia, ¡Y los amo tanto!\p"
	.string "De todo corazón, {PLAYER}, gracias\n"
	.string "por todo.\p"
	.string "Deberías tener esto como\n"
	.string "agradecimiento.$"

VerdanturfTown_WandasHouse_EventScript_Camilo_Text_2:
# 167 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Es la MT 45 Atracción.\n"
	.string "Debes saber que ahora, se ha\l"
	.string "descubierto que Pokémon de cualquier\l"
	.string "género pueden enamorarse con este\l"
	.string "moviminto,\l"
	.string "incluso si es un Pokémon macho con\l"
	.string "otro Pokémon macho, ¡Funcionará de la\l"
	.string "misma forma!\p"
	.string "¡Es como mi novio, mi novia y yo, a los\n"
	.string "tres nos gustan tanto chicas como\l"
	.string "chicos!$"

VerdanturfTown_WandasHouse_EventScript_Camilo_Text_3:
# 170 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_WandasHouse/scripts.pory"
	.string "También, te di la MT 48 Voz Cautivadora.\n"
	.string "Golpea a ambos oponentes y hace más\l"
	.string "daño si los rivales están enamorados\l"
	.string "del usuario.\p"
	.string "¡Las voces cautivadoras de mi novio y mi\n"
	.string "novia siempre hacen que mi\l"
	.string "corazoncito bisexual salte de amor!$"
