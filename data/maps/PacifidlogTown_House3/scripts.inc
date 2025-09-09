# 1 "data/maps/PacifidlogTown_House3/scripts.pory"

# 2 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_MapScripts::
# 3 "data/maps/PacifidlogTown_House3/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House3/scripts.pory"

# 5 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Trader::
# 6 "data/maps/PacifidlogTown_House3/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House3/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_TradeCompleted
# 9 "data/maps/PacifidlogTown_House3/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HORSEA
# 10 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 11 "data/maps/PacifidlogTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 12 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 13 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WillingToTradeIt, MSGBOX_YESNO
# 14 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PacifidlogTown_House3_EventScript_DeclineTrade
# 15 "data/maps/PacifidlogTown_House3/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/PacifidlogTown_House3/scripts.pory"
	waitstate
# 17 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 18 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PacifidlogTown_House3_EventScript_DeclineTrade
# 19 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 20 "data/maps/PacifidlogTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 21 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 22 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, PacifidlogTown_House3_EventScript_NotRequestedMon
# 23 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 24 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 25 "data/maps/PacifidlogTown_House3/scripts.pory"
	special CreateInGameTradePokemon
# 26 "data/maps/PacifidlogTown_House3/scripts.pory"
	special DoInGameTradeScene
# 27 "data/maps/PacifidlogTown_House3/scripts.pory"
	waitstate
# 28 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 29 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou, MSGBOX_DEFAULT
# 30 "data/maps/PacifidlogTown_House3/scripts.pory"
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
# 31 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 32 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 33 "data/maps/PacifidlogTown_House3/scripts.pory"

# 34 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_DeclineTrade::
# 35 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
# 36 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 37 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 38 "data/maps/PacifidlogTown_House3/scripts.pory"

# 39 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_NotRequestedMon::
# 40 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 41 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon, MSGBOX_DEFAULT
# 42 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 43 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 44 "data/maps/PacifidlogTown_House3/scripts.pory"

# 45 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_TradeCompleted::
# 46 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ReallyWantedToGetBagon, MSGBOX_DEFAULT
# 47 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 48 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 49 "data/maps/PacifidlogTown_House3/scripts.pory"

# 50 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Girl::
# 51 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
# 52 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 53 "data/maps/PacifidlogTown_House3/scripts.pory"

# 54 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WillingToTradeIt:
# 55 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "¿Qué te parece este {STR_VAR_2}?\p"
# 56 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "¡Es el {STR_VAR_2} que atrapé ayer\n"
# 57 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "para celebrar mi cumpleaños!\p"
# 58 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "¡Se te ve en la mirada que lo quieres!\n"
# 59 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "No me extraña, ¡no tiene precio!\p"
# 60 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Te diré algo. Si quieres,\n"
# 61 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "te lo cambio por tu {STR_VAR_1}.$"
# 62 "data/maps/PacifidlogTown_House3/scripts.pory"

# 63 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou:
# 64 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, ¿esto es un {STR_VAR_1}?\p"
# 65 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "En cierto modo es como un {STR_VAR_2},\n"
# 66 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "pero, a la vez, sutilmente distinto.\p"
# 67 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "¡Gracias!$"
# 68 "data/maps/PacifidlogTown_House3/scripts.pory"

# 69 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon:
# 70 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "¡No, no, no! ¡No aceptaré nada\n"
# 71 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "que no sea un auténtico {STR_VAR_1}!$"
# 72 "data/maps/PacifidlogTown_House3/scripts.pory"

# 73 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_NotDesperateOrAnything:
# 74 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, así que te echas atrás, ¿eh?\p"
# 75 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Por mí, perfecto. Yo no es que necesite\n"
# 76 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "desesperadamente el cambio, ¿sabes?$"
# 77 "data/maps/PacifidlogTown_House3/scripts.pory"

# 78 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ReallyWantedToGetBagon:
# 79 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Ya sé que podía haber ido yo\n"
# 80 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "a buscarlo…\p"
# 81 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Pero es que quería un BAGON\n"
# 82 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "que hubiera atrapado otro ENTRENADOR…$"
# 83 "data/maps/PacifidlogTown_House3/scripts.pory"

# 84 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_IsThatAPokedex:
# 85 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "¿Eso es una POKéDEX?\p"
# 86 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "¿Has encontrado muchos tipos\n"
# 87 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "diferentes de POKéMON?\p"
# 88 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Ojalá fuera como tú…$"
