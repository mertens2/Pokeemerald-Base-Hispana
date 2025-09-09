# 1 "data/maps/VictoryRoad_1F/scripts.pory"

# 2 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_MapScripts::
# 3 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
# 4 "data/maps/VictoryRoad_1F/scripts.pory"
	.byte 0
# 5 "data/maps/VictoryRoad_1F/scripts.pory"

# 6 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition:
# 7 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 1, VictoryRoad_1F_EventScript_SetEntranceWallyPos1
# 8 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 2, VictoryRoad_1F_EventScript_SetEntranceWallyPos2
# 9 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 10 "data/maps/VictoryRoad_1F/scripts.pory"

# 11 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos1::
# 12 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 2, 24
# 13 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
# 14 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 15 "data/maps/VictoryRoad_1F/scripts.pory"

# 16 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos2::
# 17 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 3, 24
# 18 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 20 "data/maps/VictoryRoad_1F/scripts.pory"

# 21 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger1::
# 22 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 23 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 24 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 25 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer1
# 26 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 28 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 29 "data/maps/VictoryRoad_1F/scripts.pory"

# 30 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger2::
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 32 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 33 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 34 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer2
# 35 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 37 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 38 "data/maps/VictoryRoad_1F/scripts.pory"

# 39 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyEntranceBattle::
# 40 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 42 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
# 43 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat
# 44 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 45 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 46 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 47 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 48 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 49 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 50 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 51 "data/maps/VictoryRoad_1F/scripts.pory"

# 52 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer1:
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 54 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 55 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 57 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 58 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 59 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 60 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 61 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 62 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 65 "data/maps/VictoryRoad_1F/scripts.pory"

# 66 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer2:
# 67 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 71 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 72 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 73 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 74 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 75 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 76 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 77 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 78 "data/maps/VictoryRoad_1F/scripts.pory"

# 79 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
# 80 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_EntranceWally::
# 81 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 82 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 83 "data/maps/VictoryRoad_1F/scripts.pory"

# 84 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears and remains at the exit after the Hall of Fame is entered
# 85 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally::
# 86 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 87 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 88 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchWally
# 89 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 91 "data/maps/VictoryRoad_1F/scripts.pory"

# 92 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_RematchWally::
# 93 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 94 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 96 "data/maps/VictoryRoad_1F/scripts.pory"

# 97 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Edgar::
# 98 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
# 99 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 101 "data/maps/VictoryRoad_1F/scripts.pory"

# 102 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Albert::
# 103 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
# 104 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 106 "data/maps/VictoryRoad_1F/scripts.pory"

# 107 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Hope::
# 108 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
# 109 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 111 "data/maps/VictoryRoad_1F/scripts.pory"

# 112 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Quincy::
# 113 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
# 114 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 116 "data/maps/VictoryRoad_1F/scripts.pory"

# 117 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Katelynn::
# 118 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
# 119 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 121 "data/maps/VictoryRoad_1F/scripts.pory"

# 122 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore:
# 123 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "BLASCO: ¡Hola, {PLAYER}!\p"
# 124 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¿Te sorprende verme aquí?\p"
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "He conseguido llegar hasta aquí,\n"
# 126 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡y todo gracias a ti!\p"
# 127 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Desde que perdí ante ti aquel día,\n"
# 128 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, he mejorado mucho.\p"
# 129 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡Pero esta vez no perderé!\p"
# 130 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡Voy a ganar! ¡Por los POKéMON\n"
# 131 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "que me han estado apoyando sin cesar!\p"
# 132 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Muy bien, ¡allá voy!$"
# 133 "data/maps/VictoryRoad_1F/scripts.pory"

# 134 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyEntranceDefeat:
# 135 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡Guau!\n"
# 136 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, sí que eres fuerte…$"
# 137 "data/maps/VictoryRoad_1F/scripts.pory"

# 138 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostEntranceBattle:
# 139 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "BLASCO: Hoy no he podido vencerte,\n"
# 140 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, pero uno de estos días…\l"
# 141 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡daremos la vuelta a la tortilla!$"
# 142 "data/maps/VictoryRoad_1F/scripts.pory"

# 143 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyIntro:
# 144 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "BLASCO: ¡Hola, {PLAYER}!\p"
# 145 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "He mejorado aún más desde la última\n"
# 146 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "vez. ¡Ahora lo vas a ver!\p"
# 147 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Muy bien, ¡allá voy!$"
# 148 "data/maps/VictoryRoad_1F/scripts.pory"

# 149 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyDefeat:
# 150 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡Guau!\n"
# 151 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, sí que eres fuerte…$"
# 152 "data/maps/VictoryRoad_1F/scripts.pory"

# 153 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostBattle:
# 154 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "BLASCO: Hoy no he podido vencerte,\n"
# 155 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, pero uno de estos días…\l"
# 156 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡daremos la vuelta a la tortilla!\p"
# 157 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡Llegaré a la LIGA POKéMON!$"
# 158 "data/maps/VictoryRoad_1F/scripts.pory"

# 159 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarIntro:
# 160 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "He llegado hasta aquí un par de veces,\n"
# 161 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "pero el último tramo es tan difícil…$"
# 162 "data/maps/VictoryRoad_1F/scripts.pory"

# 163 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarDefeat:
# 164 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Hala, otra vez he perdido…$"
# 165 "data/maps/VictoryRoad_1F/scripts.pory"

# 166 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarPostBattle:
# 167 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Has llegado muy lejos. Sigue así\n"
# 168 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "y llegarás a la cima del CAMPEONATO.\l"
# 169 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡Si alguien puede, eres tú!$"
# 170 "data/maps/VictoryRoad_1F/scripts.pory"

# 171 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertIntro:
# 172 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡No he llegado hasta aquí para perder\n"
# 173 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "ahora! ¡Eso no es una opción!$"
# 174 "data/maps/VictoryRoad_1F/scripts.pory"

# 175 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertDefeat:
# 176 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "No puede ser…\n"
# 177 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "He perdido…$"
# 178 "data/maps/VictoryRoad_1F/scripts.pory"

# 179 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertPostBattle:
# 180 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "He perdido este combate…\p"
# 181 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Eso quiere decir que no estoy\n"
# 182 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "cualificado para ser CAMPEÓN…$"
# 183 "data/maps/VictoryRoad_1F/scripts.pory"

# 184 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeIntro:
# 185 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "El camino hasta la VICTORIA\n"
# 186 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "es largo y tortuoso, como esta calle…$"
# 187 "data/maps/VictoryRoad_1F/scripts.pory"

# 188 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeDefeat:
# 189 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡Tú sí que sabes combatir!$"
# 190 "data/maps/VictoryRoad_1F/scripts.pory"

# 191 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopePostBattle:
# 192 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Parece que tienes madera. Creo que\n"
# 193 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "puedes hacerte con el CAMPEONATO.$"
# 194 "data/maps/VictoryRoad_1F/scripts.pory"

# 195 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyIntro:
# 196 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¿Que qué es la CALLE VICTORIA?\n"
# 197 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡Te lo diré si me ganas!$"
# 198 "data/maps/VictoryRoad_1F/scripts.pory"

# 199 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyDefeat:
# 200 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡Perfecto!\n"
# 201 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "¡Bien hecho!$"
# 202 "data/maps/VictoryRoad_1F/scripts.pory"

# 203 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyPostBattle:
# 204 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Llegar hasta aquí de una pieza es la\n"
# 205 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "prueba final para cualquier ENTRENADOR\l"
# 206 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "que quiera hacerse con el CAMPEONATO.\p"
# 207 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Por eso se llama CALLE VICTORIA.$"
# 208 "data/maps/VictoryRoad_1F/scripts.pory"

# 209 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnIntro:
# 210 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "No tengo nada que decir a quien\n"
# 211 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "ya ha llegado tan lejos. ¡Adelante!$"
# 212 "data/maps/VictoryRoad_1F/scripts.pory"

# 213 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnDefeat:
# 214 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Qué vergüenza más grande…$"
# 215 "data/maps/VictoryRoad_1F/scripts.pory"

# 216 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnPostBattle:
# 217 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "En fin, sigue avanzando.\n"
# 218 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Lo que hagas me importa un comino.$"
