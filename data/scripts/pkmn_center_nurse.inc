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
	end

Common_EventScript_PkmnCenterNursePlaceholder_2:
# 9 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_CheckPokerus
	goto Common_EventScript_PkmnCenterNursePlaceholder_1


Common_EventScript_TraditionalPkmnCenterNurse::
# 16 "data/scripts/pkmn_center_nurse.pory"
	lock
# 17 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 18 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 0
# 23 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 24 "data/scripts/pkmn_center_nurse.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_TraditionalPkmnCenterNurse_2
# 48 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_Goodbye
Common_EventScript_TraditionalPkmnCenterNurse_1:
# 50 "data/scripts/pkmn_center_nurse.pory"
	releaseall
	end

Common_EventScript_TraditionalPkmnCenterNurse_2:
# 25 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 26 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_IllTakeYourPkmn
# 27 "data/scripts/pkmn_center_nurse.pory"
	hidefollower 0
# 28 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceLeft
# 29 "data/scripts/pkmn_center_nurse.pory"
	msgbox Common_EventScript_TraditionalPkmnCenterNurse_Text_0
# 30 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 31 "data/scripts/pkmn_center_nurse.pory"
	playmoncry SPECIES_COMFEY, CRY_MODE_NORMAL
# 32 "data/scripts/pkmn_center_nurse.pory"
	waitmoncry
# 33 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceRight
# 34 "data/scripts/pkmn_center_nurse.pory"
	msgbox Common_EventScript_TraditionalPkmnCenterNurse_Text_1
# 35 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 36 "data/scripts/pkmn_center_nurse.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 37 "data/scripts/pkmn_center_nurse.pory"
	waitmoncry
# 38 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceDown
# 39 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_HealPokemonTraditionally
# 40 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 41 "data/scripts/pkmn_center_nurse.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 42 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set ! FLAG_POKERUS_EXPLAINED, Common_EventScript_TraditionalPkmnCenterNurse_6
Common_EventScript_TraditionalPkmnCenterNurse_5:
# 45 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_ReturnPkmn
	goto Common_EventScript_TraditionalPkmnCenterNurse_1

Common_EventScript_TraditionalPkmnCenterNurse_6:
# 43 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_CheckPokerus
	goto Common_EventScript_TraditionalPkmnCenterNurse_5


Common_EventScript_Comfey::
# 55 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 56 "data/scripts/pkmn_center_nurse.pory"
	lockall
# 57 "data/scripts/pkmn_center_nurse.pory"
	playmoncry SPECIES_COMFEY, CRY_MODE_NORMAL
# 58 "data/scripts/pkmn_center_nurse.pory"
	waitmoncry
# 59 "data/scripts/pkmn_center_nurse.pory"
	msgbox Common_EventScript_Comfey_Text_0
# 60 "data/scripts/pkmn_center_nurse.pory"
	releaseall
	return


Common_EventScript_Chansey::
# 63 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 64 "data/scripts/pkmn_center_nurse.pory"
	lockall
# 65 "data/scripts/pkmn_center_nurse.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 66 "data/scripts/pkmn_center_nurse.pory"
	waitmoncry
# 67 "data/scripts/pkmn_center_nurse.pory"
	msgbox Common_EventScript_Chansey_Text_0
# 68 "data/scripts/pkmn_center_nurse.pory"
	releaseall
	return


# 91 "data/scripts/pkmn_center_nurse.pory"

# 92 "data/scripts/pkmn_center_nurse.pory"
Common_EventScript_PkmnCenterNurse::
# 93 "data/scripts/pkmn_center_nurse.pory"
	lock
# 94 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 95 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 0
# 96 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, CountPlayerTrainerStars
# 97 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 4, EventScript_PkmnCenterNurse_GoldCard
# 98 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 99 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_HealPkmn
# 100 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_PkmnCenterNurse_Goodbye
# 101 "data/scripts/pkmn_center_nurse.pory"
	end
# 102 "data/scripts/pkmn_center_nurse.pory"

# 103 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_Goodbye::
# 104 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 105 "data/scripts/pkmn_center_nurse.pory"
	return
# 106 "data/scripts/pkmn_center_nurse.pory"

# 107 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card; jumps are identical
# 108 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_HealPkmn::
# 109 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 110 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 0, EventScript_PkmnCenterNurse_IllTakeYourPkmn
# 111 "data/scripts/pkmn_center_nurse.pory"
	call_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_IllTakeYourPkmn2
# 112 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 113 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 114 "data/scripts/pkmn_center_nurse.pory"
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_CheckPokerus
# 115 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 116 "data/scripts/pkmn_center_nurse.pory"
	end
# 117 "data/scripts/pkmn_center_nurse.pory"

# 118 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn::
# 119 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn
# 120 "data/scripts/pkmn_center_nurse.pory"
	return
# 121 "data/scripts/pkmn_center_nurse.pory"

# 122 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_IllTakeYourPkmn2::
# 123 "data/scripts/pkmn_center_nurse.pory"
	message gText_IllTakeYourPkmn2
# 124 "data/scripts/pkmn_center_nurse.pory"
	return
# 125 "data/scripts/pkmn_center_nurse.pory"

# 126 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_TakeAndHealPkmn::
# 127 "data/scripts/pkmn_center_nurse.pory"
	hidefollower 0
# 128 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Turn
# 129 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 130 "data/scripts/pkmn_center_nurse.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 131 "data/scripts/pkmn_center_nurse.pory"
.if OW_UNION_DISABLE_CHECK == FALSE && OW_FLAG_MOVE_UNION_ROOM_CHECK != 0
# 132 "data/scripts/pkmn_center_nurse.pory"
	setflag OW_FLAG_MOVE_UNION_ROOM_CHECK
# 133 "data/scripts/pkmn_center_nurse.pory"
	call CableClub_OnResume
# 134 "data/scripts/pkmn_center_nurse.pory"
	clearflag OW_FLAG_MOVE_UNION_ROOM_CHECK
# 135 "data/scripts/pkmn_center_nurse.pory"
.endif
# 136 "data/scripts/pkmn_center_nurse.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 137 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceFasterDown
# 138 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 139 "data/scripts/pkmn_center_nurse.pory"
	special HealPlayerParty
# 140 "data/scripts/pkmn_center_nurse.pory"
	callnative UpdateFollowingPokemon
# 141 "data/scripts/pkmn_center_nurse.pory"
	return
# 142 "data/scripts/pkmn_center_nurse.pory"

# 143 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom::
# 144 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, PlayerNotAtTrainerHillEntrance
# 145 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 146 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, BufferUnionRoomPlayerName
# 147 "data/scripts/pkmn_center_nurse.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 148 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 149 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 1, EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom
# 150 "data/scripts/pkmn_center_nurse.pory"
	end
# 151 "data/scripts/pkmn_center_nurse.pory"

# 152 "data/scripts/pkmn_center_nurse.pory"
@ VAR_0x8004 is 1 when player has Gold Card
# 153 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn::
# 154 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_ReturnPkmn2
# 155 "data/scripts/pkmn_center_nurse.pory"
	message gText_RestoredPkmnToFullHealth
# 156 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 157 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 158 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 159 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 160 "data/scripts/pkmn_center_nurse.pory"
	return
# 161 "data/scripts/pkmn_center_nurse.pory"

# 162 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ReturnPkmn2::
# 163 "data/scripts/pkmn_center_nurse.pory"
	message gText_ThankYouForWaiting
# 164 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 165 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 166 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 167 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 168 "data/scripts/pkmn_center_nurse.pory"
	return
# 169 "data/scripts/pkmn_center_nurse.pory"

# 170 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom::
# 171 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_UNION_ROOM_REMINDER, EventScript_PkmnCenterNurse_ReturnPkmn
# 172 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_RestoredPkmnToFullHealth, MSGBOX_DEFAULT
# 173 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
# 174 "data/scripts/pkmn_center_nurse.pory"
	message CableClub_Text_PlayerIsWaiting
# 175 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 176 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
# 177 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 178 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain
# 179 "data/scripts/pkmn_center_nurse.pory"
	return
# 180 "data/scripts/pkmn_center_nurse.pory"

# 181 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_CheckPokerus::
# 182 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, IsPokerusInParty
# 183 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_PkmnCenterNurse_ExplainPokerus
# 184 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom
# 185 "data/scripts/pkmn_center_nurse.pory"
	end
# 186 "data/scripts/pkmn_center_nurse.pory"

# 187 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_ExplainPokerus::
# 188 "data/scripts/pkmn_center_nurse.pory"
	message gText_PokerusExplanation
# 189 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_POKERUS_EXPLAINED
# 190 "data/scripts/pkmn_center_nurse.pory"
	return
# 191 "data/scripts/pkmn_center_nurse.pory"

# 192 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCard::
# 193 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_NURSE_MENTIONS_GOLD_CARD, EventScript_PkmnCenterNurse_AskForUsual
# 194 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_NURSE_MENTIONS_GOLD_CARD
# 195 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_WelcomeCutShort, MSGBOX_DEFAULT
# 196 "data/scripts/pkmn_center_nurse.pory"
	playse SE_PIN
# 197 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_ExclamationMark
# 198 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 199 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_0x800B, Common_Movement_Delay48
# 200 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 201 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_NoticesGoldCard, MSGBOX_YESNO
# 202 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 203 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 204 "data/scripts/pkmn_center_nurse.pory"
	return
# 205 "data/scripts/pkmn_center_nurse.pory"

# 206 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_AskForUsual::
# 207 "data/scripts/pkmn_center_nurse.pory"
	msgbox gText_YouWantTheUsual, MSGBOX_YESNO
# 208 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
# 209 "data/scripts/pkmn_center_nurse.pory"
	message gText_WeHopeToSeeYouAgain2
# 210 "data/scripts/pkmn_center_nurse.pory"
	return
# 211 "data/scripts/pkmn_center_nurse.pory"

# 212 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_GoldCardHealPkmn::
# 213 "data/scripts/pkmn_center_nurse.pory"
	setvar VAR_0x8004, 1
# 214 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_HealPkmn
# 215 "data/scripts/pkmn_center_nurse.pory"
	end
# 216 "data/scripts/pkmn_center_nurse.pory"

# 217 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Bow:
# 218 "data/scripts/pkmn_center_nurse.pory"
	nurse_joy_bow
# 219 "data/scripts/pkmn_center_nurse.pory"
	delay_4
# 220 "data/scripts/pkmn_center_nurse.pory"
	step_end
# 221 "data/scripts/pkmn_center_nurse.pory"

# 222 "data/scripts/pkmn_center_nurse.pory"
Movement_PkmnCenterNurse_Turn:
# 223 "data/scripts/pkmn_center_nurse.pory"
	walk_in_place_faster_left
# 224 "data/scripts/pkmn_center_nurse.pory"
	step_end
# 225 "data/scripts/pkmn_center_nurse.pory"

# 226 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenter_Clerk_1::
# 227 "data/scripts/pkmn_center_nurse.pory"
	lock
# 228 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 229 "data/scripts/pkmn_center_nurse.pory"
	message gText_HowMayIServeYou
# 230 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 231 "data/scripts/pkmn_center_nurse.pory"
	pokemart 0
# 232 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 233 "data/scripts/pkmn_center_nurse.pory"
	end
# 234 "data/scripts/pkmn_center_nurse.pory"

# 235 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenter_Clerk_2::
# 236 "data/scripts/pkmn_center_nurse.pory"
	lock
# 237 "data/scripts/pkmn_center_nurse.pory"
	faceplayer
# 238 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_SECONDMART
# 239 "data/scripts/pkmn_center_nurse.pory"
	message gText_HowMayIServeYou
# 240 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 241 "data/scripts/pkmn_center_nurse.pory"
	pokemart 0
# 242 "data/scripts/pkmn_center_nurse.pory"
	closemessage
# 243 "data/scripts/pkmn_center_nurse.pory"
	clearflag FLAG_SECONDMART
# 244 "data/scripts/pkmn_center_nurse.pory"
	end

Common_EventScript_TraditionalPkmnCenterNurse_Text_0:
# 29 "data/scripts/pkmn_center_nurse.pory"
	.string "Comfey…$"

Common_EventScript_TraditionalPkmnCenterNurse_Text_1:
# 34 "data/scripts/pkmn_center_nurse.pory"
	.string "Chansey…$"

Common_EventScript_Comfey_Text_0:
# 59 "data/scripts/pkmn_center_nurse.pory"
	.string "¡Comfey!$"

Common_EventScript_Chansey_Text_0:
# 67 "data/scripts/pkmn_center_nurse.pory"
	.string "¡Chansey!$"
