# 1 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 2 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_MapScripts::
# 3 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 5 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother::
# 6 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetSeedotSizeRecordInfo
# 7 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 8 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 9 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot, MSGBOX_DEFAULT
# 10 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special ChoosePartyMon
# 11 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 12 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 13 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot
# 14 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special CompareSeedotSize
# 15 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	bufferunitsystemtext UNIT_TEXT_LENGTH_SMALL_PLURAL, 1
# 16 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot
# 17 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 2, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot
# 18 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 3, SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot
# 19 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 20 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 21 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 22 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot::
# 23 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot, MSGBOX_DEFAULT
# 24 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 25 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 26 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 27 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot::
# 28 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot, MSGBOX_DEFAULT
# 29 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 30 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 31 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 32 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot::
# 33 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot, MSGBOX_DEFAULT
# 34 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 35 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 36 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 37 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot::
# 38 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad, MSGBOX_DEFAULT
# 39 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_ELIXIR
# 40 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1
# 41 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	closemessage
# 42 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 43 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 44 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 45 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1::
# 46 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1, MSGBOX_DEFAULT
# 47 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 48 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 49 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 50 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother::
# 51 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 52 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 53 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 54 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad, MSGBOX_DEFAULT
# 55 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special ChoosePartyMon
# 56 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 57 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 58 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad
# 59 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special CompareLotadSize
# 60 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad
# 61 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 2, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad
# 62 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 3, SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad
# 63 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 64 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 65 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 66 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad::
# 67 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad, MSGBOX_DEFAULT
# 68 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 69 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 70 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 71 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad::
# 72 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad, MSGBOX_DEFAULT
# 73 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 74 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 75 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 76 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad::
# 77 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad, MSGBOX_DEFAULT
# 78 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 79 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 80 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 81 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad::
# 82 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot, MSGBOX_DEFAULT
# 83 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_ELIXIR
# 84 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2
# 85 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	closemessage
# 86 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 87 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 88 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 89 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2::
# 90 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2, MSGBOX_DEFAULT
# 91 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 92 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 93 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 94 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotSizeRecord::
# 95 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetSeedotSizeRecordInfo
# 96 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 97 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory, MSGBOX_DEFAULT
# 98 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
# 99 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 100 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 101 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadSizeRecord::
# 102 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 103 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 104 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory, MSGBOX_DEFAULT
# 105 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
# 106 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 107 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 108 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot:
# 109 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿Conoces el POKéMON SEEDOT?\n"
# 110 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Apenas se le ve en ARRECÍPOLIS.\p"
# 111 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Pero igualmente me encanta:\n"
# 112 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "cuanto más grande, mejor.\p"
# 113 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Mi hermano pequeño dice que\n"
# 114 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "LOTAD es más grande.\p"
# 115 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Qué chorrada! SEEDOT es gigantesco…\p"
# 116 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Eh… ¿Tienes un SEEDOT?\n"
# 117 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿Me lo puedes enseñar?$"
# 118 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 119 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad:
# 120 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡{STR_VAR_2} cm!\n"
# 121 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Pues sí que es enorme!\p"
# 122 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Puede que incluso sea más grandote\n"
# 123 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "que el LOTAD que vio mi hermano!\p"
# 124 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Gracias por dejarme verlo.\n"
# 125 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Toma esto como agradecimiento.$"
# 126 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 127 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
@ Unused
# 128 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion1:
# 129 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{PLAYER} received a POTION.$"
# 130 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 131 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1:
# 132 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿Eh? ¡Pero si la MOCHILA\n"
# 133 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "está que revienta!$"
# 134 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 135 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot:
# 136 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2} cm, ¿no?\p"
# 137 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Bah… He visto a un SEEDOT\n"
# 138 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "más grande que éste.$"
# 139 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 140 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot:
# 141 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Mmmm… No está nada mal,\n"
# 142 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "pero no es un SEEDOT.$"
# 143 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 144 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot:
# 145 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿No tienes un SEEDOT grande?\n"
# 146 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Qué mala suerte…\p"
# 147 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Si consigues uno, ven a verme.$"
# 148 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 149 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory:
# 150 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡El mayor SEEDOT jamás visto!\n"
# 151 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Un gigante de {STR_VAR_3} cm que\l"
# 152 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "pertenece a {STR_VAR_2}!\p"
# 153 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Siempre es mucho mejor tener\n"
# 154 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "un SEEDOT que sea más grande\l"
# 155 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "que un LOTAD!$"
# 156 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 157 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad:
# 158 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿Conoces el POKéMON LOTAD?\n"
# 159 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Apenas se le ve en ARRECÍPOLIS.\p"
# 160 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Pero igualmente me encanta:\n"
# 161 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "cuanto más grande, mejor.\p"
# 162 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Mi hermano mayor dice que\n"
# 163 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "SEEDOT es más grande.\p"
# 164 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Qué absurdo! Todo el mundo sabe\n"
# 165 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "que LOTAD es colosal…\p"
# 166 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Eh… ¿Tienes un LOTAD?\n"
# 167 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿Me lo puedes enseñar?$"
# 168 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 169 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot:
# 170 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡{STR_VAR_2} cm!\n"
# 171 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Pues sí que es enorme!\p"
# 172 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Puede que incluso sea más grandote\n"
# 173 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "que el SEEDOT que vio mi hermano!\p"
# 174 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Gracias por dejarme verlo.\n"
# 175 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Toma esto como agradecimiento.$"
# 176 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 177 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
@ Unused
# 178 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion2:
# 179 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{PLAYER} received a POTION.$"
# 180 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 181 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2:
# 182 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿Eh? ¡Pero si la MOCHILA\n"
# 183 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "está que revienta!$"
# 184 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 185 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad:
# 186 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿{STR_VAR_2} cm?\p"
# 187 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Bah… He visto a un LOTAD\n"
# 188 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "más grande que éste.$"
# 189 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 190 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad:
# 191 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Mmmm… No está nada mal,\n"
# 192 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "pero no es un LOTAD.$"
# 193 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 194 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad:
# 195 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿No tienes un LOTAD grande?\n"
# 196 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Qué decepción…\p"
# 197 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Si consigues uno, ven a verme.$"
# 198 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 199 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory:
# 200 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡El mayor LOTAD jamás visto!\n"
# 201 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Un coloso de {STR_VAR_3} cm que\l"
# 202 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "pertenece a {STR_VAR_2}!\p"
# 203 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Siempre es mucho mejor tener\n"
# 204 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "un LOTAD que sea más grande\l"
# 205 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "que un SEEDOT!$"
