# 1 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 2 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_MapScripts::
# 3 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
# 4 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 6 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_OnTransition:
# 7 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
# 8 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 9 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 10 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler1::
# 11 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
# 12 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 13 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 14 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler2::
# 15 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
# 16 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 17 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 18 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3::
# 19 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 20 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 21 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
# 22 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
# 23 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 24 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 25 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 26 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_TunnelOpened::
# 27 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
# 28 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 29 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 30 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 31 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
# 32 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "El TÚNEL FERVERGAL…\p"
# 33 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Al principio teníamos un equipo con el\n"
# 34 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "último grito en maquinaria trabajando\l"
# 35 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "en él y tuvimos que parar.\p"
# 36 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Resulta que podríamos haber afectado\n"
# 37 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "negativamente a los POKéMON\l"
# 38 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "salvajes de la zona.\p"
# 39 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Por eso ahora nos dedicamos\n"
# 40 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "a tocarnos la barriga…$"
# 41 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 42 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
# 43 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hay un hombre que está cavando\n"
# 44 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "un TÚNEL a VERDEGAL él solito.\l"
# 45 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Parece desesperado por terminar.\p"
# 46 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Dice que, si cava poco a poco, sin usar\n"
# 47 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "máquinas, no molestará a los POKéMON\l"
# 48 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "ni causará daños medioambientales…$"
# 49 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 50 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
# 51 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Para llegar a VERDEGAL sin usar\n"
# 52 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "el TÚNEL, tienes que atravesar el mar\l"
# 53 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "hasta AZULIZA, navegar a CIUDAD\l"
# 54 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "PORTUAL y luego viajar a MALVALONA…$"
# 55 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 56 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
# 57 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "¿Te has enterado?\n"
# 58 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "¡Han terminado el TÚNEL a VERDEGAL!\p"
# 59 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "A veces creo que, si lo deseas de veras,\n"
# 60 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "tus sueños se pueden hacer realidad…$"
