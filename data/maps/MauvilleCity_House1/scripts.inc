# 1 "data/maps/MauvilleCity_House1/scripts.pory"

# 2 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_MapScripts::
# 3 "data/maps/MauvilleCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_House1/scripts.pory"

# 5 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_RockSmashDude::
# 6 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, MauvilleCity_House1_EventScript_ReceivedRockSmash
# 9 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 11 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 12 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainRockSmash, MSGBOX_DEFAULT
# 14 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 15 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_House1/scripts.pory"

# 17 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedRockSmash::
# 18 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
# 19 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 20 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 21 "data/maps/MauvilleCity_House1/scripts.pory"

# 22 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ImRockSmashDudeTakeThis:
# 23 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "¡Chubidubidú!\p"
# 24 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Algunos me llaman el “MACHACARROCAS”,\n"
# 25 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "pero me parece que no es respetuoso.\p"
# 26 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Merezco más consideración. Algo así\n"
# 27 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "como el “MAESTRO GOLPE ROCA”.\p"
# 28 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "¡Chubidubidú!\p"
# 29 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Guau, tus POKéMON parecen bastante\n"
# 30 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "fuertes.\p"
# 31 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "¡Así me gusta! ¡Como premio te doy\n"
# 32 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "esta MÁQUINA OCULTA!$"
# 33 "data/maps/MauvilleCity_House1/scripts.pory"

# 34 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainRockSmash:
# 35 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Esta MO contiene GOLPE ROCA.\p"
# 36 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Si te encuentras con una gran roca\n"
# 37 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "bloqueando el camino…,\p"
# 38 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "usa el movimiento de esta MO\n"
# 39 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "y destrózala para abrirte paso.\p"
# 40 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "¡Sí, señor! ¡Hay que romper rocas\n"
# 41 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "porque lo digo yo! ¡Chubidubidú!$"
# 42 "data/maps/MauvilleCity_House1/scripts.pory"

# 43 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock:
# 44 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "A veces, al romper una roca,\n"
# 45 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "puedes encontrarte un POKéMON.\p"
# 46 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "¡Chubidubidú!$"
