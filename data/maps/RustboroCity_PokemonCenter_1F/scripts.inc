RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer::
# 2 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	lockall
# 3 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 4 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 5 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_0
RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_2:
	checkitem ITEM_RELIC_COPPER
# 0 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_3
RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_1:
RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_6:
	checkitem ITEM_RELIC_SILVER
# 0 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_7
RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_5:
RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_13:
	checkitem ITEM_RELIC_GOLD
# 0 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_14
RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_12:
# 57 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 58 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_3:
# 7 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 8 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_1, MSGBOX_YESNO
# 9 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_9
# 17 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 18 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_4
	goto RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_1

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_7:
# 23 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 24 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_5, MSGBOX_YESNO
# 25 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_16
# 33 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 34 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_4
	goto RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_5

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_9:
# 10 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_RELIC_COPPER, 1
# 11 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	addmoney 6000
# 12 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_2
# 13 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_3
	goto RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_2

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_14:
# 39 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 40 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 41 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 42 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 43 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_6, MSGBOX_YESNO
# 44 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_19
# 52 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 53 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_4
	goto RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_12

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_16:
# 26 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_RELIC_SILVER, 1
# 27 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	addmoney 20000
# 28 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_2
# 29 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 30 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_3
	goto RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_6

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_19:
# 45 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_THICK_CLUB, 1
# 46 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	addmoney 200000
# 47 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_7
# 48 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 49 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_8
	goto RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_13


# 61 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 63 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_MapScripts::
# 65 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
# 66 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 67 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 68 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 69 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_OnTransition:
# 70 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 71 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 72 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 73 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 74 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Nurse::
# 75 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 76 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 77 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 78 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 79 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 80 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 81 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 82 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Man::
# 83 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
# 84 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 85 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 86 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Boy::
# 87 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
# 88 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 89 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 90 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Girl::
# 91 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
# 92 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 93 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 94 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
# 95 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Mi Pokémon tiene natualeza miedosa,\n¡Pero el de mi amigo tiene\lnaturaleza alegre!$"
# 96 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 97 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
# 98 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Se ha descubierto que los Pokémon\nhembra y macho son muy distintos,\l¡Algunos machos no evolucionan!$"
# 99 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 100 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
# 101 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Quiero viajar para conocer\ndistintos y nuevos tipos de plantas.$"

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_0:
# 5 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "¡Hola, ¿cómo estás?!\p"
	.string "¡Soy un Coleccionista, y me encanta\n"
	.string "coleccionar {COLOR RED}Reales{COLOR DARK_GRAY}!$"

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_1:
# 8 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "¡Ah, veo que tienes un {COLOR RED}Real de Cobre{COLOR DARK_GRAY}!\p"
	.string "¿Te gustaría vendérmelo por {COLOR RED}¥6.000{COLOR DARK_GRAY}?$"

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_2:
# 12 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Le has vendido un {COLOR RED}Real de Cobre{COLOR DARK_GRAY} al Coleccionista.$"

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_3:
# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "¡Muchas gracias!\p"
	.string "¡Ah, qué emoción! ¡Ojalá vuelvas pronto!$"

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_4:
# 18 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Oh… Está bien, no pasa nada…$"

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_5:
# 24 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "¡Ah, veo que tienes un {COLOR RED}Real de Plata{COLOR DARK_GRAY}!\p"
	.string "¿Te gustaría vendérmelo por {COLOR RED}¥20.000{COLOR DARK_GRAY}?$"

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_6:
# 43 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "¡T-T-T-TIENES UN {COLOR RED}REAL DE ORO{COLOR DARK_GRAY}!\p"
	.string "¡Por favor, véndemelo por {COLOR RED}¥200.000{COLOR DARK_GRAY}!, ¿Te\n"
	.string "parece?$"

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_7:
# 47 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Le has vendido un {COLOR RED}Real de Oro{COLOR DARK_GRAY} al Coleccionista.$"

RustboroCity_PokemonCenter_1F_EventScript_RelicsBuyer_Text_8:
# 49 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "¡SÍIII!\n"
	.string "¡AL FIN TENGO UN REAL DE ORO!\p"
	.string "¡Ojalá vuelvas pronto!$"
