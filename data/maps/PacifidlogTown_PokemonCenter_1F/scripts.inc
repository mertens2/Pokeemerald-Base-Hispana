# 1 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
# 4 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_OnTransition:
# 8 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
# 9 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PACIFIDLOG_NURSE
# 13 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Girl::
# 20 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard, MSGBOX_NPC
# 21 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Woman::
# 24 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola, MSGBOX_NPC
# 25 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_OldMan::
# 28 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats, MSGBOX_NPC
# 29 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard:
# 32 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "¿De qué color es tu FICHA de\n"
# 33 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "ENTRENADOR? ¡La mía es de color cobre!$"
# 34 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola:
# 36 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "PUEBLO OROMAR flota sobre\n"
# 37 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "una colonia de CORSOLA.\p"
# 38 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Si te digo eso, ¿tú te lo crees?$"
# 39 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats:
# 41 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Dicen que los antepasados\n"
# 42 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "de los habitantes de OROMAR nacían,\l"
# 43 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "vivían y morían en barcos.\p"
# 44 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Creo que vivían de ese modo\n"
# 45 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "porque iban en busca de algo.$"
