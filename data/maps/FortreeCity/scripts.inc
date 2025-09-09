# 1 "data/maps/FortreeCity/scripts.pory"

# 2 "data/maps/FortreeCity/scripts.pory"
FortreeCity_MapScripts::
# 3 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
# 4 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
# 5 "data/maps/FortreeCity/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity/scripts.pory"

# 7 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnTransition:
# 8 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 9 "data/maps/FortreeCity/scripts.pory"
	end
# 10 "data/maps/FortreeCity/scripts.pory"

# 11 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnResume:
# 12 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
# 13 "data/maps/FortreeCity/scripts.pory"
	end
# 14 "data/maps/FortreeCity/scripts.pory"

# 15 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Man::
# 16 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
# 17 "data/maps/FortreeCity/scripts.pory"
	end
# 18 "data/maps/FortreeCity/scripts.pory"

# 19 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman::
# 20 "data/maps/FortreeCity/scripts.pory"
	lock
# 21 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 22 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
# 23 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
# 24 "data/maps/FortreeCity/scripts.pory"
	release
# 25 "data/maps/FortreeCity/scripts.pory"
	end
# 26 "data/maps/FortreeCity/scripts.pory"

# 27 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_WomanGymAccessible::
# 28 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
# 29 "data/maps/FortreeCity/scripts.pory"
	release
# 30 "data/maps/FortreeCity/scripts.pory"
	end
# 31 "data/maps/FortreeCity/scripts.pory"

# 32 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Girl::
# 33 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
# 34 "data/maps/FortreeCity/scripts.pory"
	end
# 35 "data/maps/FortreeCity/scripts.pory"

# 36 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_OldMan::
# 37 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
# 38 "data/maps/FortreeCity/scripts.pory"
	end
# 39 "data/maps/FortreeCity/scripts.pory"

# 40 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Boy::
# 41 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
# 42 "data/maps/FortreeCity/scripts.pory"
	end
# 43 "data/maps/FortreeCity/scripts.pory"

# 44 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GameboyKid::
# 45 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
# 46 "data/maps/FortreeCity/scripts.pory"
	end
# 47 "data/maps/FortreeCity/scripts.pory"

# 48 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_CitySign::
# 49 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
# 50 "data/maps/FortreeCity/scripts.pory"
	end
# 51 "data/maps/FortreeCity/scripts.pory"

# 52 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GymSign::
# 53 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
# 54 "data/maps/FortreeCity/scripts.pory"
	end
# 55 "data/maps/FortreeCity/scripts.pory"

# 56 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon::
# 57 "data/maps/FortreeCity/scripts.pory"
	lock
# 58 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 59 "data/maps/FortreeCity/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 60 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
# 61 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 62 "data/maps/FortreeCity/scripts.pory"
	release
# 63 "data/maps/FortreeCity/scripts.pory"
	end
# 64 "data/maps/FortreeCity/scripts.pory"

# 65 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope::
# 66 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 67 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
# 68 "data/maps/FortreeCity/scripts.pory"
	release
# 69 "data/maps/FortreeCity/scripts.pory"
	end
# 70 "data/maps/FortreeCity/scripts.pory"

# 71 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_UseDevonScope::
# 72 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 73 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 74 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 75 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 76 "data/maps/FortreeCity/scripts.pory"
	waitse
# 77 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 78 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 79 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 80 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
# 81 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 83 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 84 "data/maps/FortreeCity/scripts.pory"
	release
# 85 "data/maps/FortreeCity/scripts.pory"
	end
# 86 "data/maps/FortreeCity/scripts.pory"

# 87 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_KecleonFlee:
# 88 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 89 "data/maps/FortreeCity/scripts.pory"
	step_end
# 90 "data/maps/FortreeCity/scripts.pory"

# 91 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SawGiganticPokemonInSky:
# 92 "data/maps/FortreeCity/scripts.pory"
	.string "Nadie me cree, pero he visto un\n"
# 93 "data/maps/FortreeCity/scripts.pory"
	.string "POKéMON gigantesco en el cielo.\p"
# 94 "data/maps/FortreeCity/scripts.pory"
	.string "Parecía que se retorcía. Iba volando\n"
# 95 "data/maps/FortreeCity/scripts.pory"
	.string "en dirección a la RUTA 131.\p"
# 96 "data/maps/FortreeCity/scripts.pory"
	.string "Mmm… Hueles a chamuscado…\p"
# 97 "data/maps/FortreeCity/scripts.pory"
	.string "¿Has estado en un volcán o algo así?$"
# 98 "data/maps/FortreeCity/scripts.pory"

# 99 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingBlockingGym:
# 100 "data/maps/FortreeCity/scripts.pory"
	.string "Quiero ir al GIMNASIO POKéMON,\n"
# 101 "data/maps/FortreeCity/scripts.pory"
	.string "pero hay algo bloqueando el camino.\p"
# 102 "data/maps/FortreeCity/scripts.pory"
	.string "Después de todas las molestias que me\n"
# 103 "data/maps/FortreeCity/scripts.pory"
	.string "he tomado, he tenido que ir a entrenar\l"
# 104 "data/maps/FortreeCity/scripts.pory"
	.string "a la RUTA 120…$"
# 105 "data/maps/FortreeCity/scripts.pory"

# 106 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ThisTimeIllBeatWinona:
# 107 "data/maps/FortreeCity/scripts.pory"
	.string "Tengo junto a mí a mi POKéMON favorito.\n"
# 108 "data/maps/FortreeCity/scripts.pory"
	.string "Seguro que esta vez venzo a ALANA.$"
# 109 "data/maps/FortreeCity/scripts.pory"

# 110 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_TreesGrowByDrinkingRainwater:
# 111 "data/maps/FortreeCity/scripts.pory"
	.string "La tierra absorbe el agua de lluvia\n"
# 112 "data/maps/FortreeCity/scripts.pory"
	.string "y los árboles absorben esa agua.\p"
# 113 "data/maps/FortreeCity/scripts.pory"
	.string "CIUDAD ARBORADA existe porque\n"
# 114 "data/maps/FortreeCity/scripts.pory"
	.string "tenemos agua y tierra.$"
# 115 "data/maps/FortreeCity/scripts.pory"

# 116 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_EveryoneHealthyAndLively:
# 117 "data/maps/FortreeCity/scripts.pory"
	.string "Todas las casas de la ciudad están\n"
# 118 "data/maps/FortreeCity/scripts.pory"
	.string "construidas sobre árboles.\p"
# 119 "data/maps/FortreeCity/scripts.pory"
	.string "Gracias a nuestro estilo de vida,\n"
# 120 "data/maps/FortreeCity/scripts.pory"
	.string "todos aquí somos alegres y sanos.\p"
# 121 "data/maps/FortreeCity/scripts.pory"
	.string "Vamos, mírame a mí…,\n"
# 122 "data/maps/FortreeCity/scripts.pory"
	.string "¡estoy hecho un chaval!$"
# 123 "data/maps/FortreeCity/scripts.pory"

# 124 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_BugPokemonComeThroughWindow:
# 125 "data/maps/FortreeCity/scripts.pory"
	.string "Vivir en la copa de los árboles mola.\p"
# 126 "data/maps/FortreeCity/scripts.pory"
	.string "Pero a veces entran POKéMON de tipo\n"
# 127 "data/maps/FortreeCity/scripts.pory"
	.string "BICHO por la ventana…\l"
# 128 "data/maps/FortreeCity/scripts.pory"
	.string "¡Y te pegan cada susto…!$"
# 129 "data/maps/FortreeCity/scripts.pory"

# 130 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_PokemonThatEvolveWhenTraded:
# 131 "data/maps/FortreeCity/scripts.pory"
	.string "Algunos POKéMON evolucionan cuando\n"
# 132 "data/maps/FortreeCity/scripts.pory"
	.string "los intercambias o al menos eso dicen.$"
# 133 "data/maps/FortreeCity/scripts.pory"

# 134 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingUnseeable:
# 135 "data/maps/FortreeCity/scripts.pory"
	.string "Algo invisible corta el paso.$"
# 136 "data/maps/FortreeCity/scripts.pory"

# 137 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UnseeableUseDevonScope:
# 138 "data/maps/FortreeCity/scripts.pory"
	.string "Algo invisible corta el paso.\p"
# 139 "data/maps/FortreeCity/scripts.pory"
	.string "¿Usas el DETECTOR DEVON?$"
# 140 "data/maps/FortreeCity/scripts.pory"

# 141 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UsedDevonScopePokemonFled:
# 142 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} usó el DETECTOR DEVON.\p"
# 143 "data/maps/FortreeCity/scripts.pory"
	.string "¡Un POKéMON invisible se ha vuelto\n"
# 144 "data/maps/FortreeCity/scripts.pory"
	.string "totalmente visible!\p"
# 145 "data/maps/FortreeCity/scripts.pory"
	.string "¡El POKéMON ha huido asustado!$"
# 146 "data/maps/FortreeCity/scripts.pory"

# 147 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_CitySign:
# 148 "data/maps/FortreeCity/scripts.pory"
	.string "CIUDAD ARBORADA\n"
# 149 "data/maps/FortreeCity/scripts.pory"
	.string "“La ciudad arbórea que juega\l"
# 150 "data/maps/FortreeCity/scripts.pory"
	.string "con la naturaleza.”$"
# 151 "data/maps/FortreeCity/scripts.pory"

# 152 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_GymSign:
# 153 "data/maps/FortreeCity/scripts.pory"
	.string "GIMNASIO POKéMON de CIUDAD ARBORADA\n"
# 154 "data/maps/FortreeCity/scripts.pory"
	.string "LÍDER: ALANA\p"
# 155 "data/maps/FortreeCity/scripts.pory"
	.string "“La amante de los pájaros POKéMON\n"
# 156 "data/maps/FortreeCity/scripts.pory"
	.string "que planea en las alturas.”$"
