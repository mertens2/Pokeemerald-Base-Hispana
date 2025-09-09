# 1 "data/maps/VerdanturfTown/scripts.pory"

# 2 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_MapScripts::
# 3 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
# 4 "data/maps/VerdanturfTown/scripts.pory"
	.byte 0
# 5 "data/maps/VerdanturfTown/scripts.pory"

# 6 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition:
# 7 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 8 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 9 "data/maps/VerdanturfTown/scripts.pory"
	end
# 10 "data/maps/VerdanturfTown/scripts.pory"

# 11 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin::
# 12 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 13 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 14 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
# 15 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
# 16 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
# 17 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 18 "data/maps/VerdanturfTown/scripts.pory"
	release
# 19 "data/maps/VerdanturfTown/scripts.pory"
	end
# 20 "data/maps/VerdanturfTown/scripts.pory"

# 21 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TwinTunnelOpen::
# 22 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
# 23 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
# 24 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 25 "data/maps/VerdanturfTown/scripts.pory"
	release
# 26 "data/maps/VerdanturfTown/scripts.pory"
	end
# 27 "data/maps/VerdanturfTown/scripts.pory"

# 28 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Man::
# 29 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
# 30 "data/maps/VerdanturfTown/scripts.pory"
	end
# 31 "data/maps/VerdanturfTown/scripts.pory"

# 32 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Camper::
# 33 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
# 34 "data/maps/VerdanturfTown/scripts.pory"
	end
# 35 "data/maps/VerdanturfTown/scripts.pory"

# 36 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy::
# 37 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 38 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 39 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
# 40 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
# 41 "data/maps/VerdanturfTown/scripts.pory"
	release
# 42 "data/maps/VerdanturfTown/scripts.pory"
	end
# 43 "data/maps/VerdanturfTown/scripts.pory"

# 44 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BoyTunnelOpen::
# 45 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
# 46 "data/maps/VerdanturfTown/scripts.pory"
	release
# 47 "data/maps/VerdanturfTown/scripts.pory"
	end
# 48 "data/maps/VerdanturfTown/scripts.pory"

# 49 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TownSign::
# 50 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
# 51 "data/maps/VerdanturfTown/scripts.pory"
	end
# 52 "data/maps/VerdanturfTown/scripts.pory"

# 53 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WandasHouseSign::
# 54 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
# 55 "data/maps/VerdanturfTown/scripts.pory"
	end
# 56 "data/maps/VerdanturfTown/scripts.pory"

# 57 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BattleTentSign::
# 58 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
# 59 "data/maps/VerdanturfTown/scripts.pory"
	end
# 60 "data/maps/VerdanturfTown/scripts.pory"

# 61 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_RusturfTunnelSign::
# 62 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
# 63 "data/maps/VerdanturfTown/scripts.pory"
	end
# 64 "data/maps/VerdanturfTown/scripts.pory"

# 65 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManTryingToDigTunnel:
# 66 "data/maps/VerdanturfTown/scripts.pory"
	.string "Me lo ha dicho mi papá.\p"
# 67 "data/maps/VerdanturfTown/scripts.pory"
	.string "Dice que este túnel está lleno\n"
# 68 "data/maps/VerdanturfTown/scripts.pory"
	.string "de POKéMON asustadizos.\p"
# 69 "data/maps/VerdanturfTown/scripts.pory"
	.string "Si escuchan algún ruido fuerte, se\n"
# 70 "data/maps/VerdanturfTown/scripts.pory"
	.string "asustan y montan alborotos.\p"
# 71 "data/maps/VerdanturfTown/scripts.pory"
	.string "Por eso detuvieron el proyecto de\n"
# 72 "data/maps/VerdanturfTown/scripts.pory"
	.string "construcción del túnel.\p"
# 73 "data/maps/VerdanturfTown/scripts.pory"
	.string "¡Pero hay un hombre empeñado en\n"
# 74 "data/maps/VerdanturfTown/scripts.pory"
	.string "terminar el túnel él solito!$"
# 75 "data/maps/VerdanturfTown/scripts.pory"

# 76 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManDugTunnelForLove:
# 77 "data/maps/VerdanturfTown/scripts.pory"
	.string "Un hombre excavó un túnel para\n"
# 78 "data/maps/VerdanturfTown/scripts.pory"
	.string "la mujer que amaba…\p"
# 79 "data/maps/VerdanturfTown/scripts.pory"
	.string "Es decir, para poder ir a verla más\n"
# 80 "data/maps/VerdanturfTown/scripts.pory"
	.string "fácilmente. ¡Eso es amor, señores!$"
# 81 "data/maps/VerdanturfTown/scripts.pory"

# 82 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_AirCleanHere:
# 83 "data/maps/VerdanturfTown/scripts.pory"
	.string "Por cómo sopla el viento, aquí nunca\n"
# 84 "data/maps/VerdanturfTown/scripts.pory"
	.string "llega la ceniza volcánica.\p"
# 85 "data/maps/VerdanturfTown/scripts.pory"
	.string "Al contrario, el aire de aquí es puro\n"
# 86 "data/maps/VerdanturfTown/scripts.pory"
	.string "y agradable. Es muy bueno para las\l"
# 87 "data/maps/VerdanturfTown/scripts.pory"
	.string "personas de salud delicada.$"
# 88 "data/maps/VerdanturfTown/scripts.pory"

# 89 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_MakeBattleTentDebut:
# 90 "data/maps/VerdanturfTown/scripts.pory"
	.string "Mis POKéMON y yo estamos de racha.\p"
# 91 "data/maps/VerdanturfTown/scripts.pory"
	.string "Así que he decidido probar suerte en\n"
# 92 "data/maps/VerdanturfTown/scripts.pory"
	.string "la TIENDA de BATALLA que hay aquí.$"
# 93 "data/maps/VerdanturfTown/scripts.pory"

# 94 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_GuyTryingToBustThroughCave:
# 95 "data/maps/VerdanturfTown/scripts.pory"
	.string "¿Has visto la cueva que hay cerca de\n"
# 96 "data/maps/VerdanturfTown/scripts.pory"
	.string "la TIENDA POKéMON?\p"
# 97 "data/maps/VerdanturfTown/scripts.pory"
	.string "Dentro hay un tipo que intenta romper\n"
# 98 "data/maps/VerdanturfTown/scripts.pory"
	.string "rocas para poder llegar al otro lado.\p"
# 99 "data/maps/VerdanturfTown/scripts.pory"
	.string "Sería estupendo tener el túnel…\n"
# 100 "data/maps/VerdanturfTown/scripts.pory"
	.string "Visitar CIUDAD FÉRRICA sería\l"
# 101 "data/maps/VerdanturfTown/scripts.pory"
	.string "más sencillo.$"
# 102 "data/maps/VerdanturfTown/scripts.pory"

# 103 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_EasyToGetToRustboroNow:
# 104 "data/maps/VerdanturfTown/scripts.pory"
	.string "La cueva que hay cerca de la TIENDA\n"
# 105 "data/maps/VerdanturfTown/scripts.pory"
	.string "POKéMON es ahora un túnel que\l"
# 106 "data/maps/VerdanturfTown/scripts.pory"
	.string "conecta dos ciudades.\p"
# 107 "data/maps/VerdanturfTown/scripts.pory"
	.string "Es lo mejor. Ahora no cuesta nada ir\n"
# 108 "data/maps/VerdanturfTown/scripts.pory"
	.string "a comprar productos DEVON a\l"
# 109 "data/maps/VerdanturfTown/scripts.pory"
	.string "CIUDAD FÉRRICA.$"
# 110 "data/maps/VerdanturfTown/scripts.pory"

# 111 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_TownSign:
# 112 "data/maps/VerdanturfTown/scripts.pory"
	.string "PUEBLO VERDEGAL\p"
# 113 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Las ventosas tierras altas que\n"
# 114 "data/maps/VerdanturfTown/scripts.pory"
	.string "siempre huelen a hierba fresca.”$"
# 115 "data/maps/VerdanturfTown/scripts.pory"

# 116 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_WandasHouse:
# 117 "data/maps/VerdanturfTown/scripts.pory"
	.string "CASA de CLARA$"
# 118 "data/maps/VerdanturfTown/scripts.pory"

# 119 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_BattleTentSign:
# 120 "data/maps/VerdanturfTown/scripts.pory"
	.string "TIENDA de BATALLA de PUEBLO VERDEGAL\n"
# 121 "data/maps/VerdanturfTown/scripts.pory"
	.string "“¡Disfruta de los mejores combates!”$"
# 122 "data/maps/VerdanturfTown/scripts.pory"

# 123 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_RusturfTunnelSign:
# 124 "data/maps/VerdanturfTown/scripts.pory"
	.string "TÚNEL FERVERGAL\n"
# 125 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Conecta CIUDAD FÉRRICA y VERDEGAL.\p"
# 126 "data/maps/VerdanturfTown/scripts.pory"
	.string "El proyecto de construcción del\n"
# 127 "data/maps/VerdanturfTown/scripts.pory"
	.string "túnel ha sido cancelado.”$"
