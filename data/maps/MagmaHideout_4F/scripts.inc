# 1 "data/maps/MagmaHideout_4F/scripts.pory"

# 2 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 3 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_4F/scripts.pory"

# 5 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 6 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 7 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 9 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 10 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 12 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 13 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON_SLEEPING
# 23 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, MagmaHideout_4F_Movement_MaxieLookAround
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieGroudonWhatsWrong, MSGBOX_DEFAULT
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, Common_Movement_FacePlayer
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_MAXIE
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_1
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_2
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_3
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_TABITHA
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 76 "data/maps/MagmaHideout_4F/scripts.pory"

# 77 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 89 "data/maps/MagmaHideout_4F/scripts.pory"

# 90 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 94 "data/maps/MagmaHideout_4F/scripts.pory"

# 95 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieLookAround:
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 108 "data/maps/MagmaHideout_4F/scripts.pory"

# 109 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 113 "data/maps/MagmaHideout_4F/scripts.pory"

# 114 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 118 "data/maps/MagmaHideout_4F/scripts.pory"

# 119 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 123 "data/maps/MagmaHideout_4F/scripts.pory"

# 124 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 128 "data/maps/MagmaHideout_4F/scripts.pory"

# 129 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Intro:
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Yo también quiero ver a GROUDON, pero\n"
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "no me dejan ni acercarme a la cola…\p"
# 132 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Qué frustración más grande…\p"
# 133 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Oh, no!\n"
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Se me ha escapado lo de GROUDON!$"
# 135 "data/maps/MagmaHideout_4F/scripts.pory"

# 136 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Defeat:
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Supongo que no se puede ganar cuando\n"
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "no se está tranquilo y concentrado…$"
# 139 "data/maps/MagmaHideout_4F/scripts.pory"

# 140 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11PostBattle:
# 141 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¿Tendrá cola GROUDON?…$"
# 142 "data/maps/MagmaHideout_4F/scripts.pory"

# 143 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Intro:
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Jua, jua, jua!\n"
# 145 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Queda poco! ¡Muy poco!\l"
# 146 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Se va a cumplir nuestro objetivo!$"
# 147 "data/maps/MagmaHideout_4F/scripts.pory"

# 148 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Defeat:
# 149 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
# 150 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¿He venido tan lejos para esto?$"
# 151 "data/maps/MagmaHideout_4F/scripts.pory"

# 152 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12PostBattle:
# 153 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Tengo que avisar a MAGNO de que\n"
# 154 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "se nos ha colado alguien!$"
# 155 "data/maps/MagmaHideout_4F/scripts.pory"

# 156 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro:
# 157 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Todavía no hemos acabado contigo!\n"
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡No te voy a dejar pasar porque sí!$"
# 159 "data/maps/MagmaHideout_4F/scripts.pory"

# 160 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat:
# 161 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¿Tan fácil es derrotarme?$"
# 162 "data/maps/MagmaHideout_4F/scripts.pory"

# 163 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle:
# 164 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Anda, dame la revancha…$"
# 165 "data/maps/MagmaHideout_4F/scripts.pory"

# 166 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 167 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Je, je, je!\n"
# 168 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Has llegado lejos, lo reconozco!\p"
# 169 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Y sí, tienes razón!\n"
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡GROUDON duerme algo más arriba!\p"
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡MAGNO acaba de ir ahora mismo\n"
# 172 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "hacia donde está GROUDON!\p"
# 173 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Le falta poco para despertarse!\n"
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Je, je! ¡Je, je, je!$"
# 175 "data/maps/MagmaHideout_4F/scripts.pory"

# 176 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Otra vez vencido…\n"
# 178 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Je, je…$"
# 179 "data/maps/MagmaHideout_4F/scripts.pory"

# 180 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Mientras perdías el tiempo conmigo,\n"
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAGNO ha despertado a GROUDON…$"
# 183 "data/maps/MagmaHideout_4F/scripts.pory"

# 184 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 185 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAGNO: GROUDON…\p"
# 186 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nada ha logrado despertarte y liberarte\n"
# 187 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "de tu prisión de magma…\p"
# 188 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Lo que buscabas era esta\n"
# 189 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ESFERA AZUL, ¿a que sí?\p"
# 190 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Pues aquí la tienes.\n"
# 191 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Que su brillo te despierte!\p"
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Muéstrame tu gran poder\n"
# 193 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "en toda su plenitud!$"
# 194 "data/maps/MagmaHideout_4F/scripts.pory"

# 195 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAGNO: ¡GROUDON!\n"
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¿Qué ocurre?\p"
# 198 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¿La ESFERA AZUL no es la llave?\p"
# 199 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡GROUDON!\n"
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¿Adónde te has ido?$"
# 201 "data/maps/MagmaHideout_4F/scripts.pory"

# 202 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 203 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAGNO: Ah, ¿así que has sido tú?\p"
# 204 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ya me había fijado en cómo metías\n"
# 205 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "las narices donde no te llamaban…\p"
# 206 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Ya está!\n"
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Seguro que todo es culpa tuya!$"
# 208 "data/maps/MagmaHideout_4F/scripts.pory"

# 209 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¿Por qué te gusta tanto andar\n"
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "con los POKéMON?$"
# 212 "data/maps/MagmaHideout_4F/scripts.pory"

# 213 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAGNO: Debe de haber algún motivo\n"
# 215 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "por el que GROUDON se ha ido…\p"
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Eso es lo que estás intentando\n"
# 217 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "decirme, ¿verdad?\p"
# 218 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ya…\n"
# 219 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Claro…\p"
# 220 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Mmmm…\n"
# 221 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¿Crees que no me había dado cuenta?\p"
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Como GROUDON se ha ido, ya no\n"
# 223 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "necesitamos este estúpido volcán.\p"
# 224 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "¡Me voy en busca de GROUDON,\n"
# 225 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "así que hasta nunca!$"
