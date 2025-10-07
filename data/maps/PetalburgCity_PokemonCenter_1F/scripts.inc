# 1 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 11 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 23 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
# 24 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Woman::
# 31 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 32 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
# 36 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 37 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 38 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
# 40 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
# 41 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
# 42 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
# 43 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_MIRACLE_SEED, 1
# 49 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 50 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
# 52 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_CHARCOAL, 1
# 54 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 55 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 56 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
# 57 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_MYSTIC_WATER, 1
# 59 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 60 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem:
# 62 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "¡El PC es increíble!$"
# 63 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
# 65 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Las bayas que se le equipan a\n"
# 66 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "los Pokémon tienen nuevos efectos!$"
# 67 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 68 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
# 69 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Hay objetos especiales que le puedes\n"
# 70 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "equipar a tus Pokémon para que {COLOR BLUE}se\l"
# 71 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "potencien sus movimientos{COLOR DARK_GRAY}.$"
# 72 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 73 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
# 74 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Por ejemplo, tu {COLOR LIGHT_GREEN}Treecko{COLOR DARK_GRAY} es de tipo\n"
# 75 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Planta, por lo que este objeto le viene\l"
# 76 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "como anillo al dedo.$"
# 77 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 78 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
# 79 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Por ejemplo, tu {COLOR LIGHT_RED}Torchic{COLOR DARK_GRAY} es de tipo\n"
# 80 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Fuego, por lo que este objeto le viene\l"
# 81 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "como anillo al dedo.$"
# 82 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 83 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
# 84 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Por ejemplo, tu {COLOR LIGHT_GREEN}Mudkip{COLOR DARK_GRAY} es de tipo\n"
# 85 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Agua, por lo que este objeto le viene\l"
# 86 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "como anillo al dedo.$"
