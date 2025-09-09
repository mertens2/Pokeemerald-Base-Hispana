# 1 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ This NPC gives hints about a random facility or battle mode.
# 6 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ For battle modes he gives generic advice
# 7 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ For facilities, depending on how far the player has progressed he will say either
# 8 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@    The name of the Frontier Brain there
# 9 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@    The type and description of the 3 pokemon they use in their silver battle
# 10 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@    The type and description of the 3 pokemon they use in their gold battle
# 11 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_FrontierManiac::
# 12 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 13 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	faceplayer
# 14 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_set FLAG_MET_BATTLE_FRONTIER_MANIAC, BattleFrontier_Lounge2_EventScript_AlreadyMetManiac
# 15 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_MANIAC
# 16 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_FrontierManiacIntro, MSGBOX_DEFAULT
# 17 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
# 18 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 20 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_AlreadyMetManiac::
# 21 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_SwingByForTheLatestWord, MSGBOX_DEFAULT
# 22 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
# 23 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 24 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 25 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice::
# 26 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_SINGLES, BattleFrontier_Lounge2_EventScript_BufferSingle
# 27 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_DOUBLES, BattleFrontier_Lounge2_EventScript_BufferDouble
# 28 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_MULTIS, BattleFrontier_Lounge2_EventScript_BufferMulti
# 29 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BufferMultiLink
# 30 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_BufferBattleDome
# 31 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_FACTORY, BattleFrontier_Lounge2_EventScript_BufferBattleFactory
# 32 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PALACE, BattleFrontier_Lounge2_EventScript_BufferBattlePalace
# 33 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_ARENA, BattleFrontier_Lounge2_EventScript_BufferBattleArena
# 34 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PIKE, BattleFrontier_Lounge2_EventScript_BufferBattlePike
# 35 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PYRAMID, BattleFrontier_Lounge2_EventScript_BufferBattlePyramid
# 36 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ <= FRONTIER_MANIAC_TOWER_LINK is any Battle Tower mode
# 37 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_le VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BattleTowerNews
# 38 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ >= FRONTIER_MANIAC_DOME is any facility other than Battle Tower
# 39 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_ge VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_FacilityNews
# 40 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	special ShowFrontierManiacMessage
# 41 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	waitmessage
# 42 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	waitbuttonpress
# 43 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 44 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 45 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 46 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BattleTowerNews::
# 47 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_BattleTowerIsHottest, MSGBOX_DEFAULT
# 48 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 49 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 50 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_FacilityNews::
# 51 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_FacilityIsHottest, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 53 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 54 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferSingle::
# 55 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
# 56 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 57 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 58 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferDouble::
# 59 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
# 60 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 61 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 62 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferMulti::
# 63 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
# 64 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 65 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 66 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferMultiLink::
# 67 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
# 68 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 69 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 70 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattleDome::
# 71 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_DOME
# 72 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 73 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 74 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattleFactory::
# 75 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_FACTORY
# 76 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 77 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 78 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattlePalace::
# 79 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PALACE
# 80 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 81 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 82 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattleArena::
# 83 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_ARENA
# 84 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 85 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 86 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattlePike::
# 87 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PIKE
# 88 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 89 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 90 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattlePyramid::
# 91 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PYRAMID
# 92 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 93 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 94 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_Maniac1::
# 95 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 96 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_NewsGatheringPower, MSGBOX_DEFAULT
# 97 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 98 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 99 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 100 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_Maniac2::
# 101 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 102 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_AmazingPowersOfObservation, MSGBOX_DEFAULT
# 103 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 104 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 105 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 106 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_Maniac3::
# 107 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 108 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion, MSGBOX_DEFAULT
# 109 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 110 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 111 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 112 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_TriathleteF::
# 113 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe, MSGBOX_NPC
# 114 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 115 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 116 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FrontierManiacIntro::
# 117 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Eh, qué tal! Si quieres saber algo sobre\n"
# 118 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "el FRENTE de BATALLA, yo soy tu hombre.\p"
# 119 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Se puede decir que soy\n"
# 120 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "el FOROFO del FRENTE.\p"
# 121 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Sólo para asegurarme,\n"
# 122 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "tú entrenas POKéMON, ¿verdad?\p"
# 123 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Pues estaré encantado de contarte las\n"
# 124 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "últimas noticias del FRENTE de BATALLA.$"
# 125 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 126 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SwingByForTheLatestWord::
# 127 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Qué tal? ¿Has venido a preguntarme\n"
# 128 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "qué es lo que más está de moda?$"
# 129 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 130 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ Unused
# 131 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight::
# 132 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Well? Well? Well?\p"
# 133 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "I’m sure my information’s been\n"
# 134 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "seriously useful to you, right?$"
# 135 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 136 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FacilityIsHottest::
# 137 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Déjame pensar…\p"
# 138 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Yo diría que…, sí,\n"
# 139 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "{STR_VAR_1}, sin duda.$"
# 140 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 141 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_BattleTowerIsHottest::
# 142 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Déjame pensar…\p"
# 143 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Creo que {STR_VAR_1},\n"
# 144 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de TORRE BATALLA, es lo que más mola.$"
# 145 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 146 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SalonMaidenIsThere::
# 147 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Seguro que no lo sabías!\p"
# 148 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Allí hay una ENTRENADORA\n"
# 149 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de esas a las que TRETO denomina\l"
# 150 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "AS del FRENTE.\p"
# 151 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Es la misteriosa DAMA de la TORRE,\n"
# 152 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "y es la que hace y deshace por allí.$"
# 153 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 154 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SalonMaidenSilverMons::
# 155 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 156 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a la DAMA de la TORRE?\p"
# 157 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Para medir las fuerzas de su adversario,\n"
# 158 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "suele usar estos POKéMON:\p"
# 159 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Un POKéMON PSI de tipo PSÍQUICO,\n"
# 160 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "un POKéMON VOLCÁN de tipo FUEGO\l"
# 161 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "y un POKéMON DORMIR de tipo NORMAL.$"
# 162 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 163 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SalonMaidenGoldMons::
# 164 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 165 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a la DAMA de la TORRE en serio?\p"
# 166 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Cuando pone toda la carne en el asador,\n"
# 167 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "parece que usa estos POKéMON:\p"
# 168 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Un POKéMON EÓN de tipo PSÍQUICO y\n"
# 169 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "DRAGÓN, un POKéMON TRUENO de tipo\l"
# 170 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "ELÉCTRICO y un POKéMON DORMIR\l"
# 171 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de tipo NORMAL.$"
# 172 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 173 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DomeAceIsThere::
# 174 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Seguro que no lo sabías!\p"
# 175 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Allí hay un ENTRENADOR de esos\n"
# 176 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "que TRETO denomina AS del FRENTE.\p"
# 177 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Es el extravagante ASTRO de la CÚPULA\n"
# 178 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "y es el jefe de allí, vaya.$"
# 179 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 180 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DomeAceSilverMons::
# 181 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 182 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "al ASTRO de la CÚPULA?\p"
# 183 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Cuando no quiere cebarse con el rival,\n"
# 184 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "suele usar estos tres POKéMON:\p"
# 185 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Un POKéMON DRAGÓN de tipo DRAGÓN\n"
# 186 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "y VOLADOR, un POKéMON PEZ LODO\l"
# 187 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de tipo AGUA y TIERRA, y un POKéMON\l"
# 188 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "LLAMA de tipo FUEGO y VOLADOR.$"
# 189 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 190 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DomeAceGoldMons::
# 191 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 192 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "al ASTRO de la CÚPULA en serio?\p"
# 193 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Cuando quiere demostrar lo que sabe,\n"
# 194 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "suele usar estos tres POKéMON:\p"
# 195 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Un POKéMON EÓN de tipo DRAGÓN y\n"
# 196 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "PSÍQUICO, un POKéMON PEZ LODO de tipo\l"
# 197 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "AGUA y TIERRA, y un POKéMON PATA\l"
# 198 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "HIERRO de tipo ACERO y PSÍQUICO.$"
# 199 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 200 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FactoryHeadIsThere::
# 201 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Apuesto a que no lo sabías!\p"
# 202 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Allí hay un ENTRENADOR de esos\n"
# 203 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "que TRETO denomina AS del FRENTE.\p"
# 204 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Es un tipo un poco raro, pero la cosa\n"
# 205 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "es que es el JEFE de la FÁBRICA.$"
# 206 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 207 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FactoryHeadSilverMons::
# 208 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 209 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "al JEFE de la FÁBRICA?\p"
# 210 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Si mal no recuerdo, en combate\n"
# 211 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "suele alquilar sólo tres POKéMON:\p"
# 212 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Suele luchar en igualdad\n"
# 213 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de condiciones contra su rival.$"
# 214 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 215 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FactoryHeadGoldMons::
# 216 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 217 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "al JEFE de la FÁBRICA en serio?\p"
# 218 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Aunque el combate vaya en serio,\n"
# 219 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "sigue alquilando sólo tres POKéMON:\p"
# 220 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Siempre lucha en igualdad\n"
# 221 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de condiciones contra su rival.$"
# 222 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 223 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PikeQueenIsThere::
# 224 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Apuesto a que no lo sabías!\p"
# 225 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Allí hay una ENTRENADORA\n"
# 226 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de esas a las que TRETO denomina\l"
# 227 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "AS del FRENTE.\p"
# 228 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Da un miedo terrible,\n"
# 229 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡es la REINA de la SIERPE!$"
# 230 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 231 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PikeQueenSilverMons::
# 232 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 233 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a la REINA de la SIERPE?\p"
# 234 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Cuando está de buenas, suele\n"
# 235 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "usar estos tres POKéMON:\p"
# 236 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Un POKéMON COLMILLOS de tipo VENENO,\n"
# 237 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "un POKéMON MOHO de tipo BICHO y ROCA,\l"
# 238 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "y un POKéMON TIERNO de tipo AGUA.$"
# 239 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 240 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PikeQueenGoldMons::
# 241 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 242 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a la REINA de la SIERPE en serio?\p"
# 243 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Cuando está furiosa de verdad,\n"
# 244 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "suele usar estos tres POKéMON:\p"
# 245 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Un POKéMON COLMILLOS de tipo VENENO,\n"
# 246 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "un POKéMON SERPFÉRREA de tipo ACERO\l"
# 247 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "y TIERRA, y un POKéMON ATROCIDAD\l"
# 248 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de tipo AGUA y VOLADOR.$"
# 249 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 250 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ArenaTycoonIsThere::
# 251 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Apuesto a que no lo sabías!\p"
# 252 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Allí hay una ENTRENADORA\n"
# 253 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de esas a las que TRETO denomina\l"
# 254 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "AS del FRENTE.\p"
# 255 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Es una belleza, es la MAESTRA del DOJO.\n"
# 256 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Parece que es quien manda allí.$"
# 257 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 258 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons::
# 259 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 260 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a la MAESTRA del DOJO?\p"
# 261 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Cuando está calibrando las fuerzas del\n"
# 262 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "enemigo, suele usar estos tres POKéMON:\p"
# 263 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Un POKéMON UNICORNIO de tipo BICHO\n"
# 264 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "y LUCHA, un POKéMON LUZ LUNAR\l"
# 265 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de tipo SINIESTRO y un POKéMON MUDA\l"
# 266 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de tipo BICHO y FANTASMA.$"
# 267 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 268 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons::
# 269 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 270 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a la MAESTRA del DOJO en serio?\p"
# 271 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Cuando da el todo por el todo,\n"
# 272 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "suele usar estos tres POKéMON:\p"
# 273 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Un POKéMON LUZ LUNAR de tipo\n"
# 274 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "SINIESTRO, un POKéMON SOMBRA de tipo\l"
# 275 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "FANTASMA y VENENO, y un POKéMON\l"
# 276 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "HONGO de tipo PLANTA y LUCHA.$"
# 277 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 278 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PalaceMavenIsThere::
# 279 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Apuesto a que no lo sabías!\p"
# 280 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Allí hay un ENTRENADOR de esos\n"
# 281 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "que TRETO denomina AS del FRENTE.\p"
# 282 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Es un ENTRENADOR siniestro llamado\n"
# 283 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "AMO del PALACIO, y es el que manda allí.$"
# 284 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 285 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PalaceMavenSilverMons::
# 286 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 287 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "al AMO del PALACIO?\p"
# 288 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Cuando quiere poner a prueba al rival,\n"
# 289 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "dicen que suele usar estos POKéMON:\p"
# 290 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Un POKéMON MURCIÉLAGO de tipo VENENO\n"
# 291 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "y VOLADOR, un POKéMON HOLGAZÁN de\l"
# 292 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "tipo NORMAL y un POKéMON TRANSPORTE\l"
# 293 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de tipo AGUA y HIELO.$"
# 294 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 295 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PalaceMavenGoldMons::
# 296 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 297 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "al AMO del PALACIO en serio?\p"
# 298 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Cuando se la juega de verdad,\n"
# 299 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "dicen que usa estos POKéMON:\p"
# 300 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Un POKéMON LEGENDARIO de tipo FUEGO,\n"
# 301 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "un POKéMON HOLGAZÁN de tipo NORMAL\l"
# 302 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "y un POKéMON AURORA de tipo AGUA.$"
# 303 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 304 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PyramidKingIsThere::
# 305 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Apuesto a que no lo sabías!\p"
# 306 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Allí hay un ENTRENADOR de esos\n"
# 307 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "que TRETO denomina AS del FRENTE.\p"
# 308 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Es el feroz ENTRENADOR al que llaman\n"
# 309 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "REY de la PIRÁMIDE,\l"
# 310 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "y allí es como el dueño.$"
# 311 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 312 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PyramidKingSilverMons::
# 313 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 314 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "al REY de la PIRÁMIDE?\p"
# 315 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Cuando quiere probar al enemigo,\n"
# 316 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "usa siempre estos POKéMON:\p"
# 317 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Un POKéMON PICO ROCA de tipo ROCA,\n"
# 318 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "un POKéMON ICEBERG de tipo HIELO\l"
# 319 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "y un POKéMON HIERRO de tipo ACERO.$"
# 320 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 321 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PyramidKingGoldMons::
# 322 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¿Te has enfrentado alguna vez\n"
# 323 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "al REY de la PIRÁMIDE en serio?\p"
# 324 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Cuando no se anda con chiquitas,\n"
# 325 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "usa siempre estos POKéMON:\p"
# 326 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Un POKéMON CONGELAR de tipo HIELO\n"
# 327 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "y VOLADOR, un POKéMON ELÉCTRICO\l"
# 328 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de tipo ELÉCTRICO y VOLADOR, y un\l"
# 329 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "POKéMON LLAMA de tipo FUEGO y VOLADOR.$"
# 330 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 331 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DoubleBattleAdvice1::
# 332 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Claro, hay varios sitios donde puedes\n"
# 333 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "enfrentarte en COMBATES DOBLES.\p"
# 334 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Pero digamos que lo básico son las\n"
# 335 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "SALAS BATALLA de COMBATES DOBLES\l"
# 336 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "de la TORRE BATALLA.\p"
# 337 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Es donde se aprende de verdad\n"
# 338 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a entablar COMBATES DOBLES\l"
# 339 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "en el FRENTE de BATALLA.$"
# 340 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 341 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DoubleBattleAdvice2::
# 342 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ten cuidado en los combates de aquí.\p"
# 343 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "He oído que hay ENTRENADORES\n"
# 344 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "que han creado estrategias sólo\l"
# 345 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "para los COMBATES DOBLES.$"
# 346 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 347 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DoubleBattleAdvice3::
# 348 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Cuando creas que dominas los COMBATES\n"
# 349 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "DOBLES de aquí, podrás pensar en ir\l"
# 350 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "a otros lugares donde también haya.$"
# 351 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 352 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_MultiBattleAdvice::
# 353 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "En el SALÓN BATALLA se juntan\n"
# 354 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "todo tipo de ENTRENADORES.\p"
# 355 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Piénsalo, igual hasta te encuentras\n"
# 356 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "con tus amigos o con tus seguidores!\l"
# 357 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Busca y seguro que encuentras!$"
# 358 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 359 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice::
# 360 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Si estás con un amigo, ve a la\n"
# 361 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "SALA BATALLA de COMBATES\l"
# 362 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "MULTIJUGADOR con CONEXIÓN.\p"
# 363 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Si tu amigo es muy fuerte, prepárate\n"
# 364 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "para enfrentarte a enemigos muy duros!$"
# 365 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 366 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_NewsGatheringPower::
# 367 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Qué extraordinario poder adivinatorio!\n"
# 368 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Nadie puede compararse a mi mentor!$"
# 369 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 370 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_AmazingPowersOfObservation::
# 371 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Qué magnífico poder de observación!\n"
# 372 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Nadie puede compararse a mi mentor!$"
# 373 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 374 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion::
# 375 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Qué increíble poder de persuasión!\n"
# 376 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Nadie puede compararse a mi mentor!$"
# 377 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 378 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe::
# 379 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "¡Qué sitio más raro!…\n"
# 380 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Me da hasta miedo…$"
