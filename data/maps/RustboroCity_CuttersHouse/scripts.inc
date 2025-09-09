# 1 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 2 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_MapScripts::
# 3 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 5 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Cutter::
# 6 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, RustboroCity_CuttersHouse_EventScript_ExplainCut
# 9 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse, MSGBOX_DEFAULT
# 10 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	giveitem ITEM_HM_CUT
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 13 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 14 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 15 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 16 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_ExplainCut::
# 17 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 18 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 19 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 20 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 21 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Lass::
# 22 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
# 23 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 24 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 25 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse:
# 26 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Esa expresión decidida…\n"
# 27 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Esa manera de caminar…\l"
# 28 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Esos POKéMON tan bien entrenados…\p"
# 29 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Sin duda tú sabes entrenar POKéMON.\p"
# 30 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "No, espera, no digas nada.\n"
# 31 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Me basta con mirarte…\p"
# 32 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Estoy seguro de que puedes\n"
# 33 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "dar buen uso a esta MO.\p"
# 34 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Nada de falsa modestia…\n"
# 35 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Anda, toma.$"
# 36 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 37 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_ExplainCut:
# 38 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Esta MO es CORTE.\p"
# 39 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Un movimiento de MO es aquel que un\n"
# 40 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "POKéMON puede usar fuera del combate.\p"
# 41 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Cualquier POKéMON que haya aprendido\n"
# 42 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "CORTE puede derribar árboles si su\l"
# 43 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "ENTRENADOR tiene la MEDALLA PIEDRA.\p"
# 44 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Y, al contrario de lo que ocurre\n"
# 45 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "con las MT, las MO se pueden usar\l"
# 46 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "más de una vez.$"
# 47 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 48 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees:
# 49 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Mi padre colaboró en las obras de\n"
# 50 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "expansión de CIUDAD FÉRRICA.\p"
# 51 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Hizo que sus POKéMON usaran CORTE\n"
# 52 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "para abrir claros donde construir.$"
