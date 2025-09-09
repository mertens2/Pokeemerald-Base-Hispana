# 1 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_3F/scripts.pory"

# 2 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_3F/scripts.pory"
SkyPillar_3F_MapScripts::
# 3 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_3F_OnTransition
# 4 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_3F/scripts.pory"
	.byte 0
# 5 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_3F/scripts.pory"

# 6 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_3F/scripts.pory"
SkyPillar_3F_OnTransition:
# 7 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_3F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_3F_EventScript_CleanFloor
# 8 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_3F/scripts.pory"
	end
# 9 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_3F/scripts.pory"

# 10 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_CleanFloor::
# 11 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_3F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_3F_CLEAN
# 12 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_3F/scripts.pory"
	return
