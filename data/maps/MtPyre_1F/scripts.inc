# 1 "data/maps/MtPyre_1F/scripts.pory"

# 2 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_MapScripts::
# 3 "data/maps/MtPyre_1F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_1F/scripts.pory"

# 5 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_CleanseTagWoman::
# 6 "data/maps/MtPyre_1F/scripts.pory"
	lock
# 7 "data/maps/MtPyre_1F/scripts.pory"
	faceplayer
# 8 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
# 9 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
# 10 "data/maps/MtPyre_1F/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 11 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 12 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_RECEIVED_CLEANSE_TAG
# 13 "data/maps/MtPyre_1F/scripts.pory"
	release
# 14 "data/maps/MtPyre_1F/scripts.pory"
	end
# 15 "data/maps/MtPyre_1F/scripts.pory"

# 16 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_ReceivedCleanseTag::
# 17 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
# 18 "data/maps/MtPyre_1F/scripts.pory"
	release
# 19 "data/maps/MtPyre_1F/scripts.pory"
	end
# 20 "data/maps/MtPyre_1F/scripts.pory"

# 21 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_PokefanF::
# 22 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
# 23 "data/maps/MtPyre_1F/scripts.pory"
	end
# 24 "data/maps/MtPyre_1F/scripts.pory"

# 25 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_EventScript_Man::
# 26 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
# 27 "data/maps/MtPyre_1F/scripts.pory"
	end
# 28 "data/maps/MtPyre_1F/scripts.pory"

# 29 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_TakeThisForYourOwnGood:
# 30 "data/maps/MtPyre_1F/scripts.pory"
	.string "En el MONTE PÍRICO te puedes encontrar\n"
# 31 "data/maps/MtPyre_1F/scripts.pory"
	.string "con todo tipo de criaturas…\p"
# 32 "data/maps/MtPyre_1F/scripts.pory"
	.string "Nunca se sabe qué puede pasar,\n"
# 33 "data/maps/MtPyre_1F/scripts.pory"
	.string "así que toma esto por tu bien.$"
# 34 "data/maps/MtPyre_1F/scripts.pory"

# 35 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ExplainCleanseTag:
# 36 "data/maps/MtPyre_1F/scripts.pory"
	.string "Dale este AMULETO a algún\n"
# 37 "data/maps/MtPyre_1F/scripts.pory"
	.string "POKéMON.\p"
# 38 "data/maps/MtPyre_1F/scripts.pory"
	.string "Te ayudará a mantener alejados\n"
# 39 "data/maps/MtPyre_1F/scripts.pory"
	.string "a los POKéMON salvajes.$"
# 40 "data/maps/MtPyre_1F/scripts.pory"

# 41 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_ComeToPayRespects:
# 42 "data/maps/MtPyre_1F/scripts.pory"
	.string "¿Has venido a presentar tus respetos\n"
# 43 "data/maps/MtPyre_1F/scripts.pory"
	.string "a las almas de los POKéMON que ya\l"
# 44 "data/maps/MtPyre_1F/scripts.pory"
	.string "no están con nosotros?\p"
# 45 "data/maps/MtPyre_1F/scripts.pory"
	.string "Recuerda que has de cuidar de tus\n"
# 46 "data/maps/MtPyre_1F/scripts.pory"
	.string "POKéMON con mucho cariño.$"
# 47 "data/maps/MtPyre_1F/scripts.pory"

# 48 "data/maps/MtPyre_1F/scripts.pory"
MtPyre_1F_Text_RestingPlaceOfZigzagoon:
# 49 "data/maps/MtPyre_1F/scripts.pory"
	.string "Aquí descansa en paz mi ZIGZAGOON.\n"
# 50 "data/maps/MtPyre_1F/scripts.pory"
	.string "Yo lo quería tanto…$"
