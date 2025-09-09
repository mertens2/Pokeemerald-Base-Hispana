# 1 "data/maps/DewfordTown/scripts.pory"

# 2 "data/maps/DewfordTown/scripts.pory"
DewfordTown_MapScripts::
# 3 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
# 4 "data/maps/DewfordTown/scripts.pory"
	.byte 0
# 5 "data/maps/DewfordTown/scripts.pory"

# 6 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnTransition:
# 7 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 8 "data/maps/DewfordTown/scripts.pory"
	end
# 9 "data/maps/DewfordTown/scripts.pory"

# 10 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney::
# 11 "data/maps/DewfordTown/scripts.pory"
	lock
# 12 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 13 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
# 14 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_WhereAreWeBound
# 15 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 16 "data/maps/DewfordTown/scripts.pory"
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
# 17 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_EventScript_ChoosePetalburg
# 19 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordTown_EventScript_ChooseSlateport
# 20 "data/maps/DewfordTown/scripts.pory"
	case 2, DewfordTown_EventScript_CancelSailSelect
# 21 "data/maps/DewfordTown/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
# 22 "data/maps/DewfordTown/scripts.pory"
	end
# 23 "data/maps/DewfordTown/scripts.pory"

# 24 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChoosePetalburg::
# 25 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
# 26 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 27 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 28 "data/maps/DewfordTown/scripts.pory"
	release
# 29 "data/maps/DewfordTown/scripts.pory"
	end
# 30 "data/maps/DewfordTown/scripts.pory"

# 31 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChooseSlateport::
# 32 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
# 33 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 34 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport
# 35 "data/maps/DewfordTown/scripts.pory"
	release
# 36 "data/maps/DewfordTown/scripts.pory"
	end
# 37 "data/maps/DewfordTown/scripts.pory"

# 38 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelSailSelect::
# 39 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
# 40 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 41 "data/maps/DewfordTown/scripts.pory"
	release
# 42 "data/maps/DewfordTown/scripts.pory"
	end
# 43 "data/maps/DewfordTown/scripts.pory"

# 44 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt::
# 45 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
# 46 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
# 47 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
# 48 "data/maps/DewfordTown/scripts.pory"
	release
# 49 "data/maps/DewfordTown/scripts.pory"
	end
# 50 "data/maps/DewfordTown/scripts.pory"

# 51 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailBackToPetalburg::
# 52 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
# 53 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 54 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 55 "data/maps/DewfordTown/scripts.pory"
	end
# 56 "data/maps/DewfordTown/scripts.pory"

# 57 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Woman::
# 58 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
# 59 "data/maps/DewfordTown/scripts.pory"
	end
# 60 "data/maps/DewfordTown/scripts.pory"

# 61 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TownSign::
# 62 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
# 63 "data/maps/DewfordTown/scripts.pory"
	end
# 64 "data/maps/DewfordTown/scripts.pory"

# 65 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GymSign::
# 66 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
# 67 "data/maps/DewfordTown/scripts.pory"
	end
# 68 "data/maps/DewfordTown/scripts.pory"

# 69 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HallSign::
# 70 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
# 71 "data/maps/DewfordTown/scripts.pory"
	end
# 72 "data/maps/DewfordTown/scripts.pory"

# 73 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman::
# 74 "data/maps/DewfordTown/scripts.pory"
	lock
# 75 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 76 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
# 77 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
# 78 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
# 79 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
# 80 "data/maps/DewfordTown/scripts.pory"
	end
# 81 "data/maps/DewfordTown/scripts.pory"

# 82 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveOldRod::
# 83 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 84 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 85 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 86 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 87 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 88 "data/maps/DewfordTown/scripts.pory"
	release
# 89 "data/maps/DewfordTown/scripts.pory"
	end
# 90 "data/maps/DewfordTown/scripts.pory"

# 91 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NotGettingItchToFish::
# 92 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 93 "data/maps/DewfordTown/scripts.pory"
	release
# 94 "data/maps/DewfordTown/scripts.pory"
	end
# 95 "data/maps/DewfordTown/scripts.pory"

# 96 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing::
# 97 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_HowsYourFishing
# 98 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 99 "data/maps/DewfordTown/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 100 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
# 101 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
# 102 "data/maps/DewfordTown/scripts.pory"
	end
# 103 "data/maps/DewfordTown/scripts.pory"

# 104 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingExcellent::
# 105 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 106 "data/maps/DewfordTown/scripts.pory"
	release
# 107 "data/maps/DewfordTown/scripts.pory"
	end
# 108 "data/maps/DewfordTown/scripts.pory"

# 109 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingNotSoGood::
# 110 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
# 111 "data/maps/DewfordTown/scripts.pory"
	release
# 112 "data/maps/DewfordTown/scripts.pory"
	end
# 113 "data/maps/DewfordTown/scripts.pory"

# 114 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg::
# 115 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 116 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 117 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN, 0
# 118 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, DewfordTown_Movement_BrineyBoardBoat
# 119 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 120 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_DEWFORD_BRINEY
# 121 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 122 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 124 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 125 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BOAT, DewfordTown_Movement_SailToPetalburg
# 126 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_SailToPetalburg
# 127 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE104
# 129 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 130 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
# 131 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 132 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE104
# 133 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 134 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 135 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 136 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 137 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_DEWFORD_BOAT, MAP_DEWFORD_TOWN
# 138 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 139 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 140 "data/maps/DewfordTown/scripts.pory"
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
# 141 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 142 "data/maps/DewfordTown/scripts.pory"
	waitstate
# 143 "data/maps/DewfordTown/scripts.pory"
	release
# 144 "data/maps/DewfordTown/scripts.pory"
	end
# 145 "data/maps/DewfordTown/scripts.pory"

# 146 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport::
# 147 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 148 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 149 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN, 1
# 150 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, DewfordTown_Movement_BrineyBoardBoat
# 151 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 152 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_DEWFORD_BRINEY
# 153 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 154 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 155 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 156 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 157 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BOAT, DewfordTown_Movement_SailToSlateport
# 158 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_SailToSlateport
# 159 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 161 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE109
# 162 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
# 163 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_ROUTE109_BRINEY, 21, 26
# 165 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_ROUTE109_BRINEY
# 166 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109, 0
# 167 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_ROUTE109_BRINEY, DewfordTown_Movement_BrineyExitBoat
# 168 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 169 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 170 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_ROUTE109_BOAT
# 171 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 172 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 173 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_DEWFORD_BOAT, MAP_DEWFORD_TOWN
# 174 "data/maps/DewfordTown/scripts.pory"
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
# 175 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
# 176 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 177 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 178 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 179 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109
# 180 "data/maps/DewfordTown/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE109_BRINEY
# 181 "data/maps/DewfordTown/scripts.pory"
	release
# 182 "data/maps/DewfordTown/scripts.pory"
	end
# 183 "data/maps/DewfordTown/scripts.pory"

# 184 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateportDeliverGoods::
# 185 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
# 186 "data/maps/DewfordTown/scripts.pory"
	return
# 187 "data/maps/DewfordTown/scripts.pory"

# 188 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateport::
# 189 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
# 190 "data/maps/DewfordTown/scripts.pory"
	return
# 191 "data/maps/DewfordTown/scripts.pory"

# 192 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToPetalburg:
# 193 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 194 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 195 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 196 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 197 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 198 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 199 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 200 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 201 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 202 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 203 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 204 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 205 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 206 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 207 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 208 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 209 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 210 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 211 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 212 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 213 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 214 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 215 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 216 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 217 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 218 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 219 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 220 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 221 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 222 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 223 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 224 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 225 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 226 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 227 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 228 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 229 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 230 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 231 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 232 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 233 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 234 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 235 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 236 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 237 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 238 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 239 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 240 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 241 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 242 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 243 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 244 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 245 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 246 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 247 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 248 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 249 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 250 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 251 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 252 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 253 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 254 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 255 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 256 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 257 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 258 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 259 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 260 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 261 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 262 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 263 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 264 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 265 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 266 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 267 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 268 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 269 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 270 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 271 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 272 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 273 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 274 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 275 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 276 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 277 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 278 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 279 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 280 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 281 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 282 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 283 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 284 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 285 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 286 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 287 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 288 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 289 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 290 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 291 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 292 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 293 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 294 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 295 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 296 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 297 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 298 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 299 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 300 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 301 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 302 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 303 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 304 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 305 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 306 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 307 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 308 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 309 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 310 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 311 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 312 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 313 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 314 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 315 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 316 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 317 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 318 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 319 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 320 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 321 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 322 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 323 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 324 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 325 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 326 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 327 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 328 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 329 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 330 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 331 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 332 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 333 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 334 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 335 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 336 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 337 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 338 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 339 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 340 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 341 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 342 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 343 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 344 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 345 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 346 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 347 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 348 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 349 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 350 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 351 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 352 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 353 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 354 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 355 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 356 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 357 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 358 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 359 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 360 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 361 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 362 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 363 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 364 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 365 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 366 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 367 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 368 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 369 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 370 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 371 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 372 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 373 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 374 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 375 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 376 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 377 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 378 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 379 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 380 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 381 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 382 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 383 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 384 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 385 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 386 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 387 "data/maps/DewfordTown/scripts.pory"
	step_end
# 388 "data/maps/DewfordTown/scripts.pory"

# 389 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToSlateport:
# 390 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 391 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 392 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 393 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 394 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 395 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 396 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 397 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 398 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 399 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 400 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 401 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 402 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 403 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 404 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 405 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 406 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 407 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 408 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 409 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 410 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 411 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 412 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 413 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 414 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 415 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 416 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 417 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 418 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 419 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 420 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 421 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 422 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 423 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 424 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 425 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 426 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 427 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 428 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 429 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 430 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 431 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 432 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 433 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 434 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 435 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 436 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 437 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 438 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 439 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 440 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 441 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 442 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 443 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 444 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 445 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 446 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 447 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 448 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 449 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 450 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 451 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 452 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 453 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 454 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 455 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 456 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 457 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 458 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 459 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 460 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 461 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 462 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 463 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 464 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 465 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 466 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 467 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 468 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 469 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 470 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 471 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 472 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 473 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 474 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 475 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 476 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 477 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 478 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 479 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 480 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 481 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 482 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 483 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 484 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 485 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 486 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 487 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 488 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 489 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 490 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 491 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 492 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 493 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 494 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 495 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 496 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 497 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 498 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 499 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 500 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 501 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 502 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 503 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 504 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 505 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 506 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 507 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 508 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 509 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 510 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 511 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 512 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 513 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 514 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 515 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 516 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 517 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 518 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 519 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 520 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 521 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 522 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 523 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 524 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 525 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 526 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 527 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 528 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 529 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 530 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 531 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 532 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 533 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 534 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 535 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 536 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 537 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 538 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 539 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 540 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 541 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 542 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 543 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 544 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 545 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 546 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 547 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 548 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 549 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 550 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 551 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 552 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 553 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 554 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 555 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 556 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 557 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 558 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 559 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 560 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 561 "data/maps/DewfordTown/scripts.pory"
	step_end
# 562 "data/maps/DewfordTown/scripts.pory"

# 563 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerBoardBoat:
# 564 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 565 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 566 "data/maps/DewfordTown/scripts.pory"
	step_end
# 567 "data/maps/DewfordTown/scripts.pory"

# 568 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatPetalburg:
# 569 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 570 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 571 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 572 "data/maps/DewfordTown/scripts.pory"
	step_end
# 573 "data/maps/DewfordTown/scripts.pory"

# 574 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatSlateport:
# 575 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 576 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 577 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 578 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 579 "data/maps/DewfordTown/scripts.pory"
	step_end
# 580 "data/maps/DewfordTown/scripts.pory"

# 581 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyBoardBoat:
# 582 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 583 "data/maps/DewfordTown/scripts.pory"
	step_end
# 584 "data/maps/DewfordTown/scripts.pory"

# 585 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyExitBoat:
# 586 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 587 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 588 "data/maps/DewfordTown/scripts.pory"
	step_end
# 589 "data/maps/DewfordTown/scripts.pory"

# 590 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy::
# 591 "data/maps/DewfordTown/scripts.pory"
	lock
# 592 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 593 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 594 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 595 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
# 596 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
# 597 "data/maps/DewfordTown/scripts.pory"
	end
# 598 "data/maps/DewfordTown/scripts.pory"

# 599 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ConfirmTrendyPhrase::
# 600 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 601 "data/maps/DewfordTown/scripts.pory"
	release
# 602 "data/maps/DewfordTown/scripts.pory"
	end
# 603 "data/maps/DewfordTown/scripts.pory"

# 604 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase::
# 605 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 606 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 607 "data/maps/DewfordTown/scripts.pory"
	call Common_ShowEasyChatScreen
# 608 "data/maps/DewfordTown/scripts.pory"
	lock
# 609 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 610 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
# 611 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
# 612 "data/maps/DewfordTown/scripts.pory"
	end
# 613 "data/maps/DewfordTown/scripts.pory"

# 614 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase::
# 615 "data/maps/DewfordTown/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 616 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
# 617 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
# 618 "data/maps/DewfordTown/scripts.pory"
	release
# 619 "data/maps/DewfordTown/scripts.pory"
	end
# 620 "data/maps/DewfordTown/scripts.pory"

# 621 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelNewTrendyPhrase::
# 622 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
# 623 "data/maps/DewfordTown/scripts.pory"
	release
# 624 "data/maps/DewfordTown/scripts.pory"
	end
# 625 "data/maps/DewfordTown/scripts.pory"

# 626 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PhraseNotTrendyEnough::
# 627 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
# 628 "data/maps/DewfordTown/scripts.pory"
	release
# 629 "data/maps/DewfordTown/scripts.pory"
	end
# 630 "data/maps/DewfordTown/scripts.pory"

# 631 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TinyIslandCommunity:
# 632 "data/maps/DewfordTown/scripts.pory"
	.string "PUEBLO AZULIZA es una islita de nada,\n"
# 633 "data/maps/DewfordTown/scripts.pory"
	.string "pero si se crea una moda aquí,\l"
# 634 "data/maps/DewfordTown/scripts.pory"
	.string "enseguida nos copian todos.$"
# 635 "data/maps/DewfordTown/scripts.pory"

# 636 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TownSign:
# 637 "data/maps/DewfordTown/scripts.pory"
	.string "PUEBLO AZULIZA\n"
# 638 "data/maps/DewfordTown/scripts.pory"
	.string "“Una isla en medio del mar.”$"
# 639 "data/maps/DewfordTown/scripts.pory"

# 640 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GymSign:
# 641 "data/maps/DewfordTown/scripts.pory"
	.string "GIMNASIO POKéMON de PUEBLO AZULIZA\n"
# 642 "data/maps/DewfordTown/scripts.pory"
	.string "LÍDER: MARCIAL\l"
# 643 "data/maps/DewfordTown/scripts.pory"
	.string "“¡Soy como un maremoto!”$"
# 644 "data/maps/DewfordTown/scripts.pory"

# 645 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HallSign:
# 646 "data/maps/DewfordTown/scripts.pory"
	.string "CLUB de AZULIZA\n"
# 647 "data/maps/DewfordTown/scripts.pory"
	.string "“¡Sabemos todo de todo y aún más!”$"
# 648 "data/maps/DewfordTown/scripts.pory"

# 649 "data/maps/DewfordTown/scripts.pory"
Route104_Text_LandedInDewfordDeliverLetter:
# 650 "data/maps/DewfordTown/scripts.pory"
	.string "SR. ARENQUE: ¡Eh, grumete!\n"
# 651 "data/maps/DewfordTown/scripts.pory"
	.string "¡Hemos arribado a AZULIZA!\p"
# 652 "data/maps/DewfordTown/scripts.pory"
	.string "Supongo que has venido a entregar esa\n"
# 653 "data/maps/DewfordTown/scripts.pory"
	.string "CARTA a, ¿cómo se llama…?, ¡MÁXIMO!$"
# 654 "data/maps/DewfordTown/scripts.pory"

# 655 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SetSailBackToPetalburg:
# 656 "data/maps/DewfordTown/scripts.pory"
	.string "SR. ARENQUE: ¿Has entregado la CARTA?\p"
# 657 "data/maps/DewfordTown/scripts.pory"
	.string "¿O quieres volver a PETALIA?$"
# 658 "data/maps/DewfordTown/scripts.pory"

# 659 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail2:
# 660 "data/maps/DewfordTown/scripts.pory"
	.string "SR. ARENQUE: ¡Pues rumbo a PETALIA!\p"
# 661 "data/maps/DewfordTown/scripts.pory"
	.string "¡Levad anclas!\n"
# 662 "data/maps/DewfordTown/scripts.pory"
	.string "¡PEEKO, bonito, nos vamos!$"
# 663 "data/maps/DewfordTown/scripts.pory"

# 664 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GoDeliverIllBeWaiting:
# 665 "data/maps/DewfordTown/scripts.pory"
	.string "SR. ARENQUE: Vale, pues ve a entregar\n"
# 666 "data/maps/DewfordTown/scripts.pory"
	.string "la CARTA. Yo te espero aquí.$"
# 667 "data/maps/DewfordTown/scripts.pory"

# 668 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineyLandedInDewford:
# 669 "data/maps/DewfordTown/scripts.pory"
	.string "SR. ARENQUE: ¡Eh, grumete!\n"
# 670 "data/maps/DewfordTown/scripts.pory"
	.string "¡Hemos arribado a AZULIZA!\p"
# 671 "data/maps/DewfordTown/scripts.pory"
	.string "Cuando quieras volver a hacerte\n"
# 672 "data/maps/DewfordTown/scripts.pory"
	.string "a la mar, me lo dices, ¿eh?$"
# 673 "data/maps/DewfordTown/scripts.pory"

# 674 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_WhereAreWeBound:
# 675 "data/maps/DewfordTown/scripts.pory"
	.string "SR. ARENQUE: ¡Eh, grumete!\n"
# 676 "data/maps/DewfordTown/scripts.pory"
	.string "¡Yo levo anclas cuando quieras!\p"
# 677 "data/maps/DewfordTown/scripts.pory"
	.string "Venga, ¿adónde vamos?$"
# 678 "data/maps/DewfordTown/scripts.pory"

# 679 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail:
# 680 "data/maps/DewfordTown/scripts.pory"
	.string "SR. ARENQUE: ¿A PETALIA, dices?\p"
# 681 "data/maps/DewfordTown/scripts.pory"
	.string "¡Levad anclas!\n"
# 682 "data/maps/DewfordTown/scripts.pory"
	.string "¡PEEKO, bonito, nos vamos!$"
# 683 "data/maps/DewfordTown/scripts.pory"

# 684 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SlateportWereSettingSail:
# 685 "data/maps/DewfordTown/scripts.pory"
	.string "SR. ARENQUE: ¿A CIUDAD PORTUAL, dices?\p"
# 686 "data/maps/DewfordTown/scripts.pory"
	.string "¡Levad anclas!\n"
# 687 "data/maps/DewfordTown/scripts.pory"
	.string "¡PEEKO, bonito, nos vamos!$"
# 688 "data/maps/DewfordTown/scripts.pory"

# 689 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
# 690 "data/maps/DewfordTown/scripts.pory"
	.string "SR. ARENQUE: Cuando quieras volver\n"
# 691 "data/maps/DewfordTown/scripts.pory"
	.string "a hacerte a la mar, llámame.$"
# 692 "data/maps/DewfordTown/scripts.pory"

# 693 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GettingItchToFish:
# 694 "data/maps/DewfordTown/scripts.pory"
	.string "Éste es un buen lugar de pesca.\n"
# 695 "data/maps/DewfordTown/scripts.pory"
	.string "¿Tú también te mueres de ganas\l"
# 696 "data/maps/DewfordTown/scripts.pory"
	.string "por echar el anzuelo?$"
# 697 "data/maps/DewfordTown/scripts.pory"

# 698 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GiveYouOneOfMyRods:
# 699 "data/maps/DewfordTown/scripts.pory"
	.string "¡Me gusta lo que oigo!\p"
# 700 "data/maps/DewfordTown/scripts.pory"
	.string "¡Por eso te voy a dar una de mis CAÑAS!$"
# 701 "data/maps/DewfordTown/scripts.pory"

# 702 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThrowInFishingAdvice:
# 703 "data/maps/DewfordTown/scripts.pory"
	.string "Y, como regalito extra, te voy a dar\n"
# 704 "data/maps/DewfordTown/scripts.pory"
	.string "un par de consejos…\p"
# 705 "data/maps/DewfordTown/scripts.pory"
	.string "Primero, mira hacia el agua y lanza\n"
# 706 "data/maps/DewfordTown/scripts.pory"
	.string "la CAÑA.\p"
# 707 "data/maps/DewfordTown/scripts.pory"
	.string "Concéntrate…\n"
# 708 "data/maps/DewfordTown/scripts.pory"
	.string "Si pican, tira de la CAÑA.\p"
# 709 "data/maps/DewfordTown/scripts.pory"
	.string "A veces atraparás buenas piezas en\n"
# 710 "data/maps/DewfordTown/scripts.pory"
	.string "nada de tiempo, pero para las más\l"
# 711 "data/maps/DewfordTown/scripts.pory"
	.string "gordas necesitarás saber cuándo tirar\l"
# 712 "data/maps/DewfordTown/scripts.pory"
	.string "de la CAÑA para hacerte con ellas.$"
# 713 "data/maps/DewfordTown/scripts.pory"

# 714 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThatsTooBadThen:
# 715 "data/maps/DewfordTown/scripts.pory"
	.string "¿Ésas tenemos?\n"
# 716 "data/maps/DewfordTown/scripts.pory"
	.string "Pues peor para ti…$"
# 717 "data/maps/DewfordTown/scripts.pory"

# 718 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HowsYourFishing:
# 719 "data/maps/DewfordTown/scripts.pory"
	.string "¡Hey!\n"
# 720 "data/maps/DewfordTown/scripts.pory"
	.string "¿Cómo va la pesca?$"
# 721 "data/maps/DewfordTown/scripts.pory"

# 722 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GreatHaulInSomeBigOnes:
# 723 "data/maps/DewfordTown/scripts.pory"
	.string "¿En serio? ¡Genial!\n"
# 724 "data/maps/DewfordTown/scripts.pory"
	.string "¡Atrapa una buena pieza!$"
# 725 "data/maps/DewfordTown/scripts.pory"

# 726 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_FishingAdvice:
# 727 "data/maps/DewfordTown/scripts.pory"
	.string "Bueno, bueno, no hay que deprimirse…\n"
# 728 "data/maps/DewfordTown/scripts.pory"
	.string "Te voy a dar un par de consejos…\p"
# 729 "data/maps/DewfordTown/scripts.pory"
	.string "Primero, mira hacia el agua y lanza\n"
# 730 "data/maps/DewfordTown/scripts.pory"
	.string "la CAÑA.\p"
# 731 "data/maps/DewfordTown/scripts.pory"
	.string "Concéntrate…\n"
# 732 "data/maps/DewfordTown/scripts.pory"
	.string "Si pican, tira de la CAÑA.\p"
# 733 "data/maps/DewfordTown/scripts.pory"
	.string "A veces atraparás buenas piezas en\n"
# 734 "data/maps/DewfordTown/scripts.pory"
	.string "seguida, pero para las más gordas\l"
# 735 "data/maps/DewfordTown/scripts.pory"
	.string "necesitarás saber cuándo tirar de\l"
# 736 "data/maps/DewfordTown/scripts.pory"
	.string "la CAÑA para hacerte con ellas.$"
# 737 "data/maps/DewfordTown/scripts.pory"

# 738 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XIsTheBiggestHappeningThingRight:
# 739 "data/maps/DewfordTown/scripts.pory"
	.string "¡Yo soy el más guay, por eso me\n"
# 740 "data/maps/DewfordTown/scripts.pory"
	.string "sé todo lo que está a la última!\p"
# 741 "data/maps/DewfordTown/scripts.pory"
	.string "Dime, ¿has oído hablar de\n"
# 742 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”?\p"
# 743 "data/maps/DewfordTown/scripts.pory"
	.string "¡Exacto!\n"
# 744 "data/maps/DewfordTown/scripts.pory"
	.string "¡Pues claro que te suena!\p"
# 745 "data/maps/DewfordTown/scripts.pory"
	.string "Porque, vamos, está claro,\n"
# 746 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 747 "data/maps/DewfordTown/scripts.pory"
	.string "es lo último de lo último.\p"
# 748 "data/maps/DewfordTown/scripts.pory"
	.string "Vengas de donde vengas,\n"
# 749 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 750 "data/maps/DewfordTown/scripts.pory"
	.string "es lo que está de moda, ¿a que sí?$"
# 751 "data/maps/DewfordTown/scripts.pory"

# 752 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TellMeWhatsNewAndIn:
# 753 "data/maps/DewfordTown/scripts.pory"
	.string "¿Cómo?\n"
# 754 "data/maps/DewfordTown/scripts.pory"
	.string "¿Que no es lo que más mola?\p"
# 755 "data/maps/DewfordTown/scripts.pory"
	.string "Bueno, pues entonces dime qué es\n"
# 756 "data/maps/DewfordTown/scripts.pory"
	.string "lo más “in” del momento…$"
# 757 "data/maps/DewfordTown/scripts.pory"

# 758 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_OfCourseIKnowAboutThat:
# 759 "data/maps/DewfordTown/scripts.pory"
	.string "¿Eh?\n"
# 760 "data/maps/DewfordTown/scripts.pory"
	.string "¿“{STR_VAR_2}”?\p"
# 761 "data/maps/DewfordTown/scripts.pory"
	.string "Qué cosa…\p"
# 762 "data/maps/DewfordTown/scripts.pory"
	.string "Pero… ¡Sí! ¡Por supuesto!\n"
# 763 "data/maps/DewfordTown/scripts.pory"
	.string "¡Si yo ya lo sabía, qué despiste!\p"
# 764 "data/maps/DewfordTown/scripts.pory"
	.string "Yo sigo las modas de cerca…\n"
# 765 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”, ¿no?\p"
# 766 "data/maps/DewfordTown/scripts.pory"
	.string "Sí, sí, no hay ninguna duda.\n"
# 767 "data/maps/DewfordTown/scripts.pory"
	.string "¡“{STR_VAR_2}”\l"
# 768 "data/maps/DewfordTown/scripts.pory"
	.string "es lo más supermegaguay!\p"
# 769 "data/maps/DewfordTown/scripts.pory"
	.string "¡Mola cantidubi!\n"
# 770 "data/maps/DewfordTown/scripts.pory"
	.string "¿Creías que no lo sabía?\p"
# 771 "data/maps/DewfordTown/scripts.pory"
	.string "Y “{STR_VAR_1}”…\n"
# 772 "data/maps/DewfordTown/scripts.pory"
	.string "está ya más que fuera de onda.\p"
# 773 "data/maps/DewfordTown/scripts.pory"
	.string "Ahora, “{STR_VAR_2}”\n"
# 774 "data/maps/DewfordTown/scripts.pory"
	.string "es lo que le chifla a todo el mundo.$"
# 775 "data/maps/DewfordTown/scripts.pory"

# 776 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XHuhIThinkYIsCool:
# 777 "data/maps/DewfordTown/scripts.pory"
	.string "¿Eh?\n"
# 778 "data/maps/DewfordTown/scripts.pory"
	.string "¿“{STR_VAR_2}”?\p"
# 779 "data/maps/DewfordTown/scripts.pory"
	.string "Pues a mí me parece que\n"
# 780 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 781 "data/maps/DewfordTown/scripts.pory"
	.string "es lo que mola de verdad.$"
# 782 "data/maps/DewfordTown/scripts.pory"

# 783 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
# 784 "data/maps/DewfordTown/scripts.pory"
	.string "Bueno, si oyes de alguna nueva moda\n"
# 785 "data/maps/DewfordTown/scripts.pory"
	.string "que cause furor, ven a decírmelo, ¿eh?$"
# 786 "data/maps/DewfordTown/scripts.pory"

# 787 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_YeahDefinitionOfInRightNow:
# 788 "data/maps/DewfordTown/scripts.pory"
	.string "¡Por supuestísimo!\p"
# 789 "data/maps/DewfordTown/scripts.pory"
	.string "Si hay algo que está a la última,\n"
# 790 "data/maps/DewfordTown/scripts.pory"
	.string "es “{STR_VAR_1}”.$"
