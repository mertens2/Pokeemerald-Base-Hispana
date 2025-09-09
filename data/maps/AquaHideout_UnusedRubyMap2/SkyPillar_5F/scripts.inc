# 1 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_5F/scripts.pory"

# 2 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_5F/scripts.pory"
SkyPillar_5F_MapScripts::
# 3 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_5F_OnTransition
# 4 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_5F/scripts.pory"
	.byte 0
# 5 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_5F/scripts.pory"

# 6 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_5F/scripts.pory"
SkyPillar_5F_OnTransition:
# 7 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_5F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_5F_EventScript_CleanFloor
# 8 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_5F/scripts.pory"
	return
# 9 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_5F/scripts.pory"

# 10 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_5F/scripts.pory"
SkyPillar_5F_EventScript_CleanFloor::
# 11 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_5F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_5F_CLEAN
# 12 "data/maps/AquaHideout_UnusedRubyMap2/SkyPillar_5F/scripts.pory"
	return
