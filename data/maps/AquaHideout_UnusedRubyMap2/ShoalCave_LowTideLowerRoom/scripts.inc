# 1 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"

# 2 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_MapScripts::
# 3 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideLowerRoom_OnLoad
# 4 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	.byte 0
# 5 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"

# 6 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_OnLoad:
# 7 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	call ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles
# 8 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_REGICE_INFLUENCE, ShoalCave_LowTideLowerRoom_RestoreThingsToNormal
# 9 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 10 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"

# 11 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_RestoreThingsToNormal:
# 12 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	clearflag FLAG_REGICE_INFLUENCE
# 13 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	clearflag FLAG_HAS_FIRE_POKEMON
# 14 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	setflag FLAG_ENABLED_PC
# 15 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	releaseall
# 16 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 17 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"

# 18 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatiles::
# 19 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_4, ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatilesEnd
# 20 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	setmetatile 18, 2, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
# 21 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	return
# 22 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"

# 23 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_SetShoalItemMetatilesEnd::
# 24 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	return
# 25 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"

# 26 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4::
# 27 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	lockall
# 28 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_4, ShoalCave_LowTideLowerRoom_EventScript_ReceivedShoalSalt
# 29 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 30 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 31 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	setmetatile 18, 2, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 32 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	special DrawWholeMapView
# 33 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_4
# 34 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	releaseall
# 35 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 36 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"

# 37 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ReceivedShoalSalt::
# 38 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
# 39 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	releaseall
# 40 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 41 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"

# 42 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_BlackBelt::
# 43 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	lock
# 44 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	faceplayer
# 45 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_FOCUS_BAND, ShoalCave_LowTideLowerRoom_EventScript_ReceivedFocusBand
# 46 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_CanOvercomeColdWithFocus, MSGBOX_DEFAULT
# 47 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 48 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 49 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	setflag FLAG_RECEIVED_FOCUS_BAND
# 50 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
# 51 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 52 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"

# 53 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_EventScript_ReceivedFocusBand::
# 54 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_EverythingStartsWithFocus, MSGBOX_DEFAULT
# 55 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	release
# 56 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	end
# 57 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"

# 58 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_Text_CanOvercomeColdWithFocus:
# 59 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "The penetrating cold around these\n"
# 60 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "parts is an impediment to training.\p"
# 61 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "But with focus, one can overcome!\p"
# 62 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "With this FOCUS BAND, buckle down and\n"
# 63 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "withstand the cold!$"
# 64 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"

# 65 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
ShoalCave_LowTideLowerRoom_Text_EverythingStartsWithFocus:
# 66 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Everything starts with focus!$"
