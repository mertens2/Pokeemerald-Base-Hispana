# 1 "data/maps/Route128/scripts.pory"

# 2 "data/maps/Route128/scripts.pory"
Route128_MapScripts::
# 3 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route128_OnTransition
# 4 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route128_OnFrame
# 5 "data/maps/Route128/scripts.pory"
	.byte 0
# 6 "data/maps/Route128/scripts.pory"

# 7 "data/maps/Route128/scripts.pory"
Route128_OnTransition:
# 8 "data/maps/Route128/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 9 "data/maps/Route128/scripts.pory"
	end
# 10 "data/maps/Route128/scripts.pory"

# 11 "data/maps/Route128/scripts.pory"
Route128_OnFrame:
# 12 "data/maps/Route128/scripts.pory"
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedScene
# 13 "data/maps/Route128/scripts.pory"
	.2byte 0
# 14 "data/maps/Route128/scripts.pory"

# 15 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene::
# 16 "data/maps/Route128/scripts.pory"
	lockall
# 17 "data/maps/Route128/scripts.pory"
	delay 20
# 18 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieLookAround
# 19 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieWhatHappened, MSGBOX_DEFAULT
# 21 "data/maps/Route128/scripts.pory"
	closemessage
# 22 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieBackUp
# 23 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieIOnlyWanted, MSGBOX_DEFAULT
# 25 "data/maps/Route128/scripts.pory"
	closemessage
# 26 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieApproachArchie
# 27 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 29 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieDoYouUnderstandNow, MSGBOX_DEFAULT
# 31 "data/maps/Route128/scripts.pory"
	closemessage
# 32 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieApproachPlayer
# 33 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieResposibilityFallsToArchieAndMe, MSGBOX_DEFAULT
# 37 "data/maps/Route128/scripts.pory"
	closemessage
# 38 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieRunLeft
# 39 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 40 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieWalkLeft
# 41 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieThisDefiesBelief, MSGBOX_DEFAULT
# 43 "data/maps/Route128/scripts.pory"
	closemessage
# 44 "data/maps/Route128/scripts.pory"
	delay 40
# 45 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieExit
# 46 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieExit
# 47 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_MAXIE
# 49 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_ARCHIE
# 50 "data/maps/Route128/scripts.pory"
	delay 100
# 51 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 52 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 53 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 54 "data/maps/Route128/scripts.pory"
	addobject LOCALID_ROUTE128_STEVEN
# 55 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Route128_Movement_StevenApproachPlayer
# 56 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 58 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWhatIsHappening, MSGBOX_DEFAULT
# 60 "data/maps/Route128/scripts.pory"
	closemessage
# 61 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Route128_Movement_StevenWalkUp
# 62 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 63 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWholeWorldWillDrown, MSGBOX_DEFAULT
# 65 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 66 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenImGoingToSootopolis, MSGBOX_DEFAULT
# 68 "data/maps/Route128/scripts.pory"
	closemessage
# 69 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 70 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route128/scripts.pory"
	delay 50
# 72 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 73 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 74 "data/maps/Route128/scripts.pory"
	delay 15
# 75 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_STEVEN
# 76 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 77 "data/maps/Route128/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 78 "data/maps/Route128/scripts.pory"
	setvar VAR_ROUTE128_STATE, 2
# 79 "data/maps/Route128/scripts.pory"
	releaseall
# 80 "data/maps/Route128/scripts.pory"
	end
# 81 "data/maps/Route128/scripts.pory"

# 82 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenWalkUp:
# 83 "data/maps/Route128/scripts.pory"
	walk_up
# 84 "data/maps/Route128/scripts.pory"
	step_end
# 85 "data/maps/Route128/scripts.pory"

# 86 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenApproachPlayer:
# 87 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 88 "data/maps/Route128/scripts.pory"
	step_end
# 89 "data/maps/Route128/scripts.pory"

# 90 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieLookAround:
# 91 "data/maps/Route128/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_left
# 93 "data/maps/Route128/scripts.pory"
	delay_16
# 94 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 95 "data/maps/Route128/scripts.pory"
	delay_16
# 96 "data/maps/Route128/scripts.pory"
	delay_16
# 97 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 98 "data/maps/Route128/scripts.pory"
	step_end
# 99 "data/maps/Route128/scripts.pory"

# 100 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieBackUp:
# 101 "data/maps/Route128/scripts.pory"
	lock_facing_direction
# 102 "data/maps/Route128/scripts.pory"
	walk_slow_up
# 103 "data/maps/Route128/scripts.pory"
	delay_16
# 104 "data/maps/Route128/scripts.pory"
	unlock_facing_direction
# 105 "data/maps/Route128/scripts.pory"
	step_end
# 106 "data/maps/Route128/scripts.pory"

# 107 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieRunLeft:
# 108 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 109 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 110 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 111 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 112 "data/maps/Route128/scripts.pory"
	step_end
# 113 "data/maps/Route128/scripts.pory"

# 114 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieExit:
# 115 "data/maps/Route128/scripts.pory"
	delay_16
# 116 "data/maps/Route128/scripts.pory"
	delay_16
# 117 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 118 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 120 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 121 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 122 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 123 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 124 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 125 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 126 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 127 "data/maps/Route128/scripts.pory"
	step_end
# 128 "data/maps/Route128/scripts.pory"

# 129 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieWalkLeft:
# 130 "data/maps/Route128/scripts.pory"
	walk_left
# 131 "data/maps/Route128/scripts.pory"
	walk_left
# 132 "data/maps/Route128/scripts.pory"
	delay_8
# 133 "data/maps/Route128/scripts.pory"
	delay_4
# 134 "data/maps/Route128/scripts.pory"
	step_end
# 135 "data/maps/Route128/scripts.pory"

# 136 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachArchie:
# 137 "data/maps/Route128/scripts.pory"
	walk_left
# 138 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 139 "data/maps/Route128/scripts.pory"
	step_end
# 140 "data/maps/Route128/scripts.pory"

# 141 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieExit:
# 142 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 143 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 144 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 145 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 146 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 147 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 148 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 149 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 150 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 151 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 152 "data/maps/Route128/scripts.pory"
	step_end
# 153 "data/maps/Route128/scripts.pory"

# 154 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachPlayer:
# 155 "data/maps/Route128/scripts.pory"
	walk_right
# 156 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 157 "data/maps/Route128/scripts.pory"
	step_end
# 158 "data/maps/Route128/scripts.pory"

# 159 "data/maps/Route128/scripts.pory"
Route128_EventScript_Isaiah::
# 160 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ISAIAH_1, Route128_Text_IsaiahIntro, Route128_Text_IsaiahDefeat, Route128_EventScript_RegisterIsaiah
# 161 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 162 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchIsaiah
# 163 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostBattle, MSGBOX_DEFAULT
# 164 "data/maps/Route128/scripts.pory"
	release
# 165 "data/maps/Route128/scripts.pory"
	end
# 166 "data/maps/Route128/scripts.pory"

# 167 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterIsaiah::
# 168 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 169 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahRegister, MSGBOX_DEFAULT
# 171 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_ISAIAH_1
# 172 "data/maps/Route128/scripts.pory"
	release
# 173 "data/maps/Route128/scripts.pory"
	end
# 174 "data/maps/Route128/scripts.pory"

# 175 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchIsaiah::
# 176 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_ISAIAH_1, Route128_Text_IsaiahRematchIntro, Route128_Text_IsaiahRematchDefeat
# 177 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostRematch, MSGBOX_AUTOCLOSE
# 178 "data/maps/Route128/scripts.pory"
	end
# 179 "data/maps/Route128/scripts.pory"

# 180 "data/maps/Route128/scripts.pory"
Route128_EventScript_Katelyn::
# 181 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_KATELYN_1, Route128_Text_KatelynIntro, Route128_Text_KatelynDefeat, Route128_EventScript_RegisterKatelyn
# 182 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 183 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchKatelyn
# 184 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostBattle, MSGBOX_DEFAULT
# 185 "data/maps/Route128/scripts.pory"
	release
# 186 "data/maps/Route128/scripts.pory"
	end
# 187 "data/maps/Route128/scripts.pory"

# 188 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterKatelyn::
# 189 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 190 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 191 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynRegister, MSGBOX_DEFAULT
# 192 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_KATELYN_1
# 193 "data/maps/Route128/scripts.pory"
	release
# 194 "data/maps/Route128/scripts.pory"
	end
# 195 "data/maps/Route128/scripts.pory"

# 196 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchKatelyn::
# 197 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_KATELYN_1, Route128_Text_KatelynRematchIntro, Route128_Text_KatelynRematchDefeat
# 198 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostRematch, MSGBOX_AUTOCLOSE
# 199 "data/maps/Route128/scripts.pory"
	end
# 200 "data/maps/Route128/scripts.pory"

# 201 "data/maps/Route128/scripts.pory"
Route128_EventScript_Alexa::
# 202 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
# 203 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/Route128/scripts.pory"
	end
# 205 "data/maps/Route128/scripts.pory"

# 206 "data/maps/Route128/scripts.pory"
Route128_EventScript_Ruben::
# 207 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_RUBEN, Route128_Text_RubenIntro, Route128_Text_RubenDefeat
# 208 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/Route128/scripts.pory"
	end
# 210 "data/maps/Route128/scripts.pory"

# 211 "data/maps/Route128/scripts.pory"
Route128_EventScript_Wayne::
# 212 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, Route128_Text_WayneIntro, Route128_Text_WayneDefeat
# 213 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/Route128/scripts.pory"
	end
# 215 "data/maps/Route128/scripts.pory"

# 216 "data/maps/Route128/scripts.pory"
Route128_EventScript_Harrison::
# 217 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, Route128_Text_HarrisonIntro, Route128_Text_HarrisonDefeat
# 218 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
# 219 "data/maps/Route128/scripts.pory"
	end
# 220 "data/maps/Route128/scripts.pory"

# 221 "data/maps/Route128/scripts.pory"
Route128_EventScript_Carlee::
# 222 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_CARLEE, Route128_Text_CarleeIntro, Route128_Text_CarleeDefeat
# 223 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/Route128/scripts.pory"
	end
# 225 "data/maps/Route128/scripts.pory"

# 226 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieWhatHappened:
# 227 "data/maps/Route128/scripts.pory"
	.string "AQUILES: ¿Qué ha pasado?\n"
# 228 "data/maps/Route128/scripts.pory"
	.string "¿Qué significa todo esto…?\p"
# 229 "data/maps/Route128/scripts.pory"
	.string "¿Me he…? ¿Me he equivocado en algo?$"
# 230 "data/maps/Route128/scripts.pory"

# 231 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieIOnlyWanted:
# 232 "data/maps/Route128/scripts.pory"
	.string "Yo…\n"
# 233 "data/maps/Route128/scripts.pory"
	.string "Yo sólo quería…$"
# 234 "data/maps/Route128/scripts.pory"

# 235 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieDoYouUnderstandNow:
# 236 "data/maps/Route128/scripts.pory"
	.string "MAGNO: ¿Ahora lo entiendes,\n"
# 237 "data/maps/Route128/scripts.pory"
	.string "AQUILES?\p"
# 238 "data/maps/Route128/scripts.pory"
	.string "¿Ves el enorme desastre en el que\n"
# 239 "data/maps/Route128/scripts.pory"
	.string "se ha convertido tu sueño?\p"
# 240 "data/maps/Route128/scripts.pory"
	.string "¡Tenemos que darnos prisa!\n"
# 241 "data/maps/Route128/scripts.pory"
	.string "¡Hay que actuar antes de que\l"
# 242 "data/maps/Route128/scripts.pory"
	.string "la situación se descontrole del todo!$"
# 243 "data/maps/Route128/scripts.pory"

# 244 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieResposibilityFallsToArchieAndMe:
# 245 "data/maps/Route128/scripts.pory"
	.string "MAGNO: {PLAYER}, no digas nada.\p"
# 246 "data/maps/Route128/scripts.pory"
	.string "Sé que no tengo derecho a\n"
# 247 "data/maps/Route128/scripts.pory"
	.string "criticar a AQUILES…\p"
# 248 "data/maps/Route128/scripts.pory"
	.string "Pero, tal y como están las cosas, dudo\n"
# 249 "data/maps/Route128/scripts.pory"
	.string "que los humanos podamos hacer\l"
# 250 "data/maps/Route128/scripts.pory"
	.string "nada para resolver este lío.\p"
# 251 "data/maps/Route128/scripts.pory"
	.string "Y tampoco podemos quedarnos de\n"
# 252 "data/maps/Route128/scripts.pory"
	.string "brazos cruzados sin hacer nada.\p"
# 253 "data/maps/Route128/scripts.pory"
	.string "La responsabilidad de poner fin a todo\n"
# 254 "data/maps/Route128/scripts.pory"
	.string "esto es de AQUILES y mía…$"
# 255 "data/maps/Route128/scripts.pory"

# 256 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieThisDefiesBelief:
# 257 "data/maps/Route128/scripts.pory"
	.string "MAGNO: Esto desafía toda lógica…\p"
# 258 "data/maps/Route128/scripts.pory"
	.string "Un POKéMON más antiguo que\n"
# 259 "data/maps/Route128/scripts.pory"
	.string "andar de pie…\p"
# 260 "data/maps/Route128/scripts.pory"
	.string "Su fuerza es indescriptible…\n"
# 261 "data/maps/Route128/scripts.pory"
	.string "Ha desequilibrado la naturaleza…$"
# 262 "data/maps/Route128/scripts.pory"

# 263 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWhatIsHappening:
# 264 "data/maps/Route128/scripts.pory"
	.string "MÁXIMO: ¡{PLAYER}{KUN}!\n"
# 265 "data/maps/Route128/scripts.pory"
	.string "¿Qué pasa aquí?$"
# 266 "data/maps/Route128/scripts.pory"

# 267 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWholeWorldWillDrown:
# 268 "data/maps/Route128/scripts.pory"
	.string "Esto es terrible…\p"
# 269 "data/maps/Route128/scripts.pory"
	.string "Cuando se acabó la asfixiante ola de\n"
# 270 "data/maps/Route128/scripts.pory"
	.string "calor, comenzó a caer este diluvio.\p"
# 271 "data/maps/Route128/scripts.pory"
	.string "Si no para, todo HOENN…\n"
# 272 "data/maps/Route128/scripts.pory"
	.string "No, todo el mundo quedará inundado.\p"
# 273 "data/maps/Route128/scripts.pory"
	.string "Esa gigantesca nube de lluvia parece\n"
# 274 "data/maps/Route128/scripts.pory"
	.string "proceder de ARRECÍPOLIS…\p"
# 275 "data/maps/Route128/scripts.pory"
	.string "¿Qué estará ocurriendo allí?\p"
# 276 "data/maps/Route128/scripts.pory"
	.string "No perdamos el tiempo hablando…\n"
# 277 "data/maps/Route128/scripts.pory"
	.string "La respuesta está en ARRECÍPOLIS…$"
# 278 "data/maps/Route128/scripts.pory"

# 279 "data/maps/Route128/scripts.pory"
Route128_Text_StevenImGoingToSootopolis:
# 280 "data/maps/Route128/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 281 "data/maps/Route128/scripts.pory"
	.string "No sé qué piensas hacer al respecto,\l"
# 282 "data/maps/Route128/scripts.pory"
	.string "pero espero que no sea una locura.\p"
# 283 "data/maps/Route128/scripts.pory"
	.string "Bueno, pasemos a la acción.\n"
# 284 "data/maps/Route128/scripts.pory"
	.string "Me voy a ARRECÍPOLIS.$"
