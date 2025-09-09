# 1 "data/maps/AquaHideout_UnusedRubyMap2/ScorchedSlab/scripts.pory"

# 2 "data/maps/AquaHideout_UnusedRubyMap2/ScorchedSlab/scripts.pory"
ScorchedSlab_MapScripts::
# 3 "data/maps/AquaHideout_UnusedRubyMap2/ScorchedSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlab_OnTransition
# 4 "data/maps/AquaHideout_UnusedRubyMap2/ScorchedSlab/scripts.pory"
	.byte 0
# 5 "data/maps/AquaHideout_UnusedRubyMap2/ScorchedSlab/scripts.pory"

# 6 "data/maps/AquaHideout_UnusedRubyMap2/ScorchedSlab/scripts.pory"
ScorchedSlab_OnTransition:
# 7 "data/maps/AquaHideout_UnusedRubyMap2/ScorchedSlab/scripts.pory"
	setflag FLAG_LANDMARK_SCORCHED_SLAB
# 8 "data/maps/AquaHideout_UnusedRubyMap2/ScorchedSlab/scripts.pory"
	end
