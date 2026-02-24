SlateportCity_PokemonCenter_1F_EventScript_CometBuyer::
# 2 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	lockall
# 3 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 4 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 5 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_Text_0
SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_2:
	checkitem ITEM_COMET_SHARD
# 0 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_3
SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_1:
# 22 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 23 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return

SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_3:
# 7 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 8 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_Text_1, MSGBOX_YESNO
# 9 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_5
# 17 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 18 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_Text_4
	goto SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_1

SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_5:
# 10 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_COMET_SHARD, 1
# 11 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	addmoney 40000
# 12 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_Text_2
# 13 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 14 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_Text_3
	goto SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_2


# 26 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 28 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_MapScripts::
# 30 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
# 31 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 32 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 33 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_OnTransition:
# 35 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 36 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 37 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 38 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Nurse::
# 40 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 41 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 42 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 43 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 44 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 45 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 46 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 47 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Sailor::
# 48 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
# 49 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 50 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Woman::
# 52 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
# 53 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 54 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 55 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
# 56 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Want a tip for battling?\p"
# 57 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I'd say it's raising different kinds\n"
# 58 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "of POKéMON in a balanced manner.\p"
# 59 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "It's no good to make just one\n"
# 60 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON strong.\p"
# 61 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If it has a type disadvantage,\n"
# 62 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "it might not stand a chance.$"
# 63 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
# 65 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I trade POKéMON with my friends.\p"
# 66 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If a traded POKéMON is holding an\n"
# 67 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "item, it makes me twice as happy!$"

SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_Text_0:
# 5 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "¡Hola, ¿cómo estás?!\p"
	.string "¡Soy un Coleccionista, y me encanta\n"
	.string "coleccionar {COLOR RED}Fragmentos Cometa{COLOR DARK_GRAY}!$"

SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_Text_1:
# 8 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "¡Ah, veo que tienes un {COLOR RED}Fragmento\n"
	.string "Cometa{COLOR DARK_GRAY}!\p"
	.string "¿Te gustaría vendérmelo por {COLOR RED}¥40.000{COLOR DARK_GRAY}?$"

SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_Text_2:
# 12 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Le has vendido un {COLOR RED}Fragmento Cometa{COLOR DARK_GRAY} al Coleccionista.$"

SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_Text_3:
# 14 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "¡Muchas gracias!\p"
	.string "¡Ah, qué emoción! ¡Ojalá vuelvas pronto!$"

SlateportCity_PokemonCenter_1F_EventScript_CometBuyer_Text_4:
# 18 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Oh… Está bien, no pasa nada…$"
