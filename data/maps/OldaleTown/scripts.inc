# 91 "data/maps/OldaleTown/scripts.pory"

# 92 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_MART_EMPLOYEE, 2
# 93 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_FOOTPRINTS_MAN, 3
# 94 "data/maps/OldaleTown/scripts.pory"

# 95 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 96 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 97 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 98 "data/maps/OldaleTown/scripts.pory"

# 99 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 100 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 101 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 102 "data/maps/OldaleTown/scripts.pory"
	end
# 103 "data/maps/OldaleTown/scripts.pory"

# 104 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 105 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 4, 13
# 106 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 107 "data/maps/OldaleTown/scripts.pory"
	return
# 108 "data/maps/OldaleTown/scripts.pory"

# 109 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 110 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 111 "data/maps/OldaleTown/scripts.pory"
	end
# 112 "data/maps/OldaleTown/scripts.pory"

# 113 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 114 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 115 "data/maps/OldaleTown/scripts.pory"
	end
# 116 "data/maps/OldaleTown/scripts.pory"

# 117 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 118 "data/maps/OldaleTown/scripts.pory"
	lock
# 119 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 120 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 121 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 122 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 123 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 124 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 125 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_GoToMartSouth
# 126 "data/maps/OldaleTown/scripts.pory"
	end
# 127 "data/maps/OldaleTown/scripts.pory"

# 128 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 129 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 130 "data/maps/OldaleTown/scripts.pory"
	end
# 131 "data/maps/OldaleTown/scripts.pory"

# 132 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 133 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 134 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 135 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 136 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 137 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 138 "data/maps/OldaleTown/scripts.pory"
	release
# 139 "data/maps/OldaleTown/scripts.pory"
	end
# 140 "data/maps/OldaleTown/scripts.pory"

# 141 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 142 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 143 "data/maps/OldaleTown/scripts.pory"
	release
# 144 "data/maps/OldaleTown/scripts.pory"
	end
# 145 "data/maps/OldaleTown/scripts.pory"

# 146 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 147 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 148 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 149 "data/maps/OldaleTown/scripts.pory"
	release
# 150 "data/maps/OldaleTown/scripts.pory"
	end
# 151 "data/maps/OldaleTown/scripts.pory"

# 152 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 153 "data/maps/OldaleTown/scripts.pory"
	lock
# 154 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 155 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 156 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 157 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 158 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 159 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/OldaleTown/scripts.pory"
	release
# 161 "data/maps/OldaleTown/scripts.pory"
	end
# 162 "data/maps/OldaleTown/scripts.pory"

# 163 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 164 "data/maps/OldaleTown/scripts.pory"
	lockall
# 165 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FacePlayer
# 166 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 168 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 169 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceLeft
# 170 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 171 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 172 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 173 "data/maps/OldaleTown/scripts.pory"
	end
# 174 "data/maps/OldaleTown/scripts.pory"

# 175 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 176 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 177 "data/maps/OldaleTown/scripts.pory"
	release
# 178 "data/maps/OldaleTown/scripts.pory"
	end
# 179 "data/maps/OldaleTown/scripts.pory"

# 180 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 181 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 183 "data/maps/OldaleTown/scripts.pory"
	step_end
# 184 "data/maps/OldaleTown/scripts.pory"

# 185 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 188 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 189 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 190 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 191 "data/maps/OldaleTown/scripts.pory"
	step_end
# 192 "data/maps/OldaleTown/scripts.pory"

# 193 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 194 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 195 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 196 "data/maps/OldaleTown/scripts.pory"
	step_end

OldaleTown_Text_SavingMyProgress::
# 2 "data/maps/OldaleTown/scripts.pory"
	.string "Quiero entrenar a mis Pokémon\n"
	.string "un poquito más rápido…\p"
	.string "Estoy cambiando las opciones a\n"
	.string "“Modo Entrenamiento”.$"

OldaleTown_Text_IWorkAtPokemonMart::
# 19 "data/maps/OldaleTown/scripts.pory"
	.string "¡Hola! ¡Trabajo en la última Tienda\n"
	.string "Pokémon, y me gustaría darte esto!$"

OldaleTown_Text_PotionExplanation::
# 29 "data/maps/OldaleTown/scripts.pory"
	.string "¡Es una Poción de cortesía!\p"
	.string "Espero que eso haga que quieras\n"
	.string "comprar en nuestra tienda.$"

OldaleTown_Text_WaitDontComeInHere::
# 42 "data/maps/OldaleTown/scripts.pory"
	.string "¡NOOOOOO! ¡BASTA!\p"
	.string "¡¡Vas a arruinar todo si pasas!$"

OldaleTown_Text_DiscoveredFootprints::
# 54 "data/maps/OldaleTown/scripts.pory"
	.string "¡Vas a arruinar\n"
	.string "todo si pasas!$"

OldaleTown_Text_FinishedSketchingFootprints::
# 66 "data/maps/OldaleTown/scripts.pory"
	.string "Pues… Sólo era un Ralts…$"

OldaleTown_Text_TownSign::
# 78 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR LIGHT_GREEN SHADOW GREEN} PUEBLO OLDALE\n"
	.string "{COLOR DARK_GRAY SHADOW LIGHT_GRAY} “En contacto con nuestras\l"
	.string "tradiciones.”$"
