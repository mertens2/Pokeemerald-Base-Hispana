# 1 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
@ .set LOCALID_NURSE, 1
# 3 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
# 11 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman::
# 23 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
# 24 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
# 27 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
# 28 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon:
# 31 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "You can't consider yourself a real\n"
# 32 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "TRAINER if you don't have faith\l"
# 33 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "in your POKéMON.\p"
# 34 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Only those people who can believe\n"
# 35 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "in their battling POKéMON can win\l"
# 36 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "through to the very end.$"
# 37 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent:
# 39 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "The reason why anyone would visit\n"
# 40 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "VERDANTURF…\p"
# 41 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "It's the BATTLE TENT. It goes without\n"
# 42 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "saying.\p"
# 43 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Or is there somebody here that you\n"
# 44 "data/maps/AquaHideout_UnusedRubyMap2/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "came to see?$"
