# 1 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 2 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_MapScripts::
# 3 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 5 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wally::
# 6 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech
# 9 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
# 10 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	setflag FLAG_WALLY_SPEECH
# 11 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 12 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 13 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 14 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech::
# 15 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
# 16 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 17 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 18 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 19 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 20 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 21 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 22 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande
# 23 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff
# 24 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallysNextDoor, MSGBOX_DEFAULT
# 25 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 26 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 27 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 28 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff::
# 29 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
# 30 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 31 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 32 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 33 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande::
# 34 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
# 35 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 36 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 37 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 38 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
# 39 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
# 40 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 41 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 42 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wanda::
# 43 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 44 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 45 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WandaDontWorry
# 46 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_MeetWanda
# 47 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 48 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 49 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 50 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 51 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_MeetWanda::
# 52 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
# 53 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 54 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 55 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 56 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandaDontWorry::
# 57 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 58 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 59 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 60 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 61 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt::
# 62 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 63 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 64 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande
# 65 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened
# 66 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen
# 67 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
# 68 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 69 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 70 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 71 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen::
# 72 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
# 73 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 74 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 75 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 76 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened::
# 77 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
# 78 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 79 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 80 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 81 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande::
# 82 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
# 83 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 84 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 85 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 86 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeech:
# 87 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "BLASCO: Me has vencido, {PLAYER}, pero\n"
# 88 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "ahora eso me importa un comino…\p"
# 89 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Porque tengo un nuevo objetivo\n"
# 90 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "en la vida. Junto a mi RALTS,\l"
# 91 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "voy a desafiar a los GIMNASIOS POKéMON\l"
# 92 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "y convertirme en un gran ENTRENADOR.\p"
# 93 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "No me pierdas de vista, {PLAYER}.\n"
# 94 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Voy a ser más fuerte que tú.\p"
# 95 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Y, cuando lo sea, te voy a desafiar\n"
# 96 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "a otro combate…$"
# 97 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 98 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeechShort:
# 99 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "BLASCO: Obsérvame bien, {PLAYER}.\n"
# 100 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Voy a ser más fuerte que tú.\p"
# 101 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Y, cuando lo sea, te voy a desafiar\n"
# 102 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "a otro combate…$"
# 103 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 104 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallysNextDoor:
# 105 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "TÍO: ¡Ey, {PLAYER}{KUN}!\n"
# 106 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "BLASCO está al lado.\p"
# 107 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Pero primero quiero contarte\n"
# 108 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "una cosa…\p"
# 109 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Este entorno natural está sentando\n"
# 110 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "a BLASCO de maravilla.\p"
# 111 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Quizás no sea sólo el entorno.\n"
# 112 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Los POKéMON también tendrán que ver…$"
# 113 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 114 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallySlippedOff:
# 115 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "BLASCO se ha ido…\n"
# 116 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Se ha marchado sin decir ni mu…$"
# 117 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 118 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyGoneThatFar:
# 119 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "TÍO: ¿Es cierto que BLASCO\n"
# 120 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "se ha ido tan lejos él solito?\p"
# 121 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Bueno, no debería extrañarme:\n"
# 122 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¡es el hijo de mi hermano!$"
# 123 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 124 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_MeetWanda:
# 125 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "CLARA: ¿Tú eras…?\n"
# 126 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Ah, sí, ya sé.\p"
# 127 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Eres {PLAYER}. BLASCO siempre está\n"
# 128 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "hablando de ti.\p"
# 129 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Soy la prima de BLASCO.\n"
# 130 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¡Es un placer!\p"
# 131 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Creo que a BLASCO se le ve mucho\n"
# 132 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "más sano y animado desde que está aquí.$"
# 133 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 134 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DontWorryAboutWally:
# 135 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "CLARA: No te preocupes por BLASCO.\n"
# 136 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Sabe cuidarse él solo.\p"
# 137 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Conozco a mi primo y además\n"
# 138 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "no está solo: tiene a sus POKéMON.$"
# 139 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 140 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay:
# 141 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Gracias a ti, puedo ver a mi novia\n"
# 142 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "cada día. ¿Que si estoy contento?\l"
# 143 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¿Acaso no se ve? Je, je, je…$"
# 144 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 145 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven:
# 146 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "El novio de mi hija es de lo más\n"
# 147 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "lanzado y apasionado.\p"
# 148 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Ha estado cavando el túnel\n"
# 149 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "sin parar sólo para poder verla.\p"
# 150 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Mi hija está un poco preocupada,\n"
# 151 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "por eso va al túnel cada dos por tres.$"
# 152 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 153 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging:
# 154 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Es asombroso. ¡El novio de mi hija\n"
# 155 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "ha estado cavando el túnel a mano!\p"
# 156 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¡No me lo puedo creer!$"
# 157 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 158 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally:
# 159 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Si algo le pasara a BLASCO, nunca\n"
# 160 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "podría volver a mirar a sus padres\l"
# 161 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "a la cara, cuando volviera a PETALIA…$"
# 162 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 163 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande:
# 164 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¿BLASCO ha estado en COLOSALIA?\p"
# 165 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "¡Sus padres, que viven en PETALIA,\n"
# 166 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "estarían atónitos si lo supieran!$"
