PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer::
# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lockall
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 4 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 5 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_0
PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_2:
	checkitem ITEM_RARE_BONE
# 0 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_3
PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_1:
PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_6:
	checkitem ITEM_THICK_CLUB
# 0 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_7
PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_5:
# 38 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	return

PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_3:
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_1, MSGBOX_YESNO
# 9 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_9
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 18 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_4
	goto PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_1

PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_7:
# 23 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 24 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_5, MSGBOX_YESNO
# 25 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_12
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_4
	goto PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_5

PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_9:
# 10 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_RARE_BONE, 1
# 11 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addmoney 10000
# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_2
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_3
	goto PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_2

PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_12:
# 26 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_THICK_CLUB, 1
# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	addmoney 2000
# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_6
# 29 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setspeaker Collector
# 30 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_3
	goto PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_6


# 42 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_MapScripts::
# 46 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 49 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 50 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_OnTransition:
# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 52 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 53 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 54 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 55 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 56 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 57 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 59 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 60 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 61 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 62 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 63 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 64 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
# 65 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 66 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 67 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 68 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
# 69 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 70 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 71 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Woman::
# 72 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 73 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 74 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
# 75 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 76 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
# 77 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 78 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 79 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 80 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
# 81 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
# 82 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
# 83 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
# 84 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 85 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 86 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 87 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
# 88 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
# 89 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_MIRACLE_SEED, 1
# 90 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 91 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 92 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
# 93 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
# 94 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_CHARCOAL, 1
# 95 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 96 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 97 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
# 98 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
# 99 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_MYSTIC_WATER, 1
# 100 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 101 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 102 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem:
# 103 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "¡El PC es increíble!$"
# 104 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 105 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
# 106 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Las bayas que se le equipan a\n"
# 107 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "los Pokémon tienen nuevos efectos!$"
# 108 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 109 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
# 110 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Hay objetos especiales que le puedes\n"
# 111 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "equipar a tus Pokémon para que {COLOR BLUE}se\l"
# 112 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "potencien sus movimientos{COLOR DARK_GRAY}.$"
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 114 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
# 115 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Por ejemplo, tu {COLOR LIGHT_GREEN}Treecko{COLOR DARK_GRAY} es de tipo\n"
# 116 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Planta, por lo que este objeto le viene\l"
# 117 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "como anillo al dedo.$"
# 118 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 119 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
# 120 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Por ejemplo, tu {COLOR LIGHT_RED}Torchic{COLOR DARK_GRAY} es de tipo\n"
# 121 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Fuego, por lo que este objeto le viene\l"
# 122 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "como anillo al dedo.$"
# 123 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 124 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
# 125 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Por ejemplo, tu {COLOR LIGHT_GREEN}Mudkip{COLOR DARK_GRAY} es de tipo\n"
# 126 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Agua, por lo que este objeto le viene\l"
# 127 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "como anillo al dedo.$"

PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_0:
# 5 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "¡Hola, ¿cómo estás?!\p"
	.string "¡Soy un Coleccionista, y me encanta\n"
	.string "coleccionar {COLOR RED}Huesos{COLOR DARK_GRAY}!$"

PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_1:
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "¡Ah, veo que tienes un {COLOR RED}Hueso Raro{COLOR DARK_GRAY}!\p"
	.string "¿Te gustaría vendérmelo por {COLOR RED}¥10.000{COLOR DARK_GRAY}?$"

PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_2:
# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Le has vendido un {COLOR RED}Hueso Raro{COLOR DARK_GRAY} al Coleccionista.$"

PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_3:
# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "¡Muchas gracias!\p"
	.string "¡Ah, qué emoción! ¡Ojalá vuelvas pronto!$"

PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_4:
# 18 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Oh… Está bien, no pasa nada…$"

PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_5:
# 24 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "¡Ah, veo que tienes un {COLOR RED}Hueso Grueso{COLOR DARK_GRAY}!\p"
	.string "¿Te gustaría vendérmelo por {COLOR RED}¥2.000{COLOR DARK_GRAY}?$"

PetalburgCity_PokemonCenter_1F_EventScript_BonesBuyer_Text_6:
# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Le has vendido un {COLOR RED}Hueso Grueso{COLOR DARK_GRAY} al Coleccionista.$"
