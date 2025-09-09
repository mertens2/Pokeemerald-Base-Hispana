# 1 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 2 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_MapScripts::
# 3 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_OnTransition
# 4 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 6 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_OnTransition:
# 7 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
# 8 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 9 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 10 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Owner::
# 11 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lock
# 12 "data/maps/Route109_SeashoreHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_6_SODA_POP, Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop
# 14 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_SEASHORE_HOUSE, Route109_SeashoreHouse_EventScript_DefeatedTrainers
# 15 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction
# 16 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SeashoreHouseIntro, MSGBOX_DEFAULT
# 17 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 18 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 19 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 20 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 21 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction::
# 22 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
# 23 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 24 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 25 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 26 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_DefeatedTrainers::
# 27 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles, MSGBOX_DEFAULT
# 28 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP, 6
# 29 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_BagFull
# 30 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_RECEIVED_6_SODA_POP
# 31 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 32 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 33 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 34 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BagFull::
# 35 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_BagFull, MSGBOX_DEFAULT
# 36 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 37 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 38 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 39 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop::
# 40 "data/maps/Route109_SeashoreHouse/scripts.pory"
	showmoneybox 0, 0
# 41 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_WantToBuySodaPop, MSGBOX_YESNO
# 42 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route109_SeashoreHouse_EventScript_BuySodaPop
# 43 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ThatsTooBad, MSGBOX_DEFAULT
# 44 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 45 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 46 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 47 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 48 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BuySodaPop::
# 49 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkmoney 300
# 50 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughMoney
# 51 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkitemspace ITEM_SODA_POP
# 52 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughSpace
# 53 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_HereYouGo, MSGBOX_DEFAULT
# 54 "data/maps/Route109_SeashoreHouse/scripts.pory"
	removemoney 300
# 55 "data/maps/Route109_SeashoreHouse/scripts.pory"
	updatemoneybox
# 56 "data/maps/Route109_SeashoreHouse/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS != OW_ITEM_DESCRIPTIONS_OFF
# 57 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 58 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP
# 59 "data/maps/Route109_SeashoreHouse/scripts.pory"
.else
# 60 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP
# 61 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 62 "data/maps/Route109_SeashoreHouse/scripts.pory"
.endif
# 63 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 64 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 65 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 66 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughMoney::
# 67 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 68 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 69 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 70 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 71 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 72 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughSpace::
# 73 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 74 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 75 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 76 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 77 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 78 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Dwayne::
# 79 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 80 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 82 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 83 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Johanna::
# 84 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 85 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 87 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 88 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Simon::
# 89 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_SIMON, Route109_SeashoreHouse_Text_SimonIntro, Route109_SeashoreHouse_Text_SimonDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 90 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 92 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 93 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
# 94 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_DWAYNE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 95 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_JOHANNA, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 96 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_SIMON, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 97 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_DEFEATED_SEASHORE_HOUSE
# 98 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 99 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 100 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 101 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
# 102 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 103 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 104 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 105 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SeashoreHouseIntro:
# 106 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Soy el dueño de la CASA de la PLAYA,\n"
# 107 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "pero me puedes llamar SR. MARINO.\p"
# 108 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Lo que más me gusta del mundo es ver\n"
# 109 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "combates POKéMON bien candentes.\p"
# 110 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡A ver si tú también peleas con pasión!\p"
# 111 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Si logras derrotar a todos los\n"
# 112 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "ENTRENADORES, tendrás una recompensa.$"
# 113 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 114 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ShowMeSomeHotMatches:
# 115 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡Me encantan los combates al rojo vivo!\p"
# 116 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Tengo esta CASA de la PLAYA sólo\n"
# 117 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "y exclusivamente por eso.$"
# 118 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 119 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles:
# 120 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡Eres como un volcán en erupción!\n"
# 121 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡Esos combates han sido tremendos!\l"
# 122 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡Estoy la mar de satisfecho!\p"
# 123 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Qué bien que te haya podido ver\n"
# 124 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "en racha. Toma esto como regalo.\p"
# 125 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡Son seis botellas de REFRESCO!$"
# 126 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 127 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_BagFull:
# 128 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Eh, tienes la MOCHILA que va a estallar.\n"
# 129 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Te las voy a guardar mientras…$"
# 130 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 131 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_WantToBuySodaPop:
# 132 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¿Quieres comprar un REFRESCO?\n"
# 133 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡A los POKéMON les chifla!\p"
# 134 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡Sólo son 300¥ la botella!\n"
# 135 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡Está tirado!$"
# 136 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 137 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_HereYouGo:
# 138 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡Aquí tienes!$"
# 139 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 140 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_NotEnoughMoney:
# 141 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Oye, estás sin blanca…$"
# 142 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 143 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ThatsTooBad:
# 144 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¿No quieres?\n"
# 145 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡Tú te lo pierdes!$"
# 146 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 147 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneIntro:
# 148 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡Si buscas combates en alta mar, yo\n"
# 149 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "soy el ENTRENADOR adecuado, grumete!$"
# 150 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 151 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneDefeated:
# 152 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡Éste ha sido un señor combate!\n"
# 153 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡Acepto la derrota, grumete!$"
# 154 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 155 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwaynePostBattle:
# 156 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Ir a CIUDAD PORTUAL es sinónimo\n"
# 157 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "de combates al rojo vivo y REFRESCOS\l"
# 158 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "helados. ¡Todo un contraste!$"
# 159 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 160 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaIntro:
# 161 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Las peleas aburridas no valen la pena.\p"
# 162 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Los combates feroces sí que hacen\n"
# 163 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "mejorar a ENTRENADORES y POKéMON.$"
# 164 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 165 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaDefeated:
# 166 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "¡Más feroz que el lobo de Caperucita!$"
# 167 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 168 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaPostBattle:
# 169 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Bueno, tengo una sed que me muero.\n"
# 170 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Voy a comprarme un REFRESCO.$"
# 171 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 172 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonIntro:
# 173 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Te voy a demostrar que mis POKéMON\n"
# 174 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "no tienen rival. ¡Luego no te quejes!$"
# 175 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 176 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonDefeated:
# 177 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "He perdido, pero no me quejo…$"
# 178 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 179 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonPostBattle:
# 180 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Si alguno de mis POKéMON supiera\n"
# 181 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "el movimiento que te transporta por\l"
# 182 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "el agua, podría olvidarme del flotador…$"
