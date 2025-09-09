SafariZone_SpecialArea_MapScripts::
	.byte 0


SafariZone_SpecialArea_EnterFromLeft::
# 4 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	lockall
# 5 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SafariZone_SpecialArea_Movement_WalkRight
# 6 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	waitmovement 0
# 7 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	releaseall
	end


SafariZone_SpecialArea_WantToGoRight::
# 12 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	lockall
# 13 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 14 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	waitmovement 0
# 15 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	msgbox SafariZone_SpecialArea_WantToGoRight_Text_0, MSGBOX_YESNO
# 16 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SafariZone_SpecialArea_WantToGoRight_2
SafariZone_SpecialArea_WantToGoRight_1:
# 19 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	compare VAR_SAFARI_ZONE_RIGHT, 0
	goto_if_eq SafariZone_SpecialArea_WantToGoRight_5
SafariZone_SpecialArea_WantToGoRight_4:
# 23 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 24 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	setdynamicwarp MAP_SAFARI_ZONE_SOUTHEAST, 0, 16
# 25 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	releaseall
	end

SafariZone_SpecialArea_WantToGoRight_2:
# 17 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	msgbox SafariZone_SpecialArea_WantToGoRight_Text_1
	goto SafariZone_SpecialArea_WantToGoRight_1

SafariZone_SpecialArea_WantToGoRight_5:
# 20 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	msgbox SafariZone_SpecialArea_WantToGoRight_Text_2
	goto SafariZone_SpecialArea_WantToGoRight_4


SafariZone_SpecialArea_WantToEnter::
# 30 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	lockall
# 31 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	compare VAR_SAFARI_ZONE_RIGHT, 0
	goto_if_eq SafariZone_SpecialArea_WantToEnter_2
SafariZone_SpecialArea_WantToEnter_1:
# 39 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	setvar VAR_TEMP_1, 1
# 40 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	releaseall
	return

SafariZone_SpecialArea_WantToEnter_2:
# 32 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 33 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	waitmovement 0
# 34 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	msgbox SafariZone_SpecialArea_WantToEnter_Text_0
# 35 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	setvar VAR_SAFARI_ZONE_RIGHT, 1
	goto SafariZone_SpecialArea_WantToEnter_1


SafariZone_SpecialArea_Lass::
# 44 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	lockall
# 45 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	msgbox SafariZone_SpecialArea_Lass_Text_0
# 46 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	releaseall
	return


SafariZone_SpecialArea_Boy::
# 50 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	lockall
# 51 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	msgbox SafariZone_SpecialArea_Boy_Text_0
# 52 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	releaseall
	return


# 57 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
SafariZone_SpecialArea_Movement_WalkRight:
# 58 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	walk_right
	step_end

SafariZone_SpecialArea_WantToGoRight_Text_0:
# 15 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	.string "¡Hola!\p"
	.string "Estás por entrar a la Zona Única de la\n"
	.string "Zona Safari, ¿Quieres una explicación?$"

SafariZone_SpecialArea_WantToGoRight_Text_1:
# 17 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	.string "La Zona Única es un lugar al que sólo los\n"
	.string "mejores Entrenadores pueden\l"
	.string "acceder, y {COLOR RED}cambiará dependiendo de\l"
	.string "qué Zona eligieron al iniciar{COLOR DARK_GRAY}.$"

SafariZone_SpecialArea_WantToGoRight_Text_2:
# 20 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	.string "Veo que aún no has elegido una Zona\n"
	.string "Única para el Área Este. ¿Qué Zona\l"
	.string "eliges?$"

SafariZone_SpecialArea_WantToEnter_Text_0:
# 34 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	.string "¡Hola! Veo que es la primera vez que\n"
	.string "entras aquí... ¿Debes estar\l"
	.string "confundid{OA}, ¿No?\p"
	.string "Pues no te preocupes, puedo explicarte\n"
	.string "lo que necesites.\p"
	.string "Este lugar es la Zona Única de la Zona\n"
	.string "Safari. Aquí, puedes {COLOR RED}personalizar tu\l"
	.string "Zona Safari{COLOR DARK_GRAY}.\p"
	.string "Puedes cambiar a dónde te conducen los\n"
	.string "caminos Sur y Este de esta caseta,\l"
	.string "eligiendo entre 3 opciones para cada\l"
	.string "una.\p"
	.string "¿Cuál opción eliges para la Zona Única\n"
	.string "Sur?$"

SafariZone_SpecialArea_Lass_Text_0:
# 45 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	.string "¡Este lugar es increíble!\n¡Fijé mi Zona Única Sur a Montaña y estoy nadando en Pokémon Tierra, Roca, Acero y Fuego!$"

SafariZone_SpecialArea_Boy_Text_0:
# 51 "data/maps/AquaHideout_UnusedRubyMap2/SafariZone_SpecialArea/scripts.pory"
	.string "¡La Zona Única es genial!\n¡Cada vez que venga, atraparé distintos Pokémon, hasta hay especies redescubiertas como Wyrdeer y un raro Sneasel!$"
