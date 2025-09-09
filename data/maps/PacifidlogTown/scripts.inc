# 1 "data/maps/PacifidlogTown/scripts.pory"

# 2 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_MapScripts::
# 3 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
# 4 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
# 5 "data/maps/PacifidlogTown/scripts.pory"
	.byte 0
# 6 "data/maps/PacifidlogTown/scripts.pory"

# 7 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnTransition:
# 8 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 9 "data/maps/PacifidlogTown/scripts.pory"
	end
# 10 "data/maps/PacifidlogTown/scripts.pory"

# 11 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnResume:
# 12 "data/maps/PacifidlogTown/scripts.pory"
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
# 13 "data/maps/PacifidlogTown/scripts.pory"
	end
# 14 "data/maps/PacifidlogTown/scripts.pory"

# 15 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_NinjaBoy::
# 16 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
# 17 "data/maps/PacifidlogTown/scripts.pory"
	end
# 18 "data/maps/PacifidlogTown/scripts.pory"

# 19 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Girl::
# 20 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
# 21 "data/maps/PacifidlogTown/scripts.pory"
	end
# 22 "data/maps/PacifidlogTown/scripts.pory"

# 23 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Fisherman::
# 24 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
# 25 "data/maps/PacifidlogTown/scripts.pory"
	end
# 26 "data/maps/PacifidlogTown/scripts.pory"

# 27 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_TownSign::
# 28 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
# 29 "data/maps/PacifidlogTown/scripts.pory"
	end
# 30 "data/maps/PacifidlogTown/scripts.pory"

# 31 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_FastRunningCurrent:
# 32 "data/maps/PacifidlogTown/scripts.pory"
	.string "El mar que separa OROMAR de CIUDAD\n"
# 33 "data/maps/PacifidlogTown/scripts.pory"
	.string "PORTUAL tiene muchas corrientes.\p"
# 34 "data/maps/PacifidlogTown/scripts.pory"
	.string "¡Si haces SURF en él, puedes acabar\n"
# 35 "data/maps/PacifidlogTown/scripts.pory"
	.string "en cualquier sitio!$"
# 36 "data/maps/PacifidlogTown/scripts.pory"

# 37 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_NeatHousesOnWater:
# 38 "data/maps/PacifidlogTown/scripts.pory"
	.string "Mira qué cosa más chula.\n"
# 39 "data/maps/PacifidlogTown/scripts.pory"
	.string "¡Las casas flotan sobre el agua!\p"
# 40 "data/maps/PacifidlogTown/scripts.pory"
	.string "¡Yo he nacido aquí!$"
# 41 "data/maps/PacifidlogTown/scripts.pory"

# 42 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_SkyPillarTooScary:
# 43 "data/maps/PacifidlogTown/scripts.pory"
	.string "¿El PILAR CELESTE?\p"
# 44 "data/maps/PacifidlogTown/scripts.pory"
	.string "Ah, tú te refieres a esa torre\n"
# 45 "data/maps/PacifidlogTown/scripts.pory"
	.string "altísima que está más allá.\p"
# 46 "data/maps/PacifidlogTown/scripts.pory"
	.string "Lo que es yo, no subía hasta arriba\n"
# 47 "data/maps/PacifidlogTown/scripts.pory"
	.string "ni loco. Ese sitio me da escalofríos.\p"
# 48 "data/maps/PacifidlogTown/scripts.pory"
	.string "Por el contrario, vivir a nivel del\n"
# 49 "data/maps/PacifidlogTown/scripts.pory"
	.string "mar en OROMAR es una gozada.$"
# 50 "data/maps/PacifidlogTown/scripts.pory"

# 51 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_TownSign:
# 52 "data/maps/PacifidlogTown/scripts.pory"
	.string "PUEBLO OROMAR\p"
# 53 "data/maps/PacifidlogTown/scripts.pory"
	.string "“Donde el radiante sol ilumina\n"
# 54 "data/maps/PacifidlogTown/scripts.pory"
	.string "las aguas cada día.”$"
