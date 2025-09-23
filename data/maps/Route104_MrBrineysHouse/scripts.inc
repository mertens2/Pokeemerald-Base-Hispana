# 104 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 105 "data/maps/Route104_MrBrineysHouse/scripts.pory"
.set LOCALID_BRINEY, 1
# 106 "data/maps/Route104_MrBrineysHouse/scripts.pory"
.set LOCALID_PEEKO, 2
# 107 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 108 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_MapScripts::
# 109 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MrBrineysHouse_OnTransition
# 110 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.byte 0
# 111 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 112 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_OnTransition:
# 113 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_LANDMARK_MR_BRINEY_HOUSE
# 114 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call_if_eq VAR_BRINEY_HOUSE_STATE, 1, Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos
# 115 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call_if_set FLAG_RECEIVED_POKENAV, Route104_MrBrineysHouse_EventScript_HideRustboroRival
# 116 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 117 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 118 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_HideRustboroRival::
# 119 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 120 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	return
# 121 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 122 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos::
# 123 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEY, 9, 3
# 124 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEY, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT
# 125 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_PEEKO, 9, 6
# 126 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_PEEKO, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN
# 127 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	return
# 128 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 129 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Briney::
# 130 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 131 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 132 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call_if_unset FLAG_MR_BRINEY_SAILING_INTRO, Route104_MrBrineysHouse_EventScript_SailingIntro
# 133 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_MrBrineysHouse_EventScript_SailBothDeliveries
# 134 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route104_MrBrineysHouse_EventScript_SailDeliverPackage
# 135 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound
# 136 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 137 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 138 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailingIntro::
# 139 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_MR_BRINEY_SAILING_INTRO
# 140 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_WaitUpPeeko, MSGBOX_DEFAULT
# 141 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford, MSGBOX_YESNO
# 142 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 143 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 144 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 145 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 146 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_WhereAreWeBound::
# 147 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	message Route104_MrBrineysHouse_Text_WhereAreWeBound
# 148 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmessage
# 149 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	multichoicedefault 20, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 150 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	switch VAR_RESULT
# 151 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 0, Route104_MrBrineysHouse_EventScript_SailToDewford
# 152 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 1, Route104_MrBrineysHouse_EventScript_DeclineSailing
# 153 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case MULTI_B_PRESSED, Route104_MrBrineysHouse_EventScript_DeclineSailing
# 154 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 155 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 156 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailBothDeliveries::
# 157 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford, MSGBOX_YESNO
# 158 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 159 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 160 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 161 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 162 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailDeliverPackage::
# 163 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford, MSGBOX_YESNO
# 164 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 165 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 166 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 167 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 168 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing::
# 169 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_DeclineDeliverySail, MSGBOX_DEFAULT
# 170 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 171 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 172 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 173 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_DeclineSailing::
# 174 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail, MSGBOX_DEFAULT
# 175 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 176 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 177 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 178 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailToDewford::
# 179 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_SetSailForDewford, MSGBOX_DEFAULT
# 180 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 181 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 1
# 182 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY
# 183 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 184 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 185 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 186 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 187 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 188 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_RIVAL
# 189 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	warp MAP_ROUTE104, 13, 51
# 190 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitstate
# 191 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	releaseall
# 192 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 193 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 194 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Peeko::
# 195 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 196 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 197 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitse
# 198 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 199 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_Peeko, MSGBOX_DEFAULT
# 200 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmoncry
# 201 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 202 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end

Route104_MrBrineysHouse_Text_WaitUpPeeko::
# 2 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "¡Quieto, Peeko!$"

Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford::
# 13 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "¡Oh, eres {PLAYER}!\n"
	.string "¿Tienes que ir hasta Dewford?\p"
	.string "¡Cuenta conmigo para llevarte!$"

Route104_MrBrineysHouse_Text_SetSailForDewford::
# 24 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "¡Vamos a Dewford!$"

Route104_MrBrineysHouse_Text_DeclineDeliverySail::
# 36 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "¿Entonces no quieres?\p"
	.string "¡Ven cuando estés list{OA}!$"

Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford::
# 48 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "¡Ya me contaron todo!\p"
	.string "¿Debes llevar una carta\n"
	.string "a Dewford, no?\p"
	.string "¡Pues vamos!$"

Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford::
# 60 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "¡Ya me contaron todo!\p"
	.string "¿Debes llevar algo\n"
	.string "a Slateport, no?\p"
	.string "¡Pasemos por Dewford primero!$"

Route104_MrBrineysHouse_Text_WhereAreWeBound::
# 71 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "¿A dónde te llevo hoy?$"

Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail::
# 82 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "¿Entonces no quieres?\p"
	.string "¡No te preocupes,\n"
	.string "ven cuando estés list{OA}!$"

Route104_MrBrineysHouse_Text_Peeko::
# 93 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "¡Wingull!$"
