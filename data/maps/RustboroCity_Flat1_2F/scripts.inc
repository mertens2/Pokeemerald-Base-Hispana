# 1 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_MapScripts::
# 3 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 5 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDad::
# 6 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryBufferWaldaPhrase
# 9 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase
# 10 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase
# 11 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 12 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase::
# 13 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	special DoWaldaNamingScreen
# 14 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	waitstate
# 15 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 1, RustboroCity_Flat1_2F_EventScript_CancelGivePhrase
# 16 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase
# 17 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryGetWallpaperWithWaldaPhrase
# 18 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase
# 19 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase
# 20 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 21 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 22 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase::
# 23 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase, MSGBOX_YESNO
# 24 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
# 25 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
# 26 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase
# 27 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 28 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase::
# 29 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase, MSGBOX_YESNO
# 30 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
# 31 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
# 32 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase
# 33 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 34 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase::
# 35 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhIsThatRight, MSGBOX_DEFAULT
# 36 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 37 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 38 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 39 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_CancelGivePhrase::
# 40 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhYouDontKnowAny, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 42 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 43 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 44 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase::
# 45 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase, MSGBOX_DEFAULT
# 46 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 47 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2, MSGBOX_DEFAULT
# 48 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 49 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 50 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 51 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase::
# 52 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry2, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 54 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhShesLaughing, MSGBOX_DEFAULT
# 55 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	applymovement LOCALID_WALDAS_DAD, Common_Movement_FacePlayer
# 56 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	waitmovement 0
# 57 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper, MSGBOX_DEFAULT
# 58 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 59 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 60 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 61 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase::
# 62 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 64 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll, MSGBOX_DEFAULT
# 65 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 66 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 67 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 68 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda::
# 69 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
# 70 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	return
# 71 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 72 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasMom::
# 73 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard, MSGBOX_NPC
# 74 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 75 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 76 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_PokeDoll::
# 77 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll, MSGBOX_SIGN
# 78 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 79 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 80 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard:
# 81 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Cada día es tan duro…\p"
# 82 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¿Que qué es duro?\n"
# 83 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¿Hace falta preguntar?\p"
# 84 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Pues levantarse para ir\n"
# 85 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "a trabajar, claro.\p"
# 86 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Llevo fatal lo de madrugar…$"
# 87 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 88 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase:
# 89 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¡Anda, hola!\n"
# 90 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¡Te doy la bienvenida a mi casa!\p"
# 91 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Una preguntilla… ¿Has\n"
# 92 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "hecho de canguro alguna vez?\p"
# 93 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Verás, acabo de ser padre y lo\n"
# 94 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "cierto es que estoy algo perdido.\p"
# 95 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ahora tengo un problemilla…\n"
# 96 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Mi hija ANAPEL se ríe muy poco.\p"
# 97 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Creo que se reiría más\n"
# 98 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "si le dijera algo divertido.\p"
# 99 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¿No sabrás alguna expresión\n"
# 100 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "graciosa, por casualidad?$"
# 101 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 102 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase:
# 103 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "He estado diciendo “{STR_VAR_1}”\n"
# 104 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "a ANAPEL para divertirla.\p"
# 105 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¿No sabrás de alguna otra expresión\n"
# 106 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "que tenga más gracia?$"
# 107 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 108 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion:
# 109 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¡Vaya, qué bien!\n"
# 110 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¿Y cuál es?$"
# 111 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 112 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhIsThatRight:
# 113 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, ¿en serio?\p"
# 114 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Bueno, pues, si se te ocurre\n"
# 115 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "algo, soy todo oídos.$"
# 116 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 117 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_LetsGiveItATry2:
# 118 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, ya veo.\n"
# 119 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Pues vamos a oírla, ¿vale?$"
# 120 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 121 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhShesLaughing:
# 122 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 123 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 124 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¡Genial! ¡¡¡Se ríe!!!\n"
# 125 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¡Qué contento que estoy!$"
# 126 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 127 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_LetsGiveItATry:
# 128 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, ya veo.\n"
# 129 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Pues vamos a oírla, ¿vale?$"
# 130 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 131 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll:
# 132 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 133 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 134 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Mmmm… No le hace ni pizca de gracia.\n"
# 135 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Puede que ANAPEL sea una niña seria…$"
# 136 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 137 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase:
# 138 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Así que no se te ocurre nada.\n"
# 139 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Pues a ver si yo pienso algo…\p"
# 140 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Mmm…\n"
# 141 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¿Qué tal “{STR_VAR_1}”?\l"
# 142 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "A ver si funciona.$"
# 143 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 144 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2:
# 145 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 146 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 147 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Mmmm… No le hace ni pizca de gracia.\n"
# 148 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Puede que ANAPEL sea una niña seria…$"
# 149 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 150 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhYouDontKnowAny:
# 151 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Así que no se te ocurre nada.\n"
# 152 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Pues entonces voy a intentar\l"
# 153 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "hacerle reír con lo que dije antes.\p"
# 154 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Pero, si tuvieras alguna sugerencia,\n"
# 155 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "no dudes en decírmelo, ¿vale?$"
# 156 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 157 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper:
# 158 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¡Gracias!\p"
# 159 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Muchísimas gracias. ¡Mi querida\n"
# 160 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "ANAPEL se está riendo!\p"
# 161 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¿Y sabes qué? No lo parecerá,\n"
# 162 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "pero soy uno de los principales\l"
# 163 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "investigadores de DEVON S.A.\p"
# 164 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Y me gustaría hacer algo\n"
# 165 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "por ti, pero no sé qué…\p"
# 166 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ya sé, te daré más diseños de papel\n"
# 167 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "pintado para las CAJAS del Sistema de\l"
# 168 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Almacenamiento de POKéMON del PC.\p"
# 169 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Sólo tendrás que elegir “AMIGOS”\n"
# 170 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "en el menú correspondiente. \p"
# 171 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "De esa manera podrás acceder\n"
# 172 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "a los nuevos diseños de papel pintado.$"
# 173 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 174 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll:
# 175 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¡Es un MUÑECO de peluche\n"
# 176 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "con forma de POKéMON!$"
