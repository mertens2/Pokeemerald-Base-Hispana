# 1 "data/maps/Route116/scripts.pory"

# 2 "data/maps/Route116/scripts.pory"
.set LOCALID_BRINEY, 11
# 3 "data/maps/Route116/scripts.pory"
.set LOCALID_WANDAS_BF_OUTSIDE, 21
# 4 "data/maps/Route116/scripts.pory"

# 5 "data/maps/Route116/scripts.pory"
Route116_MapScripts::
# 6 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 7 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 8 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_OnFrame
# 9 "data/maps/Route116/scripts.pory"
	.byte 0
# 10 "data/maps/Route116/scripts.pory"

# 11 "data/maps/Route116/scripts.pory"
Route116_OnTransition:
# 12 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_SetWandasBoyfriendPos
# 13 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 14 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_StartGroudonWeather
# 15 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_StartGroudonWeather
# 16 "data/maps/Route116/scripts.pory"
	end
# 17 "data/maps/Route116/scripts.pory"

# 18 "data/maps/Route116/scripts.pory"
Route116_EventScript_SetWandasBoyfriendPos::
# 19 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_WANDAS_BF_OUTSIDE, 38, 10
# 20 "data/maps/Route116/scripts.pory"
	return
# 21 "data/maps/Route116/scripts.pory"

# 22 "data/maps/Route116/scripts.pory"
Route116_OnLoad:
# 23 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute116North
# 24 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute116South
# 25 "data/maps/Route116/scripts.pory"
	end
# 26 "data/maps/Route116/scripts.pory"

# 27 "data/maps/Route116/scripts.pory"
Route116_OnFrame:
# 28 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 29 "data/maps/Route116/scripts.pory"
	.2byte 0
# 30 "data/maps/Route116/scripts.pory"

# 31 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend::
# 32 "data/maps/Route116/scripts.pory"
	lock
# 33 "data/maps/Route116/scripts.pory"
	faceplayer
# 34 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_BoyfriendGruntLeftTunnel
# 35 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_BoyfriendGruntInTunnel
# 36 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 37 "data/maps/Route116/scripts.pory"
	release
# 38 "data/maps/Route116/scripts.pory"
	end
# 39 "data/maps/Route116/scripts.pory"

# 40 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel::
# 41 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 42 "data/maps/Route116/scripts.pory"
	release
# 43 "data/maps/Route116/scripts.pory"
	end
# 44 "data/maps/Route116/scripts.pory"

# 45 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel::
# 46 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 47 "data/maps/Route116/scripts.pory"
	release
# 48 "data/maps/Route116/scripts.pory"
	end
# 49 "data/maps/Route116/scripts.pory"

# 50 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee::
# 51 "data/maps/Route116/scripts.pory"
	lock
# 52 "data/maps/Route116/scripts.pory"
	faceplayer
# 53 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveRepeatBallAgain
# 54 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 55 "data/maps/Route116/scripts.pory"
	namebox Stern
# 56 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation2, MSGBOX_DEFAULT
# 57 "data/maps/Route116/scripts.pory"
	hidenamebox
# 58 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 59 "data/maps/Route116/scripts.pory"
	end
# 60 "data/maps/Route116/scripts.pory"

# 61 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall::
# 62 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 63 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 64 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_NoRoomForRepeatBall
# 65 "data/maps/Route116/scripts.pory"
	namebox Stern
# 66 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 67 "data/maps/Route116/scripts.pory"
	closemessage
# 68 "data/maps/Route116/scripts.pory"
	hidenamebox
# 69 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_DevonEmployeeExit
# 70 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_DevonEmployeeExit
# 71 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_DevonEmployeeExit
# 72 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_DevonEmployeeExitEast
# 73 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 74 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 75 "data/maps/Route116/scripts.pory"
	release
# 76 "data/maps/Route116/scripts.pory"
	end
# 77 "data/maps/Route116/scripts.pory"

# 78 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit::
# 79 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 80 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route116/scripts.pory"
	return
# 82 "data/maps/Route116/scripts.pory"

# 83 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast::
# 84 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 85 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route116/scripts.pory"
	return
# 87 "data/maps/Route116/scripts.pory"

# 88 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveRepeatBallAgain::
# 89 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 90 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 91 "data/maps/Route116/scripts.pory"
	end
# 92 "data/maps/Route116/scripts.pory"

# 93 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForRepeatBall::
# 94 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 95 "data/maps/Route116/scripts.pory"
	release
# 96 "data/maps/Route116/scripts.pory"
	end
# 97 "data/maps/Route116/scripts.pory"

# 98 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
# 99 "data/maps/Route116/scripts.pory"
	walk_left
# 100 "data/maps/Route116/scripts.pory"
	walk_left
# 101 "data/maps/Route116/scripts.pory"
	walk_left
# 102 "data/maps/Route116/scripts.pory"
	walk_left
# 103 "data/maps/Route116/scripts.pory"
	walk_left
# 104 "data/maps/Route116/scripts.pory"
	walk_left
# 105 "data/maps/Route116/scripts.pory"
	walk_left
# 106 "data/maps/Route116/scripts.pory"
	walk_left
# 107 "data/maps/Route116/scripts.pory"
	step_end
# 108 "data/maps/Route116/scripts.pory"

# 109 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 110 "data/maps/Route116/scripts.pory"
	walk_down
# 111 "data/maps/Route116/scripts.pory"
	walk_left
# 112 "data/maps/Route116/scripts.pory"
	walk_left
# 113 "data/maps/Route116/scripts.pory"
	walk_left
# 114 "data/maps/Route116/scripts.pory"
	walk_left
# 115 "data/maps/Route116/scripts.pory"
	walk_left
# 116 "data/maps/Route116/scripts.pory"
	walk_left
# 117 "data/maps/Route116/scripts.pory"
	walk_left
# 118 "data/maps/Route116/scripts.pory"
	walk_left
# 119 "data/maps/Route116/scripts.pory"
	walk_left
# 120 "data/maps/Route116/scripts.pory"
	step_end
# 121 "data/maps/Route116/scripts.pory"

# 122 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro::
# 123 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 124 "data/maps/Route116/scripts.pory"
	end
# 125 "data/maps/Route116/scripts.pory"

# 126 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign::
# 127 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 128 "data/maps/Route116/scripts.pory"
	end
# 129 "data/maps/Route116/scripts.pory"

# 130 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign::
# 131 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 132 "data/maps/Route116/scripts.pory"
	end
# 133 "data/maps/Route116/scripts.pory"

# 134 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution::
# 135 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 136 "data/maps/Route116/scripts.pory"
	end
# 137 "data/maps/Route116/scripts.pory"

# 138 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets::
# 139 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 140 "data/maps/Route116/scripts.pory"
	end
# 141 "data/maps/Route116/scripts.pory"

# 142 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney::
# 143 "data/maps/Route116/scripts.pory"
	lock
# 144 "data/maps/Route116/scripts.pory"
	faceplayer
# 145 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 146 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 147 "data/maps/Route116/scripts.pory"
	release
# 148 "data/maps/Route116/scripts.pory"
	end
# 149 "data/maps/Route116/scripts.pory"

# 150 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger::
# 151 "data/maps/Route116/scripts.pory"
	lockall
# 152 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 153 "data/maps/Route116/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 154 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 155 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 156 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 157 "data/maps/Route116/scripts.pory"
	releaseall
# 158 "data/maps/Route116/scripts.pory"
	end
# 159 "data/maps/Route116/scripts.pory"

# 160 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan::
# 161 "data/maps/Route116/scripts.pory"
	lock
# 162 "data/maps/Route116/scripts.pory"
	faceplayer
# 163 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 164 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_PlayerHasThem
# 165 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 166 "data/maps/Route116/scripts.pory"
	release
# 167 "data/maps/Route116/scripts.pory"
	end
# 168 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManDone::
# 169 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GlassesThanks
# 170 "data/maps/Route116/scripts.pory"
	release
# 171 "data/maps/Route116/scripts.pory"
	end
# 172 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasThem::
# 173 "data/maps/Route116/scripts.pory"
	removeitem ITEM_BLACK_GLASSES
# 174 "data/maps/Route116/scripts.pory"
	playse SE_PIN
# 175 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 176 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 177 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_HasThem
# 178 "data/maps/Route116/scripts.pory"
	addvar VAR_WISHES_FUFILLED, 1
# 179 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceAwayPlayer
# 180 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 181 "data/maps/Route116/scripts.pory"
	pike_flashscreen
# 182 "data/maps/Route116/scripts.pory"
	waitstate
# 183 "data/maps/Route116/scripts.pory"
	call Script_Wishes
# 184 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 185 "data/maps/Route116/scripts.pory"
	release
# 186 "data/maps/Route116/scripts.pory"
	end
# 187 "data/maps/Route116/scripts.pory"

# 188 "data/maps/Route116/scripts.pory"

# 189 "data/maps/Route116/scripts.pory"
Route116_Text_HasThem:
# 190 "data/maps/Route116/scripts.pory"
	.string "¡L-l-los!\n¡Los tienes!\p¡Gracias!$"
# 191 "data/maps/Route116/scripts.pory"

# 192 "data/maps/Route116/scripts.pory"

# 193 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit::
# 194 "data/maps/Route116/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_DROPPED_GLASSES_MAN
# 195 "data/maps/Route116/scripts.pory"
	delay 20
# 196 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_GlassesManExitNormal
# 197 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_GlassesManExitNormal
# 198 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_GlassesManExitNormal
# 199 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_GlassesManExitEast
# 200 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 201 "data/maps/Route116/scripts.pory"
	release
# 202 "data/maps/Route116/scripts.pory"
	end
# 203 "data/maps/Route116/scripts.pory"

# 204 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal::
# 205 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 206 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 207 "data/maps/Route116/scripts.pory"
	return
# 208 "data/maps/Route116/scripts.pory"

# 209 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast::
# 210 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 211 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route116/scripts.pory"
	return
# 213 "data/maps/Route116/scripts.pory"

# 214 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
# 215 "data/maps/Route116/scripts.pory"
	walk_left
# 216 "data/maps/Route116/scripts.pory"
	walk_left
# 217 "data/maps/Route116/scripts.pory"
	walk_left
# 218 "data/maps/Route116/scripts.pory"
	walk_left
# 219 "data/maps/Route116/scripts.pory"
	walk_left
# 220 "data/maps/Route116/scripts.pory"
	walk_left
# 221 "data/maps/Route116/scripts.pory"
	walk_left
# 222 "data/maps/Route116/scripts.pory"
	walk_left
# 223 "data/maps/Route116/scripts.pory"
	walk_left
# 224 "data/maps/Route116/scripts.pory"
	step_end
# 225 "data/maps/Route116/scripts.pory"

# 226 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 227 "data/maps/Route116/scripts.pory"
	walk_up
# 228 "data/maps/Route116/scripts.pory"
	walk_left
# 229 "data/maps/Route116/scripts.pory"
	walk_left
# 230 "data/maps/Route116/scripts.pory"
	walk_left
# 231 "data/maps/Route116/scripts.pory"
	walk_left
# 232 "data/maps/Route116/scripts.pory"
	walk_left
# 233 "data/maps/Route116/scripts.pory"
	walk_left
# 234 "data/maps/Route116/scripts.pory"
	walk_left
# 235 "data/maps/Route116/scripts.pory"
	walk_left
# 236 "data/maps/Route116/scripts.pory"
	walk_left
# 237 "data/maps/Route116/scripts.pory"
	step_end
# 238 "data/maps/Route116/scripts.pory"

# 239 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey::
# 240 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 241 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 242 "data/maps/Route116/scripts.pory"
	end
# 243 "data/maps/Route116/scripts.pory"

# 244 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose::
# 245 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 246 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 247 "data/maps/Route116/scripts.pory"
	end
# 248 "data/maps/Route116/scripts.pory"

# 249 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark::
# 250 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 251 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 252 "data/maps/Route116/scripts.pory"
	end
# 253 "data/maps/Route116/scripts.pory"

# 254 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice::
# 255 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 256 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 257 "data/maps/Route116/scripts.pory"
	end
# 258 "data/maps/Route116/scripts.pory"

# 259 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen::
# 260 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
# 261 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 262 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchKaren
# 263 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 264 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 265 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterKaren
# 266 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 267 "data/maps/Route116/scripts.pory"
	release
# 268 "data/maps/Route116/scripts.pory"
	end
# 269 "data/maps/Route116/scripts.pory"

# 270 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle::
# 271 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
# 272 "data/maps/Route116/scripts.pory"
	release
# 273 "data/maps/Route116/scripts.pory"
	end
# 274 "data/maps/Route116/scripts.pory"

# 275 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle::
# 276 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 277 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 278 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 279 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 280 "data/maps/Route116/scripts.pory"
	release
# 281 "data/maps/Route116/scripts.pory"
	end
# 282 "data/maps/Route116/scripts.pory"

# 283 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren::
# 284 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
# 285 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 286 "data/maps/Route116/scripts.pory"
	release
# 287 "data/maps/Route116/scripts.pory"
	end
# 288 "data/maps/Route116/scripts.pory"

# 289 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren::
# 290 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 291 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 292 "data/maps/Route116/scripts.pory"
	release
# 293 "data/maps/Route116/scripts.pory"
	end
# 294 "data/maps/Route116/scripts.pory"

# 295 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren::
# 296 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 297 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 298 "data/maps/Route116/scripts.pory"
	end
# 299 "data/maps/Route116/scripts.pory"

# 300 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah::
# 301 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 302 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 303 "data/maps/Route116/scripts.pory"
	end
# 304 "data/maps/Route116/scripts.pory"

# 305 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson::
# 306 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 307 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 308 "data/maps/Route116/scripts.pory"
	end
# 309 "data/maps/Route116/scripts.pory"

# 310 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan::
# 311 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 312 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 313 "data/maps/Route116/scripts.pory"
	end
# 314 "data/maps/Route116/scripts.pory"

# 315 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson::
# 316 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 317 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route116/scripts.pory"
	end
# 319 "data/maps/Route116/scripts.pory"

# 320 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko:
# 321 "data/maps/Route116/scripts.pory"
	.string "¿Qué voy a hacer ahora?\n¡Se llevaron a mi Peeko!\p"
# 322 "data/maps/Route116/scripts.pory"
	.string "¡BUUUAAAAAA! ¡PEEEEEKOOOOOO!$"
# 323 "data/maps/Route116/scripts.pory"

# 324 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel:
# 325 "data/maps/Route116/scripts.pory"
	.string "Nnn… ¡Roar!\p"
# 326 "data/maps/Route116/scripts.pory"
	.string "¡Quiero cavar! ¡AAAARRGGHH!$"
# 327 "data/maps/Route116/scripts.pory"

# 328 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
# 329 "data/maps/Route116/scripts.pory"
	.string "Nnn… ¡Roar!\n"
# 330 "data/maps/Route116/scripts.pory"
	.string "¿Y ahora qué?\p"
# 331 "data/maps/Route116/scripts.pory"
	.string "Estaba cavando en ese túnel\ncon nada más que mis grandes\lmúsculos cuando un estúpido me\ldijo que me fuera y me llevara\lmis músculos conmigo.\p"
# 332 "data/maps/Route116/scripts.pory"
	.string "¡GROOAAARRR!\n¡Odio a ese idiota!$"
# 333 "data/maps/Route116/scripts.pory"

# 334 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel:
# 335 "data/maps/Route116/scripts.pory"
	.string "Nnn… ¡Roar!\p"
# 336 "data/maps/Route116/scripts.pory"
	.string "¡Ese idiota dijo que si tenía\ncuidado podía usar mis\lhermosos músculos para cavar!\p"
# 337 "data/maps/Route116/scripts.pory"
	.string "¡Nadie había reconocido lo\nmucho que me esforcé en tener\lmis músculos así de tonificados!\p"
# 338 "data/maps/Route116/scripts.pory"
	.string "¡Me hizo sentir cosas!\n¡Debo habarle a mi novia de\llo mucho que me gusta él!\p¡GROOOAARRR!$"
# 339 "data/maps/Route116/scripts.pory"

# 340 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation:
# 341 "data/maps/Route116/scripts.pory"
	.string "¡Ah, me ayudaste de nuevo!\n¡Déjame entonces presentarme!\p¡Soy {COLOR BLUE}El Capitán Stern{COLOR DARK_GRAY}, aunque\nnadie sabe esto aparte de tí ahora.$"
# 342 "data/maps/Route116/scripts.pory"
	
# 343 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation2:
# 344 "data/maps/Route116/scripts.pory"
	.string "Te pedirán que me lleves un paquete a\nSlaterport luego, porque yo\lusualmente estoy allí.\pEsto es porque quiero asegurarme\nde que el paquete que me entregarán\les el que yo encargué.\p"
# 345 "data/maps/Route116/scripts.pory"
	.string "Pero bueno, toma esto:$"
# 346 "data/maps/Route116/scripts.pory"

# 347 "data/maps/Route116/scripts.pory"

# 348 "data/maps/Route116/scripts.pory"
Route116_Text_GlassesThanks:
# 349 "data/maps/Route116/scripts.pory"
	.string "¡Muchísimas gracias!$"
# 350 "data/maps/Route116/scripts.pory"

# 351 "data/maps/Route116/scripts.pory"

# 352 "data/maps/Route116/scripts.pory"
Route116_Text_NewBallAvailableAtMart:
# 353 "data/maps/Route116/scripts.pory"
	.string "¡Hasta luego!$"
# 354 "data/maps/Route116/scripts.pory"

# 355 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked:
# 356 "data/maps/Route116/scripts.pory"
	.string "Oh, no hay espacio.$"
# 357 "data/maps/Route116/scripts.pory"

# 358 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation:
# 359 "data/maps/Route116/scripts.pory"
	.string "Esto es porque quiero asegurarme\nde que el paquete que me entregarán\les el que yo encargué.\p"
# 360 "data/maps/Route116/scripts.pory"
	.string "Pero bueno, toma esto:$"
# 361 "data/maps/Route116/scripts.pory"

# 362 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses:
# 363 "data/maps/Route116/scripts.pory"
	.string "Mis lentes…\n"
# 364 "data/maps/Route116/scripts.pory"
	.string "¿Me ayudas a buscarlos?$"
# 365 "data/maps/Route116/scripts.pory"

# 366 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro:
# 367 "data/maps/Route116/scripts.pory"
	.string "RUTA 116\n"
# 368 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} CIUDAD RUSTBORO$"
# 369 "data/maps/Route116/scripts.pory"

# 370 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign:
# 371 "data/maps/Route116/scripts.pory"
	.string "TÚNEL RUSTURF\n"
# 372 "data/maps/Route116/scripts.pory"
	.string "“Uniendo a Rustboro y Verdanturf.\p"
# 373 "data/maps/Route116/scripts.pory"
	.string "El proyecto fue cancelado.”$"
# 374 "data/maps/Route116/scripts.pory"

# 375 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse:
# 376 "data/maps/Route116/scripts.pory"
	.string "LA CASA DEL CREA-TÚNELES$"
# 377 "data/maps/Route116/scripts.pory"

# 378 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution:
# 379 "data/maps/Route116/scripts.pory"
	.string "PISTAS PARA ENTRENADORES\p"
# 380 "data/maps/Route116/scripts.pory"
	.string "Las Máquinas Ocultas, o MOs,\nahora sólo requieren que tengas\luna medalla específica.\p"
# 381 "data/maps/Route116/scripts.pory"
	.string "¡No a los Escalvos MO!$"
# 382 "data/maps/Route116/scripts.pory"

# 383 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets:
# 384 "data/maps/Route116/scripts.pory"
	.string "PISTAS PARA ENTRENADORES\p"
# 385 "data/maps/Route116/scripts.pory"
	.string "Puedes ver quiénes aprenden\ncada MT o MO en el Estuche MT.$"
