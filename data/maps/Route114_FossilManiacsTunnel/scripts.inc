# 1 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 2 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_MapScripts::
# 3 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_OnTransition
# 4 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_FossilManiacsTunnel_OnLoad
# 5 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.byte 0
# 6 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 7 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnTransition:
# 8 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac
# 9 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 10 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 11 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac::
# 12 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectxyperm LOCALID_FOSSIL_MANIAC, 6, 5
# 13 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectmovementtype LOCALID_FOSSIL_MANIAC, MOVEMENT_TYPE_FACE_DOWN
# 14 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 15 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 16 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnLoad:
# 17 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass
# 18 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 19 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 20 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass::
# 21 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, TRUE
# 22 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, TRUE
# 23 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 24 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 25 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn::
# 26 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lockall
# 27 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFasterUp
# 28 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 29 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_NotSafeThatWay, MSGBOX_DEFAULT
# 31 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setvar VAR_FOSSIL_MANIAC_STATE, 2
# 32 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	releaseall
# 33 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 34 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 35 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_FossilManiac::
# 36 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lock
# 37 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	faceplayer
# 38 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil
# 39 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 40 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 41 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 42 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 43 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
# 44 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 45 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 46 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 47 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil::
# 48 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
# 49 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 50 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 51 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 52 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil::
# 53 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
# 54 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 55 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 56 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 57 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_LookInDesertForFossils:
# 58 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Soy el FOSILMANÍACO…\n"
# 59 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Me enseñas un FÓSIL y lo flipo…\p"
# 60 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "¿Quieres un FÓSIL?\p"
# 61 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Me parece muy bien, pero todos los que\n"
# 62 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "hay aquí son míos, sólo míos…\p"
# 63 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Si necesitas desesperadamente\n"
# 64 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "un FÓSIL, ve al desierto. Allí hay rocas\l"
# 65 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "y arena que quizás escondan FÓSILES…$"
# 66 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 67 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils:
# 68 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Has encontrado un FÓSIL, ¿no?\n"
# 69 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Qué bien… Qué envidia me das…\p"
# 70 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "¿Qué vas a hacer con ese FÓSIL?\p"
# 71 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Por lo que cuentan, DEVON está\n"
# 72 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "investigando cómo reanimar\l"
# 73 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "POKéMON a partir de FÓSILES.\p"
# 74 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "A mí me chiflan mis FÓSILES, así\n"
# 75 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "que no se me ocurriría hacer eso.$"
# 76 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 77 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_FossilsAreWonderful:
# 78 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Los FÓSILES son tan… guays…\n"
# 79 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Me encantan…$"
# 80 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 81 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_NotSafeThatWay:
# 82 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Oh…\n"
# 83 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Ese camino es peligroso…\p"
# 84 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Yo estaba excavando, ¿sabes?…\n"
# 85 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Y de repente se derrumbó la pared…\p"
# 86 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Creo que debajo hay una cueva gigante…\p"
# 87 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Pero a mí no me interesa porque no\n"
# 88 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "creo que haya FÓSILES ahí…$"
