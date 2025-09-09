# 1 "data/maps/MtPyre_4F/scripts.pory"

# 2 "data/maps/MtPyre_4F/scripts.pory"
MtPyre_4F_MapScripts::
# 3 "data/maps/MtPyre_4F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_4F/scripts.pory"

# 5 "data/maps/MtPyre_4F/scripts.pory"
@ Seems like the scripts for the 4F and 5F were swapped
# 6 "data/maps/MtPyre_4F/scripts.pory"

# 7 "data/maps/MtPyre_4F/scripts.pory"
MtPyre_5F_EventScript_Atsushi::
# 8 "data/maps/MtPyre_4F/scripts.pory"
	trainerbattle_single TRAINER_ATSUSHI, MtPyre_5F_Text_AtsushiIntro, MtPyre_5F_Text_AtsushiDefeat
# 9 "data/maps/MtPyre_4F/scripts.pory"
	msgbox MtPyre_5F_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
# 10 "data/maps/MtPyre_4F/scripts.pory"
	end
# 11 "data/maps/MtPyre_4F/scripts.pory"

# 12 "data/maps/MtPyre_4F/scripts.pory"
MtPyre_5F_Text_AtsushiIntro:
# 13 "data/maps/MtPyre_4F/scripts.pory"
	.string "El espíritu de mi maestro me observa…\n"
# 14 "data/maps/MtPyre_4F/scripts.pory"
	.string "¡Y verá que he mejorado una burrada!$"
# 15 "data/maps/MtPyre_4F/scripts.pory"

# 16 "data/maps/MtPyre_4F/scripts.pory"
MtPyre_5F_Text_AtsushiDefeat:
# 17 "data/maps/MtPyre_4F/scripts.pory"
	.string "El espíritu de mi maestro me observa…\n"
# 18 "data/maps/MtPyre_4F/scripts.pory"
	.string "Y me has dejado hecho un guiñapo…$"
# 19 "data/maps/MtPyre_4F/scripts.pory"

# 20 "data/maps/MtPyre_4F/scripts.pory"
MtPyre_5F_Text_AtsushiPostBattle:
# 21 "data/maps/MtPyre_4F/scripts.pory"
	.string "Debo mejorar para que el espíritu\n"
# 22 "data/maps/MtPyre_4F/scripts.pory"
	.string "de mi maestro pueda descansar en paz…$"
