OldaleTown_Mart_EventScript_Clerk::
# 2 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 4 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_Clerk_2
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
OldaleTown_Mart_EventScript_Clerk_1:
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	closemessage
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	return

OldaleTown_Mart_EventScript_Clerk_2:
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Balls
	goto OldaleTown_Mart_EventScript_Clerk_1


OldaleTown_Mart_EventScript_Woman::
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_EventScript_Woman_Text_0
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	closemessage
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	return


OldaleTown_Mart_EventScript_Boy::
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_EventScript_Boy_Text_0
# 31 "data/maps/OldaleTown_Mart/scripts.pory"
	closemessage
# 32 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	return


	.align 2
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
	.2byte ITEM_NONE

	.align 2
# 43 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Balls:
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 46 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 47 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 50 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_WAVE_MAIL
	.2byte ITEM_NONE

# 53 "data/maps/OldaleTown_Mart/scripts.pory"

# 54 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 55 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0

OldaleTown_Mart_EventScript_Woman_Text_0:
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Ésta es la última Tienda Pokémon de\n"
	.string "Hoenn que no fue absorbida por los\l"
	.string "Centros Pokémon.\p"
	.string "¡Me enorgullece que gente de Oldale\n"
	.string "tenga las agallas para ponerse en\l"
	.string "contra de Devon!$"

OldaleTown_Mart_EventScript_Boy_Text_0:
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Las Tiendas Pokémon solían ser su\n"
	.string "propio edificio hasta hace unos años.\p"
	.string "¡Por suerte, la generosa Devon contrató\n"
	.string "a los mismos empleados para la fusión\l"
	.string "con los Centros Pokémon!$"
