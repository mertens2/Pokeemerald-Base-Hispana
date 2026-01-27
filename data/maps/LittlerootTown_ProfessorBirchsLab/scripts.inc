LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker Birch
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_Text_0
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end


LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker Birch
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent_Text_0
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent_Text_1
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
	end


LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker Birch
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_Text_0
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_1
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE SIDE_QUEST_1
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_BUFFER_QUEST_NAME SIDE_QUEST_1
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_Text_1
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker Birch
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_Text_2
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end


LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_NO_SHINIES
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_EXP_SHARE
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker Birch
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_Text_0
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker Birch
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_Text_1
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_2
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_5
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_6
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_8
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_11
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_QUEST_MENU_ACTIVE
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLED_PC
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker Birch
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_Text_2
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker Rival
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_RivalGivePokeBalls
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 2
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end


LittlerootTown_ProfessorBirchsLab_EventScript_RivalGivePokeBalls::
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_RivalGivePokeBalls_Text_0
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker Rival
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_RivalGivePokeBalls_Text_1
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FaceOriginalDirection
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
	return


LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex_Text_0
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	return


LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setspeaker Birch
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait_Text_0
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end


# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_AIDE, 1
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BIRCH, 2
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_RIVAL, 3
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CYNDAQUIL, 4
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_TOTODILE, 5
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CHIKORITA, 6
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts::
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.byte 0
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Beat Elite Four, Dex upgrade ready
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Received National Dex
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Left lab after receiving National Dex
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Entered lab after catching all Hoenn mons
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Birch told player to choose Johto starter
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 6: Chose Johto starter
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_BIRCH_LAB_STATE
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Never occurs
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Chose starter
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Received starter in lab
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Defeated rival on Route 103
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Received pokedex
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition:
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCH
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_AIDE, DIR_EAST
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_AIDE, 10, 10
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CYNDAQUIL
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_TOTODILE
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CHIKORITA
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CYNDAQUIL, DIR_SOUTH
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CYNDAQUIL, 8, 4
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_TOTODILE, DIR_SOUTH
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_TOTODILE, 9, 4
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CHIKORITA, DIR_SOUTH
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CHIKORITA, 10, 4
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_EAST
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 3
# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_5
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_2
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_2
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1:
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_2:
# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_5
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_2
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_5:
# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_0
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 120
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_1, MSGBOX_AUTOCLOSE
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_0:
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿El Profe…? No está aquí, se fue a\n"
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "hacer trabajo de campo. ¡Oh! ¡Déjame\l"
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "explicarte qué es eso!\p"
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pues verás, el trabajo de campo es\n"
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "cuando………………\n"
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "………………………$"
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_1:
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Y eso es todo! ¡Gracias por escuchar!$"
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Text_2:
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡El Profe aprecia mucho la ayuda de\n"
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}, aunque no lo demuestre!$"
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpicshiny SPECIES_CYNDAQUIL, 10, 3, 2
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpicshiny SPECIES_TOTODILE, 10, 3, 1
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpicshiny SPECIES_CHIKORITA, 10, 3, 0
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CYNDAQUIL
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_TOTODILE
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CHIKORITA
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE SIDE_QUEST_3  
# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_Book_ReRead
# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	questmenu QUEST_MENU_UNLOCK_QUEST SIDE_QUEST_3
# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Descubrire_Verdad, MSGBOX_SIGN
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book_ReRead:
# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookNotTooHardToRead, MSGBOX_SIGN
# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookNotTooHardToRead:
# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "El libro… Ya no es difícil de leer.\p"
# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "“Querido diario, un Pokémon que\n"
# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "cambiaba de forma atacó la ciudad.\l"
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Cómo se veía realmente?\p"
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "No pude decifrarlo. Pero con ayuda de\n"
# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Alex, Dia, Norman y de Carlos, logramos\l"
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "derrotale. Aún desconozco qué Pokémon\l"
# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "era, pero sospecho que era\l"
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "proveniente de otra región…\p"
# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ellos dicen que es mejor así, pero yo\n"
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "no estoy de acuerdo. Dedicaré mi vida\l"
# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a ello si hace falta, pero encontraré\l"
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a ese Pokémon y lo estudiaré.\l"
# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Esta… Es la motivación que me\l"
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "faltaba para hacerlo…\p"
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Seré un Profesor Pokémon.”\p"
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Eso… Es lo que decía…$"
# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
Descubrire_Verdad:
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … … … … …\n"
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … … … … …\l"
# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … … … … …\p"
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Descubriré la verdad.$"
# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "…$"
# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Una… ¿Máquina?\n"
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Me pregunto qué hace.$"
# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Es un PC. Mejor lo dejo así.$"
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hay muchísimos libros.$"
# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Es… Un libro difícil de leer…\p"
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "“Querido diario, un ?ok???n que\n"
# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "?????aba ?e ?or?? atacó el pueblo.\l"
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Cómo se ve?a r?almen?e?\p"
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "No pude decifrarlo. Pero con ayuda de\n"
# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Al??, ?a?, Nor??? y de Ca??o?, logramos\l"
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "derrotale. Aún desconozco qué P???m??\l"
# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "era, pero sos??cho qu? er?\l"
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "prov???ente de ???? r???ó?…\p"
# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ell?s d???n ?u? e? m?j?? ???………………”\p"
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "El resto de el libro es indescifrable.$"
# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Now…\p"
# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study POKéMON.\p"
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It appears that in the HOENN region,\n"
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "there are also POKéMON from other\l"
# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "regions.\p"
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the natural environments of HOENN\l"
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "happen to be.\p"
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "me to upgrade your POKéDEX to\l"
# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode.\p"
# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, let me see your POKéDEX units.$"
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Eheheh!\p"
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even my POKéDEX\n"
# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "is getting updated!\p"
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's because you went out and caught\n"
# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "so many POKéMON, {PLAYER}{KUN}!$"
# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: I went out all over HOENN\n"
# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and checked out POKéMON.\p"
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can thank me for getting\n"
# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode POKéDEX.\p"
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Okay, all done!$"
# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded\n"
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to the NATIONAL Mode!$"
# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: But listen.\n"
# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the CHAMPION,\l"
# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I think I'll take a short break\n"
# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the PROF here for\n"
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: For the time being,\n"
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the PROF here\n"
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your POKéDEX.\p"
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the HOENN\n"
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's POKéDEX.\p"
# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare POKéMON only found\n"
# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: These are rare POKéMON\n"
# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "only found in another region!\p"
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The FIRE POKéMON\n"
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CYNDAQUIL caught your eye!\p"
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So the CYNDAQUIL is your choice?$"
# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The WATER POKéMON\n"
# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "TOTODILE is your choice!\p"
# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the TOTODILE?$"
# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The GRASS POKéMON\n"
# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CHIKORITA is your choice!\p"
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the CHIKORITA?$"
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Take your time before\n"
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you decide.\p"
# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "They're all invaluable POKéMON.$"
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: I see!\n"
# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You picked a fine POKéMON!$"
# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from PROF. BIRCH!$"
# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Want to give a nickname to\n"
# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the {STR_VAR_1} you received?$"
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the HOENN POKéDEX,\l"
# 989 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised POKéMON.\n"
# 997 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 998 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 999 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 1000 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you don't have any room for\n"
# 1002 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéMON.$"
# 1003 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1004 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 1005 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, after this…\n"
# 1006 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 1007 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 1008 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 1009 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 1010 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL POKéDEX?\p"
# 1011 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the PROF.$"
# 1012 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1013 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 1014 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Rather than collecting\n"
# 1015 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON, I prefer slowly and \l"
# 1016 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 1017 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1018 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 1019 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
# 1020 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 1021 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1022 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1023 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 1024 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}!\n"
# 1025 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 1026 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1027 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1028 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 1029 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1030 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 1031 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "SCOTT: Hi, hi, {PLAYER}!\n"
# 1032 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, SCOTT.\p"
# 1033 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. TIDAL now.\n"
# 1034 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 1035 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 1036 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 1037 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 1038 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 1039 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either SLATEPORT or LILYCOVE.\p"
# 1040 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 1041 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1043 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"

LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister_Text_0:
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Cómo va tu aventura?$"

LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent_Text_0:
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Así que es cierto, {PLAYER}, sabes\n"
	.string "tanto sobre los Pokémon, que {COLOR BLUE}puedes\l"
	.string "saber sus movimientos sin la Pokédex{COLOR DARK_GRAY}…\p"
	.string "Ah, ¡Y como me salvaste, te regalaré el\n"
	.string "Pokémon que elegiste antes!$"

LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent_Text_1:
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡{PLAYER} recibió un {COLOR LIGHT_RED SHADOW RED}{STR_VAR_1}{COLOR DARK_GRAY SHADOW LIGHT_GRAY}\n"
	.string "de manos del Profesor!$"

LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_Text_0:
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Sabes qué creo?\n"
	.string "Que sería buena idea que vayas a\l"
	.string "combatir contra {RIVAL} en la Ruta\l"
	.string "103.\p"
	.string "¡Seguro les sirve de aprendizaje!$"

LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_Text_1:
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "La misión {COLOR LIGHT_RED SHADOW RED}“{STR_VAR_1}”{COLOR DARK_GRAY SHADOW LIGHT_GRAY} ha sido\n"
	.string "desbloqueada!$"

LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival_Text_2:
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Acabo de darte una {COLOR BLUE}Misión{COLOR DARK_GRAY SHADOW LIGHT_GRAY}.\p"
	.string "Si la cumples, obtendrás una\n"
	.string "{COLOR LIGHT_RED SHADOW RED}recompensa{COLOR DARK_GRAY SHADOW LIGHT_GRAY}, que dependerá de la\l"
	.string "{COLOR LIGHT_RED SHADOW RED}dificultad de la misión{COLOR DARK_GRAY SHADOW LIGHT_GRAY}.\p"
	.string "Esta vez, la misión es ir a buscar a\n"
	.string "{RIVAL} en la Ruta 103.$"

LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_Text_0:
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡{PLAYER}! ¡Escuché que venciste el\n"
	.string "equipo de {RIVAL}…!\p"
	.string "¡IMPRESIONANTE!\n"
	.string "{RIVAL} me ha estado ayudando a\l"
	.string "investigar, y ¡Aún con su experiencia\l"
	.string "le has ganado! ¡JA!\p"
	.string "Me sorprendes, {PLAYER}, así que,\n"
	.string "toma esto.$"

LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_Text_1:
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Tengo algo que decirte, {PLAYER}.\p"
	.string "Muchos Pokémon han estado {COLOR BLUE}migrando a\n"
	.string "Hoenn{COLOR DARK_GRAY}. Y estoy investigando la razón.\l"
	.string "Pero necesito su ayuda.\p"
	.string "Por eso, {PLAYER} y {RIVAL}, sus\n"
	.string "Pokédex tienen acceso al {COLOR LIGHT_RED SHADOW RED}Modo\l"
	.string "Nacional{COLOR DARK_GRAY SHADOW LIGHT_GRAY}.\p"
	.string "Si me ayudan, los recompensaré\n"
	.string "enormemente.\p"
	.string "¡Además! ¡Por cumplir la misión que te di\n"
	.string "antes, ten esta recompensa!$"

LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex_Text_2:
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Te he dado algunas misiones más. Vuelve\n"
	.string "conmigo al completarlas.$"

LittlerootTown_ProfessorBirchsLab_EventScript_RivalGivePokeBalls_Text_0:
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}\n"
	.string "¡Eh!\p"
	.string "{PLAYER}…{PAUSE 15} Bien-{PAUSE 10} ¡bien hecho!\p"
	.string "Ya…{PAUSE 15} Ya eres mejor que…{PAUSE 15} Eh, nada.\n"
	.string "Toma estas Pokéball. Te ayudarán.$"

LittlerootTown_ProfessorBirchsLab_EventScript_RivalGivePokeBalls_Text_1:
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}…{PAUSE 10}\n"
	.string "Ah, {PLAYER}, adelántate…\l"
	.string "Yo…{PAUSE 10}…{PAUSE 10}…{PAUSE 10} Te alcanzaré luego…$"

LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex_Text_0:
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Te han regalado una {COLOR BLUE}Pokédex{COLOR DARK_GRAY}!$"

LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait_Text_0:
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Ve!\n"
	.string "¡Ten aventuras!$"
