# 1 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_EventScript_Youngster::
# 6 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_IsntItFunHere, MSGBOX_NPC
# 7 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	end
# 8 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 9 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_EventScript_Charlie::
# 10 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	trainerbattle_single TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieIntro, AbandonedShip_Corridors_1F_Text_CharlieDefeat
# 11 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	end
# 13 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 14 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharlieIntro:
# 15 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "¿Qué? ¿Te hace gracia que lleve\n"
# 16 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "flotador montado en el barco?$"
# 17 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 18 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharlieDefeat:
# 19 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Vaya, me he quedado desinflado…$"
# 20 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 21 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharliePostBattle:
# 22 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "¡No es fácil lanzar POKé BALLS\n"
# 23 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "cuando llevas un flotador!$"
# 24 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 25 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_IsntItFunHere:
# 26 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "¿A que es superdivertido?\n"
# 27 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "¡Me lo paso pipa aquí!$"
