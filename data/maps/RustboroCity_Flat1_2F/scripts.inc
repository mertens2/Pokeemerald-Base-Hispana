# 1 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
.set LOCALID_WALDAS_DAD, 6
# 3 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 4 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_MapScripts::
# 5 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.byte 0
# 6 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 7 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDad::
# 8 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	lock
# 9 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	faceplayer
# 10 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryBufferWaldaPhrase
# 11 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase
# 12 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase
# 13 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 14 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase::
# 15 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	special DoWaldaNamingScreen
# 16 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	waitstate
# 17 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 1, RustboroCity_Flat1_2F_EventScript_CancelGivePhrase
# 18 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase
# 19 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryGetWallpaperWithWaldaPhrase
# 20 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase
# 21 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase
# 22 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 23 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 24 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase::
# 25 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase, MSGBOX_YESNO
# 26 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
# 27 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
# 28 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase
# 29 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 30 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase::
# 31 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase, MSGBOX_YESNO
# 32 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
# 33 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase
# 35 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 36 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase::
# 37 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhIsThatRight, MSGBOX_DEFAULT
# 38 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 39 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 40 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 41 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_CancelGivePhrase::
# 42 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhYouDontKnowAny, MSGBOX_DEFAULT
# 43 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 44 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 45 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 46 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase::
# 47 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase, MSGBOX_DEFAULT
# 48 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 49 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2, MSGBOX_DEFAULT
# 50 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 51 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 52 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 53 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase::
# 54 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry2, MSGBOX_DEFAULT
# 55 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 56 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhShesLaughing, MSGBOX_DEFAULT
# 57 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	applymovement LOCALID_WALDAS_DAD, Common_Movement_FacePlayer
# 58 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper, MSGBOX_DEFAULT
# 60 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 61 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 62 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 63 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase::
# 64 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry, MSGBOX_DEFAULT
# 65 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 66 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll, MSGBOX_DEFAULT
# 67 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 68 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 69 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 70 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda::
# 71 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
# 72 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	return
# 73 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 74 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasMom::
# 75 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard, MSGBOX_NPC
# 76 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 77 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 78 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_PokeDoll::
# 79 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll, MSGBOX_SIGN
# 80 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 81 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 82 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard:
# 83 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, ¿Qué voy a hacer, qué voy\na hacer?$"
# 84 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 85 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase:
# 86 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¡Ah, hola!\n¡Bienvenid{OA} seas a la casa Pepper!\pActualmente, tengo problemas haciendo\nque mi hijita se ría...\p"
# 87 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Tiene un sentido del humor muy peculiar.\pSólo una frase o palabra lo suficientemente\nrara la hará reir...$"
# 88 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 89 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase:
# 90 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Intenté decirle “{STR_VAR_1}”\n"
# 91 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "pero no funciona.\p"
# 92 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¿Conoces algo mejor?$"
# 93 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 94 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion:
# 95 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah. Qué rar{OA} eres. ¡Perfecto!\n"
# 96 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Voy a intentar.$"
# 97 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 98 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhIsThatRight:
# 99 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Bueno, no es cosa fácil.\p"
# 100 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Intentamos con todo lo normal.$"
# 101 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 102 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_LetsGiveItATry2:
# 103 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, ya veo.\n"
# 104 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Bueno, ¿A ver?$"
# 105 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 106 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhShesLaughing:
# 107 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 108 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 109 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¡AH, SI SI! ¡FUNCIONA!\n"
# 110 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¡Mi hija se está riendo!$"
# 111 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 112 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_LetsGiveItATry:
# 113 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, ya veo.\n"
# 114 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Bueno, ¿A ver?$"
# 115 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 116 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll:
# 117 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 118 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 119 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Mmmm… Ahora está triste.\n"
# 120 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Creo que Walda nomás es seria…$"
# 121 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 122 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase:
# 123 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, bueno.\pPuedo intentar yo.$"
# 124 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 125 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2:
# 126 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 127 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 128 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Mmmm… Ahora está triste.\n"
# 129 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Creo que Walda nomás es seria…$"
# 130 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 131 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhYouDontKnowAny:
# 132 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Vuelve pronto, ¿Okay?$"
# 133 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 134 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper:
# 135 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Voy a darte algo muy, muy especial.\p¡Es un papel pintado\npara el PC!.$"
# 136 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 137 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll:
# 138 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "¡Un peluchito bonito!$"
