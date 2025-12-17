MauvilleCity_ToyStore_MapScripts::
	.byte 0


MauvilleCity_ToyStore_Scripts_OldMan::
# 5 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	lock
# 6 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	msgbox MauvilleCity_ToyStore_Text_OldMan
# 7 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	pokemartdecoration2 MauvilleCity_ToyStore_Mart
# 8 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	msgbox MauvilleCity_Inside_CandyShop_Text_EmployeeBye
# 9 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	closemessage
# 10 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	release
	return


MauvilleCity_ToyStore_Scripts_Artist::
# 14 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	lock
# 15 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	msgbox MauvilleCity_ToyStore_Text_Artist
# 16 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	closemessage
# 17 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	release
	return


MauvilleCity_ToyStore_Scripts_LittleGirl::
# 21 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	faceplayer
# 22 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	lock
# 23 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	msgbox MauvilleCity_ToyStore_Scripts_LittleGirl_Text_0
# 25 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	closemessage
# 26 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	release
# 27 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	applymovement VAR_LAST_TALKED, MauvilleCity_ToyStore_Movement_FaceAwayFromPlayer
# 28 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	waitmovement 0
	return


# 31 "data/maps/MauvilleCity_ToyStore/scripts.pory"
MauvilleCity_ToyStore_Movement_FaceAwayFromPlayer:
# 32 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	face_away_player
	step_end

	.align 2
# 35 "data/maps/MauvilleCity_ToyStore/scripts.pory"
MauvilleCity_ToyStore_Mart:
# 36 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	.2byte DECOR_DUSKULL_DOLL
# 37 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	.2byte DECOR_BALTOY_DOLL
# 38 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	.2byte DECOR_KECLEON_DOLL
# 39 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 40 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	.2byte DECOR_SWABLU_DOLL
# 41 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	.2byte DECOR_SLIDE
# 42 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	.2byte DECOR_RED_BRICK
# 43 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 44 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 45 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 46 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 47 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
	.2byte ITEM_NONE

MauvilleCity_ToyStore_Scripts_LittleGirl_Text_0:
# 23 "data/maps/MauvilleCity_ToyStore/scripts.pory"
	.string ". {PAUSE 15}. {PAUSE 15}. {PAUSE 15}. {PAUSE 15}. {PAUSE 15}. {PAUSE 15}\n"
	.string ". {PAUSE 15}. {PAUSE 15}. {PAUSE 15}. {PAUSE 15}. {PAUSE 15}. {PAUSE 15}$"
