Common_EventScript_PkmnCenterNursePlaceholder::
# 2 "data/scripts/pkmn_center_nurse.pory"
	lock
# 3 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 4 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 5 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_IllTakeYourPkmn
# 6 "data/scripts/pkmn_center_nurse.pory"
	hidefollower 0
# 7 "data/scripts/pkmn_center_nurse.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 8 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set ! FLAG_POKERUS_EXPLAINED, Common_EventScript_PkmnCenterNursePlaceholder_2
Common_EventScript_PkmnCenterNursePlaceholder_1:
# 11 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_ReturnPkmn
# 12 "data/scripts/pkmn_center_nurse.pory"
	closemessage
	end

Common_EventScript_PkmnCenterNursePlaceholder_2:
# 9 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_CheckPokerus
	goto Common_EventScript_PkmnCenterNursePlaceholder_1


Common_Trigger_SetMartMusic::
# 17 "data/scripts/pkmn_center_nurse.pory"
	playbgm MUS_POKE_MART, FALSE
# 18 "data/scripts/pkmn_center_nurse.pory"
	applymoveplayer Common_Movement_WalkRight
# 19 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_TEMP_0, 1
# 20 "data/scripts/pkmn_center_nurse.pory"
	releaseall
	return


Common_Trigger_SetCenterMusic::
# 24 "data/scripts/pkmn_center_nurse.pory"
	playbgm MUS_POKE_CENTER, FALSE
# 25 "data/scripts/pkmn_center_nurse.pory"
	applymoveplayer Common_Movement_WalkLeft
# 26 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_TEMP_0, 0
# 27 "data/scripts/pkmn_center_nurse.pory"
	releaseall
	return


Common_EventScript_TraditionalPkmnCenterNurse::
# 33 "data/scripts/pkmn_center_nurse.pory"
	lock
# 34 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 35 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 0
# 40 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 41 "data/scripts/pkmn_center_nurse.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_TraditionalPkmnCenterNurse_2
# 65 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_Goodbye
Common_EventScript_TraditionalPkmnCenterNurse_1:
# 67 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 68 "data/scripts/pkmn_center_nurse.pory"
	releaseall
	end

Common_EventScript_TraditionalPkmnCenterNurse_2:
# 42 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 43 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_IllTakeYourPkmn
# 44 "data/scripts/pkmn_center_nurse.pory"
	hidefollower 0
# 45 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceLeft
# 46 "data/scripts/pkmn_center_nurse.pory"
	msgbox Common_EventScript_TraditionalPkmnCenterNurse_Text_0
# 47 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 48 "data/scripts/pkmn_center_nurse.pory"
	playmoncry SPECIES_COMFEY, CRY_MODE_NORMAL
# 49 "data/scripts/pkmn_center_nurse.pory"
	waitmoncry
# 50 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceRight
# 51 "data/scripts/pkmn_center_nurse.pory"
	msgbox Common_EventScript_TraditionalPkmnCenterNurse_Text_1
# 52 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 53 "data/scripts/pkmn_center_nurse.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 54 "data/scripts/pkmn_center_nurse.pory"
	waitmoncry
# 55 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceDown
# 56 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_HealPokemonTraditionally
# 57 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 58 "data/scripts/pkmn_center_nurse.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 59 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set ! FLAG_POKERUS_EXPLAINED, Common_EventScript_TraditionalPkmnCenterNurse_6
Common_EventScript_TraditionalPkmnCenterNurse_5:
# 62 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_ReturnPkmn
	goto Common_EventScript_TraditionalPkmnCenterNurse_1

Common_EventScript_TraditionalPkmnCenterNurse_6:
# 60 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_CheckPokerus
	goto Common_EventScript_TraditionalPkmnCenterNurse_5


Common_EventScript_Comfey::
# 73 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 74 "data/scripts/pkmn_center_nurse.pory"
	lockall
# 75 "data/scripts/pkmn_center_nurse.pory"
	playmoncry SPECIES_COMFEY, CRY_MODE_NORMAL
# 76 "data/scripts/pkmn_center_nurse.pory"
	waitmoncry
# 77 "data/scripts/pkmn_center_nurse.pory"
	msgbox Common_EventScript_Comfey_Text_0
# 78 "data/scripts/pkmn_center_nurse.pory"
	releaseall
	return


Common_EventScript_Chansey::
# 81 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 82 "data/scripts/pkmn_center_nurse.pory"
	lockall
# 83 "data/scripts/pkmn_center_nurse.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 84 "data/scripts/pkmn_center_nurse.pory"
	waitmoncry
# 85 "data/scripts/pkmn_center_nurse.pory"
	msgbox Common_EventScript_Chansey_Text_0
# 86 "data/scripts/pkmn_center_nurse.pory"
	releaseall
	return


# 109 "data/scripts/pkmn_center_nurse.pory"

# 110 "data/scripts/pkmn_center_nurse.pory"
Common_EventScript_PkmnCenterNurse::
# 111 "data/scripts/pkmn_center_nurse.pory"
	lock
# 112 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 113 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 0
# 114 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, CountPlayerTrainerStars
# 115 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 4, EventScript_PkmnCenterNurse_GoldCard
# 116 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 117 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_HealPkmn
# 118 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_PkmnCenterNurse_Goodbye
# 119 "data/scripts/pkmn_center_nurse.pory"
	end
# 120 "data/scripts/pkmn_center_nurse.pory"

# 121 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_Goodbye::
# 122 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 123 "data/scripts/pkmn_center_nurse.pory"
	return
# 124 "data/scripts/pkmn_center_nurse.pory"

# 125 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card; jumps are identical
# 126 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_HealPkmn::
# 127 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 128 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 0, EventScript_PkmnCenterNurse_IllTakeYourPkmn
# 129 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_IllTakeYourPkmn2
# 130 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 131 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 132 "data/scripts/pkmn_center_nurse.pory"
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_CheckPokerus
# 133 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 134 "data/scripts/pkmn_center_nurse.pory"
	end
# 135 "data/scripts/pkmn_center_nurse.pory"

# 136 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn::
# 137 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn
# 138 "data/scripts/pkmn_center_nurse.pory"
	return
# 139 "data/scripts/pkmn_center_nurse.pory"

# 140 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn2::
# 141 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn2
# 142 "data/scripts/pkmn_center_nurse.pory"
	return
# 143 "data/scripts/pkmn_center_nurse.pory"

# 144 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_TakeAndHealPkmn::
# 145 "data/scripts/pkmn_center_nurse.pory"
	hidefollower 0
# 146 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkLeft
# 147 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 148 "data/scripts/pkmn_center_nurse.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 149 "data/scripts/pkmn_center_nurse.pory"
.if OW_UNION_DISABLE_CHECK == FALSE && OW_FLAG_MOVE_UNION_ROOM_CHECK != 0
# 150 "data/scripts/pkmn_center_nurse.pory"
	setflag OW_FLAG_MOVE_UNION_ROOM_CHECK
# 151 "data/scripts/pkmn_center_nurse.pory"
	call CableClub_OnResume
# 152 "data/scripts/pkmn_center_nurse.pory"
	clearflag OW_FLAG_MOVE_UNION_ROOM_CHECK
# 153 "data/scripts/pkmn_center_nurse.pory"
.endif
# 154 "data/scripts/pkmn_center_nurse.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 155 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkRight
# 156 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 157 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceFasterDown
# 158 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 159 "data/scripts/pkmn_center_nurse.pory"
	special HealPlayerParty
# 160 "data/scripts/pkmn_center_nurse.pory"
	callnative UpdateFollowingPokemon
# 161 "data/scripts/pkmn_center_nurse.pory"
	return
# 162 "data/scripts/pkmn_center_nurse.pory"

# 163 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom::
# 164 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, PlayerNotAtTrainerHillEntrance
# 165 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 166 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, BufferUnionRoomPlayerName
# 167 "data/scripts/pkmn_center_nurse.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 168 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 169 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 1, EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom
# 170 "data/scripts/pkmn_center_nurse.pory"
	end
# 171 "data/scripts/pkmn_center_nurse.pory"

# 172 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card
# 173 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn::
# 174 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_ReturnPkmn2
# 175 "data/scripts/pkmn_center_nurse.pory"
	message gText_RestoredPkmnToFullHealth
# 176 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 177 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 178 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 179 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 180 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 181 "data/scripts/pkmn_center_nurse.pory"
	return
# 182 "data/scripts/pkmn_center_nurse.pory"

# 183 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn2::
# 184 "data/scripts/pkmn_center_nurse.pory"
	message gText_ThankYouForWaiting
# 185 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 186 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 187 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 188 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 189 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 190 "data/scripts/pkmn_center_nurse.pory"
	return
# 191 "data/scripts/pkmn_center_nurse.pory"

# 192 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom::
# 193 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_UNION_ROOM_REMINDER, EventScript_PkmnCenterNurse_ReturnPkmn
# 194 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_RestoredPkmnToFullHealth, MSGBOX_DEFAULT
# 195 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
# 196 "data/scripts/pkmn_center_nurse.pory"
	message CableClub_Text_PlayerIsWaiting
# 197 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 198 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 199 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 200 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 201 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 202 "data/scripts/pkmn_center_nurse.pory"
	return
# 203 "data/scripts/pkmn_center_nurse.pory"

# 204 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_CheckPokerus::
# 205 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, IsPokerusInParty
# 206 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_PkmnCenterNurse_ExplainPokerus
# 207 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 208 "data/scripts/pkmn_center_nurse.pory"
	end
# 209 "data/scripts/pkmn_center_nurse.pory"

# 210 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ExplainPokerus::
# 211 "data/scripts/pkmn_center_nurse.pory"
	message gText_PokerusExplanation
# 212 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_POKERUS_EXPLAINED
# 213 "data/scripts/pkmn_center_nurse.pory"
	return
# 214 "data/scripts/pkmn_center_nurse.pory"

# 215 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCard::
# 216 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_MENTIONS_GOLD_CARD, EventScript_PkmnCenterNurse_AskForUsual
# 217 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_MENTIONS_GOLD_CARD
# 218 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WelcomeCutShort, MSGBOX_DEFAULT
# 219 "data/scripts/pkmn_center_nurse.pory"
	playse SE_PIN
# 220 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_ExclamationMark
# 221 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 222 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_Delay48
# 223 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 224 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_NoticesGoldCard, MSGBOX_YESNO
# 225 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 226 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 227 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 228 "data/scripts/pkmn_center_nurse.pory"
	return
# 229 "data/scripts/pkmn_center_nurse.pory"

# 230 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_AskForUsual::
# 231 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_YouWantTheUsual, MSGBOX_YESNO
# 232 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 233 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 234 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 235 "data/scripts/pkmn_center_nurse.pory"
	return
# 236 "data/scripts/pkmn_center_nurse.pory"

# 237 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCardHealPkmn::
# 238 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 1
# 239 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_HealPkmn
# 240 "data/scripts/pkmn_center_nurse.pory"
	end
# 241 "data/scripts/pkmn_center_nurse.pory"

# 242 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Bow:
# 243 "data/scripts/pkmn_center_nurse.pory"
	nurse_joy_bow
# 244 "data/scripts/pkmn_center_nurse.pory"
	delay_4
# 245 "data/scripts/pkmn_center_nurse.pory"
	step_end
# 246 "data/scripts/pkmn_center_nurse.pory"

# 247 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Turn:
# 248 "data/scripts/pkmn_center_nurse.pory"
	walk_in_place_faster_left
# 249 "data/scripts/pkmn_center_nurse.pory"
	step_end
# 250 "data/scripts/pkmn_center_nurse.pory"

# 251 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenter_Clerk_1::
# 252 "data/scripts/pkmn_center_nurse.pory"
	lock
# 253 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 254 "data/scripts/pkmn_center_nurse.pory"
	playbgm MUS_POKE_MART, FALSE
# 255 "data/scripts/pkmn_center_nurse.pory"
	message gText_HowMayIServeYou
# 256 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 257 "data/scripts/pkmn_center_nurse.pory"
	pokemart 0
# 258 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 259 "data/scripts/pkmn_center_nurse.pory"
	fadeoutbgm 0
# 260 "data/scripts/pkmn_center_nurse.pory"
	playbgm MUS_POKE_CENTER, FALSE
# 261 "data/scripts/pkmn_center_nurse.pory"
	end
# 262 "data/scripts/pkmn_center_nurse.pory"

# 263 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenter_Clerk_2::
# 264 "data/scripts/pkmn_center_nurse.pory"
	lock
# 265 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 266 "data/scripts/pkmn_center_nurse.pory"
	playbgm MUS_POKE_MART, FALSE
# 267 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_SECONDMART
# 268 "data/scripts/pkmn_center_nurse.pory"
	message gText_HowMayIServeYou
# 269 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 270 "data/scripts/pkmn_center_nurse.pory"
	pokemart 0
# 271 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 272 "data/scripts/pkmn_center_nurse.pory"
	clearflag FLAG_SECONDMART
# 273 "data/scripts/pkmn_center_nurse.pory"
	fadeoutbgm 0
# 274 "data/scripts/pkmn_center_nurse.pory"
	playbgm MUS_POKE_CENTER, FALSE
# 275 "data/scripts/pkmn_center_nurse.pory"
	end

Common_EventScript_TraditionalPkmnCenterNurse_Text_0:
# 46 "data/scripts/pkmn_center_nurse.pory"
	.string "Comfey…$"

Common_EventScript_TraditionalPkmnCenterNurse_Text_1:
# 51 "data/scripts/pkmn_center_nurse.pory"
	.string "Chansey…$"

Common_EventScript_Comfey_Text_0:
# 77 "data/scripts/pkmn_center_nurse.pory"
	.string "¡Comfey!$"

Common_EventScript_Chansey_Text_0:
# 85 "data/scripts/pkmn_center_nurse.pory"
	.string "¡Chansey!$"
