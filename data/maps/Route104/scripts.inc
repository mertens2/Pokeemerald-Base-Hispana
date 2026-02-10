# 1 "data/maps/Route104/scripts.pory"

# 2 "data/maps/Route104/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 3 "data/maps/Route104/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 4 "data/maps/Route104/scripts.pory"
.set LOCALID_RIVAL, 34
# 5 "data/maps/Route104/scripts.pory"

# 6 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 7 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 8 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 9 "data/maps/Route104/scripts.pory"
	.byte 0
# 10 "data/maps/Route104/scripts.pory"

# 11 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 12 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 13 "data/maps/Route104/scripts.pory"
	.2byte 0
# 14 "data/maps/Route104/scripts.pory"

# 15 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 16 "data/maps/Route104/scripts.pory"
	lockall
# 17 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 18 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 19 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 21 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 22 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 23 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 24 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route104_Movement_BrineyExitBoat
# 25 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 27 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 28 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 29 "data/maps/Route104/scripts.pory"
	warp MAP_DEWFORD_TOWN, 19, 7
# 30 "data/maps/Route104/scripts.pory"
	end
# 31 "data/maps/Route104/scripts.pory"
	
# 32 "data/maps/Route104/scripts.pory"

# 33 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 34 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 35 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 36 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 37 "data/maps/Route104/scripts.pory"
	end
# 38 "data/maps/Route104/scripts.pory"

# 39 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 40 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 41 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 42 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 43 "data/maps/Route104/scripts.pory"
	return
# 44 "data/maps/Route104/scripts.pory"

# 45 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 46 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 47 "data/maps/Route104/scripts.pory"
	return
# 48 "data/maps/Route104/scripts.pory"

# 49 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 50 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 51 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 52 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 53 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 17, 52
# 54 "data/maps/Route104/scripts.pory"
	return
# 55 "data/maps/Route104/scripts.pory"

# 56 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 57 "data/maps/Route104/scripts.pory"
	return
# 58 "data/maps/Route104/scripts.pory"

# 59 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 60 "data/maps/Route104/scripts.pory"
	lockall
# 61 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 62 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 63 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 65 "data/maps/Route104/scripts.pory"

# 66 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 67 "data/maps/Route104/scripts.pory"
	lockall
# 68 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 69 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 70 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 71 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 72 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route104/scripts.pory"
	delay 10
# 74 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL
# 75 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 76 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 77 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 79 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route104/scripts.pory"
	delay 20
# 81 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 82 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 83 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 84 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 85 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 87 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 89 "data/maps/Route104/scripts.pory"

# 90 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 91 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 92 "data/maps/Route104/scripts.pory"
	checkplayergender
# 93 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 94 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 95 "data/maps/Route104/scripts.pory"
	return
# 96 "data/maps/Route104/scripts.pory"

# 97 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 98 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 99 "data/maps/Route104/scripts.pory"
	return
# 100 "data/maps/Route104/scripts.pory"

# 101 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 102 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 103 "data/maps/Route104/scripts.pory"
	return
# 104 "data/maps/Route104/scripts.pory"

# 105 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 106 "data/maps/Route104/scripts.pory"
	checkplayergender
# 107 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 108 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 109 "data/maps/Route104/scripts.pory"
	end
# 110 "data/maps/Route104/scripts.pory"

# 111 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 112 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 113 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 114 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 115 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 116 "data/maps/Route104/scripts.pory"
	closemessage
# 117 "data/maps/Route104/scripts.pory"
	delay 30
# 118 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 119 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 120 "data/maps/Route104/scripts.pory"
	waitfanfare
# 121 "data/maps/Route104/scripts.pory"
	closemessage
# 122 "data/maps/Route104/scripts.pory"
	delay 30
# 123 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 124 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 125 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 126 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 127 "data/maps/Route104/scripts.pory"
	closemessage
# 128 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 130 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 132 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_DEFAULT
# 133 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleMay
# 134 "data/maps/Route104/scripts.pory"
	releaseall
# 135 "data/maps/Route104/scripts.pory"
	end
# 136 "data/maps/Route104/scripts.pory"

# 137 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 138 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 139 "data/maps/Route104/scripts.pory"
	step_end
# 140 "data/maps/Route104/scripts.pory"

# 141 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 142 "data/maps/Route104/scripts.pory"
	walk_down
# 143 "data/maps/Route104/scripts.pory"
	face_right
# 144 "data/maps/Route104/scripts.pory"
	step_end
# 145 "data/maps/Route104/scripts.pory"

# 146 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 147 "data/maps/Route104/scripts.pory"
	delay_4
# 148 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 149 "data/maps/Route104/scripts.pory"
	step_end
# 150 "data/maps/Route104/scripts.pory"

# 151 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 152 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_NPC
# 153 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleMay
# 154 "data/maps/Route104/scripts.pory"
	releaseall
# 155 "data/maps/Route104/scripts.pory"
	end
# 156 "data/maps/Route104/scripts.pory"

# 157 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 158 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 159 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 160 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 161 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 162 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 163 "data/maps/Route104/scripts.pory"
	end
# 164 "data/maps/Route104/scripts.pory"

# 165 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 166 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 167 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 168 "data/maps/Route104/scripts.pory"
	releaseall
# 169 "data/maps/Route104/scripts.pory"
	end
# 170 "data/maps/Route104/scripts.pory"

# 171 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 172 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 173 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 174 "data/maps/Route104/scripts.pory"
	return
# 175 "data/maps/Route104/scripts.pory"

# 176 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 177 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 178 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 179 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 180 "data/maps/Route104/scripts.pory"
	end
# 181 "data/maps/Route104/scripts.pory"

# 182 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 183 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 184 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 185 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 186 "data/maps/Route104/scripts.pory"
	end
# 187 "data/maps/Route104/scripts.pory"

# 188 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 189 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 190 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 191 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 192 "data/maps/Route104/scripts.pory"
	end
# 193 "data/maps/Route104/scripts.pory"

# 194 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 195 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 196 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 197 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 198 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 199 "data/maps/Route104/scripts.pory"
	closemessage
# 200 "data/maps/Route104/scripts.pory"
	delay 30
# 201 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 202 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 203 "data/maps/Route104/scripts.pory"
	waitfanfare
# 204 "data/maps/Route104/scripts.pory"
	closemessage
# 205 "data/maps/Route104/scripts.pory"
	delay 30
# 206 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 207 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 208 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 209 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 210 "data/maps/Route104/scripts.pory"
	closemessage
# 211 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 213 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 215 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_DEFAULT
# 216 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleBrendan
# 217 "data/maps/Route104/scripts.pory"
	releaseall
# 218 "data/maps/Route104/scripts.pory"
	end
# 219 "data/maps/Route104/scripts.pory"

# 220 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 221 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_DEFAULT
# 222 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleBrendan
# 223 "data/maps/Route104/scripts.pory"
	releaseall
# 224 "data/maps/Route104/scripts.pory"
	end
# 225 "data/maps/Route104/scripts.pory"

# 226 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 227 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 228 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 229 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 230 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 231 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 232 "data/maps/Route104/scripts.pory"
	end
# 233 "data/maps/Route104/scripts.pory"

# 234 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 235 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 236 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 237 "data/maps/Route104/scripts.pory"
	releaseall
# 238 "data/maps/Route104/scripts.pory"
	end
# 239 "data/maps/Route104/scripts.pory"

# 240 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 241 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 242 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 243 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 244 "data/maps/Route104/scripts.pory"
	end
# 245 "data/maps/Route104/scripts.pory"

# 246 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 247 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 248 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 249 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 250 "data/maps/Route104/scripts.pory"
	end
# 251 "data/maps/Route104/scripts.pory"

# 252 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 253 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 254 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 255 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 256 "data/maps/Route104/scripts.pory"
	end
# 257 "data/maps/Route104/scripts.pory"

# 258 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 259 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 260 "data/maps/Route104/scripts.pory"
	walk_down
# 261 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 262 "data/maps/Route104/scripts.pory"
	step_end
# 263 "data/maps/Route104/scripts.pory"

# 264 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 265 "data/maps/Route104/scripts.pory"
	walk_down
# 266 "data/maps/Route104/scripts.pory"
	step_end
# 267 "data/maps/Route104/scripts.pory"

# 268 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 269 "data/maps/Route104/scripts.pory"
	lock
# 270 "data/maps/Route104/scripts.pory"
	faceplayer
# 271 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 272 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 273 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 274 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 275 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 276 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 277 "data/maps/Route104/scripts.pory"
	release
# 278 "data/maps/Route104/scripts.pory"
	end
# 279 "data/maps/Route104/scripts.pory"

# 280 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 281 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 282 "data/maps/Route104/scripts.pory"
	release
# 283 "data/maps/Route104/scripts.pory"
	end
# 284 "data/maps/Route104/scripts.pory"

# 285 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 286 "data/maps/Route104/scripts.pory"
	lock
# 287 "data/maps/Route104/scripts.pory"
	faceplayer
# 288 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 289 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 290 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 291 "data/maps/Route104/scripts.pory"
	giveitem ITEM_RED_SCARF
# 292 "data/maps/Route104/scripts.pory"
	giveitem ITEM_BLUE_SCARF
# 293 "data/maps/Route104/scripts.pory"
	giveitem ITEM_PINK_SCARF
# 294 "data/maps/Route104/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 295 "data/maps/Route104/scripts.pory"
	giveitem ITEM_YELLOW_SCARF
# 296 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 297 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 298 "data/maps/Route104/scripts.pory"
	release
# 299 "data/maps/Route104/scripts.pory"
	end
# 300 "data/maps/Route104/scripts.pory"

# 301 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 302 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 303 "data/maps/Route104/scripts.pory"
	release
# 304 "data/maps/Route104/scripts.pory"
	end
# 305 "data/maps/Route104/scripts.pory"

# 306 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 307 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 308 "data/maps/Route104/scripts.pory"
	end
# 309 "data/maps/Route104/scripts.pory"

# 310 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 311 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 312 "data/maps/Route104/scripts.pory"
	end
# 313 "data/maps/Route104/scripts.pory"

# 314 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 315 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 316 "data/maps/Route104/scripts.pory"
	end
# 317 "data/maps/Route104/scripts.pory"

# 318 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 319 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 320 "data/maps/Route104/scripts.pory"
	end
# 321 "data/maps/Route104/scripts.pory"

# 322 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 323 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 324 "data/maps/Route104/scripts.pory"
	end
# 325 "data/maps/Route104/scripts.pory"

# 326 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 327 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 328 "data/maps/Route104/scripts.pory"
	end
# 329 "data/maps/Route104/scripts.pory"

# 330 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 331 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 332 "data/maps/Route104/scripts.pory"
	end
# 333 "data/maps/Route104/scripts.pory"

# 334 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 335 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 336 "data/maps/Route104/scripts.pory"
	end
# 337 "data/maps/Route104/scripts.pory"

# 338 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 339 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 340 "data/maps/Route104/scripts.pory"
	end
# 341 "data/maps/Route104/scripts.pory"

# 342 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 343 "data/maps/Route104/scripts.pory"
	lock
# 344 "data/maps/Route104/scripts.pory"
	faceplayer
# 345 "data/maps/Route104/scripts.pory"
	checkitem ITEM_TM09
# 346 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_ReceivedBulletSeed
# 347 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 348 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM09
# 349 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 350 "data/maps/Route104/scripts.pory"
	release
# 351 "data/maps/Route104/scripts.pory"
	end
# 352 "data/maps/Route104/scripts.pory"

# 353 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 354 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 355 "data/maps/Route104/scripts.pory"
	release
# 356 "data/maps/Route104/scripts.pory"
	end
# 357 "data/maps/Route104/scripts.pory"

# 358 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 359 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 360 "data/maps/Route104/scripts.pory"
	end
# 361 "data/maps/Route104/scripts.pory"

# 362 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 363 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 364 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 365 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 366 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 367 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 368 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 369 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 371 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 372 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 373 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 374 "data/maps/Route104/scripts.pory"
	end
# 375 "data/maps/Route104/scripts.pory"

# 376 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 377 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 378 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 379 "data/maps/Route104/scripts.pory"
	delay 32
# 380 "data/maps/Route104/scripts.pory"
	fadescreen FADE_TO_BLACK
# 381 "data/maps/Route104/scripts.pory"
	warp MAP_DEWFORD_TOWN, 1, 1
# 382 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 383 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 384 "data/maps/Route104/scripts.pory"

# 385 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 386 "data/maps/Route104/scripts.pory"
	fadescreen FADE_TO_BLACK
# 387 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 388 "data/maps/Route104/scripts.pory"
	waitmessage
# 389 "data/maps/Route104/scripts.pory"
	delay 30
# 390 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 391 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 392 "data/maps/Route104/scripts.pory"
	waitfanfare
# 393 "data/maps/Route104/scripts.pory"
	closemessage
# 394 "data/maps/Route104/scripts.pory"
	delay 30
# 395 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 396 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 397 "data/maps/Route104/scripts.pory"

# 398 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 399 "data/maps/Route104/scripts.pory"
	delay 50
# 400 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 401 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 402 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 403 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 404 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 405 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 406 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 407 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 408 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 409 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 410 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route104_Movement_BrineyExitBoat
# 411 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 413 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 414 "data/maps/Route104/scripts.pory"
	warp MAP_DEWFORD_TOWN, 12, 8
# 415 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 416 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 417 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 418 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 419 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 420 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 421 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 422 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 423 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 424 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 425 "data/maps/Route104/scripts.pory"
	end
# 426 "data/maps/Route104/scripts.pory"

# 427 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 428 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 429 "data/maps/Route104/scripts.pory"
	releaseall
# 430 "data/maps/Route104/scripts.pory"
	end
# 431 "data/maps/Route104/scripts.pory"

# 432 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 433 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 434 "data/maps/Route104/scripts.pory"
	releaseall
# 435 "data/maps/Route104/scripts.pory"
	end
# 436 "data/maps/Route104/scripts.pory"

# 437 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 438 "data/maps/Route104/scripts.pory"
	walk_down
# 439 "data/maps/Route104/scripts.pory"
	walk_down
# 440 "data/maps/Route104/scripts.pory"
	walk_down
# 441 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 442 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 443 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 444 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 445 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 446 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	step_end
# 448 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCallsOld:
# 449 "data/maps/Route104/scripts.pory"
	walk_down
# 450 "data/maps/Route104/scripts.pory"
	walk_down
# 451 "data/maps/Route104/scripts.pory"
	walk_down
# 452 "data/maps/Route104/scripts.pory"
	walk_down
# 453 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 455 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 456 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 457 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 458 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 459 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 460 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 461 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 462 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 463 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 464 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 465 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 466 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 467 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 468 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 469 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 470 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 471 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 472 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 473 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 474 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 475 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 476 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 477 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 478 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 479 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 480 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 481 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 482 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 483 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 484 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 485 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 486 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 487 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 488 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 489 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 490 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 491 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 492 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 493 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 494 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 495 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 496 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 497 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 498 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 499 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 500 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 501 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 502 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 503 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 504 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 505 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 506 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 507 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 508 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 509 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 510 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 511 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 512 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 513 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 514 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 515 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 516 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 517 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 518 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 519 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 520 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 521 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 522 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 523 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 524 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 525 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 526 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 527 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 528 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 529 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 530 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 531 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 532 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 533 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 534 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 535 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 536 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 537 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 538 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 539 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 540 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 541 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 542 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 543 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 544 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 545 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 546 "data/maps/Route104/scripts.pory"
	step_end
# 547 "data/maps/Route104/scripts.pory"

# 548 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 549 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 550 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 551 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 552 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 553 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 554 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 555 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 556 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 557 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 558 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 559 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 560 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 561 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 564 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 565 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 566 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 567 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 568 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 569 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 570 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 571 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 572 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 573 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 574 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 575 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 576 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 577 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 578 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 579 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 580 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 581 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 582 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 583 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 584 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 585 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 586 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 587 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 588 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 589 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 590 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 591 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 592 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 593 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 594 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 595 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 596 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 597 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 598 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 599 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 600 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 601 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 602 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 603 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 604 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 605 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 606 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 607 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 608 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 609 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 610 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 611 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 612 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 613 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 614 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 615 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 616 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 617 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 618 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 619 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 620 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 621 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 622 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 623 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 624 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 625 "data/maps/Route104/scripts.pory"
	walk_right
# 626 "data/maps/Route104/scripts.pory"
	walk_right
# 627 "data/maps/Route104/scripts.pory"
	walk_down
# 628 "data/maps/Route104/scripts.pory"
	walk_down
# 629 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 630 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 631 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 632 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 633 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 634 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 635 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 636 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 637 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 638 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 639 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 640 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 641 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 642 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 643 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 644 "data/maps/Route104/scripts.pory"
	walk_down
# 645 "data/maps/Route104/scripts.pory"
	walk_down
# 646 "data/maps/Route104/scripts.pory"
	step_end
# 647 "data/maps/Route104/scripts.pory"

# 648 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 649 "data/maps/Route104/scripts.pory"
	walk_down
# 650 "data/maps/Route104/scripts.pory"
	walk_down
# 651 "data/maps/Route104/scripts.pory"
	walk_down
# 652 "data/maps/Route104/scripts.pory"
	walk_down
# 653 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 654 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 655 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 656 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 657 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 658 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 659 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 660 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 661 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 662 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 663 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 664 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 665 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 666 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 667 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 668 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 669 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 670 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 671 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 672 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 673 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 674 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 675 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 676 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 677 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 678 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 679 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 680 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 681 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 682 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 683 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 684 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 685 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 686 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 687 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 688 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 689 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 690 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 691 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 692 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 693 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 694 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 695 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 696 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 697 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 698 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 699 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 700 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 701 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 702 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 703 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 704 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 705 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 706 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 707 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 708 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 709 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 710 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 711 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 712 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 713 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 714 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 715 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 716 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 717 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 718 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 719 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 720 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 721 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 722 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 723 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 724 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 725 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 726 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 727 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 728 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 729 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 730 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 731 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 732 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 733 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 734 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 735 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 736 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 737 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 738 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 739 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 740 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 741 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 742 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 743 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 744 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 745 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 746 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 747 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 748 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 749 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 750 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 751 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 752 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 753 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 754 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 755 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 756 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 757 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 758 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 759 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 760 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 761 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 762 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 763 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 764 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 765 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 766 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 767 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 768 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 769 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 770 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 771 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 772 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 773 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 774 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 775 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 776 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 777 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 778 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 779 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 780 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 781 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 782 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 783 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 784 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 785 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 786 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 787 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 788 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 789 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 790 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 791 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 792 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 793 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 794 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 795 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 796 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 797 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 798 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 799 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 800 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 801 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 802 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 803 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 804 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 805 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 806 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 807 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 808 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 809 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 810 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 811 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 812 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 813 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 814 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 815 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 816 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 817 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 818 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 819 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 820 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 821 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 822 "data/maps/Route104/scripts.pory"
	walk_right
# 823 "data/maps/Route104/scripts.pory"
	walk_right
# 824 "data/maps/Route104/scripts.pory"
	walk_down
# 825 "data/maps/Route104/scripts.pory"
	walk_down
# 826 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 827 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 828 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 829 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 830 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 831 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 832 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 833 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 834 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 835 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 836 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 837 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 838 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 839 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 840 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 841 "data/maps/Route104/scripts.pory"
	walk_down
# 842 "data/maps/Route104/scripts.pory"
	walk_down
# 843 "data/maps/Route104/scripts.pory"
	step_end
# 844 "data/maps/Route104/scripts.pory"

# 845 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 846 "data/maps/Route104/scripts.pory"
	walk_left
# 847 "data/maps/Route104/scripts.pory"
	walk_down
# 848 "data/maps/Route104/scripts.pory"
	walk_down
# 849 "data/maps/Route104/scripts.pory"
	step_end
# 850 "data/maps/Route104/scripts.pory"

# 851 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 852 "data/maps/Route104/scripts.pory"
	walk_down
# 853 "data/maps/Route104/scripts.pory"
	step_end
# 854 "data/maps/Route104/scripts.pory"

# 855 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 856 "data/maps/Route104/scripts.pory"
	walk_down
# 857 "data/maps/Route104/scripts.pory"
	walk_left
# 858 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 859 "data/maps/Route104/scripts.pory"
	step_end
# 860 "data/maps/Route104/scripts.pory"

# 861 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 862 "data/maps/Route104/scripts.pory"
	walk_down
# 863 "data/maps/Route104/scripts.pory"
	walk_down
# 864 "data/maps/Route104/scripts.pory"
	step_end
# 865 "data/maps/Route104/scripts.pory"

# 866 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 867 "data/maps/Route104/scripts.pory"
	walk_down
# 868 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 869 "data/maps/Route104/scripts.pory"
	step_end
# 870 "data/maps/Route104/scripts.pory"

# 871 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 872 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 873 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 874 "data/maps/Route104/scripts.pory"
	end
# 875 "data/maps/Route104/scripts.pory"

# 876 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 877 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 878 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 879 "data/maps/Route104/scripts.pory"
	end
# 880 "data/maps/Route104/scripts.pory"

# 881 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 882 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 883 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 884 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 885 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 886 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 887 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 888 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 889 "data/maps/Route104/scripts.pory"
	release
# 890 "data/maps/Route104/scripts.pory"
	end
# 891 "data/maps/Route104/scripts.pory"

# 892 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 893 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 894 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 895 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 896 "data/maps/Route104/scripts.pory"
	release
# 897 "data/maps/Route104/scripts.pory"
	end
# 898 "data/maps/Route104/scripts.pory"

# 899 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 900 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 901 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 902 "data/maps/Route104/scripts.pory"
	release
# 903 "data/maps/Route104/scripts.pory"
	end
# 904 "data/maps/Route104/scripts.pory"

# 905 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 906 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 907 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 908 "data/maps/Route104/scripts.pory"
	release
# 909 "data/maps/Route104/scripts.pory"
	end
# 910 "data/maps/Route104/scripts.pory"

# 911 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 912 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 913 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 914 "data/maps/Route104/scripts.pory"
	release
# 915 "data/maps/Route104/scripts.pory"
	end
# 916 "data/maps/Route104/scripts.pory"

# 917 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 918 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 919 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 920 "data/maps/Route104/scripts.pory"
	end
# 921 "data/maps/Route104/scripts.pory"

# 922 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 923 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 924 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 925 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 926 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 927 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 928 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 929 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 930 "data/maps/Route104/scripts.pory"
	release
# 931 "data/maps/Route104/scripts.pory"
	end
# 932 "data/maps/Route104/scripts.pory"

# 933 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 934 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 935 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 936 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 937 "data/maps/Route104/scripts.pory"
	release
# 938 "data/maps/Route104/scripts.pory"
	end
# 939 "data/maps/Route104/scripts.pory"

# 940 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 941 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 942 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 943 "data/maps/Route104/scripts.pory"
	release
# 944 "data/maps/Route104/scripts.pory"
	end
# 945 "data/maps/Route104/scripts.pory"

# 946 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 947 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 948 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 949 "data/maps/Route104/scripts.pory"
	release
# 950 "data/maps/Route104/scripts.pory"
	end
# 951 "data/maps/Route104/scripts.pory"

# 952 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 953 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 954 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 955 "data/maps/Route104/scripts.pory"
	release
# 956 "data/maps/Route104/scripts.pory"
	end
# 957 "data/maps/Route104/scripts.pory"

# 958 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 959 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 960 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 961 "data/maps/Route104/scripts.pory"
	end
# 962 "data/maps/Route104/scripts.pory"

# 963 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 964 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 965 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 966 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 967 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 968 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 969 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 970 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 971 "data/maps/Route104/scripts.pory"
	release
# 972 "data/maps/Route104/scripts.pory"
	end
# 973 "data/maps/Route104/scripts.pory"

# 974 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 975 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 976 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 977 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 978 "data/maps/Route104/scripts.pory"
	release
# 979 "data/maps/Route104/scripts.pory"
	end
# 980 "data/maps/Route104/scripts.pory"

# 981 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 982 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 983 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 984 "data/maps/Route104/scripts.pory"
	release
# 985 "data/maps/Route104/scripts.pory"
	end
# 986 "data/maps/Route104/scripts.pory"

# 987 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 988 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 989 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 990 "data/maps/Route104/scripts.pory"
	release
# 991 "data/maps/Route104/scripts.pory"
	end
# 992 "data/maps/Route104/scripts.pory"

# 993 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 994 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 995 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 996 "data/maps/Route104/scripts.pory"
	release
# 997 "data/maps/Route104/scripts.pory"
	end
# 998 "data/maps/Route104/scripts.pory"

# 999 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 1000 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 1001 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 1002 "data/maps/Route104/scripts.pory"
	end
# 1003 "data/maps/Route104/scripts.pory"

# 1004 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 1005 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 1006 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1007 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 1008 "data/maps/Route104/scripts.pory"
	release
# 1009 "data/maps/Route104/scripts.pory"
	end
# 1010 "data/maps/Route104/scripts.pory"

# 1011 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 1012 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 1013 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1014 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 1015 "data/maps/Route104/scripts.pory"
	release
# 1016 "data/maps/Route104/scripts.pory"
	end
# 1017 "data/maps/Route104/scripts.pory"

# 1018 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 1019 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 1020 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1021 "data/maps/Route104/scripts.pory"
	end
# 1022 "data/maps/Route104/scripts.pory"

# 1023 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 1024 "data/maps/Route104/scripts.pory"
	.string "El Sr. Briney solía ser un\nmarinero sin miedo al mar.\lNi la peor tormenta lo asustaba.$"
# 1025 "data/maps/Route104/scripts.pory"

# 1026 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1027 "data/maps/Route104/scripts.pory"
	.string "El mar, ¿eh?\p"
# 1028 "data/maps/Route104/scripts.pory"
	.string "Me pregunto cómo se verá\n"
# 1029 "data/maps/Route104/scripts.pory"
	.string "el fondo del mar.$"
# 1030 "data/maps/Route104/scripts.pory"

# 1031 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1032 "data/maps/Route104/scripts.pory"
	.string "¿Sabias que hasta hace poco se creía\n"
# 1033 "data/maps/Route104/scripts.pory"
	.string "que {COLOR BLUE}los Pokémon sin género no podían\l"
# 1034 "data/maps/Route104/scripts.pory"
	.string "usar Atracción{COLOR DARK_GRAY}?\p"
# 1035 "data/maps/Route104/scripts.pory"
	.string "Ahora parece tonto creer eso, pero\n"
# 1036 "data/maps/Route104/scripts.pory"
	.string "{COLOR BLUE}pueden enamorar a\l"
# 1037 "data/maps/Route104/scripts.pory"
	.string "cualquier Pokémon{COLOR DARK_GRAY}.\p"
# 1038 "data/maps/Route104/scripts.pory"
	.string "Me pregunto… ¿Qué otros\n"
# 1039 "data/maps/Route104/scripts.pory"
	.string "descubrimientos con respecto a los\l"
# 1040 "data/maps/Route104/scripts.pory"
	.string "{COLOR BLUE}estados{COLOR DARK_GRAY} se habrá hecho…?$"
# 1041 "data/maps/Route104/scripts.pory"

# 1042 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1043 "data/maps/Route104/scripts.pory"
	.string "Siempre que puedas, usa {COLOR BLUE}Ladrón{COLOR DARK_GRAY} contra\n"
# 1044 "data/maps/Route104/scripts.pory"
	.string "sus Pokémon para {COLOR BLUE}robar sus objetos\l"
# 1045 "data/maps/Route104/scripts.pory"
	.string "equipados{COLOR DARK_GRAY}, pues nunca sabes cuándo\l"
# 1046 "data/maps/Route104/scripts.pory"
	.string "tendrán objetos raros o muy valiosos.$"
# 1047 "data/maps/Route104/scripts.pory"

# 1048 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1049 "data/maps/Route104/scripts.pory"
	.string "¿Sabías que hay personas que compran\n"
# 1050 "data/maps/Route104/scripts.pory"
	.string "objetos valiosos por un alto precio?\p"
# 1051 "data/maps/Route104/scripts.pory"
	.string "Esas personas se llaman coleccionistas,\n"
# 1052 "data/maps/Route104/scripts.pory"
	.string "y creo que hay 5 en toda Hoenn, así que\l"
# 1053 "data/maps/Route104/scripts.pory"
	.string "búscalos bien, ¡Quizá puedas volverte\l"
# 1054 "data/maps/Route104/scripts.pory"
	.string "millonari{OA} ese día!$"
# 1055 "data/maps/Route104/scripts.pory"

# 1056 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1057 "data/maps/Route104/scripts.pory"
	.string "¡Me encanta ponerme muchas semillas en\n"
# 1058 "data/maps/Route104/scripts.pory"
	.string "la boca y escupirlas rápidamente!\p"
# 1059 "data/maps/Route104/scripts.pory"
	.string "Mi hermanita bebé se ríe mucho cuando\n"
# 1060 "data/maps/Route104/scripts.pory"
	.string "lo hago, así que me grabé en un DVD y se\l"
# 1061 "data/maps/Route104/scripts.pory"
	.string "lo enseñé a mi Pokémon de esa forma, y\l"
# 1062 "data/maps/Route104/scripts.pory"
	.string "después de eso, ¡Todos querían ese\l"
# 1063 "data/maps/Route104/scripts.pory"
	.string "DVD!\p"
# 1064 "data/maps/Route104/scripts.pory"
	.string "Toma, acá tienes una muestra.$"
# 1065 "data/maps/Route104/scripts.pory"

# 1066 "data/maps/Route104/scripts.pory"

# 1067 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1068 "data/maps/Route104/scripts.pory"
	.string "Me pregunto si podré tener novia\n"
# 1069 "data/maps/Route104/scripts.pory"
	.string "gracias a este invento…$"
# 1070 "data/maps/Route104/scripts.pory"

# 1071 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1072 "data/maps/Route104/scripts.pory"
	.string "¡La Floristería tiene una nueva Tienda\n"
# 1073 "data/maps/Route104/scripts.pory"
	.string "que te vende diferentes tipos de Baya\l"
# 1074 "data/maps/Route104/scripts.pory"
	.string "dependieno de tus Medallas!\p"
# 1075 "data/maps/Route104/scripts.pory"
	.string "¡Muy útil sobretodo si te gustan los\n"
# 1076 "data/maps/Route104/scripts.pory"
	.string "concursos, o quieres ganar con\l"
# 1077 "data/maps/Route104/scripts.pory"
	.string "desventaja de tipos!\p"
# 1078 "data/maps/Route104/scripts.pory"
	.string "Como agradecimiento por escuchar,\n"
# 1079 "data/maps/Route104/scripts.pory"
	.string "¡Toma estas!$"
# 1080 "data/maps/Route104/scripts.pory"

# 1081 "data/maps/Route104/scripts.pory"

# 1082 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1083 "data/maps/Route104/scripts.pory"
	.string "¡La Floristería tiene una nueva Tienda\n"
# 1084 "data/maps/Route104/scripts.pory"
	.string "que te vende diferentes tipos de Baya\l"
# 1085 "data/maps/Route104/scripts.pory"
	.string "dependieno de tus Medallas!\p"
# 1086 "data/maps/Route104/scripts.pory"
	.string "¡Muy útil!$"
# 1087 "data/maps/Route104/scripts.pory"

# 1088 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1089 "data/maps/Route104/scripts.pory"
	.string "CASA DEL SR. BRINEY$"
# 1090 "data/maps/Route104/scripts.pory"

# 1091 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1092 "data/maps/Route104/scripts.pory"
	.string "RUTA 1O4\n"
# 1093 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} CIUDAD PETALBURG$"
# 1094 "data/maps/Route104/scripts.pory"

# 1095 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1096 "data/maps/Route104/scripts.pory"
	.string "RUTA 1O4\n"
# 1097 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} CIUDAD RUSTBORO$"
# 1098 "data/maps/Route104/scripts.pory"

# 1099 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1100 "data/maps/Route104/scripts.pory"
	.string "FLORISTERÍA$"
# 1101 "data/maps/Route104/scripts.pory"

# 1102 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1103 "data/maps/Route104/scripts.pory"
	.string "¡PISTAS PARA ENTRENADORES!\p"
# 1104 "data/maps/Route104/scripts.pory"
	.string "Los Pokémon salvajes de las Rutas\n"
# 1105 "data/maps/Route104/scripts.pory"
	.string "cambian dependiendo si es de día o de\l"
# 1106 "data/maps/Route104/scripts.pory"
	.string "noche, ¡Intenta revisar cada Ruta\l"
# 1107 "data/maps/Route104/scripts.pory"
	.string "durante distintas horas del día!$"
# 1108 "data/maps/Route104/scripts.pory"

# 1109 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1110 "data/maps/Route104/scripts.pory"
	.string "Ah, hola, {PLAYER}.\n"
# 1111 "data/maps/Route104/scripts.pory"
	.string "¿También te dieron el PC Portátil y el\l"
# 1112 "data/maps/Route104/scripts.pory"
	.string "PokéNav?\l"
# 1113 "data/maps/Route104/scripts.pory"
	.string "Creí que eran raros de conseguir…\p"
# 1114 "data/maps/Route104/scripts.pory"
	.string "¡Pero bueno! Ya que estamos, añádeme a\n"
# 1115 "data/maps/Route104/scripts.pory"
	.string "tu lista de contactos para… Bueno…\l"
# 1116 "data/maps/Route104/scripts.pory"
	.string "Porque sí, lo que sea.$"
# 1117 "data/maps/Route104/scripts.pory"

# 1118 "data/maps/Route104/scripts.pory"

# 1119 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1120 "data/maps/Route104/scripts.pory"
	.string "{RIVAL} se registró sol{AO} en tu\n"
# 1121 "data/maps/Route104/scripts.pory"
	.string "PokeNav.$"
# 1122 "data/maps/Route104/scripts.pory"

# 1123 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1124 "data/maps/Route104/scripts.pory"
	.string "Ah, sí, necesito saber, ¿Cómo va tu\n"
# 1125 "data/maps/Route104/scripts.pory"
	.string "Pokédex?\n"
# 1126 "data/maps/Route104/scripts.pory"
	.string "Seguro que no tan bien como la mía.$"
# 1127 "data/maps/Route104/scripts.pory"

# 1128 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1129 "data/maps/Route104/scripts.pory"
	.string "La mía está increíble, ¿Sabías?\p"
# 1130 "data/maps/Route104/scripts.pory"
	.string "Además, algo me dijo mi Papá sobre las\n"
# 1131 "data/maps/Route104/scripts.pory"
	.string "Dexes, que podemos {COLOR GREEN}intercambiar los\l"
# 1132 "data/maps/Route104/scripts.pory"
	.string "datos de la Pokédex{COLOR DARK_GRAY} para poder\l"
# 1133 "data/maps/Route104/scripts.pory"
	.string "completarla más rápido.\p"
# 1134 "data/maps/Route104/scripts.pory"
	.string "Realmente no quiero necesitar tu ayuda\n"
# 1135 "data/maps/Route104/scripts.pory"
	.string "para esto, y también dudo que hacerlo\l"
# 1136 "data/maps/Route104/scripts.pory"
	.string "vaya a registrarme nuevos Pokémon. Así\l"
# 1137 "data/maps/Route104/scripts.pory"
	.string "que hagamos una cosa:\p"
# 1138 "data/maps/Route104/scripts.pory"
	.string "Si me ganas en una Batalla Pokémon, voy\n"
# 1139 "data/maps/Route104/scripts.pory"
	.string "a intercambiarte los datos.$"
# 1140 "data/maps/Route104/scripts.pory"

# 1141 "data/maps/Route104/scripts.pory"

# 1142 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1143 "data/maps/Route104/scripts.pory"
	.string "¡PELEA!$"
# 1144 "data/maps/Route104/scripts.pory"

# 1145 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1146 "data/maps/Route104/scripts.pory"
	.string "¡Ganaré!$"
# 1147 "data/maps/Route104/scripts.pory"

# 1148 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1149 "data/maps/Route104/scripts.pory"
	.string "………………………………………………\n"
# 1150 "data/maps/Route104/scripts.pory"
	.string "No… Puedo derrotarte…\l"
# 1151 "data/maps/Route104/scripts.pory"
	.string "Pero si he… Considerado todo…$"
# 1152 "data/maps/Route104/scripts.pory"

# 1153 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1154 "data/maps/Route104/scripts.pory"
	.string "Pues, como dije, ahora intercambiemos\n"
# 1155 "data/maps/Route104/scripts.pory"
	.string "datos de nuestras Pokédex.\n"
# 1156 "data/maps/Route104/scripts.pory"
	.string "Préstamela un poco.$"
# 1157 "data/maps/Route104/scripts.pory"

# 1158 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1159 "data/maps/Route104/scripts.pory"
	.string "Ah, hola, {PLAYER}.\n"
# 1160 "data/maps/Route104/scripts.pory"
	.string "¿También te dieron el PC Portátil y el\l"
# 1161 "data/maps/Route104/scripts.pory"
	.string "PokéNav?\l"
# 1162 "data/maps/Route104/scripts.pory"
	.string "Creí que eran raros de conseguir…\p"
# 1163 "data/maps/Route104/scripts.pory"
	.string "¡Pero bueno! Ya que estamos, añádeme a\n"
# 1164 "data/maps/Route104/scripts.pory"
	.string "tu lista de contactos para… Bueno…\l"
# 1165 "data/maps/Route104/scripts.pory"
	.string "Porque sí, lo que sea.$"
# 1166 "data/maps/Route104/scripts.pory"

# 1167 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1168 "data/maps/Route104/scripts.pory"
	.string "{RIVAL} se registró sol{AO} en tu\n"
# 1169 "data/maps/Route104/scripts.pory"
	.string "PokeNav.$"
# 1170 "data/maps/Route104/scripts.pory"

# 1171 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1172 "data/maps/Route104/scripts.pory"
	.string "Ah, sí, necesito saber, ¿Cómo va tu\n"
# 1173 "data/maps/Route104/scripts.pory"
	.string "Pokédex?\n"
# 1174 "data/maps/Route104/scripts.pory"
	.string "Seguro que no tan bien como la mía.$"
# 1175 "data/maps/Route104/scripts.pory"

# 1176 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1177 "data/maps/Route104/scripts.pory"
	.string "La mía está increíble, ¿Sabías?\p"
# 1178 "data/maps/Route104/scripts.pory"
	.string "Además, algo me dijo mi Papá sobre las\n"
# 1179 "data/maps/Route104/scripts.pory"
	.string "Dexes, que podemos {COLOR GREEN}intercambiar los\l"
# 1180 "data/maps/Route104/scripts.pory"
	.string "datos de la Pokédex{COLOR DARK_GRAY} para poder\l"
# 1181 "data/maps/Route104/scripts.pory"
	.string "completarla más rápido.\p"
# 1182 "data/maps/Route104/scripts.pory"
	.string "Realmente no quiero necesitar tu ayuda\n"
# 1183 "data/maps/Route104/scripts.pory"
	.string "para esto, y también dudo que hacerlo\l"
# 1184 "data/maps/Route104/scripts.pory"
	.string "vaya a registrarme nuevos Pokémon. Así\l"
# 1185 "data/maps/Route104/scripts.pory"
	.string "que hagamos una cosa:\p"
# 1186 "data/maps/Route104/scripts.pory"
	.string "Si me ganas en una Batalla Pokémon, voy\n"
# 1187 "data/maps/Route104/scripts.pory"
	.string "a intercambiarte los datos.$"
# 1188 "data/maps/Route104/scripts.pory"

# 1189 "data/maps/Route104/scripts.pory"

# 1190 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1191 "data/maps/Route104/scripts.pory"
	.string "¡Perderás!$"
# 1192 "data/maps/Route104/scripts.pory"

# 1193 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1194 "data/maps/Route104/scripts.pory"
	.string "Pero…\n"
# 1195 "data/maps/Route104/scripts.pory"
	.string "He capturado tantos Pokémon.$"
# 1196 "data/maps/Route104/scripts.pory"

# 1197 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1198 "data/maps/Route104/scripts.pory"
	.string "Pues, como dije, ahora intercambiemos\n"
# 1199 "data/maps/Route104/scripts.pory"
	.string "datos de nuestras Pokédex.\n"
# 1200 "data/maps/Route104/scripts.pory"
	.string "Préstamela un poco.$"
