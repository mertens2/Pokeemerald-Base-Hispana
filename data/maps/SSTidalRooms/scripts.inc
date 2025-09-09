# 1 "data/maps/SSTidalRooms/scripts.pory"

# 2 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_MapScripts::
# 3 "data/maps/SSTidalRooms/scripts.pory"
	.byte 0
# 4 "data/maps/SSTidalRooms/scripts.pory"

# 5 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_SnatchGiver::
# 6 "data/maps/SSTidalRooms/scripts.pory"
	lock
# 7 "data/maps/SSTidalRooms/scripts.pory"
	faceplayer
# 8 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalRooms_EventScript_ExplainSnatch
# 9 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NotSuspiciousTakeThis, MSGBOX_DEFAULT
# 10 "data/maps/SSTidalRooms/scripts.pory"
	giveitem ITEM_TM_SNATCH
# 11 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 12 "data/maps/SSTidalRooms/scripts.pory"
	setflag FLAG_RECEIVED_TM_SNATCH
# 13 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 14 "data/maps/SSTidalRooms/scripts.pory"
	release
# 15 "data/maps/SSTidalRooms/scripts.pory"
	end
# 16 "data/maps/SSTidalRooms/scripts.pory"

# 17 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_ExplainSnatch::
# 18 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 19 "data/maps/SSTidalRooms/scripts.pory"
	release
# 20 "data/maps/SSTidalRooms/scripts.pory"
	end
# 21 "data/maps/SSTidalRooms/scripts.pory"

# 22 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Bed::
# 23 "data/maps/SSTidalRooms/scripts.pory"
	lockall
# 24 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_TakeRestOnBed, MSGBOX_DEFAULT
# 25 "data/maps/SSTidalRooms/scripts.pory"
	closemessage
# 26 "data/maps/SSTidalRooms/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 27 "data/maps/SSTidalRooms/scripts.pory"
	call SSTidalRooms_EventScript_ProgessCruiseAfterBed
# 28 "data/maps/SSTidalRooms/scripts.pory"
	releaseall
# 29 "data/maps/SSTidalRooms/scripts.pory"
	end
# 30 "data/maps/SSTidalRooms/scripts.pory"

# 31 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Colton::
# 32 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_COLTON, SSTidalRooms_Text_ColtonIntro, SSTidalRooms_Text_ColtonDefeat
# 33 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/SSTidalRooms/scripts.pory"
	end
# 35 "data/maps/SSTidalRooms/scripts.pory"

# 36 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Micah::
# 37 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_MICAH, SSTidalRooms_Text_MicahIntro, SSTidalRooms_Text_MicahDefeat
# 38 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_MicahPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/SSTidalRooms/scripts.pory"
	end
# 40 "data/maps/SSTidalRooms/scripts.pory"

# 41 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Thomas::
# 42 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_THOMAS, SSTidalRooms_Text_ThomasIntro, SSTidalRooms_Text_ThomasDefeat
# 43 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/SSTidalRooms/scripts.pory"
	end
# 45 "data/maps/SSTidalRooms/scripts.pory"

# 46 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Jed::
# 47 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_JedIntro, SSTidalRooms_Text_JedDefeat, SSTidalRooms_Text_JedNotEnoughMons
# 48 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_JedPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/SSTidalRooms/scripts.pory"
	end
# 50 "data/maps/SSTidalRooms/scripts.pory"

# 51 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Lea::
# 52 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_LeaIntro, SSTidalRooms_Text_LeaDefeat, SSTidalRooms_Text_LeaNotEnoughMons
# 53 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_LeaPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/SSTidalRooms/scripts.pory"
	end
# 55 "data/maps/SSTidalRooms/scripts.pory"

# 56 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Garret::
# 57 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_GARRET, SSTidalRooms_Text_GarretIntro, SSTidalRooms_Text_GarretDefeat
# 58 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/SSTidalRooms/scripts.pory"
	end
# 60 "data/maps/SSTidalRooms/scripts.pory"

# 61 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Naomi::
# 62 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_NAOMI, SSTidalRooms_Text_NaomiIntro, SSTidalRooms_Text_NaomiDefeat
# 63 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/SSTidalRooms/scripts.pory"
	end
# 65 "data/maps/SSTidalRooms/scripts.pory"

# 66 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_TakeRestOnBed:
# 67 "data/maps/SSTidalRooms/scripts.pory"
	.string "Es una cama.\n"
# 68 "data/maps/SSTidalRooms/scripts.pory"
	.string "Voy a descansar un poco.$"
# 69 "data/maps/SSTidalRooms/scripts.pory"

# 70 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonIntro:
# 71 "data/maps/SSTidalRooms/scripts.pory"
	.string "A veces suelo ir a CIUDAD CALAGUA.\p"
# 72 "data/maps/SSTidalRooms/scripts.pory"
	.string "Me lo paso genial participando\n"
# 73 "data/maps/SSTidalRooms/scripts.pory"
	.string "en CONCURSOS POKéMON.$"
# 74 "data/maps/SSTidalRooms/scripts.pory"

# 75 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonDefeat:
# 76 "data/maps/SSTidalRooms/scripts.pory"
	.string "¡Qué combate tan bueno!$"
# 77 "data/maps/SSTidalRooms/scripts.pory"

# 78 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonPostBattle:
# 79 "data/maps/SSTidalRooms/scripts.pory"
	.string "Yo es que me emociono sólo imaginando\n"
# 80 "data/maps/SSTidalRooms/scripts.pory"
	.string "los tipos de POKéMON a los que me\l"
# 81 "data/maps/SSTidalRooms/scripts.pory"
	.string "enfrentaré en el siguiente CONCURSO…$"
# 82 "data/maps/SSTidalRooms/scripts.pory"

# 83 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahIntro:
# 84 "data/maps/SSTidalRooms/scripts.pory"
	.string "¿Tus amigos son fuertes?$"
# 85 "data/maps/SSTidalRooms/scripts.pory"

# 86 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahDefeat:
# 87 "data/maps/SSTidalRooms/scripts.pory"
	.string "Sí, de hecho son muy fuertes…$"
# 88 "data/maps/SSTidalRooms/scripts.pory"

# 89 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahPostBattle:
# 90 "data/maps/SSTidalRooms/scripts.pory"
	.string "Los amigos suelen ser personas,\n"
# 91 "data/maps/SSTidalRooms/scripts.pory"
	.string "pero los POKéMON también pueden\l"
# 92 "data/maps/SSTidalRooms/scripts.pory"
	.string "ser muy buenos amigos…$"
# 93 "data/maps/SSTidalRooms/scripts.pory"

# 94 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasIntro:
# 95 "data/maps/SSTidalRooms/scripts.pory"
	.string "Joven…\n"
# 96 "data/maps/SSTidalRooms/scripts.pory"
	.string "¿Has llamado a la puerta?$"
# 97 "data/maps/SSTidalRooms/scripts.pory"

# 98 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasDefeat:
# 99 "data/maps/SSTidalRooms/scripts.pory"
	.string "Se ha de aceptar la derrota\n"
# 100 "data/maps/SSTidalRooms/scripts.pory"
	.string "con deportividad y caballerosidad.$"
# 101 "data/maps/SSTidalRooms/scripts.pory"

# 102 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasPostBattle:
# 103 "data/maps/SSTidalRooms/scripts.pory"
	.string "El lema de cualquier CABALLERO que se\n"
# 104 "data/maps/SSTidalRooms/scripts.pory"
	.string "precie es: “Nunca perder la calma”.$"
# 105 "data/maps/SSTidalRooms/scripts.pory"

# 106 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedIntro:
# 107 "data/maps/SSTidalRooms/scripts.pory"
	.string "JOEL: Me da un poco de vergüenza,\n"
# 108 "data/maps/SSTidalRooms/scripts.pory"
	.string "pero… ¡vas a ver nuestro dúo de lucha!$"
# 109 "data/maps/SSTidalRooms/scripts.pory"

# 110 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedDefeat:
# 111 "data/maps/SSTidalRooms/scripts.pory"
	.string "JOEL: Ay…$"
# 112 "data/maps/SSTidalRooms/scripts.pory"

# 113 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedPostBattle:
# 114 "data/maps/SSTidalRooms/scripts.pory"
	.string "JOEL: Es la primera vez que nuestro\n"
# 115 "data/maps/SSTidalRooms/scripts.pory"
	.string "dúo de lucha pierde…\l"
# 116 "data/maps/SSTidalRooms/scripts.pory"
	.string "¡Debes de ser excepcional!$"
# 117 "data/maps/SSTidalRooms/scripts.pory"

# 118 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedNotEnoughMons:
# 119 "data/maps/SSTidalRooms/scripts.pory"
	.string "JOEL: ¿Sólo tienes un POKéMON?\n"
# 120 "data/maps/SSTidalRooms/scripts.pory"
	.string "¿Y no es un rollo patatero?$"
# 121 "data/maps/SSTidalRooms/scripts.pory"

# 122 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaIntro:
# 123 "data/maps/SSTidalRooms/scripts.pory"
	.string "LIZ: Me da un poco de cosa, pero…\n"
# 124 "data/maps/SSTidalRooms/scripts.pory"
	.string "¡vas a ver nuestro dúo de lucha!$"
# 125 "data/maps/SSTidalRooms/scripts.pory"

# 126 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaDefeat:
# 127 "data/maps/SSTidalRooms/scripts.pory"
	.string "LIZ: Oh, no…$"
# 128 "data/maps/SSTidalRooms/scripts.pory"

# 129 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaPostBattle:
# 130 "data/maps/SSTidalRooms/scripts.pory"
	.string "LIZ: ¡No me lo puedo creer!\n"
# 131 "data/maps/SSTidalRooms/scripts.pory"
	.string "Nuestro dúo de lucha derrotado…\l"
# 132 "data/maps/SSTidalRooms/scripts.pory"
	.string "¡Debes de ser excepcional!$"
# 133 "data/maps/SSTidalRooms/scripts.pory"

# 134 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaNotEnoughMons:
# 135 "data/maps/SSTidalRooms/scripts.pory"
	.string "LIZ: Me encanta luchar…,\n"
# 136 "data/maps/SSTidalRooms/scripts.pory"
	.string "pero ni siquiera tienes dos POKéMON…$"
# 137 "data/maps/SSTidalRooms/scripts.pory"

# 138 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretIntro:
# 139 "data/maps/SSTidalRooms/scripts.pory"
	.string "Llegas justo a tiempo, o sea.\p"
# 140 "data/maps/SSTidalRooms/scripts.pory"
	.string "Me estaba aburriendo como una ostra,\n"
# 141 "data/maps/SSTidalRooms/scripts.pory"
	.string "de verdad. ¡Haz algo para entretenerme!$"
# 142 "data/maps/SSTidalRooms/scripts.pory"

# 143 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretDefeat:
# 144 "data/maps/SSTidalRooms/scripts.pory"
	.string "Esto no mola para nada, o sea…$"
# 145 "data/maps/SSTidalRooms/scripts.pory"

# 146 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretPostBattle:
# 147 "data/maps/SSTidalRooms/scripts.pory"
	.string "Le voy a decir a papi que me compre\n"
# 148 "data/maps/SSTidalRooms/scripts.pory"
	.string "un yate que he visto, que es ideal.\l"
# 149 "data/maps/SSTidalRooms/scripts.pory"
	.string "¡Sólo para mí y mis POKéMON!$"
# 150 "data/maps/SSTidalRooms/scripts.pory"

# 151 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiIntro:
# 152 "data/maps/SSTidalRooms/scripts.pory"
	.string "Oh, qué cosita tan mona que eres…\n"
# 153 "data/maps/SSTidalRooms/scripts.pory"
	.string "¿Quieres tomar leche con galletas?\l"
# 154 "data/maps/SSTidalRooms/scripts.pory"
	.string "¿O prefieres luchar un ratito?$"
# 155 "data/maps/SSTidalRooms/scripts.pory"

# 156 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiDefeat:
# 157 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ya sabía yo que a ti te va la marcha…$"
# 158 "data/maps/SSTidalRooms/scripts.pory"

# 159 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiPostBattle:
# 160 "data/maps/SSTidalRooms/scripts.pory"
	.string "Relajarse en un crucero de lujo\n"
# 161 "data/maps/SSTidalRooms/scripts.pory"
	.string "no está nada mal…\p"
# 162 "data/maps/SSTidalRooms/scripts.pory"
	.string "Aunque dar vueltas a HOENN\n"
# 163 "data/maps/SSTidalRooms/scripts.pory"
	.string "en un ferry también tiene su encanto.$"
# 164 "data/maps/SSTidalRooms/scripts.pory"

# 165 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NotSuspiciousTakeThis:
# 166 "data/maps/SSTidalRooms/scripts.pory"
	.string "Oh… Hola… ¡Yo no estoy haciendo nada\n"
# 167 "data/maps/SSTidalRooms/scripts.pory"
	.string "raro! Esto… ¡Toma esto! ¡Gratis!\p"
# 168 "data/maps/SSTidalRooms/scripts.pory"
	.string "Eh… En serio… ¡Yo no se lo he birlado\n"
# 169 "data/maps/SSTidalRooms/scripts.pory"
	.string "a nadie! ¡Nunca jamás haría algo así!\l"
# 170 "data/maps/SSTidalRooms/scripts.pory"
	.string "¡Puedes usarlo sin problemas!$"
# 171 "data/maps/SSTidalRooms/scripts.pory"

# 172 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ExplainSnatch:
# 173 "data/maps/SSTidalRooms/scripts.pory"
	.string "ROBO se apodera del movimiento\n"
# 174 "data/maps/SSTidalRooms/scripts.pory"
	.string "del rival para poder usarlo en su lugar.$"
