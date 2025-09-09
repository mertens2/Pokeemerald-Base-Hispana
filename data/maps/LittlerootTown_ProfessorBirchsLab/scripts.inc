# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts::
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.byte 0
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Beat Elite Four, Dex upgrade ready
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Received National Dex
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Left lab after receiving National Dex
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Entered lab after catching all Hoenn mons
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Birch told player to choose Johto starter
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 6: Chose Johto starter
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_BIRCH_LAB_STATE
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Never occurs
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Chose starter
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Received starter in lab
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Defeated rival on Route 103
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Received pokedex
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition:
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_BIRCHS_LAB_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_BIRCHS_LAB_RIVAL, 5, 10
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_BIRCHS_LAB_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_BIRCHS_LAB_RIVAL, 5, 10
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_BIRCH
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_RIVAL, DIR_NORTH
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_RIVAL, 5, 5
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_BIRCH, DIR_SOUTH
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_BIRCH, 6, 4
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_AIDE, DIR_EAST
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_AIDE, 10, 10
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_TOTODILE_BALL
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL, DIR_SOUTH
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL, 8, 4
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_TOTODILE_BALL, DIR_SOUTH
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_TOTODILE_BALL, 9, 4
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL, DIR_SOUTH
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_CHIKORITA_BALL, 10, 4
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_BIRCH, DIR_SOUTH
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_BIRCH, 6, 4
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_RIVAL, DIR_EAST
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_RIVAL, 5, 5
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_YESNO
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay, MSGBOX_YESNO
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_CYNDAQUIL_BALL
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_TOTODILE_BALL
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_TOTODILE_BALL
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_CHIKORITA_BALL
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Cómo? ¿El PROF. ABEDUL?\p"
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "El PROFESOR ha ido a hacer un trabajo\n"
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "de campo. Vamos, que no está.\p"
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Déjame que te explique qué es\n"
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "un trabajo de campo.\p"
# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Se trata de estudiar las cosas\n"
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "en su entorno natural: en el campo o\l"
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "la montaña, en vez de en el laboratorio.\p"
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "El PROFESOR no es de los que se quedan\n"
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "pegados a la mesa. Él prefiere salir\l"
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "y experimentar cosas. No le basta\l"
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "con leer sobre ellas en los libros.$"
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "El PROFESOR no es de los que se quedan\n"
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "pegados a la mesa. Él prefiere salir\l"
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "y experimentar cosas. No le basta\l"
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "con leer sobre ellas en los libros.$"
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "El PROF. ABEDUL estudia los hábitats\n"
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "y distribución de los POKéMON.\p"
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Al PROFESOR le gusta contar con la\n"
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "ayuda de {RIVAL}. Se quieren mucho.$"
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: Pues sí, {PLAYER}{KUN}.\p"
# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He oído hablar mucho de ti a tu padre.\p"
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Me ha dicho que todavía no tienes\n"
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tu propio POKéMON.\p"
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pero por la forma en que luchaste\n"
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "antes, sabes cómo arreglártelas.\p"
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Se nota que por tus venas corre\n"
# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "la sangre de tu padre.\p"
# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ah, y muchas gracias por salvarme.\n"
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Querría darte el POKéMON que usaste\l"
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "antes como agradecimiento.\p"
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡{PLAYER} recibió a {STR_VAR_1}!$"
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: Ya que estamos, ¿por qué\n"
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "no le pones un mote a tu {STR_VAR_1}?$"
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: Si te esfuerzas mucho\n"
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "y ganas experiencia, llegarás a ser\l"
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "genial entrenando POKéMON.\p"
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Mi retoño, {RIVAL}, está estudiando\n"
# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a los POKéMON a la vez que me ayuda.\p"
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oye, {PLAYER}{KUN}, ¿y si vas a ver a {RIVAL}?$"
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: ¡Estupendo!\n"
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} se alegrará mucho.\p"
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Dile a {RIVAL} que te enseñe lo que\n"
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "debe hacer todo ENTRENADOR.$"
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: Vamos, no seas\n"
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "así… Deberíais conoceros…$"
# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: ¿{RIVAL}?\n"
# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Creo que se fue a casa.\p"
# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "O quizás anda por ahí enredando\n"
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "entre la hierba alta…\p"
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Si tú o tus POKéMON os cansáis,\n"
# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "id a descansar a casa.$"
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: ¡Hola, {PLAYER}{KUN}!\p"
# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Me han dicho que has ganado\n"
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tu primer combate. ¡Nada menos\l"
# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "que contra {RIVAL}! ¡Muy bien!\p"
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} me ha estado ayudando con\n"
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "mi investigación durante mucho tiempo.\p"
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} tiene un largo historial\n"
# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "entrenando POKéMON.\p"
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Mira, {PLAYER}{KUN}, encargué esto\n"
# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "para mi investigación, pero quiero\l"
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "que lo tengas tú. Es una POKéDEX.$"
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡{PLAYER} recibió una POKéDEX!$"
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: La POKéDEX es un aparato\n"
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "de alta tecnología que registra todos\l"
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "los POKéMON que avistas o atrapas.\p"
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Mi retoño, {RIVAL}, no se separa de ella.\p"
# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Cada vez que atrapa un POKéMON raro\n"
# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "y registra los datos en la POKéDEX,\l"
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "viene a verme allá donde esté para\l"
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "enseñármelo.$"
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: ¡Innumerables POKéMON\n"
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "te esperan!\p"
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Y a mí me espera mi trabajo de campo!$"
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "AURA: ¡Ahí va, {PLAYER}{KUN}!\n"
# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Ahora tú también tienes una POKéDEX!\p"
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Qué guay! ¡Como la mía!\n"
# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Yo también tengo algo para ti!$"
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "AURA: ¡Es divertidísimo atrapar\n"
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "un montón de POKéMON!\p"
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Voy a rebuscar por todas partes\n"
# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "porque quiero uno de cada.\p"
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Si me encuentro con uno que me guste,\n"
# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡lo atraparé con mis POKé BALLS!$"
# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh… La MOCHILA está llena.$"
# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "AURA: ¿Adónde puedo ir a buscar\n"
# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "más POKéMON?$"
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRUNO: Mmmm…\n"
# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ahora tú también tienes una POKéDEX…\p"
# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Bueno, pues entonces supongo\n"
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "que puedo darte esto.$"
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRUNO: Mola mucho más tener\n"
# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "montones de POKéMON.\p"
# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Voy a explorar cada rincón para\n"
# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "encontrar distintos tipos de POKéMON.\p"
# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Si encuentro alguno que sea chulo,\n"
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "lo atraparé con mis POKé BALLS.$"
# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Eh, la MOCHILA está llena.$"
# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRUNO: Adónde puedo ir a buscar\n"
# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "más POKéMON, me pregunto…$"
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Es una máquina impresionante.\n"
# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "El PROFESOR debe de usarla para\l"
# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "avanzar en su investigación.$"
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Es un PC que usan los científicos.\n"
# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Mejor no trasteo mucho por aquí…$"
# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Está repleta de libros sobre POKéMON.$"
# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Es un libro muy complicado.$"
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: Veamos…\p"
# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} y {RIVAL}, me habéis ayudado\n"
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "mucho en mi estudio sobre los POKéMON.\p"
# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gracias a vuestra ayuda,\n"
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "hemos hecho nuevas averiguaciones.\p"
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ahora sabemos que en HOENN también\n"
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "existen POKéMON de otras regiones.\p"
# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Lo cual sirve para resaltar aún más\n"
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "la enorme variedad y riqueza existente\l"
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "en el entorno natural de HOENN.\p"
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Por ello, veo necesario actualizar\n"
# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "vuestras POKéDEX al MODO NACIONAL.\p"
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Dejadme ver esas POKéDEX.$"
# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "AURA: ¡Guau!\p"
# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Fenomenal!\n"
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡También actualizan mi POKéDEX!\p"
# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Y ha sido por todos esos POKéMON\n"
# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "que has atrapado tú, {PLAYER}{KUN}!$"
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRUNO: Me he recorrido todo HOENN\n"
# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "para encontrar todos esos POKéMON.\p"
# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Ya me puedes dar las gracias por tener\n"
# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "la POKéDEX del MODO NACIONAL!\p"
# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Sí, has tenido suerte, {PLAYER}!$"
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: ¡Muy bien! ¡Ya está!$"
# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡La POKéDEX de {PLAYER} ha sido\n"
# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "actualizada al MODO NACIONAL!$"
# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: Ahora, escucha.\n"
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Has obtenido el título de CAMPEÓN, pero\l"
# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "los POKéMON aún te reservan sorpresas.\p"
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "El camino de los POKéMON no acaba aquí.\p"
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡En algún lugar, hay una zona\n"
# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "de hierba alta esperándote!$"
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "AURA: Creo que voy a descansar un poco\n"
# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "de tanto trabajo de campo.\p"
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Quiero ayudar un poco más al PROFESOR\n"
# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "en el LABORATORIO.$"
# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRUNO: Creo que voy a descansar un poco\n"
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "de tanto trabajo de campo.\p"
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Quiero ayudar más al PROFESOR aquí,\n"
# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "en el LABORATORIO.$"
# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: ¡Eh, {PLAYER}{KUN}!\n"
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Vamos a ver cómo llevas esa POKéDEX.\p"
# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Mmm…\p"
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Sí, la verdad es que no hay duda.\p"
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Has completado la POKéDEX\n"
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "de la región de HOENN.\p"
# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Es algo realmente extraordinario.\p"
# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Tengo un regalo para ti.\p"
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Considéralo como una muestra de mi\n"
# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "reconocimiento a tu excelente trabajo.\p"
# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Mi regalo es un ejemplar de POKéMON\n"
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "raro de otra región!\p"
# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Elige uno de estos tres POKéMON!$"
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: ¡Éstos son ejemplares\n"
# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "de POKéMON raros de otra región!\p"
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Elige uno de los tres!$"
# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: ¡Conque te has fijado\n"
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "en el POKéMON FUEGO CYNDAQUIL!\p"
# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Tan inteligente como siempre!\p"
# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Entonces el CYNDAQUIL, ¿no?$"
# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: ¡Conque te has fijado\n"
# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "en el POKéMON AGUA TOTODILE!\p"
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Sabes escoger.\p"
# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Entonces el TOTODILE, ¿no?$"
# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: ¡Conque te has fijado\n"
# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "en el POKéMON PLANTA CHIKORITA!\p"
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Veo que sabes lo que haces.\p"
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Entonces el CHIKORITA, ¿no?$"
# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: Tómate el tiempo\n"
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "que quieras para decidir.\p"
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Todos tienen un valor incalculable.$"
# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: I see!\n"
# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You picked a fine POKéMON!$"
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡{PLAYER} recibió el {STR_VAR_1}\n"
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "de manos del PROF. ABEDUL!$"
# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Want to give a nickname to\n"
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the {STR_VAR_1} you received?$"
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. ABEDUL: Escucha, {PLAYER}{KUN},\n"
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "has completado la POKéDEX de HOENN,\l"
# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "pero aún puedes aprender mucho.\p"
# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "El camino de los POKéMON no acaba aquí.\p"
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡En algún lugar, hay una zona\n"
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "de hierba alta esperándote!$"
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ya tienes el POKéMON prometido.\n"
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Será mejor olvidarse de los demás.$"
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you don’t have any room for\n"
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéMON.$"
# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "AURA: {PLAYER}{KUN}, después de esto…\n"
# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Qué piensas hacer?\p"
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Vas a seguir combatiendo\n"
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "para perfeccionar tu técnica?\p"
# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿O vas a intentar completar\n"
# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "la POKéDEX NACIONAL?\p"
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yo me quedaré a ayudar al PROFESOR.$"
# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRUNO: En vez de coleccionar\n"
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "más POKéMON, prefiero centrarme\l"
# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "en entrenar bien al que he elegido.$"
# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "AURA: ¡Ah, hola, {PLAYER}{KUN}!\n"
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Has ido alguna vez a ese sitio?\l"
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Al FRENTE de BATALLA?$"
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRUNO: ¡Hola, {PLAYER}!\n"
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Has ido ya a ese sitio?\l"
# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¿Al FRENTE de BATALLA?$"
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Bip!\p"
# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "TRETO: ¡Hola, {PLAYER}!\n"
# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Soy yo, TRETO.\p"
# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Estoy a bordo del S.S. MAREA.\n"
# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Nada como la brisa del mar abierto!\p"
# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Por cierto…\p"
# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hay un sitio al que querría\n"
# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invitarte.\p"
# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Si te interesa, toma el ferry en\n"
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CIUDAD PORTUAL o en CALAGUA.\p"
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Te contaré más cuando nos veamos.\n"
# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Te estaré esperando!\p"
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "¡Clic!$"
