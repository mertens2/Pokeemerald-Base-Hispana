# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 2
# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_MapScripts::
# 152 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_OnWarp
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_OnFrame
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.byte 0
# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnTransition:
# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call_if_eq VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos::
# 162 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 3, 2
# 163 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	return
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnWarp:
# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast
# 168 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast::
# 171 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnFrame:
# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 177 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 178 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
# 192 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 195 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 201 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis, MSGBOX_DEFAULT
# 202 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 203 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 204 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 209 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
# 212 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 213 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 214 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 215 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 219 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 220 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 221 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 223 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 224 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_Unused:
# 225 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 227 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 228 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 229 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 230 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 233 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 234 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 236 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 237 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 238 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 239 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 240 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 241 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 244 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 246 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 248 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
# 251 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 252 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
# 254 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 255 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 256 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 257 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 259 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 260 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 261 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 262 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 263 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
# 265 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 267 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 268 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 269 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 271 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 272 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 273 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 274 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 277 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 278 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 280 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 281 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 282 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 283 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 284 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 285 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 287 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 288 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 290 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 291 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
# 292 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 293 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 294 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 295 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
# 297 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 298 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 299 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 300 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 301 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 302 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 303 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
# 304 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
# 305 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 306 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 307 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 308 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 309 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 310 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 311 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
# 312 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 313 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_EXP_SHARE, 12
# 314 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 315 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 316 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
# 317 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 318 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 319 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 320 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 321 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 322 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 323 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
# 324 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
# 325 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 326 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 327 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 328 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 329 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 330 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 331 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee::
# 332 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 333 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 334 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
# 335 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
# 336 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 337 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 338 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 339 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
# 340 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
# 341 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 342 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 343 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 344 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 345 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 346 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end

RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor::
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Hola, soy el Presidente de Devon.\p"
	.string "¡He escuchado mucho de ti!\n"
	.string "Salvaste la compañía dos veces, ¡En\l"
	.string "un día!\p"
	.string "Mi hijo, Steven, está en Ciudad Dewford,\n"
	.string "cruzando el mar.\p"
	.string "Y ya que vas de camino, pensé que\n"
	.string "podrías llevarle esta carta.$"

RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis::
# 19 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Cuando lo hagas,\n"
	.string "¡Ven y te recompensaré!\p"
	.string "Por ahora, toma esto.$"

RustboroCity_DevonCorp_3F_Text_ReceivedPokenav::
# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} recibió un PokéNav.$"

RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp::
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Eso es un PokéNav.\p"
	.string "Es indispensable para cada\n"
	.string "entrenador.\p"
	.string "Además, escuché que esos criminales\n"
	.string "que derrotaste siguen andando\l"
	.string "sueltos.\p"
	.string "He visto y prescenciado de lo que son\n"
	.string "capaces.\p"
	.string "Te recomendaría no meterte con ellos.$"

RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare::
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¡Bueno, {PLAYER}, cuídate!$"

RustboroCity_DevonCorp_3F_Text_CountingOnYou::
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¡Cuento contigo!$"

RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter::
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "¿Le diste la carta?\p"
	.string "¡Espléndido!\p"
	.string "En ese caso, ¡Toma esto!$"

RustboroCity_DevonCorp_3F_Text_ExplainExpShare::
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Un Pokémon que sostenga el\n"
	.string "{COLOR GREEN}Repartir Experiencia{COLOR DARK_GRAY}, ganará,\l"
	.string "como su nombre lo indica,\l"
	.string "{COLOR GREEN}Puntos de Experiencia aún\l"
	.string "si no ha combatido{COLOR DARK_GRAY}.\p"
	.string "Y lo que es más,\n"
	.string "{COLOR GREEN}ganará el doble de Puntos de lo usual{COLOR DARK_GRAY},\l"
	.string "gracias a una reciente mejora.\p"
	.string "El efecto se apila con otros\n"
	.string "modificadores, por lo que,\l"
	.string "bajo el {COLOR GREEN}Modo de Entrenamiento{COLOR DARK_GRAY},\l"
	.string "ganarán 4 veces más Exp.\p"
	.string "¡Buena suerte con todo!$"

RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends::
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "La verdad, me he rodeado de\n"
	.string "tantas oportunidades laborales,\l"
	.string "que conceptos comunes y vagos como\l"
	.string "{COLOR GREEN}la moral en la ciencia{COLOR DARK_GRAY}\l"
	.string "han perdido su significado.\p"
	.string "Honestamente, pienso que si nos\n"
	.string "dejáramos llevar por “lo que está\l"
	.string "bien,”\l"
	.string "perderíamos de vista el progreso.\p"
	.string "Es mejor incomodar a un grupo\n"
	.string "menor molesto, que lidiar con\l"
	.string "la opresión y discomfort de muchos.$"

RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere::
# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Esta es la oficina del Presidente.\p"
	.string "Él es un hombre muy ocupado, tendré que\n"
	.string "preguntarle si tiene tiempo para\l"
	.string "atenderte.$"

RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe::
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "El Presidente está libre.\n"
	.string "Por favor, sígueme.$"

RustboroCity_DevonCorp_3F_Text_PleaseGoAhead::
# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Por favor, pase.$"

RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard::
# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "El Capitán Stern es reconocido\n"
	.string "mundialmente. Espero un día ser tan\l"
	.string "exitoso como él.$"

RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular::
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Fabricamos Pokéballs. Compra Pokéballs.$"

RustboroCity_DevonCorp_3F_Text_RareRocksDisplay::
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Es una colección de rocas raras.\n"
	.string "Una inscripción dice:\l"
	.string "“No te las comas otra vez, Steven.”\l"
	.string "y tiene una cara triste dibujada.$"
