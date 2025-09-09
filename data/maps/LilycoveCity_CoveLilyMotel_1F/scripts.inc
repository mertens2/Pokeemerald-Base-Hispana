# 1 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_MapScripts::
# 3 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 5 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner::
# 6 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 7 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear
# 8 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted
# 9 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot, MSGBOX_DEFAULT
# 10 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 11 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 12 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua, MSGBOX_DEFAULT
# 13 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 14 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
# 15 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 17 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 18 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 19 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted::
# 20 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem, MSGBOX_DEFAULT
# 21 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 22 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 25 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
# 26 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 28 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 29 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 30 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear::
# 31 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar, MSGBOX_DEFAULT
# 32 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 33 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner, MSGBOX_DEFAULT
# 35 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 36 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
# 37 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 39 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 40 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV::
# 42 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 43 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	playse SE_PIN
# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_ExclamationMark
# 45 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_Delay48
# 47 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 48 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 49 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV, MSGBOX_DEFAULT
# 51 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 52 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV
# 53 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer
# 54 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 55 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn
# 56 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 57 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	release
# 58 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 59 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 60 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV:
# 61 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_right
# 62 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lock_facing_direction
# 63 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_left
# 64 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	unlock_facing_direction
# 65 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 66 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 67 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer:
# 68 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_up
# 69 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 70 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 71 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn:
# 72 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_down
# 73 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_down
# 74 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_up
# 75 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 76 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 77 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot:
# 78 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Qué interesante: han duplicado\n"
# 79 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "el número de clientes usando\l"
# 80 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "POKéMON como reclamo.\p"
# 81 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Mmmm… Quizás debería escoger\n"
# 82 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "un POKéMON como mascota del hostal.\p"
# 83 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Puede que así consiga que vengan\n"
# 84 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "más huéspedes…$"
# 85 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 86 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua:
# 87 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, disculpa. Estaba viendo la tele\n"
# 88 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "y no te he visto llegar.\p"
# 89 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Es que desde que llegó el EQUIPO\n"
# 90 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "AQUA, no vienen turistas, así que\l"
# 91 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "no esperaba a nadie…$"
# 92 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 93 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV:
# 94 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "¡Oye, quita de ahí, que no\n"
# 95 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "eres transparente!$"
# 96 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 97 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem:
# 98 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "¡Increíble! ¿Me estás diciendo que un\n"
# 99 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "POKéMON encontró un objeto perdido?\p"
# 100 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Qué interesante: si tuviéramos un\n"
# 101 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "POKéMON tan listo como ése…,\p"
# 102 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "¡recuperaríamos todo lo que perdieran\n"
# 103 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "nuestros huéspedes!$"
# 104 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 105 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted:
# 106 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, disculpa. Estaba viendo la tele\n"
# 107 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "y no te he visto llegar.\p"
# 108 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Me han dicho que alguien ha destrozado\n"
# 109 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "la GUARIDA del EQUIPO AQUA.\p"
# 110 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Gracias a eso, la gente ha perdido el\n"
# 111 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "miedo y acabo de recibir a un grupo.\p"
# 112 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Son todos de la misma empresa…\n"
# 113 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "¿Cómo era? Ah, sí, GAME algo…$"
# 114 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 115 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar:
# 116 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "¡Increíble! ¿Me estás diciendo que un\n"
# 117 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "POKéMON guardián pilló a un ladrón?\p"
# 118 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Qué interesante: si tuviéramos\n"
# 119 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "un POKéMON tan fuerte como ése…,\p"
# 120 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "¡podríamos ofrecer el mejor servicio\n"
# 121 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "de seguridad a nuestros huéspedes!$"
# 122 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 123 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner:
# 124 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, disculpa. Estaba viendo la tele\n"
# 125 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "y no te he visto llegar.\p"
# 126 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Ah, sí. Acaba de llegar un gran\n"
# 127 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "grupo de huéspedes.\p"
# 128 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Pertenecen a la empresa GAME FREAK,\n"
# 129 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "así que deben de crear videojuegos.\p"
# 130 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "¡Huy, huy, creo que tengo que irme\n"
# 131 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "a prepararles la cena!$"
