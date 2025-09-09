# 1 "data/maps/MossdeepCity_Mart/scripts.pory"

# 2 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_MapScripts::
# 3 "data/maps/MossdeepCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_Mart/scripts.pory"

# 5 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Clerk::
# 6 "data/maps/MossdeepCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MossdeepCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart MossdeepCity_Mart_Pokemart
# 11 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
# 13 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_Mart/scripts.pory"

# 15 "data/maps/MossdeepCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Pokemart:
# 17 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 18 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 19 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 20 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 21 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 22 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 23 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 24 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 25 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 26 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/MossdeepCity_Mart/scripts.pory"

# 28 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Woman::
# 29 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
# 30 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 31 "data/maps/MossdeepCity_Mart/scripts.pory"

# 32 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Boy::
# 33 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
# 34 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 35 "data/maps/MossdeepCity_Mart/scripts.pory"

# 36 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Sailor::
# 37 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
# 38 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 39 "data/maps/MossdeepCity_Mart/scripts.pory"

# 40 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_ReviveIsFantastic:
# 41 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "¡REVIVIR es lo mejor!\p"
# 42 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Si se lo das a un POKéMON debilitado,\n"
# 43 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "se recupera y puede luchar de nuevo.\p"
# 44 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Pero ten cuidado: REVIVIR no restaura\n"
# 45 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "los PP usados de cada movimiento.$"
# 46 "data/maps/MossdeepCity_Mart/scripts.pory"

# 47 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_MaxRepelLastsLongest:
# 48 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "MÁX. REPEL mantiene alejados a todos\n"
# 49 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "los POKéMON débiles.\p"
# 50 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Entre todos los REPELENTES,\n"
# 51 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "éste es el que dura más tiempo.$"
# 52 "data/maps/MossdeepCity_Mart/scripts.pory"

# 53 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_NetAndDiveBallsRare:
# 54 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "La MALLA BALL y la BUCEO BALL son\n"
# 55 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "unas POKé BALLS propias de ALGARIA.\p"
# 56 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Una MALLA BALL es eficaz con los\n"
# 57 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "POKéMON de los tipos BICHO y AGUA.\p"
# 58 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Una BUCEO BALL funciona mejor con los\n"
# 59 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "POKéMON que viven en el fondo del mar.$"
