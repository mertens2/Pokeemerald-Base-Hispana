# 1 "data/maps/SootopolisCity_House2/scripts.pory"

# 2 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_MapScripts::
# 3 "data/maps/SootopolisCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House2/scripts.pory"

# 5 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_EventScript_ExpertF::
# 6 "data/maps/SootopolisCity_House2/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs, MSGBOX_YESNO
# 9 "data/maps/SootopolisCity_House2/scripts.pory"
	call_if_eq VAR_RESULT, YES, SootopolisCity_House2_EventScript_KnowAboutOrbs
# 10 "data/maps/SootopolisCity_House2/scripts.pory"
	call_if_eq VAR_RESULT, NO, SootopolisCity_House2_EventScript_DontKnowAboutOrbs
# 11 "data/maps/SootopolisCity_House2/scripts.pory"
	release
# 12 "data/maps/SootopolisCity_House2/scripts.pory"
	end
# 13 "data/maps/SootopolisCity_House2/scripts.pory"

# 14 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_EventScript_KnowAboutOrbs::
# 15 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_YesTwoOrbsSideBySide, MSGBOX_DEFAULT
# 16 "data/maps/SootopolisCity_House2/scripts.pory"
	return
# 17 "data/maps/SootopolisCity_House2/scripts.pory"

# 18 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_EventScript_DontKnowAboutOrbs::
# 19 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_OughtToVisitAndSee, MSGBOX_DEFAULT
# 20 "data/maps/SootopolisCity_House2/scripts.pory"
	return
# 21 "data/maps/SootopolisCity_House2/scripts.pory"

# 22 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs:
# 23 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "El MONTE PÍRICO…\p"
# 24 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "¿Sabías que en la cumbre hay\n"
# 25 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "dos esferas, una al lado de otra?$"
# 26 "data/maps/SootopolisCity_House2/scripts.pory"

# 27 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_Text_YesTwoOrbsSideBySide:
# 28 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Sí, dos esferas juntas…\p"
# 29 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Y cuando las ves te sientes mucho\n"
# 30 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "más tranquila, no sé por qué.$"
# 31 "data/maps/SootopolisCity_House2/scripts.pory"

# 32 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_Text_OughtToVisitAndSee:
# 33 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "¿Sabes una cosa?\n"
# 34 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Quizás deberías ir a verlas tú.$"
