# 1 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
# 6 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
# 7 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 8 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 9 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Woman::
# 10 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
# 11 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 12 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 13 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
# 14 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
# 15 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 17 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
# 18 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 19 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 20 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 22 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
# 23 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 25 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 26 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 27 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 28 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
# 29 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_FIRE_BLAST
# 30 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 31 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_BLIZZARD
# 32 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_HYPER_BEAM
# 33 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemartlistend
# 34 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 35 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
# 36 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 37 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 38 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 39 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 40 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
# 41 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 42 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 43 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 44 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 45 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 46 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
# 47 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 48 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_SAFEGUARD
# 49 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 50 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN
# 51 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemartlistend
# 52 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 53 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
# 54 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Mmmm…\p"
# 55 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Un movimiento de ATAQUE…\n"
# 56 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Un movimiento de DEFENSA…\p"
# 57 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "No es fácil decidir qué movimientos de\n"
# 58 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "MT hay que enseñar a un POKéMON…$"
# 59 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 60 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
# 61 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Hay tantos movimientos de MT…\p"
# 62 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "He leído en un catálogo que hay como\n"
# 63 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "cincuenta tipos diferentes.$"
# 64 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 65 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
# 66 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Quisiera tener todas las MT, pero da\n"
# 67 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "igual porque un POKéMON sólo puede\l"
# 68 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "aprender cuatro movimientos.$"
