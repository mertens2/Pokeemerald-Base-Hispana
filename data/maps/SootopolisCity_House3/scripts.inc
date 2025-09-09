# 1 "data/maps/SootopolisCity_House3/scripts.pory"

# 2 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_MapScripts::
# 3 "data/maps/SootopolisCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House3/scripts.pory"

# 5 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_Woman::
# 6 "data/maps/SootopolisCity_House3/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_House3/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_JuanHasManyFansDoYou, MSGBOX_YESNO
# 9 "data/maps/SootopolisCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_House3_EventScript_HaveFans
# 10 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_LonesomeTryWorkingHarder, MSGBOX_DEFAULT
# 11 "data/maps/SootopolisCity_House3/scripts.pory"
	release
# 12 "data/maps/SootopolisCity_House3/scripts.pory"
	end
# 13 "data/maps/SootopolisCity_House3/scripts.pory"

# 14 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_HaveFans::
# 15 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_YouMustBePrettyStrong, MSGBOX_DEFAULT
# 16 "data/maps/SootopolisCity_House3/scripts.pory"
	release
# 17 "data/maps/SootopolisCity_House3/scripts.pory"
	end
# 18 "data/maps/SootopolisCity_House3/scripts.pory"

# 19 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_Girl::
# 20 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_TrainerFanClubWasWild, MSGBOX_NPC
# 21 "data/maps/SootopolisCity_House3/scripts.pory"
	end
# 22 "data/maps/SootopolisCity_House3/scripts.pory"

# 23 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_JuanHasManyFansDoYou:
# 24 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Tú entrenas POKéMON, ¿verdad?\p"
# 25 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "GALANO, de ARRECÍPOLIS, tiene muchos\n"
# 26 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "fans. ¡Más que su alumno PLUBIO!\p"
# 27 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "¿Y tú? ¿Tienes alguno?$"
# 28 "data/maps/SootopolisCity_House3/scripts.pory"

# 29 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_YouMustBePrettyStrong:
# 30 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Vaya, pues entonces debes de ser\n"
# 31 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "tremendamente fuerte…$"
# 32 "data/maps/SootopolisCity_House3/scripts.pory"

# 33 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_LonesomeTryWorkingHarder:
# 34 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Oh, qué pena… Todos necesitamos\n"
# 35 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "que alguien nos apoye…\p"
# 36 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Pero, si entrenas mucho, seguro\n"
# 37 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "que consigues algún fan sólo para ti.$"
# 38 "data/maps/SootopolisCity_House3/scripts.pory"

# 39 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_TrainerFanClubWasWild:
# 40 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Muchos fans vienen incluso desde\n"
# 41 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "más allá de HOENN.\p"
# 42 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Yo me lo pasé pipa cuando fui\n"
# 43 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "al CLUB de FANS de ENTRENADORES\l"
# 44 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "que hay en CALAGUA.$"
