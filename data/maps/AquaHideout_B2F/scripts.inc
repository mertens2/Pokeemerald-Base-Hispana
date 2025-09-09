# 1 "data/maps/AquaHideout_B2F/scripts.pory"

# 2 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_MapScripts::
# 3 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
# 4 "data/maps/AquaHideout_B2F/scripts.pory"
	.byte 0
# 5 "data/maps/AquaHideout_B2F/scripts.pory"

# 6 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition:
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
# 8 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 9 "data/maps/AquaHideout_B2F/scripts.pory"

# 10 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_PreventMattNoticing::
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 12 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 13 "data/maps/AquaHideout_B2F/scripts.pory"

# 14 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattNoticePlayer::
# 15 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 16 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 17 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 18 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 21 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 22 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 23 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 25 "data/maps/AquaHideout_B2F/scripts.pory"

# 26 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Matt::
# 27 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
# 28 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 29 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 31 "data/maps/AquaHideout_B2F/scripts.pory"

# 32 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 33 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 34 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_AQUA_HIDEOUT_SUBMARINE
# 35 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 45 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 50 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 54 "data/maps/AquaHideout_B2F/scripts.pory"

# 55 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 57 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 59 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 60 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 61 "data/maps/AquaHideout_B2F/scripts.pory"

# 62 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 65 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 66 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 69 "data/maps/AquaHideout_B2F/scripts.pory"

# 70 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 71 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 74 "data/maps/AquaHideout_B2F/scripts.pory"

# 75 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 79 "data/maps/AquaHideout_B2F/scripts.pory"

# 80 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 84 "data/maps/AquaHideout_B2F/scripts.pory"

# 85 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 89 "data/maps/AquaHideout_B2F/scripts.pory"

# 90 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattIntro:
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Jo, jo, jo…\p"
# 92 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¿Has llegado hasta aquí?\n"
# 93 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Creo que te hemos subestimado.\p"
# 94 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¡Pero ya está bien de tonterías!\p"
# 95 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Yo soy más fuerte que los SOLDADOS\n"
# 96 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "con los que has luchado hasta ahora.\p"
# 97 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "No voy a limitarme a hacerte perder\n"
# 98 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "tiempo… ¡Te voy a pulverizar!$"
# 99 "data/maps/AquaHideout_B2F/scripts.pory"

# 100 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattDefeat:
# 101 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Jo, jo, jo…\n"
# 102 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Yo tampoco lo he logrado…$"
# 103 "data/maps/AquaHideout_B2F/scripts.pory"

# 104 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 105 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¡Jo, jo, jo!\p"
# 106 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¡Mientras me divertía contigo,\n"
# 107 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "nuestro JEFE terminó los preparativos!$"
# 108 "data/maps/AquaHideout_B2F/scripts.pory"

# 109 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattPostBattle:
# 110 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¡Jo, jo, jo!\p"
# 111 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Nuestro JEFE ya ha ido a ocultarse\n"
# 112 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "a una cueva submarina.\p"
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Si quieres encontrarlo, tendrás que\n"
# 114 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "buscarlo en el gran mar que hay\l"
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "más allá de CALAGUA.\p"
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¿Pero acaso podrás encontrar\n"
# 117 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "siquiera el mar? ¡Jo, jo, jo!$"
# 118 "data/maps/AquaHideout_B2F/scripts.pory"

# 119 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 120 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¡Jua, jua, jua! ¡Estoy harto de esperar!\n"
# 121 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¡Me debes un combate!$"
# 122 "data/maps/AquaHideout_B2F/scripts.pory"

# 123 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Total, podía haberme quedado\n"
# 125 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "esperando…$"
# 126 "data/maps/AquaHideout_B2F/scripts.pory"

# 127 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 128 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "El JEFE no va a estar satisfecho…$"
# 129 "data/maps/AquaHideout_B2F/scripts.pory"

# 130 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 131 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Baldosas teletransportadoras:\n"
# 132 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¡el orgullo de la GUARIDA!\p"
# 133 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "No tienes ni idea de dónde estás,\n"
# 134 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¿verdad?\p"
# 135 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Aturullar al enemigo para luego caer\n"
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "sobre ellos. ¡Ése es nuestro plan!$"
# 137 "data/maps/AquaHideout_B2F/scripts.pory"

# 138 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¿Y tú qué desayunas?\n"
# 140 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "¿Cómo es que no te cansas?$"
# 141 "data/maps/AquaHideout_B2F/scripts.pory"

# 142 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 143 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Esto me recuerda… que no me acuerdo\n"
# 144 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "de dónde puse la MASTER BALL.\p"
# 145 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Si no la protejo bien, el JEFE me va\n"
# 146 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "a machacar…$"
# 147 "data/maps/AquaHideout_B2F/scripts.pory"

# 148 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 149 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lo primero que aprendí al entrar en el\n"
# 150 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "EQUIPO AQUA fue cómo están conectadas\l"
# 151 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "estas baldosas teletransportadoras.$"
# 152 "data/maps/AquaHideout_B2F/scripts.pory"

# 153 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 154 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Debería pensar en algo más que en las\n"
# 155 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "baldosas teletransportadoras…$"
# 156 "data/maps/AquaHideout_B2F/scripts.pory"

# 157 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 158 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tengo que encontrar la manera\n"
# 159 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "de luchar de forma más eficaz…$"
