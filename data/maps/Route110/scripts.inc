# 1 "data/maps/Route110/scripts.pory"

# 2 "data/maps/Route110/scripts.pory"
.set LOCALID_CHALLENGE_BIKER, 21
# 3 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL, 27
# 4 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 34
# 5 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL_2, 35
# 6 "data/maps/Route110/scripts.pory"

# 7 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 8 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 9 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 10 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 11 "data/maps/Route110/scripts.pory"
	.byte 0
# 12 "data/maps/Route110/scripts.pory"

# 13 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 14 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 15 "data/maps/Route110/scripts.pory"
	end
# 16 "data/maps/Route110/scripts.pory"

# 17 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 18 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 19 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 20 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 21 "data/maps/Route110/scripts.pory"
	end
# 22 "data/maps/Route110/scripts.pory"

# 23 "data/maps/Route110/scripts.pory"
Route110_SwapRivalSprite:
# 24 "data/maps/Route110/scripts.pory"
	checkplayergender
# 25 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_SetupRivalOnBikeGfxIdFemale
# 26 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_SetupRivalOnBikeGfxIdMale
# 27 "data/maps/Route110/scripts.pory"
	return
# 28 "data/maps/Route110/scripts.pory"

# 29 "data/maps/Route110/scripts.pory"
Route110_EventScript_SetupRivalOnBikeGfxIdFemale::
# 30 "data/maps/Route110/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_MACH_BIKE
# 31 "data/maps/Route110/scripts.pory"
	return
# 32 "data/maps/Route110/scripts.pory"

# 33 "data/maps/Route110/scripts.pory"
Route110_EventScript_SetupRivalOnBikeGfxIdMale::
# 34 "data/maps/Route110/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_MACH_BIKE
# 35 "data/maps/Route110/scripts.pory"
	return	
# 36 "data/maps/Route110/scripts.pory"

# 37 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 38 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 39 "data/maps/Route110/scripts.pory"
	return
# 40 "data/maps/Route110/scripts.pory"

# 41 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 42 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 43 "data/maps/Route110/scripts.pory"
	.2byte 0
# 44 "data/maps/Route110/scripts.pory"

# 45 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 46 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 47 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 48 "data/maps/Route110/scripts.pory"
	return
# 49 "data/maps/Route110/scripts.pory"

# 50 "data/maps/Route110/scripts.pory"

# 51 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 52 "data/maps/Route110/scripts.pory"
	lock
# 53 "data/maps/Route110/scripts.pory"
	faceplayer
# 54 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 55 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 56 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route110/scripts.pory"
	release
# 58 "data/maps/Route110/scripts.pory"
	end
# 59 "data/maps/Route110/scripts.pory"

# 60 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 61 "data/maps/Route110/scripts.pory"
	lock
# 62 "data/maps/Route110/scripts.pory"
	faceplayer
# 63 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 64 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 65 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route110/scripts.pory"
	release
# 67 "data/maps/Route110/scripts.pory"
	end
# 68 "data/maps/Route110/scripts.pory"

# 69 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 70 "data/maps/Route110/scripts.pory"
	lock
# 71 "data/maps/Route110/scripts.pory"
	faceplayer
# 72 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 73 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 74 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route110/scripts.pory"
	release
# 76 "data/maps/Route110/scripts.pory"
	end
# 77 "data/maps/Route110/scripts.pory"

# 78 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 79 "data/maps/Route110/scripts.pory"
	lock
# 80 "data/maps/Route110/scripts.pory"
	faceplayer
# 81 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 82 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 83 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route110/scripts.pory"
	release
# 85 "data/maps/Route110/scripts.pory"
	end
# 86 "data/maps/Route110/scripts.pory"

# 87 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 88 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 89 "data/maps/Route110/scripts.pory"
	end
# 90 "data/maps/Route110/scripts.pory"

# 91 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 92 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 93 "data/maps/Route110/scripts.pory"
	end
# 94 "data/maps/Route110/scripts.pory"

# 95 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 96 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 97 "data/maps/Route110/scripts.pory"
	end
# 98 "data/maps/Route110/scripts.pory"

# 99 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 100 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 101 "data/maps/Route110/scripts.pory"
	end
# 102 "data/maps/Route110/scripts.pory"

# 103 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 104 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 105 "data/maps/Route110/scripts.pory"
	end
# 106 "data/maps/Route110/scripts.pory"

# 107 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 108 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 109 "data/maps/Route110/scripts.pory"
	end
# 110 "data/maps/Route110/scripts.pory"

# 111 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 112 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 113 "data/maps/Route110/scripts.pory"
	end
# 114 "data/maps/Route110/scripts.pory"

# 115 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 116 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 117 "data/maps/Route110/scripts.pory"
	end
# 118 "data/maps/Route110/scripts.pory"

# 119 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 120 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 121 "data/maps/Route110/scripts.pory"
	end
# 122 "data/maps/Route110/scripts.pory"

# 123 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 124 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 125 "data/maps/Route110/scripts.pory"
	end
# 126 "data/maps/Route110/scripts.pory"

# 127 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 128 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 129 "data/maps/Route110/scripts.pory"
	end
# 130 "data/maps/Route110/scripts.pory"

# 131 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 132 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 133 "data/maps/Route110/scripts.pory"
	end
# 134 "data/maps/Route110/scripts.pory"

# 135 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 136 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 137 "data/maps/Route110/scripts.pory"
	end
# 138 "data/maps/Route110/scripts.pory"

# 139 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 140 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 141 "data/maps/Route110/scripts.pory"
	end
# 142 "data/maps/Route110/scripts.pory"

# 143 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 144 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 145 "data/maps/Route110/scripts.pory"
	end
# 146 "data/maps/Route110/scripts.pory"

# 147 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 148 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 149 "data/maps/Route110/scripts.pory"
	end
# 150 "data/maps/Route110/scripts.pory"

# 151 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 152 "data/maps/Route110/scripts.pory"
	lockall
# 153 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 154 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 155 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 156 "data/maps/Route110/scripts.pory"
	releaseall
# 157 "data/maps/Route110/scripts.pory"
	end
# 158 "data/maps/Route110/scripts.pory"

# 159 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 160 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 161 "data/maps/Route110/scripts.pory"
	releaseall
# 162 "data/maps/Route110/scripts.pory"
	end
# 163 "data/maps/Route110/scripts.pory"

# 164 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 165 "data/maps/Route110/scripts.pory"
	lock
# 166 "data/maps/Route110/scripts.pory"
	faceplayer
# 167 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 168 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 169 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 170 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 171 "data/maps/Route110/scripts.pory"
	release
# 172 "data/maps/Route110/scripts.pory"
	end
# 173 "data/maps/Route110/scripts.pory"

# 174 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 175 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 176 "data/maps/Route110/scripts.pory"
	release
# 177 "data/maps/Route110/scripts.pory"
	end
# 178 "data/maps/Route110/scripts.pory"

# 179 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 180 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 181 "data/maps/Route110/scripts.pory"
	release
# 182 "data/maps/Route110/scripts.pory"
	end
# 183 "data/maps/Route110/scripts.pory"

# 184 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 185 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 186 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route110/scripts.pory"
	end
# 188 "data/maps/Route110/scripts.pory"

# 189 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 190 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 191 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route110/scripts.pory"
	end
# 193 "data/maps/Route110/scripts.pory"

# 194 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 195 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 196 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 197 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 198 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 199 "data/maps/Route110/scripts.pory"
	release
# 200 "data/maps/Route110/scripts.pory"
	end
# 201 "data/maps/Route110/scripts.pory"

# 202 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 203 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 204 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 205 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 206 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 207 "data/maps/Route110/scripts.pory"
	release
# 208 "data/maps/Route110/scripts.pory"
	end
# 209 "data/maps/Route110/scripts.pory"

# 210 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 211 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 212 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route110/scripts.pory"
	end
# 214 "data/maps/Route110/scripts.pory"

# 215 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 216 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 217 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route110/scripts.pory"
	end
# 219 "data/maps/Route110/scripts.pory"

# 220 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 221 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 222 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 223 "data/maps/Route110/scripts.pory"
	end
# 224 "data/maps/Route110/scripts.pory"

# 225 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 226 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 227 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/Route110/scripts.pory"
	end
# 229 "data/maps/Route110/scripts.pory"

# 230 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 231 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 232 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 233 "data/maps/Route110/scripts.pory"
	release
# 234 "data/maps/Route110/scripts.pory"
	end
# 235 "data/maps/Route110/scripts.pory"

# 236 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 237 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 238 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 239 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 240 "data/maps/Route110/scripts.pory"
	release
# 241 "data/maps/Route110/scripts.pory"
	end
# 242 "data/maps/Route110/scripts.pory"

# 243 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 244 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 245 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route110/scripts.pory"
	end
# 247 "data/maps/Route110/scripts.pory"

# 248 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 249 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 250 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 251 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 252 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 253 "data/maps/Route110/scripts.pory"
	release
# 254 "data/maps/Route110/scripts.pory"
	end
# 255 "data/maps/Route110/scripts.pory"

# 256 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 257 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 258 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 259 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 260 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 261 "data/maps/Route110/scripts.pory"
	release
# 262 "data/maps/Route110/scripts.pory"
	end
# 263 "data/maps/Route110/scripts.pory"

# 264 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 265 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 266 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 267 "data/maps/Route110/scripts.pory"
	end
# 268 "data/maps/Route110/scripts.pory"

# 269 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 270 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 271 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 272 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 273 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 274 "data/maps/Route110/scripts.pory"
	release
# 275 "data/maps/Route110/scripts.pory"
	end
# 276 "data/maps/Route110/scripts.pory"

# 277 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 278 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 279 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 280 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 281 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 282 "data/maps/Route110/scripts.pory"
	release
# 283 "data/maps/Route110/scripts.pory"
	end
# 284 "data/maps/Route110/scripts.pory"

# 285 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 286 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 287 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/Route110/scripts.pory"
	end
# 289 "data/maps/Route110/scripts.pory"

# 290 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 291 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 292 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 293 "data/maps/Route110/scripts.pory"
	end
# 294 "data/maps/Route110/scripts.pory"

# 295 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 296 "data/maps/Route110/scripts.pory"
	end
# 297 "data/maps/Route110/scripts.pory"

# 298 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 299 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 300 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 301 "data/maps/Route110/scripts.pory"
	end
# 302 "data/maps/Route110/scripts.pory"

# 303 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 304 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 305 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 306 "data/maps/Route110/scripts.pory"
	end
# 307 "data/maps/Route110/scripts.pory"

# 308 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 309 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 310 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 311 "data/maps/Route110/scripts.pory"
	end
# 312 "data/maps/Route110/scripts.pory"

# 313 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 314 "data/maps/Route110/scripts.pory"
	lockall
# 315 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 316 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 317 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 318 "data/maps/Route110/scripts.pory"
	releaseall
# 319 "data/maps/Route110/scripts.pory"
	end
# 320 "data/maps/Route110/scripts.pory"

# 321 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 322 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 323 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 324 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 325 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 326 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 327 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 328 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 329 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 330 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 331 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 332 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 333 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 334 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 335 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 336 "data/maps/Route110/scripts.pory"
	end
# 337 "data/maps/Route110/scripts.pory"

# 338 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 339 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 340 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 341 "data/maps/Route110/scripts.pory"
	end
# 342 "data/maps/Route110/scripts.pory"

# 343 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 344 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 345 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 346 "data/maps/Route110/scripts.pory"
	end
# 347 "data/maps/Route110/scripts.pory"

# 348 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 349 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 350 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 351 "data/maps/Route110/scripts.pory"
	end
# 352 "data/maps/Route110/scripts.pory"

# 353 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 354 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 355 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 356 "data/maps/Route110/scripts.pory"
	end
# 357 "data/maps/Route110/scripts.pory"

# 358 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 359 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 360 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 361 "data/maps/Route110/scripts.pory"
	end
# 362 "data/maps/Route110/scripts.pory"

# 363 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 364 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 365 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 366 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 367 "data/maps/Route110/scripts.pory"
	return
# 368 "data/maps/Route110/scripts.pory"

# 369 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 370 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 371 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 372 "data/maps/Route110/scripts.pory"
	end
# 373 "data/maps/Route110/scripts.pory"

# 374 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 375 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 376 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 377 "data/maps/Route110/scripts.pory"
	end
# 378 "data/maps/Route110/scripts.pory"

# 379 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 380 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 381 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 382 "data/maps/Route110/scripts.pory"
	end
# 383 "data/maps/Route110/scripts.pory"

# 384 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 385 "data/maps/Route110/scripts.pory"
	lockall
# 386 "data/maps/Route110/scripts.pory"
	checkplayergender
# 387 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 388 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 389 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 390 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 392 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 393 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 394 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 395 "data/maps/Route110/scripts.pory"
	delay 30
# 396 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 397 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 398 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 399 "data/maps/Route110/scripts.pory"
	checkplayergender
# 400 "data/maps/Route110/scripts.pory"
	setspeaker Rival
# 401 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 402 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 403 "data/maps/Route110/scripts.pory"
	releaseall
# 404 "data/maps/Route110/scripts.pory"
	end
# 405 "data/maps/Route110/scripts.pory"

# 406 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 407 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 408 "data/maps/Route110/scripts.pory"
	return
# 409 "data/maps/Route110/scripts.pory"

# 410 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 411 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 412 "data/maps/Route110/scripts.pory"
	return
# 413 "data/maps/Route110/scripts.pory"

# 414 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 415 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RivalLetsBattle, MSGBOX_DEFAULT
# 416 "data/maps/Route110/scripts.pory"
	
# 417 "data/maps/Route110/scripts.pory"
	closemessage
# 418 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 419 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 420 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 421 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 422 "data/maps/Route110/scripts.pory"
	end
# 423 "data/maps/Route110/scripts.pory"

# 424 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 425 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_RivalDefeated
# 426 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalDefeated
# 427 "data/maps/Route110/scripts.pory"
	end
# 428 "data/maps/Route110/scripts.pory"

# 429 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 430 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_RivalDefeated
# 431 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalDefeated
# 432 "data/maps/Route110/scripts.pory"
	end
# 433 "data/maps/Route110/scripts.pory"

# 434 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 435 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_RivalDefeated
# 436 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalDefeated
# 437 "data/maps/Route110/scripts.pory"
	end
# 438 "data/maps/Route110/scripts.pory"

# 439 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalDefeated::
# 440 "data/maps/Route110/scripts.pory"
	setspeaker Rival
# 441 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RivalTakeThis, MSGBOX_DEFAULT
# 442 "data/maps/Route110/scripts.pory"
	closemessage
# 443 "data/maps/Route110/scripts.pory"
	
# 444 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RivalProcess, MSGBOX_DEFAULT
# 445 "data/maps/Route110/scripts.pory"
	closemessage
# 446 "data/maps/Route110/scripts.pory"
	setcaughtmon SPECIES_GULPIN
# 447 "data/maps/Route110/scripts.pory"
	setcaughtmon SPECIES_SWALOT
# 448 "data/maps/Route110/scripts.pory"
	setcaughtmon SPECIES_ELECTRIKE
# 449 "data/maps/Route110/scripts.pory"
	setcaughtmon SPECIES_ELEKID
# 450 "data/maps/Route110/scripts.pory"
	setcaughtmon SPECIES_PLUSLE
# 451 "data/maps/Route110/scripts.pory"
	setcaughtmon SPECIES_MINUN
# 452 "data/maps/Route110/scripts.pory"
	setcaughtmon SPECIES_TORKOAL
# 453 "data/maps/Route110/scripts.pory"
	setcaughtmon SPECIES_MAGCARGO
# 454 "data/maps/Route110/scripts.pory"
	setcaughtmon SPECIES_MAGIKARP
# 455 "data/maps/Route110/scripts.pory"
	setcaughtmon SPECIES_GYARADOS
# 456 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 457 "data/maps/Route110/scripts.pory"
	setspeaker Rival
# 458 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RivalExplainItemfinder, MSGBOX_DEFAULT
# 459 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 460 "data/maps/Route110/scripts.pory"
	end
# 461 "data/maps/Route110/scripts.pory"

# 462 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 463 "data/maps/Route110/scripts.pory"
	setspeaker Rival
# 464 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RivalLetsBattle, MSGBOX_DEFAULT
# 465 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 466 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 467 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 468 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 469 "data/maps/Route110/scripts.pory"
	end
# 470 "data/maps/Route110/scripts.pory"

# 471 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 472 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_RivalDefeated
# 473 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalDefeated
# 474 "data/maps/Route110/scripts.pory"
	end
# 475 "data/maps/Route110/scripts.pory"

# 476 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 477 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_RivalDefeated
# 478 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalDefeated
# 479 "data/maps/Route110/scripts.pory"
	end
# 480 "data/maps/Route110/scripts.pory"

# 481 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 482 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_RivalDefeated
# 483 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalDefeated
# 484 "data/maps/Route110/scripts.pory"
	end
# 485 "data/maps/Route110/scripts.pory"

# 486 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 487 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 488 "data/maps/Route110/scripts.pory"
	return
# 489 "data/maps/Route110/scripts.pory"

# 490 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 491 "data/maps/Route110/scripts.pory"
	closemessage
# 492 "data/maps/Route110/scripts.pory"
	
# 493 "data/maps/Route110/scripts.pory"
	call Route110_SwapRivalSprite
# 494 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 495 "data/maps/Route110/scripts.pory"
	delay 45
# 496 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 497 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 498 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 499 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 500 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 501 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 502 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 503 "data/maps/Route110/scripts.pory"
	releaseall
# 504 "data/maps/Route110/scripts.pory"
	end
# 505 "data/maps/Route110/scripts.pory"

# 506 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 507 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 508 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 509 "data/maps/Route110/scripts.pory"
	return
# 510 "data/maps/Route110/scripts.pory"

# 511 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 512 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 513 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 514 "data/maps/Route110/scripts.pory"
	return
# 515 "data/maps/Route110/scripts.pory"

# 516 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 517 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 518 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 519 "data/maps/Route110/scripts.pory"
	return
# 520 "data/maps/Route110/scripts.pory"

# 521 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 522 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalExit1
# 523 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 524 "data/maps/Route110/scripts.pory"
	return
# 525 "data/maps/Route110/scripts.pory"

# 526 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 527 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalExit2
# 528 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 529 "data/maps/Route110/scripts.pory"
	return
# 530 "data/maps/Route110/scripts.pory"

# 531 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 532 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalExit3
# 533 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 534 "data/maps/Route110/scripts.pory"
	return
# 535 "data/maps/Route110/scripts.pory"

# 536 "data/maps/Route110/scripts.pory"

# 537 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 538 "data/maps/Route110/scripts.pory"
	walk_down
# 539 "data/maps/Route110/scripts.pory"
	walk_left
# 540 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 541 "data/maps/Route110/scripts.pory"
	step_end
# 542 "data/maps/Route110/scripts.pory"

# 543 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 544 "data/maps/Route110/scripts.pory"
	walk_down
# 545 "data/maps/Route110/scripts.pory"
	step_end
# 546 "data/maps/Route110/scripts.pory"

# 547 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 548 "data/maps/Route110/scripts.pory"
	walk_down
# 549 "data/maps/Route110/scripts.pory"
	walk_right
# 550 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 551 "data/maps/Route110/scripts.pory"
	step_end
# 552 "data/maps/Route110/scripts.pory"

# 553 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 554 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 555 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 556 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 557 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 558 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 559 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 560 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 561 "data/maps/Route110/scripts.pory"
	step_end
# 562 "data/maps/Route110/scripts.pory"

# 563 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 564 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 565 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 566 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 567 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 568 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 569 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 570 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 571 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 572 "data/maps/Route110/scripts.pory"
	step_end
# 573 "data/maps/Route110/scripts.pory"

# 574 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 575 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 576 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 577 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 578 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 579 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 580 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 581 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 582 "data/maps/Route110/scripts.pory"
	step_end
# 583 "data/maps/Route110/scripts.pory"

# 584 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 585 "data/maps/Route110/scripts.pory"
	lockall
# 586 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 587 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 588 "data/maps/Route110/scripts.pory"

# 589 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 590 "data/maps/Route110/scripts.pory"
	lockall
# 591 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 592 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 593 "data/maps/Route110/scripts.pory"

# 594 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 595 "data/maps/Route110/scripts.pory"
	lockall
# 596 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 597 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 598 "data/maps/Route110/scripts.pory"

# 599 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 600 "data/maps/Route110/scripts.pory"
	lockall
# 601 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 602 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 603 "data/maps/Route110/scripts.pory"

# 604 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 605 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 606 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 607 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 608 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 609 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 610 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 611 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 612 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 613 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 614 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 615 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 616 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 617 "data/maps/Route110/scripts.pory"
	setspeaker Birch
# 618 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 619 "data/maps/Route110/scripts.pory"
	closemessage
# 620 "data/maps/Route110/scripts.pory"
	
# 621 "data/maps/Route110/scripts.pory"
	delay 20
# 622 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 623 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 624 "data/maps/Route110/scripts.pory"
	delay 10
# 625 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 626 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 627 "data/maps/Route110/scripts.pory"
	delay 20
# 628 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 629 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 630 "data/maps/Route110/scripts.pory"
	delay 30
# 631 "data/maps/Route110/scripts.pory"
	setspeaker Birch
# 632 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 633 "data/maps/Route110/scripts.pory"
	closemessage
# 634 "data/maps/Route110/scripts.pory"
	
# 635 "data/maps/Route110/scripts.pory"
	delay 30
# 636 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 637 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 638 "data/maps/Route110/scripts.pory"
	waitfanfare
# 639 "data/maps/Route110/scripts.pory"
	closemessage
# 640 "data/maps/Route110/scripts.pory"
	delay 30
# 641 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 642 "data/maps/Route110/scripts.pory"
	setspeaker Birch
# 643 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 644 "data/maps/Route110/scripts.pory"
	closemessage
# 645 "data/maps/Route110/scripts.pory"
	
# 646 "data/maps/Route110/scripts.pory"
	giveitem ITEM_POKEBLOCK_CASE
# 647 "data/maps/Route110/scripts.pory"
	setspeaker Birch
# 648 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival2, MSGBOX_DEFAULT
# 649 "data/maps/Route110/scripts.pory"
	closemessage
# 650 "data/maps/Route110/scripts.pory"
	
# 651 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 652 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit1
# 653 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit1
# 654 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 655 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 656 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 657 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 658 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 659 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_2
# 660 "data/maps/Route110/scripts.pory"
	delay 16
# 661 "data/maps/Route110/scripts.pory"
	setspeaker Unknown
# 662 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RivalWait, MSGBOX_DEFAULT
# 663 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 664 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 665 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 666 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 667 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 668 "data/maps/Route110/scripts.pory"
	closemessage
# 669 "data/maps/Route110/scripts.pory"
	
# 670 "data/maps/Route110/scripts.pory"
	fadeoutbgm 0
# 671 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalComeSeeFather1
# 672 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalComeSeeFather1
# 673 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalComeSeeFather3
# 674 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_RivalComeSeeFather1
# 675 "data/maps/Route110/scripts.pory"
	setspeaker Rival
# 676 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RivalButIm, MSGBOX_DEFAULT
# 677 "data/maps/Route110/scripts.pory"
	closemessage
# 678 "data/maps/Route110/scripts.pory"
	
# 679 "data/maps/Route110/scripts.pory"
	delay 24
# 680 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_RivalUp
# 681 "data/maps/Route110/scripts.pory"
	delay 16
# 682 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_2, Common_Movement_FacePlayer
# 683 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 684 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_PlayerFaceRivalR
# 685 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_PlayerFaceRivalR
# 686 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_PlayerFaceRivalL
# 687 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_PlayerFaceRivalL
# 688 "data/maps/Route110/scripts.pory"
	delay 16
# 689 "data/maps/Route110/scripts.pory"
	setspeaker Rival
# 690 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RivalExplains, MSGBOX_DEFAULT
# 691 "data/maps/Route110/scripts.pory"
	closemessage
# 692 "data/maps/Route110/scripts.pory"
	
# 693 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_2, Common_Movement_FaceAwayPlayer
# 694 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 695 "data/maps/Route110/scripts.pory"
	delay 25
# 696 "data/maps/Route110/scripts.pory"
	setspeaker Rival
# 697 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RivalThreeDots, MSGBOX_DEFAULT
# 698 "data/maps/Route110/scripts.pory"
	
# 699 "data/maps/Route110/scripts.pory"
	closemessage
# 700 "data/maps/Route110/scripts.pory"
	delay 25
# 701 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_2, Common_Movement_FacePlayer
# 702 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 703 "data/maps/Route110/scripts.pory"
	setspeaker Rival
# 704 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RivalGoodbye, MSGBOX_DEFAULT
# 705 "data/maps/Route110/scripts.pory"
	closemessage
# 706 "data/maps/Route110/scripts.pory"
	
# 707 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_2, Common_Movement_WalkUp6
# 708 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 709 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_2, Common_Movement_WalkUp6
# 710 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 711 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_2, 34, 54
# 712 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_2
# 713 "data/maps/Route110/scripts.pory"
	fadeinbgm 0
# 714 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 715 "data/maps/Route110/scripts.pory"
	setflag FLAG_RIVAL_110_SAD
# 716 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 0
# 717 "data/maps/Route110/scripts.pory"
	releaseall
# 718 "data/maps/Route110/scripts.pory"
	end
# 719 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalUp::
# 720 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_2, Common_Movement_WalkUp2
# 721 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 722 "data/maps/Route110/scripts.pory"
	return
# 723 "data/maps/Route110/scripts.pory"

# 724 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerFaceRivalR::
# 725 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 726 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 727 "data/maps/Route110/scripts.pory"
	return
# 728 "data/maps/Route110/scripts.pory"

# 729 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerFaceRivalL::
# 730 "data/maps/Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 731 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 732 "data/maps/Route110/scripts.pory"
	return
# 733 "data/maps/Route110/scripts.pory"

# 734 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalComeSeeFather1::
# 735 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_2, Route110_Movement_Rival_ComesSeeFather1
# 736 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 737 "data/maps/Route110/scripts.pory"
	return
# 738 "data/maps/Route110/scripts.pory"
	
# 739 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival_ComesSeeFather1:
# 740 "data/maps/Route110/scripts.pory"
	walk_down
# 741 "data/maps/Route110/scripts.pory"
	walk_down
# 742 "data/maps/Route110/scripts.pory"
	walk_down
# 743 "data/maps/Route110/scripts.pory"
	walk_down
# 744 "data/maps/Route110/scripts.pory"
	walk_down
# 745 "data/maps/Route110/scripts.pory"
	walk_down
# 746 "data/maps/Route110/scripts.pory"
	walk_down
# 747 "data/maps/Route110/scripts.pory"
	walk_down
# 748 "data/maps/Route110/scripts.pory"
	walk_down
# 749 "data/maps/Route110/scripts.pory"
	step_end
# 750 "data/maps/Route110/scripts.pory"

# 751 "data/maps/Route110/scripts.pory"
Route110_Movement_Rival_ComesSeeFather2:
# 752 "data/maps/Route110/scripts.pory"
	walk_down
# 753 "data/maps/Route110/scripts.pory"
	walk_down
# 754 "data/maps/Route110/scripts.pory"
	walk_down
# 755 "data/maps/Route110/scripts.pory"
	walk_down
# 756 "data/maps/Route110/scripts.pory"
	walk_down
# 757 "data/maps/Route110/scripts.pory"
	walk_down
# 758 "data/maps/Route110/scripts.pory"
	walk_left
# 759 "data/maps/Route110/scripts.pory"
	walk_down
# 760 "data/maps/Route110/scripts.pory"
	step_end
# 761 "data/maps/Route110/scripts.pory"

# 762 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalComeSeeFather3::
# 763 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_Rival_ComesSeeFather2
# 764 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 765 "data/maps/Route110/scripts.pory"
	return	
# 766 "data/maps/Route110/scripts.pory"

# 767 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 768 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 769 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 770 "data/maps/Route110/scripts.pory"
	return
# 771 "data/maps/Route110/scripts.pory"

# 772 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 773 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 774 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 775 "data/maps/Route110/scripts.pory"
	return
# 776 "data/maps/Route110/scripts.pory"

# 777 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 778 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 779 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 780 "data/maps/Route110/scripts.pory"
	return
# 781 "data/maps/Route110/scripts.pory"

# 782 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 783 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 784 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 785 "data/maps/Route110/scripts.pory"
	return
# 786 "data/maps/Route110/scripts.pory"

# 787 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 788 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 789 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 790 "data/maps/Route110/scripts.pory"
	return
# 791 "data/maps/Route110/scripts.pory"

# 792 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 793 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 794 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 795 "data/maps/Route110/scripts.pory"
	return
# 796 "data/maps/Route110/scripts.pory"

# 797 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 798 "data/maps/Route110/scripts.pory"
	walk_down
# 799 "data/maps/Route110/scripts.pory"
	walk_down
# 800 "data/maps/Route110/scripts.pory"
	walk_down
# 801 "data/maps/Route110/scripts.pory"
	step_end
# 802 "data/maps/Route110/scripts.pory"

# 803 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 804 "data/maps/Route110/scripts.pory"
	walk_down
# 805 "data/maps/Route110/scripts.pory"
	walk_left
# 806 "data/maps/Route110/scripts.pory"
	walk_left
# 807 "data/maps/Route110/scripts.pory"
	walk_down
# 808 "data/maps/Route110/scripts.pory"
	step_end
# 809 "data/maps/Route110/scripts.pory"

# 810 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 811 "data/maps/Route110/scripts.pory"
	walk_down
# 812 "data/maps/Route110/scripts.pory"
	walk_left
# 813 "data/maps/Route110/scripts.pory"
	walk_down
# 814 "data/maps/Route110/scripts.pory"
	step_end
# 815 "data/maps/Route110/scripts.pory"

# 816 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 817 "data/maps/Route110/scripts.pory"
	walk_down
# 818 "data/maps/Route110/scripts.pory"
	walk_down
# 819 "data/maps/Route110/scripts.pory"
	step_end
# 820 "data/maps/Route110/scripts.pory"

# 821 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 822 "data/maps/Route110/scripts.pory"
	walk_down
# 823 "data/maps/Route110/scripts.pory"
	walk_right
# 824 "data/maps/Route110/scripts.pory"
	walk_down
# 825 "data/maps/Route110/scripts.pory"
	step_end
# 826 "data/maps/Route110/scripts.pory"

# 827 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 828 "data/maps/Route110/scripts.pory"
	walk_right
# 829 "data/maps/Route110/scripts.pory"
	walk_down
# 830 "data/maps/Route110/scripts.pory"
	walk_down
# 831 "data/maps/Route110/scripts.pory"
	walk_down
# 832 "data/maps/Route110/scripts.pory"
	walk_down
# 833 "data/maps/Route110/scripts.pory"
	walk_down
# 834 "data/maps/Route110/scripts.pory"
	walk_down
# 835 "data/maps/Route110/scripts.pory"
	walk_down
# 836 "data/maps/Route110/scripts.pory"
	walk_down
# 837 "data/maps/Route110/scripts.pory"
	step_end
# 838 "data/maps/Route110/scripts.pory"

# 839 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 840 "data/maps/Route110/scripts.pory"
	walk_left
# 841 "data/maps/Route110/scripts.pory"
	walk_down
# 842 "data/maps/Route110/scripts.pory"
	walk_down
# 843 "data/maps/Route110/scripts.pory"
	walk_down
# 844 "data/maps/Route110/scripts.pory"
	walk_down
# 845 "data/maps/Route110/scripts.pory"
	walk_down
# 846 "data/maps/Route110/scripts.pory"
	walk_down
# 847 "data/maps/Route110/scripts.pory"
	walk_down
# 848 "data/maps/Route110/scripts.pory"
	walk_down
# 849 "data/maps/Route110/scripts.pory"
	step_end
# 850 "data/maps/Route110/scripts.pory"

# 851 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 852 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 853 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 854 "data/maps/Route110/scripts.pory"

# 855 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 856 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 857 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 858 "data/maps/Route110/scripts.pory"

# 859 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 860 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 861 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 862 "data/maps/Route110/scripts.pory"

# 863 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 864 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 865 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 866 "data/maps/Route110/scripts.pory"

# 867 "data/maps/Route110/scripts.pory"
Route110_Text_RivalLetsBattle:
# 868 "data/maps/Route110/scripts.pory"
	.string "Ah, {PAUSE 5}hola {PAUSE 15}… {PLAYER}.\p"
# 869 "data/maps/Route110/scripts.pory"
	.string "Eh… {PAUSE 15}Eh… {PAUSE 15}Estuve capturando muchos\n"
# 870 "data/maps/Route110/scripts.pory"
	.string "Pokémon en esta zona, {PAUSE 2}creo… {PAUSE 10}Que… {PAUSE 10}Los\l"
# 871 "data/maps/Route110/scripts.pory"
	.string "tengo a todos…\p"
# 872 "data/maps/Route110/scripts.pory"
	.string "… {PAUSE 15}… {PAUSE 15}… {PAUSE 15}…\p"
# 873 "data/maps/Route110/scripts.pory"
	.string "Eh… {PAUSE 10}Lamento si estoy actuando algo\n"
# 874 "data/maps/Route110/scripts.pory"
	.string "rar{AO},{PAUSE 5} {PLAYER}, {PAUSE 5}sólo que me afecta\l"
# 875 "data/maps/Route110/scripts.pory"
	.string "mucho pensar en mi Papá y lo mucho que\l"
# 876 "data/maps/Route110/scripts.pory"
	.string "te quiere comparándote conmigo{PAUSE 15}…{PAUSE 15}…\p"
# 877 "data/maps/Route110/scripts.pory"
	.string "P-{PAUSE 5}pero… {PAUSE 15}N-{PAUSE 5}no importa, tengo que\n"
# 878 "data/maps/Route110/scripts.pory"
	.string "continuar con mi misión. {PAUSE 5}Así que…\l"
# 879 "data/maps/Route110/scripts.pory"
	.string "¡Hagamos lo mismo que antes,{PAUSE 5}\l"
# 880 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}!\p"
# 881 "data/maps/Route110/scripts.pory"
	.string "¡Si me derrotas, intercambiaremos datos\n"
# 882 "data/maps/Route110/scripts.pory"
	.string "de la Pokédex!$"
# 883 "data/maps/Route110/scripts.pory"

# 884 "data/maps/Route110/scripts.pory"

# 885 "data/maps/Route110/scripts.pory"
Route110_Text_RivalDefeated:
# 886 "data/maps/Route110/scripts.pory"
	.string "…{PAUSE 20} … {PAUSE 15}… {PAUSE 5}…\n"
# 887 "data/maps/Route110/scripts.pory"
	.string "¡Ja!{PAUSE 10} ¡Bien hecho!$"
# 888 "data/maps/Route110/scripts.pory"

# 889 "data/maps/Route110/scripts.pory"
Route110_Text_RivalTakeThis:
# 890 "data/maps/Route110/scripts.pory"
	.string "Esa batalla… {PAUSE 15}Me animó un poco…\p"
# 891 "data/maps/Route110/scripts.pory"
	.string "Quizás comience a tomar el {COLOR BLUE}Desafío de\n"
# 892 "data/maps/Route110/scripts.pory"
	.string "los Gimnasios{COLOR DARK_GRAY} de vez en cuando, {PAUSE 5}podría\l"
# 893 "data/maps/Route110/scripts.pory"
	.string "ayudarme un poco{PAUSE 5}…\p"
# 894 "data/maps/Route110/scripts.pory"
	.string "Pero, demasiada charla…\p"
# 895 "data/maps/Route110/scripts.pory"
	.string "Comencemos el intercambio.$"
# 896 "data/maps/Route110/scripts.pory"

# 897 "data/maps/Route110/scripts.pory"
Route110_Text_RivalProcess:
# 898 "data/maps/Route110/scripts.pory"
	.string "…{PAUSE 15}…{PAUSE 5}…{PAUSE 5}…{PAUSE 15}………\n……{PAUSE 15}……\l………\pY…\p¡Listo!$"
# 899 "data/maps/Route110/scripts.pory"

# 900 "data/maps/Route110/scripts.pory"
Route110_Text_RivalExplainItemfinder:
# 901 "data/maps/Route110/scripts.pory"
	.string "Ah, y toma esto… {PAUSE 15}{PLAYER}.\p"
# 902 "data/maps/Route110/scripts.pory"
	.string "Es un Buscaobjetos.\nEncontré un {COLOR BLUE}Electrizador{COLOR DARK_GRAY} por\l"
# 903 "data/maps/Route110/scripts.pory"
	.string "aquí, si tienes suerte, encontrarás\l"
# 904 "data/maps/Route110/scripts.pory"
	.string "algo bueno también.\p"
# 905 "data/maps/Route110/scripts.pory"
	.string "Así que,{PAUSE 5} bueno, debería irme. Intentaré\n"
# 906 "data/maps/Route110/scripts.pory"
	.string "vencer algunos Gimnasios ahora que\l"
# 907 "data/maps/Route110/scripts.pory"
	.string "tengo ganas, así que la próxima vez que\l"
# 908 "data/maps/Route110/scripts.pory"
	.string "me veas,{PAUSE 15} ¡Te derrotaré!$"
# 909 "data/maps/Route110/scripts.pory"

# 910 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 911 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 912 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 913 "data/maps/Route110/scripts.pory"

# 914 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 915 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 916 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 917 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 918 "data/maps/Route110/scripts.pory"

# 919 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 920 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 921 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 922 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 923 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 924 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 925 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 926 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 927 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 928 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 929 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 930 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 931 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 932 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 933 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 934 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 935 "data/maps/Route110/scripts.pory"

# 936 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 937 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 938 "data/maps/Route110/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 939 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 940 "data/maps/Route110/scripts.pory"

# 941 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 942 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 943 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 944 "data/maps/Route110/scripts.pory"

# 945 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 946 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 947 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 948 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 949 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 950 "data/maps/Route110/scripts.pory"

# 951 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 952 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 953 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 954 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 955 "data/maps/Route110/scripts.pory"
	.string "and look for POKéMON?$"
# 956 "data/maps/Route110/scripts.pory"

# 957 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 958 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 959 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 960 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 961 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 962 "data/maps/Route110/scripts.pory"

# 963 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 964 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 965 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 966 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 967 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 968 "data/maps/Route110/scripts.pory"

# 969 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 970 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 971 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 972 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 973 "data/maps/Route110/scripts.pory"

# 974 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 975 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 976 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 977 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 978 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 979 "data/maps/Route110/scripts.pory"

# 980 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 981 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 982 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 983 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 984 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 985 "data/maps/Route110/scripts.pory"

# 986 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 987 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 988 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 989 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 990 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 991 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 992 "data/maps/Route110/scripts.pory"

# 993 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 994 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 995 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 996 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 997 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 998 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 999 "data/maps/Route110/scripts.pory"

# 1000 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 1001 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 1002 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 1003 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 1004 "data/maps/Route110/scripts.pory"

# 1005 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 1006 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 1007 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 1008 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 1009 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 1010 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 1011 "data/maps/Route110/scripts.pory"

# 1012 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 1013 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1014 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 1015 "data/maps/Route110/scripts.pory"

# 1016 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 1017 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 1018 "data/maps/Route110/scripts.pory"

# 1019 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 1020 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 1021 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 1022 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 1023 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 1024 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 1025 "data/maps/Route110/scripts.pory"

# 1026 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 1027 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1028 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 1029 "data/maps/Route110/scripts.pory"

# 1030 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 1031 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 1032 "data/maps/Route110/scripts.pory"

# 1033 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 1034 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
# 1035 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 1036 "data/maps/Route110/scripts.pory"

# 1037 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 1038 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1039 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 1040 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 1041 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 1042 "data/maps/Route110/scripts.pory"
	.string "POKéMON battles.$"
# 1043 "data/maps/Route110/scripts.pory"

# 1044 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 1045 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
# 1046 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 1047 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 1048 "data/maps/Route110/scripts.pory"

# 1049 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 1050 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 1051 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 1052 "data/maps/Route110/scripts.pory"

# 1053 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 1054 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1055 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 1056 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 1057 "data/maps/Route110/scripts.pory"

# 1058 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 1059 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1060 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 1061 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 1062 "data/maps/Route110/scripts.pory"

# 1063 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 1064 "data/maps/Route110/scripts.pory"
	.string "Ah, {PAUSE 5}¡{PLAYER}!\n"
# 1065 "data/maps/Route110/scripts.pory"
	.string "¡Sabía que estarías aquí!\p"
# 1066 "data/maps/Route110/scripts.pory"
	.string "¿Está yendo todo bien?$"
# 1067 "data/maps/Route110/scripts.pory"

# 1068 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 1069 "data/maps/Route110/scripts.pory"
	.string "¿Qué qué hago aquí? {PAUSE 5}¡Investigo, por\n"
# 1070 "data/maps/Route110/scripts.pory"
	.string "supuesto!\p"
# 1071 "data/maps/Route110/scripts.pory"
	.string "Me encanta salir y hacer\n"
# 1072 "data/maps/Route110/scripts.pory"
	.string "investigaciones en campo abierto,\l"
# 1073 "data/maps/Route110/scripts.pory"
	.string "salir, mancharme las batas, ver a los\l"
# 1074 "data/maps/Route110/scripts.pory"
	.string "Pokémon en su hábitat…\p"
# 1075 "data/maps/Route110/scripts.pory"
	.string "¡Oh!\p"
# 1076 "data/maps/Route110/scripts.pory"
	.string "¿Has visto a {RIVAL}?\n"
# 1077 "data/maps/Route110/scripts.pory"
	.string "No ha venido a casa en un tiempo…\p"
# 1078 "data/maps/Route110/scripts.pory"
	.string "… {PAUSE 15}… {PAUSE 15}…\p"
# 1079 "data/maps/Route110/scripts.pory"
	.string "Ah, ustedes no viajan juntos.\p"
# 1080 "data/maps/Route110/scripts.pory"
	.string "Qué mal. Bueno, ya l{AO} veré. Dile que l{AO}\n"
# 1081 "data/maps/Route110/scripts.pory"
	.string "quiero.\p"
# 1082 "data/maps/Route110/scripts.pory"
	.string "¡Ah!{PAUSE 10} Me registraré en el PokéNav, así\n"
# 1083 "data/maps/Route110/scripts.pory"
	.string "podremos mantener contacto.$"
# 1084 "data/maps/Route110/scripts.pory"

# 1085 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 1086 "data/maps/Route110/scripts.pory"
	.string "Registrado al Profesor\n"
# 1087 "data/maps/Route110/scripts.pory"
	.string "Birch al PokéNav.$"
# 1088 "data/maps/Route110/scripts.pory"

# 1089 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1090 "data/maps/Route110/scripts.pory"
	.string "Bueno, {PLAYER}, ahora me voy.\p"
# 1091 "data/maps/Route110/scripts.pory"
	.string "¡Ah, me olvidaba!$"
# 1092 "data/maps/Route110/scripts.pory"

# 1093 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival2:
# 1094 "data/maps/Route110/scripts.pory"
	.string "Eso es un {COLOR RED}Tubo {POKEBLOCK}s{COLOR DARK_GRAY}.\pSirve para hacer {POKEBLOCK}s, pero, más\nimportante, con él podrás entrar al\lMini-Safari de la Ruta 103, cuando abra.\p¡Seguro abrirán cuando derrotes\nel siguiente Gimnasio!\pCuídate, {PLAYER}, y cuida\nde {RIVAL}.$"
# 1095 "data/maps/Route110/scripts.pory"

# 1096 "data/maps/Route110/scripts.pory"
Route110_Text_RivalWait:
# 1097 "data/maps/Route110/scripts.pory"
	.string "¡E-{PAUSE 5}espera, Papá!\p"
# 1098 "data/maps/Route110/scripts.pory"
	.string "¡Acá estoy!$"
# 1099 "data/maps/Route110/scripts.pory"

# 1100 "data/maps/Route110/scripts.pory"
Route110_Text_RivalButIm:
# 1101 "data/maps/Route110/scripts.pory"
	.string "P{PAUSE 1}e{PAUSE 1}r{PAUSE 1}o{PAUSE 1}… {PAUSE 15}A{PAUSE 1}c{PAUSE 1}á e{PAUSE 1}s{PAUSE 1}t{PAUSE 1}o{PAUSE 1}y{PAUSE 1},{PAUSE 15} P{PAUSE 1}a{PAUSE 1}p{PAUSE 1}á{PAUSE 1}.$"
# 1102 "data/maps/Route110/scripts.pory"

# 1103 "data/maps/Route110/scripts.pory"
Route110_Text_RivalExplains:
# 1104 "data/maps/Route110/scripts.pory"
	.string "Entonces, {PAUSE 2}mi Papá te habló,{PAUSE 5} ¿no?\p"
# 1105 "data/maps/Route110/scripts.pory"
	.string "Pero ni me notó, {PAUSE 2}aunque haya llegado\n"
# 1106 "data/maps/Route110/scripts.pory"
	.string "antes de perderlo de vista…\p"
# 1107 "data/maps/Route110/scripts.pory"
	.string "¡Siempre me hace esto! {PAUSE 15}¡Nunca nota\n"
# 1108 "data/maps/Route110/scripts.pory"
	.string "mis esfuerzos pero siempre nota los\l"
# 1109 "data/maps/Route110/scripts.pory"
	.string "de los demás.\p"
# 1110 "data/maps/Route110/scripts.pory"
	.string "Estoy muy, muy enojad{AO} con él,\n"
# 1111 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}. Nunca tiene tiempo para su\l"
# 1112 "data/maps/Route110/scripts.pory"
	.string "familia, {PAUSE 5}pero siempre tiene tiempo para\l"
# 1113 "data/maps/Route110/scripts.pory"
	.string "andar por ahí, {PAUSE 15}, hablando con gente que ni conoce,\l"
# 1114 "data/maps/Route110/scripts.pory"
	.string "jugando con Pokémon salvajes…\p"
# 1115 "data/maps/Route110/scripts.pory"
	.string "Entiendo {PAUSE 5}que sea su trabajo, {PAUSE 10}y nunca ha\n"
# 1116 "data/maps/Route110/scripts.pory"
	.string "faltado el pan en la mesa gracias a él,\l"
# 1117 "data/maps/Route110/scripts.pory"
	.string "pero{PAUSE 5}…{PAUSE 15}\p"
# 1118 "data/maps/Route110/scripts.pory"
	.string "P{PAUSE 1}e{PAUSE 1}r{PAUSE 1}o{PAUSE 6}…{PAUSE 15}\p"
# 1119 "data/maps/Route110/scripts.pory"
	.string "N{PAUSE 1}o{PAUSE 1} {PAUSE 1}s{PAUSE 1}é{PAUSE 5}… {PAUSE 15}Quiero verlo más seguido…\p"
# 1120 "data/maps/Route110/scripts.pory"
	.string "¿Sabes…? {PAUSE 15}Debería dejar de ser tan mal{AO}\n"
# 1121 "data/maps/Route110/scripts.pory"
	.string "contigo, {PLAYER}, al fin y al cabo,\l"
# 1122 "data/maps/Route110/scripts.pory"
	.string "has ayudado bastante{PAUSE 15}…\p"
# 1123 "data/maps/Route110/scripts.pory"
	.string "Debería pensarlo…$"
# 1124 "data/maps/Route110/scripts.pory"

# 1125 "data/maps/Route110/scripts.pory"
Route110_Text_RivalGoodbye:
# 1126 "data/maps/Route110/scripts.pory"
	.string "Bueno,{PAUSE 1} {PAUSE 1}e{PAUSE 1}h{PAUSE 1}… {PAUSE 15}Iré a seguir intentando\n"
# 1127 "data/maps/Route110/scripts.pory"
	.string "capturar más Pokémon de esta zona,{PAUSE 5} y\l"
# 1128 "data/maps/Route110/scripts.pory"
	.string "luego podemos combatir, {PAUSE 10}s{PAUSE 1}i{PAUSE 1} q{PAUSE 1}u{PAUSE 1}i{PAUSE 1}e{PAUSE 1}r{PAUSE 1}e{PAUSE 1}s{PAUSE 1}…$"
# 1129 "data/maps/Route110/scripts.pory"

# 1130 "data/maps/Route110/scripts.pory"
Route110_Text_RivalThreeDots:
# 1131 "data/maps/Route110/scripts.pory"
	.string "… {PAUSE 15}… {PAUSE 15}… {PAUSE 15}… {PAUSE 15}… {PAUSE 15}…$"
