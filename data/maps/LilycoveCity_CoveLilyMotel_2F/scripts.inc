# 1 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_MapScripts::
# 3 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 5 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner::
# 6 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex
# 9 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call_if_set FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
# 10 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 11 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare
# 12 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 13 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 14 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 15 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex::
# 16 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex, MSGBOX_DEFAULT
# 17 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	return
# 18 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 19 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare::
# 20 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 21 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitfanfare
# 23 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
# 24 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 25 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 26 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma::
# 27 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	message LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis
# 28 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitmessage
# 29 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 30 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	special Special_ShowDiploma
# 31 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitstate
# 32 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 33 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 34 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 35 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Programmer::
# 36 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer, MSGBOX_NPC
# 37 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 38 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 39 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GraphicArtist::
# 40 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist, MSGBOX_NPC
# 41 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 42 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 43 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_FatMan::
# 44 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute, MSGBOX_NPC
# 45 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 46 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 47 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Woman::
# 48 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart, MSGBOX_NPC
# 49 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 50 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 51 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameBoyKid::
# 52 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy, MSGBOX_NPC
# 53 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 54 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 55 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Scott::
# 56 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 57 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 58 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_LILYCOVE, LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott
# 59 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles, MSGBOX_DEFAULT
# 60 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 61 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_LILYCOVE
# 62 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 63 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 65 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott::
# 66 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy, MSGBOX_DEFAULT
# 67 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 68 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 69 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 70 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex:
# 71 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Yo soy el DISEÑADOR del JUEGO.\p"
# 72 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "¿Ah, sí? ¿Estás trabajando\n"
# 73 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "en una POKéDEX?\p"
# 74 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Cuesta trabajo completarla,\n"
# 75 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "pero tú no desistas.\p"
# 76 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Y, cuando esté completa,\n"
# 77 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "ven a verme.$"
# 78 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 79 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis:
# 80 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "¡Guau! ¡Impresionante!\n"
# 81 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "¡Impresionantemente impresionante!\p"
# 82 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "¡Tu POKéDEX está llena del todo!\n"
# 83 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "¡Deben de encantarte los POKéMON!\p"
# 84 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Estoy impresionado.\p"
# 85 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Semejante proeza se merece\n"
# 86 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "un reconocimiento en condiciones.$"
# 87 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 88 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer:
# 89 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "¿Eh? ¿Me hablas a mí?\n"
# 90 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Soy el PROGRAMADOR.\p"
# 91 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Me pregunto cómo serán las\n"
# 92 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "TRAGAPERRAS por aquí…$"
# 93 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 94 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist:
# 95 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Soy el DISEÑADOR GRÁFICO.\n"
# 96 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "¿A que los POKéMON de HOENN\l"
# 97 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "son particularmente interesantes?$"
# 98 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 99 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute:
# 100 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Las PLAYERAS son monas, ¿verdad?\n"
# 101 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Combatir contra ellas es de lo\l"
# 102 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "más motivador…\p"
# 103 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Pero que muy motivador…\p"
# 104 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "¡Y las GEMELAS! ¿No son preciosas?\n"
# 105 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Los combates dobles me encantan.\p"
# 106 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "¡Es que me lo paso de miedo!$"
# 107 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 108 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart:
# 109 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "No hay nada que me guste más que\n"
# 110 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "la brisa marina. ¡Qué bien se está!$"
# 111 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 112 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy:
# 113 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Nunca puedes saber quién\n"
# 114 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "ni cuándo te va a desafiar.\p"
# 115 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Por eso nunca me voy de casa sin\n"
# 116 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "mi consola GAME BOY ADVANCE.$"
# 117 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 118 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles:
# 119 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "TRETO: Zzz…\p"
# 120 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Zzz… ¿Eh? ¡Huy, perdón!\n"
# 121 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "¡Estaba echando una cabezadita!\p"
# 122 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "He venido a echar un vistazo a esto\n"
# 123 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "de los CONCURSOS POKéMON.\p"
# 124 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Debo reconocer que parecen la\n"
# 125 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "mar de entretenidos, pero…\p"
# 126 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Dirás que soy un purista, pero\n"
# 127 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "prefiero un buen combate contra\l"
# 128 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "un ENTRENADOR duro de pelar.\p"
# 129 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Claro que para gustos, los colores.\p"
# 130 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "{PLAYER}{KUN}, espero que a ti te gusten\n"
# 131 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "los GIMNASIOS, los CONCURSOS, las\l"
# 132 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "TIENDAS de BATALLA, ¡vamos, todo!$"
# 133 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 134 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy:
# 135 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "TRETO: Creo que no se puede ganar\n"
# 136 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "un CONCURSO sin una buena estrategia.\p"
# 137 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Yo diría que diseñar estrategias para\n"
# 138 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "ganar CONCURSOS también te ayuda\l"
# 139 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "a mejorar como ENTRENADOR.$"
