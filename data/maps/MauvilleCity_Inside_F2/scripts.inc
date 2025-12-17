MauvilleCity_Inside_F2_MapScripts::
# 2 "data/maps/MauvilleCity_Inside_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_Inside_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauvilleCity_Inside_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MauvilleCity_Inside_F2/scripts.pory"
	goto_if_set FLAG_MAUVILLE_VACANT_HOUSE_OCCUPIED, MauvilleCity_Inside_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MauvilleCity_Inside_F2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/MauvilleCity_Inside_F2/scripts.pory"
	setmaplayoutindex LAYOUT_MAUVILLE_CITY_INSIDE_HOUSE3
# 5 "data/maps/MauvilleCity_Inside_F2/scripts.pory"
	setweather WEATHER_NONE
	return

