# 1 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_MapScripts::
# 3 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_Corridors_B1F_OnResume
# 4 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_Corridors_B1F_OnLoad
# 5 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 7 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnResume:
# 8 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER1, 5, 4
# 9 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 10 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 11 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad:
# 12 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call_if_unset FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_EventScript_LockStorageRoom
# 13 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom
# 14 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 15 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 16 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_LockStorageRoom::
# 17 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
# 18 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 19 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 20 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom::
# 21 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
# 22 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 23 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 24 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_TuberM::
# 25 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_YayItsAShip, MSGBOX_NPC
# 26 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 27 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 28 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor::
# 29 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	lockall
# 30 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked
# 31 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	checkitem ITEM_STORAGE_KEY
# 32 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked
# 33 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_InsertedStorageKey, MSGBOX_DEFAULT
# 34 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	playse SE_PIN
# 35 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	removeitem ITEM_STORAGE_KEY
# 36 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setflag FLAG_USED_STORAGE_KEY
# 37 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom
# 38 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	special DrawWholeMapView
# 39 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
# 40 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 41 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 42 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked::
# 43 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DoorIsLocked, MSGBOX_DEFAULT
# 44 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
# 45 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 46 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 47 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked::
# 48 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_DEFAULT
# 49 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
# 50 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 51 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 52 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_Duncan::
# 53 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	trainerbattle_single TRAINER_DUNCAN, AbandonedShip_Corridors_B1F_Text_DuncanIntro, AbandonedShip_Corridors_B1F_Text_DuncanDefeat
# 54 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 56 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 57 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DuncanIntro:
# 58 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Cuando salimos al mar, los MARINEROS\n"
# 59 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "siempre llevamos nuestros POKéMON.\l"
# 60 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "¿Te hace un combatito?$"
# 61 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 62 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DuncanDefeat:
# 63 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Huy, ¡tocado y hundido!$"
# 64 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 65 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DuncanPostBattle:
# 66 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "El barco está casi tocando fondo.\p"
# 67 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Si un POKéMON supiera bucear,\n"
# 68 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "quizás podríamos avanzar…$"
# 69 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 70 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_YayItsAShip:
# 71 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "¡Barco a la vista!$"
# 72 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 73 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DoorIsLocked:
# 74 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "La puerta está cerrada.\p"
# 75 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "En la puerta pone “ALMACÉN”.$"
# 76 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 77 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_InsertedStorageKey:
# 78 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "{PLAYER} ha metido la LLAVE ALMACÉN\n"
# 79 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "y la ha hecho girar.\p"
# 80 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "La LLAVE se ha quedado atascada,\n"
# 81 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "pero la puerta se ha abierto.$"
# 82 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 83 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Text_TheDoorIsOpen:
# 84 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "La puerta está abierta.$"
