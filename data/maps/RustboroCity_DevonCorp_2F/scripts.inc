# 1 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
.set LOCALID_FOSSIL_SCIENTIST, 5
# 3 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_MapScripts::
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.byte 0
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 8 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition:
# 9 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 12 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 17 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 18 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 19 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 22 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer::
# 24 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lockall
# 25 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_TEMP_0
# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 8, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_3
# 27 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 7, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_4
# 28 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 6, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_5
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 5, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_6
# 30 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 4, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_7
# 31 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 3, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_8
# 32 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_9
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_10
# 34 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_11
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_11
# 36 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_11:
# 37 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	addvar VAR_TEMP_0 , 1
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_8
# 39 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1:
# 40 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	releaseall
# 41 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 42 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_3:
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	clearflag VAR_TEMP_0 
# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_0
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	addmoney 100
# 47 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1
# 48 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 49 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_4:
# 50 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	addvar VAR_TEMP_0 , 1
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_1
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1
# 53 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 54 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_5:
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	addvar VAR_TEMP_0 , 1
# 56 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_2
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1
# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_6:
# 60 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	addvar VAR_TEMP_0 , 1
# 61 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_3
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_7:
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	addvar VAR_TEMP_0 , 1
# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_4
# 67 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_8:
# 70 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	addvar VAR_TEMP_0 , 1
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_5
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1
# 73 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_9:
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	addvar VAR_TEMP_0 , 1
# 76 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_6
# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1
# 78 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 79 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_10:
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	addvar VAR_TEMP_0 , 1
# 81 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_7
# 82 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_1
# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 84 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_0:
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "¿Eh? ¡Hay ¥100 escondidos debajo del\n"
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "monitor!$"
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_1:
# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "¿Cómo se llama esto?$"
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 92 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_2:
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "¡Contempla! Una computadora.$"
# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_3:
# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "¿En serio será una computadora?$"
# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_4:
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Computadora.$"
# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_5:
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Sorpresivamente, una computadora.$"
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_6:
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Esto, sin embargo, es\n"
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "una computadora.$"
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_7:
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Y esto…\n"
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Una computadora.$"
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Behold_A_Computer_Text_8:
# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Es una computadora.$"
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist::
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 119 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls::
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
# 127 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil::
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_YESNO
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox Rustboro_Text_WhichOne
# 156 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	chooseitem POCKET_ITEMS
# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Fossils_Check
# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
Rustboro_Text_WhichOne::
# 162 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "¿Qué fósil querrías revivir?$"
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 168 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_ge VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 171 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
# 174 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 176 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 177 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
# 179 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "¡Estamos haciendo una máquina\nque nos deje entender a los Pokémon!\pPero no funciona…$"
# 180 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls:
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "¡Estoy haciendo nuevas Pokéball!\pVoy a buen paso, no debería tardar…$"
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls:
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "¡Lo logramos!\nAdemás de las Malla y Repeat Balls,\lmodificamos otras Balls para\lque sean más útiles.\pPor ejemplo, la Parque Ball funciona\n"
# 186 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "mejor con Pokémon tipo Normal,\lPlanta y Bicho, mientras que\lla Sana Ball funciona mejor\lcon Pokémon tipo Psíquico y Hada.\p"
# 187 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Pero, estoy más orgulloso de mi avance\ncon la Honor Ball, que ahora\lcaptura mejor a Pokémon con ratio de\lcaptura bajo, a cambio de ser\l"
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "terrible con los Pokémon fáciles\lde capturar.$"
# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_IMadePokenav:
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "¡Hice el Pokénav!$"
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
# 194 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Estoy intentando hacer una máquina\npara ver los sueños de los Pokémon.\pNo hay avance…$"
# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "¡Hola! He estado desarrollando\nuna máquina que tiene la capacidad\lde resucitar fósiles…\p"
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "¡Y funciona!\p¿Te gustaría revivir un fósil?\nPuedes elegirlo de la bolsa.$"
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "¡Vuelve pronto!$"
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 203 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "¡Hola! Yo desarrollé la función de\nver el hambre de los Pokémon\len el Pokénav.$"
# 205 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 206 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Me gustaría desarrollar algo nuevo,\nalgo que haga que la mala reputación\lque tiene Devon con los\ladultos mayores mejore.\p¡Ajá! ¡Haré un resurrector\nde bastones rotos!$"
