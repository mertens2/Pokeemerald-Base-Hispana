# 1 "data/maps/ScorchedSlab/scripts.pory"

# 2 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_MapScripts::
# 3 "data/maps/ScorchedSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlab_OnTransition
# 4 "data/maps/ScorchedSlab/scripts.pory"
	.byte 0
# 5 "data/maps/ScorchedSlab/scripts.pory"

# 6 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_OnTransition:
# 7 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_LANDMARK_SCORCHED_SLAB
# 8 "data/maps/ScorchedSlab/scripts.pory"
	end

ScorchedSlab_EventScript_Volcarona::
# 13 "data/maps/ScorchedSlab/scripts.pory"
	faceplayer
# 14 "data/maps/ScorchedSlab/scripts.pory"
	lockall
# 15 "data/maps/ScorchedSlab/scripts.pory"
	msgbox ScorchedSlab_EventScript_Volcarona_Text_0, MSGBOX_YESNO
# 17 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ScorchedSlab_EventScript_Volcarona_2
# 22 "data/maps/ScorchedSlab/scripts.pory"
	playmoncry SPECIES_VOLCARONA, CRY_MODE_ENCOUNTER
# 23 "data/maps/ScorchedSlab/scripts.pory"
	setwildbattle SPECIES_VOLCARONA, 50
# 24 "data/maps/ScorchedSlab/scripts.pory"
	delay 40
# 25 "data/maps/ScorchedSlab/scripts.pory"
	waitmoncry
# 26 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 27 "data/maps/ScorchedSlab/scripts.pory"
	dowildbattle
# 28 "data/maps/ScorchedSlab/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 29 "data/maps/ScorchedSlab/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 30 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ScorchedSlab_EventScript_Volcarona_5
# 37 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ScorchedSlab_EventScript_Volcarona_6
# 37 "data/maps/ScorchedSlab/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq ScorchedSlab_EventScript_Volcarona_6
# 44 "data/maps/ScorchedSlab/scripts.pory"
	addobject LOCALID_VOLCARONA_SCORCHED
# 45 "data/maps/ScorchedSlab/scripts.pory"
	clearflag FLAG_ITEM_SCORCHED_SLAB_TM_SUNNY_DAY
# 46 "data/maps/ScorchedSlab/scripts.pory"
	msgbox ScorchedSlab_EventScript_Volcarona_Text_2
ScorchedSlab_EventScript_Volcarona_4:
# 49 "data/maps/ScorchedSlab/scripts.pory"
	closemessage
# 50 "data/maps/ScorchedSlab/scripts.pory"
	releaseall
	end

ScorchedSlab_EventScript_Volcarona_2:
# 18 "data/maps/ScorchedSlab/scripts.pory"
	closemessage
# 19 "data/maps/ScorchedSlab/scripts.pory"
	releaseall
	end

ScorchedSlab_EventScript_Volcarona_5:
# 31 "data/maps/ScorchedSlab/scripts.pory"
	removeobject LOCALID_VOLCARONA_SCORCHED
# 32 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_ITEM_SCORCHED_SLAB_TM_SUNNY_DAY
# 33 "data/maps/ScorchedSlab/scripts.pory"
	msgbox ScorchedSlab_EventScript_Volcarona_Text_1
# 35 "data/maps/ScorchedSlab/scripts.pory"
	giveitem ITEM_TM_BURNING_BULWARK
	goto ScorchedSlab_EventScript_Volcarona_4

ScorchedSlab_EventScript_Volcarona_6:
# 38 "data/maps/ScorchedSlab/scripts.pory"
	addobject LOCALID_VOLCARONA_SCORCHED
# 39 "data/maps/ScorchedSlab/scripts.pory"
	clearflag FLAG_ITEM_SCORCHED_SLAB_TM_SUNNY_DAY
# 40 "data/maps/ScorchedSlab/scripts.pory"
	msgbox ScorchedSlab_EventScript_Volcarona_Text_2
	goto ScorchedSlab_EventScript_Volcarona_4


ScorchedSlab_EventScript_Volcarona_Text_0:
# 15 "data/maps/ScorchedSlab/scripts.pory"
	.string "Un Volcarona. Parece muy poderoso, pero\n"
	.string "ansía una buena batalla.\p"
	.string "¿Se la darás?$"

ScorchedSlab_EventScript_Volcarona_Text_1:
# 33 "data/maps/ScorchedSlab/scripts.pory"
	.string "Volcarona parecía satisfecho.\p"
	.string "¡Por satisfacer sus ganas de una\n"
	.string "batalla digna, Volcarona soltó…!$"

ScorchedSlab_EventScript_Volcarona_Text_2:
# 40 "data/maps/ScorchedSlab/scripts.pory"
	.string "Parece que Volcarona quiere una batalla\n"
	.string "digna.\p"
	.string "Te esperará hasta que tengas el nivel\n"
	.string "que necesitas.$"
