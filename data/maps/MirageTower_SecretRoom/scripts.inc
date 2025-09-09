MirageTower_SecretRoom_MapScripts::
# 2 "data/maps/MirageTower_SecretRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MirageTower_SecretRoom_OnLoad
	.byte 0


MirageTower_SecretRoom_OnLoad::
# 6 "data/maps/MirageTower_SecretRoom/scripts.pory"
	goto_if_unset FLAG_REGIELEKI_DEFEATED, MirageTower_SecretRoom_OnLoad_2
MirageTower_SecretRoom_OnLoad_1:
# 12 "data/maps/MirageTower_SecretRoom/scripts.pory"
	releaseall
	end

MirageTower_SecretRoom_OnLoad_2:
# 7 "data/maps/MirageTower_SecretRoom/scripts.pory"
	clearflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
# 8 "data/maps/MirageTower_SecretRoom/scripts.pory"
	setmetatile 5, 2, 0x211, TRUE
# 9 "data/maps/MirageTower_SecretRoom/scripts.pory"
	setmetatile 5, 1, 0x219, TRUE
# 10 "data/maps/MirageTower_SecretRoom/scripts.pory"
	special DrawWholeMapView
	goto MirageTower_SecretRoom_OnLoad_1


MirageTower_SecretRoom_Braille::
# 17 "data/maps/MirageTower_SecretRoom/scripts.pory"
	braillemsgbox ThunderTomb_Braille_Route111
# 18 "data/maps/MirageTower_SecretRoom/scripts.pory"
	releaseall
	end

