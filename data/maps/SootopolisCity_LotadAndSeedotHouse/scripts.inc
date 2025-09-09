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
	goto_if_eq VAR_RESULT, 1, SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot
# 16 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 2, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot
# 17 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 3, SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot
# 18 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 19 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 20 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 21 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot::
# 22 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot, MSGBOX_DEFAULT
# 23 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 24 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 25 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 26 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot::
# 27 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot, MSGBOX_DEFAULT
# 28 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 29 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 30 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 31 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot::
# 32 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot, MSGBOX_DEFAULT
# 33 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 34 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 35 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 36 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot::
# 37 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad, MSGBOX_DEFAULT
# 38 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_ELIXIR
# 39 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1
# 40 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	closemessage
# 41 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 42 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 43 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 44 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1::
# 45 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1, MSGBOX_DEFAULT
# 46 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 47 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 48 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 49 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother::
# 50 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 51 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 52 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 53 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad, MSGBOX_DEFAULT
# 54 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special ChoosePartyMon
# 55 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 56 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 57 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad
# 58 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special CompareLotadSize
# 59 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad
# 60 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 2, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad
# 61 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 3, SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad
# 62 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 63 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 64 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 65 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad::
# 66 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad, MSGBOX_DEFAULT
# 67 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 68 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 69 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 70 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad::
# 71 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad, MSGBOX_DEFAULT
# 72 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 73 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 74 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 75 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad::
# 76 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad, MSGBOX_DEFAULT
# 77 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 78 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 79 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 80 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad::
# 81 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot, MSGBOX_DEFAULT
# 82 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_ELIXIR
# 83 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2
# 84 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	closemessage
# 85 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 86 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 87 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 88 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2::
# 89 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2, MSGBOX_DEFAULT
# 90 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 91 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 92 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 93 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotSizeRecord::
# 94 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetSeedotSizeRecordInfo
# 95 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 96 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory, MSGBOX_DEFAULT
# 97 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
# 98 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 99 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 100 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadSizeRecord::
# 101 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 102 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 103 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory, MSGBOX_DEFAULT
# 104 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
# 105 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 106 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 107 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot:
# 108 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿Conoces el POKéMON SEEDOT?\n"
# 109 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Apenas se le ve en ARRECÍPOLIS.\p"
# 110 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Pero igualmente me encanta:\n"
# 111 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "cuanto más grande, mejor.\p"
# 112 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Mi hermano pequeño dice que\n"
# 113 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "LOTAD es más grande.\p"
# 114 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Qué chorrada! SEEDOT es gigantesco…\p"
# 115 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Eh… ¿Tienes un SEEDOT?\n"
# 116 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿Me lo puedes enseñar?$"
# 117 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 118 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad:
# 119 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡{STR_VAR_2} cm!\n"
# 120 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Pues sí que es enorme!\p"
# 121 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Puede que incluso sea más grandote\n"
# 122 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "que el LOTAD que vio mi hermano!\p"
# 123 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Gracias por dejarme verlo.\n"
# 124 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Toma esto como agradecimiento.$"
# 125 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 126 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
@ Unused
# 127 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion1:
# 128 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{PLAYER} received a POTION.$"
# 129 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 130 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1:
# 131 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿Eh? ¡Pero si la MOCHILA\n"
# 132 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "está que revienta!$"
# 133 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 134 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot:
# 135 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2} cm, ¿no?\p"
# 136 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Bah… He visto a un SEEDOT\n"
# 137 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "más grande que éste.$"
# 138 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 139 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot:
# 140 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Mmmm… No está nada mal,\n"
# 141 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "pero no es un SEEDOT.$"
# 142 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 143 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot:
# 144 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿No tienes un SEEDOT grande?\n"
# 145 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Qué mala suerte…\p"
# 146 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Si consigues uno, ven a verme.$"
# 147 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 148 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory:
# 149 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡El mayor SEEDOT jamás visto!\n"
# 150 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Un gigante de {STR_VAR_3} cm que\l"
# 151 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "pertenece a {STR_VAR_2}!\p"
# 152 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Siempre es mucho mejor tener\n"
# 153 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "un SEEDOT que sea más grande\l"
# 154 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "que un LOTAD!$"
# 155 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 156 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad:
# 157 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿Conoces el POKéMON LOTAD?\n"
# 158 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Apenas se le ve en ARRECÍPOLIS.\p"
# 159 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Pero igualmente me encanta:\n"
# 160 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "cuanto más grande, mejor.\p"
# 161 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Mi hermano mayor dice que\n"
# 162 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "SEEDOT es más grande.\p"
# 163 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Qué absurdo! Todo el mundo sabe\n"
# 164 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "que LOTAD es colosal…\p"
# 165 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Eh… ¿Tienes un LOTAD?\n"
# 166 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿Me lo puedes enseñar?$"
# 167 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 168 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot:
# 169 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡{STR_VAR_2} cm!\n"
# 170 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Pues sí que es enorme!\p"
# 171 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Puede que incluso sea más grandote\n"
# 172 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "que el SEEDOT que vio mi hermano!\p"
# 173 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Gracias por dejarme verlo.\n"
# 174 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Toma esto como agradecimiento.$"
# 175 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 176 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
@ Unused
# 177 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion2:
# 178 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{PLAYER} received a POTION.$"
# 179 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 180 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2:
# 181 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿Eh? ¡Pero si la MOCHILA\n"
# 182 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "está que revienta!$"
# 183 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 184 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad:
# 185 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿{STR_VAR_2} cm?\p"
# 186 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Bah… He visto a un LOTAD\n"
# 187 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "más grande que éste.$"
# 188 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 189 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad:
# 190 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Mmmm… No está nada mal,\n"
# 191 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "pero no es un LOTAD.$"
# 192 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 193 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad:
# 194 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¿No tienes un LOTAD grande?\n"
# 195 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Qué decepción…\p"
# 196 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Si consigues uno, ven a verme.$"
# 197 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 198 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory:
# 199 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡El mayor LOTAD jamás visto!\n"
# 200 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Un coloso de {STR_VAR_3} cm que\l"
# 201 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "pertenece a {STR_VAR_2}!\p"
# 202 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "¡Siempre es mucho mejor tener\n"
# 203 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "un LOTAD que sea más grande\l"
# 204 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "que un SEEDOT!$"
