# 1 "data/scripts/field_move_scripts.pory"

# 2 "data/scripts/field_move_scripts.pory"
@ Interact with cuttable tree
# 3 "data/scripts/field_move_scripts.pory"
EventScript_CutTree::
# 4 "data/scripts/field_move_scripts.pory"
	lockall
# 5 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_CUT, TRUE
# 6 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CheckTreeCantCut
# 7 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 8 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 9 "data/scripts/field_move_scripts.pory"
	buffermovename STR_VAR_2, MOVE_CUT
# 10 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToCut, MSGBOX_YESNO
# 11 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelCut
# 12 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 13 "data/scripts/field_move_scripts.pory"
	closemessage
# 14 "data/scripts/field_move_scripts.pory"
EventScript_CutTreeCommon:
# 15 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 16 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 3, VAR_0x8004 @ skip pose if so
# 17 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
# 18 "data/scripts/field_move_scripts.pory"
	waitstate
# 19 "data/scripts/field_move_scripts.pory"
EventScript_CutTreeDown:: @ fallthrough
# 20 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 21 "data/scripts/field_move_scripts.pory"
	call_if_eq VAR_0x8004, TRUE, EventScript_FollowerFieldMove
# 22 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
# 23 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 24 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 25 "data/scripts/field_move_scripts.pory"
	releaseall
# 26 "data/scripts/field_move_scripts.pory"
	end
# 27 "data/scripts/field_move_scripts.pory"

# 28 "data/scripts/field_move_scripts.pory"
@ Use cut from party menu
# 29 "data/scripts/field_move_scripts.pory"
EventScript_UseCut::
# 30 "data/scripts/field_move_scripts.pory"
	lockall
# 31 "data/scripts/field_move_scripts.pory"
	goto EventScript_CutTreeCommon
# 32 "data/scripts/field_move_scripts.pory"

# 33 "data/scripts/field_move_scripts.pory"
Movement_CutTreeDown:
# 34 "data/scripts/field_move_scripts.pory"
	cut_tree
# 35 "data/scripts/field_move_scripts.pory"
	step_end
# 36 "data/scripts/field_move_scripts.pory"

# 37 "data/scripts/field_move_scripts.pory"
EventScript_CheckTreeCantCut::
# 38 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantCut, MSGBOX_DEFAULT
# 39 "data/scripts/field_move_scripts.pory"
	releaseall
# 40 "data/scripts/field_move_scripts.pory"
	end
# 41 "data/scripts/field_move_scripts.pory"

# 42 "data/scripts/field_move_scripts.pory"
EventScript_CancelCut::
# 43 "data/scripts/field_move_scripts.pory"
	closemessage
# 44 "data/scripts/field_move_scripts.pory"
	releaseall
# 45 "data/scripts/field_move_scripts.pory"
	end
# 46 "data/scripts/field_move_scripts.pory"

# 47 "data/scripts/field_move_scripts.pory"
Text_WantToCut:
# 48 "data/scripts/field_move_scripts.pory"
	.string "Parece que puedes CORTAR este árbol.\p"
# 49 "data/scripts/field_move_scripts.pory"
	.string "¿Usas CORTE?$"
# 50 "data/scripts/field_move_scripts.pory"

# 51 "data/scripts/field_move_scripts.pory"
Text_MonUsedFieldMove:
# 52 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} usó {STR_VAR_2}.$"
# 53 "data/scripts/field_move_scripts.pory"

# 54 "data/scripts/field_move_scripts.pory"
Text_CantCut:
# 55 "data/scripts/field_move_scripts.pory"
	.string "Parece que puedes CORTAR este árbol.$"
# 56 "data/scripts/field_move_scripts.pory"

# 57 "data/scripts/field_move_scripts.pory"
@ Use rock smash from party menu
# 58 "data/scripts/field_move_scripts.pory"
EventScript_UseRockSmash::
# 59 "data/scripts/field_move_scripts.pory"
	lockall
# 60 "data/scripts/field_move_scripts.pory"
	goto EventScript_RockSmashCommon
# 61 "data/scripts/field_move_scripts.pory"

# 62 "data/scripts/field_move_scripts.pory"
@ Interact with smashable rock
# 63 "data/scripts/field_move_scripts.pory"
EventScript_RockSmash::
# 64 "data/scripts/field_move_scripts.pory"
	lockall
# 65 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_ROCK_SMASH, TRUE
# 66 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
# 67 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 68 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 69 "data/scripts/field_move_scripts.pory"
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
# 70 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToSmash, MSGBOX_YESNO
# 71 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
# 72 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 73 "data/scripts/field_move_scripts.pory"
	closemessage
# 74 "data/scripts/field_move_scripts.pory"
EventScript_RockSmashCommon:
# 75 "data/scripts/field_move_scripts.pory"
	@ check if follower should use the field move
# 76 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 77 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 3, VAR_0x8004 @ skip pose if so
# 78 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_SMASH
# 79 "data/scripts/field_move_scripts.pory"
	waitstate
# 80 "data/scripts/field_move_scripts.pory"
EventScript_SmashRock:: @ fallthrough
# 81 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 82 "data/scripts/field_move_scripts.pory"
	call_if_eq VAR_0x8004, TRUE, EventScript_FollowerFieldMove
# 83 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_SmashRock
# 84 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 85 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 86 "data/scripts/field_move_scripts.pory"
	specialvar VAR_RESULT, TryUpdateRusturfTunnelState
# 87 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_EndSmash
# 88 "data/scripts/field_move_scripts.pory"
	special RockSmashWildEncounter
# 89 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_EndSmash
# 90 "data/scripts/field_move_scripts.pory"
	waitstate
# 91 "data/scripts/field_move_scripts.pory"
	releaseall
# 92 "data/scripts/field_move_scripts.pory"
	end
# 93 "data/scripts/field_move_scripts.pory"

# 94 "data/scripts/field_move_scripts.pory"
EventScript_FollowerFieldMove:
# 95 "data/scripts/field_move_scripts.pory"
	getdirectiontoface VAR_0x8005, OBJ_EVENT_ID_FOLLOWER, OBJ_EVENT_ID_PLAYER
# 96 "data/scripts/field_move_scripts.pory"
	specialvar VAR_0x8006, GetPlayerFacingDirection
# 97 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_0x8005, DIR_NONE, EventScript_FollowerFieldMoveEnd
# 98 "data/scripts/field_move_scripts.pory"
	@ Swap follower and player
# 99 "data/scripts/field_move_scripts.pory"
	call EventScript_FollowerSwap
# 100 "data/scripts/field_move_scripts.pory"
	@ Face follower in direction and jump
# 101 "data/scripts/field_move_scripts.pory"
	switch VAR_0x8006
# 102 "data/scripts/field_move_scripts.pory"
	case DIR_NORTH, EventScript_FollowerJumpNorth
# 103 "data/scripts/field_move_scripts.pory"
	case DIR_EAST, EventScript_FollowerJumpEast
# 104 "data/scripts/field_move_scripts.pory"
	case DIR_SOUTH, EventScript_FollowerJumpSouth
# 105 "data/scripts/field_move_scripts.pory"
	case DIR_WEST, EventScript_FollowerJumpWest
# 106 "data/scripts/field_move_scripts.pory"
EventScript_FollowerFieldMoveEnd:
# 107 "data/scripts/field_move_scripts.pory"
	return
# 108 "data/scripts/field_move_scripts.pory"

# 109 "data/scripts/field_move_scripts.pory"
EventScript_FollowerSwap:
# 110 "data/scripts/field_move_scripts.pory"
	switch VAR_0x8005
# 111 "data/scripts/field_move_scripts.pory"
	case DIR_NORTH, EventScript_FollowerMoveNorth
# 112 "data/scripts/field_move_scripts.pory"
	case DIR_EAST, EventScript_FollowerMoveEast
# 113 "data/scripts/field_move_scripts.pory"
	case DIR_SOUTH, EventScript_FollowerMoveSouth
# 114 "data/scripts/field_move_scripts.pory"
	case DIR_WEST, EventScript_FollowerMoveWest
# 115 "data/scripts/field_move_scripts.pory"
	return
# 116 "data/scripts/field_move_scripts.pory"

# 117 "data/scripts/field_move_scripts.pory"
EventScript_FollowerMoveNorth:
# 118 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkDown
# 119 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 120 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 121 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 122 "data/scripts/field_move_scripts.pory"
	return
# 123 "data/scripts/field_move_scripts.pory"

# 124 "data/scripts/field_move_scripts.pory"
EventScript_FollowerMoveEast:
# 125 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkLeft
# 126 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 127 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 128 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 129 "data/scripts/field_move_scripts.pory"
	return
# 130 "data/scripts/field_move_scripts.pory"

# 131 "data/scripts/field_move_scripts.pory"
EventScript_FollowerMoveSouth:
# 132 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkUp
# 133 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 134 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 135 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 136 "data/scripts/field_move_scripts.pory"
	return
# 137 "data/scripts/field_move_scripts.pory"

# 138 "data/scripts/field_move_scripts.pory"
EventScript_FollowerMoveWest:
# 139 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkRight
# 140 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 141 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 142 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 143 "data/scripts/field_move_scripts.pory"
	return
# 144 "data/scripts/field_move_scripts.pory"

# 145 "data/scripts/field_move_scripts.pory"
EventScript_FollowerJumpNorth:
# 146 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_JumpUp
# 147 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 148 "data/scripts/field_move_scripts.pory"
	return
# 149 "data/scripts/field_move_scripts.pory"

# 150 "data/scripts/field_move_scripts.pory"
EventScript_FollowerJumpEast:
# 151 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_JumpRight
# 152 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 153 "data/scripts/field_move_scripts.pory"
	return
# 154 "data/scripts/field_move_scripts.pory"

# 155 "data/scripts/field_move_scripts.pory"
EventScript_FollowerJumpSouth:
# 156 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_JumpDown
# 157 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 158 "data/scripts/field_move_scripts.pory"
	return
# 159 "data/scripts/field_move_scripts.pory"

# 160 "data/scripts/field_move_scripts.pory"
EventScript_FollowerJumpWest:
# 161 "data/scripts/field_move_scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Movement_JumpLeft
# 162 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 163 "data/scripts/field_move_scripts.pory"
	return
# 164 "data/scripts/field_move_scripts.pory"

# 165 "data/scripts/field_move_scripts.pory"
EventScript_EndSmash::
# 166 "data/scripts/field_move_scripts.pory"
	releaseall
# 167 "data/scripts/field_move_scripts.pory"
	end
# 168 "data/scripts/field_move_scripts.pory"

# 169 "data/scripts/field_move_scripts.pory"
Movement_WalkUp:
# 170 "data/scripts/field_move_scripts.pory"
	walk_up
# 171 "data/scripts/field_move_scripts.pory"
	step_end
# 172 "data/scripts/field_move_scripts.pory"

# 173 "data/scripts/field_move_scripts.pory"
Movement_JumpUp:
# 174 "data/scripts/field_move_scripts.pory"
	jump_in_place_up
# 175 "data/scripts/field_move_scripts.pory"
	step_end
# 176 "data/scripts/field_move_scripts.pory"

# 177 "data/scripts/field_move_scripts.pory"
Movement_WalkRight:
# 178 "data/scripts/field_move_scripts.pory"
	walk_right
# 179 "data/scripts/field_move_scripts.pory"
	step_end
# 180 "data/scripts/field_move_scripts.pory"

# 181 "data/scripts/field_move_scripts.pory"
Movement_JumpRight:
# 182 "data/scripts/field_move_scripts.pory"
	jump_in_place_right
# 183 "data/scripts/field_move_scripts.pory"
	step_end
# 184 "data/scripts/field_move_scripts.pory"

# 185 "data/scripts/field_move_scripts.pory"
Movement_WalkDown:
# 186 "data/scripts/field_move_scripts.pory"
	walk_down
# 187 "data/scripts/field_move_scripts.pory"
	step_end
# 188 "data/scripts/field_move_scripts.pory"

# 189 "data/scripts/field_move_scripts.pory"
Movement_JumpDown:
# 190 "data/scripts/field_move_scripts.pory"
	jump_in_place_down
# 191 "data/scripts/field_move_scripts.pory"
	step_end
# 192 "data/scripts/field_move_scripts.pory"

# 193 "data/scripts/field_move_scripts.pory"
Movement_WalkLeft:
# 194 "data/scripts/field_move_scripts.pory"
	walk_left
# 195 "data/scripts/field_move_scripts.pory"
	step_end
# 196 "data/scripts/field_move_scripts.pory"

# 197 "data/scripts/field_move_scripts.pory"
Movement_JumpLeft:
# 198 "data/scripts/field_move_scripts.pory"
	jump_in_place_left
# 199 "data/scripts/field_move_scripts.pory"
	step_end
# 200 "data/scripts/field_move_scripts.pory"

# 201 "data/scripts/field_move_scripts.pory"
Movement_SmashRock:
# 202 "data/scripts/field_move_scripts.pory"
	rock_smash_break
# 203 "data/scripts/field_move_scripts.pory"
	step_end
# 204 "data/scripts/field_move_scripts.pory"

# 205 "data/scripts/field_move_scripts.pory"
EventScript_CantSmashRock::
# 206 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantSmash, MSGBOX_DEFAULT
# 207 "data/scripts/field_move_scripts.pory"
	releaseall
# 208 "data/scripts/field_move_scripts.pory"
	end
# 209 "data/scripts/field_move_scripts.pory"

# 210 "data/scripts/field_move_scripts.pory"
EventScript_CancelSmash::
# 211 "data/scripts/field_move_scripts.pory"
	closemessage
# 212 "data/scripts/field_move_scripts.pory"
	releaseall
# 213 "data/scripts/field_move_scripts.pory"
	end
# 214 "data/scripts/field_move_scripts.pory"

# 215 "data/scripts/field_move_scripts.pory"
Text_WantToSmash:
# 216 "data/scripts/field_move_scripts.pory"
	.string "Parece que se puede romper esta roca.\n"
# 217 "data/scripts/field_move_scripts.pory"
	.string "¿Usas GOLPE ROCA?$"
# 218 "data/scripts/field_move_scripts.pory"

# 219 "data/scripts/field_move_scripts.pory"
Text_CantSmash:
# 220 "data/scripts/field_move_scripts.pory"
	.string "Es una roca muy dura, pero un\n"
# 221 "data/scripts/field_move_scripts.pory"
	.string "POKéMON podría hacerla añicos.$"
# 222 "data/scripts/field_move_scripts.pory"

# 223 "data/scripts/field_move_scripts.pory"
EventScript_StrengthBoulder::
# 224 "data/scripts/field_move_scripts.pory"
	lockall
# 225 "data/scripts/field_move_scripts.pory"
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
# 226 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_STRENGTH, TRUE
# 227 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantStrength
# 228 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 229 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToStrength, MSGBOX_YESNO
# 230 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
# 231 "data/scripts/field_move_scripts.pory"
	closemessage
# 232 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 233 "data/scripts/field_move_scripts.pory"
	waitstate
# 234 "data/scripts/field_move_scripts.pory"
	goto EventScript_ActivateStrength
# 235 "data/scripts/field_move_scripts.pory"
	end
# 236 "data/scripts/field_move_scripts.pory"

# 237 "data/scripts/field_move_scripts.pory"
EventScript_UseStrength::
# 238 "data/scripts/field_move_scripts.pory"
	lockall
# 239 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 240 "data/scripts/field_move_scripts.pory"
	waitstate
# 241 "data/scripts/field_move_scripts.pory"
	goto EventScript_ActivateStrength
# 242 "data/scripts/field_move_scripts.pory"
	end
# 243 "data/scripts/field_move_scripts.pory"

# 244 "data/scripts/field_move_scripts.pory"
EventScript_ActivateStrength::
# 245 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 246 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT
# 247 "data/scripts/field_move_scripts.pory"
	releaseall
# 248 "data/scripts/field_move_scripts.pory"
	end
# 249 "data/scripts/field_move_scripts.pory"

# 250 "data/scripts/field_move_scripts.pory"
EventScript_CantStrength::
# 251 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantStrength, MSGBOX_DEFAULT
# 252 "data/scripts/field_move_scripts.pory"
	releaseall
# 253 "data/scripts/field_move_scripts.pory"
	end
# 254 "data/scripts/field_move_scripts.pory"

# 255 "data/scripts/field_move_scripts.pory"
EventScript_CheckActivatedBoulder::
# 256 "data/scripts/field_move_scripts.pory"
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
# 257 "data/scripts/field_move_scripts.pory"
	releaseall
# 258 "data/scripts/field_move_scripts.pory"
	end
# 259 "data/scripts/field_move_scripts.pory"

# 260 "data/scripts/field_move_scripts.pory"
EventScript_CancelStrength::
# 261 "data/scripts/field_move_scripts.pory"
	closemessage
# 262 "data/scripts/field_move_scripts.pory"
	releaseall
# 263 "data/scripts/field_move_scripts.pory"
	end
# 264 "data/scripts/field_move_scripts.pory"

# 265 "data/scripts/field_move_scripts.pory"
Text_WantToStrength:
# 266 "data/scripts/field_move_scripts.pory"
	.string "Es una roca enorme, pero un\n"
# 267 "data/scripts/field_move_scripts.pory"
	.string "POKéMON podría moverla.\p"
# 268 "data/scripts/field_move_scripts.pory"
	.string "¿Usas FUERZA?$"
# 269 "data/scripts/field_move_scripts.pory"

# 270 "data/scripts/field_move_scripts.pory"
Text_MonUsedStrength:
# 271 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} usó FUERZA.\p"
# 272 "data/scripts/field_move_scripts.pory"
	.string "La FUERZA de {STR_VAR_1} logró\n"
# 273 "data/scripts/field_move_scripts.pory"
	.string "desplazar la roca a un lado.$"
# 274 "data/scripts/field_move_scripts.pory"

# 275 "data/scripts/field_move_scripts.pory"
Text_CantStrength:
# 276 "data/scripts/field_move_scripts.pory"
	.string "Es una roca enorme, pero un\n"
# 277 "data/scripts/field_move_scripts.pory"
	.string "POKéMON podría apartarla.$"
# 278 "data/scripts/field_move_scripts.pory"

# 279 "data/scripts/field_move_scripts.pory"
Text_StrengthActivated:
# 280 "data/scripts/field_move_scripts.pory"
	.string "Usar FUERZA ha permitido desplazar\n"
# 281 "data/scripts/field_move_scripts.pory"
	.string "la roca a un lado.$"
# 282 "data/scripts/field_move_scripts.pory"

# 283 "data/scripts/field_move_scripts.pory"
EventScript_UseWaterfall::
# 284 "data/scripts/field_move_scripts.pory"
	lockall
# 285 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_WATERFALL
# 286 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantWaterfall
# 287 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 288 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 289 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
# 290 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
# 291 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
# 292 "data/scripts/field_move_scripts.pory"
	hidefollowernpc
# 293 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_WATERFALL
# 294 "data/scripts/field_move_scripts.pory"
	callnative FollowerNPC_WarpSetEnd
# 295 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndWaterfall
# 296 "data/scripts/field_move_scripts.pory"

# 297 "data/scripts/field_move_scripts.pory"
EventScript_CannotUseWaterfall::
# 298 "data/scripts/field_move_scripts.pory"
	lockall
# 299 "data/scripts/field_move_scripts.pory"

# 300 "data/scripts/field_move_scripts.pory"
EventScript_CantWaterfall::
# 301 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT
# 302 "data/scripts/field_move_scripts.pory"

# 303 "data/scripts/field_move_scripts.pory"
EventScript_EndWaterfall::
# 304 "data/scripts/field_move_scripts.pory"
	releaseall
# 305 "data/scripts/field_move_scripts.pory"
	end
# 306 "data/scripts/field_move_scripts.pory"

# 307 "data/scripts/field_move_scripts.pory"
Text_CantWaterfall:
# 308 "data/scripts/field_move_scripts.pory"
	.string "Un muro de agua cae\n"
# 309 "data/scripts/field_move_scripts.pory"
	.string "con un estruendo estremecedor…$"
# 310 "data/scripts/field_move_scripts.pory"

# 311 "data/scripts/field_move_scripts.pory"
Text_WantToWaterfall:
# 312 "data/scripts/field_move_scripts.pory"
	.string "Es una gran catarata.\n"
# 313 "data/scripts/field_move_scripts.pory"
	.string "¿Usas CASCADA?$"
# 314 "data/scripts/field_move_scripts.pory"

# 315 "data/scripts/field_move_scripts.pory"
Text_MonUsedWaterfall:
# 316 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} usó CASCADA.$"
# 317 "data/scripts/field_move_scripts.pory"

# 318 "data/scripts/field_move_scripts.pory"
EventScript_UseDive::
# 319 "data/scripts/field_move_scripts.pory"
	lockall
# 320 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_DIVE
# 321 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantDive
# 322 "data/scripts/field_move_scripts.pory"
	copyvar 0x8004 VAR_RESULT
# 323 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 324 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 325 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 326 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToDive, MSGBOX_YESNO
# 327 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndDive
# 328 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
# 329 "data/scripts/field_move_scripts.pory"
	hidefollowernpc
# 330 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_0x8004
# 331 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 332 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 333 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndDive
# 334 "data/scripts/field_move_scripts.pory"
	end
# 335 "data/scripts/field_move_scripts.pory"

# 336 "data/scripts/field_move_scripts.pory"
EventScript_CantDive::
# 337 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantDive, MSGBOX_DEFAULT
# 338 "data/scripts/field_move_scripts.pory"
	releaseall
# 339 "data/scripts/field_move_scripts.pory"
	end
# 340 "data/scripts/field_move_scripts.pory"

# 341 "data/scripts/field_move_scripts.pory"
EventScript_EndDive::
# 342 "data/scripts/field_move_scripts.pory"
	releaseall
# 343 "data/scripts/field_move_scripts.pory"
	end
# 344 "data/scripts/field_move_scripts.pory"

# 345 "data/scripts/field_move_scripts.pory"
EventScript_UseDiveUnderwater::
# 346 "data/scripts/field_move_scripts.pory"
	lockall
# 347 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_DIVE
# 348 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSurface
# 349 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 350 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 351 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 1, 1
# 352 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToSurface, MSGBOX_YESNO
# 353 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_NoSurface
# 354 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
# 355 "data/scripts/field_move_scripts.pory"
	hidefollowernpc
# 356 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 357 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSurface
# 358 "data/scripts/field_move_scripts.pory"
	end
# 359 "data/scripts/field_move_scripts.pory"

# 360 "data/scripts/field_move_scripts.pory"
EventScript_CantSurface::
# 361 "data/scripts/field_move_scripts.pory"
	lockall
# 362 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantSurface, MSGBOX_DEFAULT
# 363 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSurface
# 364 "data/scripts/field_move_scripts.pory"
	end
# 365 "data/scripts/field_move_scripts.pory"

# 366 "data/scripts/field_move_scripts.pory"
EventScript_EndSurface::
# 367 "data/scripts/field_move_scripts.pory"
	callnative SetFollowerNPCSurfSpriteAfterDive
# 368 "data/scripts/field_move_scripts.pory"
EventScript_NoSurface::
# 369 "data/scripts/field_move_scripts.pory"
	releaseall
# 370 "data/scripts/field_move_scripts.pory"
	end
# 371 "data/scripts/field_move_scripts.pory"

# 372 "data/scripts/field_move_scripts.pory"
EventScript_DigCommon:
# 373 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 374 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 3, VAR_0x8004 @ skip pose if true
# 375 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_DIG
# 376 "data/scripts/field_move_scripts.pory"
	waitstate
# 377 "data/scripts/field_move_scripts.pory"
EventScript_DigSealedChamber:: @ fallthrough
# 378 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 379 "data/scripts/field_move_scripts.pory"
	call_if_eq VAR_0x8004, TRUE, EventScript_FollowerFieldMove
# 380 "data/scripts/field_move_scripts.pory"
	callnative DoBrailleDigEffect
# 381 "data/scripts/field_move_scripts.pory"
	releaseall
# 382 "data/scripts/field_move_scripts.pory"
	end
# 383 "data/scripts/field_move_scripts.pory"

# 384 "data/scripts/field_move_scripts.pory"
@ Use Dig from party menu
# 385 "data/scripts/field_move_scripts.pory"
EventScript_UseDig::
# 386 "data/scripts/field_move_scripts.pory"
	lockall
# 387 "data/scripts/field_move_scripts.pory"
	goto EventScript_DigCommon
# 388 "data/scripts/field_move_scripts.pory"

# 389 "data/scripts/field_move_scripts.pory"

# 390 "data/scripts/field_move_scripts.pory"
EventScript_CutGrassCommon:
# 391 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 392 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 3, VAR_0x8004 @ skip pose if true
# 393 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_GRASS
# 394 "data/scripts/field_move_scripts.pory"
	waitstate
# 395 "data/scripts/field_move_scripts.pory"

# 396 "data/scripts/field_move_scripts.pory"
@ Use Cut grass from party menu
# 397 "data/scripts/field_move_scripts.pory"
EventScript_UseCutGrass::
# 398 "data/scripts/field_move_scripts.pory"
	lockall
# 399 "data/scripts/field_move_scripts.pory"
	goto EventScript_CutGrassCommon
# 400 "data/scripts/field_move_scripts.pory"

# 401 "data/scripts/field_move_scripts.pory"
Text_CantDive:
# 402 "data/scripts/field_move_scripts.pory"
	.string "El mar es muy profundo en esta zona.\n"
# 403 "data/scripts/field_move_scripts.pory"
	.string "Un POKéMON podría bucear aquí.$"
# 404 "data/scripts/field_move_scripts.pory"

# 405 "data/scripts/field_move_scripts.pory"
Text_WantToDive:
# 406 "data/scripts/field_move_scripts.pory"
	.string "El mar es muy profundo en esta zona.\n"
# 407 "data/scripts/field_move_scripts.pory"
	.string "¿Usas BUCEO?$"
# 408 "data/scripts/field_move_scripts.pory"

# 409 "data/scripts/field_move_scripts.pory"
Text_MonUsedDive:
# 410 "data/scripts/field_move_scripts.pory"
	.string "{STR_VAR_1} usó BUCEO.$"
# 411 "data/scripts/field_move_scripts.pory"

# 412 "data/scripts/field_move_scripts.pory"
Text_CantSurface:
# 413 "data/scripts/field_move_scripts.pory"
	.string "La luz se filtra desde la superficie.\n"
# 414 "data/scripts/field_move_scripts.pory"
	.string "Un POKéMON puede emerger aquí.$"
# 415 "data/scripts/field_move_scripts.pory"

# 416 "data/scripts/field_move_scripts.pory"
Text_WantToSurface:
# 417 "data/scripts/field_move_scripts.pory"
	.string "La luz se filtra desde la superficie.\n"
# 418 "data/scripts/field_move_scripts.pory"
	.string "¿Usas BUCEO?$"
# 419 "data/scripts/field_move_scripts.pory"

# 420 "data/scripts/field_move_scripts.pory"
EventScript_FailSweetScent::
# 421 "data/scripts/field_move_scripts.pory"
	msgbox Text_FailSweetScent, MSGBOX_SIGN
# 422 "data/scripts/field_move_scripts.pory"
	end
# 423 "data/scripts/field_move_scripts.pory"

# 424 "data/scripts/field_move_scripts.pory"
Text_FailSweetScent:
# 425 "data/scripts/field_move_scripts.pory"
	.string "Parece que aquí no hay nada…$"
# 426 "data/scripts/field_move_scripts.pory"

# 427 "data/scripts/field_move_scripts.pory"
EventScript_UseDefog::
# 428 "data/scripts/field_move_scripts.pory"
	lockall
# 429 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 430 "data/scripts/field_move_scripts.pory"
	buffermovename STR_VAR_2, MOVE_DEFOG
# 431 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 432 "data/scripts/field_move_scripts.pory"
	closemessage
# 433 "data/scripts/field_move_scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 434 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 3, VAR_0x8004 @ skip pose if so
# 435 "data/scripts/field_move_scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 436 "data/scripts/field_move_scripts.pory"
	call_if_eq VAR_0x8004, TRUE, EventScript_FollowerFieldMove
# 437 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 438 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 439 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_DEFOG
# 440 "data/scripts/field_move_scripts.pory"
	waitstate
# 441 "data/scripts/field_move_scripts.pory"
	releaseall
# 442 "data/scripts/field_move_scripts.pory"
	end
# 443 "data/scripts/field_move_scripts.pory"

# 444 "data/scripts/field_move_scripts.pory"
EventScript_UseRockClimb::
# 445 "data/scripts/field_move_scripts.pory"
	lockall
# 446 "data/scripts/field_move_scripts.pory"
	checkfieldmove FIELD_MOVE_ROCK_CLIMB
# 447 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantRockClimb
# 448 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 449 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 450 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToRockClimb, MSGBOX_YESNO
# 451 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndRockClimb
# 452 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedRockClimb, MSGBOX_DEFAULT
# 453 "data/scripts/field_move_scripts.pory"
	closemessage
# 454 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
# 455 "data/scripts/field_move_scripts.pory"
	waitstate
# 456 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndRockClimb
# 457 "data/scripts/field_move_scripts.pory"
	end
# 458 "data/scripts/field_move_scripts.pory"

# 459 "data/scripts/field_move_scripts.pory"
EventScript_CantRockClimb::
# 460 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantRockClimb, MSGBOX_DEFAULT
# 461 "data/scripts/field_move_scripts.pory"

# 462 "data/scripts/field_move_scripts.pory"
EventScript_EndRockClimb::
# 463 "data/scripts/field_move_scripts.pory"
	releaseall
# 464 "data/scripts/field_move_scripts.pory"
	end
# 465 "data/scripts/field_move_scripts.pory"

# 466 "data/scripts/field_move_scripts.pory"
EventScript_RockSmashFossil::
# 467 "data/scripts/field_move_scripts.pory"
	lockall
# 468 "data/scripts/field_move_scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, EventScript_CantSmashRock
# 469 "data/scripts/field_move_scripts.pory"
	checkpartymove MOVE_ROCK_SMASH
# 470 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
# 471 "data/scripts/field_move_scripts.pory"
	goto EventScript_CanRockSmashFossil
# 472 "data/scripts/field_move_scripts.pory"
	releaseall
# 473 "data/scripts/field_move_scripts.pory"
	end
# 474 "data/scripts/field_move_scripts.pory"

# 475 "data/scripts/field_move_scripts.pory"
EventScript_CanRockSmashFossil::
# 476 "data/scripts/field_move_scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 477 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 478 "data/scripts/field_move_scripts.pory"
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
# 479 "data/scripts/field_move_scripts.pory"
	msgbox Text_WantToSmash, MSGBOX_YESNO
# 480 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
# 481 "data/scripts/field_move_scripts.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 482 "data/scripts/field_move_scripts.pory"
	closemessage
# 483 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_ROCK_SMASH
# 484 "data/scripts/field_move_scripts.pory"
	waitstate
# 485 "data/scripts/field_move_scripts.pory"
	goto EventScript_SmashRockFossil
# 486 "data/scripts/field_move_scripts.pory"
	end
# 487 "data/scripts/field_move_scripts.pory"

# 488 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockFossil::
# 489 "data/scripts/field_move_scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_SmashRock
# 490 "data/scripts/field_move_scripts.pory"
	waitmovement 0
# 491 "data/scripts/field_move_scripts.pory"
	removeobject VAR_LAST_TALKED
# 492 "data/scripts/field_move_scripts.pory"
	random 2
# 493 "data/scripts/field_move_scripts.pory"
	switch VAR_RESULT
# 494 "data/scripts/field_move_scripts.pory"
	case 0, EventScript_SmashRockFossilFound
# 495 "data/scripts/field_move_scripts.pory"
	special RockSmashWildEncounter
# 496 "data/scripts/field_move_scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_EndSmash
# 497 "data/scripts/field_move_scripts.pory"
	waitstate
# 498 "data/scripts/field_move_scripts.pory"
	releaseall
# 499 "data/scripts/field_move_scripts.pory"
	end
# 500 "data/scripts/field_move_scripts.pory"

# 501 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockFossilFound::
# 502 "data/scripts/field_move_scripts.pory"
	switch VAR_TEMP_0
# 503 "data/scripts/field_move_scripts.pory"
	case ITEM_FOSSILIZED_BIRD, EventScript_SmashRockTopFossilFound
# 504 "data/scripts/field_move_scripts.pory"
	case ITEM_FOSSILIZED_FISH, EventScript_SmashRockTopFossilFound
# 505 "data/scripts/field_move_scripts.pory"
	case ITEM_FOSSILIZED_DINO, EventScript_SmashRockBottomFossilFound
# 506 "data/scripts/field_move_scripts.pory"
	case ITEM_FOSSILIZED_DRAKE, EventScript_SmashRockBottomFossilFound
# 507 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockFossilFound2::
# 508 "data/scripts/field_move_scripts.pory"
	random 13
# 509 "data/scripts/field_move_scripts.pory"
	switch VAR_RESULT
# 510 "data/scripts/field_move_scripts.pory"
	case 0, EventScript_SmashRockHelixFound
# 511 "data/scripts/field_move_scripts.pory"
	case 1, EventScript_SmashRockDomeFound
# 512 "data/scripts/field_move_scripts.pory"
	case 2, EventScript_SmashRockOldAmberFound
# 513 "data/scripts/field_move_scripts.pory"
	case 3, EventScript_SmashRockArmorFound
# 514 "data/scripts/field_move_scripts.pory"
	case 4, EventScript_SmashRockSkullFound
# 515 "data/scripts/field_move_scripts.pory"
	case 5, EventScript_SmashRockCoverFound
# 516 "data/scripts/field_move_scripts.pory"
	case 6, EventScript_SmashRockPlumeFound
# 517 "data/scripts/field_move_scripts.pory"
	case 7, EventScript_SmashRockJawFound
# 518 "data/scripts/field_move_scripts.pory"
	case 8, EventScript_SmashRockSailFound
# 519 "data/scripts/field_move_scripts.pory"
	case 9, EventScript_SmashRockBirdFound
# 520 "data/scripts/field_move_scripts.pory"
	case 10, EventScript_SmashRockFishFound
# 521 "data/scripts/field_move_scripts.pory"
	case 11, EventScript_SmashRockDrakeFound
# 522 "data/scripts/field_move_scripts.pory"
	case 12, EventScript_SmashRockDinoFound
# 523 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 524 "data/scripts/field_move_scripts.pory"
	end
# 525 "data/scripts/field_move_scripts.pory"

# 526 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockTopFossilFound:
# 527 "data/scripts/field_move_scripts.pory"
	random 3
# 528 "data/scripts/field_move_scripts.pory"
	goto_if_ne VAR_RESULT, 0, EventScript_SmashRockFossilFound2
# 529 "data/scripts/field_move_scripts.pory"
	random 2
# 530 "data/scripts/field_move_scripts.pory"
	switch VAR_RESULT
# 531 "data/scripts/field_move_scripts.pory"
	case 0, EventScript_SmashRockDrakeFound
# 532 "data/scripts/field_move_scripts.pory"
	case 1, EventScript_SmashRockDinoFound
# 533 "data/scripts/field_move_scripts.pory"

# 534 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockBottomFossilFound:
# 535 "data/scripts/field_move_scripts.pory"
	random 3
# 536 "data/scripts/field_move_scripts.pory"
	goto_if_ne VAR_RESULT, 0, EventScript_SmashRockFossilFound2
# 537 "data/scripts/field_move_scripts.pory"
	random 2
# 538 "data/scripts/field_move_scripts.pory"
	switch VAR_RESULT
# 539 "data/scripts/field_move_scripts.pory"
	case 0, EventScript_SmashRockFishFound
# 540 "data/scripts/field_move_scripts.pory"
	case 1, EventScript_SmashRockBirdFound
# 541 "data/scripts/field_move_scripts.pory"

# 542 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockHelixFound:
# 543 "data/scripts/field_move_scripts.pory"
	giveitem ITEM_HELIX_FOSSIL, 1
# 544 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 545 "data/scripts/field_move_scripts.pory"

# 546 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockDomeFound:
# 547 "data/scripts/field_move_scripts.pory"
	giveitem ITEM_DOME_FOSSIL, 1
# 548 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 549 "data/scripts/field_move_scripts.pory"

# 550 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockOldAmberFound:
# 551 "data/scripts/field_move_scripts.pory"
	giveitem ITEM_OLD_AMBER, 1
# 552 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 553 "data/scripts/field_move_scripts.pory"

# 554 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockArmorFound:
# 555 "data/scripts/field_move_scripts.pory"
	giveitem ITEM_ARMOR_FOSSIL, 1
# 556 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 557 "data/scripts/field_move_scripts.pory"

# 558 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockSkullFound:
# 559 "data/scripts/field_move_scripts.pory"
	giveitem ITEM_SKULL_FOSSIL, 1
# 560 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 561 "data/scripts/field_move_scripts.pory"

# 562 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockCoverFound:
# 563 "data/scripts/field_move_scripts.pory"
	giveitem ITEM_COVER_FOSSIL, 1
# 564 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 565 "data/scripts/field_move_scripts.pory"

# 566 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockPlumeFound:
# 567 "data/scripts/field_move_scripts.pory"
	giveitem ITEM_PLUME_FOSSIL, 1
# 568 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 569 "data/scripts/field_move_scripts.pory"

# 570 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockJawFound:
# 571 "data/scripts/field_move_scripts.pory"
	giveitem ITEM_JAW_FOSSIL, 1
# 572 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 573 "data/scripts/field_move_scripts.pory"

# 574 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockSailFound:
# 575 "data/scripts/field_move_scripts.pory"
	giveitem ITEM_SAIL_FOSSIL, 1
# 576 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 577 "data/scripts/field_move_scripts.pory"

# 578 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockBirdFound:
# 579 "data/scripts/field_move_scripts.pory"
	giveitem ITEM_FOSSILIZED_BIRD, 1
# 580 "data/scripts/field_move_scripts.pory"
	setvar VAR_TEMP_0, ITEM_FOSSILIZED_BIRD
# 581 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 582 "data/scripts/field_move_scripts.pory"

# 583 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockFishFound:
# 584 "data/scripts/field_move_scripts.pory"
	giveitem ITEM_FOSSILIZED_FISH, 1
# 585 "data/scripts/field_move_scripts.pory"
	setvar VAR_TEMP_0, ITEM_FOSSILIZED_FISH
# 586 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 587 "data/scripts/field_move_scripts.pory"

# 588 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockDrakeFound:
# 589 "data/scripts/field_move_scripts.pory"
	giveitem ITEM_FOSSILIZED_DRAKE, 1
# 590 "data/scripts/field_move_scripts.pory"
	setvar VAR_TEMP_0, ITEM_FOSSILIZED_DRAKE
# 591 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 592 "data/scripts/field_move_scripts.pory"

# 593 "data/scripts/field_move_scripts.pory"
EventScript_SmashRockDinoFound:
# 594 "data/scripts/field_move_scripts.pory"
	giveitem ITEM_FOSSILIZED_DINO, 1
# 595 "data/scripts/field_move_scripts.pory"
	setvar VAR_TEMP_0, ITEM_FOSSILIZED_DINO
# 596 "data/scripts/field_move_scripts.pory"
	goto EventScript_EndSmash
# 597 "data/scripts/field_move_scripts.pory"

# 598 "data/scripts/field_move_scripts.pory"

# 599 "data/scripts/field_move_scripts.pory"
Script_Wishes::
# 600 "data/scripts/field_move_scripts.pory"
	lockall
# 601 "data/scripts/field_move_scripts.pory"
	switch VAR_WISHES_FUFILLED
# 602 "data/scripts/field_move_scripts.pory"
	case 1, Script_YouFeelAsThough
# 603 "data/scripts/field_move_scripts.pory"
	case 2, Script_YouFeelAsThough
# 604 "data/scripts/field_move_scripts.pory"
	case 3, Script_YouFeelAsThough
# 605 "data/scripts/field_move_scripts.pory"
	case 4, Script_YouAreHalfwayThrough
# 606 "data/scripts/field_move_scripts.pory"
	case 5, Script_YouFeelAsThough
# 607 "data/scripts/field_move_scripts.pory"
	case 6, Script_JustOneMoreWish
# 608 "data/scripts/field_move_scripts.pory"
	case 7, Script_YouHaveAchieved
# 609 "data/scripts/field_move_scripts.pory"
	releaseall
# 610 "data/scripts/field_move_scripts.pory"
	end
# 611 "data/scripts/field_move_scripts.pory"
	
# 612 "data/scripts/field_move_scripts.pory"
Script_YouFeelAsThough::
# 613 "data/scripts/field_move_scripts.pory"
	msgbox YouFeelAsThough
# 614 "data/scripts/field_move_scripts.pory"
	releaseall
# 615 "data/scripts/field_move_scripts.pory"
	end
# 616 "data/scripts/field_move_scripts.pory"

# 617 "data/scripts/field_move_scripts.pory"
Script_YouAreHalfwayThrough::
# 618 "data/scripts/field_move_scripts.pory"
	msgbox YouAreHalfwayThrough
# 619 "data/scripts/field_move_scripts.pory"
	releaseall
# 620 "data/scripts/field_move_scripts.pory"
	end
# 621 "data/scripts/field_move_scripts.pory"
	
# 622 "data/scripts/field_move_scripts.pory"
Script_JustOneMoreWish::
# 623 "data/scripts/field_move_scripts.pory"
	msgbox YouAreAlmostThere
# 624 "data/scripts/field_move_scripts.pory"
	releaseall
# 625 "data/scripts/field_move_scripts.pory"
	end
# 626 "data/scripts/field_move_scripts.pory"

# 627 "data/scripts/field_move_scripts.pory"
Script_YouHaveAchieved::
# 628 "data/scripts/field_move_scripts.pory"
	msgbox YouHaveAchieved
# 629 "data/scripts/field_move_scripts.pory"
	clearflag FLAG_HIDE_JIRACHI
# 630 "data/scripts/field_move_scripts.pory"
	releaseall
# 631 "data/scripts/field_move_scripts.pory"
	end
# 632 "data/scripts/field_move_scripts.pory"

# 633 "data/scripts/field_move_scripts.pory"
Text_CutTreeNoNeed:
# 634 "data/scripts/field_move_scripts.pory"
	.string "No tengo porqué cortar este árbol.$"
# 635 "data/scripts/field_move_scripts.pory"

# 636 "data/scripts/field_move_scripts.pory"
YouFeelAsThough:
# 637 "data/scripts/field_move_scripts.pory"
	.string "Sientes como si un gran ser\nhubiera visto tu buena acción.\pEsperemos esté complacido.$"
# 638 "data/scripts/field_move_scripts.pory"
YouHaveAchieved:
# 639 "data/scripts/field_move_scripts.pory"
	.string "Escuchas una voz a la distancia:\p“Siete deseos has cumplido,\nY yo, estoy complacido.”\p“Para obetener tu regalo,\nhas de volver a donde todo\lha comenzado.”$"
# 640 "data/scripts/field_move_scripts.pory"
YouAreAlmostThere:
# 641 "data/scripts/field_move_scripts.pory"
	.string "Escuchas una voz a la distancia:\p“Tu travesía esta cerca de terminar,\nun solo deseo queda por completar.”$"
# 642 "data/scripts/field_move_scripts.pory"
YouAreHalfwayThrough:
# 643 "data/scripts/field_move_scripts.pory"
	.string "Escuchas una voz a la distancia:\p“Cuatro de siete deseos has completado,\nquedan tres para obetener tu regalo.”$"
# 644 "data/scripts/field_move_scripts.pory"

# 645 "data/scripts/field_move_scripts.pory"

# 646 "data/scripts/field_move_scripts.pory"
Text_WantToRockClimb:
# 647 "data/scripts/field_move_scripts.pory"
    .string "The cliff is steep.\n"
# 648 "data/scripts/field_move_scripts.pory"
    .string "Would you like to use Rock Climb?$"
# 649 "data/scripts/field_move_scripts.pory"

# 650 "data/scripts/field_move_scripts.pory"
Text_MonUsedRockClimb:
# 651 "data/scripts/field_move_scripts.pory"
    .string "{STR_VAR_1} used Rock Climb!$"
# 652 "data/scripts/field_move_scripts.pory"

# 653 "data/scripts/field_move_scripts.pory"
Text_CantRockClimb:
# 654 "data/scripts/field_move_scripts.pory"
    .string "The cliff is steep.\n"
# 655 "data/scripts/field_move_scripts.pory"
    .string "A Pokémon may be able to climb it.$"
# 656 "data/scripts/field_move_scripts.pory"

# 657 "data/scripts/field_move_scripts.pory"
@ Interact with a tree a Pokémon can use headbutt on
# 658 "data/scripts/field_move_scripts.pory"
EventScript_Headbutt::
# 659 "data/scripts/field_move_scripts.pory"
    lockall
# 660 "data/scripts/field_move_scripts.pory"
    checkfieldmove FIELD_MOVE_HEADBUTT
# 661 "data/scripts/field_move_scripts.pory"
    goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantHeadbuttTree
# 662 "data/scripts/field_move_scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 663 "data/scripts/field_move_scripts.pory"
    setfieldeffectargument 0, VAR_RESULT
# 664 "data/scripts/field_move_scripts.pory"
    buffermovename STR_VAR_2, MOVE_HEADBUTT
# 665 "data/scripts/field_move_scripts.pory"
    msgbox Text_WantToHeadbutt, MSGBOX_YESNO
# 666 "data/scripts/field_move_scripts.pory"
    goto_if_eq VAR_RESULT, NO, EventScript_CancelHeadbutt
# 667 "data/scripts/field_move_scripts.pory"
    msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 668 "data/scripts/field_move_scripts.pory"
    closemessage
# 669 "data/scripts/field_move_scripts.pory"
    dofieldeffect FLDEFF_USE_HEADBUTT
# 670 "data/scripts/field_move_scripts.pory"
    waitstate
# 671 "data/scripts/field_move_scripts.pory"
    goto EventScript_HeadbuttTree
# 672 "data/scripts/field_move_scripts.pory"
    end
# 673 "data/scripts/field_move_scripts.pory"

# 674 "data/scripts/field_move_scripts.pory"
EventScript_CantHeadbuttTree::
# 675 "data/scripts/field_move_scripts.pory"
	msgbox Text_CantHeadbuttTree, MSGBOX_DEFAULT
# 676 "data/scripts/field_move_scripts.pory"
	releaseall
# 677 "data/scripts/field_move_scripts.pory"
	end
# 678 "data/scripts/field_move_scripts.pory"

# 679 "data/scripts/field_move_scripts.pory"
EventScript_CancelHeadbutt::
# 680 "data/scripts/field_move_scripts.pory"
	closemessage
# 681 "data/scripts/field_move_scripts.pory"
	releaseall
# 682 "data/scripts/field_move_scripts.pory"
	end
# 683 "data/scripts/field_move_scripts.pory"

# 684 "data/scripts/field_move_scripts.pory"
@ Use headbutt from party menu
# 685 "data/scripts/field_move_scripts.pory"
EventScript_UseHeadbutt::
# 686 "data/scripts/field_move_scripts.pory"
	lockall
# 687 "data/scripts/field_move_scripts.pory"
	dofieldeffect FLDEFF_USE_HEADBUTT
# 688 "data/scripts/field_move_scripts.pory"
	waitstate
# 689 "data/scripts/field_move_scripts.pory"
EventScript_HeadbuttTree:
# 690 "data/scripts/field_move_scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 691 "data/scripts/field_move_scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 692 "data/scripts/field_move_scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 693 "data/scripts/field_move_scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 694 "data/scripts/field_move_scripts.pory"
	special ShakeCamera
# 695 "data/scripts/field_move_scripts.pory"
	waitstate
# 696 "data/scripts/field_move_scripts.pory"
	special HeadbuttWildEncounter
# 697 "data/scripts/field_move_scripts.pory"
	compare VAR_RESULT, FALSE
# 698 "data/scripts/field_move_scripts.pory"
	goto_if_eq EventScript_EndHeadbutt
# 699 "data/scripts/field_move_scripts.pory"
	waitstate
# 700 "data/scripts/field_move_scripts.pory"
EventScript_EndHeadbutt:
# 701 "data/scripts/field_move_scripts.pory"
	releaseall
# 702 "data/scripts/field_move_scripts.pory"
	end
# 703 "data/scripts/field_move_scripts.pory"

# 704 "data/scripts/field_move_scripts.pory"
Text_WantToHeadbutt:
# 705 "data/scripts/field_move_scripts.pory"
	.string "It's a moderated sized tree.\n"
# 706 "data/scripts/field_move_scripts.pory"
	.string "Would you like to use HEADBUTT?$"
# 707 "data/scripts/field_move_scripts.pory"

# 708 "data/scripts/field_move_scripts.pory"
Text_CantHeadbuttTree:
# 709 "data/scripts/field_move_scripts.pory"
	.string "There's a large, formidable tree.\n"
# 710 "data/scripts/field_move_scripts.pory"
	.string "It looks like it can be headbutted!$"
