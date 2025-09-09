# 1 "data/maps/PetalburgCity_Mart/scripts.pory"

# 2 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_MapScripts::
# 3 "data/maps/PetalburgCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgCity_Mart/scripts.pory"

# 5 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Clerk::
# 6 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 7 "data/maps/PetalburgCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/PetalburgCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PetalburgCity_Mart/scripts.pory"
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, PetalburgCity_Mart_EventScript_ExpandedItems
# 11 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Basic
# 12 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 14 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 15 "data/maps/PetalburgCity_Mart/scripts.pory"

# 16 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 17 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Basic:
# 18 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 24 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 25 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 26 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 27 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 28 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 29 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemartlistend
# 30 "data/maps/PetalburgCity_Mart/scripts.pory"

# 31 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_ExpandedItems::
# 32 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Expanded
# 33 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 34 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 35 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 36 "data/maps/PetalburgCity_Mart/scripts.pory"

# 37 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 38 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Expanded:
# 39 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 40 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 41 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 42 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 43 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 44 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 45 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 46 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 47 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 48 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 49 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 50 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 51 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 52 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemartlistend
# 53 "data/maps/PetalburgCity_Mart/scripts.pory"

# 54 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Woman::
# 55 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
# 56 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 57 "data/maps/PetalburgCity_Mart/scripts.pory"

# 58 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Boy::
# 59 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
# 60 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 61 "data/maps/PetalburgCity_Mart/scripts.pory"

# 62 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Man::
# 63 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
# 64 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 65 "data/maps/PetalburgCity_Mart/scripts.pory"

# 66 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_WeakWillGrowStronger:
# 67 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Aunque un POKéMON sea débil,\n"
# 68 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "pronto se hará más fuerte.\p"
# 69 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Lo más importante es quererlo.\n"
# 70 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "¡Quiere a tu POKéMON!$"
# 71 "data/maps/PetalburgCity_Mart/scripts.pory"

# 72 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_RepelIsUseful:
# 73 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "¿Usas REPELENTE?\n"
# 74 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Mantiene a los POKéMON a raya,\l"
# 75 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "así que es muy útil si tienes prisa.$"
# 76 "data/maps/PetalburgCity_Mart/scripts.pory"

# 77 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou:
# 78 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "¿Llevas ANTÍDOTOS contigo?\n"
# 79 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Si vas por ahí con algún POKéMON\l"
# 80 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "envenenado, perderá PS hasta\l"
# 81 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "debilitarse del todo. ¡No lo olvides!$"
