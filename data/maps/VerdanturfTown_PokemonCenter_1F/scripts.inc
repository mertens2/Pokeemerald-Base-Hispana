# 1 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
# 4 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_OnTransition:
# 8 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
# 9 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_VERDANTURF_NURSE
# 14 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman::
# 21 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
# 22 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
# 25 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
# 26 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon:
# 29 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "¡Nadie puede considerarse ENTRENADOR\n"
# 30 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "si no tiene fe en sus POKéMON!\p"
# 31 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Sólo aquellos que confían plenamente\n"
# 32 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "en la habilidad de sus POKéMON podrán\l"
# 33 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "llegar hasta el final.$"
# 34 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent:
# 36 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "La razón por la que todo el mundo\n"
# 37 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "está viniendo a VERDEGAL…\p"
# 38 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Es su TIENDA de BATALLA.\n"
# 39 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "No hace falta que lo diga.\p"
# 40 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "¿O es que has venido a ver a alguien?$"
