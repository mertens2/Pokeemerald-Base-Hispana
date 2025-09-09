# 1 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 2 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MapScripts::
# 3 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 5 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_ProfCozmo::
# 6 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_GaveMeteorite
# 9 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkitem ITEM_METEORITE
# 10 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite
# 11 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 12 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 13 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 14 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 15 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite::
# 16 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
# 17 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_AskForMeteorite
# 18 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite
# 19 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
# 20 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	giveitem ITEM_TM_RETURN
# 21 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 22 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_0x8004, ITEM_METEORITE
# 23 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 24 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_RECEIVED_TM_RETURN
# 25 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
# 26 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 27 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 28 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 29 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_NoticeMeteorite::
# 30 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 31 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
# 32 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	return
# 33 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 34 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_AskForMeteorite::
# 35 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
# 36 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	return
# 37 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 38 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite::
# 39 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 40 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
# 41 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 42 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 43 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 44 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_GaveMeteorite::
# 45 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
# 46 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 47 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 48 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 49 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife::
# 50 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 51 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 52 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
# 53 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
# 54 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
# 55 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 56 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 57 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 58 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
# 59 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
# 60 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 61 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 62 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 63 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
# 64 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
# 65 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 66 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 67 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 68 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow:
# 69 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Oh…\n"
# 70 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "No debería haberme dejado\l"
# 71 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "amedrentar por el EQUIPO MAGMA y\l"
# 72 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "revelar dónde hay METEORITOS…\p"
# 73 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Ese METEORITO de la CASCADA METEORO…\n"
# 74 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Ya nunca lo recuperaré…$"
# 75 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 76 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt:
# 77 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "¡Eh!\n"
# 78 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "¿Cómo?\p"
# 79 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Ese objeto…\p"
# 80 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "¿Es posible…?\p"
# 81 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "¿Es el METEORITO que el EQUIPO MAGMA\n"
# 82 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "robó en la CASCADA METEORO?\p"
# 83 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Por favor, ¿puedo…?\p"
# 84 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "No quiero quitártelo por la cara…\n"
# 85 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "¿Qué te parece cambiarlo por esta MT?$"
# 86 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 87 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_PleaseUseThisTM:
# 88 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Esta MT es un símbolo\n"
# 89 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "de la enorme gratitud que siento.\l"
# 90 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "¡No dejes de usarla!$"
# 91 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 92 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch:
# 93 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: ¡No puedo creerlo!\n"
# 94 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "¡Es genial, maravilloso y estupendo!\p"
# 95 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "¡Será de una enorme ayuda\n"
# 96 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "en mi investigación!$"
# 97 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 98 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CrushedWithDisappointment:
# 99 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Anda ya… ¿No?…\n"
# 100 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Me siento profundamente abatido…$"
# 101 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 102 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MayIHaveMeteorite:
# 103 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Por favor, ¿me darías\n"
# 104 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "ese METEORITO?\p"
# 105 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "No quiero quitártelo por la cara…\n"
# 106 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "¿Qué te parece cambiarlo por esta MT?$"
# 107 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 108 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls:
# 109 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "El PROF. COZMO fue a la CASCADA\n"
# 110 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "METEORO, en la RUTA 114, con algunos\l"
# 111 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "miembros del EQUIPO MAGMA.$"
# 112 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 113 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
# 114 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Pobre PROF. COZMO…\n"
# 115 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Está tan depre… Me da una pena…$"
# 116 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 117 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
# 118 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Mira al PROF. COZMO…\n"
# 119 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "¡Está tan feliz! ¡Da gusto verle!$"
