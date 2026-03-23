# 1 "data/maps/MossdeepCity_House3/scripts.pory"

# 2 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_MapScripts::
# 3 "data/maps/MossdeepCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_House3/scripts.pory"

# 5 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_SuperRodFisherman::
# 6 "data/maps/MossdeepCity_House3/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_House3/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_TryDroppingRodInWater, MSGBOX_DEFAULT
# 9 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 10 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 11 "data/maps/MossdeepCity_House3/scripts.pory"

# 12 "data/maps/MossdeepCity_House3/scripts.pory"

# 13 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_TryDroppingRodInWater:
# 14 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Caña de pescar.$"
