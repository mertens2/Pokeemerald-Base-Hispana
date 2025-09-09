# 1 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 2 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_MapScripts::
# 3 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 5 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock::
# 6 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	lockall
# 7 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_SternsShipyard_1F_EventScript_FerryReady
# 8 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined
# 9 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran
# 10 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_GoFindStern
# 11 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails, MSGBOX_DEFAULT
# 12 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 13 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 14 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern, MSGBOX_DEFAULT
# 15 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 16 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 17 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
# 19 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
# 20 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 21 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 22 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 23 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_FerryReady::
# 24 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 25 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_FerryIsReady, MSGBOX_DEFAULT
# 27 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 28 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 29 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 30 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined::
# 31 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 32 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs, MSGBOX_DEFAULT
# 34 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 35 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 36 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 37 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_GoFindStern::
# 38 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 39 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern, MSGBOX_DEFAULT
# 41 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 42 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 43 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 45 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 46 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 47 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran::
# 48 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 49 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran, MSGBOX_DEFAULT
# 51 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 52 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 53 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 54 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist1::
# 55 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing, MSGBOX_NPC
# 56 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 57 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 58 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist2::
# 59 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily, MSGBOX_NPC
# 60 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 61 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 62 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Briney::
# 63 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock, MSGBOX_NPC
# 64 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 65 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 66 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails:
# 67 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "A ver… Si esto va aquí\n"
# 68 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "y aquello va allá…\p"
# 69 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¿Dónde va esto entonces?\n"
# 70 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¿Y qué es esta cosa?\p"
# 71 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¡Aaaaah!\n"
# 72 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¡No entiendo nada de nada!$"
# 73 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 74 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern:
# 75 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¿Eh?\n"
# 76 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Ah, hola, soy MUÉLLEZ.\p"
# 77 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "El CAP. BABOR me ha encargado\n"
# 78 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "que diseñe un ferry.\p"
# 79 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Oh, eso de ahí…\n"
# 80 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¿Son las PIEZAS DEVON?\p"
# 81 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Pero… No puede ser…\p"
# 82 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "El CAP. BABOR se fue a no sé\n"
# 83 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "dónde. Tenía algo que hacer.\p"
# 84 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¿Podrías ir a buscarlo\n"
# 85 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "y entregárselas?$"
# 86 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 87 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern:
# 88 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "MUÉLLEZ: ¿Adónde puede haber\n"
# 89 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "ido el CAP. BABOR?\p"
# 90 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¿Podrías ir a buscarlo\n"
# 91 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "y entregarle ese paquete?$"
# 92 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 93 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran:
# 94 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "MUÉLLEZ: Construir barcos es todo\n"
# 95 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "un arte.\p"
# 96 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Hay muchas cosas que no\n"
# 97 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "se pueden calcular sin más.\p"
# 98 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Cómo me gustaría que algún\n"
# 99 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "lobo de mar me aconsejase…$"
# 100 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 101 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs:
# 102 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "MUÉLLEZ: ¡Hola! El SR. ARENQUE\n"
# 103 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "se ha unido a nosotros.\p"
# 104 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Gracias a su valiosísima ayuda,\n"
# 105 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "nuestro proyecto de ferry\l"
# 106 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "empieza a tomar forma.$"
# 107 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 108 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_FerryIsReady:
# 109 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "MUÉLLEZ: ¡El ferry está listo!\p"
# 110 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¡El nuevo S.S. MAREA es toda\n"
# 111 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "una maravilla tecnológica!\p"
# 112 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Sin embargo, creo que aún\n"
# 113 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "podemos mejorar el diseño.\p"
# 114 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¡Ya sabes que el avance\n"
# 115 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "de la ciencia es imparable!$"
# 116 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 117 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock:
# 118 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "SR. ARENQUE: ¡Anda, {PLAYER}{KUN}!\n"
# 119 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¡Cuánto tiempo!\p"
# 120 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Desde que te conocí, me he\n"
# 121 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "sentido la mar de inquieto.\p"
# 122 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Así que he decidido ayudar a\n"
# 123 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "MUÉLLEZ a construir el ferry.\p"
# 124 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¡Imagina cuánta gente podría\n"
# 125 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "transportar en cada viaje!\p"
# 126 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¿Sabes? Este MUÉLLEZ es\n"
# 127 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "un tipo especial de verdad.\p"
# 128 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Uniendo sus conocimientos\n"
# 129 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "y mi experiencia, haremos\l"
# 130 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "un gran barco, ¡ya lo creo!$"
# 131 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 132 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing:
# 133 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Las estaciones, el tiempo,\n"
# 134 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "la posición de la Luna…\p"
# 135 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "El estado del mar se ve afectado\n"
# 136 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "por todo esto y mucho más.\p"
# 137 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¡Exactamente!\n"
# 138 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "¡El mar tiene vida!$"
# 139 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 140 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily:
# 141 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Me entra mareo con nada…, así que\n"
# 142 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "me han destinado a este puesto.$"
