# 1 "data/maps/AquaHideout_B1F/scripts.pory"

# 2 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_MapScripts::
# 3 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AquaHideout_B1F_OnResume
# 4 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B1F_OnTransition
# 5 "data/maps/AquaHideout_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/AquaHideout_B1F/scripts.pory"

# 7 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnResume:
# 8 "data/maps/AquaHideout_B1F/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, AquaHideout_B1F_EventScript_TryRemoveElectrode
# 9 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 10 "data/maps/AquaHideout_B1F/scripts.pory"

# 11 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_TryRemoveElectrode::
# 12 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/AquaHideout_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 16 "data/maps/AquaHideout_B1F/scripts.pory"

# 17 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_OnTransition:
# 18 "data/maps/AquaHideout_B1F/scripts.pory"
	call_if_unset FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT, AquaHideout_B1F_EventScript_ShowElectrode1
# 19 "data/maps/AquaHideout_B1F/scripts.pory"
	call_if_unset FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT, AquaHideout_B1F_EventScript_ShowElectrode2
# 20 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 21 "data/maps/AquaHideout_B1F/scripts.pory"

# 22 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_ShowElectrode1::
# 23 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1
# 24 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 25 "data/maps/AquaHideout_B1F/scripts.pory"

# 26 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_ShowElectrode2::
# 27 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2
# 28 "data/maps/AquaHideout_B1F/scripts.pory"
	return
# 29 "data/maps/AquaHideout_B1F/scripts.pory"

# 30 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode1::
# 31 "data/maps/AquaHideout_B1F/scripts.pory"
	lock
# 32 "data/maps/AquaHideout_B1F/scripts.pory"
	faceplayer
# 33 "data/maps/AquaHideout_B1F/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 30
# 34 "data/maps/AquaHideout_B1F/scripts.pory"
	waitse
# 35 "data/maps/AquaHideout_B1F/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 36 "data/maps/AquaHideout_B1F/scripts.pory"
	delay 40
# 37 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmoncry
# 38 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 39 "data/maps/AquaHideout_B1F/scripts.pory"
	dowildbattle
# 40 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 41 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 42 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AquaHideout_B1F_EventScript_DefeatedElectrode1
# 43 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AquaHideout_B1F_EventScript_DefeatedElectrode1
# 44 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AquaHideout_B1F_EventScript_DefeatedElectrode1
# 45 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
# 46 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 47 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 48 "data/maps/AquaHideout_B1F/scripts.pory"

# 49 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_DefeatedElectrode1::
# 50 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
# 51 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 52 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 53 "data/maps/AquaHideout_B1F/scripts.pory"

# 54 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Electrode2::
# 55 "data/maps/AquaHideout_B1F/scripts.pory"
	lock
# 56 "data/maps/AquaHideout_B1F/scripts.pory"
	faceplayer
# 57 "data/maps/AquaHideout_B1F/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 30
# 58 "data/maps/AquaHideout_B1F/scripts.pory"
	waitse
# 59 "data/maps/AquaHideout_B1F/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 60 "data/maps/AquaHideout_B1F/scripts.pory"
	delay 40
# 61 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmoncry
# 62 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 63 "data/maps/AquaHideout_B1F/scripts.pory"
	dowildbattle
# 64 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 65 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 66 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, AquaHideout_B1F_EventScript_DefeatedElectrode2
# 67 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, AquaHideout_B1F_EventScript_DefeatedElectrode2
# 68 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, AquaHideout_B1F_EventScript_DefeatedElectrode2
# 69 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
# 70 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 71 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 72 "data/maps/AquaHideout_B1F/scripts.pory"

# 73 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_DefeatedElectrode2::
# 74 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
# 75 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 76 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 77 "data/maps/AquaHideout_B1F/scripts.pory"

# 78 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt2::
# 79 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, AquaHideout_B1F_Text_Grunt2Intro, AquaHideout_B1F_Text_Grunt2Defeat, AquaHideout_B1F_EventScript_Grunt2Defeated
# 80 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 82 "data/maps/AquaHideout_B1F/scripts.pory"

# 83 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt2Defeated::
# 84 "data/maps/AquaHideout_B1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 85 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmovement 0
# 86 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
# 87 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 88 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 89 "data/maps/AquaHideout_B1F/scripts.pory"

# 90 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt3::
# 91 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, AquaHideout_B1F_Text_Grunt3Intro, AquaHideout_B1F_Text_Grunt3Defeat, AquaHideout_B1F_EventScript_Grunt3Defeated
# 92 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 94 "data/maps/AquaHideout_B1F/scripts.pory"

# 95 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt3Defeated::
# 96 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_DEFAULT
# 97 "data/maps/AquaHideout_B1F/scripts.pory"
	release
# 98 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 99 "data/maps/AquaHideout_B1F/scripts.pory"

# 100 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt5::
# 101 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, AquaHideout_B1F_Text_Grunt5Intro, AquaHideout_B1F_Text_Grunt5Defeat
# 102 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 104 "data/maps/AquaHideout_B1F/scripts.pory"

# 105 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_EventScript_Grunt7::
# 106 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, AquaHideout_B1F_Text_Grunt7Intro, AquaHideout_B1F_Text_Grunt7Defeat
# 107 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/AquaHideout_B1F/scripts.pory"
	end
# 109 "data/maps/AquaHideout_B1F/scripts.pory"

# 110 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt2Intro:
# 111 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Si quieres conocer el secreto\n"
# 112 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "de nuestra GUARIDA, ¡derrótame!$"
# 113 "data/maps/AquaHideout_B1F/scripts.pory"

# 114 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt2Defeat:
# 115 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Qué desastre…$"
# 116 "data/maps/AquaHideout_B1F/scripts.pory"

# 117 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt2PostBattle:
# 118 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¿Nuestra GUARIDA secreta?\p"
# 119 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Bueno, digamos…\n"
# 120 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¡que hay un submarino de por medio!\p"
# 121 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Pero no te diré más…\n"
# 122 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¡Je, je, je!$"
# 123 "data/maps/AquaHideout_B1F/scripts.pory"

# 124 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt3Intro:
# 125 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Carga de combustible terminada.\n"
# 126 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Carga de víveres terminada.\p"
# 127 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Zarparemos en cuanto hayamos\n"
# 128 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "terminado con cierta personita\l"
# 129 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "de lo más entrometida…$"
# 130 "data/maps/AquaHideout_B1F/scripts.pory"

# 131 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt3Defeat:
# 132 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¡Me has dado una buena paliza!$"
# 133 "data/maps/AquaHideout_B1F/scripts.pory"

# 134 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt3PostBattle:
# 135 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¡No importa!\n"
# 136 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¡Yo ya me lo esperaba!\p"
# 137 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¡Total, sólo tenía que entretenerte\n"
# 138 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "un rato!$"
# 139 "data/maps/AquaHideout_B1F/scripts.pory"

# 140 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt5Intro:
# 141 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Auaaaa… Vigilar la GUARIDA me aburre\n"
# 142 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "tantísimo… Mola más luchar contigo.$"
# 143 "data/maps/AquaHideout_B1F/scripts.pory"

# 144 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt5Defeat:
# 145 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Auaaaa…\n"
# 146 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "He perdido…$"
# 147 "data/maps/AquaHideout_B1F/scripts.pory"

# 148 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt5PostBattle:
# 149 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Si sigues metiéndote donde no te\n"
# 150 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "llaman, otros miembros del EQUIPO AQUA\l"
# 151 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "irán a por ti.$"
# 152 "data/maps/AquaHideout_B1F/scripts.pory"

# 153 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt7Intro:
# 154 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¡Eh, tú!\n"
# 155 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¡Sí, me refiero a ti!\p"
# 156 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¿Cuál mola más en tu opinión?\n"
# 157 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "¿El uniforme del EQUIPO AQUA\l"
# 158 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "o el del EQUIPO MAGMA?$"
# 159 "data/maps/AquaHideout_B1F/scripts.pory"

# 160 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt7Defeat:
# 161 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "He perdido, pero sigo molando…$"
# 162 "data/maps/AquaHideout_B1F/scripts.pory"

# 163 "data/maps/AquaHideout_B1F/scripts.pory"
AquaHideout_B1F_Text_Grunt7PostBattle:
# 164 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Si tu uniforme mola, tienes buena\n"
# 165 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "pinta hasta cuando pierdes, ¿no?$"
