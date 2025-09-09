# 1 "data/maps/FallarborTown_Mart/scripts.pory"

# 2 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_MapScripts::
# 3 "data/maps/FallarborTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_Mart/scripts.pory"

# 5 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Clerk::
# 6 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_Mart_Pokemart
# 11 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 13 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 14 "data/maps/FallarborTown_Mart/scripts.pory"

# 15 "data/maps/FallarborTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Pokemart:
# 17 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 19 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 22 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 23 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 24 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 25 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 26 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 27 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 28 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 29 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemartlistend
# 30 "data/maps/FallarborTown_Mart/scripts.pory"

# 31 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Woman::
# 32 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
# 33 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 34 "data/maps/FallarborTown_Mart/scripts.pory"

# 35 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_PokefanM::
# 36 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
# 37 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 38 "data/maps/FallarborTown_Mart/scripts.pory"

# 39 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Skitty::
# 40 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 41 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 42 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 43 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 44 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
# 45 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
# 46 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 47 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 48 "data/maps/FallarborTown_Mart/scripts.pory"

# 49 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_DecidingSkittyEvolve:
# 50 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "No acabo de decidirme sobre si quiero\n"
# 51 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "que mi SKITTY evolucione o no…\p"
# 52 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Sólo tengo que usar la PIEDRA LUNAR,\n"
# 53 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "pero es una decisión tan difícil…\p"
# 54 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Si lo hago evolucionar, será mucho\n"
# 55 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "más fuerte…\p"
# 56 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Pero también tendrá otro aspecto…$"
# 57 "data/maps/FallarborTown_Mart/scripts.pory"

# 58 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_Skitty:
# 59 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "SKITTY: ¿Skimiau?$"
# 60 "data/maps/FallarborTown_Mart/scripts.pory"

# 61 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_SellNuggetIFound:
# 62 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "La PEPITA que encontré aquí…\n"
# 63 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Supongo que o la vendo o me la como,\l"
# 64 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "porque no sirve para nada…$"
