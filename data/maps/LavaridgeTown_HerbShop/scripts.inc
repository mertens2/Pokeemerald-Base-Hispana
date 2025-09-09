# 1 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 2 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_MapScripts::
# 3 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_Clerk::
# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 9 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart
# 11 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 13 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.align 2
# 16 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart:
# 17 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 18 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 19 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 20 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 21 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemartlistend
# 22 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 23 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExpertM::
# 24 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan::
# 28 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 29 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
# 31 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	giveitem ITEM_CHARCOAL
# 33 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_RECEIVED_CHARCOAL
# 35 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 36 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 37 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 38 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
# 39 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
# 40 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 42 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 43 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
# 44 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Hola. Éste es el HERBOLARIO. Nuestras\n"
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "medicinas son baratas y eficaces.$"
# 46 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 47 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
# 48 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "¿Has venido a comprar hierbas\n"
# 49 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "medicinales a LAVACALDA?\p"
# 50 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Haces bien. Son muy recomendables.\p"
# 51 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "¡Me has gustado! ¡Toma esto!$"
# 52 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 53 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_ExplainCharcoal:
# 54 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "El CARBÓN que te he dado sirve\n"
# 55 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "para preparar una medicina natural.\p"
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "También hace maravillas cuando\n"
# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "se lo das a un POKéMON.\p"
# 58 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Intensifica la potencia de los\n"
# 59 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "movimientos de tipo FUEGO.$"
# 60 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 61 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
# 62 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Las hierbas medicinales funcionan\n"
# 63 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "increíblemente bien, pero, si le das\l"
# 64 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "una a un POKéMON, te tendrá manía.\l"
# 65 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "¡El sabor es superamargo!$"
