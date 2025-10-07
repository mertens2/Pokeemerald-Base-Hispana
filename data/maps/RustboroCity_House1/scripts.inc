# 1 "data/maps/RustboroCity_House1/scripts.pory"

# 2 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_MapScripts::
# 3 "data/maps/RustboroCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_House1/scripts.pory"

# 5 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Trader::
# 6 "data/maps/RustboroCity_House1/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_TradeCompleted
# 9 "data/maps/RustboroCity_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SEEDOT
# 10 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 11 "data/maps/RustboroCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 12 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 13 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 14 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_House1_EventScript_DeclineTrade
# 15 "data/maps/RustboroCity_House1/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/RustboroCity_House1/scripts.pory"
	waitstate
# 17 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 18 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_House1_EventScript_DeclineTrade
# 19 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 20 "data/maps/RustboroCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 21 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 22 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, RustboroCity_House1_EventScript_NotRequestedMon
# 23 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 24 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 25 "data/maps/RustboroCity_House1/scripts.pory"
	special CreateInGameTradePokemon
# 26 "data/maps/RustboroCity_House1/scripts.pory"
	special DoInGameTradeScene
# 27 "data/maps/RustboroCity_House1/scripts.pory"
	waitstate
# 28 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
# 29 "data/maps/RustboroCity_House1/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 30 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 31 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 32 "data/maps/RustboroCity_House1/scripts.pory"

# 33 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_DeclineTrade::
# 34 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 35 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 36 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 37 "data/maps/RustboroCity_House1/scripts.pory"

# 38 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_NotRequestedMon::
# 39 "data/maps/RustboroCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 40 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 42 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 43 "data/maps/RustboroCity_House1/scripts.pory"

# 44 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_TradeCompleted::
# 45 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 46 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 47 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 48 "data/maps/RustboroCity_House1/scripts.pory"

# 49 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Hiker::
# 50 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
# 51 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 52 "data/maps/RustboroCity_House1/scripts.pory"

# 53 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_IllTradeIfYouWant:
# 54 "data/maps/RustboroCity_House1/scripts.pory"
	.string "¿Te gustaría cambiar mi {STR_VAR_2}\n"
# 55 "data/maps/RustboroCity_House1/scripts.pory"
	.string "de Alola por tu {STR_VAR_1} de Kanto?$"
# 56 "data/maps/RustboroCity_House1/scripts.pory"

# 57 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_PleaseBeGoodToMyPokemon:
# 58 "data/maps/RustboroCity_House1/scripts.pory"
	.string "jejejeje…\n"
# 59 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Por fin…$"
# 60 "data/maps/RustboroCity_House1/scripts.pory"

# 61 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_DoesntLookLikeMonToMe:
# 62 "data/maps/RustboroCity_House1/scripts.pory"
	.string "¿Qué? Eso no es un {STR_VAR_1}\n"
# 63 "data/maps/RustboroCity_House1/scripts.pory"
	.string "de Kanto, no me engañarás.$"
# 64 "data/maps/RustboroCity_House1/scripts.pory"

# 65 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_YouDontWantToThatsOkay:
# 66 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Pero…$"
# 67 "data/maps/RustboroCity_House1/scripts.pory"

# 68 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AnyPokemonCanBeCute:
# 69 "data/maps/RustboroCity_House1/scripts.pory"
	.string "¡Gracias!$"
# 70 "data/maps/RustboroCity_House1/scripts.pory"

# 71 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AllSortsOfPlaces:
# 72 "data/maps/RustboroCity_House1/scripts.pory"
	.string "A mi primo le encanta intercambiar\nPokémon con variantes regionales.\pSi vienes cada día,\n¡Podrás cambiar muchos!$"
