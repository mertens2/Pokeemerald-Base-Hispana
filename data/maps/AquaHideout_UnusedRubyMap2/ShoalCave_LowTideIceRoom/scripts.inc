ShoalCave_LowTideIceRoom_MapScripts::
# 2 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideIceRoom_MapScriptsOnTransition
# 6 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ShoalCave_LowTideIceRoom_MapScriptsOnResume
# 3 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ShoalCave_LowTideIceRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ShoalCave_LowTideIceRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ShoalCave_LowTideIceRoom_MapScriptsOnLoad
	.2byte 0


ShoalCave_LowTideIceRoom_MapScriptsOnTransition::
# 10 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	goto_if_set FLAG_REGIDRAGO_DOOR_UNLOCKED, ShoalCave_LowTideIceRoom_MapScriptsOnTransition_1
	return

ShoalCave_LowTideIceRoom_MapScriptsOnTransition_1:
# 11 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setmetatile 3, 2, 0x3A7, FALSE
# 12 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setmetatile 3, 1, 0x39F, TRUE
# 13 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setmetatile 2, 1, 0x39E, TRUE
# 14 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setmetatile 2, 2, 0x3A6, TRUE
# 15 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setmetatile 4, 1, 0x3A0, TRUE
# 16 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setmetatile 4, 2, 0x3A1, TRUE
# 17 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setmetatile 5, 3, METATILE_Cave_SwitchIcePressed, FALSE
# 18 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setmetatile 3, 7, METATILE_Cave_SwitchIcePressed, FALSE
# 19 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setmetatile 7, 12, METATILE_Cave_SwitchIcePressed, FALSE
# 20 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	special DrawWholeMapView
	return


ShoalCave_LowTideIceRoom_MapScriptsOnResume::
# 25 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setstepcallback STEP_CB_ICE_SWITCH
# 26 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	releaseall
	end


ShoalCave_LowTideIceRoom_MapScriptsOnLoad::
# 31 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmovement 0
# 32 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	goto_if_set FLAG_REGIDRAGO_ALMOST_UNLOCKED, ShoalCave_LowTideIceRoom_MapScriptsOnLoad_6
ShoalCave_LowTideIceRoom_MapScriptsOnLoad_5:
# 53 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	goto_if_set FLAG_REGIDRAGO_DEFEATED, ShoalCave_LowTideIceRoom_MapScriptsOnLoad_3
# 62 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_ENABLED_PC
# 63 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	clearflag FLAG_REGICE_INFLUENCE
# 64 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	clearflag FLAG_HAS_FIRE_POKEMON
ShoalCave_LowTideIceRoom_MapScriptsOnLoad_1:
# 66 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 67 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	releaseall
	end

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_2:
# 33 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	clearflag FLAG_ENABLED_PC
# 34 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar 0x8005, SPECIES_REGICE
# 35 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	special CheckSpecies
# 36 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShoalCave_LowTideIceRoom_MapScriptsOnLoad_9
# 50 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	clearflag FLAG_REGICE_INFLUENCE
	goto ShoalCave_LowTideIceRoom_MapScriptsOnLoad_1

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_3:
# 54 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar 0x8005, SPECIES_REGICE
# 55 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	special CheckSpecies
# 56 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShoalCave_LowTideIceRoom_MapScriptsOnLoad_12
	goto ShoalCave_LowTideIceRoom_MapScriptsOnLoad_1

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_6:
# 32 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	goto_if_unset FLAG_REGIDRAGO_DEFEATED, ShoalCave_LowTideIceRoom_MapScriptsOnLoad_2
	goto ShoalCave_LowTideIceRoom_MapScriptsOnLoad_5

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_9:
# 37 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_REGICE_INFLUENCE
# 38 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_MapScriptsOnLoad_Text_0
# 39 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	checkpartytype TYPE_FIRE
# 40 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShoalCave_LowTideIceRoom_MapScriptsOnLoad_14
# 46 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	clearflag FLAG_HAS_FIRE_POKEMON
	goto ShoalCave_LowTideIceRoom_MapScriptsOnLoad_1

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_12:
# 57 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_REGICE_INFLUENCE
# 58 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	clearflag FLAG_HAS_FIRE_POKEMON
	goto ShoalCave_LowTideIceRoom_MapScriptsOnLoad_1

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_14:
# 41 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_HAS_FIRE_POKEMON
# 42 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 43 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_MapScriptsOnLoad_Text_1
	goto ShoalCave_LowTideIceRoom_MapScriptsOnLoad_1


ShoalCave_LowTideIceRoom_BrailleDoor_One::
# 73 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	braillemsgbox DracoTomb_Braille_First
# 74 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	braillemsgbox DracoTomb_Braille_Second
# 75 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	releaseall
	end


ShoalCave_LowTideIceRoom_BrailleDoor_Two::
# 80 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	goto_if_unset FLAG_REGIDRAGO_DOOR_UNLOCKED, ShoalCave_LowTideIceRoom_BrailleDoor_Two_1
# 93 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_LowTideIceRoom_BrailleDoor_Two_Text_0
	return

ShoalCave_LowTideIceRoom_BrailleDoor_Two_1:
# 81 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	braillemsgbox DracoTomb_Braille_Third
# 82 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_ge ShoalCave_LowTideIceRoom_BrailleDoor_Two_5
# 86 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	braillemsgbox DracoTomb_Braille_OutsideFirstText
# 87 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	braillemsgbox DracoTomb_Braille_OutsideEast
ShoalCave_LowTideIceRoom_BrailleDoor_Two_4:
# 89 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	releaseall
	end

ShoalCave_LowTideIceRoom_BrailleDoor_Two_5:
# 83 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	braillemsgbox DracoTomb_Braille_Fourth
	goto ShoalCave_LowTideIceRoom_BrailleDoor_Two_4


ShoalCave_LowTideIceRoom_BrailleClue_EastNorth::
# 99 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	braillemsgbox DracoTomb_Braille_OutsideNorthEight
# 100 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	releaseall
	end


ShoalCave_LowTideIceRoom_BrailleClue_Hallway::
# 105 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	braillemsgbox DracoTomb_Braille_OutsideHallway
# 106 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	releaseall
	end


ShoalCave_LowTideIceRoom_MapScriptsOnLoad_Text_0:
# 38 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "¡La influencia de Regice te permite\n"
	.string "caminar por el hielo sin preocupaciones!$"

ShoalCave_LowTideIceRoom_MapScriptsOnLoad_Text_1:
# 43 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "¡Oh!\p"
	.string "¡Parece que tu {STR_VAR_1} te está\n"
	.string "prestando su fuerza!\p"
	.string "¡Ahora puedes derretir el hielo con el\n"
	.string "Botón R!$"

ShoalCave_LowTideIceRoom_BrailleDoor_Two_Text_0:
# 93 "data/maps/AquaHideout_UnusedRubyMap2/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "Se ha abierto una puerta.$"
