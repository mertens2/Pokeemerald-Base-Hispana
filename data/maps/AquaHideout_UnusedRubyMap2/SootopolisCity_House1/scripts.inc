# 1 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"

# 2 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_MapScripts::
# 3 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"

# 5 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_BrickBreakBlackBelt::
# 6 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	lock
# 7 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	checkitem ITEM_TM70
# 9 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SootopolisCity_House1_EventScript_ReceivedBrickBreak
# 10 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_DevelopedThisTM, MSGBOX_DEFAULT
# 11 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	giveitem ITEM_TM31
# 12 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 13 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
# 14 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	release
# 15 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	end
# 16 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"

# 17 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_ReceivedBrickBreak::
# 18 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
# 19 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	release
# 20 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	end
# 21 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"

# 22 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_Kecleon::
# 23 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	lock
# 24 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	faceplayer
# 25 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	waitse
# 26 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 27 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_Kecleon, MSGBOX_DEFAULT
# 28 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	waitmoncry
# 29 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	release
# 30 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	end
# 31 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"

# 32 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_DevelopedThisTM:
# 33 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	.string "For thirty years I've remained in\n"
# 34 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	.string "SOOTOPOLIS honing my skills.\p"
# 35 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	.string "I developed a shattering TM.\n"
# 36 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	.string "I bequeath it to you!$"
# 37 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"

# 38 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_ExplainBrickBreak:
# 39 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	.string "TM31 contains BRICK BREAK! It's a move\n"
# 40 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	.string "so horrible that I can't describe it.$"
# 41 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"

# 42 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_Kecleon:
# 43 "data/maps/AquaHideout_UnusedRubyMap2/SootopolisCity_House1/scripts.pory"
	.string "KECLEON: Puu puhyaah.$"
