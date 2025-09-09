# 1 "data/maps/OldaleRuinsInsideF1/scripts.pory"

# 2 "data/maps/OldaleRuinsInsideF1/scripts.pory"
OldaleRuinsInsideF1_MapScripts::
# 3 "data/maps/OldaleRuinsInsideF1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/OldaleRuinsInsideF1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleRuinsInsideF1_FixHoleWarp
# 5 "data/maps/OldaleRuinsInsideF1/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, OldaleRuinsInsideF1_SetHoleWarp
# 6 "data/maps/OldaleRuinsInsideF1/scripts.pory"
	.byte 0
# 7 "data/maps/OldaleRuinsInsideF1/scripts.pory"

# 8 "data/maps/OldaleRuinsInsideF1/scripts.pory"

# 9 "data/maps/OldaleRuinsInsideF1/scripts.pory"
OldaleRuinsInsideF1_SetHoleWarp::
# 10 "data/maps/OldaleRuinsInsideF1/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 11 "data/maps/OldaleRuinsInsideF1/scripts.pory"
	setholewarp MAP_OLDALE_RUINS_INSIDE_BF1
# 12 "data/maps/OldaleRuinsInsideF1/scripts.pory"
	end
# 13 "data/maps/OldaleRuinsInsideF1/scripts.pory"

# 14 "data/maps/OldaleRuinsInsideF1/scripts.pory"
OldaleRuinsInsideF1_FixHoleWarp::
# 15 "data/maps/OldaleRuinsInsideF1/scripts.pory"
	call CaveHole_FixCrackedGround
# 16 "data/maps/OldaleRuinsInsideF1/scripts.pory"
	end
