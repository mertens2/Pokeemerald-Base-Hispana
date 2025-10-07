# 1 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_MapScripts::
# 3 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 5 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_EventScript_DevonEmployee::
# 6 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	msgbox RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones, MSGBOX_NPC
# 7 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	end
# 8 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 9 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_EventScript_Woman::
# 10 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	lock
# 11 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	faceplayer
# 12 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	msgbox RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones, MSGBOX_YESNO
# 13 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat2_3F_EventScript_WomanNo
# 14 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	removeitem ITEM_POKE_BALL, 1
# 15 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	giveitem ITEM_GREAT_BALL, 1
# 16 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	msgbox RustboroCity_Flat2_3F_Text_IHaveAllYouNeed
# 17 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	release
# 18 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	end
# 19 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_EventScript_WomanNo::
# 20 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	msgbox RustboroCity_Flat2_3F_Text_MaybeUltra, MSGBOX_YESNO
# 21 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat2_3F_EventScript_WomanNo2
# 22 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	removeitem ITEM_GREAT_BALL, 1
# 23 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 1
# 24 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	msgbox RustboroCity_Flat2_3F_Text_IHaveAllYouNeed
# 25 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	release
# 26 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	end
# 27 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_EventScript_WomanNo2::
# 28 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	msgbox RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRare
# 29 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	release
# 30 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	end
# 31 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones:
# 32 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.string "A los Stone les encantan las piedras\npreciosas. Entonces...\p¿Qué fue primero, el apellido,\no el oficio?$"
# 33 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 34 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_Text_MaybeUltra:
# 35 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.string "Entonces, ¿Quieres cambiar\nSúperballs por Ultraballs?$"
# 36 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 37 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_Text_IHaveAllYouNeed:
# 38 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.string "¡Vuelve cuando quieras!\p¡Tengo todas las que quieras!$"
# 39 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 40 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRare:
# 41 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.string "Pero, ¿Porqué no?$"
# 42 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 43 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones:
# 44 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.string "Casi no tenemos visitas, así que\nsi quieres, puedo cambiarte tus\lPokéball por Superball.\p¿Te parece?$"
