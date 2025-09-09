# 1 "data/maps/FallarborTown/scripts.pory"

# 2 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts::
# 3 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 4 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 5 "data/maps/FallarborTown/scripts.pory"

# 6 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition:
# 7 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 8 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 9 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 10 "data/maps/FallarborTown/scripts.pory"
	end
# 11 "data/maps/FallarborTown/scripts.pory"

# 12 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 13 "data/maps/FallarborTown/scripts.pory"
	lock
# 14 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 15 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 16 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 17 "data/maps/FallarborTown/scripts.pory"
	release
# 18 "data/maps/FallarborTown/scripts.pory"
	end
# 19 "data/maps/FallarborTown/scripts.pory"

# 20 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 21 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 22 "data/maps/FallarborTown/scripts.pory"
	release
# 23 "data/maps/FallarborTown/scripts.pory"
	end
# 24 "data/maps/FallarborTown/scripts.pory"

# 25 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 26 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 27 "data/maps/FallarborTown/scripts.pory"
	end
# 28 "data/maps/FallarborTown/scripts.pory"

# 29 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 30 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 31 "data/maps/FallarborTown/scripts.pory"
	end
# 32 "data/maps/FallarborTown/scripts.pory"

# 33 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 34 "data/maps/FallarborTown/scripts.pory"
	lock
# 35 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 36 "data/maps/FallarborTown/scripts.pory"
	waitse
# 37 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 38 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 39 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 40 "data/maps/FallarborTown/scripts.pory"
	release
# 41 "data/maps/FallarborTown/scripts.pory"
	end
# 42 "data/maps/FallarborTown/scripts.pory"

# 43 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 44 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 45 "data/maps/FallarborTown/scripts.pory"
	end
# 46 "data/maps/FallarborTown/scripts.pory"

# 47 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 48 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 49 "data/maps/FallarborTown/scripts.pory"
	end
# 50 "data/maps/FallarborTown/scripts.pory"

# 51 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 52 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 53 "data/maps/FallarborTown/scripts.pory"
	end
# 54 "data/maps/FallarborTown/scripts.pory"

# 55 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome:
# 56 "data/maps/FallarborTown/scripts.pory"
	.string "¿Qué pasa, qué pasa?\p"
# 57 "data/maps/FallarborTown/scripts.pory"
	.string "He visto a un tipo muy sospechoso\n"
# 58 "data/maps/FallarborTown/scripts.pory"
	.string "merodeando por el LABORATORIO del\l"
# 59 "data/maps/FallarborTown/scripts.pory"
	.string "PROF. COZMO…$"
# 60 "data/maps/FallarborTown/scripts.pory"

# 61 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors:
# 62 "data/maps/FallarborTown/scripts.pory"
	.string "Esta región es conocida por sus\n"
# 63 "data/maps/FallarborTown/scripts.pory"
	.string "lluvias de meteoritos.\p"
# 64 "data/maps/FallarborTown/scripts.pory"
	.string "Dicen que la CASCADA METEORO se creó\n"
# 65 "data/maps/FallarborTown/scripts.pory"
	.string "hace siglos, a causa de un meteorito…$"
# 66 "data/maps/FallarborTown/scripts.pory"

# 67 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill:
# 68 "data/maps/FallarborTown/scripts.pory"
	.string "¡Mira! ¡Pero mira bien!\n"
# 69 "data/maps/FallarborTown/scripts.pory"
	.string "¡Éste es mi precioso AZURILL!\p"
# 70 "data/maps/FallarborTown/scripts.pory"
	.string "¿A que es la cosita más mona,\n"
# 71 "data/maps/FallarborTown/scripts.pory"
	.string "suave y blandita del mundo?$"
# 72 "data/maps/FallarborTown/scripts.pory"

# 73 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill:
# 74 "data/maps/FallarborTown/scripts.pory"
	.string "AZURILL: Azu, azuuuu…$"
# 75 "data/maps/FallarborTown/scripts.pory"

# 76 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery:
# 77 "data/maps/FallarborTown/scripts.pory"
	.string "¿Ya has desafiado a CANDELA, la\n"
# 78 "data/maps/FallarborTown/scripts.pory"
	.string "LÍDER del GIMNASIO de LAVACALDA?\p"
# 79 "data/maps/FallarborTown/scripts.pory"
	.string "Su abuelo era muy famoso. Perteneció\n"
# 80 "data/maps/FallarborTown/scripts.pory"
	.string "al ALTO MANDO de la LIGA POKéMON.\p"
# 81 "data/maps/FallarborTown/scripts.pory"
	.string "No me sorprende ni una pizca que\n"
# 82 "data/maps/FallarborTown/scripts.pory"
	.string "CANDELA también se haya convertido\l"
# 83 "data/maps/FallarborTown/scripts.pory"
	.string "en una gran ENTRENADORA.$"
# 84 "data/maps/FallarborTown/scripts.pory"

# 85 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign:
# 86 "data/maps/FallarborTown/scripts.pory"
	.string "TIENDA de BATALLA de PUEBLO PARDAL\n"
# 87 "data/maps/FallarborTown/scripts.pory"
	.string "“¡El punto de encuentro\l"
# 88 "data/maps/FallarborTown/scripts.pory"
	.string "de los grandes equipos!”$"
# 89 "data/maps/FallarborTown/scripts.pory"

# 90 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign:
# 91 "data/maps/FallarborTown/scripts.pory"
	.string "PUEBLO PARDAL\n"
# 92 "data/maps/FallarborTown/scripts.pory"
	.string "“Una comunidad de granjas y jardines.”$"
# 93 "data/maps/FallarborTown/scripts.pory"

# 94 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign:
# 95 "data/maps/FallarborTown/scripts.pory"
	.string "CASA del TUTOR de MOVIMIENTOS\n"
# 96 "data/maps/FallarborTown/scripts.pory"
	.string "“Enseña movimientos a tus POKéMON.”$"
